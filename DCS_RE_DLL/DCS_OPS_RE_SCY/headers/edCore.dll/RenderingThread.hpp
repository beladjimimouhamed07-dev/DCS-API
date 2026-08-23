#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: RenderingThread
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class RenderingThread
{
public:

    // RVA: 0x161 | Ordinal: 354
        void callFunction(class std::function<void __cdecl(void)> const &, char const *);

    // RVA: 0x162 | Ordinal: 355
        void callFunctionWithSync(class std::function<void __cdecl(void)> const &, char const *);

    // RVA: 0x24B | Ordinal: 588
        void inRenderThread(void);

    // RVA: 0x273 | Ordinal: 628
        void isActive(void);

    // RVA: 0x37D | Ordinal: 894
        void setAvailability(bool, class ed::thread::id, class std::function<void __cdecl(bool)>);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_RENDERINGTHREAD_HPP
