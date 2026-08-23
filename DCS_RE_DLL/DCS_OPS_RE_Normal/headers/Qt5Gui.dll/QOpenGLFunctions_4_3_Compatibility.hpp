#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_3_Compatibility
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_3_Compatibility
{
public:

    // RVA: 0x1C3 | Ordinal: 452
        void QOpenGLFunctions_4_3_Compatibility(void);

    // RVA: 0x11C6 | Ordinal: 4551
        void glAccum(unsigned int, float);

    // RVA: 0x11CE | Ordinal: 4559
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x11E6 | Ordinal: 4583
        void glActiveTexture(unsigned int);

    // RVA: 0x11FA | Ordinal: 4603
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x120A | Ordinal: 4619
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x121A | Ordinal: 4635
        void glArrayElement(int);

    // RVA: 0x122C | Ordinal: 4653
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1241 | Ordinal: 4674
        void glBegin(unsigned int);

    // RVA: 0x1250 | Ordinal: 4689
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x1266 | Ordinal: 4711
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x1272 | Ordinal: 4723
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1285 | Ordinal: 4742
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x129A | Ordinal: 4763
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12B0 | Ordinal: 4785
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12C3 | Ordinal: 4804
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12D6 | Ordinal: 4823
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12F0 | Ordinal: 4849
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12FE | Ordinal: 4863
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x1311 | Ordinal: 4882
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x131A | Ordinal: 4891
        void glBindImageTexture(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int);

    // RVA: 0x1329 | Ordinal: 4906
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x133C | Ordinal: 4925
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x134B | Ordinal: 4940
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1369 | Ordinal: 4970
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x137C | Ordinal: 4989
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x138F | Ordinal: 5008
        void glBindVertexArray(unsigned int);

    // RVA: 0x1396 | Ordinal: 5015
        void glBindVertexBuffer(unsigned int, unsigned int, __int64, int);

    // RVA: 0x13AE | Ordinal: 5039
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13C5 | Ordinal: 5062
        void glBlendColor(float, float, float, float);

    // RVA: 0x13DE | Ordinal: 5087
        void glBlendEquation(unsigned int);

    // RVA: 0x13F3 | Ordinal: 5108
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x1400 | Ordinal: 5121
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x140D | Ordinal: 5134
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x1428 | Ordinal: 5161
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x143F | Ordinal: 5184
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x144C | Ordinal: 5197
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1459 | Ordinal: 5210
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x146C | Ordinal: 5229
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1484 | Ordinal: 5253
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x149E | Ordinal: 5279
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14B2 | Ordinal: 5299
        void glCallList(unsigned int);

    // RVA: 0x14C3 | Ordinal: 5316
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14D3 | Ordinal: 5332
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14E7 | Ordinal: 5352
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x1502 | Ordinal: 5379
        void glClear(unsigned int);

    // RVA: 0x1516 | Ordinal: 5399
        void glClearAccum(float, float, float, float);

    // RVA: 0x1519 | Ordinal: 5402
        void glClearBufferData(unsigned int, unsigned int, unsigned int, unsigned int, void const *);

    // RVA: 0x151F | Ordinal: 5408
        void glClearBufferSubData(unsigned int, unsigned int, __int64, __int64, unsigned int, unsigned int, void const *);

    // RVA: 0x1532 | Ordinal: 5427
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1545 | Ordinal: 5446
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x1558 | Ordinal: 5465
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x156B | Ordinal: 5484
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x1586 | Ordinal: 5511
        void glClearColor(float, float, float, float);

    // RVA: 0x15A0 | Ordinal: 5537
        void glClearDepth(double);

    // RVA: 0x15AB | Ordinal: 5548
        void glClearDepthf(float);

    // RVA: 0x15BF | Ordinal: 5568
        void glClearIndex(float);

    // RVA: 0x15E3 | Ordinal: 5604
        void glClearStencil(int);

    // RVA: 0x15FC | Ordinal: 5629
        void glClientActiveTexture(unsigned int);

    // RVA: 0x160A | Ordinal: 5643
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x1620 | Ordinal: 5665
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x1631 | Ordinal: 5682
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x1642 | Ordinal: 5699
        void glColor3bv(signed char const *);

    // RVA: 0x1653 | Ordinal: 5716
        void glColor3d(double, double, double);

    // RVA: 0x1664 | Ordinal: 5733
        void glColor3dv(double const *);

    // RVA: 0x1675 | Ordinal: 5750
        void glColor3f(float, float, float);

    // RVA: 0x1686 | Ordinal: 5767
        void glColor3fv(float const *);

    // RVA: 0x1697 | Ordinal: 5784
        void glColor3i(int, int, int);

    // RVA: 0x16A8 | Ordinal: 5801
        void glColor3iv(int const *);

    // RVA: 0x16B9 | Ordinal: 5818
        void glColor3s(short, short, short);

    // RVA: 0x16CA | Ordinal: 5835
        void glColor3sv(short const *);

    // RVA: 0x16DB | Ordinal: 5852
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16EC | Ordinal: 5869
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16FD | Ordinal: 5886
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x170E | Ordinal: 5903
        void glColor3uiv(unsigned int const *);

    // RVA: 0x171F | Ordinal: 5920
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x1730 | Ordinal: 5937
        void glColor3usv(unsigned short const *);

    // RVA: 0x1741 | Ordinal: 5954
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x1752 | Ordinal: 5971
        void glColor4bv(signed char const *);

    // RVA: 0x1763 | Ordinal: 5988
        void glColor4d(double, double, double, double);

    // RVA: 0x1774 | Ordinal: 6005
        void glColor4dv(double const *);

    // RVA: 0x1785 | Ordinal: 6022
        void glColor4f(float, float, float, float);

    // RVA: 0x1796 | Ordinal: 6039
        void glColor4fv(float const *);

    // RVA: 0x17A7 | Ordinal: 6056
        void glColor4i(int, int, int, int);

    // RVA: 0x17B8 | Ordinal: 6073
        void glColor4iv(int const *);

    // RVA: 0x17C9 | Ordinal: 6090
        void glColor4s(short, short, short, short);

    // RVA: 0x17DA | Ordinal: 6107
        void glColor4sv(short const *);

    // RVA: 0x17EB | Ordinal: 6124
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17FC | Ordinal: 6141
        void glColor4ubv(unsigned char const *);

    // RVA: 0x180D | Ordinal: 6158
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x181E | Ordinal: 6175
        void glColor4uiv(unsigned int const *);

    // RVA: 0x182F | Ordinal: 6192
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x1840 | Ordinal: 6209
        void glColor4usv(unsigned short const *);

    // RVA: 0x1858 | Ordinal: 6233
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x186B | Ordinal: 6252
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x187F | Ordinal: 6272
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x188A | Ordinal: 6283
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x1896 | Ordinal: 6295
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x18A2 | Ordinal: 6307
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18AE | Ordinal: 6319
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x18BF | Ordinal: 6336
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18CE | Ordinal: 6351
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18DD | Ordinal: 6366
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18EC | Ordinal: 6381
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18FB | Ordinal: 6396
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x190D | Ordinal: 6414
        void glCompileShader(unsigned int);

    // RVA: 0x1924 | Ordinal: 6437
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x193C | Ordinal: 6461
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1954 | Ordinal: 6485
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x196B | Ordinal: 6508
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1983 | Ordinal: 6532
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x199B | Ordinal: 6556
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19B3 | Ordinal: 6580
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19C2 | Ordinal: 6595
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19D1 | Ordinal: 6610
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19E0 | Ordinal: 6625
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19EF | Ordinal: 6640
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19FE | Ordinal: 6655
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A0D | Ordinal: 6670
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A1F | Ordinal: 6688
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A2E | Ordinal: 6703
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A3D | Ordinal: 6718
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A4C | Ordinal: 6733
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A50 | Ordinal: 6737
        void glCopyImageSubData(unsigned int, unsigned int, int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1A66 | Ordinal: 6759
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A7C | Ordinal: 6781
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A96 | Ordinal: 6807
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AAF | Ordinal: 6832
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AC9 | Ordinal: 6858
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AE2 | Ordinal: 6883
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1B01 | Ordinal: 6914
        void glCreateProgram(void);

    // RVA: 0x1B1E | Ordinal: 6943
        void glCreateShader(unsigned int);

    // RVA: 0x1B29 | Ordinal: 6954
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B4A | Ordinal: 6987
        void glCullFace(unsigned int);

    // RVA: 0x1B6F | Ordinal: 7024
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B82 | Ordinal: 7043
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B96 | Ordinal: 7063
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1BA8 | Ordinal: 7081
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BB3 | Ordinal: 7092
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BC9 | Ordinal: 7114
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BDC | Ordinal: 7133
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BEB | Ordinal: 7148
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1C00 | Ordinal: 7169
        void glDeleteShader(unsigned int);

    // RVA: 0x1C11 | Ordinal: 7186
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C2B | Ordinal: 7212
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C38 | Ordinal: 7225
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C4B | Ordinal: 7244
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C66 | Ordinal: 7271
        void glDepthFunc(unsigned int);

    // RVA: 0x1C81 | Ordinal: 7298
        void glDepthMask(unsigned char);

    // RVA: 0x1C9B | Ordinal: 7324
        void glDepthRange(double, double);

    // RVA: 0x1CA5 | Ordinal: 7334
        void glDepthRangeArrayv(unsigned int, int, double const *);

    // RVA: 0x1CAF | Ordinal: 7344
        void glDepthRangeIndexed(unsigned int, double, double);

    // RVA: 0x1CBA | Ordinal: 7355
        void glDepthRangef(float, float);

    // RVA: 0x1CCF | Ordinal: 7376
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CEA | Ordinal: 7403
        void glDisable(unsigned int);

    // RVA: 0x1CFD | Ordinal: 7422
        void glDisableClientState(unsigned int);

    // RVA: 0x1D11 | Ordinal: 7442
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D24 | Ordinal: 7461
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D2C | Ordinal: 7469
        void glDispatchCompute(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1D33 | Ordinal: 7476
        void glDispatchComputeIndirect(__int64);

    // RVA: 0x1D4D | Ordinal: 7502
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D5A | Ordinal: 7515
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D6C | Ordinal: 7533
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D74 | Ordinal: 7541
        void glDrawArraysInstancedBaseInstance(unsigned int, int, int, int, unsigned int);

    // RVA: 0x1D8E | Ordinal: 7567
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DA3 | Ordinal: 7588
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DBD | Ordinal: 7614
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DCE | Ordinal: 7631
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DDB | Ordinal: 7644
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DED | Ordinal: 7662
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DF5 | Ordinal: 7670
        void glDrawElementsInstancedBaseInstance(unsigned int, int, unsigned int, void const *, int, unsigned int);

    // RVA: 0x1E06 | Ordinal: 7687
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E0E | Ordinal: 7695
        void glDrawElementsInstancedBaseVertexBaseInstance(unsigned int, int, unsigned int, void const *, int, int, unsigned int);

    // RVA: 0x1E22 | Ordinal: 7715
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E38 | Ordinal: 7737
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E49 | Ordinal: 7754
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E55 | Ordinal: 7766
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E5D | Ordinal: 7774
        void glDrawTransformFeedbackInstanced(unsigned int, unsigned int, int);

    // RVA: 0x1E69 | Ordinal: 7786
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1E71 | Ordinal: 7794
        void glDrawTransformFeedbackStreamInstanced(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x1E85 | Ordinal: 7814
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E95 | Ordinal: 7830
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1EA6 | Ordinal: 7847
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EBE | Ordinal: 7871
        void glEnable(unsigned int);

    // RVA: 0x1ED1 | Ordinal: 7890
        void glEnableClientState(unsigned int);

    // RVA: 0x1EE5 | Ordinal: 7910
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EF8 | Ordinal: 7929
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F0C | Ordinal: 7949
        void glEnd(void);

    // RVA: 0x1F1B | Ordinal: 7964
        void glEndConditionalRender(void);

    // RVA: 0x1F2F | Ordinal: 7984
        void glEndList(void);

    // RVA: 0x1F42 | Ordinal: 8003
        void glEndQuery(unsigned int);

    // RVA: 0x1F4E | Ordinal: 8015
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F61 | Ordinal: 8034
        void glEndTransformFeedback(void);

    // RVA: 0x1F75 | Ordinal: 8054
        void glEvalCoord1d(double);

    // RVA: 0x1F86 | Ordinal: 8071
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F97 | Ordinal: 8088
        void glEvalCoord1f(float);

    // RVA: 0x1FA8 | Ordinal: 8105
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FB9 | Ordinal: 8122
        void glEvalCoord2d(double, double);

    // RVA: 0x1FCA | Ordinal: 8139
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FDB | Ordinal: 8156
        void glEvalCoord2f(float, float);

    // RVA: 0x1FEC | Ordinal: 8173
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FFD | Ordinal: 8190
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x200E | Ordinal: 8207
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x201F | Ordinal: 8224
        void glEvalPoint1(int);

    // RVA: 0x2030 | Ordinal: 8241
        void glEvalPoint2(int, int);

    // RVA: 0x2041 | Ordinal: 8258
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x204F | Ordinal: 8272
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x206A | Ordinal: 8299
        void glFinish(void);

    // RVA: 0x2085 | Ordinal: 8326
        void glFlush(void);

    // RVA: 0x2098 | Ordinal: 8345
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x20AA | Ordinal: 8363
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20B7 | Ordinal: 8376
        void glFogCoordd(double);

    // RVA: 0x20C4 | Ordinal: 8389
        void glFogCoorddv(double const *);

    // RVA: 0x20D1 | Ordinal: 8402
        void glFogCoordf(float);

    // RVA: 0x20DE | Ordinal: 8415
        void glFogCoordfv(float const *);

    // RVA: 0x20EF | Ordinal: 8432
        void glFogf(unsigned int, float);

    // RVA: 0x2100 | Ordinal: 8449
        void glFogfv(unsigned int, float const *);

    // RVA: 0x2111 | Ordinal: 8466
        void glFogi(unsigned int, int);

    // RVA: 0x2122 | Ordinal: 8483
        void glFogiv(unsigned int, int const *);

    // RVA: 0x2127 | Ordinal: 8488
        void glFramebufferParameteri(unsigned int, unsigned int, int);

    // RVA: 0x213A | Ordinal: 8507
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2182 | Ordinal: 8579
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x214C | Ordinal: 8525
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x215F | Ordinal: 8544
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2171 | Ordinal: 8562
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2195 | Ordinal: 8598
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21B0 | Ordinal: 8625
        void glFrontFace(unsigned int);

    // RVA: 0x21C4 | Ordinal: 8645
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21D7 | Ordinal: 8664
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21EA | Ordinal: 8683
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x21FE | Ordinal: 8703
        void glGenLists(int);

    // RVA: 0x2206 | Ordinal: 8711
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x221C | Ordinal: 8733
        void glGenQueries(int, unsigned int *);

    // RVA: 0x222F | Ordinal: 8752
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x223E | Ordinal: 8767
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x2258 | Ordinal: 8793
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2265 | Ordinal: 8806
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x2278 | Ordinal: 8825
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x228B | Ordinal: 8844
        void glGenerateMipmap(unsigned int);

    // RVA: 0x2295 | Ordinal: 8854
        void glGetActiveAtomicCounterBufferiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22AA | Ordinal: 8875
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22B6 | Ordinal: 8887
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22C2 | Ordinal: 8899
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22CE | Ordinal: 8911
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22E3 | Ordinal: 8932
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22F5 | Ordinal: 8950
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2307 | Ordinal: 8968
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2318 | Ordinal: 8985
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x232A | Ordinal: 9003
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x233F | Ordinal: 9024
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2354 | Ordinal: 9045
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2367 | Ordinal: 9064
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2382 | Ordinal: 9091
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2393 | Ordinal: 9108
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23A9 | Ordinal: 9130
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23BF | Ordinal: 9152
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23D5 | Ordinal: 9174
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23E9 | Ordinal: 9194
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23F8 | Ordinal: 9209
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2407 | Ordinal: 9224
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2416 | Ordinal: 9239
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x242A | Ordinal: 9259
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2440 | Ordinal: 9281
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x244F | Ordinal: 9296
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x245E | Ordinal: 9311
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x246A | Ordinal: 9323
        void glGetDoublei_v(unsigned int, unsigned int, double *);

    // RVA: 0x2484 | Ordinal: 9349
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x249F | Ordinal: 9376
        void glGetError(void);

    // RVA: 0x24A9 | Ordinal: 9386
        void glGetFloati_v(unsigned int, unsigned int, float *);

    // RVA: 0x24C4 | Ordinal: 9413
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24D2 | Ordinal: 9427
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24E5 | Ordinal: 9446
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24F8 | Ordinal: 9465
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x24FF | Ordinal: 9472
        void glGetFramebufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2514 | Ordinal: 9493
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2523 | Ordinal: 9508
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2532 | Ordinal: 9523
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2540 | Ordinal: 9537
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2551 | Ordinal: 9554
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2564 | Ordinal: 9573
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x257F | Ordinal: 9600
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2585 | Ordinal: 9606
        void glGetInternalformati64v(unsigned int, unsigned int, unsigned int, int, __int64 *);

    // RVA: 0x258E | Ordinal: 9615
        void glGetInternalformativ(unsigned int, unsigned int, unsigned int, int, int *);

    // RVA: 0x25A2 | Ordinal: 9635
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25B3 | Ordinal: 9652
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25C4 | Ordinal: 9669
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25D5 | Ordinal: 9686
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25E6 | Ordinal: 9703
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25F7 | Ordinal: 9720
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x2608 | Ordinal: 9737
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2617 | Ordinal: 9752
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2626 | Ordinal: 9767
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2635 | Ordinal: 9782
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2643 | Ordinal: 9796
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x266F | Ordinal: 9840
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x2680 | Ordinal: 9857
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x2691 | Ordinal: 9874
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x26A8 | Ordinal: 9897
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26BA | Ordinal: 9915
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26C2 | Ordinal: 9923
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26D7 | Ordinal: 9944
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26DE | Ordinal: 9951
        void glGetProgramInterfaceiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x26E9 | Ordinal: 9962
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26F4 | Ordinal: 9973
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x26FB | Ordinal: 9980
        void glGetProgramResourceIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2702 | Ordinal: 9987
        void glGetProgramResourceLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x2708 | Ordinal: 9993
        void glGetProgramResourceLocationIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x270F | Ordinal: 10000
        void glGetProgramResourceName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2716 | Ordinal: 10007
        void glGetProgramResourceiv(unsigned int, unsigned int, unsigned int, int, unsigned int const *, int, int *, int *);

    // RVA: 0x2722 | Ordinal: 10019
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2737 | Ordinal: 10040
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2743 | Ordinal: 10052
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2751 | Ordinal: 10066
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2766 | Ordinal: 10087
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2774 | Ordinal: 10101
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x278A | Ordinal: 10123
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27A0 | Ordinal: 10145
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27B3 | Ordinal: 10164
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27C2 | Ordinal: 10179
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27D1 | Ordinal: 10194
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27E0 | Ordinal: 10209
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27EF | Ordinal: 10224
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2801 | Ordinal: 10242
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2813 | Ordinal: 10260
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x281E | Ordinal: 10271
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x2833 | Ordinal: 10292
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2848 | Ordinal: 10313
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2863 | Ordinal: 10340
        void glGetString(unsigned int);

    // RVA: 0x2876 | Ordinal: 10359
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2882 | Ordinal: 10371
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x288E | Ordinal: 10383
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x289F | Ordinal: 10400
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x28B3 | Ordinal: 10420
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28C4 | Ordinal: 10437
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28D5 | Ordinal: 10454
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28E6 | Ordinal: 10471
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28F7 | Ordinal: 10488
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x290E | Ordinal: 10511
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2929 | Ordinal: 10538
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2944 | Ordinal: 10565
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2957 | Ordinal: 10584
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x296A | Ordinal: 10603
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2985 | Ordinal: 10630
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x29A0 | Ordinal: 10657
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29C3 | Ordinal: 10692
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29DB | Ordinal: 10716
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29ED | Ordinal: 10734
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x2A02 | Ordinal: 10755
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A0E | Ordinal: 10767
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A1A | Ordinal: 10779
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A2F | Ordinal: 10800
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A44 | Ordinal: 10821
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A57 | Ordinal: 10840
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A70 | Ordinal: 10865
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A83 | Ordinal: 10884
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A8D | Ordinal: 10894
        void glGetVertexAttribLdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AA2 | Ordinal: 10915
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AB6 | Ordinal: 10935
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2ACB | Ordinal: 10956
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AE0 | Ordinal: 10977
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B16 | Ordinal: 11031
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B28 | Ordinal: 11049
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B39 | Ordinal: 11066
        void glIndexMask(unsigned int);

    // RVA: 0x2B49 | Ordinal: 11082
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B5A | Ordinal: 11099
        void glIndexd(double);

    // RVA: 0x2B6B | Ordinal: 11116
        void glIndexdv(double const *);

    // RVA: 0x2B7C | Ordinal: 11133
        void glIndexf(float);

    // RVA: 0x2B8D | Ordinal: 11150
        void glIndexfv(float const *);

    // RVA: 0x2B9E | Ordinal: 11167
        void glIndexi(int);

    // RVA: 0x2BAF | Ordinal: 11184
        void glIndexiv(int const *);

    // RVA: 0x2BC0 | Ordinal: 11201
        void glIndexs(short);

    // RVA: 0x2BD1 | Ordinal: 11218
        void glIndexsv(short const *);

    // RVA: 0x2BE7 | Ordinal: 11240
        void glIndexub(unsigned char);

    // RVA: 0x2BFE | Ordinal: 11263
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C10 | Ordinal: 11281
        void glInitNames(void);

    // RVA: 0x2C20 | Ordinal: 11297
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C24 | Ordinal: 11301
        void glInvalidateBufferData(unsigned int);

    // RVA: 0x2C2A | Ordinal: 11307
        void glInvalidateBufferSubData(unsigned int, __int64, __int64);

    // RVA: 0x2C31 | Ordinal: 11314
        void glInvalidateFramebuffer(unsigned int, int, unsigned int const *);

    // RVA: 0x2C3C | Ordinal: 11325
        void glInvalidateSubFramebuffer(unsigned int, int, unsigned int const *, int, int, int, int);

    // RVA: 0x2C42 | Ordinal: 11331
        void glInvalidateTexImage(unsigned int, int);

    // RVA: 0x2C48 | Ordinal: 11337
        void glInvalidateTexSubImage(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x2C5E | Ordinal: 11359
        void glIsBuffer(unsigned int);

    // RVA: 0x2C79 | Ordinal: 11386
        void glIsEnabled(unsigned int);

    // RVA: 0x2C8C | Ordinal: 11405
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C9F | Ordinal: 11424
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CB3 | Ordinal: 11444
        void glIsList(unsigned int);

    // RVA: 0x2CC5 | Ordinal: 11462
        void glIsProgram(unsigned int);

    // RVA: 0x2CD0 | Ordinal: 11473
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CE6 | Ordinal: 11495
        void glIsQuery(unsigned int);

    // RVA: 0x2CF9 | Ordinal: 11514
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D08 | Ordinal: 11529
        void glIsSampler(unsigned int);

    // RVA: 0x2D1D | Ordinal: 11550
        void glIsShader(unsigned int);

    // RVA: 0x2D2E | Ordinal: 11567
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D48 | Ordinal: 11593
        void glIsTexture(unsigned int);

    // RVA: 0x2D55 | Ordinal: 11606
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D68 | Ordinal: 11625
        void glIsVertexArray(unsigned int);

    // RVA: 0x2D7C | Ordinal: 11645
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D8D | Ordinal: 11662
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D9E | Ordinal: 11679
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DAF | Ordinal: 11696
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DC0 | Ordinal: 11713
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DD1 | Ordinal: 11730
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DE2 | Ordinal: 11747
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DF3 | Ordinal: 11764
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2E04 | Ordinal: 11781
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E1C | Ordinal: 11805
        void glLineWidth(float);

    // RVA: 0x2E31 | Ordinal: 11826
        void glLinkProgram(unsigned int);

    // RVA: 0x2E45 | Ordinal: 11846
        void glListBase(unsigned int);

    // RVA: 0x2E56 | Ordinal: 11863
        void glLoadIdentity(void);

    // RVA: 0x2E67 | Ordinal: 11880
        void glLoadMatrixd(double const *);

    // RVA: 0x2E78 | Ordinal: 11897
        void glLoadMatrixf(float const *);

    // RVA: 0x2E89 | Ordinal: 11914
        void glLoadName(unsigned int);

    // RVA: 0x2E97 | Ordinal: 11928
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2EA5 | Ordinal: 11942
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EBC | Ordinal: 11965
        void glLogicOp(unsigned int);

    // RVA: 0x2ED0 | Ordinal: 11985
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2EE1 | Ordinal: 12002
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EF2 | Ordinal: 12019
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2F03 | Ordinal: 12036
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F16 | Ordinal: 12055
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F29 | Ordinal: 12074
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2F3D | Ordinal: 12094
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F4E | Ordinal: 12111
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F5F | Ordinal: 12128
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F70 | Ordinal: 12145
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F85 | Ordinal: 12166
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F96 | Ordinal: 12183
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2FA7 | Ordinal: 12200
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FB8 | Ordinal: 12217
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FC9 | Ordinal: 12234
        void glMatrixMode(unsigned int);

    // RVA: 0x2FCF | Ordinal: 12240
        void glMemoryBarrier(unsigned int);

    // RVA: 0x2FDF | Ordinal: 12256
        void glMinSampleShading(float);

    // RVA: 0x2FF1 | Ordinal: 12274
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x3002 | Ordinal: 12291
        void glMultMatrixd(double const *);

    // RVA: 0x3013 | Ordinal: 12308
        void glMultMatrixf(float const *);

    // RVA: 0x3021 | Ordinal: 12322
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x302F | Ordinal: 12336
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x3042 | Ordinal: 12355
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3048 | Ordinal: 12361
        void glMultiDrawArraysIndirect(unsigned int, void const *, int, int);

    // RVA: 0x305E | Ordinal: 12383
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x306E | Ordinal: 12399
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3074 | Ordinal: 12405
        void glMultiDrawElementsIndirect(unsigned int, unsigned int, void const *, int, int);

    // RVA: 0x3085 | Ordinal: 12422
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x3093 | Ordinal: 12436
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x30A1 | Ordinal: 12450
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30AF | Ordinal: 12464
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30BD | Ordinal: 12478
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30CB | Ordinal: 12492
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30D9 | Ordinal: 12506
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30E7 | Ordinal: 12520
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30F5 | Ordinal: 12534
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x3103 | Ordinal: 12548
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x3111 | Ordinal: 12562
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x311F | Ordinal: 12576
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x312D | Ordinal: 12590
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x313B | Ordinal: 12604
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x3149 | Ordinal: 12618
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x3157 | Ordinal: 12632
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x3165 | Ordinal: 12646
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x3173 | Ordinal: 12660
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x3181 | Ordinal: 12674
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x318F | Ordinal: 12688
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x319D | Ordinal: 12702
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31AB | Ordinal: 12716
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31B9 | Ordinal: 12730
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31C7 | Ordinal: 12744
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31D5 | Ordinal: 12758
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31E3 | Ordinal: 12772
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31F1 | Ordinal: 12786
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31FF | Ordinal: 12800
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x320D | Ordinal: 12814
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x321B | Ordinal: 12828
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x3229 | Ordinal: 12842
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x3237 | Ordinal: 12856
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x3242 | Ordinal: 12867
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x324E | Ordinal: 12879
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x325A | Ordinal: 12891
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3266 | Ordinal: 12903
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3272 | Ordinal: 12915
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x327E | Ordinal: 12927
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x328A | Ordinal: 12939
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3296 | Ordinal: 12951
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x32C0 | Ordinal: 12993
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32D1 | Ordinal: 13010
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32E2 | Ordinal: 13027
        void glNormal3bv(signed char const *);

    // RVA: 0x32F3 | Ordinal: 13044
        void glNormal3d(double, double, double);

    // RVA: 0x3304 | Ordinal: 13061
        void glNormal3dv(double const *);

    // RVA: 0x3315 | Ordinal: 13078
        void glNormal3f(float, float, float);

    // RVA: 0x3326 | Ordinal: 13095
        void glNormal3fv(float const *);

    // RVA: 0x3337 | Ordinal: 13112
        void glNormal3i(int, int, int);

    // RVA: 0x3348 | Ordinal: 13129
        void glNormal3iv(int const *);

    // RVA: 0x3359 | Ordinal: 13146
        void glNormal3s(short, short, short);

    // RVA: 0x336A | Ordinal: 13163
        void glNormal3sv(short const *);

    // RVA: 0x3375 | Ordinal: 13174
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x3381 | Ordinal: 13186
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3392 | Ordinal: 13203
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33AD | Ordinal: 13230
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33BE | Ordinal: 13247
        void glPassThrough(float);

    // RVA: 0x33C7 | Ordinal: 13256
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33D4 | Ordinal: 13269
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33E1 | Ordinal: 13282
        void glPauseTransformFeedback(void);

    // RVA: 0x33F5 | Ordinal: 13302
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x3406 | Ordinal: 13319
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x3417 | Ordinal: 13336
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x342E | Ordinal: 13359
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3449 | Ordinal: 13386
        void glPixelStorei(unsigned int, int);

    // RVA: 0x345D | Ordinal: 13406
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x346E | Ordinal: 13423
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x347F | Ordinal: 13440
        void glPixelZoom(float, float);

    // RVA: 0x3492 | Ordinal: 13459
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34A8 | Ordinal: 13481
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34BE | Ordinal: 13503
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34D4 | Ordinal: 13525
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34EE | Ordinal: 13551
        void glPointSize(float);

    // RVA: 0x3508 | Ordinal: 13577
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3522 | Ordinal: 13603
        void glPolygonOffset(float, float);

    // RVA: 0x3536 | Ordinal: 13623
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x3547 | Ordinal: 13640
        void glPopAttrib(void);

    // RVA: 0x3557 | Ordinal: 13656
        void glPopClientAttrib(void);

    // RVA: 0x356D | Ordinal: 13678
        void glPopMatrix(void);

    // RVA: 0x357E | Ordinal: 13695
        void glPopName(void);

    // RVA: 0x358D | Ordinal: 13710
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x35A0 | Ordinal: 13729
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x35A8 | Ordinal: 13737
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35B3 | Ordinal: 13748
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35BD | Ordinal: 13758
        void glProgramUniform1d(unsigned int, int, double);

    // RVA: 0x35C7 | Ordinal: 13768
        void glProgramUniform1dv(unsigned int, int, int, double const *);

    // RVA: 0x35D2 | Ordinal: 13779
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35DD | Ordinal: 13790
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35E8 | Ordinal: 13801
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35F3 | Ordinal: 13812
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x35FE | Ordinal: 13823
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x3609 | Ordinal: 13834
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3613 | Ordinal: 13844
        void glProgramUniform2d(unsigned int, int, double, double);

    // RVA: 0x361D | Ordinal: 13854
        void glProgramUniform2dv(unsigned int, int, int, double const *);

    // RVA: 0x3628 | Ordinal: 13865
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x3633 | Ordinal: 13876
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x363E | Ordinal: 13887
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x3649 | Ordinal: 13898
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x3654 | Ordinal: 13909
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x365F | Ordinal: 13920
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3669 | Ordinal: 13930
        void glProgramUniform3d(unsigned int, int, double, double, double);

    // RVA: 0x3673 | Ordinal: 13940
        void glProgramUniform3dv(unsigned int, int, int, double const *);

    // RVA: 0x367E | Ordinal: 13951
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x3689 | Ordinal: 13962
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x3694 | Ordinal: 13973
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x369F | Ordinal: 13984
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36AA | Ordinal: 13995
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36B5 | Ordinal: 14006
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36BF | Ordinal: 14016
        void glProgramUniform4d(unsigned int, int, double, double, double, double);

    // RVA: 0x36C9 | Ordinal: 14026
        void glProgramUniform4dv(unsigned int, int, int, double const *);

    // RVA: 0x36D4 | Ordinal: 14037
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36DF | Ordinal: 14048
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36EA | Ordinal: 14059
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36F5 | Ordinal: 14070
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x3700 | Ordinal: 14081
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x370B | Ordinal: 14092
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3715 | Ordinal: 14102
        void glProgramUniformMatrix2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3720 | Ordinal: 14113
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x372A | Ordinal: 14123
        void glProgramUniformMatrix2x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3735 | Ordinal: 14134
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x373F | Ordinal: 14144
        void glProgramUniformMatrix2x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x374A | Ordinal: 14155
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3754 | Ordinal: 14165
        void glProgramUniformMatrix3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x375F | Ordinal: 14176
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3769 | Ordinal: 14186
        void glProgramUniformMatrix3x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3774 | Ordinal: 14197
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x377E | Ordinal: 14207
        void glProgramUniformMatrix3x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3789 | Ordinal: 14218
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3793 | Ordinal: 14228
        void glProgramUniformMatrix4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x379E | Ordinal: 14239
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37A8 | Ordinal: 14249
        void glProgramUniformMatrix4x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37B3 | Ordinal: 14260
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37BD | Ordinal: 14270
        void glProgramUniformMatrix4x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37C8 | Ordinal: 14281
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37D8 | Ordinal: 14297
        void glProvokingVertex(unsigned int);

    // RVA: 0x37EC | Ordinal: 14317
        void glPushAttrib(unsigned int);

    // RVA: 0x37FC | Ordinal: 14333
        void glPushClientAttrib(unsigned int);

    // RVA: 0x3812 | Ordinal: 14355
        void glPushMatrix(void);

    // RVA: 0x3823 | Ordinal: 14372
        void glPushName(unsigned int);

    // RVA: 0x382E | Ordinal: 14383
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x3842 | Ordinal: 14403
        void glRasterPos2d(double, double);

    // RVA: 0x3853 | Ordinal: 14420
        void glRasterPos2dv(double const *);

    // RVA: 0x3864 | Ordinal: 14437
        void glRasterPos2f(float, float);

    // RVA: 0x3875 | Ordinal: 14454
        void glRasterPos2fv(float const *);

    // RVA: 0x3886 | Ordinal: 14471
        void glRasterPos2i(int, int);

    // RVA: 0x3897 | Ordinal: 14488
        void glRasterPos2iv(int const *);

    // RVA: 0x38A8 | Ordinal: 14505
        void glRasterPos2s(short, short);

    // RVA: 0x38B9 | Ordinal: 14522
        void glRasterPos2sv(short const *);

    // RVA: 0x38CA | Ordinal: 14539
        void glRasterPos3d(double, double, double);

    // RVA: 0x38DB | Ordinal: 14556
        void glRasterPos3dv(double const *);

    // RVA: 0x38EC | Ordinal: 14573
        void glRasterPos3f(float, float, float);

    // RVA: 0x38FD | Ordinal: 14590
        void glRasterPos3fv(float const *);

    // RVA: 0x390E | Ordinal: 14607
        void glRasterPos3i(int, int, int);

    // RVA: 0x391F | Ordinal: 14624
        void glRasterPos3iv(int const *);

    // RVA: 0x3930 | Ordinal: 14641
        void glRasterPos3s(short, short, short);

    // RVA: 0x3941 | Ordinal: 14658
        void glRasterPos3sv(short const *);

    // RVA: 0x3952 | Ordinal: 14675
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x3963 | Ordinal: 14692
        void glRasterPos4dv(double const *);

    // RVA: 0x3974 | Ordinal: 14709
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x3985 | Ordinal: 14726
        void glRasterPos4fv(float const *);

    // RVA: 0x3996 | Ordinal: 14743
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x39A7 | Ordinal: 14760
        void glRasterPos4iv(int const *);

    // RVA: 0x39B8 | Ordinal: 14777
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39C9 | Ordinal: 14794
        void glRasterPos4sv(short const *);

    // RVA: 0x39E1 | Ordinal: 14818
        void glReadBuffer(unsigned int);

    // RVA: 0x39FC | Ordinal: 14845
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A13 | Ordinal: 14868
        void glRectd(double, double, double, double);

    // RVA: 0x3A24 | Ordinal: 14885
        void glRectdv(double const *, double const *);

    // RVA: 0x3A35 | Ordinal: 14902
        void glRectf(float, float, float, float);

    // RVA: 0x3A46 | Ordinal: 14919
        void glRectfv(float const *, float const *);

    // RVA: 0x3A57 | Ordinal: 14936
        void glRecti(int, int, int, int);

    // RVA: 0x3A68 | Ordinal: 14953
        void glRectiv(int const *, int const *);

    // RVA: 0x3A79 | Ordinal: 14970
        void glRects(short, short, short, short);

    // RVA: 0x3A8A | Ordinal: 14987
        void glRectsv(short const *, short const *);

    // RVA: 0x3A92 | Ordinal: 14995
        void glReleaseShaderCompiler(void);

    // RVA: 0x3AA6 | Ordinal: 15015
        void glRenderMode(unsigned int);

    // RVA: 0x3AB6 | Ordinal: 15031
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3AC9 | Ordinal: 15050
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3ADB | Ordinal: 15068
        void glResetHistogram(unsigned int);

    // RVA: 0x3AEA | Ordinal: 15083
        void glResetMinmax(unsigned int);

    // RVA: 0x3AF4 | Ordinal: 15093
        void glResumeTransformFeedback(void);

    // RVA: 0x3B08 | Ordinal: 15113
        void glRotated(double, double, double, double);

    // RVA: 0x3B19 | Ordinal: 15130
        void glRotatef(float, float, float, float);

    // RVA: 0x3B2E | Ordinal: 15151
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B3F | Ordinal: 15168
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B4E | Ordinal: 15183
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B5D | Ordinal: 15198
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B6C | Ordinal: 15213
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B7B | Ordinal: 15228
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B8A | Ordinal: 15243
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B99 | Ordinal: 15258
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BAD | Ordinal: 15278
        void glScaled(double, double, double);

    // RVA: 0x3BBE | Ordinal: 15295
        void glScalef(float, float, float);

    // RVA: 0x3BD6 | Ordinal: 15319
        void glScissor(int, int, int, int);

    // RVA: 0x3BE0 | Ordinal: 15329
        void glScissorArrayv(unsigned int, int, int const *);

    // RVA: 0x3BEA | Ordinal: 15339
        void glScissorIndexed(unsigned int, int, int, int, int);

    // RVA: 0x3BF4 | Ordinal: 15349
        void glScissorIndexedv(unsigned int, int const *);

    // RVA: 0x3C04 | Ordinal: 15365
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C11 | Ordinal: 15378
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C1E | Ordinal: 15391
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C2B | Ordinal: 15404
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C38 | Ordinal: 15417
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C45 | Ordinal: 15430
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C52 | Ordinal: 15443
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C5F | Ordinal: 15456
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C6C | Ordinal: 15469
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C79 | Ordinal: 15482
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C86 | Ordinal: 15495
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C93 | Ordinal: 15508
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3CA0 | Ordinal: 15521
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CAD | Ordinal: 15534
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CBA | Ordinal: 15547
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CC7 | Ordinal: 15560
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CD2 | Ordinal: 15571
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CDE | Ordinal: 15583
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3CEC | Ordinal: 15597
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CFD | Ordinal: 15614
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D0C | Ordinal: 15629
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D1D | Ordinal: 15646
        void glShadeModel(unsigned int);

    // RVA: 0x3D25 | Ordinal: 15654
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D3A | Ordinal: 15675
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D40 | Ordinal: 15681
        void glShaderStorageBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3D5B | Ordinal: 15708
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D70 | Ordinal: 15729
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D8B | Ordinal: 15756
        void glStencilMask(unsigned int);

    // RVA: 0x3DA0 | Ordinal: 15777
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DBB | Ordinal: 15804
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DD0 | Ordinal: 15825
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DE2 | Ordinal: 15843
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DE9 | Ordinal: 15850
        void glTexBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x3DFD | Ordinal: 15870
        void glTexCoord1d(double);

    // RVA: 0x3E0E | Ordinal: 15887
        void glTexCoord1dv(double const *);

    // RVA: 0x3E1F | Ordinal: 15904
        void glTexCoord1f(float);

    // RVA: 0x3E30 | Ordinal: 15921
        void glTexCoord1fv(float const *);

    // RVA: 0x3E41 | Ordinal: 15938
        void glTexCoord1i(int);

    // RVA: 0x3E52 | Ordinal: 15955
        void glTexCoord1iv(int const *);

    // RVA: 0x3E63 | Ordinal: 15972
        void glTexCoord1s(short);

    // RVA: 0x3E74 | Ordinal: 15989
        void glTexCoord1sv(short const *);

    // RVA: 0x3E85 | Ordinal: 16006
        void glTexCoord2d(double, double);

    // RVA: 0x3E96 | Ordinal: 16023
        void glTexCoord2dv(double const *);

    // RVA: 0x3EA7 | Ordinal: 16040
        void glTexCoord2f(float, float);

    // RVA: 0x3EB8 | Ordinal: 16057
        void glTexCoord2fv(float const *);

    // RVA: 0x3EC9 | Ordinal: 16074
        void glTexCoord2i(int, int);

    // RVA: 0x3EDA | Ordinal: 16091
        void glTexCoord2iv(int const *);

    // RVA: 0x3EEB | Ordinal: 16108
        void glTexCoord2s(short, short);

    // RVA: 0x3EFC | Ordinal: 16125
        void glTexCoord2sv(short const *);

    // RVA: 0x3F0D | Ordinal: 16142
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F1E | Ordinal: 16159
        void glTexCoord3dv(double const *);

    // RVA: 0x3F2F | Ordinal: 16176
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F40 | Ordinal: 16193
        void glTexCoord3fv(float const *);

    // RVA: 0x3F51 | Ordinal: 16210
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F62 | Ordinal: 16227
        void glTexCoord3iv(int const *);

    // RVA: 0x3F73 | Ordinal: 16244
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F84 | Ordinal: 16261
        void glTexCoord3sv(short const *);

    // RVA: 0x3F95 | Ordinal: 16278
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3FA6 | Ordinal: 16295
        void glTexCoord4dv(double const *);

    // RVA: 0x3FB7 | Ordinal: 16312
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FC8 | Ordinal: 16329
        void glTexCoord4fv(float const *);

    // RVA: 0x3FD9 | Ordinal: 16346
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FEA | Ordinal: 16363
        void glTexCoord4iv(int const *);

    // RVA: 0x3FFB | Ordinal: 16380
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x400C | Ordinal: 16397
        void glTexCoord4sv(short const *);

    // RVA: 0x4017 | Ordinal: 16408
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x4023 | Ordinal: 16420
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x402F | Ordinal: 16432
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x403B | Ordinal: 16444
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4047 | Ordinal: 16456
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x4053 | Ordinal: 16468
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x405F | Ordinal: 16480
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x406B | Ordinal: 16492
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x407C | Ordinal: 16509
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x408D | Ordinal: 16526
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x409E | Ordinal: 16543
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40AF | Ordinal: 16560
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40C0 | Ordinal: 16577
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40D1 | Ordinal: 16594
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40E2 | Ordinal: 16611
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40F3 | Ordinal: 16628
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x4104 | Ordinal: 16645
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4115 | Ordinal: 16662
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x4126 | Ordinal: 16679
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x413D | Ordinal: 16702
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4158 | Ordinal: 16729
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4168 | Ordinal: 16745
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x4181 | Ordinal: 16770
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4191 | Ordinal: 16786
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x41A4 | Ordinal: 16805
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41B7 | Ordinal: 16824
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41D2 | Ordinal: 16851
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41ED | Ordinal: 16878
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4208 | Ordinal: 16905
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4223 | Ordinal: 16932
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x422B | Ordinal: 16940
        void glTexStorage1D(unsigned int, int, unsigned int, int);

    // RVA: 0x4234 | Ordinal: 16949
        void glTexStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x423B | Ordinal: 16956
        void glTexStorage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4244 | Ordinal: 16965
        void glTexStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x424B | Ordinal: 16972
        void glTexStorage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x4264 | Ordinal: 16997
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x427E | Ordinal: 17023
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4297 | Ordinal: 17048
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42BF | Ordinal: 17088
        void glTextureView(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x42D6 | Ordinal: 17111
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x42EA | Ordinal: 17131
        void glTranslated(double, double, double);

    // RVA: 0x42FB | Ordinal: 17148
        void glTranslatef(float, float, float);

    // RVA: 0x4304 | Ordinal: 17157
        void glUniform1d(int, double);

    // RVA: 0x4310 | Ordinal: 17169
        void glUniform1dv(int, int, double const *);

    // RVA: 0x4325 | Ordinal: 17190
        void glUniform1f(int, float);

    // RVA: 0x433A | Ordinal: 17211
        void glUniform1fv(int, int, float const *);

    // RVA: 0x434F | Ordinal: 17232
        void glUniform1i(int, int);

    // RVA: 0x4364 | Ordinal: 17253
        void glUniform1iv(int, int, int const *);

    // RVA: 0x4377 | Ordinal: 17272
        void glUniform1ui(int, unsigned int);

    // RVA: 0x438A | Ordinal: 17291
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x4396 | Ordinal: 17303
        void glUniform2d(int, double, double);

    // RVA: 0x43A2 | Ordinal: 17315
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43B7 | Ordinal: 17336
        void glUniform2f(int, float, float);

    // RVA: 0x43CC | Ordinal: 17357
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43E1 | Ordinal: 17378
        void glUniform2i(int, int, int);

    // RVA: 0x43F6 | Ordinal: 17399
        void glUniform2iv(int, int, int const *);

    // RVA: 0x4409 | Ordinal: 17418
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x441C | Ordinal: 17437
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4428 | Ordinal: 17449
        void glUniform3d(int, double, double, double);

    // RVA: 0x4434 | Ordinal: 17461
        void glUniform3dv(int, int, double const *);

    // RVA: 0x4449 | Ordinal: 17482
        void glUniform3f(int, float, float, float);

    // RVA: 0x445E | Ordinal: 17503
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4473 | Ordinal: 17524
        void glUniform3i(int, int, int, int);

    // RVA: 0x4488 | Ordinal: 17545
        void glUniform3iv(int, int, int const *);

    // RVA: 0x449B | Ordinal: 17564
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44AE | Ordinal: 17583
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44BA | Ordinal: 17595
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44C6 | Ordinal: 17607
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44DB | Ordinal: 17628
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44F0 | Ordinal: 17649
        void glUniform4fv(int, int, float const *);

    // RVA: 0x4505 | Ordinal: 17670
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x451A | Ordinal: 17691
        void glUniform4iv(int, int, int const *);

    // RVA: 0x452D | Ordinal: 17710
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4540 | Ordinal: 17729
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4552 | Ordinal: 17747
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x455E | Ordinal: 17759
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x4573 | Ordinal: 17780
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x457F | Ordinal: 17792
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4593 | Ordinal: 17812
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x459F | Ordinal: 17824
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45B3 | Ordinal: 17844
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45BF | Ordinal: 17856
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45D4 | Ordinal: 17877
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45E0 | Ordinal: 17889
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45F4 | Ordinal: 17909
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4600 | Ordinal: 17921
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x4614 | Ordinal: 17941
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x4620 | Ordinal: 17953
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x4635 | Ordinal: 17974
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x4641 | Ordinal: 17986
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x4655 | Ordinal: 18006
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4661 | Ordinal: 18018
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4675 | Ordinal: 18038
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x4681 | Ordinal: 18050
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x4697 | Ordinal: 18072
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46AE | Ordinal: 18095
        void glUseProgram(unsigned int);

    // RVA: 0x46B9 | Ordinal: 18106
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46CE | Ordinal: 18127
        void glValidateProgram(unsigned int);

    // RVA: 0x46D9 | Ordinal: 18138
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x46ED | Ordinal: 18158
        void glVertex2d(double, double);

    // RVA: 0x46FE | Ordinal: 18175
        void glVertex2dv(double const *);

    // RVA: 0x470F | Ordinal: 18192
        void glVertex2f(float, float);

    // RVA: 0x4720 | Ordinal: 18209
        void glVertex2fv(float const *);

    // RVA: 0x4731 | Ordinal: 18226
        void glVertex2i(int, int);

    // RVA: 0x4742 | Ordinal: 18243
        void glVertex2iv(int const *);

    // RVA: 0x4753 | Ordinal: 18260
        void glVertex2s(short, short);

    // RVA: 0x4764 | Ordinal: 18277
        void glVertex2sv(short const *);

    // RVA: 0x4775 | Ordinal: 18294
        void glVertex3d(double, double, double);

    // RVA: 0x4786 | Ordinal: 18311
        void glVertex3dv(double const *);

    // RVA: 0x4797 | Ordinal: 18328
        void glVertex3f(float, float, float);

    // RVA: 0x47A8 | Ordinal: 18345
        void glVertex3fv(float const *);

    // RVA: 0x47B9 | Ordinal: 18362
        void glVertex3i(int, int, int);

    // RVA: 0x47CA | Ordinal: 18379
        void glVertex3iv(int const *);

    // RVA: 0x47DB | Ordinal: 18396
        void glVertex3s(short, short, short);

    // RVA: 0x47EC | Ordinal: 18413
        void glVertex3sv(short const *);

    // RVA: 0x47FD | Ordinal: 18430
        void glVertex4d(double, double, double, double);

    // RVA: 0x480E | Ordinal: 18447
        void glVertex4dv(double const *);

    // RVA: 0x481F | Ordinal: 18464
        void glVertex4f(float, float, float, float);

    // RVA: 0x4830 | Ordinal: 18481
        void glVertex4fv(float const *);

    // RVA: 0x4841 | Ordinal: 18498
        void glVertex4i(int, int, int, int);

    // RVA: 0x4852 | Ordinal: 18515
        void glVertex4iv(int const *);

    // RVA: 0x4863 | Ordinal: 18532
        void glVertex4s(short, short, short, short);

    // RVA: 0x4874 | Ordinal: 18549
        void glVertex4sv(short const *);

    // RVA: 0x488F | Ordinal: 18576
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x489C | Ordinal: 18589
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48AA | Ordinal: 18603
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48B8 | Ordinal: 18617
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48C5 | Ordinal: 18630
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48D2 | Ordinal: 18643
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48DF | Ordinal: 18656
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48EC | Ordinal: 18669
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48FA | Ordinal: 18683
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x4908 | Ordinal: 18697
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4915 | Ordinal: 18710
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x4922 | Ordinal: 18723
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x492F | Ordinal: 18736
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x493C | Ordinal: 18749
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x494A | Ordinal: 18763
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x4958 | Ordinal: 18777
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x4965 | Ordinal: 18790
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x4972 | Ordinal: 18803
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x497F | Ordinal: 18816
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x498C | Ordinal: 18829
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x4999 | Ordinal: 18842
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49A6 | Ordinal: 18855
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49B3 | Ordinal: 18868
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49C0 | Ordinal: 18881
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49CD | Ordinal: 18894
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49DA | Ordinal: 18907
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49E7 | Ordinal: 18920
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49F4 | Ordinal: 18933
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x4A02 | Ordinal: 18947
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A10 | Ordinal: 18961
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A1D | Ordinal: 18974
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A2A | Ordinal: 18987
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A37 | Ordinal: 19000
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A44 | Ordinal: 19013
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A51 | Ordinal: 19026
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A5E | Ordinal: 19039
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A64 | Ordinal: 19045
        void glVertexAttribBinding(unsigned int, unsigned int);

    // RVA: 0x4A73 | Ordinal: 19060
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A7A | Ordinal: 19067
        void glVertexAttribFormat(unsigned int, int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4A86 | Ordinal: 19079
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A91 | Ordinal: 19090
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4A9C | Ordinal: 19101
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AA7 | Ordinal: 19112
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AB2 | Ordinal: 19123
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4ABD | Ordinal: 19134
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4AC8 | Ordinal: 19145
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AD3 | Ordinal: 19156
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4ADE | Ordinal: 19167
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AE9 | Ordinal: 19178
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AF4 | Ordinal: 19189
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AFF | Ordinal: 19200
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B0A | Ordinal: 19211
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B16 | Ordinal: 19223
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B22 | Ordinal: 19235
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B2D | Ordinal: 19246
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B38 | Ordinal: 19257
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B44 | Ordinal: 19269
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B50 | Ordinal: 19281
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B5B | Ordinal: 19292
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B61 | Ordinal: 19298
        void glVertexAttribIFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4B74 | Ordinal: 19317
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4B7E | Ordinal: 19327
        void glVertexAttribL1d(unsigned int, double);

    // RVA: 0x4B88 | Ordinal: 19337
        void glVertexAttribL1dv(unsigned int, double const *);

    // RVA: 0x4B92 | Ordinal: 19347
        void glVertexAttribL2d(unsigned int, double, double);

    // RVA: 0x4B9C | Ordinal: 19357
        void glVertexAttribL2dv(unsigned int, double const *);

    // RVA: 0x4BA6 | Ordinal: 19367
        void glVertexAttribL3d(unsigned int, double, double, double);

    // RVA: 0x4BB0 | Ordinal: 19377
        void glVertexAttribL3dv(unsigned int, double const *);

    // RVA: 0x4BBA | Ordinal: 19387
        void glVertexAttribL4d(unsigned int, double, double, double, double);

    // RVA: 0x4BC4 | Ordinal: 19397
        void glVertexAttribL4dv(unsigned int, double const *);

    // RVA: 0x4BCA | Ordinal: 19403
        void glVertexAttribLFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4BD4 | Ordinal: 19413
        void glVertexAttribLPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BE2 | Ordinal: 19427
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BF0 | Ordinal: 19441
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4BFE | Ordinal: 19455
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C0C | Ordinal: 19469
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C1A | Ordinal: 19483
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C28 | Ordinal: 19497
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C36 | Ordinal: 19511
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C44 | Ordinal: 19525
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C59 | Ordinal: 19546
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C60 | Ordinal: 19553
        void glVertexBindingDivisor(unsigned int, unsigned int);

    // RVA: 0x4C6E | Ordinal: 19567
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C7A | Ordinal: 19579
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C86 | Ordinal: 19591
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C92 | Ordinal: 19603
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C9E | Ordinal: 19615
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CAA | Ordinal: 19627
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CBB | Ordinal: 19644
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CD3 | Ordinal: 19668
        void glViewport(int, int, int, int);

    // RVA: 0x4CDD | Ordinal: 19678
        void glViewportArrayv(unsigned int, int, float const *);

    // RVA: 0x4CE7 | Ordinal: 19688
        void glViewportIndexedf(unsigned int, float, float, float, float);

    // RVA: 0x4CF1 | Ordinal: 19698
        void glViewportIndexedfv(unsigned int, float const *);

    // RVA: 0x4D02 | Ordinal: 19715
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4D12 | Ordinal: 19731
        void glWindowPos2d(double, double);

    // RVA: 0x4D1F | Ordinal: 19744
        void glWindowPos2dv(double const *);

    // RVA: 0x4D2C | Ordinal: 19757
        void glWindowPos2f(float, float);

    // RVA: 0x4D39 | Ordinal: 19770
        void glWindowPos2fv(float const *);

    // RVA: 0x4D46 | Ordinal: 19783
        void glWindowPos2i(int, int);

    // RVA: 0x4D53 | Ordinal: 19796
        void glWindowPos2iv(int const *);

    // RVA: 0x4D60 | Ordinal: 19809
        void glWindowPos2s(short, short);

    // RVA: 0x4D6D | Ordinal: 19822
        void glWindowPos2sv(short const *);

    // RVA: 0x4D7A | Ordinal: 19835
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D87 | Ordinal: 19848
        void glWindowPos3dv(double const *);

    // RVA: 0x4D94 | Ordinal: 19861
        void glWindowPos3f(float, float, float);

    // RVA: 0x4DA1 | Ordinal: 19874
        void glWindowPos3fv(float const *);

    // RVA: 0x4DAE | Ordinal: 19887
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DBB | Ordinal: 19900
        void glWindowPos3iv(int const *);

    // RVA: 0x4DC8 | Ordinal: 19913
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DD5 | Ordinal: 19926
        void glWindowPos3sv(short const *);

    // RVA: 0x4F2E | Ordinal: 20271
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FF0 | Ordinal: 20465
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6114 | Ordinal: 24853
        void versionProfile(void);

    // RVA: 0x491 | Ordinal: 1170
        void _QOpenGLFunctions_4_3_Compatibility(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_3_COMPATIBILITY_HPP
