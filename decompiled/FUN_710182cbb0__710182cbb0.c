// addr:      710182cbb0
// offset:    0x182cbb0
// name:      FUN_710182cbb0
// mangled:   
// signature: undefined __cdecl FUN_710182cbb0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710182cbb0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 extraout_x1;
  long *********ppppppppplVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined4 uVar14;
  ulong *puVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  ulong *puVar21;
  ushort *puVar22;
  long lVar23;
  ulong local_2258;
  ulong local_2250;
  undefined8 local_2248;
  undefined8 local_2240;
  undefined8 local_2238;
  undefined8 local_2230;
  undefined2 local_2228;
  undefined8 local_2226;
  undefined4 local_221e;
  undefined2 uStack_221a;
  undefined1 uStack_2218;
  undefined1 uStack_2217;
  undefined2 uStack_2216;
  undefined4 uStack_2214;
  undefined2 local_2210;
  undefined1 local_220e;
  int local_21f8 [2];
  undefined1 local_21f0;
  undefined1 local_21ef;
  undefined8 local_21ec;
  undefined8 local_21e4;
  undefined1 local_21dc;
  undefined8 local_219c;
  undefined1 local_2194;
  undefined8 local_2154;
  undefined1 local_214c;
  undefined1 auStack_210c [4096];
  undefined1 uStack_110c;
  undefined4 local_1108;
  undefined1 uStack_1104;
  undefined8 local_1100;
  undefined1 uStack_10f8;
  undefined4 local_10b8;
  undefined4 local_10b4;
  uint local_10b0;
  undefined4 local_10ac;
  undefined1 local_10a8;
  byte abStack_10a7 [31];
  undefined8 local_1088;
  undefined4 local_1080;
  undefined1 auStack_1068 [4104];
  
  if (*(int *)(param_1 + 0xdc) != 0) {
    if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) == '\0') {
      return;
    }
    if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) != '\0') {
      return;
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (*(int *)(param_1 + 0x118) == 1) {
      DAT_7105308320 = 0;
      uVar18 = *(uint *)(param_1 + 0xd4);
      if (uVar18 < 0x13) {
        uVar14 = 1;
LAB_710182cf58:
        *(undefined4 *)(param_1 + (long)(int)uVar18 * 4 + 0x88) = uVar14;
        uVar14 = *(undefined4 *)(param_1 + 0x118);
        *(undefined4 *)(param_1 + 0x118) = 0;
        *(undefined4 *)(param_1 + 0x114) = uVar14;
        return;
      }
    }
    else if (*(int *)(param_1 + 0x118) == 2) {
      DAT_7105308320 = 1;
      uVar18 = *(uint *)(param_1 + 0xd4);
      if (uVar18 < 0x13) {
        uVar14 = 2;
        goto LAB_710182cf58;
      }
    }
    else {
      DAT_7105308320 = 0;
      if (*(uint *)(param_1 + 0xd4) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xd4) * 4 + 0x88) = 3;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar18 = *(uint *)(param_1 + 0x118);
  bVar3 = (int)uVar18 < *(int *)(param_1 + 0x114);
  if ((uVar18 == 0) && (*(int *)(param_1 + 0x11c) != 2)) {
    bVar3 = false;
    uVar19 = 1;
  }
  else if (*(int *)(param_1 + 0x114) == 0) {
    if (uVar18 == 1) {
      bVar3 = *(char *)(param_1 + 0x110) != '\0';
      uVar19 = 1;
    }
    else {
      uVar19 = (uint)(uVar18 == 2);
      bVar3 = 0x7fffffff < uVar18;
    }
  }
  else {
    uVar19 = 0;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar4 = DAT_71053050f0;
  local_21f8[0] = 0;
  local_21f8[1] = 0;
  local_21ef = 1;
  local_21ec = 0x100000000;
  local_21dc = 0;
  local_21e4 = 0;
  local_2194 = 0;
  local_219c = 0;
  local_214c = 0;
  local_2154 = 0;
  memset(auStack_210c,0,0x1000);
  uStack_110c = 1;
  local_1108 = 0;
  uStack_1104 = 1;
  uStack_10f8 = 0;
  local_1100 = 0;
  local_10b8 = 0x20;
  memset(auStack_1068,0,0x1000);
  local_10ac = 0;
  local_10a8 = 0;
  local_10b4 = 0;
  local_10b0 = 0;
  local_21f0 = 1;
  FUN_7101af73b0((long)local_21f8,uVar4);
  if (uVar18 != 2) {
    if (uVar18 != 1) {
      return;
    }
    local_2238 = local_2238 & 0xffffffffffffff00;
    local_2248 = 0;
    local_2240 = (undefined **)0x811c9dc5;
    local_2258 = 0;
    local_2250 = 0;
    FUN_7101af7560((long)local_21f8,(uint *)&local_2240,(long *)&local_2258);
    if (local_2258 != 0) {
      local_2250 = local_2258;
      FUN_710392eb40(local_2258);
    }
    local_1108 = 0;
    local_10b4 = 1;
    lVar20 = *(long *)(param_1 + 0x100);
    lVar6 = *(long *)(lVar20 + 0x80);
    puVar12 = *(undefined8 **)(lVar6 + 0x10);
    if (*(undefined8 **)(lVar6 + 0x18) == puVar12) goto LAB_710182dbc0;
    FUN_7103775dc0((long *)**(undefined8 **)*puVar12,0,(long ****)0x1001,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined1 *)(lVar20 + 0x70) = 0;
    lVar6 = *(long *)(*(long *)(param_1 + 0x100) + 0x80);
    puVar12 = *(undefined8 **)(lVar6 + 0x40);
    if (puVar12 != (undefined8 *)0x0) {
      if ((long *)*puVar12 != (long *)0x0) {
        FUN_7103375650((long *)*puVar12,"IS_BACK",&DAT_71043cdb7b);
        puVar12 = *(undefined8 **)(lVar6 + 0x40);
        if ((long *)*puVar12 != (long *)0x0) {
          FUN_7103375650((long *)*puVar12,"IS_FROM_SELECT",&DAT_71043cdb7b);
          puVar12 = *(undefined8 **)(lVar6 + 0x40);
        }
      }
      if ((long *)*puVar12 != (long *)0x0) {
        FUN_7103375650((long *)*puVar12,"BUTTON_ID_INIT",&DAT_71042b2a84);
      }
      FUN_7103376980((undefined8 *)**(undefined8 **)(lVar6 + 0x40));
    }
    goto LAB_710182d8c0;
  }
  local_1108 = 0;
  local_10b4 = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  switch(DAT_7105308300) {
  case 0:
    local_2240._4_4_ = 0x23;
    local_2230 = 0x656764656c776f6e;
    local_2228 = 0x6c5f;
    local_2226 = 0x686769665f747369;
    local_221e = 0x5f726574;
    uStack_221a = 0x6974;
    uStack_2218 = 0x74;
    uStack_2217 = 0x6c;
    uStack_2216 = 0x65;
    uVar4 = 0x811c9dc5;
    uVar17 = 0x6d;
    lVar6 = 9;
    do {
      uVar4 = uVar4 * 0x89 ^ uVar17;
      uVar17 = (uint)*(byte *)((long)&local_2240 + lVar6);
      lVar6 = lVar6 + 1;
    } while (uVar17 != 0);
    break;
  case 1:
    local_2230 = 0x656764656c776f6e;
    local_2228 = 0x6c5f;
    local_2226 = 0x686769665f747369;
    local_221e = 0x5f726574;
    uStack_221a = 0x6f63;
    local_2240._4_4_ = 0x2a;
    uVar4 = 0x811c9dc5;
    local_220e = 0;
    uStack_2218 = 0x6d;
    uStack_2217 = 0x6d;
    uStack_2216 = 0x6e6f;
    uStack_2214 = 0x7469745f;
    uVar17 = 0x6d;
    local_2210 = 0x656c;
    lVar6 = 9;
    do {
      uVar4 = uVar4 * 0x89 ^ uVar17;
      uVar17 = (uint)*(byte *)((long)&local_2240 + lVar6);
      lVar6 = lVar6 + 1;
    } while (uVar17 != 0);
    break;
  case 2:
    local_2240._4_4_ = 0x23;
    local_2230 = 0x656764656c776f6e;
    local_2228 = 0x6c5f;
    local_2226 = 0x726970735f747369;
    local_221e = 0x5f737469;
    uStack_221a = 0x6974;
    uStack_2218 = 0x74;
    uStack_2217 = 0x6c;
    uStack_2216 = 0x65;
    uVar4 = 0x811c9dc5;
    uVar17 = 0x6d;
    lVar6 = 9;
    do {
      uVar4 = uVar4 * 0x89 ^ uVar17;
      uVar17 = (uint)*(byte *)((long)&local_2240 + lVar6);
      lVar6 = lVar6 + 1;
    } while (uVar17 != 0);
    break;
  case 3:
    local_2230 = 0x656764656c776f6e;
    local_2228 = 0x6c5f;
    local_2226 = 0x6d6574695f747369;
    local_2240._4_4_ = 0x20;
    uVar4 = 0x811c9dc5;
    uStack_2218 = 0;
    local_221e = 0x7469745f;
    uStack_221a = 0x656c;
    uVar17 = 0x6d;
    lVar6 = 9;
    do {
      uVar4 = uVar4 * 0x89 ^ uVar17;
      uVar17 = (uint)*(byte *)((long)&local_2240 + lVar6);
      lVar6 = lVar6 + 1;
    } while (uVar17 != 0);
    break;
  case 4:
    local_2230 = 0x656764656c776f6e;
    local_2240._4_4_ = 0x21;
    local_2228 = 0x6c5f;
    local_2226 = 0x676174735f747369;
    local_221e = 0x69745f65;
    uStack_221a = 0x6c74;
    uStack_2218 = 0x65;
    uStack_2217 = 0;
    uVar4 = 0x811c9dc5;
    uVar17 = 0x6d;
    lVar6 = 9;
    do {
      uVar4 = uVar4 * 0x89 ^ uVar17;
      uVar17 = (uint)*(byte *)((long)&local_2240 + lVar6);
      lVar6 = lVar6 + 1;
    } while (uVar17 != 0);
    break;
  case 5:
    local_2240._4_4_ = 0x1f;
    local_221e = 0x6c746974;
    local_2230 = 0x656764656c776f6e;
    local_2228 = 0x6c5f;
    local_2226 = 0x5f6374655f747369;
    uStack_221a = 0x65;
    uVar4 = 0x811c9dc5;
    uVar17 = 0x6d;
    lVar6 = 9;
    do {
      uVar4 = uVar4 * 0x89 ^ uVar17;
      uVar17 = (uint)*(byte *)((long)&local_2240 + lVar6);
      lVar6 = lVar6 + 1;
    } while (uVar17 != 0);
    break;
  default:
    goto switchD_710182cea0_default;
  }
  local_2228 = 0x6c5f;
  local_2230 = 0x656764656c776f6e;
  local_2238 = 0x6b616d735f756e6d;
  local_2240 = (undefined **)CONCAT44(local_2240._4_4_,uVar4);
  local_2250 = 0;
  local_2248 = 0;
  local_2258 = 0;
  FUN_7101af7560((long)local_21f8,(uint *)&local_2240,(long *)&local_2258);
  if (local_2258 != 0) {
    local_2250 = local_2258;
    FUN_710392eb40(local_2258);
  }
switchD_710182cea0_default:
  lVar20 = *(long *)(param_1 + 0x108);
  lVar6 = *(long *)(lVar20 + 0x80);
  puVar12 = *(undefined8 **)(lVar6 + 0x10);
  if (*(undefined8 **)(lVar6 + 0x18) == puVar12) {
LAB_710182dbc0:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  ppppppppplVar9 = (long *********)0x1002;
  FUN_7103775dc0((long *)**(undefined8 **)*puVar12,0,(long ****)0x1002,param_4,param_5,param_6,
                 param_7,param_8);
  *(undefined1 *)(lVar20 + 0x70) = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x108) + 0x80);
  cVar2 = *(char *)(param_1 + 0x111);
  if (*(undefined8 **)(lVar6 + 0x18) == *(undefined8 **)(lVar6 + 0x10)) goto LAB_710182dbc0;
  FUN_7103776910(&local_2240,**(long **)**(undefined8 **)(lVar6 + 0x10) + 8,
                 (long ****)"set_rep_fighter_icon",ppppppppplVar9,param_4,param_5,param_6,param_7,
                 param_8);
  uVar11 = local_2238;
  FUN_71037790a0(local_2238,1,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
  lVar20 = DAT_710532f8e0;
  lVar23 = *(long *)(DAT_710532f8e0 + 8);
  uVar4 = FUN_7103318640(lVar23,2,(long ****)ppppppppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (((uVar4 & 1) != 0) || (*(char *)(lVar23 + 0x28) == '\0')) {
    FUN_71033264b0(lVar23,extraout_x1,(long ****)ppppppppplVar9,param_4,param_5,param_6,param_7,
                   param_8);
  }
  *(char *)(lVar6 + 0x1bc) = cVar2;
  ppuVar10 = (undefined **)(lVar6 + 0x1c0);
  FUN_7103340ce0(*(long *)(lVar20 + 8),(ulong)(cVar2 != '\0'),(long *)ppuVar10,param_4,param_5,
                 param_6,param_7,param_8);
  if (*(undefined8 **)(lVar6 + 0x40) == (undefined8 *)0x0) goto LAB_710182d8a8;
  plVar7 = (long *)**(undefined8 **)(lVar6 + 0x40);
  if (plVar7 != (long *)0x0) {
    ppuVar10 = (undefined **)&DAT_71042b2a84;
    param_4 = (byte ****)0x0;
    FUN_7103375650(plVar7,"ITEM_INDEX_INIT",&DAT_71042b2a84);
    if ((long *)**(undefined8 **)(lVar6 + 0x40) != (long *)0x0) {
      ppuVar10 = (undefined **)&DAT_71043cdb7b;
      param_4 = (byte ****)(ulong)uVar19;
      FUN_7103375650((long *)**(undefined8 **)(lVar6 + 0x40),"IS_FROM_SELECT",&DAT_71043cdb7b);
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    ppuVar10 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar5 = *(int *)(lVar6 + 0x1b8);
  if (iVar5 != DAT_7105308300) {
    puVar21 = *(ulong **)(lVar6 + 0x170);
    puVar13 = *(ulong **)(lVar6 + 0x178);
    if (puVar21 != puVar13) {
      do {
        plVar7 = *(long **)(lVar6 + 0x130);
        puVar15 = puVar21 + 1;
        uVar11 = FUN_7103238c50(*puVar21,0xe);
        FUN_710323ecb0((undefined8 *)(*plVar7 + 0x38),uVar11,(long *********)ppuVar10,param_4,
                       param_5,param_6,param_7,param_8);
        puVar21 = puVar15;
      } while (puVar13 != puVar15);
      puVar21 = *(ulong **)(lVar6 + 0x170);
    }
    *(ulong **)(lVar6 + 0x178) = puVar21;
    puVar22 = *(ushort **)(lVar6 + 0x1a0);
    puVar1 = *(ushort **)(lVar6 + 0x1a8);
    if (puVar22 != puVar1) {
      do {
        if (*puVar22 != 0xffff) {
          FUN_710259c720(*(long *)(*DAT_7105329f98 + 0x20),1,*puVar22,0,param_5,param_6,param_7,
                         param_8);
        }
        puVar22 = puVar22 + 1;
      } while (puVar1 != puVar22);
      puVar22 = *(ushort **)(lVar6 + 0x1a0);
    }
    *(ushort **)(lVar6 + 0x1a8) = puVar22;
    iVar5 = DAT_7105308300;
    *(int *)(lVar6 + 0x1b8) = DAT_7105308300;
  }
  if ((long *)**(undefined8 **)(lVar6 + 0x40) != (long *)0x0) {
    FUN_7103375650((long *)**(undefined8 **)(lVar6 + 0x40),"IS_FADE_OUT",&DAT_71043cdb7b);
    iVar5 = *(int *)(lVar6 + 0x1b8);
  }
  *(undefined4 *)(lVar6 + 0x238) = 0xffffffff;
  switch(iVar5) {
  case 0:
    if ((long *)**(undefined8 **)(lVar6 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(lVar6 + 0x40),"SUB_CATEGORY_ANIM_TAG",&DAT_71042d5020
                    );
    }
    puVar8 = DAT_7105308308;
    puVar21 = *(ulong **)(lVar6 + 0x1c0);
    puVar13 = *(ulong **)(lVar6 + 0x1c8);
    if (*(char *)(lVar6 + 0x1bc) == '\0') {
      lVar20 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
      uVar4 = FUN_71032638e0(lVar20,(ulong)DAT_7105308308);
      if ((uVar4 & 1) != 0) {
        puVar8 = FUN_71032631a0(lVar20,0xfd03198f0);
      }
    }
    puVar15 = puVar21;
    if (puVar21 == puVar13) {
joined_r0x00710182d824:
      if (puVar13 != puVar15) {
LAB_710182d828:
        uVar11 = (long)puVar15 - (long)puVar21;
LAB_710182d840:
        *(int *)(lVar6 + 0x238) = (int)(uVar11 >> 3);
      }
    }
    else {
      if ((((ulong)puVar8 & 0xff00000000000000) != 0xc100000000000000) ||
         (((ulong)puVar8 & 0xffffffffff) == 0)) {
        if (((*puVar21 & 0xff00000000000000) != 0xc100000000000000) ||
           ((*puVar21 & 0xffffffffff) == 0)) goto joined_r0x00710182d824;
        do {
          puVar15 = puVar15 + 1;
          if (puVar13 == puVar15) goto LAB_710182d848;
        } while (((*puVar15 & 0xff00000000000000) == 0xc100000000000000) &&
                ((*puVar15 & 0xffffffffff) != 0));
        if (puVar13 == puVar15) break;
        goto LAB_710182d828;
      }
      do {
        uVar11 = *puVar15;
        if (((uVar11 & 0xff00000000000000) == 0xc100000000000000 && (uVar11 & 0xffffffffff) != 0) &&
            (((ulong)puVar8 ^ uVar11) & 0xffffffffff) == 0) goto joined_r0x00710182d824;
        puVar15 = puVar15 + 1;
      } while (puVar13 != puVar15);
    }
    break;
  case 1:
    plVar7 = (long *)**(undefined8 **)(lVar6 + 0x40);
    goto joined_r0x00710182d714;
  case 2:
    if ((long *)**(undefined8 **)(lVar6 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(lVar6 + 0x40),"SUB_CATEGORY_ANIM_TAG",&DAT_71042d5020
                    );
    }
    *(undefined4 *)(lVar6 + 0x238) = 0;
    break;
  case 3:
    if ((long *)**(undefined8 **)(lVar6 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(lVar6 + 0x40),"SUB_CATEGORY_ANIM_TAG",&DAT_71042d5020
                    );
    }
    *(undefined4 *)(lVar6 + 0x238) = 0;
    break;
  case 4:
    if ((long *)**(undefined8 **)(lVar6 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(lVar6 + 0x40),"SUB_CATEGORY_ANIM_TAG",&DAT_71042d5020
                    );
    }
    lVar20 = *(long *)(lVar20 + 8);
    puVar15 = *(ulong **)(lVar20 + 0x208);
    puVar13 = *(ulong **)(lVar20 + 0x200);
    puVar21 = puVar13;
    if (puVar13 == puVar15) {
joined_r0x00710182d838:
      if (puVar15 != puVar21) {
LAB_710182d83c:
        uVar11 = (long)puVar21 - (long)puVar13;
        goto LAB_710182d840;
      }
    }
    else {
      if (((DAT_7105308318 & 0xff00000000000000) != 0x6900000000000000) ||
         ((DAT_7105308318 & 0xffffffffff) == 0)) {
        if (((*puVar13 & 0xff00000000000000) != 0x6900000000000000) ||
           ((*puVar13 & 0xffffffffff) == 0)) goto joined_r0x00710182d838;
        do {
          puVar21 = puVar21 + 1;
          if (puVar15 == puVar21) goto LAB_710182d848;
        } while (((*puVar21 & 0xff00000000000000) == 0x6900000000000000) &&
                ((*puVar21 & 0xffffffffff) != 0));
        if (puVar15 == puVar21) break;
        goto LAB_710182d83c;
      }
      do {
        uVar11 = *puVar21;
        if (((uVar11 & 0xff00000000000000) == 0x6900000000000000 && (uVar11 & 0xffffffffff) != 0) &&
            ((DAT_7105308318 ^ uVar11) & 0xffffffffff) == 0) goto joined_r0x00710182d838;
        puVar21 = puVar21 + 1;
      } while (puVar15 != puVar21);
    }
    break;
  default:
    plVar7 = (long *)**(undefined8 **)(lVar6 + 0x40);
joined_r0x00710182d714:
    if (plVar7 != (long *)0x0) {
      FUN_7103375650(plVar7,"SUB_CATEGORY_ANIM_TAG",&DAT_71042d5020);
    }
  }
LAB_710182d848:
  if ((long *)**(undefined8 **)(lVar6 + 0x40) != (long *)0x0) {
    FUN_7103375650((long *)**(undefined8 **)(lVar6 + 0x40),"SUB_CATEGORY_NUM",&DAT_71042b2a84);
    if ((long *)**(undefined8 **)(lVar6 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(lVar6 + 0x40),"SUB_CATEGORY_INIT",&DAT_71042b2a84);
    }
  }
  FUN_7101add200(lVar6,*(int *)(lVar6 + 0x238));
  FUN_7103376980((undefined8 *)**(undefined8 **)(lVar6 + 0x40));
  uVar11 = local_2238;
LAB_710182d8a8:
  local_2240 = &PTR_FUN_710523d9a8;
  local_2238 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
LAB_710182d8c0:
  uVar4 = 1;
  if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x69) != '\0') {
    uVar4 = 2;
  }
  if (((uVar18 != 1) || ((bool)(bVar3 ^ 1))) || (uVar19 != 1)) {
    lVar6 = *(long *)(param_1 + 0xf0);
    uVar11 = 1;
    goto LAB_710182da98;
  }
  if (DAT_7105308300 == 4) {
    abStack_10a7[0] = 0x6e;
    abStack_10a7[1] = 0x75;
    abStack_10a7[2] = 0x5f;
    abStack_10a7[3] = 0x73;
    abStack_10a7[4] = 0x6d;
    abStack_10a7[5] = 0x61;
    abStack_10a7[6] = 0x6b;
    abStack_10a7[7] = 0x6e;
    abStack_10a7[8] = 0x6f;
    abStack_10a7[9] = 0x77;
    abStack_10a7[10] = 0x6c;
    abStack_10a7[0xb] = 0x65;
    abStack_10a7[0xc] = 100;
    abStack_10a7[0xd] = 0x67;
    abStack_10a7[0xe] = 0x65;
    abStack_10a7[0xf] = 0x5f;
    abStack_10a7[0x10] = 99;
    abStack_10a7[0x11] = 0x61;
    abStack_10a7[0x12] = 0x74;
    abStack_10a7[0x13] = 0x65;
    abStack_10a7[0x14] = 0x67;
    abStack_10a7[0x15] = 0x6f;
    abStack_10a7[0x16] = 0x72;
    abStack_10a7[0x17] = 0x79;
    abStack_10a7[0x18] = 0x5f;
    abStack_10a7[0x19] = 0x68;
    abStack_10a7[0x1a] = 0x65;
    abStack_10a7[0x1b] = 0x6c;
    abStack_10a7[0x1c] = 0x70;
    abStack_10a7[0x1d] = 0x5f;
    abStack_10a7[0x1e] = 0x73;
    local_1088 = CONCAT35(local_1088._5_3_,0x65676174);
    local_10ac = 0x24;
    local_10b0 = 0x811c9dc5;
    uVar18 = 0x6d;
    pbVar16 = abStack_10a7;
    do {
      local_10b0 = local_10b0 * 0x89 ^ uVar18;
      uVar18 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar18 != 0);
LAB_710182da80:
    abStack_10a7[0x19] = 0x68;
    abStack_10a7[0x1a] = 0x65;
    abStack_10a7[0x1b] = 0x6c;
    abStack_10a7[0x1c] = 0x70;
    abStack_10a7[0x11] = 0x61;
    abStack_10a7[0x12] = 0x74;
    abStack_10a7[0x13] = 0x65;
    abStack_10a7[0x14] = 0x67;
    abStack_10a7[0x15] = 0x6f;
    abStack_10a7[0x16] = 0x72;
    abStack_10a7[0x17] = 0x79;
    abStack_10a7[0x18] = 0x5f;
    abStack_10a7[0xf] = 0x5f;
    abStack_10a7[0x10] = 99;
    abStack_10a7[7] = 0x6e;
    abStack_10a7[8] = 0x6f;
    abStack_10a7[9] = 0x77;
    abStack_10a7[10] = 0x6c;
    abStack_10a7[0xb] = 0x65;
    abStack_10a7[0xc] = 100;
    abStack_10a7[0xd] = 0x67;
    abStack_10a7[0xe] = 0x65;
    abStack_10a7[0] = 0x6e;
    abStack_10a7[1] = 0x75;
    abStack_10a7[2] = 0x5f;
    abStack_10a7[3] = 0x73;
    abStack_10a7[4] = 0x6d;
    abStack_10a7[5] = 0x61;
    abStack_10a7[6] = 0x6b;
    local_10a8 = 0x6d;
  }
  else if (DAT_7105308300 == 0) {
    abStack_10a7[0] = 0x6e;
    abStack_10a7[1] = 0x75;
    abStack_10a7[2] = 0x5f;
    abStack_10a7[3] = 0x73;
    abStack_10a7[4] = 0x6d;
    abStack_10a7[5] = 0x61;
    abStack_10a7[6] = 0x6b;
    abStack_10a7[7] = 0x6e;
    abStack_10a7[8] = 0x6f;
    abStack_10a7[9] = 0x77;
    abStack_10a7[10] = 0x6c;
    abStack_10a7[0xb] = 0x65;
    abStack_10a7[0xc] = 100;
    abStack_10a7[0xd] = 0x67;
    abStack_10a7[0xe] = 0x65;
    abStack_10a7[0xf] = 0x5f;
    abStack_10a7[0x10] = 99;
    abStack_10a7[0x11] = 0x61;
    abStack_10a7[0x12] = 0x74;
    abStack_10a7[0x13] = 0x65;
    abStack_10a7[0x14] = 0x67;
    abStack_10a7[0x15] = 0x6f;
    abStack_10a7[0x16] = 0x72;
    abStack_10a7[0x17] = 0x79;
    abStack_10a7[0x18] = 0x5f;
    local_10b0 = 0x811c9dc5;
    abStack_10a7[0x19] = 0x68;
    abStack_10a7[0x1a] = 0x65;
    abStack_10a7[0x1b] = 0x6c;
    abStack_10a7[0x1c] = 0x70;
    abStack_10a7[0x1d] = 0x5f;
    abStack_10a7[0x1e] = 0x66;
    local_1080 = 0x686361;
    local_1088 = 0x655f726574686769;
    local_10ac = 0x2b;
    uVar18 = 0x6d;
    pbVar16 = abStack_10a7;
    do {
      local_10b0 = local_10b0 * 0x89 ^ uVar18;
      uVar18 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar18 != 0);
    goto LAB_710182da80;
  }
  local_10b4 = 1;
  lVar6 = *(long *)(param_1 + 0xf0);
  uVar11 = 0;
LAB_710182da98:
  FUN_7101af8570(lVar6,local_21f8,uVar11,(ulong)uVar4,param_5,param_6,param_7,param_8);
  return;
}

