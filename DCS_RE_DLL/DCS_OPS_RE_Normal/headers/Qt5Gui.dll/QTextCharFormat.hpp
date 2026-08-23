#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextCharFormat
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextCharFormat
{
public:

    // RVA: 0x334 | Ordinal: 821
        void QTextCharFormat(class QTextFormat const &);

    // RVA: 0x335 | Ordinal: 822
        void QTextCharFormat(class QTextCharFormat &&);

    // RVA: 0x336 | Ordinal: 823
        void QTextCharFormat(class QTextCharFormat const &);

    // RVA: 0x337 | Ordinal: 824
        void QTextCharFormat(void);

    // RVA: 0x9E7 | Ordinal: 2536
        void anchorHref(void) const;

    // RVA: 0x9E8 | Ordinal: 2537
        void anchorName(void) const;

    // RVA: 0x9E9 | Ordinal: 2538
        void anchorNames(void) const;

    // RVA: 0x10BA | Ordinal: 4283
        void font(void) const;

    // RVA: 0x10BF | Ordinal: 4288
        void fontCapitalization(void) const;

    // RVA: 0x10CB | Ordinal: 4300
        void fontFamilies(void) const;

    // RVA: 0x10CC | Ordinal: 4301
        void fontFamily(void) const;

    // RVA: 0x10CD | Ordinal: 4302
        void fontFixedPitch(void) const;

    // RVA: 0x10CE | Ordinal: 4303
        void fontHintingPreference(void) const;

    // RVA: 0x10D0 | Ordinal: 4305
        void fontItalic(void) const;

    // RVA: 0x10D1 | Ordinal: 4306
        void fontKerning(void) const;

    // RVA: 0x10D2 | Ordinal: 4307
        void fontLetterSpacing(void) const;

    // RVA: 0x10D3 | Ordinal: 4308
        void fontLetterSpacingType(void) const;

    // RVA: 0x10D5 | Ordinal: 4310
        void fontOverline(void) const;

    // RVA: 0x10D6 | Ordinal: 4311
        void fontPointSize(void) const;

    // RVA: 0x10D9 | Ordinal: 4314
        void fontStretch(void) const;

    // RVA: 0x10DA | Ordinal: 4315
        void fontStrikeOut(void) const;

    // RVA: 0x10DB | Ordinal: 4316
        void fontStyleHint(void) const;

    // RVA: 0x10DC | Ordinal: 4317
        void fontStyleName(void) const;

    // RVA: 0x10DD | Ordinal: 4318
        void fontStyleStrategy(void) const;

    // RVA: 0x10DF | Ordinal: 4320
        void fontUnderline(void) const;

    // RVA: 0x10E0 | Ordinal: 4321
        void fontWeight(void) const;

    // RVA: 0x10E1 | Ordinal: 4322
        void fontWordSpacing(void) const;

    // RVA: 0x4FC8 | Ordinal: 20425
        void isAnchor(void) const;

    // RVA: 0x50A9 | Ordinal: 20650
        void isValid(void) const;

    // RVA: 0x5827 | Ordinal: 22568
        void setAnchor(bool);

    // RVA: 0x5828 | Ordinal: 22569
        void setAnchorHref(class QString const &);

    // RVA: 0x5829 | Ordinal: 22570
        void setAnchorName(class QString const &);

    // RVA: 0x582A | Ordinal: 22571
        void setAnchorNames(class QStringList const &);

    // RVA: 0x5995 | Ordinal: 22934
        void setFont(class QFont const &);

    // RVA: 0x5996 | Ordinal: 22935
        void setFont(class QFont const &, enum QTextCharFormat::FontPropertiesInheritanceBehavior);

    // RVA: 0x5998 | Ordinal: 22937
        void setFontCapitalization(enum QFont::Capitalization);

    // RVA: 0x599B | Ordinal: 22940
        void setFontFamilies(class QStringList const &);

    // RVA: 0x599C | Ordinal: 22941
        void setFontFamily(class QString const &);

    // RVA: 0x599D | Ordinal: 22942
        void setFontFixedPitch(bool);

    // RVA: 0x599E | Ordinal: 22943
        void setFontHintingPreference(enum QFont::HintingPreference);

    // RVA: 0x599F | Ordinal: 22944
        void setFontItalic(bool);

    // RVA: 0x59A0 | Ordinal: 22945
        void setFontKerning(bool);

    // RVA: 0x59A1 | Ordinal: 22946
        void setFontLetterSpacing(double);

    // RVA: 0x59A2 | Ordinal: 22947
        void setFontLetterSpacingType(enum QFont::SpacingType);

    // RVA: 0x59A3 | Ordinal: 22948
        void setFontOverline(bool);

    // RVA: 0x59A4 | Ordinal: 22949
        void setFontPointSize(double);

    // RVA: 0x59A5 | Ordinal: 22950
        void setFontStretch(int);

    // RVA: 0x59A6 | Ordinal: 22951
        void setFontStrikeOut(bool);

    // RVA: 0x59A7 | Ordinal: 22952
        void setFontStyleHint(enum QFont::StyleHint, enum QFont::StyleStrategy);

    // RVA: 0x59A8 | Ordinal: 22953
        void setFontStyleName(class QString const &);

    // RVA: 0x59A9 | Ordinal: 22954
        void setFontStyleStrategy(enum QFont::StyleStrategy);

    // RVA: 0x59AA | Ordinal: 22955
        void setFontUnderline(bool);

    // RVA: 0x59AB | Ordinal: 22956
        void setFontWeight(int);

    // RVA: 0x59AC | Ordinal: 22957
        void setFontWordSpacing(double);

    // RVA: 0x5BE3 | Ordinal: 23524
        void setTableCellColumnSpan(int);

    // RVA: 0x5BE4 | Ordinal: 23525
        void setTableCellRowSpan(int);

    // RVA: 0x5BF9 | Ordinal: 23546
        void setTextOutline(class QPen const &);

    // RVA: 0x5C0C | Ordinal: 23565
        void setToolTip(class QString const &);

    // RVA: 0x5C27 | Ordinal: 23592
        void setUnderlineColor(class QColor const &);

    // RVA: 0x5C28 | Ordinal: 23593
        void setUnderlineStyle(enum QTextCharFormat::UnderlineStyle);

    // RVA: 0x5C9C | Ordinal: 23709
        void setVerticalAlignment(enum QTextCharFormat::VerticalAlignment);

    // RVA: 0x5EB0 | Ordinal: 24241
        void tableCellColumnSpan(void) const;

    // RVA: 0x5EB3 | Ordinal: 24244
        void tableCellRowSpan(void) const;

    // RVA: 0x5F0E | Ordinal: 24335
        void textOutline(void) const;

    // RVA: 0x5F81 | Ordinal: 24450
        void toolTip(void) const;

    // RVA: 0x607F | Ordinal: 24704
        void underlineColor(void) const;

    // RVA: 0x6086 | Ordinal: 24711
        void underlineStyle(void) const;

    // RVA: 0x611C | Ordinal: 24861
        void verticalAlignment(void) const;

    // RVA: 0x52D | Ordinal: 1326
        void _QTextCharFormat(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTCHARFORMAT_HPP
