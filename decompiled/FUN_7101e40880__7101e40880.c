// addr:      7101e40880
// offset:    0x1e40880
// name:      FUN_7101e40880
// mangled:   
// signature: undefined FUN_7101e40880(void)


/* WARNING: Removing unreachable block (ram,0x007101e42ca0) */
/* WARNING: Removing unreachable block (ram,0x007101e429e8) */
/* WARNING: Removing unreachable block (ram,0x007101e42b44) */
/* WARNING: Removing unreachable block (ram,0x007101e42dfc) */

void FUN_7101e40880(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  ulong uVar3;
  short sVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long ********pppppppplVar8;
  ushort uVar9;
  char *pcVar10;
  long *********ppppppppplVar11;
  ulong uVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  short *psVar16;
  undefined2 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  byte *pbVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  long ********pppppppplStack_c8;
  ulong auStack_c0 [8];
  undefined **ppuStack_80;
  ulong uStack_78;
  
  lVar21 = *(long *)(param_1 + 0x18);
  uVar12 = (*(long *)(param_1 + 0x20) - lVar21 >> 2) * -0x5555555555555555;
  uVar22 = (ulong)param_2;
  if (uVar12 < uVar22 || uVar12 - uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  if (*(int *)(lVar21 + uVar22 * 0xc) == 1) {
    ppppppppplVar11 = param_3;
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71042f88e1);
    plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                    param_7,param_8);
    if (plVar6 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        ppuStack_80 = (undefined **)((ulong)ppuStack_80 & 0xffffffff00000000);
        pppppppplStack_c8 = (long ********)&DAT_00000008;
        ppppppppplVar11 = &pppppppplStack_c8;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&ppuStack_80);
        if (((uVar12 & 1) != 0) &&
           (plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,param_4,param_5,
                                            param_6,param_7,param_8), plVar6 != (long *)0x0))
        goto LAB_7101e4095c;
      }
      plVar6 = (long *)0x0;
    }
LAB_7101e4095c:
    *plVar6 = 0;
    ppppppplVar13 = param_3[1][1];
    if ((ppppppplVar13 == (long *******)0x0) || (ppppppplVar13[0xc] == (long ******)0x0)) {
      *plVar6 = 0;
    }
    else {
      plVar7 = (long *)FUN_7103796f20((long)ppppppplVar13[0xc],(long)(ppppppplVar13[3] + 0x16));
      *plVar6 = (long)plVar7;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
        uVar12 = (**(code **)(*plVar7 + 0x200))(plVar7);
        if ((uVar12 & 1) == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
          uVar5 = uVar5 ^ 1;
        }
        ppppppppplVar11 = (long *********)0x0;
        (**(code **)(*plVar7 + 0x388))(plVar7,uVar5 & 1);
      }
    }
    FUN_710392eb40((ulong)plVar6);
    plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                    param_7,param_8);
    if (plVar6 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        ppuStack_80 = (undefined **)((ulong)ppuStack_80 & 0xffffffff00000000);
        pppppppplStack_c8 = (long ********)&DAT_00000008;
        ppppppppplVar11 = &pppppppplStack_c8;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&ppuStack_80);
        if (((uVar12 & 1) != 0) &&
           (plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,param_4,param_5,
                                            param_6,param_7,param_8), plVar6 != (long *)0x0))
        goto LAB_7101e416ec;
      }
      plVar6 = (long *)0x0;
    }
LAB_7101e416ec:
    *plVar6 = 0;
    ppppppplVar13 = param_3[1][1];
    if ((ppppppplVar13 == (long *******)0x0) || (ppppppplVar13[0xc] == (long ******)0x0)) {
      *plVar6 = 0;
    }
    else {
      plVar7 = (long *)FUN_7103796f20((long)ppppppplVar13[0xc],(long)(ppppppplVar13[3] + 0x16));
      *plVar6 = (long)plVar7;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x208))(plVar7,0);
        uVar12 = (**(code **)(*plVar7 + 0x200))(plVar7);
        if ((uVar12 & 1) == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
          uVar5 = uVar5 ^ 1;
        }
        (**(code **)(*plVar7 + 0x388))(plVar7,uVar5 & 1,0);
      }
    }
    FUN_710392eb40((ulong)plVar6);
    cVar1 = *(char *)(lVar21 + uVar22 * 0xc + 4);
    if (cVar1 == '\x02') {
      pppppppplVar8 = param_3[1];
      pcVar10 = "btn_type_search";
    }
    else if (cVar1 == '\x01') {
      pppppppplVar8 = param_3[1];
      pcVar10 = "btn_type_school";
    }
    else {
      if (cVar1 != '\0') {
        return;
      }
      pppppppplVar8 = param_3[1];
      pcVar10 = "btn_type_gym";
    }
    FUN_7103778300(0x3f800000,(long)pppppppplVar8,(long)pcVar10);
    return;
  }
  ppppppppplVar11 = param_3;
  FUN_7103778300(0x3f800000,(long)param_3[1],0x710436c96c);
  plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      ppuStack_80 = (undefined **)((ulong)ppuStack_80 & 0xffffffff00000000);
      pppppppplStack_c8 = (long ********)&DAT_00000008;
      ppppppppplVar11 = &pppppppplStack_c8;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&ppuStack_80);
      if (((uVar12 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                          param_7,param_8), plVar6 != (long *)0x0))
      goto LAB_7101e40a34;
    }
    plVar6 = (long *)0x0;
  }
LAB_7101e40a34:
  *plVar6 = 0;
  ppppppplVar13 = param_3[1][1];
  if ((ppppppplVar13 == (long *******)0x0) || (ppppppplVar13[0xc] == (long ******)0x0)) {
    *plVar6 = 0;
  }
  else {
    plVar7 = (long *)FUN_7103796f20((long)ppppppplVar13[0xc],(long)(ppppppplVar13[3] + 0x16));
    *plVar6 = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      uVar5 = 1;
      (**(code **)(*plVar7 + 0x1f8))(plVar7,1);
      uVar12 = (**(code **)(*plVar7 + 0x200))(plVar7);
      if ((uVar12 & 1) != 0) {
        uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
        uVar5 = uVar5 ^ 1;
      }
      ppppppppplVar11 = (long *********)0x0;
      (**(code **)(*plVar7 + 0x388))(plVar7,uVar5 & 1);
    }
  }
  FUN_710392eb40((ulong)plVar6);
  plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      ppuStack_80 = (undefined **)((ulong)ppuStack_80 & 0xffffffff00000000);
      pppppppplStack_c8 = (long ********)&DAT_00000008;
      ppppppppplVar11 = &pppppppplStack_c8;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&ppuStack_80);
      if (((uVar12 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                          param_7,param_8), plVar6 != (long *)0x0))
      goto LAB_7101e40b2c;
    }
    plVar6 = (long *)0x0;
  }
