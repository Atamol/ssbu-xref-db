// addr:      7101d30f10
// offset:    0x1d30f10
// name:      FUN_7101d30f10
// mangled:   
// signature: undefined __cdecl FUN_7101d30f10(uint * param_1, undefined8 * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101d34448) */

void FUN_7101d30f10(uint *param_1,undefined8 *param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  char cVar35;
  char cVar36;
  long ***ppplVar37;
  bool bVar38;
  uint uVar39;
  uint uVar40;
  ushort *puVar41;
  ulong uVar42;
  undefined1 *puVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  byte *pbVar47;
  undefined8 uVar48;
  byte ****ppppbVar49;
  undefined4 uVar50;
  undefined1 uVar51;
  byte ***pppbVar52;
  undefined1 *puVar53;
  char *pcVar54;
  code *pcVar55;
  undefined4 uVar56;
  byte ***pppbVar57;
  char *pcVar58;
  char *pcVar59;
  char *pcVar60;
  uint uVar61;
  undefined1 *puVar62;
  long *plVar63;
  byte **ppbVar64;
  uint *puVar65;
  void *pvVar66;
  undefined8 *puVar67;
  undefined8 *puVar68;
  long **pplVar69;
  ulong uVar70;
  void *pvVar71;
  ulong uVar72;
  ulong local_1348;
  ulong local_1340;
  undefined **local_1320;
  ulong local_1318;
  undefined **local_1310;
  ulong local_1308;
  undefined **local_1300;
  long ***local_12f8 [8];
  undefined **local_12b8;
  ulong local_12b0;
  undefined **local_12a8;
  ulong local_12a0 [8];
  undefined **local_1260;
  ulong local_1258;
  byte ***local_1250;
  ushort local_1248;
  undefined4 local_1246;
  undefined2 local_1242;
  undefined4 local_1240;
  undefined2 local_123c;
  undefined1 local_123a;
  undefined1 *local_1238;
  undefined4 local_1230;
  long alStack_1220 [4];
  long *local_1200;
  long alStack_11f0 [4];
  long *local_11d0;
  long alStack_11c0 [4];
  long *local_11a0;
  long alStack_1190 [4];
  long *local_1170;
  long alStack_1160 [4];
  long *local_1140;
  undefined4 local_1130;
  undefined **local_250;
  ulong local_248;
  undefined8 local_240;
  undefined1 local_238 [64];
  undefined8 local_1f8;
  char local_1f0 [64];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined4 uStack_196;
  undefined1 uStack_192;
  undefined1 uStack_191;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined1 uStack_18e;
  undefined1 uStack_18d;
  undefined2 uStack_18c;
  undefined1 uStack_18a;
  undefined1 uStack_189;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined4 local_90;
  
  uVar50 = (undefined4)param_8;
  uVar39 = (uint)param_5;
  *(undefined4 *)(*(long *)(*(long *)*param_2 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(*(long *)*param_2 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(*(long *)*param_2 + 0x600) + 0x18) = 0x800008;
  *(undefined4 *)(*(long *)(*(long *)*param_2 + 0x600) + 0x1c) = 0x200022;
  ppppbVar1 = (byte ****)(param_1 + 0x34);
  *(undefined4 *)(*(long *)(*(long *)*param_2 + 0x600) + 0x20) = 0x40000;
  if (ppppbVar1 != param_3) {
    **(undefined8 **)(param_1 + 0x36) = *param_3[1];
    *(byte ***)(*(long *)(param_1 + 0x36) + 8) = param_3[1][1];
    pppbVar57 = param_3[1];
    pppbVar52 = *(byte ****)(param_1 + 0x36);
    if (pppbVar52 != pppbVar57) {
      *pppbVar52[3] = *pppbVar57[3];
      pppbVar52[3][1] = pppbVar57[3][1];
      pppbVar52[3][2] = pppbVar57[3][2];
      pppbVar52[3][3] = pppbVar57[3][3];
    }
  }
  param_1[0x42] = 0xffffffff;
  param_1[0x58] = uVar39;
  param_1[0x59] = (uint)param_6;
  if (uVar39 == 0) {
    switch(param_6 & 0xffffffff) {
    case 0:
      uVar51 = *(undefined1 *)((long)param_4 + 0xf);
      break;
    case 1:
      uVar51 = *(undefined1 *)(param_4 + 2);
      break;
    case 2:
      uVar51 = *(undefined1 *)((long)param_4 + 0x11);
      break;
    case 3:
      uVar51 = *(undefined1 *)((long)param_4 + 0x12);
      break;
    case 4:
      uVar51 = *(undefined1 *)((long)param_4 + 0x13);
      break;
    case 5:
      uVar51 = *(undefined1 *)((long)param_4 + 0x14);
      break;
    case 6:
      uVar51 = *(undefined1 *)((long)param_4 + 0x15);
      break;
    case 7:
      uVar51 = *(undefined1 *)((long)param_4 + 0x16);
      break;
    case 8:
      uVar51 = *(undefined1 *)((long)param_4 + 0x17);
      break;
    case 9:
      uVar51 = *(undefined1 *)(param_4 + 3);
      break;
    case 10:
      uVar51 = *(undefined1 *)((long)param_4 + 0x19);
      break;
    case 0xb:
      uVar51 = *(undefined1 *)((long)param_4 + 0x1a);
      break;
    default:
      uVar51 = 0xd;
    }
    *(undefined1 *)(param_1 + 0x43) = uVar51;
    uVar56 = *(undefined4 *)((long)param_4 + 0x1b);
LAB_7101d311ec:
    *(undefined4 *)((long)param_1 + 0x10d) = uVar56;
  }
  else {
    if (uVar39 == 1) {
      switch(param_6 & 0xffffffff) {
      case 0:
        uVar51 = *(undefined1 *)((long)param_4 + 0x1f);
        break;
      case 1:
        uVar51 = *(undefined1 *)(param_4 + 4);
        break;
      case 2:
        uVar51 = *(undefined1 *)((long)param_4 + 0x21);
        break;
      case 3:
        uVar51 = *(undefined1 *)((long)param_4 + 0x22);
        break;
      case 4:
        uVar51 = *(undefined1 *)((long)param_4 + 0x23);
        break;
      case 5:
        uVar51 = *(undefined1 *)((long)param_4 + 0x24);
        break;
      case 6:
        uVar51 = *(undefined1 *)((long)param_4 + 0x25);
        break;
      case 7:
        uVar51 = *(undefined1 *)((long)param_4 + 0x26);
        break;
      default:
        uVar51 = 0xd;
      }
      *(undefined1 *)(param_1 + 0x43) = uVar51;
      uVar56 = *(undefined4 *)((long)param_4 + 0x27);
      goto LAB_7101d311ec;
    }
    if (uVar39 == 2) {
      switch(param_6 & 0xffffffff) {
      case 0:
        uVar51 = *(undefined1 *)param_4;
        break;
      case 1:
        uVar51 = *(undefined1 *)((long)param_4 + 1);
        break;
      case 2:
        uVar51 = *(undefined1 *)((long)param_4 + 2);
        break;
      case 3:
        uVar51 = *(undefined1 *)((long)param_4 + 3);
        break;
      case 4:
        uVar51 = *(undefined1 *)((long)param_4 + 4);
        break;
      case 5:
        uVar51 = *(undefined1 *)((long)param_4 + 5);
        break;
      case 6:
        uVar51 = *(undefined1 *)((long)param_4 + 6);
        break;
      case 7:
        uVar51 = *(undefined1 *)((long)param_4 + 7);
        break;
      case 8:
        uVar51 = *(undefined1 *)(param_4 + 1);
        break;
      case 9:
        uVar51 = *(undefined1 *)((long)param_4 + 10);
        break;
      case 10:
        uVar51 = *(undefined1 *)((long)param_4 + 9);
        break;
      default:
        uVar51 = 0xd;
      }
      *(undefined1 *)(param_1 + 0x43) = uVar51;
      uVar56 = *(undefined4 *)((long)param_4 + 0xb);
      goto LAB_7101d311ec;
    }
    uVar51 = 0xd;
    *(undefined1 *)(param_1 + 0x43) = 0xd;
    uVar56 = *(undefined4 *)((long)param_1 + 0x10d);
  }
  *(undefined1 *)(param_1 + 0x5a) = uVar51;
  *(undefined4 *)((long)param_1 + 0x169) = uVar56;
  uVar51 = *(undefined1 *)((long)param_4 + 3);
  uVar4 = *(undefined1 *)((long)param_4 + 4);
  uVar5 = *(undefined1 *)((long)param_4 + 5);
  uVar6 = *(undefined1 *)((long)param_4 + 6);
  uVar7 = *(undefined1 *)((long)param_4 + 7);
  uVar8 = *(undefined1 *)(param_4 + 1);
  uVar9 = *(undefined1 *)((long)param_4 + 9);
  uVar10 = *(undefined1 *)((long)param_4 + 10);
  uVar11 = *(undefined1 *)((long)param_4 + 0x12);
  uVar12 = *(undefined1 *)((long)param_4 + 0x13);
  uVar13 = *(undefined1 *)((long)param_4 + 0x14);
  uVar14 = *(undefined1 *)((long)param_4 + 0x15);
  uVar15 = *(undefined1 *)((long)param_4 + 0x16);
  uVar16 = *(undefined1 *)((long)param_4 + 0x17);
  uVar17 = *(undefined1 *)(param_4 + 3);
  uVar18 = *(undefined1 *)((long)param_4 + 0x19);
  uVar19 = *(undefined1 *)param_4;
  uVar20 = *(undefined1 *)((long)param_4 + 1);
  uVar21 = *(undefined1 *)((long)param_4 + 2);
  uVar22 = *(undefined1 *)((long)param_4 + 0xf);
  uVar23 = *(undefined1 *)(param_4 + 2);
  uVar24 = *(undefined1 *)((long)param_4 + 0x11);
  uVar25 = *(undefined1 *)((long)param_4 + 0x1a);
  uVar26 = *(undefined1 *)((long)param_4 + 0x1f);
  uVar27 = *(undefined1 *)(param_4 + 4);
  uVar28 = *(undefined1 *)((long)param_4 + 0x21);
  uVar29 = *(undefined1 *)((long)param_4 + 0x22);
  uVar30 = *(undefined1 *)((long)param_4 + 0x23);
  uVar31 = *(undefined1 *)((long)param_4 + 0x24);
  uVar32 = *(undefined1 *)((long)param_4 + 0x25);
  uVar33 = *(undefined1 *)((long)param_4 + 0x26);
  puVar62 = *(undefined1 **)(param_1 + 0x46);
  *(undefined1 **)(param_1 + 0x48) = puVar62;
  puVar65 = param_1 + 0x46;
  puVar2 = param_1 + 0x48;
  uVar46 = param_7;
  if (uVar39 == 1) {
    if (*(undefined1 **)(param_1 + 0x4a) == puVar62) {
      puVar43 = (undefined1 *)
                FUN_710392e290(0x10,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar43 == (undefined1 *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1250 = (byte ***)0x1;
        param_3 = &local_1250;
        (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        puVar43 = (undefined1 *)
                  FUN_710392e290(0x10,1,(long ****)param_3,param_4,param_5,param_6,uVar46,param_8);
      }
      puVar53 = puVar43 + 1;
      *puVar43 = uVar26;
      *(undefined1 **)(param_1 + 0x46) = puVar43;
      *(undefined1 **)(param_1 + 0x48) = puVar53;
      *(undefined1 **)(param_1 + 0x4a) = puVar53;
      if (puVar62 != (undefined1 *)0x0) {
        FUN_710392eb40((ulong)puVar62);
        puVar53 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar26;
      puVar53 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar53;
    }
    if (puVar53 == *(undefined1 **)(param_1 + 0x4a)) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar53 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d31628;
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d31628:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d318a4;
          }
          pvVar71 = (void *)0x0;
        }
      }
LAB_7101d318a4:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar27;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)(param_1 + 0x46) = pvVar71;
      *(undefined1 **)(param_1 + 0x48) = puVar62;
      *(undefined1 **)(param_1 + 0x4a) = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar53 = uVar27;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)(param_1 + 0x4a)) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d31950;
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d31950:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d31ab0;
          }
          pvVar71 = (void *)0x0;
        }
      }
LAB_7101d31ab0:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar28;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)(param_1 + 0x46) = pvVar71;
      *(undefined1 **)(param_1 + 0x48) = puVar62;
      *(undefined1 **)(param_1 + 0x4a) = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar28;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)(param_1 + 0x4a)) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d31b60;
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d31b60:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d31cc4;
          }
          pvVar71 = (void *)0x0;
        }
      }
LAB_7101d31cc4:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar29;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)(param_1 + 0x46) = pvVar71;
      *(undefined1 **)(param_1 + 0x48) = puVar62;
      *(undefined1 **)(param_1 + 0x4a) = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar29;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)(param_1 + 0x4a)) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d31d64;
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d31d64:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d31ec4;
          }
          pvVar71 = (void *)0x0;
        }
      }
