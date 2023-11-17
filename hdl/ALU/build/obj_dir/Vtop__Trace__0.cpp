// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__result_add),4);
        bufp->chgCData(oldp+1,(((8U & (IData)(vlSelf->top__DOT__result_add))
                                 ? 1U : 0U)),4);
        bufp->chgCData(oldp+2,(((0U != (IData)(vlSelf->top__DOT__result_add))
                                 ? 0U : 1U)),4);
        bufp->chgBit(oldp+3,((1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__result_add)))))));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__cin));
    }
    bufp->chgCData(oldp+5,(vlSelf->a),4);
    bufp->chgCData(oldp+6,(vlSelf->b),4);
    bufp->chgCData(oldp+7,(vlSelf->op),3);
    bufp->chgCData(oldp+8,(vlSelf->out),4);
    bufp->chgCData(oldp+9,((0xfU & (~ (IData)(vlSelf->a)))),4);
    bufp->chgCData(oldp+10,(((IData)(vlSelf->a) & (IData)(vlSelf->b))),4);
    bufp->chgCData(oldp+11,(((IData)(vlSelf->a) | (IData)(vlSelf->b))),4);
    bufp->chgCData(oldp+12,(((IData)(vlSelf->a) ^ (IData)(vlSelf->b))),4);
    bufp->chgCData(oldp+13,((0xfU & ((IData)(vlSelf->top__DOT__cin)
                                      ? (~ (IData)(vlSelf->b))
                                      : (IData)(vlSelf->b)))),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
