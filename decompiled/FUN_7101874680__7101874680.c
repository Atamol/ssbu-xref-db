// addr:      7101874680
// offset:    0x1874680
// name:      FUN_7101874680
// mangled:   
// signature: undefined __cdecl FUN_7101874680(long param_1)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101874680(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  char *pcVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long ****in_x4;
  ulong in_x5;
  long ***in_x6;
  long ***in_x7;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  float fVar28;
  undefined1 local_2280;
  undefined **local_2278;
  undefined **local_2270;
  undefined8 uStack_2268;
  undefined8 local_2260;
  undefined8 local_2258;
  undefined8 local_2250;
  undefined2 local_2248;
  undefined2 uStack_2246;
  undefined1 uStack_2244;
  undefined5 uStack_2243;
  undefined2 local_223e;
  undefined1 local_223c;
  undefined8 local_2218;
  undefined1 local_2210;
  undefined1 local_220f;
  undefined8 local_220c;
  undefined8 local_2204;
  undefined1 local_21fc;
  undefined8 local_21bc;
  undefined1 local_21b4;
  undefined8 local_2174;
  undefined1 local_216c;
  undefined1 auStack_212c [4096];
  undefined1 uStack_112c;
  undefined4 local_1128;
  undefined1 uStack_1124;
  undefined8 local_1120;
  undefined8 local_1118;
  undefined4 local_1110;
  undefined2 local_110c;
  undefined4 local_10d8;
  undefined4 local_10d4;
  uint local_10d0;
  undefined4 local_10cc;
  byte local_10c8 [64];
  undefined1 auStack_1088 [4096];
  long ***local_88;
  undefined4 local_7c [3];
  
  if (*(int *)(param_1 + 0xac) == 0) {
    plVar21 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
    if ((plVar21 != (long *)0x0) &&
       (uVar7 = (**(code **)(*plVar21 + 0x48))(plVar21), (uVar7 & 1) != 0)) {
      (**(code **)(*plVar21 + 0x38))(plVar21,1,2);
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  lVar23 = DAT_710532f8b0;
  if (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x328) == '\0') {
    return;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar19 = DAT_71053050f0;
  local_220f = 1;
  local_2218 = 0;
  local_220c = 0x100000000;
  local_21fc = 0;
  local_2204 = 0;
  uVar24 = 0x811c9dc5;
  local_21b4 = 0;
  local_21bc = 0;
  local_2174 = 0;
  local_216c = 0;
  memset(auStack_212c,0,0x1000);
  uStack_112c = 1;
  local_1128 = 0;
  uStack_1124 = 1;
  local_1118 = local_1118 & 0xffffffffffffff00;
  local_1120 = 0;
  local_10d8 = 0x20;
  memset(auStack_1088,0,0x1000);
  local_10cc = 0;
  local_10c8[0] = 0;
  local_10d4 = 0;
  local_10d0 = 0;
  local_2210 = 1;
  FUN_7101af73b0((long)&local_2218,uVar19);
  uStack_2244 = 0;
  local_2258 = (undefined8 *)&DAT_765f70735f6c656d;
  local_2250 = 0x745f73756f697261;
  uVar18 = 0x6d;
  lVar15 = 9;
  local_2248 = 0x7469;
  uStack_2246 = 0x656c;
  uVar19 = uVar24;
  do {
    uVar19 = uVar19 * 0x89 ^ uVar18;
    uVar18 = (uint)*(byte *)((long)&local_2260 + lVar15);
    lVar15 = lVar15 + 1;
  } while (uVar18 != 0);
  local_2260 = (undefined **)CONCAT44(0x14,uVar19);
  local_2270 = (undefined **)0x0;
  uStack_2268 = 0;
  local_2278 = (undefined **)0x0;
  FUN_7101af7560((long)&local_2218,(uint *)&local_2260,(long *)&local_2278);
  if (local_2278 != (undefined **)0x0) {
    local_2270 = local_2278;
    FUN_710392eb40((ulong)local_2278);
  }
  local_2250 = 0x635f73756f697261;
  local_2248 = 0x7461;
  local_2258 = (undefined8 *)&DAT_765f70735f6c656d;
  uStack_2246 = 0x6765;
  uStack_2244 = 0x6f;
  uStack_2243 = 0x69735f7972;
  local_223e = 0x657a;
  uVar18 = 0x6d;
  local_223c = 0;
  pbVar16 = (byte *)((long)&local_2258 + 1);
  uVar19 = uVar24;
  do {
    uVar19 = uVar19 * 0x89 ^ uVar18;
    uVar18 = (uint)*pbVar16;
    pbVar16 = pbVar16 + 1;
  } while (uVar18 != 0);
  local_2260 = (undefined **)CONCAT44(0x1c,uVar19);
  uVar7 = 0;
  bVar20 = 0x6d;
  do {
    local_10c8[uVar7] = bVar20;
    if (0x3e < (int)uVar7 + 1U) {
      uVar7 = (ulong)((int)uVar7 + 1);
      break;
    }
    bVar5 = *(byte *)((long)&local_2258 + uVar7 + 1);
    if (bVar5 == 0) {
      uVar7 = uVar7 + 1;
      break;
    }
    bVar20 = *(byte *)((long)&local_2258 + uVar7 + 2);
    local_10c8[uVar7 + 1] = bVar5;
    uVar7 = uVar7 + 2;
  } while (bVar20 != 0);
  local_10c8[uVar7 & 0xffffffff] = 0;
  local_10cc = (int)uVar7;
  uVar19 = (uint)local_10c8[0];
  local_10d0 = uVar24;
  if (local_10c8[0] != 0) {
    pbVar16 = local_10c8;
    do {
      pbVar16 = pbVar16 + 1;
      local_10d0 = local_10d0 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar16;
    } while (uVar19 != 0);
  }
  local_10d4 = 1;
  local_1110 = 0x6f5f7265;
  local_1118 = 0x746f6f665f756e6d;
  local_110c = 0x6b;
  uVar19 = 0x6d;
  lVar15 = 0x1101;
  do {
    uVar24 = uVar24 * 0x89 ^ uVar19;
    uVar19 = (uint)*(byte *)((long)&local_2218 + lVar15);
    lVar15 = lVar15 + 1;
  } while (uVar19 != 0);
  local_1128 = 6;
  local_1120 = CONCAT44(0xd,uVar24);
  uVar19 = 1;
  if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x69) != '\0') {
    uVar19 = 2;
  }
  ppppbVar14 = (byte ****)(ulong)uVar19;
  pcVar12 = (char *)(ulong)(*(char *)(param_1 + 0xe0) == '\0');
  FUN_7101af8570(*(long *)(param_1 + 200),(int *)&local_2218,(ulong)pcVar12,ppppbVar14,in_x4,in_x5,
                 in_x6,in_x7);
  lVar15 = *(long *)(*(long *)(param_1 + 0xd0) + 0x80);
  if (*(int *)(lVar15 + 8) != -1) {
    puVar22 = *(undefined8 **)(lVar15 + 0x18);
    *(undefined4 *)(lVar15 + 8) = 0xffffffff;
    uVar9 = extraout_x1;
    if (puVar22 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      FUN_7103375760(puVar22);
      FUN_710392eb40((ulong)puVar22);
      uVar9 = extraout_x1_00;
    }
    puVar22 = *(undefined8 **)(lVar15 + 0x10);
    if (puVar22 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      puVar25 = (undefined8 *)*puVar22;
      *puVar22 = 0;
      if (puVar25 != (undefined8 *)0x0) {
        FUN_7103773770(puVar25,uVar9,(long ****)pcVar12,ppppbVar14,in_x4,in_x5,in_x6,in_x7);
        FUN_710392eb40((ulong)puVar25);
      }
      FUN_710392eb40((ulong)puVar22);
    }
  }
  uVar3 = ram0x0071053055dc;
  uVar9 = _DAT_71053055d4;
  if (*(int *)(param_1 + 0xdc) == 0) {
    *(undefined1 *)(param_1 + 0xf4) = DAT_71053055e3._1_1_;
    *(undefined8 *)(param_1 + 0xec) = uVar3;
    *(undefined8 *)(param_1 + 0xe4) = uVar9;
  }
  if (DAT_710532f7a0 != (undefined8 *)0x0) {
    lVar23 = *(long *)(lVar23 + 8);
    pcVar12 = (char *)(ulong)*(byte *)(lVar23 + 0x2b8);
    ppppbVar14 = (byte ****)(ulong)(*(char *)(param_1 + 0xf3) != '\x01');
    FUN_71032ca050((uint *)*DAT_710532f7a0,0,pcVar12,ppppbVar14,in_x4,in_x5,in_x6,in_x7);
    *(undefined1 *)(*lib::Singleton<app::FighterManager>::instance_ + 0xd0) =
         *(undefined1 *)(lVar23 + 0x2d0);
  }
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    plVar21 = *(long **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x80) + 0x40);
    if (plVar21 != (long *)0x0) {
      if (*plVar21 != 0) {
        local_2260 = (undefined **)0x0;
        FUN_71037aea50(&local_2260,"f",(long ****)pcVar12,ppppbVar14,in_x4,in_x5,in_x6,in_x7);
        plVar21 = (long *)*plVar21;
        lVar15 = *plVar21;
        lVar23 = 0;
        if (lVar15 != 0) {
          lVar23 = *(long *)(*(long *)(lVar15 + 0x18) + 0x40);
          if (*(uint *)(lVar23 + 0xc) < 2) {
            plVar10 = (long *)(*(long *)(lVar23 + 0x18) +
                              ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar23 + 0xb) & 0x3f)
                                             ) & 2) * 0x20);
            do {
              if (((int)plVar10[3] == 0x13) && (plVar11 = plVar10, plVar10[2] == 2)) break;
              piVar1 = (int *)((long)plVar10 + 0x1c);
              plVar10 = plVar10 + (long)*piVar1 * 4;
              plVar11 = &DAT_7104862960;
            } while (*piVar1 != 0);
          }
          else {
            plVar11 = (long *)(*(long *)(lVar23 + 0x10) + 0x10);
          }
          pcVar12 = "fighter_scale_big";
          FUN_71038f4d40(lVar15,plVar11,"fighter_scale_big");
          lVar23 = *plVar21;
        }
        FUN_710372d940(lVar23,&local_2260,pcVar12,ppppbVar14,in_x4,in_x5,in_x6,in_x7);
        ppuVar26 = local_2260;
        if (local_2260 != (undefined **)0x0) {
          puVar2 = local_2260[2];
          fVar28 = *(float *)local_2260[1];
          lVar23 = 0;
          do {
            if (puVar2[lVar23] == 's') {
              puVar27 = ppuVar26[1];
              uVar7 = *(ulong *)(puVar27 + lVar23 * 8);
              if (uVar7 != 0) {
                FUN_710392eb40(uVar7);
              }
              *(undefined8 *)(puVar27 + lVar23 * 8) = 0;
            }
            else if (puVar2[lVar23] == '\0') goto LAB_7101874d0c;
            lVar23 = lVar23 + 1;
          } while( true );
        }
      }
      goto LAB_7101874d04;
    }
  }
  else if ((*(char *)(param_1 + 0xf0) == '\x02') &&
          (plVar21 = *(long **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x80) + 0x40),
          plVar21 != (long *)0x0)) {
    if (*plVar21 != 0) {
      local_2260 = (undefined **)0x0;
      FUN_71037aea50(&local_2260,"f",(long ****)pcVar12,ppppbVar14,in_x4,in_x5,in_x6,in_x7);
      plVar21 = (long *)*plVar21;
      lVar15 = *plVar21;
      lVar23 = 0;
      if (lVar15 != 0) {
        lVar23 = *(long *)(*(long *)(lVar15 + 0x18) + 0x40);
        if (*(uint *)(lVar23 + 0xc) < 2) {
          plVar10 = (long *)(*(long *)(lVar23 + 0x18) +
                            ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar23 + 0xb) & 0x3f))
                            & 2) * 0x20);
          do {
            if (((int)plVar10[3] == 0x13) && (plVar11 = plVar10, plVar10[2] == 2)) break;
            piVar1 = (int *)((long)plVar10 + 0x1c);
            plVar10 = plVar10 + (long)*piVar1 * 4;
            plVar11 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar11 = (long *)(*(long *)(lVar23 + 0x10) + 0x10);
        }
        pcVar12 = "fighter_scale_small";
        FUN_71038f4d40(lVar15,plVar11,"fighter_scale_small");
        lVar23 = *plVar21;
      }
      FUN_710372d940(lVar23,&local_2260,pcVar12,ppppbVar14,in_x4,in_x5,in_x6,in_x7);
      ppuVar26 = local_2260;
      if (local_2260 != (undefined **)0x0) {
        puVar2 = local_2260[2];
        fVar28 = *(float *)local_2260[1];
        lVar23 = 0;
        do {
          if (puVar2[lVar23] == 's') {
            puVar27 = ppuVar26[1];
            uVar7 = *(ulong *)(puVar27 + lVar23 * 8);
            if (uVar7 != 0) {
              FUN_710392eb40(uVar7);
            }
            *(undefined8 *)(puVar27 + lVar23 * 8) = 0;
          }
          else if (puVar2[lVar23] == '\0') goto LAB_7101874d0c;
          lVar23 = lVar23 + 1;
        } while( true );
      }
    }
