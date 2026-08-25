/*
 * CockpitBase.dll class reconstruction
 * Function: draw
 * Address : 7ffada7922f0
 * Role    : method
 */


/* public: virtual void __cdecl cockpit::ccIndicatorPage::draw(class
   cockpit::ccIndicationRenderParser & __ptr64,unsigned char) __ptr64 */

void __thiscall
cockpit::ccIndicatorPage::draw
          (ccIndicatorPage *this,ccIndicationRenderParser *param_1,uchar param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* 0x3822f0  2955
                       ?draw@ccIndicatorPage@cockpit@@UEAAXAEAVccIndicationRenderParser@2@E@Z */
  puVar1 = *(undefined8 **)(this + 0x58);
  for (puVar2 = *(undefined8 **)(this + 0x50); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,param_1,param_2);
  }
  return;
}

