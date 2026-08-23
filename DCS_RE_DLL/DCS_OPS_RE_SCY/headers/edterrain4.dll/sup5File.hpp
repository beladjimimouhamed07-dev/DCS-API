#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: sup5File
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class sup5File
{
public:

    // RVA: 0x22C | Ordinal: 557
        void dump(void) const;

    // RVA: 0x22D | Ordinal: 558
        void dump(struct offshore::Scene &) const;

    // RVA: 0x332 | Ordinal: 819
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x4A4 | Ordinal: 1189
        void load(class io::MmfStream &);

    // RVA: 0x4F6 | Ordinal: 1271
        void preload(void);

    // RVA: 0x55D | Ordinal: 1374
        void save(char const *);

    // RVA: 0x4E | Ordinal: 79
        void sup5File(void);

    // RVA: 0x71 | Ordinal: 114
        void _sup5File(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_SUP5FILE_HPP
