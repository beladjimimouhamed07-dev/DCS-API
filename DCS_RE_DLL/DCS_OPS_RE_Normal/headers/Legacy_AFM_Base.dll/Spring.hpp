#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Spring
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Spring
{
public:

    // RVA: 0x372 | Ordinal: 883
        void Construct(void);

    // RVA: 0x3D7 | Ordinal: 984
        void Create(void);

    // RVA: 0xCC | Ordinal: 205
        void Spring(class AFM::Spring &&);

    // RVA: 0xCD | Ordinal: 206
        void Spring(class AFM::Spring const &);

    // RVA: 0xCE | Ordinal: 207
        void Spring(void);

    // RVA: 0x52D | Ordinal: 1326
        void calcForceByLength(void);

    // RVA: 0x53B | Ordinal: 1340
        void calcLengthByForce(void);

    // RVA: 0x586 | Ordinal: 1415
        void getBasicLength(double *);

    // RVA: 0x5AA | Ordinal: 1451
        void getForce(double *);

    // RVA: 0x5AC | Ordinal: 1453
        void getForceFactor(double *);

    // RVA: 0x6B5 | Ordinal: 1718
        void getLength(double *);

    // RVA: 0x6CE | Ordinal: 1743
        void getMaxLength(double *);

    // RVA: 0x6DD | Ordinal: 1758
        void getMinLength(double *);

    // RVA: 0x78D | Ordinal: 1934
        void setBasicLength(double);

    // RVA: 0x7B5 | Ordinal: 1974
        void setForce(double);

    // RVA: 0x7B7 | Ordinal: 1976
        void setForceFactor(double);

    // RVA: 0x7B8 | Ordinal: 1977
        void setForceFactorRate(double);

    // RVA: 0x7FF | Ordinal: 2048
        void setLength(double);

    // RVA: 0x815 | Ordinal: 2070
        void setMaxLength(double);

    // RVA: 0x825 | Ordinal: 2086
        void setMinLength(double);

    // RVA: 0x146 | Ordinal: 327
        void _Spring(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_SPRING_HPP
