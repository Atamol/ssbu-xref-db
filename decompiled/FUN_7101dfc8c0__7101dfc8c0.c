// addr:      7101dfc8c0
// offset:    0x1dfc8c0
// name:      FUN_7101dfc8c0
// mangled:   
// signature: undefined __cdecl FUN_7101dfc8c0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101dfc8c0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ulong uVar11;
  bool bVar12;
  uint uVar13;
  long **pplVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long ***ppplVar20;
  undefined1 uVar21;
  undefined *puVar22;
  char *pcVar23;
  long ****pppplVar24;
  undefined8 uVar25;
  long *********ppppppppplVar26;
  byte ****ppppbVar27;
  short sVar28;
  ushort *puVar29;
  byte *pbVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long *********ppppppppplVar38;
  long ***ppplVar39;
  long lVar40;
  byte bVar41;
  byte ****ppppbVar42;
  undefined2 *puVar43;
  float fVar44;
  uint local_f0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  uint uStack_b4;
  undefined8 local_b0;
  uint local_a8;
  long ********local_80;
  long *local_78;
  
  pppplVar24 = param_3;
  if (*(int *)(param_1 + 0x2ac) == 0xe) {
    FUN_7103776640(&local_c8,(long)param_3,(byte ****)"set_parts_spirit",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    if ((long ****)&local_c8 != param_3) {
      ppplVar20 = (long ***)CONCAT44(uStack_bc,local_c0);
      local_c0 = 0.0;
      uStack_bc = 0;
      ppplVar39 = param_3[1];
      param_3[1] = ppplVar20;
      if (ppplVar39 != (long ***)0x0) {
        pplVar14 = ppplVar39[3];
        ppplVar39[2] = (long **)&PTR_FUN_710523d9a8;
        ppplVar39[3] = (long **)0x0;
        if (pplVar14 != (long **)0x0) {
          FUN_710392eb40((ulong)pplVar14);
        }
        FUN_710392eb40((ulong)ppplVar39);
      }
    }
    uVar17 = CONCAT44(uStack_bc,local_c0);
    local_c8._0_4_ = 0x523d988;
    local_c8._4_4_ = 1.58347e-43;
    local_c0 = 0.0;
    uStack_bc = 0;
    if (uVar17 != 0) {
      uVar15 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40(uVar17);
    }
  }
  plVar16 = (long *)FUN_710392e290(0x10,8,pppplVar24,param_4,param_5,param_6,param_7,param_8);
  if (plVar16 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ********)((ulong)local_80 & 0xffffffff00000000);
      local_c8._0_4_ = 8;
      local_c8._4_4_ = 0.0;
      pppplVar24 = (long ****)&local_c8;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar17 & 1) != 0) &&
         (plVar16 = (long *)FUN_710392e290(0x10,8,pppplVar24,param_4,param_5,param_6,param_7,param_8
                                          ), plVar16 != (long *)0x0)) goto LAB_7101dfc9e0;
    }
    plVar16 = (long *)0x0;
  }
LAB_7101dfc9e0:
  *plVar16 = 0;
  pplVar14 = param_3[1][1];
  if ((pplVar14 == (long **)0x0) || (pplVar14[0xc] == (long *)0x0)) {
    *plVar16 = 0;
  }
  else {
    plVar18 = (long *)FUN_7103796f20((long)pplVar14[0xc],(long)(pplVar14[3] + 0x16));
    *plVar16 = (long)plVar18;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x2e0))(plVar18,0);
    }
  }
  FUN_710392eb40((ulong)plVar16);
  uVar17 = *(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1e0) >> 3;
  if ((int)uVar17 < param_2) {
    return;
  }
  if (uVar17 <= (ulong)(long)param_2) {
LAB_7101dfe3fc:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar29 = *(ushort **)(*(long *)(param_1 + 0x1e0) + (long)param_2 * 8);
  uVar7 = *puVar29;
  uVar17 = (ulong)uVar7;
  uVar8 = puVar29[4];
  ppppppppplVar38 = (long *********)(ulong)uVar8;
  bVar12 = false;
  if ((uVar7 >> 2 < 0x5f5) && (*(char *)(param_1 + 0x2a0) != '\0')) {
    bVar12 = (*(uint *)(param_1 + ((ulong)(uVar7 >> 3) & 0x1ffc) + 0x2b0) &
             1 << (ulong)(uVar7 & 0x1f)) != 0;
  }
  plVar16 = (long *)FUN_710392e290(0x10,8,pppplVar24,param_4,param_5,param_6,param_7,param_8);
  if (plVar16 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ********)((ulong)local_80 & 0xffffffff00000000);
      local_c8._0_4_ = 8;
      local_c8._4_4_ = 0.0;
      pppplVar24 = (long ****)&local_c8;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar15 & 1) != 0) &&
         (plVar16 = (long *)FUN_710392e290(0x10,8,pppplVar24,param_4,param_5,param_6,param_7,param_8
                                          ), plVar16 != (long *)0x0)) goto LAB_7101dfcaec;
    }
    plVar16 = (long *)0x0;
  }
