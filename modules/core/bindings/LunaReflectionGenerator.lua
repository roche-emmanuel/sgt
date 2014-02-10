
local oo = require "loop.cached"

local Object = require "base.Object"

local IScopeStack = require "reflection.IScopeStack"

local ReflectionMap = require "bindings.ReflectionMap"
local Scope = require "reflection.Scope"
local Class = require "reflection.Class"
local Function = require "reflection.Function"
local Namespace = require "reflection.Namespace"
local Enum = require "reflection.Enum"
local EnumValue = require "reflection.EnumValue"
local Variable = require "reflection.Variable"
local Parameter = require "reflection.Parameter"
local Type = require "reflection.Type"
local Value = require "reflection.Value"
local Define = require "reflection.Define"
local ItemLink = require "reflection.ItemLink"
local Map = require "std.Map"
local Set = require "std.Set"
local Vector = require "std.Vector"
local IteratorHandler = require "bindings.IteratorHandler"
local SectionHandler = require "bindings.SectionHandler"
local MemberWriter = require "bindings.MemberWriter"
local tm = require "bindings.TypeManager"
local im = require "bindings.IgnoreManager"

local log = require "logger"

local dbg = require "debugger"

require "doxmlparser" -- The xml parser.

local dxp = doxmlparser

--[[
local ReflectionGenerator = require("classBuilder"){
	name="ReflectionGenerator",
	bases={"base.Object","reflection.IScopeStack","bindings.IteratorHandler"}
};
]]

local ReflectionGenerator = oo.class({},Object,IScopeStack,IteratorHandler)

ReflectionGenerator.CLASS_NAME = "bindings.ReflectionGenerator"

function ReflectionGenerator:__init(datamap)
    local object = Object:__init({})
    object = IScopeStack:__init(object)
    object = oo.rawnew(self,object)
    object._TRACE_ = "ReflectionGenerator"
    
    object.reflectionMap = datamap
    object.currentScope = Vector();
    object.compoundMap = Map();
    object.ignoreGlobalFuncsPatterns = Set();
    object.ignoreClassFunctionsPatterns = Map()       
    object.locationPrefixes = Set()
    
    return object
end

--[[
function ReflectionGenerator:initialize(datamap)
    self.reflectionMap = datamap
    self.currentScope = Vector();
    self.compoundMap = Map();
    self.ignoreGlobalFuncsPatterns = Set();
    self.ignoreClassFunctionsPatterns = Map()       
    self.locationPrefixes = Set()
end
]]

function ReflectionGenerator:getLocationPrefixes()
	return self.locationPrefixes;
end

--- used to create a single copy of each compound class.
function ReflectionGenerator:getOrCreateObject(comp,objectClass,...)
    --log:info("Get or create class for id=",comp:id():latin1())
    local id = comp:id():latin1()
    --local id = comp:name():latin1()
    
    local obj = self.compoundMap:get(id)
    if not obj then
        obj = objectClass(...)
        obj:setName(comp:name():latin1())
		local prot = comp:protection():latin1()
		if prot ~= "" then
			self:notice("Found protection ", prot, " for compound ", obj:getName())
			obj:setSection(comp:protection():latin1())
		end
        self.compoundMap:set(id,obj)
    end
    
    --log:info("Done get or create class for ",comp:name():latin1())
    --log:info("Done get or create class for ",obj:getName())
    return obj;
end

function ReflectionGenerator:processFile(comp)
    -- assume the given compound is a class.
    comp = dxp.toFile(comp) --:dynamicCast("IFile")
	
	local filename = comp:name():latin1()
	self:check(filename,"Invalid filename retrieved.")
	if im:ignore(filename,"file") then
		self:notice("Ignoring file ",filename," on user request.")
		return;
	end
    
    self:pushScope(self.reflectionMap:getGlobalNamespace())
    self:processSections(comp)
    --self:processChildren(comp) --processing nested compounds in IFile seems to mess everything ??
    self:popScope()
end

function ReflectionGenerator:processNamespace(comp)
    -- assume the given compound is a class.
    comp = dxp.toNamespace(comp) --:dynamicCast("INamespace")
    
    -- create a new class scope in the current scope:    
    local scope = self:getOrCreateObject(comp,Namespace)
    
    local parent = self:getCurrentScope()
    --log:warn("Adding namesapce ".. scope:getFullName() .. " to parent ".. parent:getFullName())
    
    parent:addSubScope(scope)
    
    dbg:assert(parent:getSubScopes():contains(scope),"parent doesn't contain child!")
    
    -- now push this class as current scope:
    self:pushScope(scope)
    
    self:processSections(comp)
    self:processChildren(comp)
    
    self:popScope()
end

function ReflectionGenerator:readParameter(param)
	local pname = param:declarationName():latin1() 
    
    local links = self:generateItemLinks(param:defaultValue())
    local pdef = nil
    if links then
    	pdef = Value{links=links}
    end
    links = self:generateItemLinks(param:type())
	local ptype = Type{links=links}
	
	return Parameter{type=ptype,name=pname,defVal=pdef};
end

function ReflectionGenerator:getHeaderFileName(location)
	for k,prefix in self.locationPrefixes:sequence() do
		--log:warn("Checking location=",location," against prefix=", prefix)
		local p1, p2 = location:find(prefix)
		if p2 then
			location = location:sub(p2+1) 
		end
	end
	
	-- remove all paths prefix ending with include/
	local p1, p2 = location:find("include/")
	if p2 then
		return location:sub(p2+1)
	end
	
	return location
end

