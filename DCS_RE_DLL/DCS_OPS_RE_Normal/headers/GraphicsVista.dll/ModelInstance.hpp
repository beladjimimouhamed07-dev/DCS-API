#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: ModelInstance
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class ModelInstance
{
public:

    // RVA: 0xB | Ordinal: 12
        void ModelInstance(class Graphics::ModelInstance &&);

    // RVA: 0xC | Ordinal: 13
        void ModelInstance(class Graphics::ModelInstance const &);

    // RVA: 0xD | Ordinal: 14
        void ModelInstance(class Graphics::ModelPtr);

    // RVA: 0xE | Ordinal: 15
        void ModelInstance(void);

    // RVA: 0xD5 | Ordinal: 214
        void allResourcesAreReady(void);

    // RVA: 0xDA | Ordinal: 219
        void clearDecals(void);

    // RVA: 0xDD | Ordinal: 222
        void cookie(class std::unique_ptr<class model::ModelCookie, struct model::ModelCookieDeleter> &&);

    // RVA: 0xFB | Ordinal: 252
        void getIModel(void);

    // RVA: 0xFC | Ordinal: 253
        void getIModel(void) const;

    // RVA: 0xFD | Ordinal: 254
        void getLiveryHandle(void) const;

    // RVA: 0x104 | Ordinal: 261
        void get_cookie(void);

    // RVA: 0x119 | Ordinal: 282
        void liveryHandle(unsigned int);

    // RVA: 0x11C | Ordinal: 285
        void model(class Graphics::ModelPtr);

    // RVA: 0x13F | Ordinal: 320
        void setLiveryHandle(unsigned int);

    // RVA: 0x147 | Ordinal: 328
        void set_cookie(class std::unique_ptr<class model::ModelCookie, struct model::ModelCookieDeleter> &&);

    // RVA: 0x155 | Ordinal: 342
        void shoot(class osg::Vec3d const &, class osg::Vec3d const &, float);

    // RVA: 0x2B | Ordinal: 44
        void _ModelInstance(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_MODELINSTANCE_HPP
