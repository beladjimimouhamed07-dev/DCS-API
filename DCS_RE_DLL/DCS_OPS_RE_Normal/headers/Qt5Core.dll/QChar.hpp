#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QChar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QChar
{
public:

    // RVA: 0x9D | Ordinal: 158
        void QChar(char);

    // RVA: 0x9E | Ordinal: 159
        void QChar(unsigned char);

    // RVA: 0x9F | Ordinal: 160
        void QChar(unsigned char, unsigned char);

    // RVA: 0xA0 | Ordinal: 161
        void QChar(short);

    // RVA: 0xA1 | Ordinal: 162
        void QChar(unsigned short);

    // RVA: 0xA2 | Ordinal: 163
        void QChar(int);

    // RVA: 0xA3 | Ordinal: 164
        void QChar(unsigned int);

    // RVA: 0xA4 | Ordinal: 165
        void QChar(struct QLatin1Char);

    // RVA: 0xA5 | Ordinal: 166
        void QChar(enum QChar::SpecialCharacter);

    // RVA: 0xA6 | Ordinal: 167
        void QChar(void);

    // RVA: 0xA7 | Ordinal: 168
        void QChar(char16_t);

    // RVA: 0xA8 | Ordinal: 169
        void QChar(wchar_t);

    // RVA: 0x98C | Ordinal: 2445
        void category(void) const;

    // RVA: 0x98D | Ordinal: 2446
        void category(unsigned int);

    // RVA: 0x99C | Ordinal: 2461
        void cell(void) const;

    // RVA: 0xA32 | Ordinal: 2611
        void combiningClass(void) const;

    // RVA: 0xA33 | Ordinal: 2612
        void combiningClass(unsigned int);

    // RVA: 0xB75 | Ordinal: 2934
        void currentUnicodeVersion(void);

    // RVA: 0xC4E | Ordinal: 3151
        void decomposition(void) const;

    // RVA: 0xC4F | Ordinal: 3152
        void decomposition(unsigned int);

    // RVA: 0xC51 | Ordinal: 3154
        void decompositionTag(void) const;

    // RVA: 0xC52 | Ordinal: 3155
        void decompositionTag(unsigned int);

    // RVA: 0xC9C | Ordinal: 3229
        void digitValue(void) const;

    // RVA: 0xC9D | Ordinal: 3230
        void digitValue(unsigned int);

    // RVA: 0xCA3 | Ordinal: 3236
        void direction(void) const;

    // RVA: 0xCA4 | Ordinal: 3237
        void direction(unsigned int);

    // RVA: 0xE96 | Ordinal: 3735
        void fromAscii(char);

    // RVA: 0xEAE | Ordinal: 3759
        void fromLatin1(char);

    // RVA: 0xF60 | Ordinal: 3937
        void hasMirrored(void) const;

    // RVA: 0xF61 | Ordinal: 3938
        void hasMirrored(unsigned int);

    // RVA: 0xF90 | Ordinal: 3985
        void highSurrogate(unsigned int);

    // RVA: 0x10B5 | Ordinal: 4278
        void isDigit(void) const;

    // RVA: 0x10B6 | Ordinal: 4279
        void isDigit(unsigned int);

    // RVA: 0x10FD | Ordinal: 4350
        void isHighSurrogate(void) const;

    // RVA: 0x10FE | Ordinal: 4351
        void isHighSurrogate(unsigned int);

    // RVA: 0x1114 | Ordinal: 4373
        void isLetter(void) const;

    // RVA: 0x1115 | Ordinal: 4374
        void isLetter(unsigned int);

    // RVA: 0x1118 | Ordinal: 4377
        void isLetterOrNumber(void) const;

    // RVA: 0x1119 | Ordinal: 4378
        void isLetterOrNumber(unsigned int);

    // RVA: 0x111B | Ordinal: 4380
        void isLetterOrNumber_helper(unsigned int);

    // RVA: 0x111C | Ordinal: 4381
        void isLetter_helper(unsigned int);

    // RVA: 0x1122 | Ordinal: 4387
        void isLowSurrogate(void) const;

    // RVA: 0x1123 | Ordinal: 4388
        void isLowSurrogate(unsigned int);

    // RVA: 0x1125 | Ordinal: 4390
        void isLower(void) const;

    // RVA: 0x1126 | Ordinal: 4391
        void isLower(unsigned int);

    // RVA: 0x1134 | Ordinal: 4405
        void isMark(void) const;

    // RVA: 0x1135 | Ordinal: 4406
        void isMark(unsigned int);

    // RVA: 0x113E | Ordinal: 4415
        void isNonCharacter(void) const;

    // RVA: 0x113F | Ordinal: 4416
        void isNonCharacter(unsigned int);

    // RVA: 0x1145 | Ordinal: 4422
        void isNull(void) const;

    // RVA: 0x1159 | Ordinal: 4442
        void isNumber(void) const;

    // RVA: 0x115A | Ordinal: 4443
        void isNumber(unsigned int);

    // RVA: 0x115C | Ordinal: 4445
        void isNumber_helper(unsigned int);

    // RVA: 0x1167 | Ordinal: 4456
        void isPrint(void) const;

    // RVA: 0x1168 | Ordinal: 4457
        void isPrint(unsigned int);

    // RVA: 0x116F | Ordinal: 4464
        void isPunct(void) const;

    // RVA: 0x1170 | Ordinal: 4465
        void isPunct(unsigned int);

    // RVA: 0x11C1 | Ordinal: 4546
        void isSpace(void) const;

    // RVA: 0x11C2 | Ordinal: 4547
        void isSpace(unsigned int);

    // RVA: 0x11C4 | Ordinal: 4549
        void isSpace_helper(unsigned int);

    // RVA: 0x11D1 | Ordinal: 4562
        void isSurrogate(void) const;

    // RVA: 0x11D2 | Ordinal: 4563
        void isSurrogate(unsigned int);

    // RVA: 0x11D4 | Ordinal: 4565
        void isSymbol(void) const;

    // RVA: 0x11D5 | Ordinal: 4566
        void isSymbol(unsigned int);

    // RVA: 0x11DF | Ordinal: 4576
        void isTitleCase(void) const;

    // RVA: 0x11E0 | Ordinal: 4577
        void isTitleCase(unsigned int);

    // RVA: 0x11EF | Ordinal: 4592
        void isUpper(void) const;

    // RVA: 0x11F0 | Ordinal: 4593
        void isUpper(unsigned int);

    // RVA: 0x1234 | Ordinal: 4661
        void joining(void) const;

    // RVA: 0x1235 | Ordinal: 4662
        void joining(unsigned int);

    // RVA: 0x1237 | Ordinal: 4664
        void joiningType(void) const;

    // RVA: 0x1238 | Ordinal: 4665
        void joiningType(unsigned int);

    // RVA: 0x12DF | Ordinal: 4832
        void lowSurrogate(unsigned int);

    // RVA: 0x13AF | Ordinal: 5040
        void mirroredChar(void) const;

    // RVA: 0x13B0 | Ordinal: 5041
        void mirroredChar(unsigned int);

    // RVA: 0x184A | Ordinal: 6219
        void requiresSurrogates(unsigned int);

    // RVA: 0x18AF | Ordinal: 6320
        void row(void) const;

    // RVA: 0x18DE | Ordinal: 6367
        void script(void) const;

    // RVA: 0x18DF | Ordinal: 6368
        void script(unsigned int);

    // RVA: 0x194A | Ordinal: 6475
        void setCell(unsigned char);

    // RVA: 0x1A7C | Ordinal: 6781
        void setRow(unsigned char);

    // RVA: 0x1C5F | Ordinal: 7264
        void surrogateToUcs4(unsigned short, unsigned short);

    // RVA: 0x1C60 | Ordinal: 7265
        void surrogateToUcs4(class QChar, class QChar);

    // RVA: 0x1CE9 | Ordinal: 7402
        void toAscii(void) const;

    // RVA: 0x1CFE | Ordinal: 7423
        void toCaseFolded(void) const;

    // RVA: 0x1CFF | Ordinal: 7424
        void toCaseFolded(unsigned int);

    // RVA: 0x1D61 | Ordinal: 7522
        void toLatin1(void) const;

    // RVA: 0x1D89 | Ordinal: 7562
        void toLower(void) const;

    // RVA: 0x1D8A | Ordinal: 7563
        void toLower(unsigned int);

    // RVA: 0x1E10 | Ordinal: 7697
        void toTitleCase(void) const;

    // RVA: 0x1E11 | Ordinal: 7698
        void toTitleCase(unsigned int);

    // RVA: 0x1E3B | Ordinal: 7740
        void toUpper(void) const;

    // RVA: 0x1E3C | Ordinal: 7741
        void toUpper(unsigned int);

    // RVA: 0x1F50 | Ordinal: 8017
        void unicode(void);

    // RVA: 0x1F51 | Ordinal: 8018
        void unicode(void) const;

    // RVA: 0x1F56 | Ordinal: 8023
        void unicodeVersion(void) const;

    // RVA: 0x1F57 | Ordinal: 8024
        void unicodeVersion(unsigned int);
};

// DCS_OPS_RE_QT5CORE.DLL_QCHAR_HPP
