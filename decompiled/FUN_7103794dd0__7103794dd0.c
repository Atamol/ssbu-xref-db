// addr:      7103794dd0
// offset:    0x3794dd0
// name:      FUN_7103794dd0
// mangled:   
// signature: long * __cdecl FUN_7103794dd0(undefined8 param_1, long * param_2, long * * * * param_3, int param_4, long * * * * param_5, long param_6, float * param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_7103794dd0(undefined8 param_1,long *param_2,long ****param_3,int param_4,long ****param_5
                     ,long param_6,float *param_7,undefined8 param_8)

{
  char *pcVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  void *__dest;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  long ***ppplVar17;
  byte *pbVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  long *plVar24;
  void *__src;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  long lVar31;
  float fVar32;
  byte ***apppbStack_b8 [5];
  undefined8 local_90;
  undefined4 local_84;
  
  if (param_4 < 0x316e6170) {
    if (param_4 < 0x31646e77) {
      if (param_4 != 0x31636970) {
        if (param_4 != 0x31646e62) {
          return (long *)0x0;
        }
        cVar3 = *(char *)((long)param_5 + 0xc);
        if (cVar3 == 'm') {
          if (((*(char *)((long)param_5 + 0xd) == 'a') && (*(char *)((long)param_5 + 0xe) == 's'))
             && (*(char *)((long)param_5 + 0xf) == 'k')) goto LAB_7103794fd4;
          cVar3 = *(char *)((long)param_5 + 0xc);
        }
        if (((((cVar3 == 's') && (*(char *)((long)param_5 + 0xd) == 'e')) &&
             ((*(char *)((long)param_5 + 0xe) == 't' &&
              ((*(char *)((long)param_5 + 0xf) == '_' && (*(char *)(param_5 + 2) == 'm')))))) &&
            (*(char *)((long)param_5 + 0x11) == 'a')) &&
           ((*(char *)((long)param_5 + 0x12) == 's' && (*(char *)((long)param_5 + 0x13) == 'k')))) {
LAB_7103794fd4:
          plVar6 = (long *)FUN_7100048d90(0xe0,0x10);
          if (plVar6 == (long *)0x0) {
            return (long *)0x0;
          }
          FUN_7100043160(plVar6,(long)param_5,param_6,param_7);
          *plVar6 = (long)&PTR_thunk_FUN_7100056c40_710523ffe8;
          return plVar6;
        }
        cVar3 = *(char *)((long)param_5 + 0xc);
        if (cVar3 == 'f') {
          if (((*(char *)((long)param_5 + 0xd) == 'x') && (*(char *)((long)param_5 + 0xe) == 'u'))
             && (*(char *)((long)param_5 + 0xf) == 'i')) goto LAB_71037953ac;
          cVar3 = *(char *)((long)param_5 + 0xc);
        }
        if ((((cVar3 != 's') || (*(char *)((long)param_5 + 0xd) != 'e')) ||
            ((*(char *)((long)param_5 + 0xe) != 't' ||
             ((*(char *)((long)param_5 + 0xf) != '_' || (*(char *)(param_5 + 2) != 'f')))))) ||
           ((*(char *)((long)param_5 + 0x11) != 'x' ||
            ((*(char *)((long)param_5 + 0x12) != 'u' || (*(char *)((long)param_5 + 0x13) != 'i')))))
           ) {
          plVar6 = (long *)FUN_7100048d90(0xe0,0x10);
          if (plVar6 == (long *)0x0) {
            return (long *)0x0;
          }
          FUN_7100043160(plVar6,(long)param_5,param_6,param_7);
          return plVar6;
        }
LAB_71037953ac:
        plVar6 = (long *)FUN_7100048d90(0x150,0x10);
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        FUN_710378ccb0(plVar6,(long)param_5,param_6,param_7);
        return plVar6;
      }
      cVar3 = *(char *)((long)param_5 + 0xc);
      if (cVar3 == 'm') {
        if (((*(char *)((long)param_5 + 0xd) == 'a') && (*(char *)((long)param_5 + 0xe) == 's')) &&
           (*(char *)((long)param_5 + 0xf) == 'k')) goto LAB_71037950cc;
        cVar3 = *(char *)((long)param_5 + 0xc);
      }
      if ((((cVar3 == 's') && (*(char *)((long)param_5 + 0xd) == 'e')) &&
          ((*(char *)((long)param_5 + 0xe) == 't' &&
           ((*(char *)((long)param_5 + 0xf) == '_' && (*(char *)(param_5 + 2) == 'm')))))) &&
         ((*(char *)((long)param_5 + 0x11) == 'a' &&
          ((*(char *)((long)param_5 + 0x12) == 's' && (*(char *)((long)param_5 + 0x13) == 'k'))))))
      {
LAB_71037950cc:
        plVar6 = (long *)FUN_7100048d90(0x110,0x10);
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        FUN_710005e0c0(plVar6,param_2,param_3,(long)param_5,param_6,param_7);
        *plVar6 = (long)&PTR_thunk_FUN_710005e8a0_71052400d8;
        plVar6[0x20] = 0;
        *(undefined2 *)(plVar6 + 0x21) = 0x101;
        puVar8 = FUN_71000598d0((long)plVar6,"mask_scissor_optimize");
        if (puVar8 == (uint *)0x0) {
          return plVar6;
        }
        if (*(char *)((long)puVar8 + 10) != '\x01') {
          return plVar6;
        }
        *(bool *)(plVar6 + 0x21) = *(int *)((long)puVar8 + (ulong)puVar8[1]) != 0;
        return plVar6;
      }
      pfVar14 = param_7;
      plVar6 = (long *)FUN_7100048d90(0x240,0x10);
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      FUN_710005e0c0(plVar6,param_2,param_3,(long)param_5,param_6,param_7);
      *(undefined4 *)(plVar6 + 0x2a) = 0;
      *plVar6 = (long)&PTR_FUN_7105240748;
      plVar6[0x28] = 0;
      plVar6[0x29] = 0;
      *(undefined1 *)(plVar6 + 0x40) = 0;
      plVar6[0x2b] = (long)plVar6;
      plVar6[0x26] = 0;
      plVar6[0x27] = 0;
      plVar6[0x24] = 0;
      plVar6[0x25] = 0;
      plVar6[0x22] = 0;
      plVar6[0x23] = 0;
      plVar6[0x20] = 0;
      plVar6[0x21] = 0;
      plVar6[0x3e] = 0;
      plVar6[0x3f] = 0;
      plVar6[0x3c] = 0;
      plVar6[0x3d] = 0;
      plVar6[0x3a] = 0;
      plVar6[0x3b] = 0;
      plVar6[0x38] = 0;
      plVar6[0x39] = 0;
      plVar6[0x36] = 0;
      plVar6[0x37] = 0;
      plVar6[0x34] = 0;
      plVar6[0x35] = 0;
      plVar6[0x32] = 0;
      plVar6[0x33] = 0;
      plVar6[0x30] = 0;
      plVar6[0x31] = 0;
      plVar6[0x2e] = 0;
      plVar6[0x2f] = 0;
      plVar6[0x2c] = 0;
      plVar6[0x2d] = 0;
      lVar20 = _ConstantZero;
      plVar6[0x43] = lRam0000007107459008;
      plVar6[0x42] = lVar20;
      lVar15 = lRam00000071078a8008;
      lVar20 = _ConstantOne;
      *(undefined4 *)(plVar6 + 0x46) = 0;
      *(undefined2 *)((long)plVar6 + 0x234) = 0;
      plVar6[0x45] = lVar15;
      plVar6[0x44] = lVar20;
      FUN_71037a3940(plVar6 + 0x2b,extraout_x1_00,param_3,param_5,param_6,param_7,pfVar14,param_8);
      lVar20 = FUN_71000597e0(plVar6);
      if ((lVar20 != 0) && ((*(byte *)(lVar20 + 0x14) & 3) != 0)) {
        plVar6[0x20] = *(long *)(*(long *)(lVar20 + 0x18) + 8);
        lVar15 = plVar6[0x43];
        puVar9 = (undefined4 *)
                 (*(long *)(lVar20 + 0x18) + ((ulong)*(uint *)(lVar20 + 0x10) & 3) * 0x10);
        uVar27 = *puVar9;
        plVar6[0x43] = lVar15;
        plVar6[0x42] = CONCAT44((int)((ulong)plVar6[0x42] >> 0x20),uVar27);
        uVar30 = puVar9[1];
        plVar6[0x43] = lVar15;
        plVar6[0x42] = CONCAT44(uVar30,uVar27);
        lVar31 = plVar6[0x45];
        lVar15 = *(long *)(lVar20 + 0x18) + ((ulong)*(uint *)(lVar20 + 0x10) & 3) * 0x10;
        uVar27 = *(undefined4 *)(lVar15 + 0xc);
        plVar6[0x45] = lVar31;
        plVar6[0x44] = CONCAT44((int)((ulong)plVar6[0x44] >> 0x20),uVar27);
        uVar30 = *(undefined4 *)(lVar15 + 0x10);
        plVar6[0x45] = lVar31;
        plVar6[0x44] = CONCAT44(uVar30,uVar27);
        *(undefined4 *)(plVar6 + 0x46) =
             *(undefined4 *)
              (*(long *)(lVar20 + 0x18) + ((ulong)*(uint *)(lVar20 + 0x10) & 3) * 0x10 + 8);
      }
      lVar20 = FUN_71000597e0(plVar6);
      if ((lVar20 != 0) && ((*(byte *)(lVar20 + 0x14) >> 1 & 1) != 0)) {
        plVar6[0x22] = *(long *)(*(long *)(lVar20 + 0x18) + 0x18);
      }
      lVar20 = FUN_71000597e0(plVar6);
      if ((lVar20 != 0) && ((~*(uint *)(lVar20 + 0x14) & 3) == 0)) {
        plVar6[0x24] = *(long *)(*(long *)(lVar20 + 0x18) + 0x28);
      }
      *(undefined4 *)(plVar6 + 0x2a) = 0;
      plVar6[0x28] = 0;
      plVar6[0x29] = 0;
    }
    else {
      if (param_4 != 0x31646e77) {
        if (param_4 != 0x31696c61) {
          return (long *)0x0;
        }
        plVar6 = (long *)FUN_7100048d90(0xe0,0x10);
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        FUN_710006b7a0(plVar6,(long)param_5,param_7);
        return plVar6;
      }
      pfVar14 = param_7;
      plVar6 = (long *)FUN_7100048d90(0x240,0x10);
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      FUN_7100067890(plVar6,param_2,param_3,(long)param_5,param_6,param_7);
      plVar6[0x26] = 0;
      *plVar6 = (long)&PTR_FUN_7105241540;
      *(undefined4 *)(plVar6 + 0x2b) = 0;
      plVar6[0x29] = 0;
      plVar6[0x2a] = 0;
      *(undefined1 *)(plVar6 + 0x41) = 0;
      plVar6[0x2c] = (long)plVar6;
      plVar6[0x27] = 0;
      plVar6[0x28] = 0;
      plVar6[0x3f] = 0;
      plVar6[0x40] = 0;
      plVar6[0x3d] = 0;
      plVar6[0x3e] = 0;
      plVar6[0x3b] = 0;
      plVar6[0x3c] = 0;
      plVar6[0x39] = 0;
      plVar6[0x3a] = 0;
      plVar6[0x37] = 0;
      plVar6[0x38] = 0;
      plVar6[0x35] = 0;
      plVar6[0x36] = 0;
      plVar6[0x33] = 0;
      plVar6[0x34] = 0;
      plVar6[0x31] = 0;
      plVar6[0x32] = 0;
      plVar6[0x2f] = 0;
      plVar6[0x30] = 0;
      plVar6[0x2d] = 0;
      plVar6[0x2e] = 0;
      lVar20 = _ConstantZero;
      plVar6[0x43] = lRam0000007107459008;
      plVar6[0x42] = lVar20;
      lVar15 = lRam00000071078a8008;
      lVar20 = _ConstantOne;
      *(undefined1 *)((long)plVar6 + 0x236) = 0;
      *(undefined2 *)((long)plVar6 + 0x234) = 0;
      *(undefined4 *)(plVar6 + 0x46) = 0;
      plVar6[0x45] = lVar15;
      plVar6[0x44] = lVar20;
      FUN_71037a3940(plVar6 + 0x2c,extraout_x1,param_3,param_5,param_6,param_7,pfVar14,param_8);
      lVar20 = plVar6[0x23];
      if ((lVar20 != 0) && ((*(byte *)(lVar20 + 0x14) & 3) != 0)) {
        plVar6[0x26] = *(long *)(*(long *)(lVar20 + 0x18) + 8);
        lVar15 = plVar6[0x43];
        puVar9 = (undefined4 *)
                 (*(long *)(lVar20 + 0x18) + ((ulong)*(uint *)(lVar20 + 0x10) & 3) * 0x10);
        uVar27 = *puVar9;
        plVar6[0x43] = lVar15;
        plVar6[0x42] = CONCAT44((int)((ulong)plVar6[0x42] >> 0x20),uVar27);
        uVar30 = puVar9[1];
        plVar6[0x43] = lVar15;
        plVar6[0x42] = CONCAT44(uVar30,uVar27);
        lVar31 = plVar6[0x45];
        lVar15 = *(long *)(lVar20 + 0x18) + ((ulong)*(uint *)(lVar20 + 0x10) & 3) * 0x10;
        uVar27 = *(undefined4 *)(lVar15 + 0xc);
        plVar6[0x45] = lVar31;
        plVar6[0x44] = CONCAT44((int)((ulong)plVar6[0x44] >> 0x20),uVar27);
        uVar30 = *(undefined4 *)(lVar15 + 0x10);
        plVar6[0x45] = lVar31;
        plVar6[0x44] = CONCAT44(uVar30,uVar27);
        *(undefined4 *)(plVar6 + 0x46) =
             *(undefined4 *)
              (*(long *)(lVar20 + 0x18) + ((ulong)*(uint *)(lVar20 + 0x10) & 3) * 0x10 + 8);
      }
      *(undefined4 *)(plVar6 + 0x2b) = 0;
      plVar6[0x29] = 0;
      plVar6[0x2a] = 0;
    }
    *(undefined1 *)((long)plVar6 + 0x234) = 1;
    return plVar6;
  }
  if (param_4 < 0x31747063) {
    if (param_4 == 0x316e6170) {
      plVar6 = (long *)FUN_7100048d90(0xe0,0x10);
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      FUN_7100057350(plVar6,param_2,param_3,(long)param_5,param_7);
      return plVar6;
    }
    if (param_4 != 0x31726373) {
      return (long *)0x0;
    }
    plVar6 = (long *)FUN_7100048d90(0xe0,0x10);
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_710006e690(plVar6,(long)param_5,param_7);
    return plVar6;
  }
  if (param_4 == 0x31747063) {
    plVar6 = (long *)FUN_7100048d90(0xe0,0x10);
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_7100043310(plVar6,(long)param_5,param_6,param_7);
    return plVar6;
  }
  if (param_4 == 0x31747270) {
    plVar6 = (long *)FUN_7100048d90(0xf0,0x10);
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_710005de10(plVar6,(long)param_5,param_6,param_7);
    return plVar6;
  }
  if (param_4 != 0x31747874) {
    return (long *)0x0;
  }
  plVar6 = (long *)FUN_7100048d90(0x290,0x10);
  if (plVar6 == (long *)0x0) goto LAB_7103795e20;
  ppppbVar13 = apppbStack_b8;
  pfVar14 = param_7;
  FUN_7100060f60(plVar6,param_2,param_3,(uint *)ppppbVar13,(long)param_5,param_6,param_7);
  *plVar6 = (long)&PTR_FUN_7105241320;
  plVar24 = (long *)(*DAT_710593ba90 + 0x390);
  do {
    lVar20 = *plVar24;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar4) {
      *plVar24 = lVar20 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar6[0x2b] = lVar20 + 1;
  plVar6[0x2c] = 0;
  plVar6[0x4a] = (long)&DAT_3f8000003f800000;
  *(undefined4 *)(plVar6 + 0x2d) = 0;
  plVar6[0x38] = 0;
  plVar6[0x40] = 0;
  *(undefined1 *)(plVar6 + 0x30) = 0;
  plVar6[0x49] = 0;
  plVar6[0x48] = 0;
  plVar6[0x47] = 0;
  plVar6[0x46] = 0;
  plVar6[0x45] = 0;
  plVar6[0x44] = 0;
  plVar6[0x43] = 0;
  plVar6[0x42] = 0;
  *(undefined4 *)(plVar6 + 0x4f) = 0;
  plVar6[0x4e] = 0;
  plVar6[0x4d] = 0;
  plVar6[0x4c] = 0;
  plVar6[0x4b] = 0;
  *(undefined1 *)((long)plVar6 + 0x27c) = 1;
  plVar6[0x39] = 0;
  plVar6[0x3a] = 0;
  plVar6[0x2e] = 0;
  plVar6[0x2f] = 0;
  *(undefined4 *)((long)plVar6 + 0x27d) = 0;
  *(undefined1 *)((long)plVar6 + 0x281) = 1;
  puVar23 = *(undefined8 **)(param_7 + 8);
  if (((DAT_710593bae8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593bae8), iVar5 != 0)) {
    if (((DAT_710593baf0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593baf0), iVar5 != 0)) {
      DAT_710593baf8 = 0;
      __cxa_guard_release(&DAT_710593baf0);
    }
    DAT_710593bb00 = &DAT_710593baf8;
    __cxa_guard_release(&DAT_710593bae8);
  }
  if (puVar23 != (undefined8 *)0x0) {
    for (puVar7 = (undefined8 *)(**(code **)*puVar23)(puVar23); puVar7 != (undefined8 *)0x0;
        puVar7 = (undefined8 *)*puVar7) {
      if ((undefined8 **)puVar7 == &DAT_710593bb00) {
        lVar20 = puVar23[0xd];
        *(ushort *)((long)plVar6 + 0x114) =
             *(ushort *)((long)plVar6 + 0x114) & 0xfffb |
             (*(ushort *)((long)plVar6 + 0x114) >> 2 & 1 | (ushort)(plVar6[0x21] != lVar20)) << 2;
        if (plVar6[0x21] != lVar20) {
          plVar6[0x21] = lVar20;
        }
        break;
      }
    }
  }
  puVar8 = FUN_71000598d0((long)plVar6,"NoRubyText");
  if ((puVar8 != (uint *)0x0) && (*(char *)((long)puVar8 + 10) == '\x01')) {
    *(bool *)(plVar6 + 0x4f) = *(int *)((long)puVar8 + (ulong)puVar8[1]) != 0;
  }
  puVar8 = FUN_71000598d0((long)plVar6,"RubySettings");
  if ((puVar8 != (uint *)0x0) && (*(char *)((long)puVar8 + 10) == '\x02')) {
    uVar2 = (ushort)puVar8[2];
    uVar30 = 0x41a00000;
    uVar22 = 0x3e428f5c;
    uVar27 = 0x41400000;
    if (uVar2 == 0) {
      uVar26 = 0;
      uVar25 = 0x3e570a3d;
    }
    else {
      puVar9 = (undefined4 *)((long)puVar8 + (ulong)puVar8[1]);
      uVar25 = *puVar9;
      uVar22 = 0x3e428f5c;
      if (((uVar2 == 1) || (uVar27 = puVar9[1], uVar2 < 3)) || (uVar30 = puVar9[2], uVar2 == 3)) {
        uVar26 = 0;
      }
      else {
        uVar26 = puVar9[3];
        if (4 < uVar2) {
          uVar22 = puVar9[4];
        }
      }
    }
    puVar9 = (undefined4 *)
             FUN_710392e290(0x10,0x1c,param_3,ppppbVar13,param_5,param_6,pfVar14,param_8);
    if (puVar9 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_84 = 0;
        local_90 = (long ***)&DAT_0000001c;
        param_3 = (long ****)&local_90;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
        if (((uVar10 & 1) != 0) &&
           (puVar9 = (undefined4 *)
                     FUN_710392e290(0x10,0x1c,param_3,ppppbVar13,param_5,param_6,pfVar14,param_8),
           puVar9 != (undefined4 *)0x0)) goto LAB_7103795790;
      }
      puVar9 = (undefined4 *)0x0;
    }
LAB_7103795790:
    *puVar9 = uVar25;
    puVar9[1] = uVar27;
    puVar9[2] = uVar30;
    *(undefined8 *)(puVar9 + 3) = 0x41400000;
    puVar9[5] = uVar26;
    puVar9[6] = uVar22;
    uVar10 = plVar6[0x4c];
    plVar6[0x4c] = (long)puVar9;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  puVar8 = FUN_71000598d0((long)plVar6,"RubyTextColor");
  if (((puVar8 != (uint *)0x0) && (*(char *)((long)puVar8 + 10) == '\x01')) &&
     (3 < (ushort)puVar8[2])) {
    pbVar18 = (byte *)((long)puVar8 + (ulong)puVar8[1]);
    fVar28 = (float)NEON_ucvtf((uint)*pbVar18);
    fVar28 = fVar28 / 255.0;
    if (fVar28 <= 0.04045) {
      fVar28 = fVar28 / 12.92;
    }
    else {
      fVar28 = powf((fVar28 + 0.055) / 1.055,2.4);
      pbVar18 = (byte *)((long)puVar8 + (ulong)puVar8[1]);
    }
    fVar32 = (float)NEON_ucvtf((uint)pbVar18[4]);
    fVar32 = fVar32 / 255.0;
    if (fVar32 <= 0.04045) {
      fVar32 = fVar32 / 12.92;
    }
    else {
      fVar32 = powf((fVar32 + 0.055) / 1.055,2.4);
      pbVar18 = (byte *)((long)puVar8 + (ulong)puVar8[1]);
    }
    fVar29 = (float)NEON_ucvtf((uint)pbVar18[8]);
    fVar29 = fVar29 / 255.0;
    if (fVar29 <= 0.04045) {
      fVar29 = fVar29 / 12.92;
    }
    else {
      fVar29 = powf((fVar29 + 0.055) / 1.055,2.4);
      pbVar18 = (byte *)((long)puVar8 + (ulong)puVar8[1]);
    }
    iVar5 = *(int *)(pbVar18 + 0xc);
    puVar8 = (uint *)FUN_710392e290(0x10,4,param_3,ppppbVar13,param_5,param_6,pfVar14,param_8);
    if (puVar8 == (uint *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_84 = 0;
        local_90 = (long ***)&DAT_00000004;
        param_3 = (long ****)&local_90;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
        if (((uVar10 & 1) != 0) &&
           (puVar8 = (uint *)FUN_710392e290(0x10,4,param_3,ppppbVar13,param_5,param_6,pfVar14,
                                            param_8), puVar8 != (uint *)0x0)) goto LAB_7103795974;
      }
      puVar8 = (uint *)0x0;
    }
LAB_7103795974:
    *puVar8 = (int)(fVar28 * 255.01) & 0xffU | ((int)(fVar32 * 255.01) & 0xffU) << 8 |
              ((int)(fVar29 * 255.01) & 0xffU) << 0x10 | iVar5 << 0x18;
    uVar10 = plVar6[0x4d];
    plVar6[0x4d] = (long)puVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  puVar8 = FUN_71000598d0((long)plVar6,"RubyColorIndex");
  if (((puVar8 != (uint *)0x0) && (*(char *)((long)puVar8 + 10) == '\x01')) &&
     ((short)puVar8[2] != 0)) {
    puVar23 = (undefined8 *)
              FUN_710392e290(0x10,0x10,param_3,ppppbVar13,param_5,param_6,pfVar14,param_8);
    if (puVar23 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_84 = 0;
        local_90 = (long ***)&DAT_00000010;
        param_3 = (long ****)&local_90;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
        if (((uVar10 & 1) != 0) &&
           (puVar23 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,param_3,ppppbVar13,param_5,param_6,pfVar14,param_8),
           puVar23 != (undefined8 *)0x0)) goto LAB_7103795a0c;
      }
      puVar23 = (undefined8 *)0x0;
    }
LAB_7103795a0c:
    *puVar23 = 0;
    puVar23[1] = 0;
    uVar10 = plVar6[0x4e];
    plVar6[0x4e] = (long)puVar23;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
      puVar23 = (undefined8 *)plVar6[0x4e];
    }
    *puVar23 = puVar8;
    *(undefined4 *)(plVar6[0x4e] + 8) = 0;
    puVar8 = (uint *)FUN_710392e290(0x10,4,param_3,ppppbVar13,param_5,param_6,pfVar14,param_8);
    if (puVar8 == (uint *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_84 = 0;
        local_90 = (long ***)&DAT_00000004;
        pppplVar11 = (long ****)&local_90;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
        if (((uVar10 & 1) != 0) &&
           (puVar8 = (uint *)FUN_710392e290(0x10,4,pppplVar11,ppppbVar13,param_5,param_6,pfVar14,
                                            param_8), puVar8 != (uint *)0x0)) goto LAB_7103795a90;
      }
      puVar8 = (uint *)0x0;
    }
LAB_7103795a90:
    *puVar8 = 0xffffffff;
    uVar10 = plVar6[0x4d];
    plVar6[0x4d] = (long)puVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
      puVar8 = (uint *)plVar6[0x4d];
    }
    FUN_71037a11f0((long)plVar6,(ulong)*(uint *)(plVar6[0x4e] + 8),puVar8,ppppbVar13,param_5,param_6
                   ,pfVar14,param_8);
  }
  puVar8 = FUN_71000598d0((long)plVar6,"TextAlignMode");
  if ((puVar8 != (uint *)0x0) && (*(char *)((long)puVar8 + 10) == '\x01')) {
    *(undefined4 *)((long)plVar6 + 0x164) = *(undefined4 *)((long)puVar8 + (ulong)puVar8[1]);
  }
  puVar8 = FUN_71000598d0((long)plVar6,"NoNewLine");
  if ((puVar8 != (uint *)0x0) && (*(char *)((long)puVar8 + 10) == '\x01')) {
    *(undefined4 *)(plVar6 + 0x2d) = *(undefined4 *)((long)puVar8 + (ulong)puVar8[1]);
  }
  if (*(int *)((long)plVar6 + 0x164) != 2) {
    *(ushort *)((long)plVar6 + 0x114) = *(ushort *)((long)plVar6 + 0x114) & 0xffbf;
  }
  puVar8 = FUN_71000598d0((long)plVar6,"FixedWidth");
  if ((puVar8 != (uint *)0x0) && (*(char *)((long)puVar8 + 10) == '\x02')) {
    *(undefined4 *)(plVar6 + 0x4b) = *(undefined4 *)((long)puVar8 + (ulong)puVar8[1]);
  }
  plVar6[0x42] = plVar6[10];
  plVar6[0x43] = plVar6[0x1f];
  *(undefined4 *)(plVar6 + 0x45) = *(undefined4 *)((long)plVar6 + 0x104);
  *(int *)((long)plVar6 + 0x22c) = (int)plVar6[0x20];
  *(undefined4 *)((long)plVar6 + 0x25c) = *(undefined4 *)(*DAT_710593ba90 + 0x3ac);
  puVar23 = (undefined8 *)FUN_7100063ef0((long)plVar6);
  if (((DAT_710593b910 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593b910), iVar5 != 0)) {
    if (((DAT_710593b918 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593b918), iVar5 != 0)) {
      if (((DAT_710593b920 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593b920), iVar5 != 0))
      {
        DAT_710593b928 = 0;
        __cxa_guard_release(&DAT_710593b920);
      }
      DAT_710593b930 = &DAT_710593b928;
      __cxa_guard_release(&DAT_710593b918);
    }
    DAT_710593b938 = &DAT_710593b930;
    __cxa_guard_release(&DAT_710593b910);
  }
  if (puVar23 != (undefined8 *)0x0) {
    for (puVar7 = (undefined8 *)(**(code **)*puVar23)(puVar23); puVar7 != (undefined8 *)0x0;
        puVar7 = (undefined8 *)*puVar7) {
      if ((undefined8 **)puVar7 == &DAT_710593b938) {
        plVar6[0x2e] = (long)puVar23;
        uVar10 = 0;
        goto LAB_7103795c80;
      }
    }
  }
  plVar6[0x2e] = 0;
  goto LAB_7103795be0;
