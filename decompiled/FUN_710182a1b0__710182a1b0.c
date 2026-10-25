// addr:      710182a1b0
// offset:    0x182a1b0
// name:      FUN_710182a1b0
// mangled:   
// signature: undefined __cdecl FUN_710182a1b0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710182a1b0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  long ***ppplVar3;
  ulong uVar4;
  long *plVar5;
  long ****pppplVar6;
  undefined8 *puVar7;
  long lVar8;
  long **pplVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  long ***local_38;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0xe0) + 0x80) + 0x56c);
    if ((iVar2 != 4) && (iVar2 != 2)) {
      return;
    }
    *(int *)(param_1 + 0xe8) = iVar2;
    if (*(uint *)(param_1 + 0xb4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 3;
      return;
    }
    goto LAB_710182a9ec;
  }
  *(undefined1 *)(*(long *)(param_1 + 0xe0) + 0x70) = 0;
  pplVar9 = *(long ***)(*(long *)(param_1 + 0xe0) + 0x80);
  if (((ulong)pplVar9[0x34] >> 0x38 == 0xc1 && ((ulong)pplVar9[0x34] & 0xffffffffff) != 0) ||
     (*(char *)(pplVar9 + 0x39) != '\0')) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  if ((((ulong)pplVar9[0x3a] & 0xff00000000000000) == 0xc100000000000000 &&
       ((ulong)pplVar9[0x3a] & 0xffffffffff) != 0) || (*(char *)(pplVar9 + 0x3f) != '\0')) {
    uVar10 = uVar10 + 1;
  }
  if ((((ulong)pplVar9[0x40] & 0xff00000000000000) == 0xc100000000000000 &&
       ((ulong)pplVar9[0x40] & 0xffffffffff) != 0) || (*(char *)(pplVar9 + 0x45) != '\0')) {
    uVar10 = uVar10 + 1;
  }
  if (((((ulong)pplVar9[0x46] & 0xff00000000000000) == 0xc100000000000000) &&
      (((ulong)pplVar9[0x46] & 0xffffffffff) != 0)) || (*(char *)(pplVar9 + 0x4b) != '\0')) {
    uVar10 = uVar10 + 1;
  }
  if (((((ulong)pplVar9[0x4c] & 0xff00000000000000) == 0xc100000000000000) &&
      (((ulong)pplVar9[0x4c] & 0xffffffffff) != 0)) || (*(char *)(pplVar9 + 0x51) != '\0')) {
    uVar10 = uVar10 + 1;
  }
  if (((((ulong)pplVar9[0x52] & 0xff00000000000000) == 0xc100000000000000) &&
      (((ulong)pplVar9[0x52] & 0xffffffffff) != 0)) || (*(char *)(pplVar9 + 0x57) != '\0')) {
    uVar10 = uVar10 + 1;
  }
  if (((((ulong)pplVar9[0x58] & 0xff00000000000000) == 0xc100000000000000) &&
      (((ulong)pplVar9[0x58] & 0xffffffffff) != 0)) || (*(char *)(pplVar9 + 0x5d) != '\0')) {
    uVar10 = uVar10 + 1;
  }
  if (((((ulong)pplVar9[0x5e] & 0xff00000000000000) == 0xc100000000000000) &&
      (((ulong)pplVar9[0x5e] & 0xffffffffff) != 0)) || (*(char *)(pplVar9 + 99) != '\0')) {
    uVar10 = uVar10 + 1;
  }
  if (((((ulong)pplVar9[100] & 0xff00000000000000) == 0xc100000000000000) &&
      (((ulong)pplVar9[100] & 0xffffffffff) != 0)) || (*(char *)(pplVar9 + 0x69) != '\0')) {
    uVar10 = uVar10 + 1;
  }
  if (((((ulong)pplVar9[0x6a] & 0xff00000000000000) == 0xc100000000000000) &&
      (((ulong)pplVar9[0x6a] & 0xffffffffff) != 0)) || (*(char *)(pplVar9 + 0x6f) != '\0')) {
    uVar10 = uVar10 + 1;
  }
  FUN_7101ad8100((long)pplVar9,param_2,(char *)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar11 = pplVar9[8];
  *(undefined1 *)((long)pplVar9 + 0x599) = 0;
  if ((long *)*plVar11 != (long *)0x0) {
    param_4 = (byte ****)(ulong)**(uint **)**(undefined8 **)(*DAT_7105314510 + 0x1b8);
    param_3 = (long ****)&DAT_71042b2a84;
    FUN_7103375650((long *)*plVar11,"g_gold",&DAT_71042b2a84);
    plVar11 = pplVar9[8];
    if ((long *)*plVar11 != (long *)0x0) {
      param_3 = (long ****)&DAT_71042b2a84;
      param_4 = (byte ****)(ulong)uVar10;
      FUN_7103375650((long *)*plVar11,"g_item_num",&DAT_71042b2a84);
      plVar11 = pplVar9[8];
      if ((long *)*plVar11 != (long *)0x0) {
        param_3 = (long ****)&DAT_71043cdb7b;
        param_4 = (byte ****)0x0;
        FUN_7103375650((long *)*plVar11,"g_is_buy",&DAT_71043cdb7b);
        plVar11 = pplVar9[8];
        if ((long *)*plVar11 != (long *)0x0) {
          param_3 = (long ****)&DAT_71043cdb7b;
          param_4 = (byte ****)0x0;
          FUN_7103375650((long *)*plVar11,"g_is_shop_lv_up",&DAT_71043cdb7b);
          plVar11 = pplVar9[8];
        }
      }
    }
  }
  ppplVar3 = (long ***)FUN_710392e290(0x10,0x38,param_3,param_4,param_5,param_6,param_7,param_8);
  if (ppplVar3 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_48 = (long ***)((ulong)local_48._4_4_ << 0x20);
      local_38 = (long ***)&DAT_00000038;
      pppplVar6 = &local_38;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_48);
      if (((uVar4 & 1) != 0) &&
         (ppplVar3 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         ppplVar3 != (long ***)0x0)) goto LAB_710182a48c;
    }
    ppplVar3 = (long ***)0x0;
  }
