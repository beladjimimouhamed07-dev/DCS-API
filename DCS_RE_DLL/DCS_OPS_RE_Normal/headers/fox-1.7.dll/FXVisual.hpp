#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXVisual
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXVisual
{
public:

    // RVA: 0x377 | Ordinal: 888
        void FXVisual(void);

    // RVA: 0x378 | Ordinal: 889
        void FXVisual(class FX::FXApp *, unsigned int, unsigned int);

    // RVA: 0xBEA | Ordinal: 3051
        void create(void);

    // RVA: 0xC82 | Ordinal: 3203
        void destroy(void);

    // RVA: 0xCC7 | Ordinal: 3272
        void detach(void);

    // RVA: 0x1098 | Ordinal: 4249
        void getColor(unsigned long);

    // RVA: 0x11BB | Ordinal: 4540
        void getDepth(void) const;

    // RVA: 0x1203 | Ordinal: 4612
        void getFlags(void) const;

    // RVA: 0x129B | Ordinal: 4764
        void getHint(void) const;

    // RVA: 0x1362 | Ordinal: 4963
        void getMaxColors(void) const;

    // RVA: 0x1471 | Ordinal: 5234
        void getMetaClass(void) const;

    // RVA: 0x1499 | Ordinal: 5274
        void getNumBlue(void) const;

    // RVA: 0x149C | Ordinal: 5277
        void getNumColors(void) const;

    // RVA: 0x14A5 | Ordinal: 5286
        void getNumGreen(void) const;

    // RVA: 0x14B4 | Ordinal: 5301
        void getNumRed(void) const;

    // RVA: 0x1500 | Ordinal: 5377
        void getPixel(unsigned int);

    // RVA: 0x166C | Ordinal: 5741
        void getType(void) const;

    // RVA: 0x16B0 | Ordinal: 5809
        void getVisual(void) const;

    // RVA: 0x17F1 | Ordinal: 6130
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B48 | Ordinal: 6985
        void load(class FX::FXStream &);

    // RVA: 0x1CAC | Ordinal: 7341
        void manufacture(void);

    // RVA: 0x2879 | Ordinal: 10362
        void save(class FX::FXStream &) const;

    // RVA: 0x2A93 | Ordinal: 10900
        void setFlags(unsigned int);

    // RVA: 0x2B3E | Ordinal: 11071
        void setHint(unsigned int);

    // RVA: 0x2BF0 | Ordinal: 11249
        void setMaxColors(unsigned int);

    // RVA: 0x4F0 | Ordinal: 1265
        void _FXVisual(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXVISUAL_HPP
