// addr:      7101da5d40
// offset:    0x1da5d40
// name:      FUN_7101da5d40
// mangled:   
// signature: undefined __cdecl FUN_7101da5d40(long param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)


void FUN_7101da5d40(long param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,ulong param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined2 *puVar2;
  short sVar3;
  ushort *puVar4;
  ushort *__dest;
  ushort *__dest_00;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long *********ppppppppplVar6;
  undefined8 uVar7;
  ulong uVar8;
  long ***ppplVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long ****pppplVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  ushort *puVar18;
  char cVar19;
  long lVar20;
  ulong uVar21;
  long ***local_e0;
  ulong local_d8 [8];
  undefined **local_98;
  ulong local_90;
  byte ***local_88;
  ulong local_80;
  ushort *local_78;
  ushort *local_70;
  ushort *local_68;
  
  lVar20 = *(long *)(DAT_710532f730 + 8);
  sVar3 = *(short *)(param_1 + 0x98);
  cVar19 = '\0';
  if ((sVar3 != -1) && (sVar3 < 2000)) {
    lVar11 = *(long *)(lVar20 + 0x1d8);
    uVar14 = *(ushort *)(lVar11 + (long)(int)sVar3 * 2 + 0x60);
    uVar8 = (ulong)uVar14;
    uVar12 = (*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar14 < (uint)uVar12) {
      puVar2 = (undefined2 *)(*(long *)(lVar11 + 0x20) + uVar8 * 0x140);
      if (uVar12 < uVar8 || uVar12 - uVar8 == 0) {
        puVar2 = &DAT_7105182b08;
      }
      cVar19 = *(char *)((long)puVar2 + 0x69);
    }
    else {
      cVar19 = '\0';
    }
  }
  local_70 = (ushort *)0x0;
  local_68 = (ushort *)0x0;
  local_78 = (ushort *)0x0;
  uVar14 = *(ushort *)(param_1 + 0xa8);
  if (uVar14 != 0xffff) {
    puVar4 = (ushort *)FUN_710392e290(0x10,2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar4 == (ushort *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (byte ***)((ulong)local_88 & 0xffffffff00000000);
        local_e0 = (long ***)0x2;
        param_3 = &local_e0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar8 & 1) != 0) &&
           (puVar4 = (ushort *)
                     FUN_710392e290(0x10,2,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar4 != (ushort *)0x0)) goto LAB_7101da5e54;
      }
      puVar4 = (ushort *)0x0;
    }
LAB_7101da5e54:
    local_68 = puVar4 + 1;
    *puVar4 = uVar14;
    local_78 = puVar4;
  }
  puVar18 = local_78;
  uVar14 = *(ushort *)(param_1 + 0xaa);
  __dest = local_78;
  puVar17 = local_68;
  puVar4 = local_68;
  local_70 = local_68;
  if (uVar14 != 0xffff) {
    pppplVar13 = (long ****)((long)local_68 - (long)local_78);
    local_70 = local_68;
    if ((long)pppplVar13 < -2) goto LAB_7101da676c;
    uVar8 = (long)pppplVar13 >> 1;
    pppplVar1 = (long ****)(uVar8 + 1);
    if ((long ****)(uVar8 + 1) <= pppplVar13) {
      pppplVar1 = pppplVar13;
    }
    if (0x3ffffffffffffffe < uVar8) {
      pppplVar1 = (long ****)0x7fffffffffffffff;
    }
    if (pppplVar1 == (long ****)0x0) goto LAB_7101da5f20;
    if ((long)pppplVar1 < 0) goto LAB_7101da6774;
    ppplVar9 = (long ***)((long)pppplVar1 * 2);
    if (ppplVar9 == (long ***)0x0) {
      ppplVar9 = (long ***)0x1;
    }
    __dest = (ushort *)FUN_710392e290(0x10,ppplVar9,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (__dest == (ushort *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (byte ***)((ulong)local_88 & 0xffffffff00000000);
        param_3 = &local_e0;
        local_e0 = ppplVar9;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar12 & 1) != 0) &&
           (__dest = (ushort *)
                     FUN_710392e290(0x10,ppplVar9,param_3,param_4,param_5,param_6,param_7,param_8),
           __dest != (ushort *)0x0)) goto LAB_7101da5f24;
      }
LAB_7101da5f20:
      __dest = (ushort *)0x0;
    }
