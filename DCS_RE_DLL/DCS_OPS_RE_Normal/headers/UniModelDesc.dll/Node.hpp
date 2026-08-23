#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: Node
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class Node
{
public:

    // RVA: 0x23 | Ordinal: 36
        void apply(class std::function<bool __cdecl(class model::Node const *)>) const;

    // RVA: 0x2E | Ordinal: 47
        void apply_mut(class std::function<bool __cdecl(class ed::Ptr<class model::Node, struct model::IObjectDeleter>)>);

    // RVA: 0x42 | Ordinal: 67
        void checkVisibility(class model::IModelArguments const *, class model::Node const *, bool &) const;

    // RVA: 0x63 | Ordinal: 100
        void getBranch(void) const;

    // RVA: 0x64 | Ordinal: 101
        void getCommonParent(class model::Node const *) const;

    // RVA: 0x83 | Ordinal: 132
        void getName(void) const;

    // RVA: 0x92 | Ordinal: 147
        void getProperties(void);

    // RVA: 0x93 | Ordinal: 148
        void getProperties(void) const;

    // RVA: 0xE3 | Ordinal: 228
        void postTransform(class model::IModelArguments const *, class osg::Matrixd &) const;

    // RVA: 0x12C | Ordinal: 301
        void setName(char const *);

    // RVA: 0x13F | Ordinal: 320
        void walkParents(class std::function<bool __cdecl(class model::Node const *)> const &) const;
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_NODE_HPP
