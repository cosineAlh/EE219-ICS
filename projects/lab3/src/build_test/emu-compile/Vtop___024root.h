// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ top__DOT__RVCPU__DOT__transfer_en;
        CData/*0:0*/ top__DOT__RVCPU__DOT__sca_rs1_r_ena;
        CData/*0:0*/ top__DOT__RVCPU__DOT__rs2_r_ena;
        CData/*7:0*/ top__DOT__RVCPU__DOT__alu_opcode;
        CData/*0:0*/ top__DOT__RVCPU__DOT__branch_en;
        CData/*0:0*/ top__DOT__RVCPU__DOT__jump_en;
        CData/*0:0*/ top__DOT__RVCPU__DOT__wb_ena;
        CData/*4:0*/ top__DOT__RVCPU__DOT__rd_w_addr;
        CData/*0:0*/ top__DOT__RVCPU__DOT__vec_rs1_r_ena;
        CData/*0:0*/ top__DOT__RVCPU__DOT__vs1_r_ena;
        CData/*4:0*/ top__DOT__RVCPU__DOT__vd_w_addr;
        CData/*7:0*/ top__DOT__RVCPU__DOT__v_alu_opcode;
        CData/*0:0*/ top__DOT__RVCPU__DOT__vwb_ena;
        CData/*0:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi;
        CData/*0:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_and;
        CData/*0:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_add;
        CData/*0:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sll;
        CData/*0:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_mul;
        CData/*0:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti;
        CData/*0:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw;
        CData/*0:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw;
        CData/*0:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_blt;
        CData/*0:0*/ top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v;
        CData/*0:0*/ top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi;
        CData/*0:0*/ top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi;
        CData/*0:0*/ top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx;
        CData/*0:0*/ top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx;
        CData/*0:0*/ top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv;
        CData/*0:0*/ top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv;
        CData/*0:0*/ top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v;
        CData/*0:0*/ __Vclklast__TOP__clk;
        SData/*11:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_s;
        SData/*12:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_b;
        IData/*31:0*/ top__DOT__rdata_inst;
        IData/*31:0*/ top__DOT__ram_r_data;
        VlWide<8>/*255:0*/ top__DOT__vram_r_data;
        IData/*31:0*/ top__DOT__RVCPU__DOT__transfer_pc;
        IData/*31:0*/ top__DOT__RVCPU__DOT__rs1_data;
        IData/*31:0*/ top__DOT__RVCPU__DOT__operand_rs1;
        IData/*31:0*/ top__DOT__RVCPU__DOT__operand_rs2;
        IData/*31:0*/ top__DOT__RVCPU__DOT__exe_result;
        VlWide<8>/*255:0*/ top__DOT__RVCPU__DOT__operand_vs1;
        VlWide<8>/*255:0*/ top__DOT__RVCPU__DOT__operand_vs2;
        VlWide<8>/*255:0*/ top__DOT__RVCPU__DOT__vexe_result;
        IData/*31:0*/ top__DOT__RVCPU__DOT__IF_Stage__DOT__pc;
        IData/*31:0*/ top__DOT__RVCPU__DOT__IF_Stage__DOT__addr;
        IData/*20:0*/ top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_j;
        IData/*31:0*/ top__DOT__RVCPU__DOT__EXE_Stage__DOT__alu_result;
        IData/*31:0*/ top__DOT__RVCPU__DOT__REGFILE__DOT__i;
        IData/*31:0*/ top__DOT__RVCPU__DOT__V_REGFILE__DOT__i;
        IData/*31:0*/ __Vfunc_ram_read_helper__0__Vfuncout;
        IData/*31:0*/ __Vfunc_ram_read_helper__1__Vfuncout;
        IData/*31:0*/ __Vfunc_ram_read_helper__3__Vfuncout;
        IData/*31:0*/ __Vfunc_ram_read_helper__4__Vfuncout;
        IData/*31:0*/ __Vfunc_ram_read_helper__5__Vfuncout;
        IData/*31:0*/ __Vfunc_ram_read_helper__6__Vfuncout;
        IData/*31:0*/ __Vfunc_ram_read_helper__7__Vfuncout;
        IData/*31:0*/ __Vfunc_ram_read_helper__8__Vfuncout;
        IData/*31:0*/ __Vfunc_ram_read_helper__9__Vfuncout;
        IData/*31:0*/ __Vfunc_ram_read_helper__10__Vfuncout;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__RVCPU__DOT__REGFILE__DOT__regs;
        VlUnpacked<VlWide<8>/*255:0*/, 32> top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
