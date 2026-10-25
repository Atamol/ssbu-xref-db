// addr:      7101e2b890
// offset:    0x1e2b890
// name:      FUN_7101e2b890
// mangled:   
// signature: undefined __cdecl FUN_7101e2b890(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e2b890(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long ***ppplVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  char *pcVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  undefined1 *puVar18;
  void *pvVar19;
  long ****pppplVar20;
  long ***ppplVar21;
  void *pvVar22;
  ulong uVar23;
  long ***local_140;
  long ***local_138;
  long ***local_130;
  uint *local_128;
  uint *local_120;
  uint *puStack_118;
  byte ***local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined **local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  undefined8 *local_80;
  long ***local_78;
  undefined4 local_6c [3];
  
  FUN_71037717d0((undefined8 *)(param_1 + 0x530),100,"scr_sort_00",param_4,param_5,param_6,param_7,
                 param_8);
  local_e0 = (undefined **)0x7fc420ce8;
  FUN_7103772070(*(long *)(param_1 + 0x530),100,(long ****)&local_e0,param_4,param_5,param_6,param_7
                 ,param_8);
  pcVar10 = "scr_ctrl";
  FUN_71037717d0((undefined8 *)(param_1 + 0x530),0x68,"scr_ctrl",param_4,param_5,param_6,param_7,
                 param_8);
  puVar18 = *(undefined1 **)(param_1 + 0xb60);
  uVar23 = (long)*(undefined1 **)(param_1 + 0xb70) - (long)puVar18;
  *(undefined1 **)(param_1 + 0xb68) = puVar18;
  if (*(undefined1 **)(param_1 + 0xb70) < puVar18 || uVar23 == 0) {
    if (uVar23 < 0x3fffffffffffffff) {
      ppplVar21 = (long ***)(uVar23 * 2);
      if (ppplVar21 == (long ***)0x0) {
        ppplVar21 = (long ***)0x1;
      }
    }
    else {
      ppplVar21 = (long ***)0x7fffffffffffffff;
    }
    puVar7 = (undefined1 *)
             FUN_710392e290(0x10,ppplVar21,(long ****)pcVar10,param_4,param_5,param_6,param_7,
                            param_8);
    if (puVar7 == (undefined1 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_110 = (byte ***)((ulong)local_110 & 0xffffffff00000000);
        pcVar10 = (char *)&local_e0;
        local_e0 = (undefined **)ppplVar21;
        uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_110);
        if (((uVar23 & 1) != 0) &&
           (puVar7 = (undefined1 *)
                     FUN_710392e290(0x10,ppplVar21,(long ****)pcVar10,param_4,param_5,param_6,
                                    param_7,param_8), puVar7 != (undefined1 *)0x0))
        goto LAB_7101e2b99c;
      }
      puVar7 = (undefined1 *)0x0;
    }
LAB_7101e2b99c:
    puVar11 = puVar7 + 1;
    *puVar7 = 0;
    *(undefined1 **)(param_1 + 0xb60) = puVar7;
    *(undefined1 **)(param_1 + 0xb68) = puVar11;
    *(undefined1 **)(param_1 + 0xb70) = puVar7 + (long)ppplVar21;
    if (puVar18 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar18);
      puVar11 = *(undefined1 **)(param_1 + 0xb68);
    }
  }
  else {
    *puVar18 = 0;
    puVar11 = (undefined1 *)(*(long *)(param_1 + 0xb68) + 1);
    *(undefined1 **)(param_1 + 0xb68) = puVar11;
  }
  if (puVar11 < *(undefined1 **)(param_1 + 0xb70)) {
    *puVar11 = 2;
    puVar18 = (undefined1 *)(*(long *)(param_1 + 0xb68) + 1);
    *(undefined1 **)(param_1 + 0xb68) = puVar18;
  }
  else {
    pvVar19 = *(void **)(param_1 + 0xb60);
    pppplVar20 = (long ****)(puVar11 + -(long)pvVar19);
    ppplVar21 = (long ***)((long)pppplVar20 + 1);
    if ((long)ppplVar21 < 0) goto LAB_7101e2c41c;
    uVar23 = (long)*(undefined1 **)(param_1 + 0xb70) - (long)pvVar19;
    if (uVar23 < 0x3fffffffffffffff) {
      ppplVar8 = (long ***)(uVar23 * 2);
      if (ppplVar21 <= ppplVar8) {
        ppplVar21 = ppplVar8;
      }
      if (ppplVar21 != (long ***)0x0) goto LAB_7101e2ba24;
LAB_7101e2ba78:
      pvVar22 = (void *)0x0;
    }
    else {
      ppplVar21 = (long ***)0x7fffffffffffffff;
LAB_7101e2ba24:
      pvVar22 = (void *)FUN_710392e290(0x10,ppplVar21,(long ****)pcVar10,param_4,param_5,param_6,
                                       param_7,param_8);
      if (pvVar22 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_110 = (byte ***)((ulong)local_110 & 0xffffffff00000000);
          pcVar10 = (char *)&local_e0;
          local_e0 = (undefined **)ppplVar21;
          uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_110);
          if (((uVar23 & 1) != 0) &&
             (pvVar22 = (void *)FUN_710392e290(0x10,ppplVar21,(long ****)pcVar10,param_4,param_5,
                                               param_6,param_7,param_8), pvVar22 != (void *)0x0))
          goto LAB_7101e2ba7c;
        }
        goto LAB_7101e2ba78;
      }
    }
