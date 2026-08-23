#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Input.dll
// Class: InputKeyAction
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class InputKeyAction
{
public:

    // RVA: 0x8 | Ordinal: 9
        void InputKeyAction(int, int, int);

    // RVA: 0x45 | Ordinal: 70
        void getDownAction(void) const;

    // RVA: 0x5A | Ordinal: 91
        void getPressedAction(void) const;

    // RVA: 0x62 | Ordinal: 99
        void getUpAction(void) const;

    // RVA: 0x64 | Ordinal: 101
        void getValueForDown(void) const;

    // RVA: 0x65 | Ordinal: 102
        void getValueForPressed(void) const;

    // RVA: 0x66 | Ordinal: 103
        void getValueForUp(void) const;

    // RVA: 0x69 | Ordinal: 106
        void hasValueForDown(void) const;

    // RVA: 0x6A | Ordinal: 107
        void hasValueForPressed(void) const;

    // RVA: 0x6B | Ordinal: 108
        void hasValueForUp(void) const;

    // RVA: 0x85 | Ordinal: 134
        void setDownAction(int);

    // RVA: 0x8E | Ordinal: 143
        void setPressedAction(int);

    // RVA: 0x92 | Ordinal: 147
        void setUpAction(int);

    // RVA: 0x93 | Ordinal: 148
        void setValueForDown(double);

    // RVA: 0x94 | Ordinal: 149
        void setValueForPressed(double);

    // RVA: 0x95 | Ordinal: 150
        void setValueForUp(double);
};

// DCS_OPS_RE_INPUT.DLL_INPUTKEYACTION_HPP
