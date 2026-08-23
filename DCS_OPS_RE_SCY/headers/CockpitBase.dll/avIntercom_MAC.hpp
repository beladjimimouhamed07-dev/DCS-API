#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avIntercom_MAC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avIntercom_MAC
{
public:

    // RVA: 0x886 | Ordinal: 2183
        void SetCommand(int, float);

    // RVA: 0x13E | Ordinal: 319
        void avIntercom_MAC(void);

    // RVA: 0xBC1 | Ordinal: 3010
        void easyCommOverride(unsigned int);

    // RVA: 0x11C9 | Ordinal: 4554
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1272 | Ordinal: 4723
        void isOn(void) const;

    // RVA: 0x127B | Ordinal: 4732
        void isPowered(void) const;

    // RVA: 0x1294 | Ordinal: 4757
        void isWireCommOn(void) const;

    // RVA: 0x14ED | Ordinal: 5358
        void post_initialize(void);

    // RVA: 0x16C2 | Ordinal: 5827
        void setCommunicator(enum cockpit::avIntercom_MAC::avIntercom_communicator);

    // RVA: 0x1791 | Ordinal: 6034
        void setPowerOnOff(bool);

    // RVA: 0x19EC | Ordinal: 6637
        void start_transmission(bool, bool);

    // RVA: 0x1A5E | Ordinal: 6751
        void trySetCommunicator(unsigned int);

    // RVA: 0x319 | Ordinal: 794
        void _avIntercom_MAC(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVINTERCOM_MAC_HPP
