#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Application
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Application
{
public:

    // RVA: 0x34 | Ordinal: 53
        void Application(void);

    // RVA: 0x149 | Ordinal: 330
        void addUpdateCallback(class std::shared_ptr<class std::function<void __cdecl(void)>>);

    // RVA: 0x22D | Ordinal: 558
        void createMainWindow(int, int, bool);

    // RVA: 0x242 | Ordinal: 579
        void destroy(void);

    // RVA: 0x273 | Ordinal: 628
        void draw(void);

    // RVA: 0x2F9 | Ordinal: 762
        void get(void);

    // RVA: 0x303 | Ordinal: 772
        void getActive(void) const;

    // RVA: 0x38A | Ordinal: 907
        void getFramerate(void) const;

    // RVA: 0x38B | Ordinal: 908
        void getFullScreen(void) const;

    // RVA: 0x49E | Ordinal: 1183
        void getRunning(void);

    // RVA: 0x4A6 | Ordinal: 1191
        void getScreenshotExtention(void) const;

    // RVA: 0x670 | Ordinal: 1649
        void onActivate(bool);

    // RVA: 0x75A | Ordinal: 1883
        void onQuit(void);

    // RVA: 0x7C4 | Ordinal: 1989
        void processModal(void);

    // RVA: 0x7C9 | Ordinal: 1994
        void quit(void);

    // RVA: 0x822 | Ordinal: 2083
        void removeUpdateCallback(class std::shared_ptr<class std::function<void __cdecl(void)>>);

    // RVA: 0x82F | Ordinal: 2096
        void resetCallbacks(void);

    // RVA: 0x8AD | Ordinal: 2222
        void setFramerate(int);

    // RVA: 0x8F5 | Ordinal: 2294
        void setOnActivateCallback(class std::function<void __cdecl(bool)>);

    // RVA: 0x8F6 | Ordinal: 2295
        void setOnQuitCallback(class std::function<void __cdecl(void)>);

    // RVA: 0x9C4 | Ordinal: 2501
        void update(void);

    // RVA: 0xA35 | Ordinal: 2614
        void windowPlacementInfoInvalidate(void);

    // RVA: 0xD9 | Ordinal: 218
        void _Application(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_APPLICATION_HPP
