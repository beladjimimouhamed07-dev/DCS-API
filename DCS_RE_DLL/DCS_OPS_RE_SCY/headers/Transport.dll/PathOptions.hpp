#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: PathOptions
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class PathOptions
{
public:

    // RVA: 0xA | Ordinal: 11
        void PathOptions(struct PathOptions &&);

    // RVA: 0xB | Ordinal: 12
        void PathOptions(struct PathOptions const &);

    // RVA: 0xC | Ordinal: 13
        void PathOptions(class ed::vector<struct PathOptions::ControlPoint, class ed::allocator<struct PathOptions::ControlPoint>> const &, enum CarFormationType, double, int);

    // RVA: 0xD | Ordinal: 14
        void PathOptions(void);

    // RVA: 0x2D | Ordinal: 46
        void _PathOptions(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_PATHOPTIONS_HPP
