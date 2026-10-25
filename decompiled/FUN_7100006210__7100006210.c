// addr:      7100006210
// offset:    0x6210
// name:      FUN_7100006210
// mangled:   
// signature: undefined8 __cdecl FUN_7100006210(long param_1)


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_7100006210(long param_1)

{
  int iVar1;
  uint uVar2;
  char *__s;
  byte *pbVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  byte *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint local_26c;
  byte abStack_268 [256];
  undefined1 auStack_168 [264];
  
  puVar9 = *(undefined8 **)(param_1 + 0x9c0);
joined_r0x007100006238:
  do {
    while( true ) {
      if (puVar9 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x9c0) = 0;
        return 0;
      }
      __s = (char *)*puVar9;
      if (__s != (char *)0x0) break;
LAB_7100006320:
      puVar9 = (undefined8 *)puVar9[1];
    }
    if (*__s == '-') {
      puVar7 = &local_26c;
      iVar1 = sscanf(__s + 1,"%255[^:]:%d",auStack_168);
      if (iVar1 == 2) {
        pbVar3 = (byte *)FUN_7100007fd0((byte *)"%s:%d");
        if (pbVar3 == (byte *)0x0) {
          return 0x1b;
        }
        uVar2 = (uint)*pbVar3;
        pbVar10 = pbVar3;
        if (*pbVar3 != 0) {
          do {
            if (uVar2 == 0x3a) break;
            iVar1 = tolower(uVar2);
            *pbVar10 = (byte)iVar1;
            uVar2 = (uint)pbVar10[1];
            pbVar10 = pbVar10 + 1;
          } while (uVar2 != 0);
        }
        sVar4 = strlen((char *)pbVar3);
        if (*(long *)(param_1 + 0xb8) != 0) {
          FUN_7100016b40(param_1,3);
        }
        FUN_7100005500(*(long **)(param_1 + 0x98),pbVar3,sVar4 + 1);
        if (*(long *)(param_1 + 0xb8) != 0) {
          FUN_7100016ba0(param_1,3);
        }
        FUN_71000272a0();
        goto LAB_7100006320;
      }
      FUN_7100015de0(param_1,(byte *)"Couldn\'t parse CURLOPT_RESOLVE removal entry \'%s\'!\n",
                     *puVar9,puVar7,in_x4,in_x5,in_x6,in_x7);
      puVar9 = (undefined8 *)puVar9[1];
      goto joined_r0x007100006238;
    }
    puVar7 = &local_26c;
    in_x4 = abStack_268;
    iVar1 = sscanf(__s,"%255[^:]:%d:%255s",auStack_168);
    if (iVar1 == 3) {
      lVar5 = FUN_7100005160(abStack_268,local_26c);
      if (lVar5 == 0) {
        FUN_7100015de0(param_1,(byte *)"Address in \'%s\' found illegal!\n",*puVar9,puVar7,in_x4,
                       in_x5,in_x6,in_x7);
        puVar9 = (undefined8 *)puVar9[1];
        goto joined_r0x007100006238;
      }
      pbVar3 = (byte *)FUN_7100007fd0((byte *)"%s:%d");
      if (pbVar3 != (byte *)0x0) {
        uVar2 = (uint)*pbVar3;
        pbVar10 = pbVar3;
        if (*pbVar3 != 0) {
          do {
            if (uVar2 == 0x3a) break;
            iVar1 = tolower(uVar2);
            *pbVar10 = (byte)iVar1;
            uVar2 = (uint)pbVar10[1];
            pbVar10 = pbVar10 + 1;
          } while (uVar2 != 0);
        }
        sVar4 = strlen((char *)pbVar3);
        if (*(long *)(param_1 + 0xb8) != 0) {
          FUN_7100016b40(param_1,3);
        }
        lVar6 = FUN_71000055b0(*(long **)(param_1 + 0x98),pbVar3,sVar4 + 1);
        FUN_71000272a0();
        if (lVar6 == 0) {
          lVar6 = FUN_7100005df0(param_1,lVar5);
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 8) = 0;
            *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -1;
          }
          lVar8 = *(long *)(param_1 + 0xb8);
        }
        else {
          FUN_7100004f10(lVar5);
          lVar8 = *(long *)(param_1 + 0xb8);
        }
        if (lVar8 != 0) {
          FUN_7100016ba0(param_1,3);
        }
        if (lVar6 != 0) {
          in_x4 = abStack_268;
          FUN_7100015de0(param_1,(byte *)"Added %s:%d:%s to DNS cache\n",auStack_168,
                         (ulong)local_26c,in_x4,in_x5,in_x6,in_x7);
          puVar9 = (undefined8 *)puVar9[1];
          goto joined_r0x007100006238;
        }
      }
      FUN_7100004f10(lVar5);
      return 0x1b;
    }
    FUN_7100015de0(param_1,(byte *)"Couldn\'t parse CURLOPT_RESOLVE entry \'%s\'!\n",*puVar9,puVar7,
                   in_x4,in_x5,in_x6,in_x7);
    puVar9 = (undefined8 *)puVar9[1];
  } while( true );
}

