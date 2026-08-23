#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: MouseCursorManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MouseCursorManager
{
public:

    // RVA: 0x17 | Ordinal: 24
        void MouseCursorManager(struct HWND__*);

    // RVA: 0x88 | Ordinal: 137
        void activateMouseCursorOwner(class MouseCursorOwner *);

    // RVA: 0xAA | Ordinal: 171
        void clipCursor(struct tagRECT *);

    // RVA: 0xAD | Ordinal: 174
        void create(struct HWND__*);

    // RVA: 0xB3 | Ordinal: 180
        void deactivateMouseCursorOwner(class MouseCursorOwner *);

    // RVA: 0xB6 | Ordinal: 183
        void destroy(void);

    // RVA: 0xBE | Ordinal: 191
        void drawMouseCursor(class osg::Vec2i const *);

    // RVA: 0xC2 | Ordinal: 195
        void forceMouseCursorPosition(class osg::Vec2i const &);

    // RVA: 0xC3 | Ordinal: 196
        void forceSystemCursorShow(bool);

    // RVA: 0xC4 | Ordinal: 197
        void get(void);

    // RVA: 0xC8 | Ordinal: 201
        void getActiveMouseCursorOwner_(void) const;

    // RVA: 0xCC | Ordinal: 205
        void getAutonomousMode(void) const;

    // RVA: 0xD7 | Ordinal: 216
        void getCursorTextureName(enum MouseCursorShape);

    // RVA: 0xE5 | Ordinal: 230
        void getMouseCursorPosition(void) const;

    // RVA: 0xE8 | Ordinal: 233
        void getMouseScale(void);

    // RVA: 0xF6 | Ordinal: 247
        void getSoftwareMode(void) const;

    // RVA: 0xFF | Ordinal: 256
        void hideCursor_(void);

    // RVA: 0x10D | Ordinal: 270
        void isMouseCursorVisible(void) const;

    // RVA: 0x13D | Ordinal: 318
        void setAutonomousMode(bool);

    // RVA: 0x16A | Ordinal: 363
        void setMouseCursorPosition(class MouseCursorOwner *, class osg::Vec2i const &);

    // RVA: 0x16C | Ordinal: 365
        void setMouseCursorShape(class MouseCursorOwner *);

    // RVA: 0x16E | Ordinal: 367
        void setMouseCursorShape_(void);

    // RVA: 0x16F | Ordinal: 368
        void setMouseCursorVisible(class MouseCursorOwner *);

    // RVA: 0x170 | Ordinal: 369
        void setMouseCursorVisible_(void);

    // RVA: 0x171 | Ordinal: 370
        void setMouseScale(class osg::Vec2f const &);

    // RVA: 0x17C | Ordinal: 381
        void setSoftwareMode(bool);

    // RVA: 0x185 | Ordinal: 390
        void showCursor_(void);

    // RVA: 0x190 | Ordinal: 401
        void updateInvisibleMouseCursorPosition(void);

    // RVA: 0x28 | Ordinal: 41
        void _MouseCursorManager(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_MOUSECURSORMANAGER_HPP
