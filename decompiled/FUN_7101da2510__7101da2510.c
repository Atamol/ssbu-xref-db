// addr:      7101da2510
// offset:    0x1da2510
// name:      FUN_7101da2510
// mangled:   
// signature: undefined __cdecl FUN_7101da2510(long param_1, long * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)


void FUN_7101da2510(long param_1,long *param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,ulong param_7,undefined8 param_8)

{
  char cVar1;
  undefined **ppuVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined **local_80;
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar12 = *(long *)(param_1 + 0x80);
  FUN_7103776910(&local_80,lVar12 + 0x160,(long ****)"set_rep_screen",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  ppuVar2 = local_78;
  if (((*(long **)((long)local_78 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
     (lVar6 = *(long *)(*(long *)(DAT_710593bc38 + 8) + 0x78), lVar6 != 0)) {
    FUN_710379e9c0(*(long **)((long)local_78 + 8),lVar6,0);
  }
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar2);
  }
  *(char *)(lVar12 + 0x1c2) = (char)param_2[3];
  *(undefined1 *)(lVar12 + 0x1c4) = *(undefined1 *)((long)param_2 + 0x29);
  *(undefined1 *)(lVar12 + 0x1c5) = *(undefined1 *)((long)param_2 + 0x2a);
  *(long *)(lVar12 + 0x1d0) = param_2[4];
  *(char *)(lVar12 + 0x1d8) = (char)param_2[5];
  lVar6 = *param_2;
  uVar7 = 0;
  if (*(char *)(lVar6 + 8) == '\0') goto LAB_7101da2614;
  if (*(char *)(lVar6 + 0xec) == '\0') {
    lVar8 = *(long *)(lVar6 + 0x70);
    lVar6 = *(long *)(lVar6 + 0x78);
    if (lVar6 != lVar8) goto LAB_7101da25dc;
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x70);
    lVar6 = *(long *)(lVar6 + 0x78);
LAB_7101da25dc:
    uVar10 = (uint)((ulong)(lVar6 - lVar8) >> 3);
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        lVar6 = *(long *)(lVar8 + (ulong)uVar11 * 8);
        if (*(char *)(lVar6 + 0x10) == '\x01') {
          uVar7 = *(undefined1 *)(lVar6 + 0x48);
          goto LAB_7101da2614;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
    }
  }
  uVar7 = 0;
LAB_7101da2614:
  *(undefined1 *)(lVar12 + 0x1c3) = uVar7;
  *(undefined1 *)(lVar12 + 0x1c6) = *(undefined1 *)(*param_2 + 0xb8);
  if (*(char *)((long)param_2 + 0x2c) == '\0') {
    *(undefined1 *)(lVar12 + 0x1c7) = 0;
  }
  else {
    if (param_2[2] == 0) {
      bVar3 = true;
    }
    else {
      bVar3 = *(short *)(param_2[2] + 2) == -1;
    }
    *(bool *)(lVar12 + 0x1c7) = bVar3;
  }
  FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0x150),3,(long ****)0x0,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0x158),0,(long ****)0x1002,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0x148),0,(long ****)0x1003,param_4,param_5,
                 param_6,param_7,param_8);
  if (*(char *)((long)param_2 + 0x2b) == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x168),0x71042e7633);
    FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x188),0x71042e7633);
    FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x178),0x71042e7633);
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xfc30dd6ab,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8), (uVar5 & 1) != 0)) {
      FUN_71024076d0((undefined4 *)&local_80,0xfc30dd6ab);
      if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
        piVar9 = (int *)(local_70 + 0x38);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    else {
      local_68 = 0x87650000000000;
      local_58 = 0xffffffffffffffff;
      uStack_50 = 0;
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_48 = 0;
    }
    local_78 = &PTR_FUN_7104f73d50;
    local_70 = 0;
    local_60 = 0;
  }
  else {
    FUN_7103778760(*(long *)(lVar12 + 0x168),0x71042e7633);
    FUN_7103778760(*(long *)(lVar12 + 0x188),0x71042e7633);
    FUN_7103778760(*(long *)(lVar12 + 0x178),0x71042e7633);
  }
  FUN_7101d9d070(lVar12,*param_2,*(ushort *)(param_2 + 1),(byte ****)param_2[2],
                 (long ****)(ulong)*(byte *)(lVar12 + 0x1c4),(ulong)*(byte *)((long)param_2 + 0x2b),
                 param_7,param_8);
  lVar6 = *(long *)(*(long *)(lVar12 + 0x168) + 8);
  if (((lVar6 != 0) && (plVar4 = (long *)FUN_71037964b0(lVar6,0x71042b474b), plVar4 != (long *)0x0))
     && (uVar5 = (**(code **)(*plVar4 + 0x130))(), (uVar5 & 1) != 0)) {
    *(undefined1 *)(lVar12 + 0x1b8) = 1;
  }
  (**(code **)(**(long **)(lVar12 + 0x1b0) + 0x70))(*(long **)(lVar12 + 0x1b0),0);
  FUN_71037760f0(*(long *)**(undefined8 **)(lVar12 + 0x148),0);
  **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) | 2;
  if (0x12 < *(uint *)(lVar12 + 0x114)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar12 + (long)(int)*(uint *)(lVar12 + 0x114) * 4 + 200) = 1;
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

