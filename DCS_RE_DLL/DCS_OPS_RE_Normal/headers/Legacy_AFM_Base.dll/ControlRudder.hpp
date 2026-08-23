#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: ControlRudder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class ControlRudder
{
public:

    // RVA: 0x34B | Ordinal: 844
        void Construct(void);

    // RVA: 0x33 | Ordinal: 52
        void ControlRudder(class AFM::ControlRudder &&);

    // RVA: 0x34 | Ordinal: 53
        void ControlRudder(class AFM::ControlRudder const &);

    // RVA: 0x35 | Ordinal: 54
        void ControlRudder(void);

    // RVA: 0x3A4 | Ordinal: 933
        void Create(void);

    // RVA: 0x590 | Ordinal: 1425
        void getControlRudderPosition(double *);

    // RVA: 0x6C8 | Ordinal: 1737
        void getMaxControlRudderPosition(double *);

    // RVA: 0x6D5 | Ordinal: 1750
        void getMaxTrimmerRudderPosition(double *);

    // RVA: 0x6D7 | Ordinal: 1752
        void getMinControlRudderPosition(double *);

    // RVA: 0x6E2 | Ordinal: 1763
        void getMinTrimmerRudderPosition(double *);

    // RVA: 0x72B | Ordinal: 1836
        void getRudderControl(double *);

    // RVA: 0x753 | Ordinal: 1876
        void getTrimmerRudderPosition(double *);

    // RVA: 0x797 | Ordinal: 1944
        void setControlRudderPosition(double);

    // RVA: 0x80E | Ordinal: 2063
        void setMaxControlRudderPosition(double);

    // RVA: 0x81C | Ordinal: 2077
        void setMaxTrimmerRudderPosition(double);

    // RVA: 0x81E | Ordinal: 2079
        void setMinControlRudderPosition(double);

    // RVA: 0x82B | Ordinal: 2092
        void setMinTrimmerRudderPosition(double);

    // RVA: 0x8AD | Ordinal: 2222
        void setRudderControl(double);

    // RVA: 0x8D8 | Ordinal: 2265
        void setTrimmerRudderPosition(double);

    // RVA: 0x113 | Ordinal: 276
        void _ControlRudder(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_CONTROLRUDDER_HPP
