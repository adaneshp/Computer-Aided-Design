////////////////////////////////////////////////
// XILINX ONE-PORT RAM ASYNCHRONOUS READ
// THIS RAM CAN BE REALIZED ONLY BY THE DISTRIBUTED RAM
//
////////////////////////////////////////////////


module xilinx_lut_ram_async
				# ( 
					parameter ADDR_WIDTH = 8 , DATA_WIDTH = 1 
					)
					(
					input clk , 
					input Reset ,
					input [DATA_WIDTH-1:0] din ,
					input [ADDR_WIDTH-1:0] addr ,
					input we ,								// WRITTE ENABLE
					output [DATA_WIDTH-1:0] dout
					);
					
				
reg [DATA_WIDTH-1:0] ram [2**ADDR_WIDTH-1:0];
integer i;

// WRITE OPERATIN
always @ ( posedge clk , posedge Reset )
	if ( Reset )
		begin
			for ( i=0 ; i<2**ADDR_WIDTH ; i=i+1 )
				ram [i] <= 0;
		end
	else
		if ( we == 1'b1 )
			ram [addr] <= din;
	

// ASYNCHRONOUS READ OPERATIN
assign dout = ram [addr] ;

endmodule