function ReflectionGenerator:processClass(comp)
    -- assume the given compound is a class.
    -- create a new class scope in the current scope:    
    --log:notice("Before dynamicCast...")
    local comp = dxp.toClass(comp) --:dynamicCast("IClass")
    --log:notice("After dynamicCast...")
        
    local class = self:getOrCreateObject(comp,Class)
    
	self:check(class and self:isInstanceOf(require"reflection.Class",class),"Invalid class object.");
	
    if class:isIgnored() then
        log:notice("Ignoring class ".. class:getName() .. " on user request.")
        return;
    end

	-- This is not working yet: no protection status on the class or compound objects.
	--if comp:protection() ~= dxp.IRelatedCompound.Public then
    --    log:notice("Ignoring non public class ".. class:getName() .. ".")
    --    return;	
	--end
	
	
	local desc = comp:detailedDescription()
	
	local extmod = self:extractFromDesc(desc and desc:contents(),"LUNA_EXTERNAL%s+([^%s]+)")
	
	if extmod then
		class:setModule(extmod)
	end
	
    local parent = self:getCurrentScope()
    
	parent:addSubScope(class)
	
	-- retrieve the location of that class:
	local location = self:getHeaderFileName(comp:locationFile():latin1()) 
	
	class:setHeaderFile(location)
	
    -- now push this class as current scope:
    self:pushScope(class)

    local name = comp:name():latin1()
    --class:setName(name) -- this is already called in getOrCreateObject().
            
    local bli = comp:baseCompounds();
    bli:toFirst();
    local bcomp = bli:current()
    while(bcomp) do
        -- bcom is an IRelatedCompounf
        if bcomp:protection() == dxp.IRelatedCompound.Public then
            local base = self:getOrCreateObject(bcomp:compound(),Class)
            if base:isIgnored() then
                log:info("Ignoring base class ".. base:getName() .. " on user request.")
            else
				local spec = bcomp:name();
                class:addBase(base,spec)
                log:info("Found base ".. base:getName() .. " for class ".. class:getName())            
            end
        end
        
        bli:toNext();
        bcomp = bli:current();
    end
    
    bli:release();
    
    -- process the template parameters:
    local pi = comp:templateParameters()
    if pi then
        pi:toFirst();
        local param = pi:current()
        
        while(param) do
			local p = self:readParameter(param)
            class:addTemplateParameter(p)
            
            pi:toNext()
            param=pi:current()
        end
        
        pi:release()
    end
	
	
    self:processSections(comp)
    self:processChildren(comp)
    
    self:popScope()
end

function ReflectionGenerator:ignoreFunction(scope,fname)
    if scope:getScopeType() == Scope.CLASS then
        -- check if we should ignore the member function:
        local ignored = self.ignoreClassFunctionsPatterns:get(scope:getName())
        if ignored then
            for _,v in ignored:sequence() do
                if fname:find(v) then
                    return true
                end
            end
        end
    elseif scope:getScopeType() == Scope.NAMESPACE then
        local ignored = self.ignoreGlobalFuncsPatterns
        for _,v in ignored:sequence() do
            if fname:find(v) then
                return true
            end
        end
    end
    
    return false;
end

function ReflectionGenerator:getOrCreateCompound(comp)
    if (comp:kind()==dxp.ICompound.Class or comp:kind()==dxp.ICompound.Struct or comp:kind()==dxp.ICompound.Interface) then 
        return self:getOrCreateObject(comp,Class)
    elseif (comp:kind()==dxp.ICompound.Namespace) then
        return self:getOrCreateObject(comp,Namespace)
    elseif (comp:kind()==dxp.ICompound.Union) then
    	--return self:getOrCreateObject(comp,Class)
    	log:error("Ignoring Union " .. comp:name():latin1())
		return nil
    else
        log:error("Cannot create component mapping for kind: " .. comp:kind())
    end
end

function ReflectionGenerator:isClassTypedef(mem)
	if not mem or mem:kind()~=dxp.IMember.Typedef then
		return false;
	end
	
	-- iterate on the items looking for the template symbol "<"
	local lti = mem:type()
	
	lti:toFirst()
    local item = lti:current()
    if not item then
        lti:release()
        return false
    end
    
    
    while(item) do
        if item:kind() == dxp.ILinkedText.Kind_Text then
        	item = dxp.toLinkText(item) 
            local name = item:text():latin1()
			if name:find("<") then
				self:notice("Considering typedef ", mem:name():latin1(), " as class.")
				lti:release()
				return true;
			end
		end
		
        lti:toNext()
        item = lti:current()
	end
	
	lti:release()
	return false;
end

function ReflectionGenerator:getOrCreateMember(mem)
    if (mem:kind()==dxp.IMember.Enum) then 
        return self:getOrCreateObject(mem,Enum)
    elseif (mem:kind()==dxp.IMember.Variable) then
        return self:getOrCreateObject(mem,Variable)
    elseif (mem:kind()==dxp.IMember.EnumValue) then
        return self:getOrCreateObject(mem,EnumValue)
    elseif (mem:kind()==dxp.IMember.Define) then
        return nil -- just consider Define values as plain text!    
    elseif (mem:kind()==dxp.IMember.Friend) then
    	log:notice("Ignoring Friend relationship member for ".. mem:name():latin1())
        return nil -- just consider Define values as plain text!
    elseif (mem:kind()==dxp.IMember.Function) then
    	log:notice("Ignoring Function member for ".. mem:name():latin1())
        return nil -- just consider Define values as plain text!
    
        --return self:getOrCreateObject(mem,Define)
    elseif self:isClassTypedef(mem) then
        return self:getOrCreateObject(mem,Class)
    else
        log:error("Cannot create member mapping for kind: " .. mem:kind())
    end
end

