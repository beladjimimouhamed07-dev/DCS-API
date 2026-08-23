#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: BodyGroupImpl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Heat {

class BodyGroupImpl
{
public:

    // RVA: 0x36 | Ordinal: 55
        void BodyGroupImpl(class EagleFM::Heat::BodyGroupImpl &&);

    // RVA: 0x37 | Ordinal: 56
        void BodyGroupImpl(class EagleFM::Heat::BodyGroupImpl const &);

    // RVA: 0x453 | Ordinal: 1108
        void change_conductivity(char const *, char const *, double);

    // RVA: 0x6FA | Ordinal: 1787
        void get_body(class ed::basic_string<char>) const;

    // RVA: 0x939 | Ordinal: 2362
        void set_external_flow(class ed::vector<double, class ed::allocator<double>> &);

    // RVA: 0x189 | Ordinal: 394
        void _BodyGroupImpl(void);
};

} // namespace Heat
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_BODYGROUPIMPL_HPP
