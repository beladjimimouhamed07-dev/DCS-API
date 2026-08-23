#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXComposeContext
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXComposeContext
{
public:

    // RVA: 0x9C | Ordinal: 157
        void FXComposeContext(void);

    // RVA: 0x9D | Ordinal: 158
        void FXComposeContext(class FX::FXApp *, class FX::FXWindow *, unsigned int);

    // RVA: 0xBAB | Ordinal: 2988
        void create(void);

    // RVA: 0xC68 | Ordinal: 3177
        void destroy(void);

    // RVA: 0xF51 | Ordinal: 3922
        void focusIn(void);

    // RVA: 0xF52 | Ordinal: 3923
        void focusOut(void);

    // RVA: 0x13B7 | Ordinal: 5048
        void getMetaClass(void) const;

    // RVA: 0x1735 | Ordinal: 5942
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BF8 | Ordinal: 7161
        void manufacture(void);

    // RVA: 0x297F | Ordinal: 10624
        void setArea(int, int, int, int);

    // RVA: 0x2AAF | Ordinal: 10928
        void setFont(class FX::FXFont *);

    // RVA: 0x2D16 | Ordinal: 11543
        void setSpot(int, int);

    // RVA: 0x2EC6 | Ordinal: 11975
        void translateEvent(struct tagMSG &);

    // RVA: 0x3DE | Ordinal: 991
        void _FXComposeContext(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOMPOSECONTEXT_HPP
