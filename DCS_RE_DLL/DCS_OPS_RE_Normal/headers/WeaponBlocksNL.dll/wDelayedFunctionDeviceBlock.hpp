#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDelayedFunctionDeviceBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDelayedFunctionDeviceBlock
{
public:

    // RVA: 0x4A7 | Ordinal: 1192
        void __getInputPorts(void);

    // RVA: 0x540 | Ordinal: 1345
        void __getOutputPorts(void);

    // RVA: 0x5AD | Ordinal: 1454
        void allDevicesMustFunction_(void);

    // RVA: 0x78B | Ordinal: 1932
        void getDelayTimeVal_(double);

    // RVA: 0x7CF | Ordinal: 2000
        void getDesc_(void);

    // RVA: 0x882 | Ordinal: 2179
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x97F | Ordinal: 2432
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB8D | Ordinal: 2958
        void registerStateData(void);

    // RVA: 0xC39 | Ordinal: 3130
        void setActiveDevice_(int);

    // RVA: 0xC56 | Ordinal: 3159
        void setDelayMode_(void);

    // RVA: 0xC57 | Ordinal: 3160
        void setDelayValue_(void);

    // RVA: 0xC1 | Ordinal: 194
        void wDelayedFunctionDeviceBlock(class wDelayedFunctionDeviceBlock &&);

    // RVA: 0xC2 | Ordinal: 195
        void wDelayedFunctionDeviceBlock(class wDelayedFunctionDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x227 | Ordinal: 552
        void _wDelayedFunctionDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDELAYEDFUNCTIONDEVICEBLOCK_HPP
