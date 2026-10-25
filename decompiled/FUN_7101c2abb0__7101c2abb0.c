// addr:      7101c2abb0
// offset:    0x1c2abb0
// name:      FUN_7101c2abb0
// mangled:   
// signature: undefined __cdecl FUN_7101c2abb0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c2abb0(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long ***ppplVar12;
  long *plVar13;
  undefined **ppuVar14;
  long *********ppppppppplVar15;
  long ****pppplVar16;
  char *pcVar17;
  long ****pppplVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  byte ****ppppbVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  long **pplVar28;
  long ***local_d0;
  long *****local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long ***local_a0;
  ulong local_98;
  long ***local_90;
  long *local_88;
  long ****local_80;
  ulong local_78;
  undefined4 local_64;
  
  *param_1 = &PTR_FUN_71050ad280;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0xb0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ****)((ulong)local_80 & 0xffffffff00000000);
      local_d0 = (long ***)&DAT_000000b0;
      param_3 = &local_d0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0xb0,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101c2ac64;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101c2ac64:
  *puVar6 = &PTR_FUN_71050ad2b8;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = &PTR_FUN_71050ad198;
  *(undefined4 *)(puVar6 + 4) = 0x1000;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[9] = 0;
  puVar6[8] = puVar6 + 9;
  puVar6[0xc] = param_2;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,0x80,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ****)((ulong)local_80 & 0xffffffff00000000);
      local_d0 = (long ***)&DAT_00000080;
      pppplVar18 = &local_d0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,pppplVar18,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_7101c2acfc;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101c2acfc:
  *puVar8 = &PTR_FUN_7105181b40;
  puVar8[2] = 0;
  puVar8[1] = puVar8 + 2;
  puVar8[5] = 0;
  puVar8[3] = 0;
  puVar8[4] = puVar8 + 5;
  puVar8[8] = 0;
  puVar8[6] = 0;
  puVar8[7] = puVar8 + 8;
  puVar8[0xb] = 0;
  puVar8[9] = 0;
  puVar8[10] = puVar8 + 0xb;
  puVar8[0xc] = 0;
  *(undefined4 *)(puVar8 + 0xd) = 2;
  *(undefined4 *)(puVar8 + 0xf) = 0;
  puVar8[0xe] = 0;
  puVar26 = puVar6 + 0x11;
  *puVar26 = 0xffffffffffffffff;
  puVar6[0x12] = 0xffffffffffffffff;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0xd] = puVar8;
  puVar6[0xe] = 0;
  lVar25 = DAT_710532f730;
  if (DAT_710532f730 == 0) {
    puVar6[0x13] = 0xffffffffffffffff;
    puVar6[0x14] = 0xffffffffffffffff;
  }
  else {
    lVar27 = *(long *)(DAT_710532f730 + 8);
    lVar24 = *(long *)(lVar27 + 0x178);
    uVar7 = FUN_71032b23e0(*(long *)(lVar24 + 8),0xd56784f97);
    uVar9 = FUN_71032b1e40(lVar24,uVar7);
    if (-1 < (int)uVar9) {
      uVar7 = FUN_71032b1e40(*(long *)(lVar27 + 0x178),uVar7);
      lVar24 = (uVar7 >> 5 & 0x7ffffff) * 4;
      *(uint *)((long)puVar26 + lVar24) =
           *(uint *)((long)puVar26 + lVar24) & (1 << (ulong)((uint)uVar7 & 0x1f) ^ 0xffffffffU);
    }
    puVar8 = puVar6 + 0x13;
    *puVar8 = 0xffffffffffffffff;
    puVar6[0x14] = 0xffffffffffffffff;
    lVar24 = *(long *)(lVar25 + 8);
    lVar25 = *(long *)(lVar24 + 0x178);
    uVar7 = FUN_71032b23e0(*(long *)(lVar25 + 8),0xd56784f97);
    uVar9 = FUN_71032b1e40(lVar25,uVar7);
    if (-1 < (int)uVar9) {
      uVar7 = FUN_71032b1e40(*(long *)(lVar24 + 0x178),uVar7);
      lVar25 = (uVar7 >> 5 & 0x7ffffff) * 4;
      *(uint *)((long)puVar8 + lVar25) =
           *(uint *)((long)puVar8 + lVar25) & (1 << (ulong)((uint)uVar7 & 0x1f) ^ 0xffffffffU);
    }
  }
  *(undefined1 *)(puVar6 + 0x15) = 1;
  ppppbVar23 = (byte ****)0x2ea94119d5;
  param_1[0x10] = puVar6 + 3;
  param_1[0x11] = puVar6;
  FUN_7101c2a4b0((long *)&local_d0);
  if ((int)((ulong)((long)local_c8 - (long)local_d0) >> 3) < 0x6f) {
    local_90 = (long ***)0x2f1277ec63;
  }
  else {
    local_90 = (long ***)0x32e952a229;
  }
  local_80 = &local_90;
  ppuVar14 = (undefined **)&local_80;
  pppplVar18 = (long ****)0x1;
  local_78 = 1;
  FUN_71032cb040(param_1[0x10],param_2,(long ****)ppuVar14,(byte ****)0x2ea94119d5,(long ****)0x1,
                 param_6,param_7,param_8);
  pplVar28 = (long **)param_1[0x10];
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    ppuVar14 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar2 = 0x500014;
  if (DAT_71053050f0 != 0x4090000) {
    uVar2 = 0x100a;
  }
  *(undefined4 *)(pplVar28 + 1) = uVar2;
  if ((long ****)(pplVar28 + 0xb) != &local_d0) {
    FUN_7101684440(pplVar28 + 0xb,local_d0,(long ****)local_c8,ppppbVar23,pppplVar18,param_6,param_7
                   ,param_8);
    ppuVar14 = (undefined **)local_c8;
  }
  if ((char)pplVar28[10][0xf] == '\0') {
    *(undefined4 *)(pplVar28[10] + 0xd) = 4;
  }
  if (pplVar28[3] == pplVar28[2]) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar25 = **(long **)*pplVar28[2] + 8;
  FUN_7103776640(&local_80,lVar25,(byte ****)"set_preview_st_00",ppuVar14,ppppbVar23,pppplVar18,
                 param_6,param_7,param_8);
  uVar7 = local_78;
  FUN_7103778300(0x3f800000,local_78,0x71043e00ba);
  FUN_7103778300(0x3f800000,uVar7,0x7104308464);
  FUN_7103778300(0x3f800000,uVar7,0x7104431caa);
  FUN_7103776910(&local_90,(long)&local_80,(long ****)&DAT_7104291c29,ppuVar14,ppppbVar23,pppplVar18
                 ,param_6,param_7,param_8);
  plVar10 = local_88;
  lVar24 = *local_88;
  if (lVar24 != 0) {
    *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe;
  }
  local_90 = (long ***)&PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar10);
  }
  lVar24 = *(long *)(DAT_710532f730 + 8);
  iVar5 = (int)((ulong)((long)pplVar28[0xc] - (long)pplVar28[0xb]) >> 3);
  if (0x78 < iVar5) {
    iVar5 = 0x79;
  }
  uVar9 = 0;
  do {
    ppppppppplVar15 = (long *********)(uVar9 & 0xffffffff);
    FUN_7103776640(&local_90,lVar25,(byte ****)"set_part_stage_%03d",ppppppppplVar15,ppppbVar23,
                   pppplVar18,param_6,param_7,param_8);
    if ((long)uVar9 < (long)iVar5) {
      if ((ulong)((long)pplVar28[0xc] - (long)pplVar28[0xb] >> 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar22 = pplVar28[0xb][uVar9];
      FUN_7103776910(&local_a0,(long)&local_90,(long ****)"set_rep_stage",ppppppppplVar15,ppppbVar23
                     ,pppplVar18,param_6,param_7,param_8);
      ppppppppplVar15 = (long *********)&DAT_0000000d;
      plVar10 = FUN_710323f4a0(pplVar28[9],uVar22,(long ****)&DAT_0000000d,ppppbVar23,pppplVar18,
                               param_6,param_7,param_8);
      uVar11 = local_98;
      FUN_7103778b80(local_98,(long)plVar10,ppppppppplVar15,ppppbVar23,pppplVar18,param_6,param_7,
                     param_8);
      local_a0 = (long ***)&PTR_FUN_710523d9a8;
      local_98 = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      lVar27 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8);
      uVar11 = FUN_71032b23e0(lVar27,0xf1f1e484c);
      bVar3 = (uVar22 & 0xffffffffff) != 0;
      bVar4 = (uVar22 & 0xff00000000000000) == 0x6900000000000000;
      if ((bVar4 && bVar3) &&
         ((uVar11 & 0xff00000000000000) == 0x6900000000000000 && (uVar11 & 0xffffffffff) != 0)) {
        if (((uVar11 ^ uVar22) & 0xffffffffff) != 0) {
          uVar11 = FUN_71032b23e0(lVar27,0xd56784f97);
          uVar19 = uVar11 & 0xffffffffff;
LAB_7101c2b1a8:
          uVar20 = uVar11 & 0xff00000000000000;
          if ((uVar20 != 0x6900000000000000) || (uVar19 == 0)) goto LAB_7101c2b1e0;
          if (((uVar11 ^ uVar22) & 0xffffffffff) != 0) goto LAB_7101c2b1fc;
        }
      }
      else if (((uVar11 & 0xffffffffff) != 0 && (uVar11 & 0xff00000000000000) == 0x6900000000000000)
               != ((uVar22 & 0xff00000000000000) == 0x6900000000000000 &&
                  (uVar22 & 0xffffffffff) != 0)) {
        uVar11 = FUN_71032b23e0(lVar27,0xd56784f97);
        uVar19 = uVar11 & 0xffffffffff;
        if (bVar4 && bVar3) goto LAB_7101c2b1a8;
        uVar20 = uVar11 & 0xff00000000000000;
LAB_7101c2b1e0:
        if ((uVar19 != 0 && uVar20 == 0x6900000000000000) != (bVar4 && bVar3)) {
LAB_7101c2b1fc:
          local_a0 = (long ***)FUN_7103238c50(uVar22,0xc);
          if (((ulong)local_a0 & 0xffffffffff) != 0) {
            plVar10 = pplVar28[10];
            ppppppppplVar15 = (long *********)(long)(int)plVar10[0xe];
            ppppbVar23 = (byte ****)(ulong)*(uint *)(plVar10 + 0xd);
            FUN_710323c4e0((long)plVar10,(ulong *)&local_a0,ppppppppplVar15,ppppbVar23,pppplVar18,
                           param_6,param_7,param_8);
          }
        }
      }
      local_a0 = (long ***)FUN_7103238c50(uVar22,0xe);
      if (((ulong)local_a0 & 0xffffffffff) != 0) {
        plVar10 = pplVar28[10];
        ppppppppplVar15 = (long *********)(long)(int)plVar10[0xe];
        ppppbVar23 = (byte ****)(ulong)*(uint *)(plVar10 + 0xd);
        FUN_710323c4e0((long)plVar10,(ulong *)&local_a0,ppppppppplVar15,ppppbVar23,pppplVar18,
                       param_6,param_7,param_8);
      }
      uVar11 = FUN_71032b2de0(*(long *)(lVar24 + 0x178),uVar22);
      local_a0 = (long ***)FUN_7103238d60(uVar11,0x11);
      plVar10 = local_88;
      if (((ulong)local_a0 & 0xffffffffff) != 0) {
        plVar10 = pplVar28[10];
        ppppppppplVar15 = (long *********)(long)(int)plVar10[0xe];
        ppppbVar23 = (byte ****)(ulong)*(uint *)(plVar10 + 0xd);
        FUN_710323c4e0((long)plVar10,(ulong *)&local_a0,ppppppppplVar15,ppppbVar23,pppplVar18,
                       param_6,param_7,param_8);
        plVar10 = local_88;
      }
    }
    else {
      plVar10 = local_88;
      if ((*(long *)((long)local_88 + 8) != 0) &&
         (lVar27 = *(long *)(*(long *)((long)local_88 + 8) + 0x18), lVar27 != 0)) {
        *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) & 0xfe;
      }
    }
    local_88 = (long *)0x0;
    local_90 = (long ***)&PTR_FUN_710523d988;
    if (plVar10 != (long *)0x0) {
      local_88 = (long *)0x0;
      local_90 = (long ***)&PTR_FUN_710523d988;
      uVar11 = *(ulong *)((long)plVar10 + 0x18);
      *(undefined ***)((long)plVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar10 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40((ulong)plVar10);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x79);
  plVar10 = pplVar28[8];
  ppplVar12 = (long ***)
              FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar15,ppppbVar23,pppplVar18,param_6,
                             param_7,param_8);
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_90 = (long ***)&DAT_00000028;
      pppplVar16 = &local_90;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar9 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar16,ppppbVar23,pppplVar18,param_6,param_7,
                                     param_8), ppplVar12 != (long ***)0x0)) goto LAB_7101c2b31c;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_7101c2b31c:
  *ppplVar12 = (long **)&PTR_FUN_71050ad1e0;
  ppplVar12[4] = (long **)0x0;
  ppplVar12[2] = pplVar28;
  ppplVar12[3] = (long **)FUN_7101c298e0;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  pppplVar16 = &local_a0;
  local_a0 = ppplVar12;
  FUN_7103376af0((long)plVar10,(byte *)"set_stage_preview_from_panel",pppplVar16,ppppbVar23,
                 pppplVar18,param_6,param_7,param_8);
  ppplVar12 = local_a0;
  local_a0 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  plVar10 = pplVar28[8];
  ppplVar12 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar16,ppppbVar23,pppplVar18,param_6,param_7,param_8);
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long ***)((ulong)local_a8._4_4_ << 0x20);
      local_90 = (long ***)&DAT_00000038;
      pppplVar16 = &local_90;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      if (((uVar9 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar16,ppppbVar23,pppplVar18,param_6,param_7,
                                     param_8), ppplVar12 != (long ***)0x0)) goto LAB_7101c2b3c8;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_7101c2b3c8:
  ppplVar12[2] = pplVar28;
  *ppplVar12 = (long **)&PTR_FUN_71050ad208;
  ppplVar12[3] = (long **)FUN_7101c29d70;
  ppplVar12[4] = (long **)0x0;
  ppplVar12[5] = (long **)0x0;
  ppplVar12[6] = (long **)0x0;
  pppplVar16 = (long ****)&local_a8;
  *(undefined4 *)(ppplVar12 + 1) = 1;
  local_a8 = ppplVar12;
  FUN_7103376af0((long)plVar10,(byte *)"get_global_parameter",pppplVar16,ppppbVar23,pppplVar18,
                 param_6,param_7,param_8);
  ppplVar12 = local_a8;
  local_a8 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  plVar10 = pplVar28[8];
  ppplVar12 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar16,ppppbVar23,pppplVar18,param_6,param_7,param_8);
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0._4_4_ << 0x20);
      local_90 = (long ***)&DAT_00000038;
      pppplVar16 = &local_90;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar9 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar16,ppppbVar23,pppplVar18,param_6,param_7,
                                     param_8), ppplVar12 != (long ***)0x0)) goto LAB_7101c2b478;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_7101c2b478:
  ppplVar12[5] = (long **)0x0;
  ppplVar12[6] = (long **)0x0;
  *ppplVar12 = (long **)&PTR_FUN_71050ad230;
  ppplVar12[2] = pplVar28;
  ppplVar12[3] = (long **)FUN_7101c29e10;
  ppplVar12[4] = (long **)0x0;
  pppplVar16 = (long ****)&local_b0;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  local_b0 = ppplVar12;
  FUN_7103376af0((long)plVar10,(byte *)"set_edit_parameter",pppplVar16,ppppbVar23,pppplVar18,param_6
                 ,param_7,param_8);
  ppplVar12 = local_b0;
  local_b0 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  plVar10 = pplVar28[8];
  ppplVar12 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar16,ppppbVar23,pppplVar18,param_6,param_7,param_8);
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (long ***)((ulong)local_b8._4_4_ << 0x20);
      local_90 = (long ***)&DAT_00000038;
      pppplVar16 = &local_90;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar9 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar16,ppppbVar23,pppplVar18,param_6,param_7,
                                     param_8), ppplVar12 != (long ***)0x0)) goto LAB_7101c2b524;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_7101c2b524:
  *ppplVar12 = (long **)&PTR_FUN_71050ad230;
  ppplVar12[5] = (long **)0x0;
  ppplVar12[6] = (long **)0x0;
  ppplVar12[2] = pplVar28;
  pppplVar16 = (long ****)&local_b8;
  ppplVar12[3] = (long **)FUN_7101c2a050;
  ppplVar12[4] = (long **)0x0;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  local_b8 = ppplVar12;
  FUN_7103376af0((long)plVar10,(byte *)"out_com_frame",pppplVar16,ppppbVar23,pppplVar18,param_6,
                 param_7,param_8);
  ppplVar12 = local_b8;
  local_b8 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  plVar10 = pplVar28[8];
  local_90 = (long ***)
             FUN_710392e290(0x10,0x38,pppplVar16,ppppbVar23,pppplVar18,param_6,param_7,param_8);
  if (local_90 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_90 = (long ***)&DAT_00000038;
      pppplVar16 = &local_90;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (local_90 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar16,ppppbVar23,pppplVar18,param_6,param_7,
                                    param_8), local_90 != (long ***)0x0)) goto LAB_7101c2b5c8;
    }
    local_90 = (long ***)0x0;
  }