LAB_7101e40b2c:
  *plVar6 = 0;
  ppppppplVar13 = param_3[1][1];
  if ((ppppppplVar13 == (long *******)0x0) || (ppppppplVar13[0xc] == (long ******)0x0)) {
    *plVar6 = 0;
  }
  else {
    plVar7 = (long *)FUN_7103796f20((long)ppppppplVar13[0xc],(long)(ppppppplVar13[3] + 0x16));
    *plVar6 = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      uVar5 = 1;
      (**(code **)(*plVar7 + 0x208))(plVar7,1);
      uVar12 = (**(code **)(*plVar7 + 0x200))(plVar7);
      if ((uVar12 & 1) != 0) {
        uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
        uVar5 = uVar5 ^ 1;
      }
      ppppppppplVar11 = (long *********)0x0;
      (**(code **)(*plVar7 + 0x388))(plVar7,uVar5 & 1);
    }
  }
  FUN_710392eb40((ulong)plVar6);
  pcVar10 = (char *)(lVar21 + uVar22 * 0xc + 4);
  cVar1 = *pcVar10;
  if (cVar1 == '\0') {
    puVar23 = (uint *)(lVar21 + uVar22 * 0xc + 8);
    uVar5 = *puVar23;
    FUN_7103778300(0x3f800000,(long)param_3[1],0x7104443d4b);
    FUN_7103778430((long)param_3,"bg_gym_%02d",(ulong)uVar5,param_4,param_5,param_6,param_7,param_8)
    ;
    FUN_7103778300(0x3f800000,(long)param_3[1],0x710438d258);
    ppppppppplVar11 = (long *********)0x0;
    FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",0,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,auStack_c0[0],0x71042a361a);
    puVar14 = *(undefined8 **)(**(long **)(param_1 + 0x30) + 8);
    if ((*(char *)(puVar14 + 0x71) == '\0') ||
       (puVar15 = (ushort *)*puVar14, puVar15 == (ushort *)0x0)) {
LAB_7101e412f0:
      FUN_7101e43170((long)&pppppppplStack_c8,0xffff,ppppppppplVar11,param_4,param_5,param_6,param_7
                     ,param_8);
LAB_7101e412fc:
      FUN_7103778300(0x3f800000,auStack_c0[0],0x710438d258);
    }
    else {
      uVar9 = *puVar15;
      if ((ulong)uVar9 == 0xffff) goto LAB_7101e412f0;
      if (uVar9 >> 4 < 0x177) {
        puVar17 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar9 * 0x50 + 72000);
      }
      else {
        puVar17 = &DAT_710532a878;
        if (((ushort)(uVar9 + 0xe890) < 100) &&
           (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar9 + 0xe890) * 0x50,
           *(short *)(lVar21 + 0x88cc8) != -1)) {
          puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
        }
      }
      uVar9 = puVar17[4];
      FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,param_7,
                     param_8);
      if ((((uVar9 == 0xffff) ||
           (puVar14 = *(undefined8 **)(**(long **)(param_1 + 0x30) + 8),
           *(char *)(puVar14 + 0x71) == '\0')) ||
          (psVar16 = (short *)*puVar14, psVar16 == (short *)0x0)) || (*psVar16 == -1))
      goto LAB_7101e412fc;
      FUN_7103778300(0x3f800000,auStack_c0[0],0x710434aaac);
      plVar6 = *(long **)(**(long **)(param_1 + 0x30) + 8);
      if ((((char)plVar6[0x71] == '\0') || (lVar21 = *plVar6, lVar21 == 0)) ||
         (*(char *)(lVar21 + 0x20) != '\x03')) {
        FUN_7103778300(0x3f800000,auStack_c0[0],0x71042f893e);
        uVar12 = 0;
      }
      else {
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710433a73c);
        uVar12 = 1;
      }
      FUN_7101e42f50((long)&pppppppplStack_c8,uVar12,(ulong)*(byte *)(param_1 + 0xf0),param_4,
                     param_5,param_6,param_7,param_8);
      fVar25 = FUN_710251abf0(*(long **)(**(long **)(param_1 + 0x30) + 8),0);
      uVar12 = auStack_c0[0];
      fVar27 = 0.0;
      if ((*(long *)(auStack_c0[0] + 8) != 0) &&
         (plVar6 = (long *)FUN_71037964b0(*(long *)(auStack_c0[0] + 8),0x71043cfbba),
         plVar6 != (long *)0x0)) {
        fVar27 = (float)(**(code **)(*plVar6 + 0x1a8))();
        uVar12 = auStack_c0[0];
      }
      FUN_7103778630((ulong)(uint)(int)(fVar25 * fVar27),uVar12,0x71043cfbba);
    }
    uVar12 = auStack_c0[0];
    pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
    auStack_c0[0] = 0;
    if (uVar12 != 0) {
      uVar22 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_710392eb40(uVar12);
    }
    ppppppppplVar11 = (long *********)0x1;
    FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",1,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,auStack_c0[0],0x71042a361a);
    plVar6 = *(long **)(**(long **)(param_1 + 0x30) + 8);
    if (((char)plVar6[0x71] == '\0') || (lVar21 = *plVar6, lVar21 == 0)) {
LAB_7101e41404:
      FUN_7101e43170((long)&pppppppplStack_c8,0xffff,ppppppppplVar11,param_4,param_5,param_6,param_7
                     ,param_8);
LAB_7101e41410:
      FUN_7103778300(0x3f800000,auStack_c0[0],0x710438d258);
    }
    else {
      uVar9 = *(ushort *)(lVar21 + 0x1d8);
      if ((ulong)uVar9 == 0xffff) goto LAB_7101e41404;
      if (uVar9 >> 4 < 0x177) {
        puVar17 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar9 * 0x50 + 72000);
      }
      else {
        puVar17 = &DAT_710532a878;
        if (((ushort)(uVar9 + 0xe890) < 100) &&
           (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar9 + 0xe890) * 0x50,
           *(short *)(lVar21 + 0x88cc8) != -1)) {
          puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
        }
      }
      uVar9 = puVar17[4];
      FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,param_7,
                     param_8);
      if ((((uVar9 == 0xffff) ||
           (plVar6 = *(long **)(**(long **)(param_1 + 0x30) + 8), (char)plVar6[0x71] == '\0')) ||
          (lVar21 = *plVar6, lVar21 == 0)) || (*(short *)(lVar21 + 0x1d8) == -1))
      goto LAB_7101e41410;
      FUN_7103778300(0x3f800000,auStack_c0[0],0x710434aaac);
      plVar6 = *(long **)(**(long **)(param_1 + 0x30) + 8);
      if ((((char)plVar6[0x71] == '\0') || (lVar21 = *plVar6, lVar21 == 0)) ||
         (*(char *)(lVar21 + 0x1f8) != '\x03')) {
        FUN_7103778300(0x3f800000,auStack_c0[0],0x71042f893e);
        uVar12 = 0;
      }
      else {
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710433a73c);
        uVar12 = 1;
      }
      FUN_7101e42f50((long)&pppppppplStack_c8,uVar12,(ulong)*(byte *)(param_1 + 0xf0),param_4,
                     param_5,param_6,param_7,param_8);
      fVar25 = FUN_710251abf0(*(long **)(**(long **)(param_1 + 0x30) + 8),1);
      uVar12 = auStack_c0[0];
      fVar27 = 0.0;
      if ((*(long *)(auStack_c0[0] + 8) != 0) &&
         (plVar6 = (long *)FUN_71037964b0(*(long *)(auStack_c0[0] + 8),0x71043cfbba),
         plVar6 != (long *)0x0)) {
        fVar27 = (float)(**(code **)(*plVar6 + 0x1a8))();
        uVar12 = auStack_c0[0];
      }
      FUN_7103778630((ulong)(uint)(int)(fVar25 * fVar27),uVar12,0x71043cfbba);
    }
    uVar12 = auStack_c0[0];
    pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
    auStack_c0[0] = 0;
    if (uVar12 != 0) {
      uVar22 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_710392eb40(uVar12);
    }
    ppppppppplVar11 = (long *********)0x2;
    FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",2,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,auStack_c0[0],0x71042a361a);
    plVar6 = *(long **)(**(long **)(param_1 + 0x30) + 8);
    if (((char)plVar6[0x71] == '\0') || (lVar21 = *plVar6, lVar21 == 0)) {
LAB_7101e41510:
      FUN_7101e43170((long)&pppppppplStack_c8,0xffff,ppppppppplVar11,param_4,param_5,param_6,param_7
                     ,param_8);
LAB_7101e4151c:
      FUN_7103778300(0x3f800000,auStack_c0[0],0x710438d258);
    }
    else {
      uVar9 = *(ushort *)(lVar21 + 0x3b0);
      if ((ulong)uVar9 == 0xffff) goto LAB_7101e41510;
      if (uVar9 >> 4 < 0x177) {
        puVar17 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar9 * 0x50 + 72000);
      }
      else {
        puVar17 = &DAT_710532a878;
        if (((ushort)(uVar9 + 0xe890) < 100) &&
           (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar9 + 0xe890) * 0x50,
           *(short *)(lVar21 + 0x88cc8) != -1)) {
          puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
        }
      }
      uVar9 = puVar17[4];
      FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,param_7,
                     param_8);
      if ((((uVar9 == 0xffff) ||
           (plVar6 = *(long **)(**(long **)(param_1 + 0x30) + 8), (char)plVar6[0x71] == '\0')) ||
          (lVar21 = *plVar6, lVar21 == 0)) || (*(short *)(lVar21 + 0x3b0) == -1))
      goto LAB_7101e4151c;
      FUN_7103778300(0x3f800000,auStack_c0[0],0x710434aaac);
      plVar6 = *(long **)(**(long **)(param_1 + 0x30) + 8);
      if ((((char)plVar6[0x71] == '\0') || (lVar21 = *plVar6, lVar21 == 0)) ||
         (*(char *)(lVar21 + 0x3d0) != '\x03')) {
        FUN_7103778300(0x3f800000,auStack_c0[0],0x71042f893e);
        uVar12 = 0;
      }
      else {
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710433a73c);
        uVar12 = 1;
      }
      FUN_7101e42f50((long)&pppppppplStack_c8,uVar12,(ulong)*(byte *)(param_1 + 0xf0),param_4,
                     param_5,param_6,param_7,param_8);
      fVar25 = FUN_710251abf0(*(long **)(**(long **)(param_1 + 0x30) + 8),2);
      uVar12 = auStack_c0[0];
      fVar27 = 0.0;
      if ((*(long *)(auStack_c0[0] + 8) != 0) &&
         (plVar6 = (long *)FUN_71037964b0(*(long *)(auStack_c0[0] + 8),0x71043cfbba),
         plVar6 != (long *)0x0)) {
        fVar27 = (float)(**(code **)(*plVar6 + 0x1a8))();
        uVar12 = auStack_c0[0];
      }
      FUN_7103778630((ulong)(uint)(int)(fVar25 * fVar27),uVar12,0x71043cfbba);
    }
    uVar12 = auStack_c0[0];
    pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
    auStack_c0[0] = 0;
    if (uVar12 != 0) {
      uVar22 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_710392eb40(uVar12);
    }
    ppppppppplVar11 = (long *********)0x3;
    FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,auStack_c0[0],0x71042a361a);
    plVar6 = *(long **)(**(long **)(param_1 + 0x30) + 8);
    if (((char)plVar6[0x71] == '\0') || (lVar21 = *plVar6, lVar21 == 0)) {
LAB_7101e4161c:
      FUN_7101e43170((long)&pppppppplStack_c8,0xffff,ppppppppplVar11,param_4,param_5,param_6,param_7
                     ,param_8);
    }
    else {
      uVar9 = *(ushort *)(lVar21 + 0x588);
      if ((ulong)uVar9 == 0xffff) goto LAB_7101e4161c;
      if (uVar9 >> 4 < 0x177) {
        puVar17 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar9 * 0x50 + 72000);
      }
      else {
        puVar17 = &DAT_710532a878;
        if (((ushort)(uVar9 + 0xe890) < 100) &&
           (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar9 + 0xe890) * 0x50,
           *(short *)(lVar21 + 0x88cc8) != -1)) {
          puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
        }
      }
      uVar9 = puVar17[4];
      FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,param_7,
                     param_8);
      if ((((uVar9 != 0xffff) &&
           (plVar6 = *(long **)(**(long **)(param_1 + 0x30) + 8), (char)plVar6[0x71] != '\0')) &&
          (lVar21 = *plVar6, lVar21 != 0)) && (*(short *)(lVar21 + 0x588) != -1)) {
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710434aaac);
        plVar6 = *(long **)(**(long **)(param_1 + 0x30) + 8);
        if ((((char)plVar6[0x71] == '\0') || (lVar21 = *plVar6, lVar21 == 0)) ||
           (*(char *)(lVar21 + 0x5a8) != '\x03')) {
          FUN_7103778300(0x3f800000,auStack_c0[0],0x71042f893e);
          uVar12 = 0;
        }
        else {
          FUN_7103778300(0x3f800000,auStack_c0[0],0x710433a73c);
          uVar12 = 1;
        }
        ppppppppplVar11 = (long *********)(ulong)*(byte *)(param_1 + 0xf0);
        FUN_7101e42f50((long)&pppppppplStack_c8,uVar12,(ulong)ppppppppplVar11,param_4,param_5,
                       param_6,param_7,param_8);
        fVar25 = FUN_710251abf0(*(long **)(**(long **)(param_1 + 0x30) + 8),3);
        uVar12 = auStack_c0[0];
        fVar27 = 0.0;
        if ((*(long *)(auStack_c0[0] + 8) != 0) &&
           (plVar6 = (long *)FUN_71037964b0(*(long *)(auStack_c0[0] + 8),0x71043cfbba),
           plVar6 != (long *)0x0)) {
          fVar27 = (float)(**(code **)(*plVar6 + 0x1a8))();
          uVar12 = auStack_c0[0];
        }
        FUN_7103778630((ulong)(uint)(int)(fVar25 * fVar27),uVar12,0x71043cfbba);
        goto LAB_7101e41640;
      }
    }
    FUN_7103778300(0x3f800000,auStack_c0[0],0x710438d258);
