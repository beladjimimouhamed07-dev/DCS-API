#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x820 | Ordinal: 2081
        void getDesc_(void);

    // RVA: 0x8D4 | Ordinal: 2261
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D1 | Ordinal: 2514
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xADA | Ordinal: 2779
        void isProxyTargetDetected_(void);

    // RVA: 0xB35 | Ordinal: 2870
        void processFunctionConditions_(void);

    // RVA: 0xB38 | Ordinal: 2873
        void processProximityObjectAtPos_(class ISceneObject const &, class osg::Vec3d const &);

    // RVA: 0xBF2 | Ordinal: 3059
        void registerStateData(void);

    // RVA: 0xCB1 | Ordinal: 3250
        void setFuncAlt_(double);

    // RVA: 0xCF5 | Ordinal: 3318
        void setProxyRadius_(double);

    // RVA: 0xCF8 | Ordinal: 3321
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WTDDEVICEBLOCK_HPP
