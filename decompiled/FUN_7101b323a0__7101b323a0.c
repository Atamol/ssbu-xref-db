// addr:      7101b323a0
// offset:    0x1b323a0
// name:      FUN_7101b323a0
// mangled:   
// signature: undefined __cdecl FUN_7101b323a0(long param_1, uint param_2, uint param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b323a0(long param_1,uint param_2,uint param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar10 = *(ulong *)(param_1 + (long)(int)param_2 * 0x28 + 0xf8);
  lVar8 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8);
  uVar4 = FUN_71032b23e0(lVar8,0x116b904091);
  bVar2 = (uVar10 & 0xffffffffff) != 0;
  bVar3 = (uVar10 & 0xff00000000000000) == 0x6900000000000000;
  if ((bVar3 && bVar2) &&
     ((uVar4 & 0xff00000000000000) == 0x6900000000000000 && (uVar4 & 0xffffffffff) != 0)) {
    if (((uVar4 ^ uVar10) & 0xffffffffff) != 0) {
      uVar4 = FUN_71032b23e0(lVar8,0x166fbc7641);
      uVar7 = uVar4 & 0xffffffffff;
LAB_7101b324c8:
      if (((uVar4 & 0xff00000000000000) != 0x6900000000000000 || uVar7 == 0) ||
          ((uVar4 ^ uVar10) & 0xffffffffff) != 0) {
        uVar4 = FUN_71032b23e0(lVar8,0x1c23e8aab5);
        if (((uVar4 & 0xff00000000000000) == 0x6900000000000000 && (uVar4 & 0xffffffffff) != 0) &&
            ((uVar4 ^ uVar10) & 0xffffffffff) == 0) {
          uVar10 = 1;
          goto LAB_7101b325d0;
        }
        uVar5 = FUN_71032b23e0(lVar8,0x13bb95239c);
        uVar4 = uVar5 & 0xff00000000000000;
        uVar7 = uVar5 & 0xffffffffff;
        if ((uVar4 != 0x6900000000000000) || (uVar7 == 0)) goto LAB_7101b325a8;
        bVar2 = ((uVar5 ^ uVar10) & 0xffffffffff) == 0;
LAB_7101b325c4:
        uVar1 = 2;
        if (!bVar2) {
          uVar1 = param_3;
        }
        uVar10 = (ulong)uVar1;
        goto LAB_7101b325d0;
      }
    }
  }
  else if (((uVar4 & 0xffffffffff) != 0 && (uVar4 & 0xff00000000000000) == 0x6900000000000000) !=
           ((uVar10 & 0xff00000000000000) == 0x6900000000000000 && (uVar10 & 0xffffffffff) != 0)) {
    uVar4 = FUN_71032b23e0(lVar8,0x166fbc7641);
    uVar7 = uVar4 & 0xffffffffff;
    if (bVar3 && bVar2) goto LAB_7101b324c8;
    if ((uVar4 & 0xff00000000000000) == 0x6900000000000000 && uVar7 != 0) {
      uVar4 = FUN_71032b23e0(lVar8,0x1c23e8aab5);
      uVar10 = 1;
      if (((uVar4 & 0xff00000000000000) != 0x6900000000000000) || ((uVar4 & 0xffffffffff) == 0))
      goto LAB_7101b325d0;
      uVar4 = FUN_71032b23e0(lVar8,0x13bb95239c);
      uVar7 = uVar4 & 0xffffffffff;
      uVar4 = uVar4 & 0xff00000000000000;
LAB_7101b325a8:
      bVar2 = (uVar7 != 0 && uVar4 == 0x6900000000000000) == (bVar3 && bVar2);
      goto LAB_7101b325c4;
    }
  }
  uVar10 = 0;
LAB_7101b325d0:
  *(int *)(param_1 + (long)(int)param_2 * 0x28 + 0x100) = (int)uVar10;
  if (*(undefined8 **)(param_1 + 0x18) != *(undefined8 **)(param_1 + 0x10)) {
    lVar8 = **(long **)**(undefined8 **)(param_1 + 0x10) + 8;
    uVar4 = (ulong)param_2;
    FUN_7103776640(&local_70,lVar8,(byte ****)"set_preview_st_0%d",uVar4,param_4,param_5,param_6,
                   param_7,param_8);
    uVar5 = local_68;
    uVar9 = -(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
    FUN_7103778300(0x3f800000,local_68,*(long *)((long)&PTR_s_type_normal_71050aab50 + uVar9));
    FUN_7103776640(&local_80,(long)&local_70,(byte ****)"set_parts_btn_stage",uVar4,param_4,param_5,
                   param_6,param_7,param_8);
    uVar7 = local_78;
    FUN_7103778300(0x3f800000,local_78,*(long *)((long)&PTR_s_icon_normal_71050aab68 + uVar9));
    FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_normal",uVar4,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_90,
                   *(char **)((long)&PTR_s_mel_stage_select_normal_71050aab80 + uVar9),uVar4,param_4
                   ,param_5,param_6,param_7,param_8);
    uVar4 = local_88;
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_7103776640(&local_90,lVar8,(byte ****)"set_medal_0%d",(ulong)param_2,param_4,param_5,param_6
                   ,param_7,param_8);
    uVar4 = local_88;
    if (*(int *)(param_1 + (long)(int)param_2 * 0x28 + 0xf0) == 2) {
      pcVar6 = "stage_make";
    }
    else {
      pcVar6 = (&PTR_s_stage_normal_71050aab98)[(int)uVar10];
    }
    FUN_7103778300(0x3f800000,local_88,(long)pcVar6);
    local_90 = &PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar4 != 0) {
      uVar10 = *(ulong *)(uVar4 + 0x18);
      *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar4 + 0x18) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40(uVar4);
    }
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar7 != 0) {
      uVar4 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar7);
    }
    local_70 = &PTR_FUN_710523d988;
    local_68 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

