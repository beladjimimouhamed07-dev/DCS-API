#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_3_0
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_3_0
{
public:

    // RVA: 0x1B7 | Ordinal: 440
        void QOpenGLFunctions_3_0(void);

    // RVA: 0x11C0 | Ordinal: 4545
        void glAccum(unsigned int, float);

    // RVA: 0x11DA | Ordinal: 4571
        void glActiveTexture(unsigned int);

    // RVA: 0x11F4 | Ordinal: 4597
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x1204 | Ordinal: 4613
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x1214 | Ordinal: 4629
        void glArrayElement(int);

    // RVA: 0x1220 | Ordinal: 4641
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x123B | Ordinal: 4668
        void glBegin(unsigned int);

    // RVA: 0x1244 | Ordinal: 4677
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x125A | Ordinal: 4699
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x1279 | Ordinal: 4730
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x128E | Ordinal: 4751
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12A4 | Ordinal: 4773
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12B7 | Ordinal: 4792
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12CA | Ordinal: 4811
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12E4 | Ordinal: 4837
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x1305 | Ordinal: 4870
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1330 | Ordinal: 4913
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x135D | Ordinal: 4958
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1383 | Ordinal: 4996
        void glBindVertexArray(unsigned int);

    // RVA: 0x13A8 | Ordinal: 5033
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13B9 | Ordinal: 5050
        void glBlendColor(float, float, float, float);

    // RVA: 0x13D2 | Ordinal: 5075
        void glBlendEquation(unsigned int);

    // RVA: 0x13E7 | Ordinal: 5096
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x141C | Ordinal: 5149
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1433 | Ordinal: 5172
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1460 | Ordinal: 5217
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1478 | Ordinal: 5241
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x1492 | Ordinal: 5267
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14AC | Ordinal: 5293
        void glCallList(unsigned int);

    // RVA: 0x14BD | Ordinal: 5310
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14C7 | Ordinal: 5320
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14DB | Ordinal: 5340
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x14F6 | Ordinal: 5367
        void glClear(unsigned int);

    // RVA: 0x1510 | Ordinal: 5393
        void glClearAccum(float, float, float, float);

    // RVA: 0x1526 | Ordinal: 5415
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1539 | Ordinal: 5434
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x154C | Ordinal: 5453
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x155F | Ordinal: 5472
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x157A | Ordinal: 5499
        void glClearColor(float, float, float, float);

    // RVA: 0x1594 | Ordinal: 5525
        void glClearDepth(double);

    // RVA: 0x15B9 | Ordinal: 5562
        void glClearIndex(float);

    // RVA: 0x15D7 | Ordinal: 5592
        void glClearStencil(int);

    // RVA: 0x15F6 | Ordinal: 5623
        void glClientActiveTexture(unsigned int);

    // RVA: 0x161A | Ordinal: 5659
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x162B | Ordinal: 5676
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x163C | Ordinal: 5693
        void glColor3bv(signed char const *);

    // RVA: 0x164D | Ordinal: 5710
        void glColor3d(double, double, double);

    // RVA: 0x165E | Ordinal: 5727
        void glColor3dv(double const *);

    // RVA: 0x166F | Ordinal: 5744
        void glColor3f(float, float, float);

    // RVA: 0x1680 | Ordinal: 5761
        void glColor3fv(float const *);

    // RVA: 0x1691 | Ordinal: 5778
        void glColor3i(int, int, int);

    // RVA: 0x16A2 | Ordinal: 5795
        void glColor3iv(int const *);

    // RVA: 0x16B3 | Ordinal: 5812
        void glColor3s(short, short, short);

    // RVA: 0x16C4 | Ordinal: 5829
        void glColor3sv(short const *);

    // RVA: 0x16D5 | Ordinal: 5846
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16E6 | Ordinal: 5863
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16F7 | Ordinal: 5880
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1708 | Ordinal: 5897
        void glColor3uiv(unsigned int const *);

    // RVA: 0x1719 | Ordinal: 5914
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x172A | Ordinal: 5931
        void glColor3usv(unsigned short const *);

    // RVA: 0x173B | Ordinal: 5948
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x174C | Ordinal: 5965
        void glColor4bv(signed char const *);

    // RVA: 0x175D | Ordinal: 5982
        void glColor4d(double, double, double, double);

    // RVA: 0x176E | Ordinal: 5999
        void glColor4dv(double const *);

    // RVA: 0x177F | Ordinal: 6016
        void glColor4f(float, float, float, float);

    // RVA: 0x1790 | Ordinal: 6033
        void glColor4fv(float const *);

    // RVA: 0x17A1 | Ordinal: 6050
        void glColor4i(int, int, int, int);

    // RVA: 0x17B2 | Ordinal: 6067
        void glColor4iv(int const *);

    // RVA: 0x17C3 | Ordinal: 6084
        void glColor4s(short, short, short, short);

    // RVA: 0x17D4 | Ordinal: 6101
        void glColor4sv(short const *);

    // RVA: 0x17E5 | Ordinal: 6118
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17F6 | Ordinal: 6135
        void glColor4ubv(unsigned char const *);

    // RVA: 0x1807 | Ordinal: 6152
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1818 | Ordinal: 6169
        void glColor4uiv(unsigned int const *);

    // RVA: 0x1829 | Ordinal: 6186
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x183A | Ordinal: 6203
        void glColor4usv(unsigned short const *);

    // RVA: 0x184C | Ordinal: 6221
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x185F | Ordinal: 6240
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1879 | Ordinal: 6266
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x18B9 | Ordinal: 6330
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18C8 | Ordinal: 6345
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18D7 | Ordinal: 6360
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18E6 | Ordinal: 6375
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18F5 | Ordinal: 6390
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1901 | Ordinal: 6402
        void glCompileShader(unsigned int);

    // RVA: 0x1918 | Ordinal: 6425
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1930 | Ordinal: 6449
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1948 | Ordinal: 6473
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x195F | Ordinal: 6496
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1977 | Ordinal: 6520
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x198F | Ordinal: 6544
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19AD | Ordinal: 6574
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19BC | Ordinal: 6589
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19CB | Ordinal: 6604
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19DA | Ordinal: 6619
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19E9 | Ordinal: 6634
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19F8 | Ordinal: 6649
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A19 | Ordinal: 6682
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A28 | Ordinal: 6697
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A37 | Ordinal: 6712
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A46 | Ordinal: 6727
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A60 | Ordinal: 6753
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A70 | Ordinal: 6769
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A8A | Ordinal: 6795
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AA3 | Ordinal: 6820
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ABD | Ordinal: 6846
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AD6 | Ordinal: 6871
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AF5 | Ordinal: 6902
        void glCreateProgram(void);

    // RVA: 0x1B12 | Ordinal: 6931
        void glCreateShader(unsigned int);

    // RVA: 0x1B3E | Ordinal: 6975
        void glCullFace(unsigned int);

    // RVA: 0x1B63 | Ordinal: 7012
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B76 | Ordinal: 7031
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B90 | Ordinal: 7057
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1B9C | Ordinal: 7069
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BBD | Ordinal: 7102
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BD0 | Ordinal: 7121
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BF4 | Ordinal: 7157
        void glDeleteShader(unsigned int);

    // RVA: 0x1C1F | Ordinal: 7200
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C3F | Ordinal: 7232
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C5A | Ordinal: 7259
        void glDepthFunc(unsigned int);

    // RVA: 0x1C75 | Ordinal: 7286
        void glDepthMask(unsigned char);

    // RVA: 0x1C8F | Ordinal: 7312
        void glDepthRange(double, double);

    // RVA: 0x1CC3 | Ordinal: 7364
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CDE | Ordinal: 7391
        void glDisable(unsigned int);

    // RVA: 0x1CF7 | Ordinal: 7416
        void glDisableClientState(unsigned int);

    // RVA: 0x1D05 | Ordinal: 7430
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D18 | Ordinal: 7449
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D41 | Ordinal: 7490
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D82 | Ordinal: 7555
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D97 | Ordinal: 7576
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DB1 | Ordinal: 7602
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E1C | Ordinal: 7709
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E2C | Ordinal: 7725
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E7F | Ordinal: 7808
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E8F | Ordinal: 7824
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1EA0 | Ordinal: 7841
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EB2 | Ordinal: 7859
        void glEnable(unsigned int);

    // RVA: 0x1ECB | Ordinal: 7884
        void glEnableClientState(unsigned int);

    // RVA: 0x1ED9 | Ordinal: 7898
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EEC | Ordinal: 7917
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F06 | Ordinal: 7943
        void glEnd(void);

    // RVA: 0x1F0F | Ordinal: 7952
        void glEndConditionalRender(void);

    // RVA: 0x1F29 | Ordinal: 7978
        void glEndList(void);

    // RVA: 0x1F36 | Ordinal: 7991
        void glEndQuery(unsigned int);

    // RVA: 0x1F55 | Ordinal: 8022
        void glEndTransformFeedback(void);

    // RVA: 0x1F6F | Ordinal: 8048
        void glEvalCoord1d(double);

    // RVA: 0x1F80 | Ordinal: 8065
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F91 | Ordinal: 8082
        void glEvalCoord1f(float);

    // RVA: 0x1FA2 | Ordinal: 8099
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FB3 | Ordinal: 8116
        void glEvalCoord2d(double, double);

    // RVA: 0x1FC4 | Ordinal: 8133
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FD5 | Ordinal: 8150
        void glEvalCoord2f(float, float);

    // RVA: 0x1FE6 | Ordinal: 8167
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FF7 | Ordinal: 8184
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x2008 | Ordinal: 8201
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x2019 | Ordinal: 8218
        void glEvalPoint1(int);

    // RVA: 0x202A | Ordinal: 8235
        void glEvalPoint2(int, int);

    // RVA: 0x203B | Ordinal: 8252
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x205E | Ordinal: 8287
        void glFinish(void);

    // RVA: 0x2079 | Ordinal: 8314
        void glFlush(void);

    // RVA: 0x208C | Ordinal: 8333
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x20A4 | Ordinal: 8357
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20B1 | Ordinal: 8370
        void glFogCoordd(double);

    // RVA: 0x20BE | Ordinal: 8383
        void glFogCoorddv(double const *);

    // RVA: 0x20CB | Ordinal: 8396
        void glFogCoordf(float);

    // RVA: 0x20D8 | Ordinal: 8409
        void glFogCoordfv(float const *);

    // RVA: 0x20E9 | Ordinal: 8426
        void glFogf(unsigned int, float);

    // RVA: 0x20FA | Ordinal: 8443
        void glFogfv(unsigned int, float const *);

    // RVA: 0x210B | Ordinal: 8460
        void glFogi(unsigned int, int);

    // RVA: 0x211C | Ordinal: 8477
        void glFogiv(unsigned int, int const *);

    // RVA: 0x212E | Ordinal: 8495
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2140 | Ordinal: 8513
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2153 | Ordinal: 8532
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2165 | Ordinal: 8550
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2189 | Ordinal: 8586
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21A4 | Ordinal: 8613
        void glFrontFace(unsigned int);

    // RVA: 0x21BE | Ordinal: 8639
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21CB | Ordinal: 8652
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21DE | Ordinal: 8671
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x21F8 | Ordinal: 8697
        void glGenLists(int);

    // RVA: 0x2210 | Ordinal: 8721
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2223 | Ordinal: 8740
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x224C | Ordinal: 8781
        void glGenTextures(int, unsigned int *);

    // RVA: 0x226C | Ordinal: 8813
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x227F | Ordinal: 8832
        void glGenerateMipmap(unsigned int);

    // RVA: 0x229E | Ordinal: 8863
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22D7 | Ordinal: 8920
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x2333 | Ordinal: 9012
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2348 | Ordinal: 9033
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x235B | Ordinal: 9052
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2376 | Ordinal: 9079
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x239D | Ordinal: 9118
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23B3 | Ordinal: 9140
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23C9 | Ordinal: 9162
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23E3 | Ordinal: 9188
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23F2 | Ordinal: 9203
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2401 | Ordinal: 9218
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2410 | Ordinal: 9233
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x241E | Ordinal: 9247
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x243A | Ordinal: 9275
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2449 | Ordinal: 9290
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2458 | Ordinal: 9305
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2478 | Ordinal: 9337
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x2493 | Ordinal: 9364
        void glGetError(void);

    // RVA: 0x24B8 | Ordinal: 9401
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24D9 | Ordinal: 9434
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24EC | Ordinal: 9453
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x250E | Ordinal: 9487
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x251D | Ordinal: 9502
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x252C | Ordinal: 9517
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2558 | Ordinal: 9561
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2573 | Ordinal: 9588
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x259C | Ordinal: 9629
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25AD | Ordinal: 9646
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25BE | Ordinal: 9663
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25CF | Ordinal: 9680
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25E0 | Ordinal: 9697
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25F1 | Ordinal: 9714
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x2602 | Ordinal: 9731
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2611 | Ordinal: 9746
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2620 | Ordinal: 9761
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x262F | Ordinal: 9776
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2669 | Ordinal: 9834
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x267A | Ordinal: 9851
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x268B | Ordinal: 9868
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x269C | Ordinal: 9885
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26B4 | Ordinal: 9909
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26CB | Ordinal: 9932
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x272B | Ordinal: 10028
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x275A | Ordinal: 10075
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x277E | Ordinal: 10111
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2794 | Ordinal: 10133
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27A7 | Ordinal: 10152
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27FB | Ordinal: 10236
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2807 | Ordinal: 10248
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2827 | Ordinal: 10280
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x283C | Ordinal: 10301
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2857 | Ordinal: 10328
        void glGetString(unsigned int);

    // RVA: 0x286A | Ordinal: 10347
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x28AD | Ordinal: 10414
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28BE | Ordinal: 10431
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28CF | Ordinal: 10448
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28E0 | Ordinal: 10465
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28F1 | Ordinal: 10482
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x2902 | Ordinal: 10499
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x291D | Ordinal: 10526
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2938 | Ordinal: 10553
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x294B | Ordinal: 10572
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x295E | Ordinal: 10591
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2979 | Ordinal: 10618
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2994 | Ordinal: 10645
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29B7 | Ordinal: 10680
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29F6 | Ordinal: 10743
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A23 | Ordinal: 10788
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A38 | Ordinal: 10809
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A4B | Ordinal: 10828
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A64 | Ordinal: 10853
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A77 | Ordinal: 10872
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A96 | Ordinal: 10903
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AAA | Ordinal: 10923
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2ABF | Ordinal: 10944
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AD4 | Ordinal: 10965
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B0A | Ordinal: 11019
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B22 | Ordinal: 11043
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B33 | Ordinal: 11060
        void glIndexMask(unsigned int);

    // RVA: 0x2B43 | Ordinal: 11076
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B54 | Ordinal: 11093
        void glIndexd(double);

    // RVA: 0x2B65 | Ordinal: 11110
        void glIndexdv(double const *);

    // RVA: 0x2B76 | Ordinal: 11127
        void glIndexf(float);

    // RVA: 0x2B87 | Ordinal: 11144
        void glIndexfv(float const *);

    // RVA: 0x2B98 | Ordinal: 11161
        void glIndexi(int);

    // RVA: 0x2BA9 | Ordinal: 11178
        void glIndexiv(int const *);

    // RVA: 0x2BBA | Ordinal: 11195
        void glIndexs(short);

    // RVA: 0x2BCB | Ordinal: 11212
        void glIndexsv(short const *);

    // RVA: 0x2BDB | Ordinal: 11228
        void glIndexub(unsigned char);

    // RVA: 0x2BF2 | Ordinal: 11251
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C0A | Ordinal: 11275
        void glInitNames(void);

    // RVA: 0x2C1A | Ordinal: 11291
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C52 | Ordinal: 11347
        void glIsBuffer(unsigned int);

    // RVA: 0x2C6D | Ordinal: 11374
        void glIsEnabled(unsigned int);

    // RVA: 0x2C80 | Ordinal: 11393
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C93 | Ordinal: 11412
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CAD | Ordinal: 11438
        void glIsList(unsigned int);

    // RVA: 0x2CB9 | Ordinal: 11450
        void glIsProgram(unsigned int);

    // RVA: 0x2CDA | Ordinal: 11483
        void glIsQuery(unsigned int);

    // RVA: 0x2CED | Ordinal: 11502
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D11 | Ordinal: 11538
        void glIsShader(unsigned int);

    // RVA: 0x2D3C | Ordinal: 11581
        void glIsTexture(unsigned int);

    // RVA: 0x2D5C | Ordinal: 11613
        void glIsVertexArray(unsigned int);

    // RVA: 0x2D76 | Ordinal: 11639
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D87 | Ordinal: 11656
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D98 | Ordinal: 11673
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DA9 | Ordinal: 11690
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DBA | Ordinal: 11707
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DCB | Ordinal: 11724
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DDC | Ordinal: 11741
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DED | Ordinal: 11758
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2DFE | Ordinal: 11775
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E10 | Ordinal: 11793
        void glLineWidth(float);

    // RVA: 0x2E25 | Ordinal: 11814
        void glLinkProgram(unsigned int);

    // RVA: 0x2E3F | Ordinal: 11840
        void glListBase(unsigned int);

    // RVA: 0x2E50 | Ordinal: 11857
        void glLoadIdentity(void);

    // RVA: 0x2E61 | Ordinal: 11874
        void glLoadMatrixd(double const *);

    // RVA: 0x2E72 | Ordinal: 11891
        void glLoadMatrixf(float const *);

    // RVA: 0x2E83 | Ordinal: 11908
        void glLoadName(unsigned int);

    // RVA: 0x2E91 | Ordinal: 11922
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2E9F | Ordinal: 11936
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EB0 | Ordinal: 11953
        void glLogicOp(unsigned int);

    // RVA: 0x2ECA | Ordinal: 11979
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2EDB | Ordinal: 11996
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EEC | Ordinal: 12013
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2EFD | Ordinal: 12030
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F0A | Ordinal: 12043
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F1D | Ordinal: 12062
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2F37 | Ordinal: 12088
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F48 | Ordinal: 12105
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F59 | Ordinal: 12122
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F6A | Ordinal: 12139
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F7F | Ordinal: 12160
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F90 | Ordinal: 12177
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2FA1 | Ordinal: 12194
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FB2 | Ordinal: 12211
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FC3 | Ordinal: 12228
        void glMatrixMode(unsigned int);

    // RVA: 0x2FEB | Ordinal: 12268
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x2FFC | Ordinal: 12285
        void glMultMatrixd(double const *);

    // RVA: 0x300D | Ordinal: 12302
        void glMultMatrixf(float const *);

    // RVA: 0x301B | Ordinal: 12316
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x3029 | Ordinal: 12330
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x3036 | Ordinal: 12343
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3052 | Ordinal: 12371
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x307F | Ordinal: 12416
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x308D | Ordinal: 12430
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x309B | Ordinal: 12444
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30A9 | Ordinal: 12458
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30B7 | Ordinal: 12472
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30C5 | Ordinal: 12486
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30D3 | Ordinal: 12500
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30E1 | Ordinal: 12514
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30EF | Ordinal: 12528
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x30FD | Ordinal: 12542
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x310B | Ordinal: 12556
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x3119 | Ordinal: 12570
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x3127 | Ordinal: 12584
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x3135 | Ordinal: 12598
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x3143 | Ordinal: 12612
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x3151 | Ordinal: 12626
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x315F | Ordinal: 12640
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x316D | Ordinal: 12654
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x317B | Ordinal: 12668
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x3189 | Ordinal: 12682
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x3197 | Ordinal: 12696
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31A5 | Ordinal: 12710
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31B3 | Ordinal: 12724
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31C1 | Ordinal: 12738
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31CF | Ordinal: 12752
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31DD | Ordinal: 12766
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31EB | Ordinal: 12780
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31F9 | Ordinal: 12794
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x3207 | Ordinal: 12808
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x3215 | Ordinal: 12822
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x3223 | Ordinal: 12836
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x3231 | Ordinal: 12850
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x32BA | Ordinal: 12987
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32CB | Ordinal: 13004
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32DC | Ordinal: 13021
        void glNormal3bv(signed char const *);

    // RVA: 0x32ED | Ordinal: 13038
        void glNormal3d(double, double, double);

    // RVA: 0x32FE | Ordinal: 13055
        void glNormal3dv(double const *);

    // RVA: 0x330F | Ordinal: 13072
        void glNormal3f(float, float, float);

    // RVA: 0x3320 | Ordinal: 13089
        void glNormal3fv(float const *);

    // RVA: 0x3331 | Ordinal: 13106
        void glNormal3i(int, int, int);

    // RVA: 0x3342 | Ordinal: 13123
        void glNormal3iv(int const *);

    // RVA: 0x3353 | Ordinal: 13140
        void glNormal3s(short, short, short);

    // RVA: 0x3364 | Ordinal: 13157
        void glNormal3sv(short const *);

    // RVA: 0x338C | Ordinal: 13197
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33A7 | Ordinal: 13224
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33B8 | Ordinal: 13241
        void glPassThrough(float);

    // RVA: 0x33EF | Ordinal: 13296
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x3400 | Ordinal: 13313
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x3411 | Ordinal: 13330
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x3422 | Ordinal: 13347
        void glPixelStoref(unsigned int, float);

    // RVA: 0x343D | Ordinal: 13374
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3457 | Ordinal: 13400
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x3468 | Ordinal: 13417
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x3479 | Ordinal: 13434
        void glPixelZoom(float, float);

    // RVA: 0x3486 | Ordinal: 13447
        void glPointParameterf(unsigned int, float);

    // RVA: 0x349C | Ordinal: 13469
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34B2 | Ordinal: 13491
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34C8 | Ordinal: 13513
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34E2 | Ordinal: 13539
        void glPointSize(float);

    // RVA: 0x34FC | Ordinal: 13565
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3516 | Ordinal: 13591
        void glPolygonOffset(float, float);

    // RVA: 0x3530 | Ordinal: 13617
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x3541 | Ordinal: 13634
        void glPopAttrib(void);

    // RVA: 0x3551 | Ordinal: 13650
        void glPopClientAttrib(void);

    // RVA: 0x3567 | Ordinal: 13672
        void glPopMatrix(void);

    // RVA: 0x3578 | Ordinal: 13689
        void glPopName(void);

    // RVA: 0x359A | Ordinal: 13723
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37E6 | Ordinal: 14311
        void glPushAttrib(unsigned int);

    // RVA: 0x37F6 | Ordinal: 14327
        void glPushClientAttrib(unsigned int);

    // RVA: 0x380C | Ordinal: 14349
        void glPushMatrix(void);

    // RVA: 0x381D | Ordinal: 14366
        void glPushName(unsigned int);

    // RVA: 0x383C | Ordinal: 14397
        void glRasterPos2d(double, double);

    // RVA: 0x384D | Ordinal: 14414
        void glRasterPos2dv(double const *);

    // RVA: 0x385E | Ordinal: 14431
        void glRasterPos2f(float, float);

    // RVA: 0x386F | Ordinal: 14448
        void glRasterPos2fv(float const *);

    // RVA: 0x3880 | Ordinal: 14465
        void glRasterPos2i(int, int);

    // RVA: 0x3891 | Ordinal: 14482
        void glRasterPos2iv(int const *);

    // RVA: 0x38A2 | Ordinal: 14499
        void glRasterPos2s(short, short);

    // RVA: 0x38B3 | Ordinal: 14516
        void glRasterPos2sv(short const *);

    // RVA: 0x38C4 | Ordinal: 14533
        void glRasterPos3d(double, double, double);

    // RVA: 0x38D5 | Ordinal: 14550
        void glRasterPos3dv(double const *);

    // RVA: 0x38E6 | Ordinal: 14567
        void glRasterPos3f(float, float, float);

    // RVA: 0x38F7 | Ordinal: 14584
        void glRasterPos3fv(float const *);

    // RVA: 0x3908 | Ordinal: 14601
        void glRasterPos3i(int, int, int);

    // RVA: 0x3919 | Ordinal: 14618
        void glRasterPos3iv(int const *);

    // RVA: 0x392A | Ordinal: 14635
        void glRasterPos3s(short, short, short);

    // RVA: 0x393B | Ordinal: 14652
        void glRasterPos3sv(short const *);

    // RVA: 0x394C | Ordinal: 14669
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x395D | Ordinal: 14686
        void glRasterPos4dv(double const *);

    // RVA: 0x396E | Ordinal: 14703
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x397F | Ordinal: 14720
        void glRasterPos4fv(float const *);

    // RVA: 0x3990 | Ordinal: 14737
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x39A1 | Ordinal: 14754
        void glRasterPos4iv(int const *);

    // RVA: 0x39B2 | Ordinal: 14771
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39C3 | Ordinal: 14788
        void glRasterPos4sv(short const *);

    // RVA: 0x39D5 | Ordinal: 14806
        void glReadBuffer(unsigned int);

    // RVA: 0x39F0 | Ordinal: 14833
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A0D | Ordinal: 14862
        void glRectd(double, double, double, double);

    // RVA: 0x3A1E | Ordinal: 14879
        void glRectdv(double const *, double const *);

    // RVA: 0x3A2F | Ordinal: 14896
        void glRectf(float, float, float, float);

    // RVA: 0x3A40 | Ordinal: 14913
        void glRectfv(float const *, float const *);

    // RVA: 0x3A51 | Ordinal: 14930
        void glRecti(int, int, int, int);

    // RVA: 0x3A62 | Ordinal: 14947
        void glRectiv(int const *, int const *);

    // RVA: 0x3A73 | Ordinal: 14964
        void glRects(short, short, short, short);

    // RVA: 0x3A84 | Ordinal: 14981
        void glRectsv(short const *, short const *);

    // RVA: 0x3AA0 | Ordinal: 15009
        void glRenderMode(unsigned int);

    // RVA: 0x3AAA | Ordinal: 15019
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3ABD | Ordinal: 15038
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AD5 | Ordinal: 15062
        void glResetHistogram(unsigned int);

    // RVA: 0x3AE4 | Ordinal: 15077
        void glResetMinmax(unsigned int);

    // RVA: 0x3B02 | Ordinal: 15107
        void glRotated(double, double, double, double);

    // RVA: 0x3B13 | Ordinal: 15124
        void glRotatef(float, float, float, float);

    // RVA: 0x3B22 | Ordinal: 15139
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3BA7 | Ordinal: 15272
        void glScaled(double, double, double);

    // RVA: 0x3BB8 | Ordinal: 15289
        void glScalef(float, float, float);

    // RVA: 0x3BCA | Ordinal: 15307
        void glScissor(int, int, int, int);

    // RVA: 0x3BFE | Ordinal: 15359
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C0B | Ordinal: 15372
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C18 | Ordinal: 15385
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C25 | Ordinal: 15398
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C32 | Ordinal: 15411
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C3F | Ordinal: 15424
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C4C | Ordinal: 15437
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C59 | Ordinal: 15450
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C66 | Ordinal: 15463
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C73 | Ordinal: 15476
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C80 | Ordinal: 15489
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C8D | Ordinal: 15502
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3C9A | Ordinal: 15515
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CA7 | Ordinal: 15528
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CB4 | Ordinal: 15541
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CC1 | Ordinal: 15554
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CE6 | Ordinal: 15591
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CF7 | Ordinal: 15608
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D06 | Ordinal: 15623
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D17 | Ordinal: 15640
        void glShadeModel(unsigned int);

    // RVA: 0x3D2E | Ordinal: 15663
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D4F | Ordinal: 15696
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D64 | Ordinal: 15717
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D7F | Ordinal: 15744
        void glStencilMask(unsigned int);

    // RVA: 0x3D94 | Ordinal: 15765
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DAF | Ordinal: 15792
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DC4 | Ordinal: 15813
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DF7 | Ordinal: 15864
        void glTexCoord1d(double);

    // RVA: 0x3E08 | Ordinal: 15881
        void glTexCoord1dv(double const *);

    // RVA: 0x3E19 | Ordinal: 15898
        void glTexCoord1f(float);

    // RVA: 0x3E2A | Ordinal: 15915
        void glTexCoord1fv(float const *);

    // RVA: 0x3E3B | Ordinal: 15932
        void glTexCoord1i(int);

    // RVA: 0x3E4C | Ordinal: 15949
        void glTexCoord1iv(int const *);

    // RVA: 0x3E5D | Ordinal: 15966
        void glTexCoord1s(short);

    // RVA: 0x3E6E | Ordinal: 15983
        void glTexCoord1sv(short const *);

    // RVA: 0x3E7F | Ordinal: 16000
        void glTexCoord2d(double, double);

    // RVA: 0x3E90 | Ordinal: 16017
        void glTexCoord2dv(double const *);

    // RVA: 0x3EA1 | Ordinal: 16034
        void glTexCoord2f(float, float);

    // RVA: 0x3EB2 | Ordinal: 16051
        void glTexCoord2fv(float const *);

    // RVA: 0x3EC3 | Ordinal: 16068
        void glTexCoord2i(int, int);

    // RVA: 0x3ED4 | Ordinal: 16085
        void glTexCoord2iv(int const *);

    // RVA: 0x3EE5 | Ordinal: 16102
        void glTexCoord2s(short, short);

    // RVA: 0x3EF6 | Ordinal: 16119
        void glTexCoord2sv(short const *);

    // RVA: 0x3F07 | Ordinal: 16136
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F18 | Ordinal: 16153
        void glTexCoord3dv(double const *);

    // RVA: 0x3F29 | Ordinal: 16170
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F3A | Ordinal: 16187
        void glTexCoord3fv(float const *);

    // RVA: 0x3F4B | Ordinal: 16204
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F5C | Ordinal: 16221
        void glTexCoord3iv(int const *);

    // RVA: 0x3F6D | Ordinal: 16238
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F7E | Ordinal: 16255
        void glTexCoord3sv(short const *);

    // RVA: 0x3F8F | Ordinal: 16272
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3FA0 | Ordinal: 16289
        void glTexCoord4dv(double const *);

    // RVA: 0x3FB1 | Ordinal: 16306
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FC2 | Ordinal: 16323
        void glTexCoord4fv(float const *);

    // RVA: 0x3FD3 | Ordinal: 16340
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FE4 | Ordinal: 16357
        void glTexCoord4iv(int const *);

    // RVA: 0x3FF5 | Ordinal: 16374
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x4006 | Ordinal: 16391
        void glTexCoord4sv(short const *);

    // RVA: 0x4076 | Ordinal: 16503
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x4087 | Ordinal: 16520
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x4098 | Ordinal: 16537
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40A9 | Ordinal: 16554
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40BA | Ordinal: 16571
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40CB | Ordinal: 16588
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40DC | Ordinal: 16605
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40ED | Ordinal: 16622
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x40FE | Ordinal: 16639
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x410F | Ordinal: 16656
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x4120 | Ordinal: 16673
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x4131 | Ordinal: 16690
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x414C | Ordinal: 16717
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4175 | Ordinal: 16758
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4198 | Ordinal: 16793
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41AB | Ordinal: 16812
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41C6 | Ordinal: 16839
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41E1 | Ordinal: 16866
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41FC | Ordinal: 16893
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4217 | Ordinal: 16920
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4258 | Ordinal: 16985
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4272 | Ordinal: 17011
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x428B | Ordinal: 17036
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42CA | Ordinal: 17099
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x42E4 | Ordinal: 17125
        void glTranslated(double, double, double);

    // RVA: 0x42F5 | Ordinal: 17142
        void glTranslatef(float, float, float);

    // RVA: 0x4319 | Ordinal: 17178
        void glUniform1f(int, float);

    // RVA: 0x432E | Ordinal: 17199
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4343 | Ordinal: 17220
        void glUniform1i(int, int);

    // RVA: 0x4358 | Ordinal: 17241
        void glUniform1iv(int, int, int const *);

    // RVA: 0x436B | Ordinal: 17260
        void glUniform1ui(int, unsigned int);

    // RVA: 0x437E | Ordinal: 17279
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x43AB | Ordinal: 17324
        void glUniform2f(int, float, float);

    // RVA: 0x43C0 | Ordinal: 17345
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43D5 | Ordinal: 17366
        void glUniform2i(int, int, int);

    // RVA: 0x43EA | Ordinal: 17387
        void glUniform2iv(int, int, int const *);

    // RVA: 0x43FD | Ordinal: 17406
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4410 | Ordinal: 17425
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x443D | Ordinal: 17470
        void glUniform3f(int, float, float, float);

    // RVA: 0x4452 | Ordinal: 17491
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4467 | Ordinal: 17512
        void glUniform3i(int, int, int, int);

    // RVA: 0x447C | Ordinal: 17533
        void glUniform3iv(int, int, int const *);

    // RVA: 0x448F | Ordinal: 17552
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44A2 | Ordinal: 17571
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44CF | Ordinal: 17616
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44E4 | Ordinal: 17637
        void glUniform4fv(int, int, float const *);

    // RVA: 0x44F9 | Ordinal: 17658
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x450E | Ordinal: 17679
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4521 | Ordinal: 17698
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4534 | Ordinal: 17717
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4567 | Ordinal: 17768
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x4587 | Ordinal: 17800
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45A7 | Ordinal: 17832
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45C8 | Ordinal: 17865
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45E8 | Ordinal: 17897
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4608 | Ordinal: 17929
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x4629 | Ordinal: 17962
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x4649 | Ordinal: 17994
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4669 | Ordinal: 18026
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x468B | Ordinal: 18060
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46A2 | Ordinal: 18083
        void glUseProgram(unsigned int);

    // RVA: 0x46C2 | Ordinal: 18115
        void glValidateProgram(unsigned int);

    // RVA: 0x46E7 | Ordinal: 18152
        void glVertex2d(double, double);

    // RVA: 0x46F8 | Ordinal: 18169
        void glVertex2dv(double const *);

    // RVA: 0x4709 | Ordinal: 18186
        void glVertex2f(float, float);

    // RVA: 0x471A | Ordinal: 18203
        void glVertex2fv(float const *);

    // RVA: 0x472B | Ordinal: 18220
        void glVertex2i(int, int);

    // RVA: 0x473C | Ordinal: 18237
        void glVertex2iv(int const *);

    // RVA: 0x474D | Ordinal: 18254
        void glVertex2s(short, short);

    // RVA: 0x475E | Ordinal: 18271
        void glVertex2sv(short const *);

    // RVA: 0x476F | Ordinal: 18288
        void glVertex3d(double, double, double);

    // RVA: 0x4780 | Ordinal: 18305
        void glVertex3dv(double const *);

    // RVA: 0x4791 | Ordinal: 18322
        void glVertex3f(float, float, float);

    // RVA: 0x47A2 | Ordinal: 18339
        void glVertex3fv(float const *);

    // RVA: 0x47B3 | Ordinal: 18356
        void glVertex3i(int, int, int);

    // RVA: 0x47C4 | Ordinal: 18373
        void glVertex3iv(int const *);

    // RVA: 0x47D5 | Ordinal: 18390
        void glVertex3s(short, short, short);

    // RVA: 0x47E6 | Ordinal: 18407
        void glVertex3sv(short const *);

    // RVA: 0x47F7 | Ordinal: 18424
        void glVertex4d(double, double, double, double);

    // RVA: 0x4808 | Ordinal: 18441
        void glVertex4dv(double const *);

    // RVA: 0x4819 | Ordinal: 18458
        void glVertex4f(float, float, float, float);

    // RVA: 0x482A | Ordinal: 18475
        void glVertex4fv(float const *);

    // RVA: 0x483B | Ordinal: 18492
        void glVertex4i(int, int, int, int);

    // RVA: 0x484C | Ordinal: 18509
        void glVertex4iv(int const *);

    // RVA: 0x485D | Ordinal: 18526
        void glVertex4s(short, short, short, short);

    // RVA: 0x486E | Ordinal: 18543
        void glVertex4sv(short const *);

    // RVA: 0x4889 | Ordinal: 18570
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x4896 | Ordinal: 18583
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48A4 | Ordinal: 18597
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48B2 | Ordinal: 18611
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48BF | Ordinal: 18624
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48CC | Ordinal: 18637
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48D9 | Ordinal: 18650
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48E6 | Ordinal: 18663
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48F4 | Ordinal: 18677
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x4902 | Ordinal: 18691
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x490F | Ordinal: 18704
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x491C | Ordinal: 18717
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x4929 | Ordinal: 18730
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x4936 | Ordinal: 18743
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x4944 | Ordinal: 18757
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x4952 | Ordinal: 18771
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x495F | Ordinal: 18784
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x496C | Ordinal: 18797
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x4979 | Ordinal: 18810
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x4986 | Ordinal: 18823
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x4993 | Ordinal: 18836
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49A0 | Ordinal: 18849
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49AD | Ordinal: 18862
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49BA | Ordinal: 18875
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49C7 | Ordinal: 18888
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49D4 | Ordinal: 18901
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49E1 | Ordinal: 18914
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49EE | Ordinal: 18927
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x49FC | Ordinal: 18941
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A0A | Ordinal: 18955
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A17 | Ordinal: 18968
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A24 | Ordinal: 18981
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A31 | Ordinal: 18994
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A3E | Ordinal: 19007
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A4B | Ordinal: 19020
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A58 | Ordinal: 19033
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A80 | Ordinal: 19073
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A8B | Ordinal: 19084
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4A96 | Ordinal: 19095
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AA1 | Ordinal: 19106
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AAC | Ordinal: 19117
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4AB7 | Ordinal: 19128
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4AC2 | Ordinal: 19139
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4ACD | Ordinal: 19150
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AD8 | Ordinal: 19161
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AE3 | Ordinal: 19172
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AEE | Ordinal: 19183
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AF9 | Ordinal: 19194
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B04 | Ordinal: 19205
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B10 | Ordinal: 19217
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B1C | Ordinal: 19229
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B27 | Ordinal: 19240
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B32 | Ordinal: 19251
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B3E | Ordinal: 19263
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B4A | Ordinal: 19275
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B55 | Ordinal: 19286
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B68 | Ordinal: 19305
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4C4D | Ordinal: 19534
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4CB5 | Ordinal: 19638
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CC7 | Ordinal: 19656
        void glViewport(int, int, int, int);

    // RVA: 0x4D0C | Ordinal: 19725
        void glWindowPos2d(double, double);

    // RVA: 0x4D19 | Ordinal: 19738
        void glWindowPos2dv(double const *);

    // RVA: 0x4D26 | Ordinal: 19751
        void glWindowPos2f(float, float);

    // RVA: 0x4D33 | Ordinal: 19764
        void glWindowPos2fv(float const *);

    // RVA: 0x4D40 | Ordinal: 19777
        void glWindowPos2i(int, int);

    // RVA: 0x4D4D | Ordinal: 19790
        void glWindowPos2iv(int const *);

    // RVA: 0x4D5A | Ordinal: 19803
        void glWindowPos2s(short, short);

    // RVA: 0x4D67 | Ordinal: 19816
        void glWindowPos2sv(short const *);

    // RVA: 0x4D74 | Ordinal: 19829
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D81 | Ordinal: 19842
        void glWindowPos3dv(double const *);

    // RVA: 0x4D8E | Ordinal: 19855
        void glWindowPos3f(float, float, float);

    // RVA: 0x4D9B | Ordinal: 19868
        void glWindowPos3fv(float const *);

    // RVA: 0x4DA8 | Ordinal: 19881
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DB5 | Ordinal: 19894
        void glWindowPos3iv(int const *);

    // RVA: 0x4DC2 | Ordinal: 19907
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DCF | Ordinal: 19920
        void glWindowPos3sv(short const *);

    // RVA: 0x4F22 | Ordinal: 20259
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FE4 | Ordinal: 20453
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6108 | Ordinal: 24841
        void versionProfile(void);

    // RVA: 0x485 | Ordinal: 1158
        void _QOpenGLFunctions_3_0(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_3_0_HPP
