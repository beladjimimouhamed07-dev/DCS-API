#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avSuctionPump
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avSuctionPump
{
public:

    // RVA: 0xD2 | Ordinal: 211
        void avSuctionPump(class cockpit::dcswwii::avSuctionPump &&);

    // RVA: 0xD3 | Ordinal: 212
        void avSuctionPump(class cockpit::dcswwii::avSuctionPump const &);

    // RVA: 0xD4 | Ordinal: 213
        void avSuctionPump(void);

    // RVA: 0x3E3 | Ordinal: 996
        void get_power(void);

    // RVA: 0x3E4 | Ordinal: 997
        void get_reduced_power(void);

    // RVA: 0x431 | Ordinal: 1074
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4C9 | Ordinal: 1226
        void post_initialize(void);

    // RVA: 0x523 | Ordinal: 1316
        void repair(void);

    // RVA: 0x5BC | Ordinal: 1469
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x5C3 | Ordinal: 1476
        void set_power(float);

    // RVA: 0x638 | Ordinal: 1593
        void update(void);

    // RVA: 0x143 | Ordinal: 324
        void _avSuctionPump(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVSUCTIONPUMP_HPP
