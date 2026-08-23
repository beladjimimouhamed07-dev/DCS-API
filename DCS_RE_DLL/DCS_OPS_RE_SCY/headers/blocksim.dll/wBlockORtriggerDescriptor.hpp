#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockORtriggerDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockORtriggerDescriptor
{
public:

    // RVA: 0x26B | Ordinal: 620
        void __create_instance(void);

    // RVA: 0x2BD | Ordinal: 702
        void clone(void) const;

    // RVA: 0x2F2 | Ordinal: 755
        void create(class Lua::Loader *);

    // RVA: 0x32E | Ordinal: 815
        void getBlockClassNameS(void);

    // RVA: 0x363 | Ordinal: 868
        void getBlockTypeName(void) const;

    // RVA: 0x393 | Ordinal: 916
        void getBlockTypeNameS(void);

    // RVA: 0x3C7 | Ordinal: 968
        void getClassName(void) const;

    // RVA: 0x41F | Ordinal: 1056
        void getInputPorts_(void) const;

    // RVA: 0x456 | Ordinal: 1111
        void getInputWires_(void) const;

    // RVA: 0x4A1 | Ordinal: 1186
        void getOutputPorts_(void) const;

    // RVA: 0x4D7 | Ordinal: 1240
        void getOutputWires_(void) const;

    // RVA: 0x509 | Ordinal: 1290
        void getParametersList(void);

    // RVA: 0xF8 | Ordinal: 249
        void wBlockORtriggerDescriptor(class wBlockORtriggerDescriptor &&);

    // RVA: 0xF9 | Ordinal: 250
        void wBlockORtriggerDescriptor(class wBlockORtriggerDescriptor const &);

    // RVA: 0xFA | Ordinal: 251
        void wBlockORtriggerDescriptor(void);

    // RVA: 0x162 | Ordinal: 355
        void _wBlockORtriggerDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKORTRIGGERDESCRIPTOR_HPP
