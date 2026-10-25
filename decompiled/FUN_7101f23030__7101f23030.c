// addr:      7101f23030
// offset:    0x1f23030
// name:      FUN_7101f23030
// mangled:   
// signature: undefined __cdecl FUN_7101f23030(long * * * * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f23030(long ****param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long ****pppplVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long ***ppplVar8;
  long ****pppplVar9;
  int *piVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 local_70 [2];
  undefined **local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(int *)((long)param_1 + 0xc4) == 0) {
    (*(code *)(*param_1[0x1c])[0xe])(param_1[0x1c],1);
    (*(code *)(*param_1[0x1d])[0xc])(param_1[0x1d],1);
    (*(code *)(*param_1[0x1e])[0xe])(param_1[0x1e],0);
  }
  if (*(int *)((long)param_1[0x1d] + 0x25c) == 0) {
    if (*(int *)(param_1 + 0x1b) != 1) {
      lVar12 = 0x17160;
      do {
        puVar3 = (undefined4 *)((long)param_1 + lVar12);
        lVar12 = lVar12 + 0xb80;
        *puVar3 = 0;
        *(undefined1 *)(puVar3 + 0x2d) = 1;
        puVar3[0xb8] = 0;
        *(undefined1 *)(puVar3 + 0xe5) = 1;
        puVar3[0x170] = 0;
        *(undefined1 *)(puVar3 + 0x19d) = 1;
        puVar3[0x228] = 0;
        *(undefined1 *)(puVar3 + 0x255) = 1;
      } while ((long ****)(puVar3 + 0x2e0) != param_1 + 0x5c2c);
      *(undefined1 *)(param_1 + 0x5c40) = 0;
      *(undefined1 *)((long)param_1 + 0x2e2a4) = 1;
      *(undefined4 *)(param_1 + 0x1b) = 1;
      FUN_7101f2b8e0(param_1);
      pcVar4 = "mode_movie";
      if (*(int *)(param_1 + 0x1b) != 1) {
        pcVar4 = "mode_picture";
      }
      FUN_7103778300(0x3f800000,(long)(*param_1[0x1a])[2],(long)pcVar4);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar7 & 1) != 0)) {
        FUN_71024076d0(local_70,0x151ca6c028);
        if ((local_60 != 0) && ((DAT_7106dd53a8 == '\x01' && ((int)local_58 == DAT_7106dd53ac)))) {
          piVar10 = (int *)(local_60 + 0x38);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar6) {
              *piVar10 = *piVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
LAB_7101f23340:
        local_58 = 0x87650000000000;
        local_48 = 0xffffffffffffffff;
        uStack_40 = 0;
        local_70[0] = 0;
        local_38 = 0;
      }
LAB_7101f2336c:
      local_68 = &PTR_FUN_7104f73d50;
      local_60 = 0;
      local_50 = 0;
    }
LAB_7101f23374:
    (*(code *)(*param_1[0x1e])[0xe])(param_1[0x1e],0);
  }
  else if (*(int *)((long)param_1[0x1d] + 0x25c) == 1) {
    if (*(int *)(param_1 + 0x1b) != 2) {
      pppplVar9 = param_1 + 0x22;
      if (*(int *)(param_1 + 0x1b) != 1) {
        pppplVar9 = param_1 + 0x2e2c;
      }
      pppplVar2 = pppplVar9 + 0x2e00;
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
      } while (pppplVar9 != pppplVar2);
      *(undefined1 *)(param_1 + 0x5c40) = 0;
      *(undefined1 *)((long)param_1 + 0x2e2a4) = 1;
      *(undefined4 *)(param_1 + 0x1b) = 2;
      FUN_7101f2b8e0(param_1);
      pcVar4 = "mode_movie";
      if (*(int *)(param_1 + 0x1b) != 1) {
        pcVar4 = "mode_picture";
      }
      FUN_7103778300(0x3f800000,(long)(*param_1[0x1a])[2],(long)pcVar4);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') ||
         (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar7 & 1) == 0))
      goto LAB_7101f23340;
      FUN_71024076d0(local_70,0x151ca6c028);
      if (((local_60 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_58 == DAT_7106dd53ac)) {
        piVar10 = (int *)(local_60 + 0x38);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar6) {
            *piVar10 = *piVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      goto LAB_7101f2336c;
    }
    goto LAB_7101f23374;
  }
  if ((*(int *)(param_1 + 0x1b) == 1) && (*(char *)(param_1 + 0x5c3f) != '\0')) {
    if (*(int *)((long)param_1[0x1e] + 0x25c) == 2) {
      FUN_71032fffb0(*(long *)(DAT_710532f840 + 8),3);
      if (0x11 < *(int *)((long)param_1 + 0xbc)) {
        return;
      }
      uVar1 = *(int *)((long)param_1 + 0xbc) + 1;
      *(uint *)((long)param_1 + 0xbc) = uVar1;
      if (0x12 < uVar1) {
LAB_7101f23478:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar11 = 3;
    }
    else {
      ppplVar8 = param_1[0x1c];
      if (*(int *)(ppplVar8 + 0x57) == 2) {
        if (*(char *)((long)ppplVar8 + 700) == '\0') {
          return;
        }
      }
      else if (*(int *)(ppplVar8 + 0x57) != 1) {
        return;
      }
      (*(code *)(*ppplVar8)[0xe])(ppplVar8,0);
      (*(code *)(*param_1[0x1d])[0xc])(param_1[0x1d],0);
      (*(code *)(*param_1[0x1e])[0xe])(param_1[0x1e],1);
      uVar1 = *(uint *)((long)param_1 + 0xbc);
      if (0x12 < uVar1) goto LAB_7101f23478;
      uVar11 = 2;
    }
    *(undefined4 *)((long)param_1 + (long)(int)uVar1 * 4 + 0x70) = uVar11;
  }
  return;
}

