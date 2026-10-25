// addr:      7101dd9c20
// offset:    0x1dd9c20
// name:      FUN_7101dd9c20
// mangled:   
// signature: ulong __cdecl FUN_7101dd9c20(long * * param_1)


ulong FUN_7101dd9c20(long **param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long ***ppplVar4;
  undefined **ppuVar5;
  long *********ppppppppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  byte ****ppppbVar9;
  long ****in_x4;
  ulong in_x5;
  long ***in_x6;
  long ***in_x7;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_40;
  undefined4 local_34;
  long ***local_28;
  
  pppplVar8 = (long ****)&local_40;
  FUN_71032cbf30(param_1 + 10,*param_1[9],(ulong *)&DAT_7104545948,(byte ****)0x1,in_x4,in_x5,in_x6,
                 in_x7);
  lVar10 = *param_1[10];
  if (param_1 + 0xc != (long **)(lVar10 + 8)) {
    *param_1[0xd] = **(long **)(lVar10 + 0x10);
    param_1[0xd][1] = *(long *)(*(long *)(lVar10 + 0x10) + 8);
    plVar12 = *(long **)(lVar10 + 0x10);
    plVar11 = param_1[0xd];
    if (plVar11 != plVar12) {
      *(undefined8 *)plVar11[3] = *(undefined8 *)plVar12[3];
      *(undefined8 *)(plVar11[3] + 8) = *(undefined8 *)(plVar12[3] + 8);
      *(undefined8 *)(plVar11[3] + 0x10) = *(undefined8 *)(plVar12[3] + 0x10);
      *(undefined8 *)(plVar11[3] + 0x18) = *(undefined8 *)(plVar12[3] + 0x18);
    }
  }
  ppuVar5 = (undefined **)&DAT_7104545950;
  ppppbVar9 = (byte ****)0x1;
  uVar3 = FUN_71032cbf30(param_1 + 0xb,*param_1[9],(ulong *)&DAT_7104545950,(byte ****)0x1,in_x4,
                         in_x5,in_x6,in_x7);
  lVar10 = *param_1[0xb];
  if (param_1 + 0xe != (long **)(lVar10 + 8)) {
    *param_1[0xf] = **(long **)(lVar10 + 0x10);
    param_1[0xf][1] = *(long *)(*(long *)(lVar10 + 0x10) + 8);
    plVar12 = *(long **)(lVar10 + 0x10);
    plVar11 = param_1[0xf];
    if (plVar11 != plVar12) {
      *(undefined8 *)plVar11[3] = *(undefined8 *)plVar12[3];
      *(undefined8 *)(plVar11[3] + 8) = *(undefined8 *)(plVar12[3] + 8);
      *(undefined8 *)(plVar11[3] + 0x10) = *(undefined8 *)(plVar12[3] + 0x10);
      *(undefined8 *)(plVar11[3] + 0x18) = *(undefined8 *)(plVar12[3] + 0x18);
    }
  }
  lVar10 = DAT_710532f8b8;
  lVar15 = *param_1[9];
  if (((DAT_710532f4d8 & 1) == 0) && (uVar3 = __cxa_guard_acquire(&DAT_710532f4d8), (int)uVar3 != 0)
     ) {
    DAT_710532f4a4 = 0xffffff;
    ppuVar5 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    uVar3 = __cxa_guard_release(&DAT_710532f4d8);
    lVar14 = *(long *)(lVar15 + 0x28);
    if (lVar14 == 0) goto LAB_7101dd9dec;
LAB_7101dd9da8:
    lVar13 = lVar15 + 0x28;
    do {
      bVar1 = (*(ulong *)(lVar14 + 0x20) & 0xfffffffffe) < 0x103608c8e6;
      if (!bVar1) {
        lVar13 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)bVar1 * 8);
    } while (lVar14 != 0);
    if ((lVar13 == lVar15 + 0x28) || (0x103608c8e6 < (*(ulong *)(lVar13 + 0x20) & 0xffffffffff)))
    goto LAB_7101dd9dec;
    ppppppppplVar6 = (long *********)(lVar13 + 0x28);
  }
  else {
    lVar14 = *(long *)(lVar15 + 0x28);
    if (lVar14 != 0) goto LAB_7101dd9da8;
LAB_7101dd9dec:
    ppppppppplVar6 = (long *********)&DAT_710532f4a4;
  }
  if (*(int *)ppppppppplVar6 != 0xffffff) {
    ppuVar5 = (undefined **)&DAT_00000009;
    uVar2 = FUN_710330a8f0(*(long **)(lVar10 + 8),(ulong *)&DAT_7104545940,(long ****)&DAT_00000009,
                           ppppbVar9,in_x4,in_x5,in_x6,in_x7);
    uVar3 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar2 = FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,uVar2,ppppppppplVar6,
                             ppppbVar9,in_x4,in_x5,in_x6,in_x7);
      uVar3 = (ulong)uVar2;
      ppuVar5 = (undefined **)ppppppppplVar6;
    }
  }
  plVar11 = param_1[8];
  if (plVar11 == (long *)0x0) {
    return uVar3;
  }
  ppplVar4 = (long ***)
             FUN_710392e290(0x10,0x38,(long ****)ppuVar5,ppppbVar9,in_x4,in_x5,in_x6,in_x7);
  if (ppplVar4 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_40 = (long ***)((ulong)local_40._4_4_ << 0x20);
      local_28 = (long ***)&DAT_00000038;
      pppplVar7 = &local_28;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_40);
      if (((uVar3 & 1) != 0) &&
         (ppplVar4 = (long ***)FUN_710392e290(0x10,0x38,pppplVar7,ppppbVar9,in_x4,in_x5,in_x6,in_x7)
         , ppplVar4 != (long ***)0x0)) goto LAB_7101dd9e90;
    }
    ppplVar4 = (long ***)0x0;
  }
