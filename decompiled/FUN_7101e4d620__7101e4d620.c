// addr:      7101e4d620
// offset:    0x1e4d620
// name:      FUN_7101e4d620
// mangled:   
// signature: undefined __cdecl FUN_7101e4d620(long param_1, ushort param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e4d620(long param_1,ushort param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  ushort uVar4;
  long *plVar5;
  bool bVar6;
  long *plVar7;
  char *pcVar8;
  long *********ppppppppplVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  char cVar19;
  char cVar20;
  long lVar21;
  long *local_108;
  char acStack_100 [64];
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
  long *local_a8 [9];
  
  if (param_2 == 0xffff) {
    return;
  }
  lVar21 = *(long *)(DAT_710532f730 + 8);
  lVar12 = *(long *)(lVar21 + 0x1d8);
  uVar15 = (ulong)*(ushort *)(lVar12 + ((long)((ulong)param_2 << 0x30) >> 0x2f) + 0x60);
  uVar13 = (*(long *)(lVar12 + 0x28) - *(long *)(lVar12 + 0x20) >> 6) * -0x3333333333333333;
  puVar1 = (undefined2 *)(*(long *)(lVar12 + 0x20) + uVar15 * 0x140);
  if (uVar13 < uVar15 || uVar13 - uVar15 == 0) {
    puVar1 = &DAT_7105182b08;
  }
  ppppppppplVar9 = *(long **********)(puVar1 + 4);
  if (((ulong)param_3 & 0xffffffffff) != 0) {
    ppppppppplVar9 = param_3;
  }
  ppppbVar10 = param_4;
  pppplVar11 = param_5;
  if (((ulong)ppppppppplVar9 & 0xffffffffff) == 0) goto LAB_7101e4dbdc;
  FUN_7102499b60((long *)&local_108,(ulong)ppppppppplVar9,(long ****)param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
  if (local_108 == (long *)0x0) {
    if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
    }
    lVar12 = *(long *)(*(long *)(param_1 + 0x60) + 8);
    if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
    }
  }
  else {
    if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
    }
    lVar16 = *(long *)(*(long *)(param_1 + 0x60) + 8);
    lVar12 = param_1 + 0x68;
    if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
    }
    if ((char)local_108[1] != '\0') {
      if (*(char *)((long)local_108 + 0xec) == '\0') {
        lVar16 = local_108[0xe];
        lVar18 = local_108[0xf];
        if (lVar18 == lVar16) goto LAB_7101e4d880;
      }
      else {
        lVar16 = local_108[0xe];
        lVar18 = local_108[0xf];
      }
      uVar13 = lVar18 - lVar16;
      if (0 < (int)(uVar13 >> 3)) {
        uVar15 = 0;
        do {
          if (*(char *)(*(long *)(lVar16 + uVar15 * 8) + 0x10) == '\x01') {
            if (-1 < (int)uVar15) {
              if ((ulong)((long)uVar13 >> 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              uVar13 = *(ulong *)(*(long *)(lVar16 + uVar15 * 8) + 0x18);
              FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x70),0x710425fa89);
              ppppppppplVar9 = (long *********)0x2;
              local_b0 = (undefined **)
                         FUN_7103238a70(uVar13,(ulong)*(byte *)(*(long *)(lVar16 + uVar15 * 8) +
                                                               0x20),2);
              if (((ulong)local_b0 & 0xffffffffff) != 0) {
                lVar18 = *(long *)(param_1 + 0x20);
                ppppppppplVar9 = (long *********)(long)*(int *)(lVar18 + 0x70);
                ppppbVar10 = (byte ****)(ulong)*(uint *)(lVar18 + 0x68);
                FUN_710323c4e0(lVar18,(ulong *)&local_b0,ppppppppplVar9,ppppbVar10,pppplVar11,
                               param_6,param_7,param_8);
              }
              FUN_7103776910(&local_b0,lVar12,(long ****)"set_rep_fighter",ppppppppplVar9,ppppbVar10
                             ,pppplVar11,param_6,param_7,param_8);
              param_3 = (long *********)(ulong)*(byte *)(*(long *)(lVar16 + uVar15 * 8) + 0x20);
              ppppbVar10 = (byte ****)0x2;
              plVar7 = FUN_710323f330((long *)(param_1 + 0x20),uVar13,(ulong)param_3,2,pppplVar11,
                                      param_6,param_7,param_8);
              plVar5 = local_a8[0];
              FUN_7103778b80((long)local_a8[0],(long)plVar7,param_3,ppppbVar10,pppplVar11,param_6,
                             param_7,param_8);
              local_b0 = &PTR_FUN_710523d9a8;
              local_a8[0] = (long *)0x0;
              if (plVar5 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar5);
              }
              goto LAB_7101e4d894;
            }
            break;
          }
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)(uVar13 * 0x20000000) >> 0x20);
      }
    }
