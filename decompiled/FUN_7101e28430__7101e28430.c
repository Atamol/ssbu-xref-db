// addr:      7101e28430
// offset:    0x1e28430
// name:      FUN_7101e28430
// mangled:   
// signature: undefined4 __cdecl FUN_7101e28430(long param_1, uint param_2, uint param_3, uint param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_7101e28430(long param_1,uint param_2,uint param_3,uint param_4,long ****param_5,
              undefined8 param_6,ulong param_7,undefined8 param_8)

{
  short sVar1;
  undefined2 *puVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  size_t sVar8;
  long *plVar9;
  void *pvVar10;
  ulong uVar11;
  undefined1 uVar12;
  char *pcVar13;
  long *********ppppppppplVar14;
  undefined8 uVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  uint uVar20;
  byte *pbVar21;
  long ***ppplVar22;
  ushort *puVar23;
  int *piVar24;
  uint *puVar25;
  long lVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  undefined8 *puVar31;
  uint uVar32;
  undefined2 *puVar33;
  undefined4 uVar34;
  long lVar35;
  ushort *puVar36;
  ulong uVar37;
  char cVar38;
  ulong uVar39;
  long *********ppppppppplVar40;
  uint *puVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  byte ****__n;
  long local_258;
  undefined4 local_220 [2];
  undefined **local_218;
  long local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined **local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined **local_188;
  ulong local_180;
  long ***local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_164;
  long ***local_130;
  long *local_128;
  undefined **local_120;
  ulong local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  byte ***apppbStack_c8 [4];
  undefined **local_a8;
  ulong local_a0;
  byte ***apppbStack_98 [5];
  
  uVar39 = param_7 & 0xffffffff;
  iVar42 = (int)param_6;
  __n = (byte ****)(ulong)param_3;
  uVar37 = (ulong)param_2;
  if (iVar42 == 0) {
    iVar42 = *(int *)(param_1 + 0xbdc);
  }
  pcVar13 = "set_parts_list_%02d";
  pppplVar19 = param_5;
  snprintf((char *)apppbStack_98,0x20,"set_parts_list_%02d",param_2);
  FUN_7103776640(&local_a8,param_1 + 0xba0,apppbStack_98,pcVar13,uVar37,pppplVar19,param_6,param_7,
                 param_8);
  iVar6 = *(int *)(*(long *)(param_1 + 0x178) + 0x2a4);
  if ((iVar6 < 0) ||
     ((ulong)(*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3) <= (ulong)(long)iVar6)) {
LAB_7101e284f4:
    lVar35 = 0;
  }
  else {
    uVar5 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x188) + (long)iVar6 * 8) + 8);
    if ((long)(short)uVar5 == -1) goto LAB_7101e284f4;
    if (1999 < uVar5) goto LAB_7101e2b090;
    lVar35 = *(long *)(param_1 + 0x1020) + (long)(short)uVar5 * 0x60;
  }
  if (3 < param_2) goto LAB_7101e2b090;
  pcVar13 = "set_parts_base_%02d";
  lVar45 = (long)(int)param_2;
  ppppbVar18 = __n;
  snprintf((char *)apppbStack_c8,0x20,"set_parts_base_%02d",param_3);
  if (iVar42 == 1) {
    if (*(char *)(param_1 + 0xbec) != '\0') {
LAB_7101e2860c:
      uVar34 = 0;
      goto LAB_7101e2b3f8;
    }
    if ((param_4 & 1) == 0) {
      uVar5 = *(ushort *)(lVar35 + lVar45 * 4 + 0x4c);
      param_5 = (long ****)(ulong)uVar5;
      if (uVar5 == 0xffff) {
        param_5 = (long ****)(ulong)*(ushort *)(param_1 + 0xd70);
      }
      else if (*(ushort *)(param_1 + 0xd70) != uVar5) goto LAB_7101e2860c;
    }
    lVar43 = *(long *)(DAT_710532f730 + 8);
    lVar35 = *(long *)(lVar43 + 0x1d8);
    ppppppppplVar40 = (long *********)((ulong)param_5 & 0xffff);
    uVar20 = (uint)ppppppppplVar40;
    sVar1 = (short)param_5;
    if ((~(uint)param_5 & 0xffff) == 0) {
      uVar39 = 0xffffffff;
    }
    else {
      uVar39 = (ulong)*(ushort *)(lVar35 + (long)sVar1 * 2 + 0x60);
    }
    uVar37 = (*(long *)(lVar35 + 0x28) - *(long *)(lVar35 + 0x20) >> 6) * -0x3333333333333333;
    puVar33 = (undefined2 *)(*(long *)(lVar35 + 0x20) + uVar39 * 0x140);
    if (uVar37 < uVar39 || uVar37 - uVar39 == 0) {
      puVar33 = &DAT_7105182b08;
    }
    FUN_7103776640(&local_110,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    uVar39 = (ulong)local_108;
    FUN_7103778300(0x3f800000,(long)local_108,0x71044228cd);
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar39 != 0) {
      uVar37 = *(ulong *)(uVar39 + 0x18);
      *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar39 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40(uVar39);
    }
    FUN_7103776640(&local_110,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    uVar39 = (ulong)local_108;
    FUN_7103778300(0x3f800000,(long)local_108,0x71043089f8);
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar39 != 0) {
      uVar37 = *(ulong *)(uVar39 + 0x18);
      *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar39 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40(uVar39);
    }
    lVar35 = *(long *)(lVar43 + 0x1d8);
    if (uVar20 == 0xffff) {
      uVar29 = 0xffffffff;
    }
    else {
      uVar29 = (uint)*(ushort *)(lVar35 + (long)sVar1 * 2 + 0x60);
    }
    if ((uVar29 < (uint)((int)((ulong)(*(long *)(lVar35 + 0x28) - *(long *)(lVar35 + 0x20)) >> 6) *
                        -0x33333333)) &&
       (*(char *)(*(long *)(lVar35 + 0x20) + (ulong)uVar29 * 0x140 + 0x5e) == '\x01')) {
      FUN_7103776640(&local_178,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,param_6,
                     param_7,param_8);
      FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_icon_base",pcVar13,ppppbVar18
                     ,pppplVar19,param_6,param_7,param_8);
      uVar39 = (ulong)local_108;
      FUN_7103778300(0x3f800000,(long)local_108,0x710432a69e);
      local_110 = &PTR_FUN_710523d988;
      local_108 = (long *)0x0;
      if (uVar39 != 0) {
        uVar37 = *(ulong *)(uVar39 + 0x18);
        *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar39 + 0x18) = 0;
        if (uVar37 != 0) {
          FUN_710392eb40(uVar37);
        }
        FUN_710392eb40(uVar39);
      }
      uVar39 = local_170;
      local_178 = (long ***)&PTR_FUN_710523d988;
      local_170 = 0;
      if (uVar39 != 0) {
        uVar37 = *(ulong *)(uVar39 + 0x18);
        *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar39 + 0x18) = 0;
        if (uVar37 != 0) {
          FUN_710392eb40(uVar37);
        }
        FUN_710392eb40(uVar39);
      }
      FUN_7103776640(&local_110,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,param_6,
                     param_7,param_8);
      uVar39 = (ulong)local_108;
      FUN_7103778300(0x3f800000,(long)local_108,0x710432a69e);
      local_110 = &PTR_FUN_710523d988;
      local_108 = (long *)0x0;
      if (uVar39 != 0) {
        uVar37 = *(ulong *)(uVar39 + 0x18);
        *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar39 + 0x18) = 0;
        if (uVar37 != 0) {
          FUN_710392eb40(uVar37);
        }
        FUN_710392eb40(uVar39);
      }
      cVar38 = '\x02';
      lVar35 = 4;
    }
    else {
      cVar38 = *(char *)(puVar33 + 0x36);
      if (cVar38 == '\x03') {
        FUN_7103776640(&local_178,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,
                       param_6,param_7,param_8);
        FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_icon_base",pcVar13,
                       ppppbVar18,pppplVar19,param_6,param_7,param_8);
        uVar39 = (ulong)local_108;
        FUN_7103778300(0x3f800000,(long)local_108,0x7104433649);
        local_110 = &PTR_FUN_710523d988;
        local_108 = (long *)0x0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        uVar39 = local_170;
        local_178 = (long ***)&PTR_FUN_710523d988;
        local_170 = 0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        FUN_7103776640(&local_110,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,
                       param_6,param_7,param_8);
        uVar39 = (ulong)local_108;
        FUN_7103778300(0x3f800000,(long)local_108,0x7104433649);
        local_110 = &PTR_FUN_710523d988;
        local_108 = (long *)0x0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        cVar38 = '\x04';
        lVar35 = 1;
      }
      else if (cVar38 == '\x02') {
        FUN_7103776640(&local_178,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,
                       param_6,param_7,param_8);
        FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_icon_base",pcVar13,
                       ppppbVar18,pppplVar19,param_6,param_7,param_8);
        uVar39 = (ulong)local_108;
        FUN_7103778300(0x3f800000,(long)local_108,0x710436c98a);
        local_110 = &PTR_FUN_710523d988;
        local_108 = (long *)0x0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        uVar39 = local_170;
        local_178 = (long ***)&PTR_FUN_710523d988;
        local_170 = 0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        FUN_7103776640(&local_110,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,
                       param_6,param_7,param_8);
        uVar39 = (ulong)local_108;
        FUN_7103778300(0x3f800000,(long)local_108,0x710436c98a);
        local_110 = &PTR_FUN_710523d988;
        local_108 = (long *)0x0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        cVar38 = '\x05';
        lVar35 = 2;
      }
      else if (cVar38 == '\x01') {
        FUN_7103776640(&local_178,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,
                       param_6,param_7,param_8);
        FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_icon_base",pcVar13,
                       ppppbVar18,pppplVar19,param_6,param_7,param_8);
        uVar39 = (ulong)local_108;
        FUN_7103778300(0x3f800000,(long)local_108,0x710437cb20);
        local_110 = &PTR_FUN_710523d988;
        local_108 = (long *)0x0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        uVar39 = local_170;
        local_178 = (long ***)&PTR_FUN_710523d988;
        local_170 = 0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        FUN_7103776640(&local_110,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,
                       param_6,param_7,param_8);
        uVar39 = (ulong)local_108;
        FUN_7103778300(0x3f800000,(long)local_108,0x710437cb20);
        local_110 = &PTR_FUN_710523d988;
        local_108 = (long *)0x0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        lVar35 = 0;
        cVar38 = '\x03';
      }
      else {
        FUN_7103776640(&local_178,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,
                       param_6,param_7,param_8);
        FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_icon_base",pcVar13,
                       ppppbVar18,pppplVar19,param_6,param_7,param_8);
        uVar39 = (ulong)local_108;
        FUN_7103778300(0x3f800000,(long)local_108,0x710428109c);
        local_110 = &PTR_FUN_710523d988;
        local_108 = (long *)0x0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        uVar39 = local_170;
        local_178 = (long ***)&PTR_FUN_710523d988;
        local_170 = 0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        FUN_7103776640(&local_110,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,
                       param_6,param_7,param_8);
        uVar39 = (ulong)local_108;
        FUN_7103778300(0x3f800000,(long)local_108,0x710428109c);
        local_110 = &PTR_FUN_710523d988;
        local_108 = (long *)0x0;
        if (uVar39 != 0) {
          uVar37 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar39);
        }
        cVar38 = '\x06';
        lVar35 = 3;
      }
    }
    switch(*(undefined1 *)(puVar33 + 0x34)) {
    case 0:
      local_110 = (undefined **)0xa00000000;
      local_108 = (long *)0x6f6e5f7373616c63;
      uVar29 = 0x811c9dc5;
      local_100 = CONCAT13(local_100._3_1_,0x656e);
      uVar32 = 99;
      pbVar21 = (byte *)((long)&local_108 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar32 != 0);
      break;
    case 1:
      local_110 = (undefined **)0xa00000000;
      local_108 = (long *)0x6f685f7373616c63;
      uVar29 = 0x811c9dc5;
      local_100 = CONCAT13(local_100._3_1_,0x6570);
      uVar32 = 99;
      pbVar21 = (byte *)((long)&local_108 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar32 != 0);
      break;
    case 2:
      local_110 = (undefined **)0x900000000;
      local_108 = (long *)0x63615f7373616c63;
      local_100 = CONCAT22(local_100._2_2_,0x65);
      uVar29 = 0x811c9dc5;
      uVar32 = 99;
      pbVar21 = (byte *)((long)&local_108 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar32 != 0);
      break;
    case 3:
      local_110 = (undefined **)0xc00000000;
      local_108 = (long *)0x656c5f7373616c63;
      uVar29 = 0x811c9dc5;
      local_100 = 0x646e6567;
      uVar32 = 99;
      local_fc = 0;
      pbVar21 = (byte *)((long)&local_108 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar32 != 0);
      break;
    default:
      local_110 = (undefined **)0xa00000000;
      local_108 = (long *)0x6f6e5f7373616c63;
      uVar29 = 0x811c9dc5;
      local_100 = CONCAT13(local_100._3_1_,0x656e);
      uVar32 = 99;
      pbVar21 = (byte *)((long)&local_108 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar32 != 0);
    }
    local_110 = (undefined **)CONCAT44(local_110._4_4_,uVar29);
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,pcVar13,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_icon_base",pcVar13,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    uVar39 = local_170;
    FUN_7103778300(0x3f800000,local_170,(long)&local_108);
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar39 != 0) {
      uVar37 = *(ulong *)(uVar39 + 0x18);
      *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar39 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40(uVar39);
    }
    uVar39 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar39 != 0) {
      uVar37 = *(ulong *)(uVar39 + 0x18);
      *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar39 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40(uVar39);
    }
    if ((param_4 & 1) == 0) {
      lVar43 = param_1 + lVar45 * 0x40;
      uVar5 = *(ushort *)(lVar43 + (long)(int)param_3 * 2 + 0xf18);
      if (uVar5 != 0xffff) {
        if (*(char *)(lVar43 + (int)param_3 + 0xf24) == '\0') {
          if (*(char *)(param_1 + 0xe70) == cVar38) {
            lVar44 = 0;
          }
          else if (*(char *)(param_1 + 0xe71) == cVar38) {
            lVar44 = 1;
          }
          else if (*(char *)(param_1 + 0xe72) == cVar38) {
            lVar44 = 2;
          }
          else if (*(char *)(param_1 + 0xe73) == cVar38) {
            lVar44 = 3;
          }
          else {
            lVar44 = 4;
            if (*(char *)(param_1 + 0xe74) != cVar38) {
              lVar44 = 5;
            }
          }
          uVar5 = *(ushort *)(lVar43 + (long)(int)param_3 * 2 + 0xf2a);
          if (uVar5 >> 4 < 0x177) {
            puVar33 = (undefined2 *)
                      (*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar5 * 0x50 + 72000);
          }
          else {
            puVar33 = &DAT_710532a878;
            if (((ushort)(uVar5 + 0xe890) < 100) &&
               (lVar43 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar5 + 0xe890) * 0x50,
               *(short *)(lVar43 + 0x88cc8) != -1)) {
              puVar33 = (undefined2 *)(lVar43 + 0x88cc0);
            }
          }
          lVar43 = param_1 + lVar44 * 0x18;
          puVar31 = *(undefined8 **)(lVar43 + 0xe00);
          plVar9 = (long *)(lVar43 + 0xe00);
          if (puVar31 < *(undefined8 **)(lVar43 + 0xe08)) {
            *puVar31 = puVar33;
            *plVar9 = *plVar9 + 8;
            goto LAB_7101e2b150;
          }
          puVar27 = (undefined8 *)(param_1 + lVar44 * 0x18 + 0xdf8);
          puVar41 = (uint *)*puVar27;
          pppplVar17 = (long ****)((long)puVar31 - (long)puVar41);
          uVar39 = ((long)pppplVar17 >> 3) + 1;
          if (uVar39 >> 0x3d != 0) goto LAB_7101e2b460;
          lVar44 = (long)*(undefined8 **)(lVar43 + 0xe08) - (long)puVar41;
          if ((ulong)(lVar44 >> 3) < 0xfffffffffffffff) {
            uVar37 = lVar44 >> 2;
            if (uVar39 <= uVar37) {
              uVar39 = uVar37;
            }
            if (uVar39 != 0) {
              if (uVar39 >> 0x3d != 0) goto LAB_7101e2b090;
              goto LAB_7101e2b09c;
            }
            pvVar10 = (void *)0x0;
          }
          else {
            uVar39 = 0x1fffffffffffffff;
LAB_7101e2b09c:
            ppplVar22 = (long ***)(uVar39 * 8);
            if (ppplVar22 == (long ***)0x0) {
              ppplVar22 = (long ***)0x1;
            }
            pvVar10 = (void *)FUN_710392e290(0x10,ppplVar22,pppplVar17,ppppbVar18,pppplVar19,param_6
                                             ,param_7,param_8);
            if (pvVar10 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_1d0 = (undefined **)((ulong)local_1d0 & 0xffffffff00000000);
                pppplVar16 = &local_178;
                local_178 = ppplVar22;
                uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
                if (((uVar37 & 1) != 0) &&
                   (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar22,pppplVar16,ppppbVar18,pppplVar19
                                                     ,param_6,param_7,param_8),
                   pvVar10 != (void *)0x0)) goto LAB_7101e2b104;
              }
              pvVar10 = (void *)0x0;
            }
          }