LAB_7101dfcaec:
  *plVar16 = 0;
  pplVar14 = param_3[1][1];
  if ((pplVar14 == (long **)0x0) || (pplVar14[0xc] == (long *)0x0)) {
    *plVar16 = 0;
  }
  else {
    plVar18 = (long *)FUN_7103796f20((long)pplVar14[0xc],(long)(pplVar14[3] + 0x16));
    *plVar16 = (long)plVar18;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x2f0))(plVar18,bVar12,1);
    }
  }
  FUN_710392eb40((ulong)plVar16);
  puVar1 = (ulong *)(param_1 + 0xf0);
  if (*(int *)(param_1 + 0x2ac) != 0xe) {
    puVar1 = (ulong *)(param_1 + 8);
  }
  ppppppppplVar26 = ppppppppplVar38;
  FUN_710259a790(puVar1,1,(long ****)ppppppppplVar38,param_4,param_5,param_6,param_7,param_8);
  lVar40 = *(long *)(*DAT_7105329f98 + 0x20);
  if (uVar8 != 0xffff) {
    puVar29 = *(ushort **)(lVar40 + 0x28);
    lVar34 = *(long *)(lVar40 + 0x30) - (long)puVar29;
    uVar15 = lVar34 >> 3;
    if (0 < (int)uVar15) {
      uVar32 = 0;
      do {
        if (uVar15 <= uVar32) goto LAB_7101dfe3fc;
        if (*puVar29 == uVar8) {
          if (-1 < (int)uVar32) {
            uVar15 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar8);
            ppppppppplVar26 = (long *********)&SUB_00000018;
            plVar16 = FUN_710323faf0((long *)(lVar40 + 8),uVar15,(undefined **)&SUB_00000018,param_4
                                     ,param_5,param_6,param_7,param_8);
            goto LAB_7101dfcbfc;
          }
          break;
        }
        uVar32 = uVar32 + 1;
        puVar29 = puVar29 + 4;
      } while ((long)uVar32 < lVar34 * 0x20000000 >> 0x20);
    }
  }
  plVar16 = (long *)(lVar40 + 0x70);
