

sgt.IntVector = sgt.std_vector_int
sgt.FloatVector = sgt.std_vector_float
sgt.DoubleVector = sgt.std_vector_double

sgt.IntVector.fromTable = function(tt)
	local result = sgt.IntVector()
	for _,val in ipairs(tt) do
		result:push_back(val)
	end
	
	return result;
end

sgt.FloatVector.fromTable = function(tt)
	local result = sgt.FloatVector()
	for _,val in ipairs(tt) do
		result:push_back(val)
	end
	
	return result;
end

sgt.DoubleVector.fromTable = function(tt)
	local result = sgt.DoubleVector()
	for _,val in ipairs(tt) do
		result:push_back(val)
	end
	
	return result;
end
