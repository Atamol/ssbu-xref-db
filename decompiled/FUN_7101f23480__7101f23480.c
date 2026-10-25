// addr:      7101f23480
// offset:    0x1f23480
// name:      FUN_7101f23480
// mangled:   
// signature: undefined __cdecl FUN_7101f23480(long * * * * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f23480(long ****param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long ***ppplVar7;
  int iVar8;
  long ****pppplVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 local_b0 [2];
  undefined **local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined **local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(int *)((long)param_1 + 0xc4) == 0) {
    (*(code *)(*param_1[0x1c])[0xe])(param_1[0x1c],0);
    (*(code *)(*param_1[0x1d])[0xc])(param_1[0x1d],1);
    (*(code *)(*param_1[0x1e])[0xe])(param_1[0x1e],1);
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8), (uVar6 & 1) != 0)) {
      FUN_71024076d0(local_b0,0x10c0b65170);
      if (((local_a0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_98 == DAT_7106dd53ac)) {
        piVar10 = (int *)(local_a0 + 0x38);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else {
      local_98 = 0x87650000000000;
      local_88 = 0xffffffffffffffff;
      uStack_80 = 0;
      local_b0[0] = 0;
      local_78 = 0;
    }
    local_a8 = &PTR_FUN_7104f73d50;
    local_a0 = 0;
    local_90 = 0;
  }
  if (*(int *)((long)param_1[0x1d] + 0x25c) == 1) {
    if (*(int *)(param_1 + 0x1b) != 2) {
      pppplVar9 = param_1 + 0x22;
      if (*(int *)(param_1 + 0x1b) != 1) {
        pppplVar9 = param_1 + 0x2e2c;
      }
      pppplVar1 = pppplVar9 + 0x2e00;
      do {
        *(undefined4 *)pppplVar9 = 0;
        *(undefined1 *)((long)pppplVar9 + 0xb4) = 1;
        *(undefined4 *)(pppplVar9 + 0x5c) = 0;
        *(undefined1 *)((long)pppplVar9 + 0x394) = 1;
        *(undefined4 *)(pppplVar9 + 0xb8) = 0;
        *(undefined1 *)((long)pppplVar9 + 0x674) = 1;
        *(undefined4 *)(pppplVar9 + 0x114) = 0;
        *(undefined1 *)((long)pppplVar9 + 0x954) = 1;
        pppplVar9 = pppplVar9 + 0x170;
      } while (pppplVar9 != pppplVar1);
      *(undefined1 *)(param_1 + 0x5c40) = 0;
      *(undefined1 *)((long)param_1 + 0x2e2a4) = 1;
      *(undefined4 *)(param_1 + 0x1b) = 2;
      FUN_7101f2b8e0(param_1);
      pcVar2 = "mode_movie";
      if (*(int *)(param_1 + 0x1b) != 1) {
        pcVar2 = "mode_picture";
      }
      FUN_7103778300(0x3f800000,(long)(*param_1[0x1a])[2],(long)pcVar2);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar6 & 1) != 0)) {
        FUN_71024076d0(local_70,0x151ca6c028);
        if (((local_60 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_58 == DAT_7106dd53ac)) {
          piVar10 = (int *)(local_60 + 0x38);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = *piVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        local_58 = 0x87650000000000;
        local_48 = 0xffffffffffffffff;
        uStack_40 = 0;
        local_70[0] = 0;
        local_38 = 0;
      }
      local_68 = &PTR_FUN_7104f73d50;
      local_60 = 0;
      local_50 = 0;
    }
  }
  else {
    if (*(int *)((long)param_1[0x1e] + 0x25c) == 2) {
      if (0x11 < *(int *)((long)param_1 + 0xbc)) {
        return;
      }
      uVar3 = *(int *)((long)param_1 + 0xbc) + 1;
      *(uint *)((long)param_1 + 0xbc) = uVar3;
      if (0x12 < uVar3) goto LAB_7101f23844;
      uVar11 = 3;
      goto LAB_7101f2382c;
    }
    if (*(char *)((long)param_1[0x1e] + 0x281) == '\0') {
      return;
    }
    ppplVar7 = param_1[0x1c];
    (*(code *)(*ppplVar7)[0xe])(ppplVar7,1);
    (*(code *)(*param_1[0x1d])[0xc])(param_1[0x1d],0);
    (*(code *)(*param_1[0x1e])[0xe])(param_1[0x1e],0);
    if (0.0 <= *(float *)((long)param_1[0x1e] + 0x274)) {
      iVar8 = 0;
    }
    else {
      pppplVar9 = param_1 + 0x1f;
      if (*(int *)(param_1 + 0x1b) != 1) {
        pppplVar9 = param_1 + 0x2e28;
      }
      iVar8 = (int)((ulong)((long)pppplVar9[1] - (long)*pppplVar9) >> 7) + -1;
    }
    FUN_7103783c10((long *)(param_1 + 0x1c),iVar8,1,1,param_5,param_6,param_7,param_8);
  }
  uVar3 = *(uint *)((long)param_1 + 0xbc);
  if (0x12 < uVar3) {
LAB_7101f23844:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar11 = 1;
LAB_7101f2382c:
  *(undefined4 *)((long)param_1 + (long)(int)uVar3 * 4 + 0x70) = uVar11;
  return;
}