LAB_7101dfcbfc:
  lVar40 = (long)(short)uVar8;
  FUN_7103776910(&local_c8,(long)param_3,(long ****)"set_rep_spirit",ppppppppplVar26,param_4,param_5
                 ,param_6,param_7,param_8);
  uVar15 = CONCAT44(uStack_bc,local_c0);
  FUN_7103778b80(uVar15,(long)plVar16,ppppppppplVar26,param_4,param_5,param_6,param_7,param_8);
  local_c8._0_4_ = 0x523d9a8;
  local_c8._4_4_ = 1.58347e-43;
  local_c0 = 0.0;
  uStack_bc = 0;
  if (uVar15 != 0) {
    FUN_710392eb40(uVar15);
  }
  FUN_7103776910(&local_c8,(long)param_3,(long ****)"set_rep_spirit_shadow",ppppppppplVar26,param_4,
                 param_5,param_6,param_7,param_8);
  uVar15 = CONCAT44(uStack_bc,local_c0);
  FUN_7103778b80(uVar15,(long)plVar16,ppppppppplVar26,param_4,param_5,param_6,param_7,param_8);
  local_c8._0_4_ = 0x523d9a8;
  local_c8._4_4_ = 1.58347e-43;
  local_c0 = 0.0;
  uStack_bc = 0;
  if (uVar15 != 0) {
    FUN_710392eb40(uVar15);
  }
  lVar36 = *(long *)(DAT_710532f730 + 8);
  lVar34 = *(long *)(lVar36 + 0x1d8);
  if (uVar8 == 0xffff) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = (ulong)*(ushort *)(lVar34 + lVar40 * 2 + 0x60);
  }
  lVar4 = *(long *)(lVar34 + 0x20);
  uVar32 = (*(long *)(lVar34 + 0x28) - lVar4 >> 6) * -0x3333333333333333;
  puVar2 = (undefined2 *)(lVar4 + uVar15 * 0x140);
  if (uVar32 < uVar15 || uVar32 - uVar15 == 0) {
    puVar2 = &DAT_7105182b08;
  }
  lVar37 = *DAT_7105329f98;
  lVar35 = *(long *)(lVar37 + 0x30);
  if (uVar7 >> 4 < 0x177) {
    puVar43 = (undefined2 *)(lVar35 + uVar17 * 0x50 + 72000);
  }
  else {
    uVar33 = uVar7 - 6000;
    puVar43 = &DAT_710532a878;
    if (((uVar33 & 0xffff) < 100) &&
       (lVar35 = lVar35 + ((ulong)uVar33 & 0xffff) * 0x50, *(short *)(lVar35 + 0x88cc8) != -1)) {
      puVar43 = (undefined2 *)(lVar35 + 0x88cc0);
    }
  }
  if ((uVar8 == 0xffff || 1999 < (short)uVar8) ||
     (uVar9 = *(ushort *)(lVar34 + lVar40 * 2 + 0x60), uVar15 = (ulong)uVar9,
     (uint)uVar32 <= (uint)uVar9)) {
LAB_7101dfcdc4:
    uVar21 = 0;
  }
  else {
    puVar3 = (undefined2 *)(lVar4 + uVar15 * 0x140);
    if (uVar32 < uVar15 || uVar32 - uVar15 == 0) {
      puVar3 = &DAT_7105182b08;
    }
    if (*(char *)(puVar3 + 0x2f) == '\0') {
      if (2 < *(byte *)(puVar3 + 0x36) - 1) goto LAB_7101dfcdc4;
      uVar21 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar3 + 0x36) - 1 & 3) << 3));
    }
    else {
      uVar21 = 4;
    }
  }
  uVar25 = 0;
  FUN_710339dde0((uint *)&local_c8,uVar21,'\0');
  FUN_7103778300(0x3f800000,(long)param_3[1],(long)&local_c0);
  FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_atr_icon",uVar25,param_4,param_5,
                 param_6,param_7,param_8);
  plVar16 = local_78;
  FUN_7103778300(0x3f800000,(long)local_78,(long)&local_c0);
  local_80 = (long ********)&PTR_FUN_710523d988;
  local_78 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    uVar15 = *(ulong *)((long)plVar16 + 0x18);
    *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar16 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40((ulong)plVar16);
  }
  cVar6 = *(char *)(puVar2 + 0x34);
  switch(cVar6) {
  case '\0':
    local_c8._4_4_ = 1.4013e-44;
    uStack_bc = 0x6f6e5f73;
    local_b8 = 0x656e;
    local_c8._0_4_ = 0x811c9dc5;
    uStack_b6 = 0;
    uVar33 = 99;
    pbVar30 = (byte *)((long)&local_c0 + 1);
    do {
      local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar33;
      uVar33 = (uint)*pbVar30;
      pbVar30 = pbVar30 + 1;
    } while (uVar33 != 0);
    break;
  case '\x01':
    local_c8._4_4_ = 1.4013e-44;
    uStack_bc = 0x6f685f73;
    local_b8 = 0x6570;
    local_c8._0_4_ = 0x811c9dc5;
    uStack_b6 = 0;
    uVar33 = 99;
    pbVar30 = (byte *)((long)&local_c0 + 1);
    do {
      local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar33;
      uVar33 = (uint)*pbVar30;
      pbVar30 = pbVar30 + 1;
    } while (uVar33 != 0);
    break;
  case '\x02':
    local_c8._4_4_ = 1.26117e-44;
    uStack_bc = 0x63615f73;
    local_b8 = 0x65;
    local_c8._0_4_ = 0x811c9dc5;
    uVar33 = 99;
    pbVar30 = (byte *)((long)&local_c0 + 1);
    do {
      local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar33;
      uVar33 = (uint)*pbVar30;
      pbVar30 = pbVar30 + 1;
    } while (uVar33 != 0);
    break;
  case '\x03':
    local_c8._4_4_ = 1.68156e-44;
    uStack_bc = 0x656c5f73;
    local_c8._0_4_ = 0x811c9dc5;
    local_b8 = 0x6567;
    uStack_b6 = 0x6e;
    uStack_b5 = 100;
    uVar33 = 99;
    uStack_b4 = uStack_b4 & 0xffffff00;
    pbVar30 = (byte *)((long)&local_c0 + 1);
    do {
      local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar33;
      uVar33 = (uint)*pbVar30;
      pbVar30 = pbVar30 + 1;
    } while (uVar33 != 0);
    break;
  default:
    local_c8._4_4_ = 1.4013e-44;
    uStack_bc = 0x6f6e5f73;
    local_b8 = 0x656e;
    local_c8._0_4_ = 0x811c9dc5;
    uStack_b6 = 0;
    uVar33 = 99;
    pbVar30 = (byte *)((long)&local_c0 + 1);
    do {
      local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar33;
      uVar33 = (uint)*pbVar30;
      pbVar30 = pbVar30 + 1;
    } while (uVar33 != 0);
  }
  local_c0 = 1.7859881e+31;
  FUN_7103778300(0x3f800000,(long)param_3[1],(long)&local_c0);
  uVar33 = DAT_71052391c0;
  if (*(int *)(param_1 + 0x2ac) == 0xe) {
    DAT_71052391c0 = DAT_71052391c4;
    uVar33 = uVar33 ^ uVar33 << 0xb;
    uVar33 = uVar33 ^ uVar33 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
    DAT_71052391c4 = DAT_71052391c8;
    DAT_71052391c8 = DAT_71052391cc;
    DAT_71052391cc = uVar33;
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_legend",uVar25,param_4,
                   param_5,param_6,param_7,param_8);
    plVar16 = local_78;
    FUN_7103778300(0x3f800000,(long)local_78,(long)&local_c0);
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_legend",uVar25,param_4,
                   param_5,param_6,param_7,param_8);
    plVar16 = local_78;
    fVar44 = (float)(uVar33 % 100);
    if ((*(long *)((long)local_78 + 8) != 0) &&
       (plVar18 = (long *)FUN_71037964b0(*(long *)((long)local_78 + 8),0x710436ac3e),
       plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x1a0))(fVar44);
    }
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_ace",uVar25,param_4,param_5,
                   param_6,param_7,param_8);
    plVar16 = local_78;
    FUN_7103778300(0x3f800000,(long)local_78,(long)&local_c0);
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_ace",uVar25,param_4,param_5,
                   param_6,param_7,param_8);
    plVar16 = local_78;
    if ((*(long *)((long)local_78 + 8) != 0) &&
       (plVar18 = (long *)FUN_71037964b0(*(long *)((long)local_78 + 8),0x71044530ac),
       plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x1a0))(fVar44);
    }
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_hope",uVar25,param_4,param_5,
                   param_6,param_7,param_8);
    plVar16 = local_78;
    FUN_7103778300(0x3f800000,(long)local_78,(long)&local_c0);
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_hope",uVar25,param_4,param_5,
                   param_6,param_7,param_8);
    plVar16 = local_78;
    if ((*(long *)((long)local_78 + 8) != 0) &&
       (plVar18 = (long *)FUN_71037964b0(*(long *)((long)local_78 + 8),0x7104442147),
       plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x1a0))(fVar44);
    }
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_none",uVar25,param_4,param_5,
                   param_6,param_7,param_8);
    plVar16 = local_78;
    FUN_7103778300(0x3f800000,(long)local_78,(long)&local_c0);
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_none",uVar25,param_4,param_5,
                   param_6,param_7,param_8);
    plVar16 = local_78;
    if ((*(long *)((long)local_78 + 8) != 0) &&
       (plVar18 = (long *)FUN_71037964b0(*(long *)((long)local_78 + 8),0x7104464374),
       plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x1a0))(fVar44);
    }
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_legend",uVar25,param_4,
                   param_5,param_6,param_7,param_8);
    plVar16 = local_78;
    if ((*(long *)((long)local_78 + 8) != 0) &&
       (lVar34 = *(long *)(*(long *)((long)local_78 + 8) + 0x18), lVar34 != 0)) {
      *(byte *)(lVar34 + 0x58) = *(byte *)(lVar34 + 0x58) & 0xfe | cVar6 == '\x03';
    }
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_ace",uVar25,param_4,param_5,
                   param_6,param_7,param_8);
    plVar16 = local_78;
    if ((*(long *)((long)local_78 + 8) != 0) &&
       (lVar34 = *(long *)(*(long *)((long)local_78 + 8) + 0x18), lVar34 != 0)) {
      *(byte *)(lVar34 + 0x58) = *(byte *)(lVar34 + 0x58) & 0xfe | cVar6 == '\x02';
    }
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_hope",uVar25,param_4,param_5,
                   param_6,param_7,param_8);
    plVar16 = local_78;
    if ((*(long *)((long)local_78 + 8) != 0) &&
       (lVar34 = *(long *)(*(long *)((long)local_78 + 8) + 0x18), lVar34 != 0)) {
      *(byte *)(lVar34 + 0x58) = *(byte *)(lVar34 + 0x58) & 0xfe | cVar6 == '\x01';
    }
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_class_none",uVar25,param_4,param_5,
                   param_6,param_7,param_8);
    plVar16 = local_78;
    if ((*(long *)((long)local_78 + 8) != 0) &&
       (lVar34 = *(long *)(*(long *)((long)local_78 + 8) + 0x18), lVar34 != 0)) {
      *(byte *)(lVar34 + 0x58) = *(byte *)(lVar34 + 0x58) & 0xfe | cVar6 == '\0';
    }
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar15 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40((ulong)plVar16);
    }
  }
  bVar41 = *(byte *)(puVar43 + 0x1f);
  FUN_7103776640(&local_c8,(long)param_3,(byte ****)"set_parts_icon_new",uVar25,param_4,param_5,
                 param_6,param_7,param_8);
  uVar15 = CONCAT44(uStack_bc,local_c0);
  puVar22 = &DAT_71043cd335;
  if ((bVar41 & 4) != 0) {
    puVar22 = &DAT_710429257e;
  }
  FUN_7103778300(0x3f800000,uVar15,(long)puVar22);
  local_c8._0_4_ = 0x523d988;
  local_c8._4_4_ = 1.58347e-43;
  local_c0 = 0.0;
  uStack_bc = 0;
  if (uVar15 != 0) {
    uVar32 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40(uVar15);
  }
  if (uVar7 >> 4 < 0x177) {
    bVar41 = *(byte *)(*(long *)(lVar37 + 0x30) + uVar17 * 0x50 + 0x1197e) >> 1 & 1;
  }
  else {
    bVar41 = 0;
  }
  bVar12 = FUN_71025ca280(uVar17,*(ulong *)(param_1 + 600));
  uVar17 = *(ulong *)(puVar43 + 0xc);
  uVar15 = *(ulong *)(param_1 + 600);
  if (((((uVar17 & 0xff00000000000000) == 0x5200000000000000) && ((uVar17 & 0xffffffffff) != 0)) &&
      ((uVar15 & 0xff00000000000000) == 0x5200000000000000)) && ((uVar15 & 0xffffffffff) != 0)) {
    uVar33 = (uint)(((uVar15 ^ uVar17) & 0xffffffffff) == 0);
  }
  else {
    uVar33 = ((uVar15 & 0xffffffffff) != 0 && (uVar15 & 0xff00000000000000) == 0x5200000000000000)
             != ((uVar17 & 0xff00000000000000) == 0x5200000000000000 && (uVar17 & 0xffffffffff) != 0
                ) ^ 1;
  }
  FUN_7103776640(&local_c8,(long)param_3,(byte ****)"set_parts_icon_condition",uVar25,param_4,
                 param_5,param_6,param_7,param_8);
  if (*(int *)(param_1 + 0x2ac) - 8U < 3) {
    if (*(int *)(param_1 + 0x2ac) == 8) {
      uVar17 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                              0x1530ff0e86);
      uVar15 = *(ulong *)(param_1 + 600);
      if ((((uVar15 & 0xff00000000000000) == 0x5200000000000000) && ((uVar15 & 0xffffffffff) != 0))
         && (((uVar17 & 0xff00000000000000) == 0x5200000000000000 && ((uVar17 & 0xffffffffff) != 0))
            )) {
        if (((uVar17 ^ uVar15) & 0xffffffffff) != 0 && !bVar12) goto LAB_7101dfd6cc;
      }
      else if (((uVar17 & 0xffffffffff) != 0 && (uVar17 & 0xff00000000000000) == 0x5200000000000000)
               != ((uVar15 & 0xff00000000000000) == 0x5200000000000000 &&
                  (uVar15 & 0xffffffffff) != 0) && !bVar12) goto LAB_7101dfd6cc;
      uVar13 = FUN_71025cba90(*(float *)(param_1 + 0x5ac),uVar8);
    }
    else {
LAB_7101dfd6cc:
      if (bVar41 != 0) {
        uVar17 = CONCAT44(uStack_bc,local_c0);
        FUN_7103778300(0x3f800000,uVar17,0x71042704e1);
        FUN_7103778300(0x3f800000,uVar17,0x71043add07);
        local_f0 = 1;
        goto LAB_7101dfd7ec;
      }
      uVar13 = FUN_71025cba90(*(float *)(param_1 + 0x5ac),uVar8);
    }
    if ((uVar13 & 0xff) == 2) {
      puVar22 = &DAT_71044228b4;
    }
    else if ((uVar13 & 0xff) == 0) {
      puVar22 = &DAT_7104292174;
    }
    else {
      puVar22 = &DAT_71043cd335;
    }
    uVar17 = CONCAT44(uStack_bc,local_c0);
    FUN_7103778300(0x3f800000,uVar17,(long)puVar22);
    local_f0 = 0;
  }
  else {
    uVar17 = CONCAT44(uStack_bc,local_c0);
    FUN_7103778300(0x3f800000,uVar17,0x71043cd335);
    local_f0 = 0;
  }
