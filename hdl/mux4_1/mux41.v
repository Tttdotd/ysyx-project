module mux41(a, s, y);
input [3:0] a;
input [1:0] s;
output reg y;
always @(*)
    case (s)
        2'b00:
            y = a[0];
        2'b01:
            y = a[1];
        2'b10:
            y = a[2];
        2'b11:
            y = a[3];
    endcase
endmodule
