#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformIntegration
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformIntegration
{
public:

    // RVA: 0x245 | Ordinal: 582
        void QPlatformIntegration(void);

    // RVA: 0x94A | Ordinal: 2379
        void accessibility(void) const;

    // RVA: 0xA63 | Ordinal: 2660
        void beep(void) const;

    // RVA: 0xBDF | Ordinal: 3040
        void clipboard(void) const;

    // RVA: 0xCA4 | Ordinal: 3237
        void createForeignWindow(class QWindow *, unsigned __int64) const;

    // RVA: 0xCA8 | Ordinal: 3241
        void createImagePaintEngine(class QPaintDevice *) const;

    // RVA: 0xCBC | Ordinal: 3261
        void createPlatformOffscreenSurface(class QOffscreenSurface *) const;

    // RVA: 0xCBD | Ordinal: 3262
        void createPlatformOpenGLContext(class QOpenGLContext *) const;

    // RVA: 0xCBE | Ordinal: 3263
        void createPlatformPixmap(enum QPlatformPixmap::PixelType) const;

    // RVA: 0xCBF | Ordinal: 3264
        void createPlatformSessionManager(class QString const &, class QString const &) const;

    // RVA: 0xCC0 | Ordinal: 3265
        void createPlatformSharedGraphicsCache(char const *) const;

    // RVA: 0xCC2 | Ordinal: 3267
        void createPlatformTheme(class QString const &) const;

    // RVA: 0xDD9 | Ordinal: 3546
        void defaultWindowState(class QFlags<enum Qt::WindowType>) const;

    // RVA: 0xE18 | Ordinal: 3609
        void destroy(void);

    // RVA: 0xE9A | Ordinal: 3739
        void drag(void) const;

    // RVA: 0x10C1 | Ordinal: 4290
        void fontDatabase(void) const;

    // RVA: 0x4E55 | Ordinal: 20054
        void hasCapability(enum QPlatformIntegration::Capability) const;

    // RVA: 0x4F13 | Ordinal: 20244
        void initialize(void);

    // RVA: 0x4F39 | Ordinal: 20282
        void inputContext(void) const;

    // RVA: 0x5322 | Ordinal: 21283
        void nativeInterface(void) const;

    // RVA: 0x53A2 | Ordinal: 21411
        void openGLModuleType(void);

    // RVA: 0x54AC | Ordinal: 21677
        void possibleKeys(class QKeyEvent const *) const;

    // RVA: 0x5661 | Ordinal: 22114
        void queryKeyboardModifiers(void) const;

    // RVA: 0x5808 | Ordinal: 22537
        void services(void) const;

    // RVA: 0x582E | Ordinal: 22575
        void setApplicationIcon(class QIcon const &) const;

    // RVA: 0x5E34 | Ordinal: 24117
        void styleHint(enum QPlatformIntegration::StyleHint) const;

    // RVA: 0x5E9D | Ordinal: 24222
        void sync(void);

    // RVA: 0x5F28 | Ordinal: 24361
        void themeNames(void) const;

    // RVA: 0x4D1 | Ordinal: 1234
        void _QPlatformIntegration(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMINTEGRATION_HPP
