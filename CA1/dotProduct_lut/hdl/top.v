
` timescale 1ns / 1ps

module top ();

// ========================================================================		

wire SerialData;
wire Start;
wire clk ;
wire Reset;
wire Done;
wire [18 : 0] DataOut;

// ========================================================================		

dotProduct_lut 
			dotProduct_lut_unit
						( 
							.SerialData (SerialData) ,
							.Start (Start) ,
							
							.DataOut (DataOut) ,
							.Done (Done) ,
							
							.clk (clk) ,
							.Reset (Reset)
							);
							
// ========================================================================		

test 
			test_unit
						( 
							.SerialData (SerialData) ,
							.Start (Start) ,
							
							.DataOut (DataOut) ,
							.Done (Done) ,
							
							.clk (clk) ,
							.Reset (Reset)
							);
							
endmodule							