LAB_7101874d04:
    fVar28 = 0.0;
    goto LAB_7101874d18;
  }
  fVar28 = 1.0;
LAB_7101874d24:
  FUN_7103307780(fVar28,0,param_1 + 0xe4);
  uVar9 = *(undefined8 *)(param_1 + 0xe4);
  uVar3 = *(undefined8 *)(param_1 + 0xec);
  uVar4 = *(undefined4 *)(param_1 + 0xf4);
  lVar23 = *(long *)(param_1 + 0xc0);
  (**(code **)(**(long **)(lVar23 + 0x80) + 8))(*(long **)(lVar23 + 0x80),0);
  lVar15 = *(long *)(lVar23 + 0x80);
  local_2280 = (undefined1)uVar4;
  *(undefined1 *)(lVar15 + 0x70) = local_2280;
  *(undefined8 *)(lVar15 + 0x60) = uVar9;
  *(undefined8 *)(lVar15 + 0x68) = uVar3;
  if (*(undefined8 **)(lVar15 + 0x18) == *(undefined8 **)(lVar15 + 0x10)) goto LAB_71018752dc;
  FUN_7103776910(&local_2260,**(long **)**(undefined8 **)(lVar15 + 0x10) + 8,(long ****)"set_txt_00"
                 ,pcVar12,ppppbVar14,in_x4,in_x5,in_x6,in_x7);
  local_2278 = &PTR_FUN_710523d9a8;
  puVar22 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)pcVar12,ppppbVar14,in_x4,in_x5,in_x6,in_x7);
  if (puVar22 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_7c[0] = 0;
      local_88 = (long ***)&SUB_00000020;
      pppplVar13 = &local_88;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
      if (((uVar7 & 1) != 0) &&
         (puVar22 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar13,ppppbVar14,in_x4,in_x5,in_x6,in_x7),
         puVar22 != (undefined8 *)0x0)) goto LAB_7101874e08;
    }
    puVar22 = (undefined8 *)0x0;
  }