LAB_710182a48c:
  ppplVar3[2] = pplVar9;
  *ppplVar3 = (long **)&PTR_FUN_71050a9be8;
  ppplVar3[3] = (long **)FUN_7101ad8c90;
  ppplVar3[4] = (long **)0x0;
  ppplVar3[5] = (long **)0x0;
  ppplVar3[6] = (long **)0x0;
  pppplVar6 = (long ****)&local_48;
  *(undefined4 *)(ppplVar3 + 1) = 1;
  local_48 = ppplVar3;
  FUN_7103376af0((long)plVar11,(byte *)"get_item_is_sold_out",pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  ppplVar3 = local_48;
  local_48 = (long ***)0x0;
  if (ppplVar3 != (long ***)0x0) {
    (*(code *)(*ppplVar3)[1])();
  }
  plVar11 = pplVar9[8];
  ppplVar3 = (long ***)FUN_710392e290(0x10,0x38,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  if (ppplVar3 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_50 = (long ***)((ulong)local_50._4_4_ << 0x20);
      local_38 = (long ***)&DAT_00000038;
      pppplVar6 = &local_38;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_50);
      if (((uVar4 & 1) != 0) &&
         (ppplVar3 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         ppplVar3 != (long ***)0x0)) goto LAB_710182a53c;
    }
    ppplVar3 = (long ***)0x0;
  }
