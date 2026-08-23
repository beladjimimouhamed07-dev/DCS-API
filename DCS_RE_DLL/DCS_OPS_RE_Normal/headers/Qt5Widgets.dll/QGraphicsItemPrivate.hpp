#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsItemPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsItemPrivate
{
public:

    // RVA: 0x74 | Ordinal: 117
        void QGraphicsItemPrivate(class QGraphicsItemPrivate const &);

    // RVA: 0x75 | Ordinal: 118
        void QGraphicsItemPrivate(void);

    // RVA: 0x547 | Ordinal: 1352
        void addChild(class QGraphicsItem *);

    // RVA: 0x5E4 | Ordinal: 1509
        void appendGraphicsTransform(class QGraphicsTransform *);

    // RVA: 0x679 | Ordinal: 1658
        void calcEffectiveOpacity(void) const;

    // RVA: 0x6F3 | Ordinal: 1780
        void childrenBoundingRectHelper(class QTransform *, class QRectF *, class QGraphicsItem *);

    // RVA: 0x6F6 | Ordinal: 1783
        void childrenClippedToShape(void) const;

    // RVA: 0x6F8 | Ordinal: 1785
        void childrenCombineOpacity(void) const;

    // RVA: 0x6F9 | Ordinal: 1786
        void childrenList(void);

    // RVA: 0x6FC | Ordinal: 1789
        void children_append(class QDeclarativeListProperty<class QGraphicsObject> *, class QGraphicsObject *);

    // RVA: 0x6FD | Ordinal: 1790
        void children_at(class QDeclarativeListProperty<class QGraphicsObject> *, int);

    // RVA: 0x6FE | Ordinal: 1791
        void children_clear(class QDeclarativeListProperty<class QGraphicsObject> *);

    // RVA: 0x6FF | Ordinal: 1792
        void children_count(class QDeclarativeListProperty<class QGraphicsObject> *);

    // RVA: 0x725 | Ordinal: 1830
        void clearFocusHelper(bool, bool);

    // RVA: 0x737 | Ordinal: 1848
        void clearSubFocus(class QGraphicsItem *, class QGraphicsItem *);

    // RVA: 0x796 | Ordinal: 1943
        void combineOpacityFromParent(double) const;

    // RVA: 0x797 | Ordinal: 1944
        void combineTransformFromParent(class QTransform *, class QTransform const *) const;

    // RVA: 0x798 | Ordinal: 1945
        void combineTransformToParent(class QTransform *, class QTransform const *) const;

    // RVA: 0xA0A | Ordinal: 2571
        void depth(void) const;

    // RVA: 0xA20 | Ordinal: 2593
        void discardUpdateRequest(bool, bool, bool) const;

    // RVA: 0xAF9 | Ordinal: 2810
        void effectiveBoundingRect(class QRectF const &) const;

    // RVA: 0xAFA | Ordinal: 2811
        void effectiveBoundingRect(class QGraphicsItem *) const;

    // RVA: 0xAFD | Ordinal: 2814
        void effectiveOpacity(void) const;

    // RVA: 0xB1A | Ordinal: 2843
        void ensureSceneTransform(void);

    // RVA: 0xB1B | Ordinal: 2844
        void ensureSceneTransformRecursive(class QGraphicsItem **);

    // RVA: 0xB1C | Ordinal: 2845
        void ensureSequentialSiblingIndex(void);

    // RVA: 0xB1D | Ordinal: 2846
        void ensureSortedChildren(void);

    // RVA: 0xBB0 | Ordinal: 2993
        void extra(enum QGraphicsItemPrivate::Extra) const;

    // RVA: 0xBB2 | Ordinal: 2995
        void extraItemCache(void) const;

    // RVA: 0xC41 | Ordinal: 3138
        void focusScopeItemChange(bool);

    // RVA: 0xC7B | Ordinal: 3196
        void genericMapFromScene(class QPointF const &, class QWidget const *) const;

    // RVA: 0xC7C | Ordinal: 3197
        void genericMapFromSceneTransform(class QWidget const *) const;

    // RVA: 0xC8A | Ordinal: 3211
        void get(class QGraphicsItem *);

    // RVA: 0xC8B | Ordinal: 3212
        void get(class QGraphicsItem const *);

    // RVA: 0xCFB | Ordinal: 3324
        void hasTranslateOnlySceneTransform(void);

    // RVA: 0xD05 | Ordinal: 3334
        void height(void) const;

    // RVA: 0xDE9 | Ordinal: 3562
        void initStyleOption(class QStyleOptionGraphicsItem *, class QTransform const &, class QRegion const &, bool) const;

    // RVA: 0xE6D | Ordinal: 3694
        void insertionOrder(class QGraphicsItem *, class QGraphicsItem *);

    // RVA: 0xE90 | Ordinal: 3729
        void invalidateChildGraphicsEffectsRecursively(enum QGraphicsItemPrivate::InvalidateReason);

    // RVA: 0xE91 | Ordinal: 3730
        void invalidateChildrenSceneTransform(void);

    // RVA: 0xE92 | Ordinal: 3731
        void invalidateDepthRecursively(void);

    // RVA: 0xE95 | Ordinal: 3734
        void invalidateParentGraphicsEffectsRecursively(void);

    // RVA: 0xEEE | Ordinal: 3823
        void isFullyTransparent(void) const;

    // RVA: 0xEFE | Ordinal: 3839
        void isInvisible(void) const;

    // RVA: 0xF25 | Ordinal: 3878
        void isOpacityNull(void) const;

    // RVA: 0xF26 | Ordinal: 3879
        void isOpacityNull(double);

    // RVA: 0xF2E | Ordinal: 3887
        void isProxyWidget(void) const;

    // RVA: 0xFC4 | Ordinal: 4037
        void itemIsUntransformable(void) const;

    // RVA: 0x10CF | Ordinal: 4304
        void markParentDirty(bool);

    // RVA: 0x10F8 | Ordinal: 4345
        void maybeExtraItemCache(void) const;

    // RVA: 0x1270 | Ordinal: 4721
        void movableAncestorIsSelected(class QGraphicsItem const *);

    // RVA: 0x13C9 | Ordinal: 5066
        void prependGraphicsTransform(class QGraphicsTransform *);

    // RVA: 0x140F | Ordinal: 5136
        void q_func(void);

    // RVA: 0x1410 | Ordinal: 5137
        void q_func(void) const;

    // RVA: 0x1622 | Ordinal: 5667
        void remapItemPos(class QEvent *, class QGraphicsItem *);

    // RVA: 0x162F | Ordinal: 5680
        void removeChild(class QGraphicsItem *);

    // RVA: 0x1634 | Ordinal: 5685
        void removeExtraItemCache(void);

    // RVA: 0x1678 | Ordinal: 5753
        void resetFocusProxy(void);

    // RVA: 0x167B | Ordinal: 5756
        void resetHeight(void);

    // RVA: 0x1687 | Ordinal: 5768
        void resetWidth(void);

    // RVA: 0x16C1 | Ordinal: 5826
        void resolveDepth(void);

    // RVA: 0x16C2 | Ordinal: 5827
        void resolveFont(unsigned int);

    // RVA: 0x16C6 | Ordinal: 5831
        void resolvePalette(unsigned int);

    // RVA: 0x172C | Ordinal: 5933
        void sceneEffectiveBoundingRect(void) const;

    // RVA: 0x17DF | Ordinal: 6112
        void sendScenePosChange(void);

    // RVA: 0x194C | Ordinal: 6477
        void setEnabledHelper(bool, bool, bool);

    // RVA: 0x1963 | Ordinal: 6500
        void setExtra(enum QGraphicsItemPrivate::Extra, class QVariant const &);

    // RVA: 0x198E | Ordinal: 6543
        void setFocusHelper(enum Qt::FocusReason, bool, bool);

    // RVA: 0x19E7 | Ordinal: 6632
        void setHeight(double);

    // RVA: 0x1A2E | Ordinal: 6703
        void setIsMemberOfGroup(bool);

    // RVA: 0x1B42 | Ordinal: 6979
        void setParentItemHelper(class QGraphicsItem *, class QVariant const *, class QVariant const *);

    // RVA: 0x1B64 | Ordinal: 7013
        void setPosHelper(class QPointF const &);

    // RVA: 0x1C64 | Ordinal: 7269
        void setSubFocus(class QGraphicsItem *, class QGraphicsItem *);

    // RVA: 0x1CE0 | Ordinal: 7393
        void setTransformHelper(class QTransform const &);

    // RVA: 0x1D24 | Ordinal: 7461
        void setVisibleHelper(bool, bool, bool, bool);

    // RVA: 0x1D3A | Ordinal: 7483
        void setWidth(double);

    // RVA: 0x1DCF | Ordinal: 7632
        void siblingOrderChange(void);

    // RVA: 0x1F58 | Ordinal: 8025
        void subFocusItemChange(void);

    // RVA: 0x219D | Ordinal: 8606
        void transformChanged(void);

    // RVA: 0x219F | Ordinal: 8608
        void transformToParent(void) const;

    // RVA: 0x21F9 | Ordinal: 8698
        void unsetExtra(enum QGraphicsItemPrivate::Extra);

    // RVA: 0x220E | Ordinal: 8719
        void updateAncestorFlag(enum QGraphicsItem::GraphicsItemFlag, enum QGraphicsItemPrivate::AncestorFlag, bool, bool);

    // RVA: 0x220F | Ordinal: 8720
        void updateAncestorFlags(void);

    // RVA: 0x2217 | Ordinal: 8728
        void updateChildWithGraphicsEffectFlagRecursively(void);

    // RVA: 0x2241 | Ordinal: 8770
        void updatePaintedViewBoundingRects(bool);

    // RVA: 0x224C | Ordinal: 8781
        void updateSceneTransformFromParent(void);

    // RVA: 0x230F | Ordinal: 8976
        void width(void) const;

    // RVA: 0x1F6 | Ordinal: 503
        void _QGraphicsItemPrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSITEMPRIVATE_HPP
