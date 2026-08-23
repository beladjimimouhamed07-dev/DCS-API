#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: ScrollingBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class ScrollingBuffer
{
public:

    // RVA: 0x5C | Ordinal: 93
        void AddPoint(float, float);

    // RVA: 0x5D | Ordinal: 94
        void Erase(void);

    // RVA: 0x21 | Ordinal: 34
        void ScrollingBuffer(struct AnimatorLogic::ScrollingBuffer const &);

    // RVA: 0x22 | Ordinal: 35
        void ScrollingBuffer(void);

    // RVA: 0x31 | Ordinal: 50
        void _ScrollingBuffer(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_SCROLLINGBUFFER_HPP
