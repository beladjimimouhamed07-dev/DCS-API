#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: AutoTransferSwitch
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class AutoTransferSwitch
{
public:

    // RVA: 0x23 | Ordinal: 36
        void AutoTransferSwitch(class EagleFM::Elec::AutoTransferSwitch const &);

    // RVA: 0x24 | Ordinal: 37
        void AutoTransferSwitch(void);

    // RVA: 0x3A5 | Ordinal: 934
        void SetControlWire(class EagleFM::Elec::ItemBase *, bool);

    // RVA: 0x459 | Ordinal: 1114
        void checkPos(struct lwl::CSignalInfo const *);

    // RVA: 0x45F | Ordinal: 1120
        void clear(void);

    // RVA: 0x472 | Ordinal: 1139
        void connectBeforeMe(class EagleFM::Elec::ItemBase *);

    // RVA: 0x182 | Ordinal: 387
        void _AutoTransferSwitch(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_AUTOTRANSFERSWITCH_HPP
