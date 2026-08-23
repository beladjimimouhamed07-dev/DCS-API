#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ed
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ImGui {

class ed
{
public:

    // RVA: 0x508 | Ordinal: 1289
        void enabled(unsigned int);

    // RVA: 0x50A | Ordinal: 1291
        void frame_begin(void);

    // RVA: 0x50B | Ordinal: 1292
        void frame_end(void);

    // RVA: 0x50C | Ordinal: 1293
        void free_enter(void);

    // RVA: 0x50D | Ordinal: 1294
        void get_font(char const *);

    // RVA: 0x51A | Ordinal: 1307
        void handle_message(struct HWND__*, unsigned int, unsigned __int64, __int64);

    // RVA: 0x51B | Ordinal: 1308
        void init(struct HWND__*, int);

    // RVA: 0x51C | Ordinal: 1309
        void initialized(void);

    // RVA: 0x51F | Ordinal: 1312
        void on_resize(void);

    // RVA: 0x521 | Ordinal: 1314
        void reg(class std::function<enum ImGui::ed::reg_lambda_call_result __cdecl(void)>);

    // RVA: 0x522 | Ordinal: 1315
        void reg_as_tool(char const *, class std::function<enum ImGui::ed::reg_lambda_call_result __cdecl(void)>);

    // RVA: 0x523 | Ordinal: 1316
        void reg_as_tool(char const *, bool, class std::function<enum ImGui::ed::reg_lambda_call_result __cdecl(void)>);

    // RVA: 0x524 | Ordinal: 1317
        void reg_as_tool(char const *, bool, class std::function<enum ImGui::ed::reg_lambda_call_result __cdecl(void)>, class std::function<void __cdecl(bool)>);

    // RVA: 0x525 | Ordinal: 1318
        void registered_user_calls(void);

    // RVA: 0x526 | Ordinal: 1319
        void set_mouse_offset(class osg::Vec2f const &);

    // RVA: 0x527 | Ordinal: 1320
        void set_mouse_scale(class osg::Vec2f const &);

    // RVA: 0x528 | Ordinal: 1321
        void setup_display_size(class osg::Vec2i const &);

    // RVA: 0x529 | Ordinal: 1322
        void shutdown(void);

    // RVA: 0x52C | Ordinal: 1325
        void toImTextureID(class render::Texture const &);

    // RVA: 0x52D | Ordinal: 1326
        void toolbox_allowed(void);

    // RVA: 0x52E | Ordinal: 1327
        void unreg(unsigned int);
};

} // namespace ImGui

// DCS_OPS_RE_IMGUI.DLL_ED_HPP
