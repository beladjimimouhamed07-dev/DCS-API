#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Body
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Body
{
public:

    // RVA: 0x1E | Ordinal: 31
        void Body(class AFM::Body &&);

    // RVA: 0x1F | Ordinal: 32
        void Body(class AFM::Body const &);

    // RVA: 0x20 | Ordinal: 33
        void Body(void);

    // RVA: 0x345 | Ordinal: 838
        void Construct(void);

    // RVA: 0x39D | Ordinal: 926
        void Create(void);

    // RVA: 0x56C | Ordinal: 1389
        void changeMassAndMassPosition_ocsAndRotateInertia_ocs(double, double *, double *);

    // RVA: 0x6BD | Ordinal: 1726
        void getMassPositionX_ocs(double *);

    // RVA: 0x6BF | Ordinal: 1728
        void getMassPositionY_ocs(double *);

    // RVA: 0x6C1 | Ordinal: 1730
        void getMassPositionZ_ocs(double *);

    // RVA: 0x6C3 | Ordinal: 1732
        void getMassPosition_ocs(double *);

    // RVA: 0x803 | Ordinal: 2052
        void setMassPositionX_ocs(double);

    // RVA: 0x805 | Ordinal: 2054
        void setMassPositionY_ocs(double);

    // RVA: 0x807 | Ordinal: 2056
        void setMassPositionZ_ocs(double);

    // RVA: 0x809 | Ordinal: 2058
        void setMassPosition_ocs(double *);

    // RVA: 0x8EA | Ordinal: 2283
        void setVersion(unsigned long);

    // RVA: 0x10C | Ordinal: 269
        void _Body(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_BODY_HPP
