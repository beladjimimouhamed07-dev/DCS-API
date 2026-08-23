#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Aircraft_Descriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Aircraft_Descriptor
{
public:

    // RVA: 0x28 | Ordinal: 41
        void Aircraft_Descriptor(void);

    // RVA: 0x533 | Ordinal: 1332
        void Airplane(void) const;

    // RVA: 0x595 | Ordinal: 1430
        void Helicopter(void) const;

    // RVA: 0x5EA | Ordinal: 1515
        void SolveTangledAnimations(class Graphics::ModelInstance &) const;

    // RVA: 0x7A4 | Ordinal: 1957
        void fillMissedDefaults(class std::unordered_map<class ed::basic_string<char>, struct customUnitProperty, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct customUnitProperty>>> &) const;

    // RVA: 0x825 | Ordinal: 2086
        void getDestructionShapeDeclaration(void) const;

    // RVA: 0x830 | Ordinal: 2097
        void getFailureDisplayName(enum WorldGeneral::Failures) const;

    // RVA: 0x831 | Ordinal: 2098
        void getFailureName(enum WorldGeneral::Failures) const;

    // RVA: 0x83C | Ordinal: 2109
        void getInnardProperty(enum WorldGeneral::Innards, int, int) const;

    // RVA: 0x83D | Ordinal: 2110
        void getInnardPropertyInCell(enum WorldGeneral::Innards, int, int, int) const;

    // RVA: 0x854 | Ordinal: 2133
        void getLife(void) const;

    // RVA: 0x8E0 | Ordinal: 2273
        void getPropellorsInfo(class std::unordered_map<class ed::basic_string<char>, struct customUnitProperty, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct customUnitProperty>>> &) const;

    // RVA: 0x8E1 | Ordinal: 2274
        void getPropertyDetails(class ed::basic_string<char> const &) const;

    // RVA: 0x8F1 | Ordinal: 2290
        void getShapeDeclaration(void) const;

    // RVA: 0x91F | Ordinal: 2336
        void get_cell_index(class ed::basic_string<char> const &) const;

    // RVA: 0x920 | Ordinal: 2337
        void get_cell_name(int) const;

    // RVA: 0x921 | Ordinal: 2338
        void get_cells_properties(int) const;

    // RVA: 0x929 | Ordinal: 2346
        void get_combined_children(int, class ed::vector<int, class ed::allocator<int>> &) const;

    // RVA: 0x92E | Ordinal: 2351
        void get_damage_part_name(int) const;

    // RVA: 0xA5E | Ordinal: 2655
        void main_gear_amortizer_length(void) const;

    // RVA: 0xA86 | Ordinal: 2695
        void nose_gear_amortizer_length(void) const;

    // RVA: 0xB05 | Ordinal: 2822
        void parseFailure(char const *) const;

    // RVA: 0xB1F | Ordinal: 2848
        void preloadResources(void) const;

    // RVA: 0xB42 | Ordinal: 2883
        void read(class Lua::Config &);

    // RVA: 0x235 | Ordinal: 566
        void _Aircraft_Descriptor(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_AIRCRAFT_DESCRIPTOR_HPP
