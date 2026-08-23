#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_1_3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_1_3
{
public:

    // RVA: 0x1B2 | Ordinal: 435
        void QOpenGLFunctions_1_3(void);

    // RVA: 0x11BB | Ordinal: 4540
        void glAccum(unsigned int, float);

    // RVA: 0x11D5 | Ordinal: 4566
        void glActiveTexture(unsigned int);

    // RVA: 0x11EF | Ordinal: 4592
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x11FF | Ordinal: 4608
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x120F | Ordinal: 4624
        void glArrayElement(int);

    // RVA: 0x1236 | Ordinal: 4663
        void glBegin(unsigned int);

    // RVA: 0x1358 | Ordinal: 4953
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x13A3 | Ordinal: 5028
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13B4 | Ordinal: 5045
        void glBlendColor(float, float, float, float);

    // RVA: 0x13CD | Ordinal: 5070
        void glBlendEquation(unsigned int);

    // RVA: 0x1417 | Ordinal: 5144
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x14A7 | Ordinal: 5288
        void glCallList(unsigned int);

    // RVA: 0x14B8 | Ordinal: 5305
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14F1 | Ordinal: 5362
        void glClear(unsigned int);

    // RVA: 0x150B | Ordinal: 5388
        void glClearAccum(float, float, float, float);

    // RVA: 0x1575 | Ordinal: 5494
        void glClearColor(float, float, float, float);

    // RVA: 0x158F | Ordinal: 5520
        void glClearDepth(double);

    // RVA: 0x15B4 | Ordinal: 5557
        void glClearIndex(float);

    // RVA: 0x15D2 | Ordinal: 5587
        void glClearStencil(int);

    // RVA: 0x15F1 | Ordinal: 5618
        void glClientActiveTexture(unsigned int);

    // RVA: 0x1615 | Ordinal: 5654
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x1626 | Ordinal: 5671
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x1637 | Ordinal: 5688
        void glColor3bv(signed char const *);

    // RVA: 0x1648 | Ordinal: 5705
        void glColor3d(double, double, double);

    // RVA: 0x1659 | Ordinal: 5722
        void glColor3dv(double const *);

    // RVA: 0x166A | Ordinal: 5739
        void glColor3f(float, float, float);

    // RVA: 0x167B | Ordinal: 5756
        void glColor3fv(float const *);

    // RVA: 0x168C | Ordinal: 5773
        void glColor3i(int, int, int);

    // RVA: 0x169D | Ordinal: 5790
        void glColor3iv(int const *);

    // RVA: 0x16AE | Ordinal: 5807
        void glColor3s(short, short, short);

    // RVA: 0x16BF | Ordinal: 5824
        void glColor3sv(short const *);

    // RVA: 0x16D0 | Ordinal: 5841
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16E1 | Ordinal: 5858
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16F2 | Ordinal: 5875
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1703 | Ordinal: 5892
        void glColor3uiv(unsigned int const *);

    // RVA: 0x1714 | Ordinal: 5909
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x1725 | Ordinal: 5926
        void glColor3usv(unsigned short const *);

    // RVA: 0x1736 | Ordinal: 5943
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x1747 | Ordinal: 5960
        void glColor4bv(signed char const *);

    // RVA: 0x1758 | Ordinal: 5977
        void glColor4d(double, double, double, double);

    // RVA: 0x1769 | Ordinal: 5994
        void glColor4dv(double const *);

    // RVA: 0x177A | Ordinal: 6011
        void glColor4f(float, float, float, float);

    // RVA: 0x178B | Ordinal: 6028
        void glColor4fv(float const *);

    // RVA: 0x179C | Ordinal: 6045
        void glColor4i(int, int, int, int);

    // RVA: 0x17AD | Ordinal: 6062
        void glColor4iv(int const *);

    // RVA: 0x17BE | Ordinal: 6079
        void glColor4s(short, short, short, short);

    // RVA: 0x17CF | Ordinal: 6096
        void glColor4sv(short const *);

    // RVA: 0x17E0 | Ordinal: 6113
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17F1 | Ordinal: 6130
        void glColor4ubv(unsigned char const *);

    // RVA: 0x1802 | Ordinal: 6147
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1813 | Ordinal: 6164
        void glColor4uiv(unsigned int const *);

    // RVA: 0x1824 | Ordinal: 6181
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x1835 | Ordinal: 6198
        void glColor4usv(unsigned short const *);

    // RVA: 0x1847 | Ordinal: 6216
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1874 | Ordinal: 6261
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x18B4 | Ordinal: 6325
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18C3 | Ordinal: 6340
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18D2 | Ordinal: 6355
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18E1 | Ordinal: 6370
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18F0 | Ordinal: 6385
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1913 | Ordinal: 6420
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x192B | Ordinal: 6444
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1943 | Ordinal: 6468
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x195A | Ordinal: 6491
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1972 | Ordinal: 6515
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x198A | Ordinal: 6539
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19A8 | Ordinal: 6569
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19B7 | Ordinal: 6584
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19C6 | Ordinal: 6599
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19D5 | Ordinal: 6614
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19E4 | Ordinal: 6629
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19F3 | Ordinal: 6644
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A14 | Ordinal: 6677
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A23 | Ordinal: 6692
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A32 | Ordinal: 6707
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A41 | Ordinal: 6722
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A5B | Ordinal: 6748
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A6B | Ordinal: 6764
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A85 | Ordinal: 6790
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1A9E | Ordinal: 6815
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AB8 | Ordinal: 6841
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AD1 | Ordinal: 6866
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1B39 | Ordinal: 6970
        void glCullFace(unsigned int);

    // RVA: 0x1B8B | Ordinal: 7052
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1C1A | Ordinal: 7195
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C55 | Ordinal: 7254
        void glDepthFunc(unsigned int);

    // RVA: 0x1C70 | Ordinal: 7281
        void glDepthMask(unsigned char);

    // RVA: 0x1C8A | Ordinal: 7307
        void glDepthRange(double, double);

    // RVA: 0x1CD9 | Ordinal: 7386
        void glDisable(unsigned int);

    // RVA: 0x1CF2 | Ordinal: 7411
        void glDisableClientState(unsigned int);

    // RVA: 0x1D3C | Ordinal: 7485
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D7D | Ordinal: 7550
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DAC | Ordinal: 7597
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E17 | Ordinal: 7704
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E27 | Ordinal: 7720
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E7A | Ordinal: 7803
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E8A | Ordinal: 7819
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1E9B | Ordinal: 7836
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EAD | Ordinal: 7854
        void glEnable(unsigned int);

    // RVA: 0x1EC6 | Ordinal: 7879
        void glEnableClientState(unsigned int);

    // RVA: 0x1F01 | Ordinal: 7938
        void glEnd(void);

    // RVA: 0x1F24 | Ordinal: 7973
        void glEndList(void);

    // RVA: 0x1F6A | Ordinal: 8043
        void glEvalCoord1d(double);

    // RVA: 0x1F7B | Ordinal: 8060
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F8C | Ordinal: 8077
        void glEvalCoord1f(float);

    // RVA: 0x1F9D | Ordinal: 8094
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FAE | Ordinal: 8111
        void glEvalCoord2d(double, double);

    // RVA: 0x1FBF | Ordinal: 8128
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FD0 | Ordinal: 8145
        void glEvalCoord2f(float, float);

    // RVA: 0x1FE1 | Ordinal: 8162
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FF2 | Ordinal: 8179
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x2003 | Ordinal: 8196
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x2014 | Ordinal: 8213
        void glEvalPoint1(int);

    // RVA: 0x2025 | Ordinal: 8230
        void glEvalPoint2(int, int);

    // RVA: 0x2036 | Ordinal: 8247
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x2059 | Ordinal: 8282
        void glFinish(void);

    // RVA: 0x2074 | Ordinal: 8309
        void glFlush(void);

    // RVA: 0x20E4 | Ordinal: 8421
        void glFogf(unsigned int, float);

    // RVA: 0x20F5 | Ordinal: 8438
        void glFogfv(unsigned int, float const *);

    // RVA: 0x2106 | Ordinal: 8455
        void glFogi(unsigned int, int);

    // RVA: 0x2117 | Ordinal: 8472
        void glFogiv(unsigned int, int const *);

    // RVA: 0x219F | Ordinal: 8608
        void glFrontFace(unsigned int);

    // RVA: 0x21B9 | Ordinal: 8634
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21F3 | Ordinal: 8692
        void glGenLists(int);

    // RVA: 0x2247 | Ordinal: 8776
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2371 | Ordinal: 9074
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x23DE | Ordinal: 9183
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23ED | Ordinal: 9198
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x23FC | Ordinal: 9213
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x240B | Ordinal: 9228
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2419 | Ordinal: 9242
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2435 | Ordinal: 9270
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2444 | Ordinal: 9285
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2453 | Ordinal: 9300
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2473 | Ordinal: 9332
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x248E | Ordinal: 9359
        void glGetError(void);

    // RVA: 0x24B3 | Ordinal: 9396
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x2509 | Ordinal: 9482
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2518 | Ordinal: 9497
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2527 | Ordinal: 9512
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x256E | Ordinal: 9583
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2597 | Ordinal: 9624
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25A8 | Ordinal: 9641
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25B9 | Ordinal: 9658
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25CA | Ordinal: 9675
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25DB | Ordinal: 9692
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25EC | Ordinal: 9709
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x25FD | Ordinal: 9726
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x260C | Ordinal: 9741
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x261B | Ordinal: 9756
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x262A | Ordinal: 9771
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2664 | Ordinal: 9829
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x2675 | Ordinal: 9846
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x2686 | Ordinal: 9863
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x2697 | Ordinal: 9880
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26AF | Ordinal: 9904
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x27F6 | Ordinal: 10231
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2852 | Ordinal: 10323
        void glGetString(unsigned int);

    // RVA: 0x28A8 | Ordinal: 10409
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28B9 | Ordinal: 10426
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28CA | Ordinal: 10443
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28DB | Ordinal: 10460
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28EC | Ordinal: 10477
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x28FD | Ordinal: 10494
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2918 | Ordinal: 10521
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2933 | Ordinal: 10548
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2974 | Ordinal: 10613
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x298F | Ordinal: 10640
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2B05 | Ordinal: 11014
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B1D | Ordinal: 11038
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B2E | Ordinal: 11055
        void glIndexMask(unsigned int);

    // RVA: 0x2B3E | Ordinal: 11071
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B4F | Ordinal: 11088
        void glIndexd(double);

    // RVA: 0x2B60 | Ordinal: 11105
        void glIndexdv(double const *);

    // RVA: 0x2B71 | Ordinal: 11122
        void glIndexf(float);

    // RVA: 0x2B82 | Ordinal: 11139
        void glIndexfv(float const *);

    // RVA: 0x2B93 | Ordinal: 11156
        void glIndexi(int);

    // RVA: 0x2BA4 | Ordinal: 11173
        void glIndexiv(int const *);

    // RVA: 0x2BB5 | Ordinal: 11190
        void glIndexs(short);

    // RVA: 0x2BC6 | Ordinal: 11207
        void glIndexsv(short const *);

    // RVA: 0x2BD6 | Ordinal: 11223
        void glIndexub(unsigned char);

    // RVA: 0x2BED | Ordinal: 11246
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C05 | Ordinal: 11270
        void glInitNames(void);

    // RVA: 0x2C15 | Ordinal: 11286
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C68 | Ordinal: 11369
        void glIsEnabled(unsigned int);

    // RVA: 0x2CA8 | Ordinal: 11433
        void glIsList(unsigned int);

    // RVA: 0x2D37 | Ordinal: 11576
        void glIsTexture(unsigned int);

    // RVA: 0x2D71 | Ordinal: 11634
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D82 | Ordinal: 11651
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D93 | Ordinal: 11668
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DA4 | Ordinal: 11685
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DB5 | Ordinal: 11702
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DC6 | Ordinal: 11719
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DD7 | Ordinal: 11736
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DE8 | Ordinal: 11753
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2DF9 | Ordinal: 11770
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E0B | Ordinal: 11788
        void glLineWidth(float);

    // RVA: 0x2E3A | Ordinal: 11835
        void glListBase(unsigned int);

    // RVA: 0x2E4B | Ordinal: 11852
        void glLoadIdentity(void);

    // RVA: 0x2E5C | Ordinal: 11869
        void glLoadMatrixd(double const *);

    // RVA: 0x2E6D | Ordinal: 11886
        void glLoadMatrixf(float const *);

    // RVA: 0x2E7E | Ordinal: 11903
        void glLoadName(unsigned int);

    // RVA: 0x2E8C | Ordinal: 11917
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2E9A | Ordinal: 11931
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EAB | Ordinal: 11948
        void glLogicOp(unsigned int);

    // RVA: 0x2EC5 | Ordinal: 11974
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2ED6 | Ordinal: 11991
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EE7 | Ordinal: 12008
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2EF8 | Ordinal: 12025
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F32 | Ordinal: 12083
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F43 | Ordinal: 12100
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F54 | Ordinal: 12117
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F65 | Ordinal: 12134
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F7A | Ordinal: 12155
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F8B | Ordinal: 12172
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2F9C | Ordinal: 12189
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FAD | Ordinal: 12206
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FBE | Ordinal: 12223
        void glMatrixMode(unsigned int);

    // RVA: 0x2FE6 | Ordinal: 12263
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x2FF7 | Ordinal: 12280
        void glMultMatrixd(double const *);

    // RVA: 0x3008 | Ordinal: 12297
        void glMultMatrixf(float const *);

    // RVA: 0x3016 | Ordinal: 12311
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x3024 | Ordinal: 12325
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x307A | Ordinal: 12411
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x3088 | Ordinal: 12425
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x3096 | Ordinal: 12439
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30A4 | Ordinal: 12453
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30B2 | Ordinal: 12467
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30C0 | Ordinal: 12481
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30CE | Ordinal: 12495
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30DC | Ordinal: 12509
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30EA | Ordinal: 12523
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x30F8 | Ordinal: 12537
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x3106 | Ordinal: 12551
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x3114 | Ordinal: 12565
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x3122 | Ordinal: 12579
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x3130 | Ordinal: 12593
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x313E | Ordinal: 12607
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x314C | Ordinal: 12621
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x315A | Ordinal: 12635
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x3168 | Ordinal: 12649
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x3176 | Ordinal: 12663
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x3184 | Ordinal: 12677
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x3192 | Ordinal: 12691
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31A0 | Ordinal: 12705
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31AE | Ordinal: 12719
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31BC | Ordinal: 12733
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31CA | Ordinal: 12747
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31D8 | Ordinal: 12761
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31E6 | Ordinal: 12775
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31F4 | Ordinal: 12789
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x3202 | Ordinal: 12803
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x3210 | Ordinal: 12817
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x321E | Ordinal: 12831
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x322C | Ordinal: 12845
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x32B5 | Ordinal: 12982
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32C6 | Ordinal: 12999
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32D7 | Ordinal: 13016
        void glNormal3bv(signed char const *);

    // RVA: 0x32E8 | Ordinal: 13033
        void glNormal3d(double, double, double);

    // RVA: 0x32F9 | Ordinal: 13050
        void glNormal3dv(double const *);

    // RVA: 0x330A | Ordinal: 13067
        void glNormal3f(float, float, float);

    // RVA: 0x331B | Ordinal: 13084
        void glNormal3fv(float const *);

    // RVA: 0x332C | Ordinal: 13101
        void glNormal3i(int, int, int);

    // RVA: 0x333D | Ordinal: 13118
        void glNormal3iv(int const *);

    // RVA: 0x334E | Ordinal: 13135
        void glNormal3s(short, short, short);

    // RVA: 0x335F | Ordinal: 13152
        void glNormal3sv(short const *);

    // RVA: 0x3387 | Ordinal: 13192
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33A2 | Ordinal: 13219
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33B3 | Ordinal: 13236
        void glPassThrough(float);

    // RVA: 0x33EA | Ordinal: 13291
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x33FB | Ordinal: 13308
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x340C | Ordinal: 13325
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x341D | Ordinal: 13342
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3438 | Ordinal: 13369
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3452 | Ordinal: 13395
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x3463 | Ordinal: 13412
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x3474 | Ordinal: 13429
        void glPixelZoom(float, float);

    // RVA: 0x34DD | Ordinal: 13534
        void glPointSize(float);

    // RVA: 0x34F7 | Ordinal: 13560
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3511 | Ordinal: 13586
        void glPolygonOffset(float, float);

    // RVA: 0x352B | Ordinal: 13612
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x353C | Ordinal: 13629
        void glPopAttrib(void);

    // RVA: 0x354C | Ordinal: 13645
        void glPopClientAttrib(void);

    // RVA: 0x3562 | Ordinal: 13667
        void glPopMatrix(void);

    // RVA: 0x3573 | Ordinal: 13684
        void glPopName(void);

    // RVA: 0x3595 | Ordinal: 13718
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37E1 | Ordinal: 14306
        void glPushAttrib(unsigned int);

    // RVA: 0x37F1 | Ordinal: 14322
        void glPushClientAttrib(unsigned int);

    // RVA: 0x3807 | Ordinal: 14344
        void glPushMatrix(void);

    // RVA: 0x3818 | Ordinal: 14361
        void glPushName(unsigned int);

    // RVA: 0x3837 | Ordinal: 14392
        void glRasterPos2d(double, double);

    // RVA: 0x3848 | Ordinal: 14409
        void glRasterPos2dv(double const *);

    // RVA: 0x3859 | Ordinal: 14426
        void glRasterPos2f(float, float);

    // RVA: 0x386A | Ordinal: 14443
        void glRasterPos2fv(float const *);

    // RVA: 0x387B | Ordinal: 14460
        void glRasterPos2i(int, int);

    // RVA: 0x388C | Ordinal: 14477
        void glRasterPos2iv(int const *);

    // RVA: 0x389D | Ordinal: 14494
        void glRasterPos2s(short, short);

    // RVA: 0x38AE | Ordinal: 14511
        void glRasterPos2sv(short const *);

    // RVA: 0x38BF | Ordinal: 14528
        void glRasterPos3d(double, double, double);

    // RVA: 0x38D0 | Ordinal: 14545
        void glRasterPos3dv(double const *);

    // RVA: 0x38E1 | Ordinal: 14562
        void glRasterPos3f(float, float, float);

    // RVA: 0x38F2 | Ordinal: 14579
        void glRasterPos3fv(float const *);

    // RVA: 0x3903 | Ordinal: 14596
        void glRasterPos3i(int, int, int);

    // RVA: 0x3914 | Ordinal: 14613
        void glRasterPos3iv(int const *);

    // RVA: 0x3925 | Ordinal: 14630
        void glRasterPos3s(short, short, short);

    // RVA: 0x3936 | Ordinal: 14647
        void glRasterPos3sv(short const *);

    // RVA: 0x3947 | Ordinal: 14664
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x3958 | Ordinal: 14681
        void glRasterPos4dv(double const *);

    // RVA: 0x3969 | Ordinal: 14698
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x397A | Ordinal: 14715
        void glRasterPos4fv(float const *);

    // RVA: 0x398B | Ordinal: 14732
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x399C | Ordinal: 14749
        void glRasterPos4iv(int const *);

    // RVA: 0x39AD | Ordinal: 14766
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39BE | Ordinal: 14783
        void glRasterPos4sv(short const *);

    // RVA: 0x39D0 | Ordinal: 14801
        void glReadBuffer(unsigned int);

    // RVA: 0x39EB | Ordinal: 14828
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A08 | Ordinal: 14857
        void glRectd(double, double, double, double);

    // RVA: 0x3A19 | Ordinal: 14874
        void glRectdv(double const *, double const *);

    // RVA: 0x3A2A | Ordinal: 14891
        void glRectf(float, float, float, float);

    // RVA: 0x3A3B | Ordinal: 14908
        void glRectfv(float const *, float const *);

    // RVA: 0x3A4C | Ordinal: 14925
        void glRecti(int, int, int, int);

    // RVA: 0x3A5D | Ordinal: 14942
        void glRectiv(int const *, int const *);

    // RVA: 0x3A6E | Ordinal: 14959
        void glRects(short, short, short, short);

    // RVA: 0x3A7F | Ordinal: 14976
        void glRectsv(short const *, short const *);

    // RVA: 0x3A9B | Ordinal: 15004
        void glRenderMode(unsigned int);

    // RVA: 0x3AD0 | Ordinal: 15057
        void glResetHistogram(unsigned int);

    // RVA: 0x3ADF | Ordinal: 15072
        void glResetMinmax(unsigned int);

    // RVA: 0x3AFD | Ordinal: 15102
        void glRotated(double, double, double, double);

    // RVA: 0x3B0E | Ordinal: 15119
        void glRotatef(float, float, float, float);

    // RVA: 0x3B1D | Ordinal: 15134
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3BA2 | Ordinal: 15267
        void glScaled(double, double, double);

    // RVA: 0x3BB3 | Ordinal: 15284
        void glScalef(float, float, float);

    // RVA: 0x3BC5 | Ordinal: 15302
        void glScissor(int, int, int, int);

    // RVA: 0x3CF2 | Ordinal: 15603
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D01 | Ordinal: 15618
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D12 | Ordinal: 15635
        void glShadeModel(unsigned int);

    // RVA: 0x3D4A | Ordinal: 15691
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D7A | Ordinal: 15739
        void glStencilMask(unsigned int);

    // RVA: 0x3DAA | Ordinal: 15787
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DF2 | Ordinal: 15859
        void glTexCoord1d(double);

    // RVA: 0x3E03 | Ordinal: 15876
        void glTexCoord1dv(double const *);

    // RVA: 0x3E14 | Ordinal: 15893
        void glTexCoord1f(float);

    // RVA: 0x3E25 | Ordinal: 15910
        void glTexCoord1fv(float const *);

    // RVA: 0x3E36 | Ordinal: 15927
        void glTexCoord1i(int);

    // RVA: 0x3E47 | Ordinal: 15944
        void glTexCoord1iv(int const *);

    // RVA: 0x3E58 | Ordinal: 15961
        void glTexCoord1s(short);

    // RVA: 0x3E69 | Ordinal: 15978
        void glTexCoord1sv(short const *);

    // RVA: 0x3E7A | Ordinal: 15995
        void glTexCoord2d(double, double);

    // RVA: 0x3E8B | Ordinal: 16012
        void glTexCoord2dv(double const *);

    // RVA: 0x3E9C | Ordinal: 16029
        void glTexCoord2f(float, float);

    // RVA: 0x3EAD | Ordinal: 16046
        void glTexCoord2fv(float const *);

    // RVA: 0x3EBE | Ordinal: 16063
        void glTexCoord2i(int, int);

    // RVA: 0x3ECF | Ordinal: 16080
        void glTexCoord2iv(int const *);

    // RVA: 0x3EE0 | Ordinal: 16097
        void glTexCoord2s(short, short);

    // RVA: 0x3EF1 | Ordinal: 16114
        void glTexCoord2sv(short const *);

    // RVA: 0x3F02 | Ordinal: 16131
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F13 | Ordinal: 16148
        void glTexCoord3dv(double const *);

    // RVA: 0x3F24 | Ordinal: 16165
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F35 | Ordinal: 16182
        void glTexCoord3fv(float const *);

    // RVA: 0x3F46 | Ordinal: 16199
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F57 | Ordinal: 16216
        void glTexCoord3iv(int const *);

    // RVA: 0x3F68 | Ordinal: 16233
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F79 | Ordinal: 16250
        void glTexCoord3sv(short const *);

    // RVA: 0x3F8A | Ordinal: 16267
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3F9B | Ordinal: 16284
        void glTexCoord4dv(double const *);

    // RVA: 0x3FAC | Ordinal: 16301
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FBD | Ordinal: 16318
        void glTexCoord4fv(float const *);

    // RVA: 0x3FCE | Ordinal: 16335
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FDF | Ordinal: 16352
        void glTexCoord4iv(int const *);

    // RVA: 0x3FF0 | Ordinal: 16369
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x4001 | Ordinal: 16386
        void glTexCoord4sv(short const *);

    // RVA: 0x4071 | Ordinal: 16498
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x4082 | Ordinal: 16515
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x4093 | Ordinal: 16532
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40A4 | Ordinal: 16549
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40B5 | Ordinal: 16566
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40C6 | Ordinal: 16583
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40D7 | Ordinal: 16600
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40E8 | Ordinal: 16617
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x40F9 | Ordinal: 16634
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x410A | Ordinal: 16651
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x411B | Ordinal: 16668
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x412C | Ordinal: 16685
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4147 | Ordinal: 16712
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4170 | Ordinal: 16753
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x41C1 | Ordinal: 16834
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41DC | Ordinal: 16861
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41F7 | Ordinal: 16888
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4212 | Ordinal: 16915
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4253 | Ordinal: 16980
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x426D | Ordinal: 17006
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4286 | Ordinal: 17031
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42DF | Ordinal: 17120
        void glTranslated(double, double, double);

    // RVA: 0x42F0 | Ordinal: 17137
        void glTranslatef(float, float, float);

    // RVA: 0x46E2 | Ordinal: 18147
        void glVertex2d(double, double);

    // RVA: 0x46F3 | Ordinal: 18164
        void glVertex2dv(double const *);

    // RVA: 0x4704 | Ordinal: 18181
        void glVertex2f(float, float);

    // RVA: 0x4715 | Ordinal: 18198
        void glVertex2fv(float const *);

    // RVA: 0x4726 | Ordinal: 18215
        void glVertex2i(int, int);

    // RVA: 0x4737 | Ordinal: 18232
        void glVertex2iv(int const *);

    // RVA: 0x4748 | Ordinal: 18249
        void glVertex2s(short, short);

    // RVA: 0x4759 | Ordinal: 18266
        void glVertex2sv(short const *);

    // RVA: 0x476A | Ordinal: 18283
        void glVertex3d(double, double, double);

    // RVA: 0x477B | Ordinal: 18300
        void glVertex3dv(double const *);

    // RVA: 0x478C | Ordinal: 18317
        void glVertex3f(float, float, float);

    // RVA: 0x479D | Ordinal: 18334
        void glVertex3fv(float const *);

    // RVA: 0x47AE | Ordinal: 18351
        void glVertex3i(int, int, int);

    // RVA: 0x47BF | Ordinal: 18368
        void glVertex3iv(int const *);

    // RVA: 0x47D0 | Ordinal: 18385
        void glVertex3s(short, short, short);

    // RVA: 0x47E1 | Ordinal: 18402
        void glVertex3sv(short const *);

    // RVA: 0x47F2 | Ordinal: 18419
        void glVertex4d(double, double, double, double);

    // RVA: 0x4803 | Ordinal: 18436
        void glVertex4dv(double const *);

    // RVA: 0x4814 | Ordinal: 18453
        void glVertex4f(float, float, float, float);

    // RVA: 0x4825 | Ordinal: 18470
        void glVertex4fv(float const *);

    // RVA: 0x4836 | Ordinal: 18487
        void glVertex4i(int, int, int, int);

    // RVA: 0x4847 | Ordinal: 18504
        void glVertex4iv(int const *);

    // RVA: 0x4858 | Ordinal: 18521
        void glVertex4s(short, short, short, short);

    // RVA: 0x4869 | Ordinal: 18538
        void glVertex4sv(short const *);

    // RVA: 0x4CB0 | Ordinal: 19633
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CC2 | Ordinal: 19651
        void glViewport(int, int, int, int);

    // RVA: 0x4F1D | Ordinal: 20254
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FDF | Ordinal: 20448
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6103 | Ordinal: 24836
        void versionProfile(void);

    // RVA: 0x480 | Ordinal: 1153
        void _QOpenGLFunctions_1_3(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_1_3_HPP
