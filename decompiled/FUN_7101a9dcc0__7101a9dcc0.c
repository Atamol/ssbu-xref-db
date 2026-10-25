// addr:      7101a9dcc0
// offset:    0x1a9dcc0
// name:      FUN_7101a9dcc0
// mangled:   
// signature: undefined __cdecl FUN_7101a9dcc0(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a9dcc0(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long *********ppppppppplVar9;
  byte ****ppppbVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined **local_a8;
  undefined8 *local_a0;
  long ********local_98;
  ulong local_90;
  undefined **local_88;
  undefined8 *local_80;
  undefined **local_78;
  ulong local_70;
  ulong local_68;
  
  plVar14 = (long *)(param_1 + 8);
  uVar11 = (*(long *)(param_1 + 0x10) - *plVar14 >> 4) * -0x3333333333333333;
  uVar16 = (ulong)param_2;
  if (uVar11 < uVar16 || uVar11 - uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  cVar1 = *(char *)(*plVar14 + uVar16 * 0x50 + 0x46);
  lVar17 = param_3;
  if (cVar1 == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710424ef96);
LAB_7101a9dda8:
    FUN_7103776910(&local_78,param_3,(long ****)"set_txt_name",lVar17,param_4,param_5,param_6,
                   param_7,param_8);
    lVar17 = *plVar14 + uVar16 * 0x50 + 0x20;
    FUN_710377a310((long)&local_78,1);
    uVar11 = local_70;
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    lVar4 = *(long *)(param_3 + 8);
    pcVar8 = "fp_name_off";
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710424efa2);
    if (cVar1 != '\x02') goto LAB_7101a9dda8;
    FUN_7103776910(&local_78,param_3,(long ****)"set_txt_name_fp",lVar17,param_4,param_5,param_6,
                   param_7,param_8);
    lVar17 = *plVar14 + uVar16 * 0x50 + 0x20;
    FUN_710377a310((long)&local_78,1);
    uVar11 = local_70;
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    lVar4 = *(long *)(param_3 + 8);
    pcVar8 = "fp_name_on";
  }
  FUN_7103778300(0x3f800000,lVar4,(long)pcVar8);
  local_78 = (undefined **)0x0;
  FUN_7103741810(*(undefined8 *)(*plVar14 + uVar16 * 0x50 + 0x38),(ulong *)&local_78);
  ppppbVar10 = (byte ****)
               (((ulong)local_78 >> 0x15 & 0x1f) * 1000000 + ((ulong)local_78 >> 0x1a & 0x3f) * 1000
               + ((ulong)local_78 >> 0x20 & 0x3f));
  lVar4 = ((ulong)local_78 & 0xfff) * 1000000 + ((ulong)local_78 >> 0xc & 0xf) * 1000 +
          ((ulong)local_78 >> 0x10 & 0x1f);
  FUN_7103776910(&local_78,param_3,(long ****)"set_txt_date",lVar17,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a310((long)&local_78,1);
  uVar11 = local_70;
  local_78 = &PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_78,param_3,(long ****)"set_txt_time",lVar4,param_4,param_5,param_6,param_7,
                 param_8);
  ppppppppplVar9 = (long *********)0x0;
  FUN_710377a310((long)&local_78,2);
  uVar11 = local_70;
  local_78 = &PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  lVar17 = *(long *)(DAT_710532f730 + 8);
  uVar2 = *(ushort *)(*plVar14 + uVar16 * 0x50 + 0x40);
  plVar12 = (long *)(*(long *)(lVar17 + 0x2e8) + 0x18);
  plVar13 = (long *)*plVar12;
  uVar15 = 0x1effff0000000000;
  plVar6 = plVar12;
  uVar11 = uVar15;
  if (plVar13 != (long *)0x0) {
    do {
      if (*(ushort *)(plVar13 + 4) >= uVar2) {
        plVar6 = plVar13;
      }
      plVar13 = (long *)plVar13[*(ushort *)(plVar13 + 4) < uVar2];
    } while (plVar13 != (long *)0x0);
    uVar11 = 0x1effff0000000000;
    if ((plVar6 != plVar12) && (uVar11 = 0x1effff0000000000, *(ushort *)(plVar6 + 4) <= uVar2)) {
      uVar11 = plVar6[5];
    }
  }
  FUN_7103776640(&local_88,param_3,(byte ****)"set_pic_icon_00",ppppppppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_icn_profile",ppppppppplVar9,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  puVar7 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *(ulong *)((long)puVar7 + 0x18);
    *(undefined ***)((long)puVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar7 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40((ulong)puVar7);
  }
  plVar6 = FUN_7103240430(*(long **)(param_1 + 0x1e8),uVar11,(long ****)ppppppppplVar9,ppppbVar10,
                          param_5,param_6,param_7,param_8);
  if (*(long *)plVar6[1] == 0) {
    FUN_71037790a0(local_70,1,ppppppppplVar9,ppppbVar10,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_7103778b80(local_70,(long)plVar6,ppppppppplVar9,ppppbVar10,param_5,param_6,param_7,param_8);
  }
  FUN_7103776640(&local_98,param_3,(byte ****)"set_pic_icon_00",ppppppppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_88,(long)&local_98,(long ****)"set_icn_profile_bg",ppppppppplVar9,ppppbVar10
                 ,param_5,param_6,param_7,param_8);
  uVar11 = local_90;
  local_98 = (long ********)&PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar11 != 0) {
    uVar5 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar11);
  }
  local_a8 = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar9,ppppbVar10,param_5,param_6,param_7,
                          param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = local_68 & 0xffffffff00000000;
      local_98 = (long ********)&SUB_00000020;
      ppppppppplVar9 = &local_98;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar11 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar9,ppppbVar10,param_5,param_6,
                                  param_7,param_8), puVar7 != (undefined8 *)0x0))
      goto LAB_7101a9e06c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101a9e06c:
  puVar3 = local_80;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *puVar7 = *local_80;
  puVar7[1] = local_80[1];
  puVar7[2] = local_80[2];
  puVar7[3] = local_80[3];
  uVar2 = *(ushort *)(*plVar14 + uVar16 * 0x50 + 0x40);
  plVar12 = (long *)(*(long *)(lVar17 + 0x2e8) + 0x18);
  plVar13 = (long *)*plVar12;
  plVar6 = plVar12;
  if (plVar13 != (long *)0x0) {
    do {
      if (*(ushort *)(plVar13 + 4) >= uVar2) {
        plVar6 = plVar13;
      }
      plVar13 = (long *)plVar13[*(ushort *)(plVar13 + 4) < uVar2];
    } while (plVar13 != (long *)0x0);
    if ((plVar6 != plVar12) && (*(ushort *)(plVar6 + 4) <= uVar2)) {
      uVar15 = plVar6[5];
    }
  }
  local_a0 = puVar7;
  FUN_710337d450((long)&local_a8,uVar15);
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  FUN_7103776910(&local_98,param_3,(long ****)"set_rep_chara",ppppppppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  lVar17 = *(long *)(param_1 + 8) + uVar16 * 0x50;
  plVar6 = *(long **)(param_1 + 0x1e8);
  local_68 = FUN_7103238a70(*(ulong *)(lVar17 + 0x48),(ulong)*(byte *)(lVar17 + 0x45),0);
  if ((local_68 & 0xffffffffff) != 0) {
    lVar17 = *plVar6;
    FUN_710323c4e0(lVar17,&local_68,(long *********)(long)*(int *)(lVar17 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar17 + 0x68),param_5,param_6,param_7,param_8);
  }
  lVar17 = *(long *)(param_1 + 8) + uVar16 * 0x50;
  ppppppppplVar9 = (long *********)(ulong)*(byte *)(lVar17 + 0x45);
  ppppbVar10 = (byte ****)0x0;
  plVar6 = FUN_710323f330(*(long **)(param_1 + 0x1e8),*(ulong *)(lVar17 + 0x48),
                          (ulong)ppppppppplVar9,0,param_5,param_6,param_7,param_8);
  uVar11 = local_90;
  if (*(long *)plVar6[1] == 0) {
    FUN_71037790a0(local_90,1,ppppppppplVar9,ppppbVar10,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_7103778b80(local_90,(long)plVar6,ppppppppplVar9,ppppbVar10,param_5,param_6,param_7,param_8);
  }
  pcVar8 = "friend_off";
  if (*(char *)(*plVar14 + uVar16 * 0x50 + 4) != '\0') {
    pcVar8 = "friend_on";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar8);
  local_98 = (long ********)&PTR_FUN_710523d9a8;
  local_90 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  uVar11 = local_70;
  local_78 = &PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  return;
}

