#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QLocale
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLocale
{
public:

    // RVA: 0x169 | Ordinal: 362
        void QLocale(class QLocalePrivate &);

    // RVA: 0x16A | Ordinal: 363
        void QLocale(class QLocale const &);

    // RVA: 0x16B | Ordinal: 364
        void QLocale(class QString const &);

    // RVA: 0x16C | Ordinal: 365
        void QLocale(enum QLocale::Language, enum QLocale::Country);

    // RVA: 0x16D | Ordinal: 366
        void QLocale(enum QLocale::Language, enum QLocale::Script, enum QLocale::Country);

    // RVA: 0x16E | Ordinal: 367
        void QLocale(void);

    // RVA: 0x838 | Ordinal: 2105
        void amText(void) const;

    // RVA: 0x8E7 | Ordinal: 2280
        void bcp47Name(void) const;

    // RVA: 0x941 | Ordinal: 2370
        void c(void);

    // RVA: 0xA1C | Ordinal: 2589
        void collation(void) const;

    // RVA: 0xB12 | Ordinal: 2835
        void countriesForLanguage(enum QLocale::Language);

    // RVA: 0xB13 | Ordinal: 2836
        void country(void) const;

    // RVA: 0xB18 | Ordinal: 2841
        void countryToString(enum QLocale::Country);

    // RVA: 0xB3A | Ordinal: 2875
        void createSeparatedList(class QStringList const &) const;

    // RVA: 0xB54 | Ordinal: 2901
        void currencySymbol(enum QLocale::CurrencySymbolFormat) const;

    // RVA: 0xC18 | Ordinal: 3097
        void dateFormat(enum QLocale::FormatType) const;

    // RVA: 0xC1B | Ordinal: 3100
        void dateTimeFormat(enum QLocale::FormatType) const;

    // RVA: 0xC25 | Ordinal: 3110
        void dayName(int, enum QLocale::FormatType) const;

    // RVA: 0xC49 | Ordinal: 3146
        void decimalPoint(void) const;

    // RVA: 0xDE0 | Ordinal: 3553
        void exponential(void) const;

    // RVA: 0xE5E | Ordinal: 3679
        void firstDayOfWeek(void) const;

    // RVA: 0xE83 | Ordinal: 3716
        void formattedDataSize(__int64, int, class QFlags<enum QLocale::DataSizeFormat>);

    // RVA: 0xE84 | Ordinal: 3717
        void formattedDataSize(__int64, int, class QFlags<enum QLocale::DataSizeFormat>) const;

    // RVA: 0xF3E | Ordinal: 3903
        void groupSeparator(void) const;

    // RVA: 0x1255 | Ordinal: 4694
        void language(void) const;

    // RVA: 0x125A | Ordinal: 4699
        void languageToString(enum QLocale::Language);

    // RVA: 0x1326 | Ordinal: 4903
        void matchingLocales(enum QLocale::Language, enum QLocale::Script, enum QLocale::Country);

    // RVA: 0x1339 | Ordinal: 4922
        void measurementSystem(void) const;

    // RVA: 0x13C4 | Ordinal: 5061
        void monthName(int, enum QLocale::FormatType) const;

    // RVA: 0x1402 | Ordinal: 5123
        void name(void) const;

    // RVA: 0x1420 | Ordinal: 5153
        void nativeCountryName(void) const;

    // RVA: 0x1422 | Ordinal: 5155
        void nativeLanguageName(void) const;

    // RVA: 0x1424 | Ordinal: 5157
        void negativeSign(void) const;

    // RVA: 0x1465 | Ordinal: 5222
        void numberOptions(void) const;

    // RVA: 0x14D8 | Ordinal: 5337
        void percent(void) const;

    // RVA: 0x14E7 | Ordinal: 5352
        void pmText(void) const;

    // RVA: 0x1504 | Ordinal: 5381
        void positiveSign(void) const;

    // RVA: 0x16FD | Ordinal: 5886
        void quoteString(class QString const &, enum QLocale::QuotationStyle) const;

    // RVA: 0x16FE | Ordinal: 5887
        void quoteString(class QStringRef const &, enum QLocale::QuotationStyle) const;

    // RVA: 0x18E1 | Ordinal: 6370
        void script(void) const;

    // RVA: 0x18E4 | Ordinal: 6373
        void scriptToString(enum QLocale::Script);

    // RVA: 0x1972 | Ordinal: 6515
        void setDefault(class QLocale const &);

    // RVA: 0x1A27 | Ordinal: 6696
        void setNumberOptions(class QFlags<enum QLocale::NumberOption>);

    // RVA: 0x1B8D | Ordinal: 7054
        void standaloneDayName(int, enum QLocale::FormatType) const;

    // RVA: 0x1B91 | Ordinal: 7058
        void standaloneMonthName(int, enum QLocale::FormatType) const;

    // RVA: 0x1C7A | Ordinal: 7291
        void swap(class QLocale &);

    // RVA: 0x1C96 | Ordinal: 7319
        void system(void);

    // RVA: 0x1CCC | Ordinal: 7373
        void textDirection(void) const;

    // RVA: 0x1CD2 | Ordinal: 7379
        void timeFormat(enum QLocale::FormatType) const;

    // RVA: 0x1D0D | Ordinal: 7438
        void toCurrencyString(short, class QString const &) const;

    // RVA: 0x1D0E | Ordinal: 7439
        void toCurrencyString(unsigned short, class QString const &) const;

    // RVA: 0x1D0F | Ordinal: 7440
        void toCurrencyString(int, class QString const &) const;

    // RVA: 0x1D10 | Ordinal: 7441
        void toCurrencyString(unsigned int, class QString const &) const;

    // RVA: 0x1D11 | Ordinal: 7442
        void toCurrencyString(float, class QString const &) const;

    // RVA: 0x1D12 | Ordinal: 7443
        void toCurrencyString(float, class QString const &, int) const;

    // RVA: 0x1D13 | Ordinal: 7444
        void toCurrencyString(double, class QString const &) const;

    // RVA: 0x1D14 | Ordinal: 7445
        void toCurrencyString(double, class QString const &, int) const;

    // RVA: 0x1D15 | Ordinal: 7446
        void toCurrencyString(__int64, class QString const &) const;

    // RVA: 0x1D16 | Ordinal: 7447
        void toCurrencyString(unsigned __int64, class QString const &) const;

    // RVA: 0x1D17 | Ordinal: 7448
        void toDate(class QString const &, class QString const &) const;

    // RVA: 0x1D18 | Ordinal: 7449
        void toDate(class QString const &, class QString const &, class QCalendar) const;

    // RVA: 0x1D19 | Ordinal: 7450
        void toDate(class QString const &, enum QLocale::FormatType) const;

    // RVA: 0x1D1A | Ordinal: 7451
        void toDate(class QString const &, enum QLocale::FormatType, class QCalendar) const;

    // RVA: 0x1D1E | Ordinal: 7455
        void toDateTime(class QString const &, class QString const &) const;

    // RVA: 0x1D1F | Ordinal: 7456
        void toDateTime(class QString const &, class QString const &, class QCalendar) const;

    // RVA: 0x1D20 | Ordinal: 7457
        void toDateTime(class QString const &, enum QLocale::FormatType) const;

    // RVA: 0x1D21 | Ordinal: 7458
        void toDateTime(class QString const &, enum QLocale::FormatType, class QCalendar) const;

    // RVA: 0x1D2E | Ordinal: 7471
        void toDouble(class QString const &, bool *) const;

    // RVA: 0x1D2F | Ordinal: 7472
        void toDouble(class QStringRef const &, bool *) const;

    // RVA: 0x1D30 | Ordinal: 7473
        void toDouble(class QStringView, bool *) const;

    // RVA: 0x1D3C | Ordinal: 7485
        void toFloat(class QString const &, bool *) const;

    // RVA: 0x1D3D | Ordinal: 7486
        void toFloat(class QStringRef const &, bool *) const;

    // RVA: 0x1D3E | Ordinal: 7487
        void toFloat(class QStringView, bool *) const;

    // RVA: 0x1D4B | Ordinal: 7500
        void toInt(class QString const &, bool *) const;

    // RVA: 0x1D4C | Ordinal: 7501
        void toInt(class QStringRef const &, bool *) const;

    // RVA: 0x1D4D | Ordinal: 7502
        void toInt(class QStringView, bool *) const;

    // RVA: 0x1D7A | Ordinal: 7547
        void toLong(class QString const &, bool *) const;

    // RVA: 0x1D7B | Ordinal: 7548
        void toLong(class QStringRef const &, bool *) const;

    // RVA: 0x1D7C | Ordinal: 7549
        void toLong(class QStringView, bool *) const;

    // RVA: 0x1D80 | Ordinal: 7553
        void toLongLong(class QString const &, bool *) const;

    // RVA: 0x1D81 | Ordinal: 7554
        void toLongLong(class QStringRef const &, bool *) const;

    // RVA: 0x1D82 | Ordinal: 7555
        void toLongLong(class QStringView, bool *) const;

    // RVA: 0x1D8C | Ordinal: 7565
        void toLower(class QString const &) const;

    // RVA: 0x1DB8 | Ordinal: 7609
        void toShort(class QString const &, bool *) const;

    // RVA: 0x1DB9 | Ordinal: 7610
        void toShort(class QStringRef const &, bool *) const;

    // RVA: 0x1DBA | Ordinal: 7611
        void toShort(class QStringView, bool *) const;

    // RVA: 0x1DE3 | Ordinal: 7652
        void toString(class QDate const &, class QString const &) const;

    // RVA: 0x1DE4 | Ordinal: 7653
        void toString(class QDate const &, class QStringView) const;

    // RVA: 0x1DE5 | Ordinal: 7654
        void toString(class QDate const &, class QStringView, class QCalendar) const;

    // RVA: 0x1DE6 | Ordinal: 7655
        void toString(class QDate const &, enum QLocale::FormatType) const;

    // RVA: 0x1DE7 | Ordinal: 7656
        void toString(class QDate const &, enum QLocale::FormatType, class QCalendar) const;

    // RVA: 0x1DE8 | Ordinal: 7657
        void toString(class QDateTime const &, class QString const &) const;

    // RVA: 0x1DE9 | Ordinal: 7658
        void toString(class QDateTime const &, class QStringView) const;

    // RVA: 0x1DEA | Ordinal: 7659
        void toString(class QDateTime const &, class QStringView, class QCalendar) const;

    // RVA: 0x1DEB | Ordinal: 7660
        void toString(class QDateTime const &, enum QLocale::FormatType) const;

    // RVA: 0x1DEC | Ordinal: 7661
        void toString(class QDateTime const &, enum QLocale::FormatType, class QCalendar) const;

    // RVA: 0x1DED | Ordinal: 7662
        void toString(class QTime const &, class QString const &) const;

    // RVA: 0x1DEE | Ordinal: 7663
        void toString(class QTime const &, class QStringView) const;

    // RVA: 0x1DEF | Ordinal: 7664
        void toString(class QTime const &, enum QLocale::FormatType) const;

    // RVA: 0x1DF0 | Ordinal: 7665
        void toString(short) const;

    // RVA: 0x1DF1 | Ordinal: 7666
        void toString(unsigned short) const;

    // RVA: 0x1DF2 | Ordinal: 7667
        void toString(int) const;

    // RVA: 0x1DF3 | Ordinal: 7668
        void toString(unsigned int) const;

    // RVA: 0x1DF4 | Ordinal: 7669
        void toString(long) const;

    // RVA: 0x1DF5 | Ordinal: 7670
        void toString(unsigned long) const;

    // RVA: 0x1DF6 | Ordinal: 7671
        void toString(float, char, int) const;

    // RVA: 0x1DF7 | Ordinal: 7672
        void toString(double, char, int) const;

    // RVA: 0x1DF8 | Ordinal: 7673
        void toString(__int64) const;

    // RVA: 0x1DF9 | Ordinal: 7674
        void toString(unsigned __int64) const;

    // RVA: 0x1E08 | Ordinal: 7689
        void toTime(class QString const &, class QString const &) const;

    // RVA: 0x1E09 | Ordinal: 7690
        void toTime(class QString const &, class QString const &, class QCalendar) const;

    // RVA: 0x1E0A | Ordinal: 7691
        void toTime(class QString const &, enum QLocale::FormatType) const;

    // RVA: 0x1E0B | Ordinal: 7692
        void toTime(class QString const &, enum QLocale::FormatType, class QCalendar) const;

    // RVA: 0x1E14 | Ordinal: 7701
        void toUInt(class QString const &, bool *) const;

    // RVA: 0x1E15 | Ordinal: 7702
        void toUInt(class QStringRef const &, bool *) const;

    // RVA: 0x1E16 | Ordinal: 7703
        void toUInt(class QStringView, bool *) const;

    // RVA: 0x1E1B | Ordinal: 7708
        void toULong(class QString const &, bool *) const;

    // RVA: 0x1E1C | Ordinal: 7709
        void toULong(class QStringRef const &, bool *) const;

    // RVA: 0x1E1D | Ordinal: 7710
        void toULong(class QStringView, bool *) const;

    // RVA: 0x1E21 | Ordinal: 7714
        void toULongLong(class QString const &, bool *) const;

    // RVA: 0x1E22 | Ordinal: 7715
        void toULongLong(class QStringRef const &, bool *) const;

    // RVA: 0x1E23 | Ordinal: 7716
        void toULongLong(class QStringView, bool *) const;

    // RVA: 0x1E28 | Ordinal: 7721
        void toUShort(class QString const &, bool *) const;

    // RVA: 0x1E29 | Ordinal: 7722
        void toUShort(class QStringRef const &, bool *) const;

    // RVA: 0x1E2A | Ordinal: 7723
        void toUShort(class QStringView, bool *) const;

    // RVA: 0x1E3E | Ordinal: 7743
        void toUpper(class QString const &) const;

    // RVA: 0x1F4C | Ordinal: 8013
        void uiLanguages(void) const;

    // RVA: 0x2004 | Ordinal: 8197
        void weekdays(void) const;

    // RVA: 0x2058 | Ordinal: 8281
        void zeroDigit(void) const;

    // RVA: 0x32F | Ordinal: 816
        void _QLocale(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QLOCALE_HPP
