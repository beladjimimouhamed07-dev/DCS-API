#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: MarshalClientData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MarshalClientData
{
public:

    // RVA: 0xC | Ordinal: 13
        void MarshalClientData(struct MarshalClientData &&);

    // RVA: 0xD | Ordinal: 14
        void MarshalClientData(struct MarshalClientData const &);

    // RVA: 0xE | Ordinal: 15
        void MarshalClientData(unsigned int);

    // RVA: 0xF | Ordinal: 16
        void MarshalClientData(void);

    // RVA: 0x18F | Ordinal: 400
        void getEAT(void) const;

    // RVA: 0x1A7 | Ordinal: 424
        void getLA_(void) const;

    // RVA: 0x1CF | Ordinal: 464
        void getRange(void) const;

    // RVA: 0x1DD | Ordinal: 478
        void getStackAltitude(void) const;

    // RVA: 0x1DE | Ordinal: 479
        void getStatus(void) const;

    // RVA: 0x22A | Ordinal: 555
        void init(unsigned int);

    // RVA: 0x315 | Ordinal: 790
        void setStatus(enum MarshalStatus);

    // RVA: 0x2F | Ordinal: 48
        void _MarshalClientData(void);
};

// DCS_OPS_RE_FLIGHT.DLL_MARSHALCLIENTDATA_HPP
