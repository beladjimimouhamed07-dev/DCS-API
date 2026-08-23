#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QDataStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDataStream
{
public:

    // RVA: 0xBF | Ordinal: 192
        void QDataStream(class QByteArray const &);

    // RVA: 0xC0 | Ordinal: 193
        void QDataStream(class QByteArray *, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0xC1 | Ordinal: 194
        void QDataStream(class QIODevice *);

    // RVA: 0xC2 | Ordinal: 195
        void QDataStream(void);

    // RVA: 0x7B5 | Ordinal: 1974
        void abortTransaction(void);

    // RVA: 0x8BA | Ordinal: 2235
        void atEnd(void) const;

    // RVA: 0x934 | Ordinal: 2357
        void byteOrder(void) const;

    // RVA: 0xA38 | Ordinal: 2617
        void commitTransaction(void);

    // RVA: 0xC97 | Ordinal: 3224
        void device(void) const;

    // RVA: 0xE70 | Ordinal: 3697
        void floatingPointPrecision(void) const;

    // RVA: 0x53B | Ordinal: 1340
        void operator__(std::nullptr_t);

    // RVA: 0x53C | Ordinal: 1341
        void operator__(signed char);

    // RVA: 0x53D | Ordinal: 1342
        void operator__(unsigned char);

    // RVA: 0x53E | Ordinal: 1343
        void operator__(short);

    // RVA: 0x53F | Ordinal: 1344
        void operator__(unsigned short);

    // RVA: 0x540 | Ordinal: 1345
        void operator__(int);

    // RVA: 0x541 | Ordinal: 1346
        void operator__(unsigned int);

    // RVA: 0x542 | Ordinal: 1347
        void operator__(float);

    // RVA: 0x543 | Ordinal: 1348
        void operator__(double);

    // RVA: 0x544 | Ordinal: 1349
        void operator__(char const *);

    // RVA: 0x545 | Ordinal: 1350
        void operator__(class qfloat16);

    // RVA: 0x546 | Ordinal: 1351
        void operator__(__int64);

    // RVA: 0x547 | Ordinal: 1352
        void operator__(unsigned __int64);

    // RVA: 0x548 | Ordinal: 1353
        void operator__(bool);

    // RVA: 0x4C0 | Ordinal: 1217
        void operator__(std::nullptr_t &);

    // RVA: 0x4C1 | Ordinal: 1218
        void operator__(signed char &);

    // RVA: 0x4C2 | Ordinal: 1219
        void operator__(unsigned char &);

    // RVA: 0x4C3 | Ordinal: 1220
        void operator__(short &);

    // RVA: 0x4C4 | Ordinal: 1221
        void operator__(unsigned short &);

    // RVA: 0x4C5 | Ordinal: 1222
        void operator__(int &);

    // RVA: 0x4C6 | Ordinal: 1223
        void operator__(unsigned int &);

    // RVA: 0x4C7 | Ordinal: 1224
        void operator__(float &);

    // RVA: 0x4C8 | Ordinal: 1225
        void operator__(double &);

    // RVA: 0x4C9 | Ordinal: 1226
        void operator__(char *&);

    // RVA: 0x4CA | Ordinal: 1227
        void operator__(class qfloat16 &);

    // RVA: 0x4CB | Ordinal: 1228
        void operator__(__int64 &);

    // RVA: 0x4CC | Ordinal: 1229
        void operator__(unsigned __int64 &);

    // RVA: 0x4CD | Ordinal: 1230
        void operator__(bool &);

    // RVA: 0x1724 | Ordinal: 5925
        void readBlock(char *, int);

    // RVA: 0x1726 | Ordinal: 5927
        void readBytes(char *&, unsigned int &);

    // RVA: 0x1741 | Ordinal: 5954
        void readRawData(char *, int);

    // RVA: 0x1864 | Ordinal: 6245
        void resetStatus(void);

    // RVA: 0x18A5 | Ordinal: 6310
        void rollbackTransaction(void);

    // RVA: 0x1944 | Ordinal: 6469
        void setByteOrder(enum QDataStream::ByteOrder);

    // RVA: 0x197D | Ordinal: 6526
        void setDevice(class QIODevice *);

    // RVA: 0x19CF | Ordinal: 6608
        void setFloatingPointPrecision(enum QDataStream::FloatingPointPrecision);

    // RVA: 0x1AA7 | Ordinal: 6824
        void setStatus(enum QDataStream::Status);

    // RVA: 0x1ADA | Ordinal: 6875
        void setVersion(int);

    // RVA: 0x1B4D | Ordinal: 6990
        void skipRawData(int);

    // RVA: 0x1BBB | Ordinal: 7100
        void startTransaction(void);

    // RVA: 0x1C35 | Ordinal: 7222
        void status(void) const;

    // RVA: 0x1F7E | Ordinal: 8063
        void unsetDevice(void);

    // RVA: 0x1FD7 | Ordinal: 8152
        void version(void) const;

    // RVA: 0x2024 | Ordinal: 8229
        void writeBytes(char const *, unsigned int);

    // RVA: 0x2039 | Ordinal: 8250
        void writeRawData(char const *, int);

    // RVA: 0x2FE | Ordinal: 767
        void _QDataStream(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QDATASTREAM_HPP
