#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wFMBaseDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMBaseDescriptor
{
public:

    // RVA: 0x691 | Ordinal: 1682
        void clone(void) const;

    // RVA: 0x724 | Ordinal: 1829
        void getBlockClassNameS(void);

    // RVA: 0x73D | Ordinal: 1854
        void getBlockTypeName(void) const;

    // RVA: 0x754 | Ordinal: 1877
        void getBlockTypeNameS(void);

    // RVA: 0x76C | Ordinal: 1901
        void getClassName(void) const;

    // RVA: 0x8E8 | Ordinal: 2281
        void getInputPorts_(void) const;

    // RVA: 0x8FF | Ordinal: 2304
        void getInputWires_(void) const;

    // RVA: 0x9E5 | Ordinal: 2534
        void getOutputPorts_(void) const;

    // RVA: 0x9FC | Ordinal: 2557
        void getOutputWires_(void) const;

    // RVA: 0xA16 | Ordinal: 2583
        void getParametersList(void);

    // RVA: 0xF5 | Ordinal: 246
        void wFMBaseDescriptor(class wFMBaseDescriptor &&);

    // RVA: 0xF6 | Ordinal: 247
        void wFMBaseDescriptor(class wFMBaseDescriptor const &);

    // RVA: 0xF7 | Ordinal: 248
        void wFMBaseDescriptor(void);

    // RVA: 0x23C | Ordinal: 573
        void _wFMBaseDescriptor(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMBASEDESCRIPTOR_HPP
