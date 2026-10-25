// addr:      7100022610
// offset:    0x22610
// name:      FUN_7100022610
// mangled:   
// signature: int __cdecl FUN_7100022610(long param_1, long param_2, byte * * param_3, byte * * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_7100022610(long param_1,long param_2,byte **param_3,byte **param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  byte **ppbVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  size_t sVar12;
  byte **ppbVar13;
  byte **__s;
  byte **ppbVar14;
  byte **__s_00;
  uint uVar15;
  char *local_68;
  byte *local_60;
  byte *local_58;
  
  iVar7 = (int)param_4;
  local_60 = (byte *)0x0;
  local_58 = (byte *)0x0;
  ppbVar13 = param_3;
  pcVar9 = strstr((char *)param_3,"://");
  __s_00 = param_3;
  if (pcVar9 == (char *)0x0) {
LAB_7100022794:
    if (iVar7 - 4U < 4) {
      pcVar9 = strchr((char *)__s_00,0x40);
joined_r0x0071000227b0:
      bVar6 = true;
      iVar8 = iVar7;
    }
    else {
      if (iVar7 == 2) {
LAB_7100022674:
        FUN_7100016040(param_1,(byte *)
                               "Unsupported proxy \'%s\', libcurl is built without the HTTPS-proxy support."
                       ,param_3,param_4,param_5,param_6,param_7,param_8);
        return 4;
      }
      bVar6 = false;
      pcVar9 = strchr((char *)__s_00,0x40);
      iVar8 = iVar7;
    }
  }
  else {
    bVar6 = FUN_7100017490((byte *)"https",(byte *)param_3,5);
    if (bVar6) goto LAB_7100022674;
    ppbVar13 = (byte **)&DAT_00000007;
    __s_00 = (byte **)(pcVar9 + 3);
    bVar6 = FUN_7100017490((byte *)"socks5h",(byte *)param_3,7);
    if (bVar6) {
      bVar6 = true;
      iVar7 = 7;
      pcVar9 = strchr((char *)__s_00,0x40);
      iVar8 = iVar7;
    }
    else {
      ppbVar13 = (byte **)0x6;
      bVar6 = FUN_7100017490((byte *)"socks5",(byte *)param_3,6);
      if (bVar6) {
        iVar7 = 5;
        pcVar9 = strchr((char *)__s_00,0x40);
        goto joined_r0x0071000227b0;
      }
      ppbVar13 = (byte **)&DAT_00000007;
      bVar6 = FUN_7100017490((byte *)"socks4a",(byte *)param_3,7);
      if (bVar6) {
        iVar8 = 6;
        iVar7 = 6;
        pcVar9 = strchr((char *)__s_00,0x40);
      }
      else {
        ppbVar13 = (byte **)0x6;
        bVar6 = FUN_7100017490((byte *)"socks4",(byte *)param_3,6);
        if (!bVar6) {
          ppbVar13 = (byte **)0x5;
          bVar6 = FUN_7100017490((byte *)"socks",(byte *)param_3,5);
          if (!bVar6) {
            ppbVar13 = (byte **)0x5;
            bVar6 = FUN_7100017490((byte *)"http:",(byte *)param_3,5);
            if (!bVar6) {
              FUN_7100016040(param_1,(byte *)"Unsupported proxy scheme for \'%s\'",param_3,param_4,
                             param_5,param_6,param_7,param_8);
              return 7;
            }
            goto LAB_7100022794;
          }
        }
        iVar8 = 4;
        iVar7 = 4;
        pcVar9 = strchr((char *)__s_00,0x40);
      }
      bVar6 = true;
    }
  }
  if (pcVar9 != (char *)0x0) {
    ppbVar13 = &local_58;
    param_4 = &local_60;
    param_5 = 0;
    iVar7 = FUN_7100022250((char *)__s_00,(long)pcVar9 - (long)__s_00,ppbVar13,param_4,
                           (undefined8 *)0x0);
    if (iVar7 != 0) {
      return iVar7;
    }
    __s_00 = (byte **)(pcVar9 + 1);
    iVar7 = iVar8;
  }
  __s = __s_00;
  if (*(byte *)__s_00 != 0x5b) goto LAB_7100022838;
  __s = (byte **)((long)__s_00 + 1);
  uVar15 = (uint)*(byte *)__s;
  ppbVar5 = __s;
  if (*(byte *)__s != 0) {
    ppbVar14 = (byte **)((long)__s_00 + 2);
    do {
      iVar8 = isxdigit(uVar15);
      ppbVar5 = ppbVar14;
      if (((iVar8 == 0) && (uVar15 != 0x2e)) && (uVar15 != 0x3a)) {
        if (uVar15 != 0x25) {
          ppbVar14 = (byte **)((long)ppbVar14 + -1);
          goto LAB_7100022b14;
        }
        ppbVar13 = (byte **)0x3;
        iVar8 = strncmp("%25",(char *)((long)ppbVar14 + -1),3);
        if (iVar8 != 0) {
          FUN_7100015de0(param_1,(byte *)"Please URL encode %% as %%25, see RFC 6874.\n",ppbVar13,
                         param_4,param_5,param_6,param_7,param_8);
        }
        uVar15 = (uint)*(byte *)ppbVar14;
        if (uVar15 != 0) goto LAB_7100022ac8;
        break;
      }
      uVar15 = (uint)*(byte *)ppbVar14;
      ppbVar14 = (byte **)((long)ppbVar14 + 1);
    } while (uVar15 != 0);
  }
  goto LAB_7100022824;
