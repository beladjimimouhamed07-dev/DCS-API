#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: RigidBody
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class RigidBody
{
public:

    // RVA: 0x122 | Ordinal: 291
        void RigidBody(class EagleFM::RigidBody const &);

    // RVA: 0x123 | Ordinal: 292
        void RigidBody(class EagleFM::DynamicBody *, class EagleFM::EffectManager *);

    // RVA: 0x3BA | Ordinal: 955
        void addDamageElement(int, double);

    // RVA: 0x3CE | Ordinal: 975
        void applyForces(void);

    // RVA: 0x3D0 | Ordinal: 977
        void assignProp(struct EagleFM::RigidContact &, int);

    // RVA: 0x513 | Ordinal: 1300
        void getContactsNum(void) const;

    // RVA: 0x530 | Ordinal: 1329
        void getDepth(void) const;

    // RVA: 0x543 | Ordinal: 1348
        void getElementForce(int) const;

    // RVA: 0x544 | Ordinal: 1349
        void getElementForce_pos_w(int) const;

    // RVA: 0x545 | Ordinal: 1350
        void getElementProp(int);

    // RVA: 0x546 | Ordinal: 1351
        void getElementProp(int) const;

    // RVA: 0x56A | Ordinal: 1387
        void getForce_l(void) const;

    // RVA: 0x7CF | Ordinal: 2000
        void repair(void);

    // RVA: 0x7E2 | Ordinal: 2019
        void resetContacts(void);

    // RVA: 0x827 | Ordinal: 2088
        void setContactMaxNum(int);

    // RVA: 0x828 | Ordinal: 2089
        void setContactMinDist(double);

    // RVA: 0x83B | Ordinal: 2108
        void setDefaultProp(struct EagleFM::ElementProp const &);

    // RVA: 0x84D | Ordinal: 2126
        void setElementProp(int, struct EagleFM::ElementProp const &);

    // RVA: 0x8A8 | Ordinal: 2217
        void setNewContact(int, double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double>, int, double);

    // RVA: 0x96F | Ordinal: 2416
        void simulate(double);

    // RVA: 0x98B | Ordinal: 2444
        void takeDamageContacts(class ed::vector<struct EagleFM::DamageContact, class ed::allocator<struct EagleFM::DamageContact>> &);

    // RVA: 0x1D2 | Ordinal: 467
        void _RigidBody(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_RIGIDBODY_HPP
