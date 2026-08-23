#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLUnknown
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLUnknown
{
public:

    // RVA: 0x31 | Ordinal: 50
        void Accept(class tinyxml2::XMLVisitor *) const;

    // RVA: 0xA1 | Ordinal: 162
        void ParseDeep(char *, class tinyxml2::StrPair *, int *);

    // RVA: 0x103 | Ordinal: 260
        void ShallowClone(class tinyxml2::XMLDocument *) const;

    // RVA: 0x109 | Ordinal: 266
        void ShallowEqual(class tinyxml2::XMLNode const *) const;

    // RVA: 0x139 | Ordinal: 314
        void ToUnknown(void);

    // RVA: 0x13A | Ordinal: 315
        void ToUnknown(void) const;

    // RVA: 0xE | Ordinal: 15
        void XMLUnknown(class tinyxml2::XMLDocument *);

    // RVA: 0x19 | Ordinal: 26
        void _XMLUnknown(void);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLUNKNOWN_HPP
