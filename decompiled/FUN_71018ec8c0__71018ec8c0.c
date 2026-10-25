// addr:      71018ec8c0
// offset:    0x18ec8c0
// name:      FUN_71018ec8c0
// mangled:   
// signature: undefined __cdecl FUN_71018ec8c0(long param_1, undefined8 param_2, ClockSnapshot * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_71018ec8c0(long param_1,undefined8 param_2,ClockSnapshot *param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar10;
  undefined8 extraout_x1_02;
  undefined **ppuVar11;
  byte ****ppppbVar12;
  long lVar13;
  int *piVar14;
  undefined8 *puVar15;
  short *psVar16;
  void *__src;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  undefined4 local_250 [2];
  undefined **local_248;
  long local_240;
  undefined8 local_238;
  undefined1 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined **local_210;
  ulong local_208;
  undefined4 local_140 [2];
  undefined **local_138;
  long local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long local_70 [2];
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_71018edb50(param_1);
    lVar19 = *(long *)(*(long *)(param_1 + 0x148) + 0x80);
    uVar10 = extraout_x1;
    if (*(int *)(lVar19 + 8) != -1) {
      puVar15 = *(undefined8 **)(lVar19 + 0x18);
      *(undefined4 *)(lVar19 + 8) = 0xffffffff;
      if (puVar15 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        FUN_7103375760(puVar15);
        FUN_710392eb40((ulong)puVar15);
        uVar10 = extraout_x1_00;
      }
      puVar15 = *(undefined8 **)(lVar19 + 0x10);
      if (puVar15 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        puVar17 = (undefined8 *)*puVar15;
        *puVar15 = 0;
        if (puVar17 != (undefined8 *)0x0) {
          FUN_7103773770(puVar17,uVar10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
          FUN_710392eb40((ulong)puVar17);
        }
        FUN_710392eb40((ulong)puVar15);
        uVar10 = extraout_x1_01;
      }
    }
    lVar19 = *(long *)(param_1 + 0x128);
    lVar13 = *(long *)(lVar19 + 0x80);
    uVar7 = *(uint *)(lVar13 + 0x50);
    if (uVar7 != 0xffffffff) {
      if (9 < uVar7) goto LAB_71018ed504;
      FUN_7101d96e80(*(long *)(lVar13 + (long)(int)uVar7 * 0x10 + 0x78),0,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar10 = extraout_x1_02;
    }
    FUN_7103775fa0((long *)**(undefined8 **)(lVar13 + 0x10),uVar10,(long ****)param_3,param_4,
                   param_5,param_6,param_7,param_8);
    *(undefined1 *)(lVar13 + 0x4c) = 0;
    *(undefined1 *)(lVar19 + 0x70) = 1;
    lVar19 = *(long *)(*DAT_7105329f98 + 0x10);
    if (*(char *)(lVar19 + 0x10) == '\x03') {
      lVar13 = 0;
    }
    else if (*(char *)(lVar19 + 0x50) == '\x03') {
      lVar13 = 1;
    }
    else if (*(char *)(lVar19 + 0x90) == '\x03') {
      lVar13 = 2;
    }
    else if (*(char *)(lVar19 + 0xd0) == '\x03') {
      lVar13 = 3;
    }
    else if (*(char *)(lVar19 + 0x110) == '\x03') {
      lVar13 = 4;
    }
    else if (*(char *)(lVar19 + 0x150) == '\x03') {
      lVar13 = 5;
    }
    else if (*(char *)(lVar19 + 400) == '\x03') {
      lVar13 = 6;
    }
    else if (*(char *)(lVar19 + 0x1d0) == '\x03') {
      lVar13 = 7;
    }
    else if (*(char *)(lVar19 + 0x210) == '\x03') {
      lVar13 = 8;
    }
    else {
      if (*(char *)(lVar19 + 0x250) != '\x03') goto LAB_71018ec8ec;
      lVar13 = 9;
    }
    lVar19 = *(long *)(lVar19 + lVar13 * 0x40 + 8);
    if ((*(char *)(lVar19 + 8) != '\0') &&
       (((*(char *)(lVar19 + 0xec) != '\0' || (*(long *)(lVar19 + 0x78) != *(long *)(lVar19 + 0x70))
         ) && ((*(ulong *)(lVar19 + 0x28) & 0xffffffffff) != 0x1e3d9517e5)))) {
      param_3 = (ClockSnapshot *)0x1;
      FUN_71033145d0(DAT_710532f8d0,*(ulong *)(lVar19 + 0x28),1,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
LAB_71018ec8ec:
  lVar19 = *(long *)(*DAT_7105329f98 + 0x10);
  if (*(char *)(lVar19 + 0x10) == '\x03') {
    lVar13 = 0;
LAB_71018ecb24:
    __src = *(void **)(lVar19 + lVar13 * 0x40 + 0x20);
    local_70[0] = 0;
    nn::time::ClockSnapshot::ClockSnapshot((ClockSnapshot *)local_140);
    nn::time::ClockSnapshot::ClockSnapshot((ClockSnapshot *)&local_210);
    memcpy(local_140,__src,0xd0);
    memcpy(&local_210,(void *)(lVar19 + 0x2a0),0xd0);
    param_3 = (ClockSnapshot *)&local_210;
    uVar9 = nn::time::CalculateSpanBetween((TimeSpan *)local_70,(ClockSnapshot *)local_140,param_3);
    uVar20 = 0;
    if ((-1 < local_70[0]) && ((uVar9 & 1) != 0)) {
      lVar19 = *(long *)((long)__src + 0xd0);
      uVar20 = 0;
      if (local_70[0] <= lVar19) {
        uVar20 = lVar19 - local_70[0];
      }
    }
    uVar9 = (uVar20 >> 0x20) * 0x26d694b3 + ((uVar20 & 0xffffffff) * 0x26d694b3 >> 0x20);
    uVar20 = (uVar20 >> 0x20) * 0x112e0be8 + (uVar9 >> 0x20) +
             ((uVar20 & 0xffffffff) * 0x112e0be8 + (uVar9 & 0xffffffff) >> 0x20) >> 0x1a;
  }
  else {
    if (*(char *)(lVar19 + 0x50) == '\x03') {
      lVar13 = 1;
      goto LAB_71018ecb24;
    }
    if (*(char *)(lVar19 + 0x90) == '\x03') {
      lVar13 = 2;
      goto LAB_71018ecb24;
    }
    if (*(char *)(lVar19 + 0xd0) == '\x03') {
      lVar13 = 3;
      goto LAB_71018ecb24;
    }
    if (*(char *)(lVar19 + 0x110) == '\x03') {
      lVar13 = 4;
      goto LAB_71018ecb24;
    }
    if (*(char *)(lVar19 + 0x150) == '\x03') {
      lVar13 = 5;
      goto LAB_71018ecb24;
    }
    if (*(char *)(lVar19 + 400) == '\x03') {
      lVar13 = 6;
      goto LAB_71018ecb24;
    }
    if (*(char *)(lVar19 + 0x1d0) == '\x03') {
      lVar13 = 7;
      goto LAB_71018ecb24;
    }
    if (*(char *)(lVar19 + 0x210) == '\x03') {
      lVar13 = 8;
      goto LAB_71018ecb24;
    }
    if (*(char *)(lVar19 + 0x250) == '\x03') {
      lVar13 = 9;
      goto LAB_71018ecb24;
    }
    uVar20 = 0;
  }
  lVar19 = *(long *)(*(long *)(param_1 + 0x130) + 0x80);
  iVar8 = (int)((uVar20 & 0xffffffff) / 0x3c);
  iVar18 = (int)uVar20;
  uVar7 = iVar18 + iVar8 * -0x3c;
  uVar4 = iVar8 + (int)((uVar20 & 0xffffffff) / 0xe10) * -0x3c;
  FUN_7103776910(&local_210,lVar19 + 0x160,(long ****)"set_txt_time",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  if (uVar4 == 0) {
    ppuVar11 = (undefined **)0x1;
    ppppbVar12 = (byte ****)(ulong)uVar7;
    FUN_710377a280((long)&local_210,(byte *)"mnu_spirits_challengeboard_detail_time_02",1);
    cVar1 = *(char *)(lVar19 + 0x1b8);
joined_r0x0071018ecc70:
    if (cVar1 == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(lVar19 + 0x168),0x71042b474b);
      *(undefined1 *)(lVar19 + 0x1b8) = 1;
    }
  }
  else {
    ppppbVar12 = (byte ****)((uVar20 & 0xffffffff) / 0xe10);
    ppuVar11 = (undefined **)0x3;
    param_5 = (long ****)(ulong)uVar4;
    param_6 = (ulong)uVar7;
    FUN_710377a280((long)&local_210,(byte *)"mnu_spirits_challengeboard_detail_time_01",3);
    cVar1 = *(char *)(lVar19 + 0x1b8);
    if (uVar4 < 5) goto joined_r0x0071018ecc70;
    if (cVar1 != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(lVar19 + 0x168),0x7104401972);
      *(undefined1 *)(lVar19 + 0x1b8) = 0;
    }
  }
  if (((*(uint *)(lVar19 + 0x118) & 0xfffffffe) == 2) && (*(int *)(lVar19 + 0x1bc) != iVar18)) {
    if (((uVar4 == 0) && (uVar7 < 0xb || uVar7 == 0x1e)) || ((uVar7 == 0 && (uVar4 == 1)))) {
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        ppuVar11 = (undefined **)&DAT_00000004;
        uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1b8a0fb9da,(long ****)&DAT_00000004,
                                ppppbVar12,param_5,param_6,param_7,param_8);
        if ((uVar20 & 1) == 0) goto LAB_71018ecd84;
        FUN_71024076d0(local_140,0x1b8a0fb9da);
        if (((local_130 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_128 == DAT_7106dd53ac))
        {
          piVar14 = (int *)(local_130 + 0x38);
          do {
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar5) {
              *piVar14 = *piVar14 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_71018ecd84:
        local_128 = 0x87650000000000;
        local_118 = 0xffffffffffffffff;
        uStack_110 = 0;
        local_140[0] = 0;
        local_108 = 0;
      }
      local_138 = &PTR_FUN_7104f73d50;
      local_130 = 0;
      local_120 = 0;
    }
  }
  uVar20 = local_208;
  *(int *)(lVar19 + 0x1bc) = iVar18;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = 0;
  if (uVar20 != 0) {
    FUN_710392eb40(uVar20);
  }
  lVar19 = *(long *)(*(long *)(param_1 + 0x130) + 0x80);
  iVar8 = *(int *)(lVar19 + 0x118);
  if (iVar8 - 2U < 3) {
    if (*(char *)(*(long *)(lVar19 + 0x1b0) + 0x280) != '\0') {
      lVar19 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
      if (*(char *)(lVar19 + 0xc9) == '\0') {
        iVar8 = 4;
      }
      else {
        iVar8 = 0;
      }
      ppuVar11 = (undefined **)0x0;
      FUN_7103771be0((long *)(lVar19 + 0x2260),iVar8,0);
      *(undefined4 *)(lVar19 + 0x2270) = *(undefined4 *)(*(long *)(lVar19 + 0x2260) + 0x25c);
    }
  }
  else {
    if (iVar8 == 6) {
      *(undefined4 *)(param_1 + 0x118) = 1;
      if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0))
      {
        FUN_7101764000();
        ppuVar11 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      uVar7 = (**(code **)(**(long **)(param_1 + 0x130) + 0x20))();
      if (uVar7 != 0xffffffff) {
        puVar15 = &DAT_7105339830;
        if ((((9 < uVar7) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
            (puVar15 = (undefined8 *)(&DAT_7105339860)[(int)uVar7], puVar15 != (undefined8 *)0x0))
           && (uVar4 = *(int *)(puVar15[2] + 0x9c) - 1, uVar4 < 7)) {
          DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar4 * 4);
        }
        DAT_7105307b68._0_4_ = uVar7;
        if (DAT_710593ba90 != (long *)0x0) {
          *(uint *)(*DAT_710593ba90 + 0x3ac) = DAT_7105307b68._4_4_;
        }
        if (DAT_710532f7f0 != 0) {
          FUN_7101afe3e0(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80),
                         DAT_7105307b68._4_4_,(long ****)ppuVar11,ppppbVar12,param_5,param_6,param_7
                         ,param_8);
        }
      }
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        ppuVar11 = (undefined **)&DAT_00000004;
        uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,(long ****)&DAT_00000004,
                                ppppbVar12,param_5,param_6,param_7,param_8);
        if ((uVar20 & 1) == 0) goto LAB_71018ecffc;
        FUN_71024076d0(local_250,0xf57a523f5);
        if (((local_240 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_238 == DAT_7106dd53ac))
        {
          piVar14 = (int *)(local_240 + 0x38);
          do {
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar5) {
              *piVar14 = *piVar14 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_71018ecffc:
        local_238 = 0x87650000000000;
        local_228 = 0xffffffffffffffff;
        uStack_220 = 0;
        local_250[0] = 0;
        local_218 = 0;
      }
      local_248 = &PTR_FUN_7104f73d50;
      local_240 = 0;
      local_230 = 0;
    }
    else {
      if ((*(char *)(param_1 + 0x15c) == '\0') || (iVar8 != 7)) goto LAB_71018ed2d8;
      *(undefined4 *)(param_1 + 0x118) = 2;
      bVar2 = *(byte *)(*(long *)(*DAT_7105329f98 + 0x10) + 0x290);
      if (bVar2 != 0) {
        uVar7 = bVar2 - 1;
        if (uVar7 < 0x10) {
          if (bVar2 < 0xe) {
            if (0xc < (uVar7 & 0xff)) goto LAB_71018ed504;
            lVar19 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8);
            cVar1 = *(char *)(lVar19 + ((ulong)uVar7 & 0xff));
            if (cVar1 != '\0') {
              *(char *)(lVar19 + ((ulong)uVar7 & 0xff)) = cVar1 + -1;
            }
          }
          else if ((byte)(bVar2 - 0xe) != 0xff) {
            if (2 < (byte)(bVar2 - 0xe)) goto LAB_71018ed504;
            psVar16 = (short *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) +
                                (ulong)(byte)(bVar2 - 0xe) * 2 + 0xe);
            sVar3 = *psVar16;
            if (sVar3 != 0) {
              *psVar16 = sVar3 + -1;
            }
          }
        }
        lVar19 = DAT_710532f730;
        plVar6 = DAT_7105314510;
        puVar15 = *(undefined8 **)(*DAT_7105314510 + 0x248);
        lVar13 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x348);
        uVar20 = FUN_71032673c0(lVar13,0x145277fecc);
        uVar20 = FUN_7103267ce0(lVar13,uVar20);
        uVar7 = (uint)uVar20;
        if (0x94 < (uint)uVar20) {
          uVar7 = 0x95;
        }
        iVar8 = *(int *)(*(long *)*puVar15 + (ulong)uVar7 * 4 + 0x4c);
        lVar19 = *(long *)(*(long *)(lVar19 + 8) + 0x348);
        puVar15 = *(undefined8 **)(*plVar6 + 0x248);
        uVar20 = FUN_71032673c0(lVar19,0x145277fecc);
        uVar20 = FUN_7103267ce0(lVar19,uVar20);
        uVar7 = (uint)uVar20;
        if (0x94 < uVar7) {
          uVar7 = 0x95;
        }
        *(int *)(*(long *)*puVar15 + (ulong)uVar7 * 4 + 0x4c) = iVar8 + 1;
        lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x348);
        uVar20 = FUN_71032673c0(lVar19,0x145277fecc);
        ppuVar11 = (undefined **)0x0;
        uVar20 = FUN_7103267960(lVar19,uVar20);
        puVar15 = *(undefined8 **)(*DAT_7105314510 + 0x248);
        lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x348);
        uVar9 = FUN_71032673c0(lVar19,0x145277fecc);
        uVar9 = FUN_7103267ce0(lVar19,uVar9);
        uVar7 = (uint)uVar9;
        if (0x94 < uVar7) {
          uVar7 = 0x95;
        }
        if ((uint)uVar20 <= *(uint *)(*(long *)*puVar15 + (ulong)uVar7 * 4 + 0x4c)) {
          FUN_710177a5c0(0x39);
        }
      }
      uVar7 = (**(code **)(**(long **)(param_1 + 0x140) + 0x20))();
      if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0))
      {
        FUN_7101764000();
        ppuVar11 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (uVar7 != 0xffffffff) {
        puVar15 = &DAT_7105339830;
        if ((((9 < uVar7) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
            (puVar15 = (undefined8 *)(&DAT_7105339860)[(int)uVar7], puVar15 != (undefined8 *)0x0))
           && (uVar4 = *(int *)(puVar15[2] + 0x9c) - 1, uVar4 < 7)) {
          DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar4 * 4);
        }
        DAT_7105307b68._0_4_ = uVar7;
        if (DAT_710593ba90 != (long *)0x0) {
          *(uint *)(*DAT_710593ba90 + 0x3ac) = DAT_7105307b68._4_4_;
        }
        if (DAT_710532f7f0 != 0) {
          FUN_7101afe3e0(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80),
                         DAT_7105307b68._4_4_,(long ****)ppuVar11,ppppbVar12,param_5,param_6,param_7
                         ,param_8);
        }
        ppppbVar12 = (byte ****)0x0;
        param_5 = (long ****)0x0;
        param_6 = 0;
        param_7 = (long ***)0x0;
        ppuVar11 = (undefined **)0x1b13c4ccdb;
        param_8 = (long ***)0x0;
        FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),uVar7,0x1b13c4ccdb,0,0,0,0,0);
      }
      FUN_71024a2360(*(long *)(*DAT_7105329f98 + 0x50),0x12,(long ****)ppuVar11,ppppbVar12,param_5,
                     param_6,param_7,param_8);
    }
    if (0x12 < *(uint *)(param_1 + 0x104)) goto LAB_71018ed504;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 8;
  }
