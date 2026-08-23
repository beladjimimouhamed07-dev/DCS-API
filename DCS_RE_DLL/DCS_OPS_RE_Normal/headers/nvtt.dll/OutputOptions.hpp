#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: nvtt.dll
// Class: OutputOptions
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace nvtt {

class OutputOptions
{
public:

    // RVA: 0x5 | Ordinal: 6
        void OutputOptions(void);

    // RVA: 0x62 | Ordinal: 99
        void reset(void);

    // RVA: 0x75 | Ordinal: 118
        void setContainer(enum nvtt::Container);

    // RVA: 0x77 | Ordinal: 120
        void setErrorHandler(struct nvtt::ErrorHandler *);

    // RVA: 0x79 | Ordinal: 122
        void setFileHandle(void *);

    // RVA: 0x7A | Ordinal: 123
        void setFileName(char const *);

    // RVA: 0x8C | Ordinal: 141
        void setOutputHandler(struct nvtt::OutputHandler *);

    // RVA: 0x8D | Ordinal: 142
        void setOutputHeader(bool);

    // RVA: 0x95 | Ordinal: 150
        void setSrgbFlag(bool);

    // RVA: 0x99 | Ordinal: 154
        void setUserVersion(int);

    // RVA: 0xC | Ordinal: 13
        void _OutputOptions(void);
};

} // namespace nvtt

// DCS_OPS_RE_NVTT.DLL_OUTPUTOPTIONS_HPP