LAB_7101c2b5c8:
  local_90[2] = pplVar28;
  *local_90 = (long **)&PTR_FUN_71050ad258;
  local_90[3] = (long **)FUN_7101c2a090;
  local_90[4] = (long **)0x0;
  local_90[5] = (long **)0x0;
  local_90[6] = (long **)0x0;
  *(undefined4 *)(local_90 + 1) = 1;
  FUN_7103376af0((long)plVar10,(byte *)"is_can_edit",&local_90,ppppbVar23,pppplVar18,param_6,param_7
                 ,param_8);
  ppplVar12 = local_90;
  local_90 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  plVar10 = (long *)0x0;
  if ((long *)*pplVar28[8] != (long *)0x0) {
    FUN_7103375650((long *)*pplVar28[8],"STAGE_PANEL_MAX",&DAT_71042b2a84);
    plVar10 = (long *)0x0;
    if ((long *)*pplVar28[8] != (long *)0x0) {
      FUN_7103375650((long *)*pplVar28[8],"STAGE_PANEL_LIST_NUM",&DAT_71042b2a84);
      plVar10 = (long *)*pplVar28[8];
    }
  }
  pcVar17 = &DAT_71042b2a84;
  ppppbVar23 = (byte ****)0x0;
  FUN_7103375650(plVar10,"STAGE_PANEL_ALL_ON_OFF",&DAT_71042b2a84);
  plVar21 = pplVar28[8];
  plVar10 = (long *)*plVar21;
  lVar27 = *plVar10;
  *(undefined4 *)(plVar10 + 2) = 0;
  plVar10 = *(long **)(lVar27 + 0x10);
  *plVar10 = lVar27;
  *(undefined4 *)(plVar10 + 1) = 0x48;
  lVar25 = *(long *)(lVar27 + 0x10);
  *(long *)(lVar27 + 0x10) = lVar25 + 0x10;
  lVar24 = *(long *)(*(long *)(lVar27 + 0x18) + 200);
  *(long *)(lVar27 + 0x10) = lVar25;
  if (lVar24 == lVar27) {
    lVar25 = *(long *)(*(long *)(lVar27 + 0x18) + 0x40);
    if (*(uint *)(lVar25 + 0xc) < 2) {
      plVar10 = (long *)(*(long *)(lVar25 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar25 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar10[3] == 0x13) && (plVar13 = plVar10, plVar10[2] == 2)) break;
        piVar1 = (int *)((long)plVar10 + 0x1c);
        plVar10 = plVar10 + (long)*piVar1 * 4;
        plVar13 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar13 = (long *)(*(long *)(lVar25 + 0x10) + 0x10);
    }
    pcVar17 = "create_data";
    FUN_71038f4d40(lVar27,plVar13,"create_data");
  }
  else {
    FUN_71038f4b20(lVar27,"create_data");
    FUN_71038f4fc0(lVar27,-2);
  }
  puVar6 = (undefined8 *)(*(long *)(lVar27 + 0x10) + -0x10);
  if ((puVar6 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar27 + 0x10) + -8) & 0xf) != 6)) {
    *(undefined8 **)(lVar27 + 0x10) = puVar6;
  }
  else {
    FUN_7103377130(plVar21,0,(long ****)pcVar17,ppppbVar23,pppplVar18,param_6,param_7,param_8);
  }
  local_78 = 0;
  local_80 = (long ****)&PTR_FUN_710523d988;
  if (uVar7 != 0) {
    local_78 = 0;
    local_80 = (long ****)&PTR_FUN_710523d988;
    uVar9 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_710323eba0((undefined8 *)(*param_2 + 8),(ulong *)&DAT_7104545110,(long *********)pcVar17,
                 ppppbVar23,pppplVar18,param_6,param_7,param_8);
  FUN_710323eba0((undefined8 *)(*param_2 + 8),(ulong *)&DAT_7104545118,(long *********)pcVar17,
                 ppppbVar23,pppplVar18,param_6,param_7,param_8);
  if (local_d0 != (long ***)0x0) {
    local_c8 = (long *****)local_d0;
    FUN_710392eb40((ulong)local_d0);
  }
  return;
}