LAB_7101dfd7ec:
  local_c8._0_4_ = 0x523d988;
  local_c8._4_4_ = 1.58347e-43;
  local_c0 = 0.0;
  uStack_bc = 0;
  if (uVar17 != 0) {
    uVar15 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar17);
  }
  iVar5 = *(int *)(param_1 + 0x2ac);
  uVar15 = FUN_710251a7e0(*DAT_7105329f98 + 0x38,uVar7);
  FUN_7103776640(&local_c8,(long)param_3,(byte ****)"set_parts_icon_using",uVar25,param_4,param_5,
                 param_6,param_7,param_8);
  uVar17 = CONCAT44(uStack_bc,local_c0);
  puVar22 = &DAT_710429257e;
  if ((uVar15 & 1) == 0) {
    puVar22 = &DAT_71043cd335;
  }
  FUN_7103778300(0x3f800000,uVar17,(long)puVar22);
  local_c8._0_4_ = 0x523d988;
  local_c8._4_4_ = 1.58347e-43;
  local_c0 = 0.0;
  uStack_bc = 0;
  if (uVar17 != 0) {
    uVar32 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40(uVar17);
  }
  cVar6 = *(char *)(puVar2 + 0x2f);
  uVar7 = puVar2[0x48];
  if (uVar8 == 0xffff || 1999 < (short)uVar8) {
LAB_7101dfd908:
    sVar28 = -1;
  }
  else {
    lVar34 = *(long *)(lVar36 + 0x1d8);
    uVar9 = *(ushort *)(lVar34 + lVar40 * 2 + 0x60);
    uVar13 = (int)((ulong)(*(long *)(lVar34 + 0x28) - *(long *)(lVar34 + 0x20)) >> 6) * -0x33333333;
    if ((uVar13 <= uVar9) ||
       (uVar9 = *(ushort *)(lVar34 + (ulong)uVar9 * 2 + 0x1000), uVar13 <= uVar9))
    goto LAB_7101dfd908;
    sVar28 = *(short *)(*(long *)(lVar34 + 0x20) + (ulong)uVar9 * 0x140);
  }
  uVar10 = puVar43[8];
  uVar9 = uVar7;
  if (cVar6 != '\0' || uVar7 == 0) {
    uVar9 = puVar2[0x35];
  }
  FUN_7103776640(&local_c8,(long)param_3,(byte ****)"set_parts_icon_indvi",uVar25,param_4,param_5,
                 param_6,param_7,param_8);
  ppppbVar27 = (byte ****)(ulong)(*(int *)(param_1 + 0x260) == 0xe && cVar6 == '\0');
  ppppppppplVar26 = (long *********)&local_c8;
  uVar32 = FUN_7101dfe5a0(uVar9,param_1,ppppppppplVar26,(ulong)ppppbVar27,param_5,param_6,param_7,
                          param_8);
  uVar17 = CONCAT44(uStack_bc,local_c0);
  local_c8._0_4_ = 0x523d988;
  local_c8._4_4_ = 1.58347e-43;
  local_c0 = 0.0;
  uStack_bc = 0;
  if (uVar17 != 0) {
    uVar19 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar19 != 0) {
      FUN_710392eb40(uVar19);
    }
    FUN_710392eb40(uVar17);
  }
  if ((uVar32 & 1) == 0) {
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_icon_skill",ppppppppplVar26,
                   ppppbVar27,param_5,param_6,param_7,param_8);
    ppppbVar27 = (byte ****)(ulong)(*(int *)(param_1 + 0x260) == 0x10 && cVar6 == '\x01');
    ppppppppplVar26 = &local_80;
    uVar17 = FUN_7101dfe5a0(uVar9,param_1,ppppppppplVar26,(ulong)ppppbVar27,param_5,param_6,param_7,
                            param_8);
    plVar16 = local_78;
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar32 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar32 != 0) {
        FUN_710392eb40(uVar32);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    ppplVar20 = param_3[1];
    pcVar23 = "view_sort_skill";
    if ((uVar17 & 1) == 0) {
      pcVar23 = "view_sort_level";
    }
  }
  else {
    FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_icon_skill",ppppppppplVar26,
                   ppppbVar27,param_5,param_6,param_7,param_8);
    plVar16 = local_78;
    FUN_7103778300(0x3f800000,(long)local_78,0x71043cd335);
    if ((*(long *)((long)plVar16 + 8) != 0) &&
       (lVar40 = *(long *)(*(long *)((long)plVar16 + 8) + 0x18), lVar40 != 0)) {
      *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) & 0xfe;
    }
    local_80 = (long ********)&PTR_FUN_710523d988;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar17 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    ppplVar20 = param_3[1];
    pcVar23 = "view_sort_individuality";
  }
  FUN_7103778300(0x3f800000,(long)ppplVar20,(long)pcVar23);
  uVar9 = puVar2[0x35];
  uVar17 = (ulong)uVar9;
  FUN_7103776640(&local_c8,(long)param_3,(byte ****)"set_parts_icon_counter",ppppppppplVar26,
                 ppppbVar27,param_5,param_6,param_7,param_8);
  if ((uVar17 == 0) || (*(int *)(param_1 + 0x2ac) != 3)) {
    puVar22 = &DAT_71043cd335;
  }
  else {
    uVar32 = *(ulong *)(param_1 + 0x238);
    if (uVar32 == 0) {
LAB_7101dfdba8:
      plVar16 = (long *)0x0;
    }
    else {
      uVar19 = uVar32 - 1;
      if ((uVar19 & uVar32) == 0) {
        uVar31 = uVar19 & uVar17;
      }
      else {
        uVar31 = uVar17;
        if (uVar32 <= uVar17) {
          uVar31 = 0;
          if (uVar32 != 0) {
            uVar31 = uVar17 / uVar32;
          }
          uVar31 = uVar17 - uVar31 * uVar32;
        }
      }
      plVar18 = *(long **)(*(long *)(param_1 + 0x230) + uVar31 * 8);
      plVar16 = (long *)0x0;
      if ((plVar18 != (long *)0x0) && (plVar16 = (long *)*plVar18, plVar16 != (long *)0x0)) {
        if ((uVar19 & uVar32) == 0) {
          do {
            uVar32 = plVar16[1];
            if (uVar32 != uVar17 && (uVar32 & uVar19) != uVar31) goto LAB_7101dfdba8;
          } while (((uVar32 != uVar17) || (*(ushort *)(plVar16 + 2) != uVar9)) &&
                  (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0));
        }
        else {
          do {
            uVar19 = plVar16[1];
            if (uVar19 == uVar17) {
              if (*(ushort *)(plVar16 + 2) == uVar9) break;
            }
            else {
              if (uVar32 <= uVar19) {
                uVar11 = 0;
                if (uVar32 != 0) {
                  uVar11 = uVar19 / uVar32;
                }
                uVar19 = uVar19 - uVar11 * uVar32;
              }
              if (uVar19 != uVar31) goto LAB_7101dfdba8;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    puVar22 = &DAT_71043cd335;
    if (plVar16 != (long *)0x0) {
      puVar22 = &DAT_710429257e;
    }
  }
  uVar17 = CONCAT44(uStack_bc,local_c0);
  FUN_7103778300(0x3f800000,uVar17,(long)puVar22);
  local_c8._0_4_ = 0x523d988;
  local_c8._4_4_ = 1.58347e-43;
  local_c0 = 0.0;
  uStack_bc = 0;
  if (uVar17 != 0) {
    uVar32 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40(uVar17);
  }
  uVar9 = puVar43[8];
  ppppbVar42 = (byte ****)(ulong)uVar9;
  FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_icon_super",ppppppppplVar26,
                 ppppbVar27,param_5,param_6,param_7,param_8);
  plVar16 = local_78;
  if (cVar6 == '\0') {
    if (sVar28 == -1) {
      if (uVar7 == 0) {
        pcVar23 = "off";
      }
      else {
        pcVar23 = "super";
      }
      FUN_7103778300(0x3f800000,(long)local_78,(long)pcVar23);
      ppplVar20 = param_3[1];
      if (uVar9 < 99) goto LAB_7101dfe3ac;
      FUN_7103778300(0x3f800000,(long)ppplVar20,0x71043063a8);
      pcVar23 = "set_txt_level_max";
    }
    else {
      if (0x62 < uVar9) {
        pcVar23 = "possible_super";
        goto LAB_7101dfdc28;
      }
      FUN_7103778300(0x3f800000,(long)local_78,0x710437a53a);
      ppplVar20 = param_3[1];
LAB_7101dfe3ac:
      FUN_7103778300(0x3f800000,(long)ppplVar20,0x71042a0e51);
      pcVar23 = "set_txt_level";
    }
    FUN_7103776910(&local_c8,(long)param_3,(long ****)pcVar23,ppppppppplVar26,ppppbVar27,param_5,
                   param_6,param_7,param_8);
    ppppppppplVar26 = (long *********)0x1;
    FUN_710377a280((long)&local_c8,(byte *)"mnu_spirits_select_lv",1);
    uVar17 = CONCAT44(uStack_bc,local_c0);
    local_c8._0_4_ = 0x523d9a8;
    local_c8._4_4_ = 1.58347e-43;
    local_c0 = 0.0;
    uStack_bc = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
  }
  else {
    pcVar23 = "off";
LAB_7101dfdc28:
    FUN_7103778300(0x3f800000,(long)local_78,(long)pcVar23);
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71043e06a3);
    ppppbVar42 = ppppbVar27;
  }
  local_80 = (long ********)&PTR_FUN_710523d988;
  local_78 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    uVar17 = *(ulong *)((long)plVar16 + 0x18);
    *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar16 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)plVar16);
  }
  if ((uVar10 < 99) || (*(int *)(param_1 + 0x2ac) != 9)) {
    uVar33 = (uint)uVar15 | uVar33 & (uint)(iVar5 == 8) & (local_f0 ^ 0xffffffff) |
             (uint)(uVar7 == 0 && (sVar28 == -1 && *(int *)(param_1 + 0x260) == 0x16)) |
             (sVar28 != -1 || (uVar10 < 99 || *(int *)(param_1 + 0x2ac) != 5)) ^ 1;
  }
  else {
    uVar33 = 1;
  }
  uVar7 = puVar43[8];
  FUN_7103776910(&local_80,(long)param_3,(long ****)"set_txt_num_status",ppppppppplVar26,ppppbVar42,
                 param_5,param_6,param_7,param_8);
  plVar16 = local_78;
  if (cVar6 == '\0') {
    iVar5 = *(int *)(param_1 + 0x260);
    if (iVar5 == 0xb) {
      FUN_7103778300(0x3f800000,(long)param_3[1],0x7104412eb0);
      local_c8._0_4_ = (uint)local_c8 & 0xffffff00;
      local_c8._4_4_ = 0.0;
      local_c0 = 0.0;
      local_b8 = 0;
      uStack_b6 = 0;
      uStack_b5 = 0;
      uStack_b4 = 0x52ffff00;
      local_b0 = 0;
      local_a8 = local_a8 & 0xffff0000;
      FUN_71025caab0((long)&local_c8,uVar8,(uint)uVar7);
      ppppbVar42 = (byte ****)(ulong)(uint)(int)local_c0;
      lVar40 = *local_78;
      if (lVar40 != 0) {
        *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) | 1;
      }
      pcVar23 = "mnu_spirits_select_defense_n";
    }
    else if (iVar5 == 10) {
      FUN_7103778300(0x3f800000,(long)param_3[1],0x7104401ab9);
      local_c8._0_4_ = (uint)local_c8 & 0xffffff00;
      local_c8._4_4_ = 0.0;
      local_c0 = 0.0;
      local_b8 = 0;
      uStack_b6 = 0;
      uStack_b5 = 0;
      uStack_b4 = 0x52ffff00;
      local_b0 = 0;
      local_a8 = local_a8 & 0xffff0000;
      FUN_71025caab0((long)&local_c8,uVar8,(uint)uVar7);
      ppppbVar42 = (byte ****)(ulong)(uint)(int)local_c8._4_4_;
      lVar40 = *local_78;
      if (lVar40 != 0) {
        *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) | 1;
      }
      pcVar23 = "mnu_spirits_select_attack_n";
    }
    else {
      if (iVar5 != 9) goto LAB_7101dfdd1c;
      FUN_7103778300(0x3f800000,(long)param_3[1],0x71043e0745);
      local_c8._0_4_ = 1;
      local_c8._4_4_ = 0.0;
      local_c0 = (float)((uint)local_c0 & 0xffffff00);
      uStack_bc = 0;
      local_b8 = 0;
      uStack_b6 = 0;
      uStack_b5 = 0;
      local_b0 = 0x52ffff0000000000;
      local_a8 = 0;
      FUN_71025ca840((int *)&local_c8,uVar8,(uint)uVar7);
      uVar13 = FUN_71025cb8d0((long)&local_c8);
      lVar40 = *local_78;
      ppppbVar42 = (byte ****)(ulong)uVar13;
      if (lVar40 != 0) {
        *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) | 1;
      }
      pcVar23 = "mnu_spirits_select_power_n";
    }
    plVar16 = local_78;
    ppppppppplVar26 = (long *********)0x1;
    FUN_710377a280((long)&local_80,(byte *)pcVar23,1);
    local_80 = (long ********)&PTR_FUN_710523d9a8;
    local_78 = (long *)0x0;
    if (plVar16 != (long *)0x0) goto LAB_7101dfdd54;
  }
  else {
LAB_7101dfdd1c:
    if ((long *)local_78[2] != (long *)0x0) {
      ppppppppplVar26 = (long *********)0x0;
      ppppbVar42 = (byte ****)0x0;
      local_c8._0_4_ = 0;
      FUN_71037a2270((long *)local_78[2],(ushort *)&local_c8,0,0);
    }
    lVar40 = *plVar16;
    if (lVar40 != 0) {
      *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) & 0xfe;
    }
