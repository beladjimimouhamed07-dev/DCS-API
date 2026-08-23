#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wGuidedClusterPart
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGuidedClusterPart
{
public:

    // RVA: 0x43E | Ordinal: 1087
        void CalcAlphaBeta(double &, double &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &);

    // RVA: 0x43F | Ordinal: 1088
        void CalcSubmunitionForce(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, double, double, class wGuidedClusterDescriptor const *, double);

    // RVA: 0x440 | Ordinal: 1089
        void CalcSubmunitionTorque(double, double, double, double, class wGuidedClusterDescriptor const *, double, double);

    // RVA: 0x441 | Ordinal: 1090
        void DrawSubmunitionChute(double, double, double, double, double);

    // RVA: 0x442 | Ordinal: 1091
        void GetDrawArguments(void);

    // RVA: 0x443 | Ordinal: 1092
        void GetLaunchFlag(void);

    // RVA: 0x444 | Ordinal: 1093
        void GetPoint(void);

    // RVA: 0x446 | Ordinal: 1095
        void Parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x447 | Ordinal: 1096
        void Position(double);

    // RVA: 0x44F | Ordinal: 1104
        void SetEmptyDispenserModel(class wGuidedCluster *);

    // RVA: 0x450 | Ordinal: 1105
        void SetLaunchedFlag(void);

    // RVA: 0x451 | Ordinal: 1106
        void SimulateBombPart(class wGuidedClusterDescriptor const *, double, double, double, double, class Math::Vector<3, double> const &);

    // RVA: 0x452 | Ordinal: 1107
        void SimulateSubmunition(class wGuidedClusterDescriptor const *, double, double, double, double, class Math::Vector<3, double> const &);

    // RVA: 0x93D | Ordinal: 2366
        void getOmega(void) const;

    // RVA: 0xA29 | Ordinal: 2602
        void getPosition(void) const;

    // RVA: 0xA2A | Ordinal: 2603
        void getPrevPosition(void) const;

    // RVA: 0xA3E | Ordinal: 2623
        void getRotation(void) const;

    // RVA: 0xA50 | Ordinal: 2641
        void getTargetPosition(double, double, double, double);

    // RVA: 0xA5C | Ordinal: 2653
        void getVelocity(void) const;

    // RVA: 0xA87 | Ordinal: 2696
        void initOpenedDispenser(class wGuidedCluster *, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, bool);

    // RVA: 0xA88 | Ordinal: 2697
        void initPanel(int, class wGuidedCluster *, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, bool);

    // RVA: 0xA8E | Ordinal: 2703
        void initSkeet(class wGuidedCluster *, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, bool);

    // RVA: 0xA8F | Ordinal: 2704
        void initSubmunition(class wGuidedCluster *, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, bool);

    // RVA: 0xD47 | Ordinal: 3400
        void simulate(class wGuidedClusterDescriptor const *, double, double, double, double, class Math::Vector<3, double> const &);

    // RVA: 0x139 | Ordinal: 314
        void wGuidedClusterPart(class wGuidedClusterPart const &);

    // RVA: 0x13A | Ordinal: 315
        void wGuidedClusterPart(void);

    // RVA: 0x256 | Ordinal: 599
        void _wGuidedClusterPart(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGUIDEDCLUSTERPART_HPP
