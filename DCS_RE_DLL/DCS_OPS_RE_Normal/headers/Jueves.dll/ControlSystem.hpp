#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: ControlSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {

class ControlSystem
{
public:

    // RVA: 0x18 | Ordinal: 25
        void ControlSystem(class EagleFM::dcswwii::ControlSystem const &);

    // RVA: 0x19 | Ordinal: 26
        void ControlSystem(class EagleFM::dcswwii::FlightModel *);

    // RVA: 0x316 | Ordinal: 791
        void distribute(void);

    // RVA: 0x341 | Ordinal: 834
        void doSimulate(void);

    // RVA: 0x39D | Ordinal: 926
        void getParkingBrake(int) const;

    // RVA: 0x3CA | Ordinal: 971
        void getThrottlePos(int) const;

    // RVA: 0x3D9 | Ordinal: 986
        void getWheelBrakePos(int) const;

    // RVA: 0x405 | Ordinal: 1030
        void initPreStart(void);

    // RVA: 0x4F8 | Ordinal: 1273
        void repair(void);

    // RVA: 0x53A | Ordinal: 1339
        void setCommand(int, float);

    // RVA: 0x540 | Ordinal: 1345
        void setControlAxisDir(enum ControlAxisDir, bool);

    // RVA: 0x56F | Ordinal: 1392
        void setParkingBrake(bool, int);

    // RVA: 0x58C | Ordinal: 1421
        void setThrottle(double, enum EagleFM::EngineIDs);

    // RVA: 0x58D | Ordinal: 1422
        void setThrottleDir(int, int);

    // RVA: 0x5A4 | Ordinal: 1445
        void setWheelBrake(double, int);

    // RVA: 0x5A5 | Ordinal: 1446
        void setWheelBrake(bool, int);

    // RVA: 0x5F6 | Ordinal: 1527
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0xEB | Ordinal: 236
        void _ControlSystem(void);
};

} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_CONTROLSYSTEM_HPP
