#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCborStreamWriter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCborStreamWriter
{
public:

    // RVA: 0x7E | Ordinal: 127
        void QCborStreamWriter(class QByteArray *);

    // RVA: 0x7F | Ordinal: 128
        void QCborStreamWriter(class QIODevice *);

    // RVA: 0x858 | Ordinal: 2137
        void append(std::nullptr_t);

    // RVA: 0x859 | Ordinal: 2138
        void append(class QByteArray const &);

    // RVA: 0x85A | Ordinal: 2139
        void append(int);

    // RVA: 0x85B | Ordinal: 2140
        void append(unsigned int);

    // RVA: 0x85C | Ordinal: 2141
        void append(float);

    // RVA: 0x85D | Ordinal: 2142
        void append(double);

    // RVA: 0x85E | Ordinal: 2143
        void append(char const *, __int64);

    // RVA: 0x85F | Ordinal: 2144
        void append(class QLatin1String);

    // RVA: 0x860 | Ordinal: 2145
        void append(class QStringView);

    // RVA: 0x861 | Ordinal: 2146
        void append(class qfloat16);

    // RVA: 0x862 | Ordinal: 2147
        void append(enum QCborKnownTags);

    // RVA: 0x863 | Ordinal: 2148
        void append(enum QCborNegativeInteger);

    // RVA: 0x864 | Ordinal: 2149
        void append(enum QCborSimpleType);

    // RVA: 0x865 | Ordinal: 2150
        void append(enum QCborTag);

    // RVA: 0x866 | Ordinal: 2151
        void append(__int64);

    // RVA: 0x867 | Ordinal: 2152
        void append(unsigned __int64);

    // RVA: 0x868 | Ordinal: 2153
        void append(bool);

    // RVA: 0x87A | Ordinal: 2171
        void appendByteString(char const *, __int64);

    // RVA: 0x87C | Ordinal: 2173
        void appendNull(void);

    // RVA: 0x87D | Ordinal: 2174
        void appendTextString(char const *, __int64);

    // RVA: 0x87F | Ordinal: 2176
        void appendUndefined(void);

    // RVA: 0xC96 | Ordinal: 3223
        void device(void) const;

    // RVA: 0xD2A | Ordinal: 3371
        void endArray(void);

    // RVA: 0xD33 | Ordinal: 3380
        void endMap(void);

    // RVA: 0x197C | Ordinal: 6525
        void setDevice(class QIODevice *);

    // RVA: 0x1BA9 | Ordinal: 7082
        void startArray(void);

    // RVA: 0x1BAA | Ordinal: 7083
        void startArray(unsigned __int64);

    // RVA: 0x1BB1 | Ordinal: 7090
        void startMap(void);

    // RVA: 0x1BB2 | Ordinal: 7091
        void startMap(unsigned __int64);

    // RVA: 0x2F2 | Ordinal: 755
        void _QCborStreamWriter(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCBORSTREAMWRITER_HPP
