#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avAN_ARA8
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avAN_ARA8
{
public:

    // RVA: 0xA1 | Ordinal: 162
        void avAN_ARA8(void);

    // RVA: 0x300 | Ordinal: 769
        void connectTo(class EagleFM::Elec::ItemBase &, class wRadioReceiver *);

    // RVA: 0x328 | Ordinal: 809
        void doSetCommand(int, float, bool, int);

    // RVA: 0x419 | Ordinal: 1050
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x46F | Ordinal: 1136
        void netRegisterControls(int);

    // RVA: 0x499 | Ordinal: 1178
        void onReceiverPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x49A | Ordinal: 1179
        void onReceiverPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x49F | Ordinal: 1184
        void onTransmitterPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x4A0 | Ordinal: 1185
        void onTransmitterPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x4B4 | Ordinal: 1205
        void post_initialize(void);

    // RVA: 0x4EB | Ordinal: 1260
        void release(void);

    // RVA: 0x517 | Ordinal: 1304
        void repair(void);

    // RVA: 0x54F | Ordinal: 1360
        void setFrequency(double);

    // RVA: 0x5A2 | Ordinal: 1443
        void setVolume(float);

    // RVA: 0x5B3 | Ordinal: 1460
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x622 | Ordinal: 1571
        void update(void);

    // RVA: 0x63E | Ordinal: 1599
        void updateCarrier(void);

    // RVA: 0x129 | Ordinal: 298
        void _avAN_ARA8(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVAN_ARA8_HPP
