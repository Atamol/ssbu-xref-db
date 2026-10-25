// addr:      7101b31a10
// offset:    0x1b31a10
// name:      FUN_7101b31a10
// mangled:   
// signature: undefined __cdecl FUN_7101b31a10(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101b31a10(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  bool bVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar7;
  ulong uVar8;
  long *********ppppppppplVar9;
  ulong *puVar10;
  byte ****ppppbVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined **local_130;
  ulong auStack_128 [8];
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined **local_a8;
  long *local_a0 [8];
  
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar8 = (ulong)param_2;
  lVar18 = (long)(int)param_2;
  FUN_7103776640(&local_b8,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,
                 (byte ****)"set_preview_st_0%d",uVar8,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_c8,(long)&local_b8,(byte ****)"set_parts_btn_stage",uVar8,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_d8,(long)&local_b8,(byte ****)"set_parts_btn_music",uVar8,param_4,param_5,
                 param_6,param_7,param_8);
  iVar2 = *(int *)(param_1 + lVar18 * 0x28 + 0xf0);
  if (iVar2 == 1) {
    lVar14 = param_1 + lVar18 * 0x28;
    puVar1 = (ulong *)(lVar14 + 0xf8);
    FUN_7101b38390(param_1,(long)&local_b8,puVar1,param_4,param_5,param_6,param_7,param_8);
    uVar12 = 1;
    puVar10 = puVar1;
    FUN_7101b38760(*(int *)(param_1 + 0x1e0),(long)&local_b8,puVar1,1,param_5,param_6,param_7,
                   param_8);
    FUN_7103778300(0x3f800000,local_b0,0x7104432c82);
    lVar20 = *(long *)(DAT_710532f730 + 8);
    uVar13 = *(ulong *)(lVar14 + 0xf8);
    lVar14 = *(long *)(*(long *)(lVar20 + 0x178) + 8);
    uVar8 = FUN_71032b23e0(lVar14,0xf1f1e484c);
    bVar5 = (uVar13 & 0xffffffffff) != 0;
    bVar6 = (uVar13 & 0xff00000000000000) == 0x6900000000000000;
    if (((bVar6 && bVar5) && ((uVar8 & 0xff00000000000000) == 0x6900000000000000)) &&
       ((uVar8 & 0xffffffffff) != 0)) {
      if (((uVar8 ^ uVar13) & 0xffffffffff) == 0) {
LAB_7101b31e30:
        FUN_7103778300(0x3f800000,local_b0,0x710435b2ca);
        if ((*(long *)(local_d0 + 8) != 0) &&
           (lVar18 = *(long *)(*(long *)(local_d0 + 8) + 0x18), lVar18 != 0)) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
        }
      }
      else {
        uVar8 = FUN_71032b23e0(lVar14,0x14bebd6a0c);
        uVar19 = uVar8 & 0xffffffffff;
LAB_7101b31e84:
        uVar16 = uVar8 & 0xff00000000000000;
        if ((uVar16 != 0x6900000000000000) || (uVar19 == 0)) goto LAB_7101b3213c;
        if (((uVar8 ^ uVar13) & 0xffffffffff) == 0) goto LAB_7101b3215c;
LAB_7101b31ea0:
        FUN_7103776910(&local_e8,(long)&local_b8,(long ****)"set_txt_st_name_category",puVar10,
                       uVar12,param_5,param_6,param_7,param_8);
        bVar5 = FUN_71032b4980(lVar20 + 0x170,*puVar1);
        if (bVar5) {
          FUN_7103778300(0x3f800000,local_b0,0x71042d5f2b);
          uVar8 = *puVar1;
          FUN_71032b1a60((uint *)&local_a8,*(long *)(lVar20 + 0x178),uVar8);
          FUN_71003a4ca0((uint *)&local_130,"nam_stg1_%s",local_a0,uVar8,uVar12,param_5,param_6,
                         param_7,param_8);
          FUN_710377a120((long)&local_e8,(char *)auStack_128,uVar8,uVar12,param_5,param_6,param_7,
                         param_8);
          bVar15 = 0;
        }
        else {
          FUN_7103778300(0x3f800000,local_b0,0x7104318afc);
          if (*(long **)(local_e0 + 0x10) != (long *)0x0) {
            uVar12 = 0;
            local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
            FUN_71037a2270(*(long **)(local_e0 + 0x10),(ushort *)&local_a8,0,0);
          }
          bVar15 = 1;
        }
        puVar10 = (ulong *)(param_1 + lVar18 * 0x28 + 0x108);
        FUN_7101b37cb0(param_1,(long)&local_b8,puVar10,uVar12,param_5,param_6,param_7,param_8);
        if ((*(long *)(local_d0 + 8) != 0) &&
           (lVar14 = *(long *)(*(long *)(local_d0 + 8) + 0x18), lVar14 != 0)) {
          *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe | bVar15;
        }
        FUN_7103778300(0x3f800000,local_b0,
                       (long)(&PTR_s_type_normal_71050aab50)
                             [*(int *)(param_1 + lVar18 * 0x28 + 0x100)]);
        uVar8 = local_e0;
        local_e8 = &PTR_FUN_710523d9a8;
        local_e0 = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
      }
    }
    else {
      if (((uVar8 & 0xffffffffff) != 0 && (uVar8 & 0xff00000000000000) == 0x6900000000000000) ==
          ((uVar13 & 0xff00000000000000) == 0x6900000000000000 && (uVar13 & 0xffffffffff) != 0))
      goto LAB_7101b31e30;
      uVar8 = FUN_71032b23e0(lVar14,0x14bebd6a0c);
      uVar19 = uVar8 & 0xffffffffff;
      if (bVar6 && bVar5) goto LAB_7101b31e84;
      uVar16 = uVar8 & 0xff00000000000000;
LAB_7101b3213c:
      if ((uVar19 != 0 && uVar16 == 0x6900000000000000) != (bVar6 && bVar5)) goto LAB_7101b31ea0;
LAB_7101b3215c:
      FUN_7103778300(0x3f800000,local_b0,0x7104318b10);
    }
    FUN_7103776910(&local_e8,(long)&local_b8,(long ****)"set_txt_st_name",puVar10,uVar12,param_5,
                   param_6,param_7,param_8);
    uVar8 = *puVar1;
    FUN_71032b1a60((uint *)&local_a8,*(long *)(lVar20 + 0x178),uVar8);
    FUN_71003a4ca0((uint *)&local_130,"nam_stg1_%s",local_a0,uVar8,uVar12,param_5,param_6,param_7,
                   param_8);
    FUN_710377a120((long)&local_e8,(char *)auStack_128,uVar8,uVar12,param_5,param_6,param_7,param_8)
    ;
    uVar8 = local_e0;
    local_e8 = &PTR_FUN_710523d9a8;
    local_e0 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    if ((*(long *)(local_c0 + 8) != 0) &&
       (lVar18 = *(long *)(*(long *)(local_c0 + 8) + 0x18), lVar18 != 0)) {
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
    }
    pcVar7 = "view_normal";
    uVar8 = local_c0;
    uVar13 = local_d0;
  }
  else {
    if (iVar2 != 2) {
      FUN_7101b39ec0((long)&local_b8,extraout_x1,uVar8,param_4,param_5,param_6,param_7,param_8);
      FUN_7101b38760(*(int *)(param_1 + 0x1e0),(long)&local_b8,
                     (ulong *)(param_1 + lVar18 * 0x28 + 0xf8),0,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_b0,0x71043f095a);
      FUN_7103778300(0x3f800000,local_b0,0x710438c5d4);
      FUN_7103778300(0x3f800000,local_b0,0x7104432c82);
      if ((*(long *)(local_c0 + 8) != 0) &&
         (lVar18 = *(long *)(*(long *)(local_c0 + 8) + 0x18), lVar18 != 0)) {
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
      }
      uVar8 = local_c0;
      uVar13 = local_d0;
      if ((*(long *)(local_d0 + 8) != 0) &&
         (lVar18 = *(long *)(*(long *)(local_d0 + 8) + 0x18), lVar18 != 0)) {
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
      }
      goto LAB_7101b322bc;
    }
    uVar19 = (ulong)*(int *)(param_1 + lVar18 * 0x28 + 0x110);
    lVar18 = *(long *)(param_1 + 0x248);
    uVar13 = (*(long *)(param_1 + 0x250) - lVar18 >> 5) * 0x4ec4ec4ec4ec4ec5;
    if (uVar13 < uVar19 || uVar13 - uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar17 = (uint *)(lVar18 + uVar19 * 0x1a0);
    if (*puVar17 == 0) {
      lVar18 = *(long *)(DAT_710532f730 + 8);
      uVar13 = FUN_71032b23e0(*(long *)(*(long *)(lVar18 + 0x178) + 8),0xf1f1e484c);
      FUN_7101b39ec0((long)&local_b8,extraout_x1_00,uVar8,param_4,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_b0,0x710424f10c);
      FUN_7103776910(&local_e8,(long)&local_b8,(long ****)"set_txt_st_name",uVar8,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71032b1a60((uint *)&local_a8,*(long *)(lVar18 + 0x178),uVar13);
      FUN_71003a4ca0((uint *)&local_130,"nam_stg1_%s",local_a0,uVar13,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_710377a120((long)&local_e8,(char *)auStack_128,uVar13,param_4,param_5,param_6,param_7,
                     param_8);
      uVar8 = local_e0;
      local_e8 = &PTR_FUN_710523d9a8;
      local_e0 = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      if ((*(long *)(local_d0 + 8) != 0) &&
         (lVar18 = *(long *)(*(long *)(local_d0 + 8) + 0x18), lVar18 != 0)) {
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
      }
    }
    else {
      FUN_7103778300(0x3f800000,local_b0,0x710424f125);
      FUN_7103778300(0x3f800000,local_b0,0x71044125e0);
      FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_txt_st_name_make",uVar8,param_4,
                     param_5,param_6,param_7,param_8);
      ppppbVar11 = (byte ****)(lVar18 + uVar19 * 0x1a0 + 0x110);
      FUN_710377a280((long)&local_a8,(byte *)"mnu_stgcreate_top_nam",1);
      plVar4 = local_a0[0];
      local_a8 = &PTR_FUN_710523d9a8;
      local_a0[0] = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar4);
      }
      ppppppppplVar9 = (long *********)(lVar18 + uVar19 * 0x1a0 + 0x140);
      FUN_7101b37cb0(param_1,(long)&local_b8,(ulong *)ppppppppplVar9,ppppbVar11,param_5,param_6,
                     param_7,param_8);
      if ((*(long *)(local_d0 + 8) != 0) &&
         (lVar14 = *(long *)(*(long *)(local_d0 + 8) + 0x18), lVar14 != 0)) {
        *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 1;
      }
      FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_rep_stage",ppppppppplVar9,ppppbVar11,
                     param_5,param_6,param_7,param_8);
      lVar14 = *(long *)(param_1 + 0x238);
      if (lVar14 == 0) {
LAB_7101b31c08:
        lVar14 = *local_a0[0];
        if (lVar14 != 0) {
          bVar15 = *(byte *)(lVar14 + 0x58) & 0xfe;
LAB_7101b31c1c:
          *(byte *)(lVar14 + 0x58) = bVar15;
        }
      }
      else {
        uVar3 = *puVar17;
        lVar20 = param_1 + 0x238;
        do {
          bVar5 = *(uint *)(lVar14 + 0x20) < uVar3;
          if (!bVar5) {
            lVar20 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)bVar5 * 8);
        } while (lVar14 != 0);
        if ((lVar20 == param_1 + 0x238) || (uVar3 < *(uint *)(lVar20 + 0x20))) goto LAB_7101b31c08;
        FUN_7103779480((long)&local_a8,lVar20 + 0x28,ppppppppplVar9,ppppbVar11,param_5,param_6,
                       param_7,param_8);
        lVar14 = *local_a0[0];
        if (lVar14 != 0) {
          bVar15 = *(byte *)(lVar14 + 0x58) | 1;
          goto LAB_7101b31c1c;
        }
      }
      plVar4 = local_a0[0];
      if (*(int *)(param_1 + 0x1e0) == 2) {
        auStack_128[0] = uRam0000007107459008;
        local_130 = _ConstantZero;
        FUN_7103779770(0.8,(long)local_a0[0],&local_130);
      }
      iVar2 = *(int *)(lVar18 + uVar19 * 0x1a0 + 0x134);
      if (iVar2 == 1) {
        pcVar7 = "preview_m";
      }
      else if (iVar2 == 2) {
        pcVar7 = "preview_l";
      }
      else {
        pcVar7 = "preview_s";
      }
      FUN_7103778300(0x3f800000,local_b0,(long)pcVar7);
      FUN_7103776910(&local_130,(long)&local_b8,(long ****)"set_txt_make_time",ppppppppplVar9,
                     ppppbVar11,param_5,param_6,param_7,param_8);
      FUN_710377a280((long)&local_130,(byte *)"mnu_stgcreate_top_date",2);
      uVar8 = auStack_128[0];
      local_130 = &PTR_FUN_710523d9a8;
      auStack_128[0] = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      if (*(char *)(lVar18 + uVar19 * 0x1a0 + 0x156) == '\0') {
        pcVar7 = "hide_icon_limit";
      }
      else {
        pcVar7 = "show_icon_limit";
      }
      FUN_7103778300(0x3f800000,local_b0,(long)pcVar7);
      if (*(char *)(lVar18 + uVar19 * 0x1a0 + 0xc) == '\x01') {
        pcVar7 = "show_icon_share";
      }
      else {
        pcVar7 = "hide_icon_share";
      }
      FUN_7103778300(0x3f800000,local_b0,(long)pcVar7);
      local_a8 = &PTR_FUN_710523d9a8;
      local_a0[0] = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar4);
      }
    }
    if ((*(long *)(local_c0 + 8) != 0) &&
       (lVar18 = *(long *)(*(long *)(local_c0 + 8) + 0x18), lVar18 != 0)) {
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
    }
    pcVar7 = "view_make";
    uVar8 = local_c0;
    uVar13 = local_d0;
  }
  FUN_7103778300(0x3f800000,uVar13,(long)pcVar7);
LAB_7101b322bc:
  local_d8 = &PTR_FUN_710523d988;
  local_d0 = 0;
  if (uVar13 != 0) {
    uVar19 = *(ulong *)(uVar13 + 0x18);
    *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar13 + 0x18) = 0;
    if (uVar19 != 0) {
      FUN_710392eb40(uVar19);
    }
    FUN_710392eb40(uVar13);
  }
  local_c8 = &PTR_FUN_710523d988;
  local_c0 = 0;
  if (uVar8 != 0) {
    uVar13 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = 0;
  if (uVar8 != 0) {
    uVar13 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar8);
  }
  return;
}

