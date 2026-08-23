#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: NullLogger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class NullLogger
{
public:

    // RVA: 0x38 | Ordinal: 57
        void NullLogger(class Assimp::NullLogger &&);

    // RVA: 0x39 | Ordinal: 58
        void NullLogger(class Assimp::NullLogger const &);

    // RVA: 0x3A | Ordinal: 59
        void NullLogger(void);

    // RVA: 0x1F8 | Ordinal: 505
        void OnDebug(char const *);

    // RVA: 0x1FA | Ordinal: 507
        void OnError(char const *);

    // RVA: 0x1FC | Ordinal: 509
        void OnInfo(char const *);

    // RVA: 0x1FE | Ordinal: 511
        void OnWarn(char const *);

    // RVA: 0x270 | Ordinal: 625
        void attachStream(class Assimp::LogStream *, unsigned int);

    // RVA: 0x280 | Ordinal: 641
        void detatchStream(class Assimp::LogStream *, unsigned int);

    // RVA: 0x8E | Ordinal: 143
        void _NullLogger(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_NULLLOGGER_HPP
