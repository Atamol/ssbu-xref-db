// addr:      7101dcbb00
// offset:    0x1dcbb00
// name:      FUN_7101dcbb00
// mangled:   
// signature: undefined __cdecl FUN_7101dcbb00(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dcbb00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  undefined2 uVar7;
  ushort uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte bVar14;
  short sVar15;
  ulong uVar16;
  long *plVar17;
  short *psVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  short *psVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  int iVar27;
  undefined8 *puVar28;
  uint auStack_108 [2];
  byte abStack_100 [64];
  uint local_c0 [2];
  byte local_b8 [8];
  undefined4 local_b0;
  undefined1 local_ac;
  
  bVar14 = *(byte *)(param_1 + 0x1d0);
  if (*(char *)(param_1 + 0x5f9) != '\x01') {
    if (1 < bVar14) {
LAB_7101dcc5d4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar16 = (**(code **)(**(long **)(param_1 + (ulong)bVar14 * 8 + 0x1c0) + 0x90))();
    uVar20 = *(ulong *)(param_1 + 0x438);
    if (((uVar20 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar20 & 0xffffffffff) != 0)) {
      if (((uVar16 & 0xff00000000000000) != 0x2d00000000000000 || (uVar16 & 0xffffffffff) == 0) ||
          ((uVar16 ^ uVar20) & 0xffffffffff) == 0) {
        return;
      }
    }
    else if ((uVar16 & 0xff00000000000000) != 0x2d00000000000000 || (uVar16 & 0xffffffffff) == 0) {
      return;
    }
    *(ulong *)(param_1 + 0x438) = uVar16;
    *(undefined2 *)(param_1 + 0x440) = 0xffff;
    lVar25 = *(long *)(DAT_710532f730 + 8);
    uVar20 = uVar16;
    FUN_710327cd40(local_c0,*(long *)(lVar25 + 0x318),uVar16);
    FUN_71003a4ca0(auStack_108,"nam_goods_%s",local_b8,uVar20,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710377a120(param_1 + 1000,(char *)abStack_100,uVar20,param_4,param_5,param_6,param_7,param_8
                  );
    uVar20 = uVar16;
    FUN_710327cd40(local_c0,*(long *)(lVar25 + 0x318),uVar16);
    FUN_71003a4ca0(auStack_108,"nam_goods_help_%s",local_b8,uVar20,param_4,param_5,param_6,param_7,
                   param_8);
    uVar24 = FUN_710327d3b0(*(long *)(lVar25 + 0x318),uVar16);
    uVar24 = uVar24 & 0xffffffffff;
    iVar27 = -1;
    if (uVar24 < 0x697117991) {
      if (uVar24 == 0x308a9483a) {
        iVar27 = 4;
      }
      else if (uVar24 == 0x32eb55cc9) {
        iVar27 = 6;
      }
      else if (uVar24 == 0x5b7a5f324) {
        iVar27 = 5;
      }
    }
    else if (uVar24 < 0xe32ae387d) {
      if (uVar24 == 0x697117991) {
        iVar27 = 0;
      }
      else if (uVar24 == 0xdaaec3d9f) {
        iVar27 = 2;
      }
    }
    else if (uVar24 == 0xe32ae387d) {
      iVar27 = 1;
    }
    else if (uVar24 == 0x106cb91611) {
      iVar27 = 3;
    }
    uVar24 = FUN_710327d3b0(*(long *)(lVar25 + 0x318),uVar16);
    uVar24 = uVar24 & 0xffffffffff;
    if (((uVar24 == 0xdaaec3d9f) || (uVar24 == 0x106cb91611)) || (uVar24 == 0xe32ae387d)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    uVar24 = FUN_710327d0d0(*(long *)(lVar25 + 0x318),uVar16);
    if (((uVar24 & 0xffffffffff) == 0x7db8309f9) && (bVar6)) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3a0),0x710425f95f);
      if (iVar27 - 1U < 3) {
        puVar10 = (&PTR_s_support_ingame_71050b0780)[(int)(iVar27 - 1U)];
      }
      else {
        puVar10 = &DAT_7104867c2e;
      }
      FUN_71003a4ca0(local_c0,"nam_goods_category_%s",puVar10,uVar20,param_4,param_5,param_6,param_7
                     ,param_8);
      FUN_710377a120(param_1 + 0x408,(char *)local_b8,uVar20,param_4,param_5,param_6,param_7,param_8
                    );
      FUN_710377a280(param_1 + 0x418,abStack_100,1);
      FUN_710327cd40(local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318),
                     *(ulong *)(param_1 + 0x438));
      lVar25 = *(long *)(param_1 + 0x3d0);
LAB_7101dcc0b4:
      FUN_7103778300(0x3f800000,lVar25,(long)local_b8);
    }
    else if (iVar27 == 0) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3a0),0x7104443c91);
      FUN_710377a280(param_1 + 0x428,abStack_100,1);
      FUN_710327cd40(local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318),
                     *(ulong *)(param_1 + 0x438));
      lVar25 = *(long *)(param_1 + 0x3e0);
      goto LAB_7101dcc0b4;
    }
    uVar23 = FUN_710327da30(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318),uVar16);
    goto LAB_7101dcc3f0;
  }
  if (1 < bVar14) goto LAB_7101dcc5d4;
  uVar8 = (**(code **)(**(long **)(param_1 + (ulong)bVar14 * 8 + 0x1c0) + 0x88))();
  if (uVar8 == 0xffff) {
    return;
  }
  if (*(ushort *)(param_1 + 0x440) == uVar8) {
    return;
  }
  *(ushort *)(param_1 + 0x440) = uVar8;
  *(undefined8 *)(param_1 + 0x438) = 0x2dffff0000000000;
  lVar25 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  if ((short)uVar8 < 2000) {
    uVar2 = *(ushort *)(lVar25 + ((long)((ulong)uVar8 << 0x30) >> 0x2f) + 0x60);
    uVar16 = (ulong)uVar2;
    uVar20 = (*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar20 <= (uint)uVar2) goto LAB_7101dcbd48;
    puVar1 = (undefined2 *)(*(long *)(lVar25 + 0x20) + uVar16 * 0x140);
    if (uVar20 < uVar16 || uVar20 - uVar16 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if (*(char *)(puVar1 + 0x2f) == '\0') {
      uVar23 = 0;
      if (*(byte *)(puVar1 + 0x36) - 1 < 3) {
        uVar23 = 0x20301 >> (ulong)((*(byte *)(puVar1 + 0x36) - 1 & 3) << 3);
      }
    }
    else {
      uVar23 = 4;
    }
  }
  else {
LAB_7101dcbd48:
    uVar23 = 0;
  }
  uVar16 = FUN_71032a9470(lVar25,uVar8);
  FUN_71032a9540(local_c0,lVar25,uVar16);
  FUN_71003a4ca0(auStack_108,"spi_%s",local_b8,uVar16,param_4,param_5,param_6,param_7,param_8);
  pbVar13 = abStack_100;
  uVar12 = 1;
  FUN_710377a280(param_1 + 1000,(byte *)"mnu_spirits_itemview_ped_name",1);
  if ((uVar23 & 0xff) < 5) {
    pcVar9 = *(char **)((long)(char)uVar23 * 8 + 0x71050b0730);
  }
  else {
    pcVar9 = "";
  }
  FUN_710377a120(param_1 + 0x3f8,pcVar9,uVar12,pbVar13,param_5,param_6,param_7,param_8);
  uVar16 = (ulong)*(short *)(param_1 + 0x440);
  if ((uVar16 != 0xffffffffffffffff) && (*(short *)(param_1 + 0x440) < 2000)) {
    lVar25 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar2 = *(ushort *)(lVar25 + uVar16 * 2 + 0x60);
    uVar20 = (ulong)uVar2;
    uVar24 = (*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar2 < (uint)uVar24) {
      puVar1 = (undefined2 *)(*(long *)(lVar25 + 0x20) + uVar20 * 0x140);
      if (uVar24 < uVar20 || uVar24 - uVar20 == 0) {
        puVar1 = &DAT_7105182b08;
      }
      uVar7 = local_b0._2_2_;
      switch(*(undefined1 *)(puVar1 + 0x34)) {
      case 0:
        local_c0[1] = 10;
        local_b8[0] = 99;
        local_b8[1] = 0x6c;
        local_b8[2] = 0x61;
        local_b8[3] = 0x73;
        local_b8[4] = 0x73;
        local_b8[5] = 0x5f;
        local_b8[6] = 0x6e;
        local_b8[7] = 0x6f;
        pbVar13 = local_b8;
        local_c0[0] = 0x811c9dc5;
        local_b0 = CONCAT13(local_b0._3_1_,0x656e);
        uVar23 = 99;
        do {
          pbVar13 = pbVar13 + 1;
          local_c0[0] = local_c0[0] * 0x89 ^ uVar23;
          uVar23 = (uint)*pbVar13;
        } while (uVar23 != 0);
        break;
      case 1:
        local_c0[1] = 10;
        local_b8[0] = 99;
        local_b8[1] = 0x6c;
        local_b8[2] = 0x61;
        local_b8[3] = 0x73;
        local_b8[4] = 0x73;
        local_b8[5] = 0x5f;
        local_b8[6] = 0x68;
        local_b8[7] = 0x6f;
        pbVar13 = local_b8;
        local_c0[0] = 0x811c9dc5;
        local_b0 = CONCAT13(local_b0._3_1_,0x6570);
        uVar23 = 99;
        do {
          pbVar13 = pbVar13 + 1;
          local_c0[0] = local_c0[0] * 0x89 ^ uVar23;
          uVar23 = (uint)*pbVar13;
        } while (uVar23 != 0);
        break;
      case 2:
        local_c0[1] = 9;
        local_b8[0] = 99;
        local_b8[1] = 0x6c;
        local_b8[2] = 0x61;
        local_b8[3] = 0x73;
        local_b8[4] = 0x73;
        local_b8[5] = 0x5f;
        local_b8[6] = 0x61;
        local_b8[7] = 99;
        pbVar13 = local_b8;
        local_b0 = CONCAT22(uVar7,0x65);
        local_c0[0] = 0x811c9dc5;
        uVar23 = 99;
        do {
          pbVar13 = pbVar13 + 1;
          local_c0[0] = local_c0[0] * 0x89 ^ uVar23;
          uVar23 = (uint)*pbVar13;
        } while (uVar23 != 0);
        break;
      case 3:
        local_c0[1] = 0xc;
        local_b8[0] = 99;
        local_b8[1] = 0x6c;
        local_b8[2] = 0x61;
        local_b8[3] = 0x73;
        local_b8[4] = 0x73;
        local_b8[5] = 0x5f;
        local_b8[6] = 0x6c;
        local_b8[7] = 0x65;
        pbVar13 = local_b8;
        local_c0[0] = 0x811c9dc5;
        local_b0 = 0x646e6567;
        uVar23 = 99;
        local_ac = 0;
        do {
          pbVar13 = pbVar13 + 1;
          local_c0[0] = local_c0[0] * 0x89 ^ uVar23;
          uVar23 = (uint)*pbVar13;
        } while (uVar23 != 0);
        break;
      default:
        local_c0[1] = 10;
        local_b8[0] = 99;
        local_b8[1] = 0x6c;
        local_b8[2] = 0x61;
        local_b8[3] = 0x73;
        local_b8[4] = 0x73;
        local_b8[5] = 0x5f;
        local_b8[6] = 0x6e;
        local_b8[7] = 0x6f;
        pbVar13 = local_b8;
        local_c0[0] = 0x811c9dc5;
        local_b0 = CONCAT13(local_b0._3_1_,0x656e);
        uVar23 = 99;
        do {
          pbVar13 = pbVar13 + 1;
          local_c0[0] = local_c0[0] * 0x89 ^ uVar23;
          uVar23 = (uint)*pbVar13;
        } while (uVar23 != 0);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3b0),(long)local_b8);
      uVar16 = (ulong)*(ushort *)(param_1 + 0x440);
    }
  }
  if ((~(uint)uVar16 & 0xffff) == 0) {
    bVar14 = 0;
LAB_7101dcc2d8:
    puVar10 = (&PTR_s_class_novice_71050b0760)[(char)bVar14];
  }
  else {
    lVar25 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar16 = (ulong)*(ushort *)(lVar25 + (long)(short)uVar16 * 2 + 0x60);
    uVar20 = (*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20) >> 6) * -0x3333333333333333;
    puVar1 = (undefined2 *)(*(long *)(lVar25 + 0x20) + uVar16 * 0x140);
    if (uVar20 < uVar16 || uVar20 - uVar16 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    bVar14 = *(byte *)(puVar1 + 0x34);
    if (bVar14 < 4) goto LAB_7101dcc2d8;
    puVar10 = &DAT_7104867c2e;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3a0),(long)puVar10);
  FUN_7101dcf780(param_1 + 0x3b8,*(ushort *)(param_1 + 0x440));
  uVar16 = *(ulong *)(**(long **)(param_1 + 0x590) + 0x28);
  if (uVar16 != 0) {
    sVar15 = *(short *)(param_1 + 0x440);
    uVar20 = (ulong)sVar15;
    uVar24 = uVar16 - 1;
    if ((uVar24 & uVar16) == 0) {
      uVar21 = uVar24 & uVar20;
    }
    else {
      uVar21 = uVar20;
      if (uVar16 <= uVar20) {
        uVar21 = 0;
        if (uVar16 != 0) {
          uVar21 = uVar20 / uVar16;
        }
        uVar21 = uVar20 - uVar21 * uVar16;
      }
    }
    plVar17 = *(long **)(*(long *)(**(long **)(param_1 + 0x590) + 0x20) + uVar21 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if ((uVar24 & uVar16) == 0) {
        do {
          uVar16 = plVar17[1];
          if (uVar16 != uVar20 && (uVar16 & uVar24) != uVar21) break;
          if ((uVar16 == uVar20) && ((short)plVar17[2] == sVar15)) goto LAB_7101dcc3cc;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar17[1];
          if (uVar24 == uVar20) {
            if ((short)plVar17[2] == sVar15) goto LAB_7101dcc3cc;
          }
          else {
            if (uVar16 <= uVar24) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar24 / uVar16;
              }
              uVar24 = uVar24 - uVar5 * uVar16;
            }
            if (uVar24 != uVar21) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_7101dcc3dc:
  FUN_710377aee0(0x3f800000,param_1 + 0x328);
  goto LAB_7101dcc3e8;
LAB_7101dcc3cc:
  plVar26 = plVar17 + 3;
  if (plVar17[4] == *plVar26) goto LAB_7101dcc3dc;
  uVar4 = (int)plVar17[4] - (int)*plVar26;
  uVar23 = uVar4 >> 1;
  if (5 < (uVar4 >> 1 & 0xff)) {
    uVar23 = 6;
  }
  if ((uVar23 & 0xff) < 7) {
    FUN_710377aee0(0x3f800000,param_1 + (ulong)(byte)uVar23 * 0x10 + 0x328);
    sVar15 = *(short *)(param_1 + 0x440);
  }
  psVar22 = *(short **)(param_1 + 0x5b8);
  psVar18 = *(short **)(param_1 + 0x5c0);
  if (psVar22 != psVar18) {
    sVar3 = *psVar22;
    while (sVar3 != sVar15) {
      psVar22 = psVar22 + 1;
      if (psVar18 == psVar22) goto LAB_7101dcc3e8;
      sVar3 = *psVar22;
    }
  }
  if ((psVar22 != psVar18) && ((uVar23 & 0xff) != 0)) {
    lVar25 = *DAT_7105329f98;
    uVar16 = 0;
    pcVar9 = "view_silhouette";
    puVar28 = (undefined8 *)(param_1 + 0x200);
    do {
      if ((ulong)(plVar17[4] - *plVar26 >> 1) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar2 = *(ushort *)(*plVar26 + uVar16 * 2);
      if (uVar2 != *(ushort *)(puVar28 + -5)) {
        if (uVar2 == 0xffff) {
          pcVar11 = "view_silhouette";
        }
        else {
          pcVar11 = pcVar9;
          if ((short)uVar2 < 2000) {
            lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
            if (((uint)*(ushort *)(lVar19 + (long)(short)uVar2 * 2 + 0x60) <
                 (uint)((int)((ulong)(*(long *)(lVar19 + 0x28) - *(long *)(lVar19 + 0x20)) >> 6) *
                       -0x33333333)) &&
               ((*(byte *)(*(long *)(lVar25 + 0x30) + (long)(short)uVar2 * 0x24 + 1) & 8) != 0)) {
              pcVar11 = "view_normal";
            }
          }
        }
        FUN_7103778300(0x3f800000,puVar28[-3],(long)pcVar11);
        FUN_71025ae1b0(uVar2,puVar28 + -2,0,(byte ****)0x1,param_5,param_6,param_7,param_8);
        FUN_71025ae1b0(uVar2,puVar28,0,(byte ****)0x1,param_5,param_6,param_7,param_8);
        *(ushort *)(puVar28 + -5) = uVar2;
      }
      uVar16 = uVar16 + 1;
      puVar28 = puVar28 + 7;
    } while (uVar16 < ((ulong)uVar23 & 0xff));
  }
LAB_7101dcc3e8:
  uVar23 = FUN_7101dcf6a0(uVar8);
LAB_7101dcc3f0:
  if (*(uint *)(param_1 + 0x4c0) != uVar23) {
    (**(code **)(*(long *)(param_1 + 0x450) + 0x18))((long *)(param_1 + 0x450),uVar23);
  }
  return;
}

