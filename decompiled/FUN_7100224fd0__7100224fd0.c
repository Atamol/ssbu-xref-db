// addr:      7100224fd0
// offset:    0x224fd0
// name:      FUN_7100224fd0
// mangled:   
// signature: undefined8 __cdecl FUN_7100224fd0(long param_1, char * param_2, long param_3, char * param_4, long param_5, ulong * param_6)


/* WARNING: Removing unreachable block (ram,0x0071002253f0) */

undefined8
FUN_7100224fd0(long param_1,char *param_2,long param_3,char *param_4,long param_5,ulong *param_6)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char cVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  char local_148 [32];
  char local_128 [32];
  ulong uStack_108;
  byte local_100 [24];
  char acStack_e8 [64];
  char local_a8 [72];
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  memset((char *)(param_1 + 0x34),0,0x400);
  if (param_2 == (char *)0x0) {
    return 0;
  }
  cVar11 = *param_2;
  if (cVar11 == '\0') {
    return 0;
  }
  lVar5 = 0;
  do {
    cVar12 = '\r';
    if (cVar11 == '\r') {
      cVar11 = param_2[lVar5 + 1];
      if (param_2[lVar5 + 1] != '\n') {
LAB_7100225070:
        cVar12 = '\n';
        goto LAB_7100225074;
      }
      if (param_2[lVar5 + 2] == '\r') {
        cVar11 = '\0';
        if (param_2[lVar5 + 3] != '\0') {
          cVar11 = param_2[lVar5 + 3];
        }
        goto LAB_7100225070;
      }
      if (param_2[lVar5 + 2] == '\r') goto LAB_71002250b0;
    }
    else {
LAB_7100225074:
      if (cVar11 == cVar12) {
LAB_71002250b0:
        if (lVar5 < 0) {
          return 0;
        }
        iVar3 = strncmp(param_2,"HTTP/",5);
        if (iVar3 != 0) {
          return 0;
        }
        pcVar4 = strchr(param_2,0x20);
        if (pcVar4 == (char *)0x0) {
          iVar3 = *(int *)(param_1 + 0x30);
        }
        else {
          iVar3 = atoi(pcVar4 + 1);
          *(int *)(param_1 + 0x30) = iVar3;
        }
        if ((iVar3 - 0x12dU < 8) && ((1 << (ulong)(iVar3 - 0x12dU & 0x1f) & 0xc3U) != 0)) {
          lVar5 = FUN_7100225dd0(param_2,(byte *)"Location:",0);
          if (lVar5 < 0) {
            return 0;
          }
          lVar5 = lVar5 + 9;
          sVar7 = strlen(param_2);
          if ((int)sVar7 <= (int)lVar5) goto LAB_710022518c;
          lVar5 = (long)(int)lVar5;
          break;
        }
        if (iVar3 != 0x65) {
          return 0;
        }
        lVar6 = FUN_7100225dd0(param_2,(byte *)"Upgrade: websocket",0);
        if (lVar6 < 0) {
          return 0;
        }
        lVar2 = lVar5 + 3;
        if (lVar2 < lVar6) {
          return 0;
        }
        lVar6 = FUN_7100225dd0(param_2,(byte *)"Connection: Upgrade",0);
        if (lVar6 < 0) {
          return 0;
        }
        if (lVar2 < lVar6) {
          return 0;
        }
        lVar6 = FUN_7100225dd0(param_2,(byte *)"Sec-Websocket-Accept:",0);
        if (lVar6 < 0) {
          return 0;
        }
        if (lVar2 < lVar6) {
          return 0;
        }
        lVar6 = lVar6 + 0x15;
        sVar7 = strlen(param_2);
        if ((int)sVar7 <= (int)lVar6) goto LAB_7100225288;
        lVar6 = (long)(int)lVar6;
        goto LAB_7100225270;
      }
    }
    if (lVar5 == -2) {
      return 0;
    }
    cVar11 = param_2[lVar5 + 1];
    lVar5 = lVar5 + 1;
    if (cVar11 == '\0') {
      return 0;
    }
  } while( true );
  while (lVar5 = lVar5 + 1, lVar5 < (int)sVar7) {
    if (param_2[lVar5] != ' ') break;
  }
