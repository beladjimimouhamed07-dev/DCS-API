#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x809 | Ordinal: 2058
        void getDesc_(void);

    // RVA: 0x8BD | Ordinal: 2238
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9BA | Ordinal: 2491
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB33 | Ordinal: 2868
        void processFunctionConditions_(void);

    // RVA: 0xB3F | Ordinal: 2880
        void processTgtInGridCell_(class ISceneObject const *, class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<struct std::pair<int, int> const, class ed::vector<struct wMultiPntTDDeviceBlock::MinePosition, class ed::allocator<struct wMultiPntTDDeviceBlock::MinePosition>>>>>>);

    // RVA: 0xBDF | Ordinal: 3040
        void registerStateData(void);

    // RVA: 0xCF4 | Ordinal: 3317
        void setProxyRadius_(double);

    // RVA: 0xCF7 | Ordinal: 3320
        void setProxyState_(bool);

    // RVA: 0xDA3 | Ordinal: 3492
        void simulate(double);

    // RVA: 0xE18 | Ordinal: 3609
        void updateDbgGeometry_(void);

    // RVA: 0x16D | Ordinal: 366
        void wMultiPntTDDeviceBlock(class wMultiPntTDDeviceBlock const &);

    // RVA: 0x16E | Ordinal: 367
        void wMultiPntTDDeviceBlock(class wMultiPntTDDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x269 | Ordinal: 618
        void _wMultiPntTDDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WMULTIPNTTDDEVICEBLOCK_HPP
