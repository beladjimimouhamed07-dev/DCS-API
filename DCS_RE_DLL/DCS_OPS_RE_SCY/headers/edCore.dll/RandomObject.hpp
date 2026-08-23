#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: RandomObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class RandomObject
{
public:

    // RVA: 0x7B | Ordinal: 124
        void RandomObject(class RandomObject const &);

    // RVA: 0x7C | Ordinal: 125
        void RandomObject(class ed::vector<float, class ed::allocator<float>> const &, unsigned int, unsigned int);

    // RVA: 0x7D | Ordinal: 126
        void RandomObject(unsigned int, unsigned int);

    // RVA: 0x7E | Ordinal: 127
        void RandomObject(void);

    // RVA: 0x1DE | Ordinal: 479
        void get(void);

    // RVA: 0x1DF | Ordinal: 480
        void get(unsigned int) const;

    // RVA: 0x202 | Ordinal: 515
        void getOffset(void) const;

    // RVA: 0x214 | Ordinal: 533
        void getType(void) const;

    // RVA: 0x25B | Ordinal: 604
        void init(unsigned int, unsigned int);

    // RVA: 0x38C | Ordinal: 909
        void setOffset(unsigned int);

    // RVA: 0x390 | Ordinal: 913
        void setType(unsigned int);

    // RVA: 0xCB | Ordinal: 204
        void _RandomObject(void);
};

// DCS_OPS_RE_EDCORE.DLL_RANDOMOBJECT_HPP
