#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Input.dll
// Class: InputDeviceAction
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class InputDeviceAction
{
public:

    // RVA: 0x19 | Ordinal: 26
        void Absolute(bool);

    // RVA: 0x1A | Ordinal: 27
        void DeviceId(int);

    // RVA: 0x1B | Ordinal: 28
        void Fake(bool);

    // RVA: 0x6 | Ordinal: 7
        void InputDeviceAction(void);

    // RVA: 0x1C | Ordinal: 29
        void IsKey(bool);

    // RVA: 0x1D | Ordinal: 30
        void Order(int);

    // RVA: 0x1E | Ordinal: 31
        void Source(unsigned int);

    // RVA: 0x1F | Ordinal: 32
        void Time(unsigned int);

    // RVA: 0x20 | Ordinal: 33
        void Value(int);

    // RVA: 0x15 | Ordinal: 22
        void operator_(class InputDeviceAction const &) const;
};

// DCS_OPS_RE_INPUT.DLL_INPUTDEVICEACTION_HPP
