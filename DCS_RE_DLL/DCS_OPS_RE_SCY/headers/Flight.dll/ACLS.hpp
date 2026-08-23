#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: ACLS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ACLS
{
public:

    // RVA: 0x0 | Ordinal: 1
        void ACLS(struct ACLS const &);

    // RVA: 0x1 | Ordinal: 2
        void ACLS(void);

    // RVA: 0xC6 | Ordinal: 199
        void Init(class woATC *);

    // RVA: 0x163 | Ordinal: 356
        void freeClient(unsigned int);

    // RVA: 0x268 | Ordinal: 617
        void lockByACLS(unsigned int);

    // RVA: 0x332 | Ordinal: 819
        void timeStep(void);

    // RVA: 0x338 | Ordinal: 825
        void updateACLS(void);

    // RVA: 0x2A | Ordinal: 43
        void _ACLS(void);
};

// DCS_OPS_RE_FLIGHT.DLL_ACLS_HPP