LAB_7103795c80:
  pcVar1 = (char *)((long)puVar23 + uVar10 + 0x40);
  cVar3 = *pcVar1;
  if (cVar3 == '\0') goto LAB_7103795ed8;
  *(char *)((long)plVar6 + uVar10 + 0x180) = cVar3;
  if (0x3e < (int)uVar10 + 1U) {
    uVar10 = (ulong)((int)uVar10 + 1);
    goto LAB_7103795ed8;
  }
  cVar3 = pcVar1[1];
  if (cVar3 == '\0') {
    uVar10 = uVar10 + 1;
    goto LAB_7103795ed8;
  }
  *(char *)((long)plVar6 + uVar10 + 0x181) = cVar3;
  uVar10 = uVar10 + 2;
  goto LAB_7103795c80;
LAB_7103795ed8:
  *(undefined1 *)((long)plVar6 + (uVar10 & 0xffffffff) + 0x180) = 0;
  uVar21 = (uint)*(byte *)(plVar6 + 0x30);
  uVar19 = 0x811c9dc5;
  *(int *)((long)plVar6 + 0x17c) = (int)uVar10;
  if (*(byte *)(plVar6 + 0x30) != 0) {
    pbVar18 = (byte *)((long)plVar6 + 0x181);
    do {
      uVar19 = uVar19 * 0x89 ^ uVar21;
      uVar21 = (uint)*pbVar18;
      pbVar18 = pbVar18 + 1;
    } while (uVar21 != 0);
  }
  *(uint *)(plVar6 + 0x2f) = uVar19;
