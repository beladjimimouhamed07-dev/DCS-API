#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: NullInterrupter>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace util {

class NullInterrupter_
{
public:

    // RVA: 0x517 | Ordinal: 1304
        void advect(float, float);

    // RVA: 0x518 | Ordinal: 1305
        void advect(double, double);

    // RVA: 0x569 | Ordinal: 1386
        void area(bool);

    // RVA: 0x572 | Ordinal: 1395
        void avgGaussianCurvature(bool);

    // RVA: 0x574 | Ordinal: 1397
        void avgMeanCurvature(bool);

    // RVA: 0x59E | Ordinal: 1439
        void checkInterrupter(void);

    // RVA: 0x5A2 | Ordinal: 1443
        void clear(void);

    // RVA: 0x5D7 | Ordinal: 1496
        void cook(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> &);

    // RVA: 0x5D8 | Ordinal: 1497
        void cook(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>> &);

    // RVA: 0x61C | Ordinal: 1565
        void dilate(int);

    // RVA: 0x61E | Ordinal: 1567
        void doBoxX(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>::LeafRange const &, int);

    // RVA: 0x61F | Ordinal: 1568
        void doBoxX(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>::LeafRange const &, int);

    // RVA: 0x620 | Ordinal: 1569
        void doBoxY(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>::LeafRange const &, int);

    // RVA: 0x621 | Ordinal: 1570
        void doBoxY(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>::LeafRange const &, int);

    // RVA: 0x622 | Ordinal: 1571
        void doBoxZ(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>::LeafRange const &, int);

    // RVA: 0x623 | Ordinal: 1572
        void doBoxZ(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>::LeafRange const &, int);

    // RVA: 0x625 | Ordinal: 1574
        void doMedian(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>::LeafRange const &, int);

    // RVA: 0x626 | Ordinal: 1575
        void doMedian(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>::LeafRange const &, int);

    // RVA: 0x627 | Ordinal: 1576
        void doOffset(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>::LeafRange const &, float);

    // RVA: 0x628 | Ordinal: 1577
        void doOffset(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>::LeafRange const &, double);

    // RVA: 0x63E | Ordinal: 1599
        void endInterrupter(void);

    // RVA: 0x643 | Ordinal: 1604
        void erode(int);

    // RVA: 0x645 | Ordinal: 1606
        void eulerCharacteristic(void);

    // RVA: 0x660 | Ordinal: 1633
        void fracture(class std::list<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>>>> &, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const &, bool, class std::vector<class openvdb::v9_0::math::Vec3<float>, class std::allocator<class openvdb::v9_0::math::Vec3<float>>> const *, class std::vector<class openvdb::v9_0::math::Quat<float>, class std::allocator<class openvdb::v9_0::math::Quat<float>>> const *, bool);

    // RVA: 0x661 | Ordinal: 1634
        void fracture(class std::list<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>>>> &, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>> const &, bool, class std::vector<class openvdb::v9_0::math::Vec3<float>, class std::allocator<class openvdb::v9_0::math::Vec3<float>>> const *, class std::vector<class openvdb::v9_0::math::Quat<float>, class std::allocator<class openvdb::v9_0::math::Quat<float>>> const *, bool);

    // RVA: 0x662 | Ordinal: 1635
        void fragments(void);

    // RVA: 0x664 | Ordinal: 1637
        void gaussian(int, int, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const *);

    // RVA: 0x666 | Ordinal: 1639
        void gaussian(int, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const *);

    // RVA: 0x668 | Ordinal: 1641
        void genus(void);

    // RVA: 0x685 | Ordinal: 1670
        void getGrainSize(void) const;

    // RVA: 0x69A | Ordinal: 1691
        void getHalfWidth(void) const;

    // RVA: 0x69E | Ordinal: 1695
        void getIntegrator(void) const;

    // RVA: 0x6A7 | Ordinal: 1704
        void getLimiter(void) const;

    // RVA: 0x6AC | Ordinal: 1709
        void getMaxVelocity(void) const;

    // RVA: 0x6B5 | Ordinal: 1718
        void getNormCount(void) const;

    // RVA: 0x6BC | Ordinal: 1725
        void getProcessTiles(void) const;

    // RVA: 0x6C1 | Ordinal: 1730
        void getSpatialScheme(void) const;

    // RVA: 0x6C7 | Ordinal: 1736
        void getState(void) const;

    // RVA: 0x6CB | Ordinal: 1740
        void getSubSteps(void) const;

    // RVA: 0x6CE | Ordinal: 1743
        void getTemporalScheme(void) const;

    // RVA: 0x6D4 | Ordinal: 1749
        void getTrackerSpatialScheme(void) const;

    // RVA: 0x6D8 | Ordinal: 1753
        void getTrackerTemporalScheme(void) const;

    // RVA: 0x6E3 | Ordinal: 1764
        void grid(void) const;

    // RVA: 0x727 | Ordinal: 1832
        void init(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const &);

    // RVA: 0x728 | Ordinal: 1833
        void init(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>> const &);

    // RVA: 0x73F | Ordinal: 1856
        void interrupt(void) const;

    // RVA: 0x74A | Ordinal: 1867
        void invertMask(bool);

    // RVA: 0x766 | Ordinal: 1895
        void isLimiterOn(void) const;

    // RVA: 0x76F | Ordinal: 1904
        void isMaskInverted(void) const;

    // RVA: 0x78F | Ordinal: 1936
        void isValidFragment(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> &) const;

    // RVA: 0x790 | Ordinal: 1937
        void isValidFragment(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>> &) const;

    // RVA: 0x793 | Ordinal: 1940
        void laplacian(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const *);

