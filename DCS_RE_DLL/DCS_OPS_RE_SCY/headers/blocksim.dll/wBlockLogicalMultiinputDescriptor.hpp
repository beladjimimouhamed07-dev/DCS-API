#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockLogicalMultiinputDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockLogicalMultiinputDescriptor
{
public:

    // RVA: 0x3E3 | Ordinal: 996
        void getInput(void) const;

    // RVA: 0x45E | Ordinal: 1119
        void getInversions(void) const;

    // RVA: 0x56C | Ordinal: 1389
        void serialize(class wBlockSerializer &);

    // RVA: 0x581 | Ordinal: 1410
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::vector<bool, class ed::allocator<bool>> const &);

    // RVA: 0xE7 | Ordinal: 232
        void wBlockLogicalMultiinputDescriptor(class wBlockLogicalMultiinputDescriptor &&);

    // RVA: 0xE8 | Ordinal: 233
        void wBlockLogicalMultiinputDescriptor(class wBlockLogicalMultiinputDescriptor const &);

    // RVA: 0xE9 | Ordinal: 234
        void wBlockLogicalMultiinputDescriptor(void);

    // RVA: 0x15C | Ordinal: 349
        void _wBlockLogicalMultiinputDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKLOGICALMULTIINPUTDESCRIPTOR_HPP
