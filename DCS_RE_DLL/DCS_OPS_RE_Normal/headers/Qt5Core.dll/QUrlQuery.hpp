#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QUrlQuery
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QUrlQuery
{
public:

    // RVA: 0x252 | Ordinal: 595
        void QUrlQuery(class QUrlQuery const &);

    // RVA: 0x253 | Ordinal: 596
        void QUrlQuery(class QString const &);

    // RVA: 0x254 | Ordinal: 597
        void QUrlQuery(class QUrl const &);

    // RVA: 0x255 | Ordinal: 598
        void QUrlQuery(class std::initializer_list<struct QPair<class QString, class QString>>);

    // RVA: 0x256 | Ordinal: 599
        void QUrlQuery(void);

    // RVA: 0x80A | Ordinal: 2059
        void addQueryItem(class QString const &, class QString const &);

    // RVA: 0x82F | Ordinal: 2096
        void allQueryItemValues(class QString const &, class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x9EE | Ordinal: 2543
        void clear(void);

    // RVA: 0xC14 | Ordinal: 3093
        void data_ptr(void);

    // RVA: 0xC5A | Ordinal: 3163
        void defaultQueryPairDelimiter(void);

    // RVA: 0xC5B | Ordinal: 3164
        void defaultQueryValueDelimiter(void);

    // RVA: 0xF6E | Ordinal: 3951
        void hasQueryItem(class QString const &) const;

    // RVA: 0x10B3 | Ordinal: 4276
        void isDetached(void) const;

    // RVA: 0x10DB | Ordinal: 4316
        void isEmpty(void) const;

    // RVA: 0x16F0 | Ordinal: 5873
        void query(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x16F2 | Ordinal: 5875
        void queryItemValue(class QString const &, class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x16F4 | Ordinal: 5877
        void queryItems(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x16F5 | Ordinal: 5878
        void queryPairDelimiter(void) const;

    // RVA: 0x16F7 | Ordinal: 5880
        void queryValueDelimiter(void) const;

    // RVA: 0x17C6 | Ordinal: 6087
        void removeAllQueryItems(class QString const &);

    // RVA: 0x17FC | Ordinal: 6141
        void removeQueryItem(class QString const &);

    // RVA: 0x1A64 | Ordinal: 6757
        void setQuery(class QString const &);

    // RVA: 0x1A65 | Ordinal: 6758
        void setQueryDelimiters(class QChar, class QChar);

    // RVA: 0x1A67 | Ordinal: 6760
        void setQueryItems(class QList<struct QPair<class QString, class QString>> const &);

    // RVA: 0x1C86 | Ordinal: 7303
        void swap(class QUrlQuery &);

    // RVA: 0x1DFF | Ordinal: 7680
        void toString(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x37C | Ordinal: 893
        void _QUrlQuery(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QURLQUERY_HPP
