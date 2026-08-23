#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FmLogger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Logger {

class FmLogger
{
public:

    // RVA: 0x7E | Ordinal: 127
        void FmLogger(class EagleFM::Logger::FmLogger const &);

    // RVA: 0x7F | Ordinal: 128
        void FmLogger(void);

    // RVA: 0x7BC | Ordinal: 1981
        void register_(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class std::function<class ed::basic_string<char> __cdecl(void)>);

    // RVA: 0x9AA | Ordinal: 2475
        void write(class ed::basic_string<char> const &);

    // RVA: 0x1A2 | Ordinal: 419
        void _FmLogger(void);
};

} // namespace Logger
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FMLOGGER_HPP
