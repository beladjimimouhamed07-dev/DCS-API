#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: MultiThreading
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class MultiThreading
{
public:

    // RVA: 0x8F1 | Ordinal: 2290
        void active_MT(void);

    // RVA: 0x8F2 | Ordinal: 2291
        void active_camera(void);

    // RVA: 0x8F3 | Ordinal: 2292
        void active_target_size(void);

    // RVA: 0x948 | Ordinal: 2377
        void annotate_viewport(int, int, int, int);

    // RVA: 0xADC | Ordinal: 2781
        void command_framebuffer_clear(void);

    // RVA: 0xADD | Ordinal: 2782
        void command_stencil_clear(unsigned int);

    // RVA: 0xC0B | Ordinal: 3084
        void flush(void);

    // RVA: 0x112A | Ordinal: 4395
        void hint_for_render(unsigned char, unsigned char);

    // RVA: 0x15D8 | Ordinal: 5593
        void release_orphans(void);

    // RVA: 0x1A12 | Ordinal: 6675
        void submit(class Graphics::RenderObject *);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_MULTITHREADING_HPP
