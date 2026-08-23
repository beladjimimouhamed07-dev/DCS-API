#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXProcess
{
public:

    // RVA: 0x253 | Ordinal: 596
        void FXProcess(void);

    // RVA: 0xC0B | Ordinal: 3084
        void current(void);

    // RVA: 0xE63 | Ordinal: 3684
        void exit(int);

    // RVA: 0x11E6 | Ordinal: 4583
        void getErrorStream(void) const;

    // RVA: 0x12CD | Ordinal: 4814
        void getInputStream(void) const;

    // RVA: 0x14DC | Ordinal: 5341
        void getOutputStream(void) const;

    // RVA: 0x1849 | Ordinal: 6218
        void id(void) const;

    // RVA: 0x1A19 | Ordinal: 6682
        void kill(void);

    // RVA: 0x27A3 | Ordinal: 10148
        void resume(void);

    // RVA: 0x2A7F | Ordinal: 10880
        void setErrorStream(class FX::FXIODevice *);

    // RVA: 0x2B70 | Ordinal: 11121
        void setInputStream(class FX::FXIODevice *);

    // RVA: 0x2C40 | Ordinal: 11329
        void setOutputStream(class FX::FXIODevice *);

    // RVA: 0x2E52 | Ordinal: 11859
        void start(char const *, char const *const *, char const *const *);

    // RVA: 0x2E7F | Ordinal: 11904
        void suspend(void);

    // RVA: 0x2F6D | Ordinal: 12142
        void wait(int &);

    // RVA: 0x2F6E | Ordinal: 12143
        void wait(void);

    // RVA: 0x482 | Ordinal: 1155
        void _FXProcess(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPROCESS_HPP