LAB_7101d31ec4:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar30;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)(param_1 + 0x46) = pvVar71;
      *(undefined1 **)(param_1 + 0x48) = puVar62;
      *(undefined1 **)(param_1 + 0x4a) = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar30;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)(param_1 + 0x4a)) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d31f5c;
LAB_7101d320b4:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d31f5c:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d320b8;
          }
          goto LAB_7101d320b4;
        }
      }
LAB_7101d320b8:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar31;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)(param_1 + 0x46) = pvVar71;
      *(undefined1 **)(param_1 + 0x48) = puVar62;
      *(undefined1 **)(param_1 + 0x4a) = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar31;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)(param_1 + 0x4a)) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32150;
LAB_7101d322a8:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32150:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d322ac;
          }
          goto LAB_7101d322a8;
        }
      }
LAB_7101d322ac:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar32;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)(param_1 + 0x46) = pvVar71;
      *(undefined1 **)(param_1 + 0x48) = puVar62;
      *(undefined1 **)(param_1 + 0x4a) = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar32;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 != *(undefined1 **)(param_1 + 0x4a)) {
      *puVar62 = uVar33;
      *(long *)puVar2 = *(long *)puVar2 + 1;
      goto LAB_7101d330e0;
    }
    pvVar66 = *(void **)puVar65;
    ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
    pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
    if ((long)pppbVar52 < 0) {
LAB_7101d35ec8:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
      if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
        pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
      }
      if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32348;
LAB_7101d324a0:
      pvVar71 = (void *)0x0;
    }
    else {
      pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32348:
      pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                       uVar46,param_8);
      if (pvVar71 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          param_3 = &local_1250;
          local_1250 = pppbVar52;
          uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar72 & 1) != 0) &&
             (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                               param_6,uVar46,param_8), pvVar71 != (void *)0x0))
          goto LAB_7101d324a4;
        }
        goto LAB_7101d324a0;
      }
    }
LAB_7101d324a4:
    puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49);
    *puVar62 = uVar33;
    if (0 < (long)ppppbVar49) {
      memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
      param_3 = ppppbVar49;
    }
    *(void **)(param_1 + 0x46) = pvVar71;
    *(undefined1 **)(param_1 + 0x48) = puVar62 + 1;
    *(undefined1 **)(param_1 + 0x4a) = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
joined_r0x007101d324d0:
    if (pvVar66 != (void *)0x0) {
LAB_7101d330d8:
      FUN_710392eb40((ulong)pvVar66);
    }
  }
  else {
    if (uVar39 == 2) {
      puVar3 = param_1 + 0x4a;
      if (*(undefined1 **)(param_1 + 0x4a) == puVar62) {
        puVar43 = (undefined1 *)
                  FUN_710392e290(0x10,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar43 == (undefined1 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            local_1250 = (byte ***)0x1;
            param_3 = &local_1250;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (puVar43 = (undefined1 *)
                          FUN_710392e290(0x10,1,(long ****)param_3,param_4,param_5,param_6,uVar46,
                                         param_8), puVar43 != (undefined1 *)0x0))
            goto LAB_7101d313e4;
          }
          puVar43 = (undefined1 *)0x0;
        }
LAB_7101d313e4:
        puVar53 = puVar43 + 1;
        *puVar43 = uVar19;
        *(undefined1 **)puVar65 = puVar43;
        *(undefined1 **)puVar2 = puVar53;
        *(undefined1 **)puVar3 = puVar53;
        if (puVar62 != (undefined1 *)0x0) {
          FUN_710392eb40((ulong)puVar62);
          puVar53 = *(undefined1 **)puVar2;
        }
      }
      else {
        *puVar62 = uVar19;
        puVar53 = (undefined1 *)(*(long *)puVar2 + 1);
        *(undefined1 **)puVar2 = puVar53;
      }
      if (puVar53 == *(undefined1 **)puVar3) {
        pvVar66 = *(void **)puVar65;
        ppppbVar49 = (byte ****)(puVar53 + -(long)pvVar66);
        pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
        if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
        if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
          if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
            pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
          }
          if (pppbVar52 != (byte ***)0x0) goto LAB_7101d3160c;
LAB_7101d3169c:
          pvVar71 = (void *)0x0;
        }
        else {
          pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d3160c:
          pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6
                                           ,uVar46,param_8);
          if (pvVar71 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
              param_3 = &local_1250;
              local_1250 = pppbVar52;
              uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar72 & 1) != 0) &&
                 (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5
                                                   ,param_6,uVar46,param_8), pvVar71 != (void *)0x0)
                 ) goto LAB_7101d316a0;
            }
            goto LAB_7101d3169c;
          }
        }
LAB_7101d316a0:
        puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
        *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar20;
        if (0 < (long)ppppbVar49) {
          memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
          param_3 = ppppbVar49;
        }
        *(void **)puVar65 = pvVar71;
        *(undefined1 **)puVar2 = puVar62;
        *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
        if (pvVar66 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar66);
          puVar62 = *(undefined1 **)puVar2;
        }
      }
      else {
        *puVar53 = uVar20;
        puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
        *(undefined1 **)puVar2 = puVar62;
      }
      if (puVar62 == *(undefined1 **)puVar3) {
        pvVar66 = *(void **)puVar65;
        ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
        pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
        if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
        if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
          if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
            pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
          }
          if (pppbVar52 != (byte ***)0x0) goto LAB_7101d3173c;
LAB_7101d31794:
          pvVar71 = (void *)0x0;
        }
        else {
          pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d3173c:
          pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6
                                           ,uVar46,param_8);
          if (pvVar71 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
              param_3 = &local_1250;
              local_1250 = pppbVar52;
              uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar72 & 1) != 0) &&
                 (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5
                                                   ,param_6,uVar46,param_8), pvVar71 != (void *)0x0)
                 ) goto LAB_7101d31798;
            }
            goto LAB_7101d31794;
          }
        }
LAB_7101d31798:
        puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
        *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar21;
        if (0 < (long)ppppbVar49) {
          memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
          param_3 = ppppbVar49;
        }
        *(void **)puVar65 = pvVar71;
        *(undefined1 **)puVar2 = puVar62;
        *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
        if (pvVar66 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar66);
          puVar62 = *(undefined1 **)puVar2;
        }
      }
      else {
        *puVar62 = uVar21;
        puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
        *(undefined1 **)puVar2 = puVar62;
      }
      if (puVar62 == *(undefined1 **)puVar3) {
        pvVar66 = *(void **)puVar65;
        ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
        pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
        if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
        if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
          if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
            pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
          }
          if (pppbVar52 != (byte ***)0x0) goto LAB_7101d31840;
LAB_7101d319a8:
          pvVar71 = (void *)0x0;
        }
        else {
          pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d31840:
          pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6
                                           ,uVar46,param_8);
          if (pvVar71 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
              param_3 = &local_1250;
              local_1250 = pppbVar52;
              uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar72 & 1) != 0) &&
                 (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5
                                                   ,param_6,uVar46,param_8), pvVar71 != (void *)0x0)
                 ) goto LAB_7101d319ac;
            }
            goto LAB_7101d319a8;
          }
        }
LAB_7101d319ac:
        puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
        *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar51;
        if (0 < (long)ppppbVar49) {
          memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
          param_3 = ppppbVar49;
        }
        *(void **)puVar65 = pvVar71;
        *(undefined1 **)puVar2 = puVar62;
        *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
        if (pvVar66 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar66);
          puVar62 = *(undefined1 **)puVar2;
        }
      }
      else {
        *puVar62 = uVar51;
        puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
        *(undefined1 **)puVar2 = puVar62;
      }
      if (puVar62 == *(undefined1 **)puVar3) {
        pvVar66 = *(void **)puVar65;
        ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
        pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
        if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
        if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
          if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
            pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
          }
          if (pppbVar52 != (byte ***)0x0) goto LAB_7101d31a50;
LAB_7101d31bb8:
          pvVar71 = (void *)0x0;
        }
        else {
          pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d31a50:
          pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6
                                           ,uVar46,param_8);
          if (pvVar71 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
              param_3 = &local_1250;
              local_1250 = pppbVar52;
              uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar72 & 1) != 0) &&
                 (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5
                                                   ,param_6,uVar46,param_8), pvVar71 != (void *)0x0)
                 ) goto LAB_7101d31bbc;
            }
            goto LAB_7101d31bb8;
          }
        }
LAB_7101d31bbc:
        puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
        *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar4;
        if (0 < (long)ppppbVar49) {
          memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
          param_3 = ppppbVar49;
        }
        *(void **)puVar65 = pvVar71;
        *(undefined1 **)puVar2 = puVar62;
        *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
        if (pvVar66 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar66);
          puVar62 = *(undefined1 **)puVar2;
        }
      }
      else {
        *puVar62 = uVar4;
        puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
        *(undefined1 **)puVar2 = puVar62;
      }
      if (puVar62 == *(undefined1 **)puVar3) {
        pvVar66 = *(void **)puVar65;
        ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
        pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
        if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
        if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
          if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
            pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
          }
          if (pppbVar52 != (byte ***)0x0) goto LAB_7101d31c60;
LAB_7101d31dbc:
          pvVar71 = (void *)0x0;
        }
        else {
          pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d31c60:
          pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6
                                           ,uVar46,param_8);
          if (pvVar71 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
              param_3 = &local_1250;
              local_1250 = pppbVar52;
              uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar72 & 1) != 0) &&
                 (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5
                                                   ,param_6,uVar46,param_8), pvVar71 != (void *)0x0)
                 ) goto LAB_7101d31dc0;
            }
            goto LAB_7101d31dbc;
          }
        }
LAB_7101d31dc0:
        puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
        *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar5;
        if (0 < (long)ppppbVar49) {
          memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
          param_3 = ppppbVar49;
        }
        *(void **)puVar65 = pvVar71;
        *(undefined1 **)puVar2 = puVar62;
        *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
        if (pvVar66 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar66);
          puVar62 = *(undefined1 **)puVar2;
        }
      }
      else {
        *puVar62 = uVar5;
        puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
        *(undefined1 **)puVar2 = puVar62;
      }
      if (puVar62 == *(undefined1 **)puVar3) {
        pvVar66 = *(void **)puVar65;
        ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
        pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
        if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
        if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
          if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
            pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
          }
          if (pppbVar52 != (byte ***)0x0) goto LAB_7101d31e64;
LAB_7101d31fb4:
          pvVar71 = (void *)0x0;
        }
        else {
          pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d31e64:
          pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6
                                           ,uVar46,param_8);
          if (pvVar71 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
              param_3 = &local_1250;
              local_1250 = pppbVar52;
              uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar72 & 1) != 0) &&
                 (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5
                                                   ,param_6,uVar46,param_8), pvVar71 != (void *)0x0)
                 ) goto LAB_7101d31fb8;
            }
            goto LAB_7101d31fb4;
          }
        }
LAB_7101d31fb8:
        puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
        *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar6;
        if (0 < (long)ppppbVar49) {
          memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
          param_3 = ppppbVar49;
        }
        *(void **)puVar65 = pvVar71;
        *(undefined1 **)puVar2 = puVar62;
        *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
        if (pvVar66 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar66);
          puVar62 = *(undefined1 **)puVar2;
        }
      }
      else {
        *puVar62 = uVar6;
        puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
        *(undefined1 **)puVar2 = puVar62;
      }
      if (puVar62 == *(undefined1 **)puVar3) {
        pvVar66 = *(void **)puVar65;
        ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
        pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
        if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
        if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
          if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
            pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
          }
          if (pppbVar52 != (byte ***)0x0) goto LAB_7101d3205c;
LAB_7101d321a8:
          pvVar71 = (void *)0x0;
        }
        else {
          pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d3205c:
          pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6
                                           ,uVar46,param_8);
          if (pvVar71 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
              param_3 = &local_1250;
              local_1250 = pppbVar52;
              uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar72 & 1) != 0) &&
                 (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5
                                                   ,param_6,uVar46,param_8), pvVar71 != (void *)0x0)
                 ) goto LAB_7101d321ac;
            }
            goto LAB_7101d321a8;
          }
        }
LAB_7101d321ac:
        puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
        *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar7;
        if (0 < (long)ppppbVar49) {
          memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
          param_3 = ppppbVar49;
        }
        *(void **)puVar65 = pvVar71;
        *(undefined1 **)puVar2 = puVar62;
        *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
        if (pvVar66 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar66);
          puVar62 = *(undefined1 **)puVar2;
        }
      }
      else {
        *puVar62 = uVar7;
        puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
        *(undefined1 **)puVar2 = puVar62;
      }
      if (puVar62 == *(undefined1 **)puVar3) {
        pvVar66 = *(void **)puVar65;
        ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
        pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
        if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
        if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
          if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
            pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
          }
          if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32250;
LAB_7101d323a0:
          pvVar71 = (void *)0x0;
        }
        else {
          pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32250:
          pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6
                                           ,uVar46,param_8);
          if (pvVar71 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
              param_3 = &local_1250;
              local_1250 = pppbVar52;
              uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar72 & 1) != 0) &&
                 (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5
                                                   ,param_6,uVar46,param_8), pvVar71 != (void *)0x0)
                 ) goto LAB_7101d323a4;
            }
            goto LAB_7101d323a0;
          }
        }
LAB_7101d323a4:
        puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
        *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar8;
        if (0 < (long)ppppbVar49) {
          memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
          param_3 = ppppbVar49;
        }
        *(void **)puVar65 = pvVar71;
        *(undefined1 **)puVar2 = puVar62;
        *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
        if (pvVar66 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar66);
          puVar62 = *(undefined1 **)puVar2;
        }
      }
      else {
        *puVar62 = uVar8;
        puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
        *(undefined1 **)puVar2 = puVar62;
      }
      if (puVar62 == *(undefined1 **)puVar3) {
        pvVar66 = *(void **)puVar65;
        ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
        pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
        if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
        if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
          if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
            pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
          }
          if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32448;
LAB_7101d32518:
          pvVar71 = (void *)0x0;
        }
        else {
          pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32448:
          pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6
                                           ,uVar46,param_8);
          if (pvVar71 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
              param_3 = &local_1250;
              local_1250 = pppbVar52;
              uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar72 & 1) != 0) &&
                 (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5
                                                   ,param_6,uVar46,param_8), pvVar71 != (void *)0x0)
                 ) goto LAB_7101d3251c;
            }
            goto LAB_7101d32518;
          }
        }
LAB_7101d3251c:
        puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
        *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar10;
        if (0 < (long)ppppbVar49) {
          memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
          param_3 = ppppbVar49;
        }
        *(void **)puVar65 = pvVar71;
        *(undefined1 **)puVar2 = puVar62;
        *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
        if (pvVar66 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar66);
          puVar62 = *(undefined1 **)puVar2;
        }
      }
      else {
        *puVar62 = uVar10;
        puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
        *(undefined1 **)puVar2 = puVar62;
      }
      if (puVar62 != *(undefined1 **)puVar3) {
        *puVar62 = uVar9;
        *(long *)puVar2 = *(long *)puVar2 + 1;
        goto LAB_7101d330e0;
      }
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d325c0;
LAB_7101d32618:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d325c0:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d3261c;
          }
          goto LAB_7101d32618;
        }
      }
LAB_7101d3261c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49);
      *puVar62 = uVar9;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62 + 1;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      goto joined_r0x007101d324d0;
    }
    puVar3 = param_1 + 0x4a;
    if (*(undefined1 **)(param_1 + 0x4a) == puVar62) {
      puVar43 = (undefined1 *)
                FUN_710392e290(0x10,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar43 == (undefined1 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          local_1250 = (byte ***)0x1;
          param_3 = &local_1250;
          uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar72 & 1) != 0) &&
             (puVar43 = (undefined1 *)
                        FUN_710392e290(0x10,1,(long ****)param_3,param_4,param_5,param_6,uVar46,
                                       param_8), puVar43 != (undefined1 *)0x0)) goto LAB_7101d31584;
        }
        puVar43 = (undefined1 *)0x0;
      }
LAB_7101d31584:
      puVar53 = puVar43 + 1;
      *puVar43 = uVar22;
      *(undefined1 **)puVar65 = puVar43;
      *(undefined1 **)puVar2 = puVar53;
      *(undefined1 **)puVar3 = puVar53;
      if (puVar62 != (undefined1 *)0x0) {
        FUN_710392eb40((ulong)puVar62);
        puVar53 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar22;
      puVar53 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar53;
    }
    if (puVar53 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar53 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d31644;
LAB_7101d3269c:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d31644:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d326a0;
          }
          goto LAB_7101d3269c;
        }
      }
LAB_7101d326a0:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar23;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar53 = uVar23;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32740;
LAB_7101d32798:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32740:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d3279c;
          }
          goto LAB_7101d32798;
        }
      }
LAB_7101d3279c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar24;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar24;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32840;
LAB_7101d32898:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32840:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d3289c;
          }
          goto LAB_7101d32898;
        }
      }
LAB_7101d3289c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar11;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar11;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32940;
LAB_7101d32998:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32940:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d3299c;
          }
          goto LAB_7101d32998;
        }
      }
LAB_7101d3299c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar12;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar12;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32a40;
LAB_7101d32a98:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32a40:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d32a9c;
          }
          goto LAB_7101d32a98;
        }
      }
LAB_7101d32a9c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar13;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar13;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32b40;
LAB_7101d32b98:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32b40:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d32b9c;
          }
          goto LAB_7101d32b98;
        }
      }
LAB_7101d32b9c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar14;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar14;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32c40;
LAB_7101d32c98:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32c40:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d32c9c;
          }
          goto LAB_7101d32c98;
        }
      }
LAB_7101d32c9c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar15;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar15;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32d40;
LAB_7101d32d98:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32d40:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d32d9c;
          }
          goto LAB_7101d32d98;
        }
      }
LAB_7101d32d9c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar16;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar16;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32e40;
LAB_7101d32e98:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32e40:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d32e9c;
          }
          goto LAB_7101d32e98;
        }
      }
LAB_7101d32e9c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar17;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar17;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d32f40;
LAB_7101d32f98:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d32f40:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d32f9c;
          }
          goto LAB_7101d32f98;
        }
      }
LAB_7101d32f9c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49) + 1;
      *(undefined1 *)((long)pvVar71 + (long)ppppbVar49) = uVar18;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
        puVar62 = *(undefined1 **)puVar2;
      }
    }
    else {
      *puVar62 = uVar18;
      puVar62 = (undefined1 *)(*(long *)puVar2 + 1);
      *(undefined1 **)puVar2 = puVar62;
    }
    if (puVar62 == *(undefined1 **)puVar3) {
      pvVar66 = *(void **)puVar65;
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ec8;
      if (ppppbVar49 < (byte ****)0x3fffffffffffffff) {
        if (pppbVar52 <= (byte ***)((long)ppppbVar49 * 2)) {
          pppbVar52 = (byte ***)((long)ppppbVar49 * 2);
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d33040;
LAB_7101d33098:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d33040:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d3309c;
          }
          goto LAB_7101d33098;
        }
      }
LAB_7101d3309c:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49);
      *puVar62 = uVar25;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)puVar65 = pvVar71;
      *(undefined1 **)puVar2 = puVar62 + 1;
      *(undefined1 **)puVar3 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 == (void *)0x0) goto LAB_7101d330e0;
      goto LAB_7101d330d8;
    }
    *puVar62 = uVar25;
    *(long *)puVar2 = *(long *)puVar2 + 1;
  }
LAB_7101d330e0:
  FUN_7103776640(&local_1320,(long)ppppbVar1,(byte ****)"set_btn_m_decide",param_3,param_4,param_5,
                 param_6,uVar46,param_8);
  FUN_7103776910(&local_1b0,(long)&local_1320,(long ****)"set_txt_guide",param_3,param_4,param_5,
                 param_6,uVar46,param_8);
  pppbVar52 = (byte ***)local_1a8;
  ppbVar64 = *(byte ***)((long)local_1a8 + 0x10);
  if (ppbVar64 != (byte **)0x0) {
    pbVar47 = ppbVar64[0x1c];
    *(undefined4 *)((long)ppbVar64 + 0x25c) = uVar50;
    if (((pbVar47 != (byte *)0x0) && (*pbVar47 != 0x23)) && (*pbVar47 != 0x40)) {
      puVar41 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar47);
      local_1f8 = CONCAT44(local_1f8._4_4_,*(undefined4 *)((long)ppbVar64 + 0x25c));
      memset(&local_1250,0,0x1000);
      uVar39 = FUN_71037ae170((long)&local_1250,puVar41,(int *)&local_1f8);
      param_3 = (byte ****)(ulong)uVar39;
      param_4 = (byte ****)0x0;
      FUN_71037a2270((long *)ppbVar64,(ushort *)&local_1250,uVar39,0);
    }
  }
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (pppbVar52 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar52);
  }
  if (*(long *)(*(long *)(param_1 + 0x36) + 8) == 0) goto LAB_7101d35d94;
  uVar39 = param_1[0x58];
  uVar61 = param_1[0x59];
  if (uVar39 != 2) {
    if (uVar39 == 1) {
      if (7 < (int)uVar61) goto LAB_7101d33260;
      if (uVar61 < 2) {
        puVar62 = *(undefined1 **)(param_1 + 0x52);
        uVar72 = (long)*(undefined1 **)(param_1 + 0x56) - (long)puVar62;
        *(undefined1 **)(param_1 + 0x54) = puVar62;
        if (*(undefined1 **)(param_1 + 0x56) < puVar62 || uVar72 == 0) {
          if (uVar72 < 0x3fffffffffffffff) {
            pppbVar52 = (byte ***)(uVar72 * 2);
            if (pppbVar52 == (byte ***)0x0) {
              pppbVar52 = (byte ***)0x1;
            }
          }
          else {
            pppbVar52 = (byte ***)0x7fffffffffffffff;
          }
          puVar43 = (undefined1 *)
                    FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,uVar46,
                                   param_8);
          if (puVar43 == (undefined1 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
              param_3 = &local_1250;
              local_1250 = pppbVar52;
              uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar72 & 1) != 0) &&
                 (puVar43 = (undefined1 *)
                            FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6
                                           ,uVar46,param_8), puVar43 != (undefined1 *)0x0))
              goto LAB_7101d3425c;
            }
            puVar43 = (undefined1 *)0x0;
          }
LAB_7101d3425c:
          *puVar43 = 0xd;
          *(undefined1 **)(param_1 + 0x52) = puVar43;
          *(undefined1 **)(param_1 + 0x54) = puVar43 + 1;
          *(undefined1 **)(param_1 + 0x56) = puVar43 + (long)pppbVar52;
          if (puVar62 != (undefined1 *)0x0) {
            FUN_710392eb40((ulong)puVar62);
          }
        }
        else {
          *puVar62 = 0xd;
          *(long *)(param_1 + 0x54) = *(long *)(param_1 + 0x54) + 1;
        }
        puVar43 = *(undefined1 **)(param_1 + 0x4e);
        for (puVar62 = *(undefined1 **)(param_1 + 0x4c); puVar62 != puVar43; puVar62 = puVar62 + 1)
        {
          puVar53 = *(undefined1 **)(param_1 + 0x54);
          if (puVar53 == *(undefined1 **)(param_1 + 0x56)) {
            pvVar66 = *(void **)(param_1 + 0x52);
            ppppbVar49 = (byte ****)(puVar53 + -(long)pvVar66);
            pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
            if ((long)pppbVar52 < 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar72 = (long)*(undefined1 **)(param_1 + 0x56) - (long)pvVar66;
            if (uVar72 < 0x3fffffffffffffff) {
              pppbVar57 = (byte ***)(uVar72 * 2);
              if (pppbVar52 <= pppbVar57) {
                pppbVar52 = pppbVar57;
              }
              if (pppbVar52 != (byte ***)0x0) goto LAB_7101d342e8;
LAB_7101d34340:
              pvVar71 = (void *)0x0;
            }
            else {
              pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d342e8:
              pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                               param_6,uVar46,param_8);
              if (pvVar71 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
                  param_3 = &local_1250;
                  local_1250 = pppbVar52;
                  uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
                  if (((uVar72 & 1) != 0) &&
                     (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,
                                                       param_5,param_6,uVar46,param_8),
                     pvVar71 != (void *)0x0)) goto LAB_7101d34344;
                }
                goto LAB_7101d34340;
              }
            }
LAB_7101d34344:
            puVar53 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49);
            *puVar53 = *puVar62;
            if (0 < (long)ppppbVar49) {
              memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
              param_3 = ppppbVar49;
            }
            *(void **)(param_1 + 0x52) = pvVar71;
            *(undefined1 **)(param_1 + 0x54) = puVar53 + 1;
            *(undefined1 **)(param_1 + 0x56) = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
            if (pvVar66 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar66);
            }
          }
          else {
            *puVar53 = *puVar62;
            *(long *)(param_1 + 0x54) = *(long *)(param_1 + 0x54) + 1;
          }
        }
        pcVar59 = *(char **)(param_1 + 0x52);
        pcVar60 = *(char **)(param_1 + 0x54);
        if ((pcVar59 == pcVar60) || (*pcVar59 == '\x04')) {
          pcVar54 = pcVar59;
          if (pcVar59 != pcVar60) goto LAB_7101d343f4;
LAB_7101d34430:
          if (pcVar60 == pcVar54) goto LAB_7101d3445c;
        }
        else {
          do {
            pcVar59 = pcVar59 + 1;
            pcVar54 = pcVar60;
            if (pcVar60 == pcVar59) goto LAB_7101d34430;
          } while (*pcVar59 != '\x04');
          pcVar54 = pcVar59;
          if (pcVar59 == pcVar60) goto LAB_7101d34430;
LAB_7101d343f4:
          pcVar58 = pcVar59 + 1;
          pcVar54 = pcVar59;
          if (pcVar58 == pcVar60) goto LAB_7101d34430;
          do {
            pcVar54 = pcVar59;
            if (*pcVar58 != '\x04') {
              pcVar54 = pcVar59 + 1;
              *pcVar59 = *pcVar58;
            }
            pcVar58 = pcVar58 + 1;
            pcVar59 = pcVar54;
          } while (pcVar60 != pcVar58);
          if (*(char **)(param_1 + 0x54) == pcVar54) goto LAB_7101d3445c;
        }
        *(char **)(param_1 + 0x54) = pcVar54;
      }
      else {
        param_3 = *(byte *****)(param_1 + 0x4e);
        FUN_7101d35ee0((undefined8 *)(param_1 + 0x52),*(void **)(param_1 + 0x4c),(long ****)param_3,
                       param_4,param_5,param_6,uVar46,param_8);
      }
