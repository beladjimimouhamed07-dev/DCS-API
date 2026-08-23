#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: ArgVisibilityNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class ArgVisibilityNode
{
public:

    // RVA: 0x41 | Ordinal: 66
        void checkVisibility(class model::IModelArguments const *, class model::Node const *, bool &) const;

    // RVA: 0x4E | Ordinal: 79
        void empty(void) const;

    // RVA: 0x5C | Ordinal: 93
        void getArgVec(void);

    // RVA: 0x5D | Ordinal: 94
        void getArgVec(void) const;

    // RVA: 0x6F | Ordinal: 112
        void getHandles(class std::function<void __cdecl(unsigned int)>) const;

    // RVA: 0x95 | Ordinal: 150
        void getRanges(unsigned int) const;

    // RVA: 0xBE | Ordinal: 191
        void isVisible(class model::IModelArguments const *) const;

    // RVA: 0x11E | Ordinal: 287
        void setArgVec(class ed::vector<struct model::ArgVisibilityNode::Arg, class ed::allocator<struct model::ArgVisibilityNode::Arg>> const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_ARGVISIBILITYNODE_HPP
