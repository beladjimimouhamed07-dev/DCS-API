#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXIcon
{
public:

    // RVA: 0x183 | Ordinal: 388
        void FXIcon(void);

    // RVA: 0x184 | Ordinal: 389
        void FXIcon(class FX::FXApp *, unsigned int const *, unsigned int, unsigned int, int, int);

    // RVA: 0xBC3 | Ordinal: 3012
        void create(void);

    // RVA: 0xC75 | Ordinal: 3190
        void destroy(void);

    // RVA: 0xCA7 | Ordinal: 3240
        void detach(void);

    // RVA: 0x13F8 | Ordinal: 5113
        void getMetaClass(void) const;

    // RVA: 0x161F | Ordinal: 5664
        void getThresholdValue(void) const;

    // RVA: 0x1668 | Ordinal: 5737
        void getTransparentColor(void) const;

    // RVA: 0x16EF | Ordinal: 5872
        void guessthresh(void) const;

    // RVA: 0x16F0 | Ordinal: 5873
        void guesstransp(void) const;

    // RVA: 0x1778 | Ordinal: 6009
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1C36 | Ordinal: 7223
        void manufacture(void);

    // RVA: 0x2763 | Ordinal: 10084
        void render(void);

    // RVA: 0x2793 | Ordinal: 10132
        void resize(int, int);

    // RVA: 0x2D63 | Ordinal: 11620
        void setThresholdValue(short);

    // RVA: 0x2DA5 | Ordinal: 11686
        void setTransparentColor(unsigned int);

    // RVA: 0x436 | Ordinal: 1079
        void _FXIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXICON_HPP
