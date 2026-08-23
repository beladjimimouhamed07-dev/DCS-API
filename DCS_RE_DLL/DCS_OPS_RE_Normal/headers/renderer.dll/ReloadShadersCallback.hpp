#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: renderer.dll
// Class: ReloadShadersCallback
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class ReloadShadersCallback
{
public:

    // RVA: 0x0 | Ordinal: 1
        void ReloadShadersCallback(void);

    // RVA: 0x7 | Ordinal: 8
        void call(void) const;

    // RVA: 0xC | Ordinal: 13
        void discard(void);

    // RVA: 0x29 | Ordinal: 42
        void setupCallback(class std::function<void __cdecl(void)> const &);

    // RVA: 0x1 | Ordinal: 2
        void _ReloadShadersCallback(void);
};

} // namespace render

// DCS_OPS_RE_RENDERER.DLL_RELOADSHADERSCALLBACK_HPP
