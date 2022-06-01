////////////////////////////////////////////////
// XILINX ONE-PORT RAM SYNCHRONOUS READ
// THIS RAM CAN BE REALIZED BY THE 	BLOCK RAM
//
////////////////////////////////////////////////


module xilinx_macro_ram_sync
				# ( parameter ADDR_WIDTH = 1 , DATA_WIDTH = 64 	)														
					(
					input clk , 
					input [DATA_WIDTH-1:0] din ,
					input [ADDR_WIDTH-1:0] addr ,
					input we ,								// WRITTE ENABLE
					output [DATA_WIDTH-1:0] dout
					);
					
				
reg [DATA_WIDTH-1:0] ram [2**ADDR_WIDTH-1:0];
reg [ADDR_WIDTH-1:0] addr_reg;

// WRITE OPERATIN
always @ ( posedge clk  )
	begin
		if ( we == 1'b1 )
			ram [addr] <= din;
			addr_reg <= addr;
	end
		
		

// SYNCHRONOUS READ OPERATIN
assign dout = ram [addr_reg] ;

endmodule
