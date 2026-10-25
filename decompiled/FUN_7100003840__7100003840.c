// addr:      7100003840
// offset:    0x3840
// name:      FUN_7100003840
// mangled:   
// signature: int __cdecl FUN_7100003840(long * param_1, long param_2, uint * param_3, undefined8 param_4, undefined8 param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

int FUN_7100003840(long *param_1,long param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int *piVar11;
  uint *puVar12;
  size_t sVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  long **pplVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  code *pcVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long **__s;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 local_3b8 [48];
  int local_388;
  int local_384;
  uint local_380;
  uint local_37c;
  undefined1 uStack_378;
  char local_377;
  undefined2 local_376;
  byte abStack_374 [256];
  undefined4 local_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  long *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar23 = *param_1;
  *param_3 = 0xffffffff;
  iVar6 = *(int *)((long)param_1 + 0xc4);
  lVar25 = *param_1;
  iVar8 = *(int *)(param_2 + 4);
  if (iVar6 == 2) {
    uVar5 = 0x11;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
  }
  local_37c = *(uint *)(param_2 + 0x10);
  if (0xff < local_37c) {
    local_37c = 0x100;
  }
  local_388 = iVar8;
  local_384 = iVar6;
  local_380 = uVar5;
  memcpy(&uStack_378,*(void **)(param_2 + 0x20),(ulong)local_37c);
  pcVar21 = *(code **)(lVar25 + 0x358);
  if (pcVar21 == (code *)0x0) {
    piVar15 = (int *)(ulong)uVar5;
    uVar5 = nnsocketSocket(iVar8,iVar6);
  }
  else {
    piVar15 = &local_388;
    uVar5 = (*pcVar21)(*(undefined8 *)(lVar25 + 0x360),0);
  }
  if (uVar5 == 0xffffffff) {
    return 0;
  }
  pcVar22 = (char *)(ulong)uVar5;
  if (local_377 != '\x02') {
LAB_71000039cc:
    local_3b8[0] = 0;
    piVar11 = __errno_location();
    *piVar11 = 0x61;
    puVar12 = (uint *)__errno_location();
    uVar7 = *puVar12;
    puVar12 = (uint *)__errno_location();
    pcVar10 = FUN_71000175d0((long)param_1,*puVar12,piVar15,param_4,param_5,param_6,param_7,param_8)
    ;
    FUN_7100016040(lVar23,(byte *)"sa_addr inet_ntop() failed with errno %d: %s",(ulong)uVar7,
                   pcVar10,param_5,param_6,param_7,param_8);
    if (param_1[10] != 0) {
      if ((*(uint *)((long)param_1 + 0x25c) != uVar5) || (*(char *)((long)param_1 + 0x269) == '\0'))
      {
        FUN_710000b540(param_1,uVar5);
        (*(code *)param_1[10])(param_1[0xb],pcVar22);
        return 0;
      }
      *(undefined1 *)((long)param_1 + 0x269) = 0;
    }
    FUN_710000b540(param_1,uVar5);
    nnsocketClose(pcVar22);
    return 0;
  }
  param_4 = 0x2e;
  piVar15 = (int *)local_3b8;
  pcVar10 = FUN_71000065f0(2,abStack_374,(char *)piVar15,0x2e);
  if (pcVar10 == (char *)0x0) goto LAB_71000039cc;
  nnsocketInetNtohs(local_376);
  FUN_7100015de0(lVar23,(byte *)"  Trying %s...\n",local_3b8,param_4,param_5,param_6,param_7,param_8
                );
  lVar25 = *param_1;
  if ((local_388 == 2) && (local_384 == 1)) {
    pcVar10 = (char *)0x800;
    puVar19 = &local_168;
    puVar20 = (undefined8 *)&DAT_00000004;
    local_168 = CONCAT44(local_168._4_4_,1);
    iVar6 = nnsocketSetSockOpt(pcVar22,0xffff);
    if (iVar6 < 0) {
      uVar7 = nnsocketGetLastErrno();
      pcVar10 = FUN_71000175d0((long)param_1,uVar7,pcVar10,puVar19,puVar20,param_6,param_7,param_8);
      FUN_7100015de0(lVar25,(byte *)"Could not set SO_NOSIGPIPE: %s\n",pcVar10,puVar19,puVar20,
                     param_6,param_7,param_8);
    }
    if (*(byte *)(lVar23 + 0x938) == 0) goto LAB_7100003ad4;
    pcVar10 = &DAT_00000008;
    puVar19 = &local_168;
    puVar20 = (undefined8 *)&DAT_00000004;
    local_168 = CONCAT44(local_168._4_4_,(uint)*(byte *)(lVar23 + 0x938));
    iVar6 = nnsocketSetSockOpt(pcVar22,0xffff);
    if (-1 < iVar6) goto LAB_7100003ad4;
    pcVar10 = pcVar22;
    FUN_7100015de0(lVar23,(byte *)"Failed to set SO_KEEPALIVE on fd %d\n",pcVar22,puVar19,puVar20,
                   param_6,param_7,param_8);
    pcVar21 = *(code **)(lVar23 + 0x348);
    if (pcVar21 != (code *)0x0) goto LAB_7100003adc;
LAB_7100003b10:
    bVar2 = false;
  }
  else {
    pcVar10 = (char *)0x800;
    puVar19 = &local_168;
    puVar20 = (undefined8 *)&DAT_00000004;
    local_168 = CONCAT44(local_168._4_4_,1);
    iVar6 = nnsocketSetSockOpt(pcVar22,0xffff);
    if (iVar6 < 0) {
      uVar7 = nnsocketGetLastErrno();
      pcVar10 = FUN_71000175d0((long)param_1,uVar7,pcVar10,puVar19,puVar20,param_6,param_7,param_8);
      FUN_7100015de0(lVar25,(byte *)"Could not set SO_NOSIGPIPE: %s\n",pcVar10,puVar19,puVar20,
                     param_6,param_7,param_8);
    }
LAB_7100003ad4:
    pcVar21 = *(code **)(lVar23 + 0x348);
    if (pcVar21 == (code *)0x0) goto LAB_7100003b10;
LAB_7100003adc:
    pcVar10 = (char *)0x0;
    iVar6 = (*pcVar21)(*(undefined8 *)(lVar23 + 0x350),pcVar22);
    if (iVar6 == 0) goto LAB_7100003b10;
    if (iVar6 != 2) {
      if (param_1[10] != 0) {
        if ((*(uint *)((long)param_1 + 0x25c) != uVar5) ||
           (*(char *)((long)param_1 + 0x269) == '\0')) {
          FUN_710000b540(param_1,uVar5);
          (*(code *)param_1[10])(param_1[0xb],pcVar22);
          return 0x2a;
        }
        *(undefined1 *)((long)param_1 + 0x269) = 0;
      }
      FUN_710000b540(param_1,uVar5);
      nnsocketClose(pcVar22);
      return 0x2a;
    }
    bVar2 = true;
  }
  if (local_388 == 2) {
    FUN_71000065d0();
    lVar25 = *param_1;
    local_170 = (long *)0x0;
    uVar1 = *(ushort *)(lVar25 + 0x2f8);
    uVar7 = (uint)uVar1;
    iVar6 = *(int *)(lVar25 + 0x2fc);
    __s = *(long ***)(lVar25 + 0x750);
    if ((uVar1 != 0) || (__s != (long **)0x0)) {
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      local_a0 = 0;
      local_a8 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = 0;
      local_e0 = 0;
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
      local_168 = 0;
      if ((__s == (long **)0x0) || (sVar13 = strlen((char *)__s), 0xfe < sVar13)) {
        local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
LAB_7100003cbc:
        uVar4 = nnsocketInetHtons(uVar1);
        uVar14 = 0x10;
        local_168._0_4_ = CONCAT22(uVar4,(undefined2)local_168);
LAB_7100003ccc:
        uVar16 = uVar14;
        iVar8 = nnsocketBind(pcVar22,&local_168);
        if (iVar8 < 0) {
          iVar6 = iVar6 + 1;
          do {
            iVar6 = iVar6 + -1;
            if (iVar6 < 2) {
              uVar7 = nnsocketGetLastErrno();
              *(uint *)(lVar25 + 0x4c34) = uVar7;
              pcVar10 = FUN_71000175d0((long)param_1,uVar7,uVar16,puVar19,puVar20,param_6,param_7,
                                       param_8);
              FUN_7100016040(lVar25,(byte *)"bind failed with errno %d: %s",(ulong)uVar7,pcVar10,
                             puVar20,param_6,param_7,param_8);
              iVar26 = 0x2d;
              if (param_1 == (long *)0x0) goto LAB_7100004114;
              goto LAB_71000040e8;
            }
            FUN_7100015de0(lVar25,(byte *)"Bind to local port %hu failed, trying next\n",
                           (ulong)(uVar7 & 0xffff),puVar19,puVar20,param_6,param_7,param_8);
            uVar7 = uVar7 + 1;
            if (local_168._1_1_ == '\x02') {
              uVar4 = nnsocketInetNtohs(uVar7);
              local_168._0_4_ = CONCAT22(uVar4,(undefined2)local_168);
            }
            uVar16 = uVar14;
            iVar8 = nnsocketBind(pcVar22,&local_168);
          } while (iVar8 < 0);
        }
        puVar17 = &local_274;
        local_178 = 0;
        local_274 = 0x100;
        local_180 = 0;
        local_188 = 0;
        local_190 = 0;
        local_198 = 0;
        local_1a0 = 0;
        local_1a8 = 0;
        local_1b0 = 0;
        local_1b8 = 0;
        local_1c0 = 0;
        local_1c8 = 0;
        local_270 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_258 = 0;
        uStack_250 = 0;
        local_268 = 0;
        uStack_260 = 0;
        iVar6 = nnsocketGetSockName(pcVar22,&local_270);
        if (-1 < iVar6) {
          pcVar10 = (char *)(ulong)(uVar7 & 0xffff);
          FUN_7100015de0(lVar25,(byte *)"Local port: %hu\n",pcVar10,puVar19,puVar20,param_6,param_7,
                         param_8);
          *(undefined1 *)((long)param_1 + 0x82b) = 1;
          goto LAB_7100003e3c;
        }
        uVar7 = nnsocketGetLastErrno();
        *(uint *)(lVar25 + 0x4c34) = uVar7;
        pcVar10 = FUN_71000175d0((long)param_1,uVar7,puVar17,puVar19,puVar20,param_6,param_7,param_8
                                );
        FUN_7100016040(lVar25,(byte *)"getsockname() failed with errno %d: %s",(ulong)uVar7,pcVar10,
                       puVar20,param_6,param_7,param_8);
        iVar26 = 0x2d;
      }
      else {
        local_178 = 0;
        local_180 = 0;
        local_188 = 0;
        local_190 = 0;
        local_198 = 0;
        local_1a0 = 0;
        local_1a8 = 0;
        local_1b0 = 0;
        local_1b8 = 0;
        local_1c0 = 0;
        local_1c8 = 0;
        local_270 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_258 = 0;
        uStack_250 = 0;
        local_268 = 0;
        uStack_260 = 0;
        iVar8 = strncmp("if!",(char *)__s,3);
        if (iVar8 != 0) {
          iVar8 = strncmp("host!",(char *)__s,5);
          if (iVar8 != 0) {
            bVar3 = false;
            goto LAB_7100003f90;
          }
          __s = (long **)((long)__s + 5);
          goto LAB_7100004020;
        }
        __s = (long **)((long)__s + 3);
        bVar3 = true;
LAB_7100003f90:
        puVar20 = &local_270;
        param_6 = 0x100;
        pplVar18 = __s;
        uVar14 = FUN_71000065e0();
        iVar8 = (int)uVar14;
        if (iVar8 == 2) {
          puVar19 = &local_270;
          puVar20 = (undefined8 *)0x2;
          FUN_7100015de0(lVar25,(byte *)"Local Interface %s is ip %s using address family %i\n",__s,
                         puVar19,2,param_6,param_7,param_8);
LAB_71000040a4:
          uVar14 = FUN_7100006690(2,(byte *)&local_270,(uint *)((ulong)&local_168 | 4));
          if (0 < (int)uVar14) {
            local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
            goto LAB_7100003cbc;
          }
          uVar14 = 0;
          goto LAB_7100003ccc;
        }
        iVar26 = 1;
        if (iVar8 == 1) goto LAB_71000040e4;
        if (iVar8 == 0) {
          if (!bVar3) {
LAB_7100004020:
            lVar24 = param_1[0x10d];
            pplVar18 = &local_170;
            uVar14 = 0;
            param_1[0x10d] = 1;
            uVar9 = FUN_7100005f10(param_1,(byte *)__s,0,(long *)pplVar18,puVar20,param_6,param_7,
                                   param_8);
            if (uVar9 == 1) {
              FUN_7100004910(param_1,(long *)&local_170,uVar14,pplVar18,puVar20,param_6,param_7,
                             param_8);
            }
            param_1[0x10d] = lVar24;
            if (local_170 != (long *)0x0) {
              FUN_7100005ba0(*local_170,(char *)&local_270,0x100);
              param_6 = (ulong)*(uint *)(*local_170 + 4);
              puVar19 = (undefined8 *)0x2;
              puVar20 = &local_270;
              FUN_7100015de0(lVar25,(byte *)"Name \'%s\' family %i resolved to \'%s\' family %i\n",
                             __s,2,puVar20,param_6,param_7,param_8);
              FUN_71000060d0(lVar25,local_170);
              goto LAB_71000040a4;
            }
            goto LAB_71000040cc;
          }
          pcVar10 = "Couldn\'t bind to interface \'%s\'";
        }
        else {
          if (!bVar3) goto LAB_7100004020;
LAB_71000040cc:
          pcVar10 = "Couldn\'t bind to \'%s\'";
        }
        FUN_7100016040(lVar25,(byte *)pcVar10,__s,pplVar18,puVar20,param_6,param_7,param_8);
        iVar26 = 0x2d;
      }
LAB_71000040e4:
      if (param_1 != (long *)0x0) {
LAB_71000040e8:
        if (param_1[10] != 0) {
          if ((*(uint *)((long)param_1 + 0x25c) != uVar5) ||
             (*(char *)((long)param_1 + 0x269) == '\0')) {
            FUN_710000b540(param_1,uVar5);
            (*(code *)param_1[10])(param_1[0xb],pcVar22);
            goto LAB_7100004138;
          }
          *(undefined1 *)((long)param_1 + 0x269) = 0;
        }
        FUN_710000b540(param_1,uVar5);
      }
LAB_7100004114:
      nnsocketClose(pcVar22);
LAB_7100004138:
      if (iVar26 == 1) {
        return 7;
      }
      return iVar26;
    }
  }
LAB_7100003e3c:
  FUN_7100013730(pcVar22,1);
  auVar27 = FUN_7100017740();
  *(undefined1 (*) [16])(param_1 + 0x107) = auVar27;
  if (1 < (int)param_1[0x109]) {
    pcVar10 = (char *)0x3;
    FUN_71000086c0(lVar23,param_1[0x10a],3,puVar19,puVar20,param_6,param_7,param_8);
  }
  if ((!bVar2) && (*(int *)((long)param_1 + 0xc4) == 1)) {
    if (*(char *)((long)param_1 + 0x82e) == '\0') {
      pcVar10 = (char *)(ulong)local_37c;
      iVar6 = nnsocketConnect(pcVar22,&uStack_378);
      if (iVar6 != -1) goto LAB_7100003f20;
    }
    uVar7 = nnsocketGetLastErrno();
    if ((uVar7 != 0xb) && (uVar7 != 0x73)) {
      pcVar10 = FUN_71000175d0((long)param_1,uVar7,pcVar10,puVar19,puVar20,param_6,param_7,param_8);
      FUN_7100015de0(lVar23,(byte *)"Immediate connect fail for %s: %s\n",local_3b8,pcVar10,puVar20,
                     param_6,param_7,param_8);
      *(uint *)(lVar23 + 0x4c34) = uVar7;
      if (param_1[10] != 0) {
        if ((*(uint *)((long)param_1 + 0x25c) != uVar5) ||
           (*(char *)((long)param_1 + 0x269) == '\0')) {
          FUN_710000b540(param_1,uVar5);
          (*(code *)param_1[10])(param_1[0xb],pcVar22);
          return 7;
        }
        *(undefined1 *)((long)param_1 + 0x269) = 0;
      }
      FUN_710000b540(param_1,uVar5);
      nnsocketClose(pcVar22);
      return 7;
    }
  }
LAB_7100003f20:
  *param_3 = uVar5;
  return 0;
}

