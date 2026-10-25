// addr:      71022e06a0
// offset:    0x22e06a0
// name:      FUN_71022e06a0
// mangled:   
// signature: undefined __cdecl FUN_71022e06a0(long param_1, undefined8 param_2, ulong param_3, ulong param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071022e1278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71022e06a0(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long ****param_5,
                   byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  ulong *puVar5;
  undefined1 uVar6;
  int iVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  undefined1 uVar23;
  int iVar24;
  ulong uVar25;
  ulong *puVar26;
  undefined1 *puVar27;
  long lVar28;
  char local_2ec;
  ushort local_2e8;
  uint local_2d8;
  undefined4 uStack_2d4;
  uint local_2d0;
  undefined2 uStack_2cc;
  undefined2 uStack_2ca;
  undefined4 local_2b4;
  undefined4 local_2b0 [2];
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined1 *local_2a0;
  undefined1 *local_298;
  byte local_290;
  undefined1 local_28f;
  ushort local_28a;
  uint auStack_278 [36];
  uint auStack_1e8 [54];
  undefined **local_110;
  ulong *local_108;
  ulong *local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  ulong local_e8;
  undefined8 local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  uint local_b0 [2];
  ulong local_a8 [9];
  
  if (*(int *)(param_1 + 0x16c) != 0) goto LAB_71022e06cc;
  if ((*(int *)(param_1 + 400) == 4) &&
     (*(char *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x80) + 0x244) != '\0')) {
    *(undefined4 *)(param_1 + 0x188) = 0x6270;
  }
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  if (*(uint *)(param_1 + 0x810978) == 0) goto LAB_71022e06cc;
  lVar20 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8) + 8);
  pcVar19 = *(char **)(lVar20 + 0x20);
  if ((*pcVar19 == '\f') && (iVar12 = *(int *)(pcVar19 + 1) + -1, 0 < *(int *)(pcVar19 + 1))) {
    lVar20 = *(long *)(lVar20 + 0x18);
    iVar24 = 0;
    pcVar21 = "";
    do {
      iVar2 = iVar12 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar20 + 0x28) + (long)*(int *)(pcVar19 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar20 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1e47b3aee0) {
        uVar11 = puVar1[1];
        if ((int)uVar11 < 0) goto LAB_71022e0bb4;
        pcVar21 = pcVar19 + (int)uVar11;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar25 < 0x1e47b3aee1) {
        iVar24 = iVar2 + 1;
        iVar7 = iVar12;
      }
      iVar12 = iVar7;
    } while (iVar24 <= iVar12);
  }
  else {
LAB_71022e0bb4:
    pcVar21 = "";
  }
  switch(*pcVar21) {
  case '\x01':
  case '\x03':
  case '\x06':
  case '\a':
    bVar4 = pcVar21[1];
    goto joined_r0x0071022e0c18;
  case '\x02':
    bVar4 = pcVar21[1];
joined_r0x0071022e0c18:
    uVar11 = (uint)bVar4;
    break;
  case '\x04':
    uVar11 = (int)*(short *)(pcVar21 + 1) & 0xff;
    break;
  case '\x05':
    uVar11 = (uint)(byte)*(undefined2 *)(pcVar21 + 1);
    break;
  default:
    goto LAB_71022e0c2c;
  }
  if (uVar11 <= *(uint *)(param_1 + 0x810978)) {
LAB_71022e0c2c:
    *(undefined4 *)(param_1 + 400) = 5;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x174) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0xc0000000e;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0x100000000;
    return;
  }
