// addr:      71032ed230
// offset:    0x32ed230
// name:      FUN_71032ed230
// mangled:   
// signature: undefined __cdecl FUN_71032ed230(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, long param_6, undefined8 * param_7, ulong param_8)


void FUN_71032ed230(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,long param_6,undefined8 *param_7,ulong param_8)

{
  float *pfVar1;
  long *plVar2;
  undefined **ppuVar3;
  int iVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  long ***ppplVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  code *pcVar21;
  uint uVar22;
  uint uVar23;
  undefined **ppuVar24;
  undefined1 auVar25 [16];
  byte ***local_a70;
  byte local_a68 [2];
  undefined6 local_a66;
  undefined2 uStack_a60;
  undefined1 local_a5e;
  undefined8 local_a5c;
  undefined4 local_a54;
  undefined8 local_a50;
  undefined1 local_a48;
  undefined8 local_948;
  undefined1 local_940;
  long alStack_840 [4];
  long *local_820;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined2 local_250;
  undefined8 local_24e;
  undefined2 local_246;
  undefined1 local_244;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined6 uStack_144;
  undefined4 local_13e;
  undefined2 local_13a;
  undefined1 local_138;
  undefined4 local_54;
  long ***local_50;
  undefined **ppuStack_48;
  
  ppppbVar14 = &local_a70;
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x80);
  if (((int)plVar9[0x1d] == 0) && (plVar9[0x24] != 0)) {
    FUN_7101afed00(plVar9,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x80);
  }
  switch(*(undefined4 *)((long)plVar9 + 0x1dc)) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((long)plVar9 + 0x1dc);
    if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    auVar25 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
    uVar22 = auVar25._0_4_;
    if (uVar22 != 0xffffffff) {
      puVar17 = &DAT_7105339830;
      if ((((9 < uVar22) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
          (puVar17 = (undefined8 *)(&DAT_7105339860)[(int)uVar22], puVar17 != (undefined8 *)0x0)) &&
         (uVar16 = *(int *)(puVar17[2] + 0x9c) - 1, uVar16 < 7)) {
        DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar16 * 4);
      }
      DAT_7105307b68._0_4_ = uVar22;
      if (DAT_710593ba90 != (long *)0x0) {
        *(uint *)(*DAT_710593ba90 + 0x3ac) = DAT_7105307b68._4_4_;
      }
      if (DAT_710532f7f0 != 0) {
        auVar25 = FUN_7101afe3e0(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80),
                                 DAT_7105307b68._4_4_,(long ****)param_3,param_4,param_5,param_6,
                                 param_7,param_8);
      }
    }
    uVar12 = auVar25._8_8_;
    local_160 = &PTR_FUN_71050a1180;
    local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(param_1 + 0x30));
    ppuVar24 = (undefined **)PTR_LOOP_710523cd80;
    if ((undefined **)PTR_LOOP_710523cd80 != &PTR_LOOP_710523cd78) {
      do {
        ppuVar3 = (undefined **)0x0;
        if (ppuVar24 != (undefined **)0x0) {
          ppuVar3 = ppuVar24 + -1;
        }
        plVar9 = (long *)ppuVar3[7];
        auVar6._8_8_ = uVar12;
        auVar6._0_8_ = plVar9;
        auVar25._8_8_ = uVar12;
        auVar25._0_8_ = plVar9;
        if ((plVar9 != (long *)0x0) && (auVar25 = auVar6, *(char *)((long)ppuVar3 + 0x8c) == '\0'))
        {
          local_a70 = (byte ***)&PTR_FUN_710523cd18;
          local_a68[0] = (byte)ppuVar3;
          local_a68[1] = (byte)((ulong)ppuVar3 >> 8);
          local_a66 = (undefined6)((ulong)ppuVar3 >> 0x10);
          param_3 = (undefined **)&local_160;
          auVar25 = (**(code **)(*plVar9 + 0x40))(plVar9,&local_a70);
        }
        uVar12 = auVar25._8_8_;
        ppuVar3 = ppuVar24 + 1;
        ppuVar24 = (undefined **)*ppuVar3;
      } while ((undefined **)*ppuVar3 != &PTR_LOOP_710523cd78);
    }
    local_258._4_4_ = 0;
    FUN_7101765b20(auVar25._0_8_,auVar25._8_8_,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar18 = *(long *)(DAT_710532f8b8 + 8);
    *(undefined8 *)(lVar18 + 0x50) = 0;
    *(undefined8 *)(lVar18 + 0x58) = 0x3f80000000000000;
    *(undefined8 *)(lVar18 + 0x60) = 0;
    if ((DAT_7105339168 != 0) && (pfVar1 = (float *)(DAT_7105339168 + 0x72b0), *pfVar1 != 0.0)) {
      *(undefined1 *)(DAT_7105339168 + 0x72b8) = 1;
      *pfVar1 = 0.0;
    }
    lVar18 = DAT_710532f7d0;
    switch(*(undefined4 *)(param_1 + 0x30)) {
    case 2:
      local_160 = (undefined **)0x2000000000;
      uVar16 = 0x811c9dc5;
      local_158 = 0x4f73746972697053;
      local_150 = 0x74617a696e616772;
      local_148 = 0x6f69;
      uStack_146 = 0x6e;
      uStack_145 = 0x53;
      uStack_144 = 0x636e65757165;
      local_13e = 0x65635365;
      local_138 = 0;
      uVar23 = 0x53;
      local_13a = 0x656e;
      lVar18 = 9;
      uVar22 = uVar16;
      do {
        uVar22 = uVar22 * 0x89 ^ uVar23;
        uVar23 = (uint)*(byte *)((long)&local_160 + lVar18);
        lVar18 = lVar18 + 1;
      } while (uVar23 != 0);
      local_260 = (long ***)0x4f73746972697053;
      local_258 = 0x74617a696e616772;
      local_268 = 0x1c00000000;
      local_250 = 0x6f69;
      local_24e = 0x6563536e69614d6e;
      uVar23 = 0x53;
      lVar18 = 9;
      local_160 = (undefined **)CONCAT44(0x20,uVar22);
      local_246 = 0x656e;
      local_244 = 0;
      do {
        uVar16 = uVar16 * 0x89 ^ uVar23;
        uVar23 = (uint)*(byte *)((long)&local_268 + lVar18);
        lVar18 = lVar18 + 1;
      } while (uVar23 != 0);
      local_268 = CONCAT44(0x1c,uVar16);
      FUN_71017f4bb0(&local_a70,(long)&local_160,(long)&local_268,1);
      ppuVar24 = (undefined **)PTR_LOOP_710523cd80;
      if ((undefined **)PTR_LOOP_710523cd80 != &PTR_LOOP_710523cd78) {
        do {
          ppuStack_48 = (undefined **)0x0;
          if (ppuVar24 != (undefined **)0x0) {
            ppuStack_48 = ppuVar24 + -1;
          }
          plVar9 = (long *)ppuStack_48[7];
          if ((plVar9 != (long *)0x0) && (*(char *)((long)ppuStack_48 + 0x8c) == '\0')) {
            local_50 = (long ***)&PTR_FUN_710523cd18;
            (**(code **)(*plVar9 + 0x40))(plVar9,&local_50,&local_a70);
          }
          ppuVar3 = ppuVar24 + 1;
          ppuVar24 = (undefined **)*ppuVar3;
        } while ((undefined **)*ppuVar3 != &PTR_LOOP_710523cd78);
      }
      break;
    case 3:
      local_160 = (undefined **)0x1200000000;
      uVar16 = 0x811c9dc5;
      uStack_146 = 0;
      local_158 = 0x7165536c61636f4c;
      local_150 = 0x65635365636e6575;
      uVar23 = 0x4c;
      local_148 = 0x656e;
      lVar18 = 9;
      uVar22 = uVar16;
      do {
        uVar22 = uVar22 * 0x89 ^ uVar23;
        uVar23 = (uint)*(byte *)((long)&local_160 + lVar18);
        lVar18 = lVar18 + 1;
      } while (uVar23 != 0);
      local_268 = 0xd00000000;
      local_160 = (undefined **)CONCAT44(0x12,uVar22);
      local_260 = (long ***)0x706f546c61636f4c;
      uVar22 = 0x4c;
      lVar18 = 9;
      local_258 = CONCAT26((short)((uint)local_258._4_4_ >> 0x10),0x656e656353);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar22;
        uVar22 = (uint)*(byte *)((long)&local_268 + lVar18);
        lVar18 = lVar18 + 1;
      } while (uVar22 != 0);
      local_268 = CONCAT44(0xd,uVar16);
      FUN_71017f4bb0(&local_a70,(long)&local_160,(long)&local_268,1);
      ppuVar24 = (undefined **)PTR_LOOP_710523cd80;
      if ((undefined **)PTR_LOOP_710523cd80 != &PTR_LOOP_710523cd78) {
        do {
          ppuVar3 = (undefined **)0x0;
          if (ppuVar24 != (undefined **)0x0) {
            ppuVar3 = ppuVar24 + -1;
          }
          plVar9 = (long *)ppuVar3[7];
          if ((plVar9 != (long *)0x0) && (*(char *)((long)ppuVar3 + 0x8c) == '\0')) {
            local_50 = (long ***)&PTR_FUN_710523cd18;
            ppuStack_48 = ppuVar3;
            (**(code **)(*plVar9 + 0x40))(plVar9,&local_50,&local_a70);
          }
          ppuVar3 = ppuVar24 + 1;
          ppuVar24 = (undefined **)*ppuVar3;
        } while ((undefined **)*ppuVar3 != &PTR_LOOP_710523cd78);
      }
      FUN_71025d2490(1);
      break;
    default:
      lVar19 = *(long *)(DAT_710532f7d0 + 8);
      if (*(long **)(lVar19 + 0x18) == (long *)0x0) {
LAB_71032ed860:
        plVar9 = *(long **)(lVar19 + 0x10);
        if ((plVar9 != (long *)0x0) &&
           (uVar10 = (**(code **)(*plVar9 + 0x48))(plVar9), (uVar10 & 1) != 0)) {
          (**(code **)(*plVar9 + 0x30))(plVar9);
        }
      }
      else {
        uVar10 = (**(code **)(**(long **)(lVar19 + 0x18) + 0x48))();
        if ((uVar10 & 1) == 0) {
          lVar19 = *(long *)(lVar18 + 8);
          goto LAB_71032ed860;
        }
      }
      if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      DAT_71053083c8 = 0;
      uVar16 = 0x811c9dc5;
      local_160 = (undefined **)0x1100000000;
      local_158 = 0x75716553756e654d;
      local_150 = 0x6e65635365636e65;
      local_148 = 0x65;
      uVar23 = 0x4d;
      lVar18 = 9;
      uVar22 = uVar16;
      do {
        uVar22 = uVar22 * 0x89 ^ uVar23;
        uVar23 = (uint)*(byte *)((long)&local_160 + lVar18);
        lVar18 = lVar18 + 1;
      } while (uVar23 != 0);
      local_268 = 0xd00000000;
      local_260 = (long ***)0x756e654d6e69614d;
      uVar23 = 0x4d;
      lVar18 = 9;
      local_160 = (undefined **)CONCAT44(0x11,uVar22);
      local_258 = CONCAT26(local_258._6_2_,0x656e656353);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar23;
        uVar23 = (uint)*(byte *)((long)&local_268 + lVar18);
        lVar18 = lVar18 + 1;
      } while (uVar23 != 0);
      local_268 = CONCAT44(0xd,uVar16);
      FUN_71017f4bb0(&local_a70,(long)&local_160,(long)&local_268,1);
      ppuVar24 = (undefined **)PTR_LOOP_710523cd80;
      if ((undefined **)PTR_LOOP_710523cd80 != &PTR_LOOP_710523cd78) {
        do {
          ppuStack_48 = (undefined **)0x0;
          if (ppuVar24 != (undefined **)0x0) {
            ppuStack_48 = ppuVar24 + -1;
          }
          plVar9 = (long *)ppuStack_48[7];
          if ((plVar9 != (long *)0x0) && (*(char *)((long)ppuStack_48 + 0x8c) == '\0')) {
            local_50 = (long ***)&PTR_FUN_710523cd18;
            (**(code **)(*plVar9 + 0x40))(plVar9,&local_50,&local_a70);
          }
          ppuVar3 = ppuVar24 + 1;
          ppuVar24 = (undefined **)*ppuVar3;
        } while ((undefined **)*ppuVar3 != &PTR_LOOP_710523cd78);
      }
      break;
    case 5:
      local_160 = (undefined **)0x1300000000;
      uVar16 = 0x811c9dc5;
      local_158 = 0x65536e6f6974704f;
      local_150 = 0x635365636e657571;
      local_148 = 0x6e65;
      uStack_146 = 0x65;
      uStack_145 = 0;
      uVar23 = 0x4f;
      lVar18 = 9;
      uVar22 = uVar16;
      do {
        uVar22 = uVar22 * 0x89 ^ uVar23;
        uVar23 = (uint)*(byte *)((long)&local_160 + lVar18);
        lVar18 = lVar18 + 1;
      } while (uVar23 != 0);
      local_268 = 0xe00000000;
      local_260 = (long ***)0x6f546e6f6974704f;
      uVar23 = 0x4f;
      lVar18 = 9;
      local_160 = (undefined **)CONCAT44(0x13,uVar22);
      local_258 = CONCAT17(local_258._7_1_,0x656e65635370);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar23;
        uVar23 = (uint)*(byte *)((long)&local_268 + lVar18);
        lVar18 = lVar18 + 1;
      } while (uVar23 != 0);
      local_268 = CONCAT44(0xe,uVar16);
      FUN_71017f4bb0(&local_a70,(long)&local_160,(long)&local_268,1);
      ppuVar24 = (undefined **)PTR_LOOP_710523cd80;
      if ((undefined **)PTR_LOOP_710523cd80 != &PTR_LOOP_710523cd78) {
        do {
          ppuStack_48 = (undefined **)0x0;
          if (ppuVar24 != (undefined **)0x0) {
            ppuStack_48 = ppuVar24 + -1;
          }
          plVar9 = (long *)ppuStack_48[7];
          if ((plVar9 != (long *)0x0) && (*(char *)((long)ppuStack_48 + 0x8c) == '\0')) {
            local_50 = (long ***)&PTR_FUN_710523cd18;
            (**(code **)(*plVar9 + 0x40))(plVar9,&local_50,&local_a70);
          }
          ppuVar3 = ppuVar24 + 1;
          ppuVar24 = (undefined **)*ppuVar3;
        } while ((undefined **)*ppuVar3 != &PTR_LOOP_710523cd78);
      }
      break;
    case 6:
      local_160 = (undefined **)0x1100000000;
      uVar16 = 0x811c9dc5;
      local_158 = 0x75716553706c6548;
      local_150 = 0x6e65635365636e65;
      uVar23 = 0x48;
      local_148 = 0x65;
      lVar18 = 9;
      uVar22 = uVar16;
      do {
        uVar22 = uVar22 * 0x89 ^ uVar23;
        uVar23 = (uint)*(byte *)((long)&local_160 + lVar18);
        lVar18 = lVar18 + 1;
      } while (uVar23 != 0);
      local_268 = 0xc00000000;
      local_260 = (long ***)0x53706f54706c6548;
      uVar23 = 0x48;
      lVar18 = 9;
      local_160 = (undefined **)CONCAT44(0x11,uVar22);
      local_258 = CONCAT35((int3)((uint)local_258._4_4_ >> 8),0x656e6563);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar23;
        uVar23 = (uint)*(byte *)((long)&local_268 + lVar18);
        lVar18 = lVar18 + 1;
      } while (uVar23 != 0);
      local_268 = CONCAT44(0xc,uVar16);
      FUN_71017f4bb0(&local_a70,(long)&local_160,(long)&local_268,1);
      ppuVar24 = (undefined **)PTR_LOOP_710523cd80;
      if ((undefined **)PTR_LOOP_710523cd80 != &PTR_LOOP_710523cd78) {
        do {
          ppuStack_48 = (undefined **)0x0;
          if (ppuVar24 != (undefined **)0x0) {
            ppuStack_48 = ppuVar24 + -1;
          }
          plVar9 = (long *)ppuStack_48[7];
          if ((plVar9 != (long *)0x0) && (*(char *)((long)ppuStack_48 + 0x8c) == '\0')) {
            local_50 = (long ***)&PTR_FUN_710523cd18;
            (**(code **)(*plVar9 + 0x40))(plVar9,&local_50,&local_a70);
          }
          ppuVar3 = ppuVar24 + 1;
          ppuVar24 = (undefined **)*ppuVar3;
        } while ((undefined **)*ppuVar3 != &PTR_LOOP_710523cd78);
      }
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x30) = 4;
    for (uVar10 = 0; "https://www-aaaba-%-hac.cdn.nintendo.net/{$lang}/index.html"[uVar10] != 0;
        uVar10 = uVar10 + 2) {
      bVar5 = "https://www-aaaba-%-hac.cdn.nintendo.net/{$lang}/index.html"[uVar10 + 1];
      local_a68[uVar10] = "https://www-aaaba-%-hac.cdn.nintendo.net/{$lang}/index.html"[uVar10];
      if (bVar5 == 0) {
        uVar10 = uVar10 + 1;
        break;
      }
      local_a68[uVar10 + 1] = bVar5;
    }
    uVar16 = 0x811c9dc5;
    local_a68[uVar10 & 0xffffffff] = 0;
    uVar23 = (uint)local_a68[0];
    uVar22 = uVar16;
    if (local_a68[0] != 0) {
      pbVar20 = local_a68;
      do {
        pbVar20 = pbVar20 + 1;
        uVar22 = uVar22 * 0x89 ^ uVar23;
        uVar23 = (uint)*pbVar20;
      } while (uVar23 != 0);
    }
    local_a70 = (byte ***)CONCAT44((int)uVar10,uVar22);
    FUN_7101762560((uint *)&local_160,(long)&local_a70);
    FUN_7101762b40((uint *)&local_a70,extraout_x1,(long ****)param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    local_268 = 0;
    uVar10 = 0;
    while( true ) {
      if (local_a68[uVar10] == 0) break;
      *(byte *)((long)&local_260 + uVar10) = local_a68[uVar10];
      if (0xfe < (int)uVar10 + 1U) {
        uVar10 = (ulong)((int)uVar10 + 1);
        break;
      }
      if (local_a68[uVar10 + 1] == 0) {
        uVar10 = uVar10 + 1;
        break;
      }
      *(byte *)((long)&local_260 + uVar10 + 1) = local_a68[uVar10 + 1];
      uVar10 = uVar10 + 2;
    }
    pppplVar13 = (long ****)&local_260;
    *(undefined1 *)((long)pppplVar13 + (uVar10 & 0xffffffff)) = 0;
    uVar22 = (uint)(byte)local_260;
    local_268 = uVar10 << 0x20;
    if ((byte)local_260 != 0) {
      pbVar20 = (byte *)((long)&local_260 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar22;
        uVar22 = (uint)*pbVar20;
        pbVar20 = pbVar20 + 1;
      } while (uVar22 != 0);
    }
    local_a66 = 0x1010100;
    uStack_a60 = 0;
    local_a5c = 0x600000012;
    local_a54 = 0x3f800000;
    local_268 = CONCAT44((int)uVar10,uVar16);
    local_a68[0] = 0;
    local_a68[1] = 0;
    local_a70 = (byte ***)0x0;
    local_a5e = 0;
    local_a48 = 0;
    local_a50 = 0;
    local_940 = 0;
    local_948 = 0;
    local_820 = (long *)0x0;
    FUN_7101762e80(*DAT_71052c5170,(long)&local_a70);
    iVar4 = *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 600) + 0x1a8);
    iVar8 = 0x7fffffff;
    if (iVar4 + 1U < 0x7fffffff) {
      iVar8 = iVar4 + 1;
    }
    *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 600) + 0x1a8) = iVar8;
    pppplVar15 = (long ****)0x1;
    FUN_7103342a40(*(long *)(DAT_710532f8e8 + 8),(undefined1 *)&local_158,(undefined1 *)pppplVar13,
                   &local_a70,1);
    iVar8 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_50);
    ppplVar7 = local_50;
    if (iVar8 == 0) {
      puVar17 = *(undefined8 **)(*DAT_7105314510 + 0x228);
      local_50 = (long ***)0x0;
      uVar22 = FUN_71037418e0(ppplVar7,(ulong *)&local_50);
      if ((uVar22 & 1) != 0) {
        *(long ****)(*(long *)*puVar17 + 0x20) = local_50;
      }
    }
    plVar9 = (long *)(*DAT_7105314508 + 0x5b4dd8);
    plVar2 = (long *)(*DAT_7105314508 + 0x5b4de8);
    if (*plVar2 == 0) {
      plVar11 = (long *)FUN_710392e290(0x10,0x18,pppplVar13,ppppbVar14,pppplVar15,param_6,param_7,
                                       param_8);
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_50 = (long ***)&SUB_00000018;
          pppplVar13 = &local_50;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar10 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,0x18,pppplVar13,ppppbVar14,pppplVar15,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_71032eddec;
        }
        plVar11 = (long *)0x0;
      }
LAB_71032eddec:
      *(undefined1 *)(plVar11 + 2) = 0;
      plVar11[1] = (long)plVar9;
      lVar18 = *plVar9;
      *plVar11 = lVar18;
      *(long **)(lVar18 + 8) = plVar11;
      *plVar9 = (long)plVar11;
      *plVar2 = *plVar2 + 1;
    }
    else {
      *(byte *)(*plVar9 + 0x10) = *(byte *)(*plVar9 + 0x10) & 1;
    }
    if (alStack_840 == local_820) {
      pcVar21 = *(code **)(*local_820 + 0x20);
    }
    else {
      if (local_820 == (long *)0x0) {
        return;
      }
      pcVar21 = *(code **)(*local_820 + 0x28);
    }
    (*pcVar21)();
    break;
  default:
    *(undefined4 *)(param_1 + 0x30) = 0;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x30) = 7;
    plVar9 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
    if ((plVar9 != (long *)0x0) &&
       (uVar10 = (**(code **)(*plVar9 + 0x48))(plVar9), (uVar10 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0071032ed6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x30))(plVar9);
      return;
    }
  }
  return;
}

