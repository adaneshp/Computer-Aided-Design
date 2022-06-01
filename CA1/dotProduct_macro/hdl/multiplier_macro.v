
module multiplier_macro
		#	( parameter WIDTH = 8 )
			
			(
						input [WIDTH-1 : 0] a,b ,
						output [2*WIDTH-1 : 0] y
			);

assign y = a*b;

endmodule
