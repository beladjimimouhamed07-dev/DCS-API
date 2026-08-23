#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: gauge_periodic
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class gauge_periodic
{
public:

    // RVA: 0x9B8 | Ordinal: 2489
        void calcMoment(double, double, double);

    // RVA: 0xBF0 | Ordinal: 3057
        void findAngle(double);

    // RVA: 0xBF1 | Ordinal: 3058
        void findBias(double);

    // RVA: 0xBF6 | Ordinal: 3063
        void findNorma(double);

    // RVA: 0x27A | Ordinal: 635
        void gauge_periodic(class cockpit::gauge_periodic &&);

    // RVA: 0x27B | Ordinal: 636
        void gauge_periodic(class cockpit::gauge_periodic const &);

    // RVA: 0x27C | Ordinal: 637
        void gauge_periodic(void);

    // RVA: 0xD62 | Ordinal: 3427
        void getMomentCoeff(void) const;

    // RVA: 0xE7C | Ordinal: 3709
        void get_T1(void) const;

    // RVA: 0xE7D | Ordinal: 3710
        void get_T2(void) const;

    // RVA: 0xEBD | Ordinal: 3774
        void get_bias(void);

    // RVA: 0x10F3 | Ordinal: 4340
        void get_w(void) const;

    // RVA: 0x10F4 | Ordinal: 4341
        void get_w_max(void) const;

    // RVA: 0x1355 | Ordinal: 4950
        void l_read(class Lua::Config &, char const *);

    // RVA: 0x175F | Ordinal: 5984
        void setMomentCoeff(double);

    // RVA: 0x180F | Ordinal: 6160
        void set_T1(double);

    // RVA: 0x1810 | Ordinal: 6161
        void set_T2(double);

    // RVA: 0x196F | Ordinal: 6512
        void set_w(double);

    // RVA: 0x1970 | Ordinal: 6513
        void set_w_max(double);

    // RVA: 0x198D | Ordinal: 6542
        void simulate(double, double, double);

    // RVA: 0x198E | Ordinal: 6543
        void simulate(double, double);

    // RVA: 0x1990 | Ordinal: 6545
        void simulateF(double, double, double, double);

    // RVA: 0x1992 | Ordinal: 6547
        void simulateM(double, double, double);

    // RVA: 0x3B7 | Ordinal: 952
        void _gauge_periodic(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GAUGE_PERIODIC_HPP
