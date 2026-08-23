#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: FireAtPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class FireAtPoint
{
public:

    // RVA: 0xCC | Ordinal: 205
        void FireAtPoint(class AI::FireAtPoint &&);

    // RVA: 0xCD | Ordinal: 206
        void FireAtPoint(class AI::FireAtPoint const &);

    // RVA: 0xCE | Ordinal: 207
        void FireAtPoint(void);

    // RVA: 0x6AE | Ordinal: 1711
        void clone(void) const;

    // RVA: 0x71B | Ordinal: 1820
        void create(void);

    // RVA: 0x7F6 | Ordinal: 2039
        void getCategory(void) const;

    // RVA: 0x899 | Ordinal: 2202
        void getName(void) const;

    // RVA: 0xA1A | Ordinal: 2587
        void load(class Lua::Config &);

    // RVA: 0xADF | Ordinal: 2784
        void params(void) const;

    // RVA: 0x26D | Ordinal: 622
        void _FireAtPoint(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FIREATPOINT_HPP
