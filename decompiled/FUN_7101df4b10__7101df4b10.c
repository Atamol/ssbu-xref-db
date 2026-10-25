// addr:      7101df4b10
// offset:    0x1df4b10
// name:      FUN_7101df4b10
// mangled:   
// signature: undefined __cdecl FUN_7101df4b10(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101df4b10(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  long ***ppplVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long ***ppplVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  long ****pppplVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  uint uVar14;
  long ****pppplVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  long ***local_120;
  long ***local_118;
  long ***local_110;
  uint *local_108;
  uint *local_100;
  uint *puStack_f8;
  undefined8 local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_b8;
  ulong local_b0;
  long ***local_a8;
  undefined8 local_a0;
  long ***local_60;
  undefined4 local_54;
  
  puVar16 = *(undefined4 **)(param_1 + 0x670);
  *(undefined4 *)(param_1 + 0x688) = 0;
  *(undefined4 **)(param_1 + 0x678) = puVar16;
  switch(param_2 - 2U) {
  case 0:
    puVar4 = (undefined8 *)FUN_710392e290(0x10,0x24,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar4 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_a8 = (long ***)&DAT_00000024;
        param_3 = &local_a8;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar5 & 1) != 0) &&
           (puVar4 = (undefined8 *)
                     FUN_710392e290(0x10,0x24,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar4 != (undefined8 *)0x0)) goto LAB_7101df4cd8;
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_7101df4cd8:
    *puVar4 = 0x900000002;
    puVar4[1] = 0x1500000001;
    puVar18 = (undefined8 *)((long)puVar4 + 0x24);
    puVar4[2] = 0x30000000d;
    puVar4[3] = 0xe00000012;
    *(undefined4 *)(puVar4 + 4) = 0x14;
    goto joined_r0x007101df552c;
  case 1:
    puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar4 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_a8 = (long ***)&SUB_00000020;
        param_3 = &local_a8;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar5 & 1) != 0) &&
           (puVar4 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar4 != (undefined8 *)0x0)) goto LAB_7101df4d70;
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_7101df4d70:
    puVar18 = puVar4 + 4;
    *puVar4 = &DAT_100000002;
    puVar4[1] = 0xd00000015;
    uVar5 = 0x10;
    puVar12 = (undefined1 *)0x1300000005;
    break;
  case 2:
  case 0xb:
    puVar4 = (undefined8 *)FUN_710392e290(0x10,0x1c,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar4 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_a8 = (long ***)&DAT_0000001c;
        param_3 = &local_a8;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar5 & 1) != 0) &&
           (puVar4 = (undefined8 *)
                     FUN_710392e290(0x10,0x1c,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar4 != (undefined8 *)0x0)) goto LAB_7101df4bc0;
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_7101df4bc0:
    puVar18 = (undefined8 *)((long)puVar4 + 0x1c);
    *puVar4 = 0x400000003;
    puVar4[1] = 0x800000006;
    puVar4[2] = 0x100000015;
    *(undefined4 *)(puVar4 + 3) = 0x14;
    goto joined_r0x007101df552c;
  case 3:
    puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar4 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_a8 = (long ***)&SUB_00000020;
        param_3 = &local_a8;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar5 & 1) != 0) &&
           (puVar4 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar4 != (undefined8 *)0x0)) goto LAB_7101df4f98;
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_7101df4f98:
    puVar18 = puVar4 + 4;
    *puVar4 = 0x700000005;
    puVar4[1] = 0x100000003;
    uVar5 = 9;
    puVar12 = (undefined1 *)0x1600000015;
    break;
  default:
    local_108 = (uint *)CONCAT44(local_108._4_4_,1);
    if (*(undefined4 **)(param_1 + 0x680) == puVar16) {
      if (puVar16 != (undefined4 *)0x0) {
        *(undefined4 **)(param_1 + 0x678) = puVar16;
        FUN_710392eb40((ulong)puVar16);
        *(undefined8 *)(param_1 + 0x678) = 0;
        *(undefined8 *)(param_1 + 0x680) = 0;
        *(undefined8 *)(param_1 + 0x670) = 0;
      }
      puVar16 = (undefined4 *)FUN_710392e290(0x10,4,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      if (puVar16 == (undefined4 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
          local_a8 = (long ***)&DAT_00000004;
          param_3 = &local_a8;
          uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
          if (((uVar5 & 1) != 0) &&
             (puVar16 = (undefined4 *)
                        FUN_710392e290(0x10,4,param_3,param_4,param_5,param_6,param_7,param_8),
             puVar16 != (undefined4 *)0x0)) goto LAB_7101df4e18;
        }
        puVar16 = (undefined4 *)0x0;
      }
LAB_7101df4e18:
      *(undefined4 **)(param_1 + 0x670) = puVar16;
      *(undefined4 **)(param_1 + 0x680) = puVar16 + 1;
      *puVar16 = local_108._0_4_;
      *(undefined4 **)(param_1 + 0x678) = puVar16 + 1;
    }
    else {
      *puVar16 = 1;
      *(long *)(param_1 + 0x678) = *(long *)(param_1 + 0x678) + 4;
    }
    goto LAB_7101df506c;
  case 6:
    puVar4 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar4 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_a8 = (long ***)&SUB_00000018;
        param_3 = &local_a8;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar5 & 1) != 0) &&
           (puVar4 = (undefined8 *)
                     FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar4 != (undefined8 *)0x0)) goto LAB_7101df4c50;
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_7101df4c50:
    *puVar4 = 0x500000017;
    puVar4[1] = 0x700000015;
    puVar18 = puVar4 + 3;
    puVar4[2] = 0x140000000d;
    goto joined_r0x007101df552c;
  case 7:
    puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar4 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_a8 = (long ***)&SUB_00000020;
        param_3 = &local_a8;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar5 & 1) != 0) &&
           (puVar4 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar4 != (undefined8 *)0x0)) goto LAB_7101df4e90;
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_7101df4e90:
    puVar18 = puVar4 + 4;
    *puVar4 = 0x1700000008;
    puVar4[1] = 0x200000015;
    uVar5 = 0x16;
    puVar12 = (undefined1 *)0x500000001;
    break;
  case 8:
    puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar4 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_a8 = (long ***)&SUB_00000020;
        param_3 = &local_a8;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar5 & 1) != 0) &&
           (puVar4 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar4 != (undefined8 *)0x0)) goto LAB_7101df4f14;
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_7101df4f14:
    puVar18 = puVar4 + 4;
    *puVar4 = 0x1500000017;
    puVar4[1] = 0x700000005;
    uVar5 = 6;
    puVar12 = &DAT_300000002;
    break;
  case 9:
    puVar4 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar4 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_a8 = (long ***)&DAT_00000028;
        param_3 = &local_a8;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar5 & 1) != 0) &&
           (puVar4 = (undefined8 *)
                     FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar4 != (undefined8 *)0x0)) goto LAB_7101df54f4;
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_7101df54f4:
    *puVar4 = 0x100000004;
    puVar4[1] = 0x500000003;
    puVar4[2] = 0xa00000007;
    puVar4[3] = 0x150000000b;
    puVar18 = puVar4 + 5;
    puVar4[4] = 0x140000000d;
    goto joined_r0x007101df552c;
  case 10:
    puVar4 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar4 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
        local_a8 = (long ***)&SUB_00000020;
        param_3 = &local_a8;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar5 & 1) != 0) &&
           (puVar4 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar4 != (undefined8 *)0x0)) goto LAB_7101df501c;
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_7101df501c:
    puVar18 = puVar4 + 4;
    *puVar4 = 0x100000004;
    puVar4[1] = 0x1500000005;
    uVar5 = 0x13;
    puVar12 = (undefined1 *)0x100000000d;
  }
  puVar4[2] = puVar12;
  puVar4[3] = uVar5 | 0x1400000000;
