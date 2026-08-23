#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTextCodec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextCodec
{
public:

    // RVA: 0x229 | Ordinal: 554
        void QTextCodec(void);

    // RVA: 0x829 | Ordinal: 2090
        void aliases(void) const;

    // RVA: 0x8D0 | Ordinal: 2257
        void availableCodecs(void);

    // RVA: 0x8D1 | Ordinal: 2258
        void availableMibs(void);

    // RVA: 0x950 | Ordinal: 2385
        void canEncode(class QString const &) const;

    // RVA: 0x951 | Ordinal: 2386
        void canEncode(class QChar) const;

    // RVA: 0x952 | Ordinal: 2387
        void canEncode(class QStringView) const;

    // RVA: 0xA13 | Ordinal: 2580
        void codecForHtml(class QByteArray const &);

    // RVA: 0xA14 | Ordinal: 2581
        void codecForHtml(class QByteArray const &, class QTextCodec *);

    // RVA: 0xA15 | Ordinal: 2582
        void codecForLocale(void);

    // RVA: 0xA16 | Ordinal: 2583
        void codecForMib(int);

    // RVA: 0xA17 | Ordinal: 2584
        void codecForName(class QByteArray const &);

    // RVA: 0xA18 | Ordinal: 2585
        void codecForName(char const *);

    // RVA: 0xA19 | Ordinal: 2586
        void codecForTr(void);

    // RVA: 0xA1A | Ordinal: 2587
        void codecForUtfText(class QByteArray const &);

    // RVA: 0xA1B | Ordinal: 2588
        void codecForUtfText(class QByteArray const &, class QTextCodec *);

    // RVA: 0xEED | Ordinal: 3822
        void fromUnicode(class QString const &) const;

    // RVA: 0xEEE | Ordinal: 3823
        void fromUnicode(class QChar const *, int, struct QTextCodec::ConverterState *) const;

    // RVA: 0xEEF | Ordinal: 3824
        void fromUnicode(class QStringView) const;

    // RVA: 0x12F0 | Ordinal: 4849
        void makeDecoder(class QFlags<enum QTextCodec::ConversionFlag>) const;

    // RVA: 0x12F1 | Ordinal: 4850
        void makeEncoder(class QFlags<enum QTextCodec::ConversionFlag>) const;

    // RVA: 0x1952 | Ordinal: 6483
        void setCodecForLocale(class QTextCodec *);

    // RVA: 0x1E31 | Ordinal: 7730
        void toUnicode(class QByteArray const &) const;

    // RVA: 0x1E32 | Ordinal: 7731
        void toUnicode(char const *) const;

    // RVA: 0x1E33 | Ordinal: 7732
        void toUnicode(char const *, int, struct QTextCodec::ConverterState *) const;

    // RVA: 0x36B | Ordinal: 876
        void _QTextCodec(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTEXTCODEC_HPP
