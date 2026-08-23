#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FW190Base.dll
// Class: FW190ControlSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FW190 {

class FW190ControlSystem
{
public:

    // RVA: 0x3 | Ordinal: 4
        void FW190ControlSystem(class EagleFM::FW190::FW190ControlSystem &&);

    // RVA: 0x4 | Ordinal: 5
        void FW190ControlSystem(class EagleFM::FW190::FW190ControlSystem const &);

    // RVA: 0x5 | Ordinal: 6
        void FW190ControlSystem(void);

    // RVA: 0x61 | Ordinal: 98
        void getControlLock(void) const;

    // RVA: 0x7A | Ordinal: 123
        void getMagnetosState(void) const;

    // RVA: 0x8C | Ordinal: 141
        void getThrottlePos(int) const;

    // RVA: 0x8D | Ordinal: 142
        void getWheelBrakePos(int) const;

    // RVA: 0x9A | Ordinal: 155
        void initAirStart(void);

    // RVA: 0x9F | Ordinal: 160
        void initColdStart(void);

    // RVA: 0xA5 | Ordinal: 166
        void initHotStart(void);

    // RVA: 0xD2 | Ordinal: 211
        void setControlAxisDir(enum ControlAxisDir, bool);

    // RVA: 0xD3 | Ordinal: 212
        void setControlSyrfacesAngles(void);

    // RVA: 0xD6 | Ordinal: 215
        void setEmergencyPower(bool);

    // RVA: 0xD7 | Ordinal: 216
        void setEngineStop(bool, int);

    // RVA: 0xDE | Ordinal: 223
        void setJoystickFFB(bool);

    // RVA: 0xE8 | Ordinal: 233
        void setThrottle(double, enum EagleFM::EngineIDs);

    // RVA: 0xE9 | Ordinal: 234
        void setThrottleDir(int, int);

    // RVA: 0xEE | Ordinal: 239
        void setWheelBrake(double, int);

    // RVA: 0xEF | Ordinal: 240
        void setWheelBrake(bool, int);

    // RVA: 0xF1 | Ordinal: 242
        void simulate(double);

    // RVA: 0xF9 | Ordinal: 250
        void surfaceControlLock(bool, float);

    // RVA: 0x18 | Ordinal: 25
        void _FW190ControlSystem(void);
};

} // namespace FW190
} // namespace EagleFM

// DCS_OPS_RE_FW190BASE.DLL_FW190CONTROLSYSTEM_HPP
