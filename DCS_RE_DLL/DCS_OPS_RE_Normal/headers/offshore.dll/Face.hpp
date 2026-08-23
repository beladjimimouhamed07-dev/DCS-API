#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Face
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Face
{
public:

    // RVA: 0xDD | Ordinal: 222
        void containsEdge(int, int, bool *) const;

    // RVA: 0x10A | Ordinal: 267
        void edge(int) const;

    // RVA: 0x3B | Ordinal: 60
        void operator_(struct offshore::Face const &) const;

    // RVA: 0x24A | Ordinal: 587
        void sort(void);

    // RVA: 0x24C | Ordinal: 589
        void sorted(unsigned int, unsigned int, unsigned int);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_FACE_HPP
