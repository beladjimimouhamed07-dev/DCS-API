#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLText
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLText
{
public:

    // RVA: 0x30 | Ordinal: 49
        void Accept(class tinyxml2::XMLVisitor *) const;

    // RVA: 0x36 | Ordinal: 55
        void CData(void) const;

    // RVA: 0xA0 | Ordinal: 161
        void ParseDeep(char *, class tinyxml2::StrPair *, int *);

    // RVA: 0xF1 | Ordinal: 242
        void SetCData(bool);

    // RVA: 0x102 | Ordinal: 259
        void ShallowClone(class tinyxml2::XMLDocument *) const;

    // RVA: 0x108 | Ordinal: 265
        void ShallowEqual(class tinyxml2::XMLNode const *) const;

    // RVA: 0x133 | Ordinal: 308
        void ToText(void);

    // RVA: 0x134 | Ordinal: 309
        void ToText(void) const;

    // RVA: 0xD | Ordinal: 14
        void XMLText(class tinyxml2::XMLDocument *);

    // RVA: 0x18 | Ordinal: 25
        void _XMLText(void);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLTEXT_HPP