LAB_7101e4d880:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x70),0x710432a66a);
LAB_7101e4d894:
    if ((char)local_108[1] != '\0') {
      if (*(char *)((long)local_108 + 0xec) == '\0') {
        lVar16 = local_108[0xe];
        lVar18 = local_108[0xf];
        if (lVar18 == lVar16) goto LAB_7101e4d8e8;
      }
      else {
        lVar16 = local_108[0xe];
        lVar18 = local_108[0xf];
      }
      uVar14 = (uint)((ulong)(lVar18 - lVar16) >> 3);
      if (uVar14 != 0) {
        uVar17 = 0;
        do {
          lVar18 = *(long *)(lVar16 + (ulong)uVar17 * 8);
          if (*(char *)(lVar18 + 0x10) == '\x01') {
            cVar19 = *(char *)(lVar18 + 0x48);
            if (cVar19 == '\x03') {
              lVar16 = *(long *)(param_1 + 0x70);
              pcVar8 = "spirit_attacker_defense";
              goto LAB_7101e4d8f8;
            }
            if (cVar19 == '\x02') {
              lVar16 = *(long *)(param_1 + 0x70);
              pcVar8 = "spirit_attacker_throw";
            }
            else {
              if (cVar19 != '\x01') goto LAB_7101e4d8ec;
              lVar16 = *(long *)(param_1 + 0x70);
              pcVar8 = "spirit_attacker_offense";
            }
            goto LAB_7101e4d8f8;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar14);
      }
    }
LAB_7101e4d8e8:
    cVar19 = '\0';
LAB_7101e4d8ec:
    lVar16 = *(long *)(param_1 + 0x70);
    pcVar8 = "spirit_attacker_non";
LAB_7101e4d8f8:
    FUN_7103778300(0x3f800000,lVar16,(long)pcVar8);
    cVar20 = '\0';
    lVar16 = param_1 + 0x58;
    if (((~(uint)param_4 & 0xffff) == 0) || (1999 < (short)param_4)) {
LAB_7101e4d994:
      lVar18 = *(long *)(param_1 + 0x60);
      pcVar8 = "spirit_attacker_non";
    }
    else {
      lVar18 = *(long *)(lVar21 + 0x1d8);
      uVar4 = *(ushort *)(lVar18 + (((long)param_4 << 0x30) >> 0x2f) + 0x60);
      uVar13 = (ulong)uVar4;
      uVar15 = (*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20) >> 6) * -0x3333333333333333;
      if ((uint)uVar15 <= (uint)uVar4) {
        cVar20 = '\0';
        goto LAB_7101e4d994;
      }
      puVar2 = (undefined2 *)(*(long *)(lVar18 + 0x20) + uVar13 * 0x140);
      if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
        puVar2 = &DAT_7105182b08;
      }
      cVar20 = *(char *)(puVar2 + 0x36);
      if (cVar20 == '\x03') {
        lVar18 = *(long *)(param_1 + 0x60);
        pcVar8 = "spirit_attacker_defense";
      }
      else if (cVar20 == '\x02') {
        lVar18 = *(long *)(param_1 + 0x60);
        pcVar8 = "spirit_attacker_throw";
      }
      else {
        if (cVar20 != '\x01') goto LAB_7101e4d994;
        lVar18 = *(long *)(param_1 + 0x60);
        pcVar8 = "spirit_attacker_offense";
      }
    }
    FUN_7103778300(0x3f800000,lVar18,(long)pcVar8);
    if (cVar19 == '\x03') {
      bVar6 = cVar20 == '\x01';
      if (cVar20 != '\x02') goto LAB_7101e4da9c;
LAB_7101e4d9e8:
      FUN_7103776910(&local_b0,lVar12,(long ****)"arrow",param_3,ppppbVar10,pppplVar11,param_6,
                     param_7,param_8);
      plVar5 = local_a8[0];
      lVar12 = *local_a8[0];
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
      }
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar5);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x70),0x7104308a6f);
      *(undefined1 *)(param_1 + 0x249) = 1;
      FUN_7103776910(&local_b0,lVar16,(long ****)"arrow",param_3,ppppbVar10,pppplVar11,param_6,
                     param_7,param_8);
      plVar5 = local_a8[0];
      lVar12 = *local_a8[0];
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
      }
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar5);
      }
      lVar12 = *(long *)(param_1 + 0x60);
      pcVar8 = "arrow_up_in_own";
