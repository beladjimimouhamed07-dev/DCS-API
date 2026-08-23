#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPainter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPainter
{
public:

    // RVA: 0x201 | Ordinal: 514
        void QPainter(class QPaintDevice *);

    // RVA: 0x202 | Ordinal: 515
        void QPainter(void);

    // RVA: 0xA52 | Ordinal: 2643
        void background(void) const;

    // RVA: 0xA5B | Ordinal: 2652
        void backgroundMode(void) const;

    // RVA: 0xA69 | Ordinal: 2666
        void begin(class QPaintDevice *);

    // RVA: 0xA7C | Ordinal: 2685
        void beginNativePainting(void);

    // RVA: 0xAF1 | Ordinal: 2802
        void boundingRect(class QRect const &, int, class QString const &);

    // RVA: 0xAF2 | Ordinal: 2803
        void boundingRect(int, int, int, int, int, class QString const &);

    // RVA: 0xAF3 | Ordinal: 2804
        void boundingRect(class QRectF const &, class QString const &, class QTextOption const &);

    // RVA: 0xAF4 | Ordinal: 2805
        void boundingRect(class QRectF const &, int, class QString const &);

    // RVA: 0xB00 | Ordinal: 2817
        void brush(void) const;

    // RVA: 0xB09 | Ordinal: 2826
        void brushOrigin(void) const;

    // RVA: 0xBCE | Ordinal: 3023
        void clipBoundingRect(void) const;

    // RVA: 0xBD6 | Ordinal: 3031
        void clipPath(void) const;

    // RVA: 0xBDB | Ordinal: 3036
        void clipRegion(void) const;

    // RVA: 0xC17 | Ordinal: 3096
        void combinedMatrix(void) const;

    // RVA: 0xC18 | Ordinal: 3097
        void combinedTransform(void) const;

    // RVA: 0xC27 | Ordinal: 3112
        void compositionMode(void) const;

    // RVA: 0xD57 | Ordinal: 3416
        void d_func(void);

    // RVA: 0xD58 | Ordinal: 3417
        void d_func(void) const;

    // RVA: 0xE3D | Ordinal: 3646
        void device(void) const;

    // RVA: 0xE49 | Ordinal: 3658
        void deviceMatrix(void) const;

    // RVA: 0xE58 | Ordinal: 3673
        void deviceTransform(void) const;

    // RVA: 0xEA1 | Ordinal: 3746
        void drawArc(class QRect const &, int, int);

    // RVA: 0xEA2 | Ordinal: 3747
        void drawArc(class QRectF const &, int, int);

    // RVA: 0xEA3 | Ordinal: 3748
        void drawArc(int, int, int, int, int, int);

    // RVA: 0xEA9 | Ordinal: 3754
        void drawChord(class QRect const &, int, int);

    // RVA: 0xEAA | Ordinal: 3755
        void drawChord(class QRectF const &, int, int);

    // RVA: 0xEAB | Ordinal: 3756
        void drawChord(int, int, int, int, int, int);

    // RVA: 0xEAD | Ordinal: 3758
        void drawConvexPolygon(class QPolygon const &);

    // RVA: 0xEAE | Ordinal: 3759
        void drawConvexPolygon(class QPolygonF const &);

    // RVA: 0xEAF | Ordinal: 3760
        void drawConvexPolygon(class QPoint const *, int);

    // RVA: 0xEB0 | Ordinal: 3761
        void drawConvexPolygon(class QPointF const *, int);

    // RVA: 0xEB9 | Ordinal: 3770
        void drawEllipse(class QPoint const &, int, int);

    // RVA: 0xEBA | Ordinal: 3771
        void drawEllipse(class QPointF const &, double, double);

    // RVA: 0xEBB | Ordinal: 3772
        void drawEllipse(class QRect const &);

    // RVA: 0xEBC | Ordinal: 3773
        void drawEllipse(class QRectF const &);

    // RVA: 0xEBD | Ordinal: 3774
        void drawEllipse(int, int, int, int);

    // RVA: 0xEBF | Ordinal: 3776
        void drawGlyphRun(class QPointF const &, class QGlyphRun const &);

    // RVA: 0xEC6 | Ordinal: 3783
        void drawImage(class QPoint const &, class QImage const &);

    // RVA: 0xEC7 | Ordinal: 3784
        void drawImage(class QPoint const &, class QImage const &, class QRect const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xEC8 | Ordinal: 3785
        void drawImage(class QPointF const &, class QImage const &);

    // RVA: 0xEC9 | Ordinal: 3786
        void drawImage(class QPointF const &, class QImage const &, class QRectF const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xECA | Ordinal: 3787
        void drawImage(class QRect const &, class QImage const &, class QRect const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xECB | Ordinal: 3788
        void drawImage(class QRect const &, class QImage const &);

    // RVA: 0xECC | Ordinal: 3789
        void drawImage(class QRectF const &, class QImage const &, class QRectF const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xECD | Ordinal: 3790
        void drawImage(class QRectF const &, class QImage const &);

    // RVA: 0xECE | Ordinal: 3791
        void drawImage(int, int, class QImage const &, int, int, int, int, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xED6 | Ordinal: 3799
        void drawLine(class QLine const &);

    // RVA: 0xED7 | Ordinal: 3800
        void drawLine(class QLineF const &);

    // RVA: 0xED8 | Ordinal: 3801
        void drawLine(class QPoint const &, class QPoint const &);

    // RVA: 0xED9 | Ordinal: 3802
        void drawLine(class QPointF const &, class QPointF const &);

    // RVA: 0xEDA | Ordinal: 3803
        void drawLine(int, int, int, int);

    // RVA: 0xEDF | Ordinal: 3808
        void drawLines(class QVector<class QLine> const &);

    // RVA: 0xEE0 | Ordinal: 3809
        void drawLines(class QVector<class QLineF> const &);

    // RVA: 0xEE1 | Ordinal: 3810
        void drawLines(class QVector<class QPoint> const &);

    // RVA: 0xEE2 | Ordinal: 3811
        void drawLines(class QVector<class QPointF> const &);

    // RVA: 0xEE3 | Ordinal: 3812
        void drawLines(class QLine const *, int);

    // RVA: 0xEE4 | Ordinal: 3813
        void drawLines(class QLineF const *, int);

    // RVA: 0xEE5 | Ordinal: 3814
        void drawLines(class QPoint const *, int);

    // RVA: 0xEE6 | Ordinal: 3815
        void drawLines(class QPointF const *, int);

    // RVA: 0xEED | Ordinal: 3822
        void drawPath(class QPainterPath const &);

    // RVA: 0xEEF | Ordinal: 3824
        void drawPicture(class QPoint const &, class QPicture const &);

    // RVA: 0xEF0 | Ordinal: 3825
        void drawPicture(class QPointF const &, class QPicture const &);

    // RVA: 0xEF1 | Ordinal: 3826
        void drawPicture(int, int, class QPicture const &);

    // RVA: 0xEF2 | Ordinal: 3827
        void drawPie(class QRect const &, int, int);

    // RVA: 0xEF3 | Ordinal: 3828
        void drawPie(class QRectF const &, int, int);

    // RVA: 0xEF4 | Ordinal: 3829
        void drawPie(int, int, int, int, int, int);

    // RVA: 0xEF9 | Ordinal: 3834
        void drawPixmap(class QPoint const &, class QPixmap const &);

    // RVA: 0xEFA | Ordinal: 3835
        void drawPixmap(class QPoint const &, class QPixmap const &, class QRect const &);

    // RVA: 0xEFB | Ordinal: 3836
        void drawPixmap(class QPointF const &, class QPixmap const &);

    // RVA: 0xEFC | Ordinal: 3837
        void drawPixmap(class QPointF const &, class QPixmap const &, class QRectF const &);

    // RVA: 0xEFD | Ordinal: 3838
        void drawPixmap(class QRect const &, class QPixmap const &, class QRect const &);

    // RVA: 0xEFE | Ordinal: 3839
        void drawPixmap(class QRect const &, class QPixmap const &);

    // RVA: 0xEFF | Ordinal: 3840
        void drawPixmap(class QRectF const &, class QPixmap const &, class QRectF const &);

    // RVA: 0xF00 | Ordinal: 3841
        void drawPixmap(int, int, class QPixmap const &);

    // RVA: 0xF01 | Ordinal: 3842
        void drawPixmap(int, int, class QPixmap const &, int, int, int, int);

    // RVA: 0xF02 | Ordinal: 3843
        void drawPixmap(int, int, int, int, class QPixmap const &);

    // RVA: 0xF03 | Ordinal: 3844
        void drawPixmap(int, int, int, int, class QPixmap const &, int, int, int, int);

    // RVA: 0xF09 | Ordinal: 3850
        void drawPixmapFragments(class QPainter::PixmapFragment const *, int, class QPixmap const &, class QFlags<enum QPainter::PixmapFragmentHint>);

    // RVA: 0xF0B | Ordinal: 3852
        void drawPoint(class QPoint const &);

    // RVA: 0xF0C | Ordinal: 3853
        void drawPoint(class QPointF const &);

    // RVA: 0xF0D | Ordinal: 3854
        void drawPoint(int, int);

    // RVA: 0xF14 | Ordinal: 3861
        void drawPoints(class QPolygon const &);

    // RVA: 0xF15 | Ordinal: 3862
        void drawPoints(class QPolygonF const &);

    // RVA: 0xF16 | Ordinal: 3863
        void drawPoints(class QPoint const *, int);

    // RVA: 0xF17 | Ordinal: 3864
        void drawPoints(class QPointF const *, int);

    // RVA: 0xF21 | Ordinal: 3874
        void drawPolygon(class QPolygon const &, enum Qt::FillRule);

    // RVA: 0xF22 | Ordinal: 3875
        void drawPolygon(class QPolygonF const &, enum Qt::FillRule);

    // RVA: 0xF23 | Ordinal: 3876
        void drawPolygon(class QPoint const *, int, enum Qt::FillRule);

    // RVA: 0xF24 | Ordinal: 3877
        void drawPolygon(class QPointF const *, int, enum Qt::FillRule);

    // RVA: 0xF28 | Ordinal: 3881
        void drawPolyline(class QPolygon const &);

    // RVA: 0xF29 | Ordinal: 3882
        void drawPolyline(class QPolygonF const &);

    // RVA: 0xF2A | Ordinal: 3883
        void drawPolyline(class QPoint const *, int);

    // RVA: 0xF2B | Ordinal: 3884
        void drawPolyline(class QPointF const *, int);

    // RVA: 0xF2C | Ordinal: 3885
        void drawRect(class QRect const &);

    // RVA: 0xF2D | Ordinal: 3886
        void drawRect(class QRectF const &);

    // RVA: 0xF2E | Ordinal: 3887
        void drawRect(int, int, int, int);

    // RVA: 0xF35 | Ordinal: 3894
        void drawRects(class QVector<class QRect> const &);

    // RVA: 0xF36 | Ordinal: 3895
        void drawRects(class QVector<class QRectF> const &);

    // RVA: 0xF37 | Ordinal: 3896
        void drawRects(class QRect const *, int);

    // RVA: 0xF38 | Ordinal: 3897
        void drawRects(class QRectF const *, int);

    // RVA: 0xF3C | Ordinal: 3901
        void drawRoundRect(class QRect const &, int, int);

    // RVA: 0xF3D | Ordinal: 3902
        void drawRoundRect(class QRectF const &, int, int);

    // RVA: 0xF3E | Ordinal: 3903
        void drawRoundRect(int, int, int, int, int, int);

    // RVA: 0xF40 | Ordinal: 3905
        void drawRoundedRect(class QRect const &, double, double, enum Qt::SizeMode);

    // RVA: 0xF41 | Ordinal: 3906
        void drawRoundedRect(class QRectF const &, double, double, enum Qt::SizeMode);

    // RVA: 0xF42 | Ordinal: 3907
        void drawRoundedRect(int, int, int, int, double, double, enum Qt::SizeMode);

    // RVA: 0xF43 | Ordinal: 3908
        void drawStaticText(class QPoint const &, class QStaticText const &);

    // RVA: 0xF44 | Ordinal: 3909
        void drawStaticText(class QPointF const &, class QStaticText const &);

    // RVA: 0xF45 | Ordinal: 3910
        void drawStaticText(int, int, class QStaticText const &);

    // RVA: 0xF4A | Ordinal: 3915
        void drawText(class QPoint const &, class QString const &);

    // RVA: 0xF4B | Ordinal: 3916
        void drawText(class QPointF const &, class QString const &);

    // RVA: 0xF4C | Ordinal: 3917
        void drawText(class QPointF const &, class QString const &, int, int);

    // RVA: 0xF4D | Ordinal: 3918
        void drawText(class QRect const &, int, class QString const &, class QRect *);

    // RVA: 0xF4E | Ordinal: 3919
        void drawText(class QRectF const &, class QString const &, class QTextOption const &);

    // RVA: 0xF4F | Ordinal: 3920
        void drawText(class QRectF const &, int, class QString const &, class QRectF *);

    // RVA: 0xF50 | Ordinal: 3921
        void drawText(int, int, class QString const &);

    // RVA: 0xF51 | Ordinal: 3922
        void drawText(int, int, int, int, int, class QString const &, class QRect *);

    // RVA: 0xF55 | Ordinal: 3926
        void drawTextItem(class QPoint const &, class QTextItem const &);

    // RVA: 0xF56 | Ordinal: 3927
        void drawTextItem(class QPointF const &, class QTextItem const &);

    // RVA: 0xF57 | Ordinal: 3928
        void drawTextItem(int, int, class QTextItem const &);

    // RVA: 0xF5F | Ordinal: 3936
        void drawTiledPixmap(class QRect const &, class QPixmap const &, class QPoint const &);

    // RVA: 0xF60 | Ordinal: 3937
        void drawTiledPixmap(class QRectF const &, class QPixmap const &, class QPointF const &);

    // RVA: 0xF61 | Ordinal: 3938
        void drawTiledPixmap(int, int, int, int, class QPixmap const &, int, int);

    // RVA: 0xFA5 | Ordinal: 4006
        void end(void);

    // RVA: 0xFBB | Ordinal: 4028
        void endNativePainting(void);

    // RVA: 0xFE0 | Ordinal: 4065
        void eraseRect(class QRect const &);

    // RVA: 0xFE1 | Ordinal: 4066
        void eraseRect(class QRectF const &);

    // RVA: 0xFE2 | Ordinal: 4067
        void eraseRect(int, int, int, int);

    // RVA: 0x1041 | Ordinal: 4162
        void fillPath(class QPainterPath const &, class QBrush const &);

    // RVA: 0x1049 | Ordinal: 4170
        void fillRect(class QRect const &, class QBrush const &);

    // RVA: 0x104A | Ordinal: 4171
        void fillRect(class QRect const &, class QColor const &);

    // RVA: 0x104B | Ordinal: 4172
        void fillRect(class QRect const &, enum Qt::BrushStyle);

    // RVA: 0x104C | Ordinal: 4173
        void fillRect(class QRect const &, enum Qt::GlobalColor);

    // RVA: 0x104D | Ordinal: 4174
        void fillRect(class QRect const &, enum QGradient::Preset);

    // RVA: 0x104E | Ordinal: 4175
        void fillRect(class QRectF const &, class QBrush const &);

    // RVA: 0x104F | Ordinal: 4176
        void fillRect(class QRectF const &, class QColor const &);

    // RVA: 0x1050 | Ordinal: 4177
        void fillRect(class QRectF const &, enum Qt::BrushStyle);

    // RVA: 0x1051 | Ordinal: 4178
        void fillRect(class QRectF const &, enum Qt::GlobalColor);

    // RVA: 0x1052 | Ordinal: 4179
        void fillRect(class QRectF const &, enum QGradient::Preset);

    // RVA: 0x1053 | Ordinal: 4180
        void fillRect(int, int, int, int, class QBrush const &);

    // RVA: 0x1054 | Ordinal: 4181
        void fillRect(int, int, int, int, class QColor const &);

    // RVA: 0x1055 | Ordinal: 4182
        void fillRect(int, int, int, int, enum Qt::BrushStyle);

    // RVA: 0x1056 | Ordinal: 4183
        void fillRect(int, int, int, int, enum Qt::GlobalColor);

    // RVA: 0x1057 | Ordinal: 4184
        void fillRect(int, int, int, int, enum QGradient::Preset);

    // RVA: 0x10B7 | Ordinal: 4280
        void font(void) const;

    // RVA: 0x10CF | Ordinal: 4304
        void fontInfo(void) const;

    // RVA: 0x10D4 | Ordinal: 4309
        void fontMetrics(void) const;

    // RVA: 0x4E5A | Ordinal: 20059
        void hasClipping(void) const;

    // RVA: 0x4F0B | Ordinal: 20236
        void initFrom(class QPaintDevice const *);

    // RVA: 0x4FBE | Ordinal: 20415
        void isActive(void) const;

    // RVA: 0x5124 | Ordinal: 20773
        void layoutDirection(void) const;

    // RVA: 0x5234 | Ordinal: 21045
        void matrix(void) const;

    // RVA: 0x5235 | Ordinal: 21046
        void matrixEnabled(void) const;

    // RVA: 0x5396 | Ordinal: 21399
        void opacity(void) const;

    // RVA: 0x53E9 | Ordinal: 21482
        void paintEngine(void) const;

    // RVA: 0x5433 | Ordinal: 21556
        void pen(void) const;

    // RVA: 0x5697 | Ordinal: 22168
        void redirected(class QPaintDevice const *, class QPoint *);

    // RVA: 0x56F8 | Ordinal: 22265
        void renderHints(void) const;

    // RVA: 0x571C | Ordinal: 22301
        void resetMatrix(void);

    // RVA: 0x571E | Ordinal: 22303
        void resetTransform(void);

    // RVA: 0x5752 | Ordinal: 22355
        void restore(void);

    // RVA: 0x5755 | Ordinal: 22358
        void restoreRedirected(class QPaintDevice const *);

    // RVA: 0x5774 | Ordinal: 22389
        void rotate(double);

    // RVA: 0x579F | Ordinal: 22432
        void save(void);

    // RVA: 0x57AD | Ordinal: 22446
        void scale(double, double);

    // RVA: 0x5858 | Ordinal: 22617
        void setBackground(class QBrush const &);

    // RVA: 0x585D | Ordinal: 22622
        void setBackgroundMode(enum Qt::BGMode);

    // RVA: 0x5886 | Ordinal: 22663
        void setBrush(class QBrush const &);

    // RVA: 0x5887 | Ordinal: 22664
        void setBrush(enum Qt::BrushStyle);

    // RVA: 0x588C | Ordinal: 22669
        void setBrushOrigin(class QPoint const &);

    // RVA: 0x588D | Ordinal: 22670
        void setBrushOrigin(class QPointF const &);

    // RVA: 0x588E | Ordinal: 22671
        void setBrushOrigin(int, int);

    // RVA: 0x58AA | Ordinal: 22699
        void setClipPath(class QPainterPath const &, enum Qt::ClipOperation);

    // RVA: 0x58AC | Ordinal: 22701
        void setClipRect(class QRect const &, enum Qt::ClipOperation);

    // RVA: 0x58AD | Ordinal: 22702
        void setClipRect(class QRectF const &, enum Qt::ClipOperation);

    // RVA: 0x58AE | Ordinal: 22703
        void setClipRect(int, int, int, int, enum Qt::ClipOperation);

    // RVA: 0x58B1 | Ordinal: 22706
        void setClipRegion(class QRegion const &, enum Qt::ClipOperation);

    // RVA: 0x58B2 | Ordinal: 22707
        void setClipping(bool);

    // RVA: 0x58CE | Ordinal: 22735
        void setCompositionMode(enum QPainter::CompositionMode);

    // RVA: 0x5992 | Ordinal: 22931
        void setFont(class QFont const &);

    // RVA: 0x5A2E | Ordinal: 23087
        void setLayoutDirection(enum Qt::LayoutDirection);

    // RVA: 0x5A5C | Ordinal: 23133
        void setMatrix(class QMatrix const &, bool);

    // RVA: 0x5A5E | Ordinal: 23135
        void setMatrixEnabled(bool);

    // RVA: 0x5AAD | Ordinal: 23214
        void setOpacity(double);

    // RVA: 0x5AEA | Ordinal: 23275
        void setPen(class QColor const &);

    // RVA: 0x5AEB | Ordinal: 23276
        void setPen(class QPen const &);

    // RVA: 0x5AEC | Ordinal: 23277
        void setPen(enum Qt::PenStyle);

    // RVA: 0x5B32 | Ordinal: 23347
        void setRedirected(class QPaintDevice const *, class QPaintDevice *, class QPoint const &);

    // RVA: 0x5B36 | Ordinal: 23351
        void setRenderHint(enum QPainter::RenderHint, bool);

    // RVA: 0x5B37 | Ordinal: 23352
        void setRenderHints(class QFlags<enum QPainter::RenderHint>, bool);

    // RVA: 0x5C1C | Ordinal: 23581
        void setTransform(class QTransform const &, bool);

    // RVA: 0x5CA3 | Ordinal: 23716
        void setViewTransformEnabled(bool);

    // RVA: 0x5CA4 | Ordinal: 23717
        void setViewport(class QRect const &);

    // RVA: 0x5CA5 | Ordinal: 23718
        void setViewport(int, int, int, int);

    // RVA: 0x5CBF | Ordinal: 23744
        void setWindow(class QRect const &);

    // RVA: 0x5CC0 | Ordinal: 23745
        void setWindow(int, int, int, int);

    // RVA: 0x5CD2 | Ordinal: 23763
        void setWorldMatrix(class QMatrix const &, bool);

    // RVA: 0x5CD3 | Ordinal: 23764
        void setWorldMatrixEnabled(bool);

    // RVA: 0x5CD4 | Ordinal: 23765
        void setWorldTransform(class QTransform const &, bool);

    // RVA: 0x5D0B | Ordinal: 23820
        void shear(double, double);

    // RVA: 0x5E25 | Ordinal: 24102
        void strokePath(class QPainterPath const &, class QPen const &);

    // RVA: 0x5EE3 | Ordinal: 24292
        void testRenderHint(enum QPainter::RenderHint) const;

    // RVA: 0x602A | Ordinal: 24619
        void transform(void) const;

    // RVA: 0x6041 | Ordinal: 24642
        void translate(class QPoint const &);

    // RVA: 0x6042 | Ordinal: 24643
        void translate(class QPointF const &);

    // RVA: 0x6043 | Ordinal: 24644
        void translate(double, double);

    // RVA: 0x6123 | Ordinal: 24868
        void viewTransformEnabled(void) const;

    // RVA: 0x6126 | Ordinal: 24871
        void viewport(void) const;

    // RVA: 0x6167 | Ordinal: 24936
        void window(void) const;

    // RVA: 0x6190 | Ordinal: 24977
        void worldMatrix(void) const;

    // RVA: 0x6191 | Ordinal: 24978
        void worldMatrixEnabled(void) const;

    // RVA: 0x6192 | Ordinal: 24979
        void worldTransform(void) const;

    // RVA: 0x4B4 | Ordinal: 1205
        void _QPainter(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPAINTER_HPP
