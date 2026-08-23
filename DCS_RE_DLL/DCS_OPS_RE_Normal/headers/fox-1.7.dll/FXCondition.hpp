#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCondition
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCondition
{
public:

    // RVA: 0xA2 | Ordinal: 163
        void FXCondition(void);

    // RVA: 0xA72 | Ordinal: 2675
        void broadcast(void);

    // RVA: 0x2E2E | Ordinal: 11823
        void signal(void);

    // RVA: 0x2F6B | Ordinal: 12140
        void wait(class FX::FXMutex &);

    // RVA: 0x2F6C | Ordinal: 12141
        void wait(class FX::FXMutex &, __int64);

    // RVA: 0x3E0 | Ordinal: 993
        void _FXCondition(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCONDITION_HPP