LAB_7101e2b104:
          puVar31 = (undefined8 *)((long)pvVar10 + ((long)pppplVar17 >> 3) * 8);
          *puVar31 = puVar33;
          if (0 < (long)pppplVar17) {
            memcpy(pvVar10,puVar41,(size_t)pppplVar17);
          }
          *puVar27 = pvVar10;
          *plVar9 = (long)(puVar31 + 1);
          *(void **)(lVar43 + 0xe08) = (void *)((long)pvVar10 + uVar39 * 8);
        }
        else {
          lVar43 = param_1 + lVar35 * 0x18;
          puVar41 = *(uint **)(lVar43 + 0xe78);
          puVar25 = *(uint **)(lVar43 + 0xe80);
          sVar8 = (long)puVar25 - (long)puVar41;
          puVar30 = puVar41;
          if (sVar8 != 0) {
            do {
              if ((uVar5 == (ushort)*puVar30) && (*(char *)((long)puVar30 + 2) != '\0')) {
                *(char *)((long)puVar30 + 2) = *(char *)((long)puVar30 + 2) + '\x01';
                goto LAB_7101e2b150;
              }
              puVar30 = puVar30 + 1;
            } while (puVar25 != puVar30);
          }
          lVar44 = param_1 + lVar35 * 0x18;
          puVar30 = *(uint **)(lVar44 + 0xe88);
          plVar9 = (long *)(lVar43 + 0xe80);
          if (puVar25 != puVar30) {
            *puVar25 = uVar5 | 0x10000;
            *plVar9 = *plVar9 + 4;
            goto LAB_7101e2b150;
          }
          uVar39 = ((long)sVar8 >> 2) + 1;
          if (uVar39 >> 0x3e != 0) goto LAB_7101e2b460;
          lVar26 = (long)puVar30 - (long)puVar41;
          if ((ulong)(lVar26 >> 2) < 0x1fffffffffffffff) {
            uVar37 = lVar26 >> 1;
            if (uVar39 <= uVar37) {
              uVar39 = uVar37;
            }
            if (uVar39 != 0) {
              if (uVar39 >> 0x3e != 0) goto LAB_7101e2b090;
              goto LAB_7101e2aafc;
            }
            pvVar10 = (void *)0x0;
          }
          else {
            uVar39 = 0x3fffffffffffffff;
LAB_7101e2aafc:
            ppplVar22 = (long ***)(uVar39 * 4);
            if (ppplVar22 == (long ***)0x0) {
              ppplVar22 = (long ***)0x1;
            }
            pvVar10 = (void *)FUN_710392e290(0x10,ppplVar22,(long ****)pcVar13,ppppbVar18,pppplVar19
                                             ,param_6,param_7,param_8);
            if (pvVar10 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_1d0 = (undefined **)((ulong)local_1d0 & 0xffffffff00000000);
                pppplVar17 = &local_178;
                local_178 = ppplVar22;
                uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
                if (((uVar37 & 1) != 0) &&
                   (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar22,pppplVar17,ppppbVar18,pppplVar19
                                                     ,param_6,param_7,param_8),
                   pvVar10 != (void *)0x0)) goto LAB_7101e2ab68;
              }
              pvVar10 = (void *)0x0;
            }
          }
