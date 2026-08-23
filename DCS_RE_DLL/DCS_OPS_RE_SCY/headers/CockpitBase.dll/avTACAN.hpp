#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avTACAN
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avTACAN
{
public:

    // RVA: 0x838 | Ordinal: 2105
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1BF | Ordinal: 448
        void avTACAN(void);

    // RVA: 0xAF6 | Ordinal: 2807
        void connectElecPower(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0xC60 | Ordinal: 3169
        void getChannel(void) const;

    // RVA: 0xCA3 | Ordinal: 3236
        void getElecPower(void) const;

    // RVA: 0xD45 | Ordinal: 3398
        void getMagneticBearing(void);

    // RVA: 0xD58 | Ordinal: 3417
        void getMode(void) const;

    // RVA: 0xD5C | Ordinal: 3421
        void getModeXY(void) const;

    // RVA: 0xDB3 | Ordinal: 3508
        void getRange(void);

    // RVA: 0xDBD | Ordinal: 3518
        void getReceiverFrequency(void);

    // RVA: 0xDF6 | Ordinal: 3575
        void getSoundElement(void);

    // RVA: 0xE15 | Ordinal: 3606
        void getStowedBearing(void);

    // RVA: 0xE30 | Ordinal: 3633
        void getTransmitterFrequency(void);

    // RVA: 0x11F6 | Ordinal: 4599
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x124D | Ordinal: 4686
        void isBearingValid(void);

    // RVA: 0x127D | Ordinal: 4734
        void isRangeValid(void);

    // RVA: 0x142D | Ordinal: 5166
        void onACPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x142E | Ordinal: 5167
        void onACPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x1439 | Ordinal: 5178
        void onChannelChanged(void);

    // RVA: 0x144E | Ordinal: 5199
        void onPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x144F | Ordinal: 5200
        void onPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x14FD | Ordinal: 5374
        void post_initialize(void);

    // RVA: 0x15C5 | Ordinal: 5574
        void release(void);

    // RVA: 0x1602 | Ordinal: 5635
        void repair(void);

    // RVA: 0x16B1 | Ordinal: 5810
        void setChannel(int);

    // RVA: 0x16B5 | Ordinal: 5814
        void setChannelXYMode(int);

    // RVA: 0x1759 | Ordinal: 5978
        void setMode(int);

    // RVA: 0x179D | Ordinal: 6046
        void setReceiversOnOff(bool);

    // RVA: 0x1801 | Ordinal: 6146
        void setVolume(float);

    // RVA: 0x1864 | Ordinal: 6245
        void set_damage(unsigned int, bool);

    // RVA: 0x1A1B | Ordinal: 6684
        void switchElecPower(bool);

    // RVA: 0x1ADB | Ordinal: 6876
        void update(void);

    // RVA: 0x1B27 | Ordinal: 6952
        void updateRangeBearing(void);

    // RVA: 0x1B33 | Ordinal: 6964
        void updateWarmup(void);

    // RVA: 0x35A | Ordinal: 859
        void _avTACAN(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVTACAN_HPP
