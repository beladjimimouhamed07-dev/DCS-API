#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: GaugeBias
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class GaugeBias
{
public:

    // RVA: 0x41 | Ordinal: 66
        void GaugeBias(class cockpit::GaugeBias &&);

    // RVA: 0x42 | Ordinal: 67
        void GaugeBias(class cockpit::GaugeBias const &);

    // RVA: 0x43 | Ordinal: 68
        void GaugeBias(void);

    // RVA: 0x134B | Ordinal: 4940
        void l_read(class Lua::Config &);

    // RVA: 0x134C | Ordinal: 4941
        void l_read(class Lua::Config &, char const *);

    // RVA: 0x2A3 | Ordinal: 676
        void _GaugeBias(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GAUGEBIAS_HPP
