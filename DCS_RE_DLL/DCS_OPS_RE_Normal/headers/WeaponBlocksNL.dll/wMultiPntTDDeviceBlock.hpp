#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wMultiPntTDDeviceBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMultiPntTDDeviceBlock
{
public:

    // RVA: 0x4D9 | Ordinal: 1242
        void __getInputPorts(void);

    // RVA: 0x572 | Ordinal: 1395
        void __getOutputPorts(void);

    // RVA: 0x59D | Ordinal: 1438
        void addDetectionPoint_(bool);

    // RVA: 0x59E | Ordinal: 1439
        void addPosToMinefield_(class osg::Vec3d const &, bool);

    // RVA: 0x5C6 | Ordinal: 1479
        void calcCoordsInMfdSpace_(class osg::Vec3d const &);

    // RVA: 0x607 | Ordinal: 1544
        void calcMinefieldBBox_(void);

    // RVA: 0x63C | Ordinal: 1597
        void calcTgtSearchVolume_(void);

    // RVA: 0x801 | Ordinal: 2050
        void getDesc_(void);

    // RVA: 0x8B4 | Ordinal: 2229
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B1 | Ordinal: 2482
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB09 | Ordinal: 2826
        void processFunctionConditions_(void);

    // RVA: 0xB15 | Ordinal: 2838
        void processTgtInGridCell_(class ISceneObject const *, class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<struct std::pair<int, int> const, class ed::vector<struct wMultiPntTDDeviceBlock::MinePosition, class ed::allocator<struct wMultiPntTDDeviceBlock::MinePosition>>>>>>);

    // RVA: 0xBB5 | Ordinal: 2998
        void registerStateData(void);

    // RVA: 0xCAA | Ordinal: 3243
        void setProxyRadius_(double);

    // RVA: 0xCAD | Ordinal: 3246
        void setProxyState_(bool);

    // RVA: 0xD58 | Ordinal: 3417
        void simulate(double);

    // RVA: 0xDC9 | Ordinal: 3530
        void updateDbgGeometry_(void);

    // RVA: 0x16D | Ordinal: 366
        void wMultiPntTDDeviceBlock(class wMultiPntTDDeviceBlock const &);

    // RVA: 0x16E | Ordinal: 367
        void wMultiPntTDDeviceBlock(class wMultiPntTDDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x269 | Ordinal: 618
        void _wMultiPntTDDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WMULTIPNTTDDEVICEBLOCK_HPP
