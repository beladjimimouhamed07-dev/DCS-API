/*
 * CockpitBase.dll class reconstruction
 * Function: avMovingMap
 * Address : 7ffada665a50
 * Role    : method
 */


/* public: __cdecl cockpit::avMovingMap::avMovingMap(class cockpit::avMovingMap const & __ptr64)
   __ptr64 */

avMovingMap * __thiscall cockpit::avMovingMap::avMovingMap(avMovingMap *this,avMovingMap *param_1)

{
                    /* 0x255a50  354  ??0avMovingMap@cockpit@@QEAA@AEBV01@@Z */
  *(undefined ***)this = vftable;
  FUN_7ffada664ab0((undefined4 *)(this + 8),(undefined4 *)(param_1 + 8));
  *(undefined8 *)(this + 0x318) = *(undefined8 *)(param_1 + 0x318);
  *(undefined8 *)(this + 800) = *(undefined8 *)(param_1 + 800);
  *(undefined4 *)(this + 0x328) = *(undefined4 *)(param_1 + 0x328);
  return this;
}

