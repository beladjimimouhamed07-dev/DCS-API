#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSlipBall
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSlipBall
{
public:

    // RVA: 0x1B8 | Ordinal: 441
        void avSlipBall(class cockpit::avSlipBall const &);

    // RVA: 0x1B9 | Ordinal: 442
        void avSlipBall(void);

    // RVA: 0x1095 | Ordinal: 4246
        void get_sideslip(void) const;

    // RVA: 0x11F5 | Ordinal: 4598
        void initialize(void);

    // RVA: 0x13A2 | Ordinal: 5027
        void loadFromState(class Lua::Config &, char const *);

    // RVA: 0x148C | Ordinal: 5261
        void override_local_position(class Math::Vector<3, double>);

    // RVA: 0x14FC | Ordinal: 5373
        void post_initialize(void);

    // RVA: 0x1783 | Ordinal: 6020
        void setPhysic(class EagleFM::SlipBall *);

    // RVA: 0x187D | Ordinal: 6270
        void set_dt(double);

    // RVA: 0x1955 | Ordinal: 6486
        void set_tube_lenght(double);

    // RVA: 0x1956 | Ordinal: 6487
        void set_tube_sector(double);

    // RVA: 0x356 | Ordinal: 855
        void _avSlipBall(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSLIPBALL_HPP
