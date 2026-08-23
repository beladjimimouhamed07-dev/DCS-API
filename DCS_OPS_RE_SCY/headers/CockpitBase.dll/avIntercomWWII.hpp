#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avIntercomWWII
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avIntercomWWII
{
public:

    // RVA: 0x13C | Ordinal: 317
        void avIntercomWWII(void);

    // RVA: 0x11C8 | Ordinal: 4553
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14EC | Ordinal: 5357
        void post_initialize(void);

    // RVA: 0x16C1 | Ordinal: 5826
        void setCommunicator(enum cockpit::avIntercomWWII::avIntercom_communicator);

    // RVA: 0x19EB | Ordinal: 6636
        void start_transmission(bool, bool);

    // RVA: 0x1A5D | Ordinal: 6750
        void trySetCommunicator(unsigned int);

    // RVA: 0x317 | Ordinal: 792
        void _avIntercomWWII(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVINTERCOMWWII_HPP
