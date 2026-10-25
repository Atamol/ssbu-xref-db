// addr:      7101d05660
// offset:    0x1d05660
// name:      FUN_7101d05660
// mangled:   
// signature: undefined __cdecl FUN_7101d05660(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d05660(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  uint uVar10;
  undefined ***pppuVar11;
  uint uVar13;
  long lVar14;
  undefined4 local_d8 [2];
  undefined **local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint local_98;
  uint local_94;
  undefined **local_90;
  long local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined **local_50;
  ulong local_48;
  undefined ***pppuVar12;
  
  if (*(int *)(param_1 + 0x2ac) != 0) goto LAB_7101d05a24;
  lVar14 = *(long *)(param_1 + 0x88);
  uVar10 = *(uint *)(param_1 + 0x138);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar14 + 0x80) + 0x10),0x71042a3254);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar14 + 0x80) + 0x10),0x710443335d);
  FUN_7103776910(&local_50,**(long **)(lVar14 + 0x80) + 8,(long ****)"set_txt_title_prog",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  iVar1 = *(int *)(*(long *)(DAT_7105329740 + 8) + 4);
  if (iVar1 - 1U == uVar10) {
    FUN_710377a120((long)&local_50,"mel_tournament_chart_round_title_final",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x17c281953d,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8), (uVar5 & 1) != 0)) {
      FUN_71024076d0(&local_98,0x17c281953d);
      if (((local_88 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_80 == DAT_7106dd53ac)) {
        piVar9 = (int *)(local_88 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = *piVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
LAB_7101d05850:
      local_80 = 0x87650000000000;
      local_70 = 0xffffffffffffffff;
      uStack_68 = 0;
      local_98 = 0;
      local_60 = 0;
    }
LAB_7101d0587c:
    local_90 = &PTR_FUN_7104f73d50;
    local_88 = 0;
    local_78 = 0;
  }
  else {
    if ((uVar10 != 0) && (iVar1 - 2U <= uVar10)) {
      FUN_710377a120((long)&local_50,"mel_tournament_chart_round_title_semifinal",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') ||
         (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1b955934fb,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar5 & 1) == 0))
      goto LAB_7101d05850;
      FUN_71024076d0(&local_98,0x1b955934fb);
      if (((local_88 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_80 == DAT_7106dd53ac)) {
        piVar9 = (int *)(local_88 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = *piVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_7101d0587c;
    }
    uVar8 = 1;
    param_4 = (byte ****)(ulong)(uVar10 + 1);
    FUN_710377a280((long)&local_50,(byte *)"mel_tournament_chart_round_title",1);
    FUN_71003a4ca0(&local_98,"vc_narration_round%d",(ulong)(uVar10 + 1),uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    if (local_94 == 0) {
      uVar5 = 0;
    }
    else {
      uVar10 = 0xffffffff;
      pppuVar12 = &local_90;
      do {
        pppuVar11 = (undefined ***)((long)pppuVar12 + 1);
        bVar2 = *(byte *)pppuVar12;
        uVar13 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar13 = (uint)bVar2;
        }
        uVar10 = (&DAT_7104754084)[(uVar13 ^ uVar10) & 0xff] ^ uVar10 >> 8;
        pppuVar12 = pppuVar11;
      } while (pppuVar11 < (undefined ***)((long)&local_90 + (ulong)local_94));
      uVar5 = (ulong)~uVar10;
    }
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      uVar5 = uVar5 | ((long)(int)local_94 & 0xffU) << 0x20;
      uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),uVar5,(long ****)&DAT_00000004,param_4,
                             param_5,param_6,param_7,param_8);
      if ((uVar6 & 1) == 0) goto LAB_7101d0599c;
      FUN_71024076d0(local_d8,uVar5);
      if (((local_c8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_c0 == DAT_7106dd53ac)) {
        piVar9 = (int *)(local_c8 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = *piVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
LAB_7101d0599c:
      local_c0 = 0x87650000000000;
      local_b0 = 0xffffffffffffffff;
      uStack_a8 = 0;
      local_d8[0] = 0;
      local_a0 = 0;
    }
    local_d0 = &PTR_FUN_7104f73d50;
    local_c8 = 0;
    local_b8 = 0;
  }
  uVar5 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  if (*(int *)(param_1 + 0x138) == *(int *)(*(long *)(DAT_7105329740 + 8) + 4) + -1) {
    FUN_71033145d0(DAT_710532f8d0,0xd9ffff1eb3ece83c,1,param_4,param_5,param_6,param_7,param_8);
  }
LAB_7101d05a24:
  lVar14 = *(long *)(*(long *)(**(long **)(*(long *)(param_1 + 0x88) + 0x80) + 0x10) + 8);
  if (((lVar14 == 0) ||
      (plVar7 = (long *)FUN_71037964b0(lVar14,0x710443335d), plVar7 == (long *)0x0)) ||
     (uVar5 = (**(code **)(*plVar7 + 0x138))(), (uVar5 & 1) != 0)) {
    if (0x12 < *(uint *)(param_1 + 0x2a4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4 + 600) = 4;
  }
  return;
}

