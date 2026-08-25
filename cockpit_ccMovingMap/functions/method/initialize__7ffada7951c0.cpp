/*
 * CockpitBase.dll class reconstruction
 * Function: initialize
 * Address : 7ffada7951c0
 * Role    : method
 * Vtable slots: 20
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __cdecl cockpit::ccMapObjectsBuffer::initialize(class cockpit::ccIndicator *
   __ptr64,struct lua_State * __ptr64,char const * __ptr64) __ptr64 */

void __thiscall
cockpit::ccMapObjectsBuffer::initialize
          (ccMapObjectsBuffer *this,ccIndicator *param_1,lua_State *param_2,char *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong _Size;
  ulonglong uVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined8 ****_Buf1;
  ulonglong uVar8;
  undefined8 *_Buf2;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  lua_State *local_80;
  undefined8 ***local_78 [2];
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
                    /* 0x3851c0  4635
                       ?initialize@ccMapObjectsBuffer@cockpit@@UEAAXPEAVccIndicator@2@PEAUlua_State@@PEBD@Z
                        */
  local_58 = DAT_7ffada94e840 ^ (ulonglong)auStack_a8;
  local_80 = param_2;
  ccIndicationTemplateBuffer::initialize((ccIndicationTemplateBuffer *)this,param_1,param_2,param_3)
  ;
  lVar11 = *(longlong *)(this + 8);
  if ((lVar11 != 0) && (uVar10 = 0, *(int *)(this + 0x60) != 0)) {
    lVar13 = 0;
    local_88 = lVar11;
    do {
      *(undefined8 *)(lVar13 + *(longlong *)(this + 0x58)) = 0;
      lua_getfield(param_2,0xffffd8ee,s_get_specific_element_name_by_id_7ffada865a78);
      lua_pushnumber(param_2,(double)(int)uVar10);
      iVar5 = ED_lua_pcall(param_2,1,1,0);
      if (iVar5 == 0) {
        iVar5 = lua_isstring(param_2,0xffffffff);
        if (iVar5 != 0) {
          pcVar6 = (char *)lua_tolstring(param_2,0xffffffff,0);
          FUN_7ffada5f31a0(local_78,pcVar6);
          uVar4 = local_60;
          _Size = local_68;
          uVar8 = 0xcbf29ce484222325;
          ppppuVar12 = local_78;
          if (0xf < local_60) {
            ppppuVar12 = (undefined8 ****)local_78[0];
          }
          uVar7 = 0;
          if (local_68 != 0) {
            do {
              pbVar1 = (byte *)((longlong)ppppuVar12 + uVar7);
              uVar7 = uVar7 + 1;
              uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
            } while (uVar7 < local_68);
          }
          uVar8 = *(ulonglong *)(lVar11 + 0x40) & uVar8;
          lVar2 = *(longlong *)(lVar11 + 0x18);
          lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + 8 + uVar8 * 0x10);
          ppppuVar12 = (undefined8 ****)local_78[0];
          if (lVar9 != lVar2) {
            lVar3 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + uVar8 * 0x10);
            while( true ) {
              _Buf2 = (undefined8 *)(lVar9 + 0x10);
              if (0xf < *(ulonglong *)(lVar9 + 0x28)) {
                _Buf2 = (undefined8 *)*_Buf2;
              }
              _Buf1 = local_78;
              if (0xf < uVar4) {
                _Buf1 = ppppuVar12;
              }
              if ((_Size == *(ulonglong *)(lVar9 + 0x20)) &&
                 ((lVar11 = local_88, _Size == 0 ||
                  (iVar5 = memcmp(_Buf1,_Buf2,_Size), lVar11 = local_88,
                  ppppuVar12 = (undefined8 ****)local_78[0], iVar5 == 0)))) goto LAB_7ffada795374;
              lVar11 = local_88;
              if (lVar9 == lVar3) break;
              lVar9 = *(longlong *)(lVar9 + 8);
            }
          }
          lVar9 = 0;
LAB_7ffada795374:
          if (lVar9 == 0) {
            lVar9 = lVar2;
          }
          if (lVar9 != lVar2) {
            *(undefined8 *)(lVar13 + *(longlong *)(this + 0x58)) = *(undefined8 *)(lVar9 + 0x30);
          }
          param_2 = local_80;
          if (0xf < uVar4) {
            free(ppppuVar12);
            param_2 = local_80;
          }
        }
      }
      else {
        lua_settop(param_2,0xfffffffe);
      }
      if (*(longlong *)(lVar13 + *(longlong *)(this + 0x58)) == 0) {
        FUN_7ffada5f68c0();
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 8;
    } while (uVar10 < *(uint *)(this + 0x60));
  }
  return;
}

