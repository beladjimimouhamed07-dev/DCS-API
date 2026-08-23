#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: Unicode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class Unicode
{
public:

    // RVA: 0xABC | Ordinal: 2749
        void charCategory(unsigned int);

    // RVA: 0xABD | Ordinal: 2750
        void charCombining(unsigned int);

    // RVA: 0xABE | Ordinal: 2751
        void charCompose(unsigned int, unsigned int);

    // RVA: 0xABF | Ordinal: 2752
        void charDecompose(unsigned int);

    // RVA: 0xAC0 | Ordinal: 2753
        void charDirection(unsigned int);

    // RVA: 0xAC1 | Ordinal: 2754
        void charNumDecompose(unsigned int);

    // RVA: 0xC32 | Ordinal: 3123
        void decomposeType(unsigned int);

    // RVA: 0xCD6 | Ordinal: 3287
        void digitValue(unsigned int);

    // RVA: 0x1806 | Ordinal: 6151
        void hasCase(unsigned int);

    // RVA: 0x18F4 | Ordinal: 6389
        void isAlphaNumeric(unsigned int);

    // RVA: 0x18F8 | Ordinal: 6393
        void isAscii(unsigned int);

    // RVA: 0x18FC | Ordinal: 6397
        void isBlank(unsigned int);

    // RVA: 0x1910 | Ordinal: 6417
        void isControl(unsigned int);

    // RVA: 0x1918 | Ordinal: 6425
        void isDigit(unsigned int);

    // RVA: 0x1949 | Ordinal: 6474
        void isGraph(unsigned int);

    // RVA: 0x1953 | Ordinal: 6484
        void isHexDigit(unsigned int);

    // RVA: 0x1992 | Ordinal: 6547
        void isLetter(unsigned int);

    // RVA: 0x1997 | Ordinal: 6552
        void isLower(unsigned int);

    // RVA: 0x1999 | Ordinal: 6554
        void isMark(unsigned int);

    // RVA: 0x19D3 | Ordinal: 6612
        void isPrint(unsigned int);

    // RVA: 0x19D6 | Ordinal: 6615
        void isPunct(unsigned int);

    // RVA: 0x19E1 | Ordinal: 6626
        void isSep(unsigned int);

    // RVA: 0x19F4 | Ordinal: 6645
        void isSpace(unsigned int);

    // RVA: 0x19FA | Ordinal: 6651
        void isSymbol(unsigned int);

    // RVA: 0x19FD | Ordinal: 6654
        void isSymmetric(unsigned int);

    // RVA: 0x1A01 | Ordinal: 6658
        void isTitle(unsigned int);

    // RVA: 0x1A06 | Ordinal: 6663
        void isUpper(unsigned int);

    // RVA: 0x1A0F | Ordinal: 6672
        void joiningGroup(unsigned int);

    // RVA: 0x1A10 | Ordinal: 6673
        void joiningType(unsigned int);

    // RVA: 0x1A98 | Ordinal: 6809
        void lineBreakType(unsigned int);

    // RVA: 0x1E98 | Ordinal: 7833
        void mirrorImage(unsigned int);

    // RVA: 0x28C7 | Ordinal: 10440
        void scriptType(unsigned int);

    // RVA: 0x2EA9 | Ordinal: 11946
        void toLower(unsigned int);

    // RVA: 0x2EAD | Ordinal: 11950
        void toTitle(unsigned int);

    // RVA: 0x2EB3 | Ordinal: 11956
        void toUpper(unsigned int);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_UNICODE_HPP
