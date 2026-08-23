#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLComment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLComment
{
public:

    // RVA: 0x2C | Ordinal: 45
        void Accept(class tinyxml2::XMLVisitor *) const;

    // RVA: 0x9C | Ordinal: 157
        void ParseDeep(char *, class tinyxml2::StrPair *, int *);

    // RVA: 0xFE | Ordinal: 255
        void ShallowClone(class tinyxml2::XMLDocument *) const;

    // RVA: 0x104 | Ordinal: 261
        void ShallowEqual(class tinyxml2::XMLNode const *) const;

    // RVA: 0x10E | Ordinal: 271
        void ToComment(void);

    // RVA: 0x10F | Ordinal: 272
        void ToComment(void) const;

    // RVA: 0x1 | Ordinal: 2
        void XMLComment(class tinyxml2::XMLDocument *);

    // RVA: 0x12 | Ordinal: 19
        void _XMLComment(void);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLCOMMENT_HPP
