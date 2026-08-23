#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImBitVector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImBitVector
{
public:

    // RVA: 0x1BF | Ordinal: 448
        void Clear(void);

    // RVA: 0x1C2 | Ordinal: 451
        void ClearBit(int);

    // RVA: 0x1ED | Ordinal: 494
        void Create(int);

    // RVA: 0xF9 | Ordinal: 250
        void ImBitVector(struct ImBitVector &&);

    // RVA: 0xFA | Ordinal: 251
        void ImBitVector(struct ImBitVector const &);

    // RVA: 0xFB | Ordinal: 252
        void ImBitVector(void);

    // RVA: 0x433 | Ordinal: 1076
        void SetBit(int);

    // RVA: 0x4CB | Ordinal: 1228
        void TestBit(int) const;

    // RVA: 0x119 | Ordinal: 282
        void _ImBitVector(void);
};

// DCS_OPS_RE_IMGUI.DLL_IMBITVECTOR_HPP
