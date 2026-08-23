#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFileItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFileItem
{
public:

    // RVA: 0x116 | Ordinal: 279
        void FXFileItem(void);

    // RVA: 0x117 | Ordinal: 280
        void FXFileItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *);

    // RVA: 0x1024 | Ordinal: 4133
        void getAssoc(void) const;

    // RVA: 0x1102 | Ordinal: 4355
        void getDate(void) const;

    // RVA: 0x13D3 | Ordinal: 5076
        void getMetaClass(void) const;

    // RVA: 0x1486 | Ordinal: 5255
        void getMode(void) const;

    // RVA: 0x15B4 | Ordinal: 5557
        void getSize(void) const;

    // RVA: 0x1752 | Ordinal: 5971
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x18FF | Ordinal: 6400
        void isBlockdev(void) const;

    // RVA: 0x1906 | Ordinal: 6407
        void isChardev(void) const;

    // RVA: 0x191A | Ordinal: 6427
        void isDirectory(void) const;

    // RVA: 0x1938 | Ordinal: 6457
        void isExecutable(void) const;

    // RVA: 0x193E | Ordinal: 6463
        void isFifo(void) const;

    // RVA: 0x1941 | Ordinal: 6466
        void isFile(void) const;

    // RVA: 0x19A7 | Ordinal: 6568
        void isNavigational(void) const;

    // RVA: 0x19F0 | Ordinal: 6641
        void isSocket(void) const;

    // RVA: 0x19FC | Ordinal: 6653
        void isSymlink(void) const;

    // RVA: 0x1C12 | Ordinal: 7187
        void manufacture(void);

    // RVA: 0x298A | Ordinal: 10635
        void setAssoc(struct FX::FXFileAssoc *);

    // RVA: 0x2A3E | Ordinal: 10815
        void setDate(__int64);

    // RVA: 0x2C06 | Ordinal: 11271
        void setMode(unsigned int);

    // RVA: 0x2CF9 | Ordinal: 11514
        void setSize(__int64);

    // RVA: 0x40A | Ordinal: 1035
        void _FXFileItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFILEITEM_HPP
