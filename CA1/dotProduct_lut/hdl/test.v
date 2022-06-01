`timescale 1ns/1ps


module test ( 
							output SerialData ,
							output reg Start ,
							
							input [18 : 0] DataOut ,
							input Done ,
							
							output reg clk ,
							output reg Reset
							);

wire [63 : 0]		A_test;
wire [63 : 0] 		B_test;
wire [127 : 0] 		outputData;
reg [127 : 0] 		outputData_reg;				

//clock
initial begin
		clk = 1'b1;
		forever #5	
			clk = ~clk;
end

//Reset
initial begin
	Reset = 1'b1;
	
	#10
	Reset = 1'b0;
	
end


// Start
initial begin
	Start = 1'b0;
	
	#21
	Start = 1'b1;
	
	# 10
	Start = 1'b0;
end

// Test Vectors
assign A_test = 64'h123456789abcdef0;
assign B_test = 64'hfedcba9876543210;

assign outputData = { B_test , A_test };


always @ (posedge clk)
	if (Start==1)
		outputData_reg <= outputData;
	else
		outputData_reg <= { 1'b0 , outputData_reg [127:1] };
		

assign	SerialData = outputData_reg[0];
		


endmodule
	

