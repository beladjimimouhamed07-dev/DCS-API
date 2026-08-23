#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLDeclaration
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLDeclaration
{
public:

    // RVA: 0x2D | Ordinal: 46
        void Accept(class tinyxml2::XMLVisitor *) const;

    // RVA: 0x9D | Ordinal: 158
        void ParseDeep(char *, class tinyxml2::StrPair *, int *);

    // RVA: 0xFF | Ordinal: 256
        void ShallowClone(class tinyxml2::XMLDocument *) const;

    // RVA: 0x105 | Ordinal: 262
        void ShallowEqual(class tinyxml2::XMLNode const *) const;

    // RVA: 0x113 | Ordinal: 276
        void ToDeclaration(void);

    // RVA: 0x114 | Ordinal: 277
        void ToDeclaration(void) const;

    // RVA: 0x5 | Ordinal: 6
        void XMLDeclaration(class tinyxml2::XMLDocument *);

    // RVA: 0x13 | Ordinal: 20
        void _XMLDeclaration(void);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLDECLARATION_HPP