LAB_710182a53c:
  ppplVar3[5] = (long **)0x0;
  ppplVar3[6] = (long **)0x0;
  *ppplVar3 = (long **)&PTR_FUN_71050a9b50;
  ppplVar3[2] = pplVar9;
  ppplVar3[3] = (long **)FUN_7101ad8860;
  ppplVar3[4] = (long **)0x0;
  pppplVar6 = (long ****)&local_50;
  *(undefined4 *)(ppplVar3 + 1) = 0;
  local_50 = ppplVar3;
  FUN_7103376af0((long)plVar11,(byte *)"open_detail_window",pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  ppplVar3 = local_50;
  local_50 = (long ***)0x0;
  if (ppplVar3 != (long ***)0x0) {
    (*(code *)(*ppplVar3)[1])();
  }
  plVar11 = pplVar9[8];
  ppplVar3 = (long ***)FUN_710392e290(0x10,0x38,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  if (ppplVar3 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_58 = (long ***)((ulong)local_58._4_4_ << 0x20);
      local_38 = (long ***)&DAT_00000038;
      pppplVar6 = &local_38;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_58);
      if (((uVar4 & 1) != 0) &&
         (ppplVar3 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         ppplVar3 != (long ***)0x0)) goto LAB_710182a5e8;
    }
    ppplVar3 = (long ***)0x0;
  }
LAB_710182a5e8:
  ppplVar3[3] = (long **)FUN_7101ad88c0;
  ppplVar3[4] = (long **)0x0;
  ppplVar3[5] = (long **)0x0;
  ppplVar3[6] = (long **)0x0;
  *ppplVar3 = (long **)&PTR_FUN_71050a9b78;
  ppplVar3[2] = pplVar9;
  pppplVar6 = (long ****)&local_58;
  *(undefined4 *)(ppplVar3 + 1) = 1;
  local_58 = ppplVar3;
  FUN_7103376af0((long)plVar11,(byte *)"decided_detail_window",pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  ppplVar3 = local_58;
  local_58 = (long ***)0x0;
  if (ppplVar3 != (long ***)0x0) {
    (*(code *)(*ppplVar3)[1])();
  }
  plVar11 = pplVar9[8];
  ppplVar3 = (long ***)FUN_710392e290(0x10,0x38,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  if (ppplVar3 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_60 = (long ***)((ulong)local_60._4_4_ << 0x20);
      local_38 = (long ***)&DAT_00000038;
      pppplVar6 = &local_38;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
      if (((uVar4 & 1) != 0) &&
         (ppplVar3 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         ppplVar3 != (long ***)0x0)) goto LAB_710182a698;
    }
    ppplVar3 = (long ***)0x0;
  }
LAB_710182a698:
  *ppplVar3 = (long **)&PTR_FUN_71050a9b50;
  ppplVar3[5] = (long **)0x0;
  ppplVar3[6] = (long **)0x0;
  ppplVar3[2] = pplVar9;
  pppplVar6 = (long ****)&local_60;
  ppplVar3[3] = (long **)FUN_7101ad8ab0;
  ppplVar3[4] = (long **)0x0;
  *(undefined4 *)(ppplVar3 + 1) = 0;
  local_60 = ppplVar3;
  FUN_7103376af0((long)plVar11,(byte *)"close_detail_window",pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  ppplVar3 = local_60;
  local_60 = (long ***)0x0;
  if (ppplVar3 != (long ***)0x0) {
    (*(code *)(*ppplVar3)[1])();
  }
  plVar11 = pplVar9[8];
  ppplVar3 = (long ***)FUN_710392e290(0x10,0x38,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  if (ppplVar3 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68._4_4_ << 0x20);
      local_38 = (long ***)&DAT_00000038;
      pppplVar6 = &local_38;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar4 & 1) != 0) &&
         (ppplVar3 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         ppplVar3 != (long ***)0x0)) goto LAB_710182a73c;
    }
    ppplVar3 = (long ***)0x0;
  }