LAB_7101e2ba7c:
    puVar18 = (undefined1 *)((long)pvVar22 + (long)pppplVar20) + 1;
    *(undefined1 *)((long)pvVar22 + (long)pppplVar20) = 2;
    if (0 < (long)pppplVar20) {
      memcpy(pvVar22,pvVar19,(size_t)pppplVar20);
      pcVar10 = (char *)pppplVar20;
    }
    *(void **)(param_1 + 0xb60) = pvVar22;
    *(undefined1 **)(param_1 + 0xb68) = puVar18;
    *(undefined1 **)(param_1 + 0xb70) = (undefined1 *)((long)pvVar22 + (long)ppplVar21);
    if (pvVar19 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar19);
      puVar18 = *(undefined1 **)(param_1 + 0xb68);
    }
  }
  if (puVar18 < *(undefined1 **)(param_1 + 0xb70)) {
    *puVar18 = 4;
    *(long *)(param_1 + 0xb68) = *(long *)(param_1 + 0xb68) + 1;
  }
  else {
    pvVar19 = *(void **)(param_1 + 0xb60);
    pppplVar20 = (long ****)(puVar18 + -(long)pvVar19);
    ppplVar21 = (long ***)((long)pppplVar20 + 1);
    if ((long)ppplVar21 < 0) {
LAB_7101e2c41c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar23 = (long)*(undefined1 **)(param_1 + 0xb70) - (long)pvVar19;
    if (uVar23 < 0x3fffffffffffffff) {
      ppplVar8 = (long ***)(uVar23 * 2);
      if (ppplVar21 <= ppplVar8) {
        ppplVar21 = ppplVar8;
      }
      if (ppplVar21 != (long ***)0x0) goto LAB_7101e2bb1c;
LAB_7101e2bb70:
      pvVar22 = (void *)0x0;
    }
    else {
      ppplVar21 = (long ***)0x7fffffffffffffff;
LAB_7101e2bb1c:
      pvVar22 = (void *)FUN_710392e290(0x10,ppplVar21,(long ****)pcVar10,param_4,param_5,param_6,
                                       param_7,param_8);
      if (pvVar22 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_110 = (byte ***)((ulong)local_110 & 0xffffffff00000000);
          pcVar10 = (char *)&local_e0;
          local_e0 = (undefined **)ppplVar21;
          uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_110);
          if (((uVar23 & 1) != 0) &&
             (pvVar22 = (void *)FUN_710392e290(0x10,ppplVar21,(long ****)pcVar10,param_4,param_5,
                                               param_6,param_7,param_8), pvVar22 != (void *)0x0))
          goto LAB_7101e2bb74;
        }
        goto LAB_7101e2bb70;
      }
    }
