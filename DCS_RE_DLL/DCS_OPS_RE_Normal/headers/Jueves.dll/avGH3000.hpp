#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avGH3000
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avGH3000
{
public:

    // RVA: 0x2B0 | Ordinal: 689
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB4 | Ordinal: 181
        void avGH3000(void);

    // RVA: 0x305 | Ordinal: 774
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x306 | Ordinal: 775
        void connectTo(class EagleFM::Pitot *);

    // RVA: 0x32F | Ordinal: 816
        void doSetCommand(int, float, bool, int);

    // RVA: 0x33B | Ordinal: 828
        void doSetStage(enum cockpit::avGH3000::GH3000Stages);

    // RVA: 0x35C | Ordinal: 861
        void getBank(void) const;

    // RVA: 0x365 | Ordinal: 870
        void getCurrentSTDBaroSetting(void) const;

    // RVA: 0x367 | Ordinal: 872
        void getDisplayBrightness(void) const;

    // RVA: 0x381 | Ordinal: 898
        void getInfoLine(int) const;

    // RVA: 0x39F | Ordinal: 928
        void getPitch(void) const;

    // RVA: 0x3A0 | Ordinal: 929
        void getPresetColor(enum cockpit::avGH3000::GH3000ConfigColors) const;

    // RVA: 0x3B5 | Ordinal: 950
        void getSlip(void) const;

    // RVA: 0x3E1 | Ordinal: 994
        void get_mode(void) const;

    // RVA: 0x424 | Ordinal: 1061
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x476 | Ordinal: 1143
        void netRegisterControls(int);

    // RVA: 0x496 | Ordinal: 1175
        void onPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x498 | Ordinal: 1177
        void onPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x4BD | Ordinal: 1214
        void post_initialize(void);

    // RVA: 0x4D9 | Ordinal: 1242
        void put(enum cockpit::avGH3000::GH3000DataChannels, float);

    // RVA: 0x4EF | Ordinal: 1264
        void release(void);

    // RVA: 0x51D | Ordinal: 1310
        void repair(void);

    // RVA: 0x5B8 | Ordinal: 1465
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x5C1 | Ordinal: 1474
        void set_mode(struct cockpit::Device_Mode const &);

    // RVA: 0x614 | Ordinal: 1557
        void trySetErrorCode(int);

    // RVA: 0x617 | Ordinal: 1560
        void trySetStage(enum cockpit::avGH3000::GH3000Stages);

    // RVA: 0x62D | Ordinal: 1582
        void update(void);

    // RVA: 0x135 | Ordinal: 310
        void _avGH3000(void);
};

} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVGH3000_HPP