LAB_710182a73c:
  *ppplVar3 = (long **)&PTR_FUN_71050a9b78;
  ppplVar3[3] = (long **)FUN_7101ad8c80;
  ppplVar3[4] = (long **)0x0;
  ppplVar3[5] = (long **)0x0;
  ppplVar3[6] = (long **)0x0;
  pppplVar6 = (long ****)&local_68;
  ppplVar3[2] = pplVar9;
  *(undefined4 *)(ppplVar3 + 1) = 1;
  local_68 = ppplVar3;
  FUN_7103376af0((long)plVar11,(byte *)"is_finish_popup",pppplVar6,param_4,param_5,param_6,param_7,
                 param_8);
  ppplVar3 = local_68;
  local_68 = (long ***)0x0;
  if (ppplVar3 != (long ***)0x0) {
    (*(code *)(*ppplVar3)[1])();
  }
  plVar11 = pplVar9[8];
  local_38 = (long ***)FUN_710392e290(0x10,0x28,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  if (local_38 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3c = 0;
      local_38 = (long ***)&DAT_00000028;
      pppplVar6 = &local_38;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3c);
      if (((uVar4 & 1) != 0) &&
         (local_38 = (long ***)
                     FUN_710392e290(0x10,0x28,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         local_38 != (long ***)0x0)) goto LAB_710182a7e4;
    }
    local_38 = (long ***)0x0;
  }
LAB_710182a7e4:
  *local_38 = (long **)&PTR_FUN_71050a9ba0;
  local_38[4] = (long **)0x0;
  local_38[2] = pplVar9;
  local_38[3] = (long **)FUN_7101ad7870;
  *(undefined4 *)(local_38 + 1) = 0;
  FUN_7103376af0((long)plVar11,(byte *)"set_effect",&local_38,param_4,param_5,param_6,param_7,
                 param_8);
  ppplVar3 = local_38;
  local_38 = (long ***)0x0;
  if (ppplVar3 != (long ***)0x0) {
    (*(code *)(*ppplVar3)[1])();
  }
  if ((long *)*pplVar9[8] == (long *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)*pplVar9[8];
  }
  if (pplVar9[3] != pplVar9[2]) {
    FUN_71033743c0(lVar12,"layout_root",*(undefined8 *)*pplVar9[2]);
    FUN_71038f7260(lVar12,"button_ctrl_func");
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = puVar7[-2];
    puVar7[1] = puVar7[-1];
    lVar8 = *(long *)(lVar12 + 0x10);
    *(long *)(lVar12 + 0x10) = lVar8 + 0x10;
    FUN_71038f5390(lVar12,(long *)(lVar8 + -0x10),"__index");
    FUN_71038f9510(lVar12,(long *)&PTR_s_selector_setup_bind_func_71050a9bb8,0,param_4,param_5,
                   param_6,param_7,param_8);
    *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + -0x10;
    plVar11 = FUN_71038f6930(lVar12,8);
    *plVar11 = (long)pplVar9;
    FUN_71038f4d40(lVar12,(long *)(*(long *)(lVar12 + 0x18) + 0x40),"button_ctrl_func");
    FUN_71038f5c00(lVar12,-2);
    if (lVar12 != 0) {
      lVar8 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
      if (*(uint *)(lVar8 + 0xc) < 2) {
        plVar11 = (long *)(*(long *)(lVar8 + 0x18) +
                          ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar8 + 0xb) & 0x3f)) & 2
                          ) * 0x20);
        do {
          if (((int)plVar11[3] == 0x13) && (plVar5 = plVar11, plVar11[2] == 2)) break;
          piVar1 = (int *)((long)plVar11 + 0x1c);
          plVar11 = plVar11 + (long)*piVar1 * 4;
          plVar5 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar5 = (long *)(*(long *)(lVar8 + 0x10) + 0x10);
      }
      FUN_71038f5390(lVar12,plVar5,"button_ctrl_func");
    }
    if (pplVar9[3] != pplVar9[2]) {
      puVar7 = (undefined8 *)*pplVar9[2];
      if (puVar7 != (undefined8 *)0x0) {
        FUN_7103775dc0(*(long **)*puVar7,0,(long ****)&DAT_00001000,param_4,param_5,param_6,param_7,
                       param_8);
      }
      if (*(uint *)((long)pplVar9 + 0x15c) < 0x13) {
        *(undefined4 *)((long)pplVar9 + (long)(int)*(uint *)((long)pplVar9 + 0x15c) * 4 + 0x110) = 1
        ;
        return;
      }
LAB_710182a9ec:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

