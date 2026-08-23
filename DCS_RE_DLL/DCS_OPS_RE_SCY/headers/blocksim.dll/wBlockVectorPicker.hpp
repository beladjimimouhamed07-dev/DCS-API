#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockVectorPicker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockVectorPicker
{
public:

    // RVA: 0x279 | Ordinal: 634
        void __getInputPorts(void);

    // RVA: 0x281 | Ordinal: 642
        void __getOutputPorts(void);

    // RVA: 0x3D4 | Ordinal: 981
        void getDesc_(void);

    // RVA: 0x3EC | Ordinal: 1005
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x472 | Ordinal: 1139
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0x101 | Ordinal: 258
        void wBlockVectorPicker(class wBlockVectorPicker &&);

    // RVA: 0x102 | Ordinal: 259
        void wBlockVectorPicker(class wBlockVectorPicker const &);

    // RVA: 0x103 | Ordinal: 260
        void wBlockVectorPicker(class wBlockVectorPickerDescriptor const *);

    // RVA: 0x165 | Ordinal: 358
        void _wBlockVectorPicker(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKVECTORPICKER_HPP