function ReflectionGenerator:generateItemLinks(lti,count,tname,parentId)
    count = count or 0
    if count > 1000 then
    	self:error("Detected infinite recursion loop in generateItemLinks() for member: ",tname)
    	return
    end
    
    lti:toFirst()
    local item = lti:current()
    if not item then
        lti:release()
        return
    end
    
    local result = Vector()
    
    while(item) do
        if item:kind() == dxp.ILinkedText.Kind_Text then
            item = dxp.toLinkText(item) --:dynamicCast("ILT_Text")
            local name = item:text():latin1()
            local link = ItemLink(name)
            result:push_back(link)
        elseif item:kind() == dxp.ILinkedText.Kind_Ref then
            item = dxp.toLinkRef(item) --:dynamicCast("ILT_Ref")
            local id = item:id():latin1()
            local target = item:targetKind() -- TargetKind { Member, Compound };
            
            local object = nil;
            local subtypes = nil;
            
            if target==dxp.ILT_Ref.Compound then
                local comp = self.doxygen:compoundById(id) 
                object = self:getOrCreateCompound(comp)
            else
                local comp = self.doxygen:memberById(id)
                local mem = comp:memberById(id)
	            
	            local name = item:text():latin1()
	            
	            if not mem then
                	-- try retrieving the parent enum if applicable:
                	local enumId = id:sub(1,#id-33)
                	
                	local enum = comp:memberById(enumId)
                	if enum then
                		--log:warn("Found enum parent for member ".. name .." with id="..id)
                		-- iterate on the enumvalues:
                		local list = dxp.toEnum(enum):enumValues()
                		list:toFirst()
        		        local eval = list:current()
        
				        while(eval) do
				        	if(eval:id():latin1() == id) then
				        		mem = eval; -- assign the member value.
				        		break;
				        	end
				            
				            list:toNext()
				            eval=list:current()
				        end
				        
				        list:release()
                	else
                		log:warn("Could NOT find enum parent for member ".. name .." with id="..id)
                		log:warn("Component is: " .. (comp and (comp:name():latin1() .. " with cid=" .. comp:id():latin1()) or "NIL"))
                		
                		local handler = SectionHandler(MemberWriter())
                		self:foreachIterator(comp:sections(),handler,comp)
                		
                		-- return an int string in the worst case.
                		subtypes = Vector()
                		subtypes:push_back(ItemLink("int"))
                	end
                	
                	
				end
				
				--[[if not mem then
		            log:warn("Trying to retrieve member by name for ".. name .. " with id="..id)
                	local list = comp:memberByName(name)
                	if list then
	                	list:toFirst()
	    				mem = list:current()
	    				list:release()
    				end
	            end]]
	            
                if not mem then    				
                    log:warn("Cannot retrieve the member corresponding to link ref ".. name .." with id="..id)
                else
                	--[[local memid = mem:id():latin1()
                	if id == memid then
                		-- this is the same member! a typedef cannot reference itself. so this must be a 
                		-- doxygen parsing error, and we just return the name of that member instead:
                		subtypes = Vector()
                		log:warn("using link object name: ".. mem:name():latin1())
                		subtypes:push_back(ItemLink(ItemLink.STRING,mem:name():latin1()))
                	else
                	]]
                	if mem:kind()==dxp.IMember.Typedef then
						log:notice("Current typedef id: ", id)
						log:notice("Current typedef parent id: ", parentId)
                		if id == parentId then
							log:notice("Breaking recursive loop on typedef ".. mem:name():latin1() .. " definition.")
							subtypes = Vector()
							subtypes:push_back(ItemLink(mem:name():latin1()))
                		elseif self:isClassTypedef(mem) then
                			object = self:getOrCreateMember(mem)
						else
	                		log:info("Reading sub item links for member ".. mem:name():latin1() .. " in compound " .. comp:name():latin1())
	                		subtypes = self:generateItemLinks(mem:type(),count+1,mem:name():latin1(),id);
							if mem:argsstring():latin1() ~= "" then
								subtypes:push_back(ItemLink(mem:argsstring():latin1()))
							end
                		end
                	else
                    	object = self:getOrCreateMember(mem)
                    end
                end
            end
            
            if object then
                result:push_back(ItemLink(object))
            elseif subtypes then
            	for _,v in subtypes:sequence() do
            		result:push_back(v)
            	end
            else
                log:info("Could not create the member corresponding to link ref ".. item:text():latin1())
                result:push_back(ItemLink(item:text():latin1()));
            end
        end
        
        lti:toNext()
        item = lti:current()
    end
    
    lti:release()
    return result;
end

function ReflectionGenerator:extractNewName(cont) -- cont is a IDocIterator.
	if not cont then
		return;
	end
	
	cont:toFirst();
    local doc = cont:current()
        
    while(doc) do
    	--log:warn("Iterating on IDoc item.")
    	
    	local para = dxp.toDocPara(doc)
    	
    	local name = self:extractNewName(para and para:contents())
    	if name then
    		return name;
    	end
    	
        local txt = dxp.toDocText(doc)
        
        if txt then
        	local text = txt:text():latin1()
        	for name in text:gmatch("LUNA_RENAME%s+([^%s]+)") do
        	 	log:warn("Found the lua name '".. name .."'")
        		return name;
        	end
        end

        cont:toNext()
        doc=cont:current()
    end
    
    cont:release()
    return;
end

function ReflectionGenerator:getBaseIndex(cont) -- cont is a IDocIterator.
	if not cont then
		return;
	end
	
	cont:toFirst();
    local doc = cont:current()
        
    while(doc) do
    	--log:warn("Iterating on IDoc item.")
    	
    	local para = dxp.toDocPara(doc)
    	
    	local index = self:getBaseIndex(para and para:contents())
    	if index then
    		return index;
    	end
    	
        local txt = dxp.toDocText(doc)
        
        if txt then
        	local text = txt:text():latin1()
        	for index in text:gmatch("LUNA_BASE_INDEX%s+([%d]+)") do
        	 	log:warn("Found the lua base index '".. index .."'")
        		return index;
        	end
        end

        cont:toNext()
        doc=cont:current()
    end
    
    cont:release()
    return;
end


function ReflectionGenerator:extractFromDesc(cont,regex) -- cont is a IDocIterator.
	if not cont then
		return;
	end
	
	cont:toFirst();
    local doc = cont:current()
        
    while(doc) do
    	--log:warn("Iterating on IDoc item.")
    	
    	local para = dxp.toDocPara(doc)
    	
    	if para then
    		return self:extractFromDesc(para:contents(),regex)
    	end
    	
        local txt = dxp.toDocText(doc)
        
        if txt then
        	local text = txt:text():latin1()
        	for result in text:gmatch(regex) do
        	 	--log:warn("Found the lua base index '".. index .."'")
        		return result;
        	end
        end

        cont:toNext()
        doc=cont:current()
    end
    
    cont:release()
    return;
end

function ReflectionGenerator:isLunaExtension(cont) -- cont is a IDocIterator.
	if not cont then
		return false;
	end
	
	cont:toFirst();
    local doc = cont:current()
        
    while(doc) do
    	--log:warn("Iterating on IDoc item.")
    	
    	local para = dxp.toDocPara(doc)
    	
    	if para and self:isLunaExtension(para:contents()) then
    		return true;
    	end
    	
        local txt = dxp.toDocText(doc)
        
        if txt then
        	local text = txt:text():latin1() 
        	if text:find("LUNA_CLASS_EXTENSION") then
        		--log:warn("Found tag in text: '".. text.."'")
        		return true;
        	end
        end

        cont:toNext()
        doc=cont:current()
    end
    
    cont:release()
    return false;
end

function ReflectionGenerator:addScopeFunction(scope,mem)
    local fname = mem:name():latin1()
    local ignoreThisFunc = self:ignoreFunction(scope,fname);
                
    if ignoreThisFunc then
        log:info ("- Ignoring method ".. fname .. " on user request.")
        return
    end
    
    log:info ("- method ".. fname)
    
    local func = self:getOrCreateObject(mem,Function)
    --func:setName(fname)                

    -- retrieve the details concerning the function:
    local rtype = self:generateItemLinks(mem:type())
    if rtype then
        func:setReturnType(Type{links=rtype})
    else
        log:info("Invalid return type for function ".. fname .. " in scope ".. scope:getName())
        --func:setReturnType()
    end
    
    local location = self:getHeaderFileName(mem:definitionFile():latin1())
    func:setHeaderFile(location)
    
    func:setConstness(mem:isConst())
    func:setStatic(mem:isStatic())
    func:setAbstract(mem:argsstring():latin1():find("=0$")~=nil)
    func:setVirtual(mem:virtualness():latin1()~="non-virtual")
    func:setSection(mem:protection():latin1())
    func:setArgsString(mem:argsstring():latin1())
    
    func:getParameters():clear();
    
    -- retrieve the parameters:
    local pi = mem:parameters()
    pi:toFirst();
    local param = pi:current()
        
    while(param) do
    	local p = self:readParameter(param)
    	
    	-- check if this parameter is not simply "void"
    	if not p:isNothing() then
        	func:addParameter(p)
        end
        
        pi:toNext()
        param=pi:current()
    end
    
    pi:release()
    
    -- retrieve the template parameters:
    local pi = mem:templateParameters()
    if pi then
        pi:toFirst();
        local param = pi:current()
        
        while(param) do
        	local p = self:readParameter(param)
            func:addTemplateParameter(p)
            
            pi:toNext()
            param=pi:current()
        end
        
        pi:release()
    end

	local desc = mem:detailedDescription()
	
	-- Check if this should really be ignored:
	if self:extractFromDesc(desc and desc:contents(),"LUNA_IGNORED") then
		return -- just ignore this function.
	end
		
	-- check if this function should be renamed:
	local luaName = self:extractNewName(desc and desc:contents())
	func:setLuaName(luaName) -- may be nil.
	
    if func:getName()== "LUNA_IMPLEMENT_VECTOR" then
        self:implementVector(func)
        return;
    end

	if func:getName()== "LUNA_IMPLEMENT_LIST" then
		self:implementList(func)
		return;
	end
	
    if func:getName()== "LUNA_IMPLEMENT_MAP" then
        self:implementMap(func)
        return;
    end

	-- Now decide where to store this function:
	-- it could be a regular function or a class extension.
	-- check the detailed description to find out:	
	if not self:isLunaExtension(desc and desc:contents()) then
		scope:addFunction(func)
		return;
	end
	
	-- this is a luna extension, find the parent class as the first argument
	-- of the function:
	log:warn("Found extension function " .. func:getName());
	
	-- mark the function as an extension:
	func:setAsExtension(true)
 	
 	-- add the function to the base class in the first parameter:
 	local baseIndex = self:getBaseIndex(desc and desc:contents()) or 0;
 	
 	local btype = func:getParameters():at(baseIndex+1):getType() -- assume there are enough parameters!!!
 	-- force parsing of that type:
 	btype:parse()
 	local bclass = btype:getBase() -- we assume this is a class !!!
 	if bclass.isClass and bclass:isClass() then
 		bclass:addFunction(func);
	else
		btype:addFunction(func)
 	end
 	
    --local sig = func:getSignature(true)
    --log:info ("Function prototype is: ".. sig)
end

function ReflectionGenerator:implementVector(func)
    local params = func:getParameters()
    
    self:check(params:size()>0,"Invalid parameter list size.")
    
    local baseType = func:getParameters():at(1):getType();
    baseType:parse();
    
    self:warn("Implementing vector for type ",baseType:getName())
    
    local target = nil
    local targetType = nil
    
    if params:size() >1 then
        -- the second parameter is the type description:
        local btype = func:getParameters():at(2):getType() -- assume there are enough parameters!!!
        btype:parse()
        local bclass = btype:getBase()
        if bclass.isClass and bclass:isClass() then
            target = bclass
            targetType = bclass:asType()
        else
            target = btype
            targetType = target:clone()
        end
    else
        -- We have to create the target type ourself:
        target = Type.createFromString("std::vector< " .. baseType:getName() .. " >")
    end
    
    -- targetType:setIsReference(true) -- for referencing.
    
    -- Now we should create the vector specific functions:
    local voidType = Type.createFromString("void")
    local boolType = Type.createFromString("bool")
    local uintType = Type.createFromString("unsigned int")
    
    self:createSimpleMethod(target,voidType,"assign",uintType,baseType)
    -- self:createSimpleMethod(target,voidType,"insert",uintType,baseType) -- iterator needed.
    self:createSimpleMethod(target,baseType,"at",uintType)
    self:createSimpleMethod(target,baseType,"back")
    self:createSimpleMethod(target,baseType,"front")
    self:createSimpleMethod(target,voidType,"clear")
    self:createSimpleMethod(target,boolType,"empty")
    self:createSimpleMethod(target,uintType,"size")
    self:createSimpleMethod(target,voidType,"resize",uintType)
    self:createSimpleMethod(target,voidType,"pop_back")
    self:createSimpleMethod(target,voidType,"push_back",baseType)
    -- self:createSimpleMethod(target,voidType,"swap",targetType)
    self:createSimpleMethod(target,baseType,"operator[]",uintType)
    
end

function ReflectionGenerator:implementList(func)
    local params = func:getParameters()
    
    self:check(params:size()>0,"Invalid parameter list size.")
    
    local baseType = func:getParameters():at(1):getType();
    baseType:parse();
    
    self:warn("Implementing list for type ",baseType:getName())
    
    local target = nil
    local targetType = nil
    
    if params:size() >1 then
        -- the second parameter is the type description:
        local btype = func:getParameters():at(2):getType() -- assume there are enough parameters!!!
        btype:parse()
        local bclass = btype:getBase()
        if bclass.isClass and bclass:isClass() then
            target = bclass
            targetType = bclass:asType()
        else
            target = btype
            targetType = target:clone()
        end
    else
        -- We have to create the target type ourself:
        target = Type.createFromString("std::list< " .. baseType:getName() .. " >")
    end
    
    -- targetType:setIsReference(true) -- for referencing.
    
    -- Now we should create the list specific functions:
    local voidType = Type.createFromString("void")
    local boolType = Type.createFromString("bool")
    local uintType = Type.createFromString("unsigned int")
    
    self:createSimpleMethod(target,voidType,"assign",uintType,baseType)
    -- self:createSimpleMethod(target,voidType,"insert",uintType,baseType) -- iterator needed.
    -- self:createSimpleMethod(target,baseType,"at",uintType)
    self:createSimpleMethod(target,baseType,"back")
    self:createSimpleMethod(target,baseType,"front")
    self:createSimpleMethod(target,voidType,"clear")
    self:createSimpleMethod(target,boolType,"empty")
    self:createSimpleMethod(target,uintType,"size")
    self:createSimpleMethod(target,voidType,"resize",uintType)
    self:createSimpleMethod(target,voidType,"pop_back")
    self:createSimpleMethod(target,voidType,"push_back",baseType)
    self:createSimpleMethod(target,voidType,"pop_front")
    self:createSimpleMethod(target,voidType,"push_front",baseType)
    -- self:createSimpleMethod(target,voidType,"swap",targetType)
    -- self:createSimpleMethod(target,baseType,"operator[]",uintType)
end

function ReflectionGenerator:implementMap(func)
	local params = func:getParameters()
	
	self:check(params:size()>0,"Invalid parameter list size.")
	
    local keyType = func:getParameters():at(1):getType();
    keyType:parse();

	local baseType = func:getParameters():at(2):getType();
	baseType:parse();
	
	self:warn("Implementing list for type ",baseType:getName())
	
	local target = nil
	local targetType = nil
	
	if params:size() >1 then
		-- the second parameter is the type description:
		local btype = func:getParameters():at(3):getType() -- assume there are enough parameters!!!
		btype:parse()
		local bclass = btype:getBase()
		if bclass.isClass and bclass:isClass() then
			target = bclass
			targetType = bclass:asType()
		else
			target = btype
			targetType = target:clone()
		end
	else
		-- We have to create the target type ourself:
		target = Type.createFromString("std::map< " .. keyType:getName() .. ", " .. baseType:getName() .. " >")
	end
	
	-- targetType:setIsReference(true) -- for referencing.
	
	-- Now we should create the list specific functions:
	local voidType = Type.createFromString("void")
	local boolType = Type.createFromString("bool")
	local uintType = Type.createFromString("unsigned int")
	
	-- self:createSimpleMethod(target,voidType,"assign",uintType,baseType)
	-- self:createSimpleMethod(target,voidType,"insert",uintType,baseType) -- iterator needed.
	self:createSimpleMethod(target,baseType,"at",keyType)
	-- self:createSimpleMethod(target,baseType,"back")
	-- self:createSimpleMethod(target,baseType,"front")
	self:createSimpleMethod(target,voidType,"clear")
	self:createSimpleMethod(target,boolType,"empty")
    self:createSimpleMethod(target,uintType,"size")
    self:createSimpleMethod(target,uintType,"count",keyType)
	self:createSimpleMethod(target,voidType,"erase",keyType)
	-- self:createSimpleMethod(target,voidType,"resize",uintType)
    -- self:createSimpleMethod(target,voidType,"pop_back")
    -- self:createSimpleMethod(target,voidType,"push_back",baseType)
	-- self:createSimpleMethod(target,voidType,"pop_front")
	-- self:createSimpleMethod(target,voidType,"push_front",baseType)
	-- self:createSimpleMethod(target,voidType,"swap",targetType)
	self:createSimpleMethod(target,baseType,"operator[]",keyType)
end

function ReflectionGenerator:createSimpleMethod(targetType,returnType,fname,...)
	local func = Function()

	local args = {}
	for k,argType in ipairs({...}) do
		local param = Parameter{type=argType,name="arg"..k};
		func:getParameters():push_back(param)
		table.insert(args,argType:getName() .. " arg"..k)
	end
	
	func:setArgsString("(" .. table.concat(args,", ") .. ")")
	func:setName(fname)
	func:setSection("public")
	func:setConstness(false)
	func:setStatic(false)
	func:setReturnType(returnType)
				
	targetType:addFunction(func)
end

function ReflectionGenerator:isPublic(mem)
    if mem then
        return mem:protection():latin1() == "public"
    end 
    return false;
end

function ReflectionGenerator:processMembers(sec)
    local scope = self:getCurrentScope()
    local sname = scope:getName()
    
    local mli = sec:members();
    mli:toFirst()
    local mem = mli:current();
    
    while(mem) do
    
        if (mem:kind()==dxp.IMember.Function or
                mem:kind()==dxp.IMember.Prototype or
                mem:kind()==dxp.IMember.Signal or
                mem:kind()==dxp.IMember.Slot or
                mem:kind()==dxp.IMember.DCOP) then -- is a "method"
            self:addScopeFunction(scope,mem)
        elseif(self:isClassTypedef(mem) and self:isPublic(mem)) then
        	-- Add this class object to its parent scope:
        	local class = self:getOrCreateObject(mem,Class)
        	
    	    local location = self:getHeaderFileName(mem:definitionFile():latin1())
		    class:setHeaderFile(location)
    		
    		-- Add the mapped type string:
    		local typevec = self:generateItemLinks(mem:type(),0,mem:name():latin1(),mem:id():latin1())
    		
    		class:setMappedType(Type{links=typevec})

        	scope:addSubScope(class)
    		
        elseif(mem:kind()==dxp.IMember.Define and self:isPublic(mem)) then
            
            -- check if we have parameters:
            local params = mem:parameters()
            local param = nil
            if params then
            	params:toFirst()
            	param = params:current()
            	params:release()
        	end
        	
            if param then
            	self:notice("Ignoring define with parameters: ",mem:name():latin1())
            else
	            local def = self:getOrCreateObject(mem,Define)
	            local items = self:generateItemLinks(mem:initializer())
	            def:setInitializers(items)
	            def:setName(mem:name():latin1())  
	            self.reflectionMap:addDefine(def)
	        	
	    	    local location = self:getHeaderFileName(mem:definitionFile():latin1())
			    def:setHeaderFile(location)
		    end
        elseif(mem:kind()==dxp.IMember.Variable or mem:kind()==dxp.IMember.Property) and self:isPublic(mem) then
            -- is an attribute
            -- only add public attributes:
			local argstr = mem:argsstring():latin1()
            local var = self:getOrCreateObject(mem,Variable)
            var:setName(mem:name():latin1())
			local typevec = self:generateItemLinks(mem:type())
			var:setType(Type{links=typevec})
			var:setSection(mem:protection():latin1())
			var:setArgsString(argstr)
            scope:addVariable(var)
        elseif(mem:kind()==dxp.IMember.Enum) and self:isPublic(mem) then
            log:info ("   - public enum ".. mem:name():latin1());
			--log:warn("Creating enum in scope ".. mem:name():latin1())
			
            local enum = self:getOrCreateObject(mem,Enum)
            
            local location = self:getHeaderFileName(mem:definitionFile():latin1())
		    enum:setHeaderFile(location)
		    
            -- manually add this enum to the current scope:
            enum:setName(mem:name():latin1())
			scope:addEnum(enum)

            local mit = dxp.toEnum(mem):enumValues()
            local enumvals = {}
            mit:toFirst();
            local enumvals = {}
            local val = mit:current();
            while(val) do
            	local vname = val:name():latin1()
            	local item = self:getOrCreateObject(val,EnumValue,vname)
                
                log:info (" -enum value: ".. vname)
                enum:addValue(item)
                
                mit:toNext()
                val = mit:current()
            end
            
            mit:release()
        end
        
        mli:toNext()
        mem = mli:current()
    end     
end

function ReflectionGenerator:processSections(comp)    
    local sli = comp:sections();
    sli:toFirst();
    local sec = sli:current();
    while(sec) do
        --if(sec:isPublic()) then
            self:processMembers(sec)
        --end
        
        sli:toNext();
        sec = sli:current();
    end
    
    sli:release();           
end

--- Process the sub scopes of a given scope.
function ReflectionGenerator:processChildren(comp)
    local cli = comp:nestedCompounds();
    cli:toFirst();
    local ccomp = cli:current();
    while(ccomp) do
        
        self:processCompound(ccomp)
         
        ccomp:release();
        cli:toNext();
        ccomp = cli:current();
    end
    
    cli:release();
end

--- Function to dispatch the processing of a single compound:
function ReflectionGenerator:processCompound(comp)
    if not comp then
        return
    end
    
    log:info ("Processing compound " .. comp:name():latin1())

    if (comp:kind()==dxp.ICompound.Class or comp:kind()==dxp.ICompound.Struct or comp:kind()==dxp.ICompound.Interface) then 
        self:processClass(comp)
    elseif(comp:kind()==dxp.ICompound.File) then
        self:processFile(comp)
    elseif (comp:kind()==dxp.ICompound.Namespace) then
        self:processNamespace(comp)
    end
end

--- function called to generate the reflection.
function ReflectionGenerator:generateReflection(folder)
    local dox = dxp.createObjectModel();
    
    self.doxygen = dox
    
    dox:setDebugLevel(0);
	
    if not dox:readXMLDir(folder) then
        log:error("Error reading file ".. folder .."/index.xml")
        return
    end
 
    local scope = self.reflectionMap:getGlobalNamespace()
    --scope:setName("global")
    
    self:pushScope(scope)
    
    local cli = dox:compounds();
    cli:toFirst();
    local comp = cli:current();
    local index = 0;
    --log:notice ("First Compound id is: "..  comp:id():latin1())
    
    while(comp) do
        
        --log:notice("Iterating on component ".. index)
        --index = index+1
        log:info ("Compound id is: "..  comp:id():latin1())
        
        self:processCompound(comp)
         
         --if index > 10000 then
         --	break;
         --end
         
        comp:release();
        cli:toNext();
        comp = cli:current();
    end
    
    cli:release();
    self.doxygen = nil
    
    dox:release();
    
    self:popScope()
end

--- return the ignored class patterns.
function ReflectionGenerator:getIgnoreGlobalFunctionsPatterns()
    return self.ignoreGlobalFuncsPatterns
end

function ReflectionGenerator:getIgnoreClassFunctionsPatterns()
    return self.ignoreClassFunctionsPatterns
end

function stdStringFromLua(buf,index,type,argname)
	buf:writeSubLine("std::string ${2}(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
end

function stdWStringFromLua(buf,index,type,argname)
	buf:writeSubLine("std::string ${2}_str(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
	buf:writeSubLine("std::wstring ${1} = sgt::s2ws(${1}_str);",argname)
end

function stdAWEStringFromLua(buf,index,type,argname)
	buf:writeSubLine("std::string ${2}_str(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
	buf:writeSubLine("Awesomium::WebString ${1} = Awesomium::ToWebString(${1}_str);",argname)
end

function stdStringToLua(buf,type,argname)
	local access = type:isPointer() and "->" or "."
	buf:writeSubLine("lua_pushlstring(L,${1}${2}data(),${1}${2}size());",argname,access)
end

function stdWStringToLua(buf,type,argname)
	local ref = type:isPointer() and "*" or "";
	
	buf:writeSubLine("std::string ${1}_str = sgt::ws2s(${2}${1});",argname,ref)
	buf:writeSubLine("lua_pushlstring(L,${1}_str.data(),${1}_str.size());",argname)
end

function stdAWEStringToLua(buf,type,argname)
	local ref = type:isPointer() and "*" or "";
	
	buf:writeSubLine("std::string ${1}_str = Awesomium::ToString(${2}${1});",argname,ref)
	buf:writeSubLine("lua_pushlstring(L,${1}_str.data(),${1}_str.size());",argname)
end

function wxStringFromLua(buf,index,type,argname)
	buf:writeSubLine("wxString ${2}(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
end

function wxStringToLua(buf,type,argname)
	local access = type:isPointer() and "->" or "."
	buf:writeSubLine("lua_pushlstring(L,${1}${2}data(),${1}${2}size());",argname,access)
end

function ucharFromLua(buf,index,type,argname)
	buf:writeSubLine("unsigned char ${2} = (unsigned char)(lua_tointeger(L,${1}));",index,argname)
end

function ucharToLua(buf,type,argname)
    if type:isPointer() then
        buf:writeSubLine('luaL_error(L,"Trying to convert pointer on unsigned char ${1} to lua. This usage should be clarifierd.");',argname)
    else
        buf:writeSubLine("lua_pushnumber(L,(int)${1});",argname,access)
    end
end

function refptrToLua(buf,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:gsub("osg::ref_ptr< (.+) >","%1")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("Luna< ${1} >::push(L,${2},false);",tname,argname.. (type:isPointer() and "->get()" or ".get()"));
end

function obsptrToLua(buf,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:gsub("osg::observer_ptr< (.+) >","%1")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("Luna< ${1} >::push(L,${2},false);",tname,argname.. (type:isPointer() and "->get()" or ".get()"));
end

function refptrFromLua(buf,index,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:gsub("osg::ref_ptr< (.+) >","%1")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("osg::ref_ptr< ${1} > ${2} = dynamic_cast< ${1}* >(Luna< osg::Referenced >::check(L,${3}));",tname,argname,index)
	return false -- this is not a pointer result.
end

function obsptrFromLua(buf,index,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:gsub("osg::observer_ptr< (.+) >","%1")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("osg::observer_ptr< ${1} > ${2} = dynamic_cast< ${1}* >(Luna< osg::Referenced >::check(L,${3}));",tname,argname,index)
	return false -- this is not a pointer result.
end

function wxcharFromLua(buf,index,type,argname)
    buf:writeSubLine("wxString ${2}_str(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
    buf:writeSubLine("const wxChar* ${1} = ${1}_str.wc_str();",argname)
end

function wxcharToLua(buf,type,argname)
	local access = type:isPointer() and "->" or "."
	buf:writeSubLine("wxString ${1}_str(${1});",argname)
	buf:writeSubLine("lua_pushlstring(L,${1}_str.data(),${1}_str.size());",argname)
end

function ucharChecker(buf,index,type,defStr)
    buf:writeSubLine("if( ${2}(lua_type(L,${1})!=LUA_TNUMBER || lua_tointeger(L,${1}) != lua_tonumber(L,${1})) ) return false;",index,defStr)
end

function webStringChecker(buf,index,type,defStr)
    buf:writeSubLine("if( ${2}(lua_type(L,${1})!=LUA_TSTRING) ) return false;",index,defStr)
end

function ReflectionGenerator.generate(options)
	local t0 = os.clock()
	
	-- first setup the log manager:
	require "core"
	
	local logman = sgt.LogManager.instance()
	logman:setDefaultLevelFlags(sgt.LogManager.TIME_STAMP);
	logman:setDefaultTraceFlags(sgt.LogManager.TIME_STAMP);
	logman:addLevelFlags(sgt.LogManager.FATAL,sgt.LogManager.FILE_NAME+sgt.LogManager.LINE_NUMBER);
	logman:addLevelFlags(sgt.LogManager.ERROR,sgt.LogManager.FILE_NAME+sgt.LogManager.LINE_NUMBER);
	logman:addLevelFlags(sgt.LogManager.WARNING,sgt.LogManager.FILE_NAME+sgt.LogManager.LINE_NUMBER);

	logman:setVerbose(true);
	logman:setNotifyLevel(sgt.LogManager.DEBUG3);

	-- force removing the first unnamed sink (this is the default std output sink):
	logman:removeSink("default_console_sink")
	
	logman:addSink(sgt.FileLogger:new("reflection.log"));
	--logman:addSink(sgt.FileLogger:new(options.destpath.."reflection.log"));
	--logman:addSink(sgt.StdLogger:new());

	local issuesLog = sgt.FileLogger:new("reflection_issues.log");
	--local issuesLog = sgt.FileLogger:new(options.destpath.."reflection_issues.log");
	issuesLog:setLevelRange(sgt.LogManager.FATAL,sgt.LogManager.WARNING);
	logman:addSink(issuesLog);

	local tc = require "bindings.TypeConverter"
	
	tc:setFromLuaConverter("osg::ref_ptr<",refptrFromLua)
	tc:setFromLuaConverter("osg::observer_ptr<",obsptrFromLua)
	tc:setFromLuaConverter("wxString",wxStringFromLua)
	
	tc:setFromLuaConverter("std::string$",stdStringFromLua)
	tc:setFromLuaConverter("std::string &$",stdStringFromLua)
	tc:setFromLuaConverter("const std::string &$",stdStringFromLua)
	
	tc:setFromLuaConverter("std::wstring",stdWStringFromLua)
	tc:setFromLuaConverter("std::wstring &",stdWStringFromLua)
	tc:setFromLuaConverter("const std::wstring &",stdWStringFromLua)
	
	tc:setFromLuaConverter("WebString %*",stdAWEStringFromLua)
	tc:setFromLuaConverter("WebString$",stdAWEStringFromLua)
	tc:setFromLuaConverter("WebString &",stdAWEStringFromLua)
	tc:setFromLuaConverter("const WebString &",stdAWEStringFromLua)
	
	tc:setFromLuaConverter("string$",stdStringFromLua)
	tc:setFromLuaConverter("unsigned char",ucharFromLua)
	tc:setFromLuaConverter("const wxChar *",wxcharFromLua)
	
	tc:setToLuaConverter("osg::ref_ptr<",refptrToLua)
	tc:setToLuaConverter("osg::observer_ptr<",obsptrToLua)
	tc:setToLuaConverter("wxString",wxStringToLua)
	
	tc:setToLuaConverter("^std::string$",stdStringToLua)
	tc:setToLuaConverter("^std::string &$",stdStringToLua)
	tc:setToLuaConverter("^const std::string &$",stdStringToLua)
	
	tc:setToLuaConverter("^std::wstring$",stdWStringToLua)
	tc:setToLuaConverter("^std::wstring &$",stdWStringToLua)
	tc:setToLuaConverter("^const std::wstring &$",stdWStringToLua)

	tc:setToLuaConverter("WebString %*",stdAWEStringToLua)
	tc:setToLuaConverter("WebString$",stdAWEStringToLua)
	tc:setToLuaConverter("WebString &$",stdAWEStringToLua)
	tc:setToLuaConverter("^const WebString &$",stdAWEStringToLua)
	
	tc:setToLuaConverter("^string$",stdStringToLua)
	tc:setToLuaConverter("^unsigned char$",ucharToLua)
	tc:setToLuaConverter("const wxChar *",wxcharToLua)

	tc:setTypeChecker("unsigned char",ucharChecker)
	tc:setTypeChecker("WebString ",webStringChecker)

    local ReflectionMap = require "bindings.ReflectionMap"
    local LunaWriter = require "bindings.LunaWriter"
	local im = require "bindings.IgnoreManager"
	local corr = require "bindings.TextCorrector"
	
    local datamap = ReflectionMap()
    local rg = ReflectionGenerator(datamap)
    rg:getIgnoreGlobalFunctionsPatterns():fromTable(options.ignoreGlobalFuncs or {})
	
	for key,values in pairs(options.corrections or {}) do
		for _,v in ipairs(values) do
			corr:addCorrector(key,v[1],v[2])
		end
	end
	
	for k,v in ipairs(options.ignoreFunctions or {}) do
		im:getIgnoreFunctionsPatterns():push_back(v)
	end
	
	for k,v in ipairs(options.ignoreFiles or {}) do
		im:addPattern("file",v)
	end
	
	for k,v in ipairs(options.ignoreDefines or {}) do
		im:addPattern("define",v)
	end
	
	for k,v in ipairs(options.ignoreConverters or {}) do
		im:addPattern("converter",v)
	end
	
	for k,v in ipairs(options.ignoreWrappers or {}) do
		im:addPattern("wrapper",v)
	end
	
	for k,v in ipairs(options.ignoreClasses or {}) do
    	im:addPattern("class",v)
    	--im:addPattern("class_declaration",v)
    end

	for k,v in ipairs(options.ignoreEnumValues or {}) do
    	im:addPattern("enum_value",v)
    end
    
    if options.ignoreConverter then
    	im:getIgnoreConvertersPatterns():fromTable(options.ignoreConverter)
	end
	
	if options.locationPrefixes then
		rg.locationPrefixes:fromTable(options.locationPrefixes)
	end

	for k,v in ipairs(options.ignoreHeaders or {}) do
		im:addPattern("header",v)
	end
	
	for k,v in ipairs(options.ignoreClassDeclarations or {}) do
		im:addPattern("class_declaration",v)
	end
	
    local map = rg:getIgnoreClassFunctionsPatterns()

    for k,v in pairs(options.ignoreClassFuncs or {}) do
        local set = Set(v)
        map:set(k,set)
    end

	local tm = require "bindings.TypeManager"
	
    for src,dest in pairs(options.mappedBaseTypes or {}) do
		tm:addBaseTypeMapping(src,dest)
    end
    	
	log:info("Xml source path: ",options.xmlpath)
	log:info("Lua module name: ",options.luaOpenName)
	log:info("Default module name: ",options.modName)
	log:info("Dest path: ",options.destpath)
	
	log:info("Generating reflection...")

    rg:generateReflection(options.xmlpath)

	local rm = require "bindings.ReflectionManager"
	rm:setDefaultModuleName(options.modName)
	rm:setLuaOpenName(options.luaOpenName)
	rm:setDestFolder(options.destpath)
	rm:setDataMap(datamap)
	rm:setConfig(options.config or {})
	
	local tm = require "bindings.TypeManager"
	for src,dest in pairs(options.mappedModules or {}) do
		tm:setMappedModuleName(src,dest)
    end
	
    datamap:setModuleName(options.modName)
	datamap:setLuaOpenName(options.luaOpenName)

    datamap:getUserHeaders():fromTable(options.headers or {})
    datamap:getUserContents():fromTable(options.userContent or {})

	if not datamap:isInitialized() then
    	datamap:generateClassHierarchy()
    end
	
	tm:getExternalBase("void") -- check if void is external.
	
	local writer = LunaWriter()
    writer:writeBindings()
	
	local dt = os.clock()-t0
	
	log:info("Luna reflection generated in "..dt.." seconds.")
	
	sgt.LogManager.destroy()
end

return ReflectionGenerator

