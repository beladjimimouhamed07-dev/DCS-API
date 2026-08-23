#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccMouseHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccMouseHandler
{
public:

    // RVA: 0x210 | Ordinal: 529
        void ccMouseHandler(void);

    // RVA: 0xA45 | Ordinal: 2630
        void checkAutoHideCursor_(void);

    // RVA: 0xB4F | Ordinal: 2896
        void cursorIsVisible(void) const;

    // RVA: 0xB72 | Ordinal: 2931
        void dispatchAnalog_(int, double);

    // RVA: 0xB73 | Ordinal: 2932
        void dispatchDigital_(int);

    // RVA: 0xB90 | Ordinal: 2961
        void drawRayCursor(class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0xB91 | Ordinal: 2962
        void drawTooltipVR(void);

    // RVA: 0xEF5 | Ordinal: 3830
        void get_current_item_last_action(void) const;

    // RVA: 0xEF6 | Ordinal: 3831
        void get_current_item_type(void) const;

    // RVA: 0x1024 | Ordinal: 4133
        void get_predefined_cursor_mode(void) const;

    // RVA: 0x1124 | Ordinal: 4389
        void hideCursor_(void);

    // RVA: 0x1290 | Ordinal: 4753
        void isVisible(void) const;

    // RVA: 0x140E | Ordinal: 5135
        void mouseButtonCommand_(int);

    // RVA: 0x1440 | Ordinal: 5185
        void onFrameUpdate(void);

    // RVA: 0x1444 | Ordinal: 5189
        void onLButtonDblclk(int, int);

    // RVA: 0x1445 | Ordinal: 5190
        void onLButtonDown(int, int);

    // RVA: 0x1446 | Ordinal: 5191
        void onLButtonUp(int, int);

    // RVA: 0x1449 | Ordinal: 5194
        void onMiddleButtonDblclk(int, int);

    // RVA: 0x144A | Ordinal: 5195
        void onMouseMove(int, int);

    // RVA: 0x144B | Ordinal: 5196
        void onMouseWheel(int, int, int);

    // RVA: 0x1453 | Ordinal: 5204
        void onRButtonDblclk(int, int);

    // RVA: 0x1454 | Ordinal: 5205
        void onRButtonDown(int, int);

    // RVA: 0x1455 | Ordinal: 5206
        void onRButtonUp(int, int);

    // RVA: 0x14AD | Ordinal: 5294
        void perform_update(void);

    // RVA: 0x14B1 | Ordinal: 5298
        void pingCursor(void);

    // RVA: 0x16CD | Ordinal: 5838
        void setCursorMode(unsigned int);

    // RVA: 0x16CE | Ordinal: 5839
        void setCursorX(float);

    // RVA: 0x16CF | Ordinal: 5840
        void setCursorY(float);

    // RVA: 0x17FF | Ordinal: 6144
        void setVisible(bool);

    // RVA: 0x197F | Ordinal: 6528
        void showCursor_(void);

    // RVA: 0x1AEF | Ordinal: 6896
        void update(double);

    // RVA: 0x1B0B | Ordinal: 6924
        void updateCursor_(void);

    // RVA: 0x1B17 | Ordinal: 6936
        void updateHint_(void);

    // RVA: 0x1B32 | Ordinal: 6963
        void updateVisible_(bool);

    // RVA: 0x388 | Ordinal: 905
        void _ccMouseHandler(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCMOUSEHANDLER_HPP
