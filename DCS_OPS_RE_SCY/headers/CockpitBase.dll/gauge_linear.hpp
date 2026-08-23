#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: gauge_linear
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class gauge_linear
{
public:

    // RVA: 0x277 | Ordinal: 632
        void gauge_linear(class cockpit::gauge_linear &&);

    // RVA: 0x278 | Ordinal: 633
        void gauge_linear(class cockpit::gauge_linear const &);

    // RVA: 0x279 | Ordinal: 634
        void gauge_linear(void);

    // RVA: 0xF04 | Ordinal: 3845
        void get_d_value(void) const;

    // RVA: 0x1354 | Ordinal: 4949
        void l_read(class Lua::Config &, char const *);

    // RVA: 0x184E | Ordinal: 6223
        void set_d_value(double);

    // RVA: 0x198C | Ordinal: 6541
        void simulate(double, double);

    // RVA: 0x3B6 | Ordinal: 951
        void _gauge_linear(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GAUGE_LINEAR_HPP