LAB_7101e41640:
    uVar12 = auStack_c0[0];
    pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
    auStack_c0[0] = 0;
    if (uVar12 == 0) goto LAB_7101e42394;
    uVar22 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
  }
  else {
    if (cVar1 == '\x01') {
      puVar23 = (uint *)(lVar21 + uVar22 * 0xc + 8);
      uVar5 = *puVar23;
      FUN_7103778300(0x3f800000,(long)param_3[1],0x71042f88eb);
      FUN_7103778430((long)param_3,"bg_school_%02d",(ulong)uVar5,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_7103778300(0x3f800000,(long)param_3[1],0x710438d258);
      if (0xe < uVar5) {
LAB_7101e42e60:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      ppppppppplVar11 = (long *********)0x0;
      FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",0,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,auStack_c0[0],0x71044550ce);
      plVar6 = (long *)(param_1 + (long)(int)uVar5 * 8 + 0x50);
      uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
      if (((uVar12 < 0xe) &&
          (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) &&
         (lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 != 0)) {
        uVar9 = *(ushort *)(lVar21 + 8);
        if ((ulong)uVar9 == 0xffff) goto LAB_7101e40f6c;
        if (uVar9 >> 4 < 0x177) {
          puVar17 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar9 * 0x50 + 72000);
        }
        else {
          puVar17 = &DAT_710532a878;
          if (((ushort)(uVar9 + 0xe890) < 100) &&
             (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar9 + 0xe890) * 0x50,
             *(short *)(lVar21 + 0x88cc8) != -1)) {
            puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
          }
        }
        uVar9 = puVar17[4];
        FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
        if (uVar9 == 0xffff) goto LAB_7101e40f78;
        lVar21 = *(long *)(*(long *)*plVar6 + 8);
        if (((*(char *)(lVar21 + 0x388) == '\0') ||
            (uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1), 0xd < uVar12)) ||
           ((lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 == 0 ||
            (*(short *)(lVar21 + 8) == -1)))) goto LAB_7101e40f78;
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710434aaac);
        uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
        if ((((uVar12 < 0xe) &&
             (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) &&
            (lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 != 0)) &&
           (*(char *)(lVar21 + 0x28) == '\x03')) {
          FUN_7103778300(0x3f800000,auStack_c0[0],0x710433a73c);
          uVar12 = 1;
        }
        else {
          FUN_7103778300(0x3f800000,auStack_c0[0],0x71042f893e);
          uVar12 = 0;
        }
        FUN_7101e42f50((long)&pppppppplStack_c8,uVar12,(ulong)*(byte *)(param_1 + 0xf0),param_4,
                       param_5,param_6,param_7,param_8);
        uVar12 = auStack_c0[0];
        fVar27 = 0.0;
        uVar22 = (ulong)*(byte *)((long *)*plVar6 + 1);
        fVar25 = fVar27;
        if ((uVar22 < 0xe) &&
           (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) {
          lVar21 = *(long *)(lVar21 + uVar22 * 8 + 8);
          fVar25 = 0.0;
          if (lVar21 != 0) {
            uVar22 = *(ulong *)(lVar21 + 0x20);
            uVar20 = *(ulong *)(lVar21 + 0x10);
            fVar25 = 1.0;
            if ((uVar22 != uVar20) &&
               (uVar19 = ((long)uVar20 >> 0x20) * 0xe353f7cf +
                         ((uVar20 & 0xffffffff) * 0xe353f7cf >> 0x20),
               lVar21 = ((long)(((long)uVar20 >> 0x20) * 0x20c49ba5 + ((long)uVar19 >> 0x20) +
                               ((uVar20 & 0xffffffff) * 0x20c49ba5 + (uVar19 & 0xffffffff) >> 0x20))
                        >> 7) - ((long)uVar20 >> 0x3f), fVar25 = 0.0, 0 < lVar21)) {
              uVar20 = ((long)uVar22 >> 0x20) * 0xe353f7cf +
                       ((uVar22 & 0xffffffff) * 0xe353f7cf >> 0x20);
              fVar28 = (float)(((long)(((long)uVar22 >> 0x20) * 0x20c49ba5 + ((long)uVar20 >> 0x20)
                                      + ((uVar22 & 0xffffffff) * 0x20c49ba5 + (uVar20 & 0xffffffff)
                                        >> 0x20)) >> 7) - ((long)uVar22 >> 0x3f)) / (float)lVar21;
              fVar25 = 0.0;
              if (0.0 <= fVar28) {
                fVar25 = fVar28;
              }
            }
          }
        }
        if ((*(long *)(auStack_c0[0] + 8) != 0) &&
           (plVar7 = (long *)FUN_71037964b0(*(long *)(auStack_c0[0] + 8),0x71043cfbba),
           plVar7 != (long *)0x0)) {
          fVar27 = (float)(**(code **)(*plVar7 + 0x1a8))();
          uVar12 = auStack_c0[0];
        }
        FUN_7103778630((ulong)(uint)(int)(fVar25 * fVar27),uVar12,0x71043cfbba);
      }
      else {
LAB_7101e40f6c:
        FUN_7101e43170((long)&pppppppplStack_c8,0xffff,ppppppppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
LAB_7101e40f78:
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710438d258);
      }
      uVar12 = auStack_c0[0];
      pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
      auStack_c0[0] = 0;
      if (uVar12 != 0) {
        uVar22 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
        FUN_710392eb40(uVar12);
      }
      ppppppppplVar11 = (long *********)0x1;
      FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",1,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,auStack_c0[0],0x71044550ce);
      uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
      if (((uVar12 < 0xe) &&
          (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) &&
         (lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 != 0)) {
        uVar9 = *(ushort *)(lVar21 + 0x1d0);
        if ((ulong)uVar9 == 0xffff) goto LAB_7101e41090;
        if (uVar9 >> 4 < 0x177) {
          puVar17 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar9 * 0x50 + 72000);
        }
        else {
          puVar17 = &DAT_710532a878;
          if (((ushort)(uVar9 + 0xe890) < 100) &&
             (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar9 + 0xe890) * 0x50,
             *(short *)(lVar21 + 0x88cc8) != -1)) {
            puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
          }
        }
        uVar9 = puVar17[4];
        FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
        if (uVar9 == 0xffff) goto LAB_7101e4109c;
        lVar21 = *(long *)(*(long *)*plVar6 + 8);
        if (((*(char *)(lVar21 + 0x388) == '\0') ||
            (uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1), 0xd < uVar12)) ||
           ((lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 == 0 ||
            (*(short *)(lVar21 + 0x1d0) == -1)))) goto LAB_7101e4109c;
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710434aaac);
        uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
        if ((((uVar12 < 0xe) &&
             (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) &&
            (lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 != 0)) &&
           (*(char *)(lVar21 + 0x1f0) == '\x03')) {
          FUN_7103778300(0x3f800000,auStack_c0[0],0x710433a73c);
          uVar12 = 1;
        }
        else {
          FUN_7103778300(0x3f800000,auStack_c0[0],0x71042f893e);
          uVar12 = 0;
        }
        FUN_7101e42f50((long)&pppppppplStack_c8,uVar12,(ulong)*(byte *)(param_1 + 0xf0),param_4,
                       param_5,param_6,param_7,param_8);
        uVar12 = auStack_c0[0];
        fVar27 = 0.0;
        uVar22 = (ulong)*(byte *)((long *)*plVar6 + 1);
        fVar25 = fVar27;
        if ((uVar22 < 0xe) &&
           (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) {
          lVar21 = *(long *)(lVar21 + uVar22 * 8 + 8);
          fVar25 = 0.0;
          if (lVar21 != 0) {
            uVar22 = *(ulong *)(lVar21 + 0x1e8);
            uVar20 = *(ulong *)(lVar21 + 0x1d8);
            fVar25 = 1.0;
            if ((uVar22 != uVar20) &&
               (uVar19 = ((long)uVar20 >> 0x20) * 0xe353f7cf +
                         ((uVar20 & 0xffffffff) * 0xe353f7cf >> 0x20),
               lVar21 = ((long)(((long)uVar20 >> 0x20) * 0x20c49ba5 + ((long)uVar19 >> 0x20) +
                               ((uVar20 & 0xffffffff) * 0x20c49ba5 + (uVar19 & 0xffffffff) >> 0x20))
                        >> 7) - ((long)uVar20 >> 0x3f), fVar25 = 0.0, 0 < lVar21)) {
              uVar20 = ((long)uVar22 >> 0x20) * 0xe353f7cf +
                       ((uVar22 & 0xffffffff) * 0xe353f7cf >> 0x20);
              fVar28 = (float)(((long)(((long)uVar22 >> 0x20) * 0x20c49ba5 + ((long)uVar20 >> 0x20)
                                      + ((uVar22 & 0xffffffff) * 0x20c49ba5 + (uVar20 & 0xffffffff)
                                        >> 0x20)) >> 7) - ((long)uVar22 >> 0x3f)) / (float)lVar21;
              fVar25 = 0.0;
              if (0.0 <= fVar28) {
                fVar25 = fVar28;
              }
            }
          }
        }
        if ((*(long *)(auStack_c0[0] + 8) != 0) &&
           (plVar7 = (long *)FUN_71037964b0(*(long *)(auStack_c0[0] + 8),0x71043cfbba),
           plVar7 != (long *)0x0)) {
          fVar27 = (float)(**(code **)(*plVar7 + 0x1a8))();
          uVar12 = auStack_c0[0];
        }
        FUN_7103778630((ulong)(uint)(int)(fVar25 * fVar27),uVar12,0x71043cfbba);
      }
      else {
LAB_7101e41090:
        FUN_7101e43170((long)&pppppppplStack_c8,0xffff,ppppppppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
LAB_7101e4109c:
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710438d258);
      }
      uVar12 = auStack_c0[0];
      pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
      auStack_c0[0] = 0;
      if (uVar12 != 0) {
        uVar22 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
        FUN_710392eb40(uVar12);
      }
      ppppppppplVar11 = (long *********)0x2;
      FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",2,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,auStack_c0[0],0x71044550ce);
      uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
      if (((uVar12 < 0xe) &&
          (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) &&
         (lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 != 0)) {
        uVar9 = *(ushort *)(lVar21 + 0x398);
        if ((ulong)uVar9 == 0xffff) goto LAB_7101e411ac;
        if (uVar9 >> 4 < 0x177) {
          puVar17 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar9 * 0x50 + 72000);
        }
        else {
          puVar17 = &DAT_710532a878;
          if (((ushort)(uVar9 + 0xe890) < 100) &&
             (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar9 + 0xe890) * 0x50,
             *(short *)(lVar21 + 0x88cc8) != -1)) {
            puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
          }
        }
        uVar9 = puVar17[4];
        FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
        if (uVar9 == 0xffff) goto LAB_7101e411b8;
        lVar21 = *(long *)(*(long *)*plVar6 + 8);
        if (((*(char *)(lVar21 + 0x388) == '\0') ||
            (uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1), 0xd < uVar12)) ||
           ((lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 == 0 ||
            (*(short *)(lVar21 + 0x398) == -1)))) goto LAB_7101e411b8;
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710434aaac);
        uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
        if ((((uVar12 < 0xe) &&
             (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) &&
            (lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 != 0)) &&
           (*(char *)(lVar21 + 0x3b8) == '\x03')) {
          FUN_7103778300(0x3f800000,auStack_c0[0],0x710433a73c);
          uVar12 = 1;
        }
        else {
          FUN_7103778300(0x3f800000,auStack_c0[0],0x71042f893e);
          uVar12 = 0;
        }
        FUN_7101e42f50((long)&pppppppplStack_c8,uVar12,(ulong)*(byte *)(param_1 + 0xf0),param_4,
                       param_5,param_6,param_7,param_8);
        uVar12 = auStack_c0[0];
        fVar27 = 0.0;
        uVar22 = (ulong)*(byte *)((long *)*plVar6 + 1);
        fVar25 = fVar27;
        if ((uVar22 < 0xe) &&
           (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) {
          lVar21 = *(long *)(lVar21 + uVar22 * 8 + 8);
          fVar25 = 0.0;
          if (lVar21 != 0) {
            uVar22 = *(ulong *)(lVar21 + 0x3b0);
            uVar20 = *(ulong *)(lVar21 + 0x3a0);
            fVar25 = 1.0;
            if ((uVar22 != uVar20) &&
               (uVar19 = ((long)uVar20 >> 0x20) * 0xe353f7cf +
                         ((uVar20 & 0xffffffff) * 0xe353f7cf >> 0x20),
               lVar21 = ((long)(((long)uVar20 >> 0x20) * 0x20c49ba5 + ((long)uVar19 >> 0x20) +
                               ((uVar20 & 0xffffffff) * 0x20c49ba5 + (uVar19 & 0xffffffff) >> 0x20))
                        >> 7) - ((long)uVar20 >> 0x3f), fVar25 = 0.0, 0 < lVar21)) {
              uVar20 = ((long)uVar22 >> 0x20) * 0xe353f7cf +
                       ((uVar22 & 0xffffffff) * 0xe353f7cf >> 0x20);
              fVar28 = (float)(((long)(((long)uVar22 >> 0x20) * 0x20c49ba5 + ((long)uVar20 >> 0x20)
                                      + ((uVar22 & 0xffffffff) * 0x20c49ba5 + (uVar20 & 0xffffffff)
                                        >> 0x20)) >> 7) - ((long)uVar22 >> 0x3f)) / (float)lVar21;
              fVar25 = 0.0;
              if (0.0 <= fVar28) {
                fVar25 = fVar28;
              }
            }
          }
        }
        if ((*(long *)(auStack_c0[0] + 8) != 0) &&
           (plVar7 = (long *)FUN_71037964b0(*(long *)(auStack_c0[0] + 8),0x71043cfbba),
           plVar7 != (long *)0x0)) {
          fVar27 = (float)(**(code **)(*plVar7 + 0x1a8))();
          uVar12 = auStack_c0[0];
        }
        FUN_7103778630((ulong)(uint)(int)(fVar25 * fVar27),uVar12,0x71043cfbba);
      }
      else {
LAB_7101e411ac:
        FUN_7101e43170((long)&pppppppplStack_c8,0xffff,ppppppppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
LAB_7101e411b8:
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710438d258);
      }
      uVar12 = auStack_c0[0];
      pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
      auStack_c0[0] = 0;
      if (uVar12 != 0) {
        uVar22 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
        FUN_710392eb40(uVar12);
      }
      ppppppppplVar11 = (long *********)0x3;
      FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",3,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,auStack_c0[0],0x71044550ce);
      uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
      if (((uVar12 < 0xe) &&
          (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) &&
         (lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 != 0)) {
        uVar9 = *(ushort *)(lVar21 + 0x560);
        if ((ulong)uVar9 == 0xffff) goto LAB_7101e412c8;
        if (uVar9 >> 4 < 0x177) {
          puVar17 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar9 * 0x50 + 72000);
        }
        else {
          puVar17 = &DAT_710532a878;
          if (((ushort)(uVar9 + 0xe890) < 100) &&
             (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar9 + 0xe890) * 0x50,
             *(short *)(lVar21 + 0x88cc8) != -1)) {
            puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
          }
        }
        uVar9 = puVar17[4];
        FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
        if (uVar9 == 0xffff) goto LAB_7101e412d4;
        lVar21 = *(long *)(*(long *)*plVar6 + 8);
        if (((*(char *)(lVar21 + 0x388) == '\0') ||
            (uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1), 0xd < uVar12)) ||
           ((lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 == 0 ||
            (*(short *)(lVar21 + 0x560) == -1)))) goto LAB_7101e412d4;
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710434aaac);
        uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
        if ((((uVar12 < 0xe) &&
             (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) &&
            (lVar21 = *(long *)(lVar21 + uVar12 * 8 + 8), lVar21 != 0)) &&
           (*(char *)(lVar21 + 0x580) == '\x03')) {
          FUN_7103778300(0x3f800000,auStack_c0[0],0x710433a73c);
          uVar12 = 1;
        }
        else {
          FUN_7103778300(0x3f800000,auStack_c0[0],0x71042f893e);
          uVar12 = 0;
        }
        ppppppppplVar11 = (long *********)(ulong)*(byte *)(param_1 + 0xf0);
        FUN_7101e42f50((long)&pppppppplStack_c8,uVar12,(ulong)ppppppppplVar11,param_4,param_5,
                       param_6,param_7,param_8);
        uVar12 = auStack_c0[0];
        fVar27 = 0.0;
        uVar22 = (ulong)*(byte *)((long *)*plVar6 + 1);
        fVar25 = fVar27;
        if ((uVar22 < 0xe) &&
           (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) {
          lVar21 = *(long *)(lVar21 + uVar22 * 8 + 8);
          fVar25 = 0.0;
          if (lVar21 != 0) {
            uVar22 = *(ulong *)(lVar21 + 0x578);
            uVar20 = *(ulong *)(lVar21 + 0x568);
            fVar25 = 1.0;
            if ((uVar22 != uVar20) &&
               (uVar19 = ((long)uVar20 >> 0x20) * 0xe353f7cf +
                         ((uVar20 & 0xffffffff) * 0xe353f7cf >> 0x20),
               lVar21 = ((long)(((long)uVar20 >> 0x20) * 0x20c49ba5 + ((long)uVar19 >> 0x20) +
                               ((uVar20 & 0xffffffff) * 0x20c49ba5 + (uVar19 & 0xffffffff) >> 0x20))
                        >> 7) - ((long)uVar20 >> 0x3f), fVar25 = 0.0, 0 < lVar21)) {
              uVar20 = ((long)uVar22 >> 0x20) * 0xe353f7cf +
                       ((uVar22 & 0xffffffff) * 0xe353f7cf >> 0x20);
              fVar28 = (float)(((long)(((long)uVar22 >> 0x20) * 0x20c49ba5 + ((long)uVar20 >> 0x20)
                                      + ((uVar22 & 0xffffffff) * 0x20c49ba5 + (uVar20 & 0xffffffff)
                                        >> 0x20)) >> 7) - ((long)uVar22 >> 0x3f)) / (float)lVar21;
              fVar25 = 0.0;
              if (0.0 <= fVar28) {
                fVar25 = fVar28;
              }
            }
          }
        }
        if ((*(long *)(auStack_c0[0] + 8) != 0) &&
           (plVar6 = (long *)FUN_71037964b0(*(long *)(auStack_c0[0] + 8),0x71043cfbba),
           plVar6 != (long *)0x0)) {
          fVar27 = (float)(**(code **)(*plVar6 + 0x1a8))();
          uVar12 = auStack_c0[0];
        }
        FUN_7103778630((ulong)(uint)(int)(fVar25 * fVar27),uVar12,0x71043cfbba);
      }
      else {
LAB_7101e412c8:
        FUN_7101e43170((long)&pppppppplStack_c8,0xffff,ppppppppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
LAB_7101e412d4:
        FUN_7103778300(0x3f800000,auStack_c0[0],0x710438d258);
      }
      goto LAB_7101e41640;
    }
    if (cVar1 != '\x02') {
      puVar23 = (uint *)(lVar21 + uVar22 * 0xc + 8);
      goto LAB_7101e42394;
    }
    puVar23 = (uint *)(lVar21 + uVar22 * 0xc + 8);
    uVar5 = *puVar23;
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71043bec29);
    FUN_7103778430((long)param_3,"bg_search_%02d",(ulong)uVar5,param_4,param_5,param_6,param_7,
                   param_8);
    if (2 < uVar5) goto LAB_7101e42e60;
    plVar6 = (long *)(param_1 + (long)(int)uVar5 * 8 + 0x38);
    lVar21 = *(long *)(*(long *)*plVar6 + 8);
    if ((((*(char *)(lVar21 + 0x388) == '\0') ||
         (uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1), 2 < uVar12)) ||
        (lVar21 = *(long *)(lVar21 + uVar12 * 8 + 0x78), lVar21 == 0)) ||
       (1 < *(byte *)(lVar21 + 0x80) - 1)) {
      FUN_7103778300(0x3f800000,(long)param_3[1],0x710438d258);
      uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
      uVar5 = 0;
      if ((uVar12 < 3) &&
         (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) {
        lVar21 = *(long *)(lVar21 + uVar12 * 8 + 0x78);
        if (lVar21 == 0) {
          uVar5 = 0;
        }
        else {
          cVar1 = *(char *)(lVar21 + 0x80);
          uVar5 = (uint)(cVar1 == '\x02' || cVar1 == '\x04');
        }
      }
    }
    else {
      FUN_7103778300(0x3f800000,(long)param_3[1],0x710434aaac);
      uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
      uVar5 = 0;
      if ((uVar12 < 3) &&
         (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) {
        lVar21 = *(long *)(lVar21 + uVar12 * 8 + 0x78);
        if (lVar21 == 0) {
          uVar5 = 0;
        }
        else {
          cVar1 = *(char *)(lVar21 + 0x80);
          uVar5 = (uint)(cVar1 == '\x02' || cVar1 == '\x04');
        }
      }
      uVar12 = (ulong)*(byte *)(param_1 + 0xf0);
      FUN_7101e42f50((long)param_3,(ulong)uVar5,uVar12,param_4,param_5,param_6,param_7,param_8);
      fVar27 = 0.0;
      uVar22 = (ulong)*(byte *)((long *)*plVar6 + 1);
      fVar25 = fVar27;
      if ((uVar22 < 3) &&
         (lVar21 = *(long *)(*(long *)*plVar6 + 8), fVar25 = 0.0, *(char *)(lVar21 + 0x388) != '\0')
         ) {
        lVar21 = *(long *)(lVar21 + uVar22 * 8 + 0x78);
        fVar25 = 0.0;
        if ((lVar21 != 0) && (fVar25 = 0.0, *(char *)(lVar21 + 0x80) != '\0')) {
          fVar25 = 0.0;
          if (0 < *(long *)(lVar21 + 8)) {
            fVar26 = (float)*(long *)(lVar21 + 0x10) / (float)*(long *)(lVar21 + 8);
            fVar28 = fVar26;
            if (1.0 < fVar26) {
              fVar28 = 1.0;
            }
            fVar25 = 0.0;
            if (0.0 <= fVar26) {
              fVar25 = fVar28;
            }
          }
        }
      }
      pppppppplVar8 = param_3[1];
      if ((pppppppplVar8[1] != (long *******)0x0) &&
         (plVar7 = (long *)FUN_71037964b0((long)pppppppplVar8[1],0x71043cfbba),
         plVar7 != (long *)0x0)) {
        fVar27 = (float)(**(code **)(*plVar7 + 0x1a8))();
        pppppppplVar8 = param_3[1];
      }
      FUN_7103778630((ulong)(uint)(int)(fVar25 * fVar27),(long)pppppppplVar8,0x71043cfbba);
      uVar22 = (ulong)*(byte *)((long *)*plVar6 + 1);
      if (uVar22 < 3) {
        lVar18 = *(long *)(*(long *)*plVar6 + 8);
        lVar21 = *(long *)(lVar18 + uVar22 * 8 + 0x78);
        if (lVar21 == 0) {
          auVar29 = ZEXT816(0);
        }
        else {
          auVar29 = ZEXT816(0);
          if (*(char *)(lVar18 + 0x388) != '\0') {
            auVar29 = FUN_7102512c50(lVar21);
          }
        }
      }
      else {
        auVar29 = ZEXT816(0);
      }
      FUN_7103776910(&pppppppplStack_c8,(long)param_3,(long ****)"set_txt_rest",uVar12,param_4,
                     param_5,param_6,param_7,param_8);
      param_4 = (byte ****)(auVar29._0_8_ & 0xffffffff);
      param_5 = (long ****)(auVar29._8_8_ & 0xffffffff);
      FUN_710377a280((long)&pppppppplStack_c8,(byte *)"cam_searchfield_time",2);
      uVar12 = auStack_c0[0];
      pppppppplStack_c8 = (long ********)&PTR_FUN_710523d9a8;
      auStack_c0[0] = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
    }
    pbVar24 = (byte *)(param_1 + 0xf0);
    FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",0,param_4,
                   param_5,param_6,param_7,param_8);
    uVar12 = auStack_c0[0];
    FUN_7103778300(0x3f800000,auStack_c0[0],0x710442292d);
    FUN_7103778300(0x3f800000,uVar12,0x71042f893e);
    ppppppppplVar11 = (long *********)(ulong)*pbVar24;
    FUN_7101e42f50((long)&pppppppplStack_c8,(ulong)uVar5,(ulong)ppppppppplVar11,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,uVar12,0x710438d258);
    uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
    uVar9 = 0xffff;
    if ((uVar12 < 3) &&
       (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) {
      lVar21 = *(long *)(lVar21 + uVar12 * 8 + 0x78);
      if (lVar21 == 0) {
        uVar9 = 0xffff;
      }
      else {
        uVar2 = *(ushort *)(lVar21 + 0x20);
        uVar9 = 0xffff;
        if ((ulong)uVar2 != 0xffff) {
          if (uVar2 >> 4 < 0x177) {
            puVar17 = (undefined2 *)
                      (*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar2 * 0x50 + 72000);
          }
          else {
            puVar17 = &DAT_710532a878;
            if (((ushort)(uVar2 + 0xe890) < 100) &&
               (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar2 + 0xe890) * 0x50,
               *(short *)(lVar21 + 0x88cc8) != -1)) {
              puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
            }
          }
          uVar9 = puVar17[4];
        }
      }
    }
    FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,param_7,
                   param_8);
    uVar12 = auStack_c0[0];
    pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
    auStack_c0[0] = 0;
    if (uVar12 != 0) {
      uVar22 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_710392eb40(uVar12);
    }
    FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",1,param_4,
                   param_5,param_6,param_7,param_8);
    uVar12 = auStack_c0[0];
    FUN_7103778300(0x3f800000,auStack_c0[0],0x710442292d);
    FUN_7103778300(0x3f800000,uVar12,0x71042f893e);
    ppppppppplVar11 = (long *********)(ulong)*pbVar24;
    FUN_7101e42f50((long)&pppppppplStack_c8,(ulong)uVar5,(ulong)ppppppppplVar11,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,uVar12,0x710438d258);
    uVar12 = (ulong)*(byte *)((long *)*plVar6 + 1);
    uVar9 = 0xffff;
    if ((uVar12 < 3) &&
       (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) {
      lVar21 = *(long *)(lVar21 + uVar12 * 8 + 0x78);
      if (lVar21 == 0) {
        uVar9 = 0xffff;
      }
      else {
        uVar2 = *(ushort *)(lVar21 + 0x38);
        uVar9 = 0xffff;
        if ((ulong)uVar2 != 0xffff) {
          if (uVar2 >> 4 < 0x177) {
            puVar17 = (undefined2 *)
                      (*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar2 * 0x50 + 72000);
          }
          else {
            puVar17 = &DAT_710532a878;
            if (((ushort)(uVar2 + 0xe890) < 100) &&
               (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar2 + 0xe890) * 0x50,
               *(short *)(lVar21 + 0x88cc8) != -1)) {
              puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
            }
          }
          uVar9 = puVar17[4];
        }
      }
    }
    FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,param_7,
                   param_8);
    uVar12 = auStack_c0[0];
    pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
    auStack_c0[0] = 0;
    if (uVar12 != 0) {
      uVar22 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_710392eb40(uVar12);
    }
    FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",2,param_4,
                   param_5,param_6,param_7,param_8);
    uVar12 = auStack_c0[0];
    FUN_7103778300(0x3f800000,auStack_c0[0],0x710442292d);
    FUN_7103778300(0x3f800000,uVar12,0x71042f893e);
    ppppppppplVar11 = (long *********)(ulong)*pbVar24;
    FUN_7101e42f50((long)&pppppppplStack_c8,(ulong)uVar5,(ulong)ppppppppplVar11,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,uVar12,0x710438d258);
    uVar22 = (ulong)*(byte *)((long *)*plVar6 + 1);
    uVar9 = 0xffff;
    if ((uVar22 < 3) &&
       (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) {
      lVar21 = *(long *)(lVar21 + uVar22 * 8 + 0x78);
      if (lVar21 == 0) {
        uVar9 = 0xffff;
      }
      else {
        uVar2 = *(ushort *)(lVar21 + 0x50);
        uVar9 = 0xffff;
        if ((ulong)uVar2 != 0xffff) {
          if (uVar2 >> 4 < 0x177) {
            puVar17 = (undefined2 *)
                      (*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar2 * 0x50 + 72000);
          }
          else {
            puVar17 = &DAT_710532a878;
            if (((ushort)(uVar2 + 0xe890) < 100) &&
               (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar2 + 0xe890) * 0x50,
               *(short *)(lVar21 + 0x88cc8) != -1)) {
              puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
            }
          }
          uVar9 = puVar17[4];
        }
      }
    }
    FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,param_7,
                   param_8);
    pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
    auStack_c0[0] = 0;
    if (uVar12 != 0) {
      uVar22 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_710392eb40(uVar12);
    }
    FUN_7103776640(&pppppppplStack_c8,(long)param_3,(byte ****)"set_parts_spirit_%02d",3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar12 = auStack_c0[0];
    FUN_7103778300(0x3f800000,auStack_c0[0],0x710442292d);
    FUN_7103778300(0x3f800000,uVar12,0x71042f893e);
    ppppppppplVar11 = (long *********)(ulong)*pbVar24;
    FUN_7101e42f50((long)&pppppppplStack_c8,(ulong)uVar5,(ulong)ppppppppplVar11,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,uVar12,0x710438d258);
    uVar22 = (ulong)*(byte *)((long *)*plVar6 + 1);
    uVar9 = 0xffff;
    if ((uVar22 < 3) &&
       (lVar21 = *(long *)(*(long *)*plVar6 + 8), *(char *)(lVar21 + 0x388) != '\0')) {
      lVar21 = *(long *)(lVar21 + uVar22 * 8 + 0x78);
      if (lVar21 == 0) {
        uVar9 = 0xffff;
      }
      else {
        uVar2 = *(ushort *)(lVar21 + 0x68);
        uVar9 = 0xffff;
        if ((ulong)uVar2 != 0xffff) {
          if (uVar2 >> 4 < 0x177) {
            puVar17 = (undefined2 *)
                      (*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar2 * 0x50 + 72000);
          }
          else {
            puVar17 = &DAT_710532a878;
            if (((ushort)(uVar2 + 0xe890) < 100) &&
               (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar2 + 0xe890) * 0x50,
               *(short *)(lVar21 + 0x88cc8) != -1)) {
              puVar17 = (undefined2 *)(lVar21 + 0x88cc0);
            }
          }
          uVar9 = puVar17[4];
        }
      }
    }
    FUN_7101e43170((long)&pppppppplStack_c8,uVar9,ppppppppplVar11,param_4,param_5,param_6,param_7,
                   param_8);
    pppppppplStack_c8 = (long ********)&PTR_FUN_710523d988;
    auStack_c0[0] = 0;
    if (uVar12 == 0) goto LAB_7101e42394;
    uVar22 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
  }
  FUN_710392eb40(uVar12);
