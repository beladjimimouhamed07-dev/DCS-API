#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSimpleTurnSlipIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSimpleTurnSlipIndicator
{
public:

    // RVA: 0x1B3 | Ordinal: 436
        void avSimpleTurnSlipIndicator(class std::unique_ptr<class cockpit::GyroPowerSource, struct std::default_delete<class cockpit::GyroPowerSource>>);

    // RVA: 0x1094 | Ordinal: 4245
        void get_sideslip(void) const;

    // RVA: 0x10DC | Ordinal: 4317
        void get_turn(void) const;

    // RVA: 0x11F2 | Ordinal: 4595
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14FA | Ordinal: 5371
        void post_initialize(void);

    // RVA: 0x1601 | Ordinal: 5634
        void repair(void);

    // RVA: 0x1863 | Ordinal: 6244
        void set_damage(unsigned int, bool);

    // RVA: 0x1AD9 | Ordinal: 6874
        void update(void);

    // RVA: 0x353 | Ordinal: 852
        void _avSimpleTurnSlipIndicator(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIMPLETURNSLIPINDICATOR_HPP
