#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFontDatabase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontDatabase
{
public:

    // RVA: 0x101 | Ordinal: 258
        void QFontDatabase(void);

    // RVA: 0x95D | Ordinal: 2398
        void addApplicationFont(class QString const &);

    // RVA: 0x95F | Ordinal: 2400
        void addApplicationFontFromData(class QByteArray const &);

    // RVA: 0xA09 | Ordinal: 2570
        void applicationFontFamilies(int);

    // RVA: 0xAC9 | Ordinal: 2762
        void bold(class QString const &, class QString const &) const;

    // RVA: 0xCA1 | Ordinal: 3234
        void createDatabase(void);

    // RVA: 0x1022 | Ordinal: 4131
        void families(enum QFontDatabase::WritingSystem) const;

    // RVA: 0x1077 | Ordinal: 4216
        void findFont(struct QFontDef const &, int);

    // RVA: 0x10B4 | Ordinal: 4277
        void font(class QString const &, class QString const &, int) const;

    // RVA: 0x4E64 | Ordinal: 20069
        void hasFamily(class QString const &) const;

    // RVA: 0x4FCE | Ordinal: 20431
        void isBitmapScalable(class QString const &, class QString const &) const;

    // RVA: 0x5025 | Ordinal: 20518
        void isFixedPitch(class QString const &, class QString const &) const;

    // RVA: 0x5067 | Ordinal: 20584
        void isPrivateFamily(class QString const &) const;

    // RVA: 0x5078 | Ordinal: 20601
        void isScalable(class QString const &, class QString const &) const;

    // RVA: 0x507D | Ordinal: 20606
        void isSmoothlyScalable(class QString const &, class QString const &) const;

    // RVA: 0x50C4 | Ordinal: 20677
        void italic(class QString const &, class QString const &) const;

    // RVA: 0x517F | Ordinal: 20864
        void load(class QFontPrivate const *, int);

    // RVA: 0x5413 | Ordinal: 21524
        void parseFontName(class QString const &, class QString &, class QString &);

    // RVA: 0x547A | Ordinal: 21627
        void pointSizes(class QString const &, class QString const &);

    // RVA: 0x56C9 | Ordinal: 22218
        void removeAllApplicationFonts(void);

    // RVA: 0x56CB | Ordinal: 22220
        void removeApplicationFont(int);

    // RVA: 0x5738 | Ordinal: 22329
        void resolveFontFamilyAlias(class QString const &);

    // RVA: 0x5D59 | Ordinal: 23898
        void smoothSizes(class QString const &, class QString const &);

    // RVA: 0x5D7F | Ordinal: 23936
        void standardSizes(void);

    // RVA: 0x5E3D | Ordinal: 24126
        void styleString(class QFont const &);

    // RVA: 0x5E3E | Ordinal: 24127
        void styleString(class QFontInfo const &);

    // RVA: 0x5E41 | Ordinal: 24130
        void styles(class QString const &) const;

    // RVA: 0x5E6D | Ordinal: 24174
        void supportsThreadedFontRendering(void);

    // RVA: 0x5EA2 | Ordinal: 24227
        void systemFont(enum QFontDatabase::SystemFont);

    // RVA: 0x6141 | Ordinal: 24898
        void weight(class QString const &, class QString const &) const;

    // RVA: 0x61B1 | Ordinal: 25010
        void writingSystemName(enum QFontDatabase::WritingSystem);

    // RVA: 0x61B2 | Ordinal: 25011
        void writingSystemSample(enum QFontDatabase::WritingSystem);

    // RVA: 0x61B3 | Ordinal: 25012
        void writingSystems(class QString const &) const;

    // RVA: 0x61B4 | Ordinal: 25013
        void writingSystems(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QFONTDATABASE_HPP
