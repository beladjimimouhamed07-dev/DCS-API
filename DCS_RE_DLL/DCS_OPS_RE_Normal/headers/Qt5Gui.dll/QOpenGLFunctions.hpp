#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions
{
public:

    // RVA: 0x1AD | Ordinal: 430
        void QOpenGLFunctions(class QOpenGLContext *);

    // RVA: 0x1AE | Ordinal: 431
        void QOpenGLFunctions(void);

    // RVA: 0x11D4 | Ordinal: 4565
        void glActiveTexture(unsigned int);

    // RVA: 0x121D | Ordinal: 4638
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x128B | Ordinal: 4748
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12A0 | Ordinal: 4769
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x1304 | Ordinal: 4869
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x132F | Ordinal: 4912
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x1355 | Ordinal: 4950
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x13B2 | Ordinal: 5043
        void glBlendColor(float, float, float, float);

    // RVA: 0x13CB | Ordinal: 5068
        void glBlendEquation(unsigned int);

    // RVA: 0x13E4 | Ordinal: 5093
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x1413 | Ordinal: 5140
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x142E | Ordinal: 5167
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1474 | Ordinal: 5237
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x148E | Ordinal: 5263
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14C6 | Ordinal: 5319
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14ED | Ordinal: 5358
        void glClear(unsigned int);

    // RVA: 0x1571 | Ordinal: 5490
        void glClearColor(float, float, float, float);

    // RVA: 0x15A6 | Ordinal: 5543
        void glClearDepthf(float);

    // RVA: 0x15CE | Ordinal: 5583
        void glClearStencil(int);

    // RVA: 0x1843 | Ordinal: 6212
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x18FE | Ordinal: 6399
        void glCompileShader(unsigned int);

    // RVA: 0x192A | Ordinal: 6443
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1971 | Ordinal: 6514
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A82 | Ordinal: 6787
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AB5 | Ordinal: 6838
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AF2 | Ordinal: 6899
        void glCreateProgram(void);

    // RVA: 0x1B0F | Ordinal: 6928
        void glCreateShader(unsigned int);

    // RVA: 0x1B35 | Ordinal: 6966
        void glCullFace(unsigned int);

    // RVA: 0x1B5F | Ordinal: 7008
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B75 | Ordinal: 7030
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B99 | Ordinal: 7066
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BCF | Ordinal: 7120
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BF1 | Ordinal: 7154
        void glDeleteShader(unsigned int);

    // RVA: 0x1C17 | Ordinal: 7192
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C51 | Ordinal: 7250
        void glDepthFunc(unsigned int);

    // RVA: 0x1C6C | Ordinal: 7277
        void glDepthMask(unsigned char);

    // RVA: 0x1CB5 | Ordinal: 7350
        void glDepthRangef(float, float);

    // RVA: 0x1CC0 | Ordinal: 7361
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CD5 | Ordinal: 7382
        void glDisable(unsigned int);

    // RVA: 0x1D02 | Ordinal: 7427
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D39 | Ordinal: 7482
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1DA9 | Ordinal: 7594
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1EA9 | Ordinal: 7850
        void glEnable(unsigned int);

    // RVA: 0x1ED6 | Ordinal: 7895
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x2055 | Ordinal: 8278
        void glFinish(void);

    // RVA: 0x2070 | Ordinal: 8305
        void glFlush(void);

    // RVA: 0x212D | Ordinal: 8494
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2152 | Ordinal: 8531
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x219B | Ordinal: 8604
        void glFrontFace(unsigned int);

    // RVA: 0x21C7 | Ordinal: 8648
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21DD | Ordinal: 8670
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x2222 | Ordinal: 8739
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x2244 | Ordinal: 8773
        void glGenTextures(int, unsigned int *);

    // RVA: 0x227E | Ordinal: 8831
        void glGenerateMipmap(unsigned int);

    // RVA: 0x229B | Ordinal: 8860
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22D4 | Ordinal: 8917
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x2330 | Ordinal: 9009
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2345 | Ordinal: 9030
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x236D | Ordinal: 9070
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2399 | Ordinal: 9114
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x248A | Ordinal: 9355
        void glGetError(void);

    // RVA: 0x24AF | Ordinal: 9392
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24EB | Ordinal: 9452
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x256A | Ordinal: 9579
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x26C8 | Ordinal: 9929
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2728 | Ordinal: 10025
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x27A6 | Ordinal: 10151
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2804 | Ordinal: 10245
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2819 | Ordinal: 10266
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x2824 | Ordinal: 10277
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2839 | Ordinal: 10298
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x284E | Ordinal: 10319
        void glGetString(unsigned int);

    // RVA: 0x2970 | Ordinal: 10609
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x298B | Ordinal: 10636
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29F3 | Ordinal: 10740
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A20 | Ordinal: 10785
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A35 | Ordinal: 10806
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A93 | Ordinal: 10900
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2ABC | Ordinal: 10941
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AD1 | Ordinal: 10962
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B01 | Ordinal: 11010
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2C4E | Ordinal: 11343
        void glIsBuffer(unsigned int);

    // RVA: 0x2C64 | Ordinal: 11365
        void glIsEnabled(unsigned int);

    // RVA: 0x2C92 | Ordinal: 11411
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CB6 | Ordinal: 11447
        void glIsProgram(unsigned int);

    // RVA: 0x2CEC | Ordinal: 11501
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D0E | Ordinal: 11535
        void glIsShader(unsigned int);

    // RVA: 0x2D34 | Ordinal: 11573
        void glIsTexture(unsigned int);

    // RVA: 0x2E07 | Ordinal: 11784
        void glLineWidth(float);

    // RVA: 0x2E22 | Ordinal: 11811
        void glLinkProgram(unsigned int);

    // RVA: 0x3434 | Ordinal: 13365
        void glPixelStorei(unsigned int, int);

    // RVA: 0x350E | Ordinal: 13583
        void glPolygonOffset(float, float);

    // RVA: 0x39E7 | Ordinal: 14824
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A8D | Ordinal: 14990
        void glReleaseShaderCompiler(void);

    // RVA: 0x3AA9 | Ordinal: 15018
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3B1C | Ordinal: 15133
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3BC1 | Ordinal: 15298
        void glScissor(int, int, int, int);

    // RVA: 0x3D20 | Ordinal: 15649
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D2B | Ordinal: 15660
        void glShaderSource(unsigned int, int, char const **, int const *);

    // RVA: 0x3D46 | Ordinal: 15687
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D61 | Ordinal: 15714
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D76 | Ordinal: 15735
        void glStencilMask(unsigned int);

    // RVA: 0x3D91 | Ordinal: 15762
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DA6 | Ordinal: 15783
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DC1 | Ordinal: 15810
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4143 | Ordinal: 16708
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x41BD | Ordinal: 16830
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41D8 | Ordinal: 16857
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41F3 | Ordinal: 16884
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x420E | Ordinal: 16911
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x426A | Ordinal: 17003
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4316 | Ordinal: 17175
        void glUniform1f(int, float);

    // RVA: 0x432B | Ordinal: 17196
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4340 | Ordinal: 17217
        void glUniform1i(int, int);

    // RVA: 0x4355 | Ordinal: 17238
        void glUniform1iv(int, int, int const *);

    // RVA: 0x43A8 | Ordinal: 17321
        void glUniform2f(int, float, float);

    // RVA: 0x43BD | Ordinal: 17342
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43D2 | Ordinal: 17363
        void glUniform2i(int, int, int);

    // RVA: 0x43E7 | Ordinal: 17384
        void glUniform2iv(int, int, int const *);

    // RVA: 0x443A | Ordinal: 17467
        void glUniform3f(int, float, float, float);

    // RVA: 0x444F | Ordinal: 17488
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4464 | Ordinal: 17509
        void glUniform3i(int, int, int, int);

    // RVA: 0x4479 | Ordinal: 17530
        void glUniform3iv(int, int, int const *);

    // RVA: 0x44CC | Ordinal: 17613
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44E1 | Ordinal: 17634
        void glUniform4fv(int, int, float const *);

    // RVA: 0x44F6 | Ordinal: 17655
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x450B | Ordinal: 17676
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4564 | Ordinal: 17765
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x45C5 | Ordinal: 17862
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x4626 | Ordinal: 17959
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x469F | Ordinal: 18080
        void glUseProgram(unsigned int);

    // RVA: 0x46BF | Ordinal: 18112
        void glValidateProgram(unsigned int);

    // RVA: 0x48A1 | Ordinal: 18594
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48AF | Ordinal: 18608
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48F1 | Ordinal: 18674
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x48FF | Ordinal: 18688
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4941 | Ordinal: 18754
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x494F | Ordinal: 18768
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x49F9 | Ordinal: 18938
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A07 | Ordinal: 18952
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4C4A | Ordinal: 19531
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4CBE | Ordinal: 19647
        void glViewport(int, int, int, int);

    // RVA: 0x4E70 | Ordinal: 20081
        void hasOpenGLFeature(enum QOpenGLFunctions::OpenGLFeature) const;

    // RVA: 0x4F17 | Ordinal: 20248
        void initializeGLFunctions(void);

    // RVA: 0x4F19 | Ordinal: 20250
        void initializeOpenGLFunctions(void);

    // RVA: 0x5036 | Ordinal: 20535
        void isInitialized(struct QOpenGLFunctionsPrivate const *);

    // RVA: 0x539F | Ordinal: 21408
        void openGLFeatures(void) const;

    // RVA: 0x47C | Ordinal: 1149
        void _QOpenGLFunctions(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_HPP
