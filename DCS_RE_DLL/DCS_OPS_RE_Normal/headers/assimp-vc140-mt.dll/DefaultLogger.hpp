#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: DefaultLogger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class DefaultLogger
{
public:

    // RVA: 0x12 | Ordinal: 19
        void DefaultLogger(enum Assimp::Logger::LogSeverity);

    // RVA: 0x13 | Ordinal: 20
        void DefaultLogger(class Assimp::DefaultLogger const &);

    // RVA: 0x1BD | Ordinal: 446
        void GetThreadID(void);

    // RVA: 0x1F7 | Ordinal: 504
        void OnDebug(char const *);

    // RVA: 0x1F9 | Ordinal: 506
        void OnError(char const *);

    // RVA: 0x1FB | Ordinal: 508
        void OnInfo(char const *);

    // RVA: 0x1FD | Ordinal: 510
        void OnWarn(char const *);

    // RVA: 0x265 | Ordinal: 614
        void WriteToStreams(char const *, enum Assimp::Logger::ErrorSeverity);

    // RVA: 0x26F | Ordinal: 624
        void attachStream(class Assimp::LogStream *, unsigned int);

    // RVA: 0x278 | Ordinal: 633
        void create(char const *, enum Assimp::Logger::LogSeverity, unsigned int, class Assimp::IOSystem *);

    // RVA: 0x27F | Ordinal: 640
        void detatchStream(class Assimp::LogStream *, unsigned int);

    // RVA: 0x28A | Ordinal: 651
        void get(void);

    // RVA: 0x2C4 | Ordinal: 709
        void isNullLogger(void);

    // RVA: 0x2C6 | Ordinal: 711
        void kill(void);

    // RVA: 0x2E6 | Ordinal: 743
        void set(class Assimp::Logger *);

    // RVA: 0x7B | Ordinal: 124
        void _DefaultLogger(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_DEFAULTLOGGER_HPP
