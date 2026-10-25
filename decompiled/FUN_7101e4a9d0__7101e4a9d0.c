// addr:      7101e4a9d0
// offset:    0x1e4a9d0
// name:      FUN_7101e4a9d0
// mangled:   
// signature: undefined __cdecl FUN_7101e4a9d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e4a9d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long ****pppplVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  char cVar10;
  ushort *puVar11;
  uint uVar12;
  ushort uVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  ushort *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined **local_80;
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined **local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long ***local_30;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x184) == 0) {
    FUN_710377a120(*(long *)(param_1 + 0x1c8) + 0x10,"cam_gym_dialog_select",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x18) + 0x10);
    iVar6 = 0;
    if (lVar8 != 0) {
      puVar11 = *(ushort **)(lVar8 + 0xd8);
      if ((puVar11 == (ushort *)0x0) || (uVar13 = *puVar11, uVar13 == 0)) {
        iVar6 = 0;
      }
      else {
        uVar12 = 0;
        iVar6 = 0;
        puVar18 = puVar11;
        do {
          if ((uVar13 | 1) == 0xf) {
            if (uVar13 == 0xe) {
              iVar14 = 0;
              iVar17 = (puVar18[3] >> 1) + 4;
            }
            else {
              iVar14 = 0;
              iVar17 = 3;
              if (uVar13 != 0xf) {
                iVar17 = 0;
              }
            }
          }
          else {
            iVar14 = 1;
            iVar17 = 1;
          }
          uVar12 = iVar17 + uVar12;
          puVar18 = puVar11 + uVar12;
          iVar6 = iVar14 + iVar6;
          uVar13 = *puVar18;
        } while (uVar13 != 0);
      }
    }
    *(int *)(param_1 + 0x1d8) = iVar6;
    FUN_7101e94ba0((long *)(param_1 + 0x1c8),0,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar20 = *(undefined8 **)(param_1 + 0x1c0);
    plVar15 = (long *)*puVar20;
    (**(code **)(*plVar15 + 0x60))(plVar15,1);
    plVar15 = (long *)*puVar20;
    (**(code **)(*plVar15 + 0x70))(plVar15,1);
    FUN_7103771a80(*(long **)(param_1 + 0x1c0),
                   (uint)((char)(*(long **)(param_1 + 0x1c0))[1] != '\0'),1);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 400),1);
    if (3 < (ulong)*(byte *)(param_1 + 0x22d)) {
      return;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x1a8) + (ulong)*(byte *)(param_1 + 0x22d) * 8 + 0x48);
    if (lVar8 == 0) {
      return;
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x71042a3880);
    return;
  }
  lVar8 = **(long **)(param_1 + 0x1c0);
  uVar12 = *(uint *)(lVar8 + 0x25c);
  if (uVar12 == 0xffffffff) {
    bVar2 = false;
    cVar10 = '\0';
  }
  else {
    if (1 < uVar12) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar2 = true;
    cVar10 = (char)(*(long **)(param_1 + 0x1c0))[(long)(int)uVar12 * 9 + 1];
  }
  plVar15 = *(long **)(**(long **)(param_1 + 0x250) + 8);
  if (((((char)plVar15[0x71] == '\0') || (bVar1 = *(byte *)(param_1 + 0x22d), 3 < bVar1)) ||
      (lVar16 = *plVar15, lVar16 == 0 || lVar16 + (ulong)bVar1 * 0x1d8 == 0)) ||
     (*(char *)(lVar16 + (ulong)bVar1 * 0x1d8 + 0x20) != '\x03')) {
    if (*(char *)(lVar8 + 0x280) != '\0') goto LAB_7101e4ab50;
    if (bVar2) {
      if (cVar10 != '\x01') {
        if (cVar10 == '\0') goto LAB_7101e4ab50;
        goto LAB_7101e4ab58;
      }
      uVar7 = 2;
      goto LAB_7101e4ab54;
    }
  }
  else {
    lVar8 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40) >> 3) < 4) {
      uVar19 = 0;
      if (*(char *)(lVar8 + 0x191) == '\0') goto LAB_7101e4ad9c;
LAB_7101e4ae0c:
      local_58 = 0x87650000000000;
      local_48 = 0xffffffffffffffff;
      uStack_40 = 0;
      local_70[0] = 0;
      local_38 = 0;
    }
    else {
      uVar19 = *(ulong *)(*(long *)(lVar8 + 0x40) + 0x18);
      if (*(char *)(lVar8 + 0x191) != '\0') goto LAB_7101e4ae0c;
LAB_7101e4ad9c:
      param_3 = (long ****)&DAT_00000004;
      uVar4 = FUN_7103313f20(lVar8,uVar19,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar4 & 1) == 0) goto LAB_7101e4ae0c;
      FUN_71024076d0(local_70,uVar19);
      if (((local_60 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_58 == DAT_7106dd53ac)) {
        piVar9 = (int *)(local_60 + 0x38);
        do {
          cVar10 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
    }
    local_68 = &PTR_FUN_7104f73d50;
    local_60 = 0;
    local_50 = 0;
LAB_7101e4ab50:
    uVar7 = 1;
LAB_7101e4ab54:
    *(undefined4 *)(param_1 + 0x228) = uVar7;
  }
LAB_7101e4ab58:
  if (*(int *)(param_1 + 0x228) == 0) {
    return;
  }
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 400),0);
  if (((ulong)*(byte *)(param_1 + 0x22d) < 4) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x1a8) + (ulong)*(byte *)(param_1 + 0x22d) * 8 + 0x48),
     lVar8 != 0)) {
    FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x710432a8bc);
  }
  puVar20 = *(undefined8 **)(param_1 + 0x1c0);
  plVar15 = (long *)*puVar20;
  (**(code **)(*plVar15 + 0x60))(plVar15,0);
  plVar15 = (long *)*puVar20;
  (**(code **)(*plVar15 + 0x70))(plVar15,0);
  FUN_71037780e0(&local_80,param_1 + 0x198,(long ****)"menu_out",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  puVar20 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar20 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_24 = 0;
      local_30 = (long ***)&DAT_00000010;
      pppplVar5 = &local_30;
      uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
      if (((uVar19 & 1) != 0) &&
         (puVar20 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar20 != (undefined8 *)0x0)) goto LAB_7101e4ac38;
    }
    puVar20 = (undefined8 *)0x0;
  }
LAB_7101e4ac38:
  uVar3 = local_78;
  local_78 = 0;
  *puVar20 = &PTR_FUN_710523d9e8;
  puVar20[1] = uVar3;
  plVar15 = *(long **)(param_1 + 0x210);
  *(undefined8 **)(param_1 + 0x210) = puVar20;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))(plVar15);
  }
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x210));
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x130) = 0xe0000000f;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0xffffffff00000001;
  return;
}