LAB_7101da5f24:
    puVar4 = __dest + (long)pppplVar1;
    puVar17 = __dest + uVar8 + 1;
    __dest[uVar8] = uVar14;
    if (0 < (long)pppplVar13) {
      memcpy(__dest,puVar18,(size_t)pppplVar13);
      param_3 = pppplVar13;
    }
    local_78 = __dest;
    local_70 = puVar17;
    local_68 = puVar4;
    if (puVar18 != (ushort *)0x0) {
      FUN_710392eb40((ulong)puVar18);
    }
  }
  uVar14 = *(ushort *)(param_1 + 0xac);
  puVar18 = puVar17;
  __dest_00 = __dest;
  if (uVar14 == 0xffff) goto joined_r0x007101da6164;
  if (puVar17 != puVar4) {
    puVar18 = puVar17 + 1;
    *puVar17 = uVar14;
    local_70 = puVar18;
    goto joined_r0x007101da6164;
  }
  uVar8 = (long)puVar4 - (long)__dest;
  if ((long)uVar8 < -2) {
LAB_7101da676c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar21 = (long)uVar8 >> 1;
  uVar12 = uVar21 + 1;
  if (uVar21 + 1 <= uVar8) {
    uVar12 = uVar8;
  }
  if (0x3ffffffffffffffe < uVar21) {
    uVar12 = 0x7fffffffffffffff;
  }
  if (uVar12 == 0) goto LAB_7101da6110;
  if ((long)uVar12 < 0) {
LAB_7101da6774:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  ppplVar9 = (long ***)(uVar12 * 2);
  if (ppplVar9 == (long ***)0x0) {
    ppplVar9 = (long ***)0x1;
  }
  __dest_00 = (ushort *)
              FUN_710392e290(0x10,ppplVar9,param_3,param_4,param_5,param_6,param_7,param_8);
  if (__dest_00 == (ushort *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (byte ***)((ulong)local_88 & 0xffffffff00000000);
      pppplVar13 = &local_e0;
      local_e0 = ppplVar9;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar5 & 1) != 0) &&
         (__dest_00 = (ushort *)
                      FUN_710392e290(0x10,ppplVar9,pppplVar13,param_4,param_5,param_6,param_7,
                                     param_8), __dest_00 != (ushort *)0x0)) goto LAB_7101da6114;
    }
LAB_7101da6110:
    __dest_00 = (ushort *)0x0;
  }
LAB_7101da6114:
  puVar18 = __dest_00 + uVar21 + 1;
  __dest_00[uVar21] = uVar14;
  if (0 < (long)uVar8) {
    memcpy(__dest_00,__dest,uVar8);
  }
  local_78 = __dest_00;
  local_70 = puVar18;
  local_68 = __dest_00 + uVar12;
  if (__dest != (ushort *)0x0) {
    FUN_710392eb40((ulong)__dest);
  }
