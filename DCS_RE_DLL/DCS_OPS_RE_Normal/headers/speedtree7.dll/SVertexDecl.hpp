#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: SVertexDecl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class SVertexDecl
{
public:

    // RVA: 0x181 | Ordinal: 386
        void AttributeName(struct SpeedTree::Enumeration<enum SpeedTree::EVertexAttributeUntyped, char>);

    // RVA: 0x1B4 | Ordinal: 437
        void FormatName(struct SpeedTree::Enumeration<enum SpeedTree::EVertexFormatUntyped, char>);

    // RVA: 0x1B5 | Ordinal: 438
        void FormatSize(struct SpeedTree::Enumeration<enum SpeedTree::EVertexFormatUntyped, char>);

    // RVA: 0x1BF | Ordinal: 448
        void GetDescription(class SpeedTree::CBasicString<1> &) const;

    // RVA: 0x212 | Ordinal: 531
        void MergeObjectAndInstanceVertexDecls(struct SpeedTree::SVertexDecl &, struct SpeedTree::SVertexDecl const &, enum SpeedTree::SVertexDecl::EInstanceType);

    // RVA: 0x5D | Ordinal: 94
        void SVertexDecl(void);

    // RVA: 0x269 | Ordinal: 618
        void Set(struct SpeedTree::SVertexDecl::SAttribDesc const *);

    // RVA: 0x14D | Ordinal: 334
        void operator_(struct SpeedTree::SVertexDecl const &) const;
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_SVERTEXDECL_HPP