LAB_7101d3445c:
      param_1[0x45] = (uint)(uVar61 == 2);
      if (uVar61 != 2) goto LAB_7101d34610;
      goto LAB_7101d346ac;
    }
    if (uVar39 == 0) {
      if ((int)uVar61 < 0xc) {
        param_3 = *(byte *****)(param_1 + 0x4e);
        FUN_7101d35ee0((undefined8 *)(param_1 + 0x52),*(void **)(param_1 + 0x4c),(long ****)param_3,
                       param_4,param_5,param_6,uVar46,param_8);
        switch(uVar61) {
        case 0:
        case 2:
          goto switchD_7101d33214_caseD_0;
        default:
          goto switchD_7101d33214_caseD_1;
        case 4:
          goto switchD_7101d33214_caseD_4;
        case 5:
          goto switchD_7101d33214_caseD_5;
        case 6:
          goto switchD_7101d33214_caseD_6;
        case 9:
          goto switchD_7101d33214_caseD_9;
        }
      }
LAB_7101d33260:
      param_1[0x45] = 2;
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x36),0x710424f7d3);
      local_1250 = (byte ***)0x0;
      local_1248 = 0x101;
      local_1246 = 0;
      local_1240 = 1;
      local_123c = 1;
      local_123a = 1;
      local_1242 = 0;
      local_1238 = &DAT_41f0000000000000;
      local_1230 = 0;
      local_1200 = (long *)0x0;
      local_11d0 = (long *)0x0;
      local_11a0 = (long *)0x0;
      local_1170 = (long *)0x0;
      local_1140 = (long *)0x0;
      local_1130 = 0;
      FUN_710337df20((long)&local_1250);
      local_1238 = (undefined1 *)((ulong)local_1238 & 0xffffffff);
      local_1b0 = &PTR_FUN_71050aef10;
      local_1a8 = FUN_7101d36090;
      local_1a0 = 0;
      local_198 = SUB82(param_1,0);
      uStack_196 = (undefined4)((ulong)param_1 >> 0x10);
      uStack_192 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_191 = (undefined1)((ulong)param_1 >> 0x38);
      uStack_190 = SUB81(&local_1b0,0);
      uStack_18f = (undefined1)((ulong)&local_1b0 >> 8);
      uStack_18e = (undefined1)((ulong)&local_1b0 >> 0x10);
      uStack_18d = (undefined1)((ulong)&local_1b0 >> 0x18);
      uStack_18c = (undefined2)((ulong)&local_1b0 >> 0x20);
      uStack_18a = (undefined1)((ulong)&local_1b0 >> 0x30);
      uStack_189 = (undefined1)((ulong)&local_1b0 >> 0x38);
      FUN_7101a7ed70(&local_1b0,alStack_1220);
      plVar63 = (long *)CONCAT17(uStack_189,
                                 CONCAT16(uStack_18a,
                                          CONCAT24(uStack_18c,
                                                   CONCAT13(uStack_18d,
                                                            CONCAT12(uStack_18e,
                                                                     CONCAT11(uStack_18f,uStack_190)
                                                                    )))));
      if (&local_1b0 == plVar63) {
        pcVar55 = *(code **)(*plVar63 + 0x20);
LAB_7101d33334:
        (*pcVar55)();
      }
      else if (plVar63 != (long *)0x0) {
        pcVar55 = *(code **)(*plVar63 + 0x28);
        goto LAB_7101d33334;
      }
      plVar63 = local_11d0;
      bVar38 = alStack_11f0 == local_11d0;
      local_11d0 = (long *)0x0;
      if (bVar38) {
        pcVar55 = *(code **)(*plVar63 + 0x20);
LAB_7101d3336c:
        (*pcVar55)();
      }
      else if (plVar63 != (long *)0x0) {
        pcVar55 = *(code **)(*plVar63 + 0x28);
        goto LAB_7101d3336c;
      }
      plVar63 = local_1170;
      bVar38 = alStack_1190 == local_1170;
      local_1170 = (long *)0x0;
      if (bVar38) {
        pcVar55 = *(code **)(*plVar63 + 0x20);
LAB_7101d333a4:
        (*pcVar55)();
      }
      else if (plVar63 != (long *)0x0) {
        pcVar55 = *(code **)(*plVar63 + 0x28);
        goto LAB_7101d333a4;
      }
      plVar63 = local_1140;
      bVar38 = alStack_1160 == local_1140;
      local_1140 = (long *)0x0;
      if (bVar38) {
        pcVar55 = *(code **)(*plVar63 + 0x20);
LAB_7101d333dc:
        (*pcVar55)();
      }
      else if (plVar63 != (long *)0x0) {
        pcVar55 = *(code **)(*plVar63 + 0x28);
        goto LAB_7101d333dc;
      }
      puVar65 = param_1 + 0x38;
      ppppbVar49 = &local_1250;
      FUN_7103770b30((long *)puVar65,ppppbVar1,(long ****)"selector_edit",ppppbVar49,param_5,param_6
                     ,uVar46,param_8);
      FUN_71037717d0((undefined8 *)puVar65,0,"set_parts_category_00",ppppbVar49,param_5,param_6,
                     uVar46,param_8);
      FUN_71037717d0((undefined8 *)puVar65,1,"set_parts_category_01",ppppbVar49,param_5,param_6,
                     uVar46,param_8);
      FUN_71037717d0((undefined8 *)puVar65,2,"set_parts_category_02",ppppbVar49,param_5,param_6,
                     uVar46,param_8);
      FUN_71037717d0((undefined8 *)puVar65,3,"set_parts_category_03",ppppbVar49,param_5,param_6,
                     uVar46,param_8);
      FUN_71037717d0((undefined8 *)puVar65,5,"set_btn_m_decide",ppppbVar49,param_5,param_6,uVar46,
                     param_8);
      ppppbVar49 = (byte ****)0x0;
      FUN_7103771930(*(long *)(param_1 + 0x38),5,(long ****)&DAT_00000008,(byte ****)0x0,param_5,
                     param_6,uVar46,param_8);
      FUN_7103771d60(&local_1b0,*(long *)(param_1 + 0x38),(long ****)0x0,ppppbVar49,param_5,param_6,
                     uVar46,param_8);
      pppbVar52 = (byte ***)local_1a8;
      ppbVar64 = *(byte ***)local_1a8;
      if (ppbVar64 != (byte **)0x0) {
        (**(code **)(*ppbVar64 + 0x208))(ppbVar64,0);
        uVar72 = (**(code **)(*ppbVar64 + 0x200))(ppbVar64);
        if ((uVar72 & 1) == 0) {
          uVar39 = 1;
        }
        else {
          uVar39 = (**(code **)(*ppbVar64 + 0x210))(ppbVar64);
          uVar39 = uVar39 ^ 1;
        }
        (**(code **)(*ppbVar64 + 0x388))(ppbVar64,uVar39 & 1,0);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (code *)0x0;
      if (pppbVar52 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar52);
      }
      FUN_7103771d60(&local_1b0,*(long *)puVar65,(long ****)0x1,ppppbVar49,param_5,param_6,uVar46,
                     param_8);
      pppbVar52 = (byte ***)local_1a8;
      ppbVar64 = *(byte ***)local_1a8;
      if (ppbVar64 != (byte **)0x0) {
        (**(code **)(*ppbVar64 + 0x208))(ppbVar64,0);
        uVar72 = (**(code **)(*ppbVar64 + 0x200))(ppbVar64);
        if ((uVar72 & 1) == 0) {
          uVar39 = 1;
        }
        else {
          uVar39 = (**(code **)(*ppbVar64 + 0x210))(ppbVar64);
          uVar39 = uVar39 ^ 1;
        }
        (**(code **)(*ppbVar64 + 0x388))(ppbVar64,uVar39 & 1,0);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (code *)0x0;
      if (pppbVar52 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar52);
      }
      FUN_7103771d60(&local_1b0,*(long *)puVar65,(long ****)0x2,ppppbVar49,param_5,param_6,uVar46,
                     param_8);
      pppbVar52 = (byte ***)local_1a8;
      ppbVar64 = *(byte ***)local_1a8;
      if (ppbVar64 != (byte **)0x0) {
        (**(code **)(*ppbVar64 + 0x208))(ppbVar64,0);
        uVar72 = (**(code **)(*ppbVar64 + 0x200))(ppbVar64);
        if ((uVar72 & 1) == 0) {
          uVar39 = 1;
        }
        else {
          uVar39 = (**(code **)(*ppbVar64 + 0x210))(ppbVar64);
          uVar39 = uVar39 ^ 1;
        }
        (**(code **)(*ppbVar64 + 0x388))(ppbVar64,uVar39 & 1,0);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (code *)0x0;
      if (pppbVar52 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar52);
      }
      FUN_7103771d60(&local_1b0,*(long *)puVar65,(long ****)0x3,ppppbVar49,param_5,param_6,uVar46,
                     param_8);
      pppbVar52 = (byte ***)local_1a8;
      ppbVar64 = *(byte ***)local_1a8;
      if (ppbVar64 != (byte **)0x0) {
        (**(code **)(*ppbVar64 + 0x208))(ppbVar64,0);
        uVar72 = (**(code **)(*ppbVar64 + 0x200))(ppbVar64);
        if ((uVar72 & 1) == 0) {
          uVar39 = 1;
        }
        else {
          uVar39 = (**(code **)(*ppbVar64 + 0x210))(ppbVar64);
          uVar39 = uVar39 ^ 1;
        }
        (**(code **)(*ppbVar64 + 0x388))(ppbVar64,uVar39 & 1,0);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (code *)0x0;
      if (pppbVar52 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar52);
      }
      FUN_7103771a80((long *)puVar65,0,0);
      (**(code **)(**(long **)puVar65 + 0x60))(*(long **)puVar65,0);
      local_1b0 = (undefined **)0x0;
      local_1a8 = (code *)&DAT_00000101;
      local_1a0 = CONCAT17(local_1a0._7_1_,0x1000100000001);
      local_198 = 0;
      uStack_196 = 0;
      uStack_192 = 0xf0;
      uStack_191 = 0x41;
      uStack_190 = 0;
      uStack_18f = 0;
      uStack_18e = 0;
      uStack_18d = 0;
      local_160 = (long *)0x0;
      local_130 = (long *)0x0;
      local_100 = (long *)0x0;
      local_d0 = (long *)0x0;
      local_a0 = (long *)0x0;
      local_90 = 0;
      FUN_7101ca82b0(&local_1250,&local_1b0);
      if (alStack_c0 == local_a0) {
        pcVar55 = *(code **)(*local_a0 + 0x20);
LAB_7101d337a8:
        (*pcVar55)();
      }
      else if (local_a0 != (long *)0x0) {
        pcVar55 = *(code **)(*local_a0 + 0x28);
        goto LAB_7101d337a8;
      }
      if (alStack_f0 == local_d0) {
        pcVar55 = *(code **)(*local_d0 + 0x20);
LAB_7101d337dc:
        (*pcVar55)();
      }
      else if (local_d0 != (long *)0x0) {
        pcVar55 = *(code **)(*local_d0 + 0x28);
        goto LAB_7101d337dc;
      }
      if (alStack_120 == local_100) {
        pcVar55 = *(code **)(*local_100 + 0x20);
LAB_7101d33810:
        (*pcVar55)();
      }
      else if (local_100 != (long *)0x0) {
        pcVar55 = *(code **)(*local_100 + 0x28);
        goto LAB_7101d33810;
      }
      if (alStack_150 == local_130) {
        pcVar55 = *(code **)(*local_130 + 0x20);
LAB_7101d33844:
        (*pcVar55)();
      }
      else if (local_130 != (long *)0x0) {
        pcVar55 = *(code **)(*local_130 + 0x28);
        goto LAB_7101d33844;
      }
      if (alStack_180 == local_160) {
        pcVar55 = *(code **)(*local_160 + 0x20);
LAB_7101d33878:
        (*pcVar55)();
      }
      else if (local_160 != (long *)0x0) {
        pcVar55 = *(code **)(*local_160 + 0x28);
        goto LAB_7101d33878;
      }
      FUN_710337df20((long)&local_1250);
      local_1246._0_2_ = CONCAT11(1,(undefined1)local_1246);
      local_1248 = local_1248 & 0xff;
      uVar72 = 0;
      do {
        uVar70 = uVar72 & 0xffffffff;
        puVar65 = param_1 + uVar72 * 2 + 0x3a;
        local_1a8 = (code *)((ulong)local_1a8 & 0xffffffffffffff00);
        local_1b0 = (undefined **)0x0;
        FUN_710062dc20((uint *)&local_1b0,"set_parts_sub_btns_%02d");
        FUN_7103776640(&local_12a8,(long)ppppbVar1,(byte ****)&local_1a8,uVar70,ppppbVar49,param_5,
                       param_6,uVar46,param_8);
        ppppbVar49 = &local_1250;
        FUN_7103770b30((long *)puVar65,&local_12a8,(long ****)"selector_0",ppppbVar49,param_5,
                       param_6,uVar46,param_8);
        if (uVar72 == 3) {
          uVar39 = *param_1;
        }
        else {
          uVar39 = 2;
        }
        local_1f0[0] = '\0';
        local_1f8 = 0;
        FUN_710062dc20((uint *)&local_1f8,"view_%d");
        FUN_7103778300(0x3f800000,local_12a0[0],(long)local_1f0);
        if (0 < (int)uVar39) {
          if (uVar39 == 2) {
            local_238[0] = 0;
            local_240 = 0;
            FUN_710062dc20((uint *)&local_240,"set_parts_btn_sub_%02d");
            FUN_71037717d0((undefined8 *)puVar65,0,local_238,ppppbVar49,param_5,param_6,uVar46,
                           param_8);
            uVar48 = 0;
            FUN_7103771d60(&local_1300,*(long *)puVar65,(long ****)0x0,ppppbVar49,param_5,param_6,
                           uVar46,param_8);
            ppplVar37 = local_12f8[0];
            pplVar69 = *local_12f8[0];
            if (pplVar69 != (long **)0x0) {
              (*(code *)(*pplVar69)[0x41])(pplVar69,0);
              uVar70 = (*(code *)(*pplVar69)[0x40])(pplVar69);
              if ((uVar70 & 1) == 0) {
                uVar39 = 1;
              }
              else {
                uVar39 = (*(code *)(*pplVar69)[0x42])(pplVar69);
                uVar39 = uVar39 ^ 1;
              }
              uVar48 = 0;
              (*(code *)(*pplVar69)[0x71])(pplVar69,uVar39 & 1);
            }
            local_1300 = &PTR_FUN_710523d9c8;
            local_12f8[0] = (long ***)0x0;
            if (ppplVar37 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar37);
            }
            FUN_7103776640(&local_250,(long)&local_12a8,(byte ****)local_238,uVar48,ppppbVar49,
                           param_5,param_6,uVar46,param_8);
            FUN_7103776910(&local_1300,(long)&local_250,(long ****)"set_txt_00",uVar48,ppppbVar49,
                           param_5,param_6,uVar46,param_8);
            uVar70 = local_248;
            local_250 = &PTR_FUN_710523d988;
            local_248 = 0;
            if (uVar70 != 0) {
              uVar42 = *(ulong *)(uVar70 + 0x18);
              *(undefined ***)(uVar70 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar70 + 0x18) = 0;
              if (uVar42 != 0) {
                FUN_710392eb40(uVar42);
              }
              FUN_710392eb40(uVar70);
            }
            FUN_710377a120((long)&local_1300,"mnu_opt_btn_key_oth_off",uVar48,ppppbVar49,param_5,
                           param_6,uVar46,param_8);
            ppplVar37 = local_12f8[0];
            local_1300 = &PTR_FUN_710523d9a8;
            local_12f8[0] = (long ***)0x0;
            if (ppplVar37 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar37);
            }
            local_238[0] = 0;
            local_240 = 0;
            FUN_710062dc20((uint *)&local_240,"set_parts_btn_sub_%02d");
            FUN_71037717d0((undefined8 *)puVar65,1,local_238,ppppbVar49,param_5,param_6,uVar46,
                           param_8);
            uVar48 = 1;
            FUN_7103771d60(&local_1300,*(long *)puVar65,(long ****)0x1,ppppbVar49,param_5,param_6,
                           uVar46,param_8);
            ppplVar37 = local_12f8[0];
            pplVar69 = *local_12f8[0];
            if (pplVar69 != (long **)0x0) {
              (*(code *)(*pplVar69)[0x41])(pplVar69,0);
              uVar70 = (*(code *)(*pplVar69)[0x40])(pplVar69);
              if ((uVar70 & 1) == 0) {
                uVar39 = 1;
              }
              else {
                uVar39 = (*(code *)(*pplVar69)[0x42])(pplVar69);
                uVar39 = uVar39 ^ 1;
              }
              uVar48 = 0;
              (*(code *)(*pplVar69)[0x71])(pplVar69,uVar39 & 1);
            }
            local_1300 = &PTR_FUN_710523d9c8;
            local_12f8[0] = (long ***)0x0;
            if (ppplVar37 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar37);
            }
            FUN_7103776640(&local_250,(long)&local_12a8,(byte ****)local_238,uVar48,ppppbVar49,
                           param_5,param_6,uVar46,param_8);
            FUN_7103776910(&local_1300,(long)&local_250,(long ****)"set_txt_00",uVar48,ppppbVar49,
                           param_5,param_6,uVar46,param_8);
            uVar70 = local_248;
            local_250 = &PTR_FUN_710523d988;
            local_248 = 0;
            if (uVar70 != 0) {
              uVar42 = *(ulong *)(uVar70 + 0x18);
              *(undefined ***)(uVar70 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar70 + 0x18) = 0;
              if (uVar42 != 0) {
                FUN_710392eb40(uVar42);
              }
              FUN_710392eb40(uVar70);
            }
            FUN_710377a120((long)&local_1300,"mnu_opt_btn_key_oth_on",uVar48,ppppbVar49,param_5,
                           param_6,uVar46,param_8);
            ppplVar37 = local_12f8[0];
            local_1300 = &PTR_FUN_710523d9a8;
            local_12f8[0] = (long ***)0x0;
            if (ppplVar37 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar37);
            }
          }
          else {
            uVar61 = 0;
            do {
              local_238[0] = 0;
              local_240 = 0;
              FUN_710062dc20((uint *)&local_240,"set_parts_btn_sub_%02d");
              FUN_71037717d0((undefined8 *)puVar65,uVar61,local_238,ppppbVar49,param_5,param_6,
                             uVar46,param_8);
              FUN_7103771d60(&local_1300,*(long *)puVar65,(long ****)(ulong)uVar61,ppppbVar49,
                             param_5,param_6,uVar46,param_8);
              ppplVar37 = local_12f8[0];
              pplVar69 = *local_12f8[0];
              if (pplVar69 != (long **)0x0) {
                (*(code *)(*pplVar69)[0x41])(pplVar69,0);
                uVar70 = (*(code *)(*pplVar69)[0x40])(pplVar69);
                if ((uVar70 & 1) == 0) {
                  uVar40 = 1;
                }
                else {
                  uVar40 = (*(code *)(*pplVar69)[0x42])(pplVar69);
                  uVar40 = uVar40 ^ 1;
                }
                (*(code *)(*pplVar69)[0x71])(pplVar69,uVar40 & 1,0);
              }
              local_1300 = &PTR_FUN_710523d9c8;
              local_12f8[0] = (long ***)0x0;
              if (ppplVar37 != (long ***)0x0) {
                FUN_710392eb40((ulong)ppplVar37);
              }
              uVar61 = uVar61 + 1;
            } while (uVar39 != uVar61);
          }
        }
        (**(code **)(**(long **)puVar65 + 0x70))(*(long **)puVar65,1);
        (**(code **)(**(long **)puVar65 + 0x60))(*(long **)puVar65,0);
        uVar70 = local_12a0[0];
        local_12a8 = &PTR_FUN_710523d988;
        local_12a0[0] = 0;
        if (uVar70 != 0) {
          uVar42 = *(ulong *)(uVar70 + 0x18);
          *(undefined ***)(uVar70 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar70 + 0x18) = 0;
          if (uVar42 != 0) {
            FUN_710392eb40(uVar42);
          }
          FUN_710392eb40(uVar70);
        }
        uVar72 = uVar72 + 1;
      } while (uVar72 != 4);
      bVar34 = *(byte *)((long)param_1 + 0x169);
      puVar65 = param_1 + 0x3a;
      FUN_7103771d60(&local_1b0,*(long *)puVar65,(long ****)0x0,ppppbVar49,param_5,param_6,uVar46,
                     param_8);
      pppbVar52 = (byte ***)local_1a8;
      ppbVar64 = *(byte ***)local_1a8;
      if (ppbVar64 != (byte **)0x0) {
        (**(code **)(*ppbVar64 + 0x2f0))(ppbVar64,bVar34 == 0,0);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (code *)0x0;
      if (pppbVar52 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar52);
      }
      FUN_7103771d60(&local_1b0,*(long *)puVar65,(long ****)0x1,ppppbVar49,param_5,param_6,uVar46,
                     param_8);
      pppbVar52 = (byte ***)local_1a8;
      ppbVar64 = *(byte ***)local_1a8;
      if (ppbVar64 != (byte **)0x0) {
        (**(code **)(*ppbVar64 + 0x2f0))(ppbVar64,bVar34 == 1,0);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (code *)0x0;
      if (pppbVar52 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar52);
      }
      FUN_7103771a80((long *)puVar65,(uint)bVar34,1);
      bVar34 = *(byte *)((long)param_1 + 0x16a);
      puVar65 = param_1 + 0x3c;
      FUN_7103771d60(&local_1b0,*(long *)puVar65,(long ****)0x0,ppppbVar49,param_5,param_6,uVar46,
                     param_8);
      pppbVar52 = (byte ***)local_1a8;
      ppbVar64 = *(byte ***)local_1a8;
      if (ppbVar64 != (byte **)0x0) {
        (**(code **)(*ppbVar64 + 0x2f0))(ppbVar64,bVar34 == 0,0);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (code *)0x0;
      if (pppbVar52 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar52);
      }
      FUN_7103771d60(&local_1b0,*(long *)puVar65,(long ****)0x1,ppppbVar49,param_5,param_6,uVar46,
                     param_8);
      pppbVar52 = (byte ***)local_1a8;
      ppbVar64 = *(byte ***)local_1a8;
      if (ppbVar64 != (byte **)0x0) {
        (**(code **)(*ppbVar64 + 0x2f0))(ppbVar64,bVar34 == 1,0);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (code *)0x0;
      if (pppbVar52 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar52);
      }
      FUN_7103771a80((long *)puVar65,(uint)bVar34,1);
      bVar34 = *(byte *)((long)param_1 + 0x16b);
      puVar65 = param_1 + 0x3e;
      FUN_7103771d60(&local_1b0,*(long *)puVar65,(long ****)0x0,ppppbVar49,param_5,param_6,uVar46,
                     param_8);
      pppbVar52 = (byte ***)local_1a8;
      ppbVar64 = *(byte ***)local_1a8;
      if (ppbVar64 != (byte **)0x0) {
        (**(code **)(*ppbVar64 + 0x2f0))(ppbVar64,bVar34 == 0,0);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (code *)0x0;
      if (pppbVar52 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar52);
      }
      FUN_7103771d60(&local_1b0,*(long *)puVar65,(long ****)0x1,ppppbVar49,param_5,param_6,uVar46,
                     param_8);
      pppbVar52 = (byte ***)local_1a8;
      ppbVar64 = *(byte ***)local_1a8;
      if (ppbVar64 != (byte **)0x0) {
        (**(code **)(*ppbVar64 + 0x2f0))(ppbVar64,bVar34 == 1,0);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (code *)0x0;
      if (pppbVar52 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar52);
      }
      FUN_7103771a80((long *)puVar65,(uint)bVar34,1);
      uVar39 = *param_1;
      uVar61 = param_1[0x5b];
      if (0 < (int)uVar39) {
        uVar40 = 0;
        do {
          FUN_7103771d60(&local_1b0,*(long *)(param_1 + 0x40),(long ****)(ulong)uVar40,ppppbVar49,
                         param_5,param_6,uVar46,param_8);
          pppbVar52 = (byte ***)local_1a8;
          ppbVar64 = *(byte ***)local_1a8;
          if (ppbVar64 != (byte **)0x0) {
            (**(code **)(*ppbVar64 + 0x2f0))(ppbVar64,(byte)uVar61 == uVar40,0);
          }
          local_1b0 = &PTR_FUN_710523d9c8;
          local_1a8 = (code *)0x0;
          if (pppbVar52 != (byte ***)0x0) {
            FUN_710392eb40((ulong)pppbVar52);
          }
          uVar40 = uVar40 + 1;
        } while (uVar39 != uVar40);
      }
      uVar48 = 1;
      FUN_7103771a80((long *)(param_1 + 0x40),(uint)(byte)uVar61,1);
      FUN_7101d30af0((long)param_1,0,uVar48,ppppbVar49,param_5,param_6,uVar46,param_8);
      param_1[0x42] = 0;
      if (alStack_1160 == local_1140) {
        pcVar55 = *(code **)(*local_1140 + 0x20);
LAB_7101d33fec:
        (*pcVar55)();
      }
      else if (local_1140 != (long *)0x0) {
        pcVar55 = *(code **)(*local_1140 + 0x28);
        goto LAB_7101d33fec;
      }
      if (alStack_1190 == local_1170) {
        pcVar55 = *(code **)(*local_1170 + 0x20);
LAB_7101d34018:
        (*pcVar55)();
      }
      else if (local_1170 != (long *)0x0) {
        pcVar55 = *(code **)(*local_1170 + 0x28);
        goto LAB_7101d34018;
      }
      if (alStack_11c0 == local_11a0) {
        pcVar55 = *(code **)(*local_11a0 + 0x20);
LAB_7101d34048:
        (*pcVar55)();
      }
      else if (local_11a0 != (long *)0x0) {
        pcVar55 = *(code **)(*local_11a0 + 0x28);
        goto LAB_7101d34048;
      }
      if (alStack_11f0 == local_11d0) {
        pcVar55 = *(code **)(*local_11d0 + 0x20);
LAB_7101d34074:
        (*pcVar55)();
      }
      else if (local_11d0 != (long *)0x0) {
        pcVar55 = *(code **)(*local_11d0 + 0x28);
        goto LAB_7101d34074;
      }
      if (alStack_1220 == local_1200) {
        pcVar55 = *(code **)(*local_1200 + 0x20);
      }
      else {
        if (local_1200 == (long *)0x0) goto LAB_7101d35d28;
        pcVar55 = *(code **)(*local_1200 + 0x28);
      }
      (*pcVar55)();
    }
    goto LAB_7101d35d28;
  }
  if (10 < (int)uVar61) goto LAB_7101d33260;
  param_3 = *(byte *****)(param_1 + 0x4e);
  FUN_7101d35ee0((undefined8 *)(param_1 + 0x52),*(void **)(param_1 + 0x4c),(long ****)param_3,
                 param_4,param_5,param_6,uVar46,param_8);
  switch(uVar61) {
  case 0:
    break;
  default:
    goto switchD_7101d33214_caseD_1;
  case 3:
switchD_7101d33214_caseD_4:
    puVar62 = *(undefined1 **)(param_1 + 0x54);
    if (*(undefined1 **)(param_1 + 0x56) <= puVar62) {
      pvVar66 = *(void **)(param_1 + 0x52);
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) {
LAB_7101d35ed8:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar72 = (long)*(undefined1 **)(param_1 + 0x56) - (long)pvVar66;
      if (uVar72 < 0x3fffffffffffffff) {
        pppbVar57 = (byte ***)(uVar72 * 2);
        if (pppbVar52 <= pppbVar57) {
          pppbVar52 = pppbVar57;
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d34474;
LAB_7101d34520:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d34474:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d34524;
          }
          goto LAB_7101d34520;
        }
      }
LAB_7101d34524:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49);
      puVar43 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      uVar51 = 10;
      goto LAB_7101d34670;
    }
    uVar51 = 10;
