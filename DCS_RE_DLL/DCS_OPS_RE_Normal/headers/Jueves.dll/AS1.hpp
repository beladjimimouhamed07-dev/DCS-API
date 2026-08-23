#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: AS1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {
namespace avGMK1 {

class AS1
{
public:

    // RVA: 0x2 | Ordinal: 3
        void AS1(class cockpit::dcswwii::avGMK1::AS1 &&);

    // RVA: 0x3 | Ordinal: 4
        void AS1(class cockpit::dcswwii::avGMK1::AS1 const &);

    // RVA: 0x4 | Ordinal: 5
        void AS1(void);

    // RVA: 0x2F5 | Ordinal: 758
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x387 | Ordinal: 904
        void getLatitude(void);

    // RVA: 0x3D5 | Ordinal: 982
        void getWarningFlag(void);

    // RVA: 0x495 | Ordinal: 1174
        void onPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x497 | Ordinal: 1176
        void onPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x4A7 | Ordinal: 1192
        void post_initialize(class cockpit::dcswwii::avGMK1 *);

    // RVA: 0x541 | Ordinal: 1346
        void setCorrestionSuspendCommand(bool);

    // RVA: 0x542 | Ordinal: 1347
        void setCourseSetterCommand(enum cockpit::dcswwii::avGMK1::CourseSetterCommands);

    // RVA: 0x554 | Ordinal: 1365
        void setGyroMaster(enum cockpit::dcswwii::avGMK1::GyroMasterTypes);

    // RVA: 0x555 | Ordinal: 1366
        void setHemisphereCommand(enum cockpit::dcswwii::avGMK1::Hemispheres);

    // RVA: 0x560 | Ordinal: 1377
        void setLatitude(float);

    // RVA: 0x5CA | Ordinal: 1483
        void simulate(double, class cockpit::dcswwii::avGMK1::KM8 &, class cockpit::dcswwii::avGMK1::GA6 &);

    // RVA: 0xE1 | Ordinal: 226
        void _AS1(void);
};

} // namespace avGMK1
} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AS1_HPP
