#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: FileManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {

class FileManager
{
public:

    // RVA: 0x24D | Ordinal: 590
        void exists(struct pj_ctx *, char const *);

    // RVA: 0x2C8 | Ordinal: 713
        void open(struct pj_ctx *, char const *, enum osgeo::proj::FileAccess);
};

} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_FILEMANAGER_HPP
