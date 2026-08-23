#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avUHF_ARC_164v2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avUHF_ARC_164v2
{
public:

    // RVA: 0x89D | Ordinal: 2206
        void SetCommand(int, float);

    // RVA: 0x1D0 | Ordinal: 465
        void avUHF_ARC_164v2(void);

    // RVA: 0x11FF | Ordinal: 4608
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1471 | Ordinal: 5234
        void on_mode_change(int);

    // RVA: 0x14A8 | Ordinal: 5289
        void perform_init_state(void);

    // RVA: 0x15C9 | Ordinal: 5578
        void release(void);

    // RVA: 0x1930 | Ordinal: 6449
        void set_squelch_custom(bool);

    // RVA: 0x196E | Ordinal: 6511
        void set_volume(float);

    // RVA: 0x1AE1 | Ordinal: 6882
        void update(void);

    // RVA: 0x364 | Ordinal: 869
        void _avUHF_ARC_164v2(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVUHF_ARC_164V2_HPP
