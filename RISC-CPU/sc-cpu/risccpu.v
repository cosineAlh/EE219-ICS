module risccpu(clk,reset);
parameter width=32, addr_width = 16;
input clk, reset;   
reg [width-1:0] data_drive;  // locally driven value, input
wire [width-1:0] d1, d2, result, instru, rf_in, d_inout, alu_in; /*inout port*/ wire [1:0] aluop; 
wire [4:0] rs1, rs2, rd; wire zero, rf_wr, data_rd, data_wr, reg_src, alu_src, pc_src; 
reg [15:0] pc_count; wire [width-1:0] imm; wire [15:0] addr,pc_plus4, pc_plusimm;
alu alu_risc(.opA(d1),.opB(alu_in),.aluop(aluop),.result(result),.zero(zero));
rf rf_risc(.reg1(rs1),.reg2(rs2),.wr(rf_wr),.data(rf_in),.reg_wr(rd), .d1(d1), .d2(d2), .clk(clk));        
data_mem data_risc(.addr(addr),.clk(clk),.data(d_inout),.rd(data_rd),.wr(data_wr));
instru_mem instru_risc(.pc_count(pc_count),.instru(instru));
decoder dec_risc(.instru(instru),.zero(zero),.aluop(aluop),.reg_wr(rf_wr),.reg_src(reg_src),.data_rd(data_rd),.data_wr(data_wr),.alu_src(alu_src),.pc_src(pc_src),.rs1(rs1),.rs2(rs2),.imm(imm),.rd(rd));
assign addr = result[15:0]; assign d_inout = (data_wr&!data_rd)?data_drive:{(width){1'bz}};
assign pc_plus4 = pc_count + 1;
assign pc_plusimm = pc_count + imm[15:0];
assign rf_in = reg_src?d_inout:result;
assign alu_in = alu_src?d2:imm;
always @(posedge clk)
begin
    if (reset) pc_count <= 0;
    else if (pc_src == 1'b1) pc_count <= pc_plusimm;
    else pc_count <= pc_plus4;
end
always @(d2) data_drive = d2;
endmodule