LAB_7101d34104:
    *puVar62 = uVar51;
    *(long *)(param_1 + 0x54) = *(long *)(param_1 + 0x54) + 1;
    break;
  case 4:
switchD_7101d33214_caseD_5:
    puVar62 = *(undefined1 **)(param_1 + 0x54);
    if (puVar62 < *(undefined1 **)(param_1 + 0x56)) {
      uVar51 = 0xb;
      goto LAB_7101d34104;
    }
    pvVar66 = *(void **)(param_1 + 0x52);
    ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
    pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
    if ((long)pppbVar52 < 0) goto LAB_7101d35ed8;
    uVar72 = (long)*(undefined1 **)(param_1 + 0x56) - (long)pvVar66;
    if (uVar72 < 0x3fffffffffffffff) {
      pppbVar57 = (byte ***)(uVar72 * 2);
      if (pppbVar52 <= pppbVar57) {
        pppbVar52 = pppbVar57;
      }
      if (pppbVar52 != (byte ***)0x0) goto LAB_7101d34490;
LAB_7101d34574:
      pvVar71 = (void *)0x0;
    }
    else {
      pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d34490:
      pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                       uVar46,param_8);
      if (pvVar71 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          param_3 = &local_1250;
          local_1250 = pppbVar52;
          uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar72 & 1) != 0) &&
             (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                               param_6,uVar46,param_8), pvVar71 != (void *)0x0))
          goto LAB_7101d34578;
        }
        goto LAB_7101d34574;
      }
    }
