// addr:      7101c18c70
// offset:    0x1c18c70
// name:      FUN_7101c18c70
// mangled:   
// signature: undefined __cdecl FUN_7101c18c70(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c18c70(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long ***ppplVar8;
  long *plVar9;
  long *****ppppplVar10;
  long *********ppppppppplVar11;
  long ****pppplVar12;
  char *pcVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  long **pplVar21;
  long ****local_d0;
  long ****local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long ***local_88;
  ulong local_80;
  undefined8 local_78;
  ulong local_70;
  undefined4 local_64;
  
  *param_1 = &PTR_FUN_71050ad0a0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x90,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_78 = (undefined **)((ulong)local_78._4_4_ << 0x20);
      local_d0 = (long ****)&DAT_00000090;
      ppppplVar10 = &local_d0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
      if (((uVar5 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x90,(long ****)ppppplVar10,param_4,param_5,param_6,param_7,
                                  param_8), puVar4 != (undefined8 *)0x0)) goto LAB_7101c18d1c;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101c18d1c:
  *(undefined4 *)(puVar4 + 1) = 0x1000;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[2] = 0;
  ppppbVar14 = (byte ****)0x2d1630e218;
  ppppplVar10 = &local_d0;
  puVar4[6] = 0;
  puVar4[5] = puVar4 + 6;
  *puVar4 = &PTR_FUN_71050ad0d8;
  *(undefined1 *)(puVar4 + 0xd) = 2;
  *(undefined1 *)(puVar4 + 0xf) = 2;
  puVar4[7] = 0;
  puVar4[8] = 0;
  pppplVar15 = (long ****)0x1;
  *(undefined4 *)((long)puVar4 + 0x74) = 0xffffffff;
  *(undefined8 *)((long)puVar4 + 0x6c) = 0xffffffffffffffff;
  *(undefined4 *)((long)puVar4 + 0x84) = 0xffffffff;
  *(undefined8 *)((long)puVar4 + 0x7c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar4 + 0x11) = 1;
  puVar4[9] = param_2;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  param_1[0x10] = puVar4;
  local_78 = (undefined **)0x2d9c008b43;
  local_d0 = (long ****)&local_78;
  local_c8 = (long ****)0x1;
  FUN_71032cb040((long)puVar4,param_2,(long ****)ppppplVar10,(byte ****)0x2d1630e218,(long ****)0x1,
                 param_6,param_7,param_8);
  pplVar21 = (long **)param_1[0x10];
  FUN_7101c18390((ulong *)&local_d0,(char *)param_3,(long ****)ppppplVar10,ppppbVar14,pppplVar15,
                 param_6,param_7,param_8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar2 = 0x50000a;
  if (DAT_71053050f0 != 0x4090000) {
    uVar2 = 0x100a;
  }
  *(undefined4 *)(pplVar21 + 1) = uVar2;
  if ((long *****)(pplVar21 + 10) != &local_d0) {
    FUN_71013e71a0(pplVar21 + 10,local_d0,local_c8,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  }
  iVar3 = (int)((ulong)((long)pplVar21[0xb] - (long)pplVar21[10]) >> 3);
  if (0x53 < iVar3) {
    iVar3 = 0x54;
  }
  if (pplVar21[3] == pplVar21[2]) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar5 = 0;
  lVar16 = **(long **)*pplVar21[2] + 8;
  do {
    ppppppppplVar11 = (long *********)(uVar5 & 0xffffffff);
    FUN_7103776640(&local_78,lVar16,(byte ****)"set_part_item_%02d",ppppppppplVar11,ppppbVar14,
                   pppplVar15,param_6,param_7,param_8);
    uVar20 = local_70;
    if ((long)uVar5 < (long)iVar3) {
      if (uVar5 != 0) {
        FUN_7103776910(&local_88,(long)&local_78,(long ****)"set_rep_00",ppppppppplVar11,ppppbVar14,
                       pppplVar15,param_6,param_7,param_8);
        if ((ulong)((long)pplVar21[0xb] - (long)pplVar21[10] >> 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        ppppppppplVar11 = (long *********)&DAT_00000015;
        plVar6 = FUN_710323f8d0(pplVar21[9],(long ****)pplVar21[10][uVar5],(long ****)&DAT_00000015,
                                ppppbVar14,pppplVar15,param_6,param_7,param_8);
        uVar7 = local_80;
        FUN_7103778b80(local_80,(long)plVar6,ppppppppplVar11,ppppbVar14,pppplVar15,param_6,param_7,
                       param_8);
        local_88 = (long ***)&PTR_FUN_710523d9a8;
        local_80 = 0;
        uVar20 = local_70;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
          uVar20 = local_70;
        }
      }
    }
    else if ((*(long *)(local_70 + 8) != 0) &&
            (lVar17 = *(long *)(*(long *)(local_70 + 8) + 0x18), lVar17 != 0)) {
      *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
    }
    local_78 = &PTR_FUN_710523d988;
    local_70 = 0;
    if (uVar20 != 0) {
      uVar7 = *(ulong *)(uVar20 + 0x18);
      *(undefined ***)(uVar20 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar20 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar20);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x54);
  FUN_7103776ad0(&local_78,lVar16,(long ****)"set_parts_freq_crs_area",ppppppppplVar11,ppppbVar14,
                 pppplVar15,param_6,param_7,param_8);
  plVar6 = pplVar21[8];
  ppplVar8 = (long ***)
             FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar11,ppppbVar14,pppplVar15,param_6,
                            param_7,param_8);
  if (ppplVar8 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ***)((ulong)local_90._4_4_ << 0x20);
      local_88 = (long ***)&DAT_00000028;
      pppplVar12 = &local_88;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar5 & 1) != 0) &&
         (ppplVar8 = (long ***)
                     FUN_710392e290(0x10,0x28,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,
                                    param_8), ppplVar8 != (long ***)0x0)) goto LAB_7101c18fb8;
    }
    ppplVar8 = (long ***)0x0;
  }
LAB_7101c18fb8:
  *ppplVar8 = (long **)&PTR_FUN_71050acfb0;
  ppplVar8[4] = (long **)0x0;
  ppplVar8[2] = pplVar21;
  ppplVar8[3] = (long **)FUN_7101c17270;
  *(undefined4 *)(ppplVar8 + 1) = 0;
  pppplVar12 = (long ****)&local_90;
  local_90 = ppplVar8;
  FUN_7103376af0((long)plVar6,(byte *)"update_info_item_selector",pppplVar12,ppppbVar14,pppplVar15,
                 param_6,param_7,param_8);
  ppplVar8 = local_90;
  local_90 = (long ***)0x0;
  if (ppplVar8 != (long ***)0x0) {
    (*(code *)(*ppplVar8)[1])();
  }
  plVar6 = pplVar21[8];
  ppplVar8 = (long ***)
             FUN_710392e290(0x10,0x28,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  if (ppplVar8 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long ***)((ulong)local_98._4_4_ << 0x20);
      local_88 = (long ***)&DAT_00000028;
      pppplVar12 = &local_88;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar5 & 1) != 0) &&
         (ppplVar8 = (long ***)
                     FUN_710392e290(0x10,0x28,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,
                                    param_8), ppplVar8 != (long ***)0x0)) goto LAB_7101c19060;
    }
    ppplVar8 = (long ***)0x0;
  }
LAB_7101c19060:
  *ppplVar8 = (long **)&PTR_FUN_71050acfd8;
  ppplVar8[4] = (long **)0x0;
  ppplVar8[2] = pplVar21;
  ppplVar8[3] = (long **)FUN_7101c176e0;
  *(undefined4 *)(ppplVar8 + 1) = 0;
  pppplVar12 = (long ****)&local_98;
  local_98 = ppplVar8;
  FUN_7103376af0((long)plVar6,(byte *)"update_info_appear_selector",pppplVar12,ppppbVar14,pppplVar15
                 ,param_6,param_7,param_8);
  ppplVar8 = local_98;
  local_98 = (long ***)0x0;
  if (ppplVar8 != (long ***)0x0) {
    (*(code *)(*ppplVar8)[1])();
  }
  plVar6 = pplVar21[8];
  ppplVar8 = (long ***)
             FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  if (ppplVar8 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0._4_4_ << 0x20);
      local_88 = (long ***)&DAT_00000038;
      pppplVar12 = &local_88;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar5 & 1) != 0) &&
         (ppplVar8 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,
                                    param_8), ppplVar8 != (long ***)0x0)) goto LAB_7101c19108;
    }
    ppplVar8 = (long ***)0x0;
  }
LAB_7101c19108:
  ppplVar8[2] = pplVar21;
  *ppplVar8 = (long **)&PTR_FUN_71050ad000;
  ppplVar8[3] = (long **)FUN_7101c17890;
  ppplVar8[4] = (long **)0x0;
  ppplVar8[5] = (long **)0x0;
  ppplVar8[6] = (long **)0x0;
  pppplVar12 = (long ****)&local_a0;
  *(undefined4 *)(ppplVar8 + 1) = 1;
  local_a0 = ppplVar8;
  FUN_7103376af0((long)plVar6,(byte *)"get_global_parameter_appear",pppplVar12,ppppbVar14,pppplVar15
                 ,param_6,param_7,param_8);
  ppplVar8 = local_a0;
  local_a0 = (long ***)0x0;
  if (ppplVar8 != (long ***)0x0) {
    (*(code *)(*ppplVar8)[1])();
  }
  plVar6 = pplVar21[8];
  ppplVar8 = (long ***)
             FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  if (ppplVar8 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long ***)((ulong)local_a8._4_4_ << 0x20);
      local_88 = (long ***)&DAT_00000038;
      pppplVar12 = &local_88;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      if (((uVar5 & 1) != 0) &&
         (ppplVar8 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,
                                    param_8), ppplVar8 != (long ***)0x0)) goto LAB_7101c191b8;
    }
    ppplVar8 = (long ***)0x0;
  }
LAB_7101c191b8:
  ppplVar8[2] = pplVar21;
  *ppplVar8 = (long **)&PTR_FUN_71050ad028;
  ppplVar8[3] = (long **)FUN_7101c178a0;
  ppplVar8[4] = (long **)0x0;
  ppplVar8[5] = (long **)0x0;
  ppplVar8[6] = (long **)0x0;
  pppplVar12 = (long ****)&local_a8;
  *(undefined4 *)(ppplVar8 + 1) = 1;
  local_a8 = ppplVar8;
  FUN_7103376af0((long)plVar6,(byte *)"get_global_parameter_on_off",pppplVar12,ppppbVar14,pppplVar15
                 ,param_6,param_7,param_8);
  ppplVar8 = local_a8;
  local_a8 = (long ***)0x0;
  if (ppplVar8 != (long ***)0x0) {
    (*(code *)(*ppplVar8)[1])();
  }
  plVar6 = pplVar21[8];
  ppplVar8 = (long ***)
             FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  if (ppplVar8 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0._4_4_ << 0x20);
      local_88 = (long ***)&DAT_00000038;
      pppplVar12 = &local_88;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar5 & 1) != 0) &&
         (ppplVar8 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,
                                    param_8), ppplVar8 != (long ***)0x0)) goto LAB_7101c19268;
    }
    ppplVar8 = (long ***)0x0;
  }
LAB_7101c19268:
  ppplVar8[5] = (long **)0x0;
  ppplVar8[6] = (long **)0x0;
  *ppplVar8 = (long **)&PTR_FUN_71050ad050;
  ppplVar8[2] = pplVar21;
  ppplVar8[3] = (long **)FUN_7101c17940;
  ppplVar8[4] = (long **)0x0;
  pppplVar12 = (long ****)&local_b0;
  *(undefined4 *)(ppplVar8 + 1) = 0;
  local_b0 = ppplVar8;
  FUN_7103376af0((long)plVar6,(byte *)"set_edit_parameter",pppplVar12,ppppbVar14,pppplVar15,param_6,
                 param_7,param_8);
  ppplVar8 = local_b0;
  local_b0 = (long ***)0x0;
  if (ppplVar8 != (long ***)0x0) {
    (*(code *)(*ppplVar8)[1])();
  }
  plVar6 = pplVar21[8];
  ppplVar8 = (long ***)
             FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  if (ppplVar8 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (long ***)((ulong)local_b8._4_4_ << 0x20);
      local_88 = (long ***)&DAT_00000038;
      pppplVar12 = &local_88;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar5 & 1) != 0) &&
         (ppplVar8 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,
                                    param_8), ppplVar8 != (long ***)0x0)) goto LAB_7101c19314;
    }
    ppplVar8 = (long ***)0x0;
  }
LAB_7101c19314:
  *ppplVar8 = (long **)&PTR_FUN_71050ad050;
  ppplVar8[5] = (long **)0x0;
  ppplVar8[6] = (long **)0x0;
  ppplVar8[2] = pplVar21;
  pppplVar12 = (long ****)&local_b8;
  ppplVar8[3] = (long **)FUN_7101c17c80;
  ppplVar8[4] = (long **)0x0;
  *(undefined4 *)(ppplVar8 + 1) = 0;
  local_b8 = ppplVar8;
  FUN_7103376af0((long)plVar6,(byte *)"out_com_frame",pppplVar12,ppppbVar14,pppplVar15,param_6,
                 param_7,param_8);
  ppplVar8 = local_b8;
  local_b8 = (long ***)0x0;
  if (ppplVar8 != (long ***)0x0) {
    (*(code *)(*ppplVar8)[1])();
  }
  plVar6 = pplVar21[8];
  local_88 = (long ***)
             FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  if (local_88 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_88 = (long ***)&DAT_00000038;
      pppplVar12 = &local_88;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (local_88 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,
                                    param_8), local_88 != (long ***)0x0)) goto LAB_7101c193b8;
    }
    local_88 = (long ***)0x0;
  }
LAB_7101c193b8:
  local_88[2] = pplVar21;
  *local_88 = (long **)&PTR_FUN_71050ad078;
  local_88[3] = (long **)FUN_7101c17cc0;
  local_88[4] = (long **)0x0;
  local_88[5] = (long **)0x0;
  local_88[6] = (long **)0x0;
  *(undefined4 *)(local_88 + 1) = 1;
  FUN_7103376af0((long)plVar6,(byte *)"is_can_edit",&local_88,ppppbVar14,pppplVar15,param_6,param_7,
                 param_8);
  ppplVar8 = local_88;
  local_88 = (long ***)0x0;
  if (ppplVar8 != (long ***)0x0) {
    (*(code *)(*ppplVar8)[1])();
  }
  plVar6 = (long *)0x0;
  if ((long *)*pplVar21[8] != (long *)0x0) {
    FUN_7103375650((long *)*pplVar21[8],"ITEM_PANEL_MAX",&DAT_71042b2a84);
    plVar6 = (long *)0x0;
    if ((long *)*pplVar21[8] != (long *)0x0) {
      FUN_7103375650((long *)*pplVar21[8],"ITEM_PANEL_LIST_NUM",&DAT_71042b2a84);
      plVar6 = (long *)0x0;
      if ((long *)*pplVar21[8] != (long *)0x0) {
        FUN_7103375650((long *)*pplVar21[8],"ITEM_PANEL_ALL_ON_OFF",&DAT_71042b2a84);
        plVar6 = (long *)*pplVar21[8];
      }
    }
  }
  pcVar13 = &DAT_71042b2a84;
  ppppbVar14 = (byte ****)&DAT_00000004;
  FUN_7103375650(plVar6,"ITEM_APPEAR_NUM",&DAT_71042b2a84);
  plVar18 = pplVar21[8];
  plVar6 = (long *)*plVar18;
  lVar19 = *plVar6;
  *(undefined4 *)(plVar6 + 2) = 0;
  plVar6 = *(long **)(lVar19 + 0x10);
  *plVar6 = lVar19;
  *(undefined4 *)(plVar6 + 1) = 0x48;
  lVar16 = *(long *)(lVar19 + 0x10);
  *(long *)(lVar19 + 0x10) = lVar16 + 0x10;
  lVar17 = *(long *)(*(long *)(lVar19 + 0x18) + 200);
  *(long *)(lVar19 + 0x10) = lVar16;
  if (lVar17 == lVar19) {
    lVar16 = *(long *)(*(long *)(lVar19 + 0x18) + 0x40);
    if (*(uint *)(lVar16 + 0xc) < 2) {
      plVar6 = (long *)(*(long *)(lVar16 + 0x18) +
                       ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar16 + 0xb) & 0x3f)) & 2)
                       * 0x20);
      do {
        if (((int)plVar6[3] == 0x13) && (plVar9 = plVar6, plVar6[2] == 2)) break;
        piVar1 = (int *)((long)plVar6 + 0x1c);
        plVar6 = plVar6 + (long)*piVar1 * 4;
        plVar9 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar9 = (long *)(*(long *)(lVar16 + 0x10) + 0x10);
    }
    pcVar13 = "create_data";
    FUN_71038f4d40(lVar19,plVar9,"create_data");
  }
  else {
    FUN_71038f4b20(lVar19,"create_data");
    FUN_71038f4fc0(lVar19,-2);
  }
  puVar4 = (undefined8 *)(*(long *)(lVar19 + 0x10) + -0x10);
  if ((puVar4 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar19 + 0x10) + -8) & 0xf) != 6)) {
    *(undefined8 **)(lVar19 + 0x10) = puVar4;
  }
  else {
    FUN_7103377130(plVar18,0,(long ****)pcVar13,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  }
  uVar5 = local_70;
  local_78 = &PTR_FUN_710523d9c8;
  local_70 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  if (local_d0 != (long ****)0x0) {
    local_c8 = local_d0;
    FUN_710392eb40((ulong)local_d0);
  }
  FUN_710323eba0((undefined8 *)(*param_2 + 8),(ulong *)&DAT_71045450f8,(long *********)pcVar13,
                 ppppbVar14,pppplVar15,param_6,param_7,param_8);
  return;
}