LAB_7101e4db40:
      FUN_7103778300(0x3f800000,lVar12,(long)pcVar8);
    }
    else {
      if (cVar19 == '\x02') {
        bVar6 = cVar20 == '\x03';
        if (cVar20 == '\x01') goto LAB_7101e4d9e8;
LAB_7101e4da9c:
        if (bVar6) {
          FUN_7103776910(&local_b0,lVar12,(long ****)"arrow",param_3,ppppbVar10,pppplVar11,param_6,
                         param_7,param_8);
          plVar5 = local_a8[0];
          lVar12 = *local_a8[0];
          if (lVar12 != 0) {
            *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
          }
          local_b0 = &PTR_FUN_710523d9a8;
          local_a8[0] = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar5);
          }
          FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x70),0x710425fa9b);
          *(undefined1 *)(param_1 + 0x248) = 1;
          FUN_7103776910(&local_b0,lVar16,(long ****)"arrow",param_3,ppppbVar10,pppplVar11,param_6,
                         param_7,param_8);
          plVar5 = local_a8[0];
          lVar12 = *local_a8[0];
          if (lVar12 != 0) {
            *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
          }
          local_b0 = &PTR_FUN_710523d9a8;
          local_a8[0] = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar5);
          }
          lVar12 = *(long *)(param_1 + 0x60);
          pcVar8 = "arrow_down_in_own";
          goto LAB_7101e4db40;
        }
      }
      else if (cVar19 == '\x01') {
        bVar6 = cVar20 == '\x02';
        if (cVar20 == '\x03') goto LAB_7101e4d9e8;
        goto LAB_7101e4da9c;
      }
      FUN_7103776910(&local_b0,lVar12,(long ****)"arrow",param_3,ppppbVar10,pppplVar11,param_6,
                     param_7,param_8);
      plVar5 = local_a8[0];
      lVar12 = *local_a8[0];
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
      }
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar5);
      }
      FUN_7103776910(&local_b0,lVar16,(long ****)"arrow",param_3,ppppbVar10,pppplVar11,param_6,
                     param_7,param_8);
      plVar5 = local_a8[0];
      lVar12 = *local_a8[0];
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
      }
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar5);
      }
    }
  }
  plVar5 = local_108;
  local_108 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
