// addr:      7101cc3a00
// offset:    0x1cc3a00
// name:      FUN_7101cc3a00
// mangled:   
// signature: undefined __cdecl FUN_7101cc3a00(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cc3a00(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long ****pppplVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined **local_b28;
  ulong local_b20;
  undefined **local_b18;
  long *local_b10;
  undefined2 local_b08;
  undefined4 local_b04;
  undefined2 local_b00;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined5 uStack_ab0;
  undefined3 local_aab;
  undefined5 uStack_aa8;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined6 uStack_a48;
  undefined2 local_a42;
  undefined6 uStack_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined6 uStack_950;
  undefined2 local_94a;
  undefined6 uStack_948;
  undefined4 local_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_870;
  undefined1 local_868;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    lVar5 = param_1 + 0xf0;
    FUN_71037780e0(&local_b18,lVar5,(long ****)"front_black_out",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar3 = local_b10;
    plVar17 = (long *)local_b10[1];
    if (plVar17 == (long *)0x0) {
      local_b18 = &PTR_FUN_710523d9e8;
      local_b10 = (long *)0x0;
      if (plVar3 != (long *)0x0) goto LAB_7101cc3b68;
    }
    else {
      if ((char)local_b10[2] != '\0') {
        plVar18 = *(long **)(*local_b10 + 0x80);
        plVar1 = (long *)(*local_b10 + 0x88);
        if (plVar18 != plVar1) {
          do {
            while( true ) {
              uVar16 = (**(code **)(*(long *)plVar18[0xd] + 0x148))();
              if (((uVar16 & 1) != 0) &&
                 (uVar16 = (**(code **)(*plVar17 + 0x120))(plVar17,plVar18[0xd]), (uVar16 & 1) != 0)
                 ) {
                (**(code **)(*(long *)plVar18[0xd] + 0x178))();
                (**(code **)(*(long *)plVar18[0xd] + 0x140))((long *)plVar18[0xd],0);
              }
              plVar12 = (long *)plVar18[1];
              if ((long *)plVar18[1] == (long *)0x0) break;
              do {
                plVar18 = plVar12;
                plVar12 = (long *)*plVar18;
              } while ((long *)*plVar18 != (long *)0x0);
LAB_7101cc3b1c:
              if (plVar18 == plVar1) goto LAB_7101cc3b34;
            }
            plVar12 = plVar18 + 2;
            plVar15 = (long *)*plVar12;
            if ((long *)*plVar15 != plVar18) {
              do {
                lVar13 = *plVar12;
                plVar12 = (long *)(lVar13 + 0x10);
                plVar18 = (long *)*plVar12;
              } while (*plVar18 != lVar13);
              goto LAB_7101cc3b1c;
            }
            plVar18 = plVar15;
          } while (plVar15 != plVar1);
LAB_7101cc3b34:
          plVar17 = (long *)local_b10[1];
        }
      }
      (**(code **)(*plVar17 + 0x188))(plVar17);
LAB_7101cc3b68:
      local_b10 = (long *)0x0;
      local_b18 = &PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar3);
    }
    uVar16 = *(ulong *)(param_1 + 0x150);
    bVar4 = FUN_7103350ae0(*(long *)(DAT_710532f8f8 + 8),uVar16,param_3,param_4,param_5,param_6,
                           param_7,param_8);
    if (bVar4) {
      param_3 = (long *********)(param_1 + 0x110);
      uVar16 = FUN_7101cedc80(*(long *)(DAT_7105325cd0 + 8),uVar16,param_3,param_4,param_5,param_6,
                              param_7,param_8);
      *(byte *)(param_1 + 0x158) = (byte)uVar16 & 1;
      if ((uVar16 & 1) == 0) goto LAB_7101cc3bec;
      FUN_71037780e0(&local_b18,lVar5,(long ****)"bg_black_out",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_710377b140((long)&local_b18);
      plVar3 = local_b10;
      local_b18 = &PTR_FUN_710523d9e8;
      local_b10 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar3);
      }
    }
    else {
LAB_7101cc3bec:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xf8),0x71042d6393);
    }
    FUN_7103776910(&local_b18,lVar5,(long ****)"set_txt_header_txt",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_b18,"mnu_replay_play_next_txt_movie",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    plVar3 = local_b10;
    local_b18 = &PTR_FUN_710523d9a8;
    local_b10 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar3);
    }
    local_b04 = 0;
    local_b00 = 0;
    local_b08 = 0;
    uStack_aa8 = 0;
    local_ac0 = 0;
    uStack_a40 = 0;
    local_a98 = 0;
    local_a38 = 0;
    local_b18 = (undefined **)0x0;
    local_b10 = (long *)0x0;
    local_ab8 = 0;
    uStack_ab0 = 0;
    local_aab = 0;
    local_a50 = 0;
    uStack_a48 = 0;
    local_a42 = 0;
    local_a60 = 0;
    uStack_a58 = 0;
    local_a70 = 0;
    uStack_a68 = 0;
    local_a80 = 0;
    uStack_a78 = 0;
    local_a90 = 0;
    uStack_a88 = 0;
    local_980 = 0;
    uStack_978 = 0;
    local_990 = 0;
    uStack_988 = 0;
    local_9a0 = 0;
    uStack_998 = 0;
    local_9b0 = 0;
    uStack_9a8 = 0;
    local_9c0 = 0;
    uStack_9b8 = 0;
    local_9d0 = 0;
    uStack_9c8 = 0;
    local_9e0 = 0;
    uStack_9d8 = 0;
    local_9f0 = 0;
    uStack_9e8 = 0;
    local_a00 = 0;
    uStack_9f8 = 0;
    local_a10 = 0;
    uStack_a08 = 0;
    local_a20 = 0;
    uStack_a18 = 0;
    local_a30 = 0;
    uStack_a28 = 0;
    FUN_71004f5770(&local_a30);
    local_940 = 0;
    uStack_948 = 0;
    local_958 = 0;
    uStack_950 = 0;
    local_94a = 0;
    pppuVar9 = &local_b18;
    local_970 = 0;
    local_8a0 = 0;
    local_8a8 = 0;
    local_8b0 = 0;
    local_8b8 = 0;
    local_8c0 = 0;
    local_8c8 = 0;
    local_8d0 = 0;
    local_8d8 = 0;
    local_8e0 = 0;
    local_8e8 = 0;
    local_8f0 = 0;
    local_8f8 = 0;
    local_900 = 0;
    local_908 = 0;
    local_910 = 0;
    local_918 = 0;
    local_920 = 0;
    local_928 = 0;
    local_868 = 0;
    local_870 = 0;
    local_968 = 0;
    uStack_960 = 0;
    local_938 = 0;
    uStack_930 = 0;
    FUN_710334e6a0(*(long *)(DAT_710532f8f8 + 8),(int *)(param_1 + 0x148),pppuVar9);
    FUN_7103776910(&local_b28,lVar5,(long ****)"set_txt_header_titlename",pppuVar9,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a310((long)&local_b28,1);
    uVar16 = local_b20;
    local_b28 = &PTR_FUN_710523d9a8;
    local_b20 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
    lVar5 = nn::os::GetSystemTick();
    uVar7 = nn::os::ConvertToTimeSpan(lVar5 - DAT_71074470e8);
    *(undefined1 *)(param_1 + 0x170) = 0;
    uVar16 = ((long)uVar7 >> 0x20) * 0xe353f7cf + ((uVar7 & 0xffffffff) * 0xe353f7cf >> 0x20);
    *(long *)(param_1 + 0x160) =
         (((long)(((long)uVar7 >> 0x20) * 0x20c49ba5 + ((long)uVar16 >> 0x20) +
                 ((uVar7 & 0xffffffff) * 0x20c49ba5 + (uVar16 & 0xffffffff) >> 0x20)) >> 7) -
         ((long)uVar7 >> 0x3f)) * 1000;
    lVar5 = nn::os::GetSystemTick();
    uVar7 = nn::os::ConvertToTimeSpan(lVar5 - DAT_71074470e8);
    *(undefined1 *)(param_1 + 0x170) = 1;
    uVar16 = ((long)uVar7 >> 0x20) * 0xe353f7cf + ((uVar7 & 0xffffffff) * 0xe353f7cf >> 0x20);
    lVar5 = *(long *)(param_1 + 0x160);
    lVar13 = (((long)(((long)uVar7 >> 0x20) * 0x20c49ba5 + ((long)uVar16 >> 0x20) +
                     ((uVar7 & 0xffffffff) * 0x20c49ba5 + (uVar16 & 0xffffffff) >> 0x20)) >> 7) -
             ((long)uVar7 >> 0x3f)) * 1000;
    *(long *)(param_1 + 0x160) = lVar13;
    *(long *)(param_1 + 0x168) = (lVar13 - lVar5) + *(long *)(param_1 + 0x168);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042e732b);
  }
  uVar16 = *(ulong *)(param_1 + 0x168);
  if (*(char *)(param_1 + 0x170) == '\0') {
    lVar5 = nn::os::GetSystemTick();
    uVar6 = nn::os::ConvertToTimeSpan(lVar5 - DAT_71074470e8);
    uVar7 = ((long)uVar6 >> 0x20) * 0xe353f7cf + ((uVar6 & 0xffffffff) * 0xe353f7cf >> 0x20);
    uVar16 = (uVar16 + (((long)(((long)uVar6 >> 0x20) * 0x20c49ba5 + ((long)uVar7 >> 0x20) +
                               ((uVar6 & 0xffffffff) * 0x20c49ba5 + (uVar7 & 0xffffffff) >> 0x20))
                        >> 7) - ((long)uVar6 >> 0x3f)) * 1000) - *(long *)(param_1 + 0x160);
  }
  uVar11 = 0xb - (int)(uVar16 / 1000000000);
  uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
  pppplVar10 = (long ****)(ulong)uVar11;
  *(uint *)(param_1 + 0x178) = uVar11;
  FUN_710377a310(param_1 + 0x120,1);
  if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x69) == '\0') {
    uVar8 = extraout_x1;
    if (*(char *)(param_1 + 0x17c) != '\0') {
      lVar5 = *(long *)(DAT_7105325cc8 + 8);
      FUN_7101cd3060(lVar5,*(long *)(param_1 + 0x140),3);
      *(int *)(lVar5 + 0x26b0) = *(int *)(lVar5 + 0x26b0) + 1;
      lVar5 = nn::oe::GetProgramTotalActiveTime();
      uVar7 = lVar5 - *(long *)(param_1 + 0x130);
      uVar16 = ((long)uVar7 >> 0x20) * 0x26d694b3 + ((uVar7 & 0xffffffff) * 0x26d694b3 >> 0x20);
      *(ulong *)(param_1 + 0x130) = uVar7;
      uVar11 = (int)(((long)uVar7 >> 0x20) * 0x112e0be8 + ((long)uVar16 >> 0x20) +
                     ((uVar7 & 0xffffffff) * 0x112e0be8 + (uVar16 & 0xffffffff) >> 0x20) >> 0x1a) -
               (int)((long)uVar7 >> 0x3f);
      param_4 = (byte ****)(ulong)uVar11;
      pppplVar10 = (long ****)0x6;
      FUN_7101cd2890(*(long *)(DAT_7105325cb8 + 8),*(long *)(param_1 + 0x140),6,uVar11);
      uVar8 = extraout_x1_00;
    }
    *(undefined1 *)(param_1 + 0x17c) = 0;
    if (*(char *)(*(long *)(DAT_710532f8e8 + 8) + 0xc66) == '\0') {
      FUN_71032e5f40(*(long *)(DAT_710532f7c8 + 8),uVar8,pppplVar10,param_4,param_5,param_6,param_7,
                     param_8);
      uVar11 = *(uint *)(param_1 + 0xdc);
      if (0x12 < uVar11) goto LAB_7101cc4094;
      uVar14 = 5;
      goto LAB_7101cc406c;
    }
    cVar2 = *(char *)(*(long *)(DAT_710532f8e8 + 8) + 0xe8);
  }
  else {
    cVar2 = *(char *)(*(long *)(DAT_710532f8e8 + 8) + 0xe8);
  }
  if (cVar2 != '\0') {
    return;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xf8),0x71043e02ae);
  *(undefined8 *)(param_1 + 0x168) = 0;
  lVar5 = nn::os::GetSystemTick();
  uVar7 = nn::os::ConvertToTimeSpan(lVar5 - DAT_71074470e8);
  *(undefined1 *)(param_1 + 0x170) = 0;
  uVar16 = ((long)uVar7 >> 0x20) * 0xe353f7cf + ((uVar7 & 0xffffffff) * 0xe353f7cf >> 0x20);
  *(long *)(param_1 + 0x160) =
       (((long)(((long)uVar7 >> 0x20) * 0x20c49ba5 + ((long)uVar16 >> 0x20) +
               ((uVar7 & 0xffffffff) * 0x20c49ba5 + (uVar16 & 0xffffffff) >> 0x20)) >> 7) -
       ((long)uVar7 >> 0x3f)) * 1000;
  uVar11 = *(uint *)(param_1 + 0xdc);
  if (*(char *)(param_1 + 0x158) == '\0') {
    if (0x12 < uVar11) goto LAB_7101cc4094;
    uVar14 = 3;
  }
  else {
    if (0x12 < uVar11) {
LAB_7101cc4094:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar14 = 4;
  }
LAB_7101cc406c:
  *(undefined4 *)(param_1 + (long)(int)uVar11 * 4 + 0x90) = uVar14;
  return;
}

