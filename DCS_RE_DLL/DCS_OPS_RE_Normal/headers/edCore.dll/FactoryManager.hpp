#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: FactoryManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Common {

class FactoryManager
{
public:

    // RVA: 0x147 | Ordinal: 328
        void addFactory(class Common::Factory *);

    // RVA: 0x18D | Ordinal: 398
        void createInstance(class Common::Identifier const &);

    // RVA: 0x19F | Ordinal: 416
        void destroyInstance(class Common::Identifiable *);

    // RVA: 0x26D | Ordinal: 622
        void instance(void);

    // RVA: 0x33F | Ordinal: 832
        void removeFactory(class Common::Factory *);
};

} // namespace Common

// DCS_OPS_RE_EDCORE.DLL_FACTORYMANAGER_HPP
