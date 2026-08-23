#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLNode
{
public:

    // RVA: 0x41 | Ordinal: 66
        void DeepClone(class tinyxml2::XMLDocument *) const;

    // RVA: 0x45 | Ordinal: 70
        void DeleteChild(class tinyxml2::XMLNode *);

    // RVA: 0x46 | Ordinal: 71
        void DeleteChildren(void);

    // RVA: 0x48 | Ordinal: 73
        void DeleteNode(class tinyxml2::XMLNode *);

    // RVA: 0x58 | Ordinal: 89
        void FirstChild(void);

    // RVA: 0x59 | Ordinal: 90
        void FirstChild(void) const;

    // RVA: 0x5C | Ordinal: 93
        void FirstChildElement(char const *);

    // RVA: 0x5D | Ordinal: 94
        void FirstChildElement(char const *) const;

    // RVA: 0x62 | Ordinal: 99
        void GetDocument(void);

    // RVA: 0x63 | Ordinal: 100
        void GetDocument(void) const;

    // RVA: 0x65 | Ordinal: 102
        void GetLineNum(void) const;

    // RVA: 0x67 | Ordinal: 104
        void GetUserData(void) const;

    // RVA: 0x6A | Ordinal: 107
        void InsertAfterChild(class tinyxml2::XMLNode *, class tinyxml2::XMLNode *);

    // RVA: 0x6B | Ordinal: 108
        void InsertChildPreamble(class tinyxml2::XMLNode *) const;

    // RVA: 0x6C | Ordinal: 109
        void InsertEndChild(class tinyxml2::XMLNode *);

    // RVA: 0x6D | Ordinal: 110
        void InsertFirstChild(class tinyxml2::XMLNode *);

    // RVA: 0x7A | Ordinal: 123
        void LastChild(void);

    // RVA: 0x7B | Ordinal: 124
        void LastChild(void) const;

    // RVA: 0x7E | Ordinal: 127
        void LastChildElement(char const *);

    // RVA: 0x7F | Ordinal: 128
        void LastChildElement(char const *) const;

    // RVA: 0x80 | Ordinal: 129
        void LinkEndChild(class tinyxml2::XMLNode *);

    // RVA: 0x8E | Ordinal: 143
        void NextSibling(void);

    // RVA: 0x8F | Ordinal: 144
        void NextSibling(void) const;

    // RVA: 0x92 | Ordinal: 147
        void NextSiblingElement(char const *);

    // RVA: 0x93 | Ordinal: 148
        void NextSiblingElement(char const *) const;

    // RVA: 0x94 | Ordinal: 149
        void NoChildren(void) const;

    // RVA: 0x96 | Ordinal: 151
        void Parent(void);

    // RVA: 0x97 | Ordinal: 152
        void Parent(void) const;

    // RVA: 0x9F | Ordinal: 160
        void ParseDeep(char *, class tinyxml2::StrPair *, int *);

    // RVA: 0xA4 | Ordinal: 165
        void PreviousSibling(void);

    // RVA: 0xA5 | Ordinal: 166
        void PreviousSibling(void) const;

    // RVA: 0xA8 | Ordinal: 169
        void PreviousSiblingElement(char const *);

    // RVA: 0xA9 | Ordinal: 170
        void PreviousSiblingElement(char const *) const;

    // RVA: 0xFC | Ordinal: 253
        void SetUserData(void *);

    // RVA: 0xFD | Ordinal: 254
        void SetValue(char const *, bool);

    // RVA: 0x110 | Ordinal: 273
        void ToComment(void);

    // RVA: 0x111 | Ordinal: 274
        void ToComment(void) const;

    // RVA: 0x116 | Ordinal: 279
        void ToDeclaration(void);

    // RVA: 0x117 | Ordinal: 280
        void ToDeclaration(void) const;

    // RVA: 0x11A | Ordinal: 283
        void ToDocument(void);

    // RVA: 0x11B | Ordinal: 284
        void ToDocument(void) const;

    // RVA: 0x121 | Ordinal: 290
        void ToElement(void);

    // RVA: 0x122 | Ordinal: 291
        void ToElement(void) const;

    // RVA: 0x123 | Ordinal: 292
        void ToElementWithName(char const *) const;

    // RVA: 0x131 | Ordinal: 306
        void ToText(void);

    // RVA: 0x132 | Ordinal: 307
        void ToText(void) const;

    // RVA: 0x137 | Ordinal: 312
        void ToUnknown(void);

    // RVA: 0x138 | Ordinal: 313
        void ToUnknown(void) const;

    // RVA: 0x13C | Ordinal: 317
        void Unlink(class tinyxml2::XMLNode *);

    // RVA: 0x141 | Ordinal: 322
        void Value(void) const;

    // RVA: 0xB | Ordinal: 12
        void XMLNode(class tinyxml2::XMLDocument *);

    // RVA: 0x16 | Ordinal: 23
        void _XMLNode(void);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLNODE_HPP
