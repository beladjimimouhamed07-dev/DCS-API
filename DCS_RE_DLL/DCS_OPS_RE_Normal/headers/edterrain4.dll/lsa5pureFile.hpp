#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lsa5pureFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class lsa5pureFile
{
public:

    // RVA: 0x22A | Ordinal: 555
        void dump(struct offshore::Scene &, int, int);

    // RVA: 0x232 | Ordinal: 563
        void dumpLod(int, struct offshore::Scene &, int, int);

    // RVA: 0x23A | Ordinal: 571
        void dumpSquare(int, int, struct offshore::Scene &, int, int);

    // RVA: 0x49E | Ordinal: 1183
        void load(class ed::basic_string<char> const &);

    // RVA: 0x558 | Ordinal: 1369
        void save(class ed::basic_string<char> const &);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_LSA5PUREFILE_HPP
