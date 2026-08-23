#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_3_3_Compatibility
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_3_3_Compatibility
{
public:

    // RVA: 0x1BB | Ordinal: 444
        void QOpenGLFunctions_3_3_Compatibility(void);

    // RVA: 0x11C2 | Ordinal: 4547
        void glAccum(unsigned int, float);

    // RVA: 0x11DE | Ordinal: 4575
        void glActiveTexture(unsigned int);

    // RVA: 0x11F6 | Ordinal: 4599
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x1206 | Ordinal: 4615
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x1216 | Ordinal: 4631
        void glArrayElement(int);

    // RVA: 0x1224 | Ordinal: 4645
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x123D | Ordinal: 4670
        void glBegin(unsigned int);

    // RVA: 0x1248 | Ordinal: 4681
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x125E | Ordinal: 4703
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x127D | Ordinal: 4734
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x1292 | Ordinal: 4755
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12A8 | Ordinal: 4777
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12BB | Ordinal: 4796
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12CE | Ordinal: 4815
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12E8 | Ordinal: 4841
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12F6 | Ordinal: 4855
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x1309 | Ordinal: 4874
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1334 | Ordinal: 4917
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x1343 | Ordinal: 4932
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1361 | Ordinal: 4962
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1387 | Ordinal: 5000
        void glBindVertexArray(unsigned int);

    // RVA: 0x13AA | Ordinal: 5035
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13BD | Ordinal: 5054
        void glBlendColor(float, float, float, float);

    // RVA: 0x13D6 | Ordinal: 5079
        void glBlendEquation(unsigned int);

    // RVA: 0x13EB | Ordinal: 5100
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x1420 | Ordinal: 5153
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1437 | Ordinal: 5176
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1464 | Ordinal: 5221
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x147C | Ordinal: 5245
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x1496 | Ordinal: 5271
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14AE | Ordinal: 5295
        void glCallList(unsigned int);

    // RVA: 0x14BF | Ordinal: 5312
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14CB | Ordinal: 5324
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14DF | Ordinal: 5344
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x14FA | Ordinal: 5371
        void glClear(unsigned int);

    // RVA: 0x1512 | Ordinal: 5395
        void glClearAccum(float, float, float, float);

    // RVA: 0x152A | Ordinal: 5419
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x153D | Ordinal: 5438
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x1550 | Ordinal: 5457
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1563 | Ordinal: 5476
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x157E | Ordinal: 5503
        void glClearColor(float, float, float, float);

    // RVA: 0x1598 | Ordinal: 5529
        void glClearDepth(double);

    // RVA: 0x15BB | Ordinal: 5564
        void glClearIndex(float);

    // RVA: 0x15DB | Ordinal: 5596
        void glClearStencil(int);

    // RVA: 0x15F8 | Ordinal: 5625
        void glClientActiveTexture(unsigned int);

    // RVA: 0x1602 | Ordinal: 5635
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x161C | Ordinal: 5661
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x162D | Ordinal: 5678
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x163E | Ordinal: 5695
        void glColor3bv(signed char const *);

    // RVA: 0x164F | Ordinal: 5712
        void glColor3d(double, double, double);

    // RVA: 0x1660 | Ordinal: 5729
        void glColor3dv(double const *);

    // RVA: 0x1671 | Ordinal: 5746
        void glColor3f(float, float, float);

    // RVA: 0x1682 | Ordinal: 5763
        void glColor3fv(float const *);

    // RVA: 0x1693 | Ordinal: 5780
        void glColor3i(int, int, int);

    // RVA: 0x16A4 | Ordinal: 5797
        void glColor3iv(int const *);

    // RVA: 0x16B5 | Ordinal: 5814
        void glColor3s(short, short, short);

    // RVA: 0x16C6 | Ordinal: 5831
        void glColor3sv(short const *);

    // RVA: 0x16D7 | Ordinal: 5848
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16E8 | Ordinal: 5865
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16F9 | Ordinal: 5882
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x170A | Ordinal: 5899
        void glColor3uiv(unsigned int const *);

    // RVA: 0x171B | Ordinal: 5916
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x172C | Ordinal: 5933
        void glColor3usv(unsigned short const *);

    // RVA: 0x173D | Ordinal: 5950
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x174E | Ordinal: 5967
        void glColor4bv(signed char const *);

    // RVA: 0x175F | Ordinal: 5984
        void glColor4d(double, double, double, double);

    // RVA: 0x1770 | Ordinal: 6001
        void glColor4dv(double const *);

    // RVA: 0x1781 | Ordinal: 6018
        void glColor4f(float, float, float, float);

    // RVA: 0x1792 | Ordinal: 6035
        void glColor4fv(float const *);

    // RVA: 0x17A3 | Ordinal: 6052
        void glColor4i(int, int, int, int);

    // RVA: 0x17B4 | Ordinal: 6069
        void glColor4iv(int const *);

    // RVA: 0x17C5 | Ordinal: 6086
        void glColor4s(short, short, short, short);

    // RVA: 0x17D6 | Ordinal: 6103
        void glColor4sv(short const *);

    // RVA: 0x17E7 | Ordinal: 6120
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17F8 | Ordinal: 6137
        void glColor4ubv(unsigned char const *);

    // RVA: 0x1809 | Ordinal: 6154
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x181A | Ordinal: 6171
        void glColor4uiv(unsigned int const *);

    // RVA: 0x182B | Ordinal: 6188
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x183C | Ordinal: 6205
        void glColor4usv(unsigned short const *);

    // RVA: 0x1850 | Ordinal: 6225
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1863 | Ordinal: 6244
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x187B | Ordinal: 6268
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x1882 | Ordinal: 6275
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x188E | Ordinal: 6287
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x189A | Ordinal: 6299
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18A6 | Ordinal: 6311
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x18BB | Ordinal: 6332
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18CA | Ordinal: 6347
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18D9 | Ordinal: 6362
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18E8 | Ordinal: 6377
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18F7 | Ordinal: 6392
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1905 | Ordinal: 6406
        void glCompileShader(unsigned int);

    // RVA: 0x191C | Ordinal: 6429
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1934 | Ordinal: 6453
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x194C | Ordinal: 6477
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1963 | Ordinal: 6500
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x197B | Ordinal: 6524
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1993 | Ordinal: 6548
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19AF | Ordinal: 6576
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19BE | Ordinal: 6591
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19CD | Ordinal: 6606
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19DC | Ordinal: 6621
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19EB | Ordinal: 6636
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19FA | Ordinal: 6651
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A05 | Ordinal: 6662
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A1B | Ordinal: 6684
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A2A | Ordinal: 6699
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A39 | Ordinal: 6714
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A48 | Ordinal: 6729
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A62 | Ordinal: 6755
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A74 | Ordinal: 6773
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A8E | Ordinal: 6799
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AA7 | Ordinal: 6824
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AC1 | Ordinal: 6850
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1ADA | Ordinal: 6875
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AF9 | Ordinal: 6906
        void glCreateProgram(void);

    // RVA: 0x1B16 | Ordinal: 6935
        void glCreateShader(unsigned int);

    // RVA: 0x1B42 | Ordinal: 6979
        void glCullFace(unsigned int);

    // RVA: 0x1B67 | Ordinal: 7016
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B7A | Ordinal: 7035
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B92 | Ordinal: 7059
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1BA0 | Ordinal: 7073
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BC1 | Ordinal: 7106
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BD4 | Ordinal: 7125
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BE3 | Ordinal: 7140
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1BF8 | Ordinal: 7161
        void glDeleteShader(unsigned int);

    // RVA: 0x1C09 | Ordinal: 7178
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C23 | Ordinal: 7204
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C43 | Ordinal: 7236
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C5E | Ordinal: 7263
        void glDepthFunc(unsigned int);

    // RVA: 0x1C79 | Ordinal: 7290
        void glDepthMask(unsigned char);

    // RVA: 0x1C93 | Ordinal: 7316
        void glDepthRange(double, double);

    // RVA: 0x1CC7 | Ordinal: 7368
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CE2 | Ordinal: 7395
        void glDisable(unsigned int);

    // RVA: 0x1CF9 | Ordinal: 7418
        void glDisableClientState(unsigned int);

    // RVA: 0x1D09 | Ordinal: 7434
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D1C | Ordinal: 7453
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D45 | Ordinal: 7494
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D64 | Ordinal: 7525
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D86 | Ordinal: 7559
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D9B | Ordinal: 7580
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DB5 | Ordinal: 7606
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DC6 | Ordinal: 7623
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DE5 | Ordinal: 7654
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DFE | Ordinal: 7679
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E1E | Ordinal: 7711
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E30 | Ordinal: 7729
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E41 | Ordinal: 7746
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E81 | Ordinal: 7810
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E91 | Ordinal: 7826
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1EA2 | Ordinal: 7843
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EB6 | Ordinal: 7863
        void glEnable(unsigned int);

    // RVA: 0x1ECD | Ordinal: 7886
        void glEnableClientState(unsigned int);

    // RVA: 0x1EDD | Ordinal: 7902
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EF0 | Ordinal: 7921
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F08 | Ordinal: 7945
        void glEnd(void);

    // RVA: 0x1F13 | Ordinal: 7956
        void glEndConditionalRender(void);

    // RVA: 0x1F2B | Ordinal: 7980
        void glEndList(void);

    // RVA: 0x1F3A | Ordinal: 7995
        void glEndQuery(unsigned int);

    // RVA: 0x1F59 | Ordinal: 8026
        void glEndTransformFeedback(void);

    // RVA: 0x1F71 | Ordinal: 8050
        void glEvalCoord1d(double);

    // RVA: 0x1F82 | Ordinal: 8067
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F93 | Ordinal: 8084
        void glEvalCoord1f(float);

    // RVA: 0x1FA4 | Ordinal: 8101
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FB5 | Ordinal: 8118
        void glEvalCoord2d(double, double);

    // RVA: 0x1FC6 | Ordinal: 8135
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FD7 | Ordinal: 8152
        void glEvalCoord2f(float, float);

    // RVA: 0x1FE8 | Ordinal: 8169
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FF9 | Ordinal: 8186
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x200A | Ordinal: 8203
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x201B | Ordinal: 8220
        void glEvalPoint1(int);

    // RVA: 0x202C | Ordinal: 8237
        void glEvalPoint2(int, int);

    // RVA: 0x203D | Ordinal: 8254
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x2047 | Ordinal: 8264
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x2062 | Ordinal: 8291
        void glFinish(void);

    // RVA: 0x207D | Ordinal: 8318
        void glFlush(void);

    // RVA: 0x2090 | Ordinal: 8337
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x20A6 | Ordinal: 8359
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20B3 | Ordinal: 8372
        void glFogCoordd(double);

    // RVA: 0x20C0 | Ordinal: 8385
        void glFogCoorddv(double const *);

    // RVA: 0x20CD | Ordinal: 8398
        void glFogCoordf(float);

    // RVA: 0x20DA | Ordinal: 8411
        void glFogCoordfv(float const *);

    // RVA: 0x20EB | Ordinal: 8428
        void glFogf(unsigned int, float);

    // RVA: 0x20FC | Ordinal: 8445
        void glFogfv(unsigned int, float const *);

    // RVA: 0x210D | Ordinal: 8462
        void glFogi(unsigned int, int);

    // RVA: 0x211E | Ordinal: 8479
        void glFogiv(unsigned int, int const *);

    // RVA: 0x2132 | Ordinal: 8499
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x217A | Ordinal: 8571
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2144 | Ordinal: 8517
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2157 | Ordinal: 8536
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2169 | Ordinal: 8554
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x218D | Ordinal: 8590
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21A8 | Ordinal: 8617
        void glFrontFace(unsigned int);

    // RVA: 0x21C0 | Ordinal: 8641
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21CF | Ordinal: 8656
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21E2 | Ordinal: 8675
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x21FA | Ordinal: 8699
        void glGenLists(int);

    // RVA: 0x2214 | Ordinal: 8725
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2227 | Ordinal: 8744
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x2236 | Ordinal: 8759
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x2250 | Ordinal: 8785
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2270 | Ordinal: 8817
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2283 | Ordinal: 8836
        void glGenerateMipmap(unsigned int);

    // RVA: 0x22A2 | Ordinal: 8867
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22DB | Ordinal: 8924
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22ED | Ordinal: 8942
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22FF | Ordinal: 8960
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2310 | Ordinal: 8977
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2322 | Ordinal: 8995
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2337 | Ordinal: 9016
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x234C | Ordinal: 9037
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x235F | Ordinal: 9056
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x237A | Ordinal: 9083
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x238B | Ordinal: 9100
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23A1 | Ordinal: 9122
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23B7 | Ordinal: 9144
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23CD | Ordinal: 9166
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23E5 | Ordinal: 9190
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23F4 | Ordinal: 9205
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2403 | Ordinal: 9220
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2412 | Ordinal: 9235
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2422 | Ordinal: 9251
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x243C | Ordinal: 9277
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x244B | Ordinal: 9292
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x245A | Ordinal: 9307
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x247C | Ordinal: 9341
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x2497 | Ordinal: 9368
        void glGetError(void);

    // RVA: 0x24BC | Ordinal: 9405
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24CA | Ordinal: 9419
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24DD | Ordinal: 9438
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24F0 | Ordinal: 9457
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2510 | Ordinal: 9489
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x251F | Ordinal: 9504
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x252E | Ordinal: 9519
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2538 | Ordinal: 9529
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2549 | Ordinal: 9546
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x255C | Ordinal: 9565
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2577 | Ordinal: 9592
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x259E | Ordinal: 9631
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25AF | Ordinal: 9648
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25C0 | Ordinal: 9665
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25D1 | Ordinal: 9682
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25E2 | Ordinal: 9699
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25F3 | Ordinal: 9716
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x2604 | Ordinal: 9733
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2613 | Ordinal: 9748
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2622 | Ordinal: 9763
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2631 | Ordinal: 9778
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x263B | Ordinal: 9788
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x266B | Ordinal: 9836
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x267C | Ordinal: 9853
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x268D | Ordinal: 9870
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x26A0 | Ordinal: 9889
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26B6 | Ordinal: 9911
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26CF | Ordinal: 9936
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x272F | Ordinal: 10032
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2749 | Ordinal: 10058
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x275E | Ordinal: 10079
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x276C | Ordinal: 10093
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x2782 | Ordinal: 10115
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2798 | Ordinal: 10137
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27AB | Ordinal: 10156
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27BA | Ordinal: 10171
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27C9 | Ordinal: 10186
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27D8 | Ordinal: 10201
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27E7 | Ordinal: 10216
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27FD | Ordinal: 10238
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x280B | Ordinal: 10252
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x282B | Ordinal: 10284
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2840 | Ordinal: 10305
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x285B | Ordinal: 10332
        void glGetString(unsigned int);

    // RVA: 0x286E | Ordinal: 10351
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2897 | Ordinal: 10392
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x28AF | Ordinal: 10416
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28C0 | Ordinal: 10433
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28D1 | Ordinal: 10450
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28E2 | Ordinal: 10467
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28F3 | Ordinal: 10484
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x2906 | Ordinal: 10503
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2921 | Ordinal: 10530
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x293C | Ordinal: 10557
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x294F | Ordinal: 10576
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2962 | Ordinal: 10595
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x297D | Ordinal: 10622
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2998 | Ordinal: 10649
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29BB | Ordinal: 10684
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29D3 | Ordinal: 10708
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29E5 | Ordinal: 10726
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x29FA | Ordinal: 10747
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A27 | Ordinal: 10792
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A3C | Ordinal: 10813
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A4F | Ordinal: 10832
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A68 | Ordinal: 10857
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A7B | Ordinal: 10876
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A9A | Ordinal: 10907
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AAE | Ordinal: 10927
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AC3 | Ordinal: 10948
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AD8 | Ordinal: 10969
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B0E | Ordinal: 11023
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B24 | Ordinal: 11045
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B35 | Ordinal: 11062
        void glIndexMask(unsigned int);

    // RVA: 0x2B45 | Ordinal: 11078
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B56 | Ordinal: 11095
        void glIndexd(double);

    // RVA: 0x2B67 | Ordinal: 11112
        void glIndexdv(double const *);

    // RVA: 0x2B78 | Ordinal: 11129
        void glIndexf(float);

    // RVA: 0x2B89 | Ordinal: 11146
        void glIndexfv(float const *);

    // RVA: 0x2B9A | Ordinal: 11163
        void glIndexi(int);

    // RVA: 0x2BAB | Ordinal: 11180
        void glIndexiv(int const *);

    // RVA: 0x2BBC | Ordinal: 11197
        void glIndexs(short);

    // RVA: 0x2BCD | Ordinal: 11214
        void glIndexsv(short const *);

    // RVA: 0x2BDF | Ordinal: 11232
        void glIndexub(unsigned char);

    // RVA: 0x2BF6 | Ordinal: 11255
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C0C | Ordinal: 11277
        void glInitNames(void);

    // RVA: 0x2C1C | Ordinal: 11293
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C56 | Ordinal: 11351
        void glIsBuffer(unsigned int);

    // RVA: 0x2C71 | Ordinal: 11378
        void glIsEnabled(unsigned int);

    // RVA: 0x2C84 | Ordinal: 11397
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C97 | Ordinal: 11416
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CAF | Ordinal: 11440
        void glIsList(unsigned int);

    // RVA: 0x2CBD | Ordinal: 11454
        void glIsProgram(unsigned int);

    // RVA: 0x2CDE | Ordinal: 11487
        void glIsQuery(unsigned int);

    // RVA: 0x2CF1 | Ordinal: 11506
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D00 | Ordinal: 11521
        void glIsSampler(unsigned int);

    // RVA: 0x2D15 | Ordinal: 11542
        void glIsShader(unsigned int);

    // RVA: 0x2D26 | Ordinal: 11559
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D40 | Ordinal: 11585
        void glIsTexture(unsigned int);

    // RVA: 0x2D60 | Ordinal: 11617
        void glIsVertexArray(unsigned int);

    // RVA: 0x2D78 | Ordinal: 11641
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D89 | Ordinal: 11658
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D9A | Ordinal: 11675
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DAB | Ordinal: 11692
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DBC | Ordinal: 11709
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DCD | Ordinal: 11726
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DDE | Ordinal: 11743
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DEF | Ordinal: 11760
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2E00 | Ordinal: 11777
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E14 | Ordinal: 11797
        void glLineWidth(float);

    // RVA: 0x2E29 | Ordinal: 11818
        void glLinkProgram(unsigned int);

    // RVA: 0x2E41 | Ordinal: 11842
        void glListBase(unsigned int);

    // RVA: 0x2E52 | Ordinal: 11859
        void glLoadIdentity(void);

    // RVA: 0x2E63 | Ordinal: 11876
        void glLoadMatrixd(double const *);

    // RVA: 0x2E74 | Ordinal: 11893
        void glLoadMatrixf(float const *);

    // RVA: 0x2E85 | Ordinal: 11910
        void glLoadName(unsigned int);

    // RVA: 0x2E93 | Ordinal: 11924
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2EA1 | Ordinal: 11938
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EB4 | Ordinal: 11957
        void glLogicOp(unsigned int);

    // RVA: 0x2ECC | Ordinal: 11981
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2EDD | Ordinal: 11998
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EEE | Ordinal: 12015
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2EFF | Ordinal: 12032
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F0E | Ordinal: 12047
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F21 | Ordinal: 12066
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2F39 | Ordinal: 12090
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F4A | Ordinal: 12107
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F5B | Ordinal: 12124
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F6C | Ordinal: 12141
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F81 | Ordinal: 12162
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F92 | Ordinal: 12179
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2FA3 | Ordinal: 12196
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FB4 | Ordinal: 12213
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FC5 | Ordinal: 12230
        void glMatrixMode(unsigned int);

    // RVA: 0x2FED | Ordinal: 12270
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x2FFE | Ordinal: 12287
        void glMultMatrixd(double const *);

    // RVA: 0x300F | Ordinal: 12304
        void glMultMatrixf(float const *);

    // RVA: 0x301D | Ordinal: 12318
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x302B | Ordinal: 12332
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x303A | Ordinal: 12347
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3056 | Ordinal: 12375
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3066 | Ordinal: 12391
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3081 | Ordinal: 12418
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x308F | Ordinal: 12432
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x309D | Ordinal: 12446
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30AB | Ordinal: 12460
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30B9 | Ordinal: 12474
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30C7 | Ordinal: 12488
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30D5 | Ordinal: 12502
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30E3 | Ordinal: 12516
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30F1 | Ordinal: 12530
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x30FF | Ordinal: 12544
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x310D | Ordinal: 12558
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x311B | Ordinal: 12572
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x3129 | Ordinal: 12586
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x3137 | Ordinal: 12600
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x3145 | Ordinal: 12614
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x3153 | Ordinal: 12628
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x3161 | Ordinal: 12642
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x316F | Ordinal: 12656
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x317D | Ordinal: 12670
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x318B | Ordinal: 12684
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x3199 | Ordinal: 12698
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31A7 | Ordinal: 12712
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31B5 | Ordinal: 12726
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31C3 | Ordinal: 12740
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31D1 | Ordinal: 12754
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31DF | Ordinal: 12768
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31ED | Ordinal: 12782
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31FB | Ordinal: 12796
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x3209 | Ordinal: 12810
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x3217 | Ordinal: 12824
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x3225 | Ordinal: 12838
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x3233 | Ordinal: 12852
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x323A | Ordinal: 12859
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3246 | Ordinal: 12871
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3252 | Ordinal: 12883
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x325E | Ordinal: 12895
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x326A | Ordinal: 12907
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3276 | Ordinal: 12919
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3282 | Ordinal: 12931
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x328E | Ordinal: 12943
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x32BC | Ordinal: 12989
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32CD | Ordinal: 13006
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32DE | Ordinal: 13023
        void glNormal3bv(signed char const *);

    // RVA: 0x32EF | Ordinal: 13040
        void glNormal3d(double, double, double);

    // RVA: 0x3300 | Ordinal: 13057
        void glNormal3dv(double const *);

    // RVA: 0x3311 | Ordinal: 13074
        void glNormal3f(float, float, float);

    // RVA: 0x3322 | Ordinal: 13091
        void glNormal3fv(float const *);

    // RVA: 0x3333 | Ordinal: 13108
        void glNormal3i(int, int, int);

    // RVA: 0x3344 | Ordinal: 13125
        void glNormal3iv(int const *);

    // RVA: 0x3355 | Ordinal: 13142
        void glNormal3s(short, short, short);

    // RVA: 0x3366 | Ordinal: 13159
        void glNormal3sv(short const *);

    // RVA: 0x336D | Ordinal: 13166
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x3379 | Ordinal: 13178
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x338E | Ordinal: 13199
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33A9 | Ordinal: 13226
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33BA | Ordinal: 13243
        void glPassThrough(float);

    // RVA: 0x33F1 | Ordinal: 13298
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x3402 | Ordinal: 13315
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x3413 | Ordinal: 13332
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x3426 | Ordinal: 13351
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3441 | Ordinal: 13378
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3459 | Ordinal: 13402
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x346A | Ordinal: 13419
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x347B | Ordinal: 13436
        void glPixelZoom(float, float);

    // RVA: 0x348A | Ordinal: 13451
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34A0 | Ordinal: 13473
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34B6 | Ordinal: 13495
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34CC | Ordinal: 13517
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34E6 | Ordinal: 13543
        void glPointSize(float);

    // RVA: 0x3500 | Ordinal: 13569
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x351A | Ordinal: 13595
        void glPolygonOffset(float, float);

    // RVA: 0x3532 | Ordinal: 13619
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x3543 | Ordinal: 13636
        void glPopAttrib(void);

    // RVA: 0x3553 | Ordinal: 13652
        void glPopClientAttrib(void);

    // RVA: 0x3569 | Ordinal: 13674
        void glPopMatrix(void);

    // RVA: 0x357A | Ordinal: 13691
        void glPopName(void);

    // RVA: 0x3585 | Ordinal: 13702
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x359C | Ordinal: 13725
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37D0 | Ordinal: 14289
        void glProvokingVertex(unsigned int);

    // RVA: 0x37E8 | Ordinal: 14313
        void glPushAttrib(unsigned int);

    // RVA: 0x37F8 | Ordinal: 14329
        void glPushClientAttrib(unsigned int);

    // RVA: 0x380E | Ordinal: 14351
        void glPushMatrix(void);

    // RVA: 0x381F | Ordinal: 14368
        void glPushName(unsigned int);

    // RVA: 0x3826 | Ordinal: 14375
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x383E | Ordinal: 14399
        void glRasterPos2d(double, double);

    // RVA: 0x384F | Ordinal: 14416
        void glRasterPos2dv(double const *);

    // RVA: 0x3860 | Ordinal: 14433
        void glRasterPos2f(float, float);

    // RVA: 0x3871 | Ordinal: 14450
        void glRasterPos2fv(float const *);

    // RVA: 0x3882 | Ordinal: 14467
        void glRasterPos2i(int, int);

    // RVA: 0x3893 | Ordinal: 14484
        void glRasterPos2iv(int const *);

    // RVA: 0x38A4 | Ordinal: 14501
        void glRasterPos2s(short, short);

    // RVA: 0x38B5 | Ordinal: 14518
        void glRasterPos2sv(short const *);

    // RVA: 0x38C6 | Ordinal: 14535
        void glRasterPos3d(double, double, double);

    // RVA: 0x38D7 | Ordinal: 14552
        void glRasterPos3dv(double const *);

    // RVA: 0x38E8 | Ordinal: 14569
        void glRasterPos3f(float, float, float);

    // RVA: 0x38F9 | Ordinal: 14586
        void glRasterPos3fv(float const *);

    // RVA: 0x390A | Ordinal: 14603
        void glRasterPos3i(int, int, int);

    // RVA: 0x391B | Ordinal: 14620
        void glRasterPos3iv(int const *);

    // RVA: 0x392C | Ordinal: 14637
        void glRasterPos3s(short, short, short);

    // RVA: 0x393D | Ordinal: 14654
        void glRasterPos3sv(short const *);

    // RVA: 0x394E | Ordinal: 14671
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x395F | Ordinal: 14688
        void glRasterPos4dv(double const *);

    // RVA: 0x3970 | Ordinal: 14705
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x3981 | Ordinal: 14722
        void glRasterPos4fv(float const *);

    // RVA: 0x3992 | Ordinal: 14739
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x39A3 | Ordinal: 14756
        void glRasterPos4iv(int const *);

    // RVA: 0x39B4 | Ordinal: 14773
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39C5 | Ordinal: 14790
        void glRasterPos4sv(short const *);

    // RVA: 0x39D9 | Ordinal: 14810
        void glReadBuffer(unsigned int);

    // RVA: 0x39F4 | Ordinal: 14837
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A0F | Ordinal: 14864
        void glRectd(double, double, double, double);

    // RVA: 0x3A20 | Ordinal: 14881
        void glRectdv(double const *, double const *);

    // RVA: 0x3A31 | Ordinal: 14898
        void glRectf(float, float, float, float);

    // RVA: 0x3A42 | Ordinal: 14915
        void glRectfv(float const *, float const *);

    // RVA: 0x3A53 | Ordinal: 14932
        void glRecti(int, int, int, int);

    // RVA: 0x3A64 | Ordinal: 14949
        void glRectiv(int const *, int const *);

    // RVA: 0x3A75 | Ordinal: 14966
        void glRects(short, short, short, short);

    // RVA: 0x3A86 | Ordinal: 14983
        void glRectsv(short const *, short const *);

    // RVA: 0x3AA2 | Ordinal: 15011
        void glRenderMode(unsigned int);

    // RVA: 0x3AAE | Ordinal: 15023
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3AC1 | Ordinal: 15042
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AD7 | Ordinal: 15064
        void glResetHistogram(unsigned int);

    // RVA: 0x3AE6 | Ordinal: 15079
        void glResetMinmax(unsigned int);

    // RVA: 0x3B04 | Ordinal: 15109
        void glRotated(double, double, double, double);

    // RVA: 0x3B15 | Ordinal: 15126
        void glRotatef(float, float, float, float);

    // RVA: 0x3B26 | Ordinal: 15143
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B37 | Ordinal: 15160
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B46 | Ordinal: 15175
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B55 | Ordinal: 15190
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B64 | Ordinal: 15205
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B73 | Ordinal: 15220
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B82 | Ordinal: 15235
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B91 | Ordinal: 15250
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BA9 | Ordinal: 15274
        void glScaled(double, double, double);

    // RVA: 0x3BBA | Ordinal: 15291
        void glScalef(float, float, float);

    // RVA: 0x3BCE | Ordinal: 15311
        void glScissor(int, int, int, int);

    // RVA: 0x3C00 | Ordinal: 15361
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C0D | Ordinal: 15374
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C1A | Ordinal: 15387
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C27 | Ordinal: 15400
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C34 | Ordinal: 15413
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C41 | Ordinal: 15426
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C4E | Ordinal: 15439
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C5B | Ordinal: 15452
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C68 | Ordinal: 15465
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C75 | Ordinal: 15478
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C82 | Ordinal: 15491
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C8F | Ordinal: 15504
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3C9C | Ordinal: 15517
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CA9 | Ordinal: 15530
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CB6 | Ordinal: 15543
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CC3 | Ordinal: 15556
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CCA | Ordinal: 15563
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CD6 | Ordinal: 15575
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3CE8 | Ordinal: 15593
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CF9 | Ordinal: 15610
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D08 | Ordinal: 15625
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D19 | Ordinal: 15642
        void glShadeModel(unsigned int);

    // RVA: 0x3D32 | Ordinal: 15667
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D53 | Ordinal: 15700
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D68 | Ordinal: 15721
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D83 | Ordinal: 15748
        void glStencilMask(unsigned int);

    // RVA: 0x3D98 | Ordinal: 15769
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DB3 | Ordinal: 15796
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DC8 | Ordinal: 15817
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DDA | Ordinal: 15835
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DF9 | Ordinal: 15866
        void glTexCoord1d(double);

    // RVA: 0x3E0A | Ordinal: 15883
        void glTexCoord1dv(double const *);

    // RVA: 0x3E1B | Ordinal: 15900
        void glTexCoord1f(float);

    // RVA: 0x3E2C | Ordinal: 15917
        void glTexCoord1fv(float const *);

    // RVA: 0x3E3D | Ordinal: 15934
        void glTexCoord1i(int);

    // RVA: 0x3E4E | Ordinal: 15951
        void glTexCoord1iv(int const *);

    // RVA: 0x3E5F | Ordinal: 15968
        void glTexCoord1s(short);

    // RVA: 0x3E70 | Ordinal: 15985
        void glTexCoord1sv(short const *);

    // RVA: 0x3E81 | Ordinal: 16002
        void glTexCoord2d(double, double);

    // RVA: 0x3E92 | Ordinal: 16019
        void glTexCoord2dv(double const *);

    // RVA: 0x3EA3 | Ordinal: 16036
        void glTexCoord2f(float, float);

    // RVA: 0x3EB4 | Ordinal: 16053
        void glTexCoord2fv(float const *);

    // RVA: 0x3EC5 | Ordinal: 16070
        void glTexCoord2i(int, int);

    // RVA: 0x3ED6 | Ordinal: 16087
        void glTexCoord2iv(int const *);

    // RVA: 0x3EE7 | Ordinal: 16104
        void glTexCoord2s(short, short);

    // RVA: 0x3EF8 | Ordinal: 16121
        void glTexCoord2sv(short const *);

    // RVA: 0x3F09 | Ordinal: 16138
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F1A | Ordinal: 16155
        void glTexCoord3dv(double const *);

    // RVA: 0x3F2B | Ordinal: 16172
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F3C | Ordinal: 16189
        void glTexCoord3fv(float const *);

    // RVA: 0x3F4D | Ordinal: 16206
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F5E | Ordinal: 16223
        void glTexCoord3iv(int const *);

    // RVA: 0x3F6F | Ordinal: 16240
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F80 | Ordinal: 16257
        void glTexCoord3sv(short const *);

    // RVA: 0x3F91 | Ordinal: 16274
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3FA2 | Ordinal: 16291
        void glTexCoord4dv(double const *);

    // RVA: 0x3FB3 | Ordinal: 16308
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FC4 | Ordinal: 16325
        void glTexCoord4fv(float const *);

    // RVA: 0x3FD5 | Ordinal: 16342
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FE6 | Ordinal: 16359
        void glTexCoord4iv(int const *);

    // RVA: 0x3FF7 | Ordinal: 16376
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x4008 | Ordinal: 16393
        void glTexCoord4sv(short const *);

    // RVA: 0x400F | Ordinal: 16400
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x401B | Ordinal: 16412
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4027 | Ordinal: 16424
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x4033 | Ordinal: 16436
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x403F | Ordinal: 16448
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x404B | Ordinal: 16460
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4057 | Ordinal: 16472
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x4063 | Ordinal: 16484
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4078 | Ordinal: 16505
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x4089 | Ordinal: 16522
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x409A | Ordinal: 16539
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40AB | Ordinal: 16556
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40BC | Ordinal: 16573
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40CD | Ordinal: 16590
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40DE | Ordinal: 16607
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40EF | Ordinal: 16624
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x4100 | Ordinal: 16641
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4111 | Ordinal: 16658
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x4122 | Ordinal: 16675
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x4135 | Ordinal: 16694
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4150 | Ordinal: 16721
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4160 | Ordinal: 16737
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x4179 | Ordinal: 16762
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4189 | Ordinal: 16778
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x419C | Ordinal: 16797
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41AF | Ordinal: 16816
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41CA | Ordinal: 16843
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41E5 | Ordinal: 16870
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4200 | Ordinal: 16897
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x421B | Ordinal: 16924
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x425C | Ordinal: 16989
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4276 | Ordinal: 17015
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x428F | Ordinal: 17040
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42CE | Ordinal: 17103
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x42E6 | Ordinal: 17127
        void glTranslated(double, double, double);

    // RVA: 0x42F7 | Ordinal: 17144
        void glTranslatef(float, float, float);

    // RVA: 0x431D | Ordinal: 17182
        void glUniform1f(int, float);

    // RVA: 0x4332 | Ordinal: 17203
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4347 | Ordinal: 17224
        void glUniform1i(int, int);

    // RVA: 0x435C | Ordinal: 17245
        void glUniform1iv(int, int, int const *);

    // RVA: 0x436F | Ordinal: 17264
        void glUniform1ui(int, unsigned int);

    // RVA: 0x4382 | Ordinal: 17283
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x43AF | Ordinal: 17328
        void glUniform2f(int, float, float);

    // RVA: 0x43C4 | Ordinal: 17349
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43D9 | Ordinal: 17370
        void glUniform2i(int, int, int);

    // RVA: 0x43EE | Ordinal: 17391
        void glUniform2iv(int, int, int const *);

    // RVA: 0x4401 | Ordinal: 17410
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4414 | Ordinal: 17429
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4441 | Ordinal: 17474
        void glUniform3f(int, float, float, float);

    // RVA: 0x4456 | Ordinal: 17495
        void glUniform3fv(int, int, float const *);

    // RVA: 0x446B | Ordinal: 17516
        void glUniform3i(int, int, int, int);

    // RVA: 0x4480 | Ordinal: 17537
        void glUniform3iv(int, int, int const *);

    // RVA: 0x4493 | Ordinal: 17556
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44A6 | Ordinal: 17575
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44D3 | Ordinal: 17620
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44E8 | Ordinal: 17641
        void glUniform4fv(int, int, float const *);

    // RVA: 0x44FD | Ordinal: 17662
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x4512 | Ordinal: 17683
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4525 | Ordinal: 17702
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4538 | Ordinal: 17721
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x454A | Ordinal: 17739
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x456B | Ordinal: 17772
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x458B | Ordinal: 17804
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45AB | Ordinal: 17836
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45CC | Ordinal: 17869
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45EC | Ordinal: 17901
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x460C | Ordinal: 17933
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x462D | Ordinal: 17966
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x464D | Ordinal: 17998
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x466D | Ordinal: 18030
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x468F | Ordinal: 18064
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46A6 | Ordinal: 18087
        void glUseProgram(unsigned int);

    // RVA: 0x46C6 | Ordinal: 18119
        void glValidateProgram(unsigned int);

    // RVA: 0x46E9 | Ordinal: 18154
        void glVertex2d(double, double);

    // RVA: 0x46FA | Ordinal: 18171
        void glVertex2dv(double const *);

    // RVA: 0x470B | Ordinal: 18188
        void glVertex2f(float, float);

    // RVA: 0x471C | Ordinal: 18205
        void glVertex2fv(float const *);

    // RVA: 0x472D | Ordinal: 18222
        void glVertex2i(int, int);

    // RVA: 0x473E | Ordinal: 18239
        void glVertex2iv(int const *);

    // RVA: 0x474F | Ordinal: 18256
        void glVertex2s(short, short);

    // RVA: 0x4760 | Ordinal: 18273
        void glVertex2sv(short const *);

    // RVA: 0x4771 | Ordinal: 18290
        void glVertex3d(double, double, double);

    // RVA: 0x4782 | Ordinal: 18307
        void glVertex3dv(double const *);

    // RVA: 0x4793 | Ordinal: 18324
        void glVertex3f(float, float, float);

    // RVA: 0x47A4 | Ordinal: 18341
        void glVertex3fv(float const *);

    // RVA: 0x47B5 | Ordinal: 18358
        void glVertex3i(int, int, int);

    // RVA: 0x47C6 | Ordinal: 18375
        void glVertex3iv(int const *);

    // RVA: 0x47D7 | Ordinal: 18392
        void glVertex3s(short, short, short);

    // RVA: 0x47E8 | Ordinal: 18409
        void glVertex3sv(short const *);

    // RVA: 0x47F9 | Ordinal: 18426
        void glVertex4d(double, double, double, double);

    // RVA: 0x480A | Ordinal: 18443
        void glVertex4dv(double const *);

    // RVA: 0x481B | Ordinal: 18460
        void glVertex4f(float, float, float, float);

    // RVA: 0x482C | Ordinal: 18477
        void glVertex4fv(float const *);

    // RVA: 0x483D | Ordinal: 18494
        void glVertex4i(int, int, int, int);

    // RVA: 0x484E | Ordinal: 18511
        void glVertex4iv(int const *);

    // RVA: 0x485F | Ordinal: 18528
        void glVertex4s(short, short, short, short);

    // RVA: 0x4870 | Ordinal: 18545
        void glVertex4sv(short const *);

    // RVA: 0x488B | Ordinal: 18572
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x4898 | Ordinal: 18585
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48A6 | Ordinal: 18599
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48B4 | Ordinal: 18613
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48C1 | Ordinal: 18626
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48CE | Ordinal: 18639
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48DB | Ordinal: 18652
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48E8 | Ordinal: 18665
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48F6 | Ordinal: 18679
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x4904 | Ordinal: 18693
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4911 | Ordinal: 18706
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x491E | Ordinal: 18719
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x492B | Ordinal: 18732
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x4938 | Ordinal: 18745
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x4946 | Ordinal: 18759
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x4954 | Ordinal: 18773
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x4961 | Ordinal: 18786
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x496E | Ordinal: 18799
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x497B | Ordinal: 18812
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x4988 | Ordinal: 18825
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x4995 | Ordinal: 18838
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49A2 | Ordinal: 18851
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49AF | Ordinal: 18864
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49BC | Ordinal: 18877
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49C9 | Ordinal: 18890
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49D6 | Ordinal: 18903
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49E3 | Ordinal: 18916
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49F0 | Ordinal: 18929
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x49FE | Ordinal: 18943
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A0C | Ordinal: 18957
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A19 | Ordinal: 18970
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A26 | Ordinal: 18983
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A33 | Ordinal: 18996
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A40 | Ordinal: 19009
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A4D | Ordinal: 19022
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A5A | Ordinal: 19035
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A6B | Ordinal: 19052
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A82 | Ordinal: 19075
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A8D | Ordinal: 19086
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4A98 | Ordinal: 19097
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AA3 | Ordinal: 19108
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AAE | Ordinal: 19119
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4AB9 | Ordinal: 19130
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4AC4 | Ordinal: 19141
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4ACF | Ordinal: 19152
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4ADA | Ordinal: 19163
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AE5 | Ordinal: 19174
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AF0 | Ordinal: 19185
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AFB | Ordinal: 19196
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B06 | Ordinal: 19207
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B12 | Ordinal: 19219
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B1E | Ordinal: 19231
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B29 | Ordinal: 19242
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B34 | Ordinal: 19253
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B40 | Ordinal: 19265
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B4C | Ordinal: 19277
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B57 | Ordinal: 19288
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B6C | Ordinal: 19309
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BDA | Ordinal: 19419
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BE8 | Ordinal: 19433
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4BF6 | Ordinal: 19447
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C04 | Ordinal: 19461
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C12 | Ordinal: 19475
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C20 | Ordinal: 19489
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C2E | Ordinal: 19503
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C3C | Ordinal: 19517
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C51 | Ordinal: 19538
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C66 | Ordinal: 19559
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C72 | Ordinal: 19571
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C7E | Ordinal: 19583
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C8A | Ordinal: 19595
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C96 | Ordinal: 19607
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CA2 | Ordinal: 19619
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CB7 | Ordinal: 19640
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CCB | Ordinal: 19660
        void glViewport(int, int, int, int);

    // RVA: 0x4CFA | Ordinal: 19707
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4D0E | Ordinal: 19727
        void glWindowPos2d(double, double);

    // RVA: 0x4D1B | Ordinal: 19740
        void glWindowPos2dv(double const *);

    // RVA: 0x4D28 | Ordinal: 19753
        void glWindowPos2f(float, float);

    // RVA: 0x4D35 | Ordinal: 19766
        void glWindowPos2fv(float const *);

    // RVA: 0x4D42 | Ordinal: 19779
        void glWindowPos2i(int, int);

    // RVA: 0x4D4F | Ordinal: 19792
        void glWindowPos2iv(int const *);

    // RVA: 0x4D5C | Ordinal: 19805
        void glWindowPos2s(short, short);

    // RVA: 0x4D69 | Ordinal: 19818
        void glWindowPos2sv(short const *);

    // RVA: 0x4D76 | Ordinal: 19831
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D83 | Ordinal: 19844
        void glWindowPos3dv(double const *);

    // RVA: 0x4D90 | Ordinal: 19857
        void glWindowPos3f(float, float, float);

    // RVA: 0x4D9D | Ordinal: 19870
        void glWindowPos3fv(float const *);

    // RVA: 0x4DAA | Ordinal: 19883
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DB7 | Ordinal: 19896
        void glWindowPos3iv(int const *);

    // RVA: 0x4DC4 | Ordinal: 19909
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DD1 | Ordinal: 19922
        void glWindowPos3sv(short const *);

    // RVA: 0x4F26 | Ordinal: 20263
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FE8 | Ordinal: 20457
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x610C | Ordinal: 24845
        void versionProfile(void);

    // RVA: 0x489 | Ordinal: 1162
        void _QOpenGLFunctions_3_3_Compatibility(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_3_3_COMPATIBILITY_HPP