LAB_71018ed2d8:
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x140) + 0x80) + 0x2270) != 0) {
    return;
  }
  FUN_710248e4c0(*DAT_7105329f98);
  FUN_7101da2890(*(long *)(*(long *)(param_1 + 0x130) + 0x80),0,ppuVar11,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  FUN_7101d944a0(*(long *)(param_1 + 0x128),(uint)*(byte *)(param_1 + 0x158) << 0x10 | 1,ppuVar11,
                 ppppbVar12,param_5,param_6,param_7,param_8);
  FUN_7101af2070(*(long **)(*(long *)(param_1 + 0x148) + 0x80),1,(long ****)ppuVar11,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  lVar19 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
  FUN_710376b960(*(long *)(lVar19 + 0x2268));
  (**(code **)(**(long **)(lVar19 + 0x2268) + 0x70))(*(long **)(lVar19 + 0x2268),0);
  if (*(int *)(lVar19 + 0x11b0) == 0) {
    if (*(char *)(lVar19 + 0x2258) != '\0') goto LAB_71018ed368;
  }
  else {
    *(undefined4 *)(lVar19 + 0x11b0) = 0;
LAB_71018ed368:
    if (*(char *)(lVar19 + 0x225a) == -1) {
      *(char *)(lVar19 + 0x225a) = '\0';
    }
    if (*(int *)(lVar19 + 0xa8) == 1) {
      *(undefined4 *)(lVar19 + 0xa0) = 0;
      *(undefined8 *)(lVar19 + 8) = 0;
      *(undefined8 *)(lVar19 + 0x10) = 0;
      *(undefined1 *)(lVar19 + 0xb4) = 0;
      *(undefined8 *)(lVar19 + 0x58) = 0x200000001;
      *(undefined8 *)(lVar19 + 0xac) = 0xffffffff00000000;
      *(undefined8 *)(lVar19 + 0xa4) = 0xffffffff00000001;
      *(undefined8 *)(lVar19 + 0x90) = 0;
      *(undefined8 *)(lVar19 + 0x98) = 0;
      *(undefined8 *)(lVar19 + 0x80) = 0;
      *(undefined8 *)(lVar19 + 0x88) = 0;
      *(undefined8 *)(lVar19 + 0x70) = 0;
      *(undefined8 *)(lVar19 + 0x78) = 0;
      *(undefined8 *)(lVar19 + 0x60) = 0;
      *(undefined8 *)(lVar19 + 0x68) = 0;
    }
  }
  if (*(uint *)(param_1 + 0x104) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 3;
    return;
  }
LAB_71018ed504:
                    /* WARNING: Subroutine does not return */
  abort();
}

