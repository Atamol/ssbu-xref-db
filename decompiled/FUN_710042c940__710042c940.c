// addr:      710042c940
// offset:    0x42c940
// name:      FUN_710042c940
// mangled:   
// signature: undefined __cdecl FUN_710042c940(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_710042c940(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long ****pppplVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  string local_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 local_148;
  undefined4 uStack_147;
  undefined1 uStack_143;
  undefined2 uStack_142;
  byte local_140;
  string local_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 local_128;
  undefined4 uStack_127;
  undefined1 uStack_123;
  undefined2 uStack_122;
  byte local_120;
  string local_118;
  undefined7 uStack_117;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined1 local_108;
  undefined2 uStack_107;
  undefined1 uStack_105;
  undefined4 uStack_104;
  byte local_100;
  string local_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 local_e8;
  undefined2 uStack_e7;
  undefined1 uStack_e5;
  undefined4 uStack_e4;
  byte local_e0;
  string local_d8;
  undefined7 uStack_d7;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined1 local_c8;
  undefined1 uStack_c7;
  undefined6 uStack_c6;
  byte local_c0;
  string local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined6 uStack_a6;
  byte local_a0;
  string local_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 local_88;
  undefined1 uStack_87;
  undefined6 uStack_86;
  byte local_80;
  string local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  long ***local_60;
  undefined4 local_54;
  
  uStack_142 = 0;
  uStack_147 = 0x31657672;
  uStack_122 = 0;
  local_158 = (string)0x28;
  uStack_14f = 0x7365525f63696d;
  local_148 = 0x65;
  local_138 = (string)0x28;
  local_140 = 2;
  uStack_12f = 0x7365525f63696d;
  local_128 = 0x65;
  uStack_127 = 0x32657672;
  local_120 = 3;
  uStack_137 = 0x4d5f6576617242;
  uStack_130 = 0x69;
  local_118 = (string)0x26;
  local_f8 = (string)0x26;
  uStack_157 = 0x4d5f6576617242;
  uStack_150 = 0x69;
  uStack_143 = 0;
  uStack_123 = 0;
  DAT_710532b0f0 = 0;
  uStack_105 = 0x31;
  uStack_107 = 0x6b63;
  uStack_10f = 0x7474415f63696d;
  local_108 = 0x61;
  local_100 = 4;
  uStack_117 = 0x4d5f6576617242;
  local_110 = 0x69;
  uStack_104 = 0;
  uStack_e5 = 0x32;
  uStack_e7 = 0x6b63;
  uStack_f7 = 0x4d5f6576617242;
  local_f0 = 0x69;
  uStack_ef = 0x7474415f63696d;
  local_e8 = 0x61;
  local_e0 = 5;
  uStack_e4 = 0;
  local_d8 = (string)0x20;
  uStack_c6 = 0;
  uStack_cf = 0x6961575f63696d;
  local_c8 = 0x74;
  uStack_d7 = 0x4d5f6576617242;
  local_d0 = 0x69;
  local_c0 = 6;
  uStack_c7 = 0;
  uStack_a6 = 0;
  local_b8 = (string)0x20;
  uStack_af = 0x766f4d5f63696d;
  local_a8 = 0x65;
  uStack_b7 = 0x4d5f6576617242;
  uStack_b0 = 0x69;
  local_a0 = 7;
  uStack_a7 = 0;
  uStack_86 = 0;
  local_98 = (string)0x20;
  uStack_8f = 0x6978455f63696d;
  local_88 = 0x74;
  uStack_97 = 0x4d5f6576617242;
  uStack_90 = 0x69;
  local_80 = 8;
  uStack_87 = 0;
  uStack_66 = 0;
  local_78 = (string)0x20;
  uStack_6f = 0x6165445f63696d;
  local_68 = 100;
  uStack_77 = 0x4d5f6576617242;
  uStack_70 = 0x69;
  uStack_67 = 0;
  DAT_710532b0e8 = (long *)0x0;
  DAT_710532b0e0 = &DAT_710532b0e8;
  plVar4 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    local_54 = 0;
    local_60 = (long ***)&DAT_00000040;
    param_3 = &local_60;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
    plVar4 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  *(undefined1 *)(plVar4 + 4) = 1;
  std::string::string((string *)(plVar4 + 5),&local_158);
  plVar4[2] = (long)&DAT_710532b0e8;
  puVar2 = DAT_710532b0e0;
  *plVar4 = 0;
  plVar4[1] = 0;
  if ((undefined8 *)*puVar2 != (undefined8 *)0x0) {
    DAT_710532b0e0 = (undefined8 *)*puVar2;
  }
  DAT_710532b0e8 = plVar4;
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(plVar4,plVar4);
  DAT_710532b0f0 = DAT_710532b0f0 + 1;
  plVar4 = (long *)&DAT_710532b0e8;
  if ((long **)DAT_710532b0e0 == &DAT_710532b0e8) {
LAB_710042cc10:
    if (DAT_710532b0e8 == (long *)0x0) goto LAB_710042cc68;
    plVar8 = plVar4 + 1;
    if (*plVar8 == 0) goto LAB_710042cc74;
  }
  else {
    plVar5 = DAT_710532b0e8;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar5 = (long *)&DAT_710532b0e8;
      do {
        plVar4 = (long *)plVar5[2];
        bVar3 = (long *)*plVar4 == plVar5;
        plVar5 = plVar4;
      } while (bVar3);
    }
    else {
      do {
        plVar4 = plVar5;
        plVar5 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    if (*(byte *)(plVar4 + 4) < local_140) goto LAB_710042cc10;
    plVar5 = DAT_710532b0e8;
    if (DAT_710532b0e8 != (long *)0x0) {
      do {
        while (plVar4 = plVar5, *(byte *)(plVar4 + 4) <= local_140) {
          if (local_140 <= *(byte *)(plVar4 + 4)) goto LAB_710042cd1c;
          plVar5 = (long *)plVar4[1];
          plVar8 = plVar4 + 1;
          if (plVar5 == (long *)0x0) goto LAB_710042cc74;
        }
        plVar5 = (long *)*plVar4;
        plVar8 = plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
      goto LAB_710042cc74;
    }
LAB_710042cc68:
    plVar4 = (long *)&DAT_710532b0e8;
    plVar8 = plVar4;
LAB_710042cc74:
    plVar5 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar5 == (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_00000040;
      param_3 = &local_60;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      plVar5 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    *(byte *)(plVar5 + 4) = local_140;
    std::string::string((string *)(plVar5 + 5),&local_138);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)plVar4;
    *plVar8 = (long)plVar5;
    if ((undefined8 *)*DAT_710532b0e0 != (undefined8 *)0x0) {
      plVar5 = (long *)*plVar8;
      DAT_710532b0e0 = (undefined8 *)*DAT_710532b0e0;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(DAT_710532b0e8,plVar5);
    DAT_710532b0f0 = DAT_710532b0f0 + 1;
  }
LAB_710042cd1c:
  plVar4 = (long *)&DAT_710532b0e8;
  plVar5 = plVar4;
  plVar8 = plVar4;
  plVar10 = plVar4;
  plVar11 = plVar4;
  plVar12 = plVar4;
  if ((long **)DAT_710532b0e0 == &DAT_710532b0e8) {
joined_r0x00710042cd48:
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar5 = (long *)&DAT_710532b0e8;
      plVar7 = plVar5;
    }
    else {
      plVar7 = plVar5 + 1;
      if (plVar5[1] != 0) goto LAB_710042cd94;
    }
LAB_710042cea4:
    plVar6 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar6 == (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_00000040;
      param_3 = &local_60;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      plVar6 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    *(byte *)(plVar6 + 4) = local_120;
    std::string::string((string *)(plVar6 + 5),&local_118);
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = (long)plVar5;
    *plVar7 = (long)plVar6;
    if ((undefined8 *)*DAT_710532b0e0 != (undefined8 *)0x0) {
      plVar6 = (long *)*plVar7;
      DAT_710532b0e0 = (undefined8 *)*DAT_710532b0e0;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(DAT_710532b0e8,plVar6);
    DAT_710532b0f0 = DAT_710532b0f0 + 1;
    if ((long **)DAT_710532b0e0 == &DAT_710532b0e8) goto LAB_710042cf58;
LAB_710042cd9c:
    plVar5 = DAT_710532b0e8;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar5 = (long *)&DAT_710532b0e8;
      do {
        plVar8 = (long *)plVar5[2];
        bVar3 = (long *)*plVar8 == plVar5;
        plVar5 = plVar8;
      } while (bVar3);
    }
    else {
      do {
        plVar8 = plVar5;
        plVar5 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    if (*(byte *)(plVar8 + 4) < local_100) goto LAB_710042cf58;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar8 = (long *)&DAT_710532b0e8;
      plVar5 = plVar8;
      plVar7 = DAT_710532b0e8;
      goto joined_r0x00710042d028;
    }
    plVar7 = DAT_710532b0e8;
    plVar5 = (long *)&DAT_710532b0e8;
    do {
      while (plVar8 = plVar7, *(byte *)(plVar8 + 4) <= local_100) {
        plVar7 = plVar8;
        if (local_100 <= *(byte *)(plVar8 + 4)) goto joined_r0x00710042d028;
        plVar5 = plVar8 + 1;
        plVar7 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_710042d02c;
      }
      plVar7 = (long *)*plVar8;
      plVar5 = plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
LAB_710042d02c:
    plVar7 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar7 == (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_00000040;
      param_3 = &local_60;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      plVar7 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    *(byte *)(plVar7 + 4) = local_100;
    std::string::string((string *)(plVar7 + 5),&local_f8);
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = (long)plVar8;
    *plVar5 = (long)plVar7;
    if ((undefined8 *)*DAT_710532b0e0 != (undefined8 *)0x0) {
      plVar7 = (long *)*plVar5;
      DAT_710532b0e0 = (undefined8 *)*DAT_710532b0e0;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(DAT_710532b0e8,plVar7);
    DAT_710532b0f0 = DAT_710532b0f0 + 1;
    if ((long **)DAT_710532b0e0 == &DAT_710532b0e8) goto LAB_710042d0e0;
LAB_710042cf70:
    plVar5 = DAT_710532b0e8;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar5 = (long *)&DAT_710532b0e8;
      do {
        plVar10 = (long *)plVar5[2];
        bVar3 = (long *)*plVar10 == plVar5;
        plVar5 = plVar10;
      } while (bVar3);
    }
    else {
      do {
        plVar10 = plVar5;
        plVar5 = (long *)plVar10[1];
      } while ((long *)plVar10[1] != (long *)0x0);
    }
    if (*(byte *)(plVar10 + 4) < local_e0) goto LAB_710042d0e0;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar5 = (long *)&DAT_710532b0e8;
      plVar10 = plVar5;
      plVar8 = DAT_710532b0e8;
      goto joined_r0x00710042d0ec;
    }
    plVar8 = DAT_710532b0e8;
    plVar5 = (long *)&DAT_710532b0e8;
    do {
      while (plVar10 = plVar8, *(byte *)(plVar10 + 4) <= local_e0) {
        plVar8 = plVar10;
        if (local_e0 <= *(byte *)(plVar10 + 4)) goto joined_r0x00710042d0ec;
        plVar5 = plVar10 + 1;
        plVar8 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_710042d1b4;
      }
      plVar8 = (long *)*plVar10;
      plVar5 = plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
LAB_710042d1b4:
    plVar8 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_00000040;
      param_3 = &local_60;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      plVar8 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    *(byte *)(plVar8 + 4) = local_e0;
    std::string::string((string *)(plVar8 + 5),&local_d8);
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = (long)plVar10;
    *plVar5 = (long)plVar8;
    if ((undefined8 *)*DAT_710532b0e0 != (undefined8 *)0x0) {
      plVar8 = (long *)*plVar5;
      DAT_710532b0e0 = (undefined8 *)*DAT_710532b0e0;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(DAT_710532b0e8,plVar8);
    DAT_710532b0f0 = DAT_710532b0f0 + 1;
    if ((long **)DAT_710532b0e0 == &DAT_710532b0e8) goto LAB_710042d268;
LAB_710042d0f8:
    plVar5 = DAT_710532b0e8;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar5 = (long *)&DAT_710532b0e8;
      do {
        plVar11 = (long *)plVar5[2];
        bVar3 = (long *)*plVar11 == plVar5;
        plVar5 = plVar11;
      } while (bVar3);
    }
    else {
      do {
        plVar11 = plVar5;
        plVar5 = (long *)plVar11[1];
      } while ((long *)plVar11[1] != (long *)0x0);
    }
    if (*(byte *)(plVar11 + 4) < local_c0) goto LAB_710042d268;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar11 = (long *)&DAT_710532b0e8;
      plVar5 = plVar11;
      plVar8 = DAT_710532b0e8;
      goto joined_r0x00710042d338;
    }
    plVar8 = DAT_710532b0e8;
    plVar5 = (long *)&DAT_710532b0e8;
    do {
      while (plVar11 = plVar8, *(byte *)(plVar11 + 4) <= local_c0) {
        plVar8 = plVar11;
        if (local_c0 <= *(byte *)(plVar11 + 4)) goto joined_r0x00710042d338;
        plVar5 = plVar11 + 1;
        plVar8 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_710042d33c;
      }
      plVar8 = (long *)*plVar11;
      plVar5 = plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
LAB_710042d33c:
    plVar8 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_00000040;
      param_3 = &local_60;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      plVar8 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    *(byte *)(plVar8 + 4) = local_c0;
    std::string::string((string *)(plVar8 + 5),&local_b8);
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = (long)plVar11;
    *plVar5 = (long)plVar8;
    if ((undefined8 *)*DAT_710532b0e0 != (undefined8 *)0x0) {
      plVar8 = (long *)*plVar5;
      DAT_710532b0e0 = (undefined8 *)*DAT_710532b0e0;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(DAT_710532b0e8,plVar8);
    DAT_710532b0f0 = DAT_710532b0f0 + 1;
    if ((long **)DAT_710532b0e0 == &DAT_710532b0e8) goto LAB_710042d3f0;
LAB_710042d280:
    plVar5 = DAT_710532b0e8;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar5 = (long *)&DAT_710532b0e8;
      do {
        plVar12 = (long *)plVar5[2];
        bVar3 = (long *)*plVar12 == plVar5;
        plVar5 = plVar12;
      } while (bVar3);
    }
    else {
      do {
        plVar12 = plVar5;
        plVar5 = (long *)plVar12[1];
      } while ((long *)plVar12[1] != (long *)0x0);
    }
    if (*(byte *)(plVar12 + 4) < local_a0) goto LAB_710042d3f0;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar5 = (long *)&DAT_710532b0e8;
      plVar12 = plVar5;
      plVar8 = DAT_710532b0e8;
      goto joined_r0x00710042d3fc;
    }
    plVar8 = DAT_710532b0e8;
    plVar5 = (long *)&DAT_710532b0e8;
    do {
      while (plVar12 = plVar8, *(byte *)(plVar12 + 4) <= local_a0) {
        plVar8 = plVar12;
        if (local_a0 <= *(byte *)(plVar12 + 4)) goto joined_r0x00710042d3fc;
        plVar5 = plVar12 + 1;
        plVar8 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_710042d4bc;
      }
      plVar8 = (long *)*plVar12;
      plVar5 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
LAB_710042d4bc:
    plVar8 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_00000040;
      param_3 = &local_60;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      plVar8 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    *(byte *)(plVar8 + 4) = local_a0;
    std::string::string((string *)(plVar8 + 5),&local_98);
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = (long)plVar12;
    *plVar5 = (long)plVar8;
    if ((undefined8 *)*DAT_710532b0e0 != (undefined8 *)0x0) {
      plVar8 = (long *)*plVar5;
      DAT_710532b0e0 = (undefined8 *)*DAT_710532b0e0;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(DAT_710532b0e8,plVar8);
    DAT_710532b0f0 = DAT_710532b0f0 + 1;
    if ((long **)DAT_710532b0e0 == &DAT_710532b0e8) goto LAB_710042d570;
LAB_710042d408:
    plVar5 = DAT_710532b0e8;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar5 = (long *)&DAT_710532b0e8;
      do {
        plVar4 = (long *)plVar5[2];
        bVar3 = (long *)*plVar4 == plVar5;
        plVar5 = plVar4;
      } while (bVar3);
    }
    else {
      do {
        plVar4 = plVar5;
        plVar5 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    if (*(byte *)(plVar4 + 4) < local_80) goto LAB_710042d570;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar4 = (long *)&DAT_710532b0e8;
      plVar5 = (long *)&DAT_710532b0e8;
    }
    else {
      plVar8 = DAT_710532b0e8;
      plVar5 = (long *)&DAT_710532b0e8;
      do {
        while (plVar4 = plVar8, *(byte *)(plVar4 + 4) <= local_80) {
          plVar8 = plVar4;
          if (local_80 <= *(byte *)(plVar4 + 4)) goto joined_r0x00710042d5dc;
          plVar5 = plVar4 + 1;
          plVar8 = (long *)*plVar5;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_710042d5e0;
        }
        plVar8 = (long *)*plVar4;
        plVar5 = plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  else {
    plVar7 = DAT_710532b0e8;
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar7 = (long *)&DAT_710532b0e8;
      do {
        plVar5 = (long *)plVar7[2];
        bVar3 = (long *)*plVar5 == plVar7;
        plVar7 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar7;
        plVar7 = (long *)plVar5[1];
      } while ((long *)plVar5[1] != (long *)0x0);
    }
    if (*(byte *)(plVar5 + 4) < local_120) goto joined_r0x00710042cd48;
    if (DAT_710532b0e8 != (long *)0x0) {
      plVar6 = DAT_710532b0e8;
      plVar7 = (long *)&DAT_710532b0e8;
      do {
        while (plVar5 = plVar6, *(byte *)(plVar5 + 4) <= local_120) {
          plVar6 = plVar5;
          if (local_120 <= *(byte *)(plVar5 + 4)) goto LAB_710042cea0;
          plVar7 = plVar5 + 1;
          plVar6 = (long *)*plVar7;
          if ((long *)*plVar7 == (long *)0x0) goto LAB_710042cea4;
        }
        plVar6 = (long *)*plVar5;
        plVar7 = plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
      goto LAB_710042cea4;
    }
    plVar5 = (long *)&DAT_710532b0e8;
    plVar6 = DAT_710532b0e8;
    plVar7 = plVar5;
LAB_710042cea0:
    if (plVar6 == (long *)0x0) goto LAB_710042cea4;
LAB_710042cd94:
    if ((long **)DAT_710532b0e0 != &DAT_710532b0e8) goto LAB_710042cd9c;
LAB_710042cf58:
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar8 = (long *)&DAT_710532b0e8;
      plVar5 = plVar8;
      goto LAB_710042d02c;
    }
    plVar5 = plVar8 + 1;
    plVar7 = (long *)plVar8[1];
joined_r0x00710042d028:
    if (plVar7 == (long *)0x0) goto LAB_710042d02c;
    if ((long **)DAT_710532b0e0 != &DAT_710532b0e8) goto LAB_710042cf70;
LAB_710042d0e0:
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar10 = (long *)&DAT_710532b0e8;
      plVar5 = plVar10;
      goto LAB_710042d1b4;
    }
    plVar5 = plVar10 + 1;
    plVar8 = (long *)*plVar5;
joined_r0x00710042d0ec:
    if (plVar8 == (long *)0x0) goto LAB_710042d1b4;
    if ((long **)DAT_710532b0e0 != &DAT_710532b0e8) goto LAB_710042d0f8;
LAB_710042d268:
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar11 = (long *)&DAT_710532b0e8;
      plVar5 = plVar11;
      goto LAB_710042d33c;
    }
    plVar5 = plVar11 + 1;
    plVar8 = (long *)plVar11[1];
joined_r0x00710042d338:
    if (plVar8 == (long *)0x0) goto LAB_710042d33c;
    if ((long **)DAT_710532b0e0 != &DAT_710532b0e8) goto LAB_710042d280;
LAB_710042d3f0:
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar12 = (long *)&DAT_710532b0e8;
      plVar5 = plVar12;
      goto LAB_710042d4bc;
    }
    plVar5 = plVar12 + 1;
    plVar8 = (long *)*plVar5;
joined_r0x00710042d3fc:
    if (plVar8 == (long *)0x0) goto LAB_710042d4bc;
    if ((long **)DAT_710532b0e0 != &DAT_710532b0e8) goto LAB_710042d408;
LAB_710042d570:
    if (DAT_710532b0e8 == (long *)0x0) {
      plVar4 = (long *)&DAT_710532b0e8;
      plVar5 = (long *)&DAT_710532b0e8;
    }
    else {
      plVar5 = plVar4 + 1;
      plVar8 = (long *)*plVar5;
joined_r0x00710042d5dc:
      if (plVar8 != (long *)0x0) goto joined_r0x00710042d684;
    }
  }
LAB_710042d5e0:
  plVar8 = (long *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    local_54 = 0;
    local_60 = (long ***)&DAT_00000040;
    pppplVar9 = &local_60;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
    plVar8 = (long *)FUN_710392e290(0x10,0x40,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  }
  *(byte *)(plVar8 + 4) = local_80;
  std::string::string((string *)(plVar8 + 5),&local_78);
  *plVar8 = 0;
  plVar8[1] = 0;
  plVar8[2] = (long)plVar4;
  *plVar5 = (long)plVar8;
  if ((undefined8 *)*DAT_710532b0e0 != (undefined8 *)0x0) {
    plVar8 = (long *)*plVar5;
    DAT_710532b0e0 = (undefined8 *)*DAT_710532b0e0;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(DAT_710532b0e8,plVar8);
  DAT_710532b0f0 = DAT_710532b0f0 + 1;
joined_r0x00710042d684:
  if ((((byte)local_78 & 1) != 0) &&
     (uVar1 = CONCAT62(uStack_66,CONCAT11(uStack_67,local_68)), uVar1 != 0)) {
    FUN_710392eb40(uVar1);
  }
  if ((((byte)local_98 & 1) != 0) &&
     (uVar1 = CONCAT62(uStack_86,CONCAT11(uStack_87,local_88)), uVar1 != 0)) {
    FUN_710392eb40(uVar1);
  }
  if ((((byte)local_b8 & 1) != 0) &&
     (uVar1 = CONCAT62(uStack_a6,CONCAT11(uStack_a7,local_a8)), uVar1 != 0)) {
    FUN_710392eb40(uVar1);
  }
  if ((((byte)local_d8 & 1) != 0) &&
     (uVar1 = CONCAT62(uStack_c6,CONCAT11(uStack_c7,local_c8)), uVar1 != 0)) {
    FUN_710392eb40(uVar1);
  }
  if ((((byte)local_f8 & 1) != 0) &&
     (uVar1 = CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,local_e8))), uVar1 != 0)) {
    FUN_710392eb40(uVar1);
  }
  if ((((byte)local_118 & 1) != 0) &&
     (uVar1 = CONCAT44(uStack_104,CONCAT13(uStack_105,CONCAT21(uStack_107,local_108))), uVar1 != 0))
  {
    FUN_710392eb40(uVar1);
  }
  if ((((byte)local_138 & 1) != 0) &&
     (uVar1 = CONCAT26(uStack_122,CONCAT15(uStack_123,CONCAT41(uStack_127,local_128))), uVar1 != 0))
  {
    FUN_710392eb40(uVar1);
  }
  if ((((byte)local_158 & 1) != 0) &&
     (uVar1 = CONCAT26(uStack_142,CONCAT15(uStack_143,CONCAT41(uStack_147,local_148))), uVar1 != 0))
  {
    FUN_710392eb40(uVar1);
  }
  FUN_71000001c0();
  return;
}

