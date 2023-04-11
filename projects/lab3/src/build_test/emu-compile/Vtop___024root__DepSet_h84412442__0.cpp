// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(IData/*31:0*/ wIdx, IData/*31:0*/ wdata, IData/*31:0*/ wmask, CData/*0:0*/ wen);
extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__top__DOT__RVCPU__DOT__IF_Stage__DOT__pc;
    CData/*0:0*/ __Vdlyvset__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v32;
    IData/*31:0*/ __Vdlyvval__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32;
    VlWide<8>/*255:0*/ __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32;
    // Body
    __Vdlyvset__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v0 = 0U;
    __Vdlyvset__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32 = 0U;
    __Vdlyvset__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v0 = 0U;
    __Vdlyvset__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v32 = 0U;
    __Vdly__top__DOT__RVCPU__DOT__IF_Stage__DOT__pc 
        = vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__pc;
    if (vlSelf->rst) {
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__i = 0x20U;
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__i = 0x20U;
    }
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 (vlSelf->top__DOT__RVCPU__DOT__exe_result 
                                                                  >> 2U), 
                                                                 ((IData)(vlSelf->rst)
                                                                   ? 0U
                                                                   : 
                                                                  ((IData)(vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena)
                                                                    ? 
                                                                   vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs
                                                                   [
                                                                   ((IData)(vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena)
                                                                     ? 
                                                                    (0x1fU 
                                                                     & (vlSelf->top__DOT__rdata_inst 
                                                                        >> 0x14U))
                                                                     : 0U)]
                                                                    : 0U)), 0xffffffffU, (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                  >> 2U), 
                                                                 ((IData)(vlSelf->rst)
                                                                   ? 
                                                                  Vtop__ConstPool__CONST_h9e67c271_0[0U]
                                                                   : 
                                                                  (((~ (IData)(vlSelf->rst)) 
                                                                    & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                                                    ? 
                                                                   vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                                                                   [
                                                                   ((IData)(vlSelf->rst)
                                                                     ? 0U
                                                                     : 
                                                                    (0x1fU 
                                                                     & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSelf->top__DOT__rdata_inst 
                                                                            >> 0x14U))
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                          ? 
                                                                         (0x1fU 
                                                                          & (vlSelf->top__DOT__rdata_inst 
                                                                             >> 7U))
                                                                          : 0U))))][0U]
                                                                    : 
                                                                   Vtop__ConstPool__CONST_h9e67c271_0[0U])), 0xffffffffU, 
                                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                   ? 1U
                                                                   : 0U));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                   >> 2U)), 
                                                                 ((IData)(vlSelf->rst)
                                                                   ? 
                                                                  Vtop__ConstPool__CONST_h9e67c271_0[1U]
                                                                   : 
                                                                  (((~ (IData)(vlSelf->rst)) 
                                                                    & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                                                    ? 
                                                                   vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                                                                   [
                                                                   ((IData)(vlSelf->rst)
                                                                     ? 0U
                                                                     : 
                                                                    (0x1fU 
                                                                     & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSelf->top__DOT__rdata_inst 
                                                                            >> 0x14U))
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                          ? 
                                                                         (0x1fU 
                                                                          & (vlSelf->top__DOT__rdata_inst 
                                                                             >> 7U))
                                                                          : 0U))))][1U]
                                                                    : 
                                                                   Vtop__ConstPool__CONST_h9e67c271_0[1U])), 0xffffffffU, 
                                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                   ? 1U
                                                                   : 0U));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                   >> 2U)), 
                                                                 ((IData)(vlSelf->rst)
                                                                   ? 
                                                                  Vtop__ConstPool__CONST_h9e67c271_0[2U]
                                                                   : 
                                                                  (((~ (IData)(vlSelf->rst)) 
                                                                    & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                                                    ? 
                                                                   vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                                                                   [
                                                                   ((IData)(vlSelf->rst)
                                                                     ? 0U
                                                                     : 
                                                                    (0x1fU 
                                                                     & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSelf->top__DOT__rdata_inst 
                                                                            >> 0x14U))
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                          ? 
                                                                         (0x1fU 
                                                                          & (vlSelf->top__DOT__rdata_inst 
                                                                             >> 7U))
                                                                          : 0U))))][2U]
                                                                    : 
                                                                   Vtop__ConstPool__CONST_h9e67c271_0[2U])), 0xffffffffU, 
                                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                   ? 1U
                                                                   : 0U));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 ((IData)(3U) 
                                                                  + 
                                                                  (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                   >> 2U)), 
                                                                 ((IData)(vlSelf->rst)
                                                                   ? 
                                                                  Vtop__ConstPool__CONST_h9e67c271_0[3U]
                                                                   : 
                                                                  (((~ (IData)(vlSelf->rst)) 
                                                                    & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                                                    ? 
                                                                   vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                                                                   [
                                                                   ((IData)(vlSelf->rst)
                                                                     ? 0U
                                                                     : 
                                                                    (0x1fU 
                                                                     & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSelf->top__DOT__rdata_inst 
                                                                            >> 0x14U))
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                          ? 
                                                                         (0x1fU 
                                                                          & (vlSelf->top__DOT__rdata_inst 
                                                                             >> 7U))
                                                                          : 0U))))][3U]
                                                                    : 
                                                                   Vtop__ConstPool__CONST_h9e67c271_0[3U])), 0xffffffffU, 
                                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                   ? 1U
                                                                   : 0U));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                   >> 2U)), 
                                                                 ((IData)(vlSelf->rst)
                                                                   ? 
                                                                  Vtop__ConstPool__CONST_h9e67c271_0[4U]
                                                                   : 
                                                                  (((~ (IData)(vlSelf->rst)) 
                                                                    & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                                                    ? 
                                                                   vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                                                                   [
                                                                   ((IData)(vlSelf->rst)
                                                                     ? 0U
                                                                     : 
                                                                    (0x1fU 
                                                                     & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSelf->top__DOT__rdata_inst 
                                                                            >> 0x14U))
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                          ? 
                                                                         (0x1fU 
                                                                          & (vlSelf->top__DOT__rdata_inst 
                                                                             >> 7U))
                                                                          : 0U))))][4U]
                                                                    : 
                                                                   Vtop__ConstPool__CONST_h9e67c271_0[4U])), 0xffffffffU, 
                                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                   ? 1U
                                                                   : 0U));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 ((IData)(5U) 
                                                                  + 
                                                                  (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                   >> 2U)), 
                                                                 ((IData)(vlSelf->rst)
                                                                   ? 
                                                                  Vtop__ConstPool__CONST_h9e67c271_0[5U]
                                                                   : 
                                                                  (((~ (IData)(vlSelf->rst)) 
                                                                    & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                                                    ? 
                                                                   vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                                                                   [
                                                                   ((IData)(vlSelf->rst)
                                                                     ? 0U
                                                                     : 
                                                                    (0x1fU 
                                                                     & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSelf->top__DOT__rdata_inst 
                                                                            >> 0x14U))
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                          ? 
                                                                         (0x1fU 
                                                                          & (vlSelf->top__DOT__rdata_inst 
                                                                             >> 7U))
                                                                          : 0U))))][5U]
                                                                    : 
                                                                   Vtop__ConstPool__CONST_h9e67c271_0[5U])), 0xffffffffU, 
                                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                   ? 1U
                                                                   : 0U));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 ((IData)(6U) 
                                                                  + 
                                                                  (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                   >> 2U)), 
                                                                 ((IData)(vlSelf->rst)
                                                                   ? 
                                                                  Vtop__ConstPool__CONST_h9e67c271_0[6U]
                                                                   : 
                                                                  (((~ (IData)(vlSelf->rst)) 
                                                                    & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                                                    ? 
                                                                   vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                                                                   [
                                                                   ((IData)(vlSelf->rst)
                                                                     ? 0U
                                                                     : 
                                                                    (0x1fU 
                                                                     & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSelf->top__DOT__rdata_inst 
                                                                            >> 0x14U))
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                          ? 
                                                                         (0x1fU 
                                                                          & (vlSelf->top__DOT__rdata_inst 
                                                                             >> 7U))
                                                                          : 0U))))][6U]
                                                                    : 
                                                                   Vtop__ConstPool__CONST_h9e67c271_0[6U])), 0xffffffffU, 
                                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                   ? 1U
                                                                   : 0U));
    Vtop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                 ((IData)(7U) 
                                                                  + 
                                                                  (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                   >> 2U)), 
                                                                 ((IData)(vlSelf->rst)
                                                                   ? 
                                                                  Vtop__ConstPool__CONST_h9e67c271_0[7U]
                                                                   : 
                                                                  (((~ (IData)(vlSelf->rst)) 
                                                                    & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                                                    ? 
                                                                   vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                                                                   [
                                                                   ((IData)(vlSelf->rst)
                                                                     ? 0U
                                                                     : 
                                                                    (0x1fU 
                                                                     & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSelf->top__DOT__rdata_inst 
                                                                            >> 0x14U))
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                          ? 
                                                                         (0x1fU 
                                                                          & (vlSelf->top__DOT__rdata_inst 
                                                                             >> 7U))
                                                                          : 0U))))][7U]
                                                                    : 
                                                                   Vtop__ConstPool__CONST_h9e67c271_0[7U])), 0xffffffffU, 
                                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                                   ? 1U
                                                                   : 0U));
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v0 = 1U;
        __Vdlyvset__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v0 = 1U;
        __Vdly__top__DOT__RVCPU__DOT__IF_Stage__DOT__pc = 0x80000000U;
        vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr = 0x80000000U;
    } else {
        if ((((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top__DOT__RVCPU__DOT__vwb_ena)) 
             & (0U != (IData)(vlSelf->top__DOT__RVCPU__DOT__vd_w_addr)))) {
            if (vlSelf->rst) {
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[0U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[0U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[1U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[1U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[2U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[2U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[3U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[3U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[4U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[4U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[5U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[5U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[6U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[6U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[7U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[7U];
            } else if (vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v) {
                if (vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v) {
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[0U] 
                        = vlSelf->top__DOT__vram_r_data[0U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[1U] 
                        = vlSelf->top__DOT__vram_r_data[1U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[2U] 
                        = vlSelf->top__DOT__vram_r_data[2U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[3U] 
                        = vlSelf->top__DOT__vram_r_data[3U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[4U] 
                        = vlSelf->top__DOT__vram_r_data[4U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[5U] 
                        = vlSelf->top__DOT__vram_r_data[5U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[6U] 
                        = vlSelf->top__DOT__vram_r_data[6U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[7U] 
                        = vlSelf->top__DOT__vram_r_data[7U];
                } else {
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[0U] 
                        = Vtop__ConstPool__CONST_h9e67c271_0[0U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[1U] 
                        = Vtop__ConstPool__CONST_h9e67c271_0[1U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[2U] 
                        = Vtop__ConstPool__CONST_h9e67c271_0[2U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[3U] 
                        = Vtop__ConstPool__CONST_h9e67c271_0[3U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[4U] 
                        = Vtop__ConstPool__CONST_h9e67c271_0[4U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[5U] 
                        = Vtop__ConstPool__CONST_h9e67c271_0[5U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[6U] 
                        = Vtop__ConstPool__CONST_h9e67c271_0[6U];
                    __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[7U] 
                        = Vtop__ConstPool__CONST_h9e67c271_0[7U];
                }
            } else {
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[0U] 
                    = vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[1U] 
                    = vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[2U] 
                    = vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[3U] 
                    = vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[4U] 
                    = vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[5U] 
                    = vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[6U] 
                    = vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U];
                __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[7U] 
                    = vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U];
            }
            __Vdlyvset__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32 = 1U;
            __Vdlyvdim0__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32 
                = vlSelf->top__DOT__RVCPU__DOT__vd_w_addr;
        }
        if ((((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top__DOT__RVCPU__DOT__wb_ena)) 
             & (0U != (IData)(vlSelf->top__DOT__RVCPU__DOT__rd_w_addr)))) {
            __Vdlyvval__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v32 
                = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw)
                                                 ? vlSelf->top__DOT__ram_r_data
                                                 : vlSelf->top__DOT__RVCPU__DOT__exe_result));
            __Vdlyvset__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v32 = 1U;
            __Vdlyvdim0__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v32 
                = vlSelf->top__DOT__RVCPU__DOT__rd_w_addr;
        }
        if (vlSelf->top__DOT__RVCPU__DOT__transfer_en) {
            __Vdly__top__DOT__RVCPU__DOT__IF_Stage__DOT__pc 
                = ((IData)(4U) + vlSelf->top__DOT__RVCPU__DOT__transfer_pc);
            vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr 
                = vlSelf->top__DOT__RVCPU__DOT__transfer_pc;
        } else {
            __Vdly__top__DOT__RVCPU__DOT__IF_Stage__DOT__pc 
                = ((IData)(4U) + vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__pc);
            vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr 
                = vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__pc;
        }
    }
    if (__Vdlyvset__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v0) {
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[1U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[1U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[1U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[1U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[1U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[1U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[1U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[1U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[2U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[2U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[2U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[2U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[2U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[2U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[2U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[2U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[3U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[3U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[3U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[3U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[3U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[3U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[3U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[3U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[4U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[4U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[4U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[4U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[4U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[4U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[4U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[4U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[5U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[5U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[5U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[5U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[5U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[5U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[5U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[5U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[6U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[6U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[6U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[6U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[6U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[6U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[6U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[6U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[7U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[7U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[7U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[7U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[7U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[7U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[7U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[7U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[8U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[8U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[8U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[8U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[8U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[8U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[8U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[8U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[9U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[9U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[9U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[9U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[9U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[9U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[9U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[9U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xaU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xaU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xaU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xaU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xaU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xaU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xaU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xaU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xbU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xbU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xbU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xbU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xbU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xbU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xbU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xbU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xcU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xcU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xcU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xcU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xcU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xcU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xcU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xcU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xdU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xdU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xdU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xdU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xdU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xdU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xdU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xdU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xeU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xeU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xeU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xeU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xeU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xeU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xeU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xeU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xfU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xfU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xfU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xfU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xfU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xfU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xfU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0xfU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x10U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x10U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x10U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x10U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x10U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x10U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x10U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x10U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x11U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x11U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x11U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x11U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x11U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x11U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x11U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x11U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x12U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x12U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x12U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x12U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x12U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x12U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x12U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x12U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x13U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x13U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x13U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x13U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x13U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x13U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x13U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x13U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x14U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x14U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x14U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x14U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x14U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x14U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x14U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x14U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x15U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x15U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x15U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x15U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x15U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x15U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x15U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x15U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x16U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x16U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x16U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x16U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x16U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x16U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x16U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x16U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x17U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x17U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x17U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x17U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x17U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x17U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x17U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x17U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x18U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x18U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x18U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x18U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x18U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x18U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x18U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x18U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x19U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x19U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x19U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x19U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x19U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x19U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x19U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x19U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1aU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1aU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1aU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1aU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1aU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1aU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1aU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1aU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1bU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1bU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1bU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1bU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1bU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1bU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1bU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1bU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1cU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1cU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1cU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1cU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1cU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1cU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1cU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1cU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1dU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1dU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1dU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1dU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1dU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1dU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1dU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1dU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1eU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1eU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1eU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1eU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1eU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1eU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1eU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1eU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1fU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1fU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1fU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1fU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1fU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1fU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1fU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[0x1fU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (__Vdlyvset__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32) {
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[__Vdlyvdim0__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32][0U] 
            = __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[0U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[__Vdlyvdim0__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32][1U] 
            = __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[1U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[__Vdlyvdim0__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32][2U] 
            = __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[2U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[__Vdlyvdim0__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32][3U] 
            = __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[3U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[__Vdlyvdim0__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32][4U] 
            = __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[4U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[__Vdlyvdim0__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32][5U] 
            = __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[5U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[__Vdlyvdim0__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32][6U] 
            = __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[6U];
        vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[__Vdlyvdim0__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32][7U] 
            = __Vdlyvval__top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs__v32[7U];
    }
    if (__Vdlyvset__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v0) {
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[1U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[2U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[3U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[4U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[5U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[6U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[7U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[8U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[9U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0xaU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0xbU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0xcU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0xdU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0xeU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0xfU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x10U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x11U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x12U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x13U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x14U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x15U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x16U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x17U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x18U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x19U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x1aU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x1bU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x1cU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x1dU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x1eU] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v32) {
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[__Vdlyvdim0__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v32] 
            = __Vdlyvval__top__DOT__RVCPU__DOT__REGFILE__DOT__regs__v32;
    }
    vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__pc 
        = __Vdly__top__DOT__RVCPU__DOT__IF_Stage__DOT__pc;
}

void Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, IData/*31:0*/ rIdx, IData/*31:0*/ &ram_read_helper__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h18f16aa6__0;
    // Body
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->rst))), 
                                                                (vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr 
                                                                 >> 2U), vlSelf->__Vfunc_ram_read_helper__0__Vfuncout);
    vlSelf->top__DOT__rdata_inst = vlSelf->__Vfunc_ram_read_helper__0__Vfuncout;
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_b 
        = ((0x1000U & (vlSelf->top__DOT__rdata_inst 
                       >> 0x13U)) | ((0x800U & (vlSelf->top__DOT__rdata_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->top__DOT__rdata_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->top__DOT__rdata_inst 
                                            >> 7U)))));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_j 
        = ((0x100000U & (vlSelf->top__DOT__rdata_inst 
                         >> 0xbU)) | ((0xff000U & vlSelf->top__DOT__rdata_inst) 
                                      | ((0x800U & 
                                          (vlSelf->top__DOT__rdata_inst 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->top__DOT__rdata_inst 
                                               >> 0x14U)))));
    vlSelf->top__DOT__RVCPU__DOT__jump_en = ((~ (IData)(vlSelf->rst)) 
                                             & (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_s 
        = ((0xfe0U & (vlSelf->top__DOT__rdata_inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                             >> 7U)));
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi 
        = (IData)((0x94003057U == (0xfc00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi 
        = (IData)((0x3057U == (0xfc00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv 
        = (IData)((0x94000057U == (0xfc00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv 
        = (IData)((0x57U == (0xfc00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti 
        = (IData)((0x2013U == (0x707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_and 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_add 
        = (IData)((0x33U == (0xfe00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sll 
        = (IData)((0x1033U == (0xfe00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_mul 
        = (IData)((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v 
        = (IData)((0x6007U == (0xfc00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v 
        = (IData)((0x6027U == (0xfc00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx 
        = (IData)((0x94004057U == (0xfc00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx 
        = (IData)((0x4057U == (0xfc00707fU & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__wb_ena = (((((((((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi) 
                                                   | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti)) 
                                                  | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw)) 
                                                 | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_add)) 
                                                | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_and)) 
                                               | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sll)) 
                                              | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_mul)) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__rdata_inst))) 
                                            | (0x37U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__rdata_inst)));
    vlSelf->top__DOT__RVCPU__DOT__alu_opcode = ((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : 
                                                (((((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi) 
                                                    | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_add)) 
                                                   | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw)) 
                                                  | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw))
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_and)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sll)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_blt)
                                                     ? 6U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__rdata_inst))
                                                      ? 7U
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__rdata_inst))
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_mul)
                                                        ? 4U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti)
                                                         ? 5U
                                                         : 0U)))))))));
    vlSelf->top__DOT__RVCPU__DOT__branch_en = ((~ (IData)(vlSelf->rst)) 
                                               & (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_blt));
    vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena = ((~ (IData)(vlSelf->rst)) 
                                               & ((((((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_add) 
                                                      | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_and)) 
                                                     | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sll)) 
                                                    | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_blt)) 
                                                   | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_mul)) 
                                                  | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw)));
    vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (((((((((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi) 
                                                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti)) 
                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw)) 
                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_add)) 
                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_and)) 
                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sll)) 
                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_blt)) 
                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_mul)) 
                                                      | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw)));
    vlSelf->top__DOT__RVCPU__DOT__vwb_ena = (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v) 
                                                  | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx)) 
                                                 | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                               | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                              | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi));
    if (vlSelf->rst) {
        vlSelf->top__DOT__RVCPU__DOT__v_alu_opcode = 0x80U;
        __Vtemp_h18f16aa6__0[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        __Vtemp_h18f16aa6__0[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h18f16aa6__0[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h18f16aa6__0[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h18f16aa6__0[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h18f16aa6__0[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h18f16aa6__0[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h18f16aa6__0[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
    } else {
        vlSelf->top__DOT__RVCPU__DOT__v_alu_opcode 
            = ((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx) 
                 | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv))
                ? 0x81U : ((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv))
                            ? 0x82U : 0x80U));
        if (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                 | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
               | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
              | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))) {
            if (vlSelf->rst) {
                __Vtemp_h18f16aa6__0[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
                __Vtemp_h18f16aa6__0[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
                __Vtemp_h18f16aa6__0[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
                __Vtemp_h18f16aa6__0[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
                __Vtemp_h18f16aa6__0[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
                __Vtemp_h18f16aa6__0[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
                __Vtemp_h18f16aa6__0[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
                __Vtemp_h18f16aa6__0[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
            } else if (((~ (IData)(vlSelf->rst)) & 
                        (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                              | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))) {
                __Vtemp_h18f16aa6__0[0U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->rst) ? 0U : (0x1fU 
                                                   & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__rdata_inst 
                                                          >> 0x14U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__rdata_inst 
                                                           >> 7U))
                                                        : 0U))))][0U];
                __Vtemp_h18f16aa6__0[1U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->rst) ? 0U : (0x1fU 
                                                   & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__rdata_inst 
                                                          >> 0x14U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__rdata_inst 
                                                           >> 7U))
                                                        : 0U))))][1U];
                __Vtemp_h18f16aa6__0[2U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->rst) ? 0U : (0x1fU 
                                                   & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__rdata_inst 
                                                          >> 0x14U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__rdata_inst 
                                                           >> 7U))
                                                        : 0U))))][2U];
                __Vtemp_h18f16aa6__0[3U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->rst) ? 0U : (0x1fU 
                                                   & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__rdata_inst 
                                                          >> 0x14U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__rdata_inst 
                                                           >> 7U))
                                                        : 0U))))][3U];
                __Vtemp_h18f16aa6__0[4U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->rst) ? 0U : (0x1fU 
                                                   & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__rdata_inst 
                                                          >> 0x14U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__rdata_inst 
                                                           >> 7U))
                                                        : 0U))))][4U];
                __Vtemp_h18f16aa6__0[5U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->rst) ? 0U : (0x1fU 
                                                   & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__rdata_inst 
                                                          >> 0x14U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__rdata_inst 
                                                           >> 7U))
                                                        : 0U))))][5U];
                __Vtemp_h18f16aa6__0[6U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->rst) ? 0U : (0x1fU 
                                                   & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__rdata_inst 
                                                          >> 0x14U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__rdata_inst 
                                                           >> 7U))
                                                        : 0U))))][6U];
                __Vtemp_h18f16aa6__0[7U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->rst) ? 0U : (0x1fU 
                                                   & (((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                         | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__rdata_inst 
                                                          >> 0x14U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__rdata_inst 
                                                           >> 7U))
                                                        : 0U))))][7U];
            } else {
                __Vtemp_h18f16aa6__0[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
                __Vtemp_h18f16aa6__0[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
                __Vtemp_h18f16aa6__0[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
                __Vtemp_h18f16aa6__0[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
                __Vtemp_h18f16aa6__0[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
                __Vtemp_h18f16aa6__0[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
                __Vtemp_h18f16aa6__0[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
                __Vtemp_h18f16aa6__0[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
            }
        } else {
            __Vtemp_h18f16aa6__0[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
            __Vtemp_h18f16aa6__0[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
            __Vtemp_h18f16aa6__0[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
            __Vtemp_h18f16aa6__0[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
            __Vtemp_h18f16aa6__0[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
            __Vtemp_h18f16aa6__0[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
            __Vtemp_h18f16aa6__0[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
            __Vtemp_h18f16aa6__0[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        }
    }
    vlSelf->top__DOT__RVCPU__DOT__operand_vs2[0U] = 
        __Vtemp_h18f16aa6__0[0U];
    vlSelf->top__DOT__RVCPU__DOT__operand_vs2[1U] = 
        __Vtemp_h18f16aa6__0[1U];
    vlSelf->top__DOT__RVCPU__DOT__operand_vs2[2U] = 
        __Vtemp_h18f16aa6__0[2U];
    vlSelf->top__DOT__RVCPU__DOT__operand_vs2[3U] = 
        __Vtemp_h18f16aa6__0[3U];
    vlSelf->top__DOT__RVCPU__DOT__operand_vs2[4U] = 
        __Vtemp_h18f16aa6__0[4U];
    vlSelf->top__DOT__RVCPU__DOT__operand_vs2[5U] = 
        __Vtemp_h18f16aa6__0[5U];
    vlSelf->top__DOT__RVCPU__DOT__operand_vs2[6U] = 
        __Vtemp_h18f16aa6__0[6U];
    vlSelf->top__DOT__RVCPU__DOT__operand_vs2[7U] = 
        __Vtemp_h18f16aa6__0[7U];
    vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena = ((~ (IData)(vlSelf->rst)) 
                                               & ((((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                      | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                     | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                    | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                   | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                  | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi)));
    vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & ((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                        | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                       | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)) 
                                                      | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)));
    vlSelf->top__DOT__RVCPU__DOT__rd_w_addr = ((IData)(vlSelf->rst)
                                                ? 0U
                                                : ((IData)(vlSelf->top__DOT__RVCPU__DOT__wb_ena)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__rdata_inst 
                                                       >> 7U))
                                                    : 0U));
    vlSelf->top__DOT__RVCPU__DOT__transfer_en = ((IData)(vlSelf->top__DOT__RVCPU__DOT__jump_en) 
                                                 | (IData)(vlSelf->top__DOT__RVCPU__DOT__branch_en));
    vlSelf->top__DOT__RVCPU__DOT__operand_rs2 = (((
                                                   (((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi) 
                                                     | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti)) 
                                                    | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw)) 
                                                   | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw)) 
                                                  | (0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__rdata_inst)))
                                                  ? 
                                                 ((((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi) 
                                                    | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti)) 
                                                   | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__rdata_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__rdata_inst 
                                                      >> 0x14U))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw)
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_s) 
                                                                    >> 0xbU)))) 
                                                     << 0xcU) 
                                                    | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_s))
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__rdata_inst))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->top__DOT__rdata_inst)
                                                     : 0U)))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena)
                                                   ? 
                                                  ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena)
                                                     ? 
                                                    vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs
                                                    [
                                                    ((IData)(vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena)
                                                      ? 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__rdata_inst 
                                                         >> 0x14U))
                                                      : 0U)]
                                                     : 0U))
                                                   : 0U));
    if (vlSelf->rst) {
        vlSelf->top__DOT__RVCPU__DOT__vd_w_addr = 0U;
        vlSelf->top__DOT__RVCPU__DOT__rs1_data = 0U;
    } else {
        vlSelf->top__DOT__RVCPU__DOT__vd_w_addr = ((IData)(vlSelf->top__DOT__RVCPU__DOT__vwb_ena)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__rdata_inst 
                                                       >> 7U))
                                                    : 0U);
        vlSelf->top__DOT__RVCPU__DOT__rs1_data = (((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena) 
                                                   | (IData)(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena))
                                                   ? 
                                                  vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__rdata_inst 
                                                           >> 0xfU))
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena)
                                                        ? 
                                                       ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : 
                                                        (((((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                                                            | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                           | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)) 
                                                          | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                          ? 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__rdata_inst 
                                                             >> 0xfU))
                                                          : 0U))
                                                        : 0U)))]
                                                   : 0U);
    }
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                 >> 2U), vlSelf->__Vfunc_ram_read_helper__3__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0U] = vlSelf->__Vfunc_ram_read_helper__3__Vfuncout;
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                  >> 2U)), vlSelf->__Vfunc_ram_read_helper__4__Vfuncout);
    vlSelf->top__DOT__vram_r_data[1U] = vlSelf->__Vfunc_ram_read_helper__4__Vfuncout;
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((IData)(2U) 
                                                                 + 
                                                                 (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                  >> 2U)), vlSelf->__Vfunc_ram_read_helper__5__Vfuncout);
    vlSelf->top__DOT__vram_r_data[2U] = vlSelf->__Vfunc_ram_read_helper__5__Vfuncout;
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((IData)(3U) 
                                                                 + 
                                                                 (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                  >> 2U)), vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
    vlSelf->top__DOT__vram_r_data[3U] = vlSelf->__Vfunc_ram_read_helper__6__Vfuncout;
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((IData)(4U) 
                                                                 + 
                                                                 (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                  >> 2U)), vlSelf->__Vfunc_ram_read_helper__7__Vfuncout);
    vlSelf->top__DOT__vram_r_data[4U] = vlSelf->__Vfunc_ram_read_helper__7__Vfuncout;
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((IData)(5U) 
                                                                 + 
                                                                 (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                  >> 2U)), vlSelf->__Vfunc_ram_read_helper__8__Vfuncout);
    vlSelf->top__DOT__vram_r_data[5U] = vlSelf->__Vfunc_ram_read_helper__8__Vfuncout;
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((IData)(6U) 
                                                                 + 
                                                                 (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                  >> 2U)), vlSelf->__Vfunc_ram_read_helper__9__Vfuncout);
    vlSelf->top__DOT__vram_r_data[6U] = vlSelf->__Vfunc_ram_read_helper__9__Vfuncout;
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((IData)(7U) 
                                                                 + 
                                                                 (vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                                                  >> 2U)), vlSelf->__Vfunc_ram_read_helper__10__Vfuncout);
    vlSelf->top__DOT__vram_r_data[7U] = vlSelf->__Vfunc_ram_read_helper__10__Vfuncout;
    vlSelf->top__DOT__RVCPU__DOT__operand_rs1 = ((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena)
                                                  ? vlSelf->top__DOT__RVCPU__DOT__rs1_data
                                                  : 0U);
    if (vlSelf->rst) {
        vlSelf->top__DOT__RVCPU__DOT__operand_vs1[0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->top__DOT__RVCPU__DOT__operand_vs1[1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->top__DOT__RVCPU__DOT__operand_vs1[2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->top__DOT__RVCPU__DOT__operand_vs1[3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->top__DOT__RVCPU__DOT__operand_vs1[4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->top__DOT__RVCPU__DOT__operand_vs1[5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->top__DOT__RVCPU__DOT__operand_vs1[6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->top__DOT__RVCPU__DOT__operand_vs1[7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->top__DOT__RVCPU__DOT__EXE_Stage__DOT__alu_result = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
    } else {
        if (((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
             | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx))) {
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[0U] 
                = vlSelf->top__DOT__RVCPU__DOT__rs1_data;
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[1U] 
                = vlSelf->top__DOT__RVCPU__DOT__rs1_data;
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[2U] 
                = vlSelf->top__DOT__RVCPU__DOT__rs1_data;
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[3U] 
                = vlSelf->top__DOT__RVCPU__DOT__rs1_data;
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[4U] 
                = vlSelf->top__DOT__RVCPU__DOT__rs1_data;
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[5U] 
                = vlSelf->top__DOT__RVCPU__DOT__rs1_data;
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[6U] 
                = vlSelf->top__DOT__RVCPU__DOT__rs1_data;
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[7U] 
                = vlSelf->top__DOT__RVCPU__DOT__rs1_data;
        } else if (((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv) 
                    | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv))) {
            if (vlSelf->rst) {
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[0U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[0U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[1U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[1U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[2U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[2U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[3U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[3U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[4U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[4U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[5U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[5U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[6U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[6U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[7U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[7U];
            } else if (vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena) {
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[0U] 
                    = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
                       ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                   >> 0xfU)) : 0U)][0U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[1U] 
                    = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
                       ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                   >> 0xfU)) : 0U)][1U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[2U] 
                    = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
                       ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                   >> 0xfU)) : 0U)][2U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[3U] 
                    = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
                       ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                   >> 0xfU)) : 0U)][3U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[4U] 
                    = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
                       ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                   >> 0xfU)) : 0U)][4U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[5U] 
                    = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
                       ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                   >> 0xfU)) : 0U)][5U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[6U] 
                    = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
                       ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                   >> 0xfU)) : 0U)][6U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[7U] 
                    = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs
                    [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
                       ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                   >> 0xfU)) : 0U)][7U];
            } else {
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[0U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[0U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[1U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[1U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[2U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[2U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[3U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[3U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[4U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[4U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[5U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[5U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[6U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[6U];
                vlSelf->top__DOT__RVCPU__DOT__operand_vs1[7U] 
                    = Vtop__ConstPool__CONST_h9e67c271_0[7U];
            }
        } else if (((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi) 
                    | (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi))) {
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[0U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__rdata_inst 
                                      >> 0x13U)))) 
                    << 5U) | (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                       >> 0xfU)));
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[1U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__rdata_inst 
                                      >> 0x13U)))) 
                    << 5U) | (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                       >> 0xfU)));
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[2U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__rdata_inst 
                                      >> 0x13U)))) 
                    << 5U) | (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                       >> 0xfU)));
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__rdata_inst 
                                      >> 0x13U)))) 
                    << 5U) | (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                       >> 0xfU)));
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[4U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__rdata_inst 
                                      >> 0x13U)))) 
                    << 5U) | (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                       >> 0xfU)));
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[5U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__rdata_inst 
                                      >> 0x13U)))) 
                    << 5U) | (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                       >> 0xfU)));
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[6U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__rdata_inst 
                                      >> 0x13U)))) 
                    << 5U) | (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                       >> 0xfU)));
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[7U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__rdata_inst 
                                      >> 0x13U)))) 
                    << 5U) | (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                       >> 0xfU)));
        } else {
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[0U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[1U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[2U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[3U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[4U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[5U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[6U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->top__DOT__RVCPU__DOT__operand_vs1[7U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        }
        vlSelf->top__DOT__RVCPU__DOT__EXE_Stage__DOT__alu_result 
            = (((((((((1U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode)) 
                      | (2U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))) 
                     | (3U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))) 
                    | (6U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))) 
                   | (7U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))) 
                  | (4U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))) 
                 | (5U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))) 
                | (8U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode)))
                ? ((1U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                    ? (vlSelf->top__DOT__RVCPU__DOT__operand_rs1 
                       + vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                    : ((2U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                        ? (vlSelf->top__DOT__RVCPU__DOT__operand_rs1 
                           & vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                        : ((3U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                            ? ((0x1fU >= vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                ? (vlSelf->top__DOT__RVCPU__DOT__operand_rs1 
                                   << vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                : 0U) : ((6U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                                          ? ((vlSelf->top__DOT__RVCPU__DOT__operand_rs1 
                                              < vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                              ? (vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr 
                                                 + 
                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__branch_en)
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_b) 
                                                                   >> 0xcU)))) 
                                                    << 0xdU) 
                                                   | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_b))
                                                   : 0U))
                                              : ((IData)(4U) 
                                                 + vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr))
                                          : ((7U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                                              ? (vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr 
                                                 + 
                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__jump_en)
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_j 
                                                                   >> 0x14U)))) 
                                                    << 0x15U) 
                                                   | vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_j)
                                                   : 0U))
                                              : ((4U 
                                                  == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                                                  ? 
                                                 (vlSelf->top__DOT__RVCPU__DOT__operand_rs1 
                                                  * vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                                                   ? 
                                                  ((vlSelf->top__DOT__RVCPU__DOT__operand_rs1 
                                                    < vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                                    ? 1U
                                                    : 0U)
                                                   : vlSelf->top__DOT__RVCPU__DOT__operand_rs2)))))))
                : 0U);
        if ((0x80U == (IData)(vlSelf->top__DOT__RVCPU__DOT__v_alu_opcode))) {
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
        } else if ((0x82U == (IData)(vlSelf->top__DOT__RVCPU__DOT__v_alu_opcode))) {
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[7U] 
                   + vlSelf->top__DOT__RVCPU__DOT__operand_vs2[7U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[0U] 
                   + vlSelf->top__DOT__RVCPU__DOT__operand_vs2[0U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[1U] 
                   + vlSelf->top__DOT__RVCPU__DOT__operand_vs2[1U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[2U] 
                   + vlSelf->top__DOT__RVCPU__DOT__operand_vs2[2U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[3U] 
                   + vlSelf->top__DOT__RVCPU__DOT__operand_vs2[3U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[4U] 
                   + vlSelf->top__DOT__RVCPU__DOT__operand_vs2[4U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[5U] 
                   + vlSelf->top__DOT__RVCPU__DOT__operand_vs2[5U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[6U] 
                   + vlSelf->top__DOT__RVCPU__DOT__operand_vs2[6U]);
        } else if ((0x81U == (IData)(vlSelf->top__DOT__RVCPU__DOT__v_alu_opcode))) {
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[7U] 
                   * vlSelf->top__DOT__RVCPU__DOT__operand_vs2[7U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[0U] 
                   * vlSelf->top__DOT__RVCPU__DOT__operand_vs2[0U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[1U] 
                   * vlSelf->top__DOT__RVCPU__DOT__operand_vs2[1U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[2U] 
                   * vlSelf->top__DOT__RVCPU__DOT__operand_vs2[2U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[3U] 
                   * vlSelf->top__DOT__RVCPU__DOT__operand_vs2[3U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[4U] 
                   * vlSelf->top__DOT__RVCPU__DOT__operand_vs2[4U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[5U] 
                   * vlSelf->top__DOT__RVCPU__DOT__operand_vs2[5U]);
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] 
                = (vlSelf->top__DOT__RVCPU__DOT__operand_vs1[6U] 
                   * vlSelf->top__DOT__RVCPU__DOT__operand_vs2[6U]);
        } else {
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U] = 0U;
            vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U] = 0U;
        }
    }
    vlSelf->top__DOT__RVCPU__DOT__transfer_pc = ((IData)(vlSelf->top__DOT__RVCPU__DOT__transfer_en)
                                                  ? vlSelf->top__DOT__RVCPU__DOT__EXE_Stage__DOT__alu_result
                                                  : 0x80000000U);
    vlSelf->top__DOT__RVCPU__DOT__exe_result = ((IData)(vlSelf->top__DOT__RVCPU__DOT__jump_en)
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr)
                                                 : vlSelf->top__DOT__RVCPU__DOT__EXE_Stage__DOT__alu_result);
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw, 
                                                                (vlSelf->top__DOT__RVCPU__DOT__exe_result 
                                                                 >> 2U), vlSelf->__Vfunc_ram_read_helper__1__Vfuncout);
    vlSelf->top__DOT__ram_r_data = vlSelf->__Vfunc_ram_read_helper__1__Vfuncout;
}
