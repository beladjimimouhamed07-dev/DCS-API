#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ControlSurface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class ControlSurface
{
public:

    // RVA: 0x55 | Ordinal: 86
        void ControlSurface(class EagleFM::ControlSurface const &);

    // RVA: 0x56 | Ordinal: 87
        void ControlSurface(double, double);

    // RVA: 0x57 | Ordinal: 88
        void ControlSurface(void);

    // RVA: 0x4C5 | Ordinal: 1222
        void getAngle(void) const;

    // RVA: 0x4DC | Ordinal: 1245
        void getBias(void) const;

    // RVA: 0x589 | Ordinal: 1418
        void getIF(void) const;

    // RVA: 0x5C5 | Ordinal: 1478
        void getMaxAngle(void) const;

    // RVA: 0x5C9 | Ordinal: 1482
        void getMinAngle(void) const;

    // RVA: 0x63F | Ordinal: 1600
        void getRelLineAngle(void) const;

    // RVA: 0x640 | Ordinal: 1601
        void getRelativeAngle(void) const;

    // RVA: 0x644 | Ordinal: 1605
        void getRelativeBias(void) const;

    // RVA: 0x713 | Ordinal: 1812
        void init(double, double);

    // RVA: 0x7F9 | Ordinal: 2042
        void setADFactor(int, double);

    // RVA: 0x804 | Ordinal: 2053
        void setAngle(double);

    // RVA: 0x875 | Ordinal: 2166
        void setIF(double);

    // RVA: 0x8E2 | Ordinal: 2275
        void setRelLineAngle(double);

    // RVA: 0x8E3 | Ordinal: 2276
        void setRelativeAngle(double);

    // RVA: 0x193 | Ordinal: 404
        void _ControlSurface(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CONTROLSURFACE_HPP
