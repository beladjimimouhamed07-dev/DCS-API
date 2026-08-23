#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLShaderProgram
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLShaderProgram
{
public:

    // RVA: 0x1D3 | Ordinal: 468
        void QOpenGLShaderProgram(class QObject *);

    // RVA: 0x964 | Ordinal: 2405
        void addCacheableShaderFromSourceCode(class QFlags<enum QOpenGLShader::ShaderTypeBit>, class QByteArray const &);

    // RVA: 0x965 | Ordinal: 2406
        void addCacheableShaderFromSourceCode(class QFlags<enum QOpenGLShader::ShaderTypeBit>, class QString const &);

    // RVA: 0x966 | Ordinal: 2407
        void addCacheableShaderFromSourceCode(class QFlags<enum QOpenGLShader::ShaderTypeBit>, char const *);

    // RVA: 0x967 | Ordinal: 2408
        void addCacheableShaderFromSourceFile(class QFlags<enum QOpenGLShader::ShaderTypeBit>, class QString const &);

    // RVA: 0x99B | Ordinal: 2460
        void addShader(class QOpenGLShader *);

    // RVA: 0x99C | Ordinal: 2461
        void addShaderFromSourceCode(class QFlags<enum QOpenGLShader::ShaderTypeBit>, class QByteArray const &);

    // RVA: 0x99D | Ordinal: 2462
        void addShaderFromSourceCode(class QFlags<enum QOpenGLShader::ShaderTypeBit>, class QString const &);

    // RVA: 0x99E | Ordinal: 2463
        void addShaderFromSourceCode(class QFlags<enum QOpenGLShader::ShaderTypeBit>, char const *);

    // RVA: 0x99F | Ordinal: 2464
        void addShaderFromSourceFile(class QFlags<enum QOpenGLShader::ShaderTypeBit>, class QString const &);

    // RVA: 0xA34 | Ordinal: 2613
        void attributeLocation(class QByteArray const &) const;

    // RVA: 0xA35 | Ordinal: 2614
        void attributeLocation(class QString const &) const;

    // RVA: 0xA36 | Ordinal: 2615
        void attributeLocation(char const *) const;

    // RVA: 0xA89 | Ordinal: 2698
        void bind(void);

    // RVA: 0xA8E | Ordinal: 2703
        void bindAttributeLocation(class QByteArray const &, int);

    // RVA: 0xA8F | Ordinal: 2704
        void bindAttributeLocation(class QString const &, int);

    // RVA: 0xA90 | Ordinal: 2705
        void bindAttributeLocation(char const *, int);

    // RVA: 0xC8C | Ordinal: 3213
        void create(void);

    // RVA: 0xD43 | Ordinal: 3396
        void d_func(void);

    // RVA: 0xD44 | Ordinal: 3397
        void d_func(void) const;

    // RVA: 0xDCF | Ordinal: 3536
        void defaultInnerTessellationLevels(void) const;

    // RVA: 0xDD1 | Ordinal: 3538
        void defaultOuterTessellationLevels(void) const;

    // RVA: 0xE5D | Ordinal: 3678
        void disableAttributeArray(int);

    // RVA: 0xE5E | Ordinal: 3679
        void disableAttributeArray(char const *);

    // RVA: 0xF96 | Ordinal: 3991
        void enableAttributeArray(int);

    // RVA: 0xF97 | Ordinal: 3992
        void enableAttributeArray(char const *);

    // RVA: 0x4E73 | Ordinal: 20084
        void hasOpenGLShaderPrograms(class QOpenGLContext *);

    // RVA: 0x4F02 | Ordinal: 20227
        void init(void);

    // RVA: 0x5043 | Ordinal: 20548
        void isLinked(void) const;

    // RVA: 0x5178 | Ordinal: 20857
        void link(void);

    // RVA: 0x51A5 | Ordinal: 20902
        void log(void) const;

    // RVA: 0x523A | Ordinal: 21051
        void maxGeometryOutputVertices(void) const;

    // RVA: 0x5276 | Ordinal: 21111
        void metaObject(void) const;

    // RVA: 0x542C | Ordinal: 21549
        void patchVertexCount(void) const;

    // RVA: 0x54ED | Ordinal: 21742
        void programId(void) const;

    // RVA: 0x558D | Ordinal: 21902
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55D1 | Ordinal: 21970
        void qt_metacast(char const *);

    // RVA: 0x5627 | Ordinal: 22056
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x56B7 | Ordinal: 22200
        void release(void);

    // RVA: 0x56CA | Ordinal: 22219
        void removeAllShaders(void);

    // RVA: 0x56EA | Ordinal: 22251
        void removeShader(class QOpenGLShader *);

    // RVA: 0x5833 | Ordinal: 22580
        void setAttributeArray(int, unsigned int, void const *, int, int);

    // RVA: 0x5834 | Ordinal: 22581
        void setAttributeArray(int, float const *, int, int);

    // RVA: 0x5835 | Ordinal: 22582
        void setAttributeArray(int, class QVector2D const *, int);

    // RVA: 0x5836 | Ordinal: 22583
        void setAttributeArray(int, class QVector3D const *, int);

    // RVA: 0x5837 | Ordinal: 22584
        void setAttributeArray(int, class QVector4D const *, int);

    // RVA: 0x5838 | Ordinal: 22585
        void setAttributeArray(char const *, unsigned int, void const *, int, int);

    // RVA: 0x5839 | Ordinal: 22586
        void setAttributeArray(char const *, float const *, int, int);

    // RVA: 0x583A | Ordinal: 22587
        void setAttributeArray(char const *, class QVector2D const *, int);

    // RVA: 0x583B | Ordinal: 22588
        void setAttributeArray(char const *, class QVector3D const *, int);

    // RVA: 0x583C | Ordinal: 22589
        void setAttributeArray(char const *, class QVector4D const *, int);

    // RVA: 0x583D | Ordinal: 22590
        void setAttributeBuffer(int, unsigned int, int, int, int);

    // RVA: 0x583E | Ordinal: 22591
        void setAttributeBuffer(char const *, unsigned int, int, int, int);

    // RVA: 0x583F | Ordinal: 22592
        void setAttributeValue(int, class QColor const &);

    // RVA: 0x5840 | Ordinal: 22593
        void setAttributeValue(int, class QVector2D const &);

    // RVA: 0x5841 | Ordinal: 22594
        void setAttributeValue(int, class QVector3D const &);

    // RVA: 0x5842 | Ordinal: 22595
        void setAttributeValue(int, class QVector4D const &);

    // RVA: 0x5843 | Ordinal: 22596
        void setAttributeValue(int, float);

    // RVA: 0x5844 | Ordinal: 22597
        void setAttributeValue(int, float, float);

    // RVA: 0x5845 | Ordinal: 22598
        void setAttributeValue(int, float, float, float);

    // RVA: 0x5846 | Ordinal: 22599
        void setAttributeValue(int, float, float, float, float);

    // RVA: 0x5847 | Ordinal: 22600
        void setAttributeValue(int, float const *, int, int);

    // RVA: 0x5848 | Ordinal: 22601
        void setAttributeValue(char const *, class QColor const &);

    // RVA: 0x5849 | Ordinal: 22602
        void setAttributeValue(char const *, class QVector2D const &);

    // RVA: 0x584A | Ordinal: 22603
        void setAttributeValue(char const *, class QVector3D const &);

    // RVA: 0x584B | Ordinal: 22604
        void setAttributeValue(char const *, class QVector4D const &);

    // RVA: 0x584C | Ordinal: 22605
        void setAttributeValue(char const *, float);

    // RVA: 0x584D | Ordinal: 22606
        void setAttributeValue(char const *, float, float);

    // RVA: 0x584E | Ordinal: 22607
        void setAttributeValue(char const *, float, float, float);

    // RVA: 0x584F | Ordinal: 22608
        void setAttributeValue(char const *, float, float, float, float);

    // RVA: 0x5850 | Ordinal: 22609
        void setAttributeValue(char const *, float const *, int, int);

    // RVA: 0x591C | Ordinal: 22813
        void setDefaultInnerTessellationLevels(class QVector<float> const &);

    // RVA: 0x591D | Ordinal: 22814
        void setDefaultOuterTessellationLevels(class QVector<float> const &);

    // RVA: 0x5AE6 | Ordinal: 23271
        void setPatchVertexCount(int);

    // RVA: 0x5C2A | Ordinal: 23595
        void setUniformValue(int, class QGenericMatrix<2, 2, float> const &);

    // RVA: 0x5C2B | Ordinal: 23596
        void setUniformValue(int, class QGenericMatrix<2, 3, float> const &);

    // RVA: 0x5C2C | Ordinal: 23597
        void setUniformValue(int, class QGenericMatrix<2, 4, float> const &);

    // RVA: 0x5C2D | Ordinal: 23598
        void setUniformValue(int, class QGenericMatrix<3, 2, float> const &);

    // RVA: 0x5C2E | Ordinal: 23599
        void setUniformValue(int, class QGenericMatrix<3, 3, float> const &);

    // RVA: 0x5C2F | Ordinal: 23600
        void setUniformValue(int, class QGenericMatrix<3, 4, float> const &);

    // RVA: 0x5C30 | Ordinal: 23601
        void setUniformValue(int, class QGenericMatrix<4, 2, float> const &);

    // RVA: 0x5C31 | Ordinal: 23602
        void setUniformValue(int, class QGenericMatrix<4, 3, float> const &);

    // RVA: 0x5C32 | Ordinal: 23603
        void setUniformValue(int, class QColor const &);

    // RVA: 0x5C33 | Ordinal: 23604
        void setUniformValue(int, class QMatrix4x4 const &);

    // RVA: 0x5C34 | Ordinal: 23605
        void setUniformValue(int, class QPoint const &);

    // RVA: 0x5C35 | Ordinal: 23606
        void setUniformValue(int, class QPointF const &);

    // RVA: 0x5C36 | Ordinal: 23607
        void setUniformValue(int, class QSize const &);

    // RVA: 0x5C37 | Ordinal: 23608
        void setUniformValue(int, class QSizeF const &);

    // RVA: 0x5C38 | Ordinal: 23609
        void setUniformValue(int, class QTransform const &);

    // RVA: 0x5C39 | Ordinal: 23610
        void setUniformValue(int, class QVector2D const &);

    // RVA: 0x5C3A | Ordinal: 23611
        void setUniformValue(int, class QVector3D const &);

    // RVA: 0x5C3B | Ordinal: 23612
        void setUniformValue(int, class QVector4D const &);

    // RVA: 0x5C3C | Ordinal: 23613
        void setUniformValue(int, int);

    // RVA: 0x5C3D | Ordinal: 23614
        void setUniformValue(int, unsigned int);

    // RVA: 0x5C3E | Ordinal: 23615
        void setUniformValue(int, float);

    // RVA: 0x5C3F | Ordinal: 23616
        void setUniformValue(int, float, float);

    // RVA: 0x5C40 | Ordinal: 23617
        void setUniformValue(int, float, float, float);

    // RVA: 0x5C41 | Ordinal: 23618
        void setUniformValue(int, float, float, float, float);

    // RVA: 0x5C42 | Ordinal: 23619
        void setUniformValue(int, float const (*const)[2]);

    // RVA: 0x5C43 | Ordinal: 23620
        void setUniformValue(int, float const (*const)[3]);

    // RVA: 0x5C44 | Ordinal: 23621
        void setUniformValue(int, float const (*const)[4]);

    // RVA: 0x5C45 | Ordinal: 23622
        void setUniformValue(char const *, class QGenericMatrix<2, 2, float> const &);

    // RVA: 0x5C46 | Ordinal: 23623
        void setUniformValue(char const *, class QGenericMatrix<2, 3, float> const &);

    // RVA: 0x5C47 | Ordinal: 23624
        void setUniformValue(char const *, class QGenericMatrix<2, 4, float> const &);

    // RVA: 0x5C48 | Ordinal: 23625
        void setUniformValue(char const *, class QGenericMatrix<3, 2, float> const &);

    // RVA: 0x5C49 | Ordinal: 23626
        void setUniformValue(char const *, class QGenericMatrix<3, 3, float> const &);

    // RVA: 0x5C4A | Ordinal: 23627
        void setUniformValue(char const *, class QGenericMatrix<3, 4, float> const &);

    // RVA: 0x5C4B | Ordinal: 23628
        void setUniformValue(char const *, class QGenericMatrix<4, 2, float> const &);

    // RVA: 0x5C4C | Ordinal: 23629
        void setUniformValue(char const *, class QGenericMatrix<4, 3, float> const &);

    // RVA: 0x5C4D | Ordinal: 23630
        void setUniformValue(char const *, class QColor const &);

    // RVA: 0x5C4E | Ordinal: 23631
        void setUniformValue(char const *, class QMatrix4x4 const &);

    // RVA: 0x5C4F | Ordinal: 23632
        void setUniformValue(char const *, class QPoint const &);

    // RVA: 0x5C50 | Ordinal: 23633
        void setUniformValue(char const *, class QPointF const &);

    // RVA: 0x5C51 | Ordinal: 23634
        void setUniformValue(char const *, class QSize const &);

    // RVA: 0x5C52 | Ordinal: 23635
        void setUniformValue(char const *, class QSizeF const &);

    // RVA: 0x5C53 | Ordinal: 23636
        void setUniformValue(char const *, class QTransform const &);

    // RVA: 0x5C54 | Ordinal: 23637
        void setUniformValue(char const *, class QVector2D const &);

    // RVA: 0x5C55 | Ordinal: 23638
        void setUniformValue(char const *, class QVector3D const &);

    // RVA: 0x5C56 | Ordinal: 23639
        void setUniformValue(char const *, class QVector4D const &);

    // RVA: 0x5C57 | Ordinal: 23640
        void setUniformValue(char const *, int);

    // RVA: 0x5C58 | Ordinal: 23641
        void setUniformValue(char const *, unsigned int);

    // RVA: 0x5C59 | Ordinal: 23642
        void setUniformValue(char const *, float);

    // RVA: 0x5C5A | Ordinal: 23643
        void setUniformValue(char const *, float, float);

    // RVA: 0x5C5B | Ordinal: 23644
        void setUniformValue(char const *, float, float, float);

    // RVA: 0x5C5C | Ordinal: 23645
        void setUniformValue(char const *, float, float, float, float);

    // RVA: 0x5C5D | Ordinal: 23646
        void setUniformValue(char const *, float const (*const)[2]);

    // RVA: 0x5C5E | Ordinal: 23647
        void setUniformValue(char const *, float const (*const)[3]);

    // RVA: 0x5C5F | Ordinal: 23648
        void setUniformValue(char const *, float const (*const)[4]);

    // RVA: 0x5C60 | Ordinal: 23649
        void setUniformValueArray(int, int const *, int);

    // RVA: 0x5C61 | Ordinal: 23650
        void setUniformValueArray(int, unsigned int const *, int);

    // RVA: 0x5C62 | Ordinal: 23651
        void setUniformValueArray(int, float const *, int, int);

    // RVA: 0x5C63 | Ordinal: 23652
        void setUniformValueArray(int, class QGenericMatrix<2, 2, float> const *, int);

    // RVA: 0x5C64 | Ordinal: 23653
        void setUniformValueArray(int, class QGenericMatrix<2, 3, float> const *, int);

    // RVA: 0x5C65 | Ordinal: 23654
        void setUniformValueArray(int, class QGenericMatrix<2, 4, float> const *, int);

    // RVA: 0x5C66 | Ordinal: 23655
        void setUniformValueArray(int, class QGenericMatrix<3, 2, float> const *, int);

    // RVA: 0x5C67 | Ordinal: 23656
        void setUniformValueArray(int, class QGenericMatrix<3, 3, float> const *, int);

    // RVA: 0x5C68 | Ordinal: 23657
        void setUniformValueArray(int, class QGenericMatrix<3, 4, float> const *, int);

    // RVA: 0x5C69 | Ordinal: 23658
        void setUniformValueArray(int, class QGenericMatrix<4, 2, float> const *, int);

    // RVA: 0x5C6A | Ordinal: 23659
        void setUniformValueArray(int, class QGenericMatrix<4, 3, float> const *, int);

    // RVA: 0x5C6B | Ordinal: 23660
        void setUniformValueArray(int, class QMatrix4x4 const *, int);

    // RVA: 0x5C6C | Ordinal: 23661
        void setUniformValueArray(int, class QVector2D const *, int);

    // RVA: 0x5C6D | Ordinal: 23662
        void setUniformValueArray(int, class QVector3D const *, int);

    // RVA: 0x5C6E | Ordinal: 23663
        void setUniformValueArray(int, class QVector4D const *, int);

    // RVA: 0x5C6F | Ordinal: 23664
        void setUniformValueArray(char const *, int const *, int);

    // RVA: 0x5C70 | Ordinal: 23665
        void setUniformValueArray(char const *, unsigned int const *, int);

    // RVA: 0x5C71 | Ordinal: 23666
        void setUniformValueArray(char const *, float const *, int, int);

    // RVA: 0x5C72 | Ordinal: 23667
        void setUniformValueArray(char const *, class QGenericMatrix<2, 2, float> const *, int);

    // RVA: 0x5C73 | Ordinal: 23668
        void setUniformValueArray(char const *, class QGenericMatrix<2, 3, float> const *, int);

    // RVA: 0x5C74 | Ordinal: 23669
        void setUniformValueArray(char const *, class QGenericMatrix<2, 4, float> const *, int);

    // RVA: 0x5C75 | Ordinal: 23670
        void setUniformValueArray(char const *, class QGenericMatrix<3, 2, float> const *, int);

    // RVA: 0x5C76 | Ordinal: 23671
        void setUniformValueArray(char const *, class QGenericMatrix<3, 3, float> const *, int);

    // RVA: 0x5C77 | Ordinal: 23672
        void setUniformValueArray(char const *, class QGenericMatrix<3, 4, float> const *, int);

    // RVA: 0x5C78 | Ordinal: 23673
        void setUniformValueArray(char const *, class QGenericMatrix<4, 2, float> const *, int);

    // RVA: 0x5C79 | Ordinal: 23674
        void setUniformValueArray(char const *, class QGenericMatrix<4, 3, float> const *, int);

    // RVA: 0x5C7A | Ordinal: 23675
        void setUniformValueArray(char const *, class QMatrix4x4 const *, int);

    // RVA: 0x5C7B | Ordinal: 23676
        void setUniformValueArray(char const *, class QVector2D const *, int);

    // RVA: 0x5C7C | Ordinal: 23677
        void setUniformValueArray(char const *, class QVector3D const *, int);

    // RVA: 0x5C7D | Ordinal: 23678
        void setUniformValueArray(char const *, class QVector4D const *, int);

    // RVA: 0x5CEC | Ordinal: 23789
        void shaderDestroyed(void);

    // RVA: 0x5CF4 | Ordinal: 23797
        void shaders(void) const;

    // RVA: 0x5FB4 | Ordinal: 24501
        void tr(char const *, char const *, int);

    // RVA: 0x5FFB | Ordinal: 24572
        void trUtf8(char const *, char const *, int);

    // RVA: 0x6091 | Ordinal: 24722
        void uniformLocation(class QByteArray const &) const;

    // RVA: 0x6092 | Ordinal: 24723
        void uniformLocation(class QString const &) const;

    // RVA: 0x6093 | Ordinal: 24724
        void uniformLocation(char const *) const;

    // RVA: 0x49C | Ordinal: 1181
        void _QOpenGLShaderProgram(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLSHADERPROGRAM_HPP
