#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_0_Core
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_0_Core
{
public:

    // RVA: 0x1BE | Ordinal: 447
        void QOpenGLFunctions_4_0_Core(void);

    // RVA: 0x11E1 | Ordinal: 4578
        void glActiveTexture(unsigned int);

    // RVA: 0x1227 | Ordinal: 4648
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x124B | Ordinal: 4684
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x1261 | Ordinal: 4706
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x126D | Ordinal: 4718
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1280 | Ordinal: 4737
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x1295 | Ordinal: 4758
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12AB | Ordinal: 4780
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12BE | Ordinal: 4799
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12D1 | Ordinal: 4818
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12EB | Ordinal: 4844
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12F9 | Ordinal: 4858
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x130C | Ordinal: 4877
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1337 | Ordinal: 4920
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x1346 | Ordinal: 4935
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1364 | Ordinal: 4965
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1377 | Ordinal: 4984
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x138A | Ordinal: 5003
        void glBindVertexArray(unsigned int);

    // RVA: 0x13C0 | Ordinal: 5057
        void glBlendColor(float, float, float, float);

    // RVA: 0x13D9 | Ordinal: 5082
        void glBlendEquation(unsigned int);

    // RVA: 0x13EE | Ordinal: 5103
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x13FB | Ordinal: 5116
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1408 | Ordinal: 5129
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x1423 | Ordinal: 5156
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x143A | Ordinal: 5179
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1447 | Ordinal: 5192
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1454 | Ordinal: 5205
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1467 | Ordinal: 5224
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x147F | Ordinal: 5248
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x1499 | Ordinal: 5274
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14CE | Ordinal: 5327
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14E2 | Ordinal: 5347
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x14FD | Ordinal: 5374
        void glClear(unsigned int);

    // RVA: 0x152D | Ordinal: 5422
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1540 | Ordinal: 5441
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x1553 | Ordinal: 5460
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1566 | Ordinal: 5479
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x1581 | Ordinal: 5506
        void glClearColor(float, float, float, float);

    // RVA: 0x159B | Ordinal: 5532
        void glClearDepth(double);

    // RVA: 0x15DE | Ordinal: 5599
        void glClearStencil(int);

    // RVA: 0x1605 | Ordinal: 5638
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x1853 | Ordinal: 6228
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1866 | Ordinal: 6247
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1885 | Ordinal: 6278
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x1891 | Ordinal: 6290
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x189D | Ordinal: 6302
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18A9 | Ordinal: 6314
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x1908 | Ordinal: 6409
        void glCompileShader(unsigned int);

    // RVA: 0x191F | Ordinal: 6432
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1937 | Ordinal: 6456
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x194F | Ordinal: 6480
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1966 | Ordinal: 6503
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x197E | Ordinal: 6527
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1996 | Ordinal: 6551
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A08 | Ordinal: 6665
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A77 | Ordinal: 6776
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A91 | Ordinal: 6802
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AAA | Ordinal: 6827
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AC4 | Ordinal: 6853
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1ADD | Ordinal: 6878
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AFC | Ordinal: 6909
        void glCreateProgram(void);

    // RVA: 0x1B19 | Ordinal: 6938
        void glCreateShader(unsigned int);

    // RVA: 0x1B45 | Ordinal: 6982
        void glCullFace(unsigned int);

    // RVA: 0x1B6A | Ordinal: 7019
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B7D | Ordinal: 7038
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1BA3 | Ordinal: 7076
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BC4 | Ordinal: 7109
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BD7 | Ordinal: 7128
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BE6 | Ordinal: 7143
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1BFB | Ordinal: 7164
        void glDeleteShader(unsigned int);

    // RVA: 0x1C0C | Ordinal: 7181
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C26 | Ordinal: 7207
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C33 | Ordinal: 7220
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C46 | Ordinal: 7239
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C61 | Ordinal: 7266
        void glDepthFunc(unsigned int);

    // RVA: 0x1C7C | Ordinal: 7293
        void glDepthMask(unsigned char);

    // RVA: 0x1C96 | Ordinal: 7319
        void glDepthRange(double, double);

    // RVA: 0x1CCA | Ordinal: 7371
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CE5 | Ordinal: 7398
        void glDisable(unsigned int);

    // RVA: 0x1D0C | Ordinal: 7437
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D1F | Ordinal: 7456
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D48 | Ordinal: 7497
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D55 | Ordinal: 7510
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D67 | Ordinal: 7528
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D89 | Ordinal: 7562
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D9E | Ordinal: 7583
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DB8 | Ordinal: 7609
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DC9 | Ordinal: 7626
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DD6 | Ordinal: 7639
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DE8 | Ordinal: 7657
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E01 | Ordinal: 7682
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E33 | Ordinal: 7732
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E44 | Ordinal: 7749
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E50 | Ordinal: 7761
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E64 | Ordinal: 7781
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1EB9 | Ordinal: 7866
        void glEnable(unsigned int);

    // RVA: 0x1EE0 | Ordinal: 7905
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EF3 | Ordinal: 7924
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F16 | Ordinal: 7959
        void glEndConditionalRender(void);

    // RVA: 0x1F3D | Ordinal: 7998
        void glEndQuery(unsigned int);

    // RVA: 0x1F49 | Ordinal: 8010
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F5C | Ordinal: 8029
        void glEndTransformFeedback(void);

    // RVA: 0x204A | Ordinal: 8267
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x2065 | Ordinal: 8294
        void glFinish(void);

    // RVA: 0x2080 | Ordinal: 8321
        void glFlush(void);

    // RVA: 0x2093 | Ordinal: 8340
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x2135 | Ordinal: 8502
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x217D | Ordinal: 8574
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2147 | Ordinal: 8520
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x215A | Ordinal: 8539
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x216C | Ordinal: 8557
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2190 | Ordinal: 8593
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21AB | Ordinal: 8620
        void glFrontFace(unsigned int);

    // RVA: 0x21D2 | Ordinal: 8659
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21E5 | Ordinal: 8678
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x2217 | Ordinal: 8728
        void glGenQueries(int, unsigned int *);

    // RVA: 0x222A | Ordinal: 8747
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x2239 | Ordinal: 8762
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x2253 | Ordinal: 8788
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2260 | Ordinal: 8801
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x2273 | Ordinal: 8820
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2286 | Ordinal: 8839
        void glGenerateMipmap(unsigned int);

    // RVA: 0x22A5 | Ordinal: 8870
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22B1 | Ordinal: 8882
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22BD | Ordinal: 8894
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22C9 | Ordinal: 8906
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22DE | Ordinal: 8927
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22F0 | Ordinal: 8945
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2302 | Ordinal: 8963
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2313 | Ordinal: 8980
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2325 | Ordinal: 8998
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x233A | Ordinal: 9019
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x234F | Ordinal: 9040
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2362 | Ordinal: 9059
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x237D | Ordinal: 9086
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x238E | Ordinal: 9103
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23A4 | Ordinal: 9125
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23BA | Ordinal: 9147
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23D0 | Ordinal: 9169
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x2425 | Ordinal: 9254
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x247F | Ordinal: 9344
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x249A | Ordinal: 9371
        void glGetError(void);

    // RVA: 0x24BF | Ordinal: 9408
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24CD | Ordinal: 9422
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24E0 | Ordinal: 9441
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24F3 | Ordinal: 9460
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x253B | Ordinal: 9532
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x254C | Ordinal: 9549
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x255F | Ordinal: 9568
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x257A | Ordinal: 9595
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x263E | Ordinal: 9791
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x26A3 | Ordinal: 9892
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26D2 | Ordinal: 9939
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x271D | Ordinal: 10014
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2732 | Ordinal: 10035
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x273E | Ordinal: 10047
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x274C | Ordinal: 10061
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2761 | Ordinal: 10082
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x276F | Ordinal: 10096
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x2785 | Ordinal: 10118
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x279B | Ordinal: 10140
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27AE | Ordinal: 10159
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27BD | Ordinal: 10174
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27CC | Ordinal: 10189
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27DB | Ordinal: 10204
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27EA | Ordinal: 10219
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x280E | Ordinal: 10255
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x282E | Ordinal: 10287
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2843 | Ordinal: 10308
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x285E | Ordinal: 10335
        void glGetString(unsigned int);

    // RVA: 0x2871 | Ordinal: 10354
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x287D | Ordinal: 10366
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2889 | Ordinal: 10378
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x289A | Ordinal: 10395
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x2909 | Ordinal: 10506
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2924 | Ordinal: 10533
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x293F | Ordinal: 10560
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2952 | Ordinal: 10579
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2965 | Ordinal: 10598
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2980 | Ordinal: 10625
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x299B | Ordinal: 10652
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29BE | Ordinal: 10687
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29D6 | Ordinal: 10711
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29E8 | Ordinal: 10729
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x29FD | Ordinal: 10750
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A09 | Ordinal: 10762
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A15 | Ordinal: 10774
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A2A | Ordinal: 10795
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A3F | Ordinal: 10816
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A52 | Ordinal: 10835
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A6B | Ordinal: 10860
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A7E | Ordinal: 10879
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A9D | Ordinal: 10910
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AB1 | Ordinal: 10930
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AC6 | Ordinal: 10951
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2ADB | Ordinal: 10972
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B11 | Ordinal: 11026
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2BE2 | Ordinal: 11235
        void glIndexub(unsigned char);

    // RVA: 0x2BF9 | Ordinal: 11258
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C59 | Ordinal: 11354
        void glIsBuffer(unsigned int);

    // RVA: 0x2C74 | Ordinal: 11381
        void glIsEnabled(unsigned int);

    // RVA: 0x2C87 | Ordinal: 11400
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C9A | Ordinal: 11419
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CC0 | Ordinal: 11457
        void glIsProgram(unsigned int);

    // RVA: 0x2CE1 | Ordinal: 11490
        void glIsQuery(unsigned int);

    // RVA: 0x2CF4 | Ordinal: 11509
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D03 | Ordinal: 11524
        void glIsSampler(unsigned int);

    // RVA: 0x2D18 | Ordinal: 11545
        void glIsShader(unsigned int);

    // RVA: 0x2D29 | Ordinal: 11562
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D43 | Ordinal: 11588
        void glIsTexture(unsigned int);

    // RVA: 0x2D50 | Ordinal: 11601
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D63 | Ordinal: 11620
        void glIsVertexArray(unsigned int);

    // RVA: 0x2E17 | Ordinal: 11800
        void glLineWidth(float);

    // RVA: 0x2E2C | Ordinal: 11821
        void glLinkProgram(unsigned int);

    // RVA: 0x2EB7 | Ordinal: 11960
        void glLogicOp(unsigned int);

    // RVA: 0x2F11 | Ordinal: 12050
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F24 | Ordinal: 12069
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2FDA | Ordinal: 12251
        void glMinSampleShading(float);

    // RVA: 0x303D | Ordinal: 12350
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3059 | Ordinal: 12378
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3069 | Ordinal: 12394
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x323D | Ordinal: 12862
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3249 | Ordinal: 12874
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3255 | Ordinal: 12886
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3261 | Ordinal: 12898
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x326D | Ordinal: 12910
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3279 | Ordinal: 12922
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3285 | Ordinal: 12934
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3291 | Ordinal: 12946
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3370 | Ordinal: 13169
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x337C | Ordinal: 13181
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x33C2 | Ordinal: 13251
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33CF | Ordinal: 13264
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33DC | Ordinal: 13277
        void glPauseTransformFeedback(void);

    // RVA: 0x3429 | Ordinal: 13354
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3444 | Ordinal: 13381
        void glPixelStorei(unsigned int, int);

    // RVA: 0x348D | Ordinal: 13454
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34A3 | Ordinal: 13476
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34B9 | Ordinal: 13498
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34CF | Ordinal: 13520
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34E9 | Ordinal: 13546
        void glPointSize(float);

    // RVA: 0x3503 | Ordinal: 13572
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x351D | Ordinal: 13598
        void glPolygonOffset(float, float);

    // RVA: 0x3588 | Ordinal: 13705
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x37D3 | Ordinal: 14292
        void glProvokingVertex(unsigned int);

    // RVA: 0x3829 | Ordinal: 14378
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x39DC | Ordinal: 14813
        void glReadBuffer(unsigned int);

    // RVA: 0x39F7 | Ordinal: 14840
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3AB1 | Ordinal: 15026
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3AC4 | Ordinal: 15045
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AEF | Ordinal: 15088
        void glResumeTransformFeedback(void);

    // RVA: 0x3B29 | Ordinal: 15146
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B3A | Ordinal: 15163
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B49 | Ordinal: 15178
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B58 | Ordinal: 15193
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B67 | Ordinal: 15208
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B76 | Ordinal: 15223
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B85 | Ordinal: 15238
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B94 | Ordinal: 15253
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BD1 | Ordinal: 15314
        void glScissor(int, int, int, int);

    // RVA: 0x3CCD | Ordinal: 15566
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CD9 | Ordinal: 15578
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3D35 | Ordinal: 15670
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D56 | Ordinal: 15703
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D6B | Ordinal: 15724
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D86 | Ordinal: 15751
        void glStencilMask(unsigned int);

    // RVA: 0x3D9B | Ordinal: 15772
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DB6 | Ordinal: 15799
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DCB | Ordinal: 15820
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DDD | Ordinal: 15838
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4012 | Ordinal: 16403
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x401E | Ordinal: 16415
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x402A | Ordinal: 16427
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x4036 | Ordinal: 16439
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4042 | Ordinal: 16451
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x404E | Ordinal: 16463
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x405A | Ordinal: 16475
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x4066 | Ordinal: 16487
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4138 | Ordinal: 16697
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4153 | Ordinal: 16724
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4163 | Ordinal: 16740
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x417C | Ordinal: 16765
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x418C | Ordinal: 16781
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x419F | Ordinal: 16800
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41B2 | Ordinal: 16819
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41CD | Ordinal: 16846
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41E8 | Ordinal: 16873
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4203 | Ordinal: 16900
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x421E | Ordinal: 16927
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x425F | Ordinal: 16992
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4279 | Ordinal: 17018
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4292 | Ordinal: 17043
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42D1 | Ordinal: 17106
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x42FF | Ordinal: 17152
        void glUniform1d(int, double);

    // RVA: 0x430B | Ordinal: 17164
        void glUniform1dv(int, int, double const *);

    // RVA: 0x4320 | Ordinal: 17185
        void glUniform1f(int, float);

    // RVA: 0x4335 | Ordinal: 17206
        void glUniform1fv(int, int, float const *);

    // RVA: 0x434A | Ordinal: 17227
        void glUniform1i(int, int);

    // RVA: 0x435F | Ordinal: 17248
        void glUniform1iv(int, int, int const *);

    // RVA: 0x4372 | Ordinal: 17267
        void glUniform1ui(int, unsigned int);

    // RVA: 0x4385 | Ordinal: 17286
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x4391 | Ordinal: 17298
        void glUniform2d(int, double, double);

    // RVA: 0x439D | Ordinal: 17310
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43B2 | Ordinal: 17331
        void glUniform2f(int, float, float);

    // RVA: 0x43C7 | Ordinal: 17352
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43DC | Ordinal: 17373
        void glUniform2i(int, int, int);

    // RVA: 0x43F1 | Ordinal: 17394
        void glUniform2iv(int, int, int const *);

    // RVA: 0x4404 | Ordinal: 17413
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4417 | Ordinal: 17432
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4423 | Ordinal: 17444
        void glUniform3d(int, double, double, double);

    // RVA: 0x442F | Ordinal: 17456
        void glUniform3dv(int, int, double const *);

    // RVA: 0x4444 | Ordinal: 17477
        void glUniform3f(int, float, float, float);

    // RVA: 0x4459 | Ordinal: 17498
        void glUniform3fv(int, int, float const *);

    // RVA: 0x446E | Ordinal: 17519
        void glUniform3i(int, int, int, int);

    // RVA: 0x4483 | Ordinal: 17540
        void glUniform3iv(int, int, int const *);

    // RVA: 0x4496 | Ordinal: 17559
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44A9 | Ordinal: 17578
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44B5 | Ordinal: 17590
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44C1 | Ordinal: 17602
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44D6 | Ordinal: 17623
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44EB | Ordinal: 17644
        void glUniform4fv(int, int, float const *);

    // RVA: 0x4500 | Ordinal: 17665
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x4515 | Ordinal: 17686
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4528 | Ordinal: 17705
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x453B | Ordinal: 17724
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x454D | Ordinal: 17742
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4559 | Ordinal: 17754
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x456E | Ordinal: 17775
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x457A | Ordinal: 17787
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x458E | Ordinal: 17807
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x459A | Ordinal: 17819
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45AE | Ordinal: 17839
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45BA | Ordinal: 17851
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45CF | Ordinal: 17872
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45DB | Ordinal: 17884
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45EF | Ordinal: 17904
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x45FB | Ordinal: 17916
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x460F | Ordinal: 17936
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x461B | Ordinal: 17948
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x4630 | Ordinal: 17969
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x463C | Ordinal: 17981
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x4650 | Ordinal: 18001
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x465C | Ordinal: 18013
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4670 | Ordinal: 18033
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x467C | Ordinal: 18045
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x4692 | Ordinal: 18067
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46A9 | Ordinal: 18090
        void glUseProgram(unsigned int);

    // RVA: 0x46C9 | Ordinal: 18122
        void glValidateProgram(unsigned int);

    // RVA: 0x4A6E | Ordinal: 19055
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4B6F | Ordinal: 19312
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BDD | Ordinal: 19422
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BEB | Ordinal: 19436
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4BF9 | Ordinal: 19450
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C07 | Ordinal: 19464
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C15 | Ordinal: 19478
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C23 | Ordinal: 19492
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C31 | Ordinal: 19506
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C3F | Ordinal: 19520
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C54 | Ordinal: 19541
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C69 | Ordinal: 19562
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C75 | Ordinal: 19574
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C81 | Ordinal: 19586
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C8D | Ordinal: 19598
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C99 | Ordinal: 19610
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CA5 | Ordinal: 19622
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CCE | Ordinal: 19663
        void glViewport(int, int, int, int);

    // RVA: 0x4CFD | Ordinal: 19710
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4F29 | Ordinal: 20266
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FEB | Ordinal: 20460
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x610F | Ordinal: 24848
        void versionProfile(void);

    // RVA: 0x48C | Ordinal: 1165
        void _QOpenGLFunctions_4_0_Core(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_0_CORE_HPP
