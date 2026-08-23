#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x793 | Ordinal: 1940
        void getDelayTimeVal_(double);

    // RVA: 0x7D7 | Ordinal: 2008
        void getDesc_(void);

    // RVA: 0x88B | Ordinal: 2188
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x988 | Ordinal: 2441
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBB7 | Ordinal: 3000
        void registerStateData(void);

    // RVA: 0xC82 | Ordinal: 3203
        void setActiveDevice_(int);

    // RVA: 0xCA0 | Ordinal: 3233
        void setDelayMode_(void);

    // RVA: 0xCA1 | Ordinal: 3234
        void setDelayValue_(void);

    // RVA: 0xC1 | Ordinal: 194
        void wDelayedFunctionDeviceBlock(class wDelayedFunctionDeviceBlock &&);

    // RVA: 0xC2 | Ordinal: 195
        void wDelayedFunctionDeviceBlock(class wDelayedFunctionDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x227 | Ordinal: 552
        void _wDelayedFunctionDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDELAYEDFUNCTIONDEVICEBLOCK_HPP