LAB_7101874e08:
  puVar25 = local_2258;
  puVar22[2] = 0;
  puVar22[3] = 0;
  *puVar22 = 0;
  puVar22[1] = 0;
  *puVar22 = *local_2258;
  puVar22[1] = local_2258[1];
  puVar22[2] = local_2258[2];
  puVar22[3] = local_2258[3];
  local_2270 = (undefined **)puVar22;
  FUN_710337edd0((long)&local_2278,lVar15 + 0x60,*(byte *****)(lVar15 + 0x48),
                 *(byte *****)(lVar15 + 0x50),(byte ****)0x0,in_x5,in_x6,in_x7);
  local_2278 = &PTR_FUN_710523d9a8;
  local_2270 = (undefined **)0x0;
  if (puVar22 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar22);
  }
  local_2260 = &PTR_FUN_710523d9a8;
  local_2258 = (undefined8 *)0x0;
  if (puVar25 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar25);
  }
  if (*(undefined8 **)(lVar15 + 0x40) == (undefined8 *)0x0) goto LAB_71018751a8;
  plVar21 = (long *)**(undefined8 **)(lVar15 + 0x40);
  if (plVar21 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar21;
  }
  if (*(undefined8 **)(lVar15 + 0x18) == *(undefined8 **)(lVar15 + 0x10)) {
LAB_71018752dc:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_71033743c0(lVar8,"layout_root",*(undefined8 *)**(undefined8 **)(lVar15 + 0x10));
  if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
    FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"exit_code",&DAT_71042b2a84);
    if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"IS_READ_ONLY",&DAT_71043cdb7b);
      if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
        FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"IS_BACK",&DAT_71043cdb7b);
        if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
          FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"BUTTON_ID_INIT",&DAT_71042b2a84);
          if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
            FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"BODY_SIZE_INIT",&DAT_71042b2a84
                          );
            if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
              FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"HEAD_OPTION_INIT",
                             &DAT_71042b2a84);
              if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
                FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"BODY_OPTION_INIT",
                               &DAT_71042b2a84);
                if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
                  FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"STATE_OPTION_INIT",
                                 &DAT_71042b2a84);
                  if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
                    FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"WEIGHT_INIT",
                                   &DAT_71042b2a84);
                    if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
                      FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"SPEED_INIT",
                                     &DAT_71042b2a84);
                      if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
                        FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),"CAMERA_INIT",
                                       &DAT_71042b2a84);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  puVar22 = *(undefined8 **)(lVar15 + 0x40);
  plVar21 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
  if ((plVar21 == (long *)0x0) || (uVar7 = (**(code **)(*plVar21 + 0x50))(), (uVar7 & 1) == 0)) {
    lVar8 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    if (*(long *)(lVar8 + 0x9ff8) != 0) {
      uVar19 = FUN_71016f6340(lVar8 + 0xa010,*(long *)(lVar8 + 0x9ff8));
      if ((~uVar19 & 0xff) != 0) {
        if ((*(uint *)(lVar8 + 0xa000) & 1 << (ulong)(uVar19 & 0x1f)) == 0) {
          plVar21 = (long *)*puVar22;
        }
        else {
          if (*(long *)(lVar8 + 0x9ff0) != 0) {
            FUN_71016f6340(lVar8 + 0xa010,*(long *)(lVar8 + 0x9ff0));
          }
          plVar21 = (long *)*puVar22;
        }
        goto joined_r0x007101875210;
      }
    }
    plVar21 = (long *)*puVar22;
  }
  else {
    plVar21 = (long *)*puVar22;
  }
