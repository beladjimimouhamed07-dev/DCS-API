#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_3_Core
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_3_Core
{
public:

    // RVA: 0x1C4 | Ordinal: 453
        void QOpenGLFunctions_4_3_Core(void);

    // RVA: 0x11CF | Ordinal: 4560
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x11E7 | Ordinal: 4584
        void glActiveTexture(unsigned int);

    // RVA: 0x122D | Ordinal: 4654
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1251 | Ordinal: 4690
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x1267 | Ordinal: 4712
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x1273 | Ordinal: 4724
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1286 | Ordinal: 4743
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x129B | Ordinal: 4764
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12B1 | Ordinal: 4786
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12C4 | Ordinal: 4805
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12D7 | Ordinal: 4824
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12F1 | Ordinal: 4850
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12FF | Ordinal: 4864
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x1312 | Ordinal: 4883
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x131B | Ordinal: 4892
        void glBindImageTexture(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int);

    // RVA: 0x132A | Ordinal: 4907
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x133D | Ordinal: 4926
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x134C | Ordinal: 4941
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x136A | Ordinal: 4971
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x137D | Ordinal: 4990
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1390 | Ordinal: 5009
        void glBindVertexArray(unsigned int);

    // RVA: 0x1397 | Ordinal: 5016
        void glBindVertexBuffer(unsigned int, unsigned int, __int64, int);

    // RVA: 0x13C6 | Ordinal: 5063
        void glBlendColor(float, float, float, float);

    // RVA: 0x13DF | Ordinal: 5088
        void glBlendEquation(unsigned int);

    // RVA: 0x13F4 | Ordinal: 5109
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x1401 | Ordinal: 5122
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x140E | Ordinal: 5135
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x1429 | Ordinal: 5162
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1440 | Ordinal: 5185
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x144D | Ordinal: 5198
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x145A | Ordinal: 5211
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x146D | Ordinal: 5230
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1485 | Ordinal: 5254
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x149F | Ordinal: 5280
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14D4 | Ordinal: 5333
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14E8 | Ordinal: 5353
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x1503 | Ordinal: 5380
        void glClear(unsigned int);

    // RVA: 0x151A | Ordinal: 5403
        void glClearBufferData(unsigned int, unsigned int, unsigned int, unsigned int, void const *);

    // RVA: 0x1520 | Ordinal: 5409
        void glClearBufferSubData(unsigned int, unsigned int, __int64, __int64, unsigned int, unsigned int, void const *);

    // RVA: 0x1533 | Ordinal: 5428
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1546 | Ordinal: 5447
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x1559 | Ordinal: 5466
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x156C | Ordinal: 5485
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x1587 | Ordinal: 5512
        void glClearColor(float, float, float, float);

    // RVA: 0x15A1 | Ordinal: 5538
        void glClearDepth(double);

    // RVA: 0x15AC | Ordinal: 5549
        void glClearDepthf(float);

    // RVA: 0x15E4 | Ordinal: 5605
        void glClearStencil(int);

    // RVA: 0x160B | Ordinal: 5644
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x1859 | Ordinal: 6234
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x186C | Ordinal: 6253
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x188B | Ordinal: 6284
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x1897 | Ordinal: 6296
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x18A3 | Ordinal: 6308
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18AF | Ordinal: 6320
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x190E | Ordinal: 6415
        void glCompileShader(unsigned int);

    // RVA: 0x1925 | Ordinal: 6438
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x193D | Ordinal: 6462
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1955 | Ordinal: 6486
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x196C | Ordinal: 6509
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1984 | Ordinal: 6533
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x199C | Ordinal: 6557
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A0E | Ordinal: 6671
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A51 | Ordinal: 6738
        void glCopyImageSubData(unsigned int, unsigned int, int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1A7D | Ordinal: 6782
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A97 | Ordinal: 6808
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AB0 | Ordinal: 6833
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ACA | Ordinal: 6859
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AE3 | Ordinal: 6884
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1B02 | Ordinal: 6915
        void glCreateProgram(void);

    // RVA: 0x1B1F | Ordinal: 6944
        void glCreateShader(unsigned int);

    // RVA: 0x1B2A | Ordinal: 6955
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B4B | Ordinal: 6988
        void glCullFace(unsigned int);

    // RVA: 0x1B70 | Ordinal: 7025
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B83 | Ordinal: 7044
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1BA9 | Ordinal: 7082
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BB4 | Ordinal: 7093
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BCA | Ordinal: 7115
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BDD | Ordinal: 7134
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BEC | Ordinal: 7149
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1C01 | Ordinal: 7170
        void glDeleteShader(unsigned int);

    // RVA: 0x1C12 | Ordinal: 7187
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C2C | Ordinal: 7213
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C39 | Ordinal: 7226
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C4C | Ordinal: 7245
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C67 | Ordinal: 7272
        void glDepthFunc(unsigned int);

    // RVA: 0x1C82 | Ordinal: 7299
        void glDepthMask(unsigned char);

    // RVA: 0x1C9C | Ordinal: 7325
        void glDepthRange(double, double);

    // RVA: 0x1CA6 | Ordinal: 7335
        void glDepthRangeArrayv(unsigned int, int, double const *);

    // RVA: 0x1CB0 | Ordinal: 7345
        void glDepthRangeIndexed(unsigned int, double, double);

    // RVA: 0x1CBB | Ordinal: 7356
        void glDepthRangef(float, float);

    // RVA: 0x1CD0 | Ordinal: 7377
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CEB | Ordinal: 7404
        void glDisable(unsigned int);

    // RVA: 0x1D12 | Ordinal: 7443
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D25 | Ordinal: 7462
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D2D | Ordinal: 7470
        void glDispatchCompute(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1D34 | Ordinal: 7477
        void glDispatchComputeIndirect(__int64);

    // RVA: 0x1D4E | Ordinal: 7503
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D5B | Ordinal: 7516
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D6D | Ordinal: 7534
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D75 | Ordinal: 7542
        void glDrawArraysInstancedBaseInstance(unsigned int, int, int, int, unsigned int);

    // RVA: 0x1D8F | Ordinal: 7568
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DA4 | Ordinal: 7589
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DBE | Ordinal: 7615
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DCF | Ordinal: 7632
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DDC | Ordinal: 7645
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DEE | Ordinal: 7663
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DF6 | Ordinal: 7671
        void glDrawElementsInstancedBaseInstance(unsigned int, int, unsigned int, void const *, int, unsigned int);

    // RVA: 0x1E07 | Ordinal: 7688
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E0F | Ordinal: 7696
        void glDrawElementsInstancedBaseVertexBaseInstance(unsigned int, int, unsigned int, void const *, int, int, unsigned int);

    // RVA: 0x1E39 | Ordinal: 7738
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E4A | Ordinal: 7755
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E56 | Ordinal: 7767
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E5E | Ordinal: 7775
        void glDrawTransformFeedbackInstanced(unsigned int, unsigned int, int);

    // RVA: 0x1E6A | Ordinal: 7787
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1E72 | Ordinal: 7795
        void glDrawTransformFeedbackStreamInstanced(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x1EBF | Ordinal: 7872
        void glEnable(unsigned int);

    // RVA: 0x1EE6 | Ordinal: 7911
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EF9 | Ordinal: 7930
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F1C | Ordinal: 7965
        void glEndConditionalRender(void);

    // RVA: 0x1F43 | Ordinal: 8004
        void glEndQuery(unsigned int);

    // RVA: 0x1F4F | Ordinal: 8016
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F62 | Ordinal: 8035
        void glEndTransformFeedback(void);

    // RVA: 0x2050 | Ordinal: 8273
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x206B | Ordinal: 8300
        void glFinish(void);

    // RVA: 0x2086 | Ordinal: 8327
        void glFlush(void);

    // RVA: 0x2099 | Ordinal: 8346
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x2128 | Ordinal: 8489
        void glFramebufferParameteri(unsigned int, unsigned int, int);

    // RVA: 0x213B | Ordinal: 8508
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2183 | Ordinal: 8580
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x214D | Ordinal: 8526
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2160 | Ordinal: 8545
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2172 | Ordinal: 8563
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2196 | Ordinal: 8599
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21B1 | Ordinal: 8626
        void glFrontFace(unsigned int);

    // RVA: 0x21D8 | Ordinal: 8665
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21EB | Ordinal: 8684
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x2207 | Ordinal: 8712
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x221D | Ordinal: 8734
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2230 | Ordinal: 8753
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x223F | Ordinal: 8768
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x2259 | Ordinal: 8794
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2266 | Ordinal: 8807
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x2279 | Ordinal: 8826
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x228C | Ordinal: 8845
        void glGenerateMipmap(unsigned int);

    // RVA: 0x2296 | Ordinal: 8855
        void glGetActiveAtomicCounterBufferiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22AB | Ordinal: 8876
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22B7 | Ordinal: 8888
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22C3 | Ordinal: 8900
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22CF | Ordinal: 8912
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22E4 | Ordinal: 8933
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22F6 | Ordinal: 8951
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2308 | Ordinal: 8969
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2319 | Ordinal: 8986
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x232B | Ordinal: 9004
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2340 | Ordinal: 9025
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2355 | Ordinal: 9046
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2368 | Ordinal: 9065
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2383 | Ordinal: 9092
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2394 | Ordinal: 9109
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23AA | Ordinal: 9131
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23C0 | Ordinal: 9153
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23D6 | Ordinal: 9175
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x242B | Ordinal: 9260
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x246B | Ordinal: 9324
        void glGetDoublei_v(unsigned int, unsigned int, double *);

    // RVA: 0x2485 | Ordinal: 9350
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x24A0 | Ordinal: 9377
        void glGetError(void);

    // RVA: 0x24AA | Ordinal: 9387
        void glGetFloati_v(unsigned int, unsigned int, float *);

    // RVA: 0x24C5 | Ordinal: 9414
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24D3 | Ordinal: 9428
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24E6 | Ordinal: 9447
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24F9 | Ordinal: 9466
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2500 | Ordinal: 9473
        void glGetFramebufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2541 | Ordinal: 9538
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2552 | Ordinal: 9555
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2565 | Ordinal: 9574
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2580 | Ordinal: 9601
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2586 | Ordinal: 9607
        void glGetInternalformati64v(unsigned int, unsigned int, unsigned int, int, __int64 *);

    // RVA: 0x258F | Ordinal: 9616
        void glGetInternalformativ(unsigned int, unsigned int, unsigned int, int, int *);

    // RVA: 0x2644 | Ordinal: 9797
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x26A9 | Ordinal: 9898
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26C3 | Ordinal: 9924
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26D8 | Ordinal: 9945
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26DF | Ordinal: 9952
        void glGetProgramInterfaceiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x26EA | Ordinal: 9963
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26F5 | Ordinal: 9974
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x26FC | Ordinal: 9981
        void glGetProgramResourceIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2703 | Ordinal: 9988
        void glGetProgramResourceLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x2709 | Ordinal: 9994
        void glGetProgramResourceLocationIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2710 | Ordinal: 10001
        void glGetProgramResourceName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2717 | Ordinal: 10008
        void glGetProgramResourceiv(unsigned int, unsigned int, unsigned int, int, unsigned int const *, int, int *, int *);

    // RVA: 0x2723 | Ordinal: 10020
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2738 | Ordinal: 10041
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2744 | Ordinal: 10053
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2752 | Ordinal: 10067
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2767 | Ordinal: 10088
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2775 | Ordinal: 10102
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x278B | Ordinal: 10124
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27A1 | Ordinal: 10146
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27B4 | Ordinal: 10165
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27C3 | Ordinal: 10180
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27D2 | Ordinal: 10195
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27E1 | Ordinal: 10210
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27F0 | Ordinal: 10225
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2814 | Ordinal: 10261
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x281F | Ordinal: 10272
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x2834 | Ordinal: 10293
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2849 | Ordinal: 10314
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2864 | Ordinal: 10341
        void glGetString(unsigned int);

    // RVA: 0x2877 | Ordinal: 10360
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2883 | Ordinal: 10372
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x288F | Ordinal: 10384
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x28A0 | Ordinal: 10401
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x290F | Ordinal: 10512
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x292A | Ordinal: 10539
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2945 | Ordinal: 10566
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2958 | Ordinal: 10585
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x296B | Ordinal: 10604
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2986 | Ordinal: 10631
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x29A1 | Ordinal: 10658
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29C4 | Ordinal: 10693
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29DC | Ordinal: 10717
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29EE | Ordinal: 10735
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x2A03 | Ordinal: 10756
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A0F | Ordinal: 10768
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A1B | Ordinal: 10780
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A30 | Ordinal: 10801
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A45 | Ordinal: 10822
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A58 | Ordinal: 10841
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A71 | Ordinal: 10866
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A84 | Ordinal: 10885
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A8E | Ordinal: 10895
        void glGetVertexAttribLdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AA3 | Ordinal: 10916
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AB7 | Ordinal: 10936
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2ACC | Ordinal: 10957
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AE1 | Ordinal: 10978
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B17 | Ordinal: 11032
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2BE8 | Ordinal: 11241
        void glIndexub(unsigned char);

    // RVA: 0x2BFF | Ordinal: 11264
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C25 | Ordinal: 11302
        void glInvalidateBufferData(unsigned int);

    // RVA: 0x2C2B | Ordinal: 11308
        void glInvalidateBufferSubData(unsigned int, __int64, __int64);

    // RVA: 0x2C32 | Ordinal: 11315
        void glInvalidateFramebuffer(unsigned int, int, unsigned int const *);

    // RVA: 0x2C3D | Ordinal: 11326
        void glInvalidateSubFramebuffer(unsigned int, int, unsigned int const *, int, int, int, int);

    // RVA: 0x2C43 | Ordinal: 11332
        void glInvalidateTexImage(unsigned int, int);

    // RVA: 0x2C49 | Ordinal: 11338
        void glInvalidateTexSubImage(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x2C5F | Ordinal: 11360
        void glIsBuffer(unsigned int);

    // RVA: 0x2C7A | Ordinal: 11387
        void glIsEnabled(unsigned int);

    // RVA: 0x2C8D | Ordinal: 11406
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2CA0 | Ordinal: 11425
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CC6 | Ordinal: 11463
        void glIsProgram(unsigned int);

    // RVA: 0x2CD1 | Ordinal: 11474
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CE7 | Ordinal: 11496
        void glIsQuery(unsigned int);

    // RVA: 0x2CFA | Ordinal: 11515
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D09 | Ordinal: 11530
        void glIsSampler(unsigned int);

    // RVA: 0x2D1E | Ordinal: 11551
        void glIsShader(unsigned int);

    // RVA: 0x2D2F | Ordinal: 11568
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D49 | Ordinal: 11594
        void glIsTexture(unsigned int);

    // RVA: 0x2D56 | Ordinal: 11607
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D69 | Ordinal: 11626
        void glIsVertexArray(unsigned int);

    // RVA: 0x2E1D | Ordinal: 11806
        void glLineWidth(float);

    // RVA: 0x2E32 | Ordinal: 11827
        void glLinkProgram(unsigned int);

    // RVA: 0x2EBD | Ordinal: 11966
        void glLogicOp(unsigned int);

    // RVA: 0x2F17 | Ordinal: 12056
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F2A | Ordinal: 12075
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2FD0 | Ordinal: 12241
        void glMemoryBarrier(unsigned int);

    // RVA: 0x2FE0 | Ordinal: 12257
        void glMinSampleShading(float);

    // RVA: 0x3043 | Ordinal: 12356
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3049 | Ordinal: 12362
        void glMultiDrawArraysIndirect(unsigned int, void const *, int, int);

    // RVA: 0x305F | Ordinal: 12384
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x306F | Ordinal: 12400
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3075 | Ordinal: 12406
        void glMultiDrawElementsIndirect(unsigned int, unsigned int, void const *, int, int);

    // RVA: 0x3243 | Ordinal: 12868
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x324F | Ordinal: 12880
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x325B | Ordinal: 12892
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3267 | Ordinal: 12904
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3273 | Ordinal: 12916
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x327F | Ordinal: 12928
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x328B | Ordinal: 12940
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3297 | Ordinal: 12952
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3376 | Ordinal: 13175
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x3382 | Ordinal: 13187
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x33C8 | Ordinal: 13257
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33D5 | Ordinal: 13270
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33E2 | Ordinal: 13283
        void glPauseTransformFeedback(void);

    // RVA: 0x342F | Ordinal: 13360
        void glPixelStoref(unsigned int, float);

    // RVA: 0x344A | Ordinal: 13387
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3493 | Ordinal: 13460
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34A9 | Ordinal: 13482
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34BF | Ordinal: 13504
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34D5 | Ordinal: 13526
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34EF | Ordinal: 13552
        void glPointSize(float);

    // RVA: 0x3509 | Ordinal: 13578
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3523 | Ordinal: 13604
        void glPolygonOffset(float, float);

    // RVA: 0x358E | Ordinal: 13711
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x35A9 | Ordinal: 13738
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35B4 | Ordinal: 13749
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35BE | Ordinal: 13759
        void glProgramUniform1d(unsigned int, int, double);

    // RVA: 0x35C8 | Ordinal: 13769
        void glProgramUniform1dv(unsigned int, int, int, double const *);

    // RVA: 0x35D3 | Ordinal: 13780
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35DE | Ordinal: 13791
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35E9 | Ordinal: 13802
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35F4 | Ordinal: 13813
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x35FF | Ordinal: 13824
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x360A | Ordinal: 13835
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3614 | Ordinal: 13845
        void glProgramUniform2d(unsigned int, int, double, double);

    // RVA: 0x361E | Ordinal: 13855
        void glProgramUniform2dv(unsigned int, int, int, double const *);

    // RVA: 0x3629 | Ordinal: 13866
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x3634 | Ordinal: 13877
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x363F | Ordinal: 13888
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x364A | Ordinal: 13899
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x3655 | Ordinal: 13910
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x3660 | Ordinal: 13921
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x366A | Ordinal: 13931
        void glProgramUniform3d(unsigned int, int, double, double, double);

    // RVA: 0x3674 | Ordinal: 13941
        void glProgramUniform3dv(unsigned int, int, int, double const *);

    // RVA: 0x367F | Ordinal: 13952
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x368A | Ordinal: 13963
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x3695 | Ordinal: 13974
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x36A0 | Ordinal: 13985
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36AB | Ordinal: 13996
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36B6 | Ordinal: 14007
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36C0 | Ordinal: 14017
        void glProgramUniform4d(unsigned int, int, double, double, double, double);

    // RVA: 0x36CA | Ordinal: 14027
        void glProgramUniform4dv(unsigned int, int, int, double const *);

    // RVA: 0x36D5 | Ordinal: 14038
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36E0 | Ordinal: 14049
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36EB | Ordinal: 14060
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36F6 | Ordinal: 14071
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x3701 | Ordinal: 14082
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x370C | Ordinal: 14093
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3716 | Ordinal: 14103
        void glProgramUniformMatrix2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3721 | Ordinal: 14114
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x372B | Ordinal: 14124
        void glProgramUniformMatrix2x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3736 | Ordinal: 14135
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3740 | Ordinal: 14145
        void glProgramUniformMatrix2x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x374B | Ordinal: 14156
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3755 | Ordinal: 14166
        void glProgramUniformMatrix3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3760 | Ordinal: 14177
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x376A | Ordinal: 14187
        void glProgramUniformMatrix3x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3775 | Ordinal: 14198
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x377F | Ordinal: 14208
        void glProgramUniformMatrix3x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x378A | Ordinal: 14219
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3794 | Ordinal: 14229
        void glProgramUniformMatrix4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x379F | Ordinal: 14240
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37A9 | Ordinal: 14250
        void glProgramUniformMatrix4x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37B4 | Ordinal: 14261
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37BE | Ordinal: 14271
        void glProgramUniformMatrix4x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37C9 | Ordinal: 14282
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37D9 | Ordinal: 14298
        void glProvokingVertex(unsigned int);

    // RVA: 0x382F | Ordinal: 14384
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x39E2 | Ordinal: 14819
        void glReadBuffer(unsigned int);

    // RVA: 0x39FD | Ordinal: 14846
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A93 | Ordinal: 14996
        void glReleaseShaderCompiler(void);

    // RVA: 0x3AB7 | Ordinal: 15032
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3ACA | Ordinal: 15051
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AF5 | Ordinal: 15094
        void glResumeTransformFeedback(void);

    // RVA: 0x3B2F | Ordinal: 15152
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B40 | Ordinal: 15169
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B4F | Ordinal: 15184
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B5E | Ordinal: 15199
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B6D | Ordinal: 15214
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B7C | Ordinal: 15229
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B8B | Ordinal: 15244
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B9A | Ordinal: 15259
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BD7 | Ordinal: 15320
        void glScissor(int, int, int, int);

    // RVA: 0x3BE1 | Ordinal: 15330
        void glScissorArrayv(unsigned int, int, int const *);

    // RVA: 0x3BEB | Ordinal: 15340
        void glScissorIndexed(unsigned int, int, int, int, int);

    // RVA: 0x3BF5 | Ordinal: 15350
        void glScissorIndexedv(unsigned int, int const *);

    // RVA: 0x3CD3 | Ordinal: 15572
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CDF | Ordinal: 15584
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3D26 | Ordinal: 15655
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D3B | Ordinal: 15676
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D41 | Ordinal: 15682
        void glShaderStorageBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3D5C | Ordinal: 15709
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D71 | Ordinal: 15730
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D8C | Ordinal: 15757
        void glStencilMask(unsigned int);

    // RVA: 0x3DA1 | Ordinal: 15778
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DBC | Ordinal: 15805
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DD1 | Ordinal: 15826
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DE3 | Ordinal: 15844
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DEA | Ordinal: 15851
        void glTexBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x4018 | Ordinal: 16409
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x4024 | Ordinal: 16421
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4030 | Ordinal: 16433
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x403C | Ordinal: 16445
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4048 | Ordinal: 16457
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x4054 | Ordinal: 16469
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4060 | Ordinal: 16481
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x406C | Ordinal: 16493
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x413E | Ordinal: 16703
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4159 | Ordinal: 16730
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4169 | Ordinal: 16746
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x4182 | Ordinal: 16771
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4192 | Ordinal: 16787
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x41A5 | Ordinal: 16806
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41B8 | Ordinal: 16825
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41D3 | Ordinal: 16852
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41EE | Ordinal: 16879
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4209 | Ordinal: 16906
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4224 | Ordinal: 16933
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x422C | Ordinal: 16941
        void glTexStorage1D(unsigned int, int, unsigned int, int);

    // RVA: 0x4235 | Ordinal: 16950
        void glTexStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x423C | Ordinal: 16957
        void glTexStorage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4245 | Ordinal: 16966
        void glTexStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x424C | Ordinal: 16973
        void glTexStorage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x4265 | Ordinal: 16998
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x427F | Ordinal: 17024
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4298 | Ordinal: 17049
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42C0 | Ordinal: 17089
        void glTextureView(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x42D7 | Ordinal: 17112
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x4305 | Ordinal: 17158
        void glUniform1d(int, double);

    // RVA: 0x4311 | Ordinal: 17170
        void glUniform1dv(int, int, double const *);

    // RVA: 0x4326 | Ordinal: 17191
        void glUniform1f(int, float);

    // RVA: 0x433B | Ordinal: 17212
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4350 | Ordinal: 17233
        void glUniform1i(int, int);

    // RVA: 0x4365 | Ordinal: 17254
        void glUniform1iv(int, int, int const *);

    // RVA: 0x4378 | Ordinal: 17273
        void glUniform1ui(int, unsigned int);

    // RVA: 0x438B | Ordinal: 17292
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x4397 | Ordinal: 17304
        void glUniform2d(int, double, double);

    // RVA: 0x43A3 | Ordinal: 17316
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43B8 | Ordinal: 17337
        void glUniform2f(int, float, float);

    // RVA: 0x43CD | Ordinal: 17358
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43E2 | Ordinal: 17379
        void glUniform2i(int, int, int);

    // RVA: 0x43F7 | Ordinal: 17400
        void glUniform2iv(int, int, int const *);

    // RVA: 0x440A | Ordinal: 17419
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x441D | Ordinal: 17438
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4429 | Ordinal: 17450
        void glUniform3d(int, double, double, double);

    // RVA: 0x4435 | Ordinal: 17462
        void glUniform3dv(int, int, double const *);

    // RVA: 0x444A | Ordinal: 17483
        void glUniform3f(int, float, float, float);

    // RVA: 0x445F | Ordinal: 17504
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4474 | Ordinal: 17525
        void glUniform3i(int, int, int, int);

    // RVA: 0x4489 | Ordinal: 17546
        void glUniform3iv(int, int, int const *);

    // RVA: 0x449C | Ordinal: 17565
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44AF | Ordinal: 17584
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44BB | Ordinal: 17596
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44C7 | Ordinal: 17608
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44DC | Ordinal: 17629
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44F1 | Ordinal: 17650
        void glUniform4fv(int, int, float const *);

    // RVA: 0x4506 | Ordinal: 17671
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x451B | Ordinal: 17692
        void glUniform4iv(int, int, int const *);

    // RVA: 0x452E | Ordinal: 17711
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4541 | Ordinal: 17730
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4553 | Ordinal: 17748
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x455F | Ordinal: 17760
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x4574 | Ordinal: 17781
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x4580 | Ordinal: 17793
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4594 | Ordinal: 17813
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45A0 | Ordinal: 17825
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45B4 | Ordinal: 17845
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45C0 | Ordinal: 17857
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45D5 | Ordinal: 17878
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45E1 | Ordinal: 17890
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45F5 | Ordinal: 17910
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4601 | Ordinal: 17922
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x4615 | Ordinal: 17942
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x4621 | Ordinal: 17954
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x4636 | Ordinal: 17975
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x4642 | Ordinal: 17987
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x4656 | Ordinal: 18007
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4662 | Ordinal: 18019
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4676 | Ordinal: 18039
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x4682 | Ordinal: 18051
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x4698 | Ordinal: 18073
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46AF | Ordinal: 18096
        void glUseProgram(unsigned int);

    // RVA: 0x46BA | Ordinal: 18107
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46CF | Ordinal: 18128
        void glValidateProgram(unsigned int);

    // RVA: 0x46DA | Ordinal: 18139
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x4A65 | Ordinal: 19046
        void glVertexAttribBinding(unsigned int, unsigned int);

    // RVA: 0x4A74 | Ordinal: 19061
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A7B | Ordinal: 19068
        void glVertexAttribFormat(unsigned int, int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4B62 | Ordinal: 19299
        void glVertexAttribIFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4B75 | Ordinal: 19318
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4B7F | Ordinal: 19328
        void glVertexAttribL1d(unsigned int, double);

    // RVA: 0x4B89 | Ordinal: 19338
        void glVertexAttribL1dv(unsigned int, double const *);

    // RVA: 0x4B93 | Ordinal: 19348
        void glVertexAttribL2d(unsigned int, double, double);

    // RVA: 0x4B9D | Ordinal: 19358
        void glVertexAttribL2dv(unsigned int, double const *);

    // RVA: 0x4BA7 | Ordinal: 19368
        void glVertexAttribL3d(unsigned int, double, double, double);

    // RVA: 0x4BB1 | Ordinal: 19378
        void glVertexAttribL3dv(unsigned int, double const *);

    // RVA: 0x4BBB | Ordinal: 19388
        void glVertexAttribL4d(unsigned int, double, double, double, double);

    // RVA: 0x4BC5 | Ordinal: 19398
        void glVertexAttribL4dv(unsigned int, double const *);

    // RVA: 0x4BCB | Ordinal: 19404
        void glVertexAttribLFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4BD5 | Ordinal: 19414
        void glVertexAttribLPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BE3 | Ordinal: 19428
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BF1 | Ordinal: 19442
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4BFF | Ordinal: 19456
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C0D | Ordinal: 19470
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C1B | Ordinal: 19484
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C29 | Ordinal: 19498
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C37 | Ordinal: 19512
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C45 | Ordinal: 19526
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C5A | Ordinal: 19547
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C61 | Ordinal: 19554
        void glVertexBindingDivisor(unsigned int, unsigned int);

    // RVA: 0x4C6F | Ordinal: 19568
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C7B | Ordinal: 19580
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C87 | Ordinal: 19592
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C93 | Ordinal: 19604
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C9F | Ordinal: 19616
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CAB | Ordinal: 19628
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CD4 | Ordinal: 19669
        void glViewport(int, int, int, int);

    // RVA: 0x4CDE | Ordinal: 19679
        void glViewportArrayv(unsigned int, int, float const *);

    // RVA: 0x4CE8 | Ordinal: 19689
        void glViewportIndexedf(unsigned int, float, float, float, float);

    // RVA: 0x4CF2 | Ordinal: 19699
        void glViewportIndexedfv(unsigned int, float const *);

    // RVA: 0x4D03 | Ordinal: 19716
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4F2F | Ordinal: 20272
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FF1 | Ordinal: 20466
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6115 | Ordinal: 24854
        void versionProfile(void);

    // RVA: 0x492 | Ordinal: 1171
        void _QOpenGLFunctions_4_3_Core(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_3_CORE_HPP
