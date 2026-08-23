#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: MouseCursorOwner
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MouseCursorOwner
{
public:

    // RVA: 0x18 | Ordinal: 25
        void MouseCursorOwner(class MouseCursorOwner const &);

    // RVA: 0x19 | Ordinal: 26
        void MouseCursorOwner(enum MouseCursorShape, char const *);

    // RVA: 0x87 | Ordinal: 136
        void activate(void);

    // RVA: 0xB2 | Ordinal: 179
        void deactivate(void);

    // RVA: 0xE6 | Ordinal: 231
        void getMouseCursorShape(void) const;

    // RVA: 0xE7 | Ordinal: 232
        void getMouseCursorVisible(void) const;

    // RVA: 0xEF | Ordinal: 240
        void getPriority(void) const;

    // RVA: 0x100 | Ordinal: 257
        void hideMouseCursor(void);

    // RVA: 0x16B | Ordinal: 364
        void setMouseCursorPosition(class osg::Vec2i const &);

    // RVA: 0x16D | Ordinal: 366
        void setMouseCursorShape(enum MouseCursorShape);

    // RVA: 0x178 | Ordinal: 377
        void setPriority(enum MouseCursorOwner::MouseCursorOwnerPriority);

    // RVA: 0x186 | Ordinal: 391
        void showMouseCursor(void);

    // RVA: 0x29 | Ordinal: 42
        void _MouseCursorOwner(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_MOUSECURSOROWNER_HPP