LAB_71022e06cc:
  if (-1 < *(int *)(param_1 + 0x188)) {
    uVar11 = *(int *)(param_1 + 0x188) + 1;
    *(uint *)(param_1 + 0x188) = uVar11;
    if (uVar11 < 0x6271) goto LAB_71022e17c8;
    lVar28 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
    lVar20 = lVar28 + 8;
    FUN_7103776640((undefined8 *)&local_2d8,lVar20,(byte ****)"set_btn_helptxt_00",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar25 = CONCAT26(uStack_2ca,CONCAT24(uStack_2cc,local_2d0));
    if ((*(long *)(uVar25 + 8) != 0) &&
       (lVar18 = *(long *)(*(long *)(uVar25 + 8) + 0x18), lVar18 != 0)) {
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
    }
    local_2d8 = 0x523d988;
    uStack_2d4 = 0x71;
    local_2d0 = 0;
    uStack_2cc = 0;
    uStack_2ca = 0;
    if (uVar25 != 0) {
      uVar13 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar25);
    }
    *(undefined1 *)(lVar28 + 0x1e8) = 1;
    plVar15 = DAT_7105328160;
    uVar11 = *(uint *)(*DAT_7105328160 + 0x204388);
    if (uVar11 == 0) {
LAB_71022e0d9c:
      FUN_7101991290(lVar28 + 0x1b0,1,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_110,lVar20,(byte ****)"set_btn_helptxt_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910((undefined8 *)&local_2d8,(long)&local_110,(long ****)"set_txt_help",param_3,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_2d8,"mnu_amiibo_journey_finish",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar15 = (long *)CONCAT26(uStack_2ca,CONCAT24(uStack_2cc,local_2d0));
    }
    else {
      local_2d0 = local_2d0 & 0xffffff00;
      local_2d8 = 0;
      uStack_2d4 = 0;
      FUN_710062dc20(&local_2d8,"battle_end_%d");
      FUN_7103778300(0x3f800000,*(long *)(lVar28 + 0x10),(long)&local_2d0);
      local_108 = (ulong *)((ulong)local_108 & 0xffffffffffffff00);
      local_110 = (undefined **)0x0;
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (2 < uVar11 - 1) goto LAB_71022e192c;
      uVar25 = (ulong)(uVar11 - 1);
      if (*(char *)((long)&DAT_7105307fe4 + uVar25) == '\0') {
        param_3 = (ulong)uVar11;
        FUN_710062dc20((uint *)&local_110,"battle%d_rank_off");
      }
      else {
        FUN_710062dc20((uint *)&local_110,"battle%d_rank_on");
        lVar18 = *plVar15;
        local_a8[0] = local_a8[0] & 0xffffffffffffff00;
        local_b0[0] = 0;
        local_b0[1] = 0;
        if (DAT_710593b580 == (long *)0x0) goto LAB_71022e192c;
        lVar22 = *DAT_710593b580;
        iVar12 = *(int *)(lVar22 + 0x7300);
        if (iVar12 == -1) {
          plVar15 = (long *)(lVar22 + 0x28);
        }
        else {
          if (*(ulong *)(lVar22 + 0x72c0) <= (ulong)(long)iVar12) goto LAB_71022e192c;
          plVar15 = (long *)(lVar22 + (long)iVar12 * 0xcc0 + 0xce8);
        }
        lVar22 = *plVar15;
        if (*(long *)(lVar18 + uVar25 * 0x2041f0 + 0x204398) == lVar22) {
          lVar22 = 0;
        }
        else if (*(long *)(lVar18 + uVar25 * 0x2041f0 + 0x205410) == lVar22) {
          lVar22 = 1;
        }
        else if (*(long *)(lVar18 + uVar25 * 0x2041f0 + 0x206488) == lVar22) {
          lVar22 = 2;
        }
        else {
          if (*(long *)(lVar18 + uVar25 * 0x2041f0 + 0x207500) != lVar22) goto LAB_71022e192c;
          lVar22 = 3;
        }
        param_4 = (ulong)(*(byte *)(lVar18 + uVar25 * 0x2041f0 + lVar22 * 0x1078 + 0x204404) + 1);
        param_3 = (ulong)uVar11;
        FUN_710062dc20(local_b0,"battle%d_rank_%d");
        FUN_7103778300(0x3f800000,*(long *)(lVar28 + 0x10),(long)local_a8);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar28 + 0x10),(long)&local_108);
      if (uVar11 < 3) goto LAB_71022e0d9c;
      FUN_7101991290(lVar28 + 0x1b0,6,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(lVar28 + 0x10),0x710426f8b1);
      FUN_7103776640(&local_110,lVar20,(byte ****)"set_btn_helptxt_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910((undefined8 *)&local_2d8,(long)&local_110,(long ****)"set_txt_help",param_3,
                     param_4,param_5,param_6,param_7,param_8);
      plVar15 = (long *)CONCAT26(uStack_2ca,CONCAT24(uStack_2cc,local_2d0));
      lVar20 = *plVar15;
      if (lVar20 != 0) {
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe;
      }
    }
    local_2d8 = 0x523d9a8;
    uStack_2d4 = 0x71;
    local_2d0 = 0;
    uStack_2cc = 0;
    uStack_2ca = 0;
    if (plVar15 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar15);
    }
    puVar26 = local_108;
    local_110 = &PTR_FUN_710523d988;
    local_108 = (ulong *)0x0;
    if (puVar26 != (ulong *)0x0) {
      uVar25 = puVar26[3];
      puVar26[2] = (ulong)&PTR_FUN_710523d9a8;
      puVar26[3] = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40((ulong)puVar26);
    }
    *(undefined1 *)(lVar28 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
    goto LAB_71022e17c8;
  }
  if (2 < *(uint *)(param_1 + 0x204388)) goto LAB_71022e17c8;
  if (((DAT_71053144d8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar20 = DAT_710532f7b0;
  iVar12 = DAT_7105307d50;
  lVar28 = *(long *)(DAT_710532f7b0 + 8);
  bVar10 = FUN_71032e14a0(lVar28,DAT_7105307d50);
  if (!bVar10) goto LAB_71022e17c8;
  piVar14 = FUN_71032dea90(lVar28,iVar12);
  if (((DAT_71053144d8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar28 = *(long *)(DAT_710532f730 + 8);
  FUN_710179d930();
  if (((DAT_71053144d8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  DAT_71052c51c4._1_1_ = 0;
  local_b8 = 0x100;
  local_b6 = 2;
  local_2d8 = 0;
  uStack_2d4 = 0;
  local_2d0 = 2;
  uStack_2cc = 0;
  uStack_2ca = 0;
  lVar18 = FUN_710137bc30(&DAT_71052391c0,(long *)&local_2d8);
  if (lVar18 != 0) {
    local_b8 = CONCAT11(local_b8._1_1_,*(undefined1 *)((long)&local_b8 + lVar18));
    *(undefined1 *)((long)&local_b8 + lVar18) = 0;
  }
  local_2d8 = 0;
  uStack_2d4 = 0;
  local_2d0 = 1;
  uStack_2cc = 0;
  uStack_2ca = 0;
  lVar18 = FUN_710137bc30(&DAT_71052391c0,(long *)&local_2d8);
  if (lVar18 != 0) {
    uVar6 = local_b8._1_1_;
    local_b8 = CONCAT11(*(undefined1 *)(((ulong)&local_b8 | 1) + lVar18),(undefined1)local_b8);
    *(undefined1 *)(((ulong)&local_b8 | 1) + lVar18) = uVar6;
  }
  uVar11 = DAT_71052391c0;
  DAT_71052391c0 = DAT_71052391c4;
  uVar11 = uVar11 ^ uVar11 << 0xb;
  DAT_71052391c4 = DAT_71052391c8;
  DAT_71052391c8 = DAT_71052391cc;
  DAT_71052391cc = uVar11 ^ uVar11 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
  if ((DAT_71052391cc & 1) != (uint)DAT_710530a9c0) {
    DAT_710530a9c0 = (byte)(DAT_71052391cc & 1);
    lVar18 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    if (*(char *)(lVar18 + 0x26a62) == '\0') {
      *(ulong *)(lVar18 + 0x26a90) = *(ulong *)(lVar18 + 0x26a90) | 1;
    }
  }
  lVar18 = *(long *)(*(long *)(lVar28 + 0x2c8) + 8);
  pcVar19 = *(char **)(lVar18 + 0x20);
  cVar3 = *pcVar19;
  uVar6 = (undefined1)local_b8;
  if ((cVar3 == '\f') && (iVar12 = *(int *)(pcVar19 + 1) + -1, 0 < *(int *)(pcVar19 + 1))) {
    iVar24 = 0;
    pcVar21 = "";
    do {
      iVar2 = iVar12 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar18 + 0x18) + 0x28) + (long)*(int *)(pcVar19 + 5) +
                       (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*(long *)(lVar18 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x19148d133b) {
        uVar11 = puVar1[1];
        if ((int)uVar11 < 0) goto LAB_71022e0e3c;
        pcVar21 = pcVar19 + (int)uVar11;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar25 < 0x19148d133c) {
        iVar24 = iVar2 + 1;
        iVar7 = iVar12;
      }
      iVar12 = iVar7;
    } while (iVar24 <= iVar12);
  }
  else {
LAB_71022e0e3c:
    pcVar21 = "";
  }
  switch(*pcVar21) {
  case '\x01':
  case '\x03':
    local_2e8 = (ushort)(byte)pcVar21[1];
    break;
  case '\x02':
    local_2e8 = (ushort)pcVar21[1];
    break;
  case '\x04':
    local_2e8 = *(ushort *)(pcVar21 + 1);
    break;
  case '\x05':
    local_2e8 = *(ushort *)(pcVar21 + 1);
    break;
  case '\x06':
  case '\a':
    local_2e8 = (ushort)*(undefined4 *)(pcVar21 + 1);
    break;
  default:
    local_2e8 = 0;
    uVar8 = local_2e8;
    local_2e8 = 0;
    if (cVar3 == '\f') goto LAB_71022e0ea8;
    goto LAB_71022e0f2c;
  }
  uVar8 = local_2e8;
  if (cVar3 == '\f') {
LAB_71022e0ea8:
    local_2e8 = uVar8;
    iVar12 = *(int *)(pcVar19 + 1) + -1;
    if (*(int *)(pcVar19 + 1) < 1) goto LAB_71022e0f2c;
    iVar24 = 0;
    pcVar21 = "";
    do {
      iVar2 = iVar12 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar18 + 0x18) + 0x28) + (long)*(int *)(pcVar19 + 5) +
                       (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*(long *)(lVar18 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1f4e25460f) {
        uVar11 = puVar1[1];
        if ((int)uVar11 < 0) goto LAB_71022e0f2c;
        pcVar21 = pcVar19 + (int)uVar11;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar25 < 0x1f4e254610) {
        iVar24 = iVar2 + 1;
        iVar7 = iVar12;
      }
      iVar12 = iVar7;
    } while (iVar24 <= iVar12);
  }
  else {
LAB_71022e0f2c:
    pcVar21 = "";
  }
  switch(*pcVar21) {
  case '\x01':
  case '\x03':
    local_2ec = pcVar21[1];
    break;
  case '\x02':
    local_2ec = pcVar21[1];
    break;
  case '\x04':
    local_2ec = (char)*(undefined2 *)(pcVar21 + 1);
    break;
  case '\x05':
    local_2ec = (char)*(undefined2 *)(pcVar21 + 1);
    break;
  case '\x06':
  case '\a':
    local_2ec = (char)*(undefined4 *)(pcVar21 + 1);
    break;
  default:
    local_2ec = '\0';
    cVar9 = local_2ec;
    local_2ec = '\0';
    if (cVar3 == '\f') goto LAB_71022e0f98;
    goto LAB_71022e101c;
  }
  cVar9 = local_2ec;
  if (cVar3 == '\f') {
LAB_71022e0f98:
    local_2ec = cVar9;
    iVar12 = *(int *)(pcVar19 + 1) + -1;
    if (*(int *)(pcVar19 + 1) < 1) goto LAB_71022e101c;
    iVar24 = 0;
    pcVar21 = "";
    do {
      iVar2 = iVar12 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar18 + 0x18) + 0x28) + (long)*(int *)(pcVar19 + 5) +
                       (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*(long *)(lVar18 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x184730b69e) {
        uVar11 = puVar1[1];
        if ((int)uVar11 < 0) goto LAB_71022e101c;
        pcVar21 = pcVar19 + (int)uVar11;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar25 < 0x184730b69f) {
        iVar24 = iVar2 + 1;
        iVar7 = iVar12;
      }
      iVar12 = iVar7;
    } while (iVar24 <= iVar12);
  }
  else {
LAB_71022e101c:
    pcVar21 = "";
  }
  switch(*pcVar21) {
  case '\x01':
  case '\x03':
    uVar11 = (uint)(byte)pcVar21[1];
    break;
  case '\x02':
    uVar11 = (uint)pcVar21[1];
    break;
  case '\x04':
    uVar11 = (uint)*(short *)(pcVar21 + 1);
    break;
  case '\x05':
    uVar11 = (uint)*(ushort *)(pcVar21 + 1);
    break;
  case '\x06':
  case '\a':
    uVar11 = *(uint *)(pcVar21 + 1);
    break;
  default:
    goto switchD_71022e104c_default;
  }
  if ((uVar11 & 0xffff) < 0xb) {
switchD_71022e104c_default:
    uVar23 = 0;
  }
  else if ((uVar11 & 0xffff) < 0x1f) {
    uVar23 = 1;
  }
  else if ((uVar11 & 0xffff) < 0x33) {
    uVar23 = 2;
  }
  else if ((uVar11 & 0xffff) < 0x51) {
    uVar23 = 3;
  }
  else if ((uVar11 & 0xffff) < 0x65) {
    uVar23 = 4;
  }
  else {
    uVar23 = 5;
    if (0x96 < (uVar11 & 0xffff)) {
      if ((uVar11 & 0xffff) < 0xc9) {
        uVar23 = 6;
      }
      else if ((uVar11 & 0xffff) < 0xfb) {
        uVar23 = 7;
      }
      else if ((uVar11 & 0xffff) < 0x12d) {
        uVar23 = 8;
      }
      else if ((uVar11 & 0xffff) < 0x1f5) {
        uVar23 = 9;
      }
      else if ((uVar11 & 0xffff) < 0x2ef) {
        uVar23 = 10;
      }
      else {
        uVar23 = 5;
        if ((uVar11 & 0xffff) < 1000) {
          uVar23 = 0xb;
        }
      }
    }
  }
  local_b0[0] = 0xffffffff;
  local_b0[1] = 0xffffffff;
  local_a8[0] = 0xffffffffffffffff;
  if (DAT_710532f730 != 0) {
    lVar22 = *(long *)(DAT_710532f730 + 8);
    lVar18 = *(long *)(lVar22 + 0x178);
    uVar25 = FUN_71032b23e0(*(long *)(lVar18 + 8),0xd56784f97);
    uVar13 = FUN_71032b1e40(lVar18,uVar25);
    if (-1 < (int)uVar13) {
      uVar25 = FUN_71032b1e40(*(long *)(lVar22 + 0x178),uVar25);
      lVar18 = (uVar25 >> 5 & 0x7ffffff) * 4;
      *(uint *)((long)local_a8 + lVar18 + -8) =
           *(uint *)((long)local_a8 + lVar18 + -8) &
           (1 << (ulong)((uint)uVar25 & 0x1f) ^ 0xffffffffU);
    }
  }
  local_c0 = 0;
  local_b0[0] = 0xffffffff;
  local_b0[1] = 0xffffffff;
  local_a8[0] = 0xffffffffffffffff;
  local_110 = (undefined **)0x69ffff0000000000;
  local_108 = (ulong *)0x0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = (ulong *)0x0;
  uStack_f8 = 0;
  FUN_71017a91b0((long)&local_110,0,(long)local_b0,param_4,param_5,param_6,param_7,param_8);
  FUN_71017a9810((long)&local_110);
  FUN_7103271490((long *)&local_2d8,1,(long ****)0x1,(byte ****)0x1,param_5,param_6,param_7,param_8)
  ;
  puVar26 = (ulong *)CONCAT44(uStack_2d4,local_2d8);
  puVar5 = (ulong *)CONCAT26(uStack_2ca,CONCAT24(uStack_2cc,local_2d0));
  if (puVar26 != puVar5) {
    lVar18 = *(long *)(DAT_710532f730 + 8);
    do {
      uVar25 = *puVar26;
      uVar11 = FUN_71032b3940(*(long *)(lVar18 + 0x178),uVar25);
      if ((uVar11 & 1) == 0) {
        puVar16 = (ulong *)FUN_71017a9500(local_108,local_100,uVar25);
        if (puVar16 != local_100) {
          local_100 = puVar16;
        }
        uVar13 = *puVar26;
        uVar25 = FUN_71032b23e0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8),
                                0xd56784f97);
        if ((((uVar13 & 0xff00000000000000) == 0x6900000000000000) && ((uVar13 & 0xffffffffff) != 0)
            ) && ((uVar25 & 0xff00000000000000) == 0x6900000000000000 &&
                  (uVar25 & 0xffffffffff) != 0)) {
          if (((uVar25 ^ uVar13) & 0xffffffffff) == 0) {
LAB_71022e1318:
            local_c0 = 1;
          }
        }
        else if (((uVar25 & 0xffffffffff) != 0 &&
                 (uVar25 & 0xff00000000000000) == 0x6900000000000000) ==
                 ((uVar13 & 0xff00000000000000) == 0x6900000000000000 &&
                 (uVar13 & 0xffffffffff) != 0)) goto LAB_71022e1318;
      }
      puVar26 = puVar26 + 1;
    } while (puVar5 != puVar26);
    puVar26 = (ulong *)CONCAT44(uStack_2d4,local_2d8);
  }
  if (puVar26 != (ulong *)0x0) {
    local_2d0 = (uint)puVar26;
    uStack_2cc = (undefined2)((ulong)puVar26 >> 0x20);
    uStack_2ca = (undefined2)((ulong)puVar26 >> 0x30);
    FUN_710392eb40((ulong)puVar26);
  }
  uVar25 = FUN_71017a96c0((long)&local_110,0);
  if (((DAT_71053144d8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  DAT_710530a7d0 = FUN_71017a8ca0(uVar25);
  lVar18 = DAT_71052c4c58;
  _DAT_710530a7c8 = 0;
  lVar22 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
  DAT_710530a7b8 = uVar25;
  DAT_710530a7c0 = uVar25;
  if (*(char *)(lVar22 + 0x26a62) == '\0') {
    *(ulong *)(lVar22 + 0x26a90) = *(ulong *)(lVar22 + 0x26a90) | 2;
  }
  DAT_710530a974 = 0;
  DAT_710530a975 = uVar6;
  DAT_710530a976 = 0;
  DAT_710530a978 = local_2e8;
  DAT_710530a97a = local_2ec;
  _DAT_710530a97c = 0xa000500020000;
  _DAT_710530a984 = 0x101000000010100;
  lVar22 = *(long *)(*(long *)(lVar18 + 8) + 0x88);
  DAT_710530a97b = uVar23;
  if (*(char *)(lVar22 + 0x26a62) == '\0') {
    *(ulong *)(lVar22 + 0x26a90) = *(ulong *)(lVar22 + 0x26a90) | 1;
  }
  DAT_7105308760 = 0x400000002;
  if (DAT_7105308768 == 2) {
LAB_71022e1490:
    DAT_7105308768 = 4;
    lVar18 = *(long *)(*(long *)(lVar18 + 8) + 0x88);
    if (*(char *)(lVar18 + 0x26a62) == '\0') {
      *(ulong *)(lVar18 + 0x26a90) = *(ulong *)(lVar18 + 0x26a90) | 1;
    }
  }
  else {
    DAT_7105308768 = 2;
    lVar22 = *(long *)(*(long *)(lVar18 + 8) + 0x88);
    if ((*(char *)(lVar22 + 0x26a62) != '\0') ||
       (*(ulong *)(lVar22 + 0x26a90) = *(ulong *)(lVar22 + 0x26a90) | 1, DAT_7105308768 != 4))
    goto LAB_71022e1490;
  }
  local_2d8 = CONCAT31(local_2d8._1_3_,0xff);
  uStack_2d4 = 0;
  local_2d0 = 0;
  uStack_2cc = 0;
  local_2b4 = 1;
  FUN_71017abd00((undefined8 *)local_2b0);
  local_2a8 = 2;
  puVar27 = *(undefined1 **)(piVar14 + 2);
  lVar18 = *(long *)(lVar28 + 0x168);
  local_2a0 = puVar27;
  local_298 = puVar27;
  puVar17 = FUN_71032631a0(lVar18,0x11b1ccb807);
  if ((((((ulong)puVar27 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar27 & 0xffffffffff) != 0)) &&
      (((ulong)puVar17 & 0xff00000000000000) == 0xc100000000000000)) &&
     (((ulong)puVar17 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar17 ^ (ulong)puVar27) & 0xffffffffff) == 0) goto LAB_71022e15b0;
LAB_71022e1550:
    uVar11 = FUN_71032632a0(lVar18,(ulong)puVar27);
    if ((uVar11 & 1) != 0) {
      local_298 = puVar27;
      local_2a0 = FUN_71032631a0(lVar18,0x11b1ccb807);
    }
  }
  else {
    if ((((ulong)puVar17 & 0xffffffffff) != 0 &&
        ((ulong)puVar17 & 0xff00000000000000) == 0xc100000000000000) !=
        (((ulong)puVar27 & 0xff00000000000000) == 0xc100000000000000 &&
        ((ulong)puVar27 & 0xffffffffff) != 0)) goto LAB_71022e1550;
LAB_71022e15b0:
    local_298 = FUN_7103343530(piVar14[0x42]);
  }
  local_2a4 = 0xffffffff;
  local_2b0[0] = 1;
  uVar11 = FUN_71032633f0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),*(ulong *)(piVar14 + 2));
  local_290 = *(byte *)((long)piVar14 + 0x12);
  local_28f = 1;
  if (uVar11 <= local_290) {
    local_290 = 0;
  }
  lVar28 = *(long *)(*(long *)(lVar28 + 0x2c8) + 8);
  pcVar19 = *(char **)(lVar28 + 0x20);
  if ((*pcVar19 == '\f') && (iVar12 = *(int *)(pcVar19 + 1) + -1, 0 < *(int *)(pcVar19 + 1))) {
    lVar28 = *(long *)(lVar28 + 0x18);
    iVar24 = 0;
    pcVar21 = "";
    do {
      iVar2 = iVar12 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar28 + 0x28) + (long)*(int *)(pcVar19 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar28 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x184730b69e) {
        uVar11 = puVar1[1];
        if ((int)uVar11 < 0) goto LAB_71022e1694;
        pcVar21 = pcVar19 + (int)uVar11;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar25 < 0x184730b69f) {
        iVar24 = iVar2 + 1;
        iVar7 = iVar12;
      }
      iVar12 = iVar7;
    } while (iVar24 <= iVar12);
  }
  else {
LAB_71022e1694:
    pcVar21 = "";
  }
  switch(*pcVar21) {
  case '\x01':
  case '\x03':
    local_28a = (ushort)(byte)pcVar21[1];
    break;
  case '\x02':
    local_28a = (ushort)pcVar21[1];
    break;
  case '\x04':
    local_28a = *(ushort *)(pcVar21 + 1);
    break;
  case '\x05':
    local_28a = *(ushort *)(pcVar21 + 1);
    break;
  case '\x06':
  case '\a':
    local_28a = (ushort)*(undefined4 *)(pcVar21 + 1);
    break;
  default:
    local_28a = 0;
  }
  FUN_71032e1c20(*(long *)(lVar20 + 8),DAT_7105307d50,auStack_1e8);
  FUN_71032e26a0(*(long *)(lVar20 + 8),DAT_7105307d50,auStack_278);
  local_2b4 = DAT_710523d00c;
  FUN_710179e400(0x7105308760,0,(undefined1 *)&local_2d8);
  DAT_710530a9c1 = 1;
  uVar11 = *(uint *)(param_1 + 0x204388);
  if (uVar11 < 3) {
    iVar12 = FUN_710324bb60(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),
                            *(ushort *)((long)piVar14 + 0xa2));
    *(char *)((long)&DAT_7105307fdc + (ulong)uVar11 + 4) = (char)iVar12;
    if (local_d8 != 0) {
      local_d0 = local_d8;
      FUN_710392eb40(local_d8);
    }
    if (local_f0 != 0) {
      local_e8 = local_f0;
      FUN_710392eb40(local_f0);
    }
    if (local_108 != (ulong *)0x0) {
      local_100 = local_108;
      FUN_710392eb40((ulong)local_108);
    }
    if (*(uint *)(param_1 + 0x164) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x164) * 4 + 0x118) = 3;
LAB_71022e17c8:
      FUN_71022e4530(param_1);
      return;
    }
  }
LAB_71022e192c:
                    /* WARNING: Subroutine does not return */
  abort();
}