LAB_7101e4dbdc:
  bVar3 = *(byte *)(puVar1 + 0x34);
  *(ushort *)(param_1 + 0x218) = param_2;
  lVar12 = param_1 + 0x48;
  *(long *)(param_1 + 0x40) = lVar12;
  uVar14 = 0;
  if (bVar3 < 4) {
    uVar14 = bVar3 + 1;
  }
  uVar17 = 0;
  if (((ulong)param_5 & 1) == 0) {
    uVar17 = uVar14;
  }
  FUN_7103776910(&local_b0,lVar12,(long ****)"set_rep_spirit",param_3,ppppbVar10,pppplVar11,param_6,
                 param_7,param_8);
  plVar5 = local_a8[0];
  if ((undefined ***)(param_1 + 200) != &local_b0) {
    local_a8[0] = (long *)0x0;
    uVar13 = *(ulong *)(param_1 + 0xd0);
    *(long **)(param_1 + 0xd0) = plVar5;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
  }
  plVar5 = local_a8[0];
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  FUN_7103776910(&local_b0,lVar12,(long ****)"set_rep_spirit_shadow",param_3,ppppbVar10,pppplVar11,
                 param_6,param_7,param_8);
  plVar5 = local_a8[0];
  if ((undefined ***)(param_1 + 0xd8) != &local_b0) {
    local_a8[0] = (long *)0x0;
    uVar13 = *(ulong *)(param_1 + 0xe0);
    *(long **)(param_1 + 0xe0) = plVar5;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
  }
  plVar5 = local_a8[0];
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  FUN_7103776910(&local_b0,lVar12,(long ****)"set_rep_eff_aura_00",param_3,ppppbVar10,pppplVar11,
                 param_6,param_7,param_8);
  plVar5 = local_a8[0];
  if ((undefined ***)(param_1 + 0xe8) != &local_b0) {
    local_a8[0] = (long *)0x0;
    uVar13 = *(ulong *)(param_1 + 0xf0);
    *(long **)(param_1 + 0xf0) = plVar5;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
  }
  plVar5 = local_a8[0];
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  ppppppppplVar9 = (long *********)(ulong)*(ushort *)(param_1 + 0x218);
  *(undefined2 *)(param_1 + 0x244) = 0;
  if (ppppppppplVar9 != (long *********)0xffff) {
    ppppbVar10 = (byte ****)0x1;
    FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),0,*(ushort *)(param_1 + 0x218),(byte ****)0x1,
                   pppplVar11,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x244) = 1;
    FUN_71037790a0(*(long *)(param_1 + 0xd0),1,ppppppppplVar9,ppppbVar10,pppplVar11,param_6,param_7,
                   param_8);
    FUN_71037790a0(*(long *)(param_1 + 0xe0),1,ppppppppplVar9,ppppbVar10,pppplVar11,param_6,param_7,
                   param_8);
    FUN_71037790a0(*(long *)(param_1 + 0xf0),1,ppppppppplVar9,ppppbVar10,pppplVar11,param_6,param_7,
                   param_8);
    *(undefined1 **)(param_1 + 0x220) = &DAT_c1ffff0000000000;
  }
  lVar16 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 8);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x50),0x710436c9a0);
  if (((ulong)param_5 & 1) == 0) {
    pcVar8 = "master_off";
  }
  else {
    pcVar8 = "master_on";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x50),(long)pcVar8);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x50),0x710436c9ac);
  uVar13 = (ulong)uVar17;
  FUN_7103778430(lVar12,"star_%d",uVar13,ppppbVar10,pppplVar11,param_6,param_7,param_8);
  FUN_7103776910(&local_b0,lVar12,(long ****)&DAT_71043ffc53,uVar13,ppppbVar10,pppplVar11,param_6,
                 param_7,param_8);
  plVar5 = local_a8[0];
  lVar16 = *local_a8[0];
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe | uVar17 != 0;
  }
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x50),0x71042a360f);
  FUN_7103776910(&local_b0,lVar12,(long ****)"com_attribute",uVar13,ppppbVar10,pppplVar11,param_6,
                 param_7,param_8);
  plVar5 = local_a8[0];
  lVar16 = *local_a8[0];
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
  }
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  FUN_7103776910(&local_c0,lVar12,(long ****)"set_txt_name_00",uVar13,ppppbVar10,pppplVar11,param_6,
                 param_7,param_8);
  lVar16 = *(long *)(lVar21 + 0x1d8);
  uVar15 = FUN_71032a9470(lVar16,*(ushort *)(param_1 + 0x218));
  FUN_71032a9540((uint *)&local_b0,lVar16,uVar15);
  FUN_71003a4ca0((uint *)&local_108,"spi_%s",local_a8,uVar15,ppppbVar10,pppplVar11,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_c0,acStack_100,uVar15,ppppbVar10,pppplVar11,param_6,param_7,param_8);
  uVar13 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  FUN_7103776910(&local_c0,lVar12,(long ****)"set_txt_name_00_edge",uVar15,ppppbVar10,pppplVar11,
                 param_6,param_7,param_8);
  lVar12 = *(long *)(lVar21 + 0x1d8);
  uVar13 = FUN_71032a9470(lVar12,*(ushort *)(param_1 + 0x218));
  FUN_71032a9540((uint *)&local_b0,lVar12,uVar13);
  FUN_71003a4ca0((uint *)&local_108,"spi_%s",local_a8,uVar13,ppppbVar10,pppplVar11,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_c0,acStack_100,uVar13,ppppbVar10,pppplVar11,param_6,param_7,param_8);
  uVar13 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  if (*(char *)(puVar1 + 0x2f) == '\0') {
    cVar19 = *(char *)(puVar1 + 0x36);
    if (cVar19 == '\x03') {
      lVar12 = *(long *)(param_1 + 0x50);
      pcVar8 = "spirit_attacker_defense";
    }
    else if (cVar19 == '\x02') {
      lVar12 = *(long *)(param_1 + 0x50);
      pcVar8 = "spirit_attacker_throw";
    }
    else if (cVar19 == '\x01') {
      lVar12 = *(long *)(param_1 + 0x50);
      pcVar8 = "spirit_attacker_offense";
    }
    else {
      lVar12 = *(long *)(param_1 + 0x50);
      pcVar8 = "spirit_attacker_non";
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0x50);
    pcVar8 = "spirit_supporter";
  }
  FUN_7103778300(0x3f800000,lVar12,(long)pcVar8);
  return;
}

