// addr:      710195fbf0
// offset:    0x195fbf0
// name:      FUN_710195fbf0
// mangled:   
// signature: undefined __cdecl FUN_710195fbf0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710195fbf0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char *pcVar2;
  undefined ***pppuVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar9;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  char cVar10;
  long lVar11;
  int *piVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined4 local_150 [2];
  undefined **local_148;
  long local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined **local_110;
  undefined2 local_108;
  undefined2 uStack_106;
  uint auStack_104 [2];
  ushort local_fc [24];
  undefined4 local_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined2 uStack_ae;
  uint uStack_ac;
  undefined4 local_a8;
  ushort uStack_a4;
  undefined2 uStack_a2;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),param_2,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar9 = extraout_x1_00;
    if (*(char *)(param_1 + 0x186) != '\0') {
      FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),extraout_x1_00,(long ****)param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      if (((*(char *)(param_1 + 0x185) != '\0') && (DAT_710532f7f0 != 0)) &&
         (*(char *)(*(long *)(DAT_710532f7f0 + 8) + 0x35) == '\0')) {
        FUN_71032eafc0(*(long *)(DAT_710532f7f0 + 8),0,(long ****)param_3,param_4,param_5,param_6,
                       param_7,param_8);
      }
      FUN_7101e0cff0(*(long *)(param_1 + 0x148),1,(ulong)*(byte *)(param_1 + 0x1a0),param_4,param_5,
                     param_6,param_7,param_8);
      if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      param_3 = (undefined **)(ulong)DAT_7105308354;
      param_4 = (byte ****)&DAT_71053083b0;
      FUN_7101e0d840(*(undefined ***)(*(long *)(param_1 + 0x148) + 0x80),DAT_7105308350,
                     (long ****)param_3,(byte ****)&DAT_71053083b0,param_5,param_6,param_7,param_8);
      *(undefined2 *)(param_1 + 0x17a) = DAT_7105308356;
      uVar9 = extraout_x1_01;
    }
    lVar15 = *(long *)(*(long *)(param_1 + 0x148) + 0x80);
    if (*(char *)(lVar15 + 0x597) != '\0') {
      FUN_7103775fa0((long *)**(undefined8 **)(lVar15 + 0x4d0),uVar9,(long ****)param_3,param_4,
                     param_5,param_6,param_7,param_8);
      uVar9 = extraout_x1_02;
    }
    *(undefined1 *)(lVar15 + 0x597) = 0;
    if (*(char *)(param_1 + 0x187) == '\0') {
      if (*(char *)(param_1 + 0x186) == '\0') {
        FUN_7101e18230(*(long *)(*(long *)(param_1 + 0x150) + 0x80),1,(long ****)param_3,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_7101d90fe0(*(long *)(param_1 + 0x168),extraout_x1_06,param_3,param_4,param_5,param_6,
                       param_7,param_8);
        goto LAB_7101960338;
      }
    }
    else {
      FUN_7101d90fe0(*(long *)(param_1 + 0x160),uVar9,param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
    local_108 = 0xffff;
    local_110 = (undefined **)0xffffffffffffffff;
    auStack_104[0] = 0;
    auStack_104[1] = 0;
    local_fc[0] = 0;
    local_cc = 0xffffffff;
    uStack_c8 = uStack_c8 & 0xffffff00;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uVar4 = *(ushort *)(param_1 + 0x17a);
    if ((ulong)uVar4 != 0xffff) {
      pppuVar3 = (undefined ***)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar4 * 0x54 + 0x86c40);
      if (0x62 < uVar4) {
        pppuVar3 = (undefined ***)&DAT_710532a8c8;
      }
      local_110 = *pppuVar3;
      local_108 = *(undefined2 *)(pppuVar3 + 1);
      if (&local_110 != pppuVar3) {
        FUN_7101696040(auStack_104,(ushort *)((long)pppuVar3 + 0x14));
      }
      uStack_c4 = (undefined4)((ulong)*(undefined8 *)((long)pppuVar3 + 0x49) >> 0x18);
      uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)pppuVar3 + 0x49) >> 0x38);
      local_cc = (undefined4)*(undefined8 *)((long)pppuVar3 + 0x44);
      uStack_c8 = (uint)((ulong)*(undefined8 *)((long)pppuVar3 + 0x44) >> 0x20);
    }
    FUN_7101e18230(*(long *)(*(long *)(param_1 + 0x150) + 0x80),1,(long ****)param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    lVar15 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80);
    lVar18 = *(long *)(param_1 + 0x150);
    pcVar2 = (char *)(lVar15 + 0x11b4);
    lVar16 = *(long *)(lVar18 + 0x80);
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
    }
    lVar15 = *(long *)(lVar15 + 0x2268);
    if ((lVar15 != 0) && (lVar14 = *(long *)(lVar15 + 0x1b8), lVar14 != 0)) {
      lVar11 = lVar15 + 0x1b8;
      do {
        if (2 < *(int *)(lVar14 + 0x20)) {
          lVar11 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < 3) * 8);
      } while (lVar14 != 0);
      if (((lVar11 != lVar15 + 0x1b8) && (*(int *)(lVar11 + 0x20) < 4)) &&
         (plVar17 = *(long **)(lVar11 + 0x28), plVar17 != (long *)0x0)) {
        (**(code **)(*plVar17 + 0x1f8))(plVar17,1);
        param_3 = (undefined **)0x0;
        (**(code **)(*plVar17 + 0x388))(plVar17,0);
      }
    }
    FUN_71037760f0(*(long *)**(undefined8 **)(lVar16 + 0x150),0);
    *(undefined8 *)(lVar16 + 0x20) = 0;
    *(undefined8 *)(lVar16 + 0x28) = 0;
    *(undefined8 *)(lVar16 + 0x134) = 0;
    *(undefined8 *)(lVar16 + 300) = 0;
    *(undefined8 *)(lVar16 + 0x124) = 0;
    *(undefined8 *)(lVar16 + 0x11c) = 0;
    *(undefined8 *)(lVar16 + 0x114) = 0;
    *(undefined8 *)(lVar16 + 0x10c) = 0;
    *(undefined8 *)(lVar16 + 0x104) = 0;
    *(undefined4 *)(lVar16 + 0x13c) = 0;
    *(undefined8 *)(lVar16 + 0xfc) = 0;
    *(undefined8 *)(lVar16 + 0xf4) = 0;
    *(undefined8 *)(lVar16 + 0x140) = 0xffffffff;
    *(undefined4 *)(lVar16 + 0x148) = 0xffffffff;
    *(undefined4 *)(lVar16 + 0xf0) = 1;
    *(undefined1 *)(lVar16 + 0x14c) = 0;
    FUN_7102529a70(lVar16 + 0x1a0,(long)&local_110);
    *(undefined2 *)(lVar16 + 0x1f0) = local_108;
    *(undefined ***)(lVar16 + 0x1e8) = local_110;
    uVar9 = extraout_x1_03;
    if ((undefined ***)(lVar16 + 0x1e8) != &local_110) {
      FUN_7101696040((uint *)(lVar16 + 500),local_fc);
      uVar9 = extraout_x1_04;
    }
    *(ulong *)(lVar16 + 0x231) = CONCAT17(uStack_c0,CONCAT43(uStack_c4,uStack_c8._1_3_));
    *(ulong *)(lVar16 + 0x22c) = CONCAT44(uStack_c8,local_cc);
    *(undefined2 *)(lVar16 + 0x261) = 0;
    local_b0 = 0xffff;
    local_b8 = (long ***)0xffffffffffffffff;
    uStack_ac = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    local_74 = 0xffffffff;
    local_70 = local_70 & 0xffffff00;
    uStack_6c = 0;
    uStack_68 = 0;
    *(undefined2 *)(lVar16 + 0x280) = 0xffff;
    *(undefined8 *)(lVar16 + 0x278) = 0xffffffffffffffff;
    if ((undefined8 *)(lVar16 + 0x278) != &local_b8) {
      FUN_7101696040((uint *)(lVar16 + 0x284),&uStack_a4);
      uVar9 = extraout_x1_05;
    }
    *(undefined4 *)(lVar16 + 700) = local_74;
    *(undefined1 *)(lVar16 + 0x2c8) = uStack_68;
    *(ulong *)(lVar16 + 0x2c0) = CONCAT44(uStack_6c,local_70);
    FUN_7101e134d0(lVar16,uVar9,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)(lVar18 + 0x70) = 0;
    if (*(char *)(param_1 + 0x186) != '\0') {
      if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0))
      {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      lVar16 = *(long *)(*(long *)(param_1 + 0x150) + 0x80);
      lVar15 = lVar16 + 0x1a0;
      if (DAT_7105308358._2_2_ == 0xffff) {
        *(undefined8 *)(lVar16 + 0x1a8) = 0xffffffffffffffff;
        *(undefined2 *)(lVar16 + 0x1b4) = 0;
        *(undefined4 *)(lVar16 + 0x1b0) = 0;
        *(undefined4 *)(lVar16 + 0x1b6) = 0xffff;
        cVar10 = -1;
        *(undefined1 *)(lVar16 + 0x1ba) = 0;
      }
      else {
        cVar10 = *(char *)(lVar16 + 0x1b6);
        if (cVar10 == -1) {
          if (*(char *)(lVar16 + 0x1b7) == -1) {
            *(undefined1 *)(lVar16 + 0x1ba) = 0;
            *(undefined1 *)(lVar16 + 0x1b6) = 0;
            FUN_7101e17be0(lVar16,(uint)DAT_7105308358._2_2_,param_3,param_4,param_5,param_6,param_7
                           ,param_8);
            if ((*(char *)(lVar16 + 0x1b6) == -1) &&
               (cVar10 = *(char *)(lVar16 + 0x1b7), cVar10 == -1)) goto LAB_71019601ec;
            *(undefined2 *)(lVar16 + 0x1b6) = 0xffff;
          }
          cVar10 = -1;
        }
      }
LAB_71019601ec:
      if (DAT_7105308358._4_2_ == 0xffff) {
        FUN_710252a950(lVar15,0);
      }
      else if ((cVar10 == -1) && (*(char *)(lVar16 + 0x1b7) == -1)) {
        *(undefined1 *)(lVar16 + 0x1ba) = 0;
        *(undefined1 *)(lVar16 + 0x1b7) = 0;
        FUN_7101e17d60(lVar16,(uint)DAT_7105308358._4_2_,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        if ((*(char *)(lVar16 + 0x1b6) != -1) || (*(char *)(lVar16 + 0x1b7) != -1)) {
          *(undefined2 *)(lVar16 + 0x1b6) = 0xffff;
        }
      }
      if (DAT_7105308358._6_2_ == 0xffff) {
        FUN_710252a950(lVar15,1);
      }
      else if ((*(char *)(lVar16 + 0x1b6) == -1) && (*(char *)(lVar16 + 0x1b7) == -1)) {
        *(undefined1 *)(lVar16 + 0x1ba) = 0;
        *(undefined1 *)(lVar16 + 0x1b7) = 1;
        FUN_7101e17d60(lVar16,(uint)DAT_7105308358._6_2_,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        if ((*(char *)(lVar16 + 0x1b6) != -1) || (*(char *)(lVar16 + 0x1b7) != -1)) {
          *(undefined2 *)(lVar16 + 0x1b6) = 0xffff;
        }
      }
      if (DAT_7105308360 == 0xffff) {
        FUN_710252a950(lVar15,2);
      }
      else if ((*(char *)(lVar16 + 0x1b6) == -1) && (*(char *)(lVar16 + 0x1b7) == -1)) {
        *(undefined1 *)(lVar16 + 0x1ba) = 0;
        *(undefined1 *)(lVar16 + 0x1b7) = 2;
        FUN_7101e17d60(lVar16,(uint)DAT_7105308360,param_3,param_4,param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar16 + 0x1b6) != -1) || (*(char *)(lVar16 + 0x1b7) != -1)) {
          *(undefined2 *)(lVar16 + 0x1b6) = 0xffff;
        }
      }
    }
    *(undefined2 *)(param_1 + 0x186) = 0;