LAB_7100022b14:
  ppbVar5 = ppbVar14;
  if (uVar15 != 0x5d) goto LAB_7100022824;
  __s_00 = (byte **)((long)ppbVar14 + 1);
  *(byte *)ppbVar14 = 0;
  goto LAB_7100022838;
  while( true ) {
    ppbVar14 = (byte **)((long)ppbVar14 + 1);
    uVar15 = (uint)*(byte *)ppbVar14;
    ppbVar5 = ppbVar14;
    if (uVar15 == 0) break;
LAB_7100022ac8:
    if (((0x19 < (uVar15 | 0x20) - 0x61) && (iVar8 = isxdigit(uVar15), iVar8 == 0)) &&
       ((1 < uVar15 - 0x2d && ((uVar15 != 0x7e && (uVar15 != 0x5f)))))) goto LAB_7100022b14;
  }
LAB_7100022824:
  __s_00 = ppbVar5;
  FUN_7100015de0(param_1,(byte *)"Invalid IPv6 address format\n",ppbVar13,param_4,param_5,param_6,
                 param_7,param_8);
LAB_7100022838:
  pcVar9 = strchr((char *)__s_00,0x3a);
  if (pcVar9 == (char *)0x0) {
    if (*(byte *)__s == 0x2f) {
      FUN_71000272a0();
      local_58 = (byte *)0x0;
      FUN_71000272a0();
      return 5;
    }
    pcVar9 = strchr((char *)__s,0x2f);
    if (pcVar9 != (char *)0x0) {
      *pcVar9 = '\0';
    }
    uVar10 = 0x438;
    if (*(ulong *)(param_1 + 0x278) != 0) {
      uVar10 = *(ulong *)(param_1 + 0x278);
    }
    bVar3 = *(byte *)__s;
  }
  else {
    local_68 = (char *)0x0;
    *pcVar9 = '\0';
    uVar10 = FUN_71039c00b0(pcVar9 + 1,&local_68,10);
    if (((local_68 == (char *)0x0) || (cVar2 = *local_68, cVar2 == '\0')) || (cVar2 == '/')) {
      if (uVar10 < 0x10000) goto LAB_7100022934;
    }
    else if ((uVar10 >> 0x10 == 0) && (cVar2 == ' ')) {
LAB_7100022934:
      *(ulong *)(param_2 + 400) = uVar10;
      bVar3 = *(byte *)__s;
      goto joined_r0x00710002291c;
    }
    FUN_7100015de0(param_1,(byte *)"No valid port number in proxy string (%s)\n",pcVar9 + 1,param_4,
                   param_5,param_6,param_7,param_8);
    bVar3 = *(byte *)__s;
  }
joined_r0x00710002291c:
  if (bVar3 == 0) {
LAB_7100022a44:
    FUN_71000272a0();
    local_58 = (byte *)0x0;
    FUN_71000272a0();
    iVar7 = 0;
  }
  else {
    plVar1 = (long *)(param_2 + 0x110);
    if (!bVar6) {
      plVar1 = (long *)(param_2 + 0x150);
    }
    *(int *)(plVar1 + 5) = iVar7;
    if (local_58 == (byte *)0x0) {
LAB_71000229fc:
      if ((-1 < (long)uVar10) &&
         ((plVar1[4] = uVar10, bVar6 || *(long *)(param_2 + 400) < 0 ||
          (*(long *)(param_2 + 0x110) == 0)))) {
        *(ulong *)(param_2 + 400) = uVar10;
      }
      FUN_71000272a0();
      *plVar1 = 0;
      lVar11 = FUN_71000272c0();
      *plVar1 = lVar11;
      plVar1[2] = lVar11;
      if (lVar11 != 0) goto LAB_7100022a44;
    }
    else {
      FUN_71000272a0();
      plVar1[6] = 0;
      lVar11 = FUN_7100024310(param_1,local_58,0,(uint *)0x0);
      plVar1[6] = lVar11;
      FUN_71000272a0();
      local_58 = (byte *)0x0;
      if (plVar1[6] == 0) {
        FUN_71000272a0();
      }
      else {
        FUN_71000272a0();
        pbVar4 = local_60;
        plVar1[7] = 0;
        if ((local_60 == (byte *)0x0) || (sVar12 = strlen((char *)local_60), 0xff < sVar12)) {
          lVar11 = FUN_71000272c0();
        }
        else {
          lVar11 = FUN_7100024310(param_1,pbVar4,0,(uint *)0x0);
        }
        plVar1[7] = lVar11;
        FUN_71000272a0();
        local_60 = (byte *)0x0;
        if (plVar1[7] != 0) {
          *(undefined1 *)(param_2 + 0x819) = 1;
          goto LAB_71000229fc;
        }
      }
    }
    iVar7 = 0x1b;
  }
  return iVar7;
}

