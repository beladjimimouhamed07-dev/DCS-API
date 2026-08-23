#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: NumberNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class NumberNode
{
public:

    // RVA: 0x72 | Ordinal: 115
        void getHandles(class std::function<void __cdecl(unsigned int)>) const;

    // RVA: 0x119 | Ordinal: 282
        void set(class ed::vector<class ed::Ptr<class model::RenderNode, struct model::IObjectDeleter>, class ed::allocator<class ed::Ptr<class model::RenderNode, struct model::IObjectDeleter>>> const &, class ed::vector<struct model::NumberNode::Control, class ed::allocator<struct model::NumberNode::Control>> const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_NUMBERNODE_HPP
