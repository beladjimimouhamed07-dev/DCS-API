#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: Conversion
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace operation {

class Conversion
{
public:

    // RVA: 0x14C | Ordinal: 333
        void convertToOtherMethod(int) const;

    // RVA: 0x162 | Ordinal: 355
        void create(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::util::PropertyMap const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::OperationParameter>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::OperationParameter>>>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::ParameterValue>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::ParameterValue>>>> const &);

    // RVA: 0x163 | Ordinal: 356
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::OperationMethod>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::GeneralParameterValue>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::GeneralParameterValue>>>> const &);

    // RVA: 0x1A6 | Ordinal: 423
        void createAlbersEqualArea(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1A7 | Ordinal: 424
        void createAmericanPolyconic(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1A8 | Ordinal: 425
        void createAxisOrderReversal(bool);

    // RVA: 0x1A9 | Ordinal: 426
        void createAzimuthalEquidistant(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1AA | Ordinal: 427
        void createBonne(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1AC | Ordinal: 429
        void createCassiniSoldner(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1AD | Ordinal: 430
        void createChangeVerticalUnit(class osgeo::proj::util::PropertyMap const &);

    // RVA: 0x1AE | Ordinal: 431
        void createChangeVerticalUnit(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Scale const &);

    // RVA: 0x1BA | Ordinal: 443
        void createEckertI(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1BB | Ordinal: 444
        void createEckertII(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1BC | Ordinal: 445
        void createEckertIII(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1BD | Ordinal: 446
        void createEckertIV(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1BE | Ordinal: 447
        void createEckertV(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1BF | Ordinal: 448
        void createEckertVI(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1C1 | Ordinal: 450
        void createEqualEarth(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1C2 | Ordinal: 451
        void createEquidistantConic(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1C3 | Ordinal: 452
        void createEquidistantCylindrical(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1C4 | Ordinal: 453
        void createEquidistantCylindricalSpherical(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1D3 | Ordinal: 468
        void createGall(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1D4 | Ordinal: 469
        void createGaussSchreiberTransverseMercator(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1DE | Ordinal: 479
        void createGeographicGeocentric(class osgeo::proj::util::PropertyMap const &);

    // RVA: 0x1DF | Ordinal: 480
        void createGeostationarySatelliteSweepX(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1E0 | Ordinal: 481
        void createGeostationarySatelliteSweepY(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1E1 | Ordinal: 482
        void createGnomonic(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1E2 | Ordinal: 483
        void createGoodeHomolosine(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1E5 | Ordinal: 486
        void createGuamProjection(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1E6 | Ordinal: 487
        void createHeightDepthReversal(class osgeo::proj::util::PropertyMap const &);

    // RVA: 0x1E7 | Ordinal: 488
        void createHotineObliqueMercatorTwoPointNaturalOrigin(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1E8 | Ordinal: 489
        void createHotineObliqueMercatorVariantA(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1E9 | Ordinal: 490
        void createHotineObliqueMercatorVariantB(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1EA | Ordinal: 491
        void createInternationalMapWorldPolyconic(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1EB | Ordinal: 492
        void createInterruptedGoodeHomolosine(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1EC | Ordinal: 493
        void createKrovak(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1ED | Ordinal: 494
        void createKrovakNorthOriented(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1EE | Ordinal: 495
        void createLabordeObliqueMercator(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1EF | Ordinal: 496
        void createLambertAzimuthalEqualArea(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1F0 | Ordinal: 497
        void createLambertConicConformal_1SP(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1F1 | Ordinal: 498
        void createLambertConicConformal_2SP(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1F2 | Ordinal: 499
        void createLambertConicConformal_2SP_Belgium(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1F3 | Ordinal: 500
        void createLambertConicConformal_2SP_Michigan(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Scale const &);

    // RVA: 0x1F4 | Ordinal: 501
        void createLambertCylindricalEqualArea(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1F5 | Ordinal: 502
        void createLambertCylindricalEqualAreaSpherical(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1FC | Ordinal: 509
        void createMercatorVariantA(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1FD | Ordinal: 510
        void createMercatorVariantB(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1FE | Ordinal: 511
        void createMillerCylindrical(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x1FF | Ordinal: 512
        void createMollweide(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x203 | Ordinal: 516
        void createNewZealandMappingGrid(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x208 | Ordinal: 521
        void createObliqueStereographic(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x20B | Ordinal: 524
        void createOrthographic(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x20D | Ordinal: 526
        void createPolarStereographicVariantA(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x20E | Ordinal: 527
        void createPolarStereographicVariantB(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x20F | Ordinal: 528
        void createPoleRotationGRIBConvention(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &);

    // RVA: 0x210 | Ordinal: 529
        void createPoleRotationNetCDFCFConvention(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &);

    // RVA: 0x211 | Ordinal: 530
        void createPopularVisualisationPseudoMercator(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x215 | Ordinal: 534
        void createQuadrilateralizedSphericalCube(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x216 | Ordinal: 535
        void createRobinson(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x217 | Ordinal: 536
        void createSinusoidal(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x21A | Ordinal: 539
        void createSphericalCrossTrackHeight(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &);

    // RVA: 0x21B | Ordinal: 540
        void createStereographic(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x21F | Ordinal: 544
        void createTransverseMercator(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x220 | Ordinal: 545
        void createTransverseMercatorSouthOriented(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Scale const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x221 | Ordinal: 546
        void createTunisiaMappingGrid(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x223 | Ordinal: 548
        void createTwoPointEquidistant(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x224 | Ordinal: 549
        void createUTM(class osgeo::proj::util::PropertyMap const &, int, bool);

    // RVA: 0x227 | Ordinal: 552
        void createVanDerGrinten(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x22B | Ordinal: 556
        void createVerticalPerspective(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x22C | Ordinal: 557
        void createWagnerI(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x22D | Ordinal: 558
        void createWagnerII(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x22E | Ordinal: 559
        void createWagnerIII(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x22F | Ordinal: 560
        void createWagnerIV(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x230 | Ordinal: 561
        void createWagnerV(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x231 | Ordinal: 562
        void createWagnerVI(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x232 | Ordinal: 563
        void createWagnerVII(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Angle const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &);

    // RVA: 0x293 | Ordinal: 660
        void identify(void) const;

    // RVA: 0x2A1 | Ordinal: 674
        void inverse(void) const;

    // RVA: 0x2B1 | Ordinal: 690
        void isUTM(int &, bool &) const;

    // RVA: 0x42 | Ordinal: 67
        void _Conversion(void);
};

} // namespace operation
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_CONVERSION_HPP
