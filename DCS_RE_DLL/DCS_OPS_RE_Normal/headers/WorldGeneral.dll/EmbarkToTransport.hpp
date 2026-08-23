#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: EmbarkToTransport
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class EmbarkToTransport
{
public:

    // RVA: 0x9D | Ordinal: 158
        void EmbarkToTransport(class AI::EmbarkToTransport &&);

    // RVA: 0x9E | Ordinal: 159
        void EmbarkToTransport(class AI::EmbarkToTransport const &);

    // RVA: 0x9F | Ordinal: 160
        void EmbarkToTransport(void);

    // RVA: 0x6A1 | Ordinal: 1698
        void clone(void) const;

    // RVA: 0x70E | Ordinal: 1807
        void create(void);

    // RVA: 0x7E9 | Ordinal: 2026
        void getCategory(void) const;

    // RVA: 0x88C | Ordinal: 2189
        void getName(void) const;

    // RVA: 0xA0D | Ordinal: 2574
        void load(class Lua::Config &);

    // RVA: 0xAD4 | Ordinal: 2773
        void params(void) const;

    // RVA: 0x25E | Ordinal: 607
        void _EmbarkToTransport(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_EMBARKTOTRANSPORT_HPP
