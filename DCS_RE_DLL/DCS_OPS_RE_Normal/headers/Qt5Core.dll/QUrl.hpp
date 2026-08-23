#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QUrl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QUrl
{
public:

    // RVA: 0x24E | Ordinal: 591
        void QUrl(class QUrl &&);

    // RVA: 0x24F | Ordinal: 592
        void QUrl(class QUrl const &);

    // RVA: 0x250 | Ordinal: 593
        void QUrl(class QString const &, enum QUrl::ParsingMode);

    // RVA: 0x251 | Ordinal: 594
        void QUrl(void);

    // RVA: 0x7EE | Ordinal: 2031
        void addEncodedQueryItem(class QByteArray const &, class QByteArray const &);

    // RVA: 0x809 | Ordinal: 2058
        void addQueryItem(class QString const &, class QString const &);

    // RVA: 0x825 | Ordinal: 2086
        void adjusted(class QUrlTwoFlags<enum QUrl::UrlFormattingOption, enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x82B | Ordinal: 2092
        void allEncodedQueryItemValues(class QByteArray const &) const;

    // RVA: 0x82E | Ordinal: 2095
        void allQueryItemValues(class QString const &) const;

    // RVA: 0x8C5 | Ordinal: 2246
        void authority(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x9ED | Ordinal: 2542
        void clear(void);

    // RVA: 0xC13 | Ordinal: 3092
        void data_ptr(void);

    // RVA: 0xC8B | Ordinal: 3212
        void detach(void);

    // RVA: 0xD07 | Ordinal: 3336
        void encodedFragment(void) const;

    // RVA: 0xD08 | Ordinal: 3337
        void encodedHost(void) const;

    // RVA: 0xD09 | Ordinal: 3338
        void encodedPassword(void) const;

    // RVA: 0xD0A | Ordinal: 3339
        void encodedPath(void) const;

    // RVA: 0xD0B | Ordinal: 3340
        void encodedQuery(void) const;

    // RVA: 0xD0C | Ordinal: 3341
        void encodedQueryItemValue(class QByteArray const &) const;

    // RVA: 0xD0D | Ordinal: 3342
        void encodedQueryItems(void) const;

    // RVA: 0xD0E | Ordinal: 3343
        void encodedUserName(void) const;

    // RVA: 0xD97 | Ordinal: 3480
        void errorString(void) const;

    // RVA: 0xE09 | Ordinal: 3594
        void fileName(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0xE88 | Ordinal: 3721
        void fragment(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0xE95 | Ordinal: 3734
        void fromAce(class QByteArray const &);

    // RVA: 0xEA4 | Ordinal: 3749
        void fromEncoded(class QByteArray const &, enum QUrl::ParsingMode);

    // RVA: 0xEA5 | Ordinal: 3750
        void fromEncodedComponent_helper(class QByteArray const &);

    // RVA: 0xEB8 | Ordinal: 3769
        void fromLocalFile(class QString const &);

    // RVA: 0xEC1 | Ordinal: 3778
        void fromPercentEncoding(class QByteArray const &);

    // RVA: 0xEC3 | Ordinal: 3780
        void fromPunycode(class QByteArray const &);

    // RVA: 0xEE7 | Ordinal: 3816
        void fromStringList(class QStringList const &, enum QUrl::ParsingMode);

    // RVA: 0xEF3 | Ordinal: 3828
        void fromUserInput(class QString const &, class QString const &, class QFlags<enum QUrl::UserInputResolutionOption>);

    // RVA: 0xEF4 | Ordinal: 3829
        void fromUserInput(class QString const &);

    // RVA: 0xF52 | Ordinal: 3923
        void hasEncodedQueryItem(class QByteArray const &) const;

    // RVA: 0xF5B | Ordinal: 3932
        void hasFragment(void) const;

    // RVA: 0xF6C | Ordinal: 3949
        void hasQuery(void) const;

    // RVA: 0xF6D | Ordinal: 3950
        void hasQueryItem(class QString const &) const;

    // RVA: 0xF97 | Ordinal: 3992
        void host(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0xFA2 | Ordinal: 4003
        void idnWhitelist(void);

    // RVA: 0x10B2 | Ordinal: 4275
        void isDetached(void) const;

    // RVA: 0x10DA | Ordinal: 4315
        void isEmpty(void) const;

    // RVA: 0x1120 | Ordinal: 4385
        void isLocalFile(void) const;

    // RVA: 0x1162 | Ordinal: 4451
        void isParentOf(class QUrl const &) const;

    // RVA: 0x1185 | Ordinal: 4486
        void isRelative(void) const;

    // RVA: 0x1216 | Ordinal: 4631
        void isValid(void) const;

    // RVA: 0x1325 | Ordinal: 4902
        void matches(class QUrl const &, class QUrlTwoFlags<enum QUrl::UrlFormattingOption, enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x65A | Ordinal: 1627
        void operator_(class QUrl const &) const;

    // RVA: 0x14C0 | Ordinal: 5313
        void password(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x14C6 | Ordinal: 5319
        void path(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x14F6 | Ordinal: 5367
        void port(int) const;

    // RVA: 0x16EF | Ordinal: 5872
        void query(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x16F1 | Ordinal: 5874
        void queryItemValue(class QString const &) const;

    // RVA: 0x16F3 | Ordinal: 5876
        void queryItems(void) const;

    // RVA: 0x17C4 | Ordinal: 6085
        void removeAllEncodedQueryItems(class QByteArray const &);

    // RVA: 0x17C5 | Ordinal: 6086
        void removeAllQueryItems(class QString const &);

    // RVA: 0x17D9 | Ordinal: 6106
        void removeEncodedQueryItem(class QByteArray const &);

    // RVA: 0x17FB | Ordinal: 6140
        void removeQueryItem(class QString const &);

    // RVA: 0x1876 | Ordinal: 6263
        void resolved(class QUrl const &) const;

    // RVA: 0x18D8 | Ordinal: 6361
        void scheme(void) const;

    // RVA: 0x1933 | Ordinal: 6452
        void setAuthority(class QString const &, enum QUrl::ParsingMode);

    // RVA: 0x198F | Ordinal: 6544
        void setEncodedFragment(class QByteArray const &);

    // RVA: 0x1990 | Ordinal: 6545
        void setEncodedHost(class QByteArray const &);

    // RVA: 0x1991 | Ordinal: 6546
        void setEncodedPassword(class QByteArray const &);

    // RVA: 0x1992 | Ordinal: 6547
        void setEncodedPath(class QByteArray const &);

    // RVA: 0x1993 | Ordinal: 6548
        void setEncodedQuery(class QByteArray const &);

    // RVA: 0x1994 | Ordinal: 6549
        void setEncodedQueryItems(class QList<struct QPair<class QByteArray, class QByteArray>> const &);

    // RVA: 0x1995 | Ordinal: 6550
        void setEncodedUrl(class QByteArray const &, enum QUrl::ParsingMode);

    // RVA: 0x1996 | Ordinal: 6551
        void setEncodedUserName(class QByteArray const &);

    // RVA: 0x19D0 | Ordinal: 6609
        void setFragment(class QString const &, enum QUrl::ParsingMode);

    // RVA: 0x19E1 | Ordinal: 6626
        void setHost(class QString const &, enum QUrl::ParsingMode);

    // RVA: 0x19E3 | Ordinal: 6628
        void setIdnWhitelist(class QStringList const &);

    // RVA: 0x1A3A | Ordinal: 6715
        void setPassword(class QString const &, enum QUrl::ParsingMode);

    // RVA: 0x1A3F | Ordinal: 6720
        void setPath(class QString const &, enum QUrl::ParsingMode);

    // RVA: 0x1A53 | Ordinal: 6740
        void setPort(int);

    // RVA: 0x1A62 | Ordinal: 6755
        void setQuery(class QString const &, enum QUrl::ParsingMode);

    // RVA: 0x1A63 | Ordinal: 6756
        void setQuery(class QUrlQuery const &);

    // RVA: 0x1A66 | Ordinal: 6759
        void setQueryItems(class QList<struct QPair<class QString, class QString>> const &);

    // RVA: 0x1A80 | Ordinal: 6785
        void setScheme(class QString const &);

    // RVA: 0x1ACC | Ordinal: 6861
        void setUrl(class QString const &, enum QUrl::ParsingMode);

    // RVA: 0x1AD0 | Ordinal: 6865
        void setUserInfo(class QString const &, enum QUrl::ParsingMode);

    // RVA: 0x1AD2 | Ordinal: 6867
        void setUserName(class QString const &, enum QUrl::ParsingMode);

    // RVA: 0x1C85 | Ordinal: 7302
        void swap(class QUrl &);

    // RVA: 0x1CE0 | Ordinal: 7393
        void toAce(class QString const &);

    // RVA: 0x1D25 | Ordinal: 7462
        void toDisplayString(class QUrlTwoFlags<enum QUrl::UrlFormattingOption, enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x1D36 | Ordinal: 7479
        void toEncoded(class QUrlTwoFlags<enum QUrl::UrlFormattingOption, enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x1D68 | Ordinal: 7529
        void toLatin1_helper(class QString const &);

    // RVA: 0x1D76 | Ordinal: 7543
        void toLocalFile(void) const;

    // RVA: 0x1DA4 | Ordinal: 7589
        void toPercentEncoding(class QString const &, class QByteArray const &, class QByteArray const &);

    // RVA: 0x1DAA | Ordinal: 7595
        void toPunycode(class QString const &);

    // RVA: 0x1DFE | Ordinal: 7679
        void toString(class QUrlTwoFlags<enum QUrl::UrlFormattingOption, enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x1E05 | Ordinal: 7686
        void toStringList(class QList<class QUrl> const &, class QUrlTwoFlags<enum QUrl::UrlFormattingOption, enum QUrl::ComponentFormattingOption>);

    // RVA: 0x1E6C | Ordinal: 7789
        void topLevelDomain(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x1F99 | Ordinal: 8090
        void url(class QUrlTwoFlags<enum QUrl::UrlFormattingOption, enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x1F9C | Ordinal: 8093
        void userInfo(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x1F9D | Ordinal: 8094
        void userName(class QFlags<enum QUrl::ComponentFormattingOption>) const;

    // RVA: 0x37B | Ordinal: 892
        void _QUrl(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QURL_HPP