LAB_7101e2ab68:
          puVar30 = (uint *)((long)pvVar10 + ((long)sVar8 >> 2) * 4);
          *puVar30 = uVar5 | 0x10000;
          if (0 < (long)sVar8) {
            memcpy(pvVar10,puVar41,sVar8);
          }
          *(void **)(lVar43 + 0xe78) = pvVar10;
          *plVar9 = (long)(puVar30 + 1);
          *(void **)(lVar44 + 0xe88) = (void *)((long)pvVar10 + uVar39 * 4);
        }
        if (puVar41 != (uint *)0x0) {
          FUN_710392eb40((ulong)puVar41);
        }
      }
    }
LAB_7101e2b150:
    pppplVar19 = (long ****)0x1;
    uVar39 = 0xffff;
    FUN_7101e2b470((short *)(param_1 + 0xf18),param_2,param_3,sVar1,1,-1);
    FUN_7103778300(0x3f800000,local_a0,0x71042c5399);
    if ((char)((short *)(param_1 + 0xf18))[lVar45 * 0x20 + 6] == '\0') {
      iVar42 = *(int *)(param_1 + lVar45 * 0x40 + 0xf38);
    }
    else {
      iVar42 = 0;
    }
    lVar45 = param_1 + lVar45 * 0x40;
    if (*(char *)(lVar45 + 0xf25) == '\0') {
      iVar42 = *(int *)(lVar45 + 0xf3c) + iVar42;
      if (*(char *)(lVar45 + 0xf26) == '\0') goto LAB_7101e2b1e8;
LAB_7101e2b1b4:
      if (*(char *)(lVar45 + 0xf27) != '\0') goto LAB_7101e2b1bc;
LAB_7101e2b1f8:
      iVar42 = *(int *)(lVar45 + 0xf44) + iVar42;
      if (*(char *)(lVar45 + 0xf28) == '\0') goto LAB_7101e2b208;
LAB_7101e2b1c4:
      cVar38 = *(char *)(lVar45 + 0xf29);
    }
    else {
      if (*(char *)(lVar45 + 0xf26) != '\0') goto LAB_7101e2b1b4;
LAB_7101e2b1e8:
      iVar42 = *(int *)(lVar45 + 0xf40) + iVar42;
      if (*(char *)(lVar45 + 0xf27) == '\0') goto LAB_7101e2b1f8;
LAB_7101e2b1bc:
      if (*(char *)(lVar45 + 0xf28) != '\0') goto LAB_7101e2b1c4;
LAB_7101e2b208:
      iVar42 = *(int *)(lVar45 + 0xf48) + iVar42;
      cVar38 = *(char *)(lVar45 + 0xf29);
    }
    if (cVar38 == '\0') {
      iVar42 = *(int *)(lVar45 + 0xf4c) + iVar42;
    }
    if (iVar42 == 0) {
      FUN_7103778300(0x3f800000,local_a0,0x710433a65a);
    }
    if ((param_4 & 1) == 0) {
      lVar35 = param_1 + lVar35 * 0x18;
      puVar36 = *(ushort **)(lVar35 + 0xe78);
      puVar23 = *(ushort **)(lVar35 + 0xe80);
      if (puVar36 != puVar23) {
        do {
          if (uVar20 == *puVar36) {
            iVar42 = (byte)puVar36[1] - 1;
            if ((byte)puVar36[1] == 0 || iVar42 == 0) {
              __n = (byte ****)((long)puVar23 - (long)(puVar36 + 2));
              lVar45 = (long)__n >> 2;
              if (__n != (byte ****)0x0) {
                memmove(puVar36,puVar36 + 2,(size_t)__n);
              }
              *(long *)(lVar35 + 0xe80) = (long)(puVar36 + lVar45 * 2);
              break;
            }
            *(char *)(puVar36 + 1) = (char)iVar42;
            puVar23 = *(ushort **)(lVar35 + 0xe80);
          }
          puVar36 = puVar36 + 2;
        } while (puVar36 != puVar23);
      }
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      uVar39 = (ulong)*(ushort *)(param_1 + 0xd72);
    }
    lVar43 = *DAT_7105329f98;
    uVar20 = (uint)uVar39;
    if ((uVar20 >> 4 & 0xfff) < 0x177) {
      lVar44 = *(long *)(lVar43 + 0x30) + (uVar39 & 0xffff) * 0x50;
      puVar33 = (undefined2 *)(lVar44 + 72000);
      uVar5 = *(ushort *)(lVar44 + 0x11948);
    }
    else {
      puVar33 = &DAT_710532a878;
      if (((uVar20 - 6000 & 0xffff) < 100) &&
         (lVar44 = *(long *)(lVar43 + 0x30) + ((ulong)(uVar20 - 6000) & 0xffff) * 0x50,
         *(short *)(lVar44 + 0x88cc8) != -1)) {
        puVar33 = (undefined2 *)(lVar44 + 0x88cc0);
      }
      uVar5 = puVar33[4];
    }
    ppppppppplVar40 = (long *********)(ulong)uVar5;
    if ((((param_4 & 1) == 0) && (uVar4 = *(ushort *)(lVar35 + lVar45 * 4 + 0x4c), uVar4 != 0xffff))
       && (uVar5 != uVar4)) goto LAB_7101e2860c;
    lVar35 = *(long *)(DAT_710532f730 + 8);
    lVar44 = *(long *)(lVar35 + 0x1d8);
    lVar26 = (long)(short)uVar5;
    if (uVar5 == 0xffff) {
      uVar37 = 0xffffffff;
    }
    else {
      uVar37 = (ulong)*(ushort *)(lVar44 + lVar26 * 2 + 0x60);
    }
    ppppbVar18 = (byte ****)0x1;
    uVar11 = (*(long *)(lVar44 + 0x28) - *(long *)(lVar44 + 0x20) >> 6) * -0x3333333333333333;
    puVar2 = (undefined2 *)(*(long *)(lVar44 + 0x20) + uVar37 * 0x140);
    if (uVar11 < uVar37 || uVar11 - uVar37 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    ppppppppplVar14 = ppppppppplVar40;
    FUN_710259c150(*(long *)(lVar43 + 0x20),1,uVar5,(byte ****)0x1,pppplVar19,param_6,param_7,
                   param_8);
    lVar43 = *(long *)(lVar43 + 0x20);
    if (uVar5 != 0xffff) {
      puVar36 = *(ushort **)(lVar43 + 0x28);
      lVar44 = *(long *)(lVar43 + 0x30) - (long)puVar36;
      uVar37 = lVar44 >> 3;
      if (0 < (int)uVar37) {
        uVar11 = 0;
        do {
          if (uVar37 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          if (*puVar36 == uVar5) {
            if (-1 < (int)uVar11) {
              uVar37 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar5);
              ppppppppplVar14 = (long *********)&SUB_00000018;
              plVar9 = FUN_710323faf0((long *)(lVar43 + 8),uVar37,(undefined **)&SUB_00000018,
                                      ppppbVar18,pppplVar19,param_6,param_7,param_8);
              goto LAB_7101e28724;
            }
            break;
          }
          uVar11 = uVar11 + 1;
          puVar36 = puVar36 + 4;
        } while ((long)uVar11 < lVar44 * 0x20000000 >> 0x20);
      }
    }
    plVar9 = (long *)(lVar43 + 0x70);
LAB_7101e28724:
    FUN_7103776640(&local_110,(long)&local_a8,apppbStack_c8,ppppppppplVar14,ppppbVar18,pppplVar19,
                   param_6,param_7,param_8);
    uVar37 = (ulong)local_108;
    FUN_7103778300(0x3f800000,(long)local_108,0x71044228cd);
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_110,(long)&local_a8,apppbStack_c8,ppppppppplVar14,ppppbVar18,pppplVar19,
                   param_6,param_7,param_8);
    uVar37 = (ulong)local_108;
    FUN_7103778300(0x3f800000,(long)local_108,0x710436c922);
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,ppppppppplVar14,ppppbVar18,pppplVar19,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",ppppppppplVar14,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    FUN_7103776910(&local_110,(long)&local_178,(long ****)"set_rep_spirit",ppppppppplVar14,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = (ulong)local_108;
    FUN_7103778b80((long)local_108,(long)plVar9,ppppppppplVar14,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    local_110 = &PTR_FUN_710523d9a8;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,ppppppppplVar14,ppppbVar18,pppplVar19,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",ppppppppplVar14,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    FUN_7103776910(&local_110,(long)&local_178,(long ****)"set_txt_level",ppppppppplVar14,ppppbVar18
                   ,pppplVar19,param_6,param_7,param_8);
    ppppbVar18 = (byte ****)(ulong)(ushort)puVar33[8];
    uVar15 = 1;
    FUN_710377a280((long)&local_110,(byte *)"mnu_spirits_select_lv",1);
    uVar37 = (ulong)local_108;
    local_110 = &PTR_FUN_710523d9a8;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    cVar38 = *(char *)(puVar2 + 0x2f);
    FUN_7103776640(&local_178,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_120,(long)&local_110,(byte ****)"set_parts_icon_super",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    uVar37 = (ulong)local_108;
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    if (((cVar38 == '\0') && (uVar5 != 0xffff)) && ((short)uVar5 < 2000)) {
      lVar43 = *(long *)(lVar35 + 0x1d8);
      uVar4 = *(ushort *)(lVar43 + lVar26 * 2 + 0x60);
      uVar29 = (int)((ulong)(*(long *)(lVar43 + 0x28) - *(long *)(lVar43 + 0x20)) >> 6) *
               -0x33333333;
      if (((uVar29 <= uVar4) ||
          (uVar4 = *(ushort *)(lVar43 + (ulong)uVar4 * 2 + 0x1000), uVar29 <= uVar4)) ||
         (*(short *)(*(long *)(lVar43 + 0x20) + (ulong)uVar4 * 0x140) == -1)) goto LAB_7101e289b0;
      if (0x62 < (ushort)puVar33[8]) {
        FUN_7103778300(0x3f800000,local_118,0x7104455010);
        FUN_7103776640(&local_178,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6
                       ,param_7,param_8);
        FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                       pppplVar19,param_6,param_7,param_8);
        goto LAB_7101e28ad8;
      }
      FUN_7103778300(0x3f800000,local_118,0x710437a53a);
    }
    else {
LAB_7101e289b0:
      if (puVar2[0x48] == 0) {
        pcVar13 = "off";
      }
      else {
        pcVar13 = "super";
      }
      FUN_7103778300(0x3f800000,local_118,(long)pcVar13);
      if (cVar38 != '\0') {
        FUN_7103776640(&local_178,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6
                       ,param_7,param_8);
        FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                       pppplVar19,param_6,param_7,param_8);
LAB_7101e28ad8:
        uVar37 = (ulong)local_108;
        FUN_7103778300(0x3f800000,(long)local_108,0x71043e06a3);
        local_110 = &PTR_FUN_710523d988;
        local_108 = (long *)0x0;
        if (uVar37 != 0) {
          uVar11 = *(ulong *)(uVar37 + 0x18);
          *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar37 + 0x18) = 0;
          if (uVar11 != 0) {
            FUN_710392eb40(uVar11);
          }
          FUN_710392eb40(uVar37);
        }
        uVar37 = local_170;
        local_178 = (long ***)&PTR_FUN_710523d988;
        local_170 = 0;
        if (uVar37 != 0) {
          uVar11 = *(ulong *)(uVar37 + 0x18);
          *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar37 + 0x18) = 0;
          if (uVar11 != 0) {
            FUN_710392eb40(uVar11);
          }
          FUN_710392eb40(uVar37);
        }
      }
    }
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_have",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    uVar37 = (ulong)local_108;
    FUN_7103778300(0x3f800000,(long)local_108,0x71043cd335);
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_icon_favorite",uVar15,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = (ulong)local_108;
    if ((*(long *)((long)local_108 + 8) != 0) &&
       (lVar43 = *(long *)(*(long *)((long)local_108 + 8) + 0x18), lVar43 != 0)) {
      *(byte *)(lVar43 + 0x58) = *(byte *)(lVar43 + 0x58) & 0xfe;
    }
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_icon_using",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    uVar37 = (ulong)local_108;
    if ((*(long *)((long)local_108 + 8) != 0) &&
       (lVar43 = *(long *)(*(long *)((long)local_108 + 8) + 0x18), lVar43 != 0)) {
      *(byte *)(lVar43 + 0x58) = *(byte *)(lVar43 + 0x58) & 0xfe;
    }
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_icon_condition",uVar15,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = (ulong)local_108;
    if ((*(long *)((long)local_108 + 8) != 0) &&
       (lVar43 = *(long *)(*(long *)((long)local_108 + 8) + 0x18), lVar43 != 0)) {
      *(byte *)(lVar43 + 0x58) = *(byte *)(lVar43 + 0x58) & 0xfe;
    }
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_icon_counter",uVar15,ppppbVar18
                   ,pppplVar19,param_6,param_7,param_8);
    uVar37 = (ulong)local_108;
    if ((*(long *)((long)local_108 + 8) != 0) &&
       (lVar43 = *(long *)(*(long *)((long)local_108 + 8) + 0x18), lVar43 != 0)) {
      *(byte *)(lVar43 + 0x58) = *(byte *)(lVar43 + 0x58) & 0xfe;
    }
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_110,(long)&local_178,(byte ****)"set_parts_icon_new",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    uVar37 = (ulong)local_108;
    if ((*(long *)((long)local_108 + 8) != 0) &&
       (lVar43 = *(long *)(*(long *)((long)local_108 + 8) + 0x18), lVar43 != 0)) {
      *(byte *)(lVar43 + 0x58) = *(byte *)(lVar43 + 0x58) & 0xfe;
    }
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776910(&local_110,(long)&local_178,(long ****)"set_txt_num_slot",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    plVar9 = local_108;
    lVar43 = *local_108;
    if (lVar43 != 0) {
      *(byte *)(lVar43 + 0x58) = *(byte *)(lVar43 + 0x58) & 0xfe;
    }
    local_110 = &PTR_FUN_710523d9a8;
    local_108 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,uVar15,ppppbVar18,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776910(&local_110,(long)&local_178,(long ****)"set_txt_num_status",uVar15,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    plVar9 = local_108;
    lVar43 = *local_108;
    if (lVar43 != 0) {
      *(byte *)(lVar43 + 0x58) = *(byte *)(lVar43 + 0x58) & 0xfe;
    }
    local_110 = &PTR_FUN_710523d9a8;
    local_108 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_170;
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    lVar35 = *(long *)(lVar35 + 0x1d8);
    if (uVar5 == 0xffff) {
      uVar29 = 0xffffffff;
    }
    else {
      uVar29 = (uint)*(ushort *)(lVar35 + lVar26 * 2 + 0x60);
    }
    if ((uVar29 < (uint)((int)((ulong)(*(long *)(lVar35 + 0x28) - *(long *)(lVar35 + 0x20)) >> 6) *
                        -0x33333333)) &&
       (*(char *)(*(long *)(lVar35 + 0x20) + (ulong)uVar29 * 0x140 + 0x5e) == '\x01')) {
      cVar38 = '\x02';
      bVar7 = true;
      local_258 = 4;
    }
    else {
      cVar38 = *(char *)(puVar2 + 0x36);
      if (cVar38 == '\x01') {
        bVar7 = false;
        local_258 = 0;
        cVar38 = '\x03';
      }
      else if (cVar38 == '\x02') {
        bVar7 = false;
        cVar38 = '\x05';
        local_258 = 2;
      }
      else if (cVar38 == '\x03') {
        bVar7 = false;
        cVar38 = '\x04';
        local_258 = 1;
      }
      else {
        bVar7 = false;
        cVar38 = '\x06';
        local_258 = 3;
      }
    }
    uVar12 = 0;
    if ((uVar5 != 0xffff) && ((short)uVar5 < 2000)) {
      lVar35 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar11 = (*(long *)(lVar35 + 0x28) - *(long *)(lVar35 + 0x20) >> 6) * -0x3333333333333333;
      uVar4 = *(ushort *)(lVar35 + lVar26 * 2 + 0x60);
      uVar37 = (ulong)uVar4;
      if ((uint)uVar4 < (uint)uVar11) {
        puVar33 = (undefined2 *)(*(long *)(lVar35 + 0x20) + uVar37 * 0x140);
        if (uVar11 < uVar37 || uVar11 - uVar37 == 0) {
          puVar33 = &DAT_7105182b08;
        }
        if (*(char *)(puVar33 + 0x2f) == '\0') {
          if (2 < *(byte *)(puVar33 + 0x36) - 1) goto LAB_7101e2958c;
          uVar12 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar33 + 0x36) - 1 & 3) << 3));
        }
        else {
          uVar12 = 4;
        }
      }
      else {
LAB_7101e2958c:
        uVar12 = 0;
      }
    }
    pppplVar17 = (long ****)0x0;
    FUN_710339dde0((uint *)&local_110,uVar12,'\0');
    FUN_7103776640(&local_1d0,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    uVar37 = local_170;
    FUN_7103778300(0x3f800000,local_170,(long)&local_108);
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_130,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_1d0,(long)&local_130,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_178,(long)&local_1d0,(byte ****)"set_parts_atr_icon",pppplVar17,ppppbVar18
                   ,pppplVar19,param_6,param_7,param_8);
    uVar37 = local_170;
    FUN_7103778300(0x3f800000,local_170,(long)&local_108);
    local_178 = (long ***)&PTR_FUN_710523d988;
    local_170 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    uVar32 = 0x811c9dc5;
    uVar29 = uVar32;
    switch(*(undefined1 *)(puVar2 + 0x34)) {
    case 0:
      local_178 = (long ***)0xa00000000;
      local_170 = 0x6f6e5f7373616c63;
      uVar28 = 99;
      local_168 = CONCAT13(local_168._3_1_,0x656e);
      pbVar21 = (byte *)((long)&local_170 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar28;
        uVar28 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar28 != 0);
      break;
    case 1:
      local_178 = (long ***)0xa00000000;
      local_170 = 0x6f685f7373616c63;
      uVar28 = 99;
      local_168 = CONCAT13(local_168._3_1_,0x6570);
      pbVar21 = (byte *)((long)&local_170 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar28;
        uVar28 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar28 != 0);
      break;
    case 2:
      local_178 = (long ***)0x900000000;
      local_170 = 0x63615f7373616c63;
      local_168 = CONCAT22(local_168._2_2_,0x65);
      uVar28 = 99;
      pbVar21 = (byte *)((long)&local_170 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar28;
        uVar28 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar28 != 0);
      break;
    case 3:
      local_178 = (long ***)0xc00000000;
      local_170 = 0x656c5f7373616c63;
      local_168 = 0x646e6567;
      uVar28 = 99;
      local_164 = 0;
      pbVar21 = (byte *)((long)&local_170 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar28;
        uVar28 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar28 != 0);
      break;
    default:
      local_178 = (long ***)0xa00000000;
      local_170 = 0x6f6e5f7373616c63;
      uVar28 = 99;
      local_168 = CONCAT13(local_168._3_1_,0x656e);
      pbVar21 = (byte *)((long)&local_170 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar28;
        uVar28 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar28 != 0);
    }
    local_178 = (long ***)CONCAT44(local_178._4_4_,uVar29);
    FUN_7103776640(&local_130,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_1d0,(long)&local_130,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    uVar37 = local_1c8;
    FUN_7103778300(0x3f800000,local_1c8,(long)&local_170);
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    FUN_7103776640(&local_188,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_130,(long)&local_188,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_1d0,(long)&local_130,(byte ****)"set_parts_class_legend",pppplVar17,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = local_1c8;
    FUN_7103778300(0x3f800000,local_1c8,(long)&local_170);
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_180;
    local_188 = &PTR_FUN_710523d988;
    local_180 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_188,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_130,(long)&local_188,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_1d0,(long)&local_130,(byte ****)"set_parts_class_ace",pppplVar17,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = local_1c8;
    FUN_7103778300(0x3f800000,local_1c8,(long)&local_170);
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_180;
    local_188 = &PTR_FUN_710523d988;
    local_180 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_188,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_130,(long)&local_188,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_1d0,(long)&local_130,(byte ****)"set_parts_class_hope",pppplVar17,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = local_1c8;
    FUN_7103778300(0x3f800000,local_1c8,(long)&local_170);
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_180;
    local_188 = &PTR_FUN_710523d988;
    local_180 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_188,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_130,(long)&local_188,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_1d0,(long)&local_130,(byte ****)"set_parts_class_none",pppplVar17,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = local_1c8;
    FUN_7103778300(0x3f800000,local_1c8,(long)&local_170);
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_180;
    local_188 = &PTR_FUN_710523d988;
    local_180 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_188,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_130,(long)&local_188,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_1d0,(long)&local_130,(byte ****)"set_parts_class_legend",pppplVar17,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = local_1c8;
    if ((*(long *)(local_1c8 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_1c8 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) =
           *(byte *)(lVar35 + 0x58) & 0xfe | *(char *)(puVar2 + 0x34) == '\x03';
    }
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_180;
    local_188 = &PTR_FUN_710523d988;
    local_180 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_188,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_130,(long)&local_188,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_1d0,(long)&local_130,(byte ****)"set_parts_class_ace",pppplVar17,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = local_1c8;
    if ((*(long *)(local_1c8 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_1c8 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) =
           *(byte *)(lVar35 + 0x58) & 0xfe | *(char *)(puVar2 + 0x34) == '\x02';
    }
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_180;
    local_188 = &PTR_FUN_710523d988;
    local_180 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_188,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_130,(long)&local_188,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_1d0,(long)&local_130,(byte ****)"set_parts_class_hope",pppplVar17,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = local_1c8;
    if ((*(long *)(local_1c8 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_1c8 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) =
           *(byte *)(lVar35 + 0x58) & 0xfe | *(char *)(puVar2 + 0x34) == '\x01';
    }
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_180;
    local_188 = &PTR_FUN_710523d988;
    local_180 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    FUN_7103776640(&local_188,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_130,(long)&local_188,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103776640(&local_1d0,(long)&local_130,(byte ****)"set_parts_class_none",pppplVar17,
                   ppppbVar18,pppplVar19,param_6,param_7,param_8);
    uVar37 = local_1c8;
    if ((*(long *)(local_1c8 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_1c8 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe | *(char *)(puVar2 + 0x34) == '\0';
    }
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_180;
    local_188 = &PTR_FUN_710523d988;
    local_180 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    local_1c8 = CONCAT26(local_1c8._6_2_,0x5f6d696e61);
    pcVar13 = (char *)((long)&local_1c8 + 1);
    do {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    lVar35 = 0;
    local_1d0._4_4_ = 5;
    do {
      cVar3 = *(char *)((long)&local_170 + lVar35);
      if (cVar3 == '\0') break;
      lVar43 = (long)local_1d0._4_4_;
      local_1d0._4_4_ = local_1d0._4_4_ + 1;
      lVar35 = lVar35 + 1;
      *(char *)((long)&local_1c8 + lVar43) = cVar3;
    } while ((int)lVar35 + 4U < 0x3e);
    *(undefined1 *)((long)&local_1c8 + (long)local_1d0._4_4_) = 0;
    uVar29 = (uint)(byte)local_1c8;
    if ((byte)local_1c8 != 0) {
      pbVar21 = (byte *)((long)&local_1c8 + 1);
      do {
        uVar32 = uVar32 * 0x89 ^ uVar29;
        uVar29 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar29 != 0);
    }
    local_1d0 = (undefined **)CONCAT44(local_1d0._4_4_,uVar32);
    FUN_7103776640(&local_188,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,param_6
                   ,param_7,param_8);
    FUN_7103776640(&local_130,(long)&local_188,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18,
                   pppplVar19,param_6,param_7,param_8);
    plVar9 = local_128;
    FUN_7103778300(0x3f800000,(long)local_128,(long)&local_1c8);
    local_130 = (long ***)&PTR_FUN_710523d988;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      uVar37 = *(ulong *)((long)plVar9 + 0x18);
      *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar9 + 0x18) = 0;
      if (uVar37 != 0) {
        FUN_710392eb40(uVar37);
      }
      FUN_710392eb40((ulong)plVar9);
    }
    uVar37 = local_180;
    local_188 = &PTR_FUN_710523d988;
    local_180 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    if (bVar7) {
      FUN_7103776640(&local_1e0,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,
                     param_6,param_7,param_8);
      FUN_7103776640(&local_188,(long)&local_1e0,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18
                     ,pppplVar19,param_6,param_7,param_8);
      FUN_7103776910(&local_130,(long)&local_188,(long ****)"set_txt_num_slot",pppplVar17,ppppbVar18
                     ,pppplVar19,param_6,param_7,param_8);
      uVar37 = local_180;
      local_188 = &PTR_FUN_710523d988;
      local_180 = 0;
      if (uVar37 != 0) {
        uVar11 = *(ulong *)(uVar37 + 0x18);
        *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar37 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar37);
      }
      uVar37 = local_1d8;
      local_1e0 = &PTR_FUN_710523d988;
      local_1d8 = 0;
      if (uVar37 != 0) {
        uVar11 = *(ulong *)(uVar37 + 0x18);
        *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar37 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar37);
      }
      FUN_7103776640(&local_1e0,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,
                     param_6,param_7,param_8);
      FUN_7103776640(&local_188,(long)&local_1e0,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18
                     ,pppplVar19,param_6,param_7,param_8);
      pcVar13 = "cost_00";
    }
    else {
      FUN_7103776640(&local_1e0,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,
                     param_6,param_7,param_8);
      FUN_7103776640(&local_188,(long)&local_1e0,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18
                     ,pppplVar19,param_6,param_7,param_8);
      FUN_7103776910(&local_130,(long)&local_188,(long ****)"set_txt_num_slot",pppplVar17,ppppbVar18
                     ,pppplVar19,param_6,param_7,param_8);
      uVar37 = local_180;
      local_188 = &PTR_FUN_710523d988;
      local_180 = 0;
      if (uVar37 != 0) {
        uVar11 = *(ulong *)(uVar37 + 0x18);
        *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar37 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar37);
      }
      uVar37 = local_1d8;
      local_1e0 = &PTR_FUN_710523d988;
      local_1d8 = 0;
      if (uVar37 != 0) {
        uVar11 = *(ulong *)(uVar37 + 0x18);
        *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar37 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar37);
      }
      FUN_7103776640(&local_1e0,(long)&local_a8,apppbStack_c8,pppplVar17,ppppbVar18,pppplVar19,
                     param_6,param_7,param_8);
      FUN_7103776640(&local_188,(long)&local_1e0,(byte ****)"set_parts_spirit",pppplVar17,ppppbVar18
                     ,pppplVar19,param_6,param_7,param_8);
      pcVar13 = "slot_00";
    }
    uVar37 = local_180;
    FUN_7103778300(0x3f800000,local_180,(long)pcVar13);
    local_188 = &PTR_FUN_710523d988;
    local_180 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    uVar37 = local_1d8;
    local_1e0 = &PTR_FUN_710523d988;
    local_1d8 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
    plVar9 = local_128;
    lVar35 = *local_128;
    if (lVar35 != 0) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
    }
    local_130 = (long ***)&PTR_FUN_710523d9a8;
    local_128 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar9);
    }
    if ((param_4 & 1) == 0) {
      lVar35 = param_1 + lVar45 * 0x40;
      lVar43 = (long)(int)param_3;
      if (*(char *)(lVar35 + lVar43 + 0xf24) == '\0') {
        if (*(char *)(param_1 + 0xe70) == cVar38) {
          lVar44 = 0;
        }
        else if (*(char *)(param_1 + 0xe71) == cVar38) {
          lVar44 = 1;
        }
        else if (*(char *)(param_1 + 0xe72) == cVar38) {
          lVar44 = 2;
        }
        else if (*(char *)(param_1 + 0xe73) == cVar38) {
          lVar44 = 3;
        }
        else {
          lVar44 = 4;
          if (*(char *)(param_1 + 0xe74) != cVar38) {
            lVar44 = 5;
          }
        }
        uVar4 = *(ushort *)(lVar35 + lVar43 * 2 + 0xf2a);
        if (uVar4 >> 4 < 0x177) {
          puVar33 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar4 * 0x50 + 72000);
        }
        else {
          puVar33 = &DAT_710532a878;
          if (((ushort)(uVar4 + 0xe890) < 100) &&
             (lVar35 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar4 + 0xe890) * 0x50,
             *(short *)(lVar35 + 0x88cc8) != -1)) {
            puVar33 = (undefined2 *)(lVar35 + 0x88cc0);
          }
        }
        lVar35 = param_1 + lVar44 * 0x18;
        puVar31 = *(undefined8 **)(lVar35 + 0xe00);
        plVar9 = (long *)(lVar35 + 0xe00);
        if (puVar31 < *(undefined8 **)(lVar35 + 0xe08)) {
          *puVar31 = puVar33;
          *plVar9 = *plVar9 + 8;
          goto LAB_7101e2ad88;
        }
        puVar27 = (undefined8 *)(param_1 + lVar44 * 0x18 + 0xdf8);
        puVar41 = (uint *)*puVar27;
        pppplVar17 = (long ****)((long)puVar31 - (long)puVar41);
        uVar37 = ((long)pppplVar17 >> 3) + 1;
        if (uVar37 >> 0x3d != 0) {
LAB_7101e2b460:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar43 = (long)*(undefined8 **)(lVar35 + 0xe08) - (long)puVar41;
        if ((ulong)(lVar43 >> 3) < 0xfffffffffffffff) {
          uVar11 = lVar43 >> 2;
          if (uVar37 <= uVar11) {
            uVar37 = uVar11;
          }
          if (uVar37 != 0) {
            if (uVar37 >> 0x3d != 0) {
LAB_7101e2b090:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            goto LAB_7101e2acd8;
          }
          pvVar10 = (void *)0x0;
        }
        else {
          uVar37 = 0x1fffffffffffffff;
LAB_7101e2acd8:
          ppplVar22 = (long ***)(uVar37 * 8);
          if (ppplVar22 == (long ***)0x0) {
            ppplVar22 = (long ***)0x1;
          }
          pvVar10 = (void *)FUN_710392e290(0x10,ppplVar22,pppplVar17,ppppbVar18,pppplVar19,param_6,
                                           param_7,param_8);
          if (pvVar10 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_188 = (undefined **)((ulong)local_188 & 0xffffffff00000000);
              pppplVar16 = &local_130;
              local_130 = ppplVar22;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_188);
              if (((uVar11 & 1) != 0) &&
                 (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar22,pppplVar16,ppppbVar18,pppplVar19,
                                                   param_6,param_7,param_8), pvVar10 != (void *)0x0)
                 ) goto LAB_7101e2ad44;
            }
            pvVar10 = (void *)0x0;
          }
        }
