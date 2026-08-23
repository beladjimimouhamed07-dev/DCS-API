#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QXmlStreamReader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QXmlStreamReader
{
public:

    // RVA: 0x2AC | Ordinal: 685
        void QXmlStreamReader(class QByteArray const &);

    // RVA: 0x2AD | Ordinal: 686
        void QXmlStreamReader(class QString const &);

    // RVA: 0x2AE | Ordinal: 687
        void QXmlStreamReader(class QIODevice *);

    // RVA: 0x2AF | Ordinal: 688
        void QXmlStreamReader(char const *);

    // RVA: 0x2B0 | Ordinal: 689
        void QXmlStreamReader(void);

    // RVA: 0x7E7 | Ordinal: 2024
        void addData(class QByteArray const &);

    // RVA: 0x7E8 | Ordinal: 2025
        void addData(class QString const &);

    // RVA: 0x7E9 | Ordinal: 2026
        void addData(char const *);

    // RVA: 0x7F1 | Ordinal: 2034
        void addExtraNamespaceDeclaration(class QXmlStreamNamespaceDeclaration const &);

    // RVA: 0x7F2 | Ordinal: 2035
        void addExtraNamespaceDeclarations(class QVector<class QXmlStreamNamespaceDeclaration> const &);

    // RVA: 0x8BF | Ordinal: 2240
        void atEnd(void) const;

    // RVA: 0x8C4 | Ordinal: 2245
        void attributes(void) const;

    // RVA: 0x9B3 | Ordinal: 2484
        void characterOffset(void) const;

    // RVA: 0x9F0 | Ordinal: 2545
        void clear(void);

    // RVA: 0xA27 | Ordinal: 2600
        void columnNumber(void) const;

    // RVA: 0xBF0 | Ordinal: 3057
        void d_func(void);

    // RVA: 0xBF1 | Ordinal: 3058
        void d_func(void) const;

    // RVA: 0xC9A | Ordinal: 3227
        void device(void) const;

    // RVA: 0xCC6 | Ordinal: 3271
        void documentEncoding(void) const;

    // RVA: 0xCC7 | Ordinal: 3272
        void documentVersion(void) const;

    // RVA: 0xCD4 | Ordinal: 3285
        void dtdName(void) const;

    // RVA: 0xCD5 | Ordinal: 3286
        void dtdPublicId(void) const;

    // RVA: 0xCD6 | Ordinal: 3287
        void dtdSystemId(void) const;

    // RVA: 0xD5C | Ordinal: 3421
        void entityDeclarations(void) const;

    // RVA: 0xD5D | Ordinal: 3422
        void entityExpansionLimit(void) const;

    // RVA: 0xD5E | Ordinal: 3423
        void entityResolver(void) const;

    // RVA: 0xD87 | Ordinal: 3464
        void error(void) const;

    // RVA: 0xD98 | Ordinal: 3481
        void errorString(void) const;

    // RVA: 0xF53 | Ordinal: 3924
        void hasError(void) const;

    // RVA: 0x108C | Ordinal: 4237
        void isCDATA(void) const;

    // RVA: 0x1090 | Ordinal: 4241
        void isCharacters(void) const;

    // RVA: 0x1093 | Ordinal: 4244
        void isComment(void) const;

    // RVA: 0x109D | Ordinal: 4254
        void isDTD(void) const;

    // RVA: 0x10E0 | Ordinal: 4321
        void isEndDocument(void) const;

    // RVA: 0x10E1 | Ordinal: 4322
        void isEndElement(void) const;

    // RVA: 0x10E2 | Ordinal: 4323
        void isEntityReference(void) const;

    // RVA: 0x116A | Ordinal: 4459
        void isProcessingInstruction(void) const;

    // RVA: 0x11C5 | Ordinal: 4550
        void isStandaloneDocument(void) const;

    // RVA: 0x11C6 | Ordinal: 4551
        void isStartDocument(void) const;

    // RVA: 0x11C7 | Ordinal: 4552
        void isStartElement(void) const;

    // RVA: 0x1222 | Ordinal: 4643
        void isWhitespace(void) const;

    // RVA: 0x12A6 | Ordinal: 4775
        void lineNumber(void) const;

    // RVA: 0x1411 | Ordinal: 5138
        void name(void) const;

    // RVA: 0x141A | Ordinal: 5147
        void namespaceDeclarations(void) const;

    // RVA: 0x141B | Ordinal: 5148
        void namespaceProcessing(void) const;

    // RVA: 0x141E | Ordinal: 5151
        void namespaceUri(void) const;

    // RVA: 0x1446 | Ordinal: 5191
        void notationDeclarations(void) const;

    // RVA: 0x1512 | Ordinal: 5395
        void prefix(void) const;

    // RVA: 0x1541 | Ordinal: 5442
        void processingInstructionData(void) const;

    // RVA: 0x1542 | Ordinal: 5443
        void processingInstructionTarget(void) const;

    // RVA: 0x16ED | Ordinal: 5870
        void qualifiedName(void) const;

    // RVA: 0x1704 | Ordinal: 5893
        void raiseError(class QString const &);

    // RVA: 0x172E | Ordinal: 5935
        void readElementText(enum QXmlStreamReader::ReadElementTextBehaviour);

    // RVA: 0x173C | Ordinal: 5949
        void readNext(void);

    // RVA: 0x173D | Ordinal: 5950
        void readNextStartElement(void);

    // RVA: 0x197F | Ordinal: 6528
        void setDevice(class QIODevice *);

    // RVA: 0x199A | Ordinal: 6555
        void setEntityExpansionLimit(int);

    // RVA: 0x199B | Ordinal: 6556
        void setEntityResolver(class QXmlStreamEntityResolver *);

    // RVA: 0x1A10 | Ordinal: 6673
        void setNamespaceProcessing(bool);

    // RVA: 0x1B4C | Ordinal: 6989
        void skipCurrentElement(void);

    // RVA: 0x1CCB | Ordinal: 7372
        void text(void) const;

    // RVA: 0x1E63 | Ordinal: 7780
        void tokenString(void) const;

    // RVA: 0x1E64 | Ordinal: 7781
        void tokenType(void) const;

    // RVA: 0x38B | Ordinal: 908
        void _QXmlStreamReader(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QXMLSTREAMREADER_HPP
