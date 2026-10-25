// addr:      7101ee8990
// offset:    0x1ee8990
// name:      FUN_7101ee8990
// mangled:   
// signature: undefined __cdecl FUN_7101ee8990(undefined8 * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ee8990(undefined8 *param_1,ulong param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  long *plVar7;
  char *pcVar8;
  long ****pppplVar9;
  long *********ppppppppplVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long *plVar14;
  ushort uVar15;
  int iVar16;
  ushort *puVar17;
  ulong uVar18;
  long lVar19;
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  ulong local_100;
  undefined **local_f8;
  ulong local_f0;
  undefined **local_c8;
  ulong local_c0;
  long ********local_b8;
  ulong local_b0;
  undefined **local_a8;
  long *local_a0 [8];
  undefined **local_60;
  ulong local_58;
  
  uVar18 = (ulong)param_3 & 0xffffffff;
  pppplVar9 = param_3;
  if (*(long **)(param_1[0x34] + 0x10) != (long *)0x0) {
    pppplVar9 = (long ****)0x0;
    param_4 = (byte ****)0x0;
    local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
    FUN_71037a2270(*(long **)(param_1[0x34] + 0x10),(ushort *)&local_a8,0,0);
  }
  if (*(long **)(param_1[0x36] + 0x10) != (long *)0x0) {
    pppplVar9 = (long ****)0x0;
    param_4 = (byte ****)0x0;
    local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
    FUN_71037a2270(*(long **)(param_1[0x36] + 0x10),(ushort *)&local_a8,0,0);
  }
  if ((param_2 & 0xff00000000000000) != 0x800000000000000) {
    return;
  }
  if ((param_2 & 0xffffffffff) == 0) {
    return;
  }
  FUN_7103776390(&local_60,(undefined8 *)(*(long *)*param_1 + 8),pppplVar9,param_4,param_5,param_6,
                 param_7,param_8);
  lVar19 = *(long *)(DAT_710532f730 + 8);
  if (*(char *)((long)param_1 + 0x1cc) == '\0') {
    FUN_710333dd70((ulong *)&local_f8,DAT_710532f8e0,param_2,param_4,param_5,param_6,param_7,param_8
                  );
    FUN_7103776640(&local_b8,(long)&local_60,(byte ****)"set_parts_tips_%d",uVar18,param_4,param_5,
                   param_6,param_7,param_8);
    iVar2 = FUN_7101addb00((ulong *)&local_f8);
    uVar3 = FUN_7101addb00((ulong *)&local_f8);
    ppppppppplVar10 = &local_b8;
    FUN_7101addcc0(&local_a8,uVar3,(long ****)ppppppppplVar10,param_4,param_5,param_6,param_7,
                   param_8);
    plVar7 = local_a0[0];
    if (*local_a0[0] == 0) {
LAB_7101ee8b88:
      FUN_71037790a0((long)local_a0[0],1,ppppppppplVar10,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      uVar13 = *(uint *)((long)param_1 + (long)(int)param_3 * 4 + 0x1d4);
      if (((uVar13 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x18) <= uVar13)) ||
         (*(char *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar13 * 8 + 4) == '\0'))
      goto LAB_7101ee8b88;
      uVar13 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar13 * 8);
      if ((uVar13 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar13)) goto LAB_7101ee8b88;
      plVar14 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar13 * 0x18);
      if (((*(char *)((long)plVar14 + 0xc) == '\0') ||
          ((plVar14 == (long *)0x0 ||
           (*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar13 * 0x18 + 0xd) != '\x03'))))
         || (*plVar14 == 0)) goto LAB_7101ee8b88;
      FUN_7103778c70((long)local_a0[0],(uint *)((long)param_1 + (long)(int)param_3 * 4 + 0x1d4),
                     ppppppppplVar10,param_4,param_5,param_6,param_7,param_8);
    }
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar7);
    }
    FUN_7101addf20(iVar2,(long)&local_b8,ppppppppplVar10,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_c8,(long)&local_b8,(long ****)"set_txt_title",ppppppppplVar10,param_4,
                   param_5,param_6,param_7,param_8);
    plVar7 = (long *)(lVar19 + 0x1b8);
    uVar18 = FUN_71032b6c10(*(long *)(lVar19 + 0x1b8),param_2);
    if ((int)uVar18 == -1) {
      local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
      local_a8 = (undefined **)0x0;
    }
    else {
      FUN_71003a4ca0((uint *)&local_a8,"tip_title_%04d",uVar18 & 0xffffffff,ppppppppplVar10,param_4,
                     param_5,param_6,param_7,param_8);
    }
    uVar18 = 1;
    uVar11 = 1;
    FUN_710377a280((long)&local_c8,(byte *)local_a0,1);
    FUN_7103776910(&local_108,(long)&local_b8,(long ****)"set_txt_honbun_3lines",uVar18,uVar11,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_118,(long)&local_b8,(long ****)"set_txt_honbun",uVar18,uVar11,param_5,
                   param_6,param_7,param_8);
    uVar5 = FUN_71032b6c10(*plVar7,param_2);
    if ((int)uVar5 == -1) {
      local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
      local_a8 = (undefined **)0x0;
    }
    else {
      FUN_71003a4ca0((uint *)&local_a8,"tip_text_%04d",uVar5 & 0xffffffff,uVar18,uVar11,param_5,
                     param_6,param_7,param_8);
    }
    bVar1 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)local_a0);
    if (((bVar1) &&
        (puVar6 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)local_a0),
        puVar6 != (ushort *)0x0)) && (uVar15 = *puVar6, uVar15 != 0)) {
      uVar13 = 0;
      iVar2 = 1;
      puVar17 = puVar6;
      do {
        if ((uVar15 | 1) == 0xf) {
          if (uVar15 == 0xe) {
            iVar16 = (puVar17[3] >> 1) + 4;
          }
          else {
            iVar16 = 3;
            if (uVar15 != 0xf) {
              iVar16 = 0;
            }
          }
        }
        else {
          iVar16 = 1;
          if (uVar15 == 10) {
            iVar2 = iVar2 + 1;
          }
        }
        uVar13 = iVar16 + uVar13;
        puVar17 = puVar6 + uVar13;
        uVar15 = *puVar17;
      } while (uVar15 != 0);
      if (iVar2 < 3) goto LAB_7101ee8fc8;
      if (*(long **)(local_110 + 0x10) != (long *)0x0) {
        uVar18 = 0;
        uVar11 = 0;
        local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(local_110 + 0x10),(ushort *)&local_a8,0,0);
      }
      uVar5 = FUN_71032b6c10(*plVar7,param_2);
      if ((int)uVar5 == -1) {
        local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
        local_a8 = (undefined **)0x0;
      }
      else {
        FUN_71003a4ca0((uint *)&local_a8,"tip_text_%04d",uVar5 & 0xffffffff,uVar18,uVar11,param_5,
                       param_6,param_7,param_8);
      }
      FUN_710377a120((long)&local_108,(char *)local_a0,uVar18,uVar11,param_5,param_6,param_7,param_8
                    );
      pcVar8 = "txt_line_3";
      uVar5 = local_b0;
    }
    else {
LAB_7101ee8fc8:
      uVar5 = FUN_71032b6c10(*plVar7,param_2);
      if ((int)uVar5 == -1) {
        local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
        local_a8 = (undefined **)0x0;
      }
      else {
        FUN_71003a4ca0((uint *)&local_a8,"tip_text_%04d",uVar5 & 0xffffffff,uVar18,uVar11,param_5,
                       param_6,param_7,param_8);
      }
      FUN_710377a120((long)&local_118,(char *)local_a0,uVar18,uVar11,param_5,param_6,param_7,param_8
                    );
      if (*(long **)(local_100 + 0x10) != (long *)0x0) {
        uVar18 = 0;
        uVar11 = 0;
        local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(local_100 + 0x10),(ushort *)&local_a8,0,0);
      }
      pcVar8 = "txt_line_2";
      uVar5 = local_b0;
    }
    FUN_7103778300(0x3f800000,uVar5,(long)pcVar8);
    FUN_7101adddd0((ulong *)&local_f8,(long)&local_b8);
    FUN_710377b010(0,(long)(param_1 + 0x24));
    plVar7 = *(long **)(param_1[0x29] + 8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x140))(plVar7,0);
    }
    FUN_710377b140((long)(param_1 + 0x2a));
    uVar4 = local_110;
    local_118 = &PTR_FUN_710523d9a8;
    local_110 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    uVar4 = local_100;
    local_108 = &PTR_FUN_710523d9a8;
    local_100 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    uVar4 = local_c0;
    local_c8 = &PTR_FUN_710523d9a8;
    local_c0 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    local_b8 = (long ********)&PTR_FUN_710523d988;
    local_b0 = 0;
    if (uVar5 == 0) goto LAB_7101ee90d8;
    uVar4 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  else {
    uVar5 = uVar18;
    FUN_7103776910(&local_f8,(long)&local_60,(long ****)"set_txt_title_%02d",uVar18,param_4,param_5,
                   param_6,param_7,param_8);
    plVar7 = (long *)(lVar19 + 0x1b8);
    uVar4 = FUN_71032b6c10(*(long *)(lVar19 + 0x1b8),param_2);
    if ((int)uVar4 == -1) {
      local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
      local_a8 = (undefined **)0x0;
    }
    else {
      FUN_71003a4ca0((uint *)&local_a8,"tip_title_%04d",uVar4 & 0xffffffff,uVar5,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar11 = 1;
    FUN_710377a280((long)&local_f8,(byte *)local_a0,1);
    FUN_7103776910(&local_b8,(long)&local_60,(long ****)"set_txt_honbun_%02d_3line",uVar18,uVar11,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_c8,(long)&local_60,(long ****)"set_txt_honbun_%02d",uVar18,uVar11,param_5,
                   param_6,param_7,param_8);
    uVar5 = FUN_71032b6c10(*plVar7,param_2);
    if ((int)uVar5 == -1) {
      local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
      local_a8 = (undefined **)0x0;
    }
    else {
      FUN_71003a4ca0((uint *)&local_a8,"tip_text_%04d",uVar5 & 0xffffffff,uVar18,uVar11,param_5,
                     param_6,param_7,param_8);
    }
    bVar1 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)local_a0);
    if (((bVar1) &&
        (puVar6 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)local_a0),
        puVar6 != (ushort *)0x0)) && (uVar15 = *puVar6, uVar15 != 0)) {
      uVar13 = 0;
      iVar2 = 1;
      puVar17 = puVar6;
      do {
        if ((uVar15 | 1) == 0xf) {
          if (uVar15 == 0xe) {
            iVar16 = (puVar17[3] >> 1) + 4;
          }
          else {
            iVar16 = 3;
            if (uVar15 != 0xf) {
              iVar16 = 0;
            }
          }
        }
        else {
          iVar16 = 1;
          if (uVar15 == 10) {
            iVar2 = iVar2 + 1;
          }
        }
        uVar13 = iVar16 + uVar13;
        puVar17 = puVar6 + uVar13;
        uVar15 = *puVar17;
      } while (uVar15 != 0);
      if (iVar2 < 3) goto LAB_7101ee8d78;
      if (*(long **)(local_c0 + 0x10) != (long *)0x0) {
        uVar18 = 0;
        uVar11 = 0;
        local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(local_c0 + 0x10),(ushort *)&local_a8,0,0);
      }
      uVar5 = FUN_71032b6c10(*plVar7,param_2);
      if ((int)uVar5 == -1) {
        local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
        local_a8 = (undefined **)0x0;
      }
      else {
        FUN_71003a4ca0((uint *)&local_a8,"tip_text_%04d",uVar5 & 0xffffffff,uVar18,uVar11,param_5,
                       param_6,param_7,param_8);
      }
      FUN_710377a120((long)&local_b8,(char *)local_a0,uVar18,uVar11,param_5,param_6,param_7,param_8)
      ;
      pcVar8 = "txt_line_3";
    }
    else {
LAB_7101ee8d78:
      uVar5 = FUN_71032b6c10(*plVar7,param_2);
      if ((int)uVar5 == -1) {
        local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
        local_a8 = (undefined **)0x0;
      }
      else {
        FUN_71003a4ca0((uint *)&local_a8,"tip_text_%04d",uVar5 & 0xffffffff,uVar18,uVar11,param_5,
                       param_6,param_7,param_8);
      }
      FUN_710377a120((long)&local_c8,(char *)local_a0,uVar18,uVar11,param_5,param_6,param_7,param_8)
      ;
      if (*(long **)(local_b0 + 0x10) != (long *)0x0) {
        uVar18 = 0;
        uVar11 = 0;
        local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(local_b0 + 0x10),(ushort *)&local_a8,0,0);
      }
      pcVar8 = "txt_line_2";
    }
    FUN_7103778300(0x3f800000,local_58,(long)pcVar8);
    FUN_710377b010(0,(long)(param_1 + 0x2c));
    if (*(char *)((long)param_1 + 0x1cd) == '\0') {
      *(undefined1 *)((long)param_1 + 0x1cd) = 1;
      FUN_7103778300(0x3f800000,local_58,0x71043f10e7);
    }
    uVar5 = local_c0;
    local_c8 = &PTR_FUN_710523d9a8;
    local_c0 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    uVar5 = local_b0;
    local_b8 = (long ********)&PTR_FUN_710523d9a8;
    local_b0 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    uVar5 = local_f0;
    local_f8 = &PTR_FUN_710523d9a8;
    local_f0 = 0;
    if (uVar5 == 0) goto LAB_7101ee90d8;
  }
  FUN_710392eb40(uVar5);
