================================================================================
ccMovingMap - FUNCTIONS
================================================================================

Nombre de blocs : 3


################################################################################
# BLOCK 1
# SOURCE : CockpitBase_dump_SCY.dll.c
# KEYWORD : ccMovingMap
################################################################################


    this = (ccMovingMap *)FUN_7ff89356b29c(0xd8);
    if (this != (ccMovingMap *)0x0) {
      plVar7 = (longlong *)ccMovingMap::ccMovingMap(this);
    }


################################################################################
# BLOCK 2
# SOURCE : CockpitBase_dump_SCY.dll.c
# KEYWORD : ccMovingMap
################################################################################


    if (this != (ccMovingMap *)0x0) {
      plVar7 = (longlong *)ccMovingMap::ccMovingMap(this);
    }


################################################################################
# BLOCK 3
# SOURCE : CockpitBase_dump_SCY.dll.c
# KEYWORD : ccMovingMap::
################################################################################


      plVar7 = (longlong *)ccMovingMap::ccMovingMap(this);
    }
    plVar9[0xcf] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x58))(plVar7,plVar9);
      (**(code **)(*(longlong *)plVar9[0xcf] + 0x30))
                ((longlong *)plVar9[0xcf],*(undefined4 *)((longlong)plVar9 + 0x464),
                 (int)plVar9[0x8d]);
      (**(code **)(*(longlong *)plVar9[0xcf] + 0x38))
                ((longlong *)plVar9[0xcf],*(undefined4 *)((longlong)plVar9 + 0x3d4));
      lVar5 = plVar9[0xcf];
      plVar13 = plVar9 + 0xe;
      plVar7 = (longlong *)*plVar13;
      plVar8 = (longlong *)plVar7[1];
      uStack_40 = 0;
      bVar12 = (byte)(int)dVar2;
      cVar1 = *(char *)((longlong)plVar8 + 0x19);
      plVar10 = plVar7;
      local_48 = plVar8;
      while (plVar3 = plVar8, cVar1 == '\0') {
        plVar8 = plVar3;
        plVar11 = plVar3;
        if (bVar12 > *(byte *)(plVar3 + 4)) {
          plVar8 = plVar3 + 2;
          plVar11 = plVar10;
        }
        uStack_40 = (uint)(bVar12 <= *(byte *)(plVar3 + 4));
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar10 = plVar11;
        plVar8 = (longlong *)*plVar8;
        local_48 = plVar3;
      }
      if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (bVar12 < *(byte *)(plVar10 + 4))) {
        if (plVar9[0xf] == 0x555555555555555) {
                    // WARNING: Subroutine does not return
          FUN_7ff893334c90();
        }
        uStack_50 = 0;
        local_58 = plVar13;
        plVar9 = malloc(0x30);
        if (plVar9 == (longlong *)0x0) {
          ed::fatal_out_of_memory(s_ed_malloc_7ff89358cbc0,0x30);
        }
        *(byte *)(plVar9 + 4) = bVar12;
        plVar9[5] = 0;
        *plVar9 = (longlong)plVar7;
        plVar9[1] = (longlong)plVar7;
        plVar9[2] = (longlong)plVar7;
        *(undefined2 *)(plVar9 + 3) = 0;
        local_58 = local_48;
        uStack_50 = CONCAT44(uStack_3c,uStack_40);
        plVar10 = (longlong *)FUN_7ff893334830(plVar13,&local_58,plVar9);
      }
      plVar10[5] = lVar5;
    }

