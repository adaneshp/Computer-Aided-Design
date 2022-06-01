
module multiplier_lut
		#	( parameter WIDTH = 8 )
			
			(
						input [7:0] a,b ,
						output [15:0] y
			);

reg [WIDTH-1:0] bv0,bv1,bv2,bv3,bv4,bv5,bv6,bv7;
wire [WIDTH-1 : 0] au;

wire [2*WIDTH-1:0] p0,p1,p2,p3,p4,p5,p6,p7,prod;

assign au = a;

integer i;

always @ *
for ( i=0 ; i<WIDTH ; i=i+1)
  bv0[i] = b[0];

always @ *
for ( i=0 ; i<WIDTH ; i=i+1)
  bv1[i] = b[1];

always @ *
for ( i=0 ; i<WIDTH ; i=i+1)
  bv2[i] = b[2];

always @ *
for ( i=0 ; i<WIDTH ; i=i+1)
  bv3[i] = b[3];

always @ *
for ( i=0 ; i<WIDTH ; i=i+1)
  bv4[i] = b[4];

always @ *
for ( i=0 ; i<WIDTH ; i=i+1)
  bv5[i] = b[5];

always @ *
for ( i=0 ; i<WIDTH ; i=i+1)
  bv6[i] = b[6];

always @ *
for ( i=0 ; i<WIDTH ; i=i+1)
  bv7[i] = b[7];
  

assign p0 = { 8'b0 , bv0 & au };
assign p1 = { 7'b0 , bv1 & au , 1'b0 } ;
assign p2 = { 6'b0 , bv2 & au , 2'b0 } ;
assign p3 = { 5'b0 , bv3 & au , 3'b0 } ;
assign p4 = { 4'b0 , bv4 & au , 4'b0 } ;
assign p5 = { 3'b0 , bv5 & au , 5'b0 } ;
assign p6 = { 2'b0 , bv6 & au , 6'b0 } ;
assign p7 = { 1'b0 , bv7 & au , 7'b0 } ;

assign prod = (p0 + p1) + (p2 + p3) + (p4 + p5) + (p6 + p7) ;
assign y = prod;

endmodule
