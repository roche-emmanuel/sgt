module(..., package.seeall)

local log = require "tracer"
local fs = require "base.FileSystem"

function test_fann()
	log:info("Tests","Testing FANN");
	require"FANN"
	
	local train_file = fs:getRootPath(true).."tests/xor.data"
	local nn_file = fs:getRootPath(true).."tests/myxor.net"
	
	log:info("Tests","Creating Neural net...")
	local nn = FANN.neural_net()
	
	local result = nn:create_standard{2, 2, 1}
	assert_equal(true,result,"Cannot create standard network.")
	
	log:info("Tests","Creating training data...")
	local train = FANN.training_data()
	
	result = train:read_train_from_file(train_file)
	assert_equal(true,result,"Cannot read train data file: ",train_file)
	
	log:info("Tests","Setting ANN parameters...")
	nn:set_activation_steepness_hidden(1)
	nn:set_activation_steepness_output(1)

	nn:set_activation_function_hidden(FANN.SIGMOID_SYMMETRIC)
	nn:set_activation_function_output(FANN.SIGMOID_SYMMETRIC)
	nn:set_train_stop_function(FANN.STOPFUNC_BIT)

	nn:set_bit_fail_limit(0.01)

	log:info("Tests","Initializing NN weights...")
	nn:init_weights(train)
	
	log:info("Tests","Training on data...")
	nn:train_on_data(train, 500000, 1000, 0.001)
	
	local mse = nn:test_data(train)
	log:info("Tests","NN mean-square error: ",mse)

	log:info("Tests","Saving Neural net...")
	nn:save(nn_file)
	
	log:info("Tests","Loading NN from file...")
	
	local nn2 = FANN.neural_net()
	result = nn2:create_from_file(nn_file)
	assert_equal(true,result,"Cannot create NN from file: ",nn_file)
	
	-- test that NN again on the train data:
	local mse = nn2:test_data(train)
	log:info("Tests","NN mean-square error: ",mse)
		
	local xor = nn2:run{1, 1}
	log:info("Tests","Result: " .. xor)
	xor = nn2:run{1, -1}
	log:info("Tests","Result: " .. xor)
	xor = nn2:run{-1, -1}
	log:info("Tests","Result: " .. xor)
	xor = nn2:run{-1, 1}
	log:info("Tests","Result: " .. xor)

	log:info("Tests","Done testing FANN.")
end

