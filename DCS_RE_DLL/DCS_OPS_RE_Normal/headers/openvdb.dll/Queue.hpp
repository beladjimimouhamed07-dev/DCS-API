#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: Queue
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace io {

class Queue
{
public:

    // RVA: 0x35C | Ordinal: 861
        void Queue(unsigned int);

    // RVA: 0x514 | Ordinal: 1301
        void addNotifier(class std::function<void __cdecl(unsigned int, enum openvdb::v9_0::io::Queue::Status)>);

    // RVA: 0x59D | Ordinal: 1438
        void capacity(void) const;

    // RVA: 0x5AC | Ordinal: 1453
        void clearNotifiers(void);

    // RVA: 0x63C | Ordinal: 1597
        void empty(void) const;

    // RVA: 0x880 | Ordinal: 2177
        void removeNotifier(unsigned int);

    // RVA: 0x8CB | Ordinal: 2252
        void setCapacity(unsigned int);

    // RVA: 0x93F | Ordinal: 2368
        void setTimeout(unsigned int);

    // RVA: 0x969 | Ordinal: 2410
        void size(void) const;

    // RVA: 0x977 | Ordinal: 2424
        void status(unsigned int) const;

    // RVA: 0x98B | Ordinal: 2444
        void timeout(void) const;

    // RVA: 0xA0C | Ordinal: 2573
        void writeGrid(class std::shared_ptr<class openvdb::v9_0::GridBase const>, class openvdb::v9_0::io::Archive const &, class openvdb::v9_0::MetaMap const &);

    // RVA: 0xA0F | Ordinal: 2576
        void writeGridVec(class std::vector<class std::shared_ptr<class openvdb::v9_0::GridBase const>, class std::allocator<class std::shared_ptr<class openvdb::v9_0::GridBase const>>> const &, class openvdb::v9_0::io::Archive const &, class openvdb::v9_0::MetaMap const &);

    // RVA: 0x3EB | Ordinal: 1004
        void _Queue(void);
};

} // namespace io
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_QUEUE_HPP