LAB_7101d34578:
    puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49);
    puVar43 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
    uVar51 = 0xb;
    goto LAB_7101d34670;
  case 5:
switchD_7101d33214_caseD_6:
    puVar62 = *(undefined1 **)(param_1 + 0x54);
    if (puVar62 < *(undefined1 **)(param_1 + 0x56)) {
      uVar51 = 0xc;
      goto LAB_7101d34104;
    }
    pvVar66 = *(void **)(param_1 + 0x52);
    ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
    pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
    if ((long)pppbVar52 < 0) goto LAB_7101d35ed8;
    uVar72 = (long)*(undefined1 **)(param_1 + 0x56) - (long)pvVar66;
    if (uVar72 < 0x3fffffffffffffff) {
      pppbVar57 = (byte ***)(uVar72 * 2);
      if (pppbVar52 <= pppbVar57) {
        pppbVar52 = pppbVar57;
      }
      if (pppbVar52 != (byte ***)0x0) goto LAB_7101d344c8;
LAB_7101d34660:
      pvVar71 = (void *)0x0;
    }
    else {
      pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d344c8:
      pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                       uVar46,param_8);
      if (pvVar71 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          param_3 = &local_1250;
          local_1250 = pppbVar52;
          uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar72 & 1) != 0) &&
             (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                               param_6,uVar46,param_8), pvVar71 != (void *)0x0))
          goto LAB_7101d34664;
        }
        goto LAB_7101d34660;
      }
    }
LAB_7101d34664:
    puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49);
    puVar43 = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
    uVar51 = 0xc;
LAB_7101d34670:
    *puVar62 = uVar51;
    if (0 < (long)ppppbVar49) {
      memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
      param_3 = ppppbVar49;
    }
    *(void **)(param_1 + 0x52) = pvVar71;
    *(undefined1 **)(param_1 + 0x54) = puVar62 + 1;
    *(undefined1 **)(param_1 + 0x56) = puVar43;
    if (pvVar66 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar66);
    }
    break;
  case 8:
switchD_7101d33214_caseD_9:
    puVar62 = *(undefined1 **)(param_1 + 0x54);
    if (puVar62 < *(undefined1 **)(param_1 + 0x56)) {
      *puVar62 = 5;
      *(long *)(param_1 + 0x54) = *(long *)(param_1 + 0x54) + 1;
    }
    else {
      pvVar66 = *(void **)(param_1 + 0x52);
      ppppbVar49 = (byte ****)(puVar62 + -(long)pvVar66);
      pppbVar52 = (byte ***)((long)ppppbVar49 + 1);
      if ((long)pppbVar52 < 0) goto LAB_7101d35ed8;
      uVar72 = (long)*(undefined1 **)(param_1 + 0x56) - (long)pvVar66;
      if (uVar72 < 0x3fffffffffffffff) {
        pppbVar57 = (byte ***)(uVar72 * 2);
        if (pppbVar52 <= pppbVar57) {
          pppbVar52 = pppbVar57;
        }
        if (pppbVar52 != (byte ***)0x0) goto LAB_7101d344ac;
LAB_7101d345c8:
        pvVar71 = (void *)0x0;
      }
      else {
        pppbVar52 = (byte ***)0x7fffffffffffffff;
LAB_7101d344ac:
        pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,param_6,
                                         uVar46,param_8);
        if (pvVar71 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1250;
            local_1250 = pppbVar52;
            uVar72 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar72 & 1) != 0) &&
               (pvVar71 = (void *)FUN_710392e290(0x10,pppbVar52,(long ****)param_3,param_4,param_5,
                                                 param_6,uVar46,param_8), pvVar71 != (void *)0x0))
            goto LAB_7101d345cc;
          }
          goto LAB_7101d345c8;
        }
      }
LAB_7101d345cc:
      puVar62 = (undefined1 *)((long)pvVar71 + (long)ppppbVar49);
      *puVar62 = 5;
      if (0 < (long)ppppbVar49) {
        memcpy(pvVar71,pvVar66,(size_t)ppppbVar49);
        param_3 = ppppbVar49;
      }
      *(void **)(param_1 + 0x52) = pvVar71;
      *(undefined1 **)(param_1 + 0x54) = puVar62 + 1;
      *(undefined1 **)(param_1 + 0x56) = (undefined1 *)((long)pvVar71 + (long)pppbVar52);
      if (pvVar66 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar66);
      }
    }
    goto switchD_7101d33214_caseD_1;
  }
switchD_7101d33214_caseD_0:
  param_1[0x45] = 1;
LAB_7101d346ac:
  lVar44 = *(long *)(param_1 + 0x36);
  pcVar59 = "subwin_00_r";
