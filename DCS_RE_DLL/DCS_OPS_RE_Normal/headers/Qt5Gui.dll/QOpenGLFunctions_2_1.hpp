#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_2_1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_2_1
{
public:

    // RVA: 0x1B6 | Ordinal: 439
        void QOpenGLFunctions_2_1(void);

    // RVA: 0x11BF | Ordinal: 4544
        void glAccum(unsigned int, float);

    // RVA: 0x11D9 | Ordinal: 4570
        void glActiveTexture(unsigned int);

    // RVA: 0x11F3 | Ordinal: 4596
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x1203 | Ordinal: 4612
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x1213 | Ordinal: 4628
        void glArrayElement(int);

    // RVA: 0x121F | Ordinal: 4640
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x123A | Ordinal: 4667
        void glBegin(unsigned int);

    // RVA: 0x1259 | Ordinal: 4698
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x128D | Ordinal: 4750
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12A3 | Ordinal: 4772
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x135C | Ordinal: 4957
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x13A7 | Ordinal: 5032
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13B8 | Ordinal: 5049
        void glBlendColor(float, float, float, float);

    // RVA: 0x13D1 | Ordinal: 5074
        void glBlendEquation(unsigned int);

    // RVA: 0x13E6 | Ordinal: 5095
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x141B | Ordinal: 5148
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1432 | Ordinal: 5171
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1477 | Ordinal: 5240
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x1491 | Ordinal: 5266
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14AB | Ordinal: 5292
        void glCallList(unsigned int);

    // RVA: 0x14BC | Ordinal: 5309
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14F5 | Ordinal: 5366
        void glClear(unsigned int);

    // RVA: 0x150F | Ordinal: 5392
        void glClearAccum(float, float, float, float);

    // RVA: 0x1579 | Ordinal: 5498
        void glClearColor(float, float, float, float);

    // RVA: 0x1593 | Ordinal: 5524
        void glClearDepth(double);

    // RVA: 0x15B8 | Ordinal: 5561
        void glClearIndex(float);

    // RVA: 0x15D6 | Ordinal: 5591
        void glClearStencil(int);

    // RVA: 0x15F5 | Ordinal: 5622
        void glClientActiveTexture(unsigned int);

    // RVA: 0x1619 | Ordinal: 5658
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x162A | Ordinal: 5675
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x163B | Ordinal: 5692
        void glColor3bv(signed char const *);

    // RVA: 0x164C | Ordinal: 5709
        void glColor3d(double, double, double);

    // RVA: 0x165D | Ordinal: 5726
        void glColor3dv(double const *);

    // RVA: 0x166E | Ordinal: 5743
        void glColor3f(float, float, float);

    // RVA: 0x167F | Ordinal: 5760
        void glColor3fv(float const *);

    // RVA: 0x1690 | Ordinal: 5777
        void glColor3i(int, int, int);

    // RVA: 0x16A1 | Ordinal: 5794
        void glColor3iv(int const *);

    // RVA: 0x16B2 | Ordinal: 5811
        void glColor3s(short, short, short);

    // RVA: 0x16C3 | Ordinal: 5828
        void glColor3sv(short const *);

    // RVA: 0x16D4 | Ordinal: 5845
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16E5 | Ordinal: 5862
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16F6 | Ordinal: 5879
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1707 | Ordinal: 5896
        void glColor3uiv(unsigned int const *);

    // RVA: 0x1718 | Ordinal: 5913
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x1729 | Ordinal: 5930
        void glColor3usv(unsigned short const *);

    // RVA: 0x173A | Ordinal: 5947
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x174B | Ordinal: 5964
        void glColor4bv(signed char const *);

    // RVA: 0x175C | Ordinal: 5981
        void glColor4d(double, double, double, double);

    // RVA: 0x176D | Ordinal: 5998
        void glColor4dv(double const *);

    // RVA: 0x177E | Ordinal: 6015
        void glColor4f(float, float, float, float);

    // RVA: 0x178F | Ordinal: 6032
        void glColor4fv(float const *);

    // RVA: 0x17A0 | Ordinal: 6049
        void glColor4i(int, int, int, int);

    // RVA: 0x17B1 | Ordinal: 6066
        void glColor4iv(int const *);

    // RVA: 0x17C2 | Ordinal: 6083
        void glColor4s(short, short, short, short);

    // RVA: 0x17D3 | Ordinal: 6100
        void glColor4sv(short const *);

    // RVA: 0x17E4 | Ordinal: 6117
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17F5 | Ordinal: 6134
        void glColor4ubv(unsigned char const *);

    // RVA: 0x1806 | Ordinal: 6151
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1817 | Ordinal: 6168
        void glColor4uiv(unsigned int const *);

    // RVA: 0x1828 | Ordinal: 6185
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x1839 | Ordinal: 6202
        void glColor4usv(unsigned short const *);

    // RVA: 0x184B | Ordinal: 6220
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1878 | Ordinal: 6265
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x18B8 | Ordinal: 6329
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18C7 | Ordinal: 6344
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18D6 | Ordinal: 6359
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18E5 | Ordinal: 6374
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18F4 | Ordinal: 6389
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1900 | Ordinal: 6401
        void glCompileShader(unsigned int);

    // RVA: 0x1917 | Ordinal: 6424
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x192F | Ordinal: 6448
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1947 | Ordinal: 6472
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x195E | Ordinal: 6495
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1976 | Ordinal: 6519
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x198E | Ordinal: 6543
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19AC | Ordinal: 6573
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19BB | Ordinal: 6588
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19CA | Ordinal: 6603
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19D9 | Ordinal: 6618
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19E8 | Ordinal: 6633
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19F7 | Ordinal: 6648
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A18 | Ordinal: 6681
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A27 | Ordinal: 6696
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A36 | Ordinal: 6711
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A45 | Ordinal: 6726
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A5F | Ordinal: 6752
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A6F | Ordinal: 6768
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A89 | Ordinal: 6794
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AA2 | Ordinal: 6819
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ABC | Ordinal: 6845
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AD5 | Ordinal: 6870
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AF4 | Ordinal: 6901
        void glCreateProgram(void);

    // RVA: 0x1B11 | Ordinal: 6930
        void glCreateShader(unsigned int);

    // RVA: 0x1B3D | Ordinal: 6974
        void glCullFace(unsigned int);

    // RVA: 0x1B62 | Ordinal: 7011
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B8F | Ordinal: 7056
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1B9B | Ordinal: 7068
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BBC | Ordinal: 7101
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BF3 | Ordinal: 7156
        void glDeleteShader(unsigned int);

    // RVA: 0x1C1E | Ordinal: 7199
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C59 | Ordinal: 7258
        void glDepthFunc(unsigned int);

    // RVA: 0x1C74 | Ordinal: 7285
        void glDepthMask(unsigned char);

    // RVA: 0x1C8E | Ordinal: 7311
        void glDepthRange(double, double);

    // RVA: 0x1CC2 | Ordinal: 7363
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CDD | Ordinal: 7390
        void glDisable(unsigned int);

    // RVA: 0x1CF6 | Ordinal: 7415
        void glDisableClientState(unsigned int);

    // RVA: 0x1D04 | Ordinal: 7429
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D40 | Ordinal: 7489
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D81 | Ordinal: 7554
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D96 | Ordinal: 7575
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DB0 | Ordinal: 7601
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E1B | Ordinal: 7708
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E2B | Ordinal: 7724
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E7E | Ordinal: 7807
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E8E | Ordinal: 7823
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1E9F | Ordinal: 7840
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EB1 | Ordinal: 7858
        void glEnable(unsigned int);

    // RVA: 0x1ECA | Ordinal: 7883
        void glEnableClientState(unsigned int);

    // RVA: 0x1ED8 | Ordinal: 7897
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1F05 | Ordinal: 7942
        void glEnd(void);

    // RVA: 0x1F28 | Ordinal: 7977
        void glEndList(void);

    // RVA: 0x1F35 | Ordinal: 7990
        void glEndQuery(unsigned int);

    // RVA: 0x1F6E | Ordinal: 8047
        void glEvalCoord1d(double);

    // RVA: 0x1F7F | Ordinal: 8064
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F90 | Ordinal: 8081
        void glEvalCoord1f(float);

    // RVA: 0x1FA1 | Ordinal: 8098
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FB2 | Ordinal: 8115
        void glEvalCoord2d(double, double);

    // RVA: 0x1FC3 | Ordinal: 8132
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FD4 | Ordinal: 8149
        void glEvalCoord2f(float, float);

    // RVA: 0x1FE5 | Ordinal: 8166
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FF6 | Ordinal: 8183
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x2007 | Ordinal: 8200
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x2018 | Ordinal: 8217
        void glEvalPoint1(int);

    // RVA: 0x2029 | Ordinal: 8234
        void glEvalPoint2(int, int);

    // RVA: 0x203A | Ordinal: 8251
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x205D | Ordinal: 8286
        void glFinish(void);

    // RVA: 0x2078 | Ordinal: 8313
        void glFlush(void);

    // RVA: 0x20A3 | Ordinal: 8356
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20B0 | Ordinal: 8369
        void glFogCoordd(double);

    // RVA: 0x20BD | Ordinal: 8382
        void glFogCoorddv(double const *);

    // RVA: 0x20CA | Ordinal: 8395
        void glFogCoordf(float);

    // RVA: 0x20D7 | Ordinal: 8408
        void glFogCoordfv(float const *);

    // RVA: 0x20E8 | Ordinal: 8425
        void glFogf(unsigned int, float);

    // RVA: 0x20F9 | Ordinal: 8442
        void glFogfv(unsigned int, float const *);

    // RVA: 0x210A | Ordinal: 8459
        void glFogi(unsigned int, int);

    // RVA: 0x211B | Ordinal: 8476
        void glFogiv(unsigned int, int const *);

    // RVA: 0x21A3 | Ordinal: 8612
        void glFrontFace(unsigned int);

    // RVA: 0x21BD | Ordinal: 8638
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21CA | Ordinal: 8651
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21F7 | Ordinal: 8696
        void glGenLists(int);

    // RVA: 0x220F | Ordinal: 8720
        void glGenQueries(int, unsigned int *);

    // RVA: 0x224B | Ordinal: 8780
        void glGenTextures(int, unsigned int *);

    // RVA: 0x229D | Ordinal: 8862
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22D6 | Ordinal: 8919
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x2332 | Ordinal: 9011
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2347 | Ordinal: 9032
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2375 | Ordinal: 9078
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x239C | Ordinal: 9117
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23B2 | Ordinal: 9139
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23C8 | Ordinal: 9161
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23E2 | Ordinal: 9187
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23F1 | Ordinal: 9202
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2400 | Ordinal: 9217
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x240F | Ordinal: 9232
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x241D | Ordinal: 9246
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2439 | Ordinal: 9274
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2448 | Ordinal: 9289
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2457 | Ordinal: 9304
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2477 | Ordinal: 9336
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x2492 | Ordinal: 9363
        void glGetError(void);

    // RVA: 0x24B7 | Ordinal: 9400
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x250D | Ordinal: 9486
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x251C | Ordinal: 9501
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x252B | Ordinal: 9516
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2572 | Ordinal: 9587
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x259B | Ordinal: 9628
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25AC | Ordinal: 9645
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25BD | Ordinal: 9662
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25CE | Ordinal: 9679
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25DF | Ordinal: 9696
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25F0 | Ordinal: 9713
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x2601 | Ordinal: 9730
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2610 | Ordinal: 9745
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x261F | Ordinal: 9760
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x262E | Ordinal: 9775
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2668 | Ordinal: 9833
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x2679 | Ordinal: 9850
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x268A | Ordinal: 9867
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x269B | Ordinal: 9884
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26B3 | Ordinal: 9908
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26CA | Ordinal: 9931
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x272A | Ordinal: 10027
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2759 | Ordinal: 10074
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x277D | Ordinal: 10110
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2793 | Ordinal: 10132
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27FA | Ordinal: 10235
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2806 | Ordinal: 10247
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2826 | Ordinal: 10279
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x283B | Ordinal: 10300
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2856 | Ordinal: 10327
        void glGetString(unsigned int);

    // RVA: 0x28AC | Ordinal: 10413
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28BD | Ordinal: 10430
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28CE | Ordinal: 10447
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28DF | Ordinal: 10464
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28F0 | Ordinal: 10481
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x2901 | Ordinal: 10498
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x291C | Ordinal: 10525
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2937 | Ordinal: 10552
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2978 | Ordinal: 10617
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2993 | Ordinal: 10644
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29F5 | Ordinal: 10742
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A22 | Ordinal: 10787
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A37 | Ordinal: 10808
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A95 | Ordinal: 10902
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AA9 | Ordinal: 10922
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2ABE | Ordinal: 10943
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AD3 | Ordinal: 10964
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B09 | Ordinal: 11018
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B21 | Ordinal: 11042
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B32 | Ordinal: 11059
        void glIndexMask(unsigned int);

    // RVA: 0x2B42 | Ordinal: 11075
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B53 | Ordinal: 11092
        void glIndexd(double);

    // RVA: 0x2B64 | Ordinal: 11109
        void glIndexdv(double const *);

    // RVA: 0x2B75 | Ordinal: 11126
        void glIndexf(float);

    // RVA: 0x2B86 | Ordinal: 11143
        void glIndexfv(float const *);

    // RVA: 0x2B97 | Ordinal: 11160
        void glIndexi(int);

    // RVA: 0x2BA8 | Ordinal: 11177
        void glIndexiv(int const *);

    // RVA: 0x2BB9 | Ordinal: 11194
        void glIndexs(short);

    // RVA: 0x2BCA | Ordinal: 11211
        void glIndexsv(short const *);

    // RVA: 0x2BDA | Ordinal: 11227
        void glIndexub(unsigned char);

    // RVA: 0x2BF1 | Ordinal: 11250
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C09 | Ordinal: 11274
        void glInitNames(void);

    // RVA: 0x2C19 | Ordinal: 11290
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C51 | Ordinal: 11346
        void glIsBuffer(unsigned int);

    // RVA: 0x2C6C | Ordinal: 11373
        void glIsEnabled(unsigned int);

    // RVA: 0x2CAC | Ordinal: 11437
        void glIsList(unsigned int);

    // RVA: 0x2CB8 | Ordinal: 11449
        void glIsProgram(unsigned int);

    // RVA: 0x2CD9 | Ordinal: 11482
        void glIsQuery(unsigned int);

    // RVA: 0x2D10 | Ordinal: 11537
        void glIsShader(unsigned int);

    // RVA: 0x2D3B | Ordinal: 11580
        void glIsTexture(unsigned int);

    // RVA: 0x2D75 | Ordinal: 11638
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D86 | Ordinal: 11655
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D97 | Ordinal: 11672
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DA8 | Ordinal: 11689
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DB9 | Ordinal: 11706
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DCA | Ordinal: 11723
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DDB | Ordinal: 11740
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DEC | Ordinal: 11757
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2DFD | Ordinal: 11774
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E0F | Ordinal: 11792
        void glLineWidth(float);

    // RVA: 0x2E24 | Ordinal: 11813
        void glLinkProgram(unsigned int);

    // RVA: 0x2E3E | Ordinal: 11839
        void glListBase(unsigned int);

    // RVA: 0x2E4F | Ordinal: 11856
        void glLoadIdentity(void);

    // RVA: 0x2E60 | Ordinal: 11873
        void glLoadMatrixd(double const *);

    // RVA: 0x2E71 | Ordinal: 11890
        void glLoadMatrixf(float const *);

    // RVA: 0x2E82 | Ordinal: 11907
        void glLoadName(unsigned int);

    // RVA: 0x2E90 | Ordinal: 11921
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2E9E | Ordinal: 11935
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EAF | Ordinal: 11952
        void glLogicOp(unsigned int);

    // RVA: 0x2EC9 | Ordinal: 11978
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2EDA | Ordinal: 11995
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EEB | Ordinal: 12012
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2EFC | Ordinal: 12029
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F09 | Ordinal: 12042
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F36 | Ordinal: 12087
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F47 | Ordinal: 12104
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F58 | Ordinal: 12121
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F69 | Ordinal: 12138
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F7E | Ordinal: 12159
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F8F | Ordinal: 12176
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2FA0 | Ordinal: 12193
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FB1 | Ordinal: 12210
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FC2 | Ordinal: 12227
        void glMatrixMode(unsigned int);

    // RVA: 0x2FEA | Ordinal: 12267
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x2FFB | Ordinal: 12284
        void glMultMatrixd(double const *);

    // RVA: 0x300C | Ordinal: 12301
        void glMultMatrixf(float const *);

    // RVA: 0x301A | Ordinal: 12315
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x3028 | Ordinal: 12329
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x3035 | Ordinal: 12342
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3051 | Ordinal: 12370
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x307E | Ordinal: 12415
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x308C | Ordinal: 12429
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x309A | Ordinal: 12443
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30A8 | Ordinal: 12457
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30B6 | Ordinal: 12471
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30C4 | Ordinal: 12485
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30D2 | Ordinal: 12499
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30E0 | Ordinal: 12513
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30EE | Ordinal: 12527
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x30FC | Ordinal: 12541
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x310A | Ordinal: 12555
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x3118 | Ordinal: 12569
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x3126 | Ordinal: 12583
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x3134 | Ordinal: 12597
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x3142 | Ordinal: 12611
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x3150 | Ordinal: 12625
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x315E | Ordinal: 12639
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x316C | Ordinal: 12653
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x317A | Ordinal: 12667
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x3188 | Ordinal: 12681
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x3196 | Ordinal: 12695
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31A4 | Ordinal: 12709
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31B2 | Ordinal: 12723
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31C0 | Ordinal: 12737
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31CE | Ordinal: 12751
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31DC | Ordinal: 12765
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31EA | Ordinal: 12779
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31F8 | Ordinal: 12793
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x3206 | Ordinal: 12807
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x3214 | Ordinal: 12821
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x3222 | Ordinal: 12835
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x3230 | Ordinal: 12849
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x32B9 | Ordinal: 12986
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32CA | Ordinal: 13003
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32DB | Ordinal: 13020
        void glNormal3bv(signed char const *);

    // RVA: 0x32EC | Ordinal: 13037
        void glNormal3d(double, double, double);

    // RVA: 0x32FD | Ordinal: 13054
        void glNormal3dv(double const *);

    // RVA: 0x330E | Ordinal: 13071
        void glNormal3f(float, float, float);

    // RVA: 0x331F | Ordinal: 13088
        void glNormal3fv(float const *);

    // RVA: 0x3330 | Ordinal: 13105
        void glNormal3i(int, int, int);

    // RVA: 0x3341 | Ordinal: 13122
        void glNormal3iv(int const *);

    // RVA: 0x3352 | Ordinal: 13139
        void glNormal3s(short, short, short);

    // RVA: 0x3363 | Ordinal: 13156
        void glNormal3sv(short const *);

    // RVA: 0x338B | Ordinal: 13196
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33A6 | Ordinal: 13223
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33B7 | Ordinal: 13240
        void glPassThrough(float);

    // RVA: 0x33EE | Ordinal: 13295
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x33FF | Ordinal: 13312
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x3410 | Ordinal: 13329
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x3421 | Ordinal: 13346
        void glPixelStoref(unsigned int, float);

    // RVA: 0x343C | Ordinal: 13373
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3456 | Ordinal: 13399
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x3467 | Ordinal: 13416
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x3478 | Ordinal: 13433
        void glPixelZoom(float, float);

    // RVA: 0x3485 | Ordinal: 13446
        void glPointParameterf(unsigned int, float);

    // RVA: 0x349B | Ordinal: 13468
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34B1 | Ordinal: 13490
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34C7 | Ordinal: 13512
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34E1 | Ordinal: 13538
        void glPointSize(float);

    // RVA: 0x34FB | Ordinal: 13564
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3515 | Ordinal: 13590
        void glPolygonOffset(float, float);

    // RVA: 0x352F | Ordinal: 13616
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x3540 | Ordinal: 13633
        void glPopAttrib(void);

    // RVA: 0x3550 | Ordinal: 13649
        void glPopClientAttrib(void);

    // RVA: 0x3566 | Ordinal: 13671
        void glPopMatrix(void);

    // RVA: 0x3577 | Ordinal: 13688
        void glPopName(void);

    // RVA: 0x3599 | Ordinal: 13722
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37E5 | Ordinal: 14310
        void glPushAttrib(unsigned int);

    // RVA: 0x37F5 | Ordinal: 14326
        void glPushClientAttrib(unsigned int);

    // RVA: 0x380B | Ordinal: 14348
        void glPushMatrix(void);

    // RVA: 0x381C | Ordinal: 14365
        void glPushName(unsigned int);

    // RVA: 0x383B | Ordinal: 14396
        void glRasterPos2d(double, double);

    // RVA: 0x384C | Ordinal: 14413
        void glRasterPos2dv(double const *);

    // RVA: 0x385D | Ordinal: 14430
        void glRasterPos2f(float, float);

    // RVA: 0x386E | Ordinal: 14447
        void glRasterPos2fv(float const *);

    // RVA: 0x387F | Ordinal: 14464
        void glRasterPos2i(int, int);

    // RVA: 0x3890 | Ordinal: 14481
        void glRasterPos2iv(int const *);

    // RVA: 0x38A1 | Ordinal: 14498
        void glRasterPos2s(short, short);

    // RVA: 0x38B2 | Ordinal: 14515
        void glRasterPos2sv(short const *);

    // RVA: 0x38C3 | Ordinal: 14532
        void glRasterPos3d(double, double, double);

    // RVA: 0x38D4 | Ordinal: 14549
        void glRasterPos3dv(double const *);

    // RVA: 0x38E5 | Ordinal: 14566
        void glRasterPos3f(float, float, float);

    // RVA: 0x38F6 | Ordinal: 14583
        void glRasterPos3fv(float const *);

    // RVA: 0x3907 | Ordinal: 14600
        void glRasterPos3i(int, int, int);

    // RVA: 0x3918 | Ordinal: 14617
        void glRasterPos3iv(int const *);

    // RVA: 0x3929 | Ordinal: 14634
        void glRasterPos3s(short, short, short);

    // RVA: 0x393A | Ordinal: 14651
        void glRasterPos3sv(short const *);

    // RVA: 0x394B | Ordinal: 14668
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x395C | Ordinal: 14685
        void glRasterPos4dv(double const *);

    // RVA: 0x396D | Ordinal: 14702
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x397E | Ordinal: 14719
        void glRasterPos4fv(float const *);

    // RVA: 0x398F | Ordinal: 14736
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x39A0 | Ordinal: 14753
        void glRasterPos4iv(int const *);

    // RVA: 0x39B1 | Ordinal: 14770
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39C2 | Ordinal: 14787
        void glRasterPos4sv(short const *);

    // RVA: 0x39D4 | Ordinal: 14805
        void glReadBuffer(unsigned int);

    // RVA: 0x39EF | Ordinal: 14832
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A0C | Ordinal: 14861
        void glRectd(double, double, double, double);

    // RVA: 0x3A1D | Ordinal: 14878
        void glRectdv(double const *, double const *);

    // RVA: 0x3A2E | Ordinal: 14895
        void glRectf(float, float, float, float);

    // RVA: 0x3A3F | Ordinal: 14912
        void glRectfv(float const *, float const *);

    // RVA: 0x3A50 | Ordinal: 14929
        void glRecti(int, int, int, int);

    // RVA: 0x3A61 | Ordinal: 14946
        void glRectiv(int const *, int const *);

    // RVA: 0x3A72 | Ordinal: 14963
        void glRects(short, short, short, short);

    // RVA: 0x3A83 | Ordinal: 14980
        void glRectsv(short const *, short const *);

    // RVA: 0x3A9F | Ordinal: 15008
        void glRenderMode(unsigned int);

    // RVA: 0x3AD4 | Ordinal: 15061
        void glResetHistogram(unsigned int);

    // RVA: 0x3AE3 | Ordinal: 15076
        void glResetMinmax(unsigned int);

    // RVA: 0x3B01 | Ordinal: 15106
        void glRotated(double, double, double, double);

    // RVA: 0x3B12 | Ordinal: 15123
        void glRotatef(float, float, float, float);

    // RVA: 0x3B21 | Ordinal: 15138
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3BA6 | Ordinal: 15271
        void glScaled(double, double, double);

    // RVA: 0x3BB7 | Ordinal: 15288
        void glScalef(float, float, float);

    // RVA: 0x3BC9 | Ordinal: 15306
        void glScissor(int, int, int, int);

    // RVA: 0x3BFD | Ordinal: 15358
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C0A | Ordinal: 15371
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C17 | Ordinal: 15384
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C24 | Ordinal: 15397
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C31 | Ordinal: 15410
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C3E | Ordinal: 15423
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C4B | Ordinal: 15436
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C58 | Ordinal: 15449
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C65 | Ordinal: 15462
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C72 | Ordinal: 15475
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C7F | Ordinal: 15488
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C8C | Ordinal: 15501
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3C99 | Ordinal: 15514
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CA6 | Ordinal: 15527
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CB3 | Ordinal: 15540
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CC0 | Ordinal: 15553
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CE5 | Ordinal: 15590
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CF6 | Ordinal: 15607
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D05 | Ordinal: 15622
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D16 | Ordinal: 15639
        void glShadeModel(unsigned int);

    // RVA: 0x3D2D | Ordinal: 15662
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D4E | Ordinal: 15695
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D63 | Ordinal: 15716
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D7E | Ordinal: 15743
        void glStencilMask(unsigned int);

    // RVA: 0x3D93 | Ordinal: 15764
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DAE | Ordinal: 15791
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DC3 | Ordinal: 15812
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DF6 | Ordinal: 15863
        void glTexCoord1d(double);

    // RVA: 0x3E07 | Ordinal: 15880
        void glTexCoord1dv(double const *);

    // RVA: 0x3E18 | Ordinal: 15897
        void glTexCoord1f(float);

    // RVA: 0x3E29 | Ordinal: 15914
        void glTexCoord1fv(float const *);

    // RVA: 0x3E3A | Ordinal: 15931
        void glTexCoord1i(int);

    // RVA: 0x3E4B | Ordinal: 15948
        void glTexCoord1iv(int const *);

    // RVA: 0x3E5C | Ordinal: 15965
        void glTexCoord1s(short);

    // RVA: 0x3E6D | Ordinal: 15982
        void glTexCoord1sv(short const *);

    // RVA: 0x3E7E | Ordinal: 15999
        void glTexCoord2d(double, double);

    // RVA: 0x3E8F | Ordinal: 16016
        void glTexCoord2dv(double const *);

    // RVA: 0x3EA0 | Ordinal: 16033
        void glTexCoord2f(float, float);

    // RVA: 0x3EB1 | Ordinal: 16050
        void glTexCoord2fv(float const *);

    // RVA: 0x3EC2 | Ordinal: 16067
        void glTexCoord2i(int, int);

    // RVA: 0x3ED3 | Ordinal: 16084
        void glTexCoord2iv(int const *);

    // RVA: 0x3EE4 | Ordinal: 16101
        void glTexCoord2s(short, short);

    // RVA: 0x3EF5 | Ordinal: 16118
        void glTexCoord2sv(short const *);

    // RVA: 0x3F06 | Ordinal: 16135
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F17 | Ordinal: 16152
        void glTexCoord3dv(double const *);

    // RVA: 0x3F28 | Ordinal: 16169
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F39 | Ordinal: 16186
        void glTexCoord3fv(float const *);

    // RVA: 0x3F4A | Ordinal: 16203
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F5B | Ordinal: 16220
        void glTexCoord3iv(int const *);

    // RVA: 0x3F6C | Ordinal: 16237
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F7D | Ordinal: 16254
        void glTexCoord3sv(short const *);

    // RVA: 0x3F8E | Ordinal: 16271
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3F9F | Ordinal: 16288
        void glTexCoord4dv(double const *);

    // RVA: 0x3FB0 | Ordinal: 16305
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FC1 | Ordinal: 16322
        void glTexCoord4fv(float const *);

    // RVA: 0x3FD2 | Ordinal: 16339
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FE3 | Ordinal: 16356
        void glTexCoord4iv(int const *);

    // RVA: 0x3FF4 | Ordinal: 16373
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x4005 | Ordinal: 16390
        void glTexCoord4sv(short const *);

    // RVA: 0x4075 | Ordinal: 16502
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x4086 | Ordinal: 16519
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x4097 | Ordinal: 16536
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40A8 | Ordinal: 16553
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40B9 | Ordinal: 16570
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40CA | Ordinal: 16587
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40DB | Ordinal: 16604
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40EC | Ordinal: 16621
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x40FD | Ordinal: 16638
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x410E | Ordinal: 16655
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x411F | Ordinal: 16672
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x4130 | Ordinal: 16689
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x414B | Ordinal: 16716
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4174 | Ordinal: 16757
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x41C5 | Ordinal: 16838
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41E0 | Ordinal: 16865
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41FB | Ordinal: 16892
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4216 | Ordinal: 16919
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4257 | Ordinal: 16984
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4271 | Ordinal: 17010
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x428A | Ordinal: 17035
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42E3 | Ordinal: 17124
        void glTranslated(double, double, double);

    // RVA: 0x42F4 | Ordinal: 17141
        void glTranslatef(float, float, float);

    // RVA: 0x4318 | Ordinal: 17177
        void glUniform1f(int, float);

    // RVA: 0x432D | Ordinal: 17198
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4342 | Ordinal: 17219
        void glUniform1i(int, int);

    // RVA: 0x4357 | Ordinal: 17240
        void glUniform1iv(int, int, int const *);

    // RVA: 0x43AA | Ordinal: 17323
        void glUniform2f(int, float, float);

    // RVA: 0x43BF | Ordinal: 17344
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43D4 | Ordinal: 17365
        void glUniform2i(int, int, int);

    // RVA: 0x43E9 | Ordinal: 17386
        void glUniform2iv(int, int, int const *);

    // RVA: 0x443C | Ordinal: 17469
        void glUniform3f(int, float, float, float);

    // RVA: 0x4451 | Ordinal: 17490
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4466 | Ordinal: 17511
        void glUniform3i(int, int, int, int);

    // RVA: 0x447B | Ordinal: 17532
        void glUniform3iv(int, int, int const *);

    // RVA: 0x44CE | Ordinal: 17615
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44E3 | Ordinal: 17636
        void glUniform4fv(int, int, float const *);

    // RVA: 0x44F8 | Ordinal: 17657
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x450D | Ordinal: 17678
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4566 | Ordinal: 17767
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x4586 | Ordinal: 17799
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45A6 | Ordinal: 17831
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45C7 | Ordinal: 17864
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45E7 | Ordinal: 17896
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4607 | Ordinal: 17928
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x4628 | Ordinal: 17961
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x4648 | Ordinal: 17993
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4668 | Ordinal: 18025
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x468A | Ordinal: 18059
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46A1 | Ordinal: 18082
        void glUseProgram(unsigned int);

    // RVA: 0x46C1 | Ordinal: 18114
        void glValidateProgram(unsigned int);

    // RVA: 0x46E6 | Ordinal: 18151
        void glVertex2d(double, double);

    // RVA: 0x46F7 | Ordinal: 18168
        void glVertex2dv(double const *);

    // RVA: 0x4708 | Ordinal: 18185
        void glVertex2f(float, float);

    // RVA: 0x4719 | Ordinal: 18202
        void glVertex2fv(float const *);

    // RVA: 0x472A | Ordinal: 18219
        void glVertex2i(int, int);

    // RVA: 0x473B | Ordinal: 18236
        void glVertex2iv(int const *);

    // RVA: 0x474C | Ordinal: 18253
        void glVertex2s(short, short);

    // RVA: 0x475D | Ordinal: 18270
        void glVertex2sv(short const *);

    // RVA: 0x476E | Ordinal: 18287
        void glVertex3d(double, double, double);

    // RVA: 0x477F | Ordinal: 18304
        void glVertex3dv(double const *);

    // RVA: 0x4790 | Ordinal: 18321
        void glVertex3f(float, float, float);

    // RVA: 0x47A1 | Ordinal: 18338
        void glVertex3fv(float const *);

    // RVA: 0x47B2 | Ordinal: 18355
        void glVertex3i(int, int, int);

    // RVA: 0x47C3 | Ordinal: 18372
        void glVertex3iv(int const *);

    // RVA: 0x47D4 | Ordinal: 18389
        void glVertex3s(short, short, short);

    // RVA: 0x47E5 | Ordinal: 18406
        void glVertex3sv(short const *);

    // RVA: 0x47F6 | Ordinal: 18423
        void glVertex4d(double, double, double, double);

    // RVA: 0x4807 | Ordinal: 18440
        void glVertex4dv(double const *);

    // RVA: 0x4818 | Ordinal: 18457
        void glVertex4f(float, float, float, float);

    // RVA: 0x4829 | Ordinal: 18474
        void glVertex4fv(float const *);

    // RVA: 0x483A | Ordinal: 18491
        void glVertex4i(int, int, int, int);

    // RVA: 0x484B | Ordinal: 18508
        void glVertex4iv(int const *);

    // RVA: 0x485C | Ordinal: 18525
        void glVertex4s(short, short, short, short);

    // RVA: 0x486D | Ordinal: 18542
        void glVertex4sv(short const *);

    // RVA: 0x4888 | Ordinal: 18569
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x4895 | Ordinal: 18582
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48A3 | Ordinal: 18596
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48B1 | Ordinal: 18610
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48BE | Ordinal: 18623
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48CB | Ordinal: 18636
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48D8 | Ordinal: 18649
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48E5 | Ordinal: 18662
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48F3 | Ordinal: 18676
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x4901 | Ordinal: 18690
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x490E | Ordinal: 18703
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x491B | Ordinal: 18716
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x4928 | Ordinal: 18729
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x4935 | Ordinal: 18742
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x4943 | Ordinal: 18756
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x4951 | Ordinal: 18770
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x495E | Ordinal: 18783
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x496B | Ordinal: 18796
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x4978 | Ordinal: 18809
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x4985 | Ordinal: 18822
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x4992 | Ordinal: 18835
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x499F | Ordinal: 18848
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49AC | Ordinal: 18861
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49B9 | Ordinal: 18874
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49C6 | Ordinal: 18887
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49D3 | Ordinal: 18900
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49E0 | Ordinal: 18913
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49ED | Ordinal: 18926
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x49FB | Ordinal: 18940
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A09 | Ordinal: 18954
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A16 | Ordinal: 18967
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A23 | Ordinal: 18980
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A30 | Ordinal: 18993
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A3D | Ordinal: 19006
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A4A | Ordinal: 19019
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A57 | Ordinal: 19032
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4C4C | Ordinal: 19533
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4CB4 | Ordinal: 19637
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CC6 | Ordinal: 19655
        void glViewport(int, int, int, int);

    // RVA: 0x4D0B | Ordinal: 19724
        void glWindowPos2d(double, double);

    // RVA: 0x4D18 | Ordinal: 19737
        void glWindowPos2dv(double const *);

    // RVA: 0x4D25 | Ordinal: 19750
        void glWindowPos2f(float, float);

    // RVA: 0x4D32 | Ordinal: 19763
        void glWindowPos2fv(float const *);

    // RVA: 0x4D3F | Ordinal: 19776
        void glWindowPos2i(int, int);

    // RVA: 0x4D4C | Ordinal: 19789
        void glWindowPos2iv(int const *);

    // RVA: 0x4D59 | Ordinal: 19802
        void glWindowPos2s(short, short);

    // RVA: 0x4D66 | Ordinal: 19815
        void glWindowPos2sv(short const *);

    // RVA: 0x4D73 | Ordinal: 19828
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D80 | Ordinal: 19841
        void glWindowPos3dv(double const *);

    // RVA: 0x4D8D | Ordinal: 19854
        void glWindowPos3f(float, float, float);

    // RVA: 0x4D9A | Ordinal: 19867
        void glWindowPos3fv(float const *);

    // RVA: 0x4DA7 | Ordinal: 19880
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DB4 | Ordinal: 19893
        void glWindowPos3iv(int const *);

    // RVA: 0x4DC1 | Ordinal: 19906
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DCE | Ordinal: 19919
        void glWindowPos3sv(short const *);

    // RVA: 0x4F21 | Ordinal: 20258
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FE3 | Ordinal: 20452
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6107 | Ordinal: 24840
        void versionProfile(void);

    // RVA: 0x484 | Ordinal: 1157
        void _QOpenGLFunctions_2_1(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_2_1_HPP
