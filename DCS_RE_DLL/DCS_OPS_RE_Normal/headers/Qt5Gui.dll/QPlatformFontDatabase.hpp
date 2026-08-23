#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformFontDatabase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformFontDatabase
{
public:

    // RVA: 0x23F | Ordinal: 576
        void QPlatformFontDatabase(class QPlatformFontDatabase const &);

    // RVA: 0x240 | Ordinal: 577
        void QPlatformFontDatabase(void);

    // RVA: 0x95E | Ordinal: 2399
        void addApplicationFont(class QByteArray const &, class QString const &);

    // RVA: 0xDC7 | Ordinal: 3528
        void defaultFont(void) const;

    // RVA: 0x1020 | Ordinal: 4129
        void fallbacksForFamily(class QString const &, enum QFont::Style, enum QFont::StyleHint, enum QChar::Script) const;

    // RVA: 0x10C3 | Ordinal: 4292
        void fontDir(void) const;

    // RVA: 0x10C6 | Ordinal: 4295
        void fontEngine(struct QFontDef const &, void *);

    // RVA: 0x10C7 | Ordinal: 4296
        void fontEngine(class QByteArray const &, double, enum QFont::HintingPreference);

    // RVA: 0x10CA | Ordinal: 4299
        void fontEngineMulti(class QFontEngine *, enum QChar::Script);

    // RVA: 0x10E2 | Ordinal: 4323
        void fontsAlwaysScalable(void) const;

    // RVA: 0x4FA7 | Ordinal: 20392
        void invalidate(void);

    // RVA: 0x5023 | Ordinal: 20516
        void isFamilyPopulated(class QString const &);

    // RVA: 0x5068 | Ordinal: 20585
        void isPrivateFontFamily(class QString const &) const;

    // RVA: 0x5482 | Ordinal: 21635
        void populateFamily(class QString const &);

    // RVA: 0x5483 | Ordinal: 21636
        void populateFamilyAliases(class QString const &);

    // RVA: 0x5484 | Ordinal: 21637
        void populateFontDatabase(void);

    // RVA: 0x56A6 | Ordinal: 22183
        void registerAliasToFontFamily(class QString const &, class QString const &);

    // RVA: 0x56A7 | Ordinal: 22184
        void registerFont(class QString const &, class QString const &, class QString const &, enum QFont::Weight, enum QFont::Style, enum QFont::Stretch, bool, bool, int, bool, class QSupportedWritingSystems const &, void *);

    // RVA: 0x56A8 | Ordinal: 22185
        void registerFontFamily(class QString const &);

    // RVA: 0x56AA | Ordinal: 22187
        void registerQPF2Font(class QByteArray const &, void *);

    // RVA: 0x56C2 | Ordinal: 22211
        void releaseHandle(void *);

    // RVA: 0x5739 | Ordinal: 22330
        void resolveFontFamilyAlias(class QString const &) const;

    // RVA: 0x5D80 | Ordinal: 23937
        void standardSizes(void) const;

    // RVA: 0x6144 | Ordinal: 24901
        void weightFromInteger(int);

    // RVA: 0x61B5 | Ordinal: 25014
        void writingSystemsFromTrueTypeBits(unsigned int *const, unsigned int *const);

    // RVA: 0x4CC | Ordinal: 1229
        void _QPlatformFontDatabase(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMFONTDATABASE_HPP
