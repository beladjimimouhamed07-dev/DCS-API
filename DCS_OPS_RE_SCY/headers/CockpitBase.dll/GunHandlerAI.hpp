#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: GunHandlerAI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gunner_AI {

class GunHandlerAI
{
public:

    // RVA: 0x4D | Ordinal: 78
        void GunHandlerAI(class gunner_AI::GunHandlerAI &&);

    // RVA: 0x4E | Ordinal: 79
        void GunHandlerAI(class gunner_AI::GunHandlerAI const &);

    // RVA: 0x4F | Ordinal: 80
        void GunHandlerAI(void);

    // RVA: 0xC01 | Ordinal: 3074
        void fire(bool);

    // RVA: 0xE9E | Ordinal: 3743
        void get_ammo_rest(void) const;

    // RVA: 0x134E | Ordinal: 4943
        void l_read(class Lua::Config &, class IwoLA *);

    // RVA: 0x2A6 | Ordinal: 679
        void _GunHandlerAI(void);
};

} // namespace gunner_AI

// DCS_OPS_RE_COCKPITBASE.DLL_GUNHANDLERAI_HPP
