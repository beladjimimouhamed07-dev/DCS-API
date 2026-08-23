#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMDIClient
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMDIClient
{
public:

    // RVA: 0x1BB | Ordinal: 444
        void FXMDIClient(void);

    // RVA: 0x1BC | Ordinal: 445
        void FXMDIClient(class FX::FXComposite *, unsigned int, int, int, int, int);

    // RVA: 0xAAB | Ordinal: 2732
        void cascade(bool);

    // RVA: 0xBCF | Ordinal: 3024
        void create(void);

    // RVA: 0xF53 | Ordinal: 3924
        void forallDocWindows(class FX::FXObject *, class FX::FXObject *, unsigned int, void *);

    // RVA: 0xF54 | Ordinal: 3925
        void forallDocuments(class FX::FXObject *, unsigned int, void *);

    // RVA: 0xF55 | Ordinal: 3926
        void forallWindows(class FX::FXObject *, unsigned int, void *);

    // RVA: 0xFE6 | Ordinal: 4071
        void getActiveChild(void) const;

    // RVA: 0xFE9 | Ordinal: 4074
        void getActiveDocument(void) const;

    // RVA: 0x103A | Ordinal: 4155
        void getBackImage(void) const;

    // RVA: 0x1077 | Ordinal: 4216
        void getCascadeX(void) const;

    // RVA: 0x1078 | Ordinal: 4217
        void getCascadeY(void) const;

    // RVA: 0x1129 | Ordinal: 4394
        void getDefaultHeight(void);

    // RVA: 0x117F | Ordinal: 4480
        void getDefaultWidth(void);

    // RVA: 0x140D | Ordinal: 5134
        void getMetaClass(void) const;

    // RVA: 0x178D | Ordinal: 6030
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x183F | Ordinal: 6208
        void horizontal(bool);

    // RVA: 0x1A51 | Ordinal: 6738
        void layout(void);

    // RVA: 0x1AFF | Ordinal: 6912
        void load(class FX::FXStream &);

    // RVA: 0x1C4A | Ordinal: 7243
        void manufacture(void);

    // RVA: 0x1F90 | Ordinal: 8081
        void onCmdActivateNext(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F91 | Ordinal: 8082
        void onCmdActivatePrev(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FB1 | Ordinal: 8114
        void onCmdCascade(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2107 | Ordinal: 8456
        void onCmdOthersWindows(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2215 | Ordinal: 8726
        void onCmdTileHorizontal(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2216 | Ordinal: 8727
        void onCmdTileVertical(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x223C | Ordinal: 8765
        void onCmdWindowSelect(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2271 | Ordinal: 8818
        void onDefault(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2472 | Ordinal: 9331
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2559 | Ordinal: 9562
        void onUpdActivateNext(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x255A | Ordinal: 9563
        void onUpdActivatePrev(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2561 | Ordinal: 9570
        void onUpdAnyWindows(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x256D | Ordinal: 9582
        void onUpdCascade(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2571 | Ordinal: 9586
        void onUpdClose(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25B7 | Ordinal: 9656
        void onUpdMaximize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25BA | Ordinal: 9659
        void onUpdMenuClose(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25BC | Ordinal: 9661
        void onUpdMenuMinimize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25BE | Ordinal: 9663
        void onUpdMenuRestore(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25C0 | Ordinal: 9665
        void onUpdMenuWindow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25C3 | Ordinal: 9668
        void onUpdMinimize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25CE | Ordinal: 9679
        void onUpdOthersWindows(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25DC | Ordinal: 9693
        void onUpdRestore(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2602 | Ordinal: 9731
        void onUpdTileHorizontal(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2603 | Ordinal: 9732
        void onUpdTileVertical(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x261D | Ordinal: 9758
        void onUpdWindowSelect(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2830 | Ordinal: 10289
        void save(class FX::FXStream &) const;

    // RVA: 0x2966 | Ordinal: 10599
        void setActiveChild(class FX::FXMDIChild *, bool);

    // RVA: 0x299F | Ordinal: 10656
        void setBackImage(class FX::FXImage *);

    // RVA: 0x29D6 | Ordinal: 10711
        void setCascadeX(int);

    // RVA: 0x29D7 | Ordinal: 10712
        void setCascadeY(int);

    // RVA: 0x2F59 | Ordinal: 12122
        void vertical(bool);

    // RVA: 0x450 | Ordinal: 1105
        void _FXMDIClient(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMDICLIENT_HPP
