#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLDocument
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLDocument
{
public:

    // RVA: 0x2E | Ordinal: 47
        void Accept(class tinyxml2::XMLVisitor *) const;

    // RVA: 0x39 | Ordinal: 58
        void Clear(void);

    // RVA: 0x3B | Ordinal: 60
        void ClearError(void);

    // RVA: 0x42 | Ordinal: 67
        void DeepCopy(class tinyxml2::XMLDocument *) const;

    // RVA: 0x47 | Ordinal: 72
        void DeleteNode(class tinyxml2::XMLNode *);

    // RVA: 0x4C | Ordinal: 77
        void Error(void) const;

    // RVA: 0x4D | Ordinal: 78
        void ErrorID(void) const;

    // RVA: 0x4E | Ordinal: 79
        void ErrorIDToName(enum tinyxml2::XMLError);

    // RVA: 0x4F | Ordinal: 80
        void ErrorLineNum(void) const;

    // RVA: 0x50 | Ordinal: 81
        void ErrorName(void) const;

    // RVA: 0x51 | Ordinal: 82
        void ErrorStr(void) const;

    // RVA: 0x68 | Ordinal: 105
        void HasBOM(void) const;

    // RVA: 0x69 | Ordinal: 106
        void Identify(char *, class tinyxml2::XMLNode **);

    // RVA: 0x81 | Ordinal: 130
        void LoadFile(struct _iobuf *);

    // RVA: 0x82 | Ordinal: 131
        void LoadFile(char const *);

    // RVA: 0x83 | Ordinal: 132
        void MarkInUse(class tinyxml2::XMLNode *);

    // RVA: 0x86 | Ordinal: 135
        void NewComment(char const *);

    // RVA: 0x87 | Ordinal: 136
        void NewDeclaration(char const *);

    // RVA: 0x88 | Ordinal: 137
        void NewElement(char const *);

    // RVA: 0x89 | Ordinal: 138
        void NewText(char const *);

    // RVA: 0x8A | Ordinal: 139
        void NewUnknown(char const *);

    // RVA: 0x98 | Ordinal: 153
        void Parse(void);

    // RVA: 0x99 | Ordinal: 154
        void Parse(char const *, unsigned __int64);

    // RVA: 0xAA | Ordinal: 171
        void Print(class tinyxml2::XMLPrinter *) const;

    // RVA: 0xAC | Ordinal: 173
        void PrintError(void) const;

    // RVA: 0xAF | Ordinal: 176
        void ProcessEntities(void) const;

    // RVA: 0xDC | Ordinal: 221
        void RootElement(void);

    // RVA: 0xDD | Ordinal: 222
        void RootElement(void) const;

    // RVA: 0xDE | Ordinal: 223
        void SaveFile(struct _iobuf *, bool);

    // RVA: 0xDF | Ordinal: 224
        void SaveFile(char const *, bool);

    // RVA: 0xEF | Ordinal: 240
        void SetBOM(bool);

    // RVA: 0xF2 | Ordinal: 243
        void SetError(enum tinyxml2::XMLError, int, char const *, ...);

    // RVA: 0x100 | Ordinal: 257
        void ShallowClone(class tinyxml2::XMLDocument *) const;

    // RVA: 0x106 | Ordinal: 263
        void ShallowEqual(class tinyxml2::XMLNode const *) const;

    // RVA: 0x118 | Ordinal: 281
        void ToDocument(void);

    // RVA: 0x119 | Ordinal: 282
        void ToDocument(void) const;

    // RVA: 0x152 | Ordinal: 339
        void WhitespaceMode(void) const;

    // RVA: 0x6 | Ordinal: 7
        void XMLDocument(bool, enum tinyxml2::Whitespace);

    // RVA: 0x14 | Ordinal: 21
        void _XMLDocument(void);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLDOCUMENT_HPP
