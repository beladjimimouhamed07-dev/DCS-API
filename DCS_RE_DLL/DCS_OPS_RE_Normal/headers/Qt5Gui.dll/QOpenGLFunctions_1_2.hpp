#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_1_2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_1_2
{
public:

    // RVA: 0x1B1 | Ordinal: 434
        void QOpenGLFunctions_1_2(void);

    // RVA: 0x11BA | Ordinal: 4539
        void glAccum(unsigned int, float);

    // RVA: 0x11EE | Ordinal: 4591
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x11FE | Ordinal: 4607
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x120E | Ordinal: 4623
        void glArrayElement(int);

    // RVA: 0x1235 | Ordinal: 4662
        void glBegin(unsigned int);

    // RVA: 0x1357 | Ordinal: 4952
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x13A2 | Ordinal: 5027
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13B3 | Ordinal: 5044
        void glBlendColor(float, float, float, float);

    // RVA: 0x13CC | Ordinal: 5069
        void glBlendEquation(unsigned int);

    // RVA: 0x1416 | Ordinal: 5143
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x14A6 | Ordinal: 5287
        void glCallList(unsigned int);

    // RVA: 0x14B7 | Ordinal: 5304
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14F0 | Ordinal: 5361
        void glClear(unsigned int);

    // RVA: 0x150A | Ordinal: 5387
        void glClearAccum(float, float, float, float);

    // RVA: 0x1574 | Ordinal: 5493
        void glClearColor(float, float, float, float);

    // RVA: 0x158E | Ordinal: 5519
        void glClearDepth(double);

    // RVA: 0x15B3 | Ordinal: 5556
        void glClearIndex(float);

    // RVA: 0x15D1 | Ordinal: 5586
        void glClearStencil(int);

    // RVA: 0x1614 | Ordinal: 5653
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x1625 | Ordinal: 5670
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x1636 | Ordinal: 5687
        void glColor3bv(signed char const *);

    // RVA: 0x1647 | Ordinal: 5704
        void glColor3d(double, double, double);

    // RVA: 0x1658 | Ordinal: 5721
        void glColor3dv(double const *);

    // RVA: 0x1669 | Ordinal: 5738
        void glColor3f(float, float, float);

    // RVA: 0x167A | Ordinal: 5755
        void glColor3fv(float const *);

    // RVA: 0x168B | Ordinal: 5772
        void glColor3i(int, int, int);

    // RVA: 0x169C | Ordinal: 5789
        void glColor3iv(int const *);

    // RVA: 0x16AD | Ordinal: 5806
        void glColor3s(short, short, short);

    // RVA: 0x16BE | Ordinal: 5823
        void glColor3sv(short const *);

    // RVA: 0x16CF | Ordinal: 5840
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16E0 | Ordinal: 5857
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16F1 | Ordinal: 5874
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1702 | Ordinal: 5891
        void glColor3uiv(unsigned int const *);

    // RVA: 0x1713 | Ordinal: 5908
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x1724 | Ordinal: 5925
        void glColor3usv(unsigned short const *);

    // RVA: 0x1735 | Ordinal: 5942
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x1746 | Ordinal: 5959
        void glColor4bv(signed char const *);

    // RVA: 0x1757 | Ordinal: 5976
        void glColor4d(double, double, double, double);

    // RVA: 0x1768 | Ordinal: 5993
        void glColor4dv(double const *);

    // RVA: 0x1779 | Ordinal: 6010
        void glColor4f(float, float, float, float);

    // RVA: 0x178A | Ordinal: 6027
        void glColor4fv(float const *);

    // RVA: 0x179B | Ordinal: 6044
        void glColor4i(int, int, int, int);

    // RVA: 0x17AC | Ordinal: 6061
        void glColor4iv(int const *);

    // RVA: 0x17BD | Ordinal: 6078
        void glColor4s(short, short, short, short);

    // RVA: 0x17CE | Ordinal: 6095
        void glColor4sv(short const *);

    // RVA: 0x17DF | Ordinal: 6112
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17F0 | Ordinal: 6129
        void glColor4ubv(unsigned char const *);

    // RVA: 0x1801 | Ordinal: 6146
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1812 | Ordinal: 6163
        void glColor4uiv(unsigned int const *);

    // RVA: 0x1823 | Ordinal: 6180
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x1834 | Ordinal: 6197
        void glColor4usv(unsigned short const *);

    // RVA: 0x1846 | Ordinal: 6215
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1873 | Ordinal: 6260
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x18B3 | Ordinal: 6324
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18C2 | Ordinal: 6339
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18D1 | Ordinal: 6354
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18E0 | Ordinal: 6369
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18EF | Ordinal: 6384
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x19A7 | Ordinal: 6568
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19B6 | Ordinal: 6583
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19C5 | Ordinal: 6598
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19D4 | Ordinal: 6613
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19E3 | Ordinal: 6628
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19F2 | Ordinal: 6643
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A13 | Ordinal: 6676
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A22 | Ordinal: 6691
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A31 | Ordinal: 6706
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A40 | Ordinal: 6721
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A5A | Ordinal: 6747
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A6A | Ordinal: 6763
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A84 | Ordinal: 6789
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1A9D | Ordinal: 6814
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AB7 | Ordinal: 6840
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AD0 | Ordinal: 6865
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1B38 | Ordinal: 6969
        void glCullFace(unsigned int);

    // RVA: 0x1B8A | Ordinal: 7051
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1C19 | Ordinal: 7194
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C54 | Ordinal: 7253
        void glDepthFunc(unsigned int);

    // RVA: 0x1C6F | Ordinal: 7280
        void glDepthMask(unsigned char);

    // RVA: 0x1C89 | Ordinal: 7306
        void glDepthRange(double, double);

    // RVA: 0x1CD8 | Ordinal: 7385
        void glDisable(unsigned int);

    // RVA: 0x1CF1 | Ordinal: 7410
        void glDisableClientState(unsigned int);

    // RVA: 0x1D3B | Ordinal: 7484
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D7C | Ordinal: 7549
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DAB | Ordinal: 7596
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E16 | Ordinal: 7703
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E26 | Ordinal: 7719
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E79 | Ordinal: 7802
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E89 | Ordinal: 7818
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1E9A | Ordinal: 7835
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EAC | Ordinal: 7853
        void glEnable(unsigned int);

    // RVA: 0x1EC5 | Ordinal: 7878
        void glEnableClientState(unsigned int);

    // RVA: 0x1F00 | Ordinal: 7937
        void glEnd(void);

    // RVA: 0x1F23 | Ordinal: 7972
        void glEndList(void);

    // RVA: 0x1F69 | Ordinal: 8042
        void glEvalCoord1d(double);

    // RVA: 0x1F7A | Ordinal: 8059
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F8B | Ordinal: 8076
        void glEvalCoord1f(float);

    // RVA: 0x1F9C | Ordinal: 8093
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FAD | Ordinal: 8110
        void glEvalCoord2d(double, double);

    // RVA: 0x1FBE | Ordinal: 8127
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FCF | Ordinal: 8144
        void glEvalCoord2f(float, float);

    // RVA: 0x1FE0 | Ordinal: 8161
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FF1 | Ordinal: 8178
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x2002 | Ordinal: 8195
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x2013 | Ordinal: 8212
        void glEvalPoint1(int);

    // RVA: 0x2024 | Ordinal: 8229
        void glEvalPoint2(int, int);

    // RVA: 0x2035 | Ordinal: 8246
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x2058 | Ordinal: 8281
        void glFinish(void);

    // RVA: 0x2073 | Ordinal: 8308
        void glFlush(void);

    // RVA: 0x20E3 | Ordinal: 8420
        void glFogf(unsigned int, float);

    // RVA: 0x20F4 | Ordinal: 8437
        void glFogfv(unsigned int, float const *);

    // RVA: 0x2105 | Ordinal: 8454
        void glFogi(unsigned int, int);

    // RVA: 0x2116 | Ordinal: 8471
        void glFogiv(unsigned int, int const *);

    // RVA: 0x219E | Ordinal: 8607
        void glFrontFace(unsigned int);

    // RVA: 0x21B8 | Ordinal: 8633
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21F2 | Ordinal: 8691
        void glGenLists(int);

    // RVA: 0x2246 | Ordinal: 8775
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2370 | Ordinal: 9073
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x23DD | Ordinal: 9182
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23EC | Ordinal: 9197
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x23FB | Ordinal: 9212
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x240A | Ordinal: 9227
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2434 | Ordinal: 9269
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2443 | Ordinal: 9284
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2452 | Ordinal: 9299
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2472 | Ordinal: 9331
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x248D | Ordinal: 9358
        void glGetError(void);

    // RVA: 0x24B2 | Ordinal: 9395
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x2508 | Ordinal: 9481
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2517 | Ordinal: 9496
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2526 | Ordinal: 9511
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x256D | Ordinal: 9582
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2596 | Ordinal: 9623
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25A7 | Ordinal: 9640
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25B8 | Ordinal: 9657
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25C9 | Ordinal: 9674
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25DA | Ordinal: 9691
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25EB | Ordinal: 9708
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x25FC | Ordinal: 9725
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x260B | Ordinal: 9740
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x261A | Ordinal: 9755
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2629 | Ordinal: 9770
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2663 | Ordinal: 9828
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x2674 | Ordinal: 9845
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x2685 | Ordinal: 9862
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x2696 | Ordinal: 9879
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26AE | Ordinal: 9903
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x27F5 | Ordinal: 10230
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2851 | Ordinal: 10322
        void glGetString(unsigned int);

    // RVA: 0x28A7 | Ordinal: 10408
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28B8 | Ordinal: 10425
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28C9 | Ordinal: 10442
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28DA | Ordinal: 10459
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28EB | Ordinal: 10476
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x28FC | Ordinal: 10493
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2917 | Ordinal: 10520
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2932 | Ordinal: 10547
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2973 | Ordinal: 10612
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x298E | Ordinal: 10639
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2B04 | Ordinal: 11013
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B1C | Ordinal: 11037
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B2D | Ordinal: 11054
        void glIndexMask(unsigned int);

    // RVA: 0x2B3D | Ordinal: 11070
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B4E | Ordinal: 11087
        void glIndexd(double);

    // RVA: 0x2B5F | Ordinal: 11104
        void glIndexdv(double const *);

    // RVA: 0x2B70 | Ordinal: 11121
        void glIndexf(float);

    // RVA: 0x2B81 | Ordinal: 11138
        void glIndexfv(float const *);

    // RVA: 0x2B92 | Ordinal: 11155
        void glIndexi(int);

    // RVA: 0x2BA3 | Ordinal: 11172
        void glIndexiv(int const *);

    // RVA: 0x2BB4 | Ordinal: 11189
        void glIndexs(short);

    // RVA: 0x2BC5 | Ordinal: 11206
        void glIndexsv(short const *);

    // RVA: 0x2BD5 | Ordinal: 11222
        void glIndexub(unsigned char);

    // RVA: 0x2BEC | Ordinal: 11245
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C04 | Ordinal: 11269
        void glInitNames(void);

    // RVA: 0x2C14 | Ordinal: 11285
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C67 | Ordinal: 11368
        void glIsEnabled(unsigned int);

    // RVA: 0x2CA7 | Ordinal: 11432
        void glIsList(unsigned int);

    // RVA: 0x2D36 | Ordinal: 11575
        void glIsTexture(unsigned int);

    // RVA: 0x2D70 | Ordinal: 11633
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D81 | Ordinal: 11650
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D92 | Ordinal: 11667
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DA3 | Ordinal: 11684
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DB4 | Ordinal: 11701
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DC5 | Ordinal: 11718
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DD6 | Ordinal: 11735
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DE7 | Ordinal: 11752
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2DF8 | Ordinal: 11769
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E0A | Ordinal: 11787
        void glLineWidth(float);

    // RVA: 0x2E39 | Ordinal: 11834
        void glListBase(unsigned int);

    // RVA: 0x2E4A | Ordinal: 11851
        void glLoadIdentity(void);

    // RVA: 0x2E5B | Ordinal: 11868
        void glLoadMatrixd(double const *);

    // RVA: 0x2E6C | Ordinal: 11885
        void glLoadMatrixf(float const *);

    // RVA: 0x2E7D | Ordinal: 11902
        void glLoadName(unsigned int);

    // RVA: 0x2EAA | Ordinal: 11947
        void glLogicOp(unsigned int);

    // RVA: 0x2EC4 | Ordinal: 11973
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2ED5 | Ordinal: 11990
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EE6 | Ordinal: 12007
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2EF7 | Ordinal: 12024
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F31 | Ordinal: 12082
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F42 | Ordinal: 12099
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F53 | Ordinal: 12116
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F64 | Ordinal: 12133
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F79 | Ordinal: 12154
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F8A | Ordinal: 12171
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2F9B | Ordinal: 12188
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FAC | Ordinal: 12205
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FBD | Ordinal: 12222
        void glMatrixMode(unsigned int);

    // RVA: 0x2FE5 | Ordinal: 12262
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x2FF6 | Ordinal: 12279
        void glMultMatrixd(double const *);

    // RVA: 0x3007 | Ordinal: 12296
        void glMultMatrixf(float const *);

    // RVA: 0x32B4 | Ordinal: 12981
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32C5 | Ordinal: 12998
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32D6 | Ordinal: 13015
        void glNormal3bv(signed char const *);

    // RVA: 0x32E7 | Ordinal: 13032
        void glNormal3d(double, double, double);

    // RVA: 0x32F8 | Ordinal: 13049
        void glNormal3dv(double const *);

    // RVA: 0x3309 | Ordinal: 13066
        void glNormal3f(float, float, float);

    // RVA: 0x331A | Ordinal: 13083
        void glNormal3fv(float const *);

    // RVA: 0x332B | Ordinal: 13100
        void glNormal3i(int, int, int);

    // RVA: 0x333C | Ordinal: 13117
        void glNormal3iv(int const *);

    // RVA: 0x334D | Ordinal: 13134
        void glNormal3s(short, short, short);

    // RVA: 0x335E | Ordinal: 13151
        void glNormal3sv(short const *);

    // RVA: 0x3386 | Ordinal: 13191
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33A1 | Ordinal: 13218
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33B2 | Ordinal: 13235
        void glPassThrough(float);

    // RVA: 0x33E9 | Ordinal: 13290
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x33FA | Ordinal: 13307
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x340B | Ordinal: 13324
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x341C | Ordinal: 13341
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3437 | Ordinal: 13368
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3451 | Ordinal: 13394
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x3462 | Ordinal: 13411
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x3473 | Ordinal: 13428
        void glPixelZoom(float, float);

    // RVA: 0x34DC | Ordinal: 13533
        void glPointSize(float);

    // RVA: 0x34F6 | Ordinal: 13559
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3510 | Ordinal: 13585
        void glPolygonOffset(float, float);

    // RVA: 0x352A | Ordinal: 13611
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x353B | Ordinal: 13628
        void glPopAttrib(void);

    // RVA: 0x354B | Ordinal: 13644
        void glPopClientAttrib(void);

    // RVA: 0x3561 | Ordinal: 13666
        void glPopMatrix(void);

    // RVA: 0x3572 | Ordinal: 13683
        void glPopName(void);

    // RVA: 0x3594 | Ordinal: 13717
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37E0 | Ordinal: 14305
        void glPushAttrib(unsigned int);

    // RVA: 0x37F0 | Ordinal: 14321
        void glPushClientAttrib(unsigned int);

    // RVA: 0x3806 | Ordinal: 14343
        void glPushMatrix(void);

    // RVA: 0x3817 | Ordinal: 14360
        void glPushName(unsigned int);

    // RVA: 0x3836 | Ordinal: 14391
        void glRasterPos2d(double, double);

    // RVA: 0x3847 | Ordinal: 14408
        void glRasterPos2dv(double const *);

    // RVA: 0x3858 | Ordinal: 14425
        void glRasterPos2f(float, float);

    // RVA: 0x3869 | Ordinal: 14442
        void glRasterPos2fv(float const *);

    // RVA: 0x387A | Ordinal: 14459
        void glRasterPos2i(int, int);

    // RVA: 0x388B | Ordinal: 14476
        void glRasterPos2iv(int const *);

    // RVA: 0x389C | Ordinal: 14493
        void glRasterPos2s(short, short);

    // RVA: 0x38AD | Ordinal: 14510
        void glRasterPos2sv(short const *);

    // RVA: 0x38BE | Ordinal: 14527
        void glRasterPos3d(double, double, double);

    // RVA: 0x38CF | Ordinal: 14544
        void glRasterPos3dv(double const *);

    // RVA: 0x38E0 | Ordinal: 14561
        void glRasterPos3f(float, float, float);

    // RVA: 0x38F1 | Ordinal: 14578
        void glRasterPos3fv(float const *);

    // RVA: 0x3902 | Ordinal: 14595
        void glRasterPos3i(int, int, int);

    // RVA: 0x3913 | Ordinal: 14612
        void glRasterPos3iv(int const *);

    // RVA: 0x3924 | Ordinal: 14629
        void glRasterPos3s(short, short, short);

    // RVA: 0x3935 | Ordinal: 14646
        void glRasterPos3sv(short const *);

    // RVA: 0x3946 | Ordinal: 14663
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x3957 | Ordinal: 14680
        void glRasterPos4dv(double const *);

    // RVA: 0x3968 | Ordinal: 14697
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x3979 | Ordinal: 14714
        void glRasterPos4fv(float const *);

    // RVA: 0x398A | Ordinal: 14731
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x399B | Ordinal: 14748
        void glRasterPos4iv(int const *);

    // RVA: 0x39AC | Ordinal: 14765
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39BD | Ordinal: 14782
        void glRasterPos4sv(short const *);

    // RVA: 0x39CF | Ordinal: 14800
        void glReadBuffer(unsigned int);

    // RVA: 0x39EA | Ordinal: 14827
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A07 | Ordinal: 14856
        void glRectd(double, double, double, double);

    // RVA: 0x3A18 | Ordinal: 14873
        void glRectdv(double const *, double const *);

    // RVA: 0x3A29 | Ordinal: 14890
        void glRectf(float, float, float, float);

    // RVA: 0x3A3A | Ordinal: 14907
        void glRectfv(float const *, float const *);

    // RVA: 0x3A4B | Ordinal: 14924
        void glRecti(int, int, int, int);

    // RVA: 0x3A5C | Ordinal: 14941
        void glRectiv(int const *, int const *);

    // RVA: 0x3A6D | Ordinal: 14958
        void glRects(short, short, short, short);

    // RVA: 0x3A7E | Ordinal: 14975
        void glRectsv(short const *, short const *);

    // RVA: 0x3A9A | Ordinal: 15003
        void glRenderMode(unsigned int);

    // RVA: 0x3ACF | Ordinal: 15056
        void glResetHistogram(unsigned int);

    // RVA: 0x3ADE | Ordinal: 15071
        void glResetMinmax(unsigned int);

    // RVA: 0x3AFC | Ordinal: 15101
        void glRotated(double, double, double, double);

    // RVA: 0x3B0D | Ordinal: 15118
        void glRotatef(float, float, float, float);

    // RVA: 0x3BA1 | Ordinal: 15266
        void glScaled(double, double, double);

    // RVA: 0x3BB2 | Ordinal: 15283
        void glScalef(float, float, float);

    // RVA: 0x3BC4 | Ordinal: 15301
        void glScissor(int, int, int, int);

    // RVA: 0x3CF1 | Ordinal: 15602
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D00 | Ordinal: 15617
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D11 | Ordinal: 15634
        void glShadeModel(unsigned int);

    // RVA: 0x3D49 | Ordinal: 15690
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D79 | Ordinal: 15738
        void glStencilMask(unsigned int);

    // RVA: 0x3DA9 | Ordinal: 15786
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DF1 | Ordinal: 15858
        void glTexCoord1d(double);

    // RVA: 0x3E02 | Ordinal: 15875
        void glTexCoord1dv(double const *);

    // RVA: 0x3E13 | Ordinal: 15892
        void glTexCoord1f(float);

    // RVA: 0x3E24 | Ordinal: 15909
        void glTexCoord1fv(float const *);

    // RVA: 0x3E35 | Ordinal: 15926
        void glTexCoord1i(int);

    // RVA: 0x3E46 | Ordinal: 15943
        void glTexCoord1iv(int const *);

    // RVA: 0x3E57 | Ordinal: 15960
        void glTexCoord1s(short);

    // RVA: 0x3E68 | Ordinal: 15977
        void glTexCoord1sv(short const *);

    // RVA: 0x3E79 | Ordinal: 15994
        void glTexCoord2d(double, double);

    // RVA: 0x3E8A | Ordinal: 16011
        void glTexCoord2dv(double const *);

    // RVA: 0x3E9B | Ordinal: 16028
        void glTexCoord2f(float, float);

    // RVA: 0x3EAC | Ordinal: 16045
        void glTexCoord2fv(float const *);

    // RVA: 0x3EBD | Ordinal: 16062
        void glTexCoord2i(int, int);

    // RVA: 0x3ECE | Ordinal: 16079
        void glTexCoord2iv(int const *);

    // RVA: 0x3EDF | Ordinal: 16096
        void glTexCoord2s(short, short);

    // RVA: 0x3EF0 | Ordinal: 16113
        void glTexCoord2sv(short const *);

    // RVA: 0x3F01 | Ordinal: 16130
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F12 | Ordinal: 16147
        void glTexCoord3dv(double const *);

    // RVA: 0x3F23 | Ordinal: 16164
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F34 | Ordinal: 16181
        void glTexCoord3fv(float const *);

    // RVA: 0x3F45 | Ordinal: 16198
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F56 | Ordinal: 16215
        void glTexCoord3iv(int const *);

    // RVA: 0x3F67 | Ordinal: 16232
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F78 | Ordinal: 16249
        void glTexCoord3sv(short const *);

    // RVA: 0x3F89 | Ordinal: 16266
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3F9A | Ordinal: 16283
        void glTexCoord4dv(double const *);

    // RVA: 0x3FAB | Ordinal: 16300
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FBC | Ordinal: 16317
        void glTexCoord4fv(float const *);

    // RVA: 0x3FCD | Ordinal: 16334
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FDE | Ordinal: 16351
        void glTexCoord4iv(int const *);

    // RVA: 0x3FEF | Ordinal: 16368
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x4000 | Ordinal: 16385
        void glTexCoord4sv(short const *);

    // RVA: 0x4070 | Ordinal: 16497
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x4081 | Ordinal: 16514
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x4092 | Ordinal: 16531
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40A3 | Ordinal: 16548
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40B4 | Ordinal: 16565
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40C5 | Ordinal: 16582
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40D6 | Ordinal: 16599
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40E7 | Ordinal: 16616
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x40F8 | Ordinal: 16633
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4109 | Ordinal: 16650
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x411A | Ordinal: 16667
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x412B | Ordinal: 16684
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4146 | Ordinal: 16711
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x416F | Ordinal: 16752
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x41C0 | Ordinal: 16833
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41DB | Ordinal: 16860
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41F6 | Ordinal: 16887
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4211 | Ordinal: 16914
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4252 | Ordinal: 16979
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x426C | Ordinal: 17005
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4285 | Ordinal: 17030
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42DE | Ordinal: 17119
        void glTranslated(double, double, double);

    // RVA: 0x42EF | Ordinal: 17136
        void glTranslatef(float, float, float);

    // RVA: 0x46E1 | Ordinal: 18146
        void glVertex2d(double, double);

    // RVA: 0x46F2 | Ordinal: 18163
        void glVertex2dv(double const *);

    // RVA: 0x4703 | Ordinal: 18180
        void glVertex2f(float, float);

    // RVA: 0x4714 | Ordinal: 18197
        void glVertex2fv(float const *);

    // RVA: 0x4725 | Ordinal: 18214
        void glVertex2i(int, int);

    // RVA: 0x4736 | Ordinal: 18231
        void glVertex2iv(int const *);

    // RVA: 0x4747 | Ordinal: 18248
        void glVertex2s(short, short);

    // RVA: 0x4758 | Ordinal: 18265
        void glVertex2sv(short const *);

    // RVA: 0x4769 | Ordinal: 18282
        void glVertex3d(double, double, double);

    // RVA: 0x477A | Ordinal: 18299
        void glVertex3dv(double const *);

    // RVA: 0x478B | Ordinal: 18316
        void glVertex3f(float, float, float);

    // RVA: 0x479C | Ordinal: 18333
        void glVertex3fv(float const *);

    // RVA: 0x47AD | Ordinal: 18350
        void glVertex3i(int, int, int);

    // RVA: 0x47BE | Ordinal: 18367
        void glVertex3iv(int const *);

    // RVA: 0x47CF | Ordinal: 18384
        void glVertex3s(short, short, short);

    // RVA: 0x47E0 | Ordinal: 18401
        void glVertex3sv(short const *);

    // RVA: 0x47F1 | Ordinal: 18418
        void glVertex4d(double, double, double, double);

    // RVA: 0x4802 | Ordinal: 18435
        void glVertex4dv(double const *);

    // RVA: 0x4813 | Ordinal: 18452
        void glVertex4f(float, float, float, float);

    // RVA: 0x4824 | Ordinal: 18469
        void glVertex4fv(float const *);

    // RVA: 0x4835 | Ordinal: 18486
        void glVertex4i(int, int, int, int);

    // RVA: 0x4846 | Ordinal: 18503
        void glVertex4iv(int const *);

    // RVA: 0x4857 | Ordinal: 18520
        void glVertex4s(short, short, short, short);

    // RVA: 0x4868 | Ordinal: 18537
        void glVertex4sv(short const *);

    // RVA: 0x4CAF | Ordinal: 19632
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CC1 | Ordinal: 19650
        void glViewport(int, int, int, int);

    // RVA: 0x4F1C | Ordinal: 20253
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FDE | Ordinal: 20447
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6102 | Ordinal: 24835
        void versionProfile(void);

    // RVA: 0x47F | Ordinal: 1152
        void _QOpenGLFunctions_1_2(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_1_2_HPP
