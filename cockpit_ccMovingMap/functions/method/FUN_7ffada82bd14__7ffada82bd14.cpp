/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada82bd14
 * Address : 7ffada82bd14
 * Role    : method
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7ffada82bd14(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x7ffada82bd3f;
  FUN_7ffada82bf0c((PCONTEXT)&DAT_7ffada9660a0);
  _DAT_7ffada966010 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_7ffada966138 = puVar3 + 0x40;
  _DAT_7ffada966120 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_7ffada966000 = 0xc0000409;
  _DAT_7ffada966004 = 1;
  _DAT_7ffada966018 = 1;
  DAT_7ffada966020 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_7ffada94e840;
  *(undefined8 *)(puVar3 + 0x28) = DAT_7ffada94e880;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -8) = &UNK_7ffada82bde1;
  DAT_7ffada966198 = _DAT_7ffada966010;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_7ffada8720b0);
}

