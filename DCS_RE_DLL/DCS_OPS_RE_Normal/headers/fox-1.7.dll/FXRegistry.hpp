#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRegistry
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRegistry
{
public:

    // RVA: 0x29C | Ordinal: 669
        void FXRegistry(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x1016 | Ordinal: 4119
        void getAppKey(void) const;

    // RVA: 0x1022 | Ordinal: 4131
        void getAsciiMode(void) const;

    // RVA: 0x15E4 | Ordinal: 5605
        void getSystemDirectories(void) const;

    // RVA: 0x1672 | Ordinal: 5747
        void getUserDirectory(void) const;

    // RVA: 0x168F | Ordinal: 5776
        void getVendorKey(void) const;

    // RVA: 0x26E1 | Ordinal: 9954
        void read(void);

    // RVA: 0x26F4 | Ordinal: 9973
        void readFromRegistry(void *, bool);

    // RVA: 0x26F5 | Ordinal: 9974
        void readFromRegistryGroup(class FX::FXString const &, void *, bool);

    // RVA: 0x297D | Ordinal: 10622
        void setAppKey(class FX::FXString const &);

    // RVA: 0x2988 | Ordinal: 10633
        void setAsciiMode(bool);

    // RVA: 0x2D2C | Ordinal: 11565
        void setSystemDirectories(class FX::FXString const &);

    // RVA: 0x2DAC | Ordinal: 11693
        void setUserDirectory(class FX::FXString const &);

    // RVA: 0x2DC7 | Ordinal: 11720
        void setVendorKey(class FX::FXString const &);

    // RVA: 0x2FD7 | Ordinal: 12248
        void write(void);

    // RVA: 0x2FF7 | Ordinal: 12280
        void writeToRegistry(void *);

    // RVA: 0x2FF8 | Ordinal: 12281
        void writeToRegistryGroup(class FX::FXString const &, void *);

    // RVA: 0x497 | Ordinal: 1176
        void _FXRegistry(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXREGISTRY_HPP