joined_r0x007101df552c:
  if (puVar16 != (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x678) = puVar16;
    FUN_710392eb40((ulong)puVar16);
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x670) = 0;
  }
  *(undefined8 **)(param_1 + 0x670) = puVar4;
  *(undefined8 **)(param_1 + 0x678) = puVar18;
  *(undefined8 **)(param_1 + 0x680) = puVar18;
LAB_7101df506c:
  lVar9 = param_1 + 0x40;
  FUN_7103776910(&local_b8,lVar9,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_b8,"mnu_spirits_sort_guide",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  if ((ulong)(*(long *)(param_1 + 0x678) - *(long *)(param_1 + 0x670) >> 2) <=
      (ulong)*(uint *)(param_1 + 0x688)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_71025c6970((uint *)&local_a8,
                 *(undefined4 *)(*(long *)(param_1 + 0x670) + (ulong)*(uint *)(param_1 + 0x688) * 4)
                );
  FUN_7103776910(&local_f0,lVar9,(long ****)"set_txt_list",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_f0,(char *)&local_a0,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar5 = local_e8;
  local_f0 = &PTR_FUN_710523d9a8;
  local_e8 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  if (param_2 - 2U < 2) {
    pppplVar15 = (long ****)0xb;
  }
  else if (param_2 - 0xbU < 2) {
    pppplVar15 = (long ****)0x5;
  }
  else {
    pppplVar15 = (long ****)&DAT_00000004;
  }
  pppplVar8 = pppplVar15;
  FUN_7103778430(lVar9,"size_%02d",pppplVar15,param_4,param_5,param_6,param_7,param_8);
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_7103776290(&local_d0,extraout_x1,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  local_e8 = local_e8 & 0xffffffff00000000;
  uStack_d8 = uRam0000007107459008;
  local_e0 = _ConstantZero;
  *(undefined8 *)(local_c8 + 8) = 0;
  local_108 = (uint *)0x0;
  local_100 = (uint *)0x0;
  puStack_f8 = (uint *)0x0;
  local_f0 = (undefined **)CONCAT44(1,(int)pppplVar15);
  lVar9 = *(long *)(param_1 + 0x670);
  if (*(long *)(param_1 + 0x678) != lVar9) {
    uVar5 = 0;
    do {
      FUN_71025c6970((uint *)&local_a8,*(undefined4 *)(lVar9 + uVar5 * 4));
      if (local_100 < puStack_f8) {
        *local_100 = 0;
        uVar7 = 0;
        do {
          uVar11 = uVar7;
          if (*(char *)((long)&local_a0 + uVar7) == '\0') break;
          *(char *)((long)local_100 + uVar7 + 8) = *(char *)((long)&local_a0 + uVar7);
          cVar1 = *(char *)((long)&local_a0 + uVar7 + 1);
          if (cVar1 == '\0') {
            uVar11 = uVar7 + 1;
            break;
          }
          *(char *)((long)local_100 + uVar7 + 9) = cVar1;
          cVar1 = *(char *)((long)&local_a0 + uVar7 + 2);
          if (cVar1 == '\0') {
            uVar11 = uVar7 + 2;
            break;
          }
          uVar11 = uVar7 + 3;
          *(char *)((long)local_100 + uVar7 + 10) = cVar1;
          uVar7 = uVar11;
        } while ((uint)uVar11 < 0x3f);
        *(undefined1 *)((long)local_100 + (uVar11 & 0xffffffff) + 8) = 0;
        local_100[1] = (uint)uVar11;
        uVar10 = (uint)(byte)local_100[2];
        uVar14 = 0x811c9dc5;
        if ((byte)local_100[2] != 0) {
          pbVar13 = (byte *)((long)local_100 + 9);
          do {
            uVar14 = uVar14 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (uVar10 != 0);
        }
        *local_100 = uVar14;
        local_100 = local_100 + 0x12;
      }
      else {
        FUN_71019c1c50((ulong *)&local_108,(long)&local_a8,pppplVar8,param_4,param_5,param_6,param_7
                       ,param_8);
      }
      lVar9 = *(long *)(param_1 + 0x670);
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(*(long *)(param_1 + 0x678) - lVar9 >> 2));
  }
  FUN_7103776640(&local_a8,param_1 + 0x18,(byte ****)"blinder",pppplVar8,param_4,param_5,param_6,
                 param_7,param_8);
  puVar3 = local_100;
  puVar17 = local_108;
  local_120 = (long ***)0x0;
  local_118 = (long ***)0x0;
  local_110 = (long ***)0x0;
  ppplVar2 = (long ***)((long)local_100 - (long)local_108);
  if (ppplVar2 == (long ***)0x0) goto LAB_7101df53e4;
  if (0x38e38e38e38e38e < (ulong)(((long)ppplVar2 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  ppplVar6 = (long ***)
             FUN_710392e290(0x10,ppplVar2,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  if (ppplVar6 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      pppplVar15 = &local_60;
      local_60 = ppplVar2;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar5 & 1) != 0) &&
         (ppplVar6 = (long ***)
                     FUN_710392e290(0x10,ppplVar2,pppplVar15,param_4,param_5,param_6,param_7,param_8
                                   ), ppplVar6 != (long ***)0x0)) goto LAB_7101df531c;
    }
    ppplVar6 = (long ***)0x0;
  }
LAB_7101df531c:
  local_110 = ppplVar6 + ((long)ppplVar2 >> 3);
  local_120 = ppplVar6;
  local_118 = ppplVar6;
  if (puVar17 != puVar3) {
    do {
      *(uint *)local_118 = 0;
      uVar5 = 0;
      do {
        cVar1 = *(char *)((long)puVar17 + uVar5 + 8);
        uVar7 = uVar5;
        if (cVar1 == '\0') break;
        *(char *)((long)local_118 + uVar5 + 8) = cVar1;
        cVar1 = *(char *)((long)puVar17 + uVar5 + 9);
        if (cVar1 == '\0') {
          uVar7 = uVar5 + 1;
          break;
        }
        *(char *)((long)local_118 + uVar5 + 9) = cVar1;
        cVar1 = *(char *)((long)puVar17 + uVar5 + 10);
        if (cVar1 == '\0') {
          uVar7 = uVar5 + 2;
          break;
        }
        uVar7 = uVar5 + 3;
        *(char *)((long)local_118 + uVar5 + 10) = cVar1;
        uVar5 = uVar7;
      } while ((uint)uVar7 < 0x3f);
      *(undefined1 *)((long)local_118 + (uVar7 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_118 + 4) = (uint)uVar7;
      uVar10 = (uint)*(byte *)(local_118 + 1);
      uVar14 = 0x811c9dc5;
      if (*(byte *)(local_118 + 1) != 0) {
        pbVar13 = (byte *)((long)local_118 + 9);
        do {
          uVar14 = uVar14 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (uVar10 != 0);
      }
      *(uint *)local_118 = uVar14;
      puVar17 = puVar17 + 0x12;
      local_118 = local_118 + 9;
    } while (puVar17 != puVar3);
  }
LAB_7101df53e4:
  FUN_71032ccb70(param_1 + 0x610,(undefined8 *)(param_1 + 0x10),&local_120,(byte ****)&local_f0,
                 &local_a8,param_6,param_7,param_8);
  if (local_120 != (long ***)0x0) {
    local_118 = local_120;
    FUN_710392eb40((ulong)local_120);
  }
  uVar5 = local_a0;
  local_a8 = (long ***)&PTR_FUN_710523d988;
  local_a0 = 0;
  if (uVar5 != 0) {
    uVar7 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar5);
  }
  if (local_108 != (uint *)0x0) {
    local_100 = local_108;
    FUN_710392eb40((ulong)local_108);
  }
  uVar5 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar5 != 0) {
    uVar7 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar5);
  }
  uVar5 = local_b0;
  local_b8 = &PTR_FUN_710523d9a8;
  local_b0 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  return;
}