LAB_710022518c:
  uVar10 = FUN_7100225dd0(param_2 + (int)lVar5,&DAT_71043ce9fd,0);
  if (0x3ff < uVar10) {
    return 0;
  }
  strncpy((char *)(param_1 + 0x34),param_2 + (int)lVar5,uVar10);
  *(undefined1 *)(param_1 + uVar10 + 0x34) = 0;
  return 0;
  while (lVar6 = lVar6 + 1, lVar6 < (int)sVar7) {
LAB_7100225270:
    if (param_2[lVar6] != ' ') break;
  }
LAB_7100225288:
  if (*param_2 != '\0') {
    iVar3 = (int)lVar6;
    pcVar4 = param_2 + iVar3;
    cVar11 = *pcVar4;
    if (cVar11 != '\0') {
      lVar6 = 0;
      while( true ) {
        cVar12 = '\r';
        if (cVar11 == '\r') {
          cVar11 = '\0';
          if (pcVar4[lVar6 + 1] != '\0') {
            cVar11 = pcVar4[lVar6 + 1];
          }
          cVar12 = '\n';
        }
        if (cVar11 == cVar12) break;
        if (lVar6 == -2) {
          return 0;
        }
        cVar11 = pcVar4[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (cVar11 == '\0') {
          return 0;
        }
      }
      if (-1 < (long)(pcVar4 + (lVar6 - (long)param_2))) {
        pcVar8 = pcVar4 + (lVar6 - (long)param_2) + -1;
        if (-1 < (int)pcVar8) {
          pcVar8 = (char *)(long)(int)pcVar8;
          do {
            if (param_2[(long)pcVar8] != ' ') goto LAB_7100225334;
            pcVar9 = pcVar8 + -1;
            bVar1 = 0 < (long)pcVar8;
            pcVar8 = pcVar9;
          } while (bVar1);
          pcVar8 = (char *)((ulong)pcVar9 & 0xffffffff);
        }
LAB_7100225334:
        if ((int)pcVar8 <= iVar3) {
          return 0;
        }
        if ((int)pcVar8 - iVar3 != 0x1b) {
          return 0;
        }
        local_128[0x18] = '\0';
        local_128[0x19] = '\0';
        local_128[0x1a] = '\0';
        local_128[0x1b] = '\0';
        local_128[0x1c] = '\0';
        local_128[8] = '\0';
        local_128[9] = '\0';
        local_128[10] = '\0';
        local_128[0xb] = '\0';
        local_128[0xc] = '\0';
        local_128[0xd] = '\0';
        local_128[0xe] = '\0';
        local_128[0xf] = '\0';
        local_128[0x10] = '\0';
        local_128[0x11] = '\0';
        local_128[0x12] = '\0';
        local_128[0x13] = '\0';
        local_128[0x14] = '\0';
        local_128[0x15] = '\0';
        local_128[0x16] = '\0';
        local_128[0x17] = '\0';
        local_128[0] = '\0';
        local_128[1] = '\0';
        local_128[2] = '\0';
        local_128[3] = '\0';
        local_128[4] = '\0';
        local_128[5] = '\0';
        local_128[6] = '\0';
        local_128[7] = '\0';
        strncpy(local_128,pcVar4,0x1c);
        local_148[0x18] = '\0';
        local_148[0x19] = '\0';
        local_148[0x1a] = '\0';
        local_148[0x1b] = '\0';
        local_148[0x1c] = '\0';
        local_148[8] = '\0';
        local_148[9] = '\0';
        local_148[10] = '\0';
        local_148[0xb] = '\0';
        local_148[0xc] = '\0';
        local_148[0xd] = '\0';
        local_148[0xe] = '\0';
        local_148[0xf] = '\0';
        local_148[0x10] = '\0';
        local_148[0x11] = '\0';
        local_148[0x12] = '\0';
        local_148[0x13] = '\0';
        local_148[0x14] = '\0';
        local_148[0x15] = '\0';
        local_148[0x16] = '\0';
        local_148[0x17] = '\0';
        lVar6 = 0;
        local_148[0] = '\0';
        local_148[1] = '\0';
        local_148[2] = '\0';
        local_148[3] = '\0';
        local_148[4] = '\0';
        local_148[5] = '\0';
        local_148[6] = '\0';
        local_148[7] = '\0';
        pcVar8 = *(char **)(param_1 + 0x20);
        cVar11 = *pcVar8;
        pcVar4 = pcVar8;
        while (cVar11 != '\0') {
          local_a8[lVar6] = cVar11;
          if (lVar6 == 0x3e) {
            lVar6 = 0x3f;
            pcVar4 = local_a8 + 0x3f;
            uVar10 = 1;
            uVar13 = 0;
            uVar14 = 1;
            goto LAB_7100225418;
          }
          if (pcVar4[1] == '\0') {
            uVar10 = -lVar6 + 0x3f;
            pcVar4 = local_a8 + lVar6 + 1;
            uVar13 = -lVar6 + 0x3e;
            lVar6 = lVar6 + 1;
            goto joined_r0x007100225414;
          }
          local_a8[lVar6 + 1] = pcVar4[1];
          lVar6 = lVar6 + 2;
          pcVar4 = pcVar8 + lVar6;
          cVar11 = *pcVar4;
        }
        uVar10 = -lVar6 + 0x40;
        pcVar4 = local_a8 + lVar6;
        uVar13 = -lVar6 + 0x3f;
joined_r0x007100225414:
        uVar14 = uVar10 & 3;
        if (uVar14 != 0) {
LAB_7100225418:
          lVar15 = -uVar14;
          pcVar8 = pcVar4;
          do {
            uVar10 = uVar10 - 1;
            lVar15 = lVar15 + 1;
            pcVar4 = pcVar8 + 1;
            *pcVar8 = '\0';
            pcVar8 = pcVar4;
          } while (lVar15 != 0);
        }
        if (2 < uVar13) {
          do {
            uVar10 = uVar10 - 4;
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + 4;
          } while (uVar10 != 0);
        }
        pcVar4 = local_a8 + lVar6;
        uVar10 = 0x40 - lVar6;
        if (1 < uVar10) {
          pcVar8 = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
          pcVar9 = pcVar4;
          do {
            cVar11 = *pcVar8;
            pcVar4 = pcVar9;
            if (cVar11 == '\0') goto LAB_7100225484;
            uVar10 = uVar10 - 1;
            pcVar8 = pcVar8 + 1;
            pcVar4 = pcVar9 + 1;
            *pcVar9 = cVar11;
            pcVar9 = pcVar4;
          } while (1 < uVar10);
        }
        if (uVar10 != 0) {
          uVar10 = 1;
LAB_7100225484:
          uVar13 = uVar10 - 1;
          if ((uVar10 & 3) != 0) {
            lVar6 = -(uVar10 & 3);
            pcVar8 = pcVar4;
            do {
              uVar10 = uVar10 - 1;
              lVar6 = lVar6 + 1;
              pcVar4 = pcVar8 + 1;
              *pcVar8 = '\0';
              pcVar8 = pcVar4;
            } while (lVar6 != 0);
          }
          if (2 < uVar13) {
            do {
              uVar10 = uVar10 - 4;
              pcVar4[0] = '\0';
              pcVar4[1] = '\0';
              pcVar4[2] = '\0';
              pcVar4[3] = '\0';
              pcVar4 = pcVar4 + 4;
            } while (uVar10 != 0);
          }
        }
        FUN_71001b5de0(local_a8,acStack_e8,0x40);
        local_100[0x10] = 0;
        local_100[0x11] = 0;
        local_100[0x12] = 0;
        local_100[0x13] = 0;
        local_100[0] = 0;
        local_100[1] = 0;
        local_100[2] = 0;
        local_100[3] = 0;
        local_100[4] = 0;
        local_100[5] = 0;
        local_100[6] = 0;
        local_100[7] = 0;
        local_100[8] = 0;
        local_100[9] = 0;
        local_100[10] = 0;
        local_100[0xb] = 0;
        local_100[0xc] = 0;
        local_100[0xd] = 0;
        local_100[0xe] = 0;
        local_100[0xf] = 0;
        sVar7 = strnlen(acStack_e8,0x40);
        nn::crypto::GenerateSha1Hash(local_100,0x14,acStack_e8,sVar7);
        FUN_71001b5850(local_100,0x14,0,&uStack_108);
        FUN_71001b5850(local_100,0x14,(long)local_148,&uStack_108);
        iVar3 = strcmp(local_128,local_148);
        if (iVar3 != 0) {
          return 0;
        }
        uVar10 = (param_3 + -1) - lVar2;
        if (uVar10 != 0 && lVar2 <= param_3 + -1) {
          *param_6 = uVar10;
          if (param_5 + 1U < uVar10) {
            return 0;
          }
          strncpy(param_4,param_2 + lVar5 + 4,uVar10);
          param_4[*param_6] = '\0';
        }
        return 1;
      }
    }
  }
  return 0;
}

