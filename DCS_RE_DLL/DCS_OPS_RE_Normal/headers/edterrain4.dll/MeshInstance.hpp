#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: MeshInstance
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {
namespace lLinked {

class MeshInstance
{
public:

    // RVA: 0x19C | Ordinal: 413
        void buildSceneObjects(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, struct offshore::Mesh *, class std::function<bool __cdecl(struct assets::lLinked::MeshInstance const &)> const *, class std::function<bool __cdecl(struct assets::lLinked::SceneObject const &)> const *);

    // RVA: 0x1A9 | Ordinal: 426
        void buildSubObjects(int, int, int, struct offshore::Mesh *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, bool);

    // RVA: 0x1AA | Ordinal: 427
        void buildSubObjects(struct offshore::Mesh *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, bool);
};

} // namespace lLinked
} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_MESHINSTANCE_HPP
