#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: visual_helpers
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class visual_helpers
{
public:

    // RVA: 0x61B | Ordinal: 1564
        void add_gate(class wPosition3<float> const &);

    // RVA: 0x61C | Ordinal: 1565
        void add_gate(double, double, double, double, double);

    // RVA: 0x61D | Ordinal: 1566
        void add_route_gates_for_unit(class ed::basic_string<char> const &, char const *);

    // RVA: 0xB84 | Ordinal: 2949
        void route_gates_set_current_point(class ed::basic_string<char> const &, unsigned int);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_VISUAL_HELPERS_HPP
