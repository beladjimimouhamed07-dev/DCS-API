#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avTW_Prime
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avTW_Prime
{
public:

    // RVA: 0x89A | Ordinal: 2203
        void SetCommand(int, float);

    // RVA: 0x1C4 | Ordinal: 453
        void avTW_Prime(class cockpit::avTW_Prime const &);

    // RVA: 0x1C5 | Ordinal: 454
        void avTW_Prime(void);

    // RVA: 0x11FA | Ordinal: 4603
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x15C6 | Ordinal: 5575
        void release(void);

    // RVA: 0x35E | Ordinal: 863
        void _avTW_Prime(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVTW_PRIME_HPP
