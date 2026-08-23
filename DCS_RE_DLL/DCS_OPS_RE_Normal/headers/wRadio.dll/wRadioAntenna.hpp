#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wRadioAntenna
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRadioAntenna
{
public:

    // RVA: 0x20D | Ordinal: 526
        void empty(void) const;

    // RVA: 0x2AE | Ordinal: 687
        void getPolarization(void) const;

    // RVA: 0x2C9 | Ordinal: 714
        void getSqrG(class osg::Vec3f const &) const;

    // RVA: 0x34B | Ordinal: 844
        void load(class Lua::Config &);

    // RVA: 0x7B | Ordinal: 124
        void wRadioAntenna(void);

    // RVA: 0xB1 | Ordinal: 178
        void _wRadioAntenna(void);
};

// DCS_OPS_RE_WRADIO.DLL_WRADIOANTENNA_HPP
