#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDocument
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDocument
{
public:

    // RVA: 0xE8 | Ordinal: 233
        void FXDocument(class FX::FXDocument const &);

    // RVA: 0xE9 | Ordinal: 234
        void FXDocument(void);

    // RVA: 0x11F3 | Ordinal: 4596
        void getFilename(void) const;

    // RVA: 0x13CB | Ordinal: 5068
        void getMetaClass(void) const;

    // RVA: 0x164F | Ordinal: 5712
        void getTitle(void) const;

    // RVA: 0x174A | Ordinal: 5963
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x19A4 | Ordinal: 6565
        void isModified(void) const;

    // RVA: 0x1AC6 | Ordinal: 6855
        void load(class FX::FXStream &);

    // RVA: 0x1C0B | Ordinal: 7180
        void manufacture(void);

    // RVA: 0x2590 | Ordinal: 9617
        void onUpdFilename(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2604 | Ordinal: 9733
        void onUpdTitle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27F7 | Ordinal: 10232
        void save(class FX::FXStream &) const;

    // RVA: 0x2A88 | Ordinal: 10889
        void setFilename(class FX::FXString const &);

    // RVA: 0x2C07 | Ordinal: 11272
        void setModified(bool);

    // RVA: 0x2D91 | Ordinal: 11666
        void setTitle(class FX::FXString const &);

    // RVA: 0x3FA | Ordinal: 1019
        void _FXDocument(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDOCUMENT_HPP