    // RVA: 0x796 | Ordinal: 1943
        void leafs(void);

    // RVA: 0x797 | Ordinal: 1944
        void leafs(void) const;

    // RVA: 0x7BB | Ordinal: 1980
        void maxMask(void) const;

    // RVA: 0x7C1 | Ordinal: 1986
        void mean(int, int, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const *);

    // RVA: 0x7C3 | Ordinal: 1988
        void mean(int, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const *);

    // RVA: 0x7C5 | Ordinal: 1990
        void meanCurvature(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const *);

    // RVA: 0x7C7 | Ordinal: 1992
        void median(int, int, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const *);

    // RVA: 0x7C9 | Ordinal: 1994
        void median(int, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const *);

    // RVA: 0x7CF | Ordinal: 2000
        void minMask(void) const;

    // RVA: 0x7D7 | Ordinal: 2008
        void normalize(void);

    // RVA: 0x7DB | Ordinal: 2012
        void offset(float, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const *);

    // RVA: 0x7DC | Ordinal: 2013
        void offset(double, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const *);

    // RVA: 0x49F | Ordinal: 1184
        void operator()(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>::LeafRange const &) const;

    // RVA: 0x4A0 | Ordinal: 1185
        void operator()(class openvdb::v9_0::tree::LeafManager<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>::LeafRange const &) const;

    // RVA: 0x837 | Ordinal: 2104
        void process(class std::list<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>>>> &, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const &);

    // RVA: 0x838 | Ordinal: 2105
        void process(class std::list<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>>>> &, class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>> const &);

    // RVA: 0x83D | Ordinal: 2110
        void prune(void);

    // RVA: 0x86C | Ordinal: 2157
        void reduce(int);

    // RVA: 0x897 | Ordinal: 2200
        void resize(unsigned int);

    // RVA: 0x8BD | Ordinal: 2238
        void segmentFragments(class std::list<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>>>> &) const;

    // RVA: 0x8BE | Ordinal: 2239
        void segmentFragments(class std::list<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>>>> &) const;

    // RVA: 0x8C4 | Ordinal: 2245
        void setAlphaMask(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const &);

    // RVA: 0x8C5 | Ordinal: 2246
        void setAlphaMask(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>> const &);

    // RVA: 0x8DD | Ordinal: 2270
        void setGrainSize(int);

    // RVA: 0x8E7 | Ordinal: 2280
        void setGrainSize(unsigned __int64);

    // RVA: 0x8FA | Ordinal: 2299
        void setIntegrator(enum openvdb::v9_0::tools::Scheme::SemiLagrangian);

    // RVA: 0x908 | Ordinal: 2313
        void setLimiter(enum openvdb::v9_0::tools::Scheme::Limiter);

    // RVA: 0x90C | Ordinal: 2317
        void setMaskRange(float, float);

    // RVA: 0x911 | Ordinal: 2322
        void setMaskRange(double, double);

    // RVA: 0x915 | Ordinal: 2326
        void setNormCount(int);

    // RVA: 0x920 | Ordinal: 2337
        void setProcessTiles(bool);

    // RVA: 0x92A | Ordinal: 2347
        void setSpatialScheme(enum openvdb::v9_0::math::BiasedGradientScheme);

    // RVA: 0x930 | Ordinal: 2353
        void setState(struct openvdb::v9_0::tools::LevelSetTracker<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>, struct openvdb::v9_0::util::NullInterrupter>::State const &);

    // RVA: 0x931 | Ordinal: 2354
        void setState(struct openvdb::v9_0::tools::LevelSetTracker<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>, struct openvdb::v9_0::util::NullInterrupter>::State const &);

    // RVA: 0x934 | Ordinal: 2357
        void setSubSteps(int);

    // RVA: 0x937 | Ordinal: 2360
        void setTarget(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const &);

    // RVA: 0x938 | Ordinal: 2361
        void setTarget(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>> const &);

    // RVA: 0x939 | Ordinal: 2362
        void setTemporalScheme(enum openvdb::v9_0::math::TemporalIntegrationScheme);

    // RVA: 0x940 | Ordinal: 2369
        void setTrackerSpatialScheme(enum openvdb::v9_0::math::BiasedGradientScheme);

    // RVA: 0x944 | Ordinal: 2373
        void setTrackerTemporalScheme(enum openvdb::v9_0::math::TemporalIntegrationScheme);

    // RVA: 0x94A | Ordinal: 2379
        void setTrimming(enum openvdb::v9_0::tools::lstrack::TrimMode);

    // RVA: 0x96F | Ordinal: 2416
        void spatialOrder(void) const;

    // RVA: 0x971 | Ordinal: 2418
        void start(char const *) const;

    // RVA: 0x973 | Ordinal: 2420
        void startInterrupter(char const *);

    // RVA: 0x978 | Ordinal: 2425
        void stop(void) const;

    // RVA: 0x989 | Ordinal: 2442
        void temporalOrder(void) const;

    // RVA: 0x98E | Ordinal: 2447
        void totGaussianCurvature(bool);

    // RVA: 0x990 | Ordinal: 2449
        void totMeanCurvature(bool);

    // RVA: 0x992 | Ordinal: 2451
        void track(void);

    // RVA: 0x9B3 | Ordinal: 2484
        void trimming(void) const;

    // RVA: 0x9D7 | Ordinal: 2520
        void volume(bool);

    // RVA: 0x9D9 | Ordinal: 2522
        void voxelSize(void) const;

    // RVA: 0x9ED | Ordinal: 2542
        void wasInterrupted(void);

    // RVA: 0x9EF | Ordinal: 2544
        void wasInterrupted(int) const;
};

} // namespace util
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_NULLINTERRUPTER_HPP
