#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QLocalePrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLocalePrivate
{
public:

    // RVA: 0x16F | Ordinal: 368
        void QLocalePrivate(void);

    // RVA: 0x8E8 | Ordinal: 2281
        void bcp47Name(char) const;

    // RVA: 0xA0E | Ordinal: 2575
        void codeToCountry(class QStringView);

    // RVA: 0xA0F | Ordinal: 2576
        void codeToLanguage(class QStringView);

    // RVA: 0xA10 | Ordinal: 2577
        void codeToScript(class QStringView);

    // RVA: 0xB15 | Ordinal: 2838
        void countryCode(void) const;

    // RVA: 0xB16 | Ordinal: 2839
        void countryId(void) const;

    // RVA: 0xB17 | Ordinal: 2840
        void countryToCode(enum QLocale::Country);

    // RVA: 0xB21 | Ordinal: 2850
        void create(struct QLocaleData const *, unsigned int, class QFlags<enum QLocale::NumberOption>);

    // RVA: 0xC48 | Ordinal: 3145
        void decimal(void) const;

    // RVA: 0xDE1 | Ordinal: 3554
        void exponential(void) const;

    // RVA: 0xF17 | Ordinal: 3864
        void get(class QLocale &);

    // RVA: 0xF18 | Ordinal: 3865
        void get(class QLocale const &);

    // RVA: 0xF28 | Ordinal: 3881
        void getLangAndCountry(class QString const &, enum QLocale::Language &, enum QLocale::Script &, enum QLocale::Country &);

    // RVA: 0xF3B | Ordinal: 3900
        void group(void) const;

    // RVA: 0x1257 | Ordinal: 4696
        void languageCode(void) const;

    // RVA: 0x1258 | Ordinal: 4697
        void languageId(void) const;

    // RVA: 0x1259 | Ordinal: 4698
        void languageToCode(enum QLocale::Language);

    // RVA: 0x12AB | Ordinal: 4780
        void list(void) const;

    // RVA: 0x133A | Ordinal: 4923
        void measurementSystem(void) const;

    // RVA: 0x13AD | Ordinal: 5038
        void minus(void) const;

    // RVA: 0x14D9 | Ordinal: 5338
        void percent(void) const;

    // RVA: 0x14E6 | Ordinal: 5351
        void plus(void) const;

    // RVA: 0x1707 | Ordinal: 5896
        void rawName(char) const;

    // RVA: 0x18E2 | Ordinal: 6371
        void scriptCode(void) const;

    // RVA: 0x18E3 | Ordinal: 6372
        void scriptToCode(enum QLocale::Script);

    // RVA: 0x2057 | Ordinal: 8280
        void zero(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QLOCALEPRIVATE_HPP
