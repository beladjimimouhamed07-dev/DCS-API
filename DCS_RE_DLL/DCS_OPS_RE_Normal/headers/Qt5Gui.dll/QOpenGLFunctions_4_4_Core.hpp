#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_4_Core
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_4_Core
{
public:

    // RVA: 0x1C6 | Ordinal: 455
        void QOpenGLFunctions_4_4_Core(void);

    // RVA: 0x11D1 | Ordinal: 4562
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x11E9 | Ordinal: 4586
        void glActiveTexture(unsigned int);

    // RVA: 0x122F | Ordinal: 4656
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1253 | Ordinal: 4692
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x1269 | Ordinal: 4714
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x1275 | Ordinal: 4726
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1288 | Ordinal: 4745
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x129D | Ordinal: 4766
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12B3 | Ordinal: 4788
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12C6 | Ordinal: 4807
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12D9 | Ordinal: 4826
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12DD | Ordinal: 4830
        void glBindBuffersBase(unsigned int, unsigned int, int, unsigned int const *);

    // RVA: 0x12E1 | Ordinal: 4834
        void glBindBuffersRange(unsigned int, unsigned int, int, unsigned int const *, __int64 const *, __int64 const *);

    // RVA: 0x12F3 | Ordinal: 4852
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x1301 | Ordinal: 4866
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x1314 | Ordinal: 4885
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x131D | Ordinal: 4894
        void glBindImageTexture(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int);

    // RVA: 0x1321 | Ordinal: 4898
        void glBindImageTextures(unsigned int, int, unsigned int const *);

    // RVA: 0x132C | Ordinal: 4909
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x133F | Ordinal: 4928
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x134E | Ordinal: 4943
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1352 | Ordinal: 4947
        void glBindSamplers(unsigned int, int, unsigned int const *);

    // RVA: 0x136C | Ordinal: 4973
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1372 | Ordinal: 4979
        void glBindTextures(unsigned int, int, unsigned int const *);

    // RVA: 0x137F | Ordinal: 4992
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1392 | Ordinal: 5011
        void glBindVertexArray(unsigned int);

    // RVA: 0x1399 | Ordinal: 5018
        void glBindVertexBuffer(unsigned int, unsigned int, __int64, int);

    // RVA: 0x139D | Ordinal: 5022
        void glBindVertexBuffers(unsigned int, int, unsigned int const *, __int64 const *, int const *);

    // RVA: 0x13C8 | Ordinal: 5065
        void glBlendColor(float, float, float, float);

    // RVA: 0x13E1 | Ordinal: 5090
        void glBlendEquation(unsigned int);

    // RVA: 0x13F6 | Ordinal: 5111
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x1403 | Ordinal: 5124
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1410 | Ordinal: 5137
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x142B | Ordinal: 5164
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1442 | Ordinal: 5187
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x144F | Ordinal: 5200
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x145C | Ordinal: 5213
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x146F | Ordinal: 5232
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1487 | Ordinal: 5256
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x148B | Ordinal: 5260
        void glBufferStorage(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x14A1 | Ordinal: 5282
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14D6 | Ordinal: 5335
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14EA | Ordinal: 5355
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x1505 | Ordinal: 5382
        void glClear(unsigned int);

    // RVA: 0x151C | Ordinal: 5405
        void glClearBufferData(unsigned int, unsigned int, unsigned int, unsigned int, void const *);

    // RVA: 0x1522 | Ordinal: 5411
        void glClearBufferSubData(unsigned int, unsigned int, __int64, __int64, unsigned int, unsigned int, void const *);

    // RVA: 0x1535 | Ordinal: 5430
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1548 | Ordinal: 5449
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x155B | Ordinal: 5468
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x156E | Ordinal: 5487
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x1589 | Ordinal: 5514
        void glClearColor(float, float, float, float);

    // RVA: 0x15A3 | Ordinal: 5540
        void glClearDepth(double);

    // RVA: 0x15AE | Ordinal: 5551
        void glClearDepthf(float);

    // RVA: 0x15E6 | Ordinal: 5607
        void glClearStencil(int);

    // RVA: 0x15EA | Ordinal: 5611
        void glClearTexImage(unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x15EE | Ordinal: 5615
        void glClearTexSubImage(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x160D | Ordinal: 5646
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x185B | Ordinal: 6236
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x186E | Ordinal: 6255
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1910 | Ordinal: 6417
        void glCompileShader(unsigned int);

    // RVA: 0x1927 | Ordinal: 6440
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x193F | Ordinal: 6464
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1957 | Ordinal: 6488
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x196E | Ordinal: 6511
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1986 | Ordinal: 6535
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x199E | Ordinal: 6559
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A10 | Ordinal: 6673
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A53 | Ordinal: 6740
        void glCopyImageSubData(unsigned int, unsigned int, int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1A7F | Ordinal: 6784
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A99 | Ordinal: 6810
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AB2 | Ordinal: 6835
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ACC | Ordinal: 6861
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AE5 | Ordinal: 6886
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1B04 | Ordinal: 6917
        void glCreateProgram(void);

    // RVA: 0x1B21 | Ordinal: 6946
        void glCreateShader(unsigned int);

    // RVA: 0x1B2C | Ordinal: 6957
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B4D | Ordinal: 6990
        void glCullFace(unsigned int);

    // RVA: 0x1B52 | Ordinal: 6995
        void glDebugMessageCallback(void (__cdecl *)(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *, void const *), void const *);

    // RVA: 0x1B57 | Ordinal: 7000
        void glDebugMessageControl(unsigned int, unsigned int, unsigned int, int, unsigned int const *, unsigned char);

    // RVA: 0x1B5C | Ordinal: 7005
        void glDebugMessageInsert(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *);

    // RVA: 0x1B72 | Ordinal: 7027
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B85 | Ordinal: 7046
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1BAB | Ordinal: 7084
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BB6 | Ordinal: 7095
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BCC | Ordinal: 7117
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BDF | Ordinal: 7136
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BEE | Ordinal: 7151
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1C03 | Ordinal: 7172
        void glDeleteShader(unsigned int);

    // RVA: 0x1C14 | Ordinal: 7189
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C2E | Ordinal: 7215
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C3B | Ordinal: 7228
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C4E | Ordinal: 7247
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C69 | Ordinal: 7274
        void glDepthFunc(unsigned int);

    // RVA: 0x1C84 | Ordinal: 7301
        void glDepthMask(unsigned char);

    // RVA: 0x1C9E | Ordinal: 7327
        void glDepthRange(double, double);

    // RVA: 0x1CA8 | Ordinal: 7337
        void glDepthRangeArrayv(unsigned int, int, double const *);

    // RVA: 0x1CB2 | Ordinal: 7347
        void glDepthRangeIndexed(unsigned int, double, double);

    // RVA: 0x1CBD | Ordinal: 7358
        void glDepthRangef(float, float);

    // RVA: 0x1CD2 | Ordinal: 7379
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CED | Ordinal: 7406
        void glDisable(unsigned int);

    // RVA: 0x1D14 | Ordinal: 7445
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D27 | Ordinal: 7464
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D2F | Ordinal: 7472
        void glDispatchCompute(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1D36 | Ordinal: 7479
        void glDispatchComputeIndirect(__int64);

    // RVA: 0x1D50 | Ordinal: 7505
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D5D | Ordinal: 7518
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D6F | Ordinal: 7536
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D77 | Ordinal: 7544
        void glDrawArraysInstancedBaseInstance(unsigned int, int, int, int, unsigned int);

    // RVA: 0x1D91 | Ordinal: 7570
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DA6 | Ordinal: 7591
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DC0 | Ordinal: 7617
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DD1 | Ordinal: 7634
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DDE | Ordinal: 7647
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DF0 | Ordinal: 7665
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DF8 | Ordinal: 7673
        void glDrawElementsInstancedBaseInstance(unsigned int, int, unsigned int, void const *, int, unsigned int);

    // RVA: 0x1E09 | Ordinal: 7690
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E11 | Ordinal: 7698
        void glDrawElementsInstancedBaseVertexBaseInstance(unsigned int, int, unsigned int, void const *, int, int, unsigned int);

    // RVA: 0x1E3B | Ordinal: 7740
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E4C | Ordinal: 7757
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E58 | Ordinal: 7769
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E60 | Ordinal: 7777
        void glDrawTransformFeedbackInstanced(unsigned int, unsigned int, int);

    // RVA: 0x1E6C | Ordinal: 7789
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1E74 | Ordinal: 7797
        void glDrawTransformFeedbackStreamInstanced(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x1EC1 | Ordinal: 7874
        void glEnable(unsigned int);

    // RVA: 0x1EE8 | Ordinal: 7913
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EFB | Ordinal: 7932
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F1E | Ordinal: 7967
        void glEndConditionalRender(void);

    // RVA: 0x1F45 | Ordinal: 8006
        void glEndQuery(unsigned int);

    // RVA: 0x1F51 | Ordinal: 8018
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F64 | Ordinal: 8037
        void glEndTransformFeedback(void);

    // RVA: 0x2052 | Ordinal: 8275
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x206D | Ordinal: 8302
        void glFinish(void);

    // RVA: 0x2088 | Ordinal: 8329
        void glFlush(void);

    // RVA: 0x209B | Ordinal: 8348
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x212A | Ordinal: 8491
        void glFramebufferParameteri(unsigned int, unsigned int, int);

    // RVA: 0x213D | Ordinal: 8510
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2185 | Ordinal: 8582
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x214F | Ordinal: 8528
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2162 | Ordinal: 8547
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2174 | Ordinal: 8565
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2198 | Ordinal: 8601
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21B3 | Ordinal: 8628
        void glFrontFace(unsigned int);

    // RVA: 0x21DA | Ordinal: 8667
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21ED | Ordinal: 8686
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x2209 | Ordinal: 8714
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x221F | Ordinal: 8736
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2232 | Ordinal: 8755
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x2241 | Ordinal: 8770
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x225B | Ordinal: 8796
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2268 | Ordinal: 8809
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x227B | Ordinal: 8828
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x228E | Ordinal: 8847
        void glGenerateMipmap(unsigned int);

    // RVA: 0x2298 | Ordinal: 8857
        void glGetActiveAtomicCounterBufferiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22AD | Ordinal: 8878
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22B9 | Ordinal: 8890
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22C5 | Ordinal: 8902
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22D1 | Ordinal: 8914
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22E6 | Ordinal: 8935
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22F8 | Ordinal: 8953
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x230A | Ordinal: 8971
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x231B | Ordinal: 8988
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x232D | Ordinal: 9006
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2342 | Ordinal: 9027
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2357 | Ordinal: 9048
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x236A | Ordinal: 9067
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2385 | Ordinal: 9094
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2396 | Ordinal: 9111
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23AC | Ordinal: 9133
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23C2 | Ordinal: 9155
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23D8 | Ordinal: 9177
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x242D | Ordinal: 9262
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2463 | Ordinal: 9316
        void glGetDebugMessageLog(unsigned int, int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, int *, char *);

    // RVA: 0x246D | Ordinal: 9326
        void glGetDoublei_v(unsigned int, unsigned int, double *);

    // RVA: 0x2487 | Ordinal: 9352
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x24A2 | Ordinal: 9379
        void glGetError(void);

    // RVA: 0x24AC | Ordinal: 9389
        void glGetFloati_v(unsigned int, unsigned int, float *);

    // RVA: 0x24C7 | Ordinal: 9416
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24D5 | Ordinal: 9430
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24E8 | Ordinal: 9449
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24FB | Ordinal: 9468
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2502 | Ordinal: 9475
        void glGetFramebufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2543 | Ordinal: 9540
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2554 | Ordinal: 9557
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2567 | Ordinal: 9576
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2582 | Ordinal: 9603
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2588 | Ordinal: 9609
        void glGetInternalformati64v(unsigned int, unsigned int, unsigned int, int, __int64 *);

    // RVA: 0x2591 | Ordinal: 9618
        void glGetInternalformativ(unsigned int, unsigned int, unsigned int, int, int *);

    // RVA: 0x2646 | Ordinal: 9799
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x2659 | Ordinal: 9818
        void glGetObjectLabel(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x265E | Ordinal: 9823
        void glGetObjectPtrLabel(void const *, int, int *, char *);

    // RVA: 0x26C5 | Ordinal: 9926
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26DA | Ordinal: 9947
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26E1 | Ordinal: 9954
        void glGetProgramInterfaceiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x26EC | Ordinal: 9965
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26F7 | Ordinal: 9976
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x26FE | Ordinal: 9983
        void glGetProgramResourceIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2705 | Ordinal: 9990
        void glGetProgramResourceLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x270B | Ordinal: 9996
        void glGetProgramResourceLocationIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2712 | Ordinal: 10003
        void glGetProgramResourceName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2719 | Ordinal: 10010
        void glGetProgramResourceiv(unsigned int, unsigned int, unsigned int, int, unsigned int const *, int, int *, int *);

    // RVA: 0x2725 | Ordinal: 10022
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x273A | Ordinal: 10043
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2746 | Ordinal: 10055
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2754 | Ordinal: 10069
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2769 | Ordinal: 10090
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2777 | Ordinal: 10104
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x278D | Ordinal: 10126
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27A3 | Ordinal: 10148
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27B6 | Ordinal: 10167
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27C5 | Ordinal: 10182
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27D4 | Ordinal: 10197
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27E3 | Ordinal: 10212
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27F2 | Ordinal: 10227
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2816 | Ordinal: 10263
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2821 | Ordinal: 10274
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x2836 | Ordinal: 10295
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x284B | Ordinal: 10316
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2866 | Ordinal: 10343
        void glGetString(unsigned int);

    // RVA: 0x2879 | Ordinal: 10362
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2885 | Ordinal: 10374
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2891 | Ordinal: 10386
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x28A2 | Ordinal: 10403
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x2911 | Ordinal: 10514
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x292C | Ordinal: 10541
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2947 | Ordinal: 10568
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x295A | Ordinal: 10587
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x296D | Ordinal: 10606
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2988 | Ordinal: 10633
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x29A3 | Ordinal: 10660
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29C6 | Ordinal: 10695
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29DE | Ordinal: 10719
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29F0 | Ordinal: 10737
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x2A05 | Ordinal: 10758
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A11 | Ordinal: 10770
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A1D | Ordinal: 10782
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A32 | Ordinal: 10803
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A47 | Ordinal: 10824
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A5A | Ordinal: 10843
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A73 | Ordinal: 10868
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A86 | Ordinal: 10887
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A90 | Ordinal: 10897
        void glGetVertexAttribLdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AA5 | Ordinal: 10918
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AB9 | Ordinal: 10938
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2ACE | Ordinal: 10959
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AE3 | Ordinal: 10980
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B19 | Ordinal: 11034
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2C27 | Ordinal: 11304
        void glInvalidateBufferData(unsigned int);

    // RVA: 0x2C2D | Ordinal: 11310
        void glInvalidateBufferSubData(unsigned int, __int64, __int64);

    // RVA: 0x2C34 | Ordinal: 11317
        void glInvalidateFramebuffer(unsigned int, int, unsigned int const *);

    // RVA: 0x2C3F | Ordinal: 11328
        void glInvalidateSubFramebuffer(unsigned int, int, unsigned int const *, int, int, int, int);

    // RVA: 0x2C45 | Ordinal: 11334
        void glInvalidateTexImage(unsigned int, int);

    // RVA: 0x2C4B | Ordinal: 11340
        void glInvalidateTexSubImage(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x2C61 | Ordinal: 11362
        void glIsBuffer(unsigned int);

    // RVA: 0x2C7C | Ordinal: 11389
        void glIsEnabled(unsigned int);

    // RVA: 0x2C8F | Ordinal: 11408
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2CA2 | Ordinal: 11427
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CC8 | Ordinal: 11465
        void glIsProgram(unsigned int);

    // RVA: 0x2CD3 | Ordinal: 11476
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CE9 | Ordinal: 11498
        void glIsQuery(unsigned int);

    // RVA: 0x2CFC | Ordinal: 11517
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D0B | Ordinal: 11532
        void glIsSampler(unsigned int);

    // RVA: 0x2D20 | Ordinal: 11553
        void glIsShader(unsigned int);

    // RVA: 0x2D31 | Ordinal: 11570
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D4B | Ordinal: 11596
        void glIsTexture(unsigned int);

    // RVA: 0x2D58 | Ordinal: 11609
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D6B | Ordinal: 11628
        void glIsVertexArray(unsigned int);

    // RVA: 0x2E1F | Ordinal: 11808
        void glLineWidth(float);

    // RVA: 0x2E34 | Ordinal: 11829
        void glLinkProgram(unsigned int);

    // RVA: 0x2EBF | Ordinal: 11968
        void glLogicOp(unsigned int);

    // RVA: 0x2F19 | Ordinal: 12058
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F2C | Ordinal: 12077
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2FD2 | Ordinal: 12243
        void glMemoryBarrier(unsigned int);

    // RVA: 0x2FE2 | Ordinal: 12259
        void glMinSampleShading(float);

    // RVA: 0x3045 | Ordinal: 12358
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x304B | Ordinal: 12364
        void glMultiDrawArraysIndirect(unsigned int, void const *, int, int);

    // RVA: 0x3061 | Ordinal: 12386
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3071 | Ordinal: 12402
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3077 | Ordinal: 12408
        void glMultiDrawElementsIndirect(unsigned int, unsigned int, void const *, int, int);

    // RVA: 0x3397 | Ordinal: 13208
        void glObjectLabel(unsigned int, unsigned int, int, char const *);

    // RVA: 0x339C | Ordinal: 13213
        void glObjectPtrLabel(void const *, int, char const *);

    // RVA: 0x33CA | Ordinal: 13259
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33D7 | Ordinal: 13272
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33E4 | Ordinal: 13285
        void glPauseTransformFeedback(void);

    // RVA: 0x3431 | Ordinal: 13362
        void glPixelStoref(unsigned int, float);

    // RVA: 0x344C | Ordinal: 13389
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3495 | Ordinal: 13462
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34AB | Ordinal: 13484
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34C1 | Ordinal: 13506
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34D7 | Ordinal: 13528
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34F1 | Ordinal: 13554
        void glPointSize(float);

    // RVA: 0x350B | Ordinal: 13580
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3525 | Ordinal: 13606
        void glPolygonOffset(float, float);

    // RVA: 0x355C | Ordinal: 13661
        void glPopDebugGroup(void);

    // RVA: 0x3590 | Ordinal: 13713
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x35AB | Ordinal: 13740
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35B6 | Ordinal: 13751
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35C0 | Ordinal: 13761
        void glProgramUniform1d(unsigned int, int, double);

    // RVA: 0x35CA | Ordinal: 13771
        void glProgramUniform1dv(unsigned int, int, int, double const *);

    // RVA: 0x35D5 | Ordinal: 13782
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35E0 | Ordinal: 13793
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35EB | Ordinal: 13804
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35F6 | Ordinal: 13815
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x3601 | Ordinal: 13826
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x360C | Ordinal: 13837
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3616 | Ordinal: 13847
        void glProgramUniform2d(unsigned int, int, double, double);

    // RVA: 0x3620 | Ordinal: 13857
        void glProgramUniform2dv(unsigned int, int, int, double const *);

    // RVA: 0x362B | Ordinal: 13868
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x3636 | Ordinal: 13879
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x3641 | Ordinal: 13890
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x364C | Ordinal: 13901
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x3657 | Ordinal: 13912
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x3662 | Ordinal: 13923
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x366C | Ordinal: 13933
        void glProgramUniform3d(unsigned int, int, double, double, double);

    // RVA: 0x3676 | Ordinal: 13943
        void glProgramUniform3dv(unsigned int, int, int, double const *);

    // RVA: 0x3681 | Ordinal: 13954
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x368C | Ordinal: 13965
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x3697 | Ordinal: 13976
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x36A2 | Ordinal: 13987
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36AD | Ordinal: 13998
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36B8 | Ordinal: 14009
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36C2 | Ordinal: 14019
        void glProgramUniform4d(unsigned int, int, double, double, double, double);

    // RVA: 0x36CC | Ordinal: 14029
        void glProgramUniform4dv(unsigned int, int, int, double const *);

    // RVA: 0x36D7 | Ordinal: 14040
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36E2 | Ordinal: 14051
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36ED | Ordinal: 14062
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36F8 | Ordinal: 14073
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x3703 | Ordinal: 14084
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x370E | Ordinal: 14095
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3718 | Ordinal: 14105
        void glProgramUniformMatrix2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3723 | Ordinal: 14116
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x372D | Ordinal: 14126
        void glProgramUniformMatrix2x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3738 | Ordinal: 14137
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3742 | Ordinal: 14147
        void glProgramUniformMatrix2x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x374D | Ordinal: 14158
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3757 | Ordinal: 14168
        void glProgramUniformMatrix3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3762 | Ordinal: 14179
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x376C | Ordinal: 14189
        void glProgramUniformMatrix3x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3777 | Ordinal: 14200
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3781 | Ordinal: 14210
        void glProgramUniformMatrix3x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x378C | Ordinal: 14221
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3796 | Ordinal: 14231
        void glProgramUniformMatrix4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37A1 | Ordinal: 14242
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37AB | Ordinal: 14252
        void glProgramUniformMatrix4x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37B6 | Ordinal: 14263
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37C0 | Ordinal: 14273
        void glProgramUniformMatrix4x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37CB | Ordinal: 14284
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37DB | Ordinal: 14300
        void glProvokingVertex(unsigned int);

    // RVA: 0x3801 | Ordinal: 14338
        void glPushDebugGroup(unsigned int, unsigned int, int, char const *);

    // RVA: 0x3831 | Ordinal: 14386
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x39E4 | Ordinal: 14821
        void glReadBuffer(unsigned int);

    // RVA: 0x39FF | Ordinal: 14848
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A95 | Ordinal: 14998
        void glReleaseShaderCompiler(void);

    // RVA: 0x3AB9 | Ordinal: 15034
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3ACC | Ordinal: 15053
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AF7 | Ordinal: 15096
        void glResumeTransformFeedback(void);

    // RVA: 0x3B31 | Ordinal: 15154
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B42 | Ordinal: 15171
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B51 | Ordinal: 15186
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B60 | Ordinal: 15201
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B6F | Ordinal: 15216
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B7E | Ordinal: 15231
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B8D | Ordinal: 15246
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B9C | Ordinal: 15261
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BD9 | Ordinal: 15322
        void glScissor(int, int, int, int);

    // RVA: 0x3BE3 | Ordinal: 15332
        void glScissorArrayv(unsigned int, int, int const *);

    // RVA: 0x3BED | Ordinal: 15342
        void glScissorIndexed(unsigned int, int, int, int, int);

    // RVA: 0x3BF7 | Ordinal: 15352
        void glScissorIndexedv(unsigned int, int const *);

    // RVA: 0x3D28 | Ordinal: 15657
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D3D | Ordinal: 15678
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D43 | Ordinal: 15684
        void glShaderStorageBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3D5E | Ordinal: 15711
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D73 | Ordinal: 15732
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D8E | Ordinal: 15759
        void glStencilMask(unsigned int);

    // RVA: 0x3DA3 | Ordinal: 15780
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DBE | Ordinal: 15807
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DD3 | Ordinal: 15828
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DE5 | Ordinal: 15846
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DEC | Ordinal: 15853
        void glTexBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x4140 | Ordinal: 16705
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x415B | Ordinal: 16732
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x416B | Ordinal: 16748
        void glTexImage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4184 | Ordinal: 16773
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4194 | Ordinal: 16789
        void glTexImage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x41A7 | Ordinal: 16808
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41BA | Ordinal: 16827
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41D5 | Ordinal: 16854
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41F0 | Ordinal: 16881
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x420B | Ordinal: 16908
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4226 | Ordinal: 16935
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x422E | Ordinal: 16943
        void glTexStorage1D(unsigned int, int, unsigned int, int);

    // RVA: 0x4237 | Ordinal: 16952
        void glTexStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x423E | Ordinal: 16959
        void glTexStorage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4247 | Ordinal: 16968
        void glTexStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x424E | Ordinal: 16975
        void glTexStorage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x4267 | Ordinal: 17000
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4281 | Ordinal: 17026
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x429A | Ordinal: 17051
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42C2 | Ordinal: 17091
        void glTextureView(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x42D9 | Ordinal: 17114
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x4307 | Ordinal: 17160
        void glUniform1d(int, double);

    // RVA: 0x4313 | Ordinal: 17172
        void glUniform1dv(int, int, double const *);

    // RVA: 0x4328 | Ordinal: 17193
        void glUniform1f(int, float);

    // RVA: 0x433D | Ordinal: 17214
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4352 | Ordinal: 17235
        void glUniform1i(int, int);

    // RVA: 0x4367 | Ordinal: 17256
        void glUniform1iv(int, int, int const *);

    // RVA: 0x437A | Ordinal: 17275
        void glUniform1ui(int, unsigned int);

    // RVA: 0x438D | Ordinal: 17294
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x4399 | Ordinal: 17306
        void glUniform2d(int, double, double);

    // RVA: 0x43A5 | Ordinal: 17318
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43BA | Ordinal: 17339
        void glUniform2f(int, float, float);

    // RVA: 0x43CF | Ordinal: 17360
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43E4 | Ordinal: 17381
        void glUniform2i(int, int, int);

    // RVA: 0x43F9 | Ordinal: 17402
        void glUniform2iv(int, int, int const *);

    // RVA: 0x440C | Ordinal: 17421
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x441F | Ordinal: 17440
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x442B | Ordinal: 17452
        void glUniform3d(int, double, double, double);

    // RVA: 0x4437 | Ordinal: 17464
        void glUniform3dv(int, int, double const *);

    // RVA: 0x444C | Ordinal: 17485
        void glUniform3f(int, float, float, float);

    // RVA: 0x4461 | Ordinal: 17506
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4476 | Ordinal: 17527
        void glUniform3i(int, int, int, int);

    // RVA: 0x448B | Ordinal: 17548
        void glUniform3iv(int, int, int const *);

    // RVA: 0x449E | Ordinal: 17567
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44B1 | Ordinal: 17586
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44BD | Ordinal: 17598
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44C9 | Ordinal: 17610
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44DE | Ordinal: 17631
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44F3 | Ordinal: 17652
        void glUniform4fv(int, int, float const *);

    // RVA: 0x4508 | Ordinal: 17673
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x451D | Ordinal: 17694
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4530 | Ordinal: 17713
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4543 | Ordinal: 17732
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4555 | Ordinal: 17750
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4561 | Ordinal: 17762
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x4576 | Ordinal: 17783
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x4582 | Ordinal: 17795
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4596 | Ordinal: 17815
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45A2 | Ordinal: 17827
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45B6 | Ordinal: 17847
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45C2 | Ordinal: 17859
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45D7 | Ordinal: 17880
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45E3 | Ordinal: 17892
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45F7 | Ordinal: 17912
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4603 | Ordinal: 17924
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x4617 | Ordinal: 17944
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x4623 | Ordinal: 17956
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x4638 | Ordinal: 17977
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x4644 | Ordinal: 17989
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x4658 | Ordinal: 18009
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4664 | Ordinal: 18021
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4678 | Ordinal: 18041
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x4684 | Ordinal: 18053
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x469A | Ordinal: 18075
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46B1 | Ordinal: 18098
        void glUseProgram(unsigned int);

    // RVA: 0x46BC | Ordinal: 18109
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46D1 | Ordinal: 18130
        void glValidateProgram(unsigned int);

    // RVA: 0x46DC | Ordinal: 18141
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x4891 | Ordinal: 18578
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x489E | Ordinal: 18591
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48AC | Ordinal: 18605
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48BA | Ordinal: 18619
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48C7 | Ordinal: 18632
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48D4 | Ordinal: 18645
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48E1 | Ordinal: 18658
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48EE | Ordinal: 18671
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48FC | Ordinal: 18685
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x490A | Ordinal: 18699
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4917 | Ordinal: 18712
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x4924 | Ordinal: 18725
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x4931 | Ordinal: 18738
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x493E | Ordinal: 18751
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x494C | Ordinal: 18765
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x495A | Ordinal: 18779
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x4967 | Ordinal: 18792
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x4974 | Ordinal: 18805
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x4981 | Ordinal: 18818
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x498E | Ordinal: 18831
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x499B | Ordinal: 18844
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49A8 | Ordinal: 18857
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49B5 | Ordinal: 18870
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49C2 | Ordinal: 18883
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49CF | Ordinal: 18896
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49DC | Ordinal: 18909
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49E9 | Ordinal: 18922
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49F6 | Ordinal: 18935
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x4A04 | Ordinal: 18949
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A12 | Ordinal: 18963
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A1F | Ordinal: 18976
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A2C | Ordinal: 18989
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A39 | Ordinal: 19002
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A46 | Ordinal: 19015
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A53 | Ordinal: 19028
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A60 | Ordinal: 19041
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A67 | Ordinal: 19048
        void glVertexAttribBinding(unsigned int, unsigned int);

    // RVA: 0x4A76 | Ordinal: 19063
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A7D | Ordinal: 19070
        void glVertexAttribFormat(unsigned int, int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4A88 | Ordinal: 19081
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A93 | Ordinal: 19092
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4A9E | Ordinal: 19103
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AA9 | Ordinal: 19114
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AB4 | Ordinal: 19125
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4ABF | Ordinal: 19136
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4ACA | Ordinal: 19147
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AD5 | Ordinal: 19158
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AE0 | Ordinal: 19169
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AEB | Ordinal: 19180
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AF6 | Ordinal: 19191
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B01 | Ordinal: 19202
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B0C | Ordinal: 19213
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B18 | Ordinal: 19225
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B24 | Ordinal: 19237
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B2F | Ordinal: 19248
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B3A | Ordinal: 19259
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B46 | Ordinal: 19271
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B52 | Ordinal: 19283
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B5D | Ordinal: 19294
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B64 | Ordinal: 19301
        void glVertexAttribIFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4B77 | Ordinal: 19320
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4B81 | Ordinal: 19330
        void glVertexAttribL1d(unsigned int, double);

    // RVA: 0x4B8B | Ordinal: 19340
        void glVertexAttribL1dv(unsigned int, double const *);

    // RVA: 0x4B95 | Ordinal: 19350
        void glVertexAttribL2d(unsigned int, double, double);

    // RVA: 0x4B9F | Ordinal: 19360
        void glVertexAttribL2dv(unsigned int, double const *);

    // RVA: 0x4BA9 | Ordinal: 19370
        void glVertexAttribL3d(unsigned int, double, double, double);

    // RVA: 0x4BB3 | Ordinal: 19380
        void glVertexAttribL3dv(unsigned int, double const *);

    // RVA: 0x4BBD | Ordinal: 19390
        void glVertexAttribL4d(unsigned int, double, double, double, double);

    // RVA: 0x4BC7 | Ordinal: 19400
        void glVertexAttribL4dv(unsigned int, double const *);

    // RVA: 0x4BCD | Ordinal: 19406
        void glVertexAttribLFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4BD7 | Ordinal: 19416
        void glVertexAttribLPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BE5 | Ordinal: 19430
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BF3 | Ordinal: 19444
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C01 | Ordinal: 19458
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C0F | Ordinal: 19472
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C1D | Ordinal: 19486
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C2B | Ordinal: 19500
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C39 | Ordinal: 19514
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C47 | Ordinal: 19528
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C5C | Ordinal: 19549
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C63 | Ordinal: 19556
        void glVertexBindingDivisor(unsigned int, unsigned int);

    // RVA: 0x4CD6 | Ordinal: 19671
        void glViewport(int, int, int, int);

    // RVA: 0x4CE0 | Ordinal: 19681
        void glViewportArrayv(unsigned int, int, float const *);

    // RVA: 0x4CEA | Ordinal: 19691
        void glViewportIndexedf(unsigned int, float, float, float, float);

    // RVA: 0x4CF4 | Ordinal: 19701
        void glViewportIndexedfv(unsigned int, float const *);

    // RVA: 0x4D05 | Ordinal: 19718
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4F31 | Ordinal: 20274
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FF3 | Ordinal: 20468
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6117 | Ordinal: 24856
        void versionProfile(void);

    // RVA: 0x494 | Ordinal: 1173
        void _QOpenGLFunctions_4_4_Core(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_4_CORE_HPP
