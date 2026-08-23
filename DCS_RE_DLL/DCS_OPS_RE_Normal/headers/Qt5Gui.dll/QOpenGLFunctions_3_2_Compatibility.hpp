#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_3_2_Compatibility
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_3_2_Compatibility
{
public:

    // RVA: 0x1B9 | Ordinal: 442
        void QOpenGLFunctions_3_2_Compatibility(void);

    // RVA: 0x11C1 | Ordinal: 4546
        void glAccum(unsigned int, float);

    // RVA: 0x11DC | Ordinal: 4573
        void glActiveTexture(unsigned int);

    // RVA: 0x11F5 | Ordinal: 4598
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x1205 | Ordinal: 4614
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x1215 | Ordinal: 4630
        void glArrayElement(int);

    // RVA: 0x1222 | Ordinal: 4643
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x123C | Ordinal: 4669
        void glBegin(unsigned int);

    // RVA: 0x1246 | Ordinal: 4679
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x125C | Ordinal: 4701
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x127B | Ordinal: 4732
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x1290 | Ordinal: 4753
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12A6 | Ordinal: 4775
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12B9 | Ordinal: 4794
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12CC | Ordinal: 4813
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12E6 | Ordinal: 4839
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x1307 | Ordinal: 4872
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1332 | Ordinal: 4915
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x135F | Ordinal: 4960
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1385 | Ordinal: 4998
        void glBindVertexArray(unsigned int);

    // RVA: 0x13A9 | Ordinal: 5034
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13BB | Ordinal: 5052
        void glBlendColor(float, float, float, float);

    // RVA: 0x13D4 | Ordinal: 5077
        void glBlendEquation(unsigned int);

    // RVA: 0x13E9 | Ordinal: 5098
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x141E | Ordinal: 5151
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1435 | Ordinal: 5174
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1462 | Ordinal: 5219
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x147A | Ordinal: 5243
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x1494 | Ordinal: 5269
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14AD | Ordinal: 5294
        void glCallList(unsigned int);

    // RVA: 0x14BE | Ordinal: 5311
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14C9 | Ordinal: 5322
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14DD | Ordinal: 5342
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x14F8 | Ordinal: 5369
        void glClear(unsigned int);

    // RVA: 0x1511 | Ordinal: 5394
        void glClearAccum(float, float, float, float);

    // RVA: 0x1528 | Ordinal: 5417
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x153B | Ordinal: 5436
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x154E | Ordinal: 5455
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1561 | Ordinal: 5474
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x157C | Ordinal: 5501
        void glClearColor(float, float, float, float);

    // RVA: 0x1596 | Ordinal: 5527
        void glClearDepth(double);

    // RVA: 0x15BA | Ordinal: 5563
        void glClearIndex(float);

    // RVA: 0x15D9 | Ordinal: 5594
        void glClearStencil(int);

    // RVA: 0x15F7 | Ordinal: 5624
        void glClientActiveTexture(unsigned int);

    // RVA: 0x1600 | Ordinal: 5633
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x161B | Ordinal: 5660
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x162C | Ordinal: 5677
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x163D | Ordinal: 5694
        void glColor3bv(signed char const *);

    // RVA: 0x164E | Ordinal: 5711
        void glColor3d(double, double, double);

    // RVA: 0x165F | Ordinal: 5728
        void glColor3dv(double const *);

    // RVA: 0x1670 | Ordinal: 5745
        void glColor3f(float, float, float);

    // RVA: 0x1681 | Ordinal: 5762
        void glColor3fv(float const *);

    // RVA: 0x1692 | Ordinal: 5779
        void glColor3i(int, int, int);

    // RVA: 0x16A3 | Ordinal: 5796
        void glColor3iv(int const *);

    // RVA: 0x16B4 | Ordinal: 5813
        void glColor3s(short, short, short);

    // RVA: 0x16C5 | Ordinal: 5830
        void glColor3sv(short const *);

    // RVA: 0x16D6 | Ordinal: 5847
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16E7 | Ordinal: 5864
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16F8 | Ordinal: 5881
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1709 | Ordinal: 5898
        void glColor3uiv(unsigned int const *);

    // RVA: 0x171A | Ordinal: 5915
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x172B | Ordinal: 5932
        void glColor3usv(unsigned short const *);

    // RVA: 0x173C | Ordinal: 5949
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x174D | Ordinal: 5966
        void glColor4bv(signed char const *);

    // RVA: 0x175E | Ordinal: 5983
        void glColor4d(double, double, double, double);

    // RVA: 0x176F | Ordinal: 6000
        void glColor4dv(double const *);

    // RVA: 0x1780 | Ordinal: 6017
        void glColor4f(float, float, float, float);

    // RVA: 0x1791 | Ordinal: 6034
        void glColor4fv(float const *);

    // RVA: 0x17A2 | Ordinal: 6051
        void glColor4i(int, int, int, int);

    // RVA: 0x17B3 | Ordinal: 6068
        void glColor4iv(int const *);

    // RVA: 0x17C4 | Ordinal: 6085
        void glColor4s(short, short, short, short);

    // RVA: 0x17D5 | Ordinal: 6102
        void glColor4sv(short const *);

    // RVA: 0x17E6 | Ordinal: 6119
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17F7 | Ordinal: 6136
        void glColor4ubv(unsigned char const *);

    // RVA: 0x1808 | Ordinal: 6153
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1819 | Ordinal: 6170
        void glColor4uiv(unsigned int const *);

    // RVA: 0x182A | Ordinal: 6187
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x183B | Ordinal: 6204
        void glColor4usv(unsigned short const *);

    // RVA: 0x184E | Ordinal: 6223
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1861 | Ordinal: 6242
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x187A | Ordinal: 6267
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x18BA | Ordinal: 6331
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18C9 | Ordinal: 6346
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18D8 | Ordinal: 6361
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18E7 | Ordinal: 6376
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18F6 | Ordinal: 6391
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1903 | Ordinal: 6404
        void glCompileShader(unsigned int);

    // RVA: 0x191A | Ordinal: 6427
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1932 | Ordinal: 6451
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x194A | Ordinal: 6475
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1961 | Ordinal: 6498
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1979 | Ordinal: 6522
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1991 | Ordinal: 6546
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19AE | Ordinal: 6575
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19BD | Ordinal: 6590
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19CC | Ordinal: 6605
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19DB | Ordinal: 6620
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19EA | Ordinal: 6635
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19F9 | Ordinal: 6650
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A03 | Ordinal: 6660
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A1A | Ordinal: 6683
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A29 | Ordinal: 6698
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A38 | Ordinal: 6713
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A47 | Ordinal: 6728
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A61 | Ordinal: 6754
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A72 | Ordinal: 6771
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A8C | Ordinal: 6797
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AA5 | Ordinal: 6822
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ABF | Ordinal: 6848
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AD8 | Ordinal: 6873
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AF7 | Ordinal: 6904
        void glCreateProgram(void);

    // RVA: 0x1B14 | Ordinal: 6933
        void glCreateShader(unsigned int);

    // RVA: 0x1B40 | Ordinal: 6977
        void glCullFace(unsigned int);

    // RVA: 0x1B65 | Ordinal: 7014
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B78 | Ordinal: 7033
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B91 | Ordinal: 7058
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1B9E | Ordinal: 7071
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BBF | Ordinal: 7104
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BD2 | Ordinal: 7123
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BF6 | Ordinal: 7159
        void glDeleteShader(unsigned int);

    // RVA: 0x1C07 | Ordinal: 7176
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C21 | Ordinal: 7202
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C41 | Ordinal: 7234
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C5C | Ordinal: 7261
        void glDepthFunc(unsigned int);

    // RVA: 0x1C77 | Ordinal: 7288
        void glDepthMask(unsigned char);

    // RVA: 0x1C91 | Ordinal: 7314
        void glDepthRange(double, double);

    // RVA: 0x1CC5 | Ordinal: 7366
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CE0 | Ordinal: 7393
        void glDisable(unsigned int);

    // RVA: 0x1CF8 | Ordinal: 7417
        void glDisableClientState(unsigned int);

    // RVA: 0x1D07 | Ordinal: 7432
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D1A | Ordinal: 7451
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D43 | Ordinal: 7492
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D62 | Ordinal: 7523
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D84 | Ordinal: 7557
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D99 | Ordinal: 7578
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DB3 | Ordinal: 7604
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DC4 | Ordinal: 7621
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DE3 | Ordinal: 7652
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DFC | Ordinal: 7677
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E1D | Ordinal: 7710
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E2E | Ordinal: 7727
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E3F | Ordinal: 7744
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E80 | Ordinal: 7809
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E90 | Ordinal: 7825
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1EA1 | Ordinal: 7842
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EB4 | Ordinal: 7861
        void glEnable(unsigned int);

    // RVA: 0x1ECC | Ordinal: 7885
        void glEnableClientState(unsigned int);

    // RVA: 0x1EDB | Ordinal: 7900
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EEE | Ordinal: 7919
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F07 | Ordinal: 7944
        void glEnd(void);

    // RVA: 0x1F11 | Ordinal: 7954
        void glEndConditionalRender(void);

    // RVA: 0x1F2A | Ordinal: 7979
        void glEndList(void);

    // RVA: 0x1F38 | Ordinal: 7993
        void glEndQuery(unsigned int);

    // RVA: 0x1F57 | Ordinal: 8024
        void glEndTransformFeedback(void);

    // RVA: 0x1F70 | Ordinal: 8049
        void glEvalCoord1d(double);

    // RVA: 0x1F81 | Ordinal: 8066
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F92 | Ordinal: 8083
        void glEvalCoord1f(float);

    // RVA: 0x1FA3 | Ordinal: 8100
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FB4 | Ordinal: 8117
        void glEvalCoord2d(double, double);

    // RVA: 0x1FC5 | Ordinal: 8134
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FD6 | Ordinal: 8151
        void glEvalCoord2f(float, float);

    // RVA: 0x1FE7 | Ordinal: 8168
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FF8 | Ordinal: 8185
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x2009 | Ordinal: 8202
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x201A | Ordinal: 8219
        void glEvalPoint1(int);

    // RVA: 0x202B | Ordinal: 8236
        void glEvalPoint2(int, int);

    // RVA: 0x203C | Ordinal: 8253
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x2045 | Ordinal: 8262
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x2060 | Ordinal: 8289
        void glFinish(void);

    // RVA: 0x207B | Ordinal: 8316
        void glFlush(void);

    // RVA: 0x208E | Ordinal: 8335
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x20A5 | Ordinal: 8358
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20B2 | Ordinal: 8371
        void glFogCoordd(double);

    // RVA: 0x20BF | Ordinal: 8384
        void glFogCoorddv(double const *);

    // RVA: 0x20CC | Ordinal: 8397
        void glFogCoordf(float);

    // RVA: 0x20D9 | Ordinal: 8410
        void glFogCoordfv(float const *);

    // RVA: 0x20EA | Ordinal: 8427
        void glFogf(unsigned int, float);

    // RVA: 0x20FB | Ordinal: 8444
        void glFogfv(unsigned int, float const *);

    // RVA: 0x210C | Ordinal: 8461
        void glFogi(unsigned int, int);

    // RVA: 0x211D | Ordinal: 8478
        void glFogiv(unsigned int, int const *);

    // RVA: 0x2130 | Ordinal: 8497
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2178 | Ordinal: 8569
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2142 | Ordinal: 8515
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2155 | Ordinal: 8534
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2167 | Ordinal: 8552
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x218B | Ordinal: 8588
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21A6 | Ordinal: 8615
        void glFrontFace(unsigned int);

    // RVA: 0x21BF | Ordinal: 8640
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21CD | Ordinal: 8654
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21E0 | Ordinal: 8673
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x21F9 | Ordinal: 8698
        void glGenLists(int);

    // RVA: 0x2212 | Ordinal: 8723
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2225 | Ordinal: 8742
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x224E | Ordinal: 8783
        void glGenTextures(int, unsigned int *);

    // RVA: 0x226E | Ordinal: 8815
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2281 | Ordinal: 8834
        void glGenerateMipmap(unsigned int);

    // RVA: 0x22A0 | Ordinal: 8865
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22D9 | Ordinal: 8922
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22EB | Ordinal: 8940
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22FD | Ordinal: 8958
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x230E | Ordinal: 8975
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2320 | Ordinal: 8993
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2335 | Ordinal: 9014
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x234A | Ordinal: 9035
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x235D | Ordinal: 9054
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2378 | Ordinal: 9081
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2389 | Ordinal: 9098
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x239F | Ordinal: 9120
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23B5 | Ordinal: 9142
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23CB | Ordinal: 9164
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23E4 | Ordinal: 9189
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23F3 | Ordinal: 9204
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2402 | Ordinal: 9219
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2411 | Ordinal: 9234
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2420 | Ordinal: 9249
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x243B | Ordinal: 9276
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x244A | Ordinal: 9291
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2459 | Ordinal: 9306
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x247A | Ordinal: 9339
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x2495 | Ordinal: 9366
        void glGetError(void);

    // RVA: 0x24BA | Ordinal: 9403
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24DB | Ordinal: 9436
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24EE | Ordinal: 9455
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x250F | Ordinal: 9488
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x251E | Ordinal: 9503
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x252D | Ordinal: 9518
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2536 | Ordinal: 9527
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2547 | Ordinal: 9544
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x255A | Ordinal: 9563
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2575 | Ordinal: 9590
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x259D | Ordinal: 9630
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25AE | Ordinal: 9647
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25BF | Ordinal: 9664
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25D0 | Ordinal: 9681
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25E1 | Ordinal: 9698
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25F2 | Ordinal: 9715
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x2603 | Ordinal: 9732
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2612 | Ordinal: 9747
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2621 | Ordinal: 9762
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2630 | Ordinal: 9777
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2639 | Ordinal: 9786
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x266A | Ordinal: 9835
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x267B | Ordinal: 9852
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x268C | Ordinal: 9869
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x269E | Ordinal: 9887
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26B5 | Ordinal: 9910
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26CD | Ordinal: 9934
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x272D | Ordinal: 10030
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x275C | Ordinal: 10077
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2780 | Ordinal: 10113
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2796 | Ordinal: 10135
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27A9 | Ordinal: 10154
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27FC | Ordinal: 10237
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2809 | Ordinal: 10250
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2829 | Ordinal: 10282
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x283E | Ordinal: 10303
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2859 | Ordinal: 10330
        void glGetString(unsigned int);

    // RVA: 0x286C | Ordinal: 10349
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2895 | Ordinal: 10390
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x28AE | Ordinal: 10415
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28BF | Ordinal: 10432
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28D0 | Ordinal: 10449
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28E1 | Ordinal: 10466
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28F2 | Ordinal: 10483
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x2904 | Ordinal: 10501
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x291F | Ordinal: 10528
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x293A | Ordinal: 10555
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x294D | Ordinal: 10574
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2960 | Ordinal: 10593
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x297B | Ordinal: 10620
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2996 | Ordinal: 10647
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29B9 | Ordinal: 10682
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29D1 | Ordinal: 10706
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29E3 | Ordinal: 10724
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x29F8 | Ordinal: 10745
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A25 | Ordinal: 10790
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A3A | Ordinal: 10811
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A4D | Ordinal: 10830
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A66 | Ordinal: 10855
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A79 | Ordinal: 10874
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A98 | Ordinal: 10905
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AAC | Ordinal: 10925
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AC1 | Ordinal: 10946
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AD6 | Ordinal: 10967
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B0C | Ordinal: 11021
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B23 | Ordinal: 11044
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B34 | Ordinal: 11061
        void glIndexMask(unsigned int);

    // RVA: 0x2B44 | Ordinal: 11077
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B55 | Ordinal: 11094
        void glIndexd(double);

    // RVA: 0x2B66 | Ordinal: 11111
        void glIndexdv(double const *);

    // RVA: 0x2B77 | Ordinal: 11128
        void glIndexf(float);

    // RVA: 0x2B88 | Ordinal: 11145
        void glIndexfv(float const *);

    // RVA: 0x2B99 | Ordinal: 11162
        void glIndexi(int);

    // RVA: 0x2BAA | Ordinal: 11179
        void glIndexiv(int const *);

    // RVA: 0x2BBB | Ordinal: 11196
        void glIndexs(short);

    // RVA: 0x2BCC | Ordinal: 11213
        void glIndexsv(short const *);

    // RVA: 0x2BDD | Ordinal: 11230
        void glIndexub(unsigned char);

    // RVA: 0x2BF4 | Ordinal: 11253
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C0B | Ordinal: 11276
        void glInitNames(void);

    // RVA: 0x2C1B | Ordinal: 11292
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C54 | Ordinal: 11349
        void glIsBuffer(unsigned int);

    // RVA: 0x2C6F | Ordinal: 11376
        void glIsEnabled(unsigned int);

    // RVA: 0x2C82 | Ordinal: 11395
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C95 | Ordinal: 11414
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CAE | Ordinal: 11439
        void glIsList(unsigned int);

    // RVA: 0x2CBB | Ordinal: 11452
        void glIsProgram(unsigned int);

    // RVA: 0x2CDC | Ordinal: 11485
        void glIsQuery(unsigned int);

    // RVA: 0x2CEF | Ordinal: 11504
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D13 | Ordinal: 11540
        void glIsShader(unsigned int);

    // RVA: 0x2D24 | Ordinal: 11557
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D3E | Ordinal: 11583
        void glIsTexture(unsigned int);

    // RVA: 0x2D5E | Ordinal: 11615
        void glIsVertexArray(unsigned int);

    // RVA: 0x2D77 | Ordinal: 11640
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D88 | Ordinal: 11657
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D99 | Ordinal: 11674
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DAA | Ordinal: 11691
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DBB | Ordinal: 11708
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DCC | Ordinal: 11725
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DDD | Ordinal: 11742
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DEE | Ordinal: 11759
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2DFF | Ordinal: 11776
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E12 | Ordinal: 11795
        void glLineWidth(float);

    // RVA: 0x2E27 | Ordinal: 11816
        void glLinkProgram(unsigned int);

    // RVA: 0x2E40 | Ordinal: 11841
        void glListBase(unsigned int);

    // RVA: 0x2E51 | Ordinal: 11858
        void glLoadIdentity(void);

    // RVA: 0x2E62 | Ordinal: 11875
        void glLoadMatrixd(double const *);

    // RVA: 0x2E73 | Ordinal: 11892
        void glLoadMatrixf(float const *);

    // RVA: 0x2E84 | Ordinal: 11909
        void glLoadName(unsigned int);

    // RVA: 0x2E92 | Ordinal: 11923
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2EA0 | Ordinal: 11937
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EB2 | Ordinal: 11955
        void glLogicOp(unsigned int);

    // RVA: 0x2ECB | Ordinal: 11980
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2EDC | Ordinal: 11997
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EED | Ordinal: 12014
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2EFE | Ordinal: 12031
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F0C | Ordinal: 12045
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F1F | Ordinal: 12064
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2F38 | Ordinal: 12089
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F49 | Ordinal: 12106
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F5A | Ordinal: 12123
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F6B | Ordinal: 12140
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F80 | Ordinal: 12161
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F91 | Ordinal: 12178
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2FA2 | Ordinal: 12195
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FB3 | Ordinal: 12212
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FC4 | Ordinal: 12229
        void glMatrixMode(unsigned int);

    // RVA: 0x2FEC | Ordinal: 12269
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x2FFD | Ordinal: 12286
        void glMultMatrixd(double const *);

    // RVA: 0x300E | Ordinal: 12303
        void glMultMatrixf(float const *);

    // RVA: 0x301C | Ordinal: 12317
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x302A | Ordinal: 12331
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x3038 | Ordinal: 12345
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3054 | Ordinal: 12373
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3064 | Ordinal: 12389
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3080 | Ordinal: 12417
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x308E | Ordinal: 12431
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x309C | Ordinal: 12445
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30AA | Ordinal: 12459
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30B8 | Ordinal: 12473
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30C6 | Ordinal: 12487
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30D4 | Ordinal: 12501
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30E2 | Ordinal: 12515
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30F0 | Ordinal: 12529
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x30FE | Ordinal: 12543
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x310C | Ordinal: 12557
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x311A | Ordinal: 12571
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x3128 | Ordinal: 12585
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x3136 | Ordinal: 12599
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x3144 | Ordinal: 12613
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x3152 | Ordinal: 12627
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x3160 | Ordinal: 12641
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x316E | Ordinal: 12655
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x317C | Ordinal: 12669
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x318A | Ordinal: 12683
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x3198 | Ordinal: 12697
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31A6 | Ordinal: 12711
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31B4 | Ordinal: 12725
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31C2 | Ordinal: 12739
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31D0 | Ordinal: 12753
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31DE | Ordinal: 12767
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31EC | Ordinal: 12781
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31FA | Ordinal: 12795
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x3208 | Ordinal: 12809
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x3216 | Ordinal: 12823
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x3224 | Ordinal: 12837
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x3232 | Ordinal: 12851
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x32BB | Ordinal: 12988
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32CC | Ordinal: 13005
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32DD | Ordinal: 13022
        void glNormal3bv(signed char const *);

    // RVA: 0x32EE | Ordinal: 13039
        void glNormal3d(double, double, double);

    // RVA: 0x32FF | Ordinal: 13056
        void glNormal3dv(double const *);

    // RVA: 0x3310 | Ordinal: 13073
        void glNormal3f(float, float, float);

    // RVA: 0x3321 | Ordinal: 13090
        void glNormal3fv(float const *);

    // RVA: 0x3332 | Ordinal: 13107
        void glNormal3i(int, int, int);

    // RVA: 0x3343 | Ordinal: 13124
        void glNormal3iv(int const *);

    // RVA: 0x3354 | Ordinal: 13141
        void glNormal3s(short, short, short);

    // RVA: 0x3365 | Ordinal: 13158
        void glNormal3sv(short const *);

    // RVA: 0x338D | Ordinal: 13198
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33A8 | Ordinal: 13225
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33B9 | Ordinal: 13242
        void glPassThrough(float);

    // RVA: 0x33F0 | Ordinal: 13297
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x3401 | Ordinal: 13314
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x3412 | Ordinal: 13331
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x3424 | Ordinal: 13349
        void glPixelStoref(unsigned int, float);

    // RVA: 0x343F | Ordinal: 13376
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3458 | Ordinal: 13401
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x3469 | Ordinal: 13418
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x347A | Ordinal: 13435
        void glPixelZoom(float, float);

    // RVA: 0x3488 | Ordinal: 13449
        void glPointParameterf(unsigned int, float);

    // RVA: 0x349E | Ordinal: 13471
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34B4 | Ordinal: 13493
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34CA | Ordinal: 13515
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34E4 | Ordinal: 13541
        void glPointSize(float);

    // RVA: 0x34FE | Ordinal: 13567
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3518 | Ordinal: 13593
        void glPolygonOffset(float, float);

    // RVA: 0x3531 | Ordinal: 13618
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x3542 | Ordinal: 13635
        void glPopAttrib(void);

    // RVA: 0x3552 | Ordinal: 13651
        void glPopClientAttrib(void);

    // RVA: 0x3568 | Ordinal: 13673
        void glPopMatrix(void);

    // RVA: 0x3579 | Ordinal: 13690
        void glPopName(void);

    // RVA: 0x3583 | Ordinal: 13700
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x359B | Ordinal: 13724
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37CE | Ordinal: 14287
        void glProvokingVertex(unsigned int);

    // RVA: 0x37E7 | Ordinal: 14312
        void glPushAttrib(unsigned int);

    // RVA: 0x37F7 | Ordinal: 14328
        void glPushClientAttrib(unsigned int);

    // RVA: 0x380D | Ordinal: 14350
        void glPushMatrix(void);

    // RVA: 0x381E | Ordinal: 14367
        void glPushName(unsigned int);

    // RVA: 0x383D | Ordinal: 14398
        void glRasterPos2d(double, double);

    // RVA: 0x384E | Ordinal: 14415
        void glRasterPos2dv(double const *);

    // RVA: 0x385F | Ordinal: 14432
        void glRasterPos2f(float, float);

    // RVA: 0x3870 | Ordinal: 14449
        void glRasterPos2fv(float const *);

    // RVA: 0x3881 | Ordinal: 14466
        void glRasterPos2i(int, int);

    // RVA: 0x3892 | Ordinal: 14483
        void glRasterPos2iv(int const *);

    // RVA: 0x38A3 | Ordinal: 14500
        void glRasterPos2s(short, short);

    // RVA: 0x38B4 | Ordinal: 14517
        void glRasterPos2sv(short const *);

    // RVA: 0x38C5 | Ordinal: 14534
        void glRasterPos3d(double, double, double);

    // RVA: 0x38D6 | Ordinal: 14551
        void glRasterPos3dv(double const *);

    // RVA: 0x38E7 | Ordinal: 14568
        void glRasterPos3f(float, float, float);

    // RVA: 0x38F8 | Ordinal: 14585
        void glRasterPos3fv(float const *);

    // RVA: 0x3909 | Ordinal: 14602
        void glRasterPos3i(int, int, int);

    // RVA: 0x391A | Ordinal: 14619
        void glRasterPos3iv(int const *);

    // RVA: 0x392B | Ordinal: 14636
        void glRasterPos3s(short, short, short);

    // RVA: 0x393C | Ordinal: 14653
        void glRasterPos3sv(short const *);

    // RVA: 0x394D | Ordinal: 14670
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x395E | Ordinal: 14687
        void glRasterPos4dv(double const *);

    // RVA: 0x396F | Ordinal: 14704
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x3980 | Ordinal: 14721
        void glRasterPos4fv(float const *);

    // RVA: 0x3991 | Ordinal: 14738
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x39A2 | Ordinal: 14755
        void glRasterPos4iv(int const *);

    // RVA: 0x39B3 | Ordinal: 14772
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39C4 | Ordinal: 14789
        void glRasterPos4sv(short const *);

    // RVA: 0x39D7 | Ordinal: 14808
        void glReadBuffer(unsigned int);

    // RVA: 0x39F2 | Ordinal: 14835
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A0E | Ordinal: 14863
        void glRectd(double, double, double, double);

    // RVA: 0x3A1F | Ordinal: 14880
        void glRectdv(double const *, double const *);

    // RVA: 0x3A30 | Ordinal: 14897
        void glRectf(float, float, float, float);

    // RVA: 0x3A41 | Ordinal: 14914
        void glRectfv(float const *, float const *);

    // RVA: 0x3A52 | Ordinal: 14931
        void glRecti(int, int, int, int);

    // RVA: 0x3A63 | Ordinal: 14948
        void glRectiv(int const *, int const *);

    // RVA: 0x3A74 | Ordinal: 14965
        void glRects(short, short, short, short);

    // RVA: 0x3A85 | Ordinal: 14982
        void glRectsv(short const *, short const *);

    // RVA: 0x3AA1 | Ordinal: 15010
        void glRenderMode(unsigned int);

    // RVA: 0x3AAC | Ordinal: 15021
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3ABF | Ordinal: 15040
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AD6 | Ordinal: 15063
        void glResetHistogram(unsigned int);

    // RVA: 0x3AE5 | Ordinal: 15078
        void glResetMinmax(unsigned int);

    // RVA: 0x3B03 | Ordinal: 15108
        void glRotated(double, double, double, double);

    // RVA: 0x3B14 | Ordinal: 15125
        void glRotatef(float, float, float, float);

    // RVA: 0x3B24 | Ordinal: 15141
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B35 | Ordinal: 15158
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3BA8 | Ordinal: 15273
        void glScaled(double, double, double);

    // RVA: 0x3BB9 | Ordinal: 15290
        void glScalef(float, float, float);

    // RVA: 0x3BCC | Ordinal: 15309
        void glScissor(int, int, int, int);

    // RVA: 0x3BFF | Ordinal: 15360
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C0C | Ordinal: 15373
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C19 | Ordinal: 15386
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C26 | Ordinal: 15399
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C33 | Ordinal: 15412
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C40 | Ordinal: 15425
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C4D | Ordinal: 15438
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C5A | Ordinal: 15451
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C67 | Ordinal: 15464
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C74 | Ordinal: 15477
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C81 | Ordinal: 15490
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C8E | Ordinal: 15503
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3C9B | Ordinal: 15516
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CA8 | Ordinal: 15529
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CB5 | Ordinal: 15542
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CC2 | Ordinal: 15555
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CE7 | Ordinal: 15592
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CF8 | Ordinal: 15609
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D07 | Ordinal: 15624
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D18 | Ordinal: 15641
        void glShadeModel(unsigned int);

    // RVA: 0x3D30 | Ordinal: 15665
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D51 | Ordinal: 15698
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D66 | Ordinal: 15719
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D81 | Ordinal: 15746
        void glStencilMask(unsigned int);

    // RVA: 0x3D96 | Ordinal: 15767
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DB1 | Ordinal: 15794
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DC6 | Ordinal: 15815
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DD8 | Ordinal: 15833
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DF8 | Ordinal: 15865
        void glTexCoord1d(double);

    // RVA: 0x3E09 | Ordinal: 15882
        void glTexCoord1dv(double const *);

    // RVA: 0x3E1A | Ordinal: 15899
        void glTexCoord1f(float);

    // RVA: 0x3E2B | Ordinal: 15916
        void glTexCoord1fv(float const *);

    // RVA: 0x3E3C | Ordinal: 15933
        void glTexCoord1i(int);

    // RVA: 0x3E4D | Ordinal: 15950
        void glTexCoord1iv(int const *);

    // RVA: 0x3E5E | Ordinal: 15967
        void glTexCoord1s(short);

    // RVA: 0x3E6F | Ordinal: 15984
        void glTexCoord1sv(short const *);

    // RVA: 0x3E80 | Ordinal: 16001
        void glTexCoord2d(double, double);

    // RVA: 0x3E91 | Ordinal: 16018
        void glTexCoord2dv(double const *);

    // RVA: 0x3EA2 | Ordinal: 16035
        void glTexCoord2f(float, float);

    // RVA: 0x3EB3 | Ordinal: 16052
        void glTexCoord2fv(float const *);

    // RVA: 0x3EC4 | Ordinal: 16069
        void glTexCoord2i(int, int);

    // RVA: 0x3ED5 | Ordinal: 16086
        void glTexCoord2iv(int const *);

    // RVA: 0x3EE6 | Ordinal: 16103
        void glTexCoord2s(short, short);

    // RVA: 0x3EF7 | Ordinal: 16120
        void glTexCoord2sv(short const *);

    // RVA: 0x3F08 | Ordinal: 16137
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F19 | Ordinal: 16154
        void glTexCoord3dv(double const *);

    // RVA: 0x3F2A | Ordinal: 16171
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F3B | Ordinal: 16188
        void glTexCoord3fv(float const *);

    // RVA: 0x3F4C | Ordinal: 16205
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F5D | Ordinal: 16222
        void glTexCoord3iv(int const *);

    // RVA: 0x3F6E | Ordinal: 16239
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F7F | Ordinal: 16256
        void glTexCoord3sv(short const *);

    // RVA: 0x3F90 | Ordinal: 16273
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3FA1 | Ordinal: 16290
        void glTexCoord4dv(double const *);

    // RVA: 0x3FB2 | Ordinal: 16307
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FC3 | Ordinal: 16324
        void glTexCoord4fv(float const *);

    // RVA: 0x3FD4 | Ordinal: 16341
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FE5 | Ordinal: 16358
        void glTexCoord4iv(int const *);

    // RVA: 0x3FF6 | Ordinal: 16375
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x4007 | Ordinal: 16392
        void glTexCoord4sv(short const *);

    // RVA: 0x4077 | Ordinal: 16504
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x4088 | Ordinal: 16521
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x4099 | Ordinal: 16538
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40AA | Ordinal: 16555
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40BB | Ordinal: 16572
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40CC | Ordinal: 16589
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40DD | Ordinal: 16606
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40EE | Ordinal: 16623
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x40FF | Ordinal: 16640
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4110 | Ordinal: 16657
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x4121 | Ordinal: 16674
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x4133 | Ordinal: 16692
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x414E | Ordinal: 16719
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x415E | Ordinal: 16735
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x4177 | Ordinal: 16760
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4187 | Ordinal: 16776
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x419A | Ordinal: 16795
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41AD | Ordinal: 16814
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41C8 | Ordinal: 16841
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41E3 | Ordinal: 16868
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41FE | Ordinal: 16895
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4219 | Ordinal: 16922
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x425A | Ordinal: 16987
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4274 | Ordinal: 17013
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x428D | Ordinal: 17038
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42CC | Ordinal: 17101
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x42E5 | Ordinal: 17126
        void glTranslated(double, double, double);

    // RVA: 0x42F6 | Ordinal: 17143
        void glTranslatef(float, float, float);

    // RVA: 0x431B | Ordinal: 17180
        void glUniform1f(int, float);

    // RVA: 0x4330 | Ordinal: 17201
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4345 | Ordinal: 17222
        void glUniform1i(int, int);

    // RVA: 0x435A | Ordinal: 17243
        void glUniform1iv(int, int, int const *);

    // RVA: 0x436D | Ordinal: 17262
        void glUniform1ui(int, unsigned int);

    // RVA: 0x4380 | Ordinal: 17281
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x43AD | Ordinal: 17326
        void glUniform2f(int, float, float);

    // RVA: 0x43C2 | Ordinal: 17347
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43D7 | Ordinal: 17368
        void glUniform2i(int, int, int);

    // RVA: 0x43EC | Ordinal: 17389
        void glUniform2iv(int, int, int const *);

    // RVA: 0x43FF | Ordinal: 17408
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4412 | Ordinal: 17427
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x443F | Ordinal: 17472
        void glUniform3f(int, float, float, float);

    // RVA: 0x4454 | Ordinal: 17493
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4469 | Ordinal: 17514
        void glUniform3i(int, int, int, int);

    // RVA: 0x447E | Ordinal: 17535
        void glUniform3iv(int, int, int const *);

    // RVA: 0x4491 | Ordinal: 17554
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44A4 | Ordinal: 17573
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44D1 | Ordinal: 17618
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44E6 | Ordinal: 17639
        void glUniform4fv(int, int, float const *);

    // RVA: 0x44FB | Ordinal: 17660
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x4510 | Ordinal: 17681
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4523 | Ordinal: 17700
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4536 | Ordinal: 17719
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4548 | Ordinal: 17737
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4569 | Ordinal: 17770
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x4589 | Ordinal: 17802
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45A9 | Ordinal: 17834
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45CA | Ordinal: 17867
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45EA | Ordinal: 17899
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x460A | Ordinal: 17931
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x462B | Ordinal: 17964
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x464B | Ordinal: 17996
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x466B | Ordinal: 18028
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x468D | Ordinal: 18062
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46A4 | Ordinal: 18085
        void glUseProgram(unsigned int);

    // RVA: 0x46C4 | Ordinal: 18117
        void glValidateProgram(unsigned int);

    // RVA: 0x46E8 | Ordinal: 18153
        void glVertex2d(double, double);

    // RVA: 0x46F9 | Ordinal: 18170
        void glVertex2dv(double const *);

    // RVA: 0x470A | Ordinal: 18187
        void glVertex2f(float, float);

    // RVA: 0x471B | Ordinal: 18204
        void glVertex2fv(float const *);

    // RVA: 0x472C | Ordinal: 18221
        void glVertex2i(int, int);

    // RVA: 0x473D | Ordinal: 18238
        void glVertex2iv(int const *);

    // RVA: 0x474E | Ordinal: 18255
        void glVertex2s(short, short);

    // RVA: 0x475F | Ordinal: 18272
        void glVertex2sv(short const *);

    // RVA: 0x4770 | Ordinal: 18289
        void glVertex3d(double, double, double);

    // RVA: 0x4781 | Ordinal: 18306
        void glVertex3dv(double const *);

    // RVA: 0x4792 | Ordinal: 18323
        void glVertex3f(float, float, float);

    // RVA: 0x47A3 | Ordinal: 18340
        void glVertex3fv(float const *);

    // RVA: 0x47B4 | Ordinal: 18357
        void glVertex3i(int, int, int);

    // RVA: 0x47C5 | Ordinal: 18374
        void glVertex3iv(int const *);

    // RVA: 0x47D6 | Ordinal: 18391
        void glVertex3s(short, short, short);

    // RVA: 0x47E7 | Ordinal: 18408
        void glVertex3sv(short const *);

    // RVA: 0x47F8 | Ordinal: 18425
        void glVertex4d(double, double, double, double);

    // RVA: 0x4809 | Ordinal: 18442
        void glVertex4dv(double const *);

    // RVA: 0x481A | Ordinal: 18459
        void glVertex4f(float, float, float, float);

    // RVA: 0x482B | Ordinal: 18476
        void glVertex4fv(float const *);

    // RVA: 0x483C | Ordinal: 18493
        void glVertex4i(int, int, int, int);

    // RVA: 0x484D | Ordinal: 18510
        void glVertex4iv(int const *);

    // RVA: 0x485E | Ordinal: 18527
        void glVertex4s(short, short, short, short);

    // RVA: 0x486F | Ordinal: 18544
        void glVertex4sv(short const *);

    // RVA: 0x488A | Ordinal: 18571
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x4897 | Ordinal: 18584
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48A5 | Ordinal: 18598
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48B3 | Ordinal: 18612
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48C0 | Ordinal: 18625
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48CD | Ordinal: 18638
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48DA | Ordinal: 18651
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48E7 | Ordinal: 18664
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48F5 | Ordinal: 18678
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x4903 | Ordinal: 18692
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4910 | Ordinal: 18705
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x491D | Ordinal: 18718
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x492A | Ordinal: 18731
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x4937 | Ordinal: 18744
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x4945 | Ordinal: 18758
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x4953 | Ordinal: 18772
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x4960 | Ordinal: 18785
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x496D | Ordinal: 18798
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x497A | Ordinal: 18811
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x4987 | Ordinal: 18824
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x4994 | Ordinal: 18837
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49A1 | Ordinal: 18850
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49AE | Ordinal: 18863
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49BB | Ordinal: 18876
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49C8 | Ordinal: 18889
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49D5 | Ordinal: 18902
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49E2 | Ordinal: 18915
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49EF | Ordinal: 18928
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x49FD | Ordinal: 18942
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A0B | Ordinal: 18956
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A18 | Ordinal: 18969
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A25 | Ordinal: 18982
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A32 | Ordinal: 18995
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A3F | Ordinal: 19008
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A4C | Ordinal: 19021
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A59 | Ordinal: 19034
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A81 | Ordinal: 19074
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A8C | Ordinal: 19085
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4A97 | Ordinal: 19096
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AA2 | Ordinal: 19107
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AAD | Ordinal: 19118
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4AB8 | Ordinal: 19129
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4AC3 | Ordinal: 19140
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4ACE | Ordinal: 19151
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AD9 | Ordinal: 19162
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AE4 | Ordinal: 19173
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AEF | Ordinal: 19184
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AFA | Ordinal: 19195
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B05 | Ordinal: 19206
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B11 | Ordinal: 19218
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B1D | Ordinal: 19230
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B28 | Ordinal: 19241
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B33 | Ordinal: 19252
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B3F | Ordinal: 19264
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B4B | Ordinal: 19276
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B56 | Ordinal: 19287
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B6A | Ordinal: 19307
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4C4F | Ordinal: 19536
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4CB6 | Ordinal: 19639
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CC9 | Ordinal: 19658
        void glViewport(int, int, int, int);

    // RVA: 0x4CF8 | Ordinal: 19705
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4D0D | Ordinal: 19726
        void glWindowPos2d(double, double);

    // RVA: 0x4D1A | Ordinal: 19739
        void glWindowPos2dv(double const *);

    // RVA: 0x4D27 | Ordinal: 19752
        void glWindowPos2f(float, float);

    // RVA: 0x4D34 | Ordinal: 19765
        void glWindowPos2fv(float const *);

    // RVA: 0x4D41 | Ordinal: 19778
        void glWindowPos2i(int, int);

    // RVA: 0x4D4E | Ordinal: 19791
        void glWindowPos2iv(int const *);

    // RVA: 0x4D5B | Ordinal: 19804
        void glWindowPos2s(short, short);

    // RVA: 0x4D68 | Ordinal: 19817
        void glWindowPos2sv(short const *);

    // RVA: 0x4D75 | Ordinal: 19830
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D82 | Ordinal: 19843
        void glWindowPos3dv(double const *);

    // RVA: 0x4D8F | Ordinal: 19856
        void glWindowPos3f(float, float, float);

    // RVA: 0x4D9C | Ordinal: 19869
        void glWindowPos3fv(float const *);

    // RVA: 0x4DA9 | Ordinal: 19882
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DB6 | Ordinal: 19895
        void glWindowPos3iv(int const *);

    // RVA: 0x4DC3 | Ordinal: 19908
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DD0 | Ordinal: 19921
        void glWindowPos3sv(short const *);

    // RVA: 0x4F24 | Ordinal: 20261
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FE6 | Ordinal: 20455
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x610A | Ordinal: 24843
        void versionProfile(void);

    // RVA: 0x487 | Ordinal: 1160
        void _QOpenGLFunctions_3_2_Compatibility(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_3_2_COMPATIBILITY_HPP
