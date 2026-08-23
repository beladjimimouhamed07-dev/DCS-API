#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: metaShader.dll
// Class: ReloadMetaShadersCallback
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class ReloadMetaShadersCallback
{
public:

    // RVA: 0x10 | Ordinal: 17
        void ReloadMetaShadersCallback(void);

    // RVA: 0x26 | Ordinal: 39
        void call(void) const;

    // RVA: 0x2B | Ordinal: 44
        void discard(void);

    // RVA: 0x55 | Ordinal: 86
        void setupCallback(class std::function<void __cdecl(void)> const &);

    // RVA: 0x15 | Ordinal: 22
        void _ReloadMetaShadersCallback(void);
};

} // namespace render

// DCS_OPS_RE_METASHADER.DLL_RELOADMETASHADERSCALLBACK_HPP
