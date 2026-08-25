/*
 * CockpitBase.dll class reconstruction
 * Function: initialize
 * Address : 7ffada785070
 * Role    : method
 */


/* public: virtual void __cdecl cockpit::ccIndicationTemplateBuffer::initialize(class
   cockpit::ccIndicator * __ptr64,struct lua_State * __ptr64,char const * __ptr64) __ptr64 */

void __thiscall
cockpit::ccIndicationTemplateBuffer::initialize
          (ccIndicationTemplateBuffer *this,ccIndicator *param_1,lua_State *param_2,char *param_3)

{
  size_t sVar1;
  
                    /* 0x375070  4628
                       ?initialize@ccIndicationTemplateBuffer@cockpit@@UEAAXPEAVccIndicator@2@PEAUlua_State@@PEBD@Z
                        */
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
    FUN_7ffada5f0b10((undefined8 *)(this + 0x18),param_3,sVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x7ffada7850cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x20))(this,param_1,param_2);
  return;
}

