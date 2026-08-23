#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLViewer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLViewer
{
public:

    // RVA: 0x15D | Ordinal: 350
        void FXGLViewer(void);

    // RVA: 0x15E | Ordinal: 351
        void FXGLViewer(class FX::FXComposite *, class FX::FXGLContext *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x15F | Ordinal: 352
        void FXGLViewer(class FX::FXComposite *, class FX::FXGLVisual *, class FX::FXGLCanvas *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x160 | Ordinal: 353
        void FXGLViewer(class FX::FXComposite *, class FX::FXGLVisual *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0xBBD | Ordinal: 3006
        void create(void);

    // RVA: 0xCA1 | Ordinal: 3234
        void detach(void);

    // RVA: 0xD09 | Ordinal: 3338
        void doesTurbo(void) const;

    // RVA: 0xD1E | Ordinal: 3359
        void drawAnti(struct FX::FXViewport &);

    // RVA: 0xD53 | Ordinal: 3412
        void drawFeedback(class FX::FXDCPrint &, float const *, int);

    // RVA: 0xD7B | Ordinal: 3452
        void drawLasso(int, int, int, int);

    // RVA: 0xDD7 | Ordinal: 3544
        void drawWorld(struct FX::FXViewport &);

    // RVA: 0xE84 | Ordinal: 3717
        void eyeToScreen(int &, int &, class FX::FXVec3f);

    // RVA: 0xE85 | Ordinal: 3718
        void eyeToWorld(class FX::FXVec3f);

    // RVA: 0xF45 | Ordinal: 3910
        void fitToBounds(class FX::FXRangef const &);

    // RVA: 0x1006 | Ordinal: 4103
        void getAmbientColor(void) const;

    // RVA: 0x103C | Ordinal: 4157
        void getBackgroundColor(bool) const;

    // RVA: 0x1066 | Ordinal: 4199
        void getBoreVector(int, int, class FX::FXVec3f &, class FX::FXVec3f &);

    // RVA: 0x107E | Ordinal: 4223
        void getCenter(void) const;

    // RVA: 0x11C9 | Ordinal: 4554
        void getDistance(void) const;

    // RVA: 0x11EC | Ordinal: 4589
        void getEyePosition(void) const;

    // RVA: 0x11ED | Ordinal: 4590
        void getEyeVector(void) const;

    // RVA: 0x11EF | Ordinal: 4592
        void getFieldOfView(void) const;

    // RVA: 0x1275 | Ordinal: 4726
        void getHelpText(void) const;

    // RVA: 0x12D0 | Ordinal: 4817
        void getInvTransform(void) const;

    // RVA: 0x1335 | Ordinal: 4918
        void getLight(struct FX::FXLight &) const;

    // RVA: 0x135F | Ordinal: 4960
        void getMaterial(struct FX::FXMaterial &) const;

    // RVA: 0x1364 | Ordinal: 4965
        void getMaxHits(void) const;

    // RVA: 0x13EB | Ordinal: 5100
        void getMetaClass(void) const;

    // RVA: 0x14D3 | Ordinal: 5332
        void getOrientation(void) const;

    // RVA: 0x1513 | Ordinal: 5396
        void getProjection(void) const;

    // RVA: 0x1555 | Ordinal: 5462
        void getScale(void) const;

    // RVA: 0x1556 | Ordinal: 5463
        void getScene(void) const;

    // RVA: 0x1597 | Ordinal: 5528
        void getSelection(void) const;

    // RVA: 0x1635 | Ordinal: 5686
        void getTipText(void) const;

    // RVA: 0x1666 | Ordinal: 5735
        void getTransform(void) const;

    // RVA: 0x1669 | Ordinal: 5738
        void getTurboMode(void) const;

    // RVA: 0x1693 | Ordinal: 5780
        void getViewport(struct FX::FXViewport &) const;

    // RVA: 0x16DA | Ordinal: 5851
        void getZSortFunc(void) const)(float *&, int &, int &);

    // RVA: 0x16DB | Ordinal: 5852
        void getZoom(void) const;

    // RVA: 0x16DF | Ordinal: 5856
        void glsetup(void);

    // RVA: 0x176A | Ordinal: 5995
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1897 | Ordinal: 6296
        void initialize(void);

    // RVA: 0x1A3A | Ordinal: 6715
        void lasso(int, int, int, int);

    // RVA: 0x1A46 | Ordinal: 6727
        void layout(void);

    // RVA: 0x1AEA | Ordinal: 6891
        void load(class FX::FXStream &);

    // RVA: 0x1C29 | Ordinal: 7210
        void manufacture(void);

    // RVA: 0x1E9E | Ordinal: 7839
        void modelPix(void) const;

    // RVA: 0x1F60 | Ordinal: 8033
        void onChanged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F71 | Ordinal: 8050
        void onClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F76 | Ordinal: 8055
        void onClipboardGained(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F7C | Ordinal: 8061
        void onClipboardLost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F82 | Ordinal: 8067
        void onClipboardRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F95 | Ordinal: 8086
        void onCmdAmbientColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F98 | Ordinal: 8089
        void onCmdBack(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F9A | Ordinal: 8091
        void onCmdBackColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FA7 | Ordinal: 8104
        void onCmdBottom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FC5 | Ordinal: 8134
        void onCmdCopySel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FF3 | Ordinal: 8180
        void onCmdCutSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2007 | Ordinal: 8200
        void onCmdDeleteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2017 | Ordinal: 8216
        void onCmdDither(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2031 | Ordinal: 8242
        void onCmdFitView(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2032 | Ordinal: 8243
        void onCmdFog(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2033 | Ordinal: 8244
        void onCmdFov(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2034 | Ordinal: 8245
        void onCmdFront(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20B9 | Ordinal: 8378
        void onCmdGradientBackColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20D8 | Ordinal: 8409
        void onCmdLassoSelect(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20D9 | Ordinal: 8410
        void onCmdLassoZoom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20DB | Ordinal: 8412
        void onCmdLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20DC | Ordinal: 8413
        void onCmdLightAmbient(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20DD | Ordinal: 8414
        void onCmdLightDiffuse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20DE | Ordinal: 8415
        void onCmdLightSpecular(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20DF | Ordinal: 8416
        void onCmdLighting(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2109 | Ordinal: 8458
        void onCmdParallel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x210D | Ordinal: 8462
        void onCmdPasteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2111 | Ordinal: 8466
        void onCmdPerspective(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x211A | Ordinal: 8475
        void onCmdPrintImage(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x211B | Ordinal: 8476
        void onCmdPrintVector(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2131 | Ordinal: 8498
        void onCmdResetView(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2135 | Ordinal: 8502
        void onCmdRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2136 | Ordinal: 8503
        void onCmdRollPitchYaw(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2224 | Ordinal: 8741
        void onCmdTop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2225 | Ordinal: 8742
        void onCmdTurbo(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2240 | Ordinal: 8769
        void onCmdXYZDial(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2241 | Ordinal: 8770
        void onCmdXYZScale(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2242 | Ordinal: 8771
        void onCmdZoom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x224F | Ordinal: 8784
        void onDNDDrop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2256 | Ordinal: 8791
        void onDNDEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x225D | Ordinal: 8798
        void onDNDLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2265 | Ordinal: 8806
        void onDNDMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x226F | Ordinal: 8816
        void onDefault(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2273 | Ordinal: 8820
        void onDeleted(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2274 | Ordinal: 8821
        void onDeselected(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x227C | Ordinal: 8829
        void onDoubleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2291 | Ordinal: 8850
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22BB | Ordinal: 8892
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22DF | Ordinal: 8928
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x233B | Ordinal: 9020
        void onInserted(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2347 | Ordinal: 9032
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x236F | Ordinal: 9072
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x238D | Ordinal: 9102
        void onLassoed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2395 | Ordinal: 9110
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23B6 | Ordinal: 9143
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23DE | Ordinal: 9183
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x240B | Ordinal: 9228
        void onMiddleBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2415 | Ordinal: 9238
        void onMiddleBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x242A | Ordinal: 9259
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2448 | Ordinal: 9289
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2466 | Ordinal: 9319
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x249F | Ordinal: 9376
        void onPick(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24AD | Ordinal: 9390
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24CD | Ordinal: 9422
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24EB | Ordinal: 9452
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24F8 | Ordinal: 9465
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2504 | Ordinal: 9477
        void onSelected(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2516 | Ordinal: 9495
        void onSpaceBallMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2520 | Ordinal: 9505
        void onTipTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x252E | Ordinal: 9519
        void onTripleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x253F | Ordinal: 9536
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x255F | Ordinal: 9568
        void onUpdAmbientColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2564 | Ordinal: 9573
        void onUpdBack(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2566 | Ordinal: 9575
        void onUpdBackColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2569 | Ordinal: 9578
        void onUpdBottom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2577 | Ordinal: 9592
        void onUpdCurrent(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x257E | Ordinal: 9599
        void onUpdDeleteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2583 | Ordinal: 9604
        void onUpdDither(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2594 | Ordinal: 9621
        void onUpdFog(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2595 | Ordinal: 9622
        void onUpdFov(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2596 | Ordinal: 9623
        void onUpdFront(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2598 | Ordinal: 9625
        void onUpdGradientBackColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25B1 | Ordinal: 9650
        void onUpdLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25B2 | Ordinal: 9651
        void onUpdLightAmbient(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25B3 | Ordinal: 9652
        void onUpdLightDiffuse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25B4 | Ordinal: 9653
        void onUpdLightSpecular(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25B5 | Ordinal: 9654
        void onUpdLighting(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25D0 | Ordinal: 9681
        void onUpdParallel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25D1 | Ordinal: 9682
        void onUpdPerspective(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25DE | Ordinal: 9695
        void onUpdRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25DF | Ordinal: 9696
        void onUpdRollPitchYaw(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2612 | Ordinal: 9747
        void onUpdTop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2613 | Ordinal: 9748
        void onUpdTurbo(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x261F | Ordinal: 9760
        void onUpdXYZDial(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2620 | Ordinal: 9761
        void onUpdXYZScale(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2622 | Ordinal: 9763
        void onUpdZoom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x266F | Ordinal: 9840
        void pick(int, int);

    // RVA: 0x26CE | Ordinal: 9935
        void processHits(unsigned int *, int);

    // RVA: 0x26F0 | Ordinal: 9969
        void readFeedback(float *&, int &, int &, int, int, int, int);

    // RVA: 0x2700 | Ordinal: 9985
        void readPixels(unsigned int *&, int, int, int, int);

    // RVA: 0x2765 | Ordinal: 10086
        void renderFeedback(float *, int, int, int, int, int);

    // RVA: 0x281B | Ordinal: 10268
        void save(class FX::FXStream &) const;

    // RVA: 0x28C5 | Ordinal: 10438
        void screenToEye(int, int, float);

    // RVA: 0x28C6 | Ordinal: 10439
        void screenToTarget(int, int);

    // RVA: 0x28D4 | Ordinal: 10453
        void select(int, int, int, int);

    // RVA: 0x28DE | Ordinal: 10463
        void selectHits(unsigned int *&, int &, int, int, int, int);

    // RVA: 0x2972 | Ordinal: 10611
        void setAmbientColor(class FX::FXVec4f const &);

    // RVA: 0x29A3 | Ordinal: 10660
        void setBackgroundColor(class FX::FXVec4f const &);

    // RVA: 0x29A4 | Ordinal: 10661
        void setBackgroundColor(class FX::FXVec4f const &, bool);

    // RVA: 0x29C9 | Ordinal: 10698
        void setBounds(class FX::FXRangef const &);

    // RVA: 0x29DD | Ordinal: 10718
        void setCenter(class FX::FXVec3f);

    // RVA: 0x2A5A | Ordinal: 10843
        void setDistance(double);

    // RVA: 0x2A84 | Ordinal: 10885
        void setFieldOfView(double);

    // RVA: 0x2B17 | Ordinal: 11032
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2BBE | Ordinal: 11199
        void setLight(struct FX::FXLight const &);

    // RVA: 0x2BEE | Ordinal: 11247
        void setMaterial(struct FX::FXMaterial const &);

    // RVA: 0x2BF2 | Ordinal: 11251
        void setMaxHits(int);

    // RVA: 0x2C2C | Ordinal: 11309
        void setOp(unsigned int);

    // RVA: 0x2C37 | Ordinal: 11320
        void setOrientation(class FX::FXQuatf);

    // RVA: 0x2C70 | Ordinal: 11377
        void setProjection(unsigned int);

    // RVA: 0x2CA9 | Ordinal: 11434
        void setScale(class FX::FXVec3f);

    // RVA: 0x2CAA | Ordinal: 11435
        void setScene(class FX::FXGLObject *);

    // RVA: 0x2CDA | Ordinal: 11483
        void setSelection(class FX::FXGLObject *);

    // RVA: 0x2D7A | Ordinal: 11643
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DA6 | Ordinal: 11687
        void setTurboMode(bool);

    // RVA: 0x2DE7 | Ordinal: 11752
        void setZSortFunc(bool (__cdecl *)(float *&, int &, int &));

    // RVA: 0x2DE8 | Ordinal: 11753
        void setZoom(double);

    // RVA: 0x2E4D | Ordinal: 11854
        void spherePoint(int, int);

    // RVA: 0x2EC3 | Ordinal: 11972
        void translate(class FX::FXVec3f);

    // RVA: 0x2EE6 | Ordinal: 12007
        void turn(int, int, int, int);

    // RVA: 0x2F18 | Ordinal: 12057
        void updateProjection(void);

    // RVA: 0x2F1B | Ordinal: 12060
        void updateTransform(void);

    // RVA: 0x2FD0 | Ordinal: 12241
        void worldPix(void) const;

    // RVA: 0x2FD1 | Ordinal: 12242
        void worldToEye(class FX::FXVec3f);

    // RVA: 0x2FD2 | Ordinal: 12243
        void worldToEyeZ(class FX::FXVec3f);

    // RVA: 0x2FD3 | Ordinal: 12244
        void worldVector(int, int, int, int);

    // RVA: 0x424 | Ordinal: 1061
        void _FXGLViewer(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLVIEWER_HPP
