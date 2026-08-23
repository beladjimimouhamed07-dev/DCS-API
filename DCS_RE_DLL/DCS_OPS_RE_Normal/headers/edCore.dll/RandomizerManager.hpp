#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: RandomizerManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class RandomizerManager
{
public:

    // RVA: 0x7F | Ordinal: 128
        void RandomizerManager(void);

    // RVA: 0x142 | Ordinal: 323
        void add(class GenerativeRandomizer *);

    // RVA: 0x2BA | Ordinal: 699
        void nextGenerativeSeed(void);

    // RVA: 0x33D | Ordinal: 830
        void remove(class GenerativeRandomizer *);

    // RVA: 0x387 | Ordinal: 904
        void setGenerativeSeed(unsigned int);

    // RVA: 0xCC | Ordinal: 205
        void _RandomizerManager(void);
};

// DCS_OPS_RE_EDCORE.DLL_RANDOMIZERMANAGER_HPP
