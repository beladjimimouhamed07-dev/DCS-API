#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_0_Compatibility
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_0_Compatibility
{
public:

    // RVA: 0x1BD | Ordinal: 446
        void QOpenGLFunctions_4_0_Compatibility(void);

    // RVA: 0x11C3 | Ordinal: 4548
        void glAccum(unsigned int, float);

    // RVA: 0x11E0 | Ordinal: 4577
        void glActiveTexture(unsigned int);

    // RVA: 0x11F7 | Ordinal: 4600
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x1207 | Ordinal: 4616
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x1217 | Ordinal: 4632
        void glArrayElement(int);

    // RVA: 0x1226 | Ordinal: 4647
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x123E | Ordinal: 4671
        void glBegin(unsigned int);

    // RVA: 0x124A | Ordinal: 4683
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x1260 | Ordinal: 4705
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x126C | Ordinal: 4717
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x127F | Ordinal: 4736
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x1294 | Ordinal: 4757
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12AA | Ordinal: 4779
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12BD | Ordinal: 4798
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12D0 | Ordinal: 4817
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12EA | Ordinal: 4843
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12F8 | Ordinal: 4857
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x130B | Ordinal: 4876
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1336 | Ordinal: 4919
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x1345 | Ordinal: 4934
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1363 | Ordinal: 4964
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1376 | Ordinal: 4983
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1389 | Ordinal: 5002
        void glBindVertexArray(unsigned int);

    // RVA: 0x13AB | Ordinal: 5036
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13BF | Ordinal: 5056
        void glBlendColor(float, float, float, float);

    // RVA: 0x13D8 | Ordinal: 5081
        void glBlendEquation(unsigned int);

    // RVA: 0x13ED | Ordinal: 5102
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x13FA | Ordinal: 5115
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1407 | Ordinal: 5128
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x1422 | Ordinal: 5155
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1439 | Ordinal: 5178
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1446 | Ordinal: 5191
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1453 | Ordinal: 5204
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1466 | Ordinal: 5223
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x147E | Ordinal: 5247
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x1498 | Ordinal: 5273
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14AF | Ordinal: 5296
        void glCallList(unsigned int);

    // RVA: 0x14C0 | Ordinal: 5313
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14CD | Ordinal: 5326
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14E1 | Ordinal: 5346
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x14FC | Ordinal: 5373
        void glClear(unsigned int);

    // RVA: 0x1513 | Ordinal: 5396
        void glClearAccum(float, float, float, float);

    // RVA: 0x152C | Ordinal: 5421
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x153F | Ordinal: 5440
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x1552 | Ordinal: 5459
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1565 | Ordinal: 5478
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x1580 | Ordinal: 5505
        void glClearColor(float, float, float, float);

    // RVA: 0x159A | Ordinal: 5531
        void glClearDepth(double);

    // RVA: 0x15BC | Ordinal: 5565
        void glClearIndex(float);

    // RVA: 0x15DD | Ordinal: 5598
        void glClearStencil(int);

    // RVA: 0x15F9 | Ordinal: 5626
        void glClientActiveTexture(unsigned int);

    // RVA: 0x1604 | Ordinal: 5637
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x161D | Ordinal: 5662
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x162E | Ordinal: 5679
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x163F | Ordinal: 5696
        void glColor3bv(signed char const *);

    // RVA: 0x1650 | Ordinal: 5713
        void glColor3d(double, double, double);

    // RVA: 0x1661 | Ordinal: 5730
        void glColor3dv(double const *);

    // RVA: 0x1672 | Ordinal: 5747
        void glColor3f(float, float, float);

    // RVA: 0x1683 | Ordinal: 5764
        void glColor3fv(float const *);

    // RVA: 0x1694 | Ordinal: 5781
        void glColor3i(int, int, int);

    // RVA: 0x16A5 | Ordinal: 5798
        void glColor3iv(int const *);

    // RVA: 0x16B6 | Ordinal: 5815
        void glColor3s(short, short, short);

    // RVA: 0x16C7 | Ordinal: 5832
        void glColor3sv(short const *);

    // RVA: 0x16D8 | Ordinal: 5849
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16E9 | Ordinal: 5866
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16FA | Ordinal: 5883
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x170B | Ordinal: 5900
        void glColor3uiv(unsigned int const *);

    // RVA: 0x171C | Ordinal: 5917
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x172D | Ordinal: 5934
        void glColor3usv(unsigned short const *);

    // RVA: 0x173E | Ordinal: 5951
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x174F | Ordinal: 5968
        void glColor4bv(signed char const *);

    // RVA: 0x1760 | Ordinal: 5985
        void glColor4d(double, double, double, double);

    // RVA: 0x1771 | Ordinal: 6002
        void glColor4dv(double const *);

    // RVA: 0x1782 | Ordinal: 6019
        void glColor4f(float, float, float, float);

    // RVA: 0x1793 | Ordinal: 6036
        void glColor4fv(float const *);

    // RVA: 0x17A4 | Ordinal: 6053
        void glColor4i(int, int, int, int);

    // RVA: 0x17B5 | Ordinal: 6070
        void glColor4iv(int const *);

    // RVA: 0x17C6 | Ordinal: 6087
        void glColor4s(short, short, short, short);

    // RVA: 0x17D7 | Ordinal: 6104
        void glColor4sv(short const *);

    // RVA: 0x17E8 | Ordinal: 6121
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17F9 | Ordinal: 6138
        void glColor4ubv(unsigned char const *);

    // RVA: 0x180A | Ordinal: 6155
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x181B | Ordinal: 6172
        void glColor4uiv(unsigned int const *);

    // RVA: 0x182C | Ordinal: 6189
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x183D | Ordinal: 6206
        void glColor4usv(unsigned short const *);

    // RVA: 0x1852 | Ordinal: 6227
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1865 | Ordinal: 6246
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x187C | Ordinal: 6269
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x1884 | Ordinal: 6277
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x1890 | Ordinal: 6289
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x189C | Ordinal: 6301
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18A8 | Ordinal: 6313
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x18BC | Ordinal: 6333
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18CB | Ordinal: 6348
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18DA | Ordinal: 6363
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18E9 | Ordinal: 6378
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18F8 | Ordinal: 6393
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1907 | Ordinal: 6408
        void glCompileShader(unsigned int);

    // RVA: 0x191E | Ordinal: 6431
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1936 | Ordinal: 6455
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x194E | Ordinal: 6479
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1965 | Ordinal: 6502
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x197D | Ordinal: 6526
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1995 | Ordinal: 6550
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19B0 | Ordinal: 6577
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19BF | Ordinal: 6592
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19CE | Ordinal: 6607
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19DD | Ordinal: 6622
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19EC | Ordinal: 6637
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19FB | Ordinal: 6652
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A07 | Ordinal: 6664
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A1C | Ordinal: 6685
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A2B | Ordinal: 6700
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A3A | Ordinal: 6715
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A49 | Ordinal: 6730
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A63 | Ordinal: 6756
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A76 | Ordinal: 6775
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A90 | Ordinal: 6801
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AA9 | Ordinal: 6826
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AC3 | Ordinal: 6852
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1ADC | Ordinal: 6877
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AFB | Ordinal: 6908
        void glCreateProgram(void);

    // RVA: 0x1B18 | Ordinal: 6937
        void glCreateShader(unsigned int);

    // RVA: 0x1B44 | Ordinal: 6981
        void glCullFace(unsigned int);

    // RVA: 0x1B69 | Ordinal: 7018
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B7C | Ordinal: 7037
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B93 | Ordinal: 7060
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1BA2 | Ordinal: 7075
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BC3 | Ordinal: 7108
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BD6 | Ordinal: 7127
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BE5 | Ordinal: 7142
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1BFA | Ordinal: 7163
        void glDeleteShader(unsigned int);

    // RVA: 0x1C0B | Ordinal: 7180
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C25 | Ordinal: 7206
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C32 | Ordinal: 7219
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C45 | Ordinal: 7238
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C60 | Ordinal: 7265
        void glDepthFunc(unsigned int);

    // RVA: 0x1C7B | Ordinal: 7292
        void glDepthMask(unsigned char);

    // RVA: 0x1C95 | Ordinal: 7318
        void glDepthRange(double, double);

    // RVA: 0x1CC9 | Ordinal: 7370
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CE4 | Ordinal: 7397
        void glDisable(unsigned int);

    // RVA: 0x1CFA | Ordinal: 7419
        void glDisableClientState(unsigned int);

    // RVA: 0x1D0B | Ordinal: 7436
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D1E | Ordinal: 7455
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D47 | Ordinal: 7496
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D54 | Ordinal: 7509
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D66 | Ordinal: 7527
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D88 | Ordinal: 7561
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D9D | Ordinal: 7582
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DB7 | Ordinal: 7608
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DC8 | Ordinal: 7625
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DD5 | Ordinal: 7638
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DE7 | Ordinal: 7656
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E00 | Ordinal: 7681
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E1F | Ordinal: 7712
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E32 | Ordinal: 7731
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E43 | Ordinal: 7748
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E4F | Ordinal: 7760
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E63 | Ordinal: 7780
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1E82 | Ordinal: 7811
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E92 | Ordinal: 7827
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1EA3 | Ordinal: 7844
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EB8 | Ordinal: 7865
        void glEnable(unsigned int);

    // RVA: 0x1ECE | Ordinal: 7887
        void glEnableClientState(unsigned int);

    // RVA: 0x1EDF | Ordinal: 7904
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EF2 | Ordinal: 7923
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F09 | Ordinal: 7946
        void glEnd(void);

    // RVA: 0x1F15 | Ordinal: 7958
        void glEndConditionalRender(void);

    // RVA: 0x1F2C | Ordinal: 7981
        void glEndList(void);

    // RVA: 0x1F3C | Ordinal: 7997
        void glEndQuery(unsigned int);

    // RVA: 0x1F48 | Ordinal: 8009
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F5B | Ordinal: 8028
        void glEndTransformFeedback(void);

    // RVA: 0x1F72 | Ordinal: 8051
        void glEvalCoord1d(double);

    // RVA: 0x1F83 | Ordinal: 8068
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F94 | Ordinal: 8085
        void glEvalCoord1f(float);

    // RVA: 0x1FA5 | Ordinal: 8102
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FB6 | Ordinal: 8119
        void glEvalCoord2d(double, double);

    // RVA: 0x1FC7 | Ordinal: 8136
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FD8 | Ordinal: 8153
        void glEvalCoord2f(float, float);

    // RVA: 0x1FE9 | Ordinal: 8170
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FFA | Ordinal: 8187
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x200B | Ordinal: 8204
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x201C | Ordinal: 8221
        void glEvalPoint1(int);

    // RVA: 0x202D | Ordinal: 8238
        void glEvalPoint2(int, int);

    // RVA: 0x203E | Ordinal: 8255
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x2049 | Ordinal: 8266
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x2064 | Ordinal: 8293
        void glFinish(void);

    // RVA: 0x207F | Ordinal: 8320
        void glFlush(void);

    // RVA: 0x2092 | Ordinal: 8339
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x20A7 | Ordinal: 8360
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20B4 | Ordinal: 8373
        void glFogCoordd(double);

    // RVA: 0x20C1 | Ordinal: 8386
        void glFogCoorddv(double const *);

    // RVA: 0x20CE | Ordinal: 8399
        void glFogCoordf(float);

    // RVA: 0x20DB | Ordinal: 8412
        void glFogCoordfv(float const *);

    // RVA: 0x20EC | Ordinal: 8429
        void glFogf(unsigned int, float);

    // RVA: 0x20FD | Ordinal: 8446
        void glFogfv(unsigned int, float const *);

    // RVA: 0x210E | Ordinal: 8463
        void glFogi(unsigned int, int);

    // RVA: 0x211F | Ordinal: 8480
        void glFogiv(unsigned int, int const *);

    // RVA: 0x2134 | Ordinal: 8501
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x217C | Ordinal: 8573
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2146 | Ordinal: 8519
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2159 | Ordinal: 8538
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x216B | Ordinal: 8556
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x218F | Ordinal: 8592
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21AA | Ordinal: 8619
        void glFrontFace(unsigned int);

    // RVA: 0x21C1 | Ordinal: 8642
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21D1 | Ordinal: 8658
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21E4 | Ordinal: 8677
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x21FB | Ordinal: 8700
        void glGenLists(int);

    // RVA: 0x2216 | Ordinal: 8727
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2229 | Ordinal: 8746
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x2238 | Ordinal: 8761
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x2252 | Ordinal: 8787
        void glGenTextures(int, unsigned int *);

    // RVA: 0x225F | Ordinal: 8800
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x2272 | Ordinal: 8819
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2285 | Ordinal: 8838
        void glGenerateMipmap(unsigned int);

    // RVA: 0x22A4 | Ordinal: 8869
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22B0 | Ordinal: 8881
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22BC | Ordinal: 8893
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22C8 | Ordinal: 8905
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22DD | Ordinal: 8926
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22EF | Ordinal: 8944
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2301 | Ordinal: 8962
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2312 | Ordinal: 8979
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2324 | Ordinal: 8997
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2339 | Ordinal: 9018
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x234E | Ordinal: 9039
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2361 | Ordinal: 9058
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x237C | Ordinal: 9085
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x238D | Ordinal: 9102
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23A3 | Ordinal: 9124
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23B9 | Ordinal: 9146
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23CF | Ordinal: 9168
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23E6 | Ordinal: 9191
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23F5 | Ordinal: 9206
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2404 | Ordinal: 9221
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2413 | Ordinal: 9236
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2424 | Ordinal: 9253
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x243D | Ordinal: 9278
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x244C | Ordinal: 9293
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x245B | Ordinal: 9308
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x247E | Ordinal: 9343
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x2499 | Ordinal: 9370
        void glGetError(void);

    // RVA: 0x24BE | Ordinal: 9407
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24CC | Ordinal: 9421
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24DF | Ordinal: 9440
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24F2 | Ordinal: 9459
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2511 | Ordinal: 9490
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2520 | Ordinal: 9505
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x252F | Ordinal: 9520
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x253A | Ordinal: 9531
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x254B | Ordinal: 9548
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x255E | Ordinal: 9567
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2579 | Ordinal: 9594
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x259F | Ordinal: 9632
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25B0 | Ordinal: 9649
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25C1 | Ordinal: 9666
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25D2 | Ordinal: 9683
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25E3 | Ordinal: 9700
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25F4 | Ordinal: 9717
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x2605 | Ordinal: 9734
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2614 | Ordinal: 9749
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2623 | Ordinal: 9764
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2632 | Ordinal: 9779
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x263D | Ordinal: 9790
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x266C | Ordinal: 9837
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x267D | Ordinal: 9854
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x268E | Ordinal: 9871
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x26A2 | Ordinal: 9891
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26B7 | Ordinal: 9912
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26D1 | Ordinal: 9938
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x271C | Ordinal: 10013
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2731 | Ordinal: 10034
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x273D | Ordinal: 10046
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x274B | Ordinal: 10060
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2760 | Ordinal: 10081
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x276E | Ordinal: 10095
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x2784 | Ordinal: 10117
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x279A | Ordinal: 10139
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27AD | Ordinal: 10158
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27BC | Ordinal: 10173
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27CB | Ordinal: 10188
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27DA | Ordinal: 10203
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27E9 | Ordinal: 10218
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27FE | Ordinal: 10239
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x280D | Ordinal: 10254
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x282D | Ordinal: 10286
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2842 | Ordinal: 10307
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x285D | Ordinal: 10334
        void glGetString(unsigned int);

    // RVA: 0x2870 | Ordinal: 10353
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x287C | Ordinal: 10365
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2888 | Ordinal: 10377
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x2899 | Ordinal: 10394
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x28B0 | Ordinal: 10417
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28C1 | Ordinal: 10434
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28D2 | Ordinal: 10451
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28E3 | Ordinal: 10468
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28F4 | Ordinal: 10485
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x2908 | Ordinal: 10505
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2923 | Ordinal: 10532
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x293E | Ordinal: 10559
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2951 | Ordinal: 10578
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2964 | Ordinal: 10597
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x297F | Ordinal: 10624
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x299A | Ordinal: 10651
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29BD | Ordinal: 10686
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29D5 | Ordinal: 10710
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29E7 | Ordinal: 10728
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x29FC | Ordinal: 10749
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A08 | Ordinal: 10761
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A14 | Ordinal: 10773
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A29 | Ordinal: 10794
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A3E | Ordinal: 10815
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A51 | Ordinal: 10834
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A6A | Ordinal: 10859
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A7D | Ordinal: 10878
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A9C | Ordinal: 10909
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AB0 | Ordinal: 10929
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AC5 | Ordinal: 10950
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2ADA | Ordinal: 10971
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B10 | Ordinal: 11025
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B25 | Ordinal: 11046
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B36 | Ordinal: 11063
        void glIndexMask(unsigned int);

    // RVA: 0x2B46 | Ordinal: 11079
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B57 | Ordinal: 11096
        void glIndexd(double);

    // RVA: 0x2B68 | Ordinal: 11113
        void glIndexdv(double const *);

    // RVA: 0x2B79 | Ordinal: 11130
        void glIndexf(float);

    // RVA: 0x2B8A | Ordinal: 11147
        void glIndexfv(float const *);

    // RVA: 0x2B9B | Ordinal: 11164
        void glIndexi(int);

    // RVA: 0x2BAC | Ordinal: 11181
        void glIndexiv(int const *);

    // RVA: 0x2BBD | Ordinal: 11198
        void glIndexs(short);

    // RVA: 0x2BCE | Ordinal: 11215
        void glIndexsv(short const *);

    // RVA: 0x2BE1 | Ordinal: 11234
        void glIndexub(unsigned char);

    // RVA: 0x2BF8 | Ordinal: 11257
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C0D | Ordinal: 11278
        void glInitNames(void);

    // RVA: 0x2C1D | Ordinal: 11294
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C58 | Ordinal: 11353
        void glIsBuffer(unsigned int);

    // RVA: 0x2C73 | Ordinal: 11380
        void glIsEnabled(unsigned int);

    // RVA: 0x2C86 | Ordinal: 11399
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C99 | Ordinal: 11418
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CB0 | Ordinal: 11441
        void glIsList(unsigned int);

    // RVA: 0x2CBF | Ordinal: 11456
        void glIsProgram(unsigned int);

    // RVA: 0x2CE0 | Ordinal: 11489
        void glIsQuery(unsigned int);

    // RVA: 0x2CF3 | Ordinal: 11508
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D02 | Ordinal: 11523
        void glIsSampler(unsigned int);

    // RVA: 0x2D17 | Ordinal: 11544
        void glIsShader(unsigned int);

    // RVA: 0x2D28 | Ordinal: 11561
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D42 | Ordinal: 11587
        void glIsTexture(unsigned int);

    // RVA: 0x2D4F | Ordinal: 11600
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D62 | Ordinal: 11619
        void glIsVertexArray(unsigned int);

    // RVA: 0x2D79 | Ordinal: 11642
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D8A | Ordinal: 11659
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D9B | Ordinal: 11676
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DAC | Ordinal: 11693
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DBD | Ordinal: 11710
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DCE | Ordinal: 11727
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DDF | Ordinal: 11744
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DF0 | Ordinal: 11761
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2E01 | Ordinal: 11778
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E16 | Ordinal: 11799
        void glLineWidth(float);

    // RVA: 0x2E2B | Ordinal: 11820
        void glLinkProgram(unsigned int);

    // RVA: 0x2E42 | Ordinal: 11843
        void glListBase(unsigned int);

    // RVA: 0x2E53 | Ordinal: 11860
        void glLoadIdentity(void);

    // RVA: 0x2E64 | Ordinal: 11877
        void glLoadMatrixd(double const *);

    // RVA: 0x2E75 | Ordinal: 11894
        void glLoadMatrixf(float const *);

    // RVA: 0x2E86 | Ordinal: 11911
        void glLoadName(unsigned int);

    // RVA: 0x2E94 | Ordinal: 11925
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2EA2 | Ordinal: 11939
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EB6 | Ordinal: 11959
        void glLogicOp(unsigned int);

    // RVA: 0x2ECD | Ordinal: 11982
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2EDE | Ordinal: 11999
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EEF | Ordinal: 12016
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2F00 | Ordinal: 12033
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F10 | Ordinal: 12049
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F23 | Ordinal: 12068
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2F3A | Ordinal: 12091
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F4B | Ordinal: 12108
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F5C | Ordinal: 12125
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F6D | Ordinal: 12142
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F82 | Ordinal: 12163
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F93 | Ordinal: 12180
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2FA4 | Ordinal: 12197
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FB5 | Ordinal: 12214
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FC6 | Ordinal: 12231
        void glMatrixMode(unsigned int);

    // RVA: 0x2FD9 | Ordinal: 12250
        void glMinSampleShading(float);

    // RVA: 0x2FEE | Ordinal: 12271
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x2FFF | Ordinal: 12288
        void glMultMatrixd(double const *);

    // RVA: 0x3010 | Ordinal: 12305
        void glMultMatrixf(float const *);

    // RVA: 0x301E | Ordinal: 12319
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x302C | Ordinal: 12333
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x303C | Ordinal: 12349
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3058 | Ordinal: 12377
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3068 | Ordinal: 12393
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3082 | Ordinal: 12419
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x3090 | Ordinal: 12433
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x309E | Ordinal: 12447
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30AC | Ordinal: 12461
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30BA | Ordinal: 12475
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30C8 | Ordinal: 12489
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30D6 | Ordinal: 12503
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30E4 | Ordinal: 12517
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30F2 | Ordinal: 12531
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x3100 | Ordinal: 12545
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x310E | Ordinal: 12559
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x311C | Ordinal: 12573
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x312A | Ordinal: 12587
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x3138 | Ordinal: 12601
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x3146 | Ordinal: 12615
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x3154 | Ordinal: 12629
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x3162 | Ordinal: 12643
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x3170 | Ordinal: 12657
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x317E | Ordinal: 12671
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x318C | Ordinal: 12685
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x319A | Ordinal: 12699
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31A8 | Ordinal: 12713
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31B6 | Ordinal: 12727
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31C4 | Ordinal: 12741
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31D2 | Ordinal: 12755
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31E0 | Ordinal: 12769
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31EE | Ordinal: 12783
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31FC | Ordinal: 12797
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x320A | Ordinal: 12811
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x3218 | Ordinal: 12825
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x3226 | Ordinal: 12839
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x3234 | Ordinal: 12853
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x323C | Ordinal: 12861
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3248 | Ordinal: 12873
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3254 | Ordinal: 12885
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3260 | Ordinal: 12897
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x326C | Ordinal: 12909
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3278 | Ordinal: 12921
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3284 | Ordinal: 12933
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3290 | Ordinal: 12945
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x32BD | Ordinal: 12990
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32CE | Ordinal: 13007
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32DF | Ordinal: 13024
        void glNormal3bv(signed char const *);

    // RVA: 0x32F0 | Ordinal: 13041
        void glNormal3d(double, double, double);

    // RVA: 0x3301 | Ordinal: 13058
        void glNormal3dv(double const *);

    // RVA: 0x3312 | Ordinal: 13075
        void glNormal3f(float, float, float);

    // RVA: 0x3323 | Ordinal: 13092
        void glNormal3fv(float const *);

    // RVA: 0x3334 | Ordinal: 13109
        void glNormal3i(int, int, int);

    // RVA: 0x3345 | Ordinal: 13126
        void glNormal3iv(int const *);

    // RVA: 0x3356 | Ordinal: 13143
        void glNormal3s(short, short, short);

    // RVA: 0x3367 | Ordinal: 13160
        void glNormal3sv(short const *);

    // RVA: 0x336F | Ordinal: 13168
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x337B | Ordinal: 13180
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x338F | Ordinal: 13200
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33AA | Ordinal: 13227
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33BB | Ordinal: 13244
        void glPassThrough(float);

    // RVA: 0x33C1 | Ordinal: 13250
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33CE | Ordinal: 13263
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33DB | Ordinal: 13276
        void glPauseTransformFeedback(void);

    // RVA: 0x33F2 | Ordinal: 13299
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x3403 | Ordinal: 13316
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x3414 | Ordinal: 13333
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x3428 | Ordinal: 13353
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3443 | Ordinal: 13380
        void glPixelStorei(unsigned int, int);

    // RVA: 0x345A | Ordinal: 13403
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x346B | Ordinal: 13420
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x347C | Ordinal: 13437
        void glPixelZoom(float, float);

    // RVA: 0x348C | Ordinal: 13453
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34A2 | Ordinal: 13475
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34B8 | Ordinal: 13497
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34CE | Ordinal: 13519
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34E8 | Ordinal: 13545
        void glPointSize(float);

    // RVA: 0x3502 | Ordinal: 13571
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x351C | Ordinal: 13597
        void glPolygonOffset(float, float);

    // RVA: 0x3533 | Ordinal: 13620
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x3544 | Ordinal: 13637
        void glPopAttrib(void);

    // RVA: 0x3554 | Ordinal: 13653
        void glPopClientAttrib(void);

    // RVA: 0x356A | Ordinal: 13675
        void glPopMatrix(void);

    // RVA: 0x357B | Ordinal: 13692
        void glPopName(void);

    // RVA: 0x3587 | Ordinal: 13704
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x359D | Ordinal: 13726
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37D2 | Ordinal: 14291
        void glProvokingVertex(unsigned int);

    // RVA: 0x37E9 | Ordinal: 14314
        void glPushAttrib(unsigned int);

    // RVA: 0x37F9 | Ordinal: 14330
        void glPushClientAttrib(unsigned int);

    // RVA: 0x380F | Ordinal: 14352
        void glPushMatrix(void);

    // RVA: 0x3820 | Ordinal: 14369
        void glPushName(unsigned int);

    // RVA: 0x3828 | Ordinal: 14377
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x383F | Ordinal: 14400
        void glRasterPos2d(double, double);

    // RVA: 0x3850 | Ordinal: 14417
        void glRasterPos2dv(double const *);

    // RVA: 0x3861 | Ordinal: 14434
        void glRasterPos2f(float, float);

    // RVA: 0x3872 | Ordinal: 14451
        void glRasterPos2fv(float const *);

    // RVA: 0x3883 | Ordinal: 14468
        void glRasterPos2i(int, int);

    // RVA: 0x3894 | Ordinal: 14485
        void glRasterPos2iv(int const *);

    // RVA: 0x38A5 | Ordinal: 14502
        void glRasterPos2s(short, short);

    // RVA: 0x38B6 | Ordinal: 14519
        void glRasterPos2sv(short const *);

    // RVA: 0x38C7 | Ordinal: 14536
        void glRasterPos3d(double, double, double);

    // RVA: 0x38D8 | Ordinal: 14553
        void glRasterPos3dv(double const *);

    // RVA: 0x38E9 | Ordinal: 14570
        void glRasterPos3f(float, float, float);

    // RVA: 0x38FA | Ordinal: 14587
        void glRasterPos3fv(float const *);

    // RVA: 0x390B | Ordinal: 14604
        void glRasterPos3i(int, int, int);

    // RVA: 0x391C | Ordinal: 14621
        void glRasterPos3iv(int const *);

    // RVA: 0x392D | Ordinal: 14638
        void glRasterPos3s(short, short, short);

    // RVA: 0x393E | Ordinal: 14655
        void glRasterPos3sv(short const *);

    // RVA: 0x394F | Ordinal: 14672
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x3960 | Ordinal: 14689
        void glRasterPos4dv(double const *);

    // RVA: 0x3971 | Ordinal: 14706
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x3982 | Ordinal: 14723
        void glRasterPos4fv(float const *);

    // RVA: 0x3993 | Ordinal: 14740
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x39A4 | Ordinal: 14757
        void glRasterPos4iv(int const *);

    // RVA: 0x39B5 | Ordinal: 14774
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39C6 | Ordinal: 14791
        void glRasterPos4sv(short const *);

    // RVA: 0x39DB | Ordinal: 14812
        void glReadBuffer(unsigned int);

    // RVA: 0x39F6 | Ordinal: 14839
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A10 | Ordinal: 14865
        void glRectd(double, double, double, double);

    // RVA: 0x3A21 | Ordinal: 14882
        void glRectdv(double const *, double const *);

    // RVA: 0x3A32 | Ordinal: 14899
        void glRectf(float, float, float, float);

    // RVA: 0x3A43 | Ordinal: 14916
        void glRectfv(float const *, float const *);

    // RVA: 0x3A54 | Ordinal: 14933
        void glRecti(int, int, int, int);

    // RVA: 0x3A65 | Ordinal: 14950
        void glRectiv(int const *, int const *);

    // RVA: 0x3A76 | Ordinal: 14967
        void glRects(short, short, short, short);

    // RVA: 0x3A87 | Ordinal: 14984
        void glRectsv(short const *, short const *);

    // RVA: 0x3AA3 | Ordinal: 15012
        void glRenderMode(unsigned int);

    // RVA: 0x3AB0 | Ordinal: 15025
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3AC3 | Ordinal: 15044
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AD8 | Ordinal: 15065
        void glResetHistogram(unsigned int);

    // RVA: 0x3AE7 | Ordinal: 15080
        void glResetMinmax(unsigned int);

    // RVA: 0x3AEE | Ordinal: 15087
        void glResumeTransformFeedback(void);

    // RVA: 0x3B05 | Ordinal: 15110
        void glRotated(double, double, double, double);

    // RVA: 0x3B16 | Ordinal: 15127
        void glRotatef(float, float, float, float);

    // RVA: 0x3B28 | Ordinal: 15145
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B39 | Ordinal: 15162
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B48 | Ordinal: 15177
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B57 | Ordinal: 15192
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B66 | Ordinal: 15207
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B75 | Ordinal: 15222
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B84 | Ordinal: 15237
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B93 | Ordinal: 15252
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BAA | Ordinal: 15275
        void glScaled(double, double, double);

    // RVA: 0x3BBB | Ordinal: 15292
        void glScalef(float, float, float);

    // RVA: 0x3BD0 | Ordinal: 15313
        void glScissor(int, int, int, int);

    // RVA: 0x3C01 | Ordinal: 15362
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C0E | Ordinal: 15375
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C1B | Ordinal: 15388
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C28 | Ordinal: 15401
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C35 | Ordinal: 15414
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C42 | Ordinal: 15427
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C4F | Ordinal: 15440
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C5C | Ordinal: 15453
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C69 | Ordinal: 15466
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C76 | Ordinal: 15479
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C83 | Ordinal: 15492
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C90 | Ordinal: 15505
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3C9D | Ordinal: 15518
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CAA | Ordinal: 15531
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CB7 | Ordinal: 15544
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CC4 | Ordinal: 15557
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CCC | Ordinal: 15565
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CD8 | Ordinal: 15577
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3CE9 | Ordinal: 15594
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CFA | Ordinal: 15611
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D09 | Ordinal: 15626
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D1A | Ordinal: 15643
        void glShadeModel(unsigned int);

    // RVA: 0x3D34 | Ordinal: 15669
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D55 | Ordinal: 15702
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D6A | Ordinal: 15723
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D85 | Ordinal: 15750
        void glStencilMask(unsigned int);

    // RVA: 0x3D9A | Ordinal: 15771
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DB5 | Ordinal: 15798
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DCA | Ordinal: 15819
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DDC | Ordinal: 15837
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DFA | Ordinal: 15867
        void glTexCoord1d(double);

    // RVA: 0x3E0B | Ordinal: 15884
        void glTexCoord1dv(double const *);

    // RVA: 0x3E1C | Ordinal: 15901
        void glTexCoord1f(float);

    // RVA: 0x3E2D | Ordinal: 15918
        void glTexCoord1fv(float const *);

    // RVA: 0x3E3E | Ordinal: 15935
        void glTexCoord1i(int);

    // RVA: 0x3E4F | Ordinal: 15952
        void glTexCoord1iv(int const *);

    // RVA: 0x3E60 | Ordinal: 15969
        void glTexCoord1s(short);

    // RVA: 0x3E71 | Ordinal: 15986
        void glTexCoord1sv(short const *);

    // RVA: 0x3E82 | Ordinal: 16003
        void glTexCoord2d(double, double);

    // RVA: 0x3E93 | Ordinal: 16020
        void glTexCoord2dv(double const *);

    // RVA: 0x3EA4 | Ordinal: 16037
        void glTexCoord2f(float, float);

    // RVA: 0x3EB5 | Ordinal: 16054
        void glTexCoord2fv(float const *);

    // RVA: 0x3EC6 | Ordinal: 16071
        void glTexCoord2i(int, int);

    // RVA: 0x3ED7 | Ordinal: 16088
        void glTexCoord2iv(int const *);

    // RVA: 0x3EE8 | Ordinal: 16105
        void glTexCoord2s(short, short);

    // RVA: 0x3EF9 | Ordinal: 16122
        void glTexCoord2sv(short const *);

    // RVA: 0x3F0A | Ordinal: 16139
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F1B | Ordinal: 16156
        void glTexCoord3dv(double const *);

    // RVA: 0x3F2C | Ordinal: 16173
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F3D | Ordinal: 16190
        void glTexCoord3fv(float const *);

    // RVA: 0x3F4E | Ordinal: 16207
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F5F | Ordinal: 16224
        void glTexCoord3iv(int const *);

    // RVA: 0x3F70 | Ordinal: 16241
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F81 | Ordinal: 16258
        void glTexCoord3sv(short const *);

    // RVA: 0x3F92 | Ordinal: 16275
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3FA3 | Ordinal: 16292
        void glTexCoord4dv(double const *);

    // RVA: 0x3FB4 | Ordinal: 16309
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FC5 | Ordinal: 16326
        void glTexCoord4fv(float const *);

    // RVA: 0x3FD6 | Ordinal: 16343
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FE7 | Ordinal: 16360
        void glTexCoord4iv(int const *);

    // RVA: 0x3FF8 | Ordinal: 16377
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x4009 | Ordinal: 16394
        void glTexCoord4sv(short const *);

    // RVA: 0x4011 | Ordinal: 16402
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x401D | Ordinal: 16414
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4029 | Ordinal: 16426
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x4035 | Ordinal: 16438
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4041 | Ordinal: 16450
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x404D | Ordinal: 16462
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4059 | Ordinal: 16474
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x4065 | Ordinal: 16486
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4079 | Ordinal: 16506
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x408A | Ordinal: 16523
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x409B | Ordinal: 16540
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40AC | Ordinal: 16557
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40BD | Ordinal: 16574
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40CE | Ordinal: 16591
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40DF | Ordinal: 16608
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40F0 | Ordinal: 16625
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x4101 | Ordinal: 16642
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4112 | Ordinal: 16659
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x4123 | Ordinal: 16676
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x4137 | Ordinal: 16696
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4152 | Ordinal: 16723
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4162 | Ordinal: 16739
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x417B | Ordinal: 16764
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x418B | Ordinal: 16780
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x419E | Ordinal: 16799
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41B1 | Ordinal: 16818
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41CC | Ordinal: 16845
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41E7 | Ordinal: 16872
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4202 | Ordinal: 16899
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x421D | Ordinal: 16926
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x425E | Ordinal: 16991
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4278 | Ordinal: 17017
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4291 | Ordinal: 17042
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42D0 | Ordinal: 17105
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x42E7 | Ordinal: 17128
        void glTranslated(double, double, double);

    // RVA: 0x42F8 | Ordinal: 17145
        void glTranslatef(float, float, float);

    // RVA: 0x42FE | Ordinal: 17151
        void glUniform1d(int, double);

    // RVA: 0x430A | Ordinal: 17163
        void glUniform1dv(int, int, double const *);

    // RVA: 0x431F | Ordinal: 17184
        void glUniform1f(int, float);

    // RVA: 0x4334 | Ordinal: 17205
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4349 | Ordinal: 17226
        void glUniform1i(int, int);

    // RVA: 0x435E | Ordinal: 17247
        void glUniform1iv(int, int, int const *);

    // RVA: 0x4371 | Ordinal: 17266
        void glUniform1ui(int, unsigned int);

    // RVA: 0x4384 | Ordinal: 17285
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x4390 | Ordinal: 17297
        void glUniform2d(int, double, double);

    // RVA: 0x439C | Ordinal: 17309
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43B1 | Ordinal: 17330
        void glUniform2f(int, float, float);

    // RVA: 0x43C6 | Ordinal: 17351
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43DB | Ordinal: 17372
        void glUniform2i(int, int, int);

    // RVA: 0x43F0 | Ordinal: 17393
        void glUniform2iv(int, int, int const *);

    // RVA: 0x4403 | Ordinal: 17412
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4416 | Ordinal: 17431
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4422 | Ordinal: 17443
        void glUniform3d(int, double, double, double);

    // RVA: 0x442E | Ordinal: 17455
        void glUniform3dv(int, int, double const *);

    // RVA: 0x4443 | Ordinal: 17476
        void glUniform3f(int, float, float, float);

    // RVA: 0x4458 | Ordinal: 17497
        void glUniform3fv(int, int, float const *);

    // RVA: 0x446D | Ordinal: 17518
        void glUniform3i(int, int, int, int);

    // RVA: 0x4482 | Ordinal: 17539
        void glUniform3iv(int, int, int const *);

    // RVA: 0x4495 | Ordinal: 17558
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44A8 | Ordinal: 17577
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44B4 | Ordinal: 17589
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44C0 | Ordinal: 17601
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44D5 | Ordinal: 17622
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44EA | Ordinal: 17643
        void glUniform4fv(int, int, float const *);

    // RVA: 0x44FF | Ordinal: 17664
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x4514 | Ordinal: 17685
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4527 | Ordinal: 17704
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x453A | Ordinal: 17723
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x454C | Ordinal: 17741
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4558 | Ordinal: 17753
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x456D | Ordinal: 17774
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x4579 | Ordinal: 17786
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x458D | Ordinal: 17806
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x4599 | Ordinal: 17818
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45AD | Ordinal: 17838
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45B9 | Ordinal: 17850
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45CE | Ordinal: 17871
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45DA | Ordinal: 17883
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45EE | Ordinal: 17903
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x45FA | Ordinal: 17915
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x460E | Ordinal: 17935
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x461A | Ordinal: 17947
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x462F | Ordinal: 17968
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x463B | Ordinal: 17980
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x464F | Ordinal: 18000
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x465B | Ordinal: 18012
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x466F | Ordinal: 18032
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x467B | Ordinal: 18044
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x4691 | Ordinal: 18066
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46A8 | Ordinal: 18089
        void glUseProgram(unsigned int);

    // RVA: 0x46C8 | Ordinal: 18121
        void glValidateProgram(unsigned int);

    // RVA: 0x46EA | Ordinal: 18155
        void glVertex2d(double, double);

    // RVA: 0x46FB | Ordinal: 18172
        void glVertex2dv(double const *);

    // RVA: 0x470C | Ordinal: 18189
        void glVertex2f(float, float);

    // RVA: 0x471D | Ordinal: 18206
        void glVertex2fv(float const *);

    // RVA: 0x472E | Ordinal: 18223
        void glVertex2i(int, int);

    // RVA: 0x473F | Ordinal: 18240
        void glVertex2iv(int const *);

    // RVA: 0x4750 | Ordinal: 18257
        void glVertex2s(short, short);

    // RVA: 0x4761 | Ordinal: 18274
        void glVertex2sv(short const *);

    // RVA: 0x4772 | Ordinal: 18291
        void glVertex3d(double, double, double);

    // RVA: 0x4783 | Ordinal: 18308
        void glVertex3dv(double const *);

    // RVA: 0x4794 | Ordinal: 18325
        void glVertex3f(float, float, float);

    // RVA: 0x47A5 | Ordinal: 18342
        void glVertex3fv(float const *);

    // RVA: 0x47B6 | Ordinal: 18359
        void glVertex3i(int, int, int);

    // RVA: 0x47C7 | Ordinal: 18376
        void glVertex3iv(int const *);

    // RVA: 0x47D8 | Ordinal: 18393
        void glVertex3s(short, short, short);

    // RVA: 0x47E9 | Ordinal: 18410
        void glVertex3sv(short const *);

    // RVA: 0x47FA | Ordinal: 18427
        void glVertex4d(double, double, double, double);

    // RVA: 0x480B | Ordinal: 18444
        void glVertex4dv(double const *);

    // RVA: 0x481C | Ordinal: 18461
        void glVertex4f(float, float, float, float);

    // RVA: 0x482D | Ordinal: 18478
        void glVertex4fv(float const *);

    // RVA: 0x483E | Ordinal: 18495
        void glVertex4i(int, int, int, int);

    // RVA: 0x484F | Ordinal: 18512
        void glVertex4iv(int const *);

    // RVA: 0x4860 | Ordinal: 18529
        void glVertex4s(short, short, short, short);

    // RVA: 0x4871 | Ordinal: 18546
        void glVertex4sv(short const *);

    // RVA: 0x488C | Ordinal: 18573
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x4899 | Ordinal: 18586
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48A7 | Ordinal: 18600
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48B5 | Ordinal: 18614
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48C2 | Ordinal: 18627
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48CF | Ordinal: 18640
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48DC | Ordinal: 18653
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48E9 | Ordinal: 18666
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48F7 | Ordinal: 18680
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x4905 | Ordinal: 18694
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4912 | Ordinal: 18707
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x491F | Ordinal: 18720
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x492C | Ordinal: 18733
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x4939 | Ordinal: 18746
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x4947 | Ordinal: 18760
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x4955 | Ordinal: 18774
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x4962 | Ordinal: 18787
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x496F | Ordinal: 18800
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x497C | Ordinal: 18813
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x4989 | Ordinal: 18826
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x4996 | Ordinal: 18839
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49A3 | Ordinal: 18852
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49B0 | Ordinal: 18865
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49BD | Ordinal: 18878
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49CA | Ordinal: 18891
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49D7 | Ordinal: 18904
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49E4 | Ordinal: 18917
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49F1 | Ordinal: 18930
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x49FF | Ordinal: 18944
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A0D | Ordinal: 18958
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A1A | Ordinal: 18971
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A27 | Ordinal: 18984
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A34 | Ordinal: 18997
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A41 | Ordinal: 19010
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A4E | Ordinal: 19023
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A5B | Ordinal: 19036
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A6D | Ordinal: 19054
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A83 | Ordinal: 19076
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A8E | Ordinal: 19087
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4A99 | Ordinal: 19098
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AA4 | Ordinal: 19109
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AAF | Ordinal: 19120
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4ABA | Ordinal: 19131
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4AC5 | Ordinal: 19142
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AD0 | Ordinal: 19153
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4ADB | Ordinal: 19164
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AE6 | Ordinal: 19175
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AF1 | Ordinal: 19186
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AFC | Ordinal: 19197
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B07 | Ordinal: 19208
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B13 | Ordinal: 19220
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B1F | Ordinal: 19232
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B2A | Ordinal: 19243
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B35 | Ordinal: 19254
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B41 | Ordinal: 19266
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B4D | Ordinal: 19278
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B58 | Ordinal: 19289
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B6E | Ordinal: 19311
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BDC | Ordinal: 19421
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BEA | Ordinal: 19435
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4BF8 | Ordinal: 19449
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C06 | Ordinal: 19463
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C14 | Ordinal: 19477
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C22 | Ordinal: 19491
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C30 | Ordinal: 19505
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C3E | Ordinal: 19519
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C53 | Ordinal: 19540
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C68 | Ordinal: 19561
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C74 | Ordinal: 19573
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C80 | Ordinal: 19585
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C8C | Ordinal: 19597
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C98 | Ordinal: 19609
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CA4 | Ordinal: 19621
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CB8 | Ordinal: 19641
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CCD | Ordinal: 19662
        void glViewport(int, int, int, int);

    // RVA: 0x4CFC | Ordinal: 19709
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4D0F | Ordinal: 19728
        void glWindowPos2d(double, double);

    // RVA: 0x4D1C | Ordinal: 19741
        void glWindowPos2dv(double const *);

    // RVA: 0x4D29 | Ordinal: 19754
        void glWindowPos2f(float, float);

    // RVA: 0x4D36 | Ordinal: 19767
        void glWindowPos2fv(float const *);

    // RVA: 0x4D43 | Ordinal: 19780
        void glWindowPos2i(int, int);

    // RVA: 0x4D50 | Ordinal: 19793
        void glWindowPos2iv(int const *);

    // RVA: 0x4D5D | Ordinal: 19806
        void glWindowPos2s(short, short);

    // RVA: 0x4D6A | Ordinal: 19819
        void glWindowPos2sv(short const *);

    // RVA: 0x4D77 | Ordinal: 19832
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D84 | Ordinal: 19845
        void glWindowPos3dv(double const *);

    // RVA: 0x4D91 | Ordinal: 19858
        void glWindowPos3f(float, float, float);

    // RVA: 0x4D9E | Ordinal: 19871
        void glWindowPos3fv(float const *);

    // RVA: 0x4DAB | Ordinal: 19884
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DB8 | Ordinal: 19897
        void glWindowPos3iv(int const *);

    // RVA: 0x4DC5 | Ordinal: 19910
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DD2 | Ordinal: 19923
        void glWindowPos3sv(short const *);

    // RVA: 0x4F28 | Ordinal: 20265
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FEA | Ordinal: 20459
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x610E | Ordinal: 24847
        void versionProfile(void);

    // RVA: 0x48B | Ordinal: 1164
        void _QOpenGLFunctions_4_0_Compatibility(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_0_COMPATIBILITY_HPP
