#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLConstHandle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLConstHandle
{
public:

    // RVA: 0x56 | Ordinal: 87
        void FirstChild(void) const;

    // RVA: 0x5A | Ordinal: 91
        void FirstChildElement(char const *) const;

    // RVA: 0x78 | Ordinal: 121
        void LastChild(void) const;

    // RVA: 0x7C | Ordinal: 125
        void LastChildElement(char const *) const;

    // RVA: 0x8C | Ordinal: 141
        void NextSibling(void) const;

    // RVA: 0x90 | Ordinal: 145
        void NextSiblingElement(char const *) const;

    // RVA: 0xA2 | Ordinal: 163
        void PreviousSibling(void) const;

    // RVA: 0xA6 | Ordinal: 167
        void PreviousSiblingElement(char const *) const;

    // RVA: 0x112 | Ordinal: 275
        void ToDeclaration(void) const;

    // RVA: 0x11D | Ordinal: 286
        void ToElement(void) const;

    // RVA: 0x127 | Ordinal: 296
        void ToNode(void) const;

    // RVA: 0x12F | Ordinal: 304
        void ToText(void) const;

    // RVA: 0x135 | Ordinal: 310
        void ToUnknown(void) const;

    // RVA: 0x2 | Ordinal: 3
        void XMLConstHandle(class tinyxml2::XMLConstHandle const &);

    // RVA: 0x3 | Ordinal: 4
        void XMLConstHandle(class tinyxml2::XMLNode const &);

    // RVA: 0x4 | Ordinal: 5
        void XMLConstHandle(class tinyxml2::XMLNode const *);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLCONSTHANDLE_HPP
