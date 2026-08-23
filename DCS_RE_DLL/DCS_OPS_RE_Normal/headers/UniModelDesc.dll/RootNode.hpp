#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: RootNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class RootNode
{
public:

    // RVA: 0x1D | Ordinal: 30
        void addRenderNode(class ed::Ptr<class model::BaseRenderNode, struct model::IObjectDeleter>);

    // RVA: 0x1E | Ordinal: 31
        void addShellNode(class ed::Ptr<class model::BaseShellNode, struct model::IObjectDeleter>);

    // RVA: 0x2C | Ordinal: 45
        void applyMults(class std::unordered_map<class ed::basic_string<char>, struct model::MultCoefs, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct model::MultCoefs>>> const &);

    // RVA: 0x30 | Ordinal: 49
        void calcNumHandles(void) const;

    // RVA: 0x49 | Ordinal: 74
        void collectControlNodes(void) const;

    // RVA: 0x60 | Ordinal: 97
        void getBaseNodes(void) const;

    // RVA: 0x80 | Ordinal: 129
        void getModelName(void) const;

    // RVA: 0x94 | Ordinal: 149
        void getPropertiesSets(void) const;

    // RVA: 0xB6 | Ordinal: 183
        void hasBones(void) const;

    // RVA: 0xDB | Ordinal: 220
        void open(class io::IBinaryFileR &);

    // RVA: 0xDC | Ordinal: 221
        void open(char const *);

    // RVA: 0x10E | Ordinal: 271
        void save(char const *, unsigned short) const;

    // RVA: 0x12F | Ordinal: 304
        void setRootTransformNode(class ed::Ptr<class model::Node, struct model::IObjectDeleter>);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_ROOTNODE_HPP
