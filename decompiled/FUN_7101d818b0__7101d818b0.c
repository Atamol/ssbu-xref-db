// addr:      7101d818b0
// offset:    0x1d818b0
// name:      FUN_7101d818b0
// mangled:   
// signature: undefined __cdecl FUN_7101d818b0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d818b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long ****pppplVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ushort *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ushort uVar16;
  ushort *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint uVar20;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  undefined4 local_44;
  
  lVar15 = **(long **)(param_1 + 0x1e8);
  lVar2 = lVar15 + 8;
  if (*(int *)(param_1 + 0x410) == 3) {
    lVar15 = *(long *)(lVar15 + 0x10);
    pcVar12 = "new_arrange";
  }
  else if (*(int *)(param_1 + 0x410) == 2) {
    lVar15 = *(long *)(lVar15 + 0x10);
    pcVar12 = "arrange";
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x10);
    pcVar12 = "arrange_off";
  }
  FUN_7103778300(0x3f800000,lVar15,(long)pcVar12);
  FUN_7103776910(&local_60,lVar2,(long ****)"set_txt_scr_sound_name",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a120((long)&local_60,(char *)(param_1 + 0x2f8),param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776640(&local_70,lVar2,(byte ****)"set_txt_scr_sound_source",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar8 = local_68;
  if ((undefined ***)(param_1 + 0x418) != &local_70) {
    local_68 = 0;
    uVar19 = *(ulong *)(param_1 + 0x420);
    *(ulong *)(param_1 + 0x420) = uVar8;
    if (uVar19 != 0) {
      uVar8 = *(ulong *)(uVar19 + 0x18);
      *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar19 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar19);
    }
  }
  uVar8 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar8 != 0) {
    uVar19 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar19 != 0) {
      FUN_710392eb40(uVar19);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7101d85c90(param_1 + 0x418,(char *)(param_1 + 0x340),param_3,param_4,param_5,param_6,param_7,
                 param_8);
  lVar15 = *(long *)(*(long *)(param_1 + 0x420) + 8);
  if (lVar15 != 0) {
    puVar18 = *(undefined8 **)(lVar15 + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_710593ba40), iVar7 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_710593ba48), iVar7 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar18 != (undefined8 *)0x0) {
      for (puVar9 = (undefined8 *)(**(code **)*puVar18)(puVar18); puVar9 != (undefined8 *)0x0;
          puVar9 = (undefined8 *)*puVar9) {
        if ((undefined8 **)puVar9 == &DAT_710593ba58) {
          lVar15 = puVar18[3];
          *(undefined4 *)(puVar18 + 0xb) = *(undefined4 *)((long)puVar18 + 0x54);
          if (lVar15 != 0) {
            *(undefined4 *)(lVar15 + 0x30) = *(undefined4 *)((long)puVar18 + 0x54);
            *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
          }
          lVar15 = puVar18[4];
          if (lVar15 != 0) {
            *(undefined4 *)(lVar15 + 0x30) = *(undefined4 *)(puVar18 + 0xb);
            *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
          }
          if ((long *)puVar18[5] != (long *)0x0) {
            (**(code **)(*(long *)puVar18[5] + 0x180))(0);
          }
          plVar10 = (long *)puVar18[6];
          if (plVar10 != (long *)0x0) {
            if (*(char *)((long)puVar18 + 99) == '\0') {
              (**(code **)(*plVar10 + 0x180))(0);
            }
            else {
              (**(code **)(*plVar10 + 400))();
            }
          }
          *(undefined2 *)((long)puVar18 + 100) = 0;
          break;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x428) = 0;
  pbVar3 = (byte *)(param_1 + 0x388);
  bVar6 = FUN_71037a4570((long *)*DAT_710593bc60,pbVar3);
  uVar20 = 0;
  if (bVar6) {
    bVar6 = FUN_71037a4570((long *)*DAT_710593bc60,pbVar3);
    if ((bVar6) &&
       (puVar11 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar3), puVar11 != (ushort *)0x0
       )) {
      uVar16 = *puVar11;
      uVar20 = (uint)(uVar16 != 0);
      if (uVar16 != 0) {
        uVar13 = 0;
        puVar17 = puVar11;
        do {
          if ((uVar16 | 1) == 0xf) {
            if (uVar16 == 0xe) {
              iVar7 = (puVar17[3] >> 1) + 4;
            }
            else {
              iVar7 = 3;
              if (uVar16 != 0xf) {
                iVar7 = 0;
              }
            }
          }
          else {
            iVar7 = 1;
            if (uVar16 == 10) {
              uVar20 = uVar20 + 1;
            }
          }
          uVar13 = iVar7 + uVar13;
          puVar17 = puVar11 + uVar13;
          uVar16 = *puVar17;
        } while (uVar16 != 0);
      }
    }
    else {
      uVar20 = 0;
    }
  }
  pbVar4 = (byte *)(param_1 + 0x3d0);
  bVar6 = FUN_71037a4570((long *)*DAT_710593bc60,pbVar4);
  if (((bVar6) && (bVar6 = FUN_71037a4570((long *)*DAT_710593bc60,pbVar4), bVar6)) &&
     (puVar11 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar4), puVar11 != (ushort *)0x0))
  {
    uVar16 = *puVar11;
    uVar14 = (uint)(uVar16 != 0);
    if (uVar16 != 0) {
      uVar13 = 0;
      puVar17 = puVar11;
      do {
        if ((uVar16 | 1) == 0xf) {
          if (uVar16 == 0xe) {
            iVar7 = (puVar17[3] >> 1) + 4;
          }
          else {
            iVar7 = 3;
            if (uVar16 != 0xf) {
              iVar7 = 0;
            }
          }
        }
        else {
          iVar7 = 1;
          if (uVar16 == 10) {
            uVar14 = uVar14 + 1;
          }
        }
        uVar13 = iVar7 + uVar13;
        puVar17 = puVar11 + uVar13;
        uVar16 = *puVar17;
      } while (uVar16 != 0);
    }
    bVar6 = 0 < (int)uVar20;
    uVar13 = 0;
    bVar1 = 0 < (int)uVar14;
    if ((0 < (int)uVar20) && (0 < (int)uVar14)) {
      uVar13 = 5;
      if (((int)(uVar14 + uVar20) < 9) && (uVar13 = uVar20, 4 < (int)uVar20)) {
        uVar13 = 5;
      }
      bVar1 = true;
      bVar6 = true;
    }
  }
  else {
    bVar1 = false;
    uVar13 = 0;
    bVar6 = 0 < (int)uVar20;
  }
  uVar8 = (ulong)uVar13;
  FUN_7103778430(lVar2,"bar_detail_position_%d",uVar8,param_4,param_5,param_6,param_7,param_8);
  pppplVar5 = (long ****)"set_txt_detail_00_0";
  if (4 < (int)uVar13) {
    pppplVar5 = (long ****)"set_txt_detail_00_1";
  }
  FUN_7103776910(&local_70,lVar2,pppplVar5,uVar8,param_4,param_5,param_6,param_7,param_8);
  if (bVar6) {
    FUN_710377a120((long)&local_70,(char *)pbVar3,uVar8,param_4,param_5,param_6,param_7,param_8);
  }
  else if (*(long **)(local_68 + 0x10) != (long *)0x0) {
    uVar8 = 0;
    param_4 = 0;
    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
    FUN_71037a2270(*(long **)(local_68 + 0x10),(ushort *)&local_80,0,0);
  }
  pppplVar5 = (long ****)"set_txt_detail_01_0";
  if (4 < (int)uVar13) {
    pppplVar5 = (long ****)"set_txt_detail_01_1";
  }
  FUN_7103776910(&local_80,lVar2,pppplVar5,uVar8,param_4,param_5,param_6,param_7,param_8);
  if (bVar1) {
    FUN_710377a120((long)&local_80,(char *)pbVar4,uVar8,param_4,param_5,param_6,param_7,param_8);
    uVar8 = local_78;
  }
  else {
    uVar8 = local_78;
    if (*(long **)(local_78 + 0x10) != (long *)0x0) {
      local_44 = 0;
      FUN_71037a2270(*(long **)(local_78 + 0x10),(ushort *)&local_44,0,0);
    }
  }
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  return;
}

