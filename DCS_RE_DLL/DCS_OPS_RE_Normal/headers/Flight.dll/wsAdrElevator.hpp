#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wsAdrElevator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wsAdrElevator
{
public:

    // RVA: 0xAD | Ordinal: 174
        void Get_In_Taxi(unsigned int);

    // RVA: 0xB3 | Ordinal: 180
        void Get_Out_Taxi(unsigned int);

    // RVA: 0xBF | Ordinal: 192
        void Get_Terminal(unsigned int);

    // RVA: 0x24 | Ordinal: 37
        void wsAdrElevator(struct wsAdrElevator const &);

    // RVA: 0x25 | Ordinal: 38
        void wsAdrElevator(void);

    // RVA: 0x3D | Ordinal: 62
        void _wsAdrElevator(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WSADRELEVATOR_HPP