LAB_7101ee90d8:
  uVar5 = FUN_71032b6c10(*(long *)(lVar19 + 0x1b8),param_2);
  if ((int)uVar5 == -1) {
    local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
    local_a8 = (undefined **)0x0;
  }
  else {
    FUN_71003a4ca0((uint *)&local_a8,"tip_title_%04d",uVar5 & 0xffffffff,uVar18,uVar11,param_5,
                   param_6,param_7,param_8);
  }
  uVar11 = 1;
  uVar12 = 1;
  FUN_710377a280((long)(param_1 + 0x33),(byte *)local_a0,1);
  uVar18 = FUN_71032b6c10(*(long *)(lVar19 + 0x1b8),param_2);
  if ((int)uVar18 == -1) {
    local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
    local_a8 = (undefined **)0x0;
  }
  else {
    FUN_71003a4ca0((uint *)&local_a8,"tip_text_%04d",uVar18 & 0xffffffff,uVar11,uVar12,param_5,
                   param_6,param_7,param_8);
  }
  FUN_710377a120((long)(param_1 + 0x35),(char *)local_a0,uVar11,uVar12,param_5,param_6,param_7,
                 param_8);
  uVar18 = local_58;
  *(undefined1 *)((long)param_1 + 0x1cf) = 1;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar18 != 0) {
    uVar5 = *(ulong *)(uVar18 + 0x18);
    *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar18 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar18);
  }
  return;
}

