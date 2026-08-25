/*
 * CockpitBase.dll class reconstruction
 * Function: setName
 * Address : 7ffada66a8b0
 * Role    : method
 * Vtable slots: 39
 */


/* public: virtual void __cdecl cockpit::avMovingMapPoint::setName(class ed::basic_string<char>
   const & __ptr64) __ptr64 */

void __thiscall
cockpit::avMovingMapPoint::setName(avMovingMapPoint *this,basic_string<char> *param_1)

{
  basic_string<char> *pbVar1;
  
                    /* 0x25a8b0  5987
                       ?setName@avMovingMapPoint@cockpit@@UEAAXAEBV?$basic_string@D@ed@@@Z */
  if (this + 0x70 != (avMovingMapPoint *)param_1) {
    pbVar1 = param_1 + 0x10;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<char> **)param_1;
    }
    FUN_7ffada5f0b10((undefined8 *)(this + 0x70),param_1,*(size_t *)pbVar1);
    return;
  }
  return;
}

