#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui_win_adapter.dll
// Class: ApplicationWin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ApplicationWin
{
public:

    // RVA: 0x0 | Ordinal: 1
        void ApplicationWin(void);

    // RVA: 0x2 | Ordinal: 3
        void activateWindow(void);

    // RVA: 0x3 | Ordinal: 4
        void addMouseScaleListener(class std::function<void __cdecl(class osg::Vec2f const &)>);

    // RVA: 0x4 | Ordinal: 5
        void adjustWindowRect(int, int) const;

    // RVA: 0x5 | Ordinal: 6
        void alignRect(int, int) const;

    // RVA: 0x6 | Ordinal: 7
        void boxMouseCursorToWindowOptionSet(bool);

    // RVA: 0x7 | Ordinal: 8
        void boxMouseCursorToWindow_(bool);

    // RVA: 0x8 | Ordinal: 9
        void clearMouseScaleListeners(void);

    // RVA: 0x9 | Ordinal: 10
        void copyTextToClipboard(class ed::basic_string<wchar_t> const &) const;

    // RVA: 0xA | Ordinal: 11
        void createWindow_(void);

    // RVA: 0xB | Ordinal: 12
        void dispatchInputMessage_(unsigned int, unsigned __int64, __int64, __int64 &);

    // RVA: 0xC | Ordinal: 13
        void dispatchMessage(unsigned int, unsigned __int64, __int64, __int64 &);

    // RVA: 0xD | Ordinal: 14
        void doSetWindowIcon(struct HWND__*, char const *);

    // RVA: 0xE | Ordinal: 15
        void getBorderedWindowStyle_(void) const;

    // RVA: 0xF | Ordinal: 16
        void getCurrentVideoMode(int &, int &, int &);

    // RVA: 0x10 | Ordinal: 17
        void getDriveLetters(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &);

    // RVA: 0x11 | Ordinal: 18
        void getFitToScreen(void) const;

    // RVA: 0x12 | Ordinal: 19
        void getKeyPressed(enum gui::KeyboardButton) const;

    // RVA: 0x13 | Ordinal: 20
        void getMouseButtonPressed(enum gui::MouseButton) const;

    // RVA: 0x14 | Ordinal: 21
        void getMouseCursorPosition(void);

    // RVA: 0x15 | Ordinal: 22
        void getMouseCursorSize(void);

    // RVA: 0x16 | Ordinal: 23
        void getPrimaryMonitorSize(void);

    // RVA: 0x17 | Ordinal: 24
        void getScreenPosition(int &, int &) const;

    // RVA: 0x18 | Ordinal: 25
        void getTextFromClipboard(void) const;

    // RVA: 0x19 | Ordinal: 26
        void getTime(void);

    // RVA: 0x1A | Ordinal: 27
        void getVideoModes(class ed::vector<struct std::pair<int, int>, class ed::allocator<struct std::pair<int, int>>> &);

    // RVA: 0x1B | Ordinal: 28
        void getVirtualMonitors(class ed::vector<class osg::RectImpl<class osg::Vec2i>, class ed::allocator<class osg::RectImpl<class osg::Vec2i>>> &);

    // RVA: 0x1C | Ordinal: 29
        void getVirtualScreenSize(void);

    // RVA: 0x1D | Ordinal: 30
        void getWindowHandle(void) const;

    // RVA: 0x1E | Ordinal: 31
        void getWindowHasCaption(void) const;

    // RVA: 0x1F | Ordinal: 32
        void getWindowIcon(void) const;

    // RVA: 0x20 | Ordinal: 33
        void getWindowVisible(void) const;

    // RVA: 0x21 | Ordinal: 34
        void messageBox(class ed::basic_string<wchar_t> const &, class ed::basic_string<wchar_t> const &);

    // RVA: 0x22 | Ordinal: 35
        void onActivate(bool);

    // RVA: 0x23 | Ordinal: 36
        void onSystemWindowResize(class osg::Vec2i const &);

    // RVA: 0x24 | Ordinal: 37
        void processMessages(void);

    // RVA: 0x25 | Ordinal: 38
        void registerDeviceNotification_(void);

    // RVA: 0x26 | Ordinal: 39
        void registerWindowClass_(void);

    // RVA: 0x27 | Ordinal: 40
        void setCustomMouseCursorBox(int, int, int, int);

    // RVA: 0x28 | Ordinal: 41
        void setLogoPicture(char const *);

    // RVA: 0x29 | Ordinal: 42
        void setMouseCursorClipFunc(class std::function<void __cdecl(struct tagRECT *)>);

    // RVA: 0x2A | Ordinal: 43
        void setTaskbarOverlayIcon(class ed::basic_string<char> const &);

    // RVA: 0x2B | Ordinal: 44
        void setTaskbarProgress(enum gui::Application::SystemTaskbarState, int);

    // RVA: 0x2C | Ordinal: 45
        void setWaitCursor(bool);

    // RVA: 0x2D | Ordinal: 46
        void setWindowIcon(char const *);

    // RVA: 0x2E | Ordinal: 47
        void setWindowText(wchar_t const *);

    // RVA: 0x2F | Ordinal: 48
        void setWndProc(__int64 (__cdecl *)(struct HWND__*, unsigned int, unsigned __int64, __int64));

    // RVA: 0x30 | Ordinal: 49
        void skipBoxMouseCursor(bool);

    // RVA: 0x31 | Ordinal: 50
        void sleep(int);

    // RVA: 0x32 | Ordinal: 51
        void updateWindowFocusWarning(void);

    // RVA: 0x1 | Ordinal: 2
        void _ApplicationWin(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI_WIN_ADAPTER.DLL_APPLICATIONWIN_HPP
