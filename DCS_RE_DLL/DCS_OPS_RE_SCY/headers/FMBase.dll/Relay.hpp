#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Relay
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class Relay
{
public:

    // RVA: 0x11E | Ordinal: 287
        void Relay(class EagleFM::Elec::Relay const &);

    // RVA: 0x11F | Ordinal: 288
        void Relay(bool);

    // RVA: 0x3A6 | Ordinal: 935
        void SetControlWire(class EagleFM::Elec::ItemBase *, bool);

    // RVA: 0x458 | Ordinal: 1113
        void checkOnOff(struct lwl::CSignalInfo const *);

    // RVA: 0x461 | Ordinal: 1122
        void clear(void);

    // RVA: 0x1D0 | Ordinal: 465
        void _Relay(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_RELAY_HPP
