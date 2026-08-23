#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: Entity
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Entity
{
public:

    // RVA: 0x13 | Ordinal: 20
        void Entity(class Entity const &);

    // RVA: 0x14 | Ordinal: 21
        void Entity(void);

    // RVA: 0x8B | Ordinal: 140
        void addComponent(class EntityComponent *);

    // RVA: 0xD2 | Ordinal: 211
        void getComponentByType(enum COMPONENT_TYPE_ENUM);

    // RVA: 0x104 | Ordinal: 261
        void init(void);

    // RVA: 0x26 | Ordinal: 39
        void _Entity(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_ENTITY_HPP
