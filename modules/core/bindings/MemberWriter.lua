local Class = require("classBuilder"){name="MemberWriter",bases="base.Object"};

function Class:handle(member,comp,section)
	self:debug("found member ",member:name():latin1(), " in compound ", comp:name():latin1())
end

return Class
