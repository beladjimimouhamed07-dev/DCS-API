#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: IwDatalinkTerminal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class IwDatalinkTerminal
{
public:

    // RVA: 0xF6 | Ordinal: 247
        void IwDatalinkTerminal(class IwDatalinkTerminal const &);

    // RVA: 0xF7 | Ordinal: 248
        void IwDatalinkTerminal(void);

    // RVA: 0x847 | Ordinal: 2120
        void getKa50VCUHostNumber(void) const;

    // RVA: 0x848 | Ordinal: 2121
        void getKa50VCULeaderFlag(void) const;

    // RVA: 0x8CA | Ordinal: 2251
        void getNetState(struct DatalinkState &) const;

    // RVA: 0x8EF | Ordinal: 2288
        void getSADLNetId(void) const;

    // RVA: 0xB8E | Ordinal: 2959
        void sendAllTransceiversAsyncnet(int);

    // RVA: 0xB90 | Ordinal: 2961
        void sendTransceiverAsyncnet(class wRadioDevice *);

    // RVA: 0xBAF | Ordinal: 2992
        void setKa50VCUHostNumber(int);

    // RVA: 0xBB0 | Ordinal: 2993
        void setKa50VCULeaderFlag(bool);

    // RVA: 0xBC9 | Ordinal: 3018
        void setSADLNetId(class ed::basic_string<char> const &);

    // RVA: 0xC48 | Ordinal: 3145
        void updateEnabledReceiverBits(class std::bitset<32> const &);

    // RVA: 0xC51 | Ordinal: 3154
        void updateTransceiversBits(class std::bitset<32> const &);

    // RVA: 0xC52 | Ordinal: 3155
        void updateTransceiversNetState(struct DatalinkState const &, unsigned char);

    // RVA: 0x27C | Ordinal: 637
        void _IwDatalinkTerminal(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_IWDATALINKTERMINAL_HPP
