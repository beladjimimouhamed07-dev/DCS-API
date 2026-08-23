#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avT1154
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avT1154
{
public:

    // RVA: 0x2B5 | Ordinal: 694
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xD5 | Ordinal: 214
        void avT1154(void);

    // RVA: 0x2EB | Ordinal: 748
        void checkRadioDevices(void);

    // RVA: 0x30F | Ordinal: 784
        void connectTo(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0x31B | Ordinal: 796
        void doReconfigure(void);

    // RVA: 0x377 | Ordinal: 888
        void getFrequencyRangeMax(int) const;

    // RVA: 0x378 | Ordinal: 889
        void getFrequencyRangeMin(int) const;

    // RVA: 0x379 | Ordinal: 890
        void getFrequencyRangeSpan(int) const;

    // RVA: 0x389 | Ordinal: 906
        void getM1(void) const;

    // RVA: 0x38A | Ordinal: 907
        void getM2(void) const;

    // RVA: 0x38B | Ordinal: 908
        void getM3(void) const;

    // RVA: 0x393 | Ordinal: 916
        void getOscillatorFrequency(int) const;

    // RVA: 0x394 | Ordinal: 917
        void getOutputCircuitFrequency(int) const;

    // RVA: 0x3E9 | Ordinal: 1002
        void get_set_frequency(void) const;

    // RVA: 0x432 | Ordinal: 1075
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x43E | Ordinal: 1087
        void isFrequencyInRangeSpan(int, int) const;

    // RVA: 0x44E | Ordinal: 1103
        void load_dials(class Lua::Config &);

    // RVA: 0x48F | Ordinal: 1168
        void onHTPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x490 | Ordinal: 1169
        void onHTPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x4A6 | Ordinal: 1191
        void perform_init_state(void);

    // RVA: 0x4CA | Ordinal: 1227
        void post_initialize(void);

    // RVA: 0x529 | Ordinal: 1322
        void save_dials(void) const;

    // RVA: 0x52E | Ordinal: 1327
        void setAntennaeCommutation(enum cockpit::dcswwii::T1154R1155AerialPlugBoardConfigs);

    // RVA: 0x55C | Ordinal: 1373
        void setKeyDepressed(bool);

    // RVA: 0x55F | Ordinal: 1376
        void setL6(float);

    // RVA: 0x56C | Ordinal: 1389
        void setOscillatorFrequency(int, int);

    // RVA: 0x56D | Ordinal: 1390
        void setOutputCircuitFrequency(int, int);

    // RVA: 0x57E | Ordinal: 1407
        void setS1S2(int);

    // RVA: 0x57F | Ordinal: 1408
        void setS3(int);

    // RVA: 0x580 | Ordinal: 1409
        void setS4(int);

    // RVA: 0x581 | Ordinal: 1410
        void setS5(enum cockpit::dcswwii::T1154Modes);

    // RVA: 0x582 | Ordinal: 1411
        void setS6(int);

    // RVA: 0x583 | Ordinal: 1412
        void setS7(int);

    // RVA: 0x599 | Ordinal: 1434
        void setTrailingAntennaLength(float);

    // RVA: 0x5C0 | Ordinal: 1473
        void set_intercom_delegate(class cockpit::dcswwii::avT1154::IIntercomDelegate *);

    // RVA: 0x610 | Ordinal: 1553
        void transmit_DF_tone(int);

    // RVA: 0x639 | Ordinal: 1594
        void update(void);

    // RVA: 0x144 | Ordinal: 325
        void _avT1154(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVT1154_HPP