LAB_7101e2bb74:
    puVar18 = (undefined1 *)((long)pvVar22 + (long)pppplVar20);
    *puVar18 = 4;
    if (0 < (long)pppplVar20) {
      memcpy(pvVar22,pvVar19,(size_t)pppplVar20);
      pcVar10 = (char *)pppplVar20;
    }
    *(void **)(param_1 + 0xb60) = pvVar22;
    *(undefined1 **)(param_1 + 0xb68) = puVar18 + 1;
    *(undefined1 **)(param_1 + 0xb70) = (undefined1 *)((long)pvVar22 + (long)ppplVar21);
    if (pvVar19 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar19);
    }
  }
  FUN_7103776640(&local_88,param_1 + 0xba0,(byte ****)"scr_sort_00",pcVar10,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_txt_key",pcVar10,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_110,(long)&local_88,(long ****)"set_txt_list",pcVar10,param_4,param_5,
                 param_6,param_7,param_8);
  if ((ulong)(*(long *)(param_1 + 0xb68) - *(long *)(param_1 + 0xb60)) <=
      (ulong)*(uint *)(param_1 + 0xb7c)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar3 = 0x811c9dc5;
  uVar17 = uVar3;
  switch(*(undefined1 *)(*(long *)(param_1 + 0xb60) + (ulong)*(uint *)(param_1 + 0xb7c))) {
  case 0:
    local_d8 = 0x726970735f756e6d;
    local_d0 = 0x74726f735f737469;
    local_c8 = 0x38315f;
    uVar15 = 0x6d;
    pbVar12 = (byte *)((long)&local_d8 + 1);
    do {
      uVar17 = uVar17 * 0x89 ^ uVar15;
      uVar15 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (uVar15 != 0);
    break;
  case 1:
    local_d8 = 0x726970735f756e6d;
    local_d0 = 0x74726f735f737469;
    local_c8 = 0x33305f;
    uVar15 = 0x6d;
    pbVar12 = (byte *)((long)&local_d8 + 1);
    do {
      uVar17 = uVar17 * 0x89 ^ uVar15;
      uVar15 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (uVar15 != 0);
    break;
  case 2:
    local_d8 = 0x726970735f756e6d;
    local_d0 = 0x74726f735f737469;
    local_c8 = 0x34305f;
    uVar15 = 0x6d;
    pbVar12 = (byte *)((long)&local_d8 + 1);
    do {
      uVar17 = uVar17 * 0x89 ^ uVar15;
      uVar15 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (uVar15 != 0);
    break;
  case 3:
    local_d8 = 0x726970735f756e6d;
    local_d0 = 0x74726f735f737469;
    local_c8 = 0x32305f;
    uVar15 = 0x6d;
    pbVar12 = (byte *)((long)&local_d8 + 1);
    do {
      uVar17 = uVar17 * 0x89 ^ uVar15;
      uVar15 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (uVar15 != 0);
    break;
  case 4:
    local_d8 = 0x726970735f756e6d;
    local_d0 = 0x74726f735f737469;
    local_c8 = 0x32325f;
    uVar15 = 0x6d;
    pbVar12 = (byte *)((long)&local_d8 + 1);
    do {
      uVar17 = uVar17 * 0x89 ^ uVar15;
      uVar15 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (uVar15 != 0);
    break;
  default:
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_e0 = (undefined **)0x0;
    goto LAB_7101e2be3c;
  }
  local_d0 = 0x74726f735f737469;
  local_d8 = 0x726970735f756e6d;
  local_e0 = (undefined **)CONCAT44(0x13,uVar17);
LAB_7101e2be3c:
  FUN_710377a120((long)&local_110,(char *)&local_d8,pcVar10,param_4,param_5,param_6,param_7,param_8)
  ;
  uVar23 = local_108;
  local_110 = (byte ***)&PTR_FUN_710523d9a8;
  local_108 = 0;
  if (uVar23 != 0) {
    FUN_710392eb40(uVar23);
  }
  FUN_710377a120((long)&local_98,"mnu_spirits_sort_guide",pcVar10,param_4,param_5,param_6,param_7,
                 param_8);
  local_100 = 0;
  uStack_f8 = 0;
  FUN_7103776290(&local_f0,extraout_x1,(long ****)pcVar10,param_4,param_5,param_6,param_7,param_8);
  puVar6 = local_80;
  local_108 = local_108 & 0xffffffff00000000;
  local_e8[1] = 0;
  local_110 = (byte ***)0x100000004;
  *local_e8 = *local_80;
  local_e8[1] = local_80[1];
  if (local_e8 != local_80) {
    *(undefined8 *)local_e8[3] = *(undefined8 *)local_80[3];
    *(undefined8 *)(local_e8[3] + 8) = *(undefined8 *)(local_80[3] + 8);
    *(undefined8 *)(local_e8[3] + 0x10) = *(undefined8 *)(local_80[3] + 0x10);
    *(undefined8 *)(local_e8[3] + 0x18) = *(undefined8 *)(local_80[3] + 0x18);
    local_80 = local_e8;
  }
  local_100 = _ConstantZero;
  uStack_f8 = uRam0000007107459008;
  if (*(long *)local_80[3] != 0) {
    local_100 = *(undefined8 *)(*(long *)local_80[3] + 0x30);
    uStack_f8 = 0;
  }
  local_120 = (uint *)0x0;
  puStack_118 = (uint *)0x0;
  local_128 = (uint *)0x0;
  lVar13 = *(long *)(param_1 + 0xb60);
  if (*(long *)(param_1 + 0xb68) != lVar13) {
    uVar23 = 0;
    pbVar12 = (byte *)((long)&local_d8 + 1);
    do {
      uVar17 = uVar3;
      switch(*(undefined1 *)(lVar13 + uVar23)) {
      case 0:
        local_d8 = 0x726970735f756e6d;
        uVar15 = 0x6d;
        local_d0 = 0x74726f735f737469;
        local_c8 = 0x38315f;
        pbVar14 = pbVar12;
        do {
          uVar17 = uVar17 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar15 != 0);
        break;
      case 1:
        local_d8 = 0x726970735f756e6d;
        uVar15 = 0x6d;
        local_d0 = 0x74726f735f737469;
        local_c8 = 0x33305f;
        pbVar14 = pbVar12;
        do {
          uVar17 = uVar17 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar15 != 0);
        break;
      case 2:
        local_d8 = 0x726970735f756e6d;
        uVar15 = 0x6d;
        local_d0 = 0x74726f735f737469;
        local_c8 = 0x34305f;
        pbVar14 = pbVar12;
        do {
          uVar17 = uVar17 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar15 != 0);
        break;
      case 3:
        local_d8 = 0x726970735f756e6d;
        uVar15 = 0x6d;
        local_d0 = 0x74726f735f737469;
        local_c8 = 0x32305f;
        pbVar14 = pbVar12;
        do {
          uVar17 = uVar17 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar15 != 0);
        break;
      case 4:
        local_d8 = 0x726970735f756e6d;
        uVar15 = 0x6d;
        local_d0 = 0x74726f735f737469;
        local_c8 = 0x32325f;
        pbVar14 = pbVar12;
        do {
          uVar17 = uVar17 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar15 != 0);
        break;
      default:
        local_d8 = local_d8 & 0xffffffffffffff00;
        local_e0 = (undefined **)0x0;
        goto LAB_7101e2c0e4;
      }
      local_d0 = 0x74726f735f737469;
      local_d8 = 0x726970735f756e6d;
      local_e0 = (undefined **)CONCAT44(0x13,uVar17);
LAB_7101e2c0e4:
      if (local_120 < puStack_118) {
        *local_120 = 0;
        uVar9 = 0;
        do {
          uVar16 = uVar9;
          if (*(char *)((long)&local_d8 + uVar9) == '\0') break;
          *(char *)((long)local_120 + uVar9 + 8) = *(char *)((long)&local_d8 + uVar9);
          cVar2 = *(char *)((long)&local_d8 + uVar9 + 1);
          if (cVar2 == '\0') {
            uVar16 = uVar9 + 1;
            break;
          }
          *(char *)((long)local_120 + uVar9 + 9) = cVar2;
          cVar2 = *(char *)((long)&local_d8 + uVar9 + 2);
          if (cVar2 == '\0') {
            uVar16 = uVar9 + 2;
            break;
          }
          uVar16 = uVar9 + 3;
          *(char *)((long)local_120 + uVar9 + 10) = cVar2;
          uVar9 = uVar16;
        } while ((uint)uVar16 < 0x3f);
        *(undefined1 *)((long)local_120 + (uVar16 & 0xffffffff) + 8) = 0;
        local_120[1] = (uint)uVar16;
        uVar15 = (uint)(byte)local_120[2];
        uVar17 = uVar3;
        if ((byte)local_120[2] != 0) {
          pbVar14 = (byte *)((long)local_120 + 9);
          do {
            uVar17 = uVar17 * 0x89 ^ uVar15;
            uVar15 = (uint)*pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (uVar15 != 0);
        }
        *local_120 = uVar17;
        local_120 = local_120 + 0x12;
      }
      else {
        FUN_71019c1c50((ulong *)&local_128,(long)&local_e0,(long ****)pcVar10,param_4,param_5,
                       param_6,param_7,param_8);
      }
      lVar13 = *(long *)(param_1 + 0xb60);
      uVar23 = (ulong)((int)uVar23 + 1);
    } while (uVar23 < (ulong)(*(long *)(param_1 + 0xb68) - lVar13));
  }
  FUN_7103776640(&local_e0,param_1 + 0xba0,(byte ****)"blinder",pcVar10,param_4,param_5,param_6,
                 param_7,param_8);
  puVar4 = local_120;
  puVar1 = local_128;
  local_140 = (long ***)0x0;
  local_138 = (long ***)0x0;
  local_130 = (long ***)0x0;
  ppplVar21 = (long ***)((long)local_120 - (long)local_128);
  if (ppplVar21 == (long ***)0x0) goto LAB_7101e2c324;
  if (0x38e38e38e38e38e < (ulong)(((long)ppplVar21 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  ppplVar8 = (long ***)
             FUN_710392e290(0x10,ppplVar21,(long ****)pcVar10,param_4,param_5,param_6,param_7,
                            param_8);
  if (ppplVar8 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      pppplVar20 = &local_78;
      local_78 = ppplVar21;
      uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar23 & 1) != 0) &&
         (ppplVar8 = (long ***)
                     FUN_710392e290(0x10,ppplVar21,pppplVar20,param_4,param_5,param_6,param_7,
                                    param_8), ppplVar8 != (long ***)0x0)) goto LAB_7101e2c264;
    }
    ppplVar8 = (long ***)0x0;
  }
LAB_7101e2c264:
  local_130 = ppplVar8 + ((long)ppplVar21 >> 3);
  local_138 = ppplVar8;
  for (; local_140 = ppplVar8, puVar1 != puVar4; puVar1 = puVar1 + 0x12) {
    *(uint *)local_138 = 0;
    uVar23 = 0;
    do {
      cVar2 = *(char *)((long)puVar1 + uVar23 + 8);
      uVar9 = uVar23;
      if (cVar2 == '\0') break;
      *(char *)((long)local_138 + uVar23 + 8) = cVar2;
      cVar2 = *(char *)((long)puVar1 + uVar23 + 9);
      if (cVar2 == '\0') {
        uVar9 = uVar23 + 1;
        break;
      }
      *(char *)((long)local_138 + uVar23 + 9) = cVar2;
      cVar2 = *(char *)((long)puVar1 + uVar23 + 10);
      if (cVar2 == '\0') {
        uVar9 = uVar23 + 2;
        break;
      }
      uVar9 = uVar23 + 3;
      *(char *)((long)local_138 + uVar23 + 10) = cVar2;
      uVar23 = uVar9;
    } while ((uint)uVar9 < 0x3f);
    *(undefined1 *)((long)local_138 + (uVar9 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_138 + 4) = (uint)uVar9;
    uVar15 = (uint)*(byte *)(local_138 + 1);
    uVar17 = uVar3;
    if (*(byte *)(local_138 + 1) != 0) {
      pbVar12 = (byte *)((long)local_138 + 9);
      do {
        uVar17 = uVar17 * 0x89 ^ uVar15;
        uVar15 = (uint)*pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (uVar15 != 0);
    }
    *(uint *)local_138 = uVar17;
    local_138 = local_138 + 9;
  }
LAB_7101e2c324:
  FUN_71032ccb70(param_1 + 0x4d0,(undefined8 *)(param_1 + 0x158),&local_140,&local_110,
                 (long ****)&local_e0,param_6,param_7,param_8);
  if (local_140 != (long ***)0x0) {
    local_138 = local_140;
    FUN_710392eb40((ulong)local_140);
  }
  uVar23 = local_d8;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = 0;
  if (uVar23 != 0) {
    uVar9 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar23);
  }
  if (local_128 != (uint *)0x0) {
    local_120 = local_128;
    FUN_710392eb40((ulong)local_128);
  }
  puVar5 = local_e8;
  local_f0 = &PTR_FUN_710523d988;
  local_e8 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar23 = puVar5[3];
    puVar5[2] = &PTR_FUN_710523d9a8;
    puVar5[3] = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40((ulong)puVar5);
  }
  uVar23 = local_90;
  local_98 = &PTR_FUN_710523d9a8;
  local_90 = 0;
  if (uVar23 != 0) {
    FUN_710392eb40(uVar23);
  }
  local_88 = &PTR_FUN_710523d988;
  local_80 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    uVar23 = puVar6[3];
    puVar6[2] = &PTR_FUN_710523d9a8;
    puVar6[3] = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40((ulong)puVar6);
  }
  return;
}

