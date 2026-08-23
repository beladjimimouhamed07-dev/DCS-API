#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXIconCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXIconCache
{
public:

    // RVA: 0x185 | Ordinal: 390
        void FXIconCache(void);

    // RVA: 0x186 | Ordinal: 391
        void FXIconCache(class FX::FXApp *, class FX::FXString const &);

    // RVA: 0xAD2 | Ordinal: 2771
        void clear(void);

    // RVA: 0xF07 | Ordinal: 3848
        void find(class FX::FXString const &) const;

    // RVA: 0xF08 | Ordinal: 3849
        void find(char const *) const;

    // RVA: 0x1013 | Ordinal: 4116
        void getApp(void) const;

    // RVA: 0x12AF | Ordinal: 4784
        void getIconPath(void) const;

    // RVA: 0x12B7 | Ordinal: 4792
        void getIconSource(void) const;

    // RVA: 0x13F9 | Ordinal: 5114
        void getMetaClass(void) const;

    // RVA: 0x1779 | Ordinal: 6010
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x18A5 | Ordinal: 6310
        void insert(class FX::FXString const &);

    // RVA: 0x18A6 | Ordinal: 6311
        void insert(char const *);

    // RVA: 0x1AF1 | Ordinal: 6898
        void load(class FX::FXStream &);

    // RVA: 0x1C37 | Ordinal: 7224
        void manufacture(void);

    // RVA: 0x273E | Ordinal: 10047
        void remove(class FX::FXString const &);

    // RVA: 0x273F | Ordinal: 10048
        void remove(char const *);

    // RVA: 0x2822 | Ordinal: 10275
        void save(class FX::FXStream &) const;

    // RVA: 0x2B51 | Ordinal: 11090
        void setIconPath(class FX::FXString const &);

    // RVA: 0x2B59 | Ordinal: 11098
        void setIconSource(class FX::FXIconSource *);

    // RVA: 0x437 | Ordinal: 1080
        void _FXIconCache(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXICONCACHE_HPP
