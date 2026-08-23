#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFont
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFont
{
public:

    // RVA: 0xFA | Ordinal: 251
        void QFont(class QFontPrivate *);

    // RVA: 0xFB | Ordinal: 252
        void QFont(class QFont const &);

    // RVA: 0xFC | Ordinal: 253
        void QFont(class QFont const &, class QPaintDevice *);

    // RVA: 0xFD | Ordinal: 254
        void QFont(class QFont const &, class QPaintDevice const *);

    // RVA: 0xFE | Ordinal: 255
        void QFont(class QString const &, int, int, bool);

    // RVA: 0xFF | Ordinal: 256
        void QFont(void);

    // RVA: 0xAC8 | Ordinal: 2761
        void bold(void) const;

    // RVA: 0xB32 | Ordinal: 2867
        void cacheStatistics(void);

    // RVA: 0xB56 | Ordinal: 2903
        void capitalization(void) const;

    // RVA: 0xB98 | Ordinal: 2969
        void cleanup(void);

    // RVA: 0xDC6 | Ordinal: 3527
        void defaultFamily(void) const;

    // RVA: 0xE1D | Ordinal: 3614
        void detach(void);

    // RVA: 0xFF3 | Ordinal: 4084
        void exactMatch(void) const;

    // RVA: 0x1021 | Ordinal: 4130
        void families(void) const;

    // RVA: 0x1023 | Ordinal: 4132
        void family(void) const;

    // RVA: 0x108D | Ordinal: 4238
        void fixedPitch(void) const;

    // RVA: 0x1165 | Ordinal: 4454
        void fromString(class QString const &);

    // RVA: 0x4EAC | Ordinal: 20141
        void hintingPreference(void) const;

    // RVA: 0x4F10 | Ordinal: 20241
        void initialize(void);

    // RVA: 0x4F75 | Ordinal: 20342
        void insertSubstitution(class QString const &, class QString const &);

    // RVA: 0x4F76 | Ordinal: 20343
        void insertSubstitutions(class QString const &, class QStringList const &);

    // RVA: 0x4FF7 | Ordinal: 20472
        void isCopyOf(class QFont const &) const;

    // RVA: 0x50C3 | Ordinal: 20676
        void italic(void) const;

    // RVA: 0x50E9 | Ordinal: 20714
        void kerning(void) const;

    // RVA: 0x50EA | Ordinal: 20715
        void key(void) const;

    // RVA: 0x5112 | Ordinal: 20755
        void lastResortFamily(void) const;

    // RVA: 0x5113 | Ordinal: 20756
        void lastResortFont(void) const;

    // RVA: 0x5152 | Ordinal: 20819
        void letterSpacing(void) const;

    // RVA: 0x5153 | Ordinal: 20820
        void letterSpacingType(void) const;

    // RVA: 0x7C6 | Ordinal: 1991
        void operator_(class QFont const &) const;

    // RVA: 0x53C2 | Ordinal: 21443
        void overline(void) const;

    // RVA: 0x5454 | Ordinal: 21589
        void pixelSize(void) const;

    // RVA: 0x5476 | Ordinal: 21623
        void pointSize(void) const;

    // RVA: 0x5478 | Ordinal: 21625
        void pointSizeF(void) const;

    // RVA: 0x5668 | Ordinal: 22121
        void rawMode(void) const;

    // RVA: 0x566A | Ordinal: 22123
        void rawName(void) const;

    // RVA: 0x56ED | Ordinal: 22254
        void removeSubstitution(class QString const &);

    // RVA: 0x56EE | Ordinal: 22255
        void removeSubstitutions(class QString const &);

    // RVA: 0x5731 | Ordinal: 22322
        void resolve(unsigned int);

    // RVA: 0x5732 | Ordinal: 22323
        void resolve(class QFont const &) const;

    // RVA: 0x5733 | Ordinal: 22324
        void resolve(void) const;

    // RVA: 0x586E | Ordinal: 22639
        void setBold(bool);

    // RVA: 0x5899 | Ordinal: 22682
        void setCapitalization(enum QFont::Capitalization);

    // RVA: 0x5969 | Ordinal: 22890
        void setFamilies(class QStringList const &);

    // RVA: 0x596A | Ordinal: 22891
        void setFamily(class QString const &);

    // RVA: 0x597B | Ordinal: 22908
        void setFixedPitch(bool);

    // RVA: 0x59E9 | Ordinal: 23018
        void setHintingPreference(enum QFont::HintingPreference);

    // RVA: 0x5A0E | Ordinal: 23055
        void setItalic(bool);

    // RVA: 0x5A19 | Ordinal: 23066
        void setKerning(bool);

    // RVA: 0x5A39 | Ordinal: 23098
        void setLetterSpacing(enum QFont::SpacingType, double);

    // RVA: 0x5AC4 | Ordinal: 23237
        void setOverline(bool);

    // RVA: 0x5AF4 | Ordinal: 23285
        void setPixelSize(int);

    // RVA: 0x5AFF | Ordinal: 23296
        void setPointSize(int);

    // RVA: 0x5B00 | Ordinal: 23297
        void setPointSizeF(double);

    // RVA: 0x5B29 | Ordinal: 23338
        void setRawMode(bool);

    // RVA: 0x5B2A | Ordinal: 23339
        void setRawName(class QString const &);

    // RVA: 0x5BC1 | Ordinal: 23490
        void setStretch(int);

    // RVA: 0x5BC4 | Ordinal: 23493
        void setStrikeOut(bool);

    // RVA: 0x5BC9 | Ordinal: 23498
        void setStyle(enum QFont::Style);

    // RVA: 0x5BCC | Ordinal: 23501
        void setStyleHint(enum QFont::StyleHint, enum QFont::StyleStrategy);

    // RVA: 0x5BCD | Ordinal: 23502
        void setStyleName(class QString const &);

    // RVA: 0x5BCE | Ordinal: 23503
        void setStyleStrategy(enum QFont::StyleStrategy);

    // RVA: 0x5C25 | Ordinal: 23590
        void setUnderline(bool);

    // RVA: 0x5CB3 | Ordinal: 23732
        void setWeight(int);

    // RVA: 0x5CD1 | Ordinal: 23762
        void setWordSpacing(double);

    // RVA: 0x5E15 | Ordinal: 24086
        void stretch(void) const;

    // RVA: 0x5E18 | Ordinal: 24089
        void strikeOut(void) const;

    // RVA: 0x5E2B | Ordinal: 24108
        void style(void) const;

    // RVA: 0x5E31 | Ordinal: 24114
        void styleHint(void) const;

    // RVA: 0x5E37 | Ordinal: 24120
        void styleName(void) const;

    // RVA: 0x5E3C | Ordinal: 24125
        void styleStrategy(void) const;

    // RVA: 0x5E46 | Ordinal: 24135
        void substitute(class QString const &);

    // RVA: 0x5E47 | Ordinal: 24136
        void substitutes(class QString const &);

    // RVA: 0x5E48 | Ordinal: 24137
        void substitutions(void);

    // RVA: 0x5E7D | Ordinal: 24190
        void swap(class QFont &);

    // RVA: 0x5F6B | Ordinal: 24428
        void toString(void) const;

    // RVA: 0x607C | Ordinal: 24701
        void underline(void) const;

    // RVA: 0x6140 | Ordinal: 24897
        void weight(void) const;

    // RVA: 0x618F | Ordinal: 24976
        void wordSpacing(void) const;

    // RVA: 0x436 | Ordinal: 1079
        void _QFont(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFONT_HPP
