#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: LodNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class LodNode
{
public:

    // RVA: 0x7D | Ordinal: 126
        void getLods(void);

    // RVA: 0x7E | Ordinal: 127
        void getLods(void) const;

    // RVA: 0x128 | Ordinal: 297
        void setLods(class ed::vector<struct model::LodNode::Level, class ed::allocator<struct model::LodNode::Level>> const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_LODNODE_HPP
