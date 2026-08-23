#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: IDriver
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edvfs {

class IDriver
{
public:

    // RVA: 0x5B | Ordinal: 92
        void IDriver(unsigned __int64, char const *, char const *, char const *, char const *);

    // RVA: 0x155 | Ordinal: 342
        void aquireMount(void);

    // RVA: 0x247 | Ordinal: 584
        void id(void) const;

    // RVA: 0x2A9 | Ordinal: 682
        void mountPoint(void) const;

    // RVA: 0x2D0 | Ordinal: 721
        void originalSource(void) const;

    // RVA: 0x338 | Ordinal: 825
        void releaseMount(void);

    // RVA: 0x3AC | Ordinal: 941
        void source(void) const;

    // RVA: 0x3C0 | Ordinal: 961
        void tag(void) const;
};

} // namespace edvfs

// DCS_OPS_RE_EDCORE.DLL_IDRIVER_HPP
