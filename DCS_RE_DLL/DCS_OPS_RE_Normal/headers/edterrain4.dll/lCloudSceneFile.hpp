#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lCloudSceneFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lCloudSceneFile
{
public:

    // RVA: 0x326 | Ordinal: 807
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x34 | Ordinal: 53
        void lCloudSceneFile(void);

    // RVA: 0x488 | Ordinal: 1161
        void load(class io::MmfStream &);

    // RVA: 0x544 | Ordinal: 1349
        void save(class ed::basic_string<char> const &);

    // RVA: 0x545 | Ordinal: 1350
        void save(char const *);

    // RVA: 0x61 | Ordinal: 98
        void _lCloudSceneFile(void);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LCLOUDSCENEFILE_HPP
