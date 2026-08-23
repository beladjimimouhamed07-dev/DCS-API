#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLHandle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLHandle
{
public:

    // RVA: 0x57 | Ordinal: 88
        void FirstChild(void);

    // RVA: 0x5B | Ordinal: 92
        void FirstChildElement(char const *);

    // RVA: 0x79 | Ordinal: 122
        void LastChild(void);

    // RVA: 0x7D | Ordinal: 126
        void LastChildElement(char const *);

    // RVA: 0x8D | Ordinal: 142
        void NextSibling(void);

    // RVA: 0x91 | Ordinal: 146
        void NextSiblingElement(char const *);

    // RVA: 0xA3 | Ordinal: 164
        void PreviousSibling(void);

    // RVA: 0xA7 | Ordinal: 168
        void PreviousSiblingElement(char const *);

    // RVA: 0x115 | Ordinal: 278
        void ToDeclaration(void);

    // RVA: 0x120 | Ordinal: 289
        void ToElement(void);

    // RVA: 0x128 | Ordinal: 297
        void ToNode(void);

    // RVA: 0x130 | Ordinal: 305
        void ToText(void);

    // RVA: 0x136 | Ordinal: 311
        void ToUnknown(void);

    // RVA: 0x8 | Ordinal: 9
        void XMLHandle(class tinyxml2::XMLNode &);

    // RVA: 0x9 | Ordinal: 10
        void XMLHandle(class tinyxml2::XMLHandle const &);

    // RVA: 0xA | Ordinal: 11
        void XMLHandle(class tinyxml2::XMLNode *);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLHANDLE_HPP
