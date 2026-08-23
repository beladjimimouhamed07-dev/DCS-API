#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: IffTransceiver
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class IffTransceiver
{
public:

    // RVA: 0x65 | Ordinal: 102
        void IffTransceiver(unsigned int, enum wIFFtype);

    // RVA: 0xA4B | Ordinal: 2636
        void checkIfReceiverIsCurrentlyInterrogated(void);

    // RVA: 0xDC1 | Ordinal: 3522
        void getResponceForGivenTarget(unsigned int) const;
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_IFFTRANSCEIVER_HPP
