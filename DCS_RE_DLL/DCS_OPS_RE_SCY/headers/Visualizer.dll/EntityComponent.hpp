#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: EntityComponent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class EntityComponent
{
public:

    // RVA: 0x15 | Ordinal: 22
        void EntityComponent(enum COMPONENT_TYPE_ENUM);

    // RVA: 0x16 | Ordinal: 23
        void EntityComponent(class EntityComponent const &);

    // RVA: 0xAE | Ordinal: 175
        void createByType(enum COMPONENT_TYPE_ENUM, class ed::vector<class EntityComponent *, class ed::allocator<class EntityComponent *>> *);

    // RVA: 0xD3 | Ordinal: 212
        void getComponentType(void) const;

    // RVA: 0xDD | Ordinal: 222
        void getGlobalStorage(enum COMPONENT_TYPE_ENUM);

    // RVA: 0xEA | Ordinal: 235
        void getParentEntity(void) const;

    // RVA: 0xF7 | Ordinal: 248
        void getStorage(void);

    // RVA: 0x128 | Ordinal: 297
        void release(void);

    // RVA: 0x27 | Ordinal: 40
        void _EntityComponent(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_ENTITYCOMPONENT_HPP
