#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: FragmentationBlastDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FragmentationDamage {

class FragmentationBlastDescriptor
{
public:

    // RVA: 0x215 | Ordinal: 534
        void loadDescriptor(class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<double, class ed::allocator<double>> const &, struct FragmentationDamage::AuxiliaryFragmentData const &, struct FragmentationDamage::FragmentationBlastDescriptor &);

    // RVA: 0x216 | Ordinal: 535
        void loadDescriptor(class wDatabaseLoader *, struct FragmentationDamage::AuxiliaryFragmentData const &, struct FragmentationDamage::FragmentationBlastDescriptor &);
};

} // namespace FragmentationDamage

// DCS_OPS_RE_WEAPONSBASE.DLL_FRAGMENTATIONBLASTDESCRIPTOR_HPP
