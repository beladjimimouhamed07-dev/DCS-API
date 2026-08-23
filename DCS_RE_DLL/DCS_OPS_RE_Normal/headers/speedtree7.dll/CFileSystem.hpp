#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CFileSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CFileSystem
{
public:

    // RVA: 0x2C | Ordinal: 45
        void CFileSystem(class SpeedTree::CFileSystem const &);

    // RVA: 0x2D | Ordinal: 46
        void CFileSystem(void);

    // RVA: 0x183 | Ordinal: 388
        void CleanPlatformFilename(class SpeedTree::CBasicFixedString<256> const &);

    // RVA: 0x184 | Ordinal: 389
        void CleanPlatformFilename(char const *);

    // RVA: 0x186 | Ordinal: 391
        void CompareFileTimes(char const *, char const *);

    // RVA: 0x1AE | Ordinal: 431
        void FileExists(char const *);

    // RVA: 0x1AF | Ordinal: 432
        void FileSize(char const *);

    // RVA: 0x204 | Ordinal: 517
        void LoadFile(char const *, enum SpeedTree::CFileSystem::ETermHint);

    // RVA: 0x241 | Ordinal: 578
        void Release(unsigned char *);

    // RVA: 0x8A | Ordinal: 139
        void _CFileSystem(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CFILESYSTEM_HPP
