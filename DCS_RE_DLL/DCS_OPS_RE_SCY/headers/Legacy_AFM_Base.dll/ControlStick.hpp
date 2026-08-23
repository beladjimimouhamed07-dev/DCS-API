#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: ControlStick
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class ControlStick
{
public:

    // RVA: 0x34C | Ordinal: 845
        void Construct(void);

    // RVA: 0x36 | Ordinal: 55
        void ControlStick(class AFM::ControlStick &&);

    // RVA: 0x37 | Ordinal: 56
        void ControlStick(class AFM::ControlStick const &);

    // RVA: 0x38 | Ordinal: 57
        void ControlStick(void);

    // RVA: 0x3A5 | Ordinal: 934
        void Create(void);

    // RVA: 0x591 | Ordinal: 1426
        void getControlStickPitchForceFactor(double *);

    // RVA: 0x592 | Ordinal: 1427
        void getControlStickPitchPosition(double *);

    // RVA: 0x593 | Ordinal: 1428
        void getControlStickPitchZeroForcePosition(double *);

    // RVA: 0x594 | Ordinal: 1429
        void getControlStickRollForceFactor(double *);

    // RVA: 0x595 | Ordinal: 1430
        void getControlStickRollPosition(double *);

    // RVA: 0x596 | Ordinal: 1431
        void getControlStickRollZeroForcePosition(double *);

    // RVA: 0x6C9 | Ordinal: 1738
        void getMaxControlStickPitchPosition(double *);

    // RVA: 0x6CA | Ordinal: 1739
        void getMaxControlStickRollPosition(double *);

    // RVA: 0x6D3 | Ordinal: 1748
        void getMaxTrimmerPitchPosition(double *);

    // RVA: 0x6D4 | Ordinal: 1749
        void getMaxTrimmerRollPosition(double *);

    // RVA: 0x6D8 | Ordinal: 1753
        void getMinControlStickPitchPosition(double *);

    // RVA: 0x6D9 | Ordinal: 1754
        void getMinControlStickRollPosition(double *);

    // RVA: 0x6E0 | Ordinal: 1761
        void getMinTrimmerPitchPosition(double *);

    // RVA: 0x6E1 | Ordinal: 1762
        void getMinTrimmerRollPosition(double *);

    // RVA: 0x6FB | Ordinal: 1788
        void getPitchControl(double *);

    // RVA: 0x712 | Ordinal: 1811
        void getRollControl(double *);

    // RVA: 0x751 | Ordinal: 1874
        void getTrimmerPitchPosition(double *);

    // RVA: 0x752 | Ordinal: 1875
        void getTrimmerRollPosition(double *);

    // RVA: 0x798 | Ordinal: 1945
        void setControlStickPitchForceFactor(double);

    // RVA: 0x799 | Ordinal: 1946
        void setControlStickPitchPosition(double);

    // RVA: 0x79A | Ordinal: 1947
        void setControlStickPitchZeroForcePosition(double);

    // RVA: 0x79B | Ordinal: 1948
        void setControlStickRollForceFactor(double);

    // RVA: 0x79C | Ordinal: 1949
        void setControlStickRollPosition(double);

    // RVA: 0x79D | Ordinal: 1950
        void setControlStickRollZeroForcePosition(double);

    // RVA: 0x80F | Ordinal: 2064
        void setMaxControlStickPitchPosition(double);

    // RVA: 0x810 | Ordinal: 2065
        void setMaxControlStickRollPosition(double);

    // RVA: 0x81A | Ordinal: 2075
        void setMaxTrimmerPitchPosition(double);

    // RVA: 0x81B | Ordinal: 2076
        void setMaxTrimmerRollPosition(double);

    // RVA: 0x81F | Ordinal: 2080
        void setMinControlStickPitchPosition(double);

    // RVA: 0x820 | Ordinal: 2081
        void setMinControlStickRollPosition(double);

    // RVA: 0x829 | Ordinal: 2090
        void setMinTrimmerPitchPosition(double);

    // RVA: 0x82A | Ordinal: 2091
        void setMinTrimmerRollPosition(double);

    // RVA: 0x83E | Ordinal: 2111
        void setPitchControl(double);

    // RVA: 0x88F | Ordinal: 2192
        void setRollControl(double);

    // RVA: 0x8D6 | Ordinal: 2263
        void setTrimmerPitchPosition(double);

    // RVA: 0x8D7 | Ordinal: 2264
        void setTrimmerRollPosition(double);

    // RVA: 0x114 | Ordinal: 277
        void _ControlStick(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_CONTROLSTICK_HPP
