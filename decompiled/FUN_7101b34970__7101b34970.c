// addr:      7101b34970
// offset:    0x1b34970
// name:      FUN_7101b34970
// mangled:   
// signature: undefined4 __cdecl FUN_7101b34970(long param_1, uint param_2, int param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined4
FUN_7101b34970(long param_1,uint param_2,int param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong *puVar12;
  byte bVar13;
  byte *pbVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong *puVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  uint auStack_1b8 [2];
  char acStack_1b0 [64];
  undefined **local_170;
  ulong local_168;
  undefined **local_160;
  ulong local_158;
  uint auStack_150 [2];
  char acStack_148 [64];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined1 uStack_ef;
  undefined2 uStack_ee;
  undefined2 uStack_ec;
  undefined **local_c0;
  ulong local_b8 [9];
  undefined4 local_64;
  
  lVar24 = *(long *)(DAT_710532f730 + 8);
  local_100 = local_100 & 0xffffffffffffff00;
  local_108 = 0;
  cVar3 = *(char *)(param_1 + 0x1f2);
  if (cVar3 == '\0') {
    lVar22 = *(long *)(lVar24 + 0x178);
    if (*(char *)(param_1 + 499) != '\0') {
      uVar21 = 0x811c9dc5;
      uVar6 = FUN_71032b23e0(*(long *)(lVar22 + 8),0x14bebd6a0c);
      local_f0 = 0;
      uStack_f8 = 0x6c6c615f746e6574;
      uVar18 = 0x10;
      uVar19 = 0x76;
      pbVar14 = (byte *)((long)&local_100 + 1);
      do {
        uVar21 = uVar21 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (uVar19 != 0);
      goto LAB_7101b34ac4;
    }
    local_64 = *(undefined4 *)(param_1 + 0x1e4);
    uVar19 = 0x811c9dc5;
    uVar6 = FUN_71032b23e0(*(long *)(lVar22 + 8),0xf1f1e484c);
    local_100 = 0x6e6f635f77656976;
    uStack_f8 = 0x6e61725f746e6574;
    local_f0 = 100;
    uStack_ef = 0x6f;
    uStack_ee = 0x6d;
    uVar17 = 0x76;
    pbVar14 = (byte *)((long)&local_100 + 1);
    uVar21 = uVar19;
    do {
      uVar21 = uVar21 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (uVar17 != 0);
    local_108 = CONCAT44(0x13,uVar21);
    if (*(char *)(param_1 + 0x201) != '\0') {
      uVar6 = 0x13bb95239c;
      if (param_3 != 2) {
        uVar6 = 0x166fbc7641;
      }
      uVar7 = 0x1c23e8aab5;
      if (param_3 != 1) {
        uVar7 = uVar6;
      }
      uVar7 = FUN_71032b23e0(*(long *)(lVar22 + 8),uVar7);
      uVar6 = uVar7;
      if (param_2 < 3) {
        uVar6 = *(ulong *)(param_1 + (long)(int)param_2 * 0x28 + 0xf8);
        bVar5 = FUN_71032b4980(lVar24 + 0x170,uVar6);
        if (!bVar5) {
          uVar6 = uVar7;
        }
      }
      local_f0 = 0x65;
      uStack_ef = 0x67;
      uStack_f8 = 0x7461635f746e6574;
      uStack_ee = 0x726f;
      uStack_ec = 0x79;
      uVar21 = 0x76;
      pbVar14 = (byte *)((long)&local_100 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (uVar21 != 0);
      local_108 = CONCAT44(0x15,uVar19);
    }
  }
  else {
    lVar22 = *(long *)(lVar24 + 0x178);
    uVar21 = 0x811c9dc5;
    uVar6 = FUN_71032b23e0(*(long *)(lVar22 + 8),0x116b904091);
    uStack_f8 = 0x726f6e5f746e6574;
    local_f0 = 0x6d;
    uStack_ef = 0x61;
    uStack_ee = 0x6c;
    uVar18 = 0x13;
    uVar19 = 0x76;
    pbVar14 = (byte *)((long)&local_100 + 1);
    do {
      uVar21 = uVar21 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (uVar19 != 0);
LAB_7101b34ac4:
    local_64 = 0;
    local_108 = CONCAT44(uVar18,uVar21);
  }
  local_100 = 0x6e6f635f77656976;
  if (*(int *)(param_1 + 0x1e0) == 4) {
    uVar7 = FUN_71032575c0(*(long *)(lVar24 + 0x278),0x1565c779d1);
  }
  else {
    uVar7 = FUN_71032575c0(*(long *)(lVar24 + 0x278),0xd2288990c);
    if (cVar3 != '\0') {
      puVar12 = *(ulong **)(param_1 + 0x168);
      puVar2 = *(ulong **)(param_1 + 0x170);
      if (puVar12 == puVar2) {
        iVar16 = 0;
      }
      else if (((uVar6 & 0xff00000000000000) == 0x6900000000000000) && ((uVar6 & 0xffffffffff) != 0)
              ) {
        iVar16 = 0;
        do {
          puVar20 = puVar12 + 3;
          uVar7 = *puVar12;
          if ((uVar7 & 0xff00000000000000) == 0x6900000000000000 && (uVar7 & 0xffffffffff) != 0) {
            uVar21 = (uint)(((uVar6 ^ uVar7) & 0xffffffffff) == 0);
          }
          else {
            uVar21 = 0;
          }
          iVar16 = iVar16 + (uVar21 ^ 1);
        } while ((uVar21 == 0) && (puVar12 = puVar20, puVar2 != puVar20));
      }
      else {
        iVar16 = 0;
        do {
          uVar7 = *puVar12;
          iVar16 = iVar16 + (uint)((uVar7 & 0xff00000000000000) == 0x6900000000000000 &&
                                  (uVar7 & 0xffffffffff) != 0);
          if (puVar2 == puVar12 + 3) break;
          puVar12 = puVar12 + 3;
        } while ((uVar7 & 0xff00000000000000) == 0x6900000000000000 && (uVar7 & 0xffffffffff) != 0);
      }
      lVar15 = *(long *)(*(long *)(param_1 + 0x180) + 0x38);
      if ((ulong)(long)iVar16 < (ulong)(*(long *)(*(long *)(param_1 + 0x180) + 0x40) - lVar15 >> 5))
      {
        plVar1 = (long *)(lVar15 + (long)iVar16 * 0x20);
        if ((ulong)(long)*(int *)((long)plVar1 + 0x1c) < (ulong)(plVar1[1] - *plVar1 >> 4)) {
          uVar7 = *(ulong *)(*plVar1 + (long)*(int *)((long)plVar1 + 0x1c) * 0x10);
          goto LAB_7101b34d6c;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
  }
LAB_7101b34d6c:
  uVar23 = uVar6;
  FUN_71032b1a60((uint *)&local_c0,lVar22,uVar6);
  FUN_71003a4ca0(auStack_150,"nam_stg1_%s",local_b8,uVar23,param_4,param_5,param_6,param_7,param_8);
  iVar16 = *(int *)(param_1 + 0x1d8);
  if (iVar16 < 1) {
    uVar18 = 0;
  }
  else {
    uVar23 = 0;
    uVar18 = 0;
    puVar25 = (undefined4 *)(param_1 + 0x110);
    do {
      if (2 < uVar23) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((param_2 == uVar23) || (puVar25[-8] == 0)) {
        puVar25[-8] = 1;
        puVar12 = (ulong *)(puVar25 + -6);
        *puVar12 = uVar6;
        puVar25[-4] = local_64;
        puVar25[-3] = 0;
        *(ulong *)(puVar25 + -2) = uVar7;
        *puVar25 = 0;
        if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        FUN_7103776640(&local_160,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,
                       (byte ****)"set_preview_st_0%d",uVar23 & 0xffffffff,param_4,param_5,param_6,
                       param_7,param_8);
        FUN_7101b38390(param_1,(long)&local_160,puVar12,param_4,param_5,param_6,param_7,param_8);
        param_4 = (byte ****)0x1;
        FUN_7101b38760(*(int *)(param_1 + 0x1e0),(long)&local_160,puVar12,1,param_5,param_6,param_7,
                       param_8);
        uVar4 = local_158;
        FUN_7103778300(0x3f800000,local_158,(long)&local_100);
        FUN_7103778300(0x3f800000,uVar4,0x710433a9c5);
        FUN_7103776910(&local_c0,(long)&local_160,(long ****)"set_txt_st_name",puVar12,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_c0,acStack_148,puVar12,param_4,param_5,param_6,param_7,param_8);
        uVar10 = local_b8[0];
        local_c0 = &PTR_FUN_710523d9a8;
        local_b8[0] = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_7103776640(&local_170,(long)&local_160,(byte ****)"set_parts_btn_music",puVar12,param_4,
                       param_5,param_6,param_7,param_8);
        uVar10 = local_168;
        bVar13 = *(byte *)(param_1 + 0x1f2);
        if ((*(long *)(local_168 + 8) != 0) &&
           (lVar22 = *(long *)(*(long *)(local_168 + 8) + 0x18), lVar22 != 0)) {
          *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe | bVar13;
          bVar13 = *(byte *)(param_1 + 0x1f2);
        }
        if (bVar13 == 0) {
          bVar5 = FUN_71032b4980(lVar24 + 0x170,uVar6);
          if (bVar5) {
            FUN_7103776640(&local_c0,(long)&local_160,(byte ****)"set_parts_btn_stage",puVar12,
                           param_4,param_5,param_6,param_7,param_8);
            uVar9 = local_b8[0];
            FUN_7103778300(0x3f800000,local_b8[0],0x71042a2b6c);
            local_c0 = &PTR_FUN_710523d988;
            local_b8[0] = 0;
            if (uVar9 != 0) {
              uVar8 = *(ulong *)(uVar9 + 0x18);
              *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar9 + 0x18) = 0;
              if (uVar8 != 0) {
                FUN_710392eb40(uVar8);
              }
              FUN_710392eb40(uVar9);
            }
            FUN_7103776910(&local_c0,(long)&local_160,(long ****)"set_txt_st_name_category",puVar12,
                           param_4,param_5,param_6,param_7,param_8);
            pcVar11 = acStack_148;
            goto LAB_7101b3502c;
          }
        }
        else {
          FUN_7103776640(&local_c0,(long)&local_160,(byte ****)"set_parts_btn_stage",puVar12,param_4
                         ,param_5,param_6,param_7,param_8);
          uVar9 = local_b8[0];
          FUN_7103778300(0x3f800000,local_b8[0],0x71042a2b6c);
          local_c0 = &PTR_FUN_710523d988;
          local_b8[0] = 0;
          if (uVar9 != 0) {
            uVar8 = *(ulong *)(uVar9 + 0x18);
            *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar9 + 0x18) = 0;
            if (uVar8 != 0) {
              FUN_710392eb40(uVar8);
            }
            FUN_710392eb40(uVar9);
          }
          puVar12 = *(ulong **)(puVar25 + -2);
          FUN_71032570e0((uint *)&local_c0,*(long *)(lVar24 + 0x278),(ulong)puVar12);
          FUN_71003a4ca0(auStack_1b8,"bgm_title_%s",local_b8,puVar12,param_4,param_5,param_6,param_7
                         ,param_8);
          FUN_7103776910(&local_c0,(long)&local_170,(long ****)"set_txt_music_title",puVar12,param_4
                         ,param_5,param_6,param_7,param_8);
          pcVar11 = acStack_1b0;
LAB_7101b3502c:
          FUN_710377a120((long)&local_c0,pcVar11,puVar12,param_4,param_5,param_6,param_7,param_8);
          uVar9 = local_b8[0];
          local_c0 = &PTR_FUN_710523d9a8;
          local_b8[0] = 0;
          if (uVar9 != 0) {
            FUN_710392eb40(uVar9);
          }
        }
        FUN_7101b323a0(param_1,(uint)uVar23,puVar25[-4],param_4,param_5,param_6,param_7,param_8);
        local_170 = &PTR_FUN_710523d988;
        local_168 = 0;
        if (uVar10 != 0) {
          uVar9 = *(ulong *)(uVar10 + 0x18);
          *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar10 + 0x18) = 0;
          if (uVar9 != 0) {
            FUN_710392eb40(uVar9);
          }
          FUN_710392eb40(uVar10);
        }
        local_160 = &PTR_FUN_710523d988;
        local_158 = 0;
        if (uVar4 != 0) {
          uVar10 = *(ulong *)(uVar4 + 0x18);
          *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar4 + 0x18) = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40(uVar4);
        }
        iVar16 = *(int *)(param_1 + 0x1d8);
        uVar18 = 1;
      }
      uVar23 = uVar23 + 1;
      puVar25 = puVar25 + 10;
    } while ((long)uVar23 < (long)iVar16);
  }
  return uVar18;
}