LAB_7101960338:
    *(undefined1 *)(*(long *)(param_1 + 0x150) + 0x70) = 0;
    return;
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x150) + 0x80);
  if (*(int *)(lVar15 + 0x140) == 9) {
    if (*(char *)(lVar15 + 0x260) == '\0') {
      if (*(char *)(lVar15 + 0x260) != '\0') goto LAB_71019600b8;
      *(undefined2 *)(param_1 + 0x17a) = 0xffff;
      FUN_71032e5d80(*(long *)(DAT_710532f7c8 + 8),param_2,(long ****)param_3,param_4,param_5,
                     param_6,param_7,param_8);
      *(undefined1 *)(param_1 + 0x188) = 1;
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1053dffe8c,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar8 & 1) != 0)) {
        FUN_71024076d0(local_150,0x1053dffe8c);
        if (((local_140 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_138 == DAT_7106dd53ac))
        {
          piVar12 = (int *)(local_140 + 0x38);
          do {
            cVar10 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = *piVar12 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
      }
      else {
        local_138 = 0x87650000000000;
        local_128 = 0xffffffffffffffff;
        uStack_120 = 0;
        local_150[0] = 0;
        local_118 = 0;
      }
      local_148 = &PTR_FUN_7104f73d50;
      local_140 = 0;
      local_130 = 0;
      uVar1 = *(uint *)(param_1 + 0x134);
      if (0x12 < uVar1) goto LAB_7101960614;
      uVar13 = 1;
      goto LAB_7101960548;
    }
    local_b8 = *(long ****)(lVar15 + 0x1e8);
    local_b0 = *(undefined2 *)(lVar15 + 0x1f0);
    uStack_ac = 0;
    FUN_7101696040(&uStack_ac,(ushort *)(lVar15 + 0x1fc));
    uStack_6c = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x231) >> 0x18);
    uStack_68 = (undefined1)((ulong)*(undefined8 *)(lVar15 + 0x231) >> 0x38);
    local_74 = (undefined4)*(undefined8 *)(lVar15 + 0x22c);
    local_70 = (uint)((ulong)*(undefined8 *)(lVar15 + 0x22c) >> 0x20);
    uVar9 = extraout_x1;
    if (local_b8._2_2_ != -1) {
      if (*(ushort *)(param_1 + 0x17a) == 0xffff) {
        uVar8 = FUN_71025256e0(*(long *)(*DAT_7105329f98 + 0x30),(long)&local_b8);
        auVar19 = FUN_7101e0db00(*(long *)(*(long *)(param_1 + 0x148) + 0x80),(ushort)uVar8,
                                 (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        param_3 = (undefined **)&local_b8;
        auVar19 = FUN_7102523c30(*(long *)(*DAT_7105329f98 + 0x30),*(ushort *)(param_1 + 0x17a),
                                 (long)param_3);
      }
      FUN_71025272f0(auVar19._0_8_,auVar19._8_8_,(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar9 = extraout_x1_07;
    }
    FUN_7101e0d710(*(undefined ***)(*(long *)(param_1 + 0x148) + 0x80),uVar9,param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    *(undefined2 *)(param_1 + 0x17a) = 0xffff;
    FUN_71032e5d80(*(long *)(DAT_710532f7c8 + 8),extraout_x1_08,(long ****)param_3,param_4,param_5,
                   param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x188) = 1;
    if (0x12 < *(uint *)(param_1 + 0x134)) goto LAB_7101960614;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 1;
  }
  else {
LAB_71019600b8:
    if (*(char *)(lVar15 + 0x261) != '\0') {
      if (0x12 < *(uint *)(param_1 + 0x134)) goto LAB_7101960614;
      lVar15 = param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4;
      uVar13 = 5;
      goto LAB_7101960570;
    }
    if (*(char *)(lVar15 + 0x262) != '\0') {
      FUN_7103776640(&local_110,lVar15 + 0x160,(byte ****)"set_parts_det_key_03",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      uVar8 = CONCAT44(auStack_104[0],CONCAT22(uStack_106,local_108));
      FUN_7103778300(0x3f800000,uVar8,0x71042a357e);
      local_110 = &PTR_FUN_710523d988;
      local_108 = 0;
      uStack_106 = 0;
      auStack_104[0] = 0;
      if (uVar8 != 0) {
        uVar7 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar8);
      }
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,(long ****)&DAT_00000004,
                                 param_4,param_5,param_6,param_7,param_8), (uVar8 & 1) != 0)) {
        FUN_71024076d0((undefined4 *)&local_b8,0xf57a523f5);
        if (((CONCAT26(uStack_a2,CONCAT24(uStack_a4,local_a8)) != 0) && (DAT_7106dd53a8 == '\x01'))
           && ((int)local_a0 == DAT_7106dd53ac)) {
          piVar12 = (int *)(CONCAT26(uStack_a2,CONCAT24(uStack_a4,local_a8)) + 0x38);
          do {
            cVar10 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = *piVar12 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
      }
      else {
        local_98 = 0;
        local_a0 = 0x87650000000000;
        local_90 = 0xffffffffffffffff;
        uStack_88 = 0;
        local_b8 = (long ***)((ulong)local_b8 & 0xffffffff00000000);
        local_80 = 0;
      }
      uStack_ac = 0x71;
      uStack_ae = 0x4f7;
      local_b0 = 0x3d50;
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a2 = 0;
      if (*(uint *)(param_1 + 0x134) < 0x13) {
        lVar15 = param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4;
        uVar13 = 6;
        goto LAB_7101960570;
      }
      goto LAB_7101960614;
    }
    iVar6 = *(int *)(lVar15 + 0x198);
    *(int *)(param_1 + 0x180) = iVar6;
    if (iVar6 == 0) {
      return;
    }
    FUN_71032e5d80(*(long *)(DAT_710532f7c8 + 8),param_2,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    if (0x11 < *(int *)(param_1 + 0x134)) {
      return;
    }
    uVar1 = *(int *)(param_1 + 0x134) + 1;
    *(uint *)(param_1 + 0x134) = uVar1;
    if (0x12 < uVar1) goto LAB_7101960614;
    uVar13 = 3;
LAB_7101960548:
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0xe8) = uVar13;
  }
  if (0x11 < *(int *)(param_1 + 0x134)) {
    return;
  }
  uVar1 = *(int *)(param_1 + 0x134) + 1;
  *(uint *)(param_1 + 0x134) = uVar1;
  if (0x12 < uVar1) {
LAB_7101960614:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar15 = param_1 + (long)(int)uVar1 * 4;
  uVar13 = 8;
LAB_7101960570:
  *(undefined4 *)(lVar15 + 0xe8) = uVar13;
  return;
}

