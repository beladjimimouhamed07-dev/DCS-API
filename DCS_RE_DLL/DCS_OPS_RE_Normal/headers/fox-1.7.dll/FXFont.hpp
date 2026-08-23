#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFont
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFont
{
public:

    // RVA: 0x122 | Ordinal: 291
        void FXFont(void);

    // RVA: 0x123 | Ordinal: 292
        void FXFont(class FX::FXApp *, struct FX::FXFontDesc const &);

    // RVA: 0x124 | Ordinal: 293
        void FXFont(class FX::FXApp *, class FX::FXString const &);

    // RVA: 0x125 | Ordinal: 294
        void FXFont(class FX::FXApp *, class FX::FXString const &, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0xBB9 | Ordinal: 3002
        void create(void);

    // RVA: 0xC70 | Ordinal: 3185
        void destroy(void);

    // RVA: 0xC9E | Ordinal: 3231
        void detach(void);

    // RVA: 0xE1B | Ordinal: 3612
        void encodingFromString(class FX::FXString const &);

    // RVA: 0xFF4 | Ordinal: 4085
        void getActualEncoding(void) const;

    // RVA: 0xFF5 | Ordinal: 4086
        void getActualFontDesc(void) const;

    // RVA: 0xFF8 | Ordinal: 4089
        void getActualName(void) const;

    // RVA: 0xFFA | Ordinal: 4091
        void getActualSetWidth(void) const;

    // RVA: 0xFFB | Ordinal: 4092
        void getActualSize(void) const;

    // RVA: 0xFFC | Ordinal: 4093
        void getActualSlant(void) const;

    // RVA: 0xFFE | Ordinal: 4095
        void getActualWeight(void) const;

    // RVA: 0x1010 | Ordinal: 4113
        void getAngle(void) const;

    // RVA: 0x1081 | Ordinal: 4226
        void getCharWidth(unsigned int) const;

    // RVA: 0x11E1 | Ordinal: 4578
        void getEncoding(void) const;

    // RVA: 0x11EE | Ordinal: 4591
        void getFamily(void) const;

    // RVA: 0x1202 | Ordinal: 4611
        void getFlags(void) const;

    // RVA: 0x120C | Ordinal: 4621
        void getFont(void) const;

    // RVA: 0x1222 | Ordinal: 4643
        void getFontAscent(void) const;

    // RVA: 0x1223 | Ordinal: 4644
        void getFontDesc(void) const;

    // RVA: 0x1226 | Ordinal: 4647
        void getFontDescent(void) const;

    // RVA: 0x1227 | Ordinal: 4648
        void getFontHeight(void) const;

    // RVA: 0x1228 | Ordinal: 4649
        void getFontLeading(void) const;

    // RVA: 0x1229 | Ordinal: 4650
        void getFontSpacing(void) const;

    // RVA: 0x122A | Ordinal: 4651
        void getFontWidth(void) const;

    // RVA: 0x122D | Ordinal: 4654
        void getFoundry(void) const;

    // RVA: 0x129C | Ordinal: 4765
        void getHints(void) const;

    // RVA: 0x1361 | Ordinal: 4962
        void getMaxChar(void) const;

    // RVA: 0x13D8 | Ordinal: 5081
        void getMetaClass(void) const;

    // RVA: 0x147B | Ordinal: 5244
        void getMinChar(void) const;

    // RVA: 0x1489 | Ordinal: 5258
        void getName(void) const;

    // RVA: 0x159F | Ordinal: 5536
        void getSetWidth(void) const;

    // RVA: 0x15B5 | Ordinal: 5558
        void getSize(void) const;

    // RVA: 0x15B9 | Ordinal: 5562
        void getSlant(void) const;

    // RVA: 0x1615 | Ordinal: 5654
        void getTextHeight(class FX::FXString const &) const;

    // RVA: 0x1616 | Ordinal: 5655
        void getTextHeight(char const *, unsigned int) const;

    // RVA: 0x161A | Ordinal: 5659
        void getTextWidth(class FX::FXString const &) const;

    // RVA: 0x161B | Ordinal: 5660
        void getTextWidth(char const *, unsigned int) const;

    // RVA: 0x16B5 | Ordinal: 5814
        void getWeight(void) const;

    // RVA: 0x1757 | Ordinal: 5976
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1807 | Ordinal: 6152
        void hasChar(unsigned int) const;

    // RVA: 0x1945 | Ordinal: 6470
        void isFontMono(void) const;

    // RVA: 0x1A79 | Ordinal: 6778
        void leftBearing(unsigned int) const;

    // RVA: 0x1AA5 | Ordinal: 6822
        void listFonts(struct FX::FXFontDesc *&, unsigned int &, class FX::FXString const &, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1ADB | Ordinal: 6876
        void load(class FX::FXStream &);

    // RVA: 0x1C17 | Ordinal: 7192
        void manufacture(void);

    // RVA: 0x1CBA | Ordinal: 7355
        void match(class FX::FXString const &, class FX::FXString const &, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x27AF | Ordinal: 10160
        void rightBearing(unsigned int) const;

    // RVA: 0x280C | Ordinal: 10253
        void save(class FX::FXStream &) const;

    // RVA: 0x297B | Ordinal: 10620
        void setAngle(int);

    // RVA: 0x2AB6 | Ordinal: 10935
        void setFont(class FX::FXString const &);

    // RVA: 0x2ACC | Ordinal: 10957
        void setFontDesc(struct FX::FXFontDesc const &);

    // RVA: 0x2DDD | Ordinal: 11742
        void setWidthFromString(class FX::FXString const &);

    // RVA: 0x2E3C | Ordinal: 11837
        void slantFromString(class FX::FXString const &);

    // RVA: 0x2E62 | Ordinal: 11875
        void stringFromEncoding(unsigned int);

    // RVA: 0x2E63 | Ordinal: 11876
        void stringFromSetWidth(unsigned int);

    // RVA: 0x2E64 | Ordinal: 11877
        void stringFromSlant(unsigned int);

    // RVA: 0x2E65 | Ordinal: 11878
        void stringFromStyle(unsigned int);

    // RVA: 0x2E66 | Ordinal: 11879
        void stringFromWeight(unsigned int);

    // RVA: 0x2E6A | Ordinal: 11883
        void styleFromString(class FX::FXString const &);

    // RVA: 0x2FC3 | Ordinal: 12228
        void weightFromString(class FX::FXString const &);

    // RVA: 0x410 | Ordinal: 1041
        void _FXFont(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFONT_HPP
