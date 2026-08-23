#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: Transportable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Transportable
{
public:

    // RVA: 0x12 | Ordinal: 19
        void Transportable(class Transportable const &);

    // RVA: 0x13 | Ordinal: 20
        void Transportable(void);

    // RVA: 0x29F | Ordinal: 672
        void getMyTransport(void) const;

    // RVA: 0x2DE | Ordinal: 735
        void getSize(void) const;

    // RVA: 0x305 | Ordinal: 774
        void getWasLoaded(void) const;

    // RVA: 0x365 | Ordinal: 870
        void isTransportable(void) const;

    // RVA: 0x4C1 | Ordinal: 1218
        void setMyTransport(unsigned int);

    // RVA: 0x4E2 | Ordinal: 1251
        void setSize(int);

    // RVA: 0x4FF | Ordinal: 1280
        void setWasLoaded(bool);

    // RVA: 0x30 | Ordinal: 49
        void _Transportable(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_TRANSPORTABLE_HPP
