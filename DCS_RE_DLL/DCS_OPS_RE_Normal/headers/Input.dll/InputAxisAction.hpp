#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Input.dll
// Class: InputAxisAction
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class InputAxisAction
{
public:

    // RVA: 0x3 | Ordinal: 4
        void InputAxisAction(int, unsigned int);

    // RVA: 0x37 | Ordinal: 56
        void getAction(void) const;

    // RVA: 0x5B | Ordinal: 92
        void getTargetDevice(void) const;

    // RVA: 0x63 | Ordinal: 100
        void getValue(double) const;

    // RVA: 0x7F | Ordinal: 128
        void setAction(int);

    // RVA: 0x8F | Ordinal: 144
        void setTargetDevice(int);
};

// DCS_OPS_RE_INPUT.DLL_INPUTAXISACTION_HPP
