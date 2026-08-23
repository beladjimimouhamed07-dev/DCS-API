#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: TempFilesManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace CoreUtils {

class TempFilesManager
{
public:

    // RVA: 0x90 | Ordinal: 145
        void TempFilesManager(class CoreUtils::TempFilesManager const &);

    // RVA: 0x91 | Ordinal: 146
        void TempFilesManager(void);

    // RVA: 0x14D | Ordinal: 334
        void addTempFile(class ed::basic_string<char> const &);

    // RVA: 0x210 | Ordinal: 529
        void getTempFileName(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x2B8 | Ordinal: 697
        void newTempFile(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x348 | Ordinal: 841
        void remove_and_clear(void);

    // RVA: 0xD3 | Ordinal: 212
        void _TempFilesManager(void);
};

} // namespace CoreUtils

// DCS_OPS_RE_EDCORE.DLL_TEMPFILESMANAGER_HPP
