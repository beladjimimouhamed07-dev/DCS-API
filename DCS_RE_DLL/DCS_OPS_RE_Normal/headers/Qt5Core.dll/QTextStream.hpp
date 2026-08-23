#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTextStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextStream
{
public:

    // RVA: 0x22E | Ordinal: 559
        void QTextStream(class QByteArray const &, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x22F | Ordinal: 560
        void QTextStream(struct _iobuf *, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x230 | Ordinal: 561
        void QTextStream(class QByteArray *, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x231 | Ordinal: 562
        void QTextStream(class QIODevice *);

    // RVA: 0x232 | Ordinal: 563
        void QTextStream(class QString *, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x233 | Ordinal: 564
        void QTextStream(void);

    // RVA: 0x8BE | Ordinal: 2239
        void atEnd(void) const;

    // RVA: 0x8C7 | Ordinal: 2248
        void autoDetectUnicode(void) const;

    // RVA: 0xA11 | Ordinal: 2578
        void codec(void) const;

    // RVA: 0xBE0 | Ordinal: 3041
        void d_func(void);

    // RVA: 0xBE1 | Ordinal: 3042
        void d_func(void) const;

    // RVA: 0xC99 | Ordinal: 3226
        void device(void) const;

    // RVA: 0xDF6 | Ordinal: 3575
        void fieldAlignment(void) const;

    // RVA: 0xDF8 | Ordinal: 3577
        void fieldWidth(void) const;

    // RVA: 0xE77 | Ordinal: 3704
        void flush(void);

    // RVA: 0xF12 | Ordinal: 3859
        void generateByteOrderMark(void) const;

    // RVA: 0x1045 | Ordinal: 4166
        void integerBase(void) const;

    // RVA: 0x12BB | Ordinal: 4796
        void locale(void) const;

    // RVA: 0x1464 | Ordinal: 5221
        void numberFlags(void) const;

    // RVA: 0x563 | Ordinal: 1380
        void operator__(class QByteArray const &);

    // RVA: 0x564 | Ordinal: 1381
        void operator__(class QString const &);

    // RVA: 0x565 | Ordinal: 1382
        void operator__(class QStringRef const &);

    // RVA: 0x566 | Ordinal: 1383
        void operator__(char);

    // RVA: 0x567 | Ordinal: 1384
        void operator__(short);

    // RVA: 0x568 | Ordinal: 1385
        void operator__(unsigned short);

    // RVA: 0x569 | Ordinal: 1386
        void operator__(int);

    // RVA: 0x56A | Ordinal: 1387
        void operator__(unsigned int);

    // RVA: 0x56B | Ordinal: 1388
        void operator__(long);

    // RVA: 0x56C | Ordinal: 1389
        void operator__(unsigned long);

    // RVA: 0x56D | Ordinal: 1390
        void operator__(float);

    // RVA: 0x56E | Ordinal: 1391
        void operator__(double);

    // RVA: 0x56F | Ordinal: 1392
        void operator__(char const *);

    // RVA: 0x570 | Ordinal: 1393
        void operator__(void const *);

    // RVA: 0x571 | Ordinal: 1394
        void operator__(class QChar);

    // RVA: 0x572 | Ordinal: 1395
        void operator__(class QLatin1String);

    // RVA: 0x573 | Ordinal: 1396
        void operator__(class QStringView);

    // RVA: 0x574 | Ordinal: 1397
        void operator__(__int64);

    // RVA: 0x575 | Ordinal: 1398
        void operator__(unsigned __int64);

    // RVA: 0x4CE | Ordinal: 1231
        void operator__(char &);

    // RVA: 0x4CF | Ordinal: 1232
        void operator__(short &);

    // RVA: 0x4D0 | Ordinal: 1233
        void operator__(unsigned short &);

    // RVA: 0x4D1 | Ordinal: 1234
        void operator__(int &);

    // RVA: 0x4D2 | Ordinal: 1235
        void operator__(unsigned int &);

    // RVA: 0x4D3 | Ordinal: 1236
        void operator__(long &);

    // RVA: 0x4D4 | Ordinal: 1237
        void operator__(unsigned long &);

    // RVA: 0x4D5 | Ordinal: 1238
        void operator__(float &);

    // RVA: 0x4D6 | Ordinal: 1239
        void operator__(double &);

    // RVA: 0x4D7 | Ordinal: 1240
        void operator__(class QByteArray &);

    // RVA: 0x4D8 | Ordinal: 1241
        void operator__(class QChar &);

    // RVA: 0x4D9 | Ordinal: 1242
        void operator__(class QString &);

    // RVA: 0x4DA | Ordinal: 1243
        void operator__(__int64 &);

    // RVA: 0x4DB | Ordinal: 1244
        void operator__(unsigned __int64 &);

    // RVA: 0x4DC | Ordinal: 1245
        void operator__(char *);

    // RVA: 0x14A2 | Ordinal: 5283
        void padChar(void) const;

    // RVA: 0x14FF | Ordinal: 5376
        void pos(void) const;

    // RVA: 0x171E | Ordinal: 5919
        void read(__int64);

    // RVA: 0x1721 | Ordinal: 5922
        void readAll(void);

    // RVA: 0x1735 | Ordinal: 5942
        void readLine(__int64);

    // RVA: 0x1738 | Ordinal: 5945
        void readLineInto(class QString *, __int64);

    // RVA: 0x174B | Ordinal: 5964
        void realNumberNotation(void) const;

    // RVA: 0x174C | Ordinal: 5965
        void realNumberPrecision(void) const;

    // RVA: 0x185C | Ordinal: 6237
        void reset(void);

    // RVA: 0x1865 | Ordinal: 6246
        void resetStatus(void);

    // RVA: 0x18FE | Ordinal: 6399
        void seek(__int64);

    // RVA: 0x1935 | Ordinal: 6454
        void setAutoDetectUnicode(bool);

    // RVA: 0x194E | Ordinal: 6479
        void setCodec(class QTextCodec *);

    // RVA: 0x194F | Ordinal: 6480
        void setCodec(char const *);

    // RVA: 0x197E | Ordinal: 6527
        void setDevice(class QIODevice *);

    // RVA: 0x19AD | Ordinal: 6574
        void setFieldAlignment(enum QTextStream::FieldAlignment);

    // RVA: 0x19AE | Ordinal: 6575
        void setFieldWidth(int);

    // RVA: 0x19D2 | Ordinal: 6611
        void setGenerateByteOrderMark(bool);

    // RVA: 0x19EA | Ordinal: 6635
        void setIntegerBase(int);

    // RVA: 0x1A03 | Ordinal: 6660
        void setLocale(class QLocale const &);

    // RVA: 0x1A26 | Ordinal: 6695
        void setNumberFlags(class QFlags<enum QTextStream::NumberFlag>);

    // RVA: 0x1A35 | Ordinal: 6710
        void setPadChar(class QChar);

    // RVA: 0x1A6F | Ordinal: 6768
        void setRealNumberNotation(enum QTextStream::RealNumberNotation);

    // RVA: 0x1A70 | Ordinal: 6769
        void setRealNumberPrecision(int);

    // RVA: 0x1AA8 | Ordinal: 6825
        void setStatus(enum QTextStream::Status);

    // RVA: 0x1AAB | Ordinal: 6828
        void setString(class QString *, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x1B50 | Ordinal: 6993
        void skipWhiteSpace(void);

    // RVA: 0x1C37 | Ordinal: 7224
        void status(void) const;

    // RVA: 0x1C4A | Ordinal: 7243
        void string(void) const;

    // RVA: 0x36E | Ordinal: 879
        void _QTextStream(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTEXTSTREAM_HPP
