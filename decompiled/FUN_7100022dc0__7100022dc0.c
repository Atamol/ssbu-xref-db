// addr:      7100022dc0
// offset:    0x22dc0
// name:      FUN_7100022dc0
// mangled:   
// signature: undefined8 __cdecl FUN_7100022dc0(char * param_1, long * * * * * * param_2, uint param_3, undefined8 param_4, long * * * * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_7100022dc0(char *param_1,long ******param_2,uint param_3,undefined8 param_4,long *******param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  size_t sVar7;
  size_t sVar8;
  long *************ppppppppppppplVar9;
  char *pcVar10;
  undefined8 uVar11;
  long ************pppppppppppplVar12;
  long *************ppppppppppppplVar13;
  ulong uVar14;
  long ******pppppplVar15;
  long *************ppppppppppppplVar16;
  long lVar17;
  long ************pppppppppppplVar18;
  long ***********local_1a8 [8];
  undefined2 local_168;
  undefined1 local_166;
  undefined1 local_165;
  undefined4 local_164;
  char local_160;
  char local_15f [255];
  long *************local_58;
  
  pppppplVar15 = *param_5;
  iVar2 = *(int *)(param_5 + 0x27);
  uVar3 = *(uint *)((long)param_5 + (long)(int)param_4 * 4 + 600);
  ppppppppppppplVar16 = (long *************)(ulong)param_3;
  uVar11 = 1;
  ppppppppppppplVar13 = (long *************)param_5;
  lVar6 = FUN_7100002af0((long)pppppplVar15,(undefined1 (*) [12])0x0,1);
  if (lVar6 < 0) {
    FUN_7100016040((long)pppppplVar15,(byte *)"Connection time-out",uVar11,param_4,
                   ppppppppppppplVar13,param_6,param_7,param_8);
    return 0x1c;
  }
  if (*(char *)((long)param_5 + 0x816) != '\0') {
    puVar1 = &DAT_710438b8c8;
    if (iVar2 != 6) {
      puVar1 = &DAT_71044114cc;
    }
    ppppppppppppplVar13 = ppppppppppppplVar16;
    FUN_7100015de0((long)*param_5,(byte *)"SOCKS4%s: connecting to HTTP proxy %s port %d\n",puVar1,
                   param_2,ppppppppppppplVar16,param_6,param_7,param_8);
  }
  FUN_7100013730((ulong)uVar3,0);
  pppppppppppplVar12 = (long ************)param_2;
  FUN_7100015de0((long)pppppplVar15,(byte *)"SOCKS4 communication to %s:%d\n",param_2,
                 ppppppppppppplVar16,ppppppppppppplVar13,param_6,param_7,param_8);
  local_166 = (undefined1)(param_3 >> 8);
  local_168 = 0x104;
  local_165 = (undefined1)param_3;
  if (iVar2 != 6) {
    ppppppppppppplVar16 = (long *************)&local_58;
    uVar14 = (ulong)param_3;
    uVar5 = FUN_7100005f10((long *)param_5,(byte *)param_2,param_3,(long *)ppppppppppppplVar16,
                           ppppppppppppplVar13,param_6,param_7,param_8);
    if (uVar5 == 0xffffffff) {
      return 5;
    }
    if (uVar5 == 1) {
      FUN_7100004910((long *)param_5,(long *)&local_58,uVar14,ppppppppppppplVar16,
                     ppppppppppppplVar13,param_6,param_7,param_8);
    }
    if ((local_58 == (long *************)0x0) ||
       (pppppppppppplVar12 = *local_58, pppppppppppplVar12 == (long ************)0x0)) {
LAB_71000230a4:
      FUN_7100016040((long)pppppplVar15,(byte *)"Failed to resolve \"%s\" for SOCKS4 connect.",
                     param_2,ppppppppppppplVar16,ppppppppppppplVar13,param_6,param_7,param_8);
      return 6;
    }
    FUN_7100005ba0((long)pppppppppppplVar12,(char *)local_1a8,0x40);
    if (*(int *)((long)pppppppppppplVar12 + 4) != 2) {
      FUN_7100016040((long)pppppplVar15,(byte *)"SOCKS4 connection to %s not supported\n",local_1a8,
                     ppppppppppppplVar16,ppppppppppppplVar13,param_6,param_7,param_8);
      FUN_71000060d0((long)pppppplVar15,(long *)local_58);
      goto LAB_71000230a4;
    }
    local_164 = *(undefined4 *)((long)pppppppppppplVar12[4] + 4);
    pppppppppppplVar12 = local_1a8;
    FUN_7100015de0((long)pppppplVar15,(byte *)"SOCKS4 connect to IPv4 %s (locally resolved)\n",
                   pppppppppppplVar12,ppppppppppppplVar16,ppppppppppppplVar13,param_6,param_7,
                   param_8);
    FUN_71000060d0((long)pppppplVar15,(long *)local_58);
  }
  local_160 = '\0';
  if (param_1 != (char *)0x0) {
    local_160 = '\0';
    sVar7 = strlen(param_1);
    if (0xfd < sVar7) {
      pcVar10 = "Too long SOCKS proxy name, can\'t use!\n";
      goto LAB_7100023158;
    }
    memcpy(&local_160,param_1,sVar7 + 1);
  }
  sVar7 = strlen(&local_160);
  lVar6 = (long)(int)sVar7 + 9;
  if (iVar2 == 6) {
    local_164 = 0x1000000;
    sVar8 = strlen((char *)param_2);
    lVar17 = sVar8 + 1;
    if (lVar17 + lVar6 < 0x107) {
      strcpy(local_15f + (int)sVar7,(char *)param_2);
    }
    else {
      lVar17 = 0;
    }
  }
  else {
    lVar17 = 0;
    lVar6 = (long)(int)lVar6;
  }
  ppppppppppppplVar9 = (long *************)(lVar17 + lVar6);
  pppppppppppplVar12 = (long ************)&local_168;
  ppppppppppppplVar13 = (long *************)&local_58;
  ppppppppppppplVar16 = ppppppppppppplVar9;
  iVar4 = FUN_71000162c0((long *)param_5,uVar3,pppppppppppplVar12,ppppppppppppplVar9,
                         (long *)ppppppppppppplVar13,param_6,param_7,param_8);
  if ((iVar4 == 0) && (local_58 == ppppppppppppplVar9)) {
    if ((iVar2 == 6) && (lVar17 == 0)) {
      sVar7 = strlen((char *)param_2);
      ppppppppppppplVar9 = (long *************)(sVar7 + 1);
      ppppppppppppplVar13 = (long *************)&local_58;
      ppppppppppppplVar16 = ppppppppppppplVar9;
      iVar4 = FUN_71000162c0((long *)param_5,uVar3,param_2,ppppppppppppplVar9,
                             (long *)ppppppppppppplVar13,param_6,param_7,param_8);
      pppppppppppplVar12 = (long ************)param_2;
      if ((iVar4 != 0) || (local_58 != ppppppppppppplVar9)) goto LAB_7100023078;
    }
    lVar6 = 0;
    pppppppppppplVar18 = (long ************)&DAT_00000008;
    while( true ) {
      pppppppppppplVar12 = (long ************)0x1;
      ppppppppppppplVar9 =
           (long *************)FUN_7100002af0((long)*param_5,(undefined1 (*) [12])0x0,1);
      if ((long)ppppppppppppplVar9 < 0) break;
      pppppppppppplVar12 = (long ************)&DAT_ffffffff;
      uVar5 = FUN_7100015800(uVar3,0xffffffff,0xffffffff,(ulong)ppppppppppppplVar9);
      ppppppppppppplVar16 = ppppppppppppplVar9;
      if ((int)uVar5 < 1) break;
      ppppppppppppplVar16 = (long *************)local_1a8;
      pppppppppppplVar12 = pppppppppppplVar18;
      iVar4 = FUN_7100016980();
      if (iVar4 != 0x51) {
        if (iVar4 != 0) break;
        if ((long ************)((long)pppppppppppplVar18 - (long)local_1a8[0]) ==
            (long ************)0x0) {
          if ((undefined1 *)(lVar6 + (long)pppppppppppplVar18) == (undefined1 *)0x8) {
            if ((char)local_168 == '\0') {
              switch(local_168._1_1_) {
              case 0x5a:
                puVar1 = &DAT_710438b8c8;
                if (iVar2 != 6) {
                  puVar1 = &DAT_71044114cc;
                }
                FUN_7100015de0((long)pppppplVar15,(byte *)"SOCKS4%s request granted.\n",puVar1,
                               ppppppppppppplVar16,ppppppppppppplVar13,param_6,param_7,
                               (ulong)local_168._1_1_);
                FUN_7100013730((ulong)uVar3,1);
                return 0;
              case 0x5b:
                uVar14 = (ulong)CONCAT11(local_160,local_15f[0]);
                pcVar10 = 
                "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed."
                ;
                break;
              case 0x5c:
                uVar14 = (ulong)CONCAT11(local_160,local_15f[0]);
                pcVar10 = 
                "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
                ;
                break;
              case 0x5d:
                uVar14 = (ulong)CONCAT11(local_160,local_15f[0]);
                pcVar10 = 
                "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
                ;
                break;
              default:
                uVar14 = (ulong)CONCAT11(local_160,local_15f[0]);
                pcVar10 = "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.";
              }
              FUN_7100016040((long)pppppplVar15,(byte *)pcVar10,(ulong)(byte)local_164,
                             (ulong)local_164._1_1_,(ulong)local_164._2_1_,(ulong)local_164._3_1_,
                             uVar14,(ulong)local_168._1_1_);
              return 7;
            }
            pcVar10 = "SOCKS4 reply has wrong version, version should be 4.";
            goto LAB_7100023158;
          }
          break;
        }
        if (local_1a8[0] == (long ***********)0x0) break;
        lVar6 = (long)local_1a8[0] + lVar6;
        pppppppppppplVar18 = (long ************)((long)pppppppppppplVar18 - (long)local_1a8[0]);
      }
    }
    pcVar10 = "Failed to receive SOCKS4 connect request ack.";
  }
  else {
LAB_7100023078:
    pcVar10 = "Failed to send SOCKS4 connect request.";
  }
LAB_7100023158:
  FUN_7100016040((long)pppppplVar15,(byte *)pcVar10,pppppppppppplVar12,ppppppppppppplVar16,
                 ppppppppppppplVar13,param_6,param_7,param_8);
  return 7;
}

