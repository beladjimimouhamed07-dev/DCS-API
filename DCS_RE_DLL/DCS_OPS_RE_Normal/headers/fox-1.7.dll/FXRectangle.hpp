#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRectangle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRectangle
{
public:

    // RVA: 0x293 | Ordinal: 660
        void FXRectangle(class FX::FXPoint const &, class FX::FXPoint const &);

    // RVA: 0x294 | Ordinal: 661
        void FXRectangle(class FX::FXPoint const &, class FX::FXSize const &);

    // RVA: 0x295 | Ordinal: 662
        void FXRectangle(short, short, short, short);

    // RVA: 0x296 | Ordinal: 663
        void FXRectangle(void);

    // RVA: 0xA5F | Ordinal: 2656
        void bite(class FX::FXRectangle *const, class FX::FXRectangle const &) const;

    // RVA: 0xA60 | Ordinal: 2657
        void bl(void) const;

    // RVA: 0xA71 | Ordinal: 2674
        void br(void) const;

    // RVA: 0xB6A | Ordinal: 2923
        void contains(class FX::FXRectangle const &) const;

    // RVA: 0xB6B | Ordinal: 2924
        void contains(class FX::FXPoint const &) const;

    // RVA: 0xB6C | Ordinal: 2925
        void contains(short, short) const;

    // RVA: 0xDF1 | Ordinal: 3570
        void empty(void) const;

    // RVA: 0x16E9 | Ordinal: 5866
        void grow(short);

    // RVA: 0x16EA | Ordinal: 5867
        void grow(short, short);

    // RVA: 0x16EB | Ordinal: 5868
        void grow(short, short, short, short);

    // RVA: 0x1EAA | Ordinal: 7851
        void move(class FX::FXPoint const &);

    // RVA: 0x1EAB | Ordinal: 7852
        void move(short, short);

    // RVA: 0x2941 | Ordinal: 10562
        void set(class FX::FXRectangle const &);

    // RVA: 0x2942 | Ordinal: 10563
        void set(class FX::FXPoint const &, class FX::FXPoint const &);

    // RVA: 0x2943 | Ordinal: 10564
        void set(class FX::FXPoint const &, class FX::FXSize const &);

    // RVA: 0x2944 | Ordinal: 10565
        void set(short, short, short, short);

    // RVA: 0x2E28 | Ordinal: 11817
        void shrink(short);

    // RVA: 0x2E29 | Ordinal: 11818
        void shrink(short, short);

    // RVA: 0x2E2A | Ordinal: 11819
        void shrink(short, short, short, short);

    // RVA: 0x2E9D | Ordinal: 11934
        void tl(void) const;

    // RVA: 0x2EB8 | Ordinal: 11961
        void tr(void) const;
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRECTANGLE_HPP
