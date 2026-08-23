#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: RandomManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class RandomManager
{
public:

    // RVA: 0x7A | Ordinal: 123
        void RandomManager(void);

    // RVA: 0x141 | Ordinal: 322
        void add(class ed::vector<float, class ed::allocator<float>> const *);

    // RVA: 0x18C | Ordinal: 397
        void createCustom(class ed::vector<float, class ed::allocator<float>> const *, float (__cdecl *)(float));

    // RVA: 0x190 | Ordinal: 401
        void createNormal(class ed::vector<float, class ed::allocator<float>> const *);

    // RVA: 0x191 | Ordinal: 402
        void createUniform(unsigned int, unsigned int, unsigned int, float);

    // RVA: 0x33C | Ordinal: 829
        void remove(class ed::vector<float, class ed::allocator<float>> const *);

    // RVA: 0xCA | Ordinal: 203
        void _RandomManager(void);
};

// DCS_OPS_RE_EDCORE.DLL_RANDOMMANAGER_HPP
