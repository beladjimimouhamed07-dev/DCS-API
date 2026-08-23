#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: 
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace const_EagleFM {
namespace ADElement {

class _unknown
{
public:

    // Exported vftable symbols detected:
    // ordinal=748 RVA=0x2EB const EagleFM::ADElement::`vftable'
    // ordinal=749 RVA=0x2EC const EagleFM::APU::`vftable'
    // ordinal=750 RVA=0x2ED const EagleFM::AbrasionCalculator::`vftable'
    // ordinal=751 RVA=0x2EE const EagleFM::Accelerometer::`vftable'
    // ordinal=752 RVA=0x2EF const EagleFM::Elec::Adapter::`vftable'
    // ordinal=753 RVA=0x2F0 const EagleFM::AerodynamicBody::`vftable'
    // ordinal=754 RVA=0x2F1 const EagleFM::AerodyneFM::`vftable'
    // ordinal=755 RVA=0x2F2 const EagleFM::AirDuctPart::`vftable'
    // ordinal=756 RVA=0x2F3 const EagleFM::Cooling::AirInstallation::`vftable'
    // ordinal=757 RVA=0x2F4 const EagleFM::Airplane::`vftable'
    // ordinal=758 RVA=0x2F5 const EagleFM::Altimeter::`vftable'
    // ordinal=759 RVA=0x2F6 const EagleFM::AngularRatemeter::`vftable'
    // ordinal=762 RVA=0x2F9 const EagleFM::Elec::AutoTransferSwitch::`vftable'
    // ordinal=766 RVA=0x2FD const EagleFM::Elec::Battery::`vftable'
    // ordinal=767 RVA=0x2FE const EagleFM::Elec::Battery_v2::`vftable'
    // ordinal=768 RVA=0x2FF const EagleFM::Blade::`vftable'
    // ordinal=769 RVA=0x300 const EagleFM::Cooling::Body::`vftable'
    // ordinal=772 RVA=0x303 const EagleFM::BrakeChuteAD::`vftable'
    // ordinal=773 RVA=0x304 const EagleFM::Breakable::`vftable'
    // ordinal=774 RVA=0x305 const EagleFM::Elec::CalcNode::`vftable'
    // ordinal=775 RVA=0x306 const EagleFM::Elec::CalculateManager::`vftable'
    // ordinal=776 RVA=0x307 const EagleFM::Elec::CircuitBreaker::`vftable'
    // ordinal=777 RVA=0x308 const EagleFM::CoaxialRotor::`vftable'
    // ordinal=778 RVA=0x309 const EagleFM::CompressorBase::`vftable'
    // ordinal=779 RVA=0x30A const EagleFM::Elec::Consumer::`vftable'
    // ordinal=780 RVA=0x30B const EagleFM::ControlSurface::`vftable'
    // ordinal=781 RVA=0x30C const EagleFM::ControlSurfaceAD::`vftable'
    // ordinal=782 RVA=0x30D const EagleFM::ControlSurfaceBody::`vftable'
    // ordinal=783 RVA=0x30E const EagleFM::ControlSystem::`vftable'
    // ordinal=784 RVA=0x30F const EagleFM::Elec::Converter::`vftable'
    // ordinal=785 RVA=0x310 const EagleFM::CylinderBlock::`vftable'
    // ordinal=786 RVA=0x311 const EagleFM::DynamicBody::`vftable'
    // ordinal=787 RVA=0x312 const EagleFM::Elec::ElecMachine_wShunt::`vftable'
    // ordinal=788 RVA=0x313 const EagleFM::Elec::ElectricDrive::`vftable'
    // ordinal=789 RVA=0x314 const EagleFM::Elec::ElectricGearDrive::`vftable'
    // ordinal=793 RVA=0x318 const EagleFM::FigureOfRevolutionsAD::`vftable'
    // ordinal=794 RVA=0x319 const EagleFM::FuelCrossNode::`vftable'
    // ordinal=795 RVA=0x31A const EagleFM::FuelInNode::`vftable'
    // ordinal=796 RVA=0x31B const EagleFM::FuelOutNode::`vftable'
    // ordinal=797 RVA=0x31C const EagleFM::FuelPump::`vftable'
    // ordinal=798 RVA=0x31D const EagleFM::FuelStorage::`vftable'
    // ordinal=799 RVA=0x31E const EagleFM::Galvanometer::`vftable'
    // ordinal=802 RVA=0x321 const EagleFM::GearPostAD::`vftable'
    // ordinal=803 RVA=0x322 const EagleFM::Heat::HeatExchangeManager::`vftable'
    // ordinal=804 RVA=0x323 const EagleFM::Cooling::HeatExchanger::`vftable'
    // ordinal=805 RVA=0x324 const EagleFM::HelControlSystem::`vftable'
    // ordinal=806 RVA=0x325 const EagleFM::HelicopterFM::`vftable'
    // ordinal=807 RVA=0x326 const EagleFM::Cooling::IElement::`vftable'
    // ordinal=808 RVA=0x327 const EagleFM::IFuelElement::`vftable'
    // ordinal=809 RVA=0x328 const EagleFM::IPitotStatic::`vftable'
    // ordinal=810 RVA=0x329 const EagleFM::InjectorCylinderBlock::`vftable'
    // ordinal=811 RVA=0x32A const EagleFM::InterCoolerDelta::`vftable'
    // ordinal=812 RVA=0x32B const EagleFM::JetCombustor::`vftable'
    // ordinal=813 RVA=0x32C const EagleFM::JetCompressor::`vftable'
    // ordinal=814 RVA=0x32D const EagleFM::JetCompressorNozzle::`vftable'
    // ordinal=815 RVA=0x32E const EagleFM::JetEngine::`vftable'
    // ordinal=816 RVA=0x32F const EagleFM::JetInlet::`vftable'
    // ordinal=817 RVA=0x330 const EagleFM::JetNozzle::`vftable'
    // ordinal=818 RVA=0x331 const EagleFM::JetSuperSonicInlet::`vftable'
    // ordinal=819 RVA=0x332 const EagleFM::JetTurbine::`vftable'
    // ordinal=820 RVA=0x333 const EagleFM::Elec::Lamp::`vftable'
    // ordinal=821 RVA=0x334 const EagleFM::LiquidFlowmeter::`vftable'
    // ordinal=822 RVA=0x335 const EagleFM::Machometer::`vftable'
    // ordinal=823 RVA=0x336 const EagleFM::ManifoldDuct::`vftable'
    // ordinal=824 RVA=0x337 const EagleFM::Manometer::`vftable'
    // ordinal=825 RVA=0x338 const EagleFM::Cooling::Mixer::`vftable'
    // ordinal=826 RVA=0x339 const EagleFM::Elec::MultiThrowInput::`vftable'
    // ordinal=827 RVA=0x33A const EagleFM::Elec::MultiThrowSwitch::`vftable'
    // ordinal=828 RVA=0x33B const EagleFM::Elec::ParallelNode::`vftable'
    // ordinal=832 RVA=0x33F const EagleFM::Pito::`vftable'
    // ordinal=833 RVA=0x340 const EagleFM::Pitot::`vftable'
    // ordinal=834 RVA=0x341 const EagleFM::PlaneAD::`vftable'
    // ordinal=835 RVA=0x342 const EagleFM::PlaneFM::`vftable'
    // ordinal=836 RVA=0x343 const EagleFM::ProbabilityChecker::`vftable'
    // ordinal=837 RVA=0x344 const EagleFM::Cooling::Pump::`vftable'
    // ordinal=838 RVA=0x345 const EagleFM::Cooling::Radiator::`vftable'
    // ordinal=839 RVA=0x346 const EagleFM::Elec::Regler::`vftable'
    // ordinal=840 RVA=0x347 const EagleFM::Elec::Relay::`vftable'
    // ordinal=841 RVA=0x348 const EagleFM::Elec::ReverseCurrentRelay::`vftable'
    // ordinal=842 RVA=0x349 const EagleFM::Elec::RockerSwitch::`vftable'
    // ordinal=843 RVA=0x34A const EagleFM::Rotor::`vftable'
    // ordinal=844 RVA=0x34B const EagleFM::RotorGear::`vftable'
    // ordinal=845 RVA=0x34C const EagleFM::Sensor::`vftable'
    // ordinal=846 RVA=0x34D const EagleFM::SensorsSystem::`vftable'
    // ordinal=847 RVA=0x34E const EagleFM::SlipBall::`vftable'
    // ordinal=848 RVA=0x34F const EagleFM::Elec::Source::`vftable'
    // ordinal=849 RVA=0x350 const EagleFM::Speedometer::`vftable'
    // ordinal=850 RVA=0x351 const EagleFM::Cooling::Splitter::`vftable'
    // ordinal=851 RVA=0x352 const EagleFM::SuperchargerDuct::`vftable'
    // ordinal=852 RVA=0x353 const EagleFM::Elec::Switch::`vftable'
    // ordinal=853 RVA=0x354 const EagleFM::SymmetricPlaneAD::`vftable'
    // ordinal=857 RVA=0x358 const EagleFM::BalanceFM::THelicopter::`vftable'
    // ordinal=858 RVA=0x359 const EagleFM::BalanceFM::THelicopterData::`vftable'
    // ordinal=859 RVA=0x35A const EagleFM::Tachometer::`vftable'
    // ordinal=860 RVA=0x35B const EagleFM::TailRotor::`vftable'
    // ordinal=861 RVA=0x35C const EagleFM::Cooling::Tank::`vftable'
    // ordinal=862 RVA=0x35D const EagleFM::Thermometer::`vftable'
    // ordinal=863 RVA=0x35E const EagleFM::ThrottleDuct::`vftable'
    // ordinal=864 RVA=0x35F const EagleFM::TurboFan::`vftable'
    // ordinal=865 RVA=0x360 const EagleFM::TurboShaft::`vftable'
    // ordinal=866 RVA=0x361 const EagleFM::Variometer::`vftable'
    // ordinal=867 RVA=0x362 const EagleFM::Elec::VoltageRegulator::`vftable'
    // ordinal=868 RVA=0x363 const EagleFM::Volumeter::`vftable'
    // ordinal=869 RVA=0x364 const EagleFM::Elec::Wire::`vftable'

    // No exported methods were recovered.
};

} // namespace ADElement
} // namespace const_EagleFM

// DCS_OPS_RE_FMBASE.DLL__HPP
