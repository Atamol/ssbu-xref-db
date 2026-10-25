// addr:      71019c16c0
// offset:    0x19c16c0
// name:      FUN_71019c16c0
// mangled:   
// signature: undefined FUN_71019c16c0(void)


void FUN_71019c16c0(long param_1,int param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  long ****pppplVar8;
  ulong uVar9;
  byte bVar10;
  long *plVar11;
  long ****pppplVar12;
  ulong uVar13;
  undefined **ppuStack_b8;
  long *plStack_b0;
  uint auStack_a8 [2];
  char acStack_a0 [64];
  long ***ppplStack_60;
  undefined4 uStack_54;
  
  if ((ulong)(*(long *)(param_1 + 0x130) - *(long *)(param_1 + 0x128) >> 3) <= (ulong)(long)param_2)
  {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  pppplVar12 = *(long *****)(*(long *)(param_1 + 0x128) + (long)param_2 * 8);
  uVar9 = *(ulong *)(param_1 + 0x150);
  uVar13 = (ulong)pppplVar12 & 0xffffffffff;
  if ((uVar9 & 0xff00000000000000) == 0x1300000000000000 && (uVar9 & 0xffffffffff) != 0) {
    if ((((ulong)pppplVar12 & 0xff00000000000000) == 0x1300000000000000 && uVar13 != 0) &&
        (((ulong)pppplVar12 ^ uVar9) & 0xffffffffff) == 0) goto LAB_71019c1730;
LAB_71019c175c:
    lVar4 = *(long *)(param_3 + 8);
    pcVar7 = "notselecteditem";
  }
  else {
    if (((ulong)pppplVar12 & 0xff00000000000000) == 0x1300000000000000 && uVar13 != 0)
    goto LAB_71019c175c;
LAB_71019c1730:
    lVar4 = *(long *)(param_3 + 8);
    pcVar7 = "selecteditem";
  }
  FUN_7103778300(0x3f800000,lVar4,(long)pcVar7);
  pppplVar8 = pppplVar12;
  FUN_7103284890(auStack_a8,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x248),(ulong)pppplVar12,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&ppuStack_b8,param_3,(long ****)"set_txt_val",pppplVar8,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&ppuStack_b8,acStack_a0,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  plVar1 = plStack_b0;
  ppuStack_b8 = &PTR_FUN_710523d9a8;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103776910(&ppuStack_b8,param_3,(long ****)"set_txt_val_disable",pppplVar8,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&ppuStack_b8,acStack_a0,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  plVar1 = plStack_b0;
  ppuStack_b8 = &PTR_FUN_710523d9a8;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103776910(&ppuStack_b8,param_3,(long ****)"selected",pppplVar8,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = plStack_b0;
  uVar9 = *(ulong *)(param_1 + 0x148);
  if (((uVar9 & 0xff00000000000000) == 0x1300000000000000) && ((uVar9 & 0xffffffffff) != 0)) {
    if (((((ulong)pppplVar12 & 0xff00000000000000) != 0x1300000000000000) || (uVar13 == 0)) ||
       ((((ulong)pppplVar12 ^ uVar9) & 0xffffffffff) != 0)) goto LAB_71019c1858;
LAB_71019c1870:
    lVar4 = *plStack_b0;
    if (lVar4 != 0) {
      bVar10 = *(byte *)(lVar4 + 0x58) | 1;
      goto LAB_71019c1884;
    }
  }
  else {
    if ((((ulong)pppplVar12 & 0xff00000000000000) != 0x1300000000000000) || (uVar13 == 0))
    goto LAB_71019c1870;
LAB_71019c1858:
    lVar4 = *plStack_b0;
    if (lVar4 != 0) {
      bVar10 = *(byte *)(lVar4 + 0x58) & 0xfe;
LAB_71019c1884:
      *(byte *)(lVar4 + 0x58) = bVar10;
    }
  }
  plVar5 = (long *)FUN_710392e290(0x10,8,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      uStack_54 = 0;
      ppplStack_60 = (long ***)&DAT_00000008;
      pppplVar8 = &ppplStack_60;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_54);
      if (((uVar9 & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,8,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         plVar5 != (long *)0x0)) goto LAB_71019c18e4;
    }
    plVar5 = (long *)0x0;
  }
LAB_71019c18e4:
  *plVar5 = 0;
  lVar4 = *(long *)(*(long *)(param_3 + 8) + 8);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x60) != 0) {
      lVar6 = FUN_7103796f20(*(long *)(lVar4 + 0x60),*(long *)(lVar4 + 0x18) + 0xb0);
    }
  }
  *plVar5 = lVar6;
  bVar2 = FUN_71032868d0(*(long *)(DAT_710532f730 + 8) + 0x240,(ulong)pppplVar12);
  if ((bVar2) && (*(char *)(param_1 + 0x169) == '\0')) {
    plVar11 = (long *)*plVar5;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x1f8))(plVar11,0);
      uVar9 = (**(code **)(*plVar11 + 0x200))(plVar11);
      if ((uVar9 & 1) == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)(*plVar11 + 0x210))(plVar11);
        uVar3 = uVar3 ^ 1;
      }
      (**(code **)(*plVar11 + 0x388))(plVar11,uVar3 & 1,0);
    }
  }
  else {
    plVar11 = (long *)*plVar5;
    if (plVar11 != (long *)0x0) {
      uVar3 = 1;
      (**(code **)(*plVar11 + 0x1f8))(plVar11,1);
      uVar9 = (**(code **)(*plVar11 + 0x200))(plVar11);
      if ((uVar9 & 1) != 0) {
        uVar3 = (**(code **)(*plVar11 + 0x210))(plVar11);
        uVar3 = uVar3 ^ 1;
      }
      (**(code **)(*plVar11 + 0x388))(plVar11,uVar3 & 1,0);
    }
  }
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  ppuStack_b8 = &PTR_FUN_710523d9a8;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  return;
}

