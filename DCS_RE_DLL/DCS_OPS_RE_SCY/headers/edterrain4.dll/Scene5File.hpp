#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: Scene5File
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class Scene5File
{
public:

    // RVA: 0x20 | Ordinal: 33
        void Scene5File(void);

    // RVA: 0x31E | Ordinal: 799
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x345 | Ordinal: 838
        void getObjectModel(int);

    // RVA: 0x346 | Ordinal: 839
        void getObjectModel(int, int);

    // RVA: 0x347 | Ordinal: 840
        void getObjectModel(int, int) const;

    // RVA: 0x348 | Ordinal: 841
        void getObjectModelBox(int) const;

    // RVA: 0x349 | Ordinal: 842
        void getObjectModelBox(int, int) const;

    // RVA: 0x34A | Ordinal: 843
        void getObjectModelName(int);

    // RVA: 0x34B | Ordinal: 844
        void getObjectModelName(int, int);

    // RVA: 0x34C | Ordinal: 845
        void getObjectOptions(int, int) const;

    // RVA: 0x34D | Ordinal: 846
        void getObjectPosition(int, int) const;

    // RVA: 0x34E | Ordinal: 847
        void getObjectSeed(int, int) const;

    // RVA: 0x3DD | Ordinal: 990
        void getSubobjects(unsigned __int64, int &) const;

    // RVA: 0x456 | Ordinal: 1111
        void isObjectValid(int, int) const;

    // RVA: 0x478 | Ordinal: 1145
        void load(class io::MmfStream &);

    // RVA: 0x4C8 | Ordinal: 1225
        void objectsCount(void) const;

    // RVA: 0x4F2 | Ordinal: 1267
        void preload(void);

    // RVA: 0x535 | Ordinal: 1334
        void save(class ed::basic_string<char> const &);

    // RVA: 0x57 | Ordinal: 88
        void _Scene5File(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_SCENE5FILE_HPP
