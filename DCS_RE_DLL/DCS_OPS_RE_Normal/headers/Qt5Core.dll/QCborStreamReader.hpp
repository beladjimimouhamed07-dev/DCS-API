#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCborStreamReader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCborStreamReader
{
public:

    // RVA: 0x79 | Ordinal: 122
        void QCborStreamReader(class QByteArray const &);

    // RVA: 0x7A | Ordinal: 123
        void QCborStreamReader(class QIODevice *);

    // RVA: 0x7B | Ordinal: 124
        void QCborStreamReader(char const *, __int64);

    // RVA: 0x7C | Ordinal: 125
        void QCborStreamReader(unsigned char const *, __int64);

    // RVA: 0x7D | Ordinal: 126
        void QCborStreamReader(void);

    // RVA: 0x7A5 | Ordinal: 1958
        void _currentStringChunkSize(void) const;

    // RVA: 0x7A6 | Ordinal: 1959
        void _enterContainer_helper(void);

    // RVA: 0x7B2 | Ordinal: 1971
        void _readByteArray_helper(void);

    // RVA: 0x7B3 | Ordinal: 1972
        void _readString_helper(void);

    // RVA: 0x7DE | Ordinal: 2015
        void addData(class QByteArray const &);

    // RVA: 0x7DF | Ordinal: 2016
        void addData(char const *, __int64);

    // RVA: 0x7E0 | Ordinal: 2017
        void addData(unsigned char const *, __int64);

    // RVA: 0x9E1 | Ordinal: 2530
        void clear(void);

    // RVA: 0xAB5 | Ordinal: 2742
        void containerDepth(void) const;

    // RVA: 0xB68 | Ordinal: 2921
        void currentOffset(void) const;

    // RVA: 0xB6E | Ordinal: 2927
        void currentStringChunkSize(void) const;

    // RVA: 0xC95 | Ordinal: 3222
        void device(void) const;

    // RVA: 0xD59 | Ordinal: 3418
        void enterContainer(void);

    // RVA: 0xF63 | Ordinal: 3940
        void hasNext(void) const;

    // RVA: 0x1074 | Ordinal: 4213
        void isArray(void) const;

    // RVA: 0x1081 | Ordinal: 4226
        void isBool(void) const;

    // RVA: 0x1089 | Ordinal: 4234
        void isByteArray(void) const;

    // RVA: 0x1099 | Ordinal: 4250
        void isContainer(void) const;

    // RVA: 0x10BB | Ordinal: 4284
        void isDouble(void) const;

    // RVA: 0x10E9 | Ordinal: 4330
        void isFalse(void) const;

    // RVA: 0x10F8 | Ordinal: 4345
        void isFloat(void) const;

    // RVA: 0x10F7 | Ordinal: 4344
        void isFloat16(void) const;

    // RVA: 0x1102 | Ordinal: 4355
        void isInteger(void) const;

    // RVA: 0x1107 | Ordinal: 4360
        void isInvalid(void) const;

    // RVA: 0x1113 | Ordinal: 4372
        void isLengthKnown(void) const;

    // RVA: 0x1131 | Ordinal: 4402
        void isMap(void) const;

    // RVA: 0x113D | Ordinal: 4414
        void isNegativeInteger(void) const;

    // RVA: 0x1142 | Ordinal: 4419
        void isNull(void) const;

    // RVA: 0x11B5 | Ordinal: 4534
        void isSimpleType(enum QCborSimpleType) const;

    // RVA: 0x11B6 | Ordinal: 4535
        void isSimpleType(void) const;

    // RVA: 0x11CC | Ordinal: 4557
        void isString(void) const;

    // RVA: 0x11D7 | Ordinal: 4568
        void isTag(void) const;

    // RVA: 0x11E4 | Ordinal: 4581
        void isTrue(void) const;

    // RVA: 0x11E7 | Ordinal: 4584
        void isUndefined(void) const;

    // RVA: 0x11ED | Ordinal: 4590
        void isUnsignedInteger(void) const;

    // RVA: 0x11FA | Ordinal: 4603
        void isValid(void) const;

    // RVA: 0x1267 | Ordinal: 4712
        void lastError(void);

    // RVA: 0x1289 | Ordinal: 4746
        void leaveContainer(void);

    // RVA: 0x129B | Ordinal: 4764
        void length(void) const;

    // RVA: 0x1426 | Ordinal: 5159
        void next(int);

    // RVA: 0x14B5 | Ordinal: 5302
        void parentContainerType(void) const;

    // RVA: 0x1513 | Ordinal: 5396
        void preparse(void);

    // RVA: 0x1725 | Ordinal: 5926
        void readByteArray(void);

    // RVA: 0x1742 | Ordinal: 5955
        void readString(void);

    // RVA: 0x1743 | Ordinal: 5956
        void readStringChunk(char *, __int64);

    // RVA: 0x1820 | Ordinal: 6177
        void reparse(void);

    // RVA: 0x1856 | Ordinal: 6231
        void reset(void);

    // RVA: 0x197B | Ordinal: 6524
        void setDevice(class QIODevice *);

    // RVA: 0x1CF2 | Ordinal: 7411
        void toBool(void) const;

    // RVA: 0x1D28 | Ordinal: 7465
        void toDouble(void) const;

    // RVA: 0x1D3B | Ordinal: 7484
        void toFloat(void) const;

    // RVA: 0x1D39 | Ordinal: 7482
        void toFloat16(void) const;

    // RVA: 0x1D51 | Ordinal: 7506
        void toInteger(void) const;

    // RVA: 0x1D9D | Ordinal: 7582
        void toNegativeInteger(void) const;

    // RVA: 0x1DBD | Ordinal: 7614
        void toSimpleType(void) const;

    // RVA: 0x1E07 | Ordinal: 7688
        void toTag(void) const;

    // RVA: 0x1E37 | Ordinal: 7736
        void toUnsignedInteger(void) const;

    // RVA: 0x1F33 | Ordinal: 7988
        void type(void) const;

    // RVA: 0x2F1 | Ordinal: 754
        void _QCborStreamReader(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCBORSTREAMREADER_HPP
