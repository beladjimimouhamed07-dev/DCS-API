/*
 * CockpitBase.dll class reconstruction
 * Function: draw
 * Address : 7ffada795040
 * Role    : method
 * Vtable slots: 2
 */


/* public: virtual void __cdecl cockpit::ccMovingMap::draw(class cockpit::ccIndicationRenderParser &
   __ptr64,unsigned char) __ptr64 */

void __thiscall
cockpit::ccMovingMap::draw(ccMovingMap *this,ccIndicationRenderParser *param_1,uchar param_2)

{
                    /* 0x385040  2957
                       ?draw@ccMovingMap@cockpit@@UEAAXAEAVccIndicationRenderParser@2@E@Z */
  if (this[0x9a] != (ccMovingMap)0x0) {
    render(this,param_1,param_2);
  }
  ccIndicatorPage::draw((ccIndicatorPage *)this,param_1,param_2);
  return;
}

