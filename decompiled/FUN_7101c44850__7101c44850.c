// addr:      7101c44850
// offset:    0x1c44850
// name:      FUN_7101c44850
// mangled:   
// signature: undefined __cdecl FUN_7101c44850(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c44850(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long ****pppplVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined4 local_78 [2];
  undefined **local_70;
  long local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long ***local_38;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x528),0);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x528) + 0x10),0x710434a2f6);
    FUN_7103314c70(*(long *)(DAT_710532f8d0 + 8),0x182f25c078,(long ****)&DAT_0000000f,param_4,
                   param_5,param_6,param_7,param_8);
  }
  lVar6 = *(long *)(*(long *)(**(long **)(param_1 + 0x528) + 0x10) + 8);
  if (((lVar6 != 0) && (plVar7 = (long *)FUN_71037964b0(lVar6,0x710434a2f6), plVar7 != (long *)0x0))
     && (uVar8 = (**(code **)(*plVar7 + 0x138))(), (uVar8 & 1) == 0)) {
    return;
  }
  pppplVar11 = (long ****)0x0;
  FUN_7101c456b0(param_1,*(int *)(param_1 + 0x538),0,param_4,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x530) + 0x70))(*(long **)(param_1 + 0x530),1);
  lVar6 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40) >> 3) < 2) {
    uVar8 = 0;
    if (*(char *)(lVar6 + 0x191) == '\0') goto LAB_7101c44954;
LAB_7101c449c4:
    local_60 = 0x87650000000000;
    local_50 = 0xffffffffffffffff;
    uStack_48 = 0;
    local_78[0] = 0;
    local_40 = 0;
  }
  else {
    uVar8 = *(ulong *)(*(long *)(lVar6 + 0x40) + 8);
    if (*(char *)(lVar6 + 0x191) != '\0') goto LAB_7101c449c4;
LAB_7101c44954:
    pppplVar11 = (long ****)&DAT_00000004;
    uVar9 = FUN_7103313f20(lVar6,uVar8,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                           param_8);
    if ((uVar9 & 1) == 0) goto LAB_7101c449c4;
    FUN_71024076d0(local_78,uVar8);
    if (((local_68 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_60 == DAT_7106dd53ac)) {
      piVar12 = (int *)(local_68 + 0x38);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = *piVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  local_70 = &PTR_FUN_7104f73d50;
  local_68 = 0;
  local_58 = 0;
  lVar6 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80);
  if (*(char *)(lVar6 + 200) == '\x01') {
    if (*(char *)(lVar6 + 0x2253) != '\x01') goto LAB_7101c44a34;
  }
  else {
    *(undefined1 *)(lVar6 + 200) = 1;
LAB_7101c44a34:
    if (*(char *)(lVar6 + 0x2250) != '\0') {
      pppplVar11 = (long ****)0x1;
      FUN_7101af4c80(lVar6,1,1,param_4,param_5,param_6,param_7,param_8);
      if (*(char *)(lVar6 + 200) == '\0') {
        bVar5 = false;
      }
      else {
        bVar5 = *(char *)(lVar6 + 0xc9) != '\0';
      }
      lVar14 = *(long *)(*(long *)(lVar6 + 0x2260) + 0x1b8);
      if (lVar14 != 0) {
        lVar6 = *(long *)(lVar6 + 0x2260) + 0x1b8;
        lVar13 = lVar6;
        do {
          bVar4 = *(int *)(lVar14 + 0x20) < 0;
          if (!bVar4) {
            lVar13 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)bVar4 * 8);
        } while (lVar14 != 0);
        if (((lVar13 != lVar6) && (*(int *)(lVar13 + 0x20) < 1)) &&
           (plVar7 = *(long **)(lVar13 + 0x28), plVar7 != (long *)0x0)) {
          (**(code **)(*plVar7 + 0x1f8))(plVar7,bVar5);
          pppplVar11 = (long ****)0x0;
          (**(code **)(*plVar7 + 0x388))(plVar7,bVar5 ^ 1);
        }
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x148);
  plVar7 = (long *)**(undefined8 **)(*DAT_7105314510 + 0x268);
  lVar6 = *plVar7;
  piVar12 = (int *)(lVar6 + 0x6594);
  if ((*piVar12 != iVar2) || (*(char *)(lVar6 + 0x6593) != '\0')) {
    *(undefined4 *)(lVar6 + 0x6598) = 0;
    piVar12 = (int *)(*plVar7 + 0x6594);
  }
  *piVar12 = iVar2;
  *(undefined1 *)(*plVar7 + 0x6593) = 0;
  plVar7 = (long *)(*DAT_7105314508 + 0x5b4dd8);
  plVar1 = (long *)(*DAT_7105314508 + 0x5b4de8);
  if (*plVar1 != 0) {
    *(byte *)(*plVar7 + 0x10) = *(byte *)(*plVar7 + 0x10) & 1;
    goto LAB_7101c44bf8;
  }
  plVar10 = (long *)FUN_710392e290(0x10,0x18,pppplVar11,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_24 = 0;
      local_38 = (long ***)&SUB_00000018;
      pppplVar11 = &local_38;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
      if (((uVar8 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x18,pppplVar11,param_4,param_5,param_6,param_7,
                                           param_8), plVar10 != (long *)0x0)) goto LAB_7101c44bd4;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101c44bd4:
  *(undefined1 *)(plVar10 + 2) = 0;
  plVar10[1] = (long)plVar7;
  lVar6 = *plVar7;
  *plVar10 = lVar6;
  *(long **)(lVar6 + 8) = plVar10;
  *plVar7 = (long)plVar10;
  *plVar1 = *plVar1 + 1;
LAB_7101c44bf8:
  if (0 < *(int *)(param_1 + 0x134)) {
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
  }
  return;
}

