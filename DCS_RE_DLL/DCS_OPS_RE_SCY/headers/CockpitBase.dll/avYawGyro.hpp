#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avYawGyro
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avYawGyro
{
public:

    // RVA: 0x1DE | Ordinal: 479
        void avYawGyro(class cockpit::GyroPowerSource *);

    // RVA: 0x9AD | Ordinal: 2478
        void cage(bool);

    // RVA: 0xCDF | Ordinal: 3296
        void getGyroMainAxisBFrame(void) const;

    // RVA: 0xF70 | Ordinal: 3953
        void get_heading(void) const;

    // RVA: 0x1208 | Ordinal: 4617
        void initialize(class Lua::Config &);

    // RVA: 0x1989 | Ordinal: 6538
        void simulate(double, bool);

    // RVA: 0x1A66 | Ordinal: 6759
        void turn_off_correction(bool);

    // RVA: 0x36E | Ordinal: 879
        void _avYawGyro(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVYAWGYRO_HPP