LAB_7101dd9e90:
  ppplVar4[5] = (long **)0x0;
  ppplVar4[6] = (long **)0x0;
  *ppplVar4 = (long **)&PTR_FUN_71050b0b40;
  ppplVar4[2] = param_1;
  ppplVar4[3] = (long **)FUN_7101dd9540;
  ppplVar4[4] = (long **)0x0;
  *(undefined4 *)(ppplVar4 + 1) = 0;
  local_40 = ppplVar4;
  FUN_7103376af0((long)plVar11,(byte *)"play_rumble_pad",(long ****)&local_40,ppppbVar9,in_x4,in_x5,
                 in_x6,in_x7);
  ppplVar4 = local_40;
  local_40 = (long ***)0x0;
  if (ppplVar4 != (long ***)0x0) {
    (*(code *)(*ppplVar4)[1])();
  }
  plVar11 = param_1[8];
  local_28 = (long ***)FUN_710392e290(0x10,0x38,pppplVar8,ppppbVar9,in_x4,in_x5,in_x6,in_x7);
  if (local_28 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_28 = (long ***)&DAT_00000038;
      pppplVar8 = &local_28;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (local_28 = (long ***)FUN_710392e290(0x10,0x38,pppplVar8,ppppbVar9,in_x4,in_x5,in_x6,in_x7)
         , local_28 != (long ***)0x0)) goto LAB_7101dd9f3c;
    }
    local_28 = (long ***)0x0;
  }
LAB_7101dd9f3c:
  *local_28 = (long **)&PTR_FUN_71050b0b40;
  local_28[5] = (long **)0x0;
  local_28[6] = (long **)0x0;
  local_28[2] = param_1;
  local_28[3] = (long **)FUN_7101dd9590;
  local_28[4] = (long **)0x0;
  *(undefined4 *)(local_28 + 1) = 0;
  FUN_7103376af0((long)plVar11,(byte *)"play_se_start",&local_28,ppppbVar9,in_x4,in_x5,in_x6,in_x7);
  ppplVar4 = local_28;
  local_28 = (long ***)0x0;
  uVar3 = 0;
  if (ppplVar4 != (long ***)0x0) {
    uVar3 = (*(code *)(*ppplVar4)[1])();
  }
  return uVar3;
}

