#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: gui
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class gui
{
public:

    // RVA: 0x1F | Ordinal: 32
        void Align_(struct lua_State *, int, class gui::Align &);

    // RVA: 0x29 | Ordinal: 42
        void Align_(struct lua_State *, class gui::Align const &);

    // RVA: 0x0 | Ordinal: 1
        void GraphicCommandDrawBkg_(void);

    // RVA: 0x1 | Ordinal: 2
        void GraphicCommandDrawCircle_(void);

    // RVA: 0x2 | Ordinal: 3
        void GraphicCommandDrawFunc_(void);

    // RVA: 0x3 | Ordinal: 4
        void GraphicCommandDrawGeometry_(void);

    // RVA: 0x4 | Ordinal: 5
        void GraphicCommandDrawLifeBar_(void);

    // RVA: 0x5 | Ordinal: 6
        void GraphicCommandDrawQuads_(void);

    // RVA: 0x6 | Ordinal: 7
        void GraphicCommandDrawText_(void);

    // RVA: 0x7 | Ordinal: 8
        void GraphicCommandDrawToTarget_(void);

    // RVA: 0x8 | Ordinal: 9
        void GraphicCommandModelViewMatrix_(void);

    // RVA: 0x9 | Ordinal: 10
        void GraphicCommandParse_(void);

    // RVA: 0xA | Ordinal: 11
        void GraphicCommandPopClipRect_(void);

    // RVA: 0xB | Ordinal: 12
        void GraphicCommandPopShaderTechnique_(void);

    // RVA: 0xC | Ordinal: 13
        void GraphicCommandPopViewport_(void);

    // RVA: 0xD | Ordinal: 14
        void GraphicCommandPreMultModelViewMatrix_(void);

    // RVA: 0xE | Ordinal: 15
        void GraphicCommandProjectionMatrix_(void);

    // RVA: 0xF | Ordinal: 16
        void GraphicCommandPushClipRect_(void);

    // RVA: 0x10 | Ordinal: 17
        void GraphicCommandPushShaderTechnique_(void);

    // RVA: 0x11 | Ordinal: 18
        void GraphicCommandPushViewport_(void);

    // RVA: 0x12 | Ordinal: 19
        void GraphicCommandSetModelViewMatrix_(void);

    // RVA: 0x13 | Ordinal: 20
        void GraphicCommandSetOpacity_(void);

    // RVA: 0x14 | Ordinal: 21
        void GraphicCommandSetShaderTechnique_(void);

    // RVA: 0x15 | Ordinal: 22
        void GraphicCommandSetTextureFiltering_(void);

    // RVA: 0x16 | Ordinal: 23
        void GraphicCommandShiftPosition_(void);

    // RVA: 0x21 | Ordinal: 34
        void Insets_(struct lua_State *, int, class gui::Insets &);

    // RVA: 0x2B | Ordinal: 44
        void Insets_(struct lua_State *, class gui::Insets const &);

    // RVA: 0x139 | Ordinal: 314
        void acquireCachedGeometryID(void);

    // RVA: 0x397 | Ordinal: 920
        void getGridRowCallbackType(class ed::basic_string<char> const &);

    // RVA: 0x419 | Ordinal: 1050
        void getKeyboardButtonByName(class ed::basic_string<char> const &);

    // RVA: 0x41A | Ordinal: 1051
        void getKeyboardButtonName(enum gui::KeyboardButton);

    // RVA: 0x41B | Ordinal: 1052
        void getKeyboardCallbackType(class ed::basic_string<char> const &);

    // RVA: 0x454 | Ordinal: 1109
        void getMouseCallbackType(class ed::basic_string<char> const &);

    // RVA: 0x58D | Ordinal: 1422
        void getWidgetCallbackType(class ed::basic_string<char> const &);

    // RVA: 0x7F2 | Ordinal: 2035
        void registerKeyboardButtonsNames(void);

    // RVA: 0x7F5 | Ordinal: 2038
        void releaseCachedGeometryID(unsigned int);

    // RVA: 0x9A8 | Ordinal: 2473
        void submitPolyline(class gui::GraphicCommands *, struct uiPolyLine const &, bool, int);

    // RVA: 0x9A9 | Ordinal: 2474
        void submitPolylineWithCache(class gui::GraphicCommands *, bool &, unsigned int, struct uiPolyLine const &, bool, int);
};

// DCS_OPS_RE_DXGUI.DLL_GUI_HPP
