#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: TransformComponent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TransformComponent
{
public:

    // RVA: 0x1C | Ordinal: 29
        void TransformComponent(class TransformComponent const &);

    // RVA: 0x1D | Ordinal: 30
        void TransformComponent(void);

    // RVA: 0xA3 | Ordinal: 164
        void attach(class TransformComponent *, char const *);

    // RVA: 0xA5 | Ordinal: 166
        void attachTo(class TransformComponent *, char const *, char const *);

    // RVA: 0xB7 | Ordinal: 184
        void detach(void);

    // RVA: 0xD4 | Ordinal: 213
        void getConnectorName(void);

    // RVA: 0xEB | Ordinal: 236
        void getParentTransform(void);

    // RVA: 0xF3 | Ordinal: 244
        void getRoot(void);

    // RVA: 0x105 | Ordinal: 262
        void init(void);

    // RVA: 0x112 | Ordinal: 275
        void lookAt(class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x114 | Ordinal: 277
        void move(class osg::Vec3f const &);

    // RVA: 0x12B | Ordinal: 300
        void removeChild(class TransformComponent *);

    // RVA: 0x135 | Ordinal: 310
        void scale(class osg::Vec3f const &);

    // RVA: 0x13C | Ordinal: 317
        void setAsChild(class TransformComponent *);

    // RVA: 0x176 | Ordinal: 375
        void setPosition(class osg::Vec3f const &);

    // RVA: 0x182 | Ordinal: 387
        void setTransform(class osg::Matrixf const &);

    // RVA: 0x197 | Ordinal: 408
        void validateChildrenPositions(bool);

    // RVA: 0x198 | Ordinal: 409
        void validatePositionsTree(bool);

    // RVA: 0x2C | Ordinal: 45
        void _TransformComponent(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_TRANSFORMCOMPONENT_HPP
