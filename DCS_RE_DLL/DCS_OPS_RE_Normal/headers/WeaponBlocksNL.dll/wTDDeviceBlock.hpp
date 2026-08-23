#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wTDDeviceBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wTDDeviceBlock
{
public:

    // RVA: 0x4F0 | Ordinal: 1265
        void __getInputPorts(void);

    // RVA: 0x589 | Ordinal: 1418
        void __getOutputPorts(void);

    // RVA: 0x818 | Ordinal: 2073
        void getDesc_(void);

    // RVA: 0x8CB | Ordinal: 2252
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C8 | Ordinal: 2505
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAB4 | Ordinal: 2741
        void isProxyTargetDetected_(void);

    // RVA: 0xB0B | Ordinal: 2828
        void processFunctionConditions_(void);

    // RVA: 0xB0E | Ordinal: 2831
        void processProximityObjectAtPos_(class ISceneObject const &, class osg::Vec3d const &);

    // RVA: 0xBC8 | Ordinal: 3017
        void registerStateData(void);

    // RVA: 0xC67 | Ordinal: 3176
        void setFuncAlt_(double);

    // RVA: 0xCAB | Ordinal: 3244
        void setProxyRadius_(double);

    // RVA: 0xCAE | Ordinal: 3247
        void setProxyState_(bool);

    // RVA: 0x1AE | Ordinal: 431
        void wTDDeviceBlock(class wTDDeviceBlock &&);

    // RVA: 0x1AF | Ordinal: 432
        void wTDDeviceBlock(class wTDDeviceBlock const &);

    // RVA: 0x1B0 | Ordinal: 433
        void wTDDeviceBlock(class wTDDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x282 | Ordinal: 643
        void _wTDDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WTDDEVICEBLOCK_HPP
