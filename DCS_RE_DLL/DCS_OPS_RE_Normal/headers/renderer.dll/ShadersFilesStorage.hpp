#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: renderer.dll
// Class: ShadersFilesStorage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ShadersFilesStorage
{
public:

    // RVA: 0x2 | Ordinal: 3
        void add(char const *, bool);

    // RVA: 0x8 | Ordinal: 9
        void checkAndAdd(char const *, class ed::md5 const &, unsigned __int64 &);

    // RVA: 0xD | Ordinal: 14
        void dropUpdatedFlags(void);

    // RVA: 0x10 | Ordinal: 17
        void get(unsigned __int64, class ed::md5 &) const;

    // RVA: 0x16 | Ordinal: 23
        void instance(enum SHADERS_FILE_STORAGE_ENUM);

    // RVA: 0x17 | Ordinal: 24
        void isUpdated(unsigned __int64) const;

    // RVA: 0x2E | Ordinal: 47
        void update(void);

    // RVA: 0x2F | Ordinal: 48
        void updateSingleFile(unsigned __int64);
};

// DCS_OPS_RE_RENDERER.DLL_SHADERSFILESSTORAGE_HPP
