#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wActivityGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wActivityGroup
{
public:

    // RVA: 0xC5 | Ordinal: 198
        void NextEvent(void);

    // RVA: 0xCC | Ordinal: 205
        void add_(class wActivityGroupMember *);

    // RVA: 0x247 | Ordinal: 584
        void setAutoDelete(void);

    // RVA: 0x299 | Ordinal: 666
        void simulate_(class wActivityGroupMember *);

    // RVA: 0xA | Ordinal: 11
        void wActivityGroup(double);

    // RVA: 0x4B | Ordinal: 76
        void _wActivityGroup(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WACTIVITYGROUP_HPP
