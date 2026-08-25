/*
 * CockpitBase.dll class reconstruction
 * Function: OnCockpitEvent
 * Address : 7ffada666fe0
 * Role    : method
 * Vtable slots: 13
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __cdecl cockpit::avKneeboard::OnCockpitEvent(class ed::basic_string<char>
   const & __ptr64,class HeapVector<struct Graphics::DynamicParam> const & __ptr64) __ptr64 */

void __thiscall
cockpit::avKneeboard::OnCockpitEvent
          (avKneeboard *this,basic_string<char> *param_1,HeapVector<Graphics::DynamicParam> *param_2
          )

{
  longlong lVar1;
  wMessage *this_00;
  bool bVar2;
  int iVar3;
  basic_string<char> *pbVar4;
  undefined8 *puVar5;
  LuaTableElement *pLVar6;
  LuaTableElement *pLVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_80;
  basic_string<char> *local_78;
  double local_70;
  double local_68;
  basic_string<char> *local_58 [2];
  double local_48;
  ulonglong local_40;
  ulonglong local_38;
  
                    /* 0x256fe0  2103
                       ?OnCockpitEvent@avKneeboard@cockpit@@UEAAXAEBV?$basic_string@D@ed@@AEBV?$HeapVector@UDynamicParam@Graphics@@@@@Z
                        */
  local_38 = DAT_7ffada94e840 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar10 = *(ulonglong *)(param_1 + 0x18);
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if ((lVar1 == 0xf) && (iVar3 = memcmp(pbVar4,s_AI__AttackGroup_7ffada84d5f8,0xf), iVar3 == 0)) {
LAB_7ffada667086:
    FUN_7ffada668190((longlong *)(this + 0x4a0));
    if (0 < *(int *)(param_2 + 8)) {
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_7ffada960db8) &&
       (FUN_7ffada82b8c4(&DAT_7ffada960db8), DAT_7ffada960db8 == -1)) {
      _DAT_7ffada960db0 = 0;
      _Init_thread_footer(&DAT_7ffada960db8);
      _DAT_7ffada960db0 = 0;
      return;
    }
    _DAT_7ffada960db0 = 0;
    return;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0xe) {
    lVar8 = *(longlong *)pbVar4 + -0x617474413a3a4941;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(pbVar4 + 8) - 0x6e556b63, lVar8 == 0)) {
      lVar8 = (ulonglong)*(ushort *)(pbVar4 + 0xc) - 0x7469;
    }
    if (lVar8 == 0) goto LAB_7ffada667086;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0xb) {
    lVar8 = *(longlong *)pbVar4 + -0x626d6f423a3a4941;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(ushort *)(pbVar4 + 8) - 0x6e69, lVar8 == 0)) {
      lVar8 = (ulonglong)(byte)pbVar4[10] - 0x67;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if ((lVar1 == 0x13) &&
     (iVar3 = memcmp(pbVar4,s_AI__AttackMapObject_7ffada84d628,0x13), iVar3 == 0)) {
LAB_7ffada6672c3:
    FUN_7ffada668190((longlong *)(this + 0x4a0));
    FUN_7ffada645a10((longlong *)param_2,0);
    return;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0x11) {
    lVar8 = *(longlong *)pbVar4 + -0x626d6f423a3a4941;
    if ((lVar8 == 0) && (lVar8 = *(longlong *)(pbVar4 + 8) + -0x61776e7552676e69, lVar8 == 0)) {
      lVar8 = (ulonglong)(byte)pbVar4[0x10] - 0x79;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 9) {
    lVar8 = *(longlong *)pbVar4 + -0x6962724f3a3a4941;
    if (lVar8 == 0) {
      lVar8 = (ulonglong)(byte)pbVar4[8] - 0x74;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if ((lVar1 == 8) && (*(longlong *)pbVar4 == 0x646e614c3a3a4941)) goto LAB_7ffada6672c3;
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0xd) {
    lVar8 = *(longlong *)pbVar4 + -0x756665523a3a4941;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(pbVar4 + 8) - 0x6e696c65, lVar8 == 0)) {
      lVar8 = (ulonglong)(byte)pbVar4[0xc] - 0x67;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 10) {
    lVar8 = *(longlong *)pbVar4 + -0x6c6c6f463a3a4941;
    if (lVar8 == 0) {
      lVar8 = (ulonglong)*(ushort *)(pbVar4 + 8) - 0x776f;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 10) {
    lVar8 = *(longlong *)pbVar4 + -0x6f6373453a3a4941;
    if (lVar8 == 0) {
      lVar8 = (ulonglong)*(ushort *)(pbVar4 + 8) - 0x7472;
    }
    if (lVar8 == 0) goto LAB_7ffada6672c3;
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if ((lVar1 == 8) && (*(longlong *)pbVar4 == 0x6b7361543a3a4941)) goto LAB_7ffada6672c3;
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0xd) {
    lVar8 = *(longlong *)pbVar4 + -0x657365723a3a4941;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(pbVar4 + 8) - 0x73615474, lVar8 == 0)) {
      lVar8 = (ulonglong)(byte)pbVar4[0xc] - 0x6b;
    }
    if (lVar8 == 0) {
      FUN_7ffada668190((longlong *)(this + 0x4a0));
      return;
    }
  }
  pbVar4 = param_1;
  if (0xf < uVar10) {
    pbVar4 = *(basic_string<char> **)param_1;
  }
  if (lVar1 == 0xe) {
    lVar8 = *(longlong *)pbVar4 + -0x4d6f696461526e6f;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(pbVar4 + 8) - 0x61737365, lVar8 == 0)) {
      lVar8 = (ulonglong)*(ushort *)(pbVar4 + 0xc) - 0x6567;
    }
    if (lVar8 == 0) {
      puVar5 = (undefined8 *)FUN_7ffada645a10((longlong *)param_2,0);
      this_00 = (wMessage *)*puVar5;
      if (this_00 == (wMessage *)0x0) {
        return;
      }
      LuaTableElement::print((LuaTableElement *)(this_00 + 0xc0));
      if (*(int *)(this_00 + 0x180) - 0x1152U < 5) {
        pLVar6 = LuaTableElement::operator[]
                           ((LuaTableElement *)(this_00 + 0xc0),s_target_location_7ffada8552c0);
        bVar2 = LuaTableElement::empty(pLVar6);
        if (!bVar2) {
          pLVar7 = LuaTableElement::operator[](pLVar6,&DAT_7ffada84ea58);
          local_78 = (basic_string<char> *)LuaTableElement::operator_double(pLVar7);
          pLVar7 = LuaTableElement::operator[](pLVar6,&DAT_7ffada84ea5c);
          local_70 = LuaTableElement::operator_double(pLVar7);
          pLVar6 = LuaTableElement::operator[](pLVar6,&DAT_7ffada84ea60);
          local_68 = LuaTableElement::operator_double(pLVar6);
          mark_target(this,(Vec3d *)&local_78);
        }
        local_78 = wMessage::getSubtitle(this_00);
        local_70 = *(double *)(local_78 + 0x10);
        if (0xf < *(ulonglong *)(local_78 + 0x18)) {
          local_78 = *(basic_string<char> **)local_78;
        }
        add_note(this,&local_78);
      }
      goto LAB_7ffada66757f;
    }
  }
  if (0xf < uVar10) {
    param_1 = *(basic_string<char> **)param_1;
  }
  if (lVar1 != 0xf) {
    return;
  }
  iVar3 = memcmp(param_1,s_onClipboardText_7ffada855248,0xf);
  if (iVar3 != 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_7ffada645a10((longlong *)param_2,0);
  plVar9 = (longlong *)*puVar5;
  dVar11 = wTime::GetAbsoluteModelTime();
  dVar11 = fmod(dVar11,DAT_7ffada84e060);
  uVar10 = (ulonglong)dVar11;
  iVar3 = (int)uVar10;
  local_88 = iVar3 + (int)((uVar10 & 0xffffffff) / 0x3c) * -0x3c;
  if (0xf < (ulonglong)plVar9[3]) {
    plVar9 = (longlong *)*plVar9;
  }
  local_80 = (longlong)plVar9;
  ed::string_format((char *)local_58,s_<_02d:_02d:_02d>__s_7ffada8552d0,
                    (ulonglong)
                    ((uint)(iVar3 + (int)((uVar10 & 0xffffffff) / 0x15180) * -0x15180) / 0xe10),
                    (ulonglong)
                    ((uint)(iVar3 + (int)((uVar10 & 0xffffffff) / 0xe10) * -0xe10) / 0x3c));
  local_78 = (basic_string<char> *)local_58;
  if (0xf < local_40) {
    local_78 = local_58[0];
  }
  local_70 = local_48;
  add_note(this,&local_78);
LAB_7ffada66757f:
  if (local_40 < 0x10) {
    return;
  }
  free(local_58[0]);
  return;
}