LAB_7103795be0:
  lVar20 = *DAT_710593ba90;
  std::mutex::lock();
  puVar23 = *(undefined8 **)(lVar20 + 0x3f0);
  if (puVar23 == *(undefined8 **)(lVar20 + 0x3f8)) {
    __src = *(void **)(lVar20 + 1000);
    pppplVar11 = (long ****)((long)puVar23 - (long)__src);
    uVar10 = ((long)pppplVar11 >> 3) + 1;
    if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = (long)*(undefined8 **)(lVar20 + 0x3f8) - (long)__src;
    if ((ulong)(lVar15 >> 3) < 0xfffffffffffffff) {
      uVar16 = lVar15 >> 2;
      if (uVar10 <= uVar16) {
        uVar10 = uVar16;
      }
      if (uVar10 != 0) {
        if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7103795cb8;
      }
      __dest = (void *)0x0;
    }
    else {
      uVar10 = 0x1fffffffffffffff;
LAB_7103795cb8:
      ppplVar17 = (long ***)(uVar10 * 8);
      if (ppplVar17 == (long ***)0x0) {
        ppplVar17 = (long ***)0x1;
      }
      __dest = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar11,ppppbVar13,param_5,param_6,pfVar14,
                                      param_8);
      if (__dest == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_84 = 0;
          pppplVar12 = (long ****)&local_90;
          local_90 = ppplVar17;
          uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
          if (((uVar16 & 1) != 0) &&
             (__dest = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar12,ppppbVar13,param_5,param_6,
                                              pfVar14,param_8), __dest != (void *)0x0))
          goto LAB_7103795d20;
        }
        __dest = (void *)0x0;
      }
    }
