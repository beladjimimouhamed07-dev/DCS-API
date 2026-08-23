#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wDescriptorFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDescriptorFactory
{
public:

    // RVA: 0x105 | Ordinal: 262
        void createDescriptor(class ed::basic_string<char> const &, class ed::basic_string<char> const &) const;

    // RVA: 0x1FC | Ordinal: 509
        void instance(void);

    // RVA: 0x237 | Ordinal: 568
        void registerDescriptorType(class ed::basic_string<char> const &, class wDescriptorBase * (__cdecl *)(class ed::basic_string<char> const &));

    // RVA: 0x22 | Ordinal: 35
        void wDescriptorFactory(void);

    // RVA: 0x23 | Ordinal: 36
        void wDescriptorFactory(class wDescriptorFactory const &);

    // RVA: 0x59 | Ordinal: 90
        void _wDescriptorFactory(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WDESCRIPTORFACTORY_HPP
