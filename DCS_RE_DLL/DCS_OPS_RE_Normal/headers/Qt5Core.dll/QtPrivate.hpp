#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QtPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QtPrivate
{
public:

    // RVA: 0x788 | Ordinal: 1929
        void QByteArrayList_indexOf(class QList<class QByteArray> const *, char const *, int);

    // RVA: 0x789 | Ordinal: 1930
        void QByteArrayList_join(class QList<class QByteArray> const *, char const *, int);

    // RVA: 0x78A | Ordinal: 1931
        void QStringList_contains(class QStringList const *, class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0x78B | Ordinal: 1932
        void QStringList_contains(class QStringList const *, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0x78C | Ordinal: 1933
        void QStringList_contains(class QStringList const *, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0x78D | Ordinal: 1934
        void QStringList_filter(class QStringList const *, class QRegExp const &);

    // RVA: 0x78E | Ordinal: 1935
        void QStringList_filter(class QStringList const *, class QRegularExpression const &);

    // RVA: 0x78F | Ordinal: 1936
        void QStringList_filter(class QStringList const *, class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0x790 | Ordinal: 1937
        void QStringList_filter(class QStringList const *, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0x791 | Ordinal: 1938
        void QStringList_indexOf(class QStringList const *, class QRegExp &, int);

    // RVA: 0x792 | Ordinal: 1939
        void QStringList_indexOf(class QStringList const *, class QRegExp const &, int);

    // RVA: 0x793 | Ordinal: 1940
        void QStringList_indexOf(class QStringList const *, class QRegularExpression const &, int);

    // RVA: 0x794 | Ordinal: 1941
        void QStringList_join(class QStringList const &, class QLatin1String);

    // RVA: 0x795 | Ordinal: 1942
        void QStringList_join(class QStringList const *, class QChar const *, int);

    // RVA: 0x796 | Ordinal: 1943
        void QStringList_join(class QStringList const *, class QStringView);

    // RVA: 0x797 | Ordinal: 1944
        void QStringList_lastIndexOf(class QStringList const *, class QRegExp &, int);

    // RVA: 0x798 | Ordinal: 1945
        void QStringList_lastIndexOf(class QStringList const *, class QRegExp const &, int);

    // RVA: 0x799 | Ordinal: 1946
        void QStringList_lastIndexOf(class QStringList const *, class QRegularExpression const &, int);

    // RVA: 0x79A | Ordinal: 1947
        void QStringList_removeDuplicates(class QStringList *);

    // RVA: 0x79B | Ordinal: 1948
        void QStringList_replaceInStrings(class QStringList *, class QRegExp const &, class QString const &);

    // RVA: 0x79C | Ordinal: 1949
        void QStringList_replaceInStrings(class QStringList *, class QRegularExpression const &, class QString const &);

    // RVA: 0x79D | Ordinal: 1950
        void QStringList_replaceInStrings(class QStringList *, class QString const &, class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0x79E | Ordinal: 1951
        void QStringList_replaceInStrings(class QStringList *, class QStringView, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0x79F | Ordinal: 1952
        void QStringList_sort(class QStringList *, enum Qt::CaseSensitivity);

    // RVA: 0x89F | Ordinal: 2208
        void argToQString(class QLatin1String, unsigned __int64, struct QtPrivate::ArgBase const **);

    // RVA: 0x8A0 | Ordinal: 2209
        void argToQString(class QStringView, unsigned __int64, struct QtPrivate::ArgBase const **);

    // RVA: 0xA5D | Ordinal: 2654
        void compareStrings(class QLatin1String, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0xA5E | Ordinal: 2655
        void compareStrings(class QLatin1String, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0xA5F | Ordinal: 2656
        void compareStrings(class QStringView, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0xA60 | Ordinal: 2657
        void compareStrings(class QStringView, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0xAE9 | Ordinal: 2794
        void convertToLatin1(class QStringView);

    // RVA: 0xAEA | Ordinal: 2795
        void convertToLocal8Bit(class QStringView);

    // RVA: 0xAEB | Ordinal: 2796
        void convertToUcs4(class QStringView);

    // RVA: 0xAEC | Ordinal: 2797
        void convertToUtf8(class QStringView);

    // RVA: 0xD52 | Ordinal: 3411
        void endsWith(class QLatin1String, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0xD53 | Ordinal: 3412
        void endsWith(class QLatin1String, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0xD54 | Ordinal: 3413
        void endsWith(class QStringView, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0xD55 | Ordinal: 3414
        void endsWith(class QStringView, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0xE44 | Ordinal: 3653
        void findString(class QLatin1String, __int64, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0xE45 | Ordinal: 3654
        void findString(class QLatin1String, __int64, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0xE46 | Ordinal: 3655
        void findString(class QStringView, __int64, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0xE47 | Ordinal: 3656
        void findString(class QStringView, __int64, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0x107A | Ordinal: 4219
        void isAscii(class QLatin1String);

    // RVA: 0x107B | Ordinal: 4220
        void isAscii(class QStringView);

    // RVA: 0x1087 | Ordinal: 4232
        void isBuiltinType(class QByteArray const &);

    // RVA: 0x110B | Ordinal: 4364
        void isLatin1(class QStringView);

    // RVA: 0x118F | Ordinal: 4496
        void isRightToLeft(class QStringView);

    // RVA: 0x121E | Ordinal: 4639
        void isValidUtf16(class QStringView);

    // RVA: 0x127F | Ordinal: 4736
        void lastIndexOf(class QLatin1String, __int64, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0x1280 | Ordinal: 4737
        void lastIndexOf(class QLatin1String, __int64, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0x1281 | Ordinal: 4738
        void lastIndexOf(class QStringView, __int64, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0x1282 | Ordinal: 4739
        void lastIndexOf(class QStringView, __int64, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0x16FF | Ordinal: 5888
        void qustrchr(class QStringView, unsigned short);

    // RVA: 0x1700 | Ordinal: 5889
        void qustrlen(unsigned short const *);

    // RVA: 0x1AF8 | Ordinal: 6905
        void shouldLogToStderr(void);

    // RVA: 0x1BD7 | Ordinal: 7128
        void startsWith(class QLatin1String, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0x1BD8 | Ordinal: 7129
        void startsWith(class QLatin1String, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0x1BD9 | Ordinal: 7130
        void startsWith(class QStringView, class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0x1BDA | Ordinal: 7131
        void startsWith(class QStringView, class QLatin1String, enum Qt::CaseSensitivity);

    // RVA: 0x1F17 | Ordinal: 7960
        void trimmed(class QLatin1String);

    // RVA: 0x1F18 | Ordinal: 7961
        void trimmed(class QStringView);
};

// DCS_OPS_RE_QT5CORE.DLL_QTPRIVATE_HPP
