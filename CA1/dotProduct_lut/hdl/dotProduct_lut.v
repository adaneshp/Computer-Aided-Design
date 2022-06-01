
module dotProduct_lut ( 
							input SerialData ,
							input Start ,
							
							output [18 : 0] DataOut ,
							output reg Done ,
							
							input clk ,
							input Reset
							);

// ========================================================================							

reg [5:0] n_reg , n_next;
reg [63:0] vectorA_reg , vectorA_next;
reg [63:0] vectorB_reg , vectorB_next;

reg wr_data;
reg [63:0] data_in;
wire [63:0] data_out;

reg addr;

reg [63:0] A_reg , A_next;
reg [63:0] B_reg , B_next;
wire [63:0] A , B;

wire [15 : 0] AB0 , AB1 , AB2 , AB3 , AB4 , AB5 , AB6 , AB7 ;
 

localparam [2:0] idleState = 3'b000 ,
					recieveAState = 3'b001 ,
					recieveBState = 3'b010 ,
					storeAState = 3'b011 ,
					storeBState = 3'b100 ,
					readVectorAState = 3'b101 ,
					readVectorBState = 3'b110 ,
					doneState = 3'b111;

reg [2:0] state_reg , state_next;

// ========================================================================


always @ ( posedge clk , posedge Reset)
	if ( Reset==1'b1)
		begin
			state_reg <= idleState;
			n_reg <= 0;
			vectorA_reg <= 64'b0;
			vectorB_reg <= 64'b0;
			A_reg <= 64'b0;
			B_reg <= 64'b0;
		end
	else
		begin
			state_reg <= state_next;
			n_reg <= n_next;
			vectorA_reg <= vectorA_next;
			vectorB_reg <= vectorB_next;
			A_reg <= A_next;
			B_reg <= B_next;
		end

// ========================================================================
		
always @ *
	begin
		state_next = state_reg;
		n_next = n_reg;
		vectorA_next = vectorA_reg;
		vectorB_next = vectorB_reg;
		A_next = A_reg;
		B_next = B_reg;
		wr_data = 1'b0;
		data_in = 0;
		addr = 1'b0;
		Done = 1'b0;
		
		case (state_reg)
			idleState :
				if ( Start==1'b1)
					begin
						n_next = 6'b111111;
						state_next = recieveAState;
					end
					
			recieveAState :
				begin
					vectorA_next = { SerialData , vectorA_reg[63:1] };
					if (n_reg==0)
						begin
							n_next = 6'b111111;
							state_next = recieveBState;
						end
					else
						begin
							
							n_next = n_reg -1;
						end
				end
				
			recieveBState :	
				begin
					vectorB_next = { SerialData , vectorB_reg [63 : 1]  };
					if (n_reg == 0 )
						begin
							state_next = storeAState;
						end
					else
						begin
							
							n_next = n_reg-1;
						end
				end
			
			storeAState :
				begin
					wr_data = 1'b1;
					data_in = vectorA_reg;
					addr = 1'b0;
					state_next = storeBState ;
				end
			
			storeBState :
				begin
					wr_data = 1'b1;
					data_in = vectorB_reg;
					addr = 1'b1;
					state_next = readVectorAState;
				end
				
			readVectorAState :
				begin
					addr = 1'b0;
					A_next = data_out;
					state_next = readVectorBState;
				end
			
			readVectorBState :
				begin
					addr = 1'b1;
					B_next = data_out;
					state_next = doneState;
				end
			
			doneState :
				begin
					Done = 1'b1;
					state_next = idleState;
				end
			
			default : 
				state_next = idleState ;
		endcase
	end
	
// ========================================================================	

xilinx_lut_ram_async
				# ( 
					.ADDR_WIDTH (1) , 
					.DATA_WIDTH (64) 
					)
xilinx_lut_ram_async_unit
					(
					.clk(clk) , 
					.Reset(Reset) ,
					.din (data_in) ,
					.addr (addr) ,
					.we (wr_data) ,								// WRITTE ENABLE
					.dout (data_out)
					);

// ========================================================================					

assign A = A_reg;
assign B = B_reg;


// ========================================================================	

multiplier_lut
			# ( .WIDTH (8) )
mult0_unit		
			(
						.a ( A[7 : 0] ), 
						.b ( B[7 : 0] ),
						.y (AB0 )
			);


// ========================================================================			
multiplier_lut
			# ( .WIDTH (8) )
mult1_unit		
			(
						.a ( A[15 : 8] ), 
						.b ( B[15 : 8] ),
						.y (AB1 )
			);

// ========================================================================			
multiplier_lut
			# ( .WIDTH (8) )
mult2_unit		
			(
						.a ( A[23 : 16] ), 
						.b ( B[23 : 16] ),
						.y (AB2 )
			);

// ========================================================================			
multiplier_lut
			# ( .WIDTH (8) )
mult3_unit		
			(
						.a ( A[31 : 24] ), 
						.b ( B[31 : 24] ),
						.y (AB3 )
			);

// ========================================================================			
multiplier_lut
			# ( .WIDTH (8) )
mult4_unit		
			(
						.a ( A[39 : 32] ), 
						.b ( B[39 : 32] ),
						.y (AB4 )
			);

// ========================================================================			
multiplier_lut
			# ( .WIDTH (8) )
mult5_unit		
			(
						.a ( A[47 : 40] ), 
						.b ( B[47 : 40] ),
						.y (AB5 )
			);

// ========================================================================			
multiplier_lut
			# ( .WIDTH (8) )
mult6_unit		
			(
						.a ( A[55 : 48] ), 
						.b ( B[55 : 48] ),
						.y (AB6 )
			);

// ========================================================================			
multiplier_lut
			# ( .WIDTH (8) )
mult7_unit		
			(
						.a ( A[63 : 56] ), 
						.b ( B[63 : 56] ),
						.y (AB7 )
			);
			

assign DataOut = AB0 + AB1 + AB2 + AB3 + AB4 + AB5 + AB6 + AB7 ;
			
endmodule
	