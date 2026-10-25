// addr:      71019d08b0
// offset:    0x19d08b0
// name:      FUN_71019d08b0
// mangled:   
// signature: undefined __cdecl FUN_71019d08b0(long param_1, int param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019d08b0(long param_1,int param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  undefined **ppuVar13;
  long ****pppplVar14;
  long *********ppppppppplVar15;
  byte bVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined **local_220;
  ulong local_218;
  undefined **local_210;
  long *local_208;
  long ********local_200;
  long *local_1f8;
  char local_1ec;
  short local_1dc;
  undefined8 local_f0;
  ushort local_e8 [12];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 *local_60;
  char local_58;
  long ***local_50;
  undefined4 local_44;
  
  if (param_2 == 0) {
    lVar17 = param_3;
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71042f7b4f);
    FUN_7103776910(&local_200,param_3,(long ****)"txt_00",lVar17,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710377a120((long)&local_200,"mnu_mmiif_btn_create",lVar17,param_4,param_5,param_6,param_7,
                   param_8);
    plVar8 = local_1f8;
    local_200 = (long ********)&PTR_FUN_710523d9a8;
    local_1f8 = (long *)0x0;
    goto joined_r0x0071019d0a94;
  }
  if ((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 2) <= (ulong)(long)param_2)
  {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar4 = *(uint *)(*(long *)(param_1 + 0x178) + (long)param_2 * 4);
  local_d0 = 0x13ffff0000000000;
  local_c8 = 0x5affff0000000000;
  local_200 = (long ********)((ulong)local_200 & 0xffffffff00000000);
  local_f0 = 0;
  local_e8[0] = 0;
  local_bc = 0;
  local_c0 = 0;
  local_60 = &DAT_c1ffff0000000000;
  FUN_71017bd310(&local_200);
  ppppppppplVar15 = &local_200;
  FUN_71017c81d0(*(undefined8 **)(*DAT_7105314510 + 0x88),uVar4,(undefined4 *)ppppppppplVar15);
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x7104307e3c);
  FUN_7103776910(&local_210,param_3,(long ****)"set_rep_mfshot",ppppppppplVar15,param_4,param_5,
                 param_6,param_7,param_8);
  lVar17 = *(long *)(param_1 + 0x1a0);
  if (lVar17 == 0) {
LAB_71019d09b8:
    lVar17 = *local_208;
    if (lVar17 != 0) {
      bVar16 = *(byte *)(lVar17 + 0x58) & 0xfe;
LAB_71019d09cc:
      *(byte *)(lVar17 + 0x58) = bVar16;
    }
  }
  else {
    lVar10 = param_1 + 0x1a0;
    do {
      bVar3 = *(uint *)(lVar17 + 0x20) < uVar4;
      if (!bVar3) {
        lVar10 = lVar17;
      }
      lVar17 = *(long *)(lVar17 + (ulong)bVar3 * 8);
    } while (lVar17 != 0);
    if ((lVar10 == param_1 + 0x1a0) || (uVar4 < *(uint *)(lVar10 + 0x20))) goto LAB_71019d09b8;
    plVar8 = local_208;
    if (local_208[1] == 0) {
LAB_71019d0df4:
      lVar17 = *plVar8;
      if (lVar17 == 0) goto LAB_71019d09d0;
LAB_71019d0dfc:
      bVar16 = *(byte *)(lVar17 + 0x58) | 1;
      goto LAB_71019d09cc;
    }
    lVar17 = **(long **)(lVar10 + 0x30);
    if (lVar17 == 0) {
LAB_71019d0de8:
      plVar8 = local_208;
      FUN_71037790a0((long)local_208,1,ppppppppplVar15,param_4,param_5,param_6,param_7,param_8);
      goto LAB_71019d0df4;
    }
    plVar8 = (long *)(*(long **)(lVar10 + 0x30))[1];
    if (plVar8 == (long *)0x0) {
      plVar11 = (long *)(*(long *)(lVar17 + 8) + 0x188);
    }
    else {
      plVar1 = plVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = (long *)(*(long *)(lVar17 + 8) + 0x188);
      do {
        lVar17 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar9 = (**(code **)(*plVar11 + 0x30))(plVar11);
    plVar8 = local_208;
    if ((uVar9 & 1) == 0) goto LAB_71019d0de8;
    ppppppppplVar15 = (long *********)0x0;
    FUN_710379e9c0((long *)local_208[1],plVar11,0);
    lVar17 = *plVar8;
    if (lVar17 != 0) goto LAB_71019d0dfc;
  }
LAB_71019d09d0:
  FUN_7103776910(&local_220,param_3,(long ****)"set_txt_00",ppppppppplVar15,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(long **)(local_218 + 0x10) != (long *)0x0) {
    param_4 = (byte ****)0x1;
    FUN_71037a2270(*(long **)(local_218 + 0x10),local_e8,0xffffffff,1);
  }
  ppuVar13 = (undefined **)(ulong)(byte)local_c0;
  FUN_7103778430(param_3,"color_%02d",ppuVar13,param_4,param_5,param_6,param_7,param_8);
  uVar6 = FUN_71032626e0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(ulong)local_60);
  if ((int)uVar6 == 0x49) {
    lVar17 = *(long *)(param_3 + 8);
    pcVar12 = "attacktype_01";
  }
  else if ((int)uVar6 == 0x4a) {
    lVar17 = *(long *)(param_3 + 8);
    pcVar12 = "attacktype_02";
  }
  else {
    lVar17 = *(long *)(param_3 + 8);
    pcVar12 = "attacktype_00";
  }
  FUN_7103778300(0x3f800000,lVar17,(long)pcVar12);
  if (local_58 == '\0') {
    pcVar12 = "favorite_off";
  }
  else {
    pcVar12 = "favorite_on";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar12);
  if (local_1ec == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71042a28f8);
    lVar17 = *(long *)(param_3 + 8);
    pcVar12 = "edit_enable";
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x7104432972);
    lVar17 = *(long *)(param_3 + 8);
    if ((local_1ec == '\0') || (local_1dc != 0)) {
      pcVar12 = "edit_enable";
    }
    else {
      pcVar12 = "edit_disable";
    }
  }
  FUN_7103778300(0x3f800000,lVar17,(long)pcVar12);
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    ppuVar13 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((char)DAT_7105307d3c != '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      ppuVar13 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    piVar7 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
    puVar18 = *(undefined1 **)(piVar7 + 2);
    lVar17 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    uVar4 = FUN_71032632a0(lVar17,(ulong)puVar18);
    if ((uVar4 & 1) != 0) {
      puVar18 = FUN_71032631a0(lVar17,0x11b1ccb807);
    }
    plVar8 = (long *)FUN_710392e290(0x10,8,(long ****)ppuVar13,param_4,param_5,param_6,param_7,
                                    param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_50 = (long ***)&DAT_00000008;
        pppplVar14 = &local_50;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar9 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar14,param_4,param_5,param_6,param_7,
                                            param_8), plVar8 != (long *)0x0)) goto LAB_71019d0c2c;
      }
      plVar8 = (long *)0x0;
    }
LAB_71019d0c2c:
    *plVar8 = 0;
    lVar17 = *(long *)(*(long *)(param_3 + 8) + 8);
    if (lVar17 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if (*(long *)(lVar17 + 0x60) != 0) {
        lVar10 = FUN_7103796f20(*(long *)(lVar17 + 0x60),*(long *)(lVar17 + 0x18) + 0xb0);
      }
    }
    *plVar8 = lVar10;
    if ((((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)puVar18 & 0xffffffffff) != 0)) &&
        (((ulong)local_60 & 0xff00000000000000) == 0xc100000000000000)) &&
       (((ulong)local_60 & 0xffffffffff) != 0)) {
      bVar3 = (((ulong)local_60 ^ (ulong)puVar18) & 0xffffffffff) == 0;
      plVar11 = (long *)*plVar8;
    }
    else {
      bVar3 = (((ulong)local_60 & 0xffffffffff) != 0 &&
              ((ulong)local_60 & 0xff00000000000000) == 0xc100000000000000) ==
              (((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000 &&
              ((ulong)puVar18 & 0xffffffffff) != 0);
      plVar11 = (long *)*plVar8;
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x388))(plVar11,bVar3 ^ 1,0);
    }
    FUN_710392eb40((ulong)plVar8);
  }
  uVar9 = local_218;
  local_220 = &PTR_FUN_710523d9a8;
  local_218 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  plVar8 = local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = (long *)0x0;
joined_r0x0071019d0a94:
  if (plVar8 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar8);
  }
  return;
}

