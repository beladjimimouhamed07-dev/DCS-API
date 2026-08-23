#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSystem
{
public:

    // RVA: 0xC0E | Ordinal: 3087
        void currentGroupName(void);

    // RVA: 0xC0F | Ordinal: 3088
        void currentUserName(void);

    // RVA: 0xCFC | Ordinal: 3325
        void dllName(class FX::FXString const &);

    // RVA: 0x10D4 | Ordinal: 4309
        void getCurrentDirectory(void);

    // RVA: 0x10D5 | Ordinal: 4310
        void getCurrentDrive(void);

    // RVA: 0x11E2 | Ordinal: 4579
        void getEnvironment(class FX::FXString const &);

    // RVA: 0x11E7 | Ordinal: 4584
        void getExecExtensions(void);

    // RVA: 0x11E8 | Ordinal: 4585
        void getExecFilename(void);

    // RVA: 0x11E9 | Ordinal: 4586
        void getExecPath(void);

    // RVA: 0x129E | Ordinal: 4767
        void getHomeDirectory(void);

    // RVA: 0x129F | Ordinal: 4768
        void getHostName(void);

    // RVA: 0x15ED | Ordinal: 5614
        void getTempDirectory(void);

    // RVA: 0x1673 | Ordinal: 5748
        void getUserDirectory(class FX::FXString const &);

    // RVA: 0x16E7 | Ordinal: 5864
        void group(void);

    // RVA: 0x16E8 | Ordinal: 5865
        void groupName(unsigned int);

    // RVA: 0x1B89 | Ordinal: 7050
        void localTime(char const *, __int64);

    // RVA: 0x1B8A | Ordinal: 7051
        void localTime(__int64);

    // RVA: 0x1B8B | Ordinal: 7052
        void localeIsUTF8(void);

    // RVA: 0x1E9D | Ordinal: 7838
        void modeString(unsigned int);

    // RVA: 0x2A0E | Ordinal: 10767
        void setCurrentDirectory(class FX::FXString const &);

    // RVA: 0x2A0F | Ordinal: 10768
        void setCurrentDrive(class FX::FXString const &);

    // RVA: 0x2A7D | Ordinal: 10878
        void setEnvironment(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x2EFC | Ordinal: 12029
        void universalTime(char const *, __int64);

    // RVA: 0x2EFD | Ordinal: 12030
        void universalTime(__int64);

    // RVA: 0x2F30 | Ordinal: 12081
        void user(void);

    // RVA: 0x2F31 | Ordinal: 12082
        void userName(unsigned int);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSYSTEM_HPP
