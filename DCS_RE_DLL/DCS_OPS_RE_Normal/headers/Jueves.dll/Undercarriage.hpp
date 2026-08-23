#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Undercarriage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace undercarriage {

class Undercarriage
{
public:

    // RVA: 0x80 | Ordinal: 129
        void Undercarriage(class EagleFM::dcswwii::undercarriage::Undercarriage const &);

    // RVA: 0x81 | Ordinal: 130
        void Undercarriage(class EagleFM::dcswwii::FlightModel *, double);

    // RVA: 0x2D5 | Ordinal: 726
        void applyForces(void);

    // RVA: 0x338 | Ordinal: 825
        void doSetControl(enum EagleFM::dcswwii::undercarriage::Undercarriage::ControlValvePositions);

    // RVA: 0x339 | Ordinal: 826
        void doSetEmergencyControl(int);

    // RVA: 0x34D | Ordinal: 846
        void doSimulate(void);

    // RVA: 0x362 | Ordinal: 867
        void getControl(void);

    // RVA: 0x36D | Ordinal: 878
        void getEmergencyControl(void);

    // RVA: 0x3DA | Ordinal: 987
        void getWheelChocks(void);

    // RVA: 0x50D | Ordinal: 1294
        void repair(void);

    // RVA: 0x537 | Ordinal: 1336
        void setCentralWheelControlMode(enum EagleFM::dcswwii::undercarriage::Undercarriage::CentralWheelControlModes);

    // RVA: 0x53E | Ordinal: 1343
        void setControl(enum EagleFM::dcswwii::undercarriage::Undercarriage::ControlValvePositions);

    // RVA: 0x546 | Ordinal: 1351
        void setEmergencyControl(int);

    // RVA: 0x559 | Ordinal: 1370
        void setImmortal(bool);

    // RVA: 0x5A6 | Ordinal: 1447
        void setWheelChocks(bool);

    // RVA: 0x609 | Ordinal: 1546
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x119 | Ordinal: 282
        void _Undercarriage(void);
};

} // namespace undercarriage
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_UNDERCARRIAGE_HPP