LAB_7101e2ad44:
        puVar31 = (undefined8 *)((long)pvVar10 + ((long)pppplVar17 >> 3) * 8);
        *puVar31 = puVar33;
        if (0 < (long)pppplVar17) {
          memcpy(pvVar10,puVar41,(size_t)pppplVar17);
        }
        *puVar27 = pvVar10;
        *plVar9 = (long)(puVar31 + 1);
        *(void **)(lVar35 + 0xe08) = (void *)((long)pvVar10 + uVar37 * 8);
joined_r0x007101e2ad7c:
        if (puVar41 != (uint *)0x0) {
          FUN_710392eb40((ulong)puVar41);
        }
      }
      else {
        uVar4 = *(ushort *)(lVar35 + lVar43 * 2 + 0xf18);
        if (uVar4 != 0xffff) {
          lVar35 = param_1 + local_258 * 0x18;
          puVar41 = *(uint **)(lVar35 + 0xe78);
          puVar25 = *(uint **)(lVar35 + 0xe80);
          sVar8 = (long)puVar25 - (long)puVar41;
          puVar30 = puVar41;
          if (sVar8 != 0) {
            do {
              if ((uVar4 == (ushort)*puVar30) && (*(char *)((long)puVar30 + 2) != '\0')) {
                *(char *)((long)puVar30 + 2) = *(char *)((long)puVar30 + 2) + '\x01';
                goto LAB_7101e2ad88;
              }
              puVar30 = puVar30 + 1;
            } while (puVar25 != puVar30);
          }
          lVar43 = param_1 + local_258 * 0x18;
          puVar30 = *(uint **)(lVar43 + 0xe88);
          plVar9 = (long *)(lVar35 + 0xe80);
          if (puVar25 == puVar30) {
            uVar37 = ((long)sVar8 >> 2) + 1;
            if (uVar37 >> 0x3e != 0) goto LAB_7101e2b460;
            lVar44 = (long)puVar30 - (long)puVar41;
            if ((ulong)(lVar44 >> 2) < 0x1fffffffffffffff) {
              uVar11 = lVar44 >> 1;
              if (uVar37 <= uVar11) {
                uVar37 = uVar11;
              }
              if (uVar37 != 0) {
                if (uVar37 >> 0x3e != 0) goto LAB_7101e2b090;
                goto LAB_7101e2a990;
              }
              pvVar10 = (void *)0x0;
            }
            else {
              uVar37 = 0x3fffffffffffffff;
LAB_7101e2a990:
              ppplVar22 = (long ***)(uVar37 * 4);
              if (ppplVar22 == (long ***)0x0) {
                ppplVar22 = (long ***)0x1;
              }
              pvVar10 = (void *)FUN_710392e290(0x10,ppplVar22,pppplVar17,ppppbVar18,pppplVar19,
                                               param_6,param_7,param_8);
              if (pvVar10 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_188 = (undefined **)((ulong)local_188 & 0xffffffff00000000);
                  pppplVar17 = &local_130;
                  local_130 = ppplVar22;
                  uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_188);
                  if (((uVar11 & 1) != 0) &&
                     (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar22,pppplVar17,ppppbVar18,
                                                       pppplVar19,param_6,param_7,param_8),
                     pvVar10 != (void *)0x0)) goto LAB_7101e2a9fc;
                }
                pvVar10 = (void *)0x0;
              }
            }