joined_r0x007101875210:
  if (plVar21 != (long *)0x0) {
    FUN_7103375650(plVar21,"IS_HOST",&DAT_71043cdb7b);
  }
  plVar21 = *(long **)(lVar15 + 0x40);
  if (((DAT_71053050f0 & 0x7f000000) == 0x7000000) || (DAT_71053050f4 != '\0')) {
    lVar17 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    lVar8 = *(long *)(lVar17 + 0x9ff8);
    if (lVar8 == 0) goto LAB_710187517c;
    FUN_71016f6340(lVar17 + 0xa010,lVar8);
    plVar21 = (long *)*plVar21;
    if (plVar21 != (long *)0x0) goto LAB_7101875188;
    puVar22 = (undefined8 *)0x0;
  }
  else {
LAB_710187517c:
    plVar21 = (long *)*plVar21;
    puVar22 = (undefined8 *)0x0;
    if (plVar21 != (long *)0x0) {
LAB_7101875188:
      FUN_7103375650(plVar21,"IS_JOIN_ROOM",&DAT_71043cdb7b);
      puVar22 = (undefined8 *)**(undefined8 **)(lVar15 + 0x40);
    }
  }
  FUN_7103376980(puVar22);
LAB_71018751a8:
  *(undefined1 *)(lVar23 + 0x70) = 0;
  if (*(uint *)(param_1 + 0xa4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xa4) * 4 + 0x58) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
LAB_7101874d0c:
  FUN_710392eb40((ulong)ppuVar26);
  local_2260 = (undefined **)0x0;
LAB_7101874d18:
  if (fVar28 <= 0.0) {
    fVar28 = 1.0;
  }
  goto LAB_7101874d24;
}