LAB_7101dfdd54:
    local_78 = (long *)0x0;
    local_80 = (long ********)&PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)plVar16);
  }
  bVar41 = *(byte *)(puVar43 + 0x1f);
  FUN_7103776640(&local_c8,(long)param_3,(byte ****)"set_parts_icon_favorite",ppppppppplVar26,
                 ppppbVar42,param_5,param_6,param_7,param_8);
  bVar12 = (bVar41 & 1) == 0;
  uVar17 = CONCAT44(uStack_bc,local_c0);
  puVar22 = &DAT_710429257e;
  if (bVar12) {
    puVar22 = &DAT_71043cd335;
  }
  pcVar23 = "bg_favorite";
  if (bVar12) {
    pcVar23 = "bg_normal";
  }
  FUN_7103778300(0x3f800000,uVar17,(long)puVar22);
  FUN_7103778300(0x3f800000,(long)param_3[1],(long)pcVar23);
  local_c8._0_4_ = 0x523d988;
  local_c8._4_4_ = 1.58347e-43;
  local_c0 = 0.0;
  uStack_bc = 0;
  if (uVar17 != 0) {
    uVar15 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar17);
  }
  if (cVar6 == '\0') {
    if (*(byte *)((long)puVar2 + 0x69) - 1 < 3) {
      FUN_71003a4ca0((uint *)&local_c8,"slot_%02d",(ulong)*(byte *)((long)puVar2 + 0x69),
                     ppppppppplVar26,ppppbVar42,param_5,param_6,param_7,param_8);
      ppplVar20 = param_3[1];
      pcVar23 = (char *)&local_c0;
    }
    else {
      ppplVar20 = param_3[1];
      pcVar23 = "slot_00";
    }
    FUN_7103778300(0x3f800000,(long)ppplVar20,(long)pcVar23);
LAB_7101dfe070:
    FUN_7101dfe430(param_1,(long)param_3,ppppppppplVar38,ppppbVar42,param_5,param_6,param_7,param_8)
    ;
    plVar16 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar38,ppppbVar42,param_5,param_6,
                                     param_7,param_8);
    if (plVar16 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (long ********)((ulong)local_80 & 0xffffffff00000000);
        local_c8._0_4_ = 8;
        local_c8._4_4_ = 0.0;
        ppppppppplVar38 = (long *********)&local_c8;
        uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        if (((uVar17 & 1) != 0) &&
           (plVar16 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar38,ppppbVar42,param_5,
                                             param_6,param_7,param_8), plVar16 != (long *)0x0))
        goto LAB_7101dfe0dc;
      }
      plVar16 = (long *)0x0;
    }
