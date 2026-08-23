#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: DDLNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ODDLParser {

class DDLNode
{
public:

    // RVA: 0xA | Ordinal: 11
        void DDLNode(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned __int64, class ODDLParser::DDLNode *);

    // RVA: 0x26E | Ordinal: 623
        void attachParent(class ODDLParser::DDLNode *);

    // RVA: 0x277 | Ordinal: 632
        void create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class ODDLParser::DDLNode *);

    // RVA: 0x27E | Ordinal: 639
        void detachParent(void);

    // RVA: 0x281 | Ordinal: 642
        void dump(class ODDLParser::IOStreamBase &);

    // RVA: 0x288 | Ordinal: 649
        void findPropertyByName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x28E | Ordinal: 655
        void getChildNodeList(void) const;

    // RVA: 0x291 | Ordinal: 658
        void getDataArrayList(void) const;

    // RVA: 0x2A2 | Ordinal: 675
        void getName(void) const;

    // RVA: 0x2A9 | Ordinal: 682
        void getParent(void) const;

    // RVA: 0x2AA | Ordinal: 683
        void getProperties(void) const;

    // RVA: 0x2AC | Ordinal: 685
        void getReferences(void) const;

    // RVA: 0x2B1 | Ordinal: 690
        void getType(void) const;

    // RVA: 0x2B8 | Ordinal: 697
        void getValue(void) const;

    // RVA: 0x2BF | Ordinal: 704
        void hasProperties(void) const;

    // RVA: 0x2C0 | Ordinal: 705
        void hasProperty(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2E1 | Ordinal: 738
        void releaseNodes(void);

    // RVA: 0x2EC | Ordinal: 749
        void setDataArrayList(struct ODDLParser::DataArrayList *);

    // RVA: 0x2F5 | Ordinal: 758
        void setName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2F7 | Ordinal: 760
        void setProperties(struct ODDLParser::Property *);

    // RVA: 0x2F9 | Ordinal: 762
        void setReferences(struct ODDLParser::Reference *);

    // RVA: 0x2FC | Ordinal: 765
        void setType(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x302 | Ordinal: 771
        void setValue(class ODDLParser::Value *);

    // RVA: 0x77 | Ordinal: 120
        void _DDLNode(void);
};

} // namespace ODDLParser

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_DDLNODE_HPP
