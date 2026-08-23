#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avRocketDistributor24
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avRocketDistributor24
{
public:

    // RVA: 0x2B4 | Ordinal: 693
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xCE | Ordinal: 207
        void avRocketDistributor24(class cockpit::dcswwii::avRocketDistributor24 &&);

    // RVA: 0xCF | Ordinal: 208
        void avRocketDistributor24(class cockpit::dcswwii::avRocketDistributor24 const &);

    // RVA: 0xD0 | Ordinal: 209
        void avRocketDistributor24(void);

    // RVA: 0x30D | Ordinal: 782
        void connectTo(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0x333 | Ordinal: 820
        void doSetCommand(int, float, bool, int);

    // RVA: 0x33F | Ordinal: 832
        void doShiftDistributorDisplayPosition(float);

    // RVA: 0x340 | Ordinal: 833
        void doShiftKnobRotation(float);

    // RVA: 0x42F | Ordinal: 1072
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x483 | Ordinal: 1156
        void onCapacitorOff(struct lwl::CSignalInfo const *);

    // RVA: 0x492 | Ordinal: 1171
        void onIgnitorOn(struct lwl::CSignalInfo const *);

    // RVA: 0x49C | Ordinal: 1181
        void onStepMotorOff(struct lwl::CSignalInfo const *);

    // RVA: 0x49E | Ordinal: 1183
        void onStepMotorOn(struct lwl::CSignalInfo const *);

    // RVA: 0x4C7 | Ordinal: 1224
        void post_initialize(void);

    // RVA: 0x4DE | Ordinal: 1247
        void rearm(void);

    // RVA: 0x521 | Ordinal: 1314
        void repair(void);

    // RVA: 0x5BB | Ordinal: 1468
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x612 | Ordinal: 1555
        void tryLaunchStation(int);

    // RVA: 0x636 | Ordinal: 1591
        void update(void);

    // RVA: 0x141 | Ordinal: 322
        void _avRocketDistributor24(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVROCKETDISTRIBUTOR24_HPP
