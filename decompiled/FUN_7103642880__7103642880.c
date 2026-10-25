// addr:      7103642880
// offset:    0x3642880
// name:      FUN_7103642880
// mangled:   
// signature: undefined __cdecl FUN_7103642880(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, ulong param_8)


void FUN_7103642880(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  int *piVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  void *__src;
  long ****pppplVar17;
  long ****local_98;
  ulong local_90;
  long *local_88;
  long local_80;
  byte local_78;
  undefined7 uStack_77;
  ulong local_70;
  void *local_68;
  ulong local_60;
  ulong local_58;
  long ****local_50;
  long *local_48;
  long ****local_38;
  
  lVar16 = *(long *)(param_1 + 0x28);
  piVar11 = (int *)(lVar16 + 0x70);
  piVar7 = (int *)(lVar16 + 0x90);
  if (((((*piVar11 == *piVar7) && (*(int *)(lVar16 + 0x74) == *(int *)(lVar16 + 0x94))) &&
       (*(int *)(lVar16 + 0x78) == *(int *)(lVar16 + 0x98))) &&
      ((*(int *)(lVar16 + 0x7c) == *(int *)(lVar16 + 0x9c) &&
       (*(int *)(lVar16 + 0x80) == *(int *)(lVar16 + 0xa0))))) &&
     ((*(int *)(lVar16 + 0x84) == *(int *)(lVar16 + 0xa4) &&
      (*(int *)(lVar16 + 0x88) == *(int *)(lVar16 + 0xa8))))) {
    bVar2 = *(int *)(lVar16 + 0x8c) != *(int *)(lVar16 + 0xac);
    *(bool *)(lVar16 + 0xb0) = bVar2;
    *(undefined8 *)(lVar16 + 0xa0) = *(undefined8 *)(lVar16 + 0x80);
    *(undefined8 *)(lVar16 + 0xa8) = *(undefined8 *)(lVar16 + 0x88);
    *(undefined8 *)piVar7 = *(undefined8 *)piVar11;
    *(undefined8 *)(lVar16 + 0x98) = *(undefined8 *)(lVar16 + 0x78);
    if (((!bVar2) && (iVar3 = *(int *)(lVar16 + 0x1360), iVar3 == *(int *)(lVar16 + 0x1364))) &&
       (*(int *)(lVar16 + 0x1368) == *(int *)(lVar16 + 0x136c))) goto joined_r0x00710364301c;
  }
  else {
    *(undefined1 *)(lVar16 + 0xb0) = 1;
    *(undefined8 *)(lVar16 + 0xa0) = *(undefined8 *)(lVar16 + 0x80);
    *(undefined8 *)(lVar16 + 0xa8) = *(undefined8 *)(lVar16 + 0x88);
    *(undefined8 *)piVar7 = *(undefined8 *)piVar11;
    *(undefined8 *)(lVar16 + 0x98) = *(undefined8 *)(lVar16 + 0x78);
  }
  FUN_71036423c0((char *)&local_78,lVar16);
  local_58 = 0;
  local_50 = (long ****)0x0;
  local_60 = 0;
  if ((local_78 & 1) == 0) {
    local_70 = (ulong)(local_78 >> 1);
    uVar5 = local_70;
    __src = (void *)((ulong)&local_78 | 1);
    if (0x16 < local_70) goto LAB_71036429e8;
LAB_71036429b8:
    local_60 = (ulong)(byte)((int)local_70 << 1);
    pppplVar17 = (long ****)((ulong)&local_60 | 1);
    uVar5 = local_70;
    if (local_70 != 0) goto LAB_7103642a68;
  }
  else {
    if (0xffffffffffffffef < local_70) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar5 = local_70;
    __src = local_68;
    if (local_70 < 0x17) goto LAB_71036429b8;
LAB_71036429e8:
    pppplVar17 = (long ****)(uVar5 + 0x10 & 0xfffffffffffffff0);
    iVar3 = FUN_710392e1f0(&local_38,0x10,pppplVar17,param_4,param_5,param_6,param_7,param_8);
    if (((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_98 = pppplVar17,
       uVar4 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_98), (uVar4 & 1) != 0)) {
      FUN_710392e1f0(&local_38,0x10,pppplVar17,param_4,param_5,param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)pppplVar17,0x10,local_38);
    local_60 = (ulong)pppplVar17 | 1;
    local_50 = local_38;
    pppplVar17 = local_38;
    local_58 = uVar5;
LAB_7103642a68:
    memcpy(pppplVar17,__src,uVar5);
    local_70 = uVar5;
  }
  *(undefined1 *)((long)pppplVar17 + local_70) = 0;
  if (((DAT_71053391d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053391d0), iVar3 != 0)) {
    DAT_71053391c0._5_3_ = 0;
    DAT_71053391b8._0_1_ = 0x16;
    DAT_71053391b8._1_7_ = 0x616e69665f6433;
    DAT_71053391c0._0_1_ = 0x6c;
    DAT_71053391c8 = (long *)0x0;
    DAT_71053391c0._1_4_ = 0x53565f;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053391d0);
  }
  plVar8 = DAT_71053391c8;
  local_98 = (long ****)0x0;
  local_90 = 0;
  local_88 = (long *)0x0;
  if (((byte)DAT_71053391b8 & 1) == 0) {
    local_88 = DAT_71053391c8;
    local_98 = (long ****)CONCAT71(DAT_71053391b8._1_7_,(byte)DAT_71053391b8);
    local_90 = CONCAT35(DAT_71053391c0._5_3_,
                        CONCAT41(DAT_71053391c0._1_4_,(undefined1)DAT_71053391c0));
  }
  else {
    uVar5 = CONCAT35(DAT_71053391c0._5_3_,CONCAT41(DAT_71053391c0._1_4_,(undefined1)DAT_71053391c0))
    ;
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar5 < 0x17) {
      local_98 = (long ****)
                 (ulong)(byte)((int)CONCAT41(DAT_71053391c0._1_4_,(undefined1)DAT_71053391c0) << 1);
      plVar6 = (long *)((ulong)&local_98 | 1);
      if (uVar5 != 0) goto LAB_7103642b74;
    }
    else {
      pppplVar17 = (long ****)(uVar5 + 0x10 & 0xfffffffffffffff0);
      iVar3 = FUN_710392e1f0(&local_48,0x10,pppplVar17,param_4,param_5,param_6,param_7,param_8);
      if (((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_38 = pppplVar17,
         uVar4 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_38), (uVar4 & 1) != 0))
      {
        FUN_710392e1f0(&local_48,0x10,pppplVar17,param_4,param_5,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar17,0x10,local_48);
      local_98 = (long ****)((ulong)pppplVar17 | 1);
      local_88 = local_48;
      plVar6 = local_48;
      local_90 = uVar5;
LAB_7103642b74:
      memcpy(plVar6,plVar8,uVar5);
    }
    *(undefined1 *)((long)plVar6 + uVar5) = 0;
  }
  iVar3 = FUN_710392e1f0(&local_48,0x10,(long ****)&DAT_00000160,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_38 = (long ****)&DAT_00000160;
    uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_38);
    if ((uVar5 & 1) != 0) {
      FUN_710392e1f0(&local_48,0x10,(long ****)&DAT_00000160,param_4,param_5,param_6,param_7,param_8
                    );
    }
  }
  plVar8 = local_48;
  nu::VirtualAllocHook(0x160,0x10,local_48);
  FUN_71035b68c0(local_48,extraout_x1,plVar8,param_4,param_5,param_6,param_7,param_8);
  FUN_71035b6c50((long)local_48,(ulong *)&local_98,&local_60,param_4,param_5,param_6,param_7,param_8
                );
  if (local_48 == (long *)0x0) {
    plVar8 = (long *)0x0;
    lVar12 = 0;
  }
  else {
    plVar8 = (long *)local_48[1];
    lVar12 = *plVar8;
  }
  plVar6 = *(long **)(lVar16 + 0x11e8);
  plVar14 = *(long **)(lVar16 + 0x11f0);
  *(long **)(lVar16 + 0x11e8) = local_48;
  lVar15 = *(long *)(lVar16 + 0x11f8);
  *(long **)(lVar16 + 0x11f0) = plVar8;
  *(long *)(lVar16 + 0x11f8) = lVar12;
  if (((plVar14 != (long *)0x0) && (plVar6 != (long *)0x0)) && (*plVar14 == lVar15)) {
    (**(code **)(*plVar6 + 8))();
    plVar8 = *(long **)(lVar16 + 0x11f0);
  }
  plVar6 = local_88;
  if (((plVar8 == (long *)0x0) || (*plVar8 != *(long *)(lVar16 + 0x11f8))) ||
     ((lVar12 = *(long *)(lVar16 + 0x11e8), lVar12 == 0 || (*(long *)(lVar12 + 8) == 0)))) {
    lVar12 = 0;
    *(undefined8 *)(lVar16 + 0x1210) = 0;
    *(undefined8 *)(lVar16 + 0x1208) = 0;
  }
  else {
    *(long *)(lVar16 + 0x1208) = lVar12;
    plVar8 = *(long **)(lVar12 + 8);
    *(long **)(lVar16 + 0x1210) = plVar8;
    lVar12 = *plVar8;
  }
  *(long *)(lVar16 + 0x1218) = lVar12;
  if ((*(long **)(lVar16 + 0x1210) == (long *)0x0) || (**(long **)(lVar16 + 0x1210) != lVar12)) {
    *(undefined8 *)(lVar16 + 0x108) = 0;
LAB_7103642cf0:
    uVar10 = 0;
    *(undefined8 *)(lVar16 + 0x110) = 0;
  }
  else {
    lVar12 = *(long *)(lVar16 + 0x1208);
    *(long *)(lVar16 + 0x108) = lVar12;
    if (lVar12 == 0) goto LAB_7103642cf0;
    puVar9 = *(undefined8 **)(lVar12 + 8);
    *(undefined8 **)(lVar16 + 0x110) = puVar9;
    uVar10 = *puVar9;
  }
  *(undefined8 *)(lVar16 + 0x118) = uVar10;
  pppplVar17 = local_50;
  if (((ulong)local_98 & 1) != 0) {
    nu::VirtualFreeHook(local_88);
    FUN_710392eb40((ulong)plVar6);
    pppplVar17 = local_50;
  }
  local_50 = pppplVar17;
  if ((local_60 & 1) != 0) {
    nu::VirtualFreeHook(pppplVar17);
    FUN_710392eb40((ulong)pppplVar17);
  }
  if (((local_78 & 1) != 0) && (local_68 != (void *)0x0)) {
    FUN_710392eb40((ulong)local_68);
  }
  iVar3 = FUN_710392e1f0(&local_78,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_98 = (long ****)&SUB_00000020;
    uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_98);
    if ((uVar5 & 1) != 0) {
      FUN_710392e1f0(&local_78,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,param_8
                    );
    }
  }
  nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT71(uStack_77,local_78));
  puVar9 = (undefined8 *)CONCAT71(uStack_77,local_78);
  FUN_71035b6df0(puVar9,2,(long ****)0x2,param_4,param_5,param_6,param_7,param_8);
  ((undefined8 *)puVar9[3])[1] = *(undefined8 *)puVar9[3];
  param_2 = extraout_x1_00;
  if (((*(uint *)(lVar16 + 0x1360) != 0xffffffff) &&
      (FUN_710363dd00(&local_98,DAT_7105338f68,*(uint *)(lVar16 + 0x1360)), param_2 = extraout_x1_01
      , local_88 != (long *)0x0)) && (*local_88 == local_80)) {
    plVar8 = (long *)puVar9[2];
    lVar12 = *plVar8;
    if (plVar8[2] != lVar12) {
      if (plVar8[1] == lVar12) goto LAB_71036430dc;
      *(ulong *)(lVar12 + 8) = local_90;
      if (local_90 == 0) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        uVar10 = 0;
      }
      else {
        puVar13 = *(undefined8 **)(local_90 + 8);
        *(undefined8 **)(lVar12 + 0x10) = puVar13;
        uVar10 = *puVar13;
      }
      *(undefined8 *)(lVar12 + 0x18) = uVar10;
    }
    param_4 = (byte ****)0x5;
    FUN_71035b71d0((undefined8 *)puVar9[3],0,(long ****)&DAT_00000004,(byte ****)0x5,param_5,param_6
                   ,param_7,param_8);
    param_2 = extraout_x1_02;
  }
  uVar1 = *(uint *)(lVar16 + 0x1368);
  param_3 = (long ****)(ulong)uVar1;
  if (((uVar1 != 0xffffffff) &&
      (FUN_710363dd00(&local_98,DAT_7105338f68,uVar1), param_2 = extraout_x1_03,
      local_88 != (long *)0x0)) && (*local_88 == local_80)) {
    plVar8 = (long *)puVar9[2];
    lVar12 = *plVar8;
    if (1 < (ulong)(plVar8[2] - lVar12 >> 5)) {
      if ((ulong)(plVar8[1] - lVar12 >> 5) < 2) {
LAB_71036430dc:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(ulong *)(lVar12 + 0x28) = local_90;
      if (local_90 == 0) {
        *(undefined8 *)(lVar12 + 0x30) = 0;
        uVar10 = 0;
      }
      else {
        puVar13 = *(undefined8 **)(local_90 + 8);
        *(undefined8 **)(lVar12 + 0x30) = puVar13;
        uVar10 = *puVar13;
      }
      *(undefined8 *)(lVar12 + 0x38) = uVar10;
    }
    param_3 = (long ****)&DAT_00000004;
    param_4 = (byte ****)0x6;
    FUN_71035b71d0((undefined8 *)puVar9[3],1,(long ****)&DAT_00000004,(byte ****)0x6,param_5,param_6
                   ,param_7,param_8);
    param_2 = extraout_x1_04;
  }
  if (puVar9 == (undefined8 *)0x0) {
    plVar8 = (long *)0x0;
    lVar12 = 0;
  }
  else {
    plVar8 = (long *)puVar9[1];
    lVar12 = *plVar8;
  }
  plVar6 = *(long **)(lVar16 + 0x1288);
  plVar14 = *(long **)(lVar16 + 0x1290);
  lVar15 = *(long *)(lVar16 + 0x1298);
  *(undefined8 **)(lVar16 + 0x1288) = puVar9;
  *(long **)(lVar16 + 0x1290) = plVar8;
  *(long *)(lVar16 + 0x1298) = lVar12;
  if (((plVar14 != (long *)0x0) && (plVar6 != (long *)0x0)) && (*plVar14 == lVar15)) {
    (**(code **)(*plVar6 + 8))();
    plVar8 = *(long **)(lVar16 + 0x1290);
    param_2 = extraout_x1_05;
  }
  if ((((plVar8 == (long *)0x0) || (*plVar8 != *(long *)(lVar16 + 0x1298))) ||
      (lVar12 = *(long *)(lVar16 + 0x1288), lVar12 == 0)) || (*(long *)(lVar12 + 8) == 0)) {
    lVar12 = 0;
    *(undefined8 *)(lVar16 + 0x12b0) = 0;
    *(undefined8 *)(lVar16 + 0x12a8) = 0;
  }
  else {
    *(long *)(lVar16 + 0x12a8) = lVar12;
    plVar8 = *(long **)(lVar12 + 8);
    *(long **)(lVar16 + 0x12b0) = plVar8;
    lVar12 = *plVar8;
  }
  *(long *)(lVar16 + 0x12b8) = lVar12;
  if ((*(long **)(lVar16 + 0x12b0) == (long *)0x0) || (**(long **)(lVar16 + 0x12b0) != lVar12)) {
    *(undefined8 *)(lVar16 + 0x128) = 0;
LAB_7103643008:
    uVar10 = 0;
    *(undefined8 *)(lVar16 + 0x130) = 0;
  }
  else {
    lVar12 = *(long *)(lVar16 + 0x12a8);
    *(long *)(lVar16 + 0x128) = lVar12;
    if (lVar12 == 0) goto LAB_7103643008;
    puVar9 = *(undefined8 **)(lVar12 + 8);
    *(undefined8 **)(lVar16 + 0x130) = puVar9;
    uVar10 = *puVar9;
  }
  *(undefined8 *)(lVar16 + 0x138) = uVar10;
  iVar3 = *(int *)(lVar16 + 0x1360);
joined_r0x00710364301c:
  if ((iVar3 == -1) && (*(int *)(lVar16 + 0x1368) == -1)) {
    *(undefined8 *)(lVar16 + 0x130) = 0;
    *(undefined8 *)(lVar16 + 0x138) = 0;
    *(undefined8 *)(lVar16 + 0x128) = 0;
  }
  FUN_710364f4b0(lVar16 + 0xc0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(lVar16 + 0x1364) = *(undefined4 *)(lVar16 + 0x1360);
  *(undefined4 *)(lVar16 + 0x136c) = *(undefined4 *)(lVar16 + 0x1368);
  return;
}

