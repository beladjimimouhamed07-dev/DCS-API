#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Position
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Position
{
public:

    // RVA: 0x366 | Ordinal: 871
        void Construct(void);

    // RVA: 0x3C8 | Ordinal: 969
        void Create(void);

    // RVA: 0x9F | Ordinal: 160
        void Position(class AFM::Position &&);

    // RVA: 0xA0 | Ordinal: 161
        void Position(class AFM::Position const &);

    // RVA: 0xA1 | Ordinal: 162
        void Position(void);

    // RVA: 0x6FC | Ordinal: 1789
        void getPositionX_bcs(double *);

    // RVA: 0x6FD | Ordinal: 1790
        void getPositionY_bcs(double *);

    // RVA: 0x6FE | Ordinal: 1791
        void getPositionZ_bcs(double *);

    // RVA: 0x6FF | Ordinal: 1792
        void getPosition_bcs(double *);

    // RVA: 0x874 | Ordinal: 2165
        void setPositionX_bcs(double);

    // RVA: 0x875 | Ordinal: 2166
        void setPositionY_bcs(double);

    // RVA: 0x876 | Ordinal: 2167
        void setPositionZ_bcs(double);

    // RVA: 0x877 | Ordinal: 2168
        void setPosition_bcs(double *);

    // RVA: 0x137 | Ordinal: 312
        void _Position(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_POSITION_HPP
