#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: SpeedBrakeDn
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class SpeedBrakeDn
{
public:

    // RVA: 0x3D5 | Ordinal: 982
        void Create(void);

    // RVA: 0x418 | Ordinal: 1049
        void Destroy(void);

    // RVA: 0x460 | Ordinal: 1121
        void Instance(void);

    // RVA: 0xC6 | Ordinal: 199
        void SpeedBrakeDn(void);

    // RVA: 0xC7 | Ordinal: 200
        void SpeedBrakeDn(class AFM::SpeedBrakeDn &&);

    // RVA: 0xC8 | Ordinal: 201
        void SpeedBrakeDn(class AFM::SpeedBrakeDn const &);

    // RVA: 0x51F | Ordinal: 1312
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x144 | Ordinal: 325
        void _SpeedBrakeDn(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_SPEEDBRAKEDN_HPP
