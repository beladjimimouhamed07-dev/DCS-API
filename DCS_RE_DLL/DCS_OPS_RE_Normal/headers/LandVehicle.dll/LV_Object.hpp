#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: LandVehicle.dll
// Class: LV_Object
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace LandVehicle {

class LV_Object
{
public:

    // RVA: 0x2 | Ordinal: 3
        void LV_Object(class EagleFM::LandVehicle::LV_Object const &);

    // RVA: 0x3 | Ordinal: 4
        void LV_Object(double);

    // RVA: 0x17 | Ordinal: 24
        void calcGFactor(class Math::Vector<3, double> const &);

    // RVA: 0x18 | Ordinal: 25
        void calcGFactor(void);

    // RVA: 0x1C | Ordinal: 29
        void getDamageContacts(class ed::vector<struct EagleFM::DamageContact, class ed::allocator<struct EagleFM::DamageContact>> &);

    // RVA: 0x1D | Ordinal: 30
        void getDynamicBody(void);

    // RVA: 0x1E | Ordinal: 31
        void getEffectManager(void);

    // RVA: 0x24 | Ordinal: 37
        void getModelingDeltaTime(void) const;

    // RVA: 0x27 | Ordinal: 40
        void getOrientation(void) const;

    // RVA: 0x2A | Ordinal: 43
        void getPitch(void) const;

    // RVA: 0x2B | Ordinal: 44
        void getPosition(void) const;

    // RVA: 0x2D | Ordinal: 46
        void getRoll(void) const;

    // RVA: 0x2E | Ordinal: 47
        void getRotateSpeed_l(void) const;

    // RVA: 0x2F | Ordinal: 48
        void getRotateSpeed_w(void) const;

    // RVA: 0x31 | Ordinal: 50
        void getShakeValue(void) const;

    // RVA: 0x35 | Ordinal: 54
        void getTimePosition(void) const;

    // RVA: 0x36 | Ordinal: 55
        void getVelocity_l(void) const;

    // RVA: 0x37 | Ordinal: 56
        void getVelocity_w(void) const;

    // RVA: 0x3B | Ordinal: 60
        void getYaw(void) const;

    // RVA: 0x3E | Ordinal: 63
        void init(class Math::Vector<3, double> const &, float);

    // RVA: 0x44 | Ordinal: 69
        void setExternalForce(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool, bool);

    // RVA: 0x45 | Ordinal: 70
        void setExternalForce(class Math::Vector<3, double> const &, bool);

    // RVA: 0x46 | Ordinal: 71
        void setExternalMoment(class Math::Vector<3, double> const &, bool);

    // RVA: 0x4A | Ordinal: 75
        void setOrientaion(class Math::Matrix<3, float> const &);

    // RVA: 0x51 | Ordinal: 82
        void setPosition(class Math::Vector<3, double> const &);

    // RVA: 0x53 | Ordinal: 84
        void setRigidContact(int, double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0x5A | Ordinal: 91
        void setStructureIF(int, double);

    // RVA: 0x5E | Ordinal: 95
        void simulate(double);

    // RVA: 0x6 | Ordinal: 7
        void _LV_Object(void);
};

} // namespace LandVehicle
} // namespace EagleFM

// DCS_OPS_RE_LANDVEHICLE.DLL_LV_OBJECT_HPP
