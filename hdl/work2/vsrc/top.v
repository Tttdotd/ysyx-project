module top(x, y, en, sig, seg);
	input	[7:0]	x;
	input			en;
	output	[2:0]	y;
	output			sig;
	output	[7:0]	seg;

	assign sig = x == 0 ? 0 : 1;
	
	reg 	[2:0]	regy;
	reg		[7:0]	regseg;
	integer i;
	always @(x, en)
	begin
		if (en) begin
			regy = 3'b000;
			if (x != 0) begin
				for (i = 7; i >= 0; i=i-1) begin
					if (x[i] == 1) begin
						regy = i[2:0];
						break;
					end
				end
			end
			else begin
				regy = 3'b000;
			end
		end
		else begin
			regy = 3'b000;
		end
		case (regy)
			3'b000: regseg = 8'b00000010;
			3'b001:	regseg = 8'b10011110;
			3'b010: regseg = 8'b00100100;
			3'b011: regseg = 8'b00001100;
			3'b100: regseg = 8'b10011000;
			3'b101: regseg = 8'b01001000;
			3'b110: regseg = 8'b01000000;
			3'b111: regseg = 8'b00011110;
			default: regseg = 8'b00000010;
		endcase
	end
	assign y = regy;
	assign seg = regseg;
endmodule