LAB_7101d346b8:
  FUN_7103778300(0x3f800000,lVar44,(long)pcVar59);
  if (uVar39 != 2) {
    if (uVar39 == 0) {
      local_1340 = (ulong)(uVar61 == 9);
      switch(uVar61) {
      case 0:
        local_1b0._4_4_ = 0x17;
        local_1a0 = 0x747475625f6e7462;
        local_198 = 0x6e6f;
        uStack_196 = 0x5f786e5f;
        uStack_192 = 0x6c;
        uStack_191 = 0;
        uVar39 = 0x811c9dc5;
        uVar61 = 0x6d;
        pbVar47 = (byte *)((long)&local_1a8 + 1);
        do {
          uVar39 = uVar39 * 0x89 ^ uVar61;
          uVar61 = (uint)*pbVar47;
          pbVar47 = pbVar47 + 1;
        } while (uVar61 != 0);
        break;
      case 1:
        local_1b0._4_4_ = 0x17;
        local_1a0 = 0x747475625f6e7462;
        local_198 = 0x6e6f;
        uStack_196 = 0x5f786e5f;
        uStack_192 = 0x72;
        uStack_191 = 0;
        uVar39 = 0x811c9dc5;
        uVar61 = 0x6d;
        pbVar47 = (byte *)((long)&local_1a8 + 1);
        do {
          uVar39 = uVar39 * 0x89 ^ uVar61;
          uVar61 = (uint)*pbVar47;
          pbVar47 = pbVar47 + 1;
        } while (uVar61 != 0);
        break;
      case 2:
        local_1b0._4_4_ = 0x18;
        local_1a0 = 0x747475625f6e7462;
        local_198 = 0x6e6f;
        uStack_196 = 0x5f786e5f;
        uStack_192 = 0x7a;
        uStack_191 = 0x6c;
        uVar39 = 0x811c9dc5;
        uStack_190 = 0;
        uVar61 = 0x6d;
        pbVar47 = (byte *)((long)&local_1a8 + 1);
        do {
          uVar39 = uVar39 * 0x89 ^ uVar61;
          uVar61 = (uint)*pbVar47;
          pbVar47 = pbVar47 + 1;
        } while (uVar61 != 0);
        break;
      case 3:
        local_1b0._4_4_ = 0x18;
        local_1a0 = 0x747475625f6e7462;
        local_198 = 0x6e6f;
        uStack_196 = 0x5f786e5f;
        uStack_192 = 0x7a;
        uStack_191 = 0x72;
        uVar39 = 0x811c9dc5;
        uStack_190 = 0;
        uVar61 = 0x6d;
        pbVar47 = (byte *)((long)&local_1a8 + 1);
        do {
          uVar39 = uVar39 * 0x89 ^ uVar61;
          uVar61 = (uint)*pbVar47;
          pbVar47 = pbVar47 + 1;
        } while (uVar61 != 0);
        break;
      case 4:
        local_198 = 0x6e6f;
        local_1a0 = 0x747475625f6e7462;
        if ((param_7 & 1) == 0) {
          uVar39 = 0x811c9dc5;
          uStack_196 = 0x5f786e5f;
          uStack_192 = 0x75;
          uStack_191 = 0x70;
          uStack_190 = 0;
          uVar61 = 0x6d;
          local_1b0._4_4_ = 0x18;
          pbVar47 = (byte *)((long)&local_1a8 + 1);
          do {
            uVar39 = uVar39 * 0x89 ^ uVar61;
            uVar61 = (uint)*pbVar47;
            pbVar47 = pbVar47 + 1;
          } while (uVar61 != 0);
        }
        else {
          uVar39 = 0x811c9dc5;
          uStack_196 = 0x6f72705f;
          uStack_192 = 0x5f;
          uStack_191 = 0x75;
          uStack_190 = 0x70;
          uVar61 = 0x6d;
          uStack_18f = 0;
          local_1b0._4_4_ = 0x19;
          pbVar47 = (byte *)((long)&local_1a8 + 1);
          do {
            uVar39 = uVar39 * 0x89 ^ uVar61;
            uVar61 = (uint)*pbVar47;
            pbVar47 = pbVar47 + 1;
          } while (uVar61 != 0);
        }
        break;
      case 5:
        local_1a0 = 0x747475625f6e7462;
        local_198 = 0x6e6f;
        uVar39 = 0x811c9dc5;
        if ((param_7 & 1) == 0) {
          uStack_196 = 0x5f786e5f;
          uStack_192 = 0x6c;
          uStack_191 = 0x72;
          uStack_190 = 0;
          uVar61 = 0x6d;
          local_1b0._4_4_ = 0x18;
          pbVar47 = (byte *)((long)&local_1a8 + 1);
          do {
            uVar39 = uVar39 * 0x89 ^ uVar61;
            uVar61 = (uint)*pbVar47;
            pbVar47 = pbVar47 + 1;
          } while (uVar61 != 0);
        }
        else {
          uStack_196 = 0x6f72705f;
          uStack_192 = 0x5f;
          uStack_191 = 0x6c;
          uStack_190 = 0x72;
          uVar61 = 0x6d;
          uStack_18f = 0;
          local_1b0._4_4_ = 0x19;
          pbVar47 = (byte *)((long)&local_1a8 + 1);
          do {
            uVar39 = uVar39 * 0x89 ^ uVar61;
            uVar61 = (uint)*pbVar47;
            pbVar47 = pbVar47 + 1;
          } while (uVar61 != 0);
        }
        break;
      case 6:
        local_198 = 0x6e6f;
        local_1a0 = 0x747475625f6e7462;
        if ((param_7 & 1) == 0) {
          uStack_196 = 0x5f786e5f;
          uStack_192 = 100;
          uStack_191 = 0x6f;
          uStack_190 = 0x77;
          uStack_18f = 0x6e;
          uStack_18e = 0;
          uVar39 = 0x811c9dc5;
          local_1b0._4_4_ = 0x1a;
          uVar61 = 0x6d;
          pbVar47 = (byte *)((long)&local_1a8 + 1);
          do {
            uVar39 = uVar39 * 0x89 ^ uVar61;
            uVar61 = (uint)*pbVar47;
            pbVar47 = pbVar47 + 1;
          } while (uVar61 != 0);
        }
        else {
          uVar39 = 0x811c9dc5;
          uStack_196 = 0x6f72705f;
          uStack_192 = 0x5f;
          uStack_191 = 100;
          uStack_190 = 0x6f;
          uStack_18f = 0x77;
          uStack_18e = 0x6e;
          uStack_18d = 0;
          uVar61 = 0x6d;
          local_1b0._4_4_ = 0x1b;
          pbVar47 = (byte *)((long)&local_1a8 + 1);
          do {
            uVar39 = uVar39 * 0x89 ^ uVar61;
            uVar61 = (uint)*pbVar47;
            pbVar47 = pbVar47 + 1;
          } while (uVar61 != 0);
        }
        break;
      case 7:
        local_1b0._4_4_ = 0x17;
        local_1a0 = 0x747475625f6e7462;
        local_198 = 0x6e6f;
        uStack_196 = 0x5f786e5f;
        uStack_192 = 0x61;
        uStack_191 = 0;
        uVar39 = 0x811c9dc5;
        uVar61 = 0x6d;
        pbVar47 = (byte *)((long)&local_1a8 + 1);
        do {
          uVar39 = uVar39 * 0x89 ^ uVar61;
          uVar61 = (uint)*pbVar47;
          pbVar47 = pbVar47 + 1;
        } while (uVar61 != 0);
        break;
      case 8:
        local_1b0._4_4_ = 0x17;
        local_1a0 = 0x747475625f6e7462;
        local_198 = 0x6e6f;
        uStack_196 = 0x5f786e5f;
        uStack_192 = 0x62;
        uStack_191 = 0;
        uVar39 = 0x811c9dc5;
        uVar61 = 0x6d;
        pbVar47 = (byte *)((long)&local_1a8 + 1);
        do {
          uVar39 = uVar39 * 0x89 ^ uVar61;
          uVar61 = (uint)*pbVar47;
          pbVar47 = pbVar47 + 1;
        } while (uVar61 != 0);
        break;
      case 9:
        local_1b0._4_4_ = 0x1d;
        local_1a0 = 0x747475625f6e7462;
        local_198 = 0x6e6f;
        uStack_196 = 0x5f786e5f;
        uStack_192 = 0x73;
        uStack_191 = 0x74;
        uStack_190 = 0x69;
        uStack_18f = 99;
        uStack_18e = 0x6b;
        uStack_18d = 0x5f;
        uStack_18c = 0x72;
        uVar39 = 0x811c9dc5;
        uVar61 = 0x6d;
        pbVar47 = (byte *)((long)&local_1a8 + 1);
        do {
          uVar39 = uVar39 * 0x89 ^ uVar61;
          uVar61 = (uint)*pbVar47;
          pbVar47 = pbVar47 + 1;
        } while (uVar61 != 0);
        break;
      case 10:
        local_1b0._4_4_ = 0x17;
        local_1a0 = 0x747475625f6e7462;
        local_198 = 0x6e6f;
        uStack_196 = 0x5f786e5f;
        uStack_192 = 0x78;
        uStack_191 = 0;
        uVar39 = 0x811c9dc5;
        uVar61 = 0x6d;
        pbVar47 = (byte *)((long)&local_1a8 + 1);
        do {
          uVar39 = uVar39 * 0x89 ^ uVar61;
          uVar61 = (uint)*pbVar47;
          pbVar47 = pbVar47 + 1;
        } while (uVar61 != 0);
        break;
      case 0xb:
        local_1b0._4_4_ = 0x17;
        local_1a0 = 0x747475625f6e7462;
        local_198 = 0x6e6f;
        uStack_196 = 0x5f786e5f;
        uStack_192 = 0x79;
        uStack_191 = 0;
        uVar39 = 0x811c9dc5;
        uVar61 = 0x6d;
        pbVar47 = (byte *)((long)&local_1a8 + 1);
        do {
          uVar39 = uVar39 * 0x89 ^ uVar61;
          uVar61 = (uint)*pbVar47;
          pbVar47 = pbVar47 + 1;
        } while (uVar61 != 0);
        break;
      default:
        goto switchD_7101d346f4_default;
      }
      goto LAB_7101d3580c;
    }
    if (uVar39 != 1) {
switchD_7101d34850_default:
      local_1340 = 0;
      goto switchD_7101d346f4_default;
    }
    switch(uVar61) {
    case 0:
      local_1b0._4_4_ = 0x17;
      local_1a0 = 0x747475625f6e7462;
      local_198 = 0x6e6f;
      uStack_196 = 0x5f786e5f;
      uStack_192 = 0x6c;
      uStack_191 = 0;
      uVar39 = 0x811c9dc5;
      uVar61 = 0x6d;
      pbVar47 = (byte *)((long)&local_1a8 + 1);
      do {
        uVar39 = uVar39 * 0x89 ^ uVar61;
        uVar61 = (uint)*pbVar47;
        pbVar47 = pbVar47 + 1;
      } while (uVar61 != 0);
      break;
    case 1:
      local_1b0._4_4_ = 0x18;
      local_1a0 = 0x747475625f6e7462;
      local_198 = 0x6e6f;
      uStack_196 = 0x5f786e5f;
      uStack_192 = 0x7a;
      uStack_191 = 0x6c;
      uVar39 = 0x811c9dc5;
      uStack_190 = 0;
      uVar61 = 0x6d;
      pbVar47 = (byte *)((long)&local_1a8 + 1);
      do {
        uVar39 = uVar39 * 0x89 ^ uVar61;
        uVar61 = (uint)*pbVar47;
        pbVar47 = pbVar47 + 1;
      } while (uVar61 != 0);
      break;
    case 2:
      local_1b0._4_4_ = 0x18;
      local_1a0 = 0x747475625f6e7462;
      local_198 = 0x6e6f;
      uStack_196 = 0x5f786e5f;
      uStack_192 = 0x73;
      uStack_191 = 0x6c;
      uVar39 = 0x811c9dc5;
      uStack_190 = 0;
      uVar61 = 0x6d;
      pbVar47 = (byte *)((long)&local_1a8 + 1);
      do {
        uVar39 = uVar39 * 0x89 ^ uVar61;
        uVar61 = (uint)*pbVar47;
        pbVar47 = pbVar47 + 1;
      } while (uVar61 != 0);
      break;
    case 3:
      local_1b0._4_4_ = 0x18;
      local_1a0 = 0x747475625f6e7462;
      local_198 = 0x6e6f;
      uStack_196 = 0x5f786e5f;
      uStack_192 = 0x73;
      uStack_191 = 0x72;
      uVar39 = 0x811c9dc5;
      uStack_190 = 0;
      uVar61 = 0x6d;
      pbVar47 = (byte *)((long)&local_1a8 + 1);
      do {
        uVar39 = uVar39 * 0x89 ^ uVar61;
        uVar61 = (uint)*pbVar47;
        pbVar47 = pbVar47 + 1;
      } while (uVar61 != 0);
      break;
    case 4:
      local_1b0._4_4_ = 0x18;
      local_1a0 = 0x747475625f6e7462;
      local_198 = 0x6e6f;
      uStack_196 = 0x5f786e5f;
      uStack_192 = 0x75;
      uStack_191 = 0x70;
      uVar39 = 0x811c9dc5;
      uStack_190 = 0;
      uVar61 = 0x6d;
      pbVar47 = (byte *)((long)&local_1a8 + 1);
      do {
        uVar39 = uVar39 * 0x89 ^ uVar61;
        uVar61 = (uint)*pbVar47;
        pbVar47 = pbVar47 + 1;
      } while (uVar61 != 0);
      break;
    case 5:
      local_1b0._4_4_ = 0x1b;
      local_1a0 = 0x747475625f6e7462;
      local_198 = 0x6e6f;
      uStack_196 = 0x5f786e5f;
      uStack_192 = 0x72;
      uStack_191 = 0x69;
      uStack_190 = 0x67;
      uStack_18f = 0x68;
      uStack_18e = 0x74;
      uStack_18d = 0;
      uVar39 = 0x811c9dc5;
      uVar61 = 0x6d;
      pbVar47 = (byte *)((long)&local_1a8 + 1);
      do {
        uVar39 = uVar39 * 0x89 ^ uVar61;
        uVar61 = (uint)*pbVar47;
        pbVar47 = pbVar47 + 1;
      } while (uVar61 != 0);
      break;
    case 6:
      local_1b0._4_4_ = 0x1a;
      local_1a0 = 0x747475625f6e7462;
      local_198 = 0x6e6f;
      uStack_18e = 0;
      uStack_196 = 0x5f786e5f;
      uStack_192 = 0x6c;
      uStack_191 = 0x65;
      uStack_190 = 0x66;
      uStack_18f = 0x74;
      uVar39 = 0x811c9dc5;
      uVar61 = 0x6d;
      pbVar47 = (byte *)((long)&local_1a8 + 1);
      do {
        uVar39 = uVar39 * 0x89 ^ uVar61;
        uVar61 = (uint)*pbVar47;
        pbVar47 = pbVar47 + 1;
      } while (uVar61 != 0);
      break;
    case 7:
      local_1b0._4_4_ = 0x1a;
      local_1a0 = 0x747475625f6e7462;
      local_198 = 0x6e6f;
      uStack_18e = 0;
      uStack_196 = 0x5f786e5f;
      uStack_192 = 100;
      uStack_191 = 0x6f;
      uStack_190 = 0x77;
      uStack_18f = 0x6e;
      uVar39 = 0x811c9dc5;
      uVar61 = 0x6d;
      pbVar47 = (byte *)((long)&local_1a8 + 1);
      do {
        uVar39 = uVar39 * 0x89 ^ uVar61;
        uVar61 = (uint)*pbVar47;
        pbVar47 = pbVar47 + 1;
      } while (uVar61 != 0);
      break;
    default:
      goto switchD_7101d34850_default;
    }
    uStack_196 = 0x5f786e5f;
    local_1340 = 0;
    goto LAB_7101d3580c;
  }
  local_1340 = (ulong)(uVar61 == 8);
  switch(uVar61) {
  case 0:
    local_1b0._4_4_ = 0x17;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_196 = 0x5f63675f;
    uStack_192 = 0x6c;
    uStack_191 = 0;
    uVar39 = 0x811c9dc5;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  case 1:
    local_1b0._4_4_ = 0x17;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_196 = 0x5f63675f;
    uStack_192 = 0x72;
    uStack_191 = 0;
    uVar39 = 0x811c9dc5;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  case 2:
    local_1b0._4_4_ = 0x17;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_196 = 0x5f63675f;
    uStack_192 = 0x7a;
    uStack_191 = 0;
    uVar39 = 0x811c9dc5;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  case 3:
    local_1b0._4_4_ = 0x18;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_196 = 0x5f63675f;
    uStack_192 = 0x75;
    uStack_191 = 0x70;
    uVar39 = 0x811c9dc5;
    uStack_190 = 0;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  case 4:
    local_1b0._4_4_ = 0x1e;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_18a = 0;
    uStack_196 = 0x5f63675f;
    uStack_192 = 0x72;
    uStack_191 = 0x69;
    uStack_190 = 0x67;
    uStack_18f = 0x68;
    uStack_18e = 0x74;
    uStack_18d = 0x5f;
    uStack_18c = 0x726c;
    uVar39 = 0x811c9dc5;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  case 5:
    local_1b0._4_4_ = 0x1a;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_18e = 0;
    uStack_196 = 0x5f63675f;
    uStack_192 = 100;
    uStack_191 = 0x6f;
    uStack_190 = 0x77;
    uStack_18f = 0x6e;
    uVar39 = 0x811c9dc5;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  case 6:
    local_1b0._4_4_ = 0x17;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_196 = 0x5f63675f;
    uStack_192 = 0x61;
    uStack_191 = 0;
    uVar39 = 0x811c9dc5;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  case 7:
    local_1b0._4_4_ = 0x17;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_196 = 0x5f63675f;
    uStack_192 = 0x62;
    uStack_191 = 0;
    uVar39 = 0x811c9dc5;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  case 8:
    local_1b0._4_4_ = 0x1d;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_196 = 0x5f63675f;
    uStack_192 = 0x73;
    uStack_191 = 0x74;
    uStack_190 = 0x69;
    uStack_18f = 99;
    uStack_18e = 0x6b;
    uStack_18d = 0x5f;
    uStack_18c = 99;
    uVar39 = 0x811c9dc5;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  case 9:
    local_1b0._4_4_ = 0x17;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_196 = 0x5f63675f;
    uStack_192 = 0x78;
    uStack_191 = 0;
    uVar39 = 0x811c9dc5;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  case 10:
    local_1b0._4_4_ = 0x17;
    local_1a0 = 0x747475625f6e7462;
    local_198 = 0x6e6f;
    uStack_196 = 0x5f63675f;
    uStack_192 = 0x79;
    uStack_191 = 0;
    uVar39 = 0x811c9dc5;
    uVar61 = 0x6d;
    pbVar47 = (byte *)((long)&local_1a8 + 1);
    do {
      uVar39 = uVar39 * 0x89 ^ uVar61;
      uVar61 = (uint)*pbVar47;
      pbVar47 = pbVar47 + 1;
    } while (uVar61 != 0);
    break;
  default:
switchD_7101d346f4_default:
    local_1a8 = (code *)((ulong)local_1a8 & 0xffffffffffffff00);
    local_1b0 = (undefined **)0x811c9dc5;
    goto LAB_7101d35810;
  }