LAB_7101e2a9fc:
            puVar30 = (uint *)((long)pvVar10 + ((long)sVar8 >> 2) * 4);
            *puVar30 = uVar4 | 0x10000;
            if (0 < (long)sVar8) {
              memcpy(pvVar10,puVar41,sVar8);
            }
            *(void **)(lVar35 + 0xe78) = pvVar10;
            *plVar9 = (long)(puVar30 + 1);
            *(void **)(lVar43 + 0xe88) = (void *)((long)pvVar10 + uVar37 * 4);
            goto joined_r0x007101e2ad7c;
          }
          *puVar25 = uVar4 | 0x10000;
          *plVar9 = *plVar9 + 4;
        }
      }
LAB_7101e2ad88:
      pppplVar19 = (long ****)0x0;
      FUN_7101e2b470((short *)(param_1 + 0xf18),param_2,param_3,uVar5,0,(short)uVar39);
      if (*(char *)(param_1 + 0xe70) == cVar38) {
        lVar35 = 0;
      }
      else if (*(char *)(param_1 + 0xe71) == cVar38) {
        lVar35 = 1;
      }
      else if (*(char *)(param_1 + 0xe72) == cVar38) {
        lVar35 = 2;
      }
      else if (*(char *)(param_1 + 0xe73) == cVar38) {
        lVar35 = 3;
      }
      else {
        lVar35 = 4;
        if (*(char *)(param_1 + 0xe74) != cVar38) {
          lVar35 = 5;
        }
      }
      lVar35 = param_1 + lVar35 * 0x18;
      puVar31 = *(undefined8 **)(lVar35 + 0xdf8);
      puVar27 = *(undefined8 **)(lVar35 + 0xe00);
      if (puVar31 != puVar27) {
        if ((uint)*(ushort *)*puVar31 != (uVar20 & 0xffff)) {
          do {
            puVar31 = puVar31 + 1;
            if (puVar27 == puVar31) goto LAB_7101e2ae80;
          } while ((uint)*(ushort *)*puVar31 != (uVar20 & 0xffff));
        }
        __n = (byte ****)((long)puVar27 - (long)(puVar31 + 1));
        lVar43 = (long)__n >> 3;
        if (__n != (byte ****)0x0) {
          memmove(puVar31,puVar31 + 1,(size_t)__n);
        }
        *(undefined8 **)(lVar35 + 0xe00) = puVar31 + lVar43;
      }
    }
    else {
      pppplVar19 = (long ****)0x0;
      FUN_7101e2b470((short *)(param_1 + 0xf18),param_2,param_3,uVar5,0,(short)uVar39);
    }