LAB_7101e42394:
  FUN_7103776910(&ppuStack_80,(long)param_3,(long ****)"set_txt_place",ppppppppplVar11,param_4,
                 param_5,param_6,param_7,param_8);
  ppppppppplVar11 = (long *********)(ulong)*puVar23;
  FUN_7102512ec0((uint *)&pppppppplStack_c8,*pcVar10,ppppppppplVar11,param_4,param_5,param_6,param_7
                 ,param_8);
  FUN_710377a120((long)&ppuStack_80,(char *)auStack_c0,ppppppppplVar11,param_4,param_5,param_6,
                 param_7,param_8);
  uVar12 = uStack_78;
  ppuStack_80 = &PTR_FUN_710523d9a8;
  uStack_78 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  sVar4 = FUN_7102512d40(*pcVar10,(ulong)*puVar23);
  uVar12 = *(ulong *)(param_1 + 0xd0);
  if (uVar12 != 0) {
    uVar20 = uVar12 - 1;
    uVar22 = (ulong)sVar4;
    if ((uVar20 & uVar12) == 0) {
      uVar19 = uVar20 & uVar22;
    }
    else {
      uVar19 = uVar22;
      if (uVar12 <= uVar22) {
        uVar19 = 0;
        if (uVar12 != 0) {
          uVar19 = uVar22 / uVar12;
        }
        uVar19 = uVar22 - uVar19 * uVar12;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 200) + uVar19 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if ((uVar20 & uVar12) == 0) {
        do {
          uVar12 = plVar6[1];
          if (uVar12 != uVar22 && (uVar12 & uVar20) != uVar19) {
            return;
          }
          if ((uVar12 == uVar22) && ((short)plVar6[2] == sVar4)) goto LAB_7101e424ac;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar6[1];
          if (uVar20 == uVar22) {
            if ((short)plVar6[2] == sVar4) {
LAB_7101e424ac:
              FUN_7103776910(&pppppppplStack_c8,(long)param_3,(long ****)"set_rep_master",
                             ppppppppplVar11,param_4,param_5,param_6,param_7,param_8);
              uVar12 = auStack_c0[0];
              FUN_7103778b80(auStack_c0[0],(long)(plVar6 + 3),ppppppppplVar11,param_4,param_5,
                             param_6,param_7,param_8);
              FUN_7103776910(&ppuStack_80,(long)param_3,(long ****)"set_rep_master_sdw",
                             ppppppppplVar11,param_4,param_5,param_6,param_7,param_8);
              uVar22 = uStack_78;
              FUN_7103778b80(uStack_78,(long)(plVar6 + 3),ppppppppplVar11,param_4,param_5,param_6,
                             param_7,param_8);
              ppuStack_80 = &PTR_FUN_710523d9a8;
              uStack_78 = 0;
              if (uVar22 != 0) {
                FUN_710392eb40(uVar22);
              }
              pppppppplStack_c8 = (long ********)&PTR_FUN_710523d9a8;
              auStack_c0[0] = 0;
              if (uVar12 == 0) {
                return;
              }
              FUN_710392eb40(uVar12);
              return;
            }
          }
          else {
            if (uVar12 <= uVar20) {
              uVar3 = 0;
              if (uVar12 != 0) {
                uVar3 = uVar20 / uVar12;
              }
              uVar20 = uVar20 - uVar3 * uVar12;
            }
            if (uVar20 != uVar19) {
              return;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return;
}