LAB_7101dfe0dc:
    *plVar16 = 0;
    pplVar14 = param_3[1][1];
    if ((pplVar14 == (long **)0x0) || (pplVar14[0xc] == (long *)0x0)) {
      *plVar16 = 0;
    }
    else {
      plVar18 = (long *)FUN_7103796f20((long)pplVar14[0xc],(long)(pplVar14[3] + 0x16));
      *plVar16 = (long)plVar18;
      if (plVar18 != (long *)0x0) {
        uVar13 = 1;
        (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
        uVar17 = (**(code **)(*plVar18 + 0x200))(plVar18);
        if ((uVar17 & 1) != 0) {
          uVar13 = (**(code **)(*plVar18 + 0x210))(plVar18);
          uVar13 = uVar13 ^ 1;
        }
        ppppppppplVar38 = (long *********)0x0;
        (**(code **)(*plVar18 + 0x388))(plVar18,uVar13 & 1);
      }
    }
    FUN_710392eb40((ulong)plVar16);
    if ((uVar33 & 1) == 0) {
      return;
    }
  }
  else {
    if (cVar6 != '\x01') goto LAB_7101dfe070;
    uVar17 = FUN_71032a0fd0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x218),puVar2[0x35]);
    uVar13 = (uint)uVar17;
    if ((uVar13 - 1 & 0xff) < 3) {
      FUN_71003a4ca0((uint *)&local_c8,"cost_%02d",(ulong)(uVar13 & 0xff),ppppppppplVar26,ppppbVar42
                     ,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,(long)param_3[1],(long)&local_c0);
    }
    else {
      FUN_7103778300(0x3f800000,(long)param_3[1],0x710433a681);
    }
    if ((uVar13 & 0xff) <= *(uint *)(param_1 + 0x2a4)) goto LAB_7101dfe070;
    FUN_7101dfe430(param_1,(long)param_3,ppppppppplVar38,ppppbVar42,param_5,param_6,param_7,param_8)
    ;
    plVar16 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar38,ppppbVar42,param_5,param_6,
                                     param_7,param_8);
    if (plVar16 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (long ********)((ulong)local_80 & 0xffffffff00000000);
        local_c8._0_4_ = 8;
        local_c8._4_4_ = 0.0;
        ppppppppplVar38 = (long *********)&local_c8;
        uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        if (((uVar17 & 1) != 0) &&
           (plVar16 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar38,ppppbVar42,param_5,
                                             param_6,param_7,param_8), plVar16 != (long *)0x0))
        goto LAB_7101dfdfe8;
      }
      plVar16 = (long *)0x0;
    }
