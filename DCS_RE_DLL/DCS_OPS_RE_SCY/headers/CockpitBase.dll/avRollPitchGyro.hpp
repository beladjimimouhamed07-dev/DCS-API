#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avRollPitchGyro
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avRollPitchGyro
{
public:

    // RVA: 0x85C | Ordinal: 2141
        void RepairReset(void);

    // RVA: 0x197 | Ordinal: 408
        void avRollPitchGyro(class cockpit::GyroPowerSource *);

    // RVA: 0x9AA | Ordinal: 2475
        void cage(bool);

    // RVA: 0xCDE | Ordinal: 3295
        void getGyroMainAxisBFrame(void) const;

    // RVA: 0xCE0 | Ordinal: 3297
        void getGyroMainAxisIFrame(void) const;

    // RVA: 0xD12 | Ordinal: 3347
        void getIsCage(void) const;

    // RVA: 0x11E5 | Ordinal: 4582
        void initialize(class Lua::Config &);

    // RVA: 0x171C | Ordinal: 5917
        void setGyroMainAxisBFrame(class Math::Vector<3, double> const &);

    // RVA: 0x171D | Ordinal: 5918
        void setGyroMainAxisIFrame(class Math::Vector<3, double> const &);

    // RVA: 0x1987 | Ordinal: 6536
        void simulate(double, bool);

    // RVA: 0x1A65 | Ordinal: 6758
        void turn_off_correction(bool);

    // RVA: 0x343 | Ordinal: 836
        void _avRollPitchGyro(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVROLLPITCHGYRO_HPP
