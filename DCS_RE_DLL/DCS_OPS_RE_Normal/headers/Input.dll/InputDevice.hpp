#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Input.dll
// Class: InputDevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class InputDevice
{
public:

    // RVA: 0x4 | Ordinal: 5
        void InputDevice(class InputDevice const &);

    // RVA: 0x5 | Ordinal: 6
        void InputDevice(enum InputDeviceTypes, class ed::basic_string<char> const &);

    // RVA: 0x21 | Ordinal: 34
        void acquire(void);

    // RVA: 0x36 | Ordinal: 55
        void flush(class std::function<void __cdecl(class InputDeviceAction const &)>, bool);

    // RVA: 0x3B | Ordinal: 60
        void getAxisName(int) const;

    // RVA: 0x3C | Ordinal: 61
        void getDefaultKeyName(int);

    // RVA: 0x44 | Ordinal: 69
        void getDisabled(void) const;

    // RVA: 0x48 | Ordinal: 73
        void getForceFeedback(void) const;

    // RVA: 0x4A | Ordinal: 75
        void getFullSync(void) const;

    // RVA: 0x4D | Ordinal: 78
        void getId(void) const;

    // RVA: 0x51 | Ordinal: 82
        void getKeyName(int) const;

    // RVA: 0x58 | Ordinal: 89
        void getName(void) const;

    // RVA: 0x5D | Ordinal: 94
        void getType(void) const;

    // RVA: 0x84 | Ordinal: 133
        void setDisabled(bool);

    // RVA: 0x88 | Ordinal: 137
        void setFullSync(bool);

    // RVA: 0x8A | Ordinal: 139
        void setId(int);

    // RVA: 0x9C | Ordinal: 157
        void unacquire(void);

    // RVA: 0xB | Ordinal: 12
        void _InputDevice(void);
};

// DCS_OPS_RE_INPUT.DLL_INPUTDEVICE_HPP
