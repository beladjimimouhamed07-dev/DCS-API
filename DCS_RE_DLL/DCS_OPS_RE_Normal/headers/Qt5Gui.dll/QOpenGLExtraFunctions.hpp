#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLExtraFunctions
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLExtraFunctions
{
public:

    // RVA: 0x1A3 | Ordinal: 420
        void QOpenGLExtraFunctions(class QOpenGLContext *);

    // RVA: 0x1A4 | Ordinal: 421
        void QOpenGLExtraFunctions(void);

    // RVA: 0xD3B | Ordinal: 3388
        void d_func(void);

    // RVA: 0xD3C | Ordinal: 3389
        void d_func(void) const;

    // RVA: 0x11C9 | Ordinal: 4554
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x1256 | Ordinal: 4695
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x1278 | Ordinal: 4729
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x12B6 | Ordinal: 4791
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12C9 | Ordinal: 4810
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x1317 | Ordinal: 4888
        void glBindImageTexture(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int);

    // RVA: 0x1324 | Ordinal: 4901
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x1342 | Ordinal: 4931
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1375 | Ordinal: 4982
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1382 | Ordinal: 4995
        void glBindVertexArray(unsigned int);

    // RVA: 0x1395 | Ordinal: 5014
        void glBindVertexBuffer(unsigned int, unsigned int, __int64, int);

    // RVA: 0x13B1 | Ordinal: 5042
        void glBlendBarrier(void);

    // RVA: 0x13F9 | Ordinal: 5114
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1406 | Ordinal: 5127
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x1445 | Ordinal: 5190
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1452 | Ordinal: 5203
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x145F | Ordinal: 5216
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1525 | Ordinal: 5414
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1538 | Ordinal: 5433
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x154B | Ordinal: 5452
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x155E | Ordinal: 5471
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x15FF | Ordinal: 5632
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x185E | Ordinal: 6239
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1942 | Ordinal: 6467
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1989 | Ordinal: 6538
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A01 | Ordinal: 6658
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A4F | Ordinal: 6736
        void glCopyImageSubData(unsigned int, unsigned int, int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1ACF | Ordinal: 6864
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1B24 | Ordinal: 6949
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B50 | Ordinal: 6993
        void glDebugMessageCallback(void (__cdecl *)(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *, void const *), void const *);

    // RVA: 0x1B55 | Ordinal: 6998
        void glDebugMessageControl(unsigned int, unsigned int, unsigned int, int, unsigned int const *, unsigned char);

    // RVA: 0x1B5A | Ordinal: 7003
        void glDebugMessageInsert(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *);

    // RVA: 0x1BAE | Ordinal: 7087
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BB9 | Ordinal: 7098
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BE2 | Ordinal: 7139
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1C06 | Ordinal: 7175
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C31 | Ordinal: 7218
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C3E | Ordinal: 7231
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1D17 | Ordinal: 7448
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D2B | Ordinal: 7468
        void glDispatchCompute(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1D32 | Ordinal: 7475
        void glDispatchComputeIndirect(__int64);

    // RVA: 0x1D53 | Ordinal: 7508
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D60 | Ordinal: 7521
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D94 | Ordinal: 7573
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DC3 | Ordinal: 7620
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DD4 | Ordinal: 7637
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DE1 | Ordinal: 7650
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DFB | Ordinal: 7676
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E25 | Ordinal: 7718
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E3E | Ordinal: 7743
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1EEB | Ordinal: 7916
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F32 | Ordinal: 7987
        void glEndQuery(unsigned int);

    // RVA: 0x1F54 | Ordinal: 8021
        void glEndTransformFeedback(void);

    // RVA: 0x2044 | Ordinal: 8261
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x208B | Ordinal: 8332
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x2126 | Ordinal: 8487
        void glFramebufferParameteri(unsigned int, unsigned int, int);

    // RVA: 0x2177 | Ordinal: 8568
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2188 | Ordinal: 8585
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2201 | Ordinal: 8706
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x220C | Ordinal: 8717
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2235 | Ordinal: 8758
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x225E | Ordinal: 8799
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x226B | Ordinal: 8812
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x22E9 | Ordinal: 8938
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22FB | Ordinal: 8956
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x231E | Ordinal: 8991
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x235A | Ordinal: 9051
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2388 | Ordinal: 9097
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23AF | Ordinal: 9136
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2461 | Ordinal: 9314
        void glGetDebugMessageLog(unsigned int, int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, int *, char *);

    // RVA: 0x24D8 | Ordinal: 9433
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24FE | Ordinal: 9471
        void glGetFramebufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2505 | Ordinal: 9478
        void glGetGraphicsResetStatus(void);

    // RVA: 0x2535 | Ordinal: 9526
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2546 | Ordinal: 9543
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2557 | Ordinal: 9560
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x258B | Ordinal: 9612
        void glGetInternalformativ(unsigned int, unsigned int, unsigned int, int, int *);

    // RVA: 0x2638 | Ordinal: 9785
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x2657 | Ordinal: 9816
        void glGetObjectLabel(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x265C | Ordinal: 9821
        void glGetObjectPtrLabel(void const *, int, int *, char *);

    // RVA: 0x2694 | Ordinal: 9877
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26BD | Ordinal: 9918
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26DD | Ordinal: 9950
        void glGetProgramInterfaceiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x26E4 | Ordinal: 9957
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26EF | Ordinal: 9968
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x26FA | Ordinal: 9979
        void glGetProgramResourceIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2701 | Ordinal: 9986
        void glGetProgramResourceLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x270E | Ordinal: 9999
        void glGetProgramResourceName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2715 | Ordinal: 10006
        void glGetProgramResourceiv(unsigned int, unsigned int, unsigned int, int, unsigned int const *, int, int *, int *);

    // RVA: 0x277A | Ordinal: 10107
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2790 | Ordinal: 10129
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27B9 | Ordinal: 10170
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27C8 | Ordinal: 10185
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27D7 | Ordinal: 10200
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27E6 | Ordinal: 10215
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2869 | Ordinal: 10346
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2894 | Ordinal: 10389
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x2914 | Ordinal: 10517
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x292F | Ordinal: 10544
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x294A | Ordinal: 10571
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x295D | Ordinal: 10590
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x29B6 | Ordinal: 10679
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29CF | Ordinal: 10704
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29E1 | Ordinal: 10722
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x2A4A | Ordinal: 10827
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A63 | Ordinal: 10852
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A76 | Ordinal: 10871
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2AF8 | Ordinal: 11001
        void glGetnUniformfv(unsigned int, int, int, float *);

    // RVA: 0x2AFB | Ordinal: 11004
        void glGetnUniformiv(unsigned int, int, int, int *);

    // RVA: 0x2AFE | Ordinal: 11007
        void glGetnUniformuiv(unsigned int, int, int, unsigned int *);

    // RVA: 0x2C30 | Ordinal: 11313
        void glInvalidateFramebuffer(unsigned int, int, unsigned int const *);

    // RVA: 0x2C3B | Ordinal: 11324
        void glInvalidateSubFramebuffer(unsigned int, int, unsigned int const *, int, int, int, int);

    // RVA: 0x2C7F | Ordinal: 11392
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2CCB | Ordinal: 11468
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CD6 | Ordinal: 11479
        void glIsQuery(unsigned int);

    // RVA: 0x2CFF | Ordinal: 11520
        void glIsSampler(unsigned int);

    // RVA: 0x2D23 | Ordinal: 11556
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D4E | Ordinal: 11599
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D5B | Ordinal: 11612
        void glIsVertexArray(unsigned int);

    // RVA: 0x2F1C | Ordinal: 12061
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2FCC | Ordinal: 12237
        void glMemoryBarrier(unsigned int);

    // RVA: 0x2FD5 | Ordinal: 12246
        void glMemoryBarrierByRegion(unsigned int);

    // RVA: 0x2FD8 | Ordinal: 12249
        void glMinSampleShading(float);

    // RVA: 0x3395 | Ordinal: 13206
        void glObjectLabel(unsigned int, unsigned int, int, char const *);

    // RVA: 0x339A | Ordinal: 13211
        void glObjectPtrLabel(void const *, int, char const *);

    // RVA: 0x33CD | Ordinal: 13262
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33DA | Ordinal: 13275
        void glPauseTransformFeedback(void);

    // RVA: 0x355A | Ordinal: 13659
        void glPopDebugGroup(void);

    // RVA: 0x3581 | Ordinal: 13698
        void glPrimitiveBoundingBox(float, float, float, float, float, float, float, float);

    // RVA: 0x35A3 | Ordinal: 13732
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35AE | Ordinal: 13743
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35CD | Ordinal: 13774
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35D8 | Ordinal: 13785
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35E3 | Ordinal: 13796
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35EE | Ordinal: 13807
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x35F9 | Ordinal: 13818
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x3604 | Ordinal: 13829
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3623 | Ordinal: 13860
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x362E | Ordinal: 13871
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x3639 | Ordinal: 13882
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x3644 | Ordinal: 13893
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x364F | Ordinal: 13904
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x365A | Ordinal: 13915
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3679 | Ordinal: 13946
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x3684 | Ordinal: 13957
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x368F | Ordinal: 13968
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x369A | Ordinal: 13979
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36A5 | Ordinal: 13990
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36B0 | Ordinal: 14001
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36CF | Ordinal: 14032
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36DA | Ordinal: 14043
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36E5 | Ordinal: 14054
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36F0 | Ordinal: 14065
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x36FB | Ordinal: 14076
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3706 | Ordinal: 14087
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x371B | Ordinal: 14108
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3730 | Ordinal: 14129
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3745 | Ordinal: 14150
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x375A | Ordinal: 14171
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x376F | Ordinal: 14192
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3784 | Ordinal: 14213
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3799 | Ordinal: 14234
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37AE | Ordinal: 14255
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37C3 | Ordinal: 14276
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37FF | Ordinal: 14336
        void glPushDebugGroup(unsigned int, unsigned int, int, char const *);

    // RVA: 0x39CC | Ordinal: 14797
        void glReadBuffer(unsigned int);

    // RVA: 0x3A02 | Ordinal: 14851
        void glReadnPixels(int, int, int, int, unsigned int, unsigned int, int, void *);

    // RVA: 0x3ABC | Ordinal: 15037
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AED | Ordinal: 15086
        void glResumeTransformFeedback(void);

    // RVA: 0x3B34 | Ordinal: 15157
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B45 | Ordinal: 15174
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B54 | Ordinal: 15189
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B63 | Ordinal: 15204
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B72 | Ordinal: 15219
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B81 | Ordinal: 15234
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B90 | Ordinal: 15249
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3DD6 | Ordinal: 15831
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DE8 | Ordinal: 15849
        void glTexBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x416E | Ordinal: 16751
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4197 | Ordinal: 16792
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41AA | Ordinal: 16811
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x4231 | Ordinal: 16946
        void glTexStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x423A | Ordinal: 16955
        void glTexStorage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4241 | Ordinal: 16962
        void glTexStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x424A | Ordinal: 16971
        void glTexStorage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x4284 | Ordinal: 17029
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42C9 | Ordinal: 17098
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x436A | Ordinal: 17259
        void glUniform1ui(int, unsigned int);

    // RVA: 0x437D | Ordinal: 17278
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x43FC | Ordinal: 17405
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x440F | Ordinal: 17424
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x448E | Ordinal: 17551
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44A1 | Ordinal: 17570
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x4520 | Ordinal: 17697
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4533 | Ordinal: 17716
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4546 | Ordinal: 17735
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4585 | Ordinal: 17798
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45A5 | Ordinal: 17830
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45E6 | Ordinal: 17895
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4606 | Ordinal: 17927
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x4647 | Ordinal: 17992
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4667 | Ordinal: 18024
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x4687 | Ordinal: 18056
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46B4 | Ordinal: 18101
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46D4 | Ordinal: 18133
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x4A63 | Ordinal: 19044
        void glVertexAttribBinding(unsigned int, unsigned int);

    // RVA: 0x4A6A | Ordinal: 19051
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A79 | Ordinal: 19066
        void glVertexAttribFormat(unsigned int, int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4B0F | Ordinal: 19216
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B1B | Ordinal: 19228
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B3D | Ordinal: 19262
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B49 | Ordinal: 19274
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B60 | Ordinal: 19297
        void glVertexAttribIFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4B67 | Ordinal: 19304
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4C5F | Ordinal: 19552
        void glVertexBindingDivisor(unsigned int, unsigned int);

    // RVA: 0x4CF7 | Ordinal: 19704
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x5035 | Ordinal: 20534
        void isInitialized(class QOpenGLExtraFunctionsPrivate const *);

    // RVA: 0x479 | Ordinal: 1146
        void _QOpenGLExtraFunctions(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLEXTRAFUNCTIONS_HPP
