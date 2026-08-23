#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: LogStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class LogStream
{
public:

    // RVA: 0x2F | Ordinal: 48
        void LogStream(void);

    // RVA: 0x30 | Ordinal: 49
        void LogStream(class Assimp::LogStream const &);

    // RVA: 0x279 | Ordinal: 634
        void createDefaultStream(enum aiDefaultLogStream, char const *, class Assimp::IOSystem *);

    // RVA: 0x8A | Ordinal: 139
        void _LogStream(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_LOGSTREAM_HPP
