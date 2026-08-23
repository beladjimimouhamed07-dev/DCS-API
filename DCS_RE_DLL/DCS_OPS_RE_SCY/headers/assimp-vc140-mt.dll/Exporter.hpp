#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: Exporter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class Exporter
{
public:

    // RVA: 0x16F | Ordinal: 368
        void Export(struct aiScene const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned int, class Assimp::ExportProperties const *);

    // RVA: 0x170 | Ordinal: 369
        void Export(struct aiScene const *, char const *, char const *, unsigned int, class Assimp::ExportProperties const *);

    // RVA: 0x171 | Ordinal: 370
        void ExportToBlob(struct aiScene const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned int, class Assimp::ExportProperties const *);

    // RVA: 0x172 | Ordinal: 371
        void ExportToBlob(struct aiScene const *, char const *, unsigned int, class Assimp::ExportProperties const *);

    // RVA: 0x18 | Ordinal: 25
        void Exporter(void);

    // RVA: 0x180 | Ordinal: 385
        void FreeBlob(void);

    // RVA: 0x18E | Ordinal: 399
        void GetBlob(void) const;

    // RVA: 0x190 | Ordinal: 401
        void GetErrorString(void) const;

    // RVA: 0x193 | Ordinal: 404
        void GetExportFormatCount(void) const;

    // RVA: 0x194 | Ordinal: 405
        void GetExportFormatDescription(unsigned __int64) const;

    // RVA: 0x19A | Ordinal: 411
        void GetIOHandler(void) const;

    // RVA: 0x1AB | Ordinal: 428
        void GetOrphanedBlob(void) const;

    // RVA: 0x1D7 | Ordinal: 472
        void IsDefaultIOHandler(void) const;

    // RVA: 0x221 | Ordinal: 546
        void RegisterExporter(struct Assimp::Exporter::ExportFormatEntry const &);

    // RVA: 0x22E | Ordinal: 559
        void SetIOHandler(class Assimp::IOSystem *);

    // RVA: 0x25A | Ordinal: 603
        void UnregisterExporter(char const *);

    // RVA: 0x7E | Ordinal: 127
        void _Exporter(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_EXPORTER_HPP
