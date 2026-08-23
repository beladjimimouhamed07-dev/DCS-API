#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Xml.dll
// Class: QXmlSimpleReader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QXmlSimpleReader
{
public:

    // RVA: 0xA6 | Ordinal: 167
        void DTDHandler(void) const;

    // RVA: 0x4F | Ordinal: 80
        void QXmlSimpleReader(void);

    // RVA: 0xBD | Ordinal: 190
        void contentHandler(void) const;

    // RVA: 0xCD | Ordinal: 206
        void d_func(void);

    // RVA: 0xCE | Ordinal: 207
        void d_func(void) const;

    // RVA: 0xD2 | Ordinal: 211
        void declHandler(void) const;

    // RVA: 0xE2 | Ordinal: 227
        void entityResolver(void) const;

    // RVA: 0xE4 | Ordinal: 229
        void errorHandler(void) const;

    // RVA: 0xE8 | Ordinal: 233
        void feature(class QString const &, bool *) const;

    // RVA: 0xF2 | Ordinal: 243
        void hasFeature(class QString const &) const;

    // RVA: 0xF3 | Ordinal: 244
        void hasProperty(class QString const &) const;

    // RVA: 0x11B | Ordinal: 284
        void lexicalHandler(void) const;

    // RVA: 0x141 | Ordinal: 322
        void parse(class QXmlInputSource const &);

    // RVA: 0x142 | Ordinal: 323
        void parse(class QXmlInputSource const *);

    // RVA: 0x143 | Ordinal: 324
        void parse(class QXmlInputSource const *, bool);

    // RVA: 0x144 | Ordinal: 325
        void parseContinue(void);

    // RVA: 0x14E | Ordinal: 335
        void property(class QString const &, bool *) const;

    // RVA: 0x179 | Ordinal: 378
        void setContentHandler(class QXmlContentHandler *);

    // RVA: 0x17A | Ordinal: 379
        void setDTDHandler(class QXmlDTDHandler *);

    // RVA: 0x17F | Ordinal: 384
        void setDeclHandler(class QXmlDeclHandler *);

    // RVA: 0x181 | Ordinal: 386
        void setEntityResolver(class QXmlEntityResolver *);

    // RVA: 0x182 | Ordinal: 387
        void setErrorHandler(class QXmlErrorHandler *);

    // RVA: 0x183 | Ordinal: 388
        void setFeature(class QString const &, bool);

    // RVA: 0x185 | Ordinal: 390
        void setLexicalHandler(class QXmlLexicalHandler *);

    // RVA: 0x18B | Ordinal: 396
        void setProperty(class QString const &, void *);

    // RVA: 0x6E | Ordinal: 111
        void _QXmlSimpleReader(void);
};

// DCS_OPS_RE_QT5XML.DLL_QXMLSIMPLEREADER_HPP
