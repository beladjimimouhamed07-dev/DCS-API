#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDir
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDir
{
public:

    // RVA: 0xD0 | Ordinal: 209
        void FXDir(class FX::FXString const &);

    // RVA: 0xD1 | Ordinal: 210
        void FXDir(void);

    // RVA: 0xAF4 | Ordinal: 2805
        void close(void);

    // RVA: 0xBAF | Ordinal: 2992
        void create(class FX::FXString const &, unsigned int);

    // RVA: 0xBED | Ordinal: 3054
        void createDirectories(class FX::FXString const &, unsigned int);

    // RVA: 0x19AD | Ordinal: 6574
        void isOpen(void) const;

    // RVA: 0x1AA0 | Ordinal: 6817
        void listDrives(class FX::FXString *&);

    // RVA: 0x1AA2 | Ordinal: 6819
        void listFiles(class FX::FXString *&, class FX::FXString const &, class FX::FXString const &, unsigned int);

    // RVA: 0x1F0D | Ordinal: 7950
        void next(class FX::FXString &);

    // RVA: 0x2638 | Ordinal: 9785
        void open(class FX::FXString const &);

    // RVA: 0x273A | Ordinal: 10043
        void remove(class FX::FXString const &);

    // RVA: 0x2760 | Ordinal: 10081
        void rename(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x3EF | Ordinal: 1008
        void _FXDir(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDIR_HPP
