/*
 * CockpitBase.dll class reconstruction
 * Function: on_change_mode
 * Address : 7ffada7850d0
 * Role    : method
 * Vtable slots: 21
 */


/* public: virtual void __cdecl cockpit::ccIndicationTemplateBuffer::on_change_mode(class
   cockpit::ccIndicator * __ptr64,struct lua_State * __ptr64) __ptr64 */

void __thiscall
cockpit::ccIndicationTemplateBuffer::on_change_mode
          (ccIndicationTemplateBuffer *this,ccIndicator *param_1,lua_State *param_2)

{
  int iVar1;
  ccIndicatorPage *pcVar2;
  ccIndicationTemplateBuffer *pcVar3;
  double dVar4;
  
                    /* 0x3750d0  5224
                       ?on_change_mode@ccIndicationTemplateBuffer@cockpit@@UEAAXPEAVccIndicator@2@PEAUlua_State@@@Z
                        */
  if ((param_1 != (ccIndicator *)0x0) && (param_2 != (lua_State *)0x0)) {
    lua_getfield(param_2,0xffffd8ee,s_get_template_7ffada864b70);
    pcVar3 = this + 0x18;
    if (0xf < *(ulonglong *)(this + 0x30)) {
      pcVar3 = *(ccIndicationTemplateBuffer **)pcVar3;
    }
    lua_pushstring(param_2,pcVar3);
    iVar1 = ED_lua_pcall(param_2,1,1,0);
    if ((iVar1 == 0) && (iVar1 = lua_isnumber(param_2,0xffffffff), iVar1 != 0)) {
      dVar4 = (double)lua_tonumber(param_2,0xffffffff);
      pcVar2 = ccIndicator::get_page_by_ID(param_1,(uchar)(int)dVar4);
      if (*(ccIndicatorPage **)(this + 8) != pcVar2) {
        *(ccIndicatorPage **)(this + 8) = pcVar2;
        this[0x10] = (ccIndicationTemplateBuffer)0x1;
      }
    }
  }
  return;
}

