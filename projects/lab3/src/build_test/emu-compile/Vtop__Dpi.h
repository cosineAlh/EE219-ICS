// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ram/ram_helper.v:9:29
    extern int ram_read_helper(svBit en, int rIdx);
    // DPI import at vsrc/ram/ram_helper.v:1:30
    extern void ram_write_helper(int wIdx, int wdata, int wmask, svBit wen);

#ifdef __cplusplus
}
#endif

#endif  // guard