LAB_7101d3580c:
  local_198 = 0x6e6f;
  local_1a0 = 0x747475625f6e7462;
  local_1a8 = (code *)0x5f74706f5f756e6d;
  local_1b0 = (undefined **)CONCAT44(local_1b0._4_4_,uVar39);
LAB_7101d35810:
  FUN_7103776910(&local_250,(long)ppppbVar1,(long ****)"set_txt_btn_00",param_3,param_4,param_5,
                 param_6,uVar46,param_8);
  FUN_710377a120((long)&local_250,(char *)&local_1a8,param_3,param_4,param_5,param_6,uVar46,param_8)
  ;
  uVar72 = local_1340;
  FUN_7101d3a000((uint *)&local_1f8,(char)param_1[0x43],(uint)local_1340);
  FUN_7103776910(&local_1260,(long)ppppbVar1,(long ****)"set_txt_btn_01",uVar72,param_4,param_5,
                 param_6,uVar46,param_8);
  FUN_710377a120((long)&local_1260,local_1f0,uVar72,param_4,param_5,param_6,uVar46,param_8);
  local_1248 = 0x101;
  local_1250 = (byte ***)0x0;
  local_1246 = 0;
  local_1240 = 1;
  local_123c = 1;
  local_123a = 1;
  local_1242 = 0;
  local_1238 = &DAT_41f0000000000000;
  local_1230 = 0;
  local_1200 = (long *)0x0;
  local_11d0 = (long *)0x0;
  local_11a0 = (long *)0x0;
  local_1170 = (long *)0x0;
  local_1140 = (long *)0x0;
  local_1130 = 0;
  FUN_710337df20((long)&local_1250);
  local_1238 = (undefined1 *)((ulong)local_1238 & 0xffffffff);
  if ((ulong)(*(long *)(param_1 + 0x54) - *(long *)(param_1 + 0x52)) < 6) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x36),0x710437c810);
    ppppbVar49 = &local_1250;
    FUN_7103770b30((long *)(param_1 + 0x38),ppppbVar1,(long ****)"selector_1",ppppbVar49,param_5,
                   param_6,uVar46,param_8);
    uVar72 = 5;
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x36),0x710437c821);
    ppppbVar49 = &local_1250;
    FUN_7103770b30((long *)(param_1 + 0x38),ppppbVar1,(long ****)"selector_0",ppppbVar49,param_5,
                   param_6,uVar46,param_8);
    uVar72 = 6;
  }
  uVar70 = 0;
  local_1348 = 0;
  do {
    if ((ulong)(*(long *)(param_1 + 0x54) - *(long *)(param_1 + 0x52)) <= uVar70) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    cVar36 = *(char *)(*(long *)(param_1 + 0x52) + uVar70);
    local_238[0] = 0;
    local_240 = 0;
    FUN_710062dc20((uint *)&local_240,"set_parts_subwin_%02d");
    FUN_71037717d0((undefined8 *)(param_1 + 0x38),(int)uVar70,local_238,ppppbVar49,param_5,param_6,
                   uVar46,param_8);
    uVar42 = local_1340;
    FUN_7101d3a000((uint *)&local_12a8,cVar36,(uint)local_1340);
    FUN_7103776640(&local_12b8,(long)ppppbVar1,(byte ****)local_238,uVar42,ppppbVar49,param_5,
                   param_6,uVar46,param_8);
    uVar48 = 0;
    local_12f8[0] = (long ***)((ulong)local_12f8[0] & 0xffffffffffffff00);
    local_1300 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_1300,"set_txt_name_%02d");
    FUN_7103776910(&local_1310,(long)&local_12b8,local_12f8,uVar48,ppppbVar49,param_5,param_6,uVar46
                   ,param_8);
    FUN_710377a120((long)&local_1310,(char *)local_12a0,uVar48,ppppbVar49,param_5,param_6,uVar46,
                   param_8);
    uVar42 = local_1308;
    local_1310 = &PTR_FUN_710523d9a8;
    local_1308 = 0;
    if (uVar42 != 0) {
      FUN_710392eb40(uVar42);
    }
    uVar48 = 1;
    local_12f8[0] = (long ***)((ulong)local_12f8[0] & 0xffffffffffffff00);
    local_1300 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_1300,"set_txt_name_%02d");
    FUN_7103776910(&local_1310,(long)&local_12b8,local_12f8,uVar48,ppppbVar49,param_5,param_6,uVar46
                   ,param_8);
    FUN_710377a120((long)&local_1310,(char *)local_12a0,uVar48,ppppbVar49,param_5,param_6,uVar46,
                   param_8);
    uVar42 = local_1308;
    local_1310 = &PTR_FUN_710523d9a8;
    local_1308 = 0;
    if (uVar42 != 0) {
      FUN_710392eb40(uVar42);
    }
    uVar48 = 2;
    local_12f8[0] = (long ***)((ulong)local_12f8[0] & 0xffffffffffffff00);
    local_1300 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_1300,"set_txt_name_%02d");
    FUN_7103776910(&local_1310,(long)&local_12b8,local_12f8,uVar48,ppppbVar49,param_5,param_6,uVar46
                   ,param_8);
    FUN_710377a120((long)&local_1310,(char *)local_12a0,uVar48,ppppbVar49,param_5,param_6,uVar46,
                   param_8);
    uVar42 = local_1308;
    local_1310 = &PTR_FUN_710523d9a8;
    local_1308 = 0;
    if (uVar42 != 0) {
      FUN_710392eb40(uVar42);
    }
    uVar42 = local_12b0;
    pcVar59 = *(char **)puVar65;
    pcVar54 = *(char **)puVar2;
    pcVar60 = pcVar59;
    if (pcVar59 != pcVar54) {
      cVar35 = *pcVar59;
      while ((pcVar60 = pcVar59, cVar35 != cVar36 &&
             (pcVar59 = pcVar59 + 1, pcVar60 = pcVar54, pcVar54 != pcVar59))) {
        cVar35 = *pcVar59;
      }
    }
    if ((cVar36 == '\r') || (pcVar54 != pcVar60)) {
      FUN_7103778300(0x3f800000,local_12b0,0x710433a3cd);
      if (cVar36 != (char)param_1[0x43]) {
        pcVar59 = "namecol_def";
        goto LAB_7101d35b98;
      }
      FUN_7103778300(0x3f800000,uVar42,0x7104443a02);
      local_1348 = uVar70 & 0xffffffff;
    }
    else {
      FUN_7103778300(0x3f800000,local_12b0,0x71042c5082);
      pcVar59 = "namecol_unset";
LAB_7101d35b98:
      FUN_7103778300(0x3f800000,uVar42,(long)pcVar59);
    }
    local_12b8 = &PTR_FUN_710523d988;
    local_12b0 = 0;
    if (uVar42 != 0) {
      uVar45 = *(ulong *)(uVar42 + 0x18);
      *(undefined ***)(uVar42 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar42 + 0x18) = 0;
      if (uVar45 != 0) {
        FUN_710392eb40(uVar45);
      }
      FUN_710392eb40(uVar42);
    }
    uVar70 = uVar70 + 1;
  } while (uVar70 < uVar72);
  FUN_7103771a80((long *)(param_1 + 0x38),(int)local_1348,0);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x60))(*(long **)(param_1 + 0x38),0);
  if (alStack_1160 == local_1140) {
    pcVar55 = *(code **)(*local_1140 + 0x20);
LAB_7101d35c30:
    (*pcVar55)();
  }
  else if (local_1140 != (long *)0x0) {
    pcVar55 = *(code **)(*local_1140 + 0x28);
    goto LAB_7101d35c30;
  }
  if (alStack_1190 == local_1170) {
    pcVar55 = *(code **)(*local_1170 + 0x20);
LAB_7101d35c60:
    (*pcVar55)();
  }
  else if (local_1170 != (long *)0x0) {
    pcVar55 = *(code **)(*local_1170 + 0x28);
    goto LAB_7101d35c60;
  }
  if (alStack_11c0 == local_11a0) {
    pcVar55 = *(code **)(*local_11a0 + 0x20);
LAB_7101d35c90:
    (*pcVar55)();
  }
  else if (local_11a0 != (long *)0x0) {
    pcVar55 = *(code **)(*local_11a0 + 0x28);
    goto LAB_7101d35c90;
  }
  if (alStack_11f0 == local_11d0) {
    pcVar55 = *(code **)(*local_11d0 + 0x20);
LAB_7101d35cc0:
    (*pcVar55)();
  }
  else if (local_11d0 != (long *)0x0) {
    pcVar55 = *(code **)(*local_11d0 + 0x28);
    goto LAB_7101d35cc0;
  }
  if (alStack_1220 == local_1200) {
    pcVar55 = *(code **)(*local_1200 + 0x20);
LAB_7101d35cf0:
    (*pcVar55)();
  }
  else if (local_1200 != (long *)0x0) {
    pcVar55 = *(code **)(*local_1200 + 0x28);
    goto LAB_7101d35cf0;
  }
  uVar46 = local_1258;
  local_1260 = &PTR_FUN_710523d9a8;
  local_1258 = 0;
  if (uVar46 != 0) {
    FUN_710392eb40(uVar46);
  }
  uVar46 = local_248;
  local_250 = &PTR_FUN_710523d9a8;
  local_248 = 0;
  if (uVar46 != 0) {
    FUN_710392eb40(uVar46);
  }
LAB_7101d35d28:
  lVar44 = *(long *)*param_2;
  (**(code **)(**(long **)(lVar44 + 0x458) + 0x58))(*(float *)(lVar44 + 0x640) * 0.0);
  puVar68 = *(undefined8 **)(lVar44 + 0x468);
  for (puVar67 = *(undefined8 **)(lVar44 + 0x460); puVar67 != puVar68; puVar67 = puVar67 + 1) {
    plVar63 = (long *)*puVar67;
    uVar46 = (**(code **)(*plVar63 + 0x40))(plVar63);
    if ((uVar46 & 1) != 0) {
      (**(code **)(*plVar63 + 0x20))(plVar63);
    }
  }
LAB_7101d35d94:
  uVar46 = local_1318;
  local_1320 = &PTR_FUN_710523d988;
  local_1318 = 0;
  if (uVar46 != 0) {
    uVar72 = *(ulong *)(uVar46 + 0x18);
    *(undefined ***)(uVar46 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar46 + 0x18) = 0;
    if (uVar72 != 0) {
      FUN_710392eb40(uVar72);
    }
    FUN_710392eb40(uVar46);
  }
  return;
switchD_7101d33214_caseD_1:
  param_1[0x45] = 0;
LAB_7101d34610:
  lVar44 = *(long *)(param_1 + 0x36);
  pcVar59 = "subwin_00_l";
  goto LAB_7101d346b8;
}

