#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: SDrawCall
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class SDrawCall
{
public:

    // RVA: 0x1D5 | Ordinal: 470
        void GetProperty(struct SpeedTree::Enumeration<enum SpeedTree::EVertexPropertyUntyped, char>, int, unsigned char *const) const;

    // RVA: 0x1D6 | Ordinal: 471
        void GetProperty(struct SpeedTree::Enumeration<enum SpeedTree::EVertexPropertyUntyped, char>, int, float *const) const;

    // RVA: 0x1D7 | Ordinal: 472
        void GetProperty(struct SpeedTree::Enumeration<enum SpeedTree::EVertexPropertyUntyped, char>, int, class SpeedTree::st_float16 *const) const;

    // RVA: 0x4F | Ordinal: 80
        void SDrawCall(void);

    // RVA: 0x286 | Ordinal: 647
        void SetProperty(struct SpeedTree::Enumeration<enum SpeedTree::EVertexPropertyUntyped, char>, int, unsigned char const *const);

    // RVA: 0x287 | Ordinal: 648
        void SetProperty(struct SpeedTree::Enumeration<enum SpeedTree::EVertexPropertyUntyped, char>, int, float const *const);

    // RVA: 0x288 | Ordinal: 649
        void SetProperty(struct SpeedTree::Enumeration<enum SpeedTree::EVertexPropertyUntyped, char>, int, class SpeedTree::st_float16 const *const);

    // RVA: 0x90 | Ordinal: 145
        void _SDrawCall(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_SDRAWCALL_HPP