LAB_7101dfdfe8:
    *plVar16 = 0;
    pplVar14 = param_3[1][1];
    if ((pplVar14 == (long **)0x0) || (pplVar14[0xc] == (long *)0x0)) {
      *plVar16 = 0;
    }
    else {
      plVar18 = (long *)FUN_7103796f20((long)pplVar14[0xc],(long)(pplVar14[3] + 0x16));
      *plVar16 = (long)plVar18;
      if (plVar18 != (long *)0x0) {
        uVar33 = 1;
        (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
        uVar17 = (**(code **)(*plVar18 + 0x200))(plVar18);
        if ((uVar17 & 1) != 0) {
          uVar33 = (**(code **)(*plVar18 + 0x210))(plVar18);
          uVar33 = uVar33 ^ 1;
        }
        ppppppppplVar38 = (long *********)0x0;
        (**(code **)(*plVar18 + 0x388))(plVar18,uVar33 & 1);
      }
    }
    FUN_710392eb40((ulong)plVar16);
  }
  plVar16 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar38,ppppbVar42,param_5,param_6,
                                   param_7,param_8);
  if (plVar16 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ********)((ulong)local_80 & 0xffffffff00000000);
      local_c8._0_4_ = 8;
      local_c8._4_4_ = 0.0;
      pppplVar24 = (long ****)&local_c8;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar17 & 1) != 0) &&
         (plVar16 = (long *)FUN_710392e290(0x10,8,pppplVar24,ppppbVar42,param_5,param_6,param_7,
                                           param_8), plVar16 != (long *)0x0)) goto LAB_7101dfe214;
    }
    plVar16 = (long *)0x0;
  }
LAB_7101dfe214:
  *plVar16 = 0;
  pplVar14 = param_3[1][1];
  if ((pplVar14 == (long **)0x0) || (pplVar14[0xc] == (long *)0x0)) {
    *plVar16 = 0;
  }
  else {
    plVar18 = (long *)FUN_7103796f20((long)pplVar14[0xc],(long)(pplVar14[3] + 0x16));
    *plVar16 = (long)plVar18;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x388))(plVar18,1,0);
    }
  }
  FUN_710392eb40((ulong)plVar16);
  return;
}

