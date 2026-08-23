#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_1_Compatibility
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_1_Compatibility
{
public:

    // RVA: 0x1BF | Ordinal: 448
        void QOpenGLFunctions_4_1_Compatibility(void);

    // RVA: 0x11C4 | Ordinal: 4549
        void glAccum(unsigned int, float);

    // RVA: 0x11CA | Ordinal: 4555
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x11E2 | Ordinal: 4579
        void glActiveTexture(unsigned int);

    // RVA: 0x11F8 | Ordinal: 4601
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x1208 | Ordinal: 4617
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x1218 | Ordinal: 4633
        void glArrayElement(int);

    // RVA: 0x1228 | Ordinal: 4649
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x123F | Ordinal: 4672
        void glBegin(unsigned int);

    // RVA: 0x124C | Ordinal: 4685
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x1262 | Ordinal: 4707
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x126E | Ordinal: 4719
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1281 | Ordinal: 4738
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x1296 | Ordinal: 4759
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12AC | Ordinal: 4781
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12BF | Ordinal: 4800
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12D2 | Ordinal: 4819
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12EC | Ordinal: 4845
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12FA | Ordinal: 4859
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x130D | Ordinal: 4878
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1325 | Ordinal: 4902
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x1338 | Ordinal: 4921
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x1347 | Ordinal: 4936
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1365 | Ordinal: 4966
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1378 | Ordinal: 4985
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x138B | Ordinal: 5004
        void glBindVertexArray(unsigned int);

    // RVA: 0x13AC | Ordinal: 5037
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13C1 | Ordinal: 5058
        void glBlendColor(float, float, float, float);

    // RVA: 0x13DA | Ordinal: 5083
        void glBlendEquation(unsigned int);

    // RVA: 0x13EF | Ordinal: 5104
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x13FC | Ordinal: 5117
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1409 | Ordinal: 5130
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x1424 | Ordinal: 5157
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x143B | Ordinal: 5180
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1448 | Ordinal: 5193
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1455 | Ordinal: 5206
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1468 | Ordinal: 5225
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1480 | Ordinal: 5249
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x149A | Ordinal: 5275
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14B0 | Ordinal: 5297
        void glCallList(unsigned int);

    // RVA: 0x14C1 | Ordinal: 5314
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14CF | Ordinal: 5328
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14E3 | Ordinal: 5348
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x14FE | Ordinal: 5375
        void glClear(unsigned int);

    // RVA: 0x1514 | Ordinal: 5397
        void glClearAccum(float, float, float, float);

    // RVA: 0x152E | Ordinal: 5423
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1541 | Ordinal: 5442
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x1554 | Ordinal: 5461
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1567 | Ordinal: 5480
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x1582 | Ordinal: 5507
        void glClearColor(float, float, float, float);

    // RVA: 0x159C | Ordinal: 5533
        void glClearDepth(double);

    // RVA: 0x15A7 | Ordinal: 5544
        void glClearDepthf(float);

    // RVA: 0x15BD | Ordinal: 5566
        void glClearIndex(float);

    // RVA: 0x15DF | Ordinal: 5600
        void glClearStencil(int);

    // RVA: 0x15FA | Ordinal: 5627
        void glClientActiveTexture(unsigned int);

    // RVA: 0x1606 | Ordinal: 5639
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x161E | Ordinal: 5663
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x162F | Ordinal: 5680
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x1640 | Ordinal: 5697
        void glColor3bv(signed char const *);

    // RVA: 0x1651 | Ordinal: 5714
        void glColor3d(double, double, double);

    // RVA: 0x1662 | Ordinal: 5731
        void glColor3dv(double const *);

    // RVA: 0x1673 | Ordinal: 5748
        void glColor3f(float, float, float);

    // RVA: 0x1684 | Ordinal: 5765
        void glColor3fv(float const *);

    // RVA: 0x1695 | Ordinal: 5782
        void glColor3i(int, int, int);

    // RVA: 0x16A6 | Ordinal: 5799
        void glColor3iv(int const *);

    // RVA: 0x16B7 | Ordinal: 5816
        void glColor3s(short, short, short);

    // RVA: 0x16C8 | Ordinal: 5833
        void glColor3sv(short const *);

    // RVA: 0x16D9 | Ordinal: 5850
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16EA | Ordinal: 5867
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16FB | Ordinal: 5884
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x170C | Ordinal: 5901
        void glColor3uiv(unsigned int const *);

    // RVA: 0x171D | Ordinal: 5918
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x172E | Ordinal: 5935
        void glColor3usv(unsigned short const *);

    // RVA: 0x173F | Ordinal: 5952
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x1750 | Ordinal: 5969
        void glColor4bv(signed char const *);

    // RVA: 0x1761 | Ordinal: 5986
        void glColor4d(double, double, double, double);

    // RVA: 0x1772 | Ordinal: 6003
        void glColor4dv(double const *);

    // RVA: 0x1783 | Ordinal: 6020
        void glColor4f(float, float, float, float);

    // RVA: 0x1794 | Ordinal: 6037
        void glColor4fv(float const *);

    // RVA: 0x17A5 | Ordinal: 6054
        void glColor4i(int, int, int, int);

    // RVA: 0x17B6 | Ordinal: 6071
        void glColor4iv(int const *);

    // RVA: 0x17C7 | Ordinal: 6088
        void glColor4s(short, short, short, short);

    // RVA: 0x17D8 | Ordinal: 6105
        void glColor4sv(short const *);

    // RVA: 0x17E9 | Ordinal: 6122
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17FA | Ordinal: 6139
        void glColor4ubv(unsigned char const *);

    // RVA: 0x180B | Ordinal: 6156
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x181C | Ordinal: 6173
        void glColor4uiv(unsigned int const *);

    // RVA: 0x182D | Ordinal: 6190
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x183E | Ordinal: 6207
        void glColor4usv(unsigned short const *);

    // RVA: 0x1854 | Ordinal: 6229
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1867 | Ordinal: 6248
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x187D | Ordinal: 6270
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x1886 | Ordinal: 6279
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x1892 | Ordinal: 6291
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x189E | Ordinal: 6303
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18AA | Ordinal: 6315
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x18BD | Ordinal: 6334
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18CC | Ordinal: 6349
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18DB | Ordinal: 6364
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18EA | Ordinal: 6379
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18F9 | Ordinal: 6394
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1909 | Ordinal: 6410
        void glCompileShader(unsigned int);

    // RVA: 0x1920 | Ordinal: 6433
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1938 | Ordinal: 6457
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1950 | Ordinal: 6481
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1967 | Ordinal: 6504
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x197F | Ordinal: 6528
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1997 | Ordinal: 6552
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19B1 | Ordinal: 6578
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19C0 | Ordinal: 6593
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19CF | Ordinal: 6608
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19DE | Ordinal: 6623
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19ED | Ordinal: 6638
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19FC | Ordinal: 6653
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A09 | Ordinal: 6666
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A1D | Ordinal: 6686
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A2C | Ordinal: 6701
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A3B | Ordinal: 6716
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A4A | Ordinal: 6731
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A64 | Ordinal: 6757
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A78 | Ordinal: 6777
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A92 | Ordinal: 6803
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AAB | Ordinal: 6828
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AC5 | Ordinal: 6854
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1ADE | Ordinal: 6879
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AFD | Ordinal: 6910
        void glCreateProgram(void);

    // RVA: 0x1B1A | Ordinal: 6939
        void glCreateShader(unsigned int);

    // RVA: 0x1B25 | Ordinal: 6950
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B46 | Ordinal: 6983
        void glCullFace(unsigned int);

    // RVA: 0x1B6B | Ordinal: 7020
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B7E | Ordinal: 7039
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B94 | Ordinal: 7061
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1BA4 | Ordinal: 7077
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BAF | Ordinal: 7088
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BC5 | Ordinal: 7110
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BD8 | Ordinal: 7129
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BE7 | Ordinal: 7144
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1BFC | Ordinal: 7165
        void glDeleteShader(unsigned int);

    // RVA: 0x1C0D | Ordinal: 7182
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C27 | Ordinal: 7208
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C34 | Ordinal: 7221
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C47 | Ordinal: 7240
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C62 | Ordinal: 7267
        void glDepthFunc(unsigned int);

    // RVA: 0x1C7D | Ordinal: 7294
        void glDepthMask(unsigned char);

    // RVA: 0x1C97 | Ordinal: 7320
        void glDepthRange(double, double);

    // RVA: 0x1CA1 | Ordinal: 7330
        void glDepthRangeArrayv(unsigned int, int, double const *);

    // RVA: 0x1CAB | Ordinal: 7340
        void glDepthRangeIndexed(unsigned int, double, double);

    // RVA: 0x1CB6 | Ordinal: 7351
        void glDepthRangef(float, float);

    // RVA: 0x1CCB | Ordinal: 7372
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CE6 | Ordinal: 7399
        void glDisable(unsigned int);

    // RVA: 0x1CFB | Ordinal: 7420
        void glDisableClientState(unsigned int);

    // RVA: 0x1D0D | Ordinal: 7438
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D20 | Ordinal: 7457
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D49 | Ordinal: 7498
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D56 | Ordinal: 7511
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D68 | Ordinal: 7529
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D8A | Ordinal: 7563
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D9F | Ordinal: 7584
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DB9 | Ordinal: 7610
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DCA | Ordinal: 7627
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DD7 | Ordinal: 7640
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DE9 | Ordinal: 7658
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E02 | Ordinal: 7683
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E20 | Ordinal: 7713
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E34 | Ordinal: 7733
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E45 | Ordinal: 7750
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E51 | Ordinal: 7762
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E65 | Ordinal: 7782
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1E83 | Ordinal: 7812
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E93 | Ordinal: 7828
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1EA4 | Ordinal: 7845
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EBA | Ordinal: 7867
        void glEnable(unsigned int);

    // RVA: 0x1ECF | Ordinal: 7888
        void glEnableClientState(unsigned int);

    // RVA: 0x1EE1 | Ordinal: 7906
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EF4 | Ordinal: 7925
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F0A | Ordinal: 7947
        void glEnd(void);

    // RVA: 0x1F17 | Ordinal: 7960
        void glEndConditionalRender(void);

    // RVA: 0x1F2D | Ordinal: 7982
        void glEndList(void);

    // RVA: 0x1F3E | Ordinal: 7999
        void glEndQuery(unsigned int);

    // RVA: 0x1F4A | Ordinal: 8011
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F5D | Ordinal: 8030
        void glEndTransformFeedback(void);

    // RVA: 0x1F73 | Ordinal: 8052
        void glEvalCoord1d(double);

    // RVA: 0x1F84 | Ordinal: 8069
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F95 | Ordinal: 8086
        void glEvalCoord1f(float);

    // RVA: 0x1FA6 | Ordinal: 8103
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FB7 | Ordinal: 8120
        void glEvalCoord2d(double, double);

    // RVA: 0x1FC8 | Ordinal: 8137
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FD9 | Ordinal: 8154
        void glEvalCoord2f(float, float);

    // RVA: 0x1FEA | Ordinal: 8171
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FFB | Ordinal: 8188
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x200C | Ordinal: 8205
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x201D | Ordinal: 8222
        void glEvalPoint1(int);

    // RVA: 0x202E | Ordinal: 8239
        void glEvalPoint2(int, int);

    // RVA: 0x203F | Ordinal: 8256
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x204B | Ordinal: 8268
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x2066 | Ordinal: 8295
        void glFinish(void);

    // RVA: 0x2081 | Ordinal: 8322
        void glFlush(void);

    // RVA: 0x2094 | Ordinal: 8341
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x20A8 | Ordinal: 8361
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20B5 | Ordinal: 8374
        void glFogCoordd(double);

    // RVA: 0x20C2 | Ordinal: 8387
        void glFogCoorddv(double const *);

    // RVA: 0x20CF | Ordinal: 8400
        void glFogCoordf(float);

    // RVA: 0x20DC | Ordinal: 8413
        void glFogCoordfv(float const *);

    // RVA: 0x20ED | Ordinal: 8430
        void glFogf(unsigned int, float);

    // RVA: 0x20FE | Ordinal: 8447
        void glFogfv(unsigned int, float const *);

    // RVA: 0x210F | Ordinal: 8464
        void glFogi(unsigned int, int);

    // RVA: 0x2120 | Ordinal: 8481
        void glFogiv(unsigned int, int const *);

    // RVA: 0x2136 | Ordinal: 8503
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x217E | Ordinal: 8575
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2148 | Ordinal: 8521
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x215B | Ordinal: 8540
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x216D | Ordinal: 8558
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2191 | Ordinal: 8594
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21AC | Ordinal: 8621
        void glFrontFace(unsigned int);

    // RVA: 0x21C2 | Ordinal: 8643
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21D3 | Ordinal: 8660
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21E6 | Ordinal: 8679
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x21FC | Ordinal: 8701
        void glGenLists(int);

    // RVA: 0x2202 | Ordinal: 8707
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x2218 | Ordinal: 8729
        void glGenQueries(int, unsigned int *);

    // RVA: 0x222B | Ordinal: 8748
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x223A | Ordinal: 8763
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x2254 | Ordinal: 8789
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2261 | Ordinal: 8802
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x2274 | Ordinal: 8821
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2287 | Ordinal: 8840
        void glGenerateMipmap(unsigned int);

    // RVA: 0x22A6 | Ordinal: 8871
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22B2 | Ordinal: 8883
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22BE | Ordinal: 8895
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22CA | Ordinal: 8907
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22DF | Ordinal: 8928
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22F1 | Ordinal: 8946
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2303 | Ordinal: 8964
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2314 | Ordinal: 8981
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2326 | Ordinal: 8999
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x233B | Ordinal: 9020
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2350 | Ordinal: 9041
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2363 | Ordinal: 9060
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x237E | Ordinal: 9087
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x238F | Ordinal: 9104
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23A5 | Ordinal: 9126
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23BB | Ordinal: 9148
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23D1 | Ordinal: 9170
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23E7 | Ordinal: 9192
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23F6 | Ordinal: 9207
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2405 | Ordinal: 9222
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2414 | Ordinal: 9237
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2426 | Ordinal: 9255
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x243E | Ordinal: 9279
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x244D | Ordinal: 9294
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x245C | Ordinal: 9309
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2466 | Ordinal: 9319
        void glGetDoublei_v(unsigned int, unsigned int, double *);

    // RVA: 0x2480 | Ordinal: 9345
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x249B | Ordinal: 9372
        void glGetError(void);

    // RVA: 0x24A5 | Ordinal: 9382
        void glGetFloati_v(unsigned int, unsigned int, float *);

    // RVA: 0x24C0 | Ordinal: 9409
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24CE | Ordinal: 9423
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24E1 | Ordinal: 9442
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24F4 | Ordinal: 9461
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2512 | Ordinal: 9491
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2521 | Ordinal: 9506
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2530 | Ordinal: 9521
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x253C | Ordinal: 9533
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x254D | Ordinal: 9550
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2560 | Ordinal: 9569
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x257B | Ordinal: 9596
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x25A0 | Ordinal: 9633
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25B1 | Ordinal: 9650
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25C2 | Ordinal: 9667
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25D3 | Ordinal: 9684
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25E4 | Ordinal: 9701
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25F5 | Ordinal: 9718
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x2606 | Ordinal: 9735
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2615 | Ordinal: 9750
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2624 | Ordinal: 9765
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2633 | Ordinal: 9780
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x263F | Ordinal: 9792
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x266D | Ordinal: 9838
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x267E | Ordinal: 9855
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x268F | Ordinal: 9872
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x26A4 | Ordinal: 9893
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26B8 | Ordinal: 9913
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26BE | Ordinal: 9919
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26D3 | Ordinal: 9940
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26E5 | Ordinal: 9958
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26F0 | Ordinal: 9969
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x271E | Ordinal: 10015
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2733 | Ordinal: 10036
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x273F | Ordinal: 10048
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x274D | Ordinal: 10062
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2762 | Ordinal: 10083
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2770 | Ordinal: 10097
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x2786 | Ordinal: 10119
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x279C | Ordinal: 10141
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27AF | Ordinal: 10160
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27BE | Ordinal: 10175
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27CD | Ordinal: 10190
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27DC | Ordinal: 10205
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27EB | Ordinal: 10220
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27FF | Ordinal: 10240
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x280F | Ordinal: 10256
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x281A | Ordinal: 10267
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x282F | Ordinal: 10288
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2844 | Ordinal: 10309
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x285F | Ordinal: 10336
        void glGetString(unsigned int);

    // RVA: 0x2872 | Ordinal: 10355
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x287E | Ordinal: 10367
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x288A | Ordinal: 10379
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x289B | Ordinal: 10396
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x28B1 | Ordinal: 10418
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28C2 | Ordinal: 10435
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28D3 | Ordinal: 10452
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28E4 | Ordinal: 10469
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28F5 | Ordinal: 10486
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x290A | Ordinal: 10507
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2925 | Ordinal: 10534
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2940 | Ordinal: 10561
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2953 | Ordinal: 10580
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2966 | Ordinal: 10599
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2981 | Ordinal: 10626
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x299C | Ordinal: 10653
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29BF | Ordinal: 10688
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29D7 | Ordinal: 10712
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29E9 | Ordinal: 10730
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x29FE | Ordinal: 10751
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A0A | Ordinal: 10763
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A16 | Ordinal: 10775
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A2B | Ordinal: 10796
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A40 | Ordinal: 10817
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A53 | Ordinal: 10836
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A6C | Ordinal: 10861
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A7F | Ordinal: 10880
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A89 | Ordinal: 10890
        void glGetVertexAttribLdv(unsigned int, unsigned int, double *);

    // RVA: 0x2A9E | Ordinal: 10911
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AB2 | Ordinal: 10931
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AC7 | Ordinal: 10952
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2ADC | Ordinal: 10973
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B12 | Ordinal: 11027
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B26 | Ordinal: 11047
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B37 | Ordinal: 11064
        void glIndexMask(unsigned int);

    // RVA: 0x2B47 | Ordinal: 11080
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B58 | Ordinal: 11097
        void glIndexd(double);

    // RVA: 0x2B69 | Ordinal: 11114
        void glIndexdv(double const *);

    // RVA: 0x2B7A | Ordinal: 11131
        void glIndexf(float);

    // RVA: 0x2B8B | Ordinal: 11148
        void glIndexfv(float const *);

    // RVA: 0x2B9C | Ordinal: 11165
        void glIndexi(int);

    // RVA: 0x2BAD | Ordinal: 11182
        void glIndexiv(int const *);

    // RVA: 0x2BBE | Ordinal: 11199
        void glIndexs(short);

    // RVA: 0x2BCF | Ordinal: 11216
        void glIndexsv(short const *);

    // RVA: 0x2BE3 | Ordinal: 11236
        void glIndexub(unsigned char);

    // RVA: 0x2BFA | Ordinal: 11259
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C0E | Ordinal: 11279
        void glInitNames(void);

    // RVA: 0x2C1E | Ordinal: 11295
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C5A | Ordinal: 11355
        void glIsBuffer(unsigned int);

    // RVA: 0x2C75 | Ordinal: 11382
        void glIsEnabled(unsigned int);

    // RVA: 0x2C88 | Ordinal: 11401
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C9B | Ordinal: 11420
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CB1 | Ordinal: 11442
        void glIsList(unsigned int);

    // RVA: 0x2CC1 | Ordinal: 11458
        void glIsProgram(unsigned int);

    // RVA: 0x2CCC | Ordinal: 11469
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CE2 | Ordinal: 11491
        void glIsQuery(unsigned int);

    // RVA: 0x2CF5 | Ordinal: 11510
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D04 | Ordinal: 11525
        void glIsSampler(unsigned int);

    // RVA: 0x2D19 | Ordinal: 11546
        void glIsShader(unsigned int);

    // RVA: 0x2D2A | Ordinal: 11563
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D44 | Ordinal: 11589
        void glIsTexture(unsigned int);

    // RVA: 0x2D51 | Ordinal: 11602
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D64 | Ordinal: 11621
        void glIsVertexArray(unsigned int);

    // RVA: 0x2D7A | Ordinal: 11643
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D8B | Ordinal: 11660
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D9C | Ordinal: 11677
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DAD | Ordinal: 11694
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DBE | Ordinal: 11711
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DCF | Ordinal: 11728
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DE0 | Ordinal: 11745
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DF1 | Ordinal: 11762
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2E02 | Ordinal: 11779
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E18 | Ordinal: 11801
        void glLineWidth(float);

    // RVA: 0x2E2D | Ordinal: 11822
        void glLinkProgram(unsigned int);

    // RVA: 0x2E43 | Ordinal: 11844
        void glListBase(unsigned int);

    // RVA: 0x2E54 | Ordinal: 11861
        void glLoadIdentity(void);

    // RVA: 0x2E65 | Ordinal: 11878
        void glLoadMatrixd(double const *);

    // RVA: 0x2E76 | Ordinal: 11895
        void glLoadMatrixf(float const *);

    // RVA: 0x2E87 | Ordinal: 11912
        void glLoadName(unsigned int);

    // RVA: 0x2E95 | Ordinal: 11926
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2EA3 | Ordinal: 11940
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EB8 | Ordinal: 11961
        void glLogicOp(unsigned int);

    // RVA: 0x2ECE | Ordinal: 11983
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2EDF | Ordinal: 12000
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EF0 | Ordinal: 12017
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2F01 | Ordinal: 12034
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F12 | Ordinal: 12051
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F25 | Ordinal: 12070
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2F3B | Ordinal: 12092
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F4C | Ordinal: 12109
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F5D | Ordinal: 12126
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F6E | Ordinal: 12143
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F83 | Ordinal: 12164
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F94 | Ordinal: 12181
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2FA5 | Ordinal: 12198
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FB6 | Ordinal: 12215
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FC7 | Ordinal: 12232
        void glMatrixMode(unsigned int);

    // RVA: 0x2FDB | Ordinal: 12252
        void glMinSampleShading(float);

    // RVA: 0x2FEF | Ordinal: 12272
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x3000 | Ordinal: 12289
        void glMultMatrixd(double const *);

    // RVA: 0x3011 | Ordinal: 12306
        void glMultMatrixf(float const *);

    // RVA: 0x301F | Ordinal: 12320
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x302D | Ordinal: 12334
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x303E | Ordinal: 12351
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x305A | Ordinal: 12379
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x306A | Ordinal: 12395
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3083 | Ordinal: 12420
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x3091 | Ordinal: 12434
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x309F | Ordinal: 12448
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30AD | Ordinal: 12462
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30BB | Ordinal: 12476
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30C9 | Ordinal: 12490
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30D7 | Ordinal: 12504
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30E5 | Ordinal: 12518
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30F3 | Ordinal: 12532
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x3101 | Ordinal: 12546
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x310F | Ordinal: 12560
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x311D | Ordinal: 12574
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x312B | Ordinal: 12588
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x3139 | Ordinal: 12602
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x3147 | Ordinal: 12616
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x3155 | Ordinal: 12630
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x3163 | Ordinal: 12644
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x3171 | Ordinal: 12658
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x317F | Ordinal: 12672
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x318D | Ordinal: 12686
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x319B | Ordinal: 12700
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31A9 | Ordinal: 12714
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31B7 | Ordinal: 12728
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31C5 | Ordinal: 12742
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31D3 | Ordinal: 12756
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31E1 | Ordinal: 12770
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31EF | Ordinal: 12784
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31FD | Ordinal: 12798
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x320B | Ordinal: 12812
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x3219 | Ordinal: 12826
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x3227 | Ordinal: 12840
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x3235 | Ordinal: 12854
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x323E | Ordinal: 12863
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x324A | Ordinal: 12875
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3256 | Ordinal: 12887
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3262 | Ordinal: 12899
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x326E | Ordinal: 12911
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x327A | Ordinal: 12923
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3286 | Ordinal: 12935
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3292 | Ordinal: 12947
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x32BE | Ordinal: 12991
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32CF | Ordinal: 13008
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32E0 | Ordinal: 13025
        void glNormal3bv(signed char const *);

    // RVA: 0x32F1 | Ordinal: 13042
        void glNormal3d(double, double, double);

    // RVA: 0x3302 | Ordinal: 13059
        void glNormal3dv(double const *);

    // RVA: 0x3313 | Ordinal: 13076
        void glNormal3f(float, float, float);

    // RVA: 0x3324 | Ordinal: 13093
        void glNormal3fv(float const *);

    // RVA: 0x3335 | Ordinal: 13110
        void glNormal3i(int, int, int);

    // RVA: 0x3346 | Ordinal: 13127
        void glNormal3iv(int const *);

    // RVA: 0x3357 | Ordinal: 13144
        void glNormal3s(short, short, short);

    // RVA: 0x3368 | Ordinal: 13161
        void glNormal3sv(short const *);

    // RVA: 0x3371 | Ordinal: 13170
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x337D | Ordinal: 13182
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3390 | Ordinal: 13201
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33AB | Ordinal: 13228
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33BC | Ordinal: 13245
        void glPassThrough(float);

    // RVA: 0x33C3 | Ordinal: 13252
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33D0 | Ordinal: 13265
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33DD | Ordinal: 13278
        void glPauseTransformFeedback(void);

    // RVA: 0x33F3 | Ordinal: 13300
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x3404 | Ordinal: 13317
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x3415 | Ordinal: 13334
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x342A | Ordinal: 13355
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3445 | Ordinal: 13382
        void glPixelStorei(unsigned int, int);

    // RVA: 0x345B | Ordinal: 13404
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x346C | Ordinal: 13421
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x347D | Ordinal: 13438
        void glPixelZoom(float, float);

    // RVA: 0x348E | Ordinal: 13455
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34A4 | Ordinal: 13477
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34BA | Ordinal: 13499
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34D0 | Ordinal: 13521
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34EA | Ordinal: 13547
        void glPointSize(float);

    // RVA: 0x3504 | Ordinal: 13573
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x351E | Ordinal: 13599
        void glPolygonOffset(float, float);

    // RVA: 0x3534 | Ordinal: 13621
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x3545 | Ordinal: 13638
        void glPopAttrib(void);

    // RVA: 0x3555 | Ordinal: 13654
        void glPopClientAttrib(void);

    // RVA: 0x356B | Ordinal: 13676
        void glPopMatrix(void);

    // RVA: 0x357C | Ordinal: 13693
        void glPopName(void);

    // RVA: 0x3589 | Ordinal: 13706
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x359E | Ordinal: 13727
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x35A4 | Ordinal: 13733
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35AF | Ordinal: 13744
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35B9 | Ordinal: 13754
        void glProgramUniform1d(unsigned int, int, double);

    // RVA: 0x35C3 | Ordinal: 13764
        void glProgramUniform1dv(unsigned int, int, int, double const *);

    // RVA: 0x35CE | Ordinal: 13775
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35D9 | Ordinal: 13786
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35E4 | Ordinal: 13797
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35EF | Ordinal: 13808
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x35FA | Ordinal: 13819
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x3605 | Ordinal: 13830
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x360F | Ordinal: 13840
        void glProgramUniform2d(unsigned int, int, double, double);

    // RVA: 0x3619 | Ordinal: 13850
        void glProgramUniform2dv(unsigned int, int, int, double const *);

    // RVA: 0x3624 | Ordinal: 13861
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x362F | Ordinal: 13872
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x363A | Ordinal: 13883
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x3645 | Ordinal: 13894
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x3650 | Ordinal: 13905
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x365B | Ordinal: 13916
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3665 | Ordinal: 13926
        void glProgramUniform3d(unsigned int, int, double, double, double);

    // RVA: 0x366F | Ordinal: 13936
        void glProgramUniform3dv(unsigned int, int, int, double const *);

    // RVA: 0x367A | Ordinal: 13947
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x3685 | Ordinal: 13958
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x3690 | Ordinal: 13969
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x369B | Ordinal: 13980
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36A6 | Ordinal: 13991
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36B1 | Ordinal: 14002
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36BB | Ordinal: 14012
        void glProgramUniform4d(unsigned int, int, double, double, double, double);

    // RVA: 0x36C5 | Ordinal: 14022
        void glProgramUniform4dv(unsigned int, int, int, double const *);

    // RVA: 0x36D0 | Ordinal: 14033
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36DB | Ordinal: 14044
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36E6 | Ordinal: 14055
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36F1 | Ordinal: 14066
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x36FC | Ordinal: 14077
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3707 | Ordinal: 14088
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3711 | Ordinal: 14098
        void glProgramUniformMatrix2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x371C | Ordinal: 14109
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3726 | Ordinal: 14119
        void glProgramUniformMatrix2x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3731 | Ordinal: 14130
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x373B | Ordinal: 14140
        void glProgramUniformMatrix2x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3746 | Ordinal: 14151
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3750 | Ordinal: 14161
        void glProgramUniformMatrix3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x375B | Ordinal: 14172
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3765 | Ordinal: 14182
        void glProgramUniformMatrix3x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3770 | Ordinal: 14193
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x377A | Ordinal: 14203
        void glProgramUniformMatrix3x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3785 | Ordinal: 14214
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x378F | Ordinal: 14224
        void glProgramUniformMatrix4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x379A | Ordinal: 14235
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37A4 | Ordinal: 14245
        void glProgramUniformMatrix4x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37AF | Ordinal: 14256
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37B9 | Ordinal: 14266
        void glProgramUniformMatrix4x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37C4 | Ordinal: 14277
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37D4 | Ordinal: 14293
        void glProvokingVertex(unsigned int);

    // RVA: 0x37EA | Ordinal: 14315
        void glPushAttrib(unsigned int);

    // RVA: 0x37FA | Ordinal: 14331
        void glPushClientAttrib(unsigned int);

    // RVA: 0x3810 | Ordinal: 14353
        void glPushMatrix(void);

    // RVA: 0x3821 | Ordinal: 14370
        void glPushName(unsigned int);

    // RVA: 0x382A | Ordinal: 14379
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x3840 | Ordinal: 14401
        void glRasterPos2d(double, double);

    // RVA: 0x3851 | Ordinal: 14418
        void glRasterPos2dv(double const *);

    // RVA: 0x3862 | Ordinal: 14435
        void glRasterPos2f(float, float);

    // RVA: 0x3873 | Ordinal: 14452
        void glRasterPos2fv(float const *);

    // RVA: 0x3884 | Ordinal: 14469
        void glRasterPos2i(int, int);

    // RVA: 0x3895 | Ordinal: 14486
        void glRasterPos2iv(int const *);

    // RVA: 0x38A6 | Ordinal: 14503
        void glRasterPos2s(short, short);

    // RVA: 0x38B7 | Ordinal: 14520
        void glRasterPos2sv(short const *);

    // RVA: 0x38C8 | Ordinal: 14537
        void glRasterPos3d(double, double, double);

    // RVA: 0x38D9 | Ordinal: 14554
        void glRasterPos3dv(double const *);

    // RVA: 0x38EA | Ordinal: 14571
        void glRasterPos3f(float, float, float);

    // RVA: 0x38FB | Ordinal: 14588
        void glRasterPos3fv(float const *);

    // RVA: 0x390C | Ordinal: 14605
        void glRasterPos3i(int, int, int);

    // RVA: 0x391D | Ordinal: 14622
        void glRasterPos3iv(int const *);

    // RVA: 0x392E | Ordinal: 14639
        void glRasterPos3s(short, short, short);

    // RVA: 0x393F | Ordinal: 14656
        void glRasterPos3sv(short const *);

    // RVA: 0x3950 | Ordinal: 14673
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x3961 | Ordinal: 14690
        void glRasterPos4dv(double const *);

    // RVA: 0x3972 | Ordinal: 14707
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x3983 | Ordinal: 14724
        void glRasterPos4fv(float const *);

    // RVA: 0x3994 | Ordinal: 14741
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x39A5 | Ordinal: 14758
        void glRasterPos4iv(int const *);

    // RVA: 0x39B6 | Ordinal: 14775
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39C7 | Ordinal: 14792
        void glRasterPos4sv(short const *);

    // RVA: 0x39DD | Ordinal: 14814
        void glReadBuffer(unsigned int);

    // RVA: 0x39F8 | Ordinal: 14841
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A11 | Ordinal: 14866
        void glRectd(double, double, double, double);

    // RVA: 0x3A22 | Ordinal: 14883
        void glRectdv(double const *, double const *);

    // RVA: 0x3A33 | Ordinal: 14900
        void glRectf(float, float, float, float);

    // RVA: 0x3A44 | Ordinal: 14917
        void glRectfv(float const *, float const *);

    // RVA: 0x3A55 | Ordinal: 14934
        void glRecti(int, int, int, int);

    // RVA: 0x3A66 | Ordinal: 14951
        void glRectiv(int const *, int const *);

    // RVA: 0x3A77 | Ordinal: 14968
        void glRects(short, short, short, short);

    // RVA: 0x3A88 | Ordinal: 14985
        void glRectsv(short const *, short const *);

    // RVA: 0x3A8E | Ordinal: 14991
        void glReleaseShaderCompiler(void);

    // RVA: 0x3AA4 | Ordinal: 15013
        void glRenderMode(unsigned int);

    // RVA: 0x3AB2 | Ordinal: 15027
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3AC5 | Ordinal: 15046
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AD9 | Ordinal: 15066
        void glResetHistogram(unsigned int);

    // RVA: 0x3AE8 | Ordinal: 15081
        void glResetMinmax(unsigned int);

    // RVA: 0x3AF0 | Ordinal: 15089
        void glResumeTransformFeedback(void);

    // RVA: 0x3B06 | Ordinal: 15111
        void glRotated(double, double, double, double);

    // RVA: 0x3B17 | Ordinal: 15128
        void glRotatef(float, float, float, float);

    // RVA: 0x3B2A | Ordinal: 15147
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B3B | Ordinal: 15164
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B4A | Ordinal: 15179
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B59 | Ordinal: 15194
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B68 | Ordinal: 15209
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B77 | Ordinal: 15224
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B86 | Ordinal: 15239
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B95 | Ordinal: 15254
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BAB | Ordinal: 15276
        void glScaled(double, double, double);

    // RVA: 0x3BBC | Ordinal: 15293
        void glScalef(float, float, float);

    // RVA: 0x3BD2 | Ordinal: 15315
        void glScissor(int, int, int, int);

    // RVA: 0x3BDC | Ordinal: 15325
        void glScissorArrayv(unsigned int, int, int const *);

    // RVA: 0x3BE6 | Ordinal: 15335
        void glScissorIndexed(unsigned int, int, int, int, int);

    // RVA: 0x3BF0 | Ordinal: 15345
        void glScissorIndexedv(unsigned int, int const *);

    // RVA: 0x3C02 | Ordinal: 15363
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C0F | Ordinal: 15376
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C1C | Ordinal: 15389
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C29 | Ordinal: 15402
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C36 | Ordinal: 15415
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C43 | Ordinal: 15428
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C50 | Ordinal: 15441
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C5D | Ordinal: 15454
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C6A | Ordinal: 15467
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C77 | Ordinal: 15480
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C84 | Ordinal: 15493
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C91 | Ordinal: 15506
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3C9E | Ordinal: 15519
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CAB | Ordinal: 15532
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CB8 | Ordinal: 15545
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CC5 | Ordinal: 15558
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CCE | Ordinal: 15567
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CDA | Ordinal: 15579
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3CEA | Ordinal: 15595
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CFB | Ordinal: 15612
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D0A | Ordinal: 15627
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D1B | Ordinal: 15644
        void glShadeModel(unsigned int);

    // RVA: 0x3D21 | Ordinal: 15650
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D36 | Ordinal: 15671
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D57 | Ordinal: 15704
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D6C | Ordinal: 15725
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D87 | Ordinal: 15752
        void glStencilMask(unsigned int);

    // RVA: 0x3D9C | Ordinal: 15773
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DB7 | Ordinal: 15800
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DCC | Ordinal: 15821
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DDE | Ordinal: 15839
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DFB | Ordinal: 15868
        void glTexCoord1d(double);

    // RVA: 0x3E0C | Ordinal: 15885
        void glTexCoord1dv(double const *);

    // RVA: 0x3E1D | Ordinal: 15902
        void glTexCoord1f(float);

    // RVA: 0x3E2E | Ordinal: 15919
        void glTexCoord1fv(float const *);

    // RVA: 0x3E3F | Ordinal: 15936
        void glTexCoord1i(int);

    // RVA: 0x3E50 | Ordinal: 15953
        void glTexCoord1iv(int const *);

    // RVA: 0x3E61 | Ordinal: 15970
        void glTexCoord1s(short);

    // RVA: 0x3E72 | Ordinal: 15987
        void glTexCoord1sv(short const *);

    // RVA: 0x3E83 | Ordinal: 16004
        void glTexCoord2d(double, double);

    // RVA: 0x3E94 | Ordinal: 16021
        void glTexCoord2dv(double const *);

    // RVA: 0x3EA5 | Ordinal: 16038
        void glTexCoord2f(float, float);

    // RVA: 0x3EB6 | Ordinal: 16055
        void glTexCoord2fv(float const *);

    // RVA: 0x3EC7 | Ordinal: 16072
        void glTexCoord2i(int, int);

    // RVA: 0x3ED8 | Ordinal: 16089
        void glTexCoord2iv(int const *);

    // RVA: 0x3EE9 | Ordinal: 16106
        void glTexCoord2s(short, short);

    // RVA: 0x3EFA | Ordinal: 16123
        void glTexCoord2sv(short const *);

    // RVA: 0x3F0B | Ordinal: 16140
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F1C | Ordinal: 16157
        void glTexCoord3dv(double const *);

    // RVA: 0x3F2D | Ordinal: 16174
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F3E | Ordinal: 16191
        void glTexCoord3fv(float const *);

    // RVA: 0x3F4F | Ordinal: 16208
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F60 | Ordinal: 16225
        void glTexCoord3iv(int const *);

    // RVA: 0x3F71 | Ordinal: 16242
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F82 | Ordinal: 16259
        void glTexCoord3sv(short const *);

    // RVA: 0x3F93 | Ordinal: 16276
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3FA4 | Ordinal: 16293
        void glTexCoord4dv(double const *);

    // RVA: 0x3FB5 | Ordinal: 16310
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FC6 | Ordinal: 16327
        void glTexCoord4fv(float const *);

    // RVA: 0x3FD7 | Ordinal: 16344
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FE8 | Ordinal: 16361
        void glTexCoord4iv(int const *);

    // RVA: 0x3FF9 | Ordinal: 16378
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x400A | Ordinal: 16395
        void glTexCoord4sv(short const *);

    // RVA: 0x4013 | Ordinal: 16404
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x401F | Ordinal: 16416
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x402B | Ordinal: 16428
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x4037 | Ordinal: 16440
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4043 | Ordinal: 16452
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x404F | Ordinal: 16464
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x405B | Ordinal: 16476
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x4067 | Ordinal: 16488
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x407A | Ordinal: 16507
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x408B | Ordinal: 16524
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x409C | Ordinal: 16541
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40AD | Ordinal: 16558
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40BE | Ordinal: 16575
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40CF | Ordinal: 16592
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40E0 | Ordinal: 16609
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40F1 | Ordinal: 16626
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x4102 | Ordinal: 16643
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4113 | Ordinal: 16660
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x4124 | Ordinal: 16677
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x4139 | Ordinal: 16698
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4154 | Ordinal: 16725
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4164 | Ordinal: 16741
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x417D | Ordinal: 16766
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x418D | Ordinal: 16782
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x41A0 | Ordinal: 16801
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41B3 | Ordinal: 16820
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41CE | Ordinal: 16847
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41E9 | Ordinal: 16874
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4204 | Ordinal: 16901
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x421F | Ordinal: 16928
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4260 | Ordinal: 16993
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x427A | Ordinal: 17019
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4293 | Ordinal: 17044
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42D2 | Ordinal: 17107
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x42E8 | Ordinal: 17129
        void glTranslated(double, double, double);

    // RVA: 0x42F9 | Ordinal: 17146
        void glTranslatef(float, float, float);

    // RVA: 0x4300 | Ordinal: 17153
        void glUniform1d(int, double);

    // RVA: 0x430C | Ordinal: 17165
        void glUniform1dv(int, int, double const *);

    // RVA: 0x4321 | Ordinal: 17186
        void glUniform1f(int, float);

    // RVA: 0x4336 | Ordinal: 17207
        void glUniform1fv(int, int, float const *);

    // RVA: 0x434B | Ordinal: 17228
        void glUniform1i(int, int);

    // RVA: 0x4360 | Ordinal: 17249
        void glUniform1iv(int, int, int const *);

    // RVA: 0x4373 | Ordinal: 17268
        void glUniform1ui(int, unsigned int);

    // RVA: 0x4386 | Ordinal: 17287
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x4392 | Ordinal: 17299
        void glUniform2d(int, double, double);

    // RVA: 0x439E | Ordinal: 17311
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43B3 | Ordinal: 17332
        void glUniform2f(int, float, float);

    // RVA: 0x43C8 | Ordinal: 17353
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43DD | Ordinal: 17374
        void glUniform2i(int, int, int);

    // RVA: 0x43F2 | Ordinal: 17395
        void glUniform2iv(int, int, int const *);

    // RVA: 0x4405 | Ordinal: 17414
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4418 | Ordinal: 17433
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4424 | Ordinal: 17445
        void glUniform3d(int, double, double, double);

    // RVA: 0x4430 | Ordinal: 17457
        void glUniform3dv(int, int, double const *);

    // RVA: 0x4445 | Ordinal: 17478
        void glUniform3f(int, float, float, float);

    // RVA: 0x445A | Ordinal: 17499
        void glUniform3fv(int, int, float const *);

    // RVA: 0x446F | Ordinal: 17520
        void glUniform3i(int, int, int, int);

    // RVA: 0x4484 | Ordinal: 17541
        void glUniform3iv(int, int, int const *);

    // RVA: 0x4497 | Ordinal: 17560
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44AA | Ordinal: 17579
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44B6 | Ordinal: 17591
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44C2 | Ordinal: 17603
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44D7 | Ordinal: 17624
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44EC | Ordinal: 17645
        void glUniform4fv(int, int, float const *);

    // RVA: 0x4501 | Ordinal: 17666
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x4516 | Ordinal: 17687
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4529 | Ordinal: 17706
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x453C | Ordinal: 17725
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x454E | Ordinal: 17743
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x455A | Ordinal: 17755
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x456F | Ordinal: 17776
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x457B | Ordinal: 17788
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x458F | Ordinal: 17808
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x459B | Ordinal: 17820
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45AF | Ordinal: 17840
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45BB | Ordinal: 17852
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45D0 | Ordinal: 17873
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45DC | Ordinal: 17885
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45F0 | Ordinal: 17905
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x45FC | Ordinal: 17917
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x4610 | Ordinal: 17937
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x461C | Ordinal: 17949
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x4631 | Ordinal: 17970
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x463D | Ordinal: 17982
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x4651 | Ordinal: 18002
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x465D | Ordinal: 18014
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4671 | Ordinal: 18034
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x467D | Ordinal: 18046
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x4693 | Ordinal: 18068
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46AA | Ordinal: 18091
        void glUseProgram(unsigned int);

    // RVA: 0x46B5 | Ordinal: 18102
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46CA | Ordinal: 18123
        void glValidateProgram(unsigned int);

    // RVA: 0x46D5 | Ordinal: 18134
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x46EB | Ordinal: 18156
        void glVertex2d(double, double);

    // RVA: 0x46FC | Ordinal: 18173
        void glVertex2dv(double const *);

    // RVA: 0x470D | Ordinal: 18190
        void glVertex2f(float, float);

    // RVA: 0x471E | Ordinal: 18207
        void glVertex2fv(float const *);

    // RVA: 0x472F | Ordinal: 18224
        void glVertex2i(int, int);

    // RVA: 0x4740 | Ordinal: 18241
        void glVertex2iv(int const *);

    // RVA: 0x4751 | Ordinal: 18258
        void glVertex2s(short, short);

    // RVA: 0x4762 | Ordinal: 18275
        void glVertex2sv(short const *);

    // RVA: 0x4773 | Ordinal: 18292
        void glVertex3d(double, double, double);

    // RVA: 0x4784 | Ordinal: 18309
        void glVertex3dv(double const *);

    // RVA: 0x4795 | Ordinal: 18326
        void glVertex3f(float, float, float);

    // RVA: 0x47A6 | Ordinal: 18343
        void glVertex3fv(float const *);

    // RVA: 0x47B7 | Ordinal: 18360
        void glVertex3i(int, int, int);

    // RVA: 0x47C8 | Ordinal: 18377
        void glVertex3iv(int const *);

    // RVA: 0x47D9 | Ordinal: 18394
        void glVertex3s(short, short, short);

    // RVA: 0x47EA | Ordinal: 18411
        void glVertex3sv(short const *);

    // RVA: 0x47FB | Ordinal: 18428
        void glVertex4d(double, double, double, double);

    // RVA: 0x480C | Ordinal: 18445
        void glVertex4dv(double const *);

    // RVA: 0x481D | Ordinal: 18462
        void glVertex4f(float, float, float, float);

    // RVA: 0x482E | Ordinal: 18479
        void glVertex4fv(float const *);

    // RVA: 0x483F | Ordinal: 18496
        void glVertex4i(int, int, int, int);

    // RVA: 0x4850 | Ordinal: 18513
        void glVertex4iv(int const *);

    // RVA: 0x4861 | Ordinal: 18530
        void glVertex4s(short, short, short, short);

    // RVA: 0x4872 | Ordinal: 18547
        void glVertex4sv(short const *);

    // RVA: 0x488D | Ordinal: 18574
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x489A | Ordinal: 18587
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48A8 | Ordinal: 18601
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48B6 | Ordinal: 18615
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48C3 | Ordinal: 18628
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48D0 | Ordinal: 18641
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48DD | Ordinal: 18654
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48EA | Ordinal: 18667
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48F8 | Ordinal: 18681
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x4906 | Ordinal: 18695
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4913 | Ordinal: 18708
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x4920 | Ordinal: 18721
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x492D | Ordinal: 18734
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x493A | Ordinal: 18747
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x4948 | Ordinal: 18761
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x4956 | Ordinal: 18775
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x4963 | Ordinal: 18788
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x4970 | Ordinal: 18801
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x497D | Ordinal: 18814
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x498A | Ordinal: 18827
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x4997 | Ordinal: 18840
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49A4 | Ordinal: 18853
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49B1 | Ordinal: 18866
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49BE | Ordinal: 18879
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49CB | Ordinal: 18892
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49D8 | Ordinal: 18905
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49E5 | Ordinal: 18918
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49F2 | Ordinal: 18931
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x4A00 | Ordinal: 18945
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A0E | Ordinal: 18959
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A1B | Ordinal: 18972
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A28 | Ordinal: 18985
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A35 | Ordinal: 18998
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A42 | Ordinal: 19011
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A4F | Ordinal: 19024
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A5C | Ordinal: 19037
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A6F | Ordinal: 19056
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A84 | Ordinal: 19077
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A8F | Ordinal: 19088
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4A9A | Ordinal: 19099
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AA5 | Ordinal: 19110
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AB0 | Ordinal: 19121
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4ABB | Ordinal: 19132
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4AC6 | Ordinal: 19143
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AD1 | Ordinal: 19154
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4ADC | Ordinal: 19165
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AE7 | Ordinal: 19176
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AF2 | Ordinal: 19187
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AFD | Ordinal: 19198
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B08 | Ordinal: 19209
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B14 | Ordinal: 19221
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B20 | Ordinal: 19233
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B2B | Ordinal: 19244
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B36 | Ordinal: 19255
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B42 | Ordinal: 19267
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B4E | Ordinal: 19279
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B59 | Ordinal: 19290
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B70 | Ordinal: 19313
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4B7A | Ordinal: 19323
        void glVertexAttribL1d(unsigned int, double);

    // RVA: 0x4B84 | Ordinal: 19333
        void glVertexAttribL1dv(unsigned int, double const *);

    // RVA: 0x4B8E | Ordinal: 19343
        void glVertexAttribL2d(unsigned int, double, double);

    // RVA: 0x4B98 | Ordinal: 19353
        void glVertexAttribL2dv(unsigned int, double const *);

    // RVA: 0x4BA2 | Ordinal: 19363
        void glVertexAttribL3d(unsigned int, double, double, double);

    // RVA: 0x4BAC | Ordinal: 19373
        void glVertexAttribL3dv(unsigned int, double const *);

    // RVA: 0x4BB6 | Ordinal: 19383
        void glVertexAttribL4d(unsigned int, double, double, double, double);

    // RVA: 0x4BC0 | Ordinal: 19393
        void glVertexAttribL4dv(unsigned int, double const *);

    // RVA: 0x4BD0 | Ordinal: 19409
        void glVertexAttribLPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BDE | Ordinal: 19423
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BEC | Ordinal: 19437
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4BFA | Ordinal: 19451
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C08 | Ordinal: 19465
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C16 | Ordinal: 19479
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C24 | Ordinal: 19493
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C32 | Ordinal: 19507
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C40 | Ordinal: 19521
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C55 | Ordinal: 19542
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C6A | Ordinal: 19563
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C76 | Ordinal: 19575
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C82 | Ordinal: 19587
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C8E | Ordinal: 19599
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C9A | Ordinal: 19611
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CA6 | Ordinal: 19623
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CB9 | Ordinal: 19642
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CCF | Ordinal: 19664
        void glViewport(int, int, int, int);

    // RVA: 0x4CD9 | Ordinal: 19674
        void glViewportArrayv(unsigned int, int, float const *);

    // RVA: 0x4CE3 | Ordinal: 19684
        void glViewportIndexedf(unsigned int, float, float, float, float);

    // RVA: 0x4CED | Ordinal: 19694
        void glViewportIndexedfv(unsigned int, float const *);

    // RVA: 0x4CFE | Ordinal: 19711
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4D10 | Ordinal: 19729
        void glWindowPos2d(double, double);

    // RVA: 0x4D1D | Ordinal: 19742
        void glWindowPos2dv(double const *);

    // RVA: 0x4D2A | Ordinal: 19755
        void glWindowPos2f(float, float);

    // RVA: 0x4D37 | Ordinal: 19768
        void glWindowPos2fv(float const *);

    // RVA: 0x4D44 | Ordinal: 19781
        void glWindowPos2i(int, int);

    // RVA: 0x4D51 | Ordinal: 19794
        void glWindowPos2iv(int const *);

    // RVA: 0x4D5E | Ordinal: 19807
        void glWindowPos2s(short, short);

    // RVA: 0x4D6B | Ordinal: 19820
        void glWindowPos2sv(short const *);

    // RVA: 0x4D78 | Ordinal: 19833
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D85 | Ordinal: 19846
        void glWindowPos3dv(double const *);

    // RVA: 0x4D92 | Ordinal: 19859
        void glWindowPos3f(float, float, float);

    // RVA: 0x4D9F | Ordinal: 19872
        void glWindowPos3fv(float const *);

    // RVA: 0x4DAC | Ordinal: 19885
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DB9 | Ordinal: 19898
        void glWindowPos3iv(int const *);

    // RVA: 0x4DC6 | Ordinal: 19911
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DD3 | Ordinal: 19924
        void glWindowPos3sv(short const *);

    // RVA: 0x4F2A | Ordinal: 20267
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FEC | Ordinal: 20461
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6110 | Ordinal: 24849
        void versionProfile(void);

    // RVA: 0x48D | Ordinal: 1166
        void _QOpenGLFunctions_4_1_Compatibility(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_1_COMPATIBILITY_HPP
