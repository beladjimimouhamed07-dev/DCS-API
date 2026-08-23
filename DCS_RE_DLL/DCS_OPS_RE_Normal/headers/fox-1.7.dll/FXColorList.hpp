#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXColorList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXColorList
{
public:

    // RVA: 0x83 | Ordinal: 132
        void FXColorList(void);

    // RVA: 0x84 | Ordinal: 133
        void FXColorList(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x9D7 | Ordinal: 2520
        void appendItem(class FX::FXString const &, unsigned int, void *, bool);

    // RVA: 0xBEE | Ordinal: 3055
        void createItem(class FX::FXString const &, class FX::FXIcon *, void *);

    // RVA: 0xEDA | Ordinal: 3803
        void fillItems(char const *const *, unsigned int *, void *, bool);

    // RVA: 0x12E4 | Ordinal: 4837
        void getItemColor(int) const;

    // RVA: 0x13AE | Ordinal: 5039
        void getMetaClass(void) const;

    // RVA: 0x172C | Ordinal: 5933
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x18BC | Ordinal: 6333
        void insertItem(int, class FX::FXString const &, unsigned int, void *, bool);

    // RVA: 0x1BF0 | Ordinal: 7153
        void manufacture(void);

    // RVA: 0x26B9 | Ordinal: 9914
        void prependItem(class FX::FXString const &, unsigned int, void *, bool);

    // RVA: 0x2B86 | Ordinal: 11143
        void setItemColor(int, unsigned int);

    // RVA: 0x3D2 | Ordinal: 979
        void _FXColorList(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOLORLIST_HPP