joined_r0x007101da6164:
  if ((param_2 & 1) == 0) {
    lVar20 = param_1 + 0x40;
    uVar7 = 0;
    FUN_7103776640(&local_88,lVar20,(byte ****)"set_parts_slot_%02d",0,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103778300(0x3f800000,local_80,0x7104348100);
    FUN_71025b0f50((long)&local_88,extraout_x1_00,uVar7,param_4,param_5,param_6,param_7,param_8);
    uVar8 = local_80;
    local_88 = (byte ***)&PTR_FUN_710523d988;
    local_80 = 0;
    if (uVar8 != 0) {
      uVar12 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar8);
    }
    uVar7 = 1;
    FUN_7103776640(&local_88,lVar20,(byte ****)"set_parts_slot_%02d",1,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103778300(0x3f800000,local_80,0x7104348100);
    FUN_71025b0f50((long)&local_88,extraout_x1_01,uVar7,param_4,param_5,param_6,param_7,param_8);
    uVar8 = local_80;
    local_88 = (byte ***)&PTR_FUN_710523d988;
    local_80 = 0;
    if (uVar8 != 0) {
      uVar12 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar8);
    }
    ppppppppplVar6 = (long *********)0x2;
    FUN_7103776640(&local_88,lVar20,(byte ****)"set_parts_slot_%02d",2,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103778300(0x3f800000,local_80,0x7104348100);
    FUN_71025b0f50((long)&local_88,extraout_x1_02,ppppppppplVar6,param_4,param_5,param_6,param_7,
                   param_8);
    uVar8 = local_80;
    local_88 = (byte ***)&PTR_FUN_710523d988;
    local_80 = 0;
    if (uVar8 != 0) {
      uVar12 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar8);
    }
    uVar15 = 0;
  }
  else {
    lVar11 = param_1 + 0x40;
    if (puVar18 == __dest_00) {
      uVar14 = 0xffff;
    }
    else {
      uVar14 = *__dest_00;
    }
    ppppppppplVar6 = (long *********)0x0;
    FUN_7103776640(&local_88,lVar11,(byte ****)"set_parts_slot_%02d",0,param_4,param_5,param_6,
                   param_7,param_8);
    if (cVar19 < '\x01') {
      FUN_7103778300(0x3f800000,local_80,0x7104348100);
      FUN_71025b0f50((long)&local_88,extraout_x1_03,ppppppppplVar6,param_4,param_5,param_6,param_7,
                     param_8);
      uVar15 = 0;
    }
    else {
      FUN_7103778300(0x3f800000,local_80,0x710438b28f);
      if (uVar14 == 0xffff) {
        FUN_71025b0f50((long)&local_88,extraout_x1,ppppppppplVar6,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103776910(&local_e0,(long)&local_88,(long ****)"set_rep_spirit",ppppppppplVar6,param_4,
                       param_5,param_6,param_7,param_8);
        uVar8 = local_d8[0];
        FUN_71037790a0(local_d8[0],1,ppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_rep_aura_00",ppppppppplVar6,param_4
                       ,param_5,param_6,param_7,param_8);
        uVar12 = local_90;
        FUN_71037790a0(local_90,1,ppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
        local_98 = &PTR_FUN_710523d9a8;
        local_90 = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        local_e0 = (long ***)&PTR_FUN_710523d9a8;
        local_d8[0] = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        uVar15 = 1;
      }
      else {
        param_4 = &local_88;
        param_5 = (long ****)0x3;
        param_6 = 2;
        ppppppppplVar6 = (long *********)0x0;
        FUN_7101da7f90(param_1,uVar14,0,(undefined ***)param_4,(long ****)0x3,2,param_7,param_8);
        lVar10 = *(long *)(lVar20 + 0x1d8);
        uVar12 = (ulong)*(ushort *)(lVar10 + (long)(short)uVar14 * 2 + 0x60);
        uVar8 = (*(long *)(lVar10 + 0x28) - *(long *)(lVar10 + 0x20) >> 6) * -0x3333333333333333;
        puVar2 = (undefined2 *)(*(long *)(lVar10 + 0x20) + uVar12 * 0x140);
        if (uVar8 < uVar12 || uVar8 - uVar12 == 0) {
          puVar2 = &DAT_7105182b08;
        }
        uVar8 = FUN_71032a0fd0(*(long *)(lVar20 + 0x218),puVar2[0x35]);
        uVar15 = (uint)uVar8;
      }
      FUN_71003a4ca0((uint *)&local_e0,"slot_%02d",(ulong)(uVar15 & 0xff),ppppppppplVar6,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_80,(long)local_d8);
      cVar19 = cVar19 - (char)uVar15;
      uVar15 = 1;
    }
    uVar8 = local_80;
    local_88 = (byte ***)&PTR_FUN_710523d988;
    local_80 = 0;
    if (uVar8 != 0) {
      uVar12 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar8);
    }
    if ((ulong)((long)local_70 - (long)local_78 >> 1) < 2) {
      uVar14 = 0xffff;
    }
    else {
      uVar14 = local_78[1];
    }
    ppppppppplVar6 = (long *********)0x1;
    FUN_7103776640(&local_88,lVar11,(byte ****)"set_parts_slot_%02d",1,param_4,param_5,param_6,
                   param_7,param_8);
    if (cVar19 < '\x01') {
      FUN_7103778300(0x3f800000,local_80,0x7104348100);
      FUN_71025b0f50((long)&local_88,extraout_x1_05,ppppppppplVar6,param_4,param_5,param_6,param_7,
                     param_8);
    }
    else {
      uVar15 = uVar15 + 1;
      FUN_7103778300(0x3f800000,local_80,0x710438b28f);
      if (uVar14 == 0xffff) {
        FUN_71025b0f50((long)&local_88,extraout_x1_04,ppppppppplVar6,param_4,param_5,param_6,param_7
                       ,param_8);
        FUN_7103776910(&local_e0,(long)&local_88,(long ****)"set_rep_spirit",ppppppppplVar6,param_4,
                       param_5,param_6,param_7,param_8);
        uVar8 = local_d8[0];
        FUN_71037790a0(local_d8[0],1,ppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_rep_aura_00",ppppppppplVar6,param_4
                       ,param_5,param_6,param_7,param_8);
        uVar12 = local_90;
        FUN_71037790a0(local_90,1,ppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
        local_98 = &PTR_FUN_710523d9a8;
        local_90 = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        local_e0 = (long ***)&PTR_FUN_710523d9a8;
        local_d8[0] = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        uVar16 = 1;
      }
      else {
        param_4 = &local_88;
        param_5 = (long ****)0x3;
        param_6 = 2;
        ppppppppplVar6 = (long *********)0x0;
        FUN_7101da7f90(param_1,uVar14,0,(undefined ***)param_4,(long ****)0x3,2,param_7,param_8);
        lVar10 = *(long *)(lVar20 + 0x1d8);
        uVar12 = (ulong)*(ushort *)(lVar10 + (long)(short)uVar14 * 2 + 0x60);
        uVar8 = (*(long *)(lVar10 + 0x28) - *(long *)(lVar10 + 0x20) >> 6) * -0x3333333333333333;
        puVar2 = (undefined2 *)(*(long *)(lVar10 + 0x20) + uVar12 * 0x140);
        if (uVar8 < uVar12 || uVar8 - uVar12 == 0) {
          puVar2 = &DAT_7105182b08;
        }
        uVar8 = FUN_71032a0fd0(*(long *)(lVar20 + 0x218),puVar2[0x35]);
        uVar16 = (uint)uVar8;
      }
      FUN_71003a4ca0((uint *)&local_e0,"slot_%02d",(ulong)(uVar16 & 0xff),ppppppppplVar6,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_80,(long)local_d8);
      cVar19 = cVar19 - (char)uVar16;
    }
    uVar8 = local_80;
    local_88 = (byte ***)&PTR_FUN_710523d988;
    local_80 = 0;
    if (uVar8 != 0) {
      uVar12 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar8);
    }
    if ((ulong)((long)local_70 - (long)local_78 >> 1) < 3) {
      uVar14 = 0xffff;
    }
    else {
      uVar14 = local_78[2];
    }
    ppppppppplVar6 = (long *********)0x2;
    FUN_7103776640(&local_88,lVar11,(byte ****)"set_parts_slot_%02d",2,param_4,param_5,param_6,
                   param_7,param_8);
    if (cVar19 < '\x01') {
      FUN_7103778300(0x3f800000,local_80,0x7104348100);
      FUN_71025b0f50((long)&local_88,extraout_x1_07,ppppppppplVar6,param_4,param_5,param_6,param_7,
                     param_8);
    }
    else {
      uVar15 = uVar15 + 1;
      FUN_7103778300(0x3f800000,local_80,0x710438b28f);
      if (uVar14 == 0xffff) {
        FUN_71025b0f50((long)&local_88,extraout_x1_06,ppppppppplVar6,param_4,param_5,param_6,param_7
                       ,param_8);
        FUN_7103776910(&local_e0,(long)&local_88,(long ****)"set_rep_spirit",ppppppppplVar6,param_4,
                       param_5,param_6,param_7,param_8);
        uVar8 = local_d8[0];
        FUN_71037790a0(local_d8[0],1,ppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_rep_aura_00",ppppppppplVar6,param_4
                       ,param_5,param_6,param_7,param_8);
        uVar12 = local_90;
        FUN_71037790a0(local_90,1,ppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
        local_98 = &PTR_FUN_710523d9a8;
        local_90 = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        local_e0 = (long ***)&PTR_FUN_710523d9a8;
        local_d8[0] = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        uVar8 = 1;
      }
      else {
        param_4 = &local_88;
        param_5 = (long ****)0x3;
        param_6 = 2;
        ppppppppplVar6 = (long *********)0x0;
        FUN_7101da7f90(param_1,uVar14,0,(undefined ***)param_4,(long ****)0x3,2,param_7,param_8);
        lVar11 = *(long *)(lVar20 + 0x1d8);
        uVar12 = (ulong)*(ushort *)(lVar11 + (long)(short)uVar14 * 2 + 0x60);
        uVar8 = (*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20) >> 6) * -0x3333333333333333;
        puVar2 = (undefined2 *)(*(long *)(lVar11 + 0x20) + uVar12 * 0x140);
        if (uVar8 < uVar12 || uVar8 - uVar12 == 0) {
          puVar2 = &DAT_7105182b08;
        }
        uVar8 = FUN_71032a0fd0(*(long *)(lVar20 + 0x218),puVar2[0x35]);
        uVar8 = (ulong)((uint)uVar8 & 0xff);
      }
      FUN_71003a4ca0((uint *)&local_e0,"slot_%02d",uVar8,ppppppppplVar6,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103778300(0x3f800000,local_80,(long)local_d8);
    }
    uVar8 = local_80;
    local_88 = (byte ***)&PTR_FUN_710523d988;
    local_80 = 0;
    if (uVar8 != 0) {
      uVar12 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar8);
    }
  }
  FUN_71003a4ca0((uint *)&local_e0,"view_spt_my_edit_%02d",(ulong)uVar15,ppppppppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x48),(long)local_d8);
  if (local_78 != (ushort *)0x0) {
    local_70 = local_78;
    FUN_710392eb40((ulong)local_78);
  }
  return;
}

