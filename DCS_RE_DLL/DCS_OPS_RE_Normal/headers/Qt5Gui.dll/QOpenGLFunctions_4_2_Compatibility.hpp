#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_2_Compatibility
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_2_Compatibility
{
public:

    // RVA: 0x1C1 | Ordinal: 450
        void QOpenGLFunctions_4_2_Compatibility(void);

    // RVA: 0x11C5 | Ordinal: 4550
        void glAccum(unsigned int, float);

    // RVA: 0x11CC | Ordinal: 4557
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x11E4 | Ordinal: 4581
        void glActiveTexture(unsigned int);

    // RVA: 0x11F9 | Ordinal: 4602
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x1209 | Ordinal: 4618
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x1219 | Ordinal: 4634
        void glArrayElement(int);

    // RVA: 0x122A | Ordinal: 4651
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1240 | Ordinal: 4673
        void glBegin(unsigned int);

    // RVA: 0x124E | Ordinal: 4687
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x1264 | Ordinal: 4709
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x1270 | Ordinal: 4721
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1283 | Ordinal: 4740
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x1298 | Ordinal: 4761
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12AE | Ordinal: 4783
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12C1 | Ordinal: 4802
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12D4 | Ordinal: 4821
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12EE | Ordinal: 4847
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12FC | Ordinal: 4861
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x130F | Ordinal: 4880
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1318 | Ordinal: 4889
        void glBindImageTexture(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int);

    // RVA: 0x1327 | Ordinal: 4904
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x133A | Ordinal: 4923
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x1349 | Ordinal: 4938
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1367 | Ordinal: 4968
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x137A | Ordinal: 4987
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x138D | Ordinal: 5006
        void glBindVertexArray(unsigned int);

    // RVA: 0x13AD | Ordinal: 5038
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13C3 | Ordinal: 5060
        void glBlendColor(float, float, float, float);

    // RVA: 0x13DC | Ordinal: 5085
        void glBlendEquation(unsigned int);

    // RVA: 0x13F1 | Ordinal: 5106
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x13FE | Ordinal: 5119
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x140B | Ordinal: 5132
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x1426 | Ordinal: 5159
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x143D | Ordinal: 5182
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x144A | Ordinal: 5195
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1457 | Ordinal: 5208
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x146A | Ordinal: 5227
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1482 | Ordinal: 5251
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x149C | Ordinal: 5277
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14B1 | Ordinal: 5298
        void glCallList(unsigned int);

    // RVA: 0x14C2 | Ordinal: 5315
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14D1 | Ordinal: 5330
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14E5 | Ordinal: 5350
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x1500 | Ordinal: 5377
        void glClear(unsigned int);

    // RVA: 0x1515 | Ordinal: 5398
        void glClearAccum(float, float, float, float);

    // RVA: 0x1530 | Ordinal: 5425
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1543 | Ordinal: 5444
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x1556 | Ordinal: 5463
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1569 | Ordinal: 5482
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x1584 | Ordinal: 5509
        void glClearColor(float, float, float, float);

    // RVA: 0x159E | Ordinal: 5535
        void glClearDepth(double);

    // RVA: 0x15A9 | Ordinal: 5546
        void glClearDepthf(float);

    // RVA: 0x15BE | Ordinal: 5567
        void glClearIndex(float);

    // RVA: 0x15E1 | Ordinal: 5602
        void glClearStencil(int);

    // RVA: 0x15FB | Ordinal: 5628
        void glClientActiveTexture(unsigned int);

    // RVA: 0x1608 | Ordinal: 5641
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x161F | Ordinal: 5664
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x1630 | Ordinal: 5681
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x1641 | Ordinal: 5698
        void glColor3bv(signed char const *);

    // RVA: 0x1652 | Ordinal: 5715
        void glColor3d(double, double, double);

    // RVA: 0x1663 | Ordinal: 5732
        void glColor3dv(double const *);

    // RVA: 0x1674 | Ordinal: 5749
        void glColor3f(float, float, float);

    // RVA: 0x1685 | Ordinal: 5766
        void glColor3fv(float const *);

    // RVA: 0x1696 | Ordinal: 5783
        void glColor3i(int, int, int);

    // RVA: 0x16A7 | Ordinal: 5800
        void glColor3iv(int const *);

    // RVA: 0x16B8 | Ordinal: 5817
        void glColor3s(short, short, short);

    // RVA: 0x16C9 | Ordinal: 5834
        void glColor3sv(short const *);

    // RVA: 0x16DA | Ordinal: 5851
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16EB | Ordinal: 5868
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16FC | Ordinal: 5885
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x170D | Ordinal: 5902
        void glColor3uiv(unsigned int const *);

    // RVA: 0x171E | Ordinal: 5919
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x172F | Ordinal: 5936
        void glColor3usv(unsigned short const *);

    // RVA: 0x1740 | Ordinal: 5953
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x1751 | Ordinal: 5970
        void glColor4bv(signed char const *);

    // RVA: 0x1762 | Ordinal: 5987
        void glColor4d(double, double, double, double);

    // RVA: 0x1773 | Ordinal: 6004
        void glColor4dv(double const *);

    // RVA: 0x1784 | Ordinal: 6021
        void glColor4f(float, float, float, float);

    // RVA: 0x1795 | Ordinal: 6038
        void glColor4fv(float const *);

    // RVA: 0x17A6 | Ordinal: 6055
        void glColor4i(int, int, int, int);

    // RVA: 0x17B7 | Ordinal: 6072
        void glColor4iv(int const *);

    // RVA: 0x17C8 | Ordinal: 6089
        void glColor4s(short, short, short, short);

    // RVA: 0x17D9 | Ordinal: 6106
        void glColor4sv(short const *);

    // RVA: 0x17EA | Ordinal: 6123
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17FB | Ordinal: 6140
        void glColor4ubv(unsigned char const *);

    // RVA: 0x180C | Ordinal: 6157
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x181D | Ordinal: 6174
        void glColor4uiv(unsigned int const *);

    // RVA: 0x182E | Ordinal: 6191
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x183F | Ordinal: 6208
        void glColor4usv(unsigned short const *);

    // RVA: 0x1856 | Ordinal: 6231
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1869 | Ordinal: 6250
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x187E | Ordinal: 6271
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x1888 | Ordinal: 6281
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x1894 | Ordinal: 6293
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x18A0 | Ordinal: 6305
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18AC | Ordinal: 6317
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x18BE | Ordinal: 6335
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18CD | Ordinal: 6350
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18DC | Ordinal: 6365
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18EB | Ordinal: 6380
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18FA | Ordinal: 6395
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x190B | Ordinal: 6412
        void glCompileShader(unsigned int);

    // RVA: 0x1922 | Ordinal: 6435
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x193A | Ordinal: 6459
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1952 | Ordinal: 6483
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1969 | Ordinal: 6506
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1981 | Ordinal: 6530
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1999 | Ordinal: 6554
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19B2 | Ordinal: 6579
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19C1 | Ordinal: 6594
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19D0 | Ordinal: 6609
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19DF | Ordinal: 6624
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19EE | Ordinal: 6639
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19FD | Ordinal: 6654
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A0B | Ordinal: 6668
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A1E | Ordinal: 6687
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A2D | Ordinal: 6702
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A3C | Ordinal: 6717
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A4B | Ordinal: 6732
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A65 | Ordinal: 6758
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A7A | Ordinal: 6779
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A94 | Ordinal: 6805
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AAD | Ordinal: 6830
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AC7 | Ordinal: 6856
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AE0 | Ordinal: 6881
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AFF | Ordinal: 6912
        void glCreateProgram(void);

    // RVA: 0x1B1C | Ordinal: 6941
        void glCreateShader(unsigned int);

    // RVA: 0x1B27 | Ordinal: 6952
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B48 | Ordinal: 6985
        void glCullFace(unsigned int);

    // RVA: 0x1B6D | Ordinal: 7022
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B80 | Ordinal: 7041
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B95 | Ordinal: 7062
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1BA6 | Ordinal: 7079
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BB1 | Ordinal: 7090
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BC7 | Ordinal: 7112
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BDA | Ordinal: 7131
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BE9 | Ordinal: 7146
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1BFE | Ordinal: 7167
        void glDeleteShader(unsigned int);

    // RVA: 0x1C0F | Ordinal: 7184
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C29 | Ordinal: 7210
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C36 | Ordinal: 7223
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C49 | Ordinal: 7242
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C64 | Ordinal: 7269
        void glDepthFunc(unsigned int);

    // RVA: 0x1C7F | Ordinal: 7296
        void glDepthMask(unsigned char);

    // RVA: 0x1C99 | Ordinal: 7322
        void glDepthRange(double, double);

    // RVA: 0x1CA3 | Ordinal: 7332
        void glDepthRangeArrayv(unsigned int, int, double const *);

    // RVA: 0x1CAD | Ordinal: 7342
        void glDepthRangeIndexed(unsigned int, double, double);

    // RVA: 0x1CB8 | Ordinal: 7353
        void glDepthRangef(float, float);

    // RVA: 0x1CCD | Ordinal: 7374
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CE8 | Ordinal: 7401
        void glDisable(unsigned int);

    // RVA: 0x1CFC | Ordinal: 7421
        void glDisableClientState(unsigned int);

    // RVA: 0x1D0F | Ordinal: 7440
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D22 | Ordinal: 7459
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D4B | Ordinal: 7500
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D58 | Ordinal: 7513
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D6A | Ordinal: 7531
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D72 | Ordinal: 7539
        void glDrawArraysInstancedBaseInstance(unsigned int, int, int, int, unsigned int);

    // RVA: 0x1D8C | Ordinal: 7565
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DA1 | Ordinal: 7586
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DBB | Ordinal: 7612
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DCC | Ordinal: 7629
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DD9 | Ordinal: 7642
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DEB | Ordinal: 7660
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DF3 | Ordinal: 7668
        void glDrawElementsInstancedBaseInstance(unsigned int, int, unsigned int, void const *, int, unsigned int);

    // RVA: 0x1E04 | Ordinal: 7685
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E0C | Ordinal: 7693
        void glDrawElementsInstancedBaseVertexBaseInstance(unsigned int, int, unsigned int, void const *, int, int, unsigned int);

    // RVA: 0x1E21 | Ordinal: 7714
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E36 | Ordinal: 7735
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E47 | Ordinal: 7752
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E53 | Ordinal: 7764
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E5B | Ordinal: 7772
        void glDrawTransformFeedbackInstanced(unsigned int, unsigned int, int);

    // RVA: 0x1E67 | Ordinal: 7784
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1E6F | Ordinal: 7792
        void glDrawTransformFeedbackStreamInstanced(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x1E84 | Ordinal: 7813
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E94 | Ordinal: 7829
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1EA5 | Ordinal: 7846
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EBC | Ordinal: 7869
        void glEnable(unsigned int);

    // RVA: 0x1ED0 | Ordinal: 7889
        void glEnableClientState(unsigned int);

    // RVA: 0x1EE3 | Ordinal: 7908
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EF6 | Ordinal: 7927
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F0B | Ordinal: 7948
        void glEnd(void);

    // RVA: 0x1F19 | Ordinal: 7962
        void glEndConditionalRender(void);

    // RVA: 0x1F2E | Ordinal: 7983
        void glEndList(void);

    // RVA: 0x1F40 | Ordinal: 8001
        void glEndQuery(unsigned int);

    // RVA: 0x1F4C | Ordinal: 8013
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F5F | Ordinal: 8032
        void glEndTransformFeedback(void);

    // RVA: 0x1F74 | Ordinal: 8053
        void glEvalCoord1d(double);

    // RVA: 0x1F85 | Ordinal: 8070
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F96 | Ordinal: 8087
        void glEvalCoord1f(float);

    // RVA: 0x1FA7 | Ordinal: 8104
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FB8 | Ordinal: 8121
        void glEvalCoord2d(double, double);

    // RVA: 0x1FC9 | Ordinal: 8138
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FDA | Ordinal: 8155
        void glEvalCoord2f(float, float);

    // RVA: 0x1FEB | Ordinal: 8172
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FFC | Ordinal: 8189
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x200D | Ordinal: 8206
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x201E | Ordinal: 8223
        void glEvalPoint1(int);

    // RVA: 0x202F | Ordinal: 8240
        void glEvalPoint2(int, int);

    // RVA: 0x2040 | Ordinal: 8257
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x204D | Ordinal: 8270
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x2068 | Ordinal: 8297
        void glFinish(void);

    // RVA: 0x2083 | Ordinal: 8324
        void glFlush(void);

    // RVA: 0x2096 | Ordinal: 8343
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x20A9 | Ordinal: 8362
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20B6 | Ordinal: 8375
        void glFogCoordd(double);

    // RVA: 0x20C3 | Ordinal: 8388
        void glFogCoorddv(double const *);

    // RVA: 0x20D0 | Ordinal: 8401
        void glFogCoordf(float);

    // RVA: 0x20DD | Ordinal: 8414
        void glFogCoordfv(float const *);

    // RVA: 0x20EE | Ordinal: 8431
        void glFogf(unsigned int, float);

    // RVA: 0x20FF | Ordinal: 8448
        void glFogfv(unsigned int, float const *);

    // RVA: 0x2110 | Ordinal: 8465
        void glFogi(unsigned int, int);

    // RVA: 0x2121 | Ordinal: 8482
        void glFogiv(unsigned int, int const *);

    // RVA: 0x2138 | Ordinal: 8505
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2180 | Ordinal: 8577
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x214A | Ordinal: 8523
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x215D | Ordinal: 8542
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x216F | Ordinal: 8560
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2193 | Ordinal: 8596
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21AE | Ordinal: 8623
        void glFrontFace(unsigned int);

    // RVA: 0x21C3 | Ordinal: 8644
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21D5 | Ordinal: 8662
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21E8 | Ordinal: 8681
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x21FD | Ordinal: 8702
        void glGenLists(int);

    // RVA: 0x2204 | Ordinal: 8709
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x221A | Ordinal: 8731
        void glGenQueries(int, unsigned int *);

    // RVA: 0x222D | Ordinal: 8750
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x223C | Ordinal: 8765
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x2256 | Ordinal: 8791
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2263 | Ordinal: 8804
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x2276 | Ordinal: 8823
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2289 | Ordinal: 8842
        void glGenerateMipmap(unsigned int);

    // RVA: 0x2293 | Ordinal: 8852
        void glGetActiveAtomicCounterBufferiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22A8 | Ordinal: 8873
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22B4 | Ordinal: 8885
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22C0 | Ordinal: 8897
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22CC | Ordinal: 8909
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22E1 | Ordinal: 8930
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22F3 | Ordinal: 8948
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2305 | Ordinal: 8966
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2316 | Ordinal: 8983
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2328 | Ordinal: 9001
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x233D | Ordinal: 9022
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2352 | Ordinal: 9043
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2365 | Ordinal: 9062
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2380 | Ordinal: 9089
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2391 | Ordinal: 9106
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23A7 | Ordinal: 9128
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23BD | Ordinal: 9150
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23D3 | Ordinal: 9172
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23E8 | Ordinal: 9193
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23F7 | Ordinal: 9208
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2406 | Ordinal: 9223
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2415 | Ordinal: 9238
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2428 | Ordinal: 9257
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x243F | Ordinal: 9280
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x244E | Ordinal: 9295
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x245D | Ordinal: 9310
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2468 | Ordinal: 9321
        void glGetDoublei_v(unsigned int, unsigned int, double *);

    // RVA: 0x2482 | Ordinal: 9347
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x249D | Ordinal: 9374
        void glGetError(void);

    // RVA: 0x24A7 | Ordinal: 9384
        void glGetFloati_v(unsigned int, unsigned int, float *);

    // RVA: 0x24C2 | Ordinal: 9411
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24D0 | Ordinal: 9425
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24E3 | Ordinal: 9444
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24F6 | Ordinal: 9463
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2513 | Ordinal: 9492
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2522 | Ordinal: 9507
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2531 | Ordinal: 9522
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x253E | Ordinal: 9535
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x254F | Ordinal: 9552
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2562 | Ordinal: 9571
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x257D | Ordinal: 9598
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x258C | Ordinal: 9613
        void glGetInternalformativ(unsigned int, unsigned int, unsigned int, int, int *);

    // RVA: 0x25A1 | Ordinal: 9634
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25B2 | Ordinal: 9651
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25C3 | Ordinal: 9668
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25D4 | Ordinal: 9685
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25E5 | Ordinal: 9702
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25F6 | Ordinal: 9719
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x2607 | Ordinal: 9736
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2616 | Ordinal: 9751
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2625 | Ordinal: 9766
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2634 | Ordinal: 9781
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2641 | Ordinal: 9794
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x266E | Ordinal: 9839
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x267F | Ordinal: 9856
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x2690 | Ordinal: 9873
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x26A6 | Ordinal: 9895
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26B9 | Ordinal: 9914
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26C0 | Ordinal: 9921
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26D5 | Ordinal: 9942
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26E7 | Ordinal: 9960
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26F2 | Ordinal: 9971
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x2720 | Ordinal: 10017
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2735 | Ordinal: 10038
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2741 | Ordinal: 10050
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x274F | Ordinal: 10064
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2764 | Ordinal: 10085
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2772 | Ordinal: 10099
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x2788 | Ordinal: 10121
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x279E | Ordinal: 10143
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27B1 | Ordinal: 10162
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27C0 | Ordinal: 10177
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27CF | Ordinal: 10192
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27DE | Ordinal: 10207
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27ED | Ordinal: 10222
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2800 | Ordinal: 10241
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2811 | Ordinal: 10258
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x281C | Ordinal: 10269
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x2831 | Ordinal: 10290
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2846 | Ordinal: 10311
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2861 | Ordinal: 10338
        void glGetString(unsigned int);

    // RVA: 0x2874 | Ordinal: 10357
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2880 | Ordinal: 10369
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x288C | Ordinal: 10381
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x289D | Ordinal: 10398
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x28B2 | Ordinal: 10419
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28C3 | Ordinal: 10436
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28D4 | Ordinal: 10453
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28E5 | Ordinal: 10470
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28F6 | Ordinal: 10487
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x290C | Ordinal: 10509
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2927 | Ordinal: 10536
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2942 | Ordinal: 10563
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2955 | Ordinal: 10582
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2968 | Ordinal: 10601
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2983 | Ordinal: 10628
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x299E | Ordinal: 10655
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29C1 | Ordinal: 10690
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29D9 | Ordinal: 10714
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29EB | Ordinal: 10732
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x2A00 | Ordinal: 10753
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A0C | Ordinal: 10765
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A18 | Ordinal: 10777
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A2D | Ordinal: 10798
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A42 | Ordinal: 10819
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A55 | Ordinal: 10838
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A6E | Ordinal: 10863
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A81 | Ordinal: 10882
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A8B | Ordinal: 10892
        void glGetVertexAttribLdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AA0 | Ordinal: 10913
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AB4 | Ordinal: 10933
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AC9 | Ordinal: 10954
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2ADE | Ordinal: 10975
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B14 | Ordinal: 11029
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B27 | Ordinal: 11048
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B38 | Ordinal: 11065
        void glIndexMask(unsigned int);

    // RVA: 0x2B48 | Ordinal: 11081
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B59 | Ordinal: 11098
        void glIndexd(double);

    // RVA: 0x2B6A | Ordinal: 11115
        void glIndexdv(double const *);

    // RVA: 0x2B7B | Ordinal: 11132
        void glIndexf(float);

    // RVA: 0x2B8C | Ordinal: 11149
        void glIndexfv(float const *);

    // RVA: 0x2B9D | Ordinal: 11166
        void glIndexi(int);

    // RVA: 0x2BAE | Ordinal: 11183
        void glIndexiv(int const *);

    // RVA: 0x2BBF | Ordinal: 11200
        void glIndexs(short);

    // RVA: 0x2BD0 | Ordinal: 11217
        void glIndexsv(short const *);

    // RVA: 0x2BE5 | Ordinal: 11238
        void glIndexub(unsigned char);

    // RVA: 0x2BFC | Ordinal: 11261
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C0F | Ordinal: 11280
        void glInitNames(void);

    // RVA: 0x2C1F | Ordinal: 11296
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C5C | Ordinal: 11357
        void glIsBuffer(unsigned int);

    // RVA: 0x2C77 | Ordinal: 11384
        void glIsEnabled(unsigned int);

    // RVA: 0x2C8A | Ordinal: 11403
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C9D | Ordinal: 11422
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CB2 | Ordinal: 11443
        void glIsList(unsigned int);

    // RVA: 0x2CC3 | Ordinal: 11460
        void glIsProgram(unsigned int);

    // RVA: 0x2CCE | Ordinal: 11471
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CE4 | Ordinal: 11493
        void glIsQuery(unsigned int);

    // RVA: 0x2CF7 | Ordinal: 11512
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D06 | Ordinal: 11527
        void glIsSampler(unsigned int);

    // RVA: 0x2D1B | Ordinal: 11548
        void glIsShader(unsigned int);

    // RVA: 0x2D2C | Ordinal: 11565
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D46 | Ordinal: 11591
        void glIsTexture(unsigned int);

    // RVA: 0x2D53 | Ordinal: 11604
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D66 | Ordinal: 11623
        void glIsVertexArray(unsigned int);

    // RVA: 0x2D7B | Ordinal: 11644
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D8C | Ordinal: 11661
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D9D | Ordinal: 11678
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DAE | Ordinal: 11695
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DBF | Ordinal: 11712
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DD0 | Ordinal: 11729
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DE1 | Ordinal: 11746
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DF2 | Ordinal: 11763
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2E03 | Ordinal: 11780
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E1A | Ordinal: 11803
        void glLineWidth(float);

    // RVA: 0x2E2F | Ordinal: 11824
        void glLinkProgram(unsigned int);

    // RVA: 0x2E44 | Ordinal: 11845
        void glListBase(unsigned int);

    // RVA: 0x2E55 | Ordinal: 11862
        void glLoadIdentity(void);

    // RVA: 0x2E66 | Ordinal: 11879
        void glLoadMatrixd(double const *);

    // RVA: 0x2E77 | Ordinal: 11896
        void glLoadMatrixf(float const *);

    // RVA: 0x2E88 | Ordinal: 11913
        void glLoadName(unsigned int);

    // RVA: 0x2E96 | Ordinal: 11927
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2EA4 | Ordinal: 11941
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EBA | Ordinal: 11963
        void glLogicOp(unsigned int);

    // RVA: 0x2ECF | Ordinal: 11984
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2EE0 | Ordinal: 12001
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EF1 | Ordinal: 12018
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2F02 | Ordinal: 12035
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F14 | Ordinal: 12053
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F27 | Ordinal: 12072
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2F3C | Ordinal: 12093
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F4D | Ordinal: 12110
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F5E | Ordinal: 12127
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F6F | Ordinal: 12144
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F84 | Ordinal: 12165
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F95 | Ordinal: 12182
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2FA6 | Ordinal: 12199
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FB7 | Ordinal: 12216
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FC8 | Ordinal: 12233
        void glMatrixMode(unsigned int);

    // RVA: 0x2FCD | Ordinal: 12238
        void glMemoryBarrier(unsigned int);

    // RVA: 0x2FDD | Ordinal: 12254
        void glMinSampleShading(float);

    // RVA: 0x2FF0 | Ordinal: 12273
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x3001 | Ordinal: 12290
        void glMultMatrixd(double const *);

    // RVA: 0x3012 | Ordinal: 12307
        void glMultMatrixf(float const *);

    // RVA: 0x3020 | Ordinal: 12321
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x302E | Ordinal: 12335
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x3040 | Ordinal: 12353
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x305C | Ordinal: 12381
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x306C | Ordinal: 12397
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3084 | Ordinal: 12421
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x3092 | Ordinal: 12435
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x30A0 | Ordinal: 12449
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30AE | Ordinal: 12463
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30BC | Ordinal: 12477
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30CA | Ordinal: 12491
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30D8 | Ordinal: 12505
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30E6 | Ordinal: 12519
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30F4 | Ordinal: 12533
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x3102 | Ordinal: 12547
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x3110 | Ordinal: 12561
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x311E | Ordinal: 12575
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x312C | Ordinal: 12589
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x313A | Ordinal: 12603
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x3148 | Ordinal: 12617
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x3156 | Ordinal: 12631
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x3164 | Ordinal: 12645
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x3172 | Ordinal: 12659
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x3180 | Ordinal: 12673
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x318E | Ordinal: 12687
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x319C | Ordinal: 12701
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31AA | Ordinal: 12715
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31B8 | Ordinal: 12729
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31C6 | Ordinal: 12743
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31D4 | Ordinal: 12757
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31E2 | Ordinal: 12771
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31F0 | Ordinal: 12785
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31FE | Ordinal: 12799
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x320C | Ordinal: 12813
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x321A | Ordinal: 12827
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x3228 | Ordinal: 12841
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x3236 | Ordinal: 12855
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x3240 | Ordinal: 12865
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x324C | Ordinal: 12877
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3258 | Ordinal: 12889
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3264 | Ordinal: 12901
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3270 | Ordinal: 12913
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x327C | Ordinal: 12925
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3288 | Ordinal: 12937
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3294 | Ordinal: 12949
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x32BF | Ordinal: 12992
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32D0 | Ordinal: 13009
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32E1 | Ordinal: 13026
        void glNormal3bv(signed char const *);

    // RVA: 0x32F2 | Ordinal: 13043
        void glNormal3d(double, double, double);

    // RVA: 0x3303 | Ordinal: 13060
        void glNormal3dv(double const *);

    // RVA: 0x3314 | Ordinal: 13077
        void glNormal3f(float, float, float);

    // RVA: 0x3325 | Ordinal: 13094
        void glNormal3fv(float const *);

    // RVA: 0x3336 | Ordinal: 13111
        void glNormal3i(int, int, int);

    // RVA: 0x3347 | Ordinal: 13128
        void glNormal3iv(int const *);

    // RVA: 0x3358 | Ordinal: 13145
        void glNormal3s(short, short, short);

    // RVA: 0x3369 | Ordinal: 13162
        void glNormal3sv(short const *);

    // RVA: 0x3373 | Ordinal: 13172
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x337F | Ordinal: 13184
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3391 | Ordinal: 13202
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33AC | Ordinal: 13229
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33BD | Ordinal: 13246
        void glPassThrough(float);

    // RVA: 0x33C5 | Ordinal: 13254
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33D2 | Ordinal: 13267
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33DF | Ordinal: 13280
        void glPauseTransformFeedback(void);

    // RVA: 0x33F4 | Ordinal: 13301
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x3405 | Ordinal: 13318
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x3416 | Ordinal: 13335
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x342C | Ordinal: 13357
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3447 | Ordinal: 13384
        void glPixelStorei(unsigned int, int);

    // RVA: 0x345C | Ordinal: 13405
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x346D | Ordinal: 13422
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x347E | Ordinal: 13439
        void glPixelZoom(float, float);

    // RVA: 0x3490 | Ordinal: 13457
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34A6 | Ordinal: 13479
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34BC | Ordinal: 13501
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34D2 | Ordinal: 13523
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34EC | Ordinal: 13549
        void glPointSize(float);

    // RVA: 0x3506 | Ordinal: 13575
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3520 | Ordinal: 13601
        void glPolygonOffset(float, float);

    // RVA: 0x3535 | Ordinal: 13622
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x3546 | Ordinal: 13639
        void glPopAttrib(void);

    // RVA: 0x3556 | Ordinal: 13655
        void glPopClientAttrib(void);

    // RVA: 0x356C | Ordinal: 13677
        void glPopMatrix(void);

    // RVA: 0x357D | Ordinal: 13694
        void glPopName(void);

    // RVA: 0x358B | Ordinal: 13708
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x359F | Ordinal: 13728
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x35A6 | Ordinal: 13735
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35B1 | Ordinal: 13746
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35BB | Ordinal: 13756
        void glProgramUniform1d(unsigned int, int, double);

    // RVA: 0x35C5 | Ordinal: 13766
        void glProgramUniform1dv(unsigned int, int, int, double const *);

    // RVA: 0x35D0 | Ordinal: 13777
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35DB | Ordinal: 13788
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35E6 | Ordinal: 13799
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35F1 | Ordinal: 13810
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x35FC | Ordinal: 13821
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x3607 | Ordinal: 13832
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3611 | Ordinal: 13842
        void glProgramUniform2d(unsigned int, int, double, double);

    // RVA: 0x361B | Ordinal: 13852
        void glProgramUniform2dv(unsigned int, int, int, double const *);

    // RVA: 0x3626 | Ordinal: 13863
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x3631 | Ordinal: 13874
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x363C | Ordinal: 13885
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x3647 | Ordinal: 13896
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x3652 | Ordinal: 13907
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x365D | Ordinal: 13918
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3667 | Ordinal: 13928
        void glProgramUniform3d(unsigned int, int, double, double, double);

    // RVA: 0x3671 | Ordinal: 13938
        void glProgramUniform3dv(unsigned int, int, int, double const *);

    // RVA: 0x367C | Ordinal: 13949
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x3687 | Ordinal: 13960
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x3692 | Ordinal: 13971
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x369D | Ordinal: 13982
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36A8 | Ordinal: 13993
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36B3 | Ordinal: 14004
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36BD | Ordinal: 14014
        void glProgramUniform4d(unsigned int, int, double, double, double, double);

    // RVA: 0x36C7 | Ordinal: 14024
        void glProgramUniform4dv(unsigned int, int, int, double const *);

    // RVA: 0x36D2 | Ordinal: 14035
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36DD | Ordinal: 14046
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36E8 | Ordinal: 14057
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36F3 | Ordinal: 14068
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x36FE | Ordinal: 14079
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3709 | Ordinal: 14090
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3713 | Ordinal: 14100
        void glProgramUniformMatrix2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x371E | Ordinal: 14111
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3728 | Ordinal: 14121
        void glProgramUniformMatrix2x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3733 | Ordinal: 14132
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x373D | Ordinal: 14142
        void glProgramUniformMatrix2x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3748 | Ordinal: 14153
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3752 | Ordinal: 14163
        void glProgramUniformMatrix3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x375D | Ordinal: 14174
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3767 | Ordinal: 14184
        void glProgramUniformMatrix3x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3772 | Ordinal: 14195
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x377C | Ordinal: 14205
        void glProgramUniformMatrix3x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3787 | Ordinal: 14216
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3791 | Ordinal: 14226
        void glProgramUniformMatrix4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x379C | Ordinal: 14237
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37A6 | Ordinal: 14247
        void glProgramUniformMatrix4x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37B1 | Ordinal: 14258
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37BB | Ordinal: 14268
        void glProgramUniformMatrix4x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37C6 | Ordinal: 14279
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37D6 | Ordinal: 14295
        void glProvokingVertex(unsigned int);

    // RVA: 0x37EB | Ordinal: 14316
        void glPushAttrib(unsigned int);

    // RVA: 0x37FB | Ordinal: 14332
        void glPushClientAttrib(unsigned int);

    // RVA: 0x3811 | Ordinal: 14354
        void glPushMatrix(void);

    // RVA: 0x3822 | Ordinal: 14371
        void glPushName(unsigned int);

    // RVA: 0x382C | Ordinal: 14381
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x3841 | Ordinal: 14402
        void glRasterPos2d(double, double);

    // RVA: 0x3852 | Ordinal: 14419
        void glRasterPos2dv(double const *);

    // RVA: 0x3863 | Ordinal: 14436
        void glRasterPos2f(float, float);

    // RVA: 0x3874 | Ordinal: 14453
        void glRasterPos2fv(float const *);

    // RVA: 0x3885 | Ordinal: 14470
        void glRasterPos2i(int, int);

    // RVA: 0x3896 | Ordinal: 14487
        void glRasterPos2iv(int const *);

    // RVA: 0x38A7 | Ordinal: 14504
        void glRasterPos2s(short, short);

    // RVA: 0x38B8 | Ordinal: 14521
        void glRasterPos2sv(short const *);

    // RVA: 0x38C9 | Ordinal: 14538
        void glRasterPos3d(double, double, double);

    // RVA: 0x38DA | Ordinal: 14555
        void glRasterPos3dv(double const *);

    // RVA: 0x38EB | Ordinal: 14572
        void glRasterPos3f(float, float, float);

    // RVA: 0x38FC | Ordinal: 14589
        void glRasterPos3fv(float const *);

    // RVA: 0x390D | Ordinal: 14606
        void glRasterPos3i(int, int, int);

    // RVA: 0x391E | Ordinal: 14623
        void glRasterPos3iv(int const *);

    // RVA: 0x392F | Ordinal: 14640
        void glRasterPos3s(short, short, short);

    // RVA: 0x3940 | Ordinal: 14657
        void glRasterPos3sv(short const *);

    // RVA: 0x3951 | Ordinal: 14674
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x3962 | Ordinal: 14691
        void glRasterPos4dv(double const *);

    // RVA: 0x3973 | Ordinal: 14708
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x3984 | Ordinal: 14725
        void glRasterPos4fv(float const *);

    // RVA: 0x3995 | Ordinal: 14742
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x39A6 | Ordinal: 14759
        void glRasterPos4iv(int const *);

    // RVA: 0x39B7 | Ordinal: 14776
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39C8 | Ordinal: 14793
        void glRasterPos4sv(short const *);

    // RVA: 0x39DF | Ordinal: 14816
        void glReadBuffer(unsigned int);

    // RVA: 0x39FA | Ordinal: 14843
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A12 | Ordinal: 14867
        void glRectd(double, double, double, double);

    // RVA: 0x3A23 | Ordinal: 14884
        void glRectdv(double const *, double const *);

    // RVA: 0x3A34 | Ordinal: 14901
        void glRectf(float, float, float, float);

    // RVA: 0x3A45 | Ordinal: 14918
        void glRectfv(float const *, float const *);

    // RVA: 0x3A56 | Ordinal: 14935
        void glRecti(int, int, int, int);

    // RVA: 0x3A67 | Ordinal: 14952
        void glRectiv(int const *, int const *);

    // RVA: 0x3A78 | Ordinal: 14969
        void glRects(short, short, short, short);

    // RVA: 0x3A89 | Ordinal: 14986
        void glRectsv(short const *, short const *);

    // RVA: 0x3A90 | Ordinal: 14993
        void glReleaseShaderCompiler(void);

    // RVA: 0x3AA5 | Ordinal: 15014
        void glRenderMode(unsigned int);

    // RVA: 0x3AB4 | Ordinal: 15029
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3AC7 | Ordinal: 15048
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3ADA | Ordinal: 15067
        void glResetHistogram(unsigned int);

    // RVA: 0x3AE9 | Ordinal: 15082
        void glResetMinmax(unsigned int);

    // RVA: 0x3AF2 | Ordinal: 15091
        void glResumeTransformFeedback(void);

    // RVA: 0x3B07 | Ordinal: 15112
        void glRotated(double, double, double, double);

    // RVA: 0x3B18 | Ordinal: 15129
        void glRotatef(float, float, float, float);

    // RVA: 0x3B2C | Ordinal: 15149
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B3D | Ordinal: 15166
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B4C | Ordinal: 15181
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B5B | Ordinal: 15196
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B6A | Ordinal: 15211
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B79 | Ordinal: 15226
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B88 | Ordinal: 15241
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B97 | Ordinal: 15256
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BAC | Ordinal: 15277
        void glScaled(double, double, double);

    // RVA: 0x3BBD | Ordinal: 15294
        void glScalef(float, float, float);

    // RVA: 0x3BD4 | Ordinal: 15317
        void glScissor(int, int, int, int);

    // RVA: 0x3BDE | Ordinal: 15327
        void glScissorArrayv(unsigned int, int, int const *);

    // RVA: 0x3BE8 | Ordinal: 15337
        void glScissorIndexed(unsigned int, int, int, int, int);

    // RVA: 0x3BF2 | Ordinal: 15347
        void glScissorIndexedv(unsigned int, int const *);

    // RVA: 0x3C03 | Ordinal: 15364
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C10 | Ordinal: 15377
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C1D | Ordinal: 15390
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C2A | Ordinal: 15403
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C37 | Ordinal: 15416
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C44 | Ordinal: 15429
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C51 | Ordinal: 15442
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C5E | Ordinal: 15455
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C6B | Ordinal: 15468
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C78 | Ordinal: 15481
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C85 | Ordinal: 15494
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C92 | Ordinal: 15507
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3C9F | Ordinal: 15520
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CAC | Ordinal: 15533
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CB9 | Ordinal: 15546
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CC6 | Ordinal: 15559
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CD0 | Ordinal: 15569
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CDC | Ordinal: 15581
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3CEB | Ordinal: 15596
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CFC | Ordinal: 15613
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D0B | Ordinal: 15628
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D1C | Ordinal: 15645
        void glShadeModel(unsigned int);

    // RVA: 0x3D23 | Ordinal: 15652
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D38 | Ordinal: 15673
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D59 | Ordinal: 15706
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D6E | Ordinal: 15727
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D89 | Ordinal: 15754
        void glStencilMask(unsigned int);

    // RVA: 0x3D9E | Ordinal: 15775
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DB9 | Ordinal: 15802
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DCE | Ordinal: 15823
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DE0 | Ordinal: 15841
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DFC | Ordinal: 15869
        void glTexCoord1d(double);

    // RVA: 0x3E0D | Ordinal: 15886
        void glTexCoord1dv(double const *);

    // RVA: 0x3E1E | Ordinal: 15903
        void glTexCoord1f(float);

    // RVA: 0x3E2F | Ordinal: 15920
        void glTexCoord1fv(float const *);

    // RVA: 0x3E40 | Ordinal: 15937
        void glTexCoord1i(int);

    // RVA: 0x3E51 | Ordinal: 15954
        void glTexCoord1iv(int const *);

    // RVA: 0x3E62 | Ordinal: 15971
        void glTexCoord1s(short);

    // RVA: 0x3E73 | Ordinal: 15988
        void glTexCoord1sv(short const *);

    // RVA: 0x3E84 | Ordinal: 16005
        void glTexCoord2d(double, double);

    // RVA: 0x3E95 | Ordinal: 16022
        void glTexCoord2dv(double const *);

    // RVA: 0x3EA6 | Ordinal: 16039
        void glTexCoord2f(float, float);

    // RVA: 0x3EB7 | Ordinal: 16056
        void glTexCoord2fv(float const *);

    // RVA: 0x3EC8 | Ordinal: 16073
        void glTexCoord2i(int, int);

    // RVA: 0x3ED9 | Ordinal: 16090
        void glTexCoord2iv(int const *);

    // RVA: 0x3EEA | Ordinal: 16107
        void glTexCoord2s(short, short);

    // RVA: 0x3EFB | Ordinal: 16124
        void glTexCoord2sv(short const *);

    // RVA: 0x3F0C | Ordinal: 16141
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F1D | Ordinal: 16158
        void glTexCoord3dv(double const *);

    // RVA: 0x3F2E | Ordinal: 16175
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F3F | Ordinal: 16192
        void glTexCoord3fv(float const *);

    // RVA: 0x3F50 | Ordinal: 16209
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F61 | Ordinal: 16226
        void glTexCoord3iv(int const *);

    // RVA: 0x3F72 | Ordinal: 16243
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F83 | Ordinal: 16260
        void glTexCoord3sv(short const *);

    // RVA: 0x3F94 | Ordinal: 16277
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3FA5 | Ordinal: 16294
        void glTexCoord4dv(double const *);

    // RVA: 0x3FB6 | Ordinal: 16311
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FC7 | Ordinal: 16328
        void glTexCoord4fv(float const *);

    // RVA: 0x3FD8 | Ordinal: 16345
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FE9 | Ordinal: 16362
        void glTexCoord4iv(int const *);

    // RVA: 0x3FFA | Ordinal: 16379
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x400B | Ordinal: 16396
        void glTexCoord4sv(short const *);

    // RVA: 0x4015 | Ordinal: 16406
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x4021 | Ordinal: 16418
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x402D | Ordinal: 16430
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x4039 | Ordinal: 16442
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4045 | Ordinal: 16454
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x4051 | Ordinal: 16466
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x405D | Ordinal: 16478
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x4069 | Ordinal: 16490
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x407B | Ordinal: 16508
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x408C | Ordinal: 16525
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x409D | Ordinal: 16542
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40AE | Ordinal: 16559
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40BF | Ordinal: 16576
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40D0 | Ordinal: 16593
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40E1 | Ordinal: 16610
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40F2 | Ordinal: 16627
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x4103 | Ordinal: 16644
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4114 | Ordinal: 16661
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x4125 | Ordinal: 16678
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x413B | Ordinal: 16700
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4156 | Ordinal: 16727
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4166 | Ordinal: 16743
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x417F | Ordinal: 16768
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x418F | Ordinal: 16784
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x41A2 | Ordinal: 16803
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41B5 | Ordinal: 16822
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41D0 | Ordinal: 16849
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41EB | Ordinal: 16876
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4206 | Ordinal: 16903
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4221 | Ordinal: 16930
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4229 | Ordinal: 16938
        void glTexStorage1D(unsigned int, int, unsigned int, int);

    // RVA: 0x4232 | Ordinal: 16947
        void glTexStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x4242 | Ordinal: 16963
        void glTexStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x4262 | Ordinal: 16995
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x427C | Ordinal: 17021
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4295 | Ordinal: 17046
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42D4 | Ordinal: 17109
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x42E9 | Ordinal: 17130
        void glTranslated(double, double, double);

    // RVA: 0x42FA | Ordinal: 17147
        void glTranslatef(float, float, float);

    // RVA: 0x4302 | Ordinal: 17155
        void glUniform1d(int, double);

    // RVA: 0x430E | Ordinal: 17167
        void glUniform1dv(int, int, double const *);

    // RVA: 0x4323 | Ordinal: 17188
        void glUniform1f(int, float);

    // RVA: 0x4338 | Ordinal: 17209
        void glUniform1fv(int, int, float const *);

    // RVA: 0x434D | Ordinal: 17230
        void glUniform1i(int, int);

    // RVA: 0x4362 | Ordinal: 17251
        void glUniform1iv(int, int, int const *);

    // RVA: 0x4375 | Ordinal: 17270
        void glUniform1ui(int, unsigned int);

    // RVA: 0x4388 | Ordinal: 17289
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x4394 | Ordinal: 17301
        void glUniform2d(int, double, double);

    // RVA: 0x43A0 | Ordinal: 17313
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43B5 | Ordinal: 17334
        void glUniform2f(int, float, float);

    // RVA: 0x43CA | Ordinal: 17355
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43DF | Ordinal: 17376
        void glUniform2i(int, int, int);

    // RVA: 0x43F4 | Ordinal: 17397
        void glUniform2iv(int, int, int const *);

    // RVA: 0x4407 | Ordinal: 17416
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x441A | Ordinal: 17435
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4426 | Ordinal: 17447
        void glUniform3d(int, double, double, double);

    // RVA: 0x4432 | Ordinal: 17459
        void glUniform3dv(int, int, double const *);

    // RVA: 0x4447 | Ordinal: 17480
        void glUniform3f(int, float, float, float);

    // RVA: 0x445C | Ordinal: 17501
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4471 | Ordinal: 17522
        void glUniform3i(int, int, int, int);

    // RVA: 0x4486 | Ordinal: 17543
        void glUniform3iv(int, int, int const *);

    // RVA: 0x4499 | Ordinal: 17562
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44AC | Ordinal: 17581
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44B8 | Ordinal: 17593
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44C4 | Ordinal: 17605
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44D9 | Ordinal: 17626
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44EE | Ordinal: 17647
        void glUniform4fv(int, int, float const *);

    // RVA: 0x4503 | Ordinal: 17668
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x4518 | Ordinal: 17689
        void glUniform4iv(int, int, int const *);

    // RVA: 0x452B | Ordinal: 17708
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x453E | Ordinal: 17727
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4550 | Ordinal: 17745
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x455C | Ordinal: 17757
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x4571 | Ordinal: 17778
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x457D | Ordinal: 17790
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4591 | Ordinal: 17810
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x459D | Ordinal: 17822
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45B1 | Ordinal: 17842
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45BD | Ordinal: 17854
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45D2 | Ordinal: 17875
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45DE | Ordinal: 17887
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45F2 | Ordinal: 17907
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x45FE | Ordinal: 17919
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x4612 | Ordinal: 17939
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x461E | Ordinal: 17951
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x4633 | Ordinal: 17972
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x463F | Ordinal: 17984
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x4653 | Ordinal: 18004
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x465F | Ordinal: 18016
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4673 | Ordinal: 18036
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x467F | Ordinal: 18048
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x4695 | Ordinal: 18070
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46AC | Ordinal: 18093
        void glUseProgram(unsigned int);

    // RVA: 0x46B7 | Ordinal: 18104
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46CC | Ordinal: 18125
        void glValidateProgram(unsigned int);

    // RVA: 0x46D7 | Ordinal: 18136
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x46EC | Ordinal: 18157
        void glVertex2d(double, double);

    // RVA: 0x46FD | Ordinal: 18174
        void glVertex2dv(double const *);

    // RVA: 0x470E | Ordinal: 18191
        void glVertex2f(float, float);

    // RVA: 0x471F | Ordinal: 18208
        void glVertex2fv(float const *);

    // RVA: 0x4730 | Ordinal: 18225
        void glVertex2i(int, int);

    // RVA: 0x4741 | Ordinal: 18242
        void glVertex2iv(int const *);

    // RVA: 0x4752 | Ordinal: 18259
        void glVertex2s(short, short);

    // RVA: 0x4763 | Ordinal: 18276
        void glVertex2sv(short const *);

    // RVA: 0x4774 | Ordinal: 18293
        void glVertex3d(double, double, double);

    // RVA: 0x4785 | Ordinal: 18310
        void glVertex3dv(double const *);

    // RVA: 0x4796 | Ordinal: 18327
        void glVertex3f(float, float, float);

    // RVA: 0x47A7 | Ordinal: 18344
        void glVertex3fv(float const *);

    // RVA: 0x47B8 | Ordinal: 18361
        void glVertex3i(int, int, int);

    // RVA: 0x47C9 | Ordinal: 18378
        void glVertex3iv(int const *);

    // RVA: 0x47DA | Ordinal: 18395
        void glVertex3s(short, short, short);

    // RVA: 0x47EB | Ordinal: 18412
        void glVertex3sv(short const *);

    // RVA: 0x47FC | Ordinal: 18429
        void glVertex4d(double, double, double, double);

    // RVA: 0x480D | Ordinal: 18446
        void glVertex4dv(double const *);

    // RVA: 0x481E | Ordinal: 18463
        void glVertex4f(float, float, float, float);

    // RVA: 0x482F | Ordinal: 18480
        void glVertex4fv(float const *);

    // RVA: 0x4840 | Ordinal: 18497
        void glVertex4i(int, int, int, int);

    // RVA: 0x4851 | Ordinal: 18514
        void glVertex4iv(int const *);

    // RVA: 0x4862 | Ordinal: 18531
        void glVertex4s(short, short, short, short);

    // RVA: 0x4873 | Ordinal: 18548
        void glVertex4sv(short const *);

    // RVA: 0x488E | Ordinal: 18575
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x489B | Ordinal: 18588
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48A9 | Ordinal: 18602
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48B7 | Ordinal: 18616
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48C4 | Ordinal: 18629
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48D1 | Ordinal: 18642
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48DE | Ordinal: 18655
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48EB | Ordinal: 18668
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48F9 | Ordinal: 18682
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x4907 | Ordinal: 18696
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4914 | Ordinal: 18709
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x4921 | Ordinal: 18722
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x492E | Ordinal: 18735
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x493B | Ordinal: 18748
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x4949 | Ordinal: 18762
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x4957 | Ordinal: 18776
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x4964 | Ordinal: 18789
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x4971 | Ordinal: 18802
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x497E | Ordinal: 18815
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x498B | Ordinal: 18828
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x4998 | Ordinal: 18841
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49A5 | Ordinal: 18854
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49B2 | Ordinal: 18867
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49BF | Ordinal: 18880
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49CC | Ordinal: 18893
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49D9 | Ordinal: 18906
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49E6 | Ordinal: 18919
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49F3 | Ordinal: 18932
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x4A01 | Ordinal: 18946
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A0F | Ordinal: 18960
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A1C | Ordinal: 18973
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A29 | Ordinal: 18986
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A36 | Ordinal: 18999
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A43 | Ordinal: 19012
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A50 | Ordinal: 19025
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A5D | Ordinal: 19038
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A71 | Ordinal: 19058
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A85 | Ordinal: 19078
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A90 | Ordinal: 19089
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4A9B | Ordinal: 19100
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AA6 | Ordinal: 19111
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AB1 | Ordinal: 19122
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4ABC | Ordinal: 19133
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4AC7 | Ordinal: 19144
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AD2 | Ordinal: 19155
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4ADD | Ordinal: 19166
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AE8 | Ordinal: 19177
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AF3 | Ordinal: 19188
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AFE | Ordinal: 19199
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B09 | Ordinal: 19210
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B15 | Ordinal: 19222
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B21 | Ordinal: 19234
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B2C | Ordinal: 19245
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B37 | Ordinal: 19256
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B43 | Ordinal: 19268
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B4F | Ordinal: 19280
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B5A | Ordinal: 19291
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B72 | Ordinal: 19315
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4B7C | Ordinal: 19325
        void glVertexAttribL1d(unsigned int, double);

    // RVA: 0x4B86 | Ordinal: 19335
        void glVertexAttribL1dv(unsigned int, double const *);

    // RVA: 0x4B90 | Ordinal: 19345
        void glVertexAttribL2d(unsigned int, double, double);

    // RVA: 0x4B9A | Ordinal: 19355
        void glVertexAttribL2dv(unsigned int, double const *);

    // RVA: 0x4BA4 | Ordinal: 19365
        void glVertexAttribL3d(unsigned int, double, double, double);

    // RVA: 0x4BAE | Ordinal: 19375
        void glVertexAttribL3dv(unsigned int, double const *);

    // RVA: 0x4BB8 | Ordinal: 19385
        void glVertexAttribL4d(unsigned int, double, double, double, double);

    // RVA: 0x4BC2 | Ordinal: 19395
        void glVertexAttribL4dv(unsigned int, double const *);

    // RVA: 0x4BD2 | Ordinal: 19411
        void glVertexAttribLPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BE0 | Ordinal: 19425
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BEE | Ordinal: 19439
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4BFC | Ordinal: 19453
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C0A | Ordinal: 19467
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C18 | Ordinal: 19481
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C26 | Ordinal: 19495
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C34 | Ordinal: 19509
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C42 | Ordinal: 19523
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C57 | Ordinal: 19544
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C6C | Ordinal: 19565
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C78 | Ordinal: 19577
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C84 | Ordinal: 19589
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C90 | Ordinal: 19601
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C9C | Ordinal: 19613
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CA8 | Ordinal: 19625
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CBA | Ordinal: 19643
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CD1 | Ordinal: 19666
        void glViewport(int, int, int, int);

    // RVA: 0x4CDB | Ordinal: 19676
        void glViewportArrayv(unsigned int, int, float const *);

    // RVA: 0x4CE5 | Ordinal: 19686
        void glViewportIndexedf(unsigned int, float, float, float, float);

    // RVA: 0x4CEF | Ordinal: 19696
        void glViewportIndexedfv(unsigned int, float const *);

    // RVA: 0x4D00 | Ordinal: 19713
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4D11 | Ordinal: 19730
        void glWindowPos2d(double, double);

    // RVA: 0x4D1E | Ordinal: 19743
        void glWindowPos2dv(double const *);

    // RVA: 0x4D2B | Ordinal: 19756
        void glWindowPos2f(float, float);

    // RVA: 0x4D38 | Ordinal: 19769
        void glWindowPos2fv(float const *);

    // RVA: 0x4D45 | Ordinal: 19782
        void glWindowPos2i(int, int);

    // RVA: 0x4D52 | Ordinal: 19795
        void glWindowPos2iv(int const *);

    // RVA: 0x4D5F | Ordinal: 19808
        void glWindowPos2s(short, short);

    // RVA: 0x4D6C | Ordinal: 19821
        void glWindowPos2sv(short const *);

    // RVA: 0x4D79 | Ordinal: 19834
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D86 | Ordinal: 19847
        void glWindowPos3dv(double const *);

    // RVA: 0x4D93 | Ordinal: 19860
        void glWindowPos3f(float, float, float);

    // RVA: 0x4DA0 | Ordinal: 19873
        void glWindowPos3fv(float const *);

    // RVA: 0x4DAD | Ordinal: 19886
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DBA | Ordinal: 19899
        void glWindowPos3iv(int const *);

    // RVA: 0x4DC7 | Ordinal: 19912
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DD4 | Ordinal: 19925
        void glWindowPos3sv(short const *);

    // RVA: 0x4F2C | Ordinal: 20269
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FEE | Ordinal: 20463
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6112 | Ordinal: 24851
        void versionProfile(void);

    // RVA: 0x48F | Ordinal: 1168
        void _QOpenGLFunctions_4_2_Compatibility(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_2_COMPATIBILITY_HPP
