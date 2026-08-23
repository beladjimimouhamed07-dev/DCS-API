#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: RockerSwitch
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class RockerSwitch
{
public:

    // RVA: 0x124 | Ordinal: 293
        void RockerSwitch(class EagleFM::Elec::RockerSwitch const &);

    // RVA: 0x125 | Ordinal: 294
        void RockerSwitch(void);

    // RVA: 0x450 | Ordinal: 1105
        void canTransmitTo(class EagleFM::Elec::ItemBase const *) const;

    // RVA: 0x46E | Ordinal: 1135
        void connectAfterMe(class EagleFM::Elec::ItemBase *);

    // RVA: 0x68B | Ordinal: 1676
        void getSignedPos(void) const;

    // RVA: 0x8CE | Ordinal: 2255
        void setPos(int);

    // RVA: 0x8FF | Ordinal: 2304
        void setSignedPos(int);

    // RVA: 0x1D3 | Ordinal: 468
        void _RockerSwitch(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ROCKERSWITCH_HPP
