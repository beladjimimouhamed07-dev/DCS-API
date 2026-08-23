#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QUuid
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QUuid
{
public:

    // RVA: 0x257 | Ordinal: 600
        void QUuid(enum Qt::Initialization);

    // RVA: 0x258 | Ordinal: 601
        void QUuid(struct _GUID const &);

    // RVA: 0x259 | Ordinal: 602
        void QUuid(class QByteArray const &);

    // RVA: 0x25A | Ordinal: 603
        void QUuid(class QString const &);

    // RVA: 0x25B | Ordinal: 604
        void QUuid(unsigned int, unsigned short, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x25C | Ordinal: 605
        void QUuid(char const *);

    // RVA: 0x25D | Ordinal: 606
        void QUuid(void);

    // RVA: 0xB3F | Ordinal: 2880
        void createUuid(void);

    // RVA: 0xB40 | Ordinal: 2881
        void createUuidV3(class QUuid const &, class QByteArray const &);

    // RVA: 0xB41 | Ordinal: 2882
        void createUuidV3(class QUuid const &, class QString const &);

    // RVA: 0xB42 | Ordinal: 2883
        void createUuidV5(class QUuid const &, class QByteArray const &);

    // RVA: 0xB43 | Ordinal: 2884
        void createUuidV5(class QUuid const &, class QString const &);

    // RVA: 0xEC8 | Ordinal: 3785
        void fromRfc4122(class QByteArray const &);

    // RVA: 0xEE0 | Ordinal: 3809
        void fromString(class QLatin1String);

    // RVA: 0xEE1 | Ordinal: 3810
        void fromString(class QStringView);

    // RVA: 0x1157 | Ordinal: 4440
        void isNull(void) const;

    // RVA: 0x65B | Ordinal: 1628
        void operator_(class QUuid const &) const;

    // RVA: 0x1CFB | Ordinal: 7420
        void toByteArray(enum QUuid::StringFormat) const;

    // RVA: 0x1CFC | Ordinal: 7421
        void toByteArray(void) const;

    // RVA: 0x1DB4 | Ordinal: 7605
        void toRfc4122(void) const;

    // RVA: 0x1E00 | Ordinal: 7681
        void toString(enum QUuid::StringFormat) const;

    // RVA: 0x1E01 | Ordinal: 7682
        void toString(void) const;

    // RVA: 0x1FD1 | Ordinal: 8146
        void variant(void) const;

    // RVA: 0x1FD9 | Ordinal: 8154
        void version(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QUUID_HPP
