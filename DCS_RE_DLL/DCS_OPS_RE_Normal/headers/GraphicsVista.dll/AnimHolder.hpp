#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: AnimHolder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class AnimHolder
{
public:

    // RVA: 0x4E | Ordinal: 79
        void AdvanceTo(double);

    // RVA: 0x0 | Ordinal: 1
        void AnimHolder(int, double);

    // RVA: 0x64 | Ordinal: 101
        void Get(int) const;

    // RVA: 0x80 | Ordinal: 129
        void GetNetState(struct Graphics::AnimHolderNetState &) const;

    // RVA: 0x9B | Ordinal: 156
        void Play(int, float, float, float);

    // RVA: 0x9F | Ordinal: 160
        void Set(int, float);

    // RVA: 0xB8 | Ordinal: 185
        void SetNetState(struct Graphics::AnimHolderNetState const &);

    // RVA: 0x27 | Ordinal: 40
        void _AnimHolder(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_ANIMHOLDER_HPP
