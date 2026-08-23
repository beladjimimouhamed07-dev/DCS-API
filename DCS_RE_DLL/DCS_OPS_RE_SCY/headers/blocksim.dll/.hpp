#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: 
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace const_wBlockAvgerageValDescriptor_int_ {

class _unknown
{
public:

    // Exported vftable symbols detected:
    // ordinal=510 RVA=0x1FD const wBlockAvgerageValDescriptor<int>::`vftable'
    // ordinal=511 RVA=0x1FE const wBlockAvgerageValDescriptor<double>::`vftable'
    // ordinal=512 RVA=0x1FF const wBlockAvgerageValDescriptor<class Math::Vector<3, double>>::`vftable'
    // ordinal=513 RVA=0x200 const wBlockDeltaCalcDesc<int>::`vftable'
    // ordinal=514 RVA=0x201 const wBlockDeltaCalcDesc<double>::`vftable'
    // ordinal=515 RVA=0x202 const wBlockDeltaCalcDesc<class Math::Vector<3, double>>::`vftable'
    // ordinal=516 RVA=0x203 const wBlockI2O<int, double>::`vftable'
    // ordinal=517 RVA=0x204 const wBlockI2O<int, bool>::`vftable'
    // ordinal=518 RVA=0x205 const wBlockI2O<double, bool>::`vftable'
    // ordinal=519 RVA=0x206 const wBlockI2O<bool, int>::`vftable'
    // ordinal=520 RVA=0x207 const wBlockI2O<bool, double>::`vftable'
    // ordinal=521 RVA=0x208 const wBlockI2ODescriptor<int, double>::`vftable'
    // ordinal=522 RVA=0x209 const wBlockI2ODescriptor<int, bool>::`vftable'
    // ordinal=523 RVA=0x20A const wBlockI2ODescriptor<double, bool>::`vftable'
    // ordinal=524 RVA=0x20B const wBlockI2ODescriptor<bool, int>::`vftable'
    // ordinal=525 RVA=0x20C const wBlockI2ODescriptor<bool, double>::`vftable'
    // ordinal=526 RVA=0x20D const wBlockIntegrator<double>::`vftable'
    // ordinal=527 RVA=0x20E const wBlockIntegrator<class Math::Vector<3, double>>::`vftable'
    // ordinal=528 RVA=0x20F const wBlockIntegratorDescriptor<double>::`vftable'
    // ordinal=529 RVA=0x210 const wBlockIntegratorDescriptor<class Math::Vector<3, double>>::`vftable'
    // ordinal=530 RVA=0x211 const wBlockMaxValDescriptor<int>::`vftable'
    // ordinal=531 RVA=0x212 const wBlockMaxValDescriptor<double>::`vftable'
    // ordinal=532 RVA=0x213 const wBlockMaxValDescriptor<class Math::Vector<3, double>>::`vftable'
    // ordinal=533 RVA=0x214 const wBlockMinValDescriptor<int>::`vftable'
    // ordinal=534 RVA=0x215 const wBlockMinValDescriptor<double>::`vftable'
    // ordinal=535 RVA=0x216 const wBlockMinValDescriptor<class Math::Vector<3, double>>::`vftable'
    // ordinal=536 RVA=0x217 const wBlockP2WDesc<int>::`vftable'
    // ordinal=537 RVA=0x218 const wBlockP2WDesc<double>::`vftable'
    // ordinal=538 RVA=0x219 const wBlockP2WDesc<class Math::Vector<3, double>>::`vftable'
    // ordinal=539 RVA=0x21A const wBlockP2WDesc<bool>::`vftable'
    // ordinal=540 RVA=0x21B const wBlockRateCalcDesc<int>::`vftable'
    // ordinal=541 RVA=0x21C const wBlockRateCalcDesc<double>::`vftable'
    // ordinal=542 RVA=0x21D const wBlockRateCalcDesc<class Math::Vector<3, double>>::`vftable'
    // ordinal=543 RVA=0x21E const wBlockSummatorDescriptor<int>::`vftable'
    // ordinal=544 RVA=0x21F const wBlockSummatorDescriptor<double>::`vftable'
    // ordinal=545 RVA=0x220 const wBlockSummatorDescriptor<class Math::Vector<3, double>>::`vftable'
    // ordinal=546 RVA=0x221 const wSimulationSystemScheme::InputOutputBlock::`vftable'
    // ordinal=547 RVA=0x222 const Lua::Loader::`vftable'
    // ordinal=548 RVA=0x223 const wSimulationSystemScheme::SpecialCommandsBlock::`vftable'
    // ordinal=549 RVA=0x224 const wBlockANDDescriptor::`vftable'
    // ordinal=550 RVA=0x225 const wBlockANDtriggerDescriptor::`vftable'
    // ordinal=551 RVA=0x226 const wBlockConstantsDescriptor::`vftable'
    // ordinal=552 RVA=0x227 const wBlockDelayTriggerDescriptor::`vftable'
    // ordinal=553 RVA=0x228 const wBlockDelayTriggerMultipleDescriptor::`vftable'
    // ordinal=554 RVA=0x229 const wBlockDelayTriggerWireDescriptor::`vftable'
    // ordinal=555 RVA=0x22A const wBlockDoubleToVec3dTriggerDescriptor::`vftable'
    // ordinal=556 RVA=0x22B const wBlockLogicalMultiinputDescriptor::`vftable'
    // ordinal=557 RVA=0x22C const wBlockLuaDescriptor::`vftable'
    // ordinal=558 RVA=0x22D const wBlockMultiplexDescriptor::`vftable'
    // ordinal=559 RVA=0x22E const wBlockNOTDescriptor::`vftable'
    // ordinal=560 RVA=0x22F const wBlockNOTtriggerDescriptor::`vftable'
    // ordinal=561 RVA=0x230 const wBlockORDescriptor::`vftable'
    // ordinal=562 RVA=0x231 const wBlockORtriggerDescriptor::`vftable'
    // ordinal=563 RVA=0x232 const wBlockOscilloscopeDescriptor::`vftable'
    // ordinal=564 RVA=0x233 const wBlockSubsystemDescriptor::`vftable'
    // ordinal=565 RVA=0x234 const wBlockVectorPicker::`vftable'
    // ordinal=566 RVA=0x235 const wBlockVectorPickerDescriptor::`vftable'
    // ordinal=567 RVA=0x236 const wBlockWireDeserializerDescriptor::`vftable'
    // ordinal=568 RVA=0x237 const wBlockWireSerializerDescriptor::`vftable'
    // ordinal=569 RVA=0x238 const wBlockWireToPortDescriptor::`vftable'
    // ordinal=570 RVA=0x239 const wSimulationBlock::`vftable'
    // ordinal=571 RVA=0x23A const wSimulationBlockDescriptor::`vftable'
    // ordinal=572 RVA=0x23B const wSimulationBlockDiff::`vftable'
    // ordinal=573 RVA=0x23C const wSimulationBlockDiffDescriptor::`vftable'
    // ordinal=574 RVA=0x23D const wSimulationBlockDisc::`vftable'
    // ordinal=575 RVA=0x23E const wSimulationBlockDiscDescriptor::`vftable'
    // ordinal=576 RVA=0x23F const wSimulationBlockStateless::`vftable'
    // ordinal=577 RVA=0x240 const wSimulationBlockStatelessDescriptor::`vftable'
    // ordinal=578 RVA=0x241 const wSimulationSystem::`vftable'

    // No exported methods were recovered.
};

} // namespace const_wBlockAvgerageValDescriptor_int_

// DCS_OPS_RE_BLOCKSIM.DLL__HPP
