#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FW190Base.dll
// Class: Gear
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FW190 {

class Gear
{
public:

    // RVA: 0x15 | Ordinal: 22
        void Gear(class EagleFM::FW190::Gear const &);

    // RVA: 0x16 | Ordinal: 23
        void Gear(class EagleFM::AerodyneFM *, struct EagleFM::FW190::Gear::GearsInParam &, struct EagleFM::FW190::Gear::GearsInParam &, class EagleFM::Elec::Wire *, class PropertyTable_<double> &);

    // RVA: 0x4C | Ordinal: 77
        void applyForces(void);

    // RVA: 0x57 | Ordinal: 88
        void extending_retraction(void);

    // RVA: 0x66 | Ordinal: 103
        void getDrive(unsigned int);

    // RVA: 0x78 | Ordinal: 121
        void getLeftGearPost(void);

    // RVA: 0x80 | Ordinal: 129
        void getRightGearPost(void);

    // RVA: 0x8B | Ordinal: 140
        void getTailGearPost(void);

    // RVA: 0x8E | Ordinal: 143
        void getWheelChocks(void);

    // RVA: 0x9E | Ordinal: 159
        void initAirStart(void);

    // RVA: 0xA3 | Ordinal: 164
        void initColdStart(void);

    // RVA: 0xA9 | Ordinal: 170
        void initHotStart(void);

    // RVA: 0xBD | Ordinal: 190
        void repair(void);

    // RVA: 0xDC | Ordinal: 221
        void setImmortal(bool);

    // RVA: 0xF0 | Ordinal: 241
        void setWheelChocks(bool);

    // RVA: 0xF3 | Ordinal: 244
        void simulate(double);

    // RVA: 0xF8 | Ordinal: 249
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x20 | Ordinal: 33
        void _Gear(void);
};

} // namespace FW190
} // namespace EagleFM

// DCS_OPS_RE_FW190BASE.DLL_GEAR_HPP
