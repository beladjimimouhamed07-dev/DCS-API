#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: export4
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class export4
{
public:

    // RVA: 0x131 | Ordinal: 306
        void ViewDistanceLevel(double, struct landscape4::ShapeDefinition *);

    // RVA: 0x132 | Ordinal: 307
        void ViewDistanceRadiusFactor(void);

    // RVA: 0x15F | Ordinal: 352
        void applyDefaults(struct offshore::Scene &, int, char const *, char const *);

    // RVA: 0x169 | Ordinal: 362
        void applyOffshoreNamingConventions(struct offshore::Scene &, int, bool);

    // RVA: 0x16A | Ordinal: 363
        void applyOffshoreUVSetNaming(class ed::basic_string<char> const &, bool);

    // RVA: 0x171 | Ordinal: 370
        void assembleFaceVertices(struct offshore::Mesh &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x172 | Ordinal: 371
        void assembleFaceVertices(struct offshore::Scene &, int, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x173 | Ordinal: 372
        void assembleSharedBuffers(struct offshore::Scene &, int, struct landscape4::MaterialAlias *, class landscape4::MaterialAliasFile &, struct offshore::Scene &, class ed::vector<signed char, class ed::allocator<signed char>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x174 | Ordinal: 373
        void assembleUniqueVertices(struct offshore::Mesh &, struct landscape4::MaterialAlias *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x175 | Ordinal: 374
        void assembleUniqueVertices(struct offshore::Scene &, int, struct landscape4::MaterialAlias *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x196 | Ordinal: 407
        void buildRequiredTangentSpaces(struct offshore::Mesh &, struct landscape4::MaterialAlias *, class ed::basic_string<char> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x197 | Ordinal: 408
        void buildRequiredTangentSpaces(struct offshore::Scene &, int, struct landscape4::MaterialAlias *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1AC | Ordinal: 429
        void buildTinyObjectsShapeTable(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x1D3 | Ordinal: 468
        void convertMaterial(struct offshore::Material &, class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &, struct landscape4::MaterialAlias *, struct landscape4::Material &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, int *);

    // RVA: 0x1D4 | Ordinal: 469
        void convertMaterialManifolds(struct offshore::Mesh &, struct landscape4::MaterialAlias *, class ed::basic_string<char> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1D5 | Ordinal: 470
        void convertMaterialParams(struct offshore::Scene &, int, struct landscape4::MaterialAlias *, struct landscape5::lMaterialParamsStruct &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1DA | Ordinal: 475
        void convertToGeometry4(struct offshore::Mesh &, struct landscape4::MaterialAlias *, struct landscape4::GeometrySource &, class ed::basic_string<char> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1DB | Ordinal: 476
        void convertToGeometry4(struct offshore::Scene &, int, struct landscape4::MaterialAlias *, struct landscape4::GeometrySource &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1DC | Ordinal: 477
        void convertToGeometry4(struct offshore::Spline &, struct landscape4::MaterialAlias *, struct landscape4::GeometrySource &, class ed::basic_string<char> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x1FF | Ordinal: 512
        void discardByShaderDefines(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x22F | Ordinal: 560
        void dumpGeometry4ToOffshore(struct landscape4::GeometrySource &, struct offshore::Mesh &);

    // RVA: 0x28A | Ordinal: 651
        void generateSubobjects(class model::IModel *, class osg::Matrixd const &, bool);

    // RVA: 0x298 | Ordinal: 665
        void getAndLoadModel(class ed::basic_string<char> const &, class boost::container::small_vector<class model::IModelManager *, 8, class ed::allocator<class model::IModelManager *>, void> const *);

    // RVA: 0x319 | Ordinal: 794
        void getMaterialAlias(struct offshore::Scene const &, int, class landscape4::MaterialAliasFile &, class ed::basic_string<char> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x31A | Ordinal: 795
        void getMaterialAlias(struct offshore::Material const *, class landscape4::MaterialAliasFile &, class ed::basic_string<char> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class ed::basic_string<char> const &, class osg::Vec3d const &);

    // RVA: 0x33C | Ordinal: 829
        void getModel(class ed::basic_string<char> const &, class boost::container::small_vector<class model::IModelManager *, 8, class ed::allocator<class model::IModelManager *>, void> const *);

    // RVA: 0x33E | Ordinal: 831
        void getModelAliasFile(void);

    // RVA: 0x342 | Ordinal: 835
        void getNodeShaderDefines(struct offshore::Scene const &, int);

    // RVA: 0x343 | Ordinal: 836
        void getNodeShaderDefines(class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);

    // RVA: 0x3B9 | Ordinal: 954
        void getShapeByName(class ed::basic_string<char> const &);

    // RVA: 0x41E | Ordinal: 1055
        void hierarchyToList(struct offshore::Scene &, int, struct offshore::Scene &, int, class landscape4::MaterialAliasFile &, class ed::basic_string<char> const &, class osg::Matrixd const &);

    // RVA: 0x425 | Ordinal: 1062
        void initShapeTable(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> *);

    // RVA: 0x4A8 | Ordinal: 1193
        void loadModel(class model::IModel *);

    // RVA: 0x4B6 | Ordinal: 1207
        void mergeNodes(struct offshore::Scene &, class ed::list<struct export4::NodeToMerge, class ed::allocator<struct export4::NodeToMerge>> &);

    // RVA: 0x4B7 | Ordinal: 1208
        void mergeNodes(struct offshore::Scene &, int, struct offshore::Scene &, int, class landscape4::MaterialAliasFile &, class ed::basic_string<char> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x4D5 | Ordinal: 1238
        void parseShaderDefines(class ed::basic_string<char> const &);

    // RVA: 0x4D6 | Ordinal: 1239
        void placeObjectOnSurface(class osg::Matrixd &, class ed::basic_string<char> const &, bool, class boost::container::small_vector<class model::IModelManager *, 8, class ed::allocator<class model::IModelManager *>, void> *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0x4D7 | Ordinal: 1240
        void placeObjectOnSurface(enum landscape::TYPE_POSITINING, enum landscape::TYPE_ROTATION, float, float, class osg::Matrixd &, class osg::Matrixd const *, class osg::BoundingBoxImpl<class osg::Vec3f> const *, class ed::basic_string<char> const *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0x4DD | Ordinal: 1246
        void postExport(struct landscape4::MaterialAlias *, struct landscape4::GeometrySource &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class osg::BoundingBoxImpl<class osg::Vec3f> &);

    // RVA: 0x4F9 | Ordinal: 1274
        void prepareToExport(struct offshore::Scene &, int, struct landscape4::MaterialAlias *, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x4FA | Ordinal: 1275
        void prepareToExportAll(struct offshore::Scene &, int, class landscape4::MaterialAliasFile &, class ed::basic_string<char> const &, bool, bool, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x574 | Ordinal: 1397
        void setModelAliasFile(class export4::ModelAliasFile *);

    // RVA: 0x576 | Ordinal: 1399
        void setObjectHeightOnSurface(class osg::Vec3d &, bool);
};

// DCS_OPS_RE_EDTERRAIN4.DLL_EXPORT4_HPP