LAB_7103795d20:
    puVar23 = (undefined8 *)((long)__dest + ((long)pppplVar11 >> 3) * 8);
    *puVar23 = plVar6;
    if (0 < (long)pppplVar11) {
      memcpy(__dest,__src,(size_t)pppplVar11);
    }
    *(void **)(lVar20 + 1000) = __dest;
    *(undefined8 **)(lVar20 + 0x3f0) = puVar23 + 1;
    *(void **)(lVar20 + 0x3f8) = (void *)((long)__dest + uVar10 * 8);
    if (__src != (void *)0x0) {
      FUN_710392eb40((ulong)__src);
    }
  }
  else {
    *puVar23 = plVar6;
    *(long *)(lVar20 + 0x3f0) = *(long *)(lVar20 + 0x3f0) + 8;
  }
  std::mutex::unlock();
  plVar24 = (long *)plVar6[0x2e];
  if (plVar24 == (long *)0x0) {
    plVar24 = *(long **)*DAT_710593b8d8;
    if (plVar24 == (long *)((long *)*DAT_710593b8d8)[1]) {
      plVar6[0x2e] = 0;
      FUN_7100063f00((long)plVar6,(long *)0x0);
      lVar20 = plVar6[0x2e];
      if (lVar20 != 0) {
        uVar10 = 0;
        while( true ) {
          pcVar1 = (char *)(lVar20 + 0x40 + uVar10);
          cVar3 = *pcVar1;
          if (cVar3 == '\0') break;
          *(char *)((long)plVar6 + uVar10 + 0x180) = cVar3;
          if (0x3e < (int)uVar10 + 1U) {
            uVar10 = (ulong)((int)uVar10 + 1);
            break;
          }
          cVar3 = pcVar1[1];
          if (cVar3 == '\0') {
            uVar10 = uVar10 + 1;
            break;
          }
          *(char *)((long)plVar6 + uVar10 + 0x181) = cVar3;
          uVar10 = uVar10 + 2;
        }
        *(undefined1 *)((long)plVar6 + (uVar10 & 0xffffffff) + 0x180) = 0;
        uVar21 = (uint)*(byte *)(plVar6 + 0x30);
        uVar19 = 0x811c9dc5;
        *(int *)((long)plVar6 + 0x17c) = (int)uVar10;
        if (*(byte *)(plVar6 + 0x30) != 0) {
          pbVar18 = (byte *)((long)plVar6 + 0x181);
          do {
            uVar19 = uVar19 * 0x89 ^ uVar21;
            uVar21 = (uint)*pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (uVar21 != 0);
        }
        *(uint *)(plVar6 + 0x2f) = uVar19;
      }
      goto LAB_7103795e20;
    }
    plVar24 = *(long **)(*plVar24 + 8);
    plVar6[0x2e] = (long)plVar24;
    FUN_7100063f00((long)plVar6,plVar24);
    lVar20 = plVar6[0x2e];
    if (lVar20 != 0) {
      uVar10 = 0;
      while( true ) {
        pcVar1 = (char *)(lVar20 + 0x40 + uVar10);
        cVar3 = *pcVar1;
        if (cVar3 == '\0') break;
        *(char *)((long)plVar6 + uVar10 + 0x180) = cVar3;
        if (0x3e < (int)uVar10 + 1U) {
          uVar10 = (ulong)((int)uVar10 + 1);
          break;
        }
        cVar3 = pcVar1[1];
        if (cVar3 == '\0') {
          uVar10 = uVar10 + 1;
          break;
        }
        *(char *)((long)plVar6 + uVar10 + 0x181) = cVar3;
        uVar10 = uVar10 + 2;
      }
      *(undefined1 *)((long)plVar6 + (uVar10 & 0xffffffff) + 0x180) = 0;
      uVar21 = (uint)*(byte *)(plVar6 + 0x30);
      uVar19 = 0x811c9dc5;
      *(int *)((long)plVar6 + 0x17c) = (int)uVar10;
      if (*(byte *)(plVar6 + 0x30) != 0) {
        pbVar18 = (byte *)((long)plVar6 + 0x181);
        do {
          uVar19 = uVar19 * 0x89 ^ uVar21;
          uVar21 = (uint)*pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (uVar21 != 0);
      }
      *(uint *)(plVar6 + 0x2f) = uVar19;
    }
    if (plVar24 == (long *)0x0) goto LAB_7103795e20;
  }
  if (*(char *)((long)plVar24 + 0xf1) == '\0') {
    fVar28 = 1.0;
  }
  else {
    fVar28 = *(float *)((long)plVar24 + 0xec);
  }
  *(float *)((long)plVar6 + 0x254) = fVar28;
  local_90 = (long ***)
             CONCAT44(fVar28 * *(float *)((long)plVar6 + 0x21c),
                      *(float *)(plVar6 + 0x4a) * *(float *)(plVar6 + 0x43));
  FUN_71000640c0((long)plVar6,(float *)&local_90);
LAB_7103795e20:
  (**(code **)(*plVar6 + 0xe0))(plVar6,param_2,DAT_7105336e08,param_7,apppbStack_b8);
  return plVar6;
}

