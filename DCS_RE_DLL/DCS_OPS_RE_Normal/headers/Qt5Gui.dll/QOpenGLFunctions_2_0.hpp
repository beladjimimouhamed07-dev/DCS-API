#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_2_0
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_2_0
{
public:

    // RVA: 0x1B5 | Ordinal: 438
        void QOpenGLFunctions_2_0(void);

    // RVA: 0x11BE | Ordinal: 4543
        void glAccum(unsigned int, float);

    // RVA: 0x11D8 | Ordinal: 4569
        void glActiveTexture(unsigned int);

    // RVA: 0x11F2 | Ordinal: 4595
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x1202 | Ordinal: 4611
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x1212 | Ordinal: 4627
        void glArrayElement(int);

    // RVA: 0x121E | Ordinal: 4639
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1239 | Ordinal: 4666
        void glBegin(unsigned int);

    // RVA: 0x1258 | Ordinal: 4697
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x128C | Ordinal: 4749
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12A2 | Ordinal: 4771
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x135B | Ordinal: 4956
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x13A6 | Ordinal: 5031
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13B7 | Ordinal: 5048
        void glBlendColor(float, float, float, float);

    // RVA: 0x13D0 | Ordinal: 5073
        void glBlendEquation(unsigned int);

    // RVA: 0x13E5 | Ordinal: 5094
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x141A | Ordinal: 5147
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1431 | Ordinal: 5170
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1476 | Ordinal: 5239
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x1490 | Ordinal: 5265
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14AA | Ordinal: 5291
        void glCallList(unsigned int);

    // RVA: 0x14BB | Ordinal: 5308
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14F4 | Ordinal: 5365
        void glClear(unsigned int);

    // RVA: 0x150E | Ordinal: 5391
        void glClearAccum(float, float, float, float);

    // RVA: 0x1578 | Ordinal: 5497
        void glClearColor(float, float, float, float);

    // RVA: 0x1592 | Ordinal: 5523
        void glClearDepth(double);

    // RVA: 0x15B7 | Ordinal: 5560
        void glClearIndex(float);

    // RVA: 0x15D5 | Ordinal: 5590
        void glClearStencil(int);

    // RVA: 0x15F4 | Ordinal: 5621
        void glClientActiveTexture(unsigned int);

    // RVA: 0x1618 | Ordinal: 5657
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x1629 | Ordinal: 5674
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x163A | Ordinal: 5691
        void glColor3bv(signed char const *);

    // RVA: 0x164B | Ordinal: 5708
        void glColor3d(double, double, double);

    // RVA: 0x165C | Ordinal: 5725
        void glColor3dv(double const *);

    // RVA: 0x166D | Ordinal: 5742
        void glColor3f(float, float, float);

    // RVA: 0x167E | Ordinal: 5759
        void glColor3fv(float const *);

    // RVA: 0x168F | Ordinal: 5776
        void glColor3i(int, int, int);

    // RVA: 0x16A0 | Ordinal: 5793
        void glColor3iv(int const *);

    // RVA: 0x16B1 | Ordinal: 5810
        void glColor3s(short, short, short);

    // RVA: 0x16C2 | Ordinal: 5827
        void glColor3sv(short const *);

    // RVA: 0x16D3 | Ordinal: 5844
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16E4 | Ordinal: 5861
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16F5 | Ordinal: 5878
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1706 | Ordinal: 5895
        void glColor3uiv(unsigned int const *);

    // RVA: 0x1717 | Ordinal: 5912
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x1728 | Ordinal: 5929
        void glColor3usv(unsigned short const *);

    // RVA: 0x1739 | Ordinal: 5946
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x174A | Ordinal: 5963
        void glColor4bv(signed char const *);

    // RVA: 0x175B | Ordinal: 5980
        void glColor4d(double, double, double, double);

    // RVA: 0x176C | Ordinal: 5997
        void glColor4dv(double const *);

    // RVA: 0x177D | Ordinal: 6014
        void glColor4f(float, float, float, float);

    // RVA: 0x178E | Ordinal: 6031
        void glColor4fv(float const *);

    // RVA: 0x179F | Ordinal: 6048
        void glColor4i(int, int, int, int);

    // RVA: 0x17B0 | Ordinal: 6065
        void glColor4iv(int const *);

    // RVA: 0x17C1 | Ordinal: 6082
        void glColor4s(short, short, short, short);

    // RVA: 0x17D2 | Ordinal: 6099
        void glColor4sv(short const *);

    // RVA: 0x17E3 | Ordinal: 6116
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17F4 | Ordinal: 6133
        void glColor4ubv(unsigned char const *);

    // RVA: 0x1805 | Ordinal: 6150
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1816 | Ordinal: 6167
        void glColor4uiv(unsigned int const *);

    // RVA: 0x1827 | Ordinal: 6184
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x1838 | Ordinal: 6201
        void glColor4usv(unsigned short const *);

    // RVA: 0x184A | Ordinal: 6219
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1877 | Ordinal: 6264
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x18B7 | Ordinal: 6328
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18C6 | Ordinal: 6343
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18D5 | Ordinal: 6358
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18E4 | Ordinal: 6373
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18F3 | Ordinal: 6388
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x18FF | Ordinal: 6400
        void glCompileShader(unsigned int);

    // RVA: 0x1916 | Ordinal: 6423
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x192E | Ordinal: 6447
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1946 | Ordinal: 6471
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x195D | Ordinal: 6494
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1975 | Ordinal: 6518
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x198D | Ordinal: 6542
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19AB | Ordinal: 6572
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19BA | Ordinal: 6587
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19C9 | Ordinal: 6602
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19D8 | Ordinal: 6617
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19E7 | Ordinal: 6632
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19F6 | Ordinal: 6647
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A17 | Ordinal: 6680
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A26 | Ordinal: 6695
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A35 | Ordinal: 6710
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A44 | Ordinal: 6725
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A5E | Ordinal: 6751
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A6E | Ordinal: 6767
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A88 | Ordinal: 6793
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AA1 | Ordinal: 6818
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ABB | Ordinal: 6844
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AD4 | Ordinal: 6869
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AF3 | Ordinal: 6900
        void glCreateProgram(void);

    // RVA: 0x1B10 | Ordinal: 6929
        void glCreateShader(unsigned int);

    // RVA: 0x1B3C | Ordinal: 6973
        void glCullFace(unsigned int);

    // RVA: 0x1B61 | Ordinal: 7010
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B8E | Ordinal: 7055
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1B9A | Ordinal: 7067
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BBB | Ordinal: 7100
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BF2 | Ordinal: 7155
        void glDeleteShader(unsigned int);

    // RVA: 0x1C1D | Ordinal: 7198
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C58 | Ordinal: 7257
        void glDepthFunc(unsigned int);

    // RVA: 0x1C73 | Ordinal: 7284
        void glDepthMask(unsigned char);

    // RVA: 0x1C8D | Ordinal: 7310
        void glDepthRange(double, double);

    // RVA: 0x1CC1 | Ordinal: 7362
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CDC | Ordinal: 7389
        void glDisable(unsigned int);

    // RVA: 0x1CF5 | Ordinal: 7414
        void glDisableClientState(unsigned int);

    // RVA: 0x1D03 | Ordinal: 7428
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D3F | Ordinal: 7488
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D80 | Ordinal: 7553
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D95 | Ordinal: 7574
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DAF | Ordinal: 7600
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E1A | Ordinal: 7707
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E2A | Ordinal: 7723
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E7D | Ordinal: 7806
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E8D | Ordinal: 7822
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1E9E | Ordinal: 7839
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EB0 | Ordinal: 7857
        void glEnable(unsigned int);

    // RVA: 0x1EC9 | Ordinal: 7882
        void glEnableClientState(unsigned int);

    // RVA: 0x1ED7 | Ordinal: 7896
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1F04 | Ordinal: 7941
        void glEnd(void);

    // RVA: 0x1F27 | Ordinal: 7976
        void glEndList(void);

    // RVA: 0x1F34 | Ordinal: 7989
        void glEndQuery(unsigned int);

    // RVA: 0x1F6D | Ordinal: 8046
        void glEvalCoord1d(double);

    // RVA: 0x1F7E | Ordinal: 8063
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F8F | Ordinal: 8080
        void glEvalCoord1f(float);

    // RVA: 0x1FA0 | Ordinal: 8097
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FB1 | Ordinal: 8114
        void glEvalCoord2d(double, double);

    // RVA: 0x1FC2 | Ordinal: 8131
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FD3 | Ordinal: 8148
        void glEvalCoord2f(float, float);

    // RVA: 0x1FE4 | Ordinal: 8165
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FF5 | Ordinal: 8182
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x2006 | Ordinal: 8199
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x2017 | Ordinal: 8216
        void glEvalPoint1(int);

    // RVA: 0x2028 | Ordinal: 8233
        void glEvalPoint2(int, int);

    // RVA: 0x2039 | Ordinal: 8250
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x205C | Ordinal: 8285
        void glFinish(void);

    // RVA: 0x2077 | Ordinal: 8312
        void glFlush(void);

    // RVA: 0x20A2 | Ordinal: 8355
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20AF | Ordinal: 8368
        void glFogCoordd(double);

    // RVA: 0x20BC | Ordinal: 8381
        void glFogCoorddv(double const *);

    // RVA: 0x20C9 | Ordinal: 8394
        void glFogCoordf(float);

    // RVA: 0x20D6 | Ordinal: 8407
        void glFogCoordfv(float const *);

    // RVA: 0x20E7 | Ordinal: 8424
        void glFogf(unsigned int, float);

    // RVA: 0x20F8 | Ordinal: 8441
        void glFogfv(unsigned int, float const *);

    // RVA: 0x2109 | Ordinal: 8458
        void glFogi(unsigned int, int);

    // RVA: 0x211A | Ordinal: 8475
        void glFogiv(unsigned int, int const *);

    // RVA: 0x21A2 | Ordinal: 8611
        void glFrontFace(unsigned int);

    // RVA: 0x21BC | Ordinal: 8637
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21C9 | Ordinal: 8650
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21F6 | Ordinal: 8695
        void glGenLists(int);

    // RVA: 0x220E | Ordinal: 8719
        void glGenQueries(int, unsigned int *);

    // RVA: 0x224A | Ordinal: 8779
        void glGenTextures(int, unsigned int *);

    // RVA: 0x229C | Ordinal: 8861
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22D5 | Ordinal: 8918
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x2331 | Ordinal: 9010
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2346 | Ordinal: 9031
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2374 | Ordinal: 9077
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x239B | Ordinal: 9116
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23B1 | Ordinal: 9138
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23C7 | Ordinal: 9160
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23E1 | Ordinal: 9186
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23F0 | Ordinal: 9201
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x23FF | Ordinal: 9216
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x240E | Ordinal: 9231
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x241C | Ordinal: 9245
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2438 | Ordinal: 9273
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2447 | Ordinal: 9288
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2456 | Ordinal: 9303
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2476 | Ordinal: 9335
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x2491 | Ordinal: 9362
        void glGetError(void);

    // RVA: 0x24B6 | Ordinal: 9399
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x250C | Ordinal: 9485
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x251B | Ordinal: 9500
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x252A | Ordinal: 9515
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2571 | Ordinal: 9586
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x259A | Ordinal: 9627
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25AB | Ordinal: 9644
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25BC | Ordinal: 9661
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25CD | Ordinal: 9678
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25DE | Ordinal: 9695
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25EF | Ordinal: 9712
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x2600 | Ordinal: 9729
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x260F | Ordinal: 9744
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x261E | Ordinal: 9759
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x262D | Ordinal: 9774
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2667 | Ordinal: 9832
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x2678 | Ordinal: 9849
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x2689 | Ordinal: 9866
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x269A | Ordinal: 9883
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26B2 | Ordinal: 9907
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26C9 | Ordinal: 9930
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2729 | Ordinal: 10026
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2758 | Ordinal: 10073
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x277C | Ordinal: 10109
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2792 | Ordinal: 10131
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27F9 | Ordinal: 10234
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2805 | Ordinal: 10246
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2825 | Ordinal: 10278
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x283A | Ordinal: 10299
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2855 | Ordinal: 10326
        void glGetString(unsigned int);

    // RVA: 0x28AB | Ordinal: 10412
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28BC | Ordinal: 10429
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28CD | Ordinal: 10446
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28DE | Ordinal: 10463
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28EF | Ordinal: 10480
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x2900 | Ordinal: 10497
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x291B | Ordinal: 10524
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2936 | Ordinal: 10551
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2977 | Ordinal: 10616
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2992 | Ordinal: 10643
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29F4 | Ordinal: 10741
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A21 | Ordinal: 10786
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A36 | Ordinal: 10807
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A94 | Ordinal: 10901
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AA8 | Ordinal: 10921
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2ABD | Ordinal: 10942
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AD2 | Ordinal: 10963
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B08 | Ordinal: 11017
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B20 | Ordinal: 11041
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B31 | Ordinal: 11058
        void glIndexMask(unsigned int);

    // RVA: 0x2B41 | Ordinal: 11074
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B52 | Ordinal: 11091
        void glIndexd(double);

    // RVA: 0x2B63 | Ordinal: 11108
        void glIndexdv(double const *);

    // RVA: 0x2B74 | Ordinal: 11125
        void glIndexf(float);

    // RVA: 0x2B85 | Ordinal: 11142
        void glIndexfv(float const *);

    // RVA: 0x2B96 | Ordinal: 11159
        void glIndexi(int);

    // RVA: 0x2BA7 | Ordinal: 11176
        void glIndexiv(int const *);

    // RVA: 0x2BB8 | Ordinal: 11193
        void glIndexs(short);

    // RVA: 0x2BC9 | Ordinal: 11210
        void glIndexsv(short const *);

    // RVA: 0x2BD9 | Ordinal: 11226
        void glIndexub(unsigned char);

    // RVA: 0x2BF0 | Ordinal: 11249
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C08 | Ordinal: 11273
        void glInitNames(void);

    // RVA: 0x2C18 | Ordinal: 11289
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C50 | Ordinal: 11345
        void glIsBuffer(unsigned int);

    // RVA: 0x2C6B | Ordinal: 11372
        void glIsEnabled(unsigned int);

    // RVA: 0x2CAB | Ordinal: 11436
        void glIsList(unsigned int);

    // RVA: 0x2CB7 | Ordinal: 11448
        void glIsProgram(unsigned int);

    // RVA: 0x2CD8 | Ordinal: 11481
        void glIsQuery(unsigned int);

    // RVA: 0x2D0F | Ordinal: 11536
        void glIsShader(unsigned int);

    // RVA: 0x2D3A | Ordinal: 11579
        void glIsTexture(unsigned int);

    // RVA: 0x2D74 | Ordinal: 11637
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D85 | Ordinal: 11654
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D96 | Ordinal: 11671
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DA7 | Ordinal: 11688
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DB8 | Ordinal: 11705
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DC9 | Ordinal: 11722
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DDA | Ordinal: 11739
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DEB | Ordinal: 11756
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2DFC | Ordinal: 11773
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E0E | Ordinal: 11791
        void glLineWidth(float);

    // RVA: 0x2E23 | Ordinal: 11812
        void glLinkProgram(unsigned int);

    // RVA: 0x2E3D | Ordinal: 11838
        void glListBase(unsigned int);

    // RVA: 0x2E4E | Ordinal: 11855
        void glLoadIdentity(void);

    // RVA: 0x2E5F | Ordinal: 11872
        void glLoadMatrixd(double const *);

    // RVA: 0x2E70 | Ordinal: 11889
        void glLoadMatrixf(float const *);

    // RVA: 0x2E81 | Ordinal: 11906
        void glLoadName(unsigned int);

    // RVA: 0x2E8F | Ordinal: 11920
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2E9D | Ordinal: 11934
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EAE | Ordinal: 11951
        void glLogicOp(unsigned int);

    // RVA: 0x2EC8 | Ordinal: 11977
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2ED9 | Ordinal: 11994
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EEA | Ordinal: 12011
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2EFB | Ordinal: 12028
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F08 | Ordinal: 12041
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F35 | Ordinal: 12086
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F46 | Ordinal: 12103
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F57 | Ordinal: 12120
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F68 | Ordinal: 12137
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F7D | Ordinal: 12158
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F8E | Ordinal: 12175
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2F9F | Ordinal: 12192
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FB0 | Ordinal: 12209
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FC1 | Ordinal: 12226
        void glMatrixMode(unsigned int);

    // RVA: 0x2FE9 | Ordinal: 12266
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x2FFA | Ordinal: 12283
        void glMultMatrixd(double const *);

    // RVA: 0x300B | Ordinal: 12300
        void glMultMatrixf(float const *);

    // RVA: 0x3019 | Ordinal: 12314
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x3027 | Ordinal: 12328
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x3034 | Ordinal: 12341
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3050 | Ordinal: 12369
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x307D | Ordinal: 12414
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x308B | Ordinal: 12428
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x3099 | Ordinal: 12442
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30A7 | Ordinal: 12456
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30B5 | Ordinal: 12470
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30C3 | Ordinal: 12484
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30D1 | Ordinal: 12498
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30DF | Ordinal: 12512
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30ED | Ordinal: 12526
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x30FB | Ordinal: 12540
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x3109 | Ordinal: 12554
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x3117 | Ordinal: 12568
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x3125 | Ordinal: 12582
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x3133 | Ordinal: 12596
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x3141 | Ordinal: 12610
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x314F | Ordinal: 12624
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x315D | Ordinal: 12638
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x316B | Ordinal: 12652
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x3179 | Ordinal: 12666
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x3187 | Ordinal: 12680
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x3195 | Ordinal: 12694
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31A3 | Ordinal: 12708
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31B1 | Ordinal: 12722
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31BF | Ordinal: 12736
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31CD | Ordinal: 12750
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31DB | Ordinal: 12764
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31E9 | Ordinal: 12778
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31F7 | Ordinal: 12792
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x3205 | Ordinal: 12806
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x3213 | Ordinal: 12820
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x3221 | Ordinal: 12834
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x322F | Ordinal: 12848
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x32B8 | Ordinal: 12985
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32C9 | Ordinal: 13002
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32DA | Ordinal: 13019
        void glNormal3bv(signed char const *);

    // RVA: 0x32EB | Ordinal: 13036
        void glNormal3d(double, double, double);

    // RVA: 0x32FC | Ordinal: 13053
        void glNormal3dv(double const *);

    // RVA: 0x330D | Ordinal: 13070
        void glNormal3f(float, float, float);

    // RVA: 0x331E | Ordinal: 13087
        void glNormal3fv(float const *);

    // RVA: 0x332F | Ordinal: 13104
        void glNormal3i(int, int, int);

    // RVA: 0x3340 | Ordinal: 13121
        void glNormal3iv(int const *);

    // RVA: 0x3351 | Ordinal: 13138
        void glNormal3s(short, short, short);

    // RVA: 0x3362 | Ordinal: 13155
        void glNormal3sv(short const *);

    // RVA: 0x338A | Ordinal: 13195
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33A5 | Ordinal: 13222
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33B6 | Ordinal: 13239
        void glPassThrough(float);

    // RVA: 0x33ED | Ordinal: 13294
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x33FE | Ordinal: 13311
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x340F | Ordinal: 13328
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x3420 | Ordinal: 13345
        void glPixelStoref(unsigned int, float);

    // RVA: 0x343B | Ordinal: 13372
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3455 | Ordinal: 13398
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x3466 | Ordinal: 13415
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x3477 | Ordinal: 13432
        void glPixelZoom(float, float);

    // RVA: 0x3484 | Ordinal: 13445
        void glPointParameterf(unsigned int, float);

    // RVA: 0x349A | Ordinal: 13467
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34B0 | Ordinal: 13489
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34C6 | Ordinal: 13511
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34E0 | Ordinal: 13537
        void glPointSize(float);

    // RVA: 0x34FA | Ordinal: 13563
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3514 | Ordinal: 13589
        void glPolygonOffset(float, float);

    // RVA: 0x352E | Ordinal: 13615
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x353F | Ordinal: 13632
        void glPopAttrib(void);

    // RVA: 0x354F | Ordinal: 13648
        void glPopClientAttrib(void);

    // RVA: 0x3565 | Ordinal: 13670
        void glPopMatrix(void);

    // RVA: 0x3576 | Ordinal: 13687
        void glPopName(void);

    // RVA: 0x3598 | Ordinal: 13721
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37E4 | Ordinal: 14309
        void glPushAttrib(unsigned int);

    // RVA: 0x37F4 | Ordinal: 14325
        void glPushClientAttrib(unsigned int);

    // RVA: 0x380A | Ordinal: 14347
        void glPushMatrix(void);

    // RVA: 0x381B | Ordinal: 14364
        void glPushName(unsigned int);

    // RVA: 0x383A | Ordinal: 14395
        void glRasterPos2d(double, double);

    // RVA: 0x384B | Ordinal: 14412
        void glRasterPos2dv(double const *);

    // RVA: 0x385C | Ordinal: 14429
        void glRasterPos2f(float, float);

    // RVA: 0x386D | Ordinal: 14446
        void glRasterPos2fv(float const *);

    // RVA: 0x387E | Ordinal: 14463
        void glRasterPos2i(int, int);

    // RVA: 0x388F | Ordinal: 14480
        void glRasterPos2iv(int const *);

    // RVA: 0x38A0 | Ordinal: 14497
        void glRasterPos2s(short, short);

    // RVA: 0x38B1 | Ordinal: 14514
        void glRasterPos2sv(short const *);

    // RVA: 0x38C2 | Ordinal: 14531
        void glRasterPos3d(double, double, double);

    // RVA: 0x38D3 | Ordinal: 14548
        void glRasterPos3dv(double const *);

    // RVA: 0x38E4 | Ordinal: 14565
        void glRasterPos3f(float, float, float);

    // RVA: 0x38F5 | Ordinal: 14582
        void glRasterPos3fv(float const *);

    // RVA: 0x3906 | Ordinal: 14599
        void glRasterPos3i(int, int, int);

    // RVA: 0x3917 | Ordinal: 14616
        void glRasterPos3iv(int const *);

    // RVA: 0x3928 | Ordinal: 14633
        void glRasterPos3s(short, short, short);

    // RVA: 0x3939 | Ordinal: 14650
        void glRasterPos3sv(short const *);

    // RVA: 0x394A | Ordinal: 14667
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x395B | Ordinal: 14684
        void glRasterPos4dv(double const *);

    // RVA: 0x396C | Ordinal: 14701
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x397D | Ordinal: 14718
        void glRasterPos4fv(float const *);

    // RVA: 0x398E | Ordinal: 14735
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x399F | Ordinal: 14752
        void glRasterPos4iv(int const *);

    // RVA: 0x39B0 | Ordinal: 14769
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39C1 | Ordinal: 14786
        void glRasterPos4sv(short const *);

    // RVA: 0x39D3 | Ordinal: 14804
        void glReadBuffer(unsigned int);

    // RVA: 0x39EE | Ordinal: 14831
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A0B | Ordinal: 14860
        void glRectd(double, double, double, double);

    // RVA: 0x3A1C | Ordinal: 14877
        void glRectdv(double const *, double const *);

    // RVA: 0x3A2D | Ordinal: 14894
        void glRectf(float, float, float, float);

    // RVA: 0x3A3E | Ordinal: 14911
        void glRectfv(float const *, float const *);

    // RVA: 0x3A4F | Ordinal: 14928
        void glRecti(int, int, int, int);

    // RVA: 0x3A60 | Ordinal: 14945
        void glRectiv(int const *, int const *);

    // RVA: 0x3A71 | Ordinal: 14962
        void glRects(short, short, short, short);

    // RVA: 0x3A82 | Ordinal: 14979
        void glRectsv(short const *, short const *);

    // RVA: 0x3A9E | Ordinal: 15007
        void glRenderMode(unsigned int);

    // RVA: 0x3AD3 | Ordinal: 15060
        void glResetHistogram(unsigned int);

    // RVA: 0x3AE2 | Ordinal: 15075
        void glResetMinmax(unsigned int);

    // RVA: 0x3B00 | Ordinal: 15105
        void glRotated(double, double, double, double);

    // RVA: 0x3B11 | Ordinal: 15122
        void glRotatef(float, float, float, float);

    // RVA: 0x3B20 | Ordinal: 15137
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3BA5 | Ordinal: 15270
        void glScaled(double, double, double);

    // RVA: 0x3BB6 | Ordinal: 15287
        void glScalef(float, float, float);

    // RVA: 0x3BC8 | Ordinal: 15305
        void glScissor(int, int, int, int);

    // RVA: 0x3BFC | Ordinal: 15357
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C09 | Ordinal: 15370
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C16 | Ordinal: 15383
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C23 | Ordinal: 15396
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C30 | Ordinal: 15409
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C3D | Ordinal: 15422
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C4A | Ordinal: 15435
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C57 | Ordinal: 15448
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C64 | Ordinal: 15461
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C71 | Ordinal: 15474
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C7E | Ordinal: 15487
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C8B | Ordinal: 15500
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3C98 | Ordinal: 15513
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CA5 | Ordinal: 15526
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CB2 | Ordinal: 15539
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CBF | Ordinal: 15552
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CE4 | Ordinal: 15589
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CF5 | Ordinal: 15606
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D04 | Ordinal: 15621
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D15 | Ordinal: 15638
        void glShadeModel(unsigned int);

    // RVA: 0x3D2C | Ordinal: 15661
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D4D | Ordinal: 15694
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D62 | Ordinal: 15715
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D7D | Ordinal: 15742
        void glStencilMask(unsigned int);

    // RVA: 0x3D92 | Ordinal: 15763
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DAD | Ordinal: 15790
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DC2 | Ordinal: 15811
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DF5 | Ordinal: 15862
        void glTexCoord1d(double);

    // RVA: 0x3E06 | Ordinal: 15879
        void glTexCoord1dv(double const *);

    // RVA: 0x3E17 | Ordinal: 15896
        void glTexCoord1f(float);

    // RVA: 0x3E28 | Ordinal: 15913
        void glTexCoord1fv(float const *);

    // RVA: 0x3E39 | Ordinal: 15930
        void glTexCoord1i(int);

    // RVA: 0x3E4A | Ordinal: 15947
        void glTexCoord1iv(int const *);

    // RVA: 0x3E5B | Ordinal: 15964
        void glTexCoord1s(short);

    // RVA: 0x3E6C | Ordinal: 15981
        void glTexCoord1sv(short const *);

    // RVA: 0x3E7D | Ordinal: 15998
        void glTexCoord2d(double, double);

    // RVA: 0x3E8E | Ordinal: 16015
        void glTexCoord2dv(double const *);

    // RVA: 0x3E9F | Ordinal: 16032
        void glTexCoord2f(float, float);

    // RVA: 0x3EB0 | Ordinal: 16049
        void glTexCoord2fv(float const *);

    // RVA: 0x3EC1 | Ordinal: 16066
        void glTexCoord2i(int, int);

    // RVA: 0x3ED2 | Ordinal: 16083
        void glTexCoord2iv(int const *);

    // RVA: 0x3EE3 | Ordinal: 16100
        void glTexCoord2s(short, short);

    // RVA: 0x3EF4 | Ordinal: 16117
        void glTexCoord2sv(short const *);

    // RVA: 0x3F05 | Ordinal: 16134
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F16 | Ordinal: 16151
        void glTexCoord3dv(double const *);

    // RVA: 0x3F27 | Ordinal: 16168
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F38 | Ordinal: 16185
        void glTexCoord3fv(float const *);

    // RVA: 0x3F49 | Ordinal: 16202
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F5A | Ordinal: 16219
        void glTexCoord3iv(int const *);

    // RVA: 0x3F6B | Ordinal: 16236
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F7C | Ordinal: 16253
        void glTexCoord3sv(short const *);

    // RVA: 0x3F8D | Ordinal: 16270
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3F9E | Ordinal: 16287
        void glTexCoord4dv(double const *);

    // RVA: 0x3FAF | Ordinal: 16304
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FC0 | Ordinal: 16321
        void glTexCoord4fv(float const *);

    // RVA: 0x3FD1 | Ordinal: 16338
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FE2 | Ordinal: 16355
        void glTexCoord4iv(int const *);

    // RVA: 0x3FF3 | Ordinal: 16372
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x4004 | Ordinal: 16389
        void glTexCoord4sv(short const *);

    // RVA: 0x4074 | Ordinal: 16501
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x4085 | Ordinal: 16518
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x4096 | Ordinal: 16535
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40A7 | Ordinal: 16552
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40B8 | Ordinal: 16569
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40C9 | Ordinal: 16586
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40DA | Ordinal: 16603
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40EB | Ordinal: 16620
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x40FC | Ordinal: 16637
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x410D | Ordinal: 16654
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x411E | Ordinal: 16671
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x412F | Ordinal: 16688
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x414A | Ordinal: 16715
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4173 | Ordinal: 16756
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x41C4 | Ordinal: 16837
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41DF | Ordinal: 16864
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41FA | Ordinal: 16891
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4215 | Ordinal: 16918
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4256 | Ordinal: 16983
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4270 | Ordinal: 17009
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4289 | Ordinal: 17034
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42E2 | Ordinal: 17123
        void glTranslated(double, double, double);

    // RVA: 0x42F3 | Ordinal: 17140
        void glTranslatef(float, float, float);

    // RVA: 0x4317 | Ordinal: 17176
        void glUniform1f(int, float);

    // RVA: 0x432C | Ordinal: 17197
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4341 | Ordinal: 17218
        void glUniform1i(int, int);

    // RVA: 0x4356 | Ordinal: 17239
        void glUniform1iv(int, int, int const *);

    // RVA: 0x43A9 | Ordinal: 17322
        void glUniform2f(int, float, float);

    // RVA: 0x43BE | Ordinal: 17343
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43D3 | Ordinal: 17364
        void glUniform2i(int, int, int);

    // RVA: 0x43E8 | Ordinal: 17385
        void glUniform2iv(int, int, int const *);

    // RVA: 0x443B | Ordinal: 17468
        void glUniform3f(int, float, float, float);

    // RVA: 0x4450 | Ordinal: 17489
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4465 | Ordinal: 17510
        void glUniform3i(int, int, int, int);

    // RVA: 0x447A | Ordinal: 17531
        void glUniform3iv(int, int, int const *);

    // RVA: 0x44CD | Ordinal: 17614
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44E2 | Ordinal: 17635
        void glUniform4fv(int, int, float const *);

    // RVA: 0x44F7 | Ordinal: 17656
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x450C | Ordinal: 17677
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4565 | Ordinal: 17766
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x45C6 | Ordinal: 17863
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x4627 | Ordinal: 17960
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x4689 | Ordinal: 18058
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46A0 | Ordinal: 18081
        void glUseProgram(unsigned int);

    // RVA: 0x46C0 | Ordinal: 18113
        void glValidateProgram(unsigned int);

    // RVA: 0x46E5 | Ordinal: 18150
        void glVertex2d(double, double);

    // RVA: 0x46F6 | Ordinal: 18167
        void glVertex2dv(double const *);

    // RVA: 0x4707 | Ordinal: 18184
        void glVertex2f(float, float);

    // RVA: 0x4718 | Ordinal: 18201
        void glVertex2fv(float const *);

    // RVA: 0x4729 | Ordinal: 18218
        void glVertex2i(int, int);

    // RVA: 0x473A | Ordinal: 18235
        void glVertex2iv(int const *);

    // RVA: 0x474B | Ordinal: 18252
        void glVertex2s(short, short);

    // RVA: 0x475C | Ordinal: 18269
        void glVertex2sv(short const *);

    // RVA: 0x476D | Ordinal: 18286
        void glVertex3d(double, double, double);

    // RVA: 0x477E | Ordinal: 18303
        void glVertex3dv(double const *);

    // RVA: 0x478F | Ordinal: 18320
        void glVertex3f(float, float, float);

    // RVA: 0x47A0 | Ordinal: 18337
        void glVertex3fv(float const *);

    // RVA: 0x47B1 | Ordinal: 18354
        void glVertex3i(int, int, int);

    // RVA: 0x47C2 | Ordinal: 18371
        void glVertex3iv(int const *);

    // RVA: 0x47D3 | Ordinal: 18388
        void glVertex3s(short, short, short);

    // RVA: 0x47E4 | Ordinal: 18405
        void glVertex3sv(short const *);

    // RVA: 0x47F5 | Ordinal: 18422
        void glVertex4d(double, double, double, double);

    // RVA: 0x4806 | Ordinal: 18439
        void glVertex4dv(double const *);

    // RVA: 0x4817 | Ordinal: 18456
        void glVertex4f(float, float, float, float);

    // RVA: 0x4828 | Ordinal: 18473
        void glVertex4fv(float const *);

    // RVA: 0x4839 | Ordinal: 18490
        void glVertex4i(int, int, int, int);

    // RVA: 0x484A | Ordinal: 18507
        void glVertex4iv(int const *);

    // RVA: 0x485B | Ordinal: 18524
        void glVertex4s(short, short, short, short);

    // RVA: 0x486C | Ordinal: 18541
        void glVertex4sv(short const *);

    // RVA: 0x4887 | Ordinal: 18568
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x4894 | Ordinal: 18581
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48A2 | Ordinal: 18595
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48B0 | Ordinal: 18609
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48BD | Ordinal: 18622
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48CA | Ordinal: 18635
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48D7 | Ordinal: 18648
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48E4 | Ordinal: 18661
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48F2 | Ordinal: 18675
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x4900 | Ordinal: 18689
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x490D | Ordinal: 18702
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x491A | Ordinal: 18715
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x4927 | Ordinal: 18728
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x4934 | Ordinal: 18741
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x4942 | Ordinal: 18755
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x4950 | Ordinal: 18769
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x495D | Ordinal: 18782
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x496A | Ordinal: 18795
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x4977 | Ordinal: 18808
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x4984 | Ordinal: 18821
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x4991 | Ordinal: 18834
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x499E | Ordinal: 18847
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49AB | Ordinal: 18860
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49B8 | Ordinal: 18873
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49C5 | Ordinal: 18886
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49D2 | Ordinal: 18899
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49DF | Ordinal: 18912
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49EC | Ordinal: 18925
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x49FA | Ordinal: 18939
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A08 | Ordinal: 18953
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A15 | Ordinal: 18966
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A22 | Ordinal: 18979
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A2F | Ordinal: 18992
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A3C | Ordinal: 19005
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A49 | Ordinal: 19018
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A56 | Ordinal: 19031
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4C4B | Ordinal: 19532
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4CB3 | Ordinal: 19636
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CC5 | Ordinal: 19654
        void glViewport(int, int, int, int);

    // RVA: 0x4D0A | Ordinal: 19723
        void glWindowPos2d(double, double);

    // RVA: 0x4D17 | Ordinal: 19736
        void glWindowPos2dv(double const *);

    // RVA: 0x4D24 | Ordinal: 19749
        void glWindowPos2f(float, float);

    // RVA: 0x4D31 | Ordinal: 19762
        void glWindowPos2fv(float const *);

    // RVA: 0x4D3E | Ordinal: 19775
        void glWindowPos2i(int, int);

    // RVA: 0x4D4B | Ordinal: 19788
        void glWindowPos2iv(int const *);

    // RVA: 0x4D58 | Ordinal: 19801
        void glWindowPos2s(short, short);

    // RVA: 0x4D65 | Ordinal: 19814
        void glWindowPos2sv(short const *);

    // RVA: 0x4D72 | Ordinal: 19827
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D7F | Ordinal: 19840
        void glWindowPos3dv(double const *);

    // RVA: 0x4D8C | Ordinal: 19853
        void glWindowPos3f(float, float, float);

    // RVA: 0x4D99 | Ordinal: 19866
        void glWindowPos3fv(float const *);

    // RVA: 0x4DA6 | Ordinal: 19879
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DB3 | Ordinal: 19892
        void glWindowPos3iv(int const *);

    // RVA: 0x4DC0 | Ordinal: 19905
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DCD | Ordinal: 19918
        void glWindowPos3sv(short const *);

    // RVA: 0x4F20 | Ordinal: 20257
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FE2 | Ordinal: 20451
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6106 | Ordinal: 24839
        void versionProfile(void);

    // RVA: 0x483 | Ordinal: 1156
        void _QOpenGLFunctions_2_0(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_2_0_HPP
