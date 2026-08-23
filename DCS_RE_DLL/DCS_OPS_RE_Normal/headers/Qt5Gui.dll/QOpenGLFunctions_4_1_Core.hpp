#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_1_Core
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_1_Core
{
public:

    // RVA: 0x1C0 | Ordinal: 449
        void QOpenGLFunctions_4_1_Core(void);

    // RVA: 0x11CB | Ordinal: 4556
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x11E3 | Ordinal: 4580
        void glActiveTexture(unsigned int);

    // RVA: 0x1229 | Ordinal: 4650
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x124D | Ordinal: 4686
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x1263 | Ordinal: 4708
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x126F | Ordinal: 4720
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1282 | Ordinal: 4739
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x1297 | Ordinal: 4760
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12AD | Ordinal: 4782
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12C0 | Ordinal: 4801
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12D3 | Ordinal: 4820
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12ED | Ordinal: 4846
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12FB | Ordinal: 4860
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x130E | Ordinal: 4879
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1326 | Ordinal: 4903
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x1339 | Ordinal: 4922
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x1348 | Ordinal: 4937
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1366 | Ordinal: 4967
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1379 | Ordinal: 4986
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x138C | Ordinal: 5005
        void glBindVertexArray(unsigned int);

    // RVA: 0x13C2 | Ordinal: 5059
        void glBlendColor(float, float, float, float);

    // RVA: 0x13DB | Ordinal: 5084
        void glBlendEquation(unsigned int);

    // RVA: 0x13F0 | Ordinal: 5105
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x13FD | Ordinal: 5118
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x140A | Ordinal: 5131
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x1425 | Ordinal: 5158
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x143C | Ordinal: 5181
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1449 | Ordinal: 5194
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1456 | Ordinal: 5207
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1469 | Ordinal: 5226
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1481 | Ordinal: 5250
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x149B | Ordinal: 5276
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14D0 | Ordinal: 5329
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14E4 | Ordinal: 5349
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x14FF | Ordinal: 5376
        void glClear(unsigned int);

    // RVA: 0x152F | Ordinal: 5424
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1542 | Ordinal: 5443
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x1555 | Ordinal: 5462
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1568 | Ordinal: 5481
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x1583 | Ordinal: 5508
        void glClearColor(float, float, float, float);

    // RVA: 0x159D | Ordinal: 5534
        void glClearDepth(double);

    // RVA: 0x15A8 | Ordinal: 5545
        void glClearDepthf(float);

    // RVA: 0x15E0 | Ordinal: 5601
        void glClearStencil(int);

    // RVA: 0x1607 | Ordinal: 5640
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x1855 | Ordinal: 6230
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1868 | Ordinal: 6249
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1887 | Ordinal: 6280
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x1893 | Ordinal: 6292
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x189F | Ordinal: 6304
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18AB | Ordinal: 6316
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x190A | Ordinal: 6411
        void glCompileShader(unsigned int);

    // RVA: 0x1921 | Ordinal: 6434
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1939 | Ordinal: 6458
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1951 | Ordinal: 6482
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1968 | Ordinal: 6505
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1980 | Ordinal: 6529
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1998 | Ordinal: 6553
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A0A | Ordinal: 6667
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A79 | Ordinal: 6778
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A93 | Ordinal: 6804
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AAC | Ordinal: 6829
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AC6 | Ordinal: 6855
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1ADF | Ordinal: 6880
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AFE | Ordinal: 6911
        void glCreateProgram(void);

    // RVA: 0x1B1B | Ordinal: 6940
        void glCreateShader(unsigned int);

    // RVA: 0x1B26 | Ordinal: 6951
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B47 | Ordinal: 6984
        void glCullFace(unsigned int);

    // RVA: 0x1B6C | Ordinal: 7021
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B7F | Ordinal: 7040
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1BA5 | Ordinal: 7078
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BB0 | Ordinal: 7089
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BC6 | Ordinal: 7111
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BD9 | Ordinal: 7130
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BE8 | Ordinal: 7145
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1BFD | Ordinal: 7166
        void glDeleteShader(unsigned int);

    // RVA: 0x1C0E | Ordinal: 7183
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C28 | Ordinal: 7209
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C35 | Ordinal: 7222
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C48 | Ordinal: 7241
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C63 | Ordinal: 7268
        void glDepthFunc(unsigned int);

    // RVA: 0x1C7E | Ordinal: 7295
        void glDepthMask(unsigned char);

    // RVA: 0x1C98 | Ordinal: 7321
        void glDepthRange(double, double);

    // RVA: 0x1CA2 | Ordinal: 7331
        void glDepthRangeArrayv(unsigned int, int, double const *);

    // RVA: 0x1CAC | Ordinal: 7341
        void glDepthRangeIndexed(unsigned int, double, double);

    // RVA: 0x1CB7 | Ordinal: 7352
        void glDepthRangef(float, float);

    // RVA: 0x1CCC | Ordinal: 7373
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CE7 | Ordinal: 7400
        void glDisable(unsigned int);

    // RVA: 0x1D0E | Ordinal: 7439
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D21 | Ordinal: 7458
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D4A | Ordinal: 7499
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D57 | Ordinal: 7512
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D69 | Ordinal: 7530
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D8B | Ordinal: 7564
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DA0 | Ordinal: 7585
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DBA | Ordinal: 7611
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DCB | Ordinal: 7628
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DD8 | Ordinal: 7641
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DEA | Ordinal: 7659
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E03 | Ordinal: 7684
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E35 | Ordinal: 7734
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E46 | Ordinal: 7751
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E52 | Ordinal: 7763
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E66 | Ordinal: 7783
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1EBB | Ordinal: 7868
        void glEnable(unsigned int);

    // RVA: 0x1EE2 | Ordinal: 7907
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EF5 | Ordinal: 7926
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F18 | Ordinal: 7961
        void glEndConditionalRender(void);

    // RVA: 0x1F3F | Ordinal: 8000
        void glEndQuery(unsigned int);

    // RVA: 0x1F4B | Ordinal: 8012
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F5E | Ordinal: 8031
        void glEndTransformFeedback(void);

    // RVA: 0x204C | Ordinal: 8269
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x2067 | Ordinal: 8296
        void glFinish(void);

    // RVA: 0x2082 | Ordinal: 8323
        void glFlush(void);

    // RVA: 0x2095 | Ordinal: 8342
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x2137 | Ordinal: 8504
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x217F | Ordinal: 8576
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2149 | Ordinal: 8522
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x215C | Ordinal: 8541
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x216E | Ordinal: 8559
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2192 | Ordinal: 8595
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21AD | Ordinal: 8622
        void glFrontFace(unsigned int);

    // RVA: 0x21D4 | Ordinal: 8661
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21E7 | Ordinal: 8680
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x2203 | Ordinal: 8708
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x2219 | Ordinal: 8730
        void glGenQueries(int, unsigned int *);

    // RVA: 0x222C | Ordinal: 8749
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x223B | Ordinal: 8764
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x2255 | Ordinal: 8790
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2262 | Ordinal: 8803
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x2275 | Ordinal: 8822
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2288 | Ordinal: 8841
        void glGenerateMipmap(unsigned int);

    // RVA: 0x22A7 | Ordinal: 8872
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22B3 | Ordinal: 8884
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22BF | Ordinal: 8896
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22CB | Ordinal: 8908
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22E0 | Ordinal: 8929
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22F2 | Ordinal: 8947
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2304 | Ordinal: 8965
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2315 | Ordinal: 8982
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2327 | Ordinal: 9000
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x233C | Ordinal: 9021
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2351 | Ordinal: 9042
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2364 | Ordinal: 9061
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x237F | Ordinal: 9088
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2390 | Ordinal: 9105
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23A6 | Ordinal: 9127
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23BC | Ordinal: 9149
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23D2 | Ordinal: 9171
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x2427 | Ordinal: 9256
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2467 | Ordinal: 9320
        void glGetDoublei_v(unsigned int, unsigned int, double *);

    // RVA: 0x2481 | Ordinal: 9346
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x249C | Ordinal: 9373
        void glGetError(void);

    // RVA: 0x24A6 | Ordinal: 9383
        void glGetFloati_v(unsigned int, unsigned int, float *);

    // RVA: 0x24C1 | Ordinal: 9410
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24CF | Ordinal: 9424
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24E2 | Ordinal: 9443
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24F5 | Ordinal: 9462
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x253D | Ordinal: 9534
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x254E | Ordinal: 9551
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2561 | Ordinal: 9570
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x257C | Ordinal: 9597
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2640 | Ordinal: 9793
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x26A5 | Ordinal: 9894
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26BF | Ordinal: 9920
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26D4 | Ordinal: 9941
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26E6 | Ordinal: 9959
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26F1 | Ordinal: 9970
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x271F | Ordinal: 10016
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2734 | Ordinal: 10037
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2740 | Ordinal: 10049
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x274E | Ordinal: 10063
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2763 | Ordinal: 10084
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2771 | Ordinal: 10098
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x2787 | Ordinal: 10120
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x279D | Ordinal: 10142
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27B0 | Ordinal: 10161
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27BF | Ordinal: 10176
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27CE | Ordinal: 10191
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27DD | Ordinal: 10206
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27EC | Ordinal: 10221
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2810 | Ordinal: 10257
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x281B | Ordinal: 10268
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x2830 | Ordinal: 10289
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2845 | Ordinal: 10310
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2860 | Ordinal: 10337
        void glGetString(unsigned int);

    // RVA: 0x2873 | Ordinal: 10356
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x287F | Ordinal: 10368
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x288B | Ordinal: 10380
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x289C | Ordinal: 10397
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x290B | Ordinal: 10508
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2926 | Ordinal: 10535
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2941 | Ordinal: 10562
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2954 | Ordinal: 10581
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2967 | Ordinal: 10600
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2982 | Ordinal: 10627
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x299D | Ordinal: 10654
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29C0 | Ordinal: 10689
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29D8 | Ordinal: 10713
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29EA | Ordinal: 10731
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x29FF | Ordinal: 10752
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A0B | Ordinal: 10764
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A17 | Ordinal: 10776
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A2C | Ordinal: 10797
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A41 | Ordinal: 10818
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A54 | Ordinal: 10837
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A6D | Ordinal: 10862
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A80 | Ordinal: 10881
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A8A | Ordinal: 10891
        void glGetVertexAttribLdv(unsigned int, unsigned int, double *);

    // RVA: 0x2A9F | Ordinal: 10912
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AB3 | Ordinal: 10932
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AC8 | Ordinal: 10953
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2ADD | Ordinal: 10974
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B13 | Ordinal: 11028
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2BE4 | Ordinal: 11237
        void glIndexub(unsigned char);

    // RVA: 0x2BFB | Ordinal: 11260
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C5B | Ordinal: 11356
        void glIsBuffer(unsigned int);

    // RVA: 0x2C76 | Ordinal: 11383
        void glIsEnabled(unsigned int);

    // RVA: 0x2C89 | Ordinal: 11402
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C9C | Ordinal: 11421
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CC2 | Ordinal: 11459
        void glIsProgram(unsigned int);

    // RVA: 0x2CCD | Ordinal: 11470
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CE3 | Ordinal: 11492
        void glIsQuery(unsigned int);

    // RVA: 0x2CF6 | Ordinal: 11511
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D05 | Ordinal: 11526
        void glIsSampler(unsigned int);

    // RVA: 0x2D1A | Ordinal: 11547
        void glIsShader(unsigned int);

    // RVA: 0x2D2B | Ordinal: 11564
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D45 | Ordinal: 11590
        void glIsTexture(unsigned int);

    // RVA: 0x2D52 | Ordinal: 11603
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D65 | Ordinal: 11622
        void glIsVertexArray(unsigned int);

    // RVA: 0x2E19 | Ordinal: 11802
        void glLineWidth(float);

    // RVA: 0x2E2E | Ordinal: 11823
        void glLinkProgram(unsigned int);

    // RVA: 0x2EB9 | Ordinal: 11962
        void glLogicOp(unsigned int);

    // RVA: 0x2F13 | Ordinal: 12052
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F26 | Ordinal: 12071
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2FDC | Ordinal: 12253
        void glMinSampleShading(float);

    // RVA: 0x303F | Ordinal: 12352
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x305B | Ordinal: 12380
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x306B | Ordinal: 12396
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x323F | Ordinal: 12864
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x324B | Ordinal: 12876
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3257 | Ordinal: 12888
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3263 | Ordinal: 12900
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x326F | Ordinal: 12912
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x327B | Ordinal: 12924
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3287 | Ordinal: 12936
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3293 | Ordinal: 12948
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3372 | Ordinal: 13171
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x337E | Ordinal: 13183
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x33C4 | Ordinal: 13253
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33D1 | Ordinal: 13266
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33DE | Ordinal: 13279
        void glPauseTransformFeedback(void);

    // RVA: 0x342B | Ordinal: 13356
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3446 | Ordinal: 13383
        void glPixelStorei(unsigned int, int);

    // RVA: 0x348F | Ordinal: 13456
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34A5 | Ordinal: 13478
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34BB | Ordinal: 13500
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34D1 | Ordinal: 13522
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34EB | Ordinal: 13548
        void glPointSize(float);

    // RVA: 0x3505 | Ordinal: 13574
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x351F | Ordinal: 13600
        void glPolygonOffset(float, float);

    // RVA: 0x358A | Ordinal: 13707
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x35A5 | Ordinal: 13734
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35B0 | Ordinal: 13745
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35BA | Ordinal: 13755
        void glProgramUniform1d(unsigned int, int, double);

    // RVA: 0x35C4 | Ordinal: 13765
        void glProgramUniform1dv(unsigned int, int, int, double const *);

    // RVA: 0x35CF | Ordinal: 13776
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35DA | Ordinal: 13787
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35E5 | Ordinal: 13798
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35F0 | Ordinal: 13809
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x35FB | Ordinal: 13820
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x3606 | Ordinal: 13831
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3610 | Ordinal: 13841
        void glProgramUniform2d(unsigned int, int, double, double);

    // RVA: 0x361A | Ordinal: 13851
        void glProgramUniform2dv(unsigned int, int, int, double const *);

    // RVA: 0x3625 | Ordinal: 13862
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x3630 | Ordinal: 13873
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x363B | Ordinal: 13884
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x3646 | Ordinal: 13895
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x3651 | Ordinal: 13906
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x365C | Ordinal: 13917
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3666 | Ordinal: 13927
        void glProgramUniform3d(unsigned int, int, double, double, double);

    // RVA: 0x3670 | Ordinal: 13937
        void glProgramUniform3dv(unsigned int, int, int, double const *);

    // RVA: 0x367B | Ordinal: 13948
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x3686 | Ordinal: 13959
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x3691 | Ordinal: 13970
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x369C | Ordinal: 13981
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36A7 | Ordinal: 13992
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36B2 | Ordinal: 14003
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36BC | Ordinal: 14013
        void glProgramUniform4d(unsigned int, int, double, double, double, double);

    // RVA: 0x36C6 | Ordinal: 14023
        void glProgramUniform4dv(unsigned int, int, int, double const *);

    // RVA: 0x36D1 | Ordinal: 14034
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36DC | Ordinal: 14045
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36E7 | Ordinal: 14056
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36F2 | Ordinal: 14067
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x36FD | Ordinal: 14078
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3708 | Ordinal: 14089
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3712 | Ordinal: 14099
        void glProgramUniformMatrix2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x371D | Ordinal: 14110
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3727 | Ordinal: 14120
        void glProgramUniformMatrix2x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3732 | Ordinal: 14131
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x373C | Ordinal: 14141
        void glProgramUniformMatrix2x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3747 | Ordinal: 14152
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3751 | Ordinal: 14162
        void glProgramUniformMatrix3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x375C | Ordinal: 14173
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3766 | Ordinal: 14183
        void glProgramUniformMatrix3x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3771 | Ordinal: 14194
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x377B | Ordinal: 14204
        void glProgramUniformMatrix3x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3786 | Ordinal: 14215
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3790 | Ordinal: 14225
        void glProgramUniformMatrix4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x379B | Ordinal: 14236
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37A5 | Ordinal: 14246
        void glProgramUniformMatrix4x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37B0 | Ordinal: 14257
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37BA | Ordinal: 14267
        void glProgramUniformMatrix4x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37C5 | Ordinal: 14278
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37D5 | Ordinal: 14294
        void glProvokingVertex(unsigned int);

    // RVA: 0x382B | Ordinal: 14380
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x39DE | Ordinal: 14815
        void glReadBuffer(unsigned int);

    // RVA: 0x39F9 | Ordinal: 14842
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A8F | Ordinal: 14992
        void glReleaseShaderCompiler(void);

    // RVA: 0x3AB3 | Ordinal: 15028
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3AC6 | Ordinal: 15047
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AF1 | Ordinal: 15090
        void glResumeTransformFeedback(void);

    // RVA: 0x3B2B | Ordinal: 15148
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B3C | Ordinal: 15165
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B4B | Ordinal: 15180
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B5A | Ordinal: 15195
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B69 | Ordinal: 15210
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B78 | Ordinal: 15225
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B87 | Ordinal: 15240
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B96 | Ordinal: 15255
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BD3 | Ordinal: 15316
        void glScissor(int, int, int, int);

    // RVA: 0x3BDD | Ordinal: 15326
        void glScissorArrayv(unsigned int, int, int const *);

    // RVA: 0x3BE7 | Ordinal: 15336
        void glScissorIndexed(unsigned int, int, int, int, int);

    // RVA: 0x3BF1 | Ordinal: 15346
        void glScissorIndexedv(unsigned int, int const *);

    // RVA: 0x3CCF | Ordinal: 15568
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CDB | Ordinal: 15580
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3D22 | Ordinal: 15651
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D37 | Ordinal: 15672
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D58 | Ordinal: 15705
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D6D | Ordinal: 15726
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D88 | Ordinal: 15753
        void glStencilMask(unsigned int);

    // RVA: 0x3D9D | Ordinal: 15774
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DB8 | Ordinal: 15801
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DCD | Ordinal: 15822
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DDF | Ordinal: 15840
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4014 | Ordinal: 16405
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x4020 | Ordinal: 16417
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x402C | Ordinal: 16429
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x4038 | Ordinal: 16441
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4044 | Ordinal: 16453
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x4050 | Ordinal: 16465
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x405C | Ordinal: 16477
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x4068 | Ordinal: 16489
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x413A | Ordinal: 16699
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4155 | Ordinal: 16726
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4165 | Ordinal: 16742
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x417E | Ordinal: 16767
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x418E | Ordinal: 16783
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x41A1 | Ordinal: 16802
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41B4 | Ordinal: 16821
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41CF | Ordinal: 16848
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41EA | Ordinal: 16875
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4205 | Ordinal: 16902
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4220 | Ordinal: 16929
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4261 | Ordinal: 16994
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x427B | Ordinal: 17020
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4294 | Ordinal: 17045
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42D3 | Ordinal: 17108
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x4301 | Ordinal: 17154
        void glUniform1d(int, double);

    // RVA: 0x430D | Ordinal: 17166
        void glUniform1dv(int, int, double const *);

    // RVA: 0x4322 | Ordinal: 17187
        void glUniform1f(int, float);

    // RVA: 0x4337 | Ordinal: 17208
        void glUniform1fv(int, int, float const *);

    // RVA: 0x434C | Ordinal: 17229
        void glUniform1i(int, int);

    // RVA: 0x4361 | Ordinal: 17250
        void glUniform1iv(int, int, int const *);

    // RVA: 0x4374 | Ordinal: 17269
        void glUniform1ui(int, unsigned int);

    // RVA: 0x4387 | Ordinal: 17288
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x4393 | Ordinal: 17300
        void glUniform2d(int, double, double);

    // RVA: 0x439F | Ordinal: 17312
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43B4 | Ordinal: 17333
        void glUniform2f(int, float, float);

    // RVA: 0x43C9 | Ordinal: 17354
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43DE | Ordinal: 17375
        void glUniform2i(int, int, int);

    // RVA: 0x43F3 | Ordinal: 17396
        void glUniform2iv(int, int, int const *);

    // RVA: 0x4406 | Ordinal: 17415
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4419 | Ordinal: 17434
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4425 | Ordinal: 17446
        void glUniform3d(int, double, double, double);

    // RVA: 0x4431 | Ordinal: 17458
        void glUniform3dv(int, int, double const *);

    // RVA: 0x4446 | Ordinal: 17479
        void glUniform3f(int, float, float, float);

    // RVA: 0x445B | Ordinal: 17500
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4470 | Ordinal: 17521
        void glUniform3i(int, int, int, int);

    // RVA: 0x4485 | Ordinal: 17542
        void glUniform3iv(int, int, int const *);

    // RVA: 0x4498 | Ordinal: 17561
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44AB | Ordinal: 17580
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44B7 | Ordinal: 17592
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44C3 | Ordinal: 17604
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44D8 | Ordinal: 17625
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44ED | Ordinal: 17646
        void glUniform4fv(int, int, float const *);

    // RVA: 0x4502 | Ordinal: 17667
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x4517 | Ordinal: 17688
        void glUniform4iv(int, int, int const *);

    // RVA: 0x452A | Ordinal: 17707
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x453D | Ordinal: 17726
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x454F | Ordinal: 17744
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x455B | Ordinal: 17756
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x4570 | Ordinal: 17777
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x457C | Ordinal: 17789
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4590 | Ordinal: 17809
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x459C | Ordinal: 17821
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45B0 | Ordinal: 17841
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45BC | Ordinal: 17853
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45D1 | Ordinal: 17874
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45DD | Ordinal: 17886
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45F1 | Ordinal: 17906
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x45FD | Ordinal: 17918
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x4611 | Ordinal: 17938
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x461D | Ordinal: 17950
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x4632 | Ordinal: 17971
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x463E | Ordinal: 17983
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x4652 | Ordinal: 18003
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x465E | Ordinal: 18015
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4672 | Ordinal: 18035
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x467E | Ordinal: 18047
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x4694 | Ordinal: 18069
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46AB | Ordinal: 18092
        void glUseProgram(unsigned int);

    // RVA: 0x46B6 | Ordinal: 18103
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46CB | Ordinal: 18124
        void glValidateProgram(unsigned int);

    // RVA: 0x46D6 | Ordinal: 18135
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x4A70 | Ordinal: 19057
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4B71 | Ordinal: 19314
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4B7B | Ordinal: 19324
        void glVertexAttribL1d(unsigned int, double);

    // RVA: 0x4B85 | Ordinal: 19334
        void glVertexAttribL1dv(unsigned int, double const *);

    // RVA: 0x4B8F | Ordinal: 19344
        void glVertexAttribL2d(unsigned int, double, double);

    // RVA: 0x4B99 | Ordinal: 19354
        void glVertexAttribL2dv(unsigned int, double const *);

    // RVA: 0x4BA3 | Ordinal: 19364
        void glVertexAttribL3d(unsigned int, double, double, double);

    // RVA: 0x4BAD | Ordinal: 19374
        void glVertexAttribL3dv(unsigned int, double const *);

    // RVA: 0x4BB7 | Ordinal: 19384
        void glVertexAttribL4d(unsigned int, double, double, double, double);

    // RVA: 0x4BC1 | Ordinal: 19394
        void glVertexAttribL4dv(unsigned int, double const *);

    // RVA: 0x4BD1 | Ordinal: 19410
        void glVertexAttribLPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BDF | Ordinal: 19424
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BED | Ordinal: 19438
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4BFB | Ordinal: 19452
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C09 | Ordinal: 19466
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C17 | Ordinal: 19480
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C25 | Ordinal: 19494
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C33 | Ordinal: 19508
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C41 | Ordinal: 19522
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C56 | Ordinal: 19543
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C6B | Ordinal: 19564
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C77 | Ordinal: 19576
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C83 | Ordinal: 19588
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C8F | Ordinal: 19600
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C9B | Ordinal: 19612
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CA7 | Ordinal: 19624
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CD0 | Ordinal: 19665
        void glViewport(int, int, int, int);

    // RVA: 0x4CDA | Ordinal: 19675
        void glViewportArrayv(unsigned int, int, float const *);

    // RVA: 0x4CE4 | Ordinal: 19685
        void glViewportIndexedf(unsigned int, float, float, float, float);

    // RVA: 0x4CEE | Ordinal: 19695
        void glViewportIndexedfv(unsigned int, float const *);

    // RVA: 0x4CFF | Ordinal: 19712
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4F2B | Ordinal: 20268
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FED | Ordinal: 20462
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6111 | Ordinal: 24850
        void versionProfile(void);

    // RVA: 0x48E | Ordinal: 1167
        void _QOpenGLFunctions_4_1_Core(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_1_CORE_HPP
