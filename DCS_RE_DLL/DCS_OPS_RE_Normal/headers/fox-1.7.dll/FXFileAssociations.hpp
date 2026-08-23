#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFileAssociations
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFileAssociations
{
public:

    // RVA: 0x110 | Ordinal: 273
        void FXFileAssociations(void);

    // RVA: 0x111 | Ordinal: 274
        void FXFileAssociations(class FX::FXApp *);

    // RVA: 0x112 | Ordinal: 275
        void FXFileAssociations(class FX::FXApp *, class FX::FXSettings *);

    // RVA: 0xACF | Ordinal: 2768
        void clear(void);

    // RVA: 0xE8B | Ordinal: 3724
        void fetch(class FX::FXString const &);

    // RVA: 0xF17 | Ordinal: 3864
        void findDirBinding(class FX::FXString const &);

    // RVA: 0xF1A | Ordinal: 3867
        void findExecBinding(class FX::FXString const &);

    // RVA: 0xF1B | Ordinal: 3868
        void findFileBinding(class FX::FXString const &);

    // RVA: 0x12AE | Ordinal: 4783
        void getIconPath(void) const;

    // RVA: 0x12B3 | Ordinal: 4788
        void getIconSource(void) const;

    // RVA: 0x13D1 | Ordinal: 5074
        void getMetaClass(void) const;

    // RVA: 0x15A0 | Ordinal: 5537
        void getSettings(void) const;

    // RVA: 0x1750 | Ordinal: 5969
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1ACA | Ordinal: 6859
        void load(class FX::FXStream &);

    // RVA: 0x1C10 | Ordinal: 7185
        void manufacture(void);

    // RVA: 0x265F | Ordinal: 9824
        void parse(class FX::FXString const &);

    // RVA: 0x27FB | Ordinal: 10236
        void save(class FX::FXStream &) const;

    // RVA: 0x2B50 | Ordinal: 11089
        void setIconPath(class FX::FXString const &);

    // RVA: 0x2B55 | Ordinal: 11094
        void setIconSource(class FX::FXIconSource *);

    // RVA: 0x2CE3 | Ordinal: 11492
        void setSettings(class FX::FXSettings *);

    // RVA: 0x408 | Ordinal: 1033
        void _FXFileAssociations(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFILEASSOCIATIONS_HPP
