#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSPO_10base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSPO_10base
{
public:

    // RVA: 0x19C | Ordinal: 413
        void avSPO_10base(class cockpit::avSPO_10base const &);

    // RVA: 0x19D | Ordinal: 414
        void avSPO_10base(void);

    // RVA: 0x11E9 | Ordinal: 4586
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14C0 | Ordinal: 5313
        void postProcess(void);

    // RVA: 0x15FD | Ordinal: 5630
        void repair(void);

    // RVA: 0x185F | Ordinal: 6240
        void set_damage(unsigned int, bool);

    // RVA: 0x1A22 | Ordinal: 6691
        void syncFailureStates(unsigned int);

    // RVA: 0x1B9C | Ordinal: 7069
        void value_to_bool(float);

    // RVA: 0x347 | Ordinal: 840
        void _avSPO_10base(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSPO_10BASE_HPP
