#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFile
{
public:

    // RVA: 0x10D | Ordinal: 270
        void FXFile(class FX::FXString const &, unsigned int, unsigned int);

    // RVA: 0x10E | Ordinal: 271
        void FXFile(void *, unsigned int);

    // RVA: 0x10F | Ordinal: 272
        void FXFile(void);

    // RVA: 0xB37 | Ordinal: 2872
        void concat(class FX::FXString const &, class FX::FXString const &, class FX::FXString const &, bool);

    // RVA: 0xB83 | Ordinal: 2948
        void copy(class FX::FXString const &, class FX::FXString const &, bool);

    // RVA: 0xB8F | Ordinal: 2960
        void copyFiles(class FX::FXString const &, class FX::FXString const &, bool);

    // RVA: 0xBB5 | Ordinal: 2998
        void create(class FX::FXString const &, unsigned int);

    // RVA: 0xE2B | Ordinal: 3628
        void eof(void);

    // RVA: 0xF49 | Ordinal: 3914
        void flush(void);

    // RVA: 0x184B | Ordinal: 6220
        void identical(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x19E2 | Ordinal: 6627
        void isSerial(void) const;

    // RVA: 0x1A9C | Ordinal: 6813
        void link(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x1EBC | Ordinal: 7869
        void moveFiles(class FX::FXString const &, class FX::FXString const &, bool);

    // RVA: 0x2639 | Ordinal: 9786
        void open(class FX::FXString const &, unsigned int, unsigned int);

    // RVA: 0x263A | Ordinal: 9787
        void open(void *, unsigned int);

    // RVA: 0x268A | Ordinal: 9867
        void position(__int64, unsigned int);

    // RVA: 0x268B | Ordinal: 9868
        void position(void) const;

    // RVA: 0x273B | Ordinal: 10044
        void remove(class FX::FXString const &);

    // RVA: 0x274A | Ordinal: 10059
        void removeFiles(class FX::FXString const &, bool);

    // RVA: 0x2761 | Ordinal: 10082
        void rename(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x2E34 | Ordinal: 11829
        void size(void);

    // RVA: 0x2E86 | Ordinal: 11911
        void symlink(class FX::FXString const &);

    // RVA: 0x2E87 | Ordinal: 11912
        void symlink(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x2ED5 | Ordinal: 11990
        void truncate(__int64);

    // RVA: 0x407 | Ordinal: 1032
        void _FXFile(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFILE_HPP
