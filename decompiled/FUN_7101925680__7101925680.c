// addr:      7101925680
// offset:    0x1925680
// name:      FUN_7101925680
// mangled:   
// signature: undefined __cdecl FUN_7101925680(long param_1, undefined8 param_2, undefined * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * param_7, long * * * param_8)


void FUN_7101925680(long param_1,undefined8 param_2,undefined **param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],long ***param_7,
                   long ***param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 extraout_x1;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined **local_68;
  undefined **local_60;
  
  pcVar4 = (char *)*DAT_710532a860;
  if (*(int *)(param_1 + 0x1b4) == 0) {
    FUN_71024d10c0(pcVar4,param_2,(long *********)param_3,(byte ****)param_4,(long ****)param_5,
                   param_6,param_7,param_8);
    FUN_71024e7110(*(long *)(*(long *)(param_1 + 0x288) + 8));
    lVar6 = *(long *)(DAT_710532f7d8 + 8);
    std::mutex::lock();
    *(uint *)(lVar6 + 0xe8) = *(uint *)(lVar6 + 0xe8) | 1;
    *(undefined1 *)(lVar6 + 0xf1) = 1;
    *(undefined1 *)(lVar6 + 0xf5) = 0;
    *(undefined1 *)(*(long *)(*(long *)(lVar6 + 0xa0) + 0x80) + 0x1cc) =
         *(undefined1 *)(lVar6 + 0xf4);
    *(undefined4 *)(lVar6 + 0xec) = 0xffffffff;
    *(undefined8 *)(lVar6 + 0xf8) = 0x8ffff0000000000;
    *(undefined4 *)(lVar6 + 0x100) = 7;
  }
  else {
    if (*pcVar4 != '\x0e') goto LAB_71019259e8;
    lVar6 = *DAT_710532a868 + (ulong)*(uint *)(pcVar4 + 0x78) * 0x138;
    param_3 = (undefined **)(lVar6 + 0x5c8);
    param_4 = (undefined1 (*) [16])(lVar6 + 0x5e0);
    param_5 = (undefined1 (*) [16])(lVar6 + 0x5f8);
    FUN_7101926c70(param_1,(undefined4 *)(lVar6 + 0x4e0),(long *********)param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_71019295b0(param_1,extraout_x1,(long *********)param_3,(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
    lVar7 = *(long *)(param_1 + 0x248);
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x228) + 0x428) + 0x78);
    if (*(int *)(lVar7 + 0x3208) != 0) {
      uVar10 = 0;
      do {
        *(undefined4 *)(*(long *)(lVar7 + 8 + uVar10 * 8) + 0x230) = 0xffff;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(lVar7 + 0x3208));
    }
    *(undefined4 *)(lVar6 + 0x230) = 0;
    FUN_710250e310(lVar6,0);
    uVar2 = *(uint *)(param_1 + 0x238);
    lVar6 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    uVar5 = 0xffffffff;
    if ((uVar2 != 0xffff) && (uVar5 = *(uint *)(lVar6 + (ulong)uVar2 * 4 + 0x3f0), uVar5 == 0)) {
      puVar12 = *(undefined8 **)(*DAT_7105314510 + 0x158);
      uVar5 = *(uint *)(*DAT_710532a860 + 0x1c);
      uVar10 = *(ulong *)(*DAT_710532a868 + 0x170);
      FUN_71024cc070((long *)&local_68,(long *)(*DAT_710532a868 + (ulong)uVar2 * 0x138 + 0x5c8),
                     (long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                     param_8);
      if (local_68 != local_60) {
        uVar13 = 0;
        ppuVar11 = local_68;
        do {
          if ((((ulong)*ppuVar11 ^ uVar10) & 0xffffffffff) == 0) goto LAB_71019257e0;
          ppuVar11 = ppuVar11 + 0x25;
          uVar13 = uVar13 + 1;
        } while (local_60 != ppuVar11);
      }
      uVar13 = 0xffff;
LAB_71019257e0:
      if (local_68 != (undefined **)0x0) {
        local_60 = local_68;
        FUN_710392eb40((ulong)local_68);
      }
      uVar9 = 0xd;
      if (uVar2 != 1) {
        uVar9 = 0xffff;
      }
      uVar1 = 0xb;
      if (uVar2 != 0) {
        uVar1 = uVar9;
      }
      if (0x3ff < uVar13) {
        uVar13 = uVar13 - 0x400;
        uVar2 = uVar1;
      }
      if (uVar5 < 3) {
        if (0x13 < uVar2) goto LAB_7101925ae4;
        if (uVar13 < 0x400) {
          uVar5 = -(uint)((*(uint *)(*(long *)*puVar12 + (ulong)uVar5 * 0x3d700 +
                                     (ulong)uVar2 * 0x84 + (ulong)(uVar13 >> 5) * 4 + 0x3cc38) &
                          1 << (ulong)(uVar13 & 0x1f)) == 0);
          goto LAB_71019258e4;
        }
      }
      uVar5 = 0xffffffff;
    }
LAB_71019258e4:
    if (*(uint *)(lVar6 + 0x5a8) != uVar5) {
      *(uint *)(lVar6 + 0x5a8) = uVar5;
      if ((uVar5 == 0xffffffff) || (0xd < (int)uVar5)) {
        lVar6 = *(long *)(*(long *)(*(long *)(lVar6 + 0x558) + 0x80) + 0x38);
        pcVar4 = "submap_out";
      }
      else {
        *(undefined4 *)(lVar6 + 0x5c4) = 0;
        lVar7 = *(long *)(*(long *)(lVar6 + 0x558) + 0x80);
        FUN_710377a120(lVar7 + 0x118,(char *)(lVar6 + (ulong)uVar5 * 0x48 + 8),param_3,param_4,
                       param_5,param_6,param_7,param_8);
        lVar6 = *(long *)(lVar7 + 0x38);
        pcVar4 = "submap_in";
      }
      FUN_7103778300(0x3f800000,lVar6,(long)pcVar4);
    }
    DAT_710529cfb8 = 0x73;
    if (0x12 < *(uint *)(param_1 + 0x1ac)) {
LAB_7101925ae4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1ac) * 4 + 0x160) = 2;
    lVar6 = *(long *)(DAT_710532f7d8 + 8);
    std::mutex::lock();
    uVar5 = *(uint *)(lVar6 + 0xe8) & 0xfffffffe;
    *(uint *)(lVar6 + 0xe8) = uVar5;
    if (uVar5 == 0) {
      *(undefined4 *)(lVar6 + 0xf1) = 0;
      *(undefined4 *)(lVar6 + 0xec) = 0xffffffff;
      if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0))
      {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052c51cf != '\0') {
        if (DAT_71052c3760 != (long *)0x0) {
          *(undefined1 *)(*DAT_71052c3760 + 0xb) = 0;
        }
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
          FUN_7101764000();
          param_3 = &PTR_LOOP_7104f17000;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        DAT_71052c51cf = '\0';
      }
    }
  }
  std::mutex::unlock();
LAB_71019259e8:
  lVar6 = *(long *)(*(long *)(param_1 + 0x290) + 8);
  if (*(char *)(lVar6 + 0x5d9) != '\0') {
    *(undefined1 *)(lVar6 + 0x5d9) = 0;
    *(undefined4 *)(lVar6 + 0x5c8) = 0;
    FUN_7103776910(&local_68,*(long *)(*(long *)(lVar6 + 0x558) + 0x80) + 0x30,(long ****)"keyhelp",
                   param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
    ppuVar11 = local_60;
    puVar8 = *local_60;
    if (puVar8 != (undefined *)0x0) {
      puVar8[0x58] = puVar8[0x58] & 0xfe;
    }
    local_68 = &PTR_FUN_710523d9a8;
    local_60 = (undefined **)0x0;
    if (ppuVar11 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar11);
    }
  }
  return;
}

