#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QDebug
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDebug
{
public:

    // RVA: 0xD3 | Ordinal: 212
        void QDebug(class QDebug &&);

    // RVA: 0xD4 | Ordinal: 213
        void QDebug(class QDebug const &);

    // RVA: 0xD5 | Ordinal: 214
        void QDebug(class QIODevice *);

    // RVA: 0xD6 | Ordinal: 215
        void QDebug(class QString *);

    // RVA: 0xD7 | Ordinal: 216
        void QDebug(enum QtMsgType);

    // RVA: 0x8CA | Ordinal: 2251
        void autoInsertSpaces(void) const;

    // RVA: 0x1331 | Ordinal: 4914
        void maybeQuote(char);

    // RVA: 0x1337 | Ordinal: 4920
        void maybeSpace(void);

    // RVA: 0x143A | Ordinal: 5179
        void noquote(void);

    // RVA: 0x1445 | Ordinal: 5190
        void nospace(void);

    // RVA: 0x549 | Ordinal: 1354
        void operator__(std::nullptr_t);

    // RVA: 0x54A | Ordinal: 1355
        void operator__(class QByteArray const &);

    // RVA: 0x54B | Ordinal: 1356
        void operator__(class QString const &);

    // RVA: 0x54C | Ordinal: 1357
        void operator__(class QStringRef const &);

    // RVA: 0x54D | Ordinal: 1358
        void operator__(char);

    // RVA: 0x54E | Ordinal: 1359
        void operator__(short);

    // RVA: 0x54F | Ordinal: 1360
        void operator__(unsigned short);

    // RVA: 0x550 | Ordinal: 1361
        void operator__(int);

    // RVA: 0x551 | Ordinal: 1362
        void operator__(unsigned int);

    // RVA: 0x552 | Ordinal: 1363
        void operator__(long);

    // RVA: 0x553 | Ordinal: 1364
        void operator__(unsigned long);

    // RVA: 0x554 | Ordinal: 1365
        void operator__(float);

    // RVA: 0x555 | Ordinal: 1366
        void operator__(double);

    // RVA: 0x556 | Ordinal: 1367
        void operator__(class QTextStream & (__cdecl *)(class QTextStream &));

    // RVA: 0x557 | Ordinal: 1368
        void operator__(char const *);

    // RVA: 0x558 | Ordinal: 1369
        void operator__(void const *);

    // RVA: 0x559 | Ordinal: 1370
        void operator__(class QChar);

    // RVA: 0x55A | Ordinal: 1371
        void operator__(class QLatin1String);

    // RVA: 0x55B | Ordinal: 1372
        void operator__(class QStringView);

    // RVA: 0x55C | Ordinal: 1373
        void operator__(class QTextStreamManipulator);

    // RVA: 0x55D | Ordinal: 1374
        void operator__(__int64);

    // RVA: 0x55E | Ordinal: 1375
        void operator__(unsigned __int64);

    // RVA: 0x55F | Ordinal: 1376
        void operator__(bool);

    // RVA: 0x560 | Ordinal: 1377
        void operator__(char16_t);

    // RVA: 0x561 | Ordinal: 1378
        void operator__(char32_t);

    // RVA: 0x157B | Ordinal: 5500
        void putByteArray(char const *, unsigned __int64, enum QDebug::Latin1Content);

    // RVA: 0x157E | Ordinal: 5503
        void putString(class QChar const *, unsigned __int64);

    // RVA: 0x157F | Ordinal: 5504
        void putUcs4(unsigned int);

    // RVA: 0x16FC | Ordinal: 5885
        void quote(void);

    // RVA: 0x1860 | Ordinal: 6241
        void resetFormat(void);

    // RVA: 0x1938 | Ordinal: 6457
        void setAutoInsertSpaces(bool);

    // RVA: 0x1AD9 | Ordinal: 6874
        void setVerbosity(int);

    // RVA: 0x1B66 | Ordinal: 7015
        void space(void);

    // RVA: 0x1C71 | Ordinal: 7282
        void swap(class QDebug &);

    // RVA: 0x1FD5 | Ordinal: 8150
        void verbosity(int);

    // RVA: 0x1FD6 | Ordinal: 8151
        void verbosity(void) const;

    // RVA: 0x301 | Ordinal: 770
        void _QDebug(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QDEBUG_HPP
