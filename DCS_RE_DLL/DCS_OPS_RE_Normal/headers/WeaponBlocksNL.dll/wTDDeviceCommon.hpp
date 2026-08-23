#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wTDDeviceCommon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wTDDeviceCommon
{
public:

    // RVA: 0x4F1 | Ordinal: 1266
        void __getInputPorts(void);

    // RVA: 0x58A | Ordinal: 1419
        void __getOutputPorts(void);

    // RVA: 0x819 | Ordinal: 2074
        void getDesc_(void);

    // RVA: 0x8CC | Ordinal: 2253
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C9 | Ordinal: 2506
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB0F | Ordinal: 2832
        void processProximityObjectAtPos_(class ISceneObject const &, class osg::Vec3d const &);

    // RVA: 0xBC9 | Ordinal: 3018
        void registerStateData(void);

    // RVA: 0xD6A | Ordinal: 3435
        void simulate(double);

    // RVA: 0x1B1 | Ordinal: 434
        void wTDDeviceCommon(class wTDDeviceCommon &&);

    // RVA: 0x1B2 | Ordinal: 435
        void wTDDeviceCommon(class wTDDeviceCommon const &);

    // RVA: 0x1B3 | Ordinal: 436
        void wTDDeviceCommon(class wTDDeviceCommonDesc const *, class wSimulationSystem *);

    // RVA: 0x283 | Ordinal: 644
        void _wTDDeviceCommon(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WTDDEVICECOMMON_HPP
