#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avExternalCargoView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avExternalCargoView
{
public:

    // RVA: 0x110 | Ordinal: 273
        void avExternalCargoView(void);

    // RVA: 0x9CD | Ordinal: 2510
        void calculateCargoView(struct cockpit::avExternalCargoView::view_adjustment &, struct cockpit::avExternalCargoView::desired_view_adjustment const &, bool, enum cockpit::avExternalCargoView::PilotNumberForHeadControl const &, enum cockpit::avExternalCargoView::ChangeOfLimits const &, class IwHumanHead *, enum cockpit::CargoViewPos &, struct cockpit::view_changes &, double, double, double);

    // RVA: 0xA15 | Ordinal: 2582
        void changeLimitCargo(class IwHumanHead *, enum cockpit::avExternalCargoView::ChangeOfLimits const &, enum cockpit::avExternalCargoView::PilotNumberForHeadControl const &, double, double);

    // RVA: 0xA16 | Ordinal: 2583
        void changeLimitNeutral(class IwHumanHead *, enum cockpit::avExternalCargoView::ChangeOfLimits const &, enum cockpit::avExternalCargoView::PilotNumberForHeadControl const &) const;

    // RVA: 0xA18 | Ordinal: 2585
        void changeViewLimitCargo(class IwHumanHead *, double, enum cockpit::avExternalCargoView::ChangeOfLimits const &);

    // RVA: 0xA19 | Ordinal: 2586
        void changeViewLimitNeutral(class IwHumanHead *, enum cockpit::avExternalCargoView::ChangeOfLimits const &) const;

    // RVA: 0xB16 | Ordinal: 2839
        void convertSeatNumber(enum cockpit::avExternalCargoView::PilotNumberForHeadControl const &) const;

    // RVA: 0xD35 | Ordinal: 3382
        void getLimits6DOFXYZ(class IwHumanHead *, enum cockpit::avExternalCargoView::PilotNumberForHeadControl const &, class osg::Vec3d &, class osg::Vec3d &) const;

    // RVA: 0xDD0 | Ordinal: 3537
        void getSeatNumber(class IwHumanHead *) const;

    // RVA: 0x1745 | Ordinal: 5958
        void setLimits6DOFXYZ(class IwHumanHead *, enum cockpit::avExternalCargoView::PilotNumberForHeadControl const &, class osg::Vec3d const &, class osg::Vec3d const &) const;

    // RVA: 0x1768 | Ordinal: 5993
        void setNewViewPosition(class IwHumanHead *, struct cockpit::avExternalCargoView::desired_view_adjustment const &, enum cockpit::avExternalCargoView::PilotNumberForHeadControl const &) const;

    // RVA: 0x303 | Ordinal: 772
        void _avExternalCargoView(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVEXTERNALCARGOVIEW_HPP
