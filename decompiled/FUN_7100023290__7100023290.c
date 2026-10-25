// addr:      7100023290
// offset:    0x23290
// name:      FUN_7100023290
// mangled:   
// signature: int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x00710002388c) */

int FUN_7100023290(ulong param_1,char *param_2,byte *param_3,long *param_4,long *param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  long *plVar6;
  size_t __n_00;
  size_t __n_01;
  char *pcVar7;
  byte *pbVar8;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long local_328;
  long local_318;
  long local_310 [8];
  long *local_2d0;
  undefined8 local_2c8;
  byte local_2c0 [7];
  byte local_2b9;
  byte local_2b8;
  byte local_2b7;
  
  lVar15 = param_6[0x27];
  lVar13 = *param_6;
  uVar1 = *(uint *)((long)param_6 + (long)(int)param_5 * 4 + 600);
  bVar3 = (int)lVar15 == 5;
  plVar14 = (long *)((ulong)param_4 & 0xffffffff);
  plVar9 = param_4;
  plVar11 = param_6;
  __n = strlen((char *)param_3);
  uVar17 = *(ulong *)(lVar13 + 0x2c0);
  if (*(char *)((long)param_6 + 0x816) != '\0') {
    plVar9 = plVar14;
    FUN_7100015de0(lVar13,(byte *)"SOCKS5: connecting to HTTP proxy %s port %d\n",param_3,plVar14,
                   param_5,plVar11,param_7,param_8);
  }
  if ((0xff < __n) && ((int)lVar15 != 5)) {
    FUN_7100015de0(*param_6,(byte *)
                            "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n"
                   ,__n,plVar9,param_5,plVar11,param_7,param_8);
    bVar3 = true;
  }
  pbVar8 = (byte *)0x1;
  plVar6 = (long *)FUN_7100002af0(lVar13,(undefined1 (*) [12])0x0,1);
  if ((long)plVar6 < 0) {
    pcVar7 = "Connection time-out";
  }
  else {
    FUN_7100013730((ulong)uVar1,1);
    pbVar8 = (byte *)(ulong)uVar1;
    plVar9 = plVar6;
    uVar4 = FUN_7100015800(0xffffffff,0xffffffff,uVar1,(ulong)plVar6);
    if (uVar4 != 0) {
      if (uVar4 == 0xffffffff) {
        lVar13 = *param_6;
        pcVar7 = "SOCKS5: no connection here";
      }
      else if ((uVar4 >> 2 & 1) == 0) {
        if ((uVar17 & 0xfffffffffffffffa) != 0) {
          FUN_7100015de0(*param_6,(byte *)
                                  "warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %lu\n",
                         uVar17,plVar9,param_5,plVar11,param_7,param_8);
        }
        pcVar7 = (char *)(-(uVar17 & 1) & param_1);
        local_2c0[2] = 0;
        if (pcVar7 == (char *)0x0) {
          iVar5 = 1;
        }
        else {
          iVar5 = 2;
          local_2c0[3] = '\x02';
        }
        local_2c0[1] = (char)iVar5;
        local_2c0[0] = 5;
        FUN_7100013730((ulong)uVar1,0);
        FUN_7100015de0(lVar13,(byte *)"SOCKS5 communication to %s:%d\n",param_3,plVar14,param_5,
                       plVar11,param_7,param_8);
        plVar9 = (long *)(ulong)(iVar5 + 2);
        pbVar8 = local_2c0;
        param_5 = &local_2c8;
        iVar5 = FUN_71000162c0(param_6,uVar1,pbVar8,plVar9,param_5,plVar11,param_7,param_8);
        if ((iVar5 == 0) && (local_2c8 == (long *)((ulong)local_2c0[1] + 2))) {
          FUN_7100013730((ulong)uVar1,1);
          pbVar8 = &DAT_ffffffff;
          uVar4 = FUN_7100015800(uVar1,0xffffffff,0xffffffff,(ulong)plVar6);
          plVar9 = plVar6;
          if (uVar4 == 0) {
            lVar13 = *param_6;
            pcVar7 = "SOCKS5 read timeout";
            goto LAB_71000233a4;
          }
          if (uVar4 == 0xffffffff) {
            lVar13 = *param_6;
            pcVar7 = "SOCKS5 nothing to read";
          }
          else {
            if ((uVar4 >> 2 & 1) != 0) {
              FUN_7100016040(*param_6,(byte *)"SOCKS5 read error occurred",pbVar8,plVar6,param_5,
                             plVar11,param_7,param_8);
              return 0x38;
            }
            FUN_7100013730((ulong)uVar1,0);
            local_328 = 0;
            pbVar16 = (byte *)0x2;
            while( true ) {
              pbVar8 = (byte *)0x1;
              plVar9 = (long *)FUN_7100002af0(*param_6,(undefined1 (*) [12])0x0,1);
              if ((long)plVar9 < 0) break;
              pbVar8 = &DAT_ffffffff;
              uVar4 = FUN_7100015800(uVar1,0xffffffff,0xffffffff,(ulong)plVar9);
              plVar6 = plVar9;
              if ((int)uVar4 < 1) break;
              plVar6 = local_310;
              pbVar8 = pbVar16;
              iVar5 = FUN_7100016980();
              if (iVar5 != 0x51) {
                if (iVar5 != 0) break;
                if (pbVar16 + -local_310[0] == (byte *)0x0) {
                  if (pbVar16 + local_328 == (byte *)0x2) {
                    plVar9 = plVar6;
                    if (local_2c0[0] != 5) {
                      pcVar7 = "Received invalid version in initial SOCKS5 response.";
                      goto LAB_71000234ac;
                    }
                    if (local_2c0[1] < 2) {
                      if (local_2c0[1] == 0) goto LAB_71000237c4;
                      if (local_2c0[1] == 1) {
                        pcVar7 = "SOCKS5 GSSAPI per-message authentication is not supported.";
                        goto LAB_71000234ac;
                      }
                    }
                    else {
                      if (local_2c0[1] == 0xff) {
                        if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
                          pcVar7 = 
                          "No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.)"
                          ;
                        }
                        else {
                          pcVar7 = "No authentication method was acceptable.";
                        }
                        goto LAB_71000234ac;
                      }
                      if (local_2c0[1] == 2) {
                        if ((param_2 == (char *)0x0) || (pcVar7 == (char *)0x0)) {
                          __n_01 = 0;
                          __n_00 = 0;
                          local_2c0[0] = 1;
                          local_2c0[1] = 0;
                        }
                        else {
                          __n_00 = strlen(pcVar7);
                          __n_01 = strlen(param_2);
                          local_2c0[1] = (char)__n_00;
                          local_2c0[0] = 1;
                          if (__n_00 != 0) {
                            memcpy((void *)((ulong)local_2c0 | 2),pcVar7,__n_00);
                          }
                        }
                        local_2c0[__n_00 + 2] = (byte)__n_01;
                        if ((param_2 != (char *)0x0) && (__n_01 != 0)) {
                          memcpy(local_2c0 + __n_00 + 3,param_2,__n_01);
                        }
                        plVar6 = (long *)(__n_00 + 3 + __n_01);
                        pbVar8 = local_2c0;
                        param_5 = &local_2c8;
                        plVar9 = plVar6;
                        iVar5 = FUN_71000162c0(param_6,uVar1,pbVar8,plVar6,param_5,plVar11,param_7,
                                               param_8);
                        if ((iVar5 != 0) || (plVar6 != local_2c8)) {
                          pcVar7 = "Failed to send SOCKS5 sub-negotiation request.";
                          goto LAB_71000234ac;
                        }
                        local_318 = 0;
                        pbVar16 = (byte *)0x2;
                        goto LAB_7100023730;
                      }
                    }
                    pcVar7 = "Undocumented SOCKS5 mode attempted to be used by server.";
                    goto LAB_71000234ac;
                  }
                  break;
                }
                if (local_310[0] == 0) break;
                local_328 = local_310[0] + local_328;
                pbVar16 = pbVar16 + -local_310[0];
              }
            }
            pcVar7 = "Unable to receive initial SOCKS5 response.";
            plVar9 = plVar6;
          }
        }
        else {
          pcVar7 = "Unable to send initial SOCKS5 request.";
        }
      }
      else {
        lVar13 = *param_6;
        pcVar7 = "SOCKS5: error occurred during connection";
      }
      goto LAB_71000234ac;
    }
    lVar13 = *param_6;
    pcVar7 = "SOCKS5: connection timeout";
  }
LAB_71000233a4:
  FUN_7100016040(lVar13,(byte *)pcVar7,pbVar8,plVar9,param_5,plVar11,param_7,param_8);
  return 0x1c;
LAB_7100023908:
  pcVar7 = "Unable to receive SOCKS5 sub-negotiation response.";
  goto LAB_71000234ac;
LAB_7100023ac8:
  pbVar8 = (byte *)0x1;
  plVar14 = (long *)FUN_7100002af0(*param_6,(undefined1 (*) [12])0x0,1);
  if (-1 < (long)plVar14) {
    pbVar8 = &DAT_ffffffff;
    uVar4 = FUN_7100015800(uVar1,0xffffffff,0xffffffff,(ulong)plVar14);
    plVar9 = plVar14;
    if ((int)uVar4 < 1) goto LAB_7100023c04;
    plVar9 = local_310;
    pbVar8 = pbVar16;
    iVar5 = FUN_7100016980();
    if (iVar5 != 0x51) {
      if (iVar5 != 0) goto LAB_7100023c04;
      if (pbVar16 + -local_310[0] == (byte *)0x0) {
        if ((byte *)(uVar17 - 10) == pbVar16 + lVar15) {
LAB_7100023a48:
          uVar12 = (ulong)local_2c0[1];
          if (local_2c0[1] == 0) {
            FUN_7100015de0(lVar13,(byte *)"SOCKS5 request granted.\n",pbVar8,plVar9,param_5,plVar11,
                           param_7,0);
            FUN_7100013730((ulong)uVar1,1);
            return 0;
          }
          if (local_2c0[3] == '\x04') {
            uVar12 = (ulong)local_2b7;
            pcVar7 = 
            "Can\'t complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d)"
            ;
            uVar17 = (ulong)local_2b8;
          }
          else {
            if (local_2c0[3] == '\x03') {
              uVar2 = *(undefined1 *)((long)&local_2c8 + uVar17 + 6);
              *(undefined1 *)((long)&local_2c8 + uVar17 + 6) = 0;
              FUN_7100016040(lVar13,(byte *)"Can\'t complete SOCKS5 connection to %s:%d. (%d)",
                             local_2c0 + 5,
                             (ulong)CONCAT11(uVar2,*(undefined1 *)((long)&local_2c8 + uVar17 + 7)),
                             (ulong)local_2c0[1],plVar11,param_7,uVar12);
              *(undefined1 *)((long)&local_2c8 + uVar17 + 6) = uVar2;
              return 7;
            }
            if (local_2c0[3] != '\x01') {
              return 7;
            }
            uVar17 = (ulong)CONCAT11(local_2b8,local_2b7);
            pcVar7 = "Can\'t complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)";
          }
          FUN_7100016040(lVar13,(byte *)pcVar7,(ulong)local_2c0[4],(ulong)local_2c0[5],
                         (ulong)local_2c0[6],(ulong)local_2b9,uVar17,uVar12);
          return 7;
        }
        goto LAB_7100023c04;
      }
      if (local_310[0] == 0) goto LAB_7100023c04;
      lVar15 = local_310[0] + lVar15;
      pbVar16 = pbVar16 + -local_310[0];
    }
    goto LAB_7100023ac8;
  }
LAB_7100023c04:
  pcVar7 = "Failed to receive SOCKS5 connect request ack.";
  goto LAB_71000234ac;
  while( true ) {
    pbVar8 = &DAT_ffffffff;
    uVar4 = FUN_7100015800(uVar1,0xffffffff,0xffffffff,(ulong)plVar6);
    plVar9 = plVar6;
    if ((int)uVar4 < 1) goto LAB_7100023908;
    plVar9 = local_310;
    pbVar8 = pbVar16;
    iVar5 = FUN_7100016980();
    if (iVar5 != 0x51) break;
LAB_7100023730:
    pbVar8 = (byte *)0x1;
    plVar6 = (long *)FUN_7100002af0(*param_6,(undefined1 (*) [12])0x0,1);
    if ((long)plVar6 < 0) goto LAB_7100023908;
  }
  if (iVar5 != 0) goto LAB_7100023908;
  if (pbVar16 + -local_310[0] != (byte *)0x0) {
    if (local_310[0] == 0) goto LAB_7100023908;
    local_318 = local_310[0] + local_318;
    pbVar16 = pbVar16 + -local_310[0];
    goto LAB_7100023730;
  }
  if (pbVar16 + local_318 != (byte *)0x2) goto LAB_7100023908;
  if (local_2c0[1] != 0) {
    FUN_7100016040(lVar13,(byte *)"User was rejected by the SOCKS5 server (%d %d).",
                   (ulong)local_2c0[0],(ulong)local_2c0[1],param_5,plVar11,param_7,param_8);
    return 7;
  }
LAB_71000237c4:
  local_2c0[0] = 5;
  local_2c0[1] = 1;
  local_2c0[2] = 0;
  if (bVar3) {
    pplVar10 = &local_2d0;
    plVar9 = plVar14;
    uVar4 = FUN_7100005f10(param_6,param_3,(uint)param_4,(long *)pplVar10,param_5,plVar11,param_7,
                           param_8);
    if (uVar4 == 0xffffffff) {
      return 6;
    }
    if ((uVar4 == 1) &&
       (iVar5 = FUN_7100004910(param_6,(long *)&local_2d0,plVar9,pplVar10,param_5,plVar11,param_7,
                               param_8), iVar5 != 0)) {
      return iVar5;
    }
    if ((local_2d0 == (long *)0x0) || (lVar15 = *local_2d0, lVar15 == 0)) {
LAB_71000239bc:
      FUN_7100016040(lVar13,(byte *)"Failed to resolve \"%s\" for SOCKS5 connect.",param_3,pplVar10,
                     param_5,plVar11,param_7,param_8);
      return 6;
    }
    FUN_7100005ba0(lVar15,(char *)local_310,0x40);
    if (*(int *)(lVar15 + 4) != 2) {
      FUN_7100016040(lVar13,(byte *)"SOCKS5 connection to %s not supported\n",local_310,pplVar10,
                     param_5,plVar11,param_7,param_8);
      FUN_71000060d0(lVar13,local_2d0);
      goto LAB_71000239bc;
    }
    local_2c0[3] = '\x01';
    lVar15 = *(long *)(lVar15 + 0x20);
    local_2c0[4] = *(byte *)(lVar15 + 4);
    local_2c0[5] = *(byte *)(lVar15 + 5);
    local_2c0[6] = *(byte *)(lVar15 + 6);
    local_2b9 = *(byte *)(lVar15 + 7);
    FUN_7100015de0(lVar13,(byte *)"SOCKS5 connect to IPv4 %s (locally resolved)\n",local_310,
                   pplVar10,param_5,plVar11,param_7,param_8);
    lVar15 = 8;
    FUN_71000060d0(lVar13,local_2d0);
  }
  else {
    local_2c0[3] = '\x03';
    local_2c0[4] = (byte)__n;
    memcpy(local_2c0 + 5,param_3,__n);
    lVar15 = __n + 5;
  }
  plVar6 = (long *)(lVar15 + 2);
  pbVar8 = local_2c0;
  local_2c0[lVar15] = (byte)((ulong)plVar14 >> 8);
  param_5 = &local_2c8;
  local_2c0[lVar15 + 1] = (byte)param_4;
  plVar9 = plVar6;
  iVar5 = FUN_71000162c0(param_6,uVar1,pbVar8,plVar6,param_5,plVar11,param_7,param_8);
  if ((iVar5 == 0) && (plVar6 == local_2c8)) {
    lVar15 = 0;
    pbVar16 = (byte *)0xa;
    while( true ) {
      pbVar8 = (byte *)0x1;
      plVar14 = (long *)FUN_7100002af0(*param_6,(undefined1 (*) [12])0x0,1);
      if ((long)plVar14 < 0) break;
      pbVar8 = &DAT_ffffffff;
      uVar4 = FUN_7100015800(uVar1,0xffffffff,0xffffffff,(ulong)plVar14);
      plVar9 = plVar14;
      if ((int)uVar4 < 1) break;
      plVar9 = local_310;
      pbVar8 = pbVar16;
      iVar5 = FUN_7100016980();
      if (iVar5 != 0x51) {
        if (iVar5 != 0) break;
        if (pbVar16 + -local_310[0] == (byte *)0x0) {
          if (pbVar16 + lVar15 == (byte *)0xa) {
            if (local_2c0[0] != 5) {
              pcVar7 = "SOCKS5 reply has wrong version, version should be 5.";
              goto LAB_71000234ac;
            }
            if (local_2c0[3] == '\x04') {
              uVar17 = 0x16;
            }
            else {
              if (local_2c0[3] != '\x03') {
                uVar17 = 10;
                goto LAB_7100023a48;
              }
              uVar17 = (ulong)local_2c0[4] + 7;
              if (uVar17 < 0xb) goto LAB_7100023a48;
            }
            lVar15 = 0;
            pbVar16 = (byte *)(uVar17 - 10);
            goto LAB_7100023ac8;
          }
          break;
        }
        if (local_310[0] == 0) break;
        lVar15 = local_310[0] + lVar15;
        pbVar16 = pbVar16 + -local_310[0];
      }
    }
    goto LAB_7100023c04;
  }
  pcVar7 = "Failed to send SOCKS5 connect request.";
LAB_71000234ac:
  FUN_7100016040(lVar13,(byte *)pcVar7,pbVar8,plVar9,param_5,plVar11,param_7,param_8);
  return 7;
}

