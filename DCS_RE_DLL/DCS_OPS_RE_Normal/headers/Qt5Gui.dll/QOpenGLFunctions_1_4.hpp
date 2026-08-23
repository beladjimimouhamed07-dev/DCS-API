#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_1_4
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_1_4
{
public:

    // RVA: 0x1B3 | Ordinal: 436
        void QOpenGLFunctions_1_4(void);

    // RVA: 0x11BC | Ordinal: 4541
        void glAccum(unsigned int, float);

    // RVA: 0x11D6 | Ordinal: 4567
        void glActiveTexture(unsigned int);

    // RVA: 0x11F0 | Ordinal: 4593
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x1200 | Ordinal: 4609
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x1210 | Ordinal: 4625
        void glArrayElement(int);

    // RVA: 0x1237 | Ordinal: 4664
        void glBegin(unsigned int);

    // RVA: 0x1359 | Ordinal: 4954
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x13A4 | Ordinal: 5029
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13B5 | Ordinal: 5046
        void glBlendColor(float, float, float, float);

    // RVA: 0x13CE | Ordinal: 5071
        void glBlendEquation(unsigned int);

    // RVA: 0x1418 | Ordinal: 5145
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x142F | Ordinal: 5168
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x14A8 | Ordinal: 5289
        void glCallList(unsigned int);

    // RVA: 0x14B9 | Ordinal: 5306
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14F2 | Ordinal: 5363
        void glClear(unsigned int);

    // RVA: 0x150C | Ordinal: 5389
        void glClearAccum(float, float, float, float);

    // RVA: 0x1576 | Ordinal: 5495
        void glClearColor(float, float, float, float);

    // RVA: 0x1590 | Ordinal: 5521
        void glClearDepth(double);

    // RVA: 0x15B5 | Ordinal: 5558
        void glClearIndex(float);

    // RVA: 0x15D3 | Ordinal: 5588
        void glClearStencil(int);

    // RVA: 0x15F2 | Ordinal: 5619
        void glClientActiveTexture(unsigned int);

    // RVA: 0x1616 | Ordinal: 5655
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x1627 | Ordinal: 5672
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x1638 | Ordinal: 5689
        void glColor3bv(signed char const *);

    // RVA: 0x1649 | Ordinal: 5706
        void glColor3d(double, double, double);

    // RVA: 0x165A | Ordinal: 5723
        void glColor3dv(double const *);

    // RVA: 0x166B | Ordinal: 5740
        void glColor3f(float, float, float);

    // RVA: 0x167C | Ordinal: 5757
        void glColor3fv(float const *);

    // RVA: 0x168D | Ordinal: 5774
        void glColor3i(int, int, int);

    // RVA: 0x169E | Ordinal: 5791
        void glColor3iv(int const *);

    // RVA: 0x16AF | Ordinal: 5808
        void glColor3s(short, short, short);

    // RVA: 0x16C0 | Ordinal: 5825
        void glColor3sv(short const *);

    // RVA: 0x16D1 | Ordinal: 5842
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16E2 | Ordinal: 5859
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16F3 | Ordinal: 5876
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1704 | Ordinal: 5893
        void glColor3uiv(unsigned int const *);

    // RVA: 0x1715 | Ordinal: 5910
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x1726 | Ordinal: 5927
        void glColor3usv(unsigned short const *);

    // RVA: 0x1737 | Ordinal: 5944
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x1748 | Ordinal: 5961
        void glColor4bv(signed char const *);

    // RVA: 0x1759 | Ordinal: 5978
        void glColor4d(double, double, double, double);

    // RVA: 0x176A | Ordinal: 5995
        void glColor4dv(double const *);

    // RVA: 0x177B | Ordinal: 6012
        void glColor4f(float, float, float, float);

    // RVA: 0x178C | Ordinal: 6029
        void glColor4fv(float const *);

    // RVA: 0x179D | Ordinal: 6046
        void glColor4i(int, int, int, int);

    // RVA: 0x17AE | Ordinal: 6063
        void glColor4iv(int const *);

    // RVA: 0x17BF | Ordinal: 6080
        void glColor4s(short, short, short, short);

    // RVA: 0x17D0 | Ordinal: 6097
        void glColor4sv(short const *);

    // RVA: 0x17E1 | Ordinal: 6114
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17F2 | Ordinal: 6131
        void glColor4ubv(unsigned char const *);

    // RVA: 0x1803 | Ordinal: 6148
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1814 | Ordinal: 6165
        void glColor4uiv(unsigned int const *);

    // RVA: 0x1825 | Ordinal: 6182
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x1836 | Ordinal: 6199
        void glColor4usv(unsigned short const *);

    // RVA: 0x1848 | Ordinal: 6217
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1875 | Ordinal: 6262
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x18B5 | Ordinal: 6326
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18C4 | Ordinal: 6341
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18D3 | Ordinal: 6356
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18E2 | Ordinal: 6371
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18F1 | Ordinal: 6386
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1914 | Ordinal: 6421
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x192C | Ordinal: 6445
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1944 | Ordinal: 6469
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x195B | Ordinal: 6492
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1973 | Ordinal: 6516
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x198B | Ordinal: 6540
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19A9 | Ordinal: 6570
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19B8 | Ordinal: 6585
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19C7 | Ordinal: 6600
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19D6 | Ordinal: 6615
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19E5 | Ordinal: 6630
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19F4 | Ordinal: 6645
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A15 | Ordinal: 6678
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A24 | Ordinal: 6693
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A33 | Ordinal: 6708
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A42 | Ordinal: 6723
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A5C | Ordinal: 6749
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A6C | Ordinal: 6765
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A86 | Ordinal: 6791
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1A9F | Ordinal: 6816
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AB9 | Ordinal: 6842
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AD2 | Ordinal: 6867
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1B3A | Ordinal: 6971
        void glCullFace(unsigned int);

    // RVA: 0x1B8C | Ordinal: 7053
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1C1B | Ordinal: 7196
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C56 | Ordinal: 7255
        void glDepthFunc(unsigned int);

    // RVA: 0x1C71 | Ordinal: 7282
        void glDepthMask(unsigned char);

    // RVA: 0x1C8B | Ordinal: 7308
        void glDepthRange(double, double);

    // RVA: 0x1CDA | Ordinal: 7387
        void glDisable(unsigned int);

    // RVA: 0x1CF3 | Ordinal: 7412
        void glDisableClientState(unsigned int);

    // RVA: 0x1D3D | Ordinal: 7486
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D7E | Ordinal: 7551
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DAD | Ordinal: 7598
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E18 | Ordinal: 7705
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E28 | Ordinal: 7721
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E7B | Ordinal: 7804
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E8B | Ordinal: 7820
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1E9C | Ordinal: 7837
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EAE | Ordinal: 7855
        void glEnable(unsigned int);

    // RVA: 0x1EC7 | Ordinal: 7880
        void glEnableClientState(unsigned int);

    // RVA: 0x1F02 | Ordinal: 7939
        void glEnd(void);

    // RVA: 0x1F25 | Ordinal: 7974
        void glEndList(void);

    // RVA: 0x1F6B | Ordinal: 8044
        void glEvalCoord1d(double);

    // RVA: 0x1F7C | Ordinal: 8061
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F8D | Ordinal: 8078
        void glEvalCoord1f(float);

    // RVA: 0x1F9E | Ordinal: 8095
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FAF | Ordinal: 8112
        void glEvalCoord2d(double, double);

    // RVA: 0x1FC0 | Ordinal: 8129
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FD1 | Ordinal: 8146
        void glEvalCoord2f(float, float);

    // RVA: 0x1FE2 | Ordinal: 8163
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FF3 | Ordinal: 8180
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x2004 | Ordinal: 8197
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x2015 | Ordinal: 8214
        void glEvalPoint1(int);

    // RVA: 0x2026 | Ordinal: 8231
        void glEvalPoint2(int, int);

    // RVA: 0x2037 | Ordinal: 8248
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x205A | Ordinal: 8283
        void glFinish(void);

    // RVA: 0x2075 | Ordinal: 8310
        void glFlush(void);

    // RVA: 0x20A0 | Ordinal: 8353
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20AD | Ordinal: 8366
        void glFogCoordd(double);

    // RVA: 0x20BA | Ordinal: 8379
        void glFogCoorddv(double const *);

    // RVA: 0x20C7 | Ordinal: 8392
        void glFogCoordf(float);

    // RVA: 0x20D4 | Ordinal: 8405
        void glFogCoordfv(float const *);

    // RVA: 0x20E5 | Ordinal: 8422
        void glFogf(unsigned int, float);

    // RVA: 0x20F6 | Ordinal: 8439
        void glFogfv(unsigned int, float const *);

    // RVA: 0x2107 | Ordinal: 8456
        void glFogi(unsigned int, int);

    // RVA: 0x2118 | Ordinal: 8473
        void glFogiv(unsigned int, int const *);

    // RVA: 0x21A0 | Ordinal: 8609
        void glFrontFace(unsigned int);

    // RVA: 0x21BA | Ordinal: 8635
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21F4 | Ordinal: 8693
        void glGenLists(int);

    // RVA: 0x2248 | Ordinal: 8777
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2372 | Ordinal: 9075
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x23DF | Ordinal: 9184
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23EE | Ordinal: 9199
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x23FD | Ordinal: 9214
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x240C | Ordinal: 9229
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x241A | Ordinal: 9243
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2436 | Ordinal: 9271
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2445 | Ordinal: 9286
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2454 | Ordinal: 9301
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2474 | Ordinal: 9333
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x248F | Ordinal: 9360
        void glGetError(void);

    // RVA: 0x24B4 | Ordinal: 9397
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x250A | Ordinal: 9483
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2519 | Ordinal: 9498
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2528 | Ordinal: 9513
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x256F | Ordinal: 9584
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2598 | Ordinal: 9625
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25A9 | Ordinal: 9642
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25BA | Ordinal: 9659
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25CB | Ordinal: 9676
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25DC | Ordinal: 9693
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25ED | Ordinal: 9710
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x25FE | Ordinal: 9727
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x260D | Ordinal: 9742
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x261C | Ordinal: 9757
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x262B | Ordinal: 9772
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2665 | Ordinal: 9830
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x2676 | Ordinal: 9847
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x2687 | Ordinal: 9864
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x2698 | Ordinal: 9881
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26B0 | Ordinal: 9905
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x27F7 | Ordinal: 10232
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2853 | Ordinal: 10324
        void glGetString(unsigned int);

    // RVA: 0x28A9 | Ordinal: 10410
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28BA | Ordinal: 10427
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28CB | Ordinal: 10444
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28DC | Ordinal: 10461
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28ED | Ordinal: 10478
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x28FE | Ordinal: 10495
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2919 | Ordinal: 10522
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2934 | Ordinal: 10549
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2975 | Ordinal: 10614
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2990 | Ordinal: 10641
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2B06 | Ordinal: 11015
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B1E | Ordinal: 11039
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B2F | Ordinal: 11056
        void glIndexMask(unsigned int);

    // RVA: 0x2B3F | Ordinal: 11072
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B50 | Ordinal: 11089
        void glIndexd(double);

    // RVA: 0x2B61 | Ordinal: 11106
        void glIndexdv(double const *);

    // RVA: 0x2B72 | Ordinal: 11123
        void glIndexf(float);

    // RVA: 0x2B83 | Ordinal: 11140
        void glIndexfv(float const *);

    // RVA: 0x2B94 | Ordinal: 11157
        void glIndexi(int);

    // RVA: 0x2BA5 | Ordinal: 11174
        void glIndexiv(int const *);

    // RVA: 0x2BB6 | Ordinal: 11191
        void glIndexs(short);

    // RVA: 0x2BC7 | Ordinal: 11208
        void glIndexsv(short const *);

    // RVA: 0x2BD7 | Ordinal: 11224
        void glIndexub(unsigned char);

    // RVA: 0x2BEE | Ordinal: 11247
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C06 | Ordinal: 11271
        void glInitNames(void);

    // RVA: 0x2C16 | Ordinal: 11287
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C69 | Ordinal: 11370
        void glIsEnabled(unsigned int);

    // RVA: 0x2CA9 | Ordinal: 11434
        void glIsList(unsigned int);

    // RVA: 0x2D38 | Ordinal: 11577
        void glIsTexture(unsigned int);

    // RVA: 0x2D72 | Ordinal: 11635
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D83 | Ordinal: 11652
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D94 | Ordinal: 11669
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DA5 | Ordinal: 11686
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DB6 | Ordinal: 11703
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DC7 | Ordinal: 11720
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DD8 | Ordinal: 11737
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DE9 | Ordinal: 11754
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2DFA | Ordinal: 11771
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E0C | Ordinal: 11789
        void glLineWidth(float);

    // RVA: 0x2E3B | Ordinal: 11836
        void glListBase(unsigned int);

    // RVA: 0x2E4C | Ordinal: 11853
        void glLoadIdentity(void);

    // RVA: 0x2E5D | Ordinal: 11870
        void glLoadMatrixd(double const *);

    // RVA: 0x2E6E | Ordinal: 11887
        void glLoadMatrixf(float const *);

    // RVA: 0x2E7F | Ordinal: 11904
        void glLoadName(unsigned int);

    // RVA: 0x2E8D | Ordinal: 11918
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2E9B | Ordinal: 11932
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EAC | Ordinal: 11949
        void glLogicOp(unsigned int);

    // RVA: 0x2EC6 | Ordinal: 11975
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2ED7 | Ordinal: 11992
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EE8 | Ordinal: 12009
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2EF9 | Ordinal: 12026
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F33 | Ordinal: 12084
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F44 | Ordinal: 12101
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F55 | Ordinal: 12118
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F66 | Ordinal: 12135
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F7B | Ordinal: 12156
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F8C | Ordinal: 12173
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2F9D | Ordinal: 12190
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FAE | Ordinal: 12207
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FBF | Ordinal: 12224
        void glMatrixMode(unsigned int);

    // RVA: 0x2FE7 | Ordinal: 12264
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x2FF8 | Ordinal: 12281
        void glMultMatrixd(double const *);

    // RVA: 0x3009 | Ordinal: 12298
        void glMultMatrixf(float const *);

    // RVA: 0x3017 | Ordinal: 12312
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x3025 | Ordinal: 12326
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x3032 | Ordinal: 12339
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x304E | Ordinal: 12367
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x307B | Ordinal: 12412
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x3089 | Ordinal: 12426
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x3097 | Ordinal: 12440
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30A5 | Ordinal: 12454
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30B3 | Ordinal: 12468
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30C1 | Ordinal: 12482
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30CF | Ordinal: 12496
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30DD | Ordinal: 12510
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30EB | Ordinal: 12524
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x30F9 | Ordinal: 12538
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x3107 | Ordinal: 12552
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x3115 | Ordinal: 12566
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x3123 | Ordinal: 12580
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x3131 | Ordinal: 12594
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x313F | Ordinal: 12608
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x314D | Ordinal: 12622
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x315B | Ordinal: 12636
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x3169 | Ordinal: 12650
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x3177 | Ordinal: 12664
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x3185 | Ordinal: 12678
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x3193 | Ordinal: 12692
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31A1 | Ordinal: 12706
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31AF | Ordinal: 12720
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31BD | Ordinal: 12734
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31CB | Ordinal: 12748
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31D9 | Ordinal: 12762
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31E7 | Ordinal: 12776
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31F5 | Ordinal: 12790
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x3203 | Ordinal: 12804
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x3211 | Ordinal: 12818
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x321F | Ordinal: 12832
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x322D | Ordinal: 12846
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x32B6 | Ordinal: 12983
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32C7 | Ordinal: 13000
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32D8 | Ordinal: 13017
        void glNormal3bv(signed char const *);

    // RVA: 0x32E9 | Ordinal: 13034
        void glNormal3d(double, double, double);

    // RVA: 0x32FA | Ordinal: 13051
        void glNormal3dv(double const *);

    // RVA: 0x330B | Ordinal: 13068
        void glNormal3f(float, float, float);

    // RVA: 0x331C | Ordinal: 13085
        void glNormal3fv(float const *);

    // RVA: 0x332D | Ordinal: 13102
        void glNormal3i(int, int, int);

    // RVA: 0x333E | Ordinal: 13119
        void glNormal3iv(int const *);

    // RVA: 0x334F | Ordinal: 13136
        void glNormal3s(short, short, short);

    // RVA: 0x3360 | Ordinal: 13153
        void glNormal3sv(short const *);

    // RVA: 0x3388 | Ordinal: 13193
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33A3 | Ordinal: 13220
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33B4 | Ordinal: 13237
        void glPassThrough(float);

    // RVA: 0x33EB | Ordinal: 13292
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x33FC | Ordinal: 13309
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x340D | Ordinal: 13326
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x341E | Ordinal: 13343
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3439 | Ordinal: 13370
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3453 | Ordinal: 13396
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x3464 | Ordinal: 13413
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x3475 | Ordinal: 13430
        void glPixelZoom(float, float);

    // RVA: 0x3482 | Ordinal: 13443
        void glPointParameterf(unsigned int, float);

    // RVA: 0x3498 | Ordinal: 13465
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34AE | Ordinal: 13487
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34C4 | Ordinal: 13509
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34DE | Ordinal: 13535
        void glPointSize(float);

    // RVA: 0x34F8 | Ordinal: 13561
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3512 | Ordinal: 13587
        void glPolygonOffset(float, float);

    // RVA: 0x352C | Ordinal: 13613
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x353D | Ordinal: 13630
        void glPopAttrib(void);

    // RVA: 0x354D | Ordinal: 13646
        void glPopClientAttrib(void);

    // RVA: 0x3563 | Ordinal: 13668
        void glPopMatrix(void);

    // RVA: 0x3574 | Ordinal: 13685
        void glPopName(void);

    // RVA: 0x3596 | Ordinal: 13719
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37E2 | Ordinal: 14307
        void glPushAttrib(unsigned int);

    // RVA: 0x37F2 | Ordinal: 14323
        void glPushClientAttrib(unsigned int);

    // RVA: 0x3808 | Ordinal: 14345
        void glPushMatrix(void);

    // RVA: 0x3819 | Ordinal: 14362
        void glPushName(unsigned int);

    // RVA: 0x3838 | Ordinal: 14393
        void glRasterPos2d(double, double);

    // RVA: 0x3849 | Ordinal: 14410
        void glRasterPos2dv(double const *);

    // RVA: 0x385A | Ordinal: 14427
        void glRasterPos2f(float, float);

    // RVA: 0x386B | Ordinal: 14444
        void glRasterPos2fv(float const *);

    // RVA: 0x387C | Ordinal: 14461
        void glRasterPos2i(int, int);

    // RVA: 0x388D | Ordinal: 14478
        void glRasterPos2iv(int const *);

    // RVA: 0x389E | Ordinal: 14495
        void glRasterPos2s(short, short);

    // RVA: 0x38AF | Ordinal: 14512
        void glRasterPos2sv(short const *);

    // RVA: 0x38C0 | Ordinal: 14529
        void glRasterPos3d(double, double, double);

    // RVA: 0x38D1 | Ordinal: 14546
        void glRasterPos3dv(double const *);

    // RVA: 0x38E2 | Ordinal: 14563
        void glRasterPos3f(float, float, float);

    // RVA: 0x38F3 | Ordinal: 14580
        void glRasterPos3fv(float const *);

    // RVA: 0x3904 | Ordinal: 14597
        void glRasterPos3i(int, int, int);

    // RVA: 0x3915 | Ordinal: 14614
        void glRasterPos3iv(int const *);

    // RVA: 0x3926 | Ordinal: 14631
        void glRasterPos3s(short, short, short);

    // RVA: 0x3937 | Ordinal: 14648
        void glRasterPos3sv(short const *);

    // RVA: 0x3948 | Ordinal: 14665
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x3959 | Ordinal: 14682
        void glRasterPos4dv(double const *);

    // RVA: 0x396A | Ordinal: 14699
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x397B | Ordinal: 14716
        void glRasterPos4fv(float const *);

    // RVA: 0x398C | Ordinal: 14733
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x399D | Ordinal: 14750
        void glRasterPos4iv(int const *);

    // RVA: 0x39AE | Ordinal: 14767
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39BF | Ordinal: 14784
        void glRasterPos4sv(short const *);

    // RVA: 0x39D1 | Ordinal: 14802
        void glReadBuffer(unsigned int);

    // RVA: 0x39EC | Ordinal: 14829
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A09 | Ordinal: 14858
        void glRectd(double, double, double, double);

    // RVA: 0x3A1A | Ordinal: 14875
        void glRectdv(double const *, double const *);

    // RVA: 0x3A2B | Ordinal: 14892
        void glRectf(float, float, float, float);

    // RVA: 0x3A3C | Ordinal: 14909
        void glRectfv(float const *, float const *);

    // RVA: 0x3A4D | Ordinal: 14926
        void glRecti(int, int, int, int);

    // RVA: 0x3A5E | Ordinal: 14943
        void glRectiv(int const *, int const *);

    // RVA: 0x3A6F | Ordinal: 14960
        void glRects(short, short, short, short);

    // RVA: 0x3A80 | Ordinal: 14977
        void glRectsv(short const *, short const *);

    // RVA: 0x3A9C | Ordinal: 15005
        void glRenderMode(unsigned int);

    // RVA: 0x3AD1 | Ordinal: 15058
        void glResetHistogram(unsigned int);

    // RVA: 0x3AE0 | Ordinal: 15073
        void glResetMinmax(unsigned int);

    // RVA: 0x3AFE | Ordinal: 15103
        void glRotated(double, double, double, double);

    // RVA: 0x3B0F | Ordinal: 15120
        void glRotatef(float, float, float, float);

    // RVA: 0x3B1E | Ordinal: 15135
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3BA3 | Ordinal: 15268
        void glScaled(double, double, double);

    // RVA: 0x3BB4 | Ordinal: 15285
        void glScalef(float, float, float);

    // RVA: 0x3BC6 | Ordinal: 15303
        void glScissor(int, int, int, int);

    // RVA: 0x3BFA | Ordinal: 15355
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C07 | Ordinal: 15368
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C14 | Ordinal: 15381
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C21 | Ordinal: 15394
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C2E | Ordinal: 15407
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C3B | Ordinal: 15420
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C48 | Ordinal: 15433
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C55 | Ordinal: 15446
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C62 | Ordinal: 15459
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C6F | Ordinal: 15472
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C7C | Ordinal: 15485
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C89 | Ordinal: 15498
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3C96 | Ordinal: 15511
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CA3 | Ordinal: 15524
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CB0 | Ordinal: 15537
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CBD | Ordinal: 15550
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CE2 | Ordinal: 15587
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CF3 | Ordinal: 15604
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D02 | Ordinal: 15619
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D13 | Ordinal: 15636
        void glShadeModel(unsigned int);

    // RVA: 0x3D4B | Ordinal: 15692
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D7B | Ordinal: 15740
        void glStencilMask(unsigned int);

    // RVA: 0x3DAB | Ordinal: 15788
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DF3 | Ordinal: 15860
        void glTexCoord1d(double);

    // RVA: 0x3E04 | Ordinal: 15877
        void glTexCoord1dv(double const *);

    // RVA: 0x3E15 | Ordinal: 15894
        void glTexCoord1f(float);

    // RVA: 0x3E26 | Ordinal: 15911
        void glTexCoord1fv(float const *);

    // RVA: 0x3E37 | Ordinal: 15928
        void glTexCoord1i(int);

    // RVA: 0x3E48 | Ordinal: 15945
        void glTexCoord1iv(int const *);

    // RVA: 0x3E59 | Ordinal: 15962
        void glTexCoord1s(short);

    // RVA: 0x3E6A | Ordinal: 15979
        void glTexCoord1sv(short const *);

    // RVA: 0x3E7B | Ordinal: 15996
        void glTexCoord2d(double, double);

    // RVA: 0x3E8C | Ordinal: 16013
        void glTexCoord2dv(double const *);

    // RVA: 0x3E9D | Ordinal: 16030
        void glTexCoord2f(float, float);

    // RVA: 0x3EAE | Ordinal: 16047
        void glTexCoord2fv(float const *);

    // RVA: 0x3EBF | Ordinal: 16064
        void glTexCoord2i(int, int);

    // RVA: 0x3ED0 | Ordinal: 16081
        void glTexCoord2iv(int const *);

    // RVA: 0x3EE1 | Ordinal: 16098
        void glTexCoord2s(short, short);

    // RVA: 0x3EF2 | Ordinal: 16115
        void glTexCoord2sv(short const *);

    // RVA: 0x3F03 | Ordinal: 16132
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F14 | Ordinal: 16149
        void glTexCoord3dv(double const *);

    // RVA: 0x3F25 | Ordinal: 16166
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F36 | Ordinal: 16183
        void glTexCoord3fv(float const *);

    // RVA: 0x3F47 | Ordinal: 16200
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F58 | Ordinal: 16217
        void glTexCoord3iv(int const *);

    // RVA: 0x3F69 | Ordinal: 16234
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F7A | Ordinal: 16251
        void glTexCoord3sv(short const *);

    // RVA: 0x3F8B | Ordinal: 16268
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3F9C | Ordinal: 16285
        void glTexCoord4dv(double const *);

    // RVA: 0x3FAD | Ordinal: 16302
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FBE | Ordinal: 16319
        void glTexCoord4fv(float const *);

    // RVA: 0x3FCF | Ordinal: 16336
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FE0 | Ordinal: 16353
        void glTexCoord4iv(int const *);

    // RVA: 0x3FF1 | Ordinal: 16370
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x4002 | Ordinal: 16387
        void glTexCoord4sv(short const *);

    // RVA: 0x4072 | Ordinal: 16499
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x4083 | Ordinal: 16516
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x4094 | Ordinal: 16533
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40A5 | Ordinal: 16550
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40B6 | Ordinal: 16567
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40C7 | Ordinal: 16584
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40D8 | Ordinal: 16601
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40E9 | Ordinal: 16618
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x40FA | Ordinal: 16635
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x410B | Ordinal: 16652
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x411C | Ordinal: 16669
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x412D | Ordinal: 16686
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4148 | Ordinal: 16713
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4171 | Ordinal: 16754
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x41C2 | Ordinal: 16835
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41DD | Ordinal: 16862
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41F8 | Ordinal: 16889
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4213 | Ordinal: 16916
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4254 | Ordinal: 16981
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x426E | Ordinal: 17007
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4287 | Ordinal: 17032
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42E0 | Ordinal: 17121
        void glTranslated(double, double, double);

    // RVA: 0x42F1 | Ordinal: 17138
        void glTranslatef(float, float, float);

    // RVA: 0x46E3 | Ordinal: 18148
        void glVertex2d(double, double);

    // RVA: 0x46F4 | Ordinal: 18165
        void glVertex2dv(double const *);

    // RVA: 0x4705 | Ordinal: 18182
        void glVertex2f(float, float);

    // RVA: 0x4716 | Ordinal: 18199
        void glVertex2fv(float const *);

    // RVA: 0x4727 | Ordinal: 18216
        void glVertex2i(int, int);

    // RVA: 0x4738 | Ordinal: 18233
        void glVertex2iv(int const *);

    // RVA: 0x4749 | Ordinal: 18250
        void glVertex2s(short, short);

    // RVA: 0x475A | Ordinal: 18267
        void glVertex2sv(short const *);

    // RVA: 0x476B | Ordinal: 18284
        void glVertex3d(double, double, double);

    // RVA: 0x477C | Ordinal: 18301
        void glVertex3dv(double const *);

    // RVA: 0x478D | Ordinal: 18318
        void glVertex3f(float, float, float);

    // RVA: 0x479E | Ordinal: 18335
        void glVertex3fv(float const *);

    // RVA: 0x47AF | Ordinal: 18352
        void glVertex3i(int, int, int);

    // RVA: 0x47C0 | Ordinal: 18369
        void glVertex3iv(int const *);

    // RVA: 0x47D1 | Ordinal: 18386
        void glVertex3s(short, short, short);

    // RVA: 0x47E2 | Ordinal: 18403
        void glVertex3sv(short const *);

    // RVA: 0x47F3 | Ordinal: 18420
        void glVertex4d(double, double, double, double);

    // RVA: 0x4804 | Ordinal: 18437
        void glVertex4dv(double const *);

    // RVA: 0x4815 | Ordinal: 18454
        void glVertex4f(float, float, float, float);

    // RVA: 0x4826 | Ordinal: 18471
        void glVertex4fv(float const *);

    // RVA: 0x4837 | Ordinal: 18488
        void glVertex4i(int, int, int, int);

    // RVA: 0x4848 | Ordinal: 18505
        void glVertex4iv(int const *);

    // RVA: 0x4859 | Ordinal: 18522
        void glVertex4s(short, short, short, short);

    // RVA: 0x486A | Ordinal: 18539
        void glVertex4sv(short const *);

    // RVA: 0x4CB1 | Ordinal: 19634
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CC3 | Ordinal: 19652
        void glViewport(int, int, int, int);

    // RVA: 0x4D08 | Ordinal: 19721
        void glWindowPos2d(double, double);

    // RVA: 0x4D15 | Ordinal: 19734
        void glWindowPos2dv(double const *);

    // RVA: 0x4D22 | Ordinal: 19747
        void glWindowPos2f(float, float);

    // RVA: 0x4D2F | Ordinal: 19760
        void glWindowPos2fv(float const *);

    // RVA: 0x4D3C | Ordinal: 19773
        void glWindowPos2i(int, int);

    // RVA: 0x4D49 | Ordinal: 19786
        void glWindowPos2iv(int const *);

    // RVA: 0x4D56 | Ordinal: 19799
        void glWindowPos2s(short, short);

    // RVA: 0x4D63 | Ordinal: 19812
        void glWindowPos2sv(short const *);

    // RVA: 0x4D70 | Ordinal: 19825
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D7D | Ordinal: 19838
        void glWindowPos3dv(double const *);

    // RVA: 0x4D8A | Ordinal: 19851
        void glWindowPos3f(float, float, float);

    // RVA: 0x4D97 | Ordinal: 19864
        void glWindowPos3fv(float const *);

    // RVA: 0x4DA4 | Ordinal: 19877
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DB1 | Ordinal: 19890
        void glWindowPos3iv(int const *);

    // RVA: 0x4DBE | Ordinal: 19903
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DCB | Ordinal: 19916
        void glWindowPos3sv(short const *);

    // RVA: 0x4F1E | Ordinal: 20255
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FE0 | Ordinal: 20449
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6104 | Ordinal: 24837
        void versionProfile(void);

    // RVA: 0x481 | Ordinal: 1154
        void _QOpenGLFunctions_1_4(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_1_4_HPP
