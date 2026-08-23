#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLPrinter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLPrinter
{
public:

    // RVA: 0x37 | Ordinal: 56
        void CStr(void) const;

    // RVA: 0x38 | Ordinal: 57
        void CStrSize(void) const;

    // RVA: 0x3A | Ordinal: 59
        void ClearBuffer(void);

    // RVA: 0x3C | Ordinal: 61
        void CloseElement(bool);

    // RVA: 0x3E | Ordinal: 63
        void CompactMode(class tinyxml2::XMLElement const &);

    // RVA: 0x95 | Ordinal: 150
        void OpenElement(char const *, bool);

    // RVA: 0xAB | Ordinal: 172
        void Print(char const *, ...);

    // RVA: 0xAD | Ordinal: 174
        void PrintSpace(int);

    // RVA: 0xAE | Ordinal: 175
        void PrintString(char const *, bool);

    // RVA: 0xB0 | Ordinal: 177
        void PushAttribute(char const *, char const *);

    // RVA: 0xB1 | Ordinal: 178
        void PushAttribute(char const *, int);

    // RVA: 0xB2 | Ordinal: 179
        void PushAttribute(char const *, unsigned int);

    // RVA: 0xB3 | Ordinal: 180
        void PushAttribute(char const *, double);

    // RVA: 0xB4 | Ordinal: 181
        void PushAttribute(char const *, __int64);

    // RVA: 0xB5 | Ordinal: 182
        void PushAttribute(char const *, bool);

    // RVA: 0xB6 | Ordinal: 183
        void PushComment(char const *);

    // RVA: 0xB7 | Ordinal: 184
        void PushDeclaration(char const *);

    // RVA: 0xB8 | Ordinal: 185
        void PushHeader(bool, bool);

    // RVA: 0xB9 | Ordinal: 186
        void PushText(int);

    // RVA: 0xBA | Ordinal: 187
        void PushText(unsigned int);

    // RVA: 0xBB | Ordinal: 188
        void PushText(float);

    // RVA: 0xBC | Ordinal: 189
        void PushText(double);

    // RVA: 0xBD | Ordinal: 190
        void PushText(char const *, bool);

    // RVA: 0xBE | Ordinal: 191
        void PushText(__int64);

    // RVA: 0xBF | Ordinal: 192
        void PushText(bool);

    // RVA: 0xC0 | Ordinal: 193
        void PushUnknown(char const *);

    // RVA: 0xC1 | Ordinal: 194
        void Putc(char);

    // RVA: 0xE0 | Ordinal: 225
        void SealElementIfJustOpened(void);

    // RVA: 0x142 | Ordinal: 323
        void Visit(class tinyxml2::XMLComment const &);

    // RVA: 0x143 | Ordinal: 324
        void Visit(class tinyxml2::XMLDeclaration const &);

    // RVA: 0x144 | Ordinal: 325
        void Visit(class tinyxml2::XMLText const &);

    // RVA: 0x145 | Ordinal: 326
        void Visit(class tinyxml2::XMLUnknown const &);

    // RVA: 0x14A | Ordinal: 331
        void VisitEnter(class tinyxml2::XMLDocument const &);

    // RVA: 0x14B | Ordinal: 332
        void VisitEnter(class tinyxml2::XMLElement const &, class tinyxml2::XMLAttribute const *);

    // RVA: 0x14E | Ordinal: 335
        void VisitExit(class tinyxml2::XMLDocument const &);

    // RVA: 0x14F | Ordinal: 336
        void VisitExit(class tinyxml2::XMLElement const &);

    // RVA: 0x153 | Ordinal: 340
        void Write(char const *);

    // RVA: 0x154 | Ordinal: 341
        void Write(char const *, unsigned __int64);

    // RVA: 0xC | Ordinal: 13
        void XMLPrinter(struct _iobuf *, bool, int);

    // RVA: 0x17 | Ordinal: 24
        void _XMLPrinter(void);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLPRINTER_HPP
