module top(
    input   w,
    input   clk,
	input	reset,
    output  z
);
	parameter A = 9'b000000001, B = 9'b000000010, C = 9'b000000100,
			  D = 9'b000001000, E = 9'b000010000, F = 9'b000100000,
			  G = 9'b001000000, H = 9'b010000000, I = 9'b100000000;
	//one-hot code
	reg [8:0] status;
	
	always @(posedge clk, negedge reset) begin
		if (!reset) 
			status <= A;
		else
			case (status)
				A:
					if (w == 1)
						status <= B;
					else
						status <= A;
				B:
					if (w == 1)
						status <= D;
					else
						status <= C;
				C:
					if (w == 1)
						status <= F;
					else
						status <= E;
				D: 
					if (w == 1)
						status <= G;
					else
						status <= C;
				E: 
					if (w == 1)
						status <= B;
					else 
						status <= H;
				F: 
					if (w == 1)
						status <= D;
					else
						status <= C;
				G:
					if (w == 1)
						status <= I;
					else 
						status <= C;
				H:
					if (w == 1)
						status <= B;
					else
						status <= A;
				I:
					if (w == 1)
						status <= I;
					else
						status <= C;
				default:
					status <= A;
			endcase
	end
	assign z = (status == A) ? 1 :
			   (status == I) ? 1 :
			   				   0;
endmodule
