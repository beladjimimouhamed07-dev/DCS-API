#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avR1155
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avR1155
{
public:

    // RVA: 0x2B3 | Ordinal: 692
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xC9 | Ordinal: 202
        void avR1155(void);

    // RVA: 0x2E9 | Ordinal: 746
        void checkRadioDevices(void);

    // RVA: 0x30B | Ordinal: 780
        void connectTo(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0x31A | Ordinal: 795
        void doReconfigure(void);

    // RVA: 0x386 | Ordinal: 903
        void getLHDF(void) const;

    // RVA: 0x3A6 | Ordinal: 935
        void getRHDF(void) const;

    // RVA: 0x3B0 | Ordinal: 945
        void getReducedTunedFrequency(void);

    // RVA: 0x3CC | Ordinal: 973
        void getTuningValveReducedGlow(void);

    // RVA: 0x3CD | Ordinal: 974
        void getTuningValveShadowFactor(void);

    // RVA: 0x3E7 | Ordinal: 1000
        void get_set_frequency(void) const;

    // RVA: 0x42C | Ordinal: 1069
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x44C | Ordinal: 1101
        void load_dials(class Lua::Config &);

    // RVA: 0x4A4 | Ordinal: 1189
        void perform_init_state(void);

    // RVA: 0x4C5 | Ordinal: 1222
        void post_initialize(void);

    // RVA: 0x527 | Ordinal: 1320
        void save_dials(void) const;

    // RVA: 0x52D | Ordinal: 1326
        void setAntennaeCommutation(enum cockpit::dcswwii::T1154R1155AerialPlugBoardConfigs);

    // RVA: 0x533 | Ordinal: 1332
        void setAuralSense(int);

    // RVA: 0x54B | Ordinal: 1356
        void setFilter(bool);

    // RVA: 0x556 | Ordinal: 1367
        void setHeti(bool);

    // RVA: 0x562 | Ordinal: 1379
        void setLoopAntennaReducedDisplacement(float);

    // RVA: 0x564 | Ordinal: 1381
        void setMasterMode(enum cockpit::dcswwii::R1155Modes);

    // RVA: 0x565 | Ordinal: 1382
        void setMeterAmplitude(float);

    // RVA: 0x566 | Ordinal: 1383
        void setMeterBalance(float);

    // RVA: 0x567 | Ordinal: 1384
        void setMeterDeflectionSensitivity(bool);

    // RVA: 0x568 | Ordinal: 1385
        void setMeterSwitchingFrequency(bool);

    // RVA: 0x577 | Ordinal: 1400
        void setRangeSwitch(int);

    // RVA: 0x57B | Ordinal: 1404
        void setReducedTunedFrequency(float);

    // RVA: 0x598 | Ordinal: 1433
        void setTrailingAntennaLength(float);

    // RVA: 0x5A3 | Ordinal: 1444
        void setVolume(float);

    // RVA: 0x5C8 | Ordinal: 1481
        void setv1v2Imperfections(float, float);

    // RVA: 0x634 | Ordinal: 1589
        void update(void);

    // RVA: 0x13E | Ordinal: 319
        void _avR1155(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVR1155_HPP