LAB_7101e2ae80:
    FUN_7103778300(0x3f800000,local_a0,0x710437cabd);
    lVar35 = param_1 + lVar45 * 0x40;
    uVar20 = (uint)*(byte *)(lVar35 + 0xf24);
    if (*(byte *)(lVar35 + 0xf24) != 0) {
      uVar20 = *(uint *)(lVar35 + 0xf38);
    }
    if (*(char *)(lVar35 + 0xf25) != '\0') {
      uVar20 = *(int *)(lVar35 + 0xf3c) + uVar20;
    }
    if (*(char *)(lVar35 + 0xf26) != '\0') {
      uVar20 = *(int *)(lVar35 + 0xf40) + uVar20;
    }
    if (*(char *)(lVar35 + 0xf27) != '\0') {
      uVar20 = *(int *)(lVar35 + 0xf44) + uVar20;
    }
    if (*(char *)(lVar35 + 0xf28) != '\0') {
      uVar20 = *(int *)(lVar35 + 0xf48) + uVar20;
    }
    if (*(char *)(lVar35 + 0xf29) != '\0') {
      uVar20 = *(int *)(lVar35 + 0xf4c) + uVar20;
    }
    if (uVar20 == 0) {
      FUN_7103778300(0x3f800000,local_a0,0x710433a689);
    }
    uVar37 = local_118;
    local_120 = &PTR_FUN_710523d988;
    local_118 = 0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
  }
  FUN_7103778300(0x3f800000,local_a0,0x710435bcec);
  if ((param_4 & 1) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x71043add34);
    FUN_7103776640(&local_110,(long)&local_a8,apppbStack_c8,__n,ppppppppplVar40,pppplVar19,uVar39,
                   param_7,param_8);
    uVar37 = (ulong)local_108;
    FUN_7103778300(0x3f800000,(long)local_108,0x7104308a06);
    local_110 = &PTR_FUN_710523d988;
    local_108 = (long *)0x0;
    if (uVar37 != 0) {
      uVar11 = *(ulong *)(uVar37 + 0x18);
      *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar37 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar37);
    }
  }
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar39 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1a78d5ac50,(long ****)&DAT_00000004,
                              (byte ****)ppppppppplVar40,pppplVar19,uVar39,param_7,param_8),
     (uVar39 & 1) != 0)) {
    FUN_71024076d0(local_220,0x1a78d5ac50);
    if (((local_210 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_208 == DAT_7106dd53ac)) {
      piVar24 = (int *)(local_210 + 0x38);
      do {
        cVar38 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar7) {
          *piVar24 = *piVar24 + -1;
          cVar38 = ExclusiveMonitorsStatus();
        }
      } while (cVar38 != '\0');
    }
  }
  else {
    local_208 = 0x87650000000000;
    local_1f8 = 0xffffffffffffffff;
    uStack_1f0 = 0;
    local_220[0] = 0;
    local_1e8 = 0;
  }
  local_218 = &PTR_FUN_7104f73d50;
  uVar34 = 1;
  local_210 = 0;
  local_200 = 0;
LAB_7101e2b3f8:
  uVar39 = local_a0;
  local_a8 = &PTR_FUN_710523d988;
  local_a0 = 0;
  if (uVar39 != 0) {
    uVar37 = *(ulong *)(uVar39 + 0x18);
    *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar39 + 0x18) = 0;
    if (uVar37 != 0) {
      FUN_710392eb40(uVar37);
    }
    FUN_710392eb40(uVar39);
  }
  return uVar34;
}

