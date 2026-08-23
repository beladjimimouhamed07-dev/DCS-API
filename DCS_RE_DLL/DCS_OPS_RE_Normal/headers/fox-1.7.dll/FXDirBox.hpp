#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDirBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDirBox
{
public:

    // RVA: 0xD2 | Ordinal: 211
        void FXDirBox(void);

    // RVA: 0xD3 | Ordinal: 212
        void FXDirBox(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBB0 | Ordinal: 2993
        void create(void);

    // RVA: 0xC6B | Ordinal: 3180
        void destroy(void);

    // RVA: 0xC97 | Ordinal: 3224
        void detach(void);

    // RVA: 0x1025 | Ordinal: 4134
        void getAssociations(void) const;

    // RVA: 0x11C0 | Ordinal: 4545
        void getDirectory(void) const;

    // RVA: 0x1304 | Ordinal: 4869
        void getItemPathname(class FX::FXTreeItem *) const;

    // RVA: 0x13C2 | Ordinal: 5059
        void getMetaClass(void) const;

    // RVA: 0x14F0 | Ordinal: 5361
        void getPathnameItem(class FX::FXString const &);

    // RVA: 0x1741 | Ordinal: 5954
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1ABF | Ordinal: 6848
        void load(class FX::FXStream &);

    // RVA: 0x1C03 | Ordinal: 7172
        void manufacture(void);

    // RVA: 0x2094 | Ordinal: 8341
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21B0 | Ordinal: 8625
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21DB | Ordinal: 8668
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2526 | Ordinal: 9511
        void onTreeChanged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2528 | Ordinal: 9513
        void onTreeCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27F0 | Ordinal: 10225
        void save(class FX::FXStream &) const;

    // RVA: 0x298B | Ordinal: 10636
        void setAssociations(class FX::FXFileAssociations *, bool);

    // RVA: 0x2A52 | Ordinal: 10835
        void setDirectory(class FX::FXString const &);

    // RVA: 0x3F0 | Ordinal: 1009
        void _FXDirBox(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDIRBOX_HPP
