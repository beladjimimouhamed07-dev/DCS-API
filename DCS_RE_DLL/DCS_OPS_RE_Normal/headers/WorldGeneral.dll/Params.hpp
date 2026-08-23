#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Params
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace wResourceProvider {

class Params
{
public:

    // RVA: 0x13B | Ordinal: 316
        void Params(struct wResourceProvider::Params const &);

    // RVA: 0x13C | Ordinal: 317
        void Params(void);

    // RVA: 0x66E | Ordinal: 1647
        void clear(void);

    // RVA: 0xA2A | Ordinal: 2603
        void load(class Lua::Config &);

    // RVA: 0x9E5 | Ordinal: 2534
        void load1(class Lua::Config &, unsigned int, unsigned int);

    // RVA: 0x9E6 | Ordinal: 2535
        void load2(class Lua::Config &);

    // RVA: 0x296 | Ordinal: 663
        void _Params(void);
};

} // namespace wResourceProvider

// DCS_OPS_RE_WORLDGENERAL.DLL_PARAMS_HPP
