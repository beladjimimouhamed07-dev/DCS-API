#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QVariant
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QVariant
{
public:

    // RVA: 0x25E | Ordinal: 607
        void QVariant(class QVariant &&);

    // RVA: 0x25F | Ordinal: 608
        void QVariant(class QDataStream &);

    // RVA: 0x260 | Ordinal: 609
        void QVariant(class QVariant const &);

    // RVA: 0x261 | Ordinal: 610
        void QVariant(class QHash<class QString, class QVariant> const &);

    // RVA: 0x262 | Ordinal: 611
        void QVariant(class QList<class QVariant> const &);

    // RVA: 0x263 | Ordinal: 612
        void QVariant(class QMap<class QString, class QVariant> const &);

    // RVA: 0x264 | Ordinal: 613
        void QVariant(class QBitArray const &);

    // RVA: 0x265 | Ordinal: 614
        void QVariant(class QByteArray const &);

    // RVA: 0x266 | Ordinal: 615
        void QVariant(class QDate const &);

    // RVA: 0x267 | Ordinal: 616
        void QVariant(class QDateTime const &);

    // RVA: 0x268 | Ordinal: 617
        void QVariant(class QEasingCurve const &);

    // RVA: 0x269 | Ordinal: 618
        void QVariant(class QJsonArray const &);

    // RVA: 0x26A | Ordinal: 619
        void QVariant(class QJsonDocument const &);

    // RVA: 0x26B | Ordinal: 620
        void QVariant(class QJsonObject const &);

    // RVA: 0x26C | Ordinal: 621
        void QVariant(class QJsonValue const &);

    // RVA: 0x26D | Ordinal: 622
        void QVariant(class QLine const &);

    // RVA: 0x26E | Ordinal: 623
        void QVariant(class QLineF const &);

    // RVA: 0x26F | Ordinal: 624
        void QVariant(class QLocale const &);

    // RVA: 0x270 | Ordinal: 625
        void QVariant(class QModelIndex const &);

    // RVA: 0x271 | Ordinal: 626
        void QVariant(class QPersistentModelIndex const &);

    // RVA: 0x272 | Ordinal: 627
        void QVariant(class QPoint const &);

    // RVA: 0x273 | Ordinal: 628
        void QVariant(class QPointF const &);

    // RVA: 0x274 | Ordinal: 629
        void QVariant(class QRect const &);

    // RVA: 0x275 | Ordinal: 630
        void QVariant(class QRectF const &);

    // RVA: 0x276 | Ordinal: 631
        void QVariant(class QRegExp const &);

    // RVA: 0x277 | Ordinal: 632
        void QVariant(class QRegularExpression const &);

    // RVA: 0x278 | Ordinal: 633
        void QVariant(class QSize const &);

    // RVA: 0x279 | Ordinal: 634
        void QVariant(class QSizeF const &);

    // RVA: 0x27A | Ordinal: 635
        void QVariant(class QString const &);

    // RVA: 0x27B | Ordinal: 636
        void QVariant(class QStringList const &);

    // RVA: 0x27C | Ordinal: 637
        void QVariant(class QTime const &);

    // RVA: 0x27D | Ordinal: 638
        void QVariant(class QUrl const &);

    // RVA: 0x27E | Ordinal: 639
        void QVariant(class QUuid const &);

    // RVA: 0x27F | Ordinal: 640
        void QVariant(int);

    // RVA: 0x280 | Ordinal: 641
        void QVariant(int, void const *);

    // RVA: 0x281 | Ordinal: 642
        void QVariant(int, void const *, unsigned int);

    // RVA: 0x282 | Ordinal: 643
        void QVariant(unsigned int);

    // RVA: 0x283 | Ordinal: 644
        void QVariant(float);

    // RVA: 0x284 | Ordinal: 645
        void QVariant(double);

    // RVA: 0x285 | Ordinal: 646
        void QVariant(char const *);

    // RVA: 0x286 | Ordinal: 647
        void QVariant(class QChar);

    // RVA: 0x287 | Ordinal: 648
        void QVariant(class QLatin1String);

    // RVA: 0x288 | Ordinal: 649
        void QVariant(enum QVariant::Type);

    // RVA: 0x289 | Ordinal: 650
        void QVariant(void);

    // RVA: 0x28A | Ordinal: 651
        void QVariant(__int64);

    // RVA: 0x28B | Ordinal: 652
        void QVariant(unsigned __int64);

    // RVA: 0x28C | Ordinal: 653
        void QVariant(bool);

    // RVA: 0x94C | Ordinal: 2381
        void canConvert(int) const;

    // RVA: 0x9EF | Ordinal: 2544
        void clear(void);

    // RVA: 0xA0D | Ordinal: 2574
        void cmp(class QVariant const &) const;

    // RVA: 0xA5B | Ordinal: 2652
        void compare(class QVariant const &) const;

    // RVA: 0xA92 | Ordinal: 2707
        void constData(void) const;

    // RVA: 0xAE5 | Ordinal: 2790
        void convert(int);

    // RVA: 0xAE6 | Ordinal: 2791
        void convert(int, void *) const;

    // RVA: 0xB29 | Ordinal: 2858
        void create(int, void const *);

    // RVA: 0xC0D | Ordinal: 3086
        void data(void);

    // RVA: 0xC0E | Ordinal: 3087
        void data(void) const;

    // RVA: 0xC15 | Ordinal: 3094
        void data_ptr(void);

    // RVA: 0xC16 | Ordinal: 3095
        void data_ptr(void) const;

    // RVA: 0xC8C | Ordinal: 3213
        void detach(void);

    // RVA: 0x10B4 | Ordinal: 4277
        void isDetached(void) const;

    // RVA: 0x1158 | Ordinal: 4441
        void isNull(void) const;

    // RVA: 0x1217 | Ordinal: 4632
        void isValid(void) const;

    // RVA: 0x12B4 | Ordinal: 4789
        void load(class QDataStream &);

    // RVA: 0x1417 | Ordinal: 5144
        void nameToType(char const *);

    // RVA: 0x65C | Ordinal: 1629
        void operator_(class QVariant const &) const;

    // RVA: 0x18CD | Ordinal: 6350
        void save(class QDataStream &) const;

    // RVA: 0x1C87 | Ordinal: 7304
        void swap(class QVariant &);

    // RVA: 0x1CF0 | Ordinal: 7409
        void toBitArray(void) const;

    // RVA: 0x1CF8 | Ordinal: 7417
        void toBool(void) const;

    // RVA: 0x1CFD | Ordinal: 7422
        void toByteArray(void) const;

    // RVA: 0x1D0B | Ordinal: 7436
        void toChar(void) const;

    // RVA: 0x1D1B | Ordinal: 7452
        void toDate(void) const;

    // RVA: 0x1D22 | Ordinal: 7459
        void toDateTime(void) const;

    // RVA: 0x1D33 | Ordinal: 7476
        void toDouble(bool *) const;

    // RVA: 0x1D35 | Ordinal: 7478
        void toEasingCurve(void) const;

    // RVA: 0x1D41 | Ordinal: 7490
        void toFloat(bool *) const;

    // RVA: 0x1D42 | Ordinal: 7491
        void toHash(void) const;

    // RVA: 0x1D50 | Ordinal: 7505
        void toInt(bool *) const;

    // RVA: 0x1D59 | Ordinal: 7514
        void toJsonArray(void) const;

    // RVA: 0x1D5A | Ordinal: 7515
        void toJsonDocument(void) const;

    // RVA: 0x1D5C | Ordinal: 7517
        void toJsonObject(void) const;

    // RVA: 0x1D5F | Ordinal: 7520
        void toJsonValue(void) const;

    // RVA: 0x1D6B | Ordinal: 7532
        void toLine(void) const;

    // RVA: 0x1D6C | Ordinal: 7533
        void toLineF(void) const;

    // RVA: 0x1D70 | Ordinal: 7537
        void toList(void) const;

    // RVA: 0x1D78 | Ordinal: 7545
        void toLocale(void) const;

    // RVA: 0x1D85 | Ordinal: 7558
        void toLongLong(bool *) const;

    // RVA: 0x1D99 | Ordinal: 7578
        void toMap(void) const;

    // RVA: 0x1D9B | Ordinal: 7580
        void toModelIndex(void) const;

    // RVA: 0x1DA5 | Ordinal: 7590
        void toPersistentModelIndex(void) const;

    // RVA: 0x1DA7 | Ordinal: 7592
        void toPoint(void) const;

    // RVA: 0x1DA8 | Ordinal: 7593
        void toPointF(void) const;

    // RVA: 0x1DAB | Ordinal: 7596
        void toReal(bool *) const;

    // RVA: 0x1DAD | Ordinal: 7598
        void toRect(void) const;

    // RVA: 0x1DAE | Ordinal: 7599
        void toRectF(void) const;

    // RVA: 0x1DAF | Ordinal: 7600
        void toRegExp(void) const;

    // RVA: 0x1DB2 | Ordinal: 7603
        void toRegularExpression(void) const;

    // RVA: 0x1DC0 | Ordinal: 7617
        void toSize(void) const;

    // RVA: 0x1DC1 | Ordinal: 7618
        void toSizeF(void) const;

    // RVA: 0x1E02 | Ordinal: 7683
        void toString(void) const;

    // RVA: 0x1E06 | Ordinal: 7687
        void toStringList(void) const;

    // RVA: 0x1E0C | Ordinal: 7693
        void toTime(void) const;

    // RVA: 0x1E19 | Ordinal: 7706
        void toUInt(bool *) const;

    // RVA: 0x1E26 | Ordinal: 7719
        void toULongLong(bool *) const;

    // RVA: 0x1E48 | Ordinal: 7753
        void toUrl(void) const;

    // RVA: 0x1E50 | Ordinal: 7761
        void toUuid(void) const;

    // RVA: 0x1F41 | Ordinal: 8002
        void type(void) const;

    // RVA: 0x1F47 | Ordinal: 8008
        void typeName(void) const;

    // RVA: 0x1F48 | Ordinal: 8009
        void typeToName(int);

    // RVA: 0x1FA0 | Ordinal: 8097
        void userType(void) const;

    // RVA: 0x37D | Ordinal: 894
        void _QVariant(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QVARIANT_HPP
