// addr:      7102b6db30
// offset:    0x2b6db30
// name:      FUN_7102b6db30
// mangled:   
// signature: undefined __cdecl FUN_7102b6db30(undefined1 * param_1, char * param_2)


void FUN_7102b6db30(undefined1 *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 uStack_fc;
  byte abStack_f8 [32];
  undefined4 uStack_d8;
  byte abStack_d4 [36];
  undefined4 local_b0;
  undefined1 local_ac [36];
  undefined4 local_88;
  undefined1 local_84 [36];
  
  if (param_2 != (char *)0x0) {
    pcVar6 = strchr(param_2,0x5f);
    if (pcVar6 == (char *)0x0) {
      sVar7 = strlen(param_2);
      pcVar6 = param_2 + sVar7;
      if (pcVar6 == (char *)0x0) goto LAB_7102b6dba4;
    }
    if ((((long)pcVar6 - (long)param_2 == 4) && (iVar5 = strncmp(param_2,"Land",4), iVar5 == 0)) &&
       (*pcVar6 != '\0')) {
      pcVar6 = pcVar6 + 1;
      pcVar8 = strchr(pcVar6,0x5f);
      if (pcVar8 == (char *)0x0) {
        sVar7 = strlen(pcVar6);
        pcVar8 = pcVar6 + sVar7;
      }
      if ((long)pcVar8 - (long)pcVar6 == 6) {
        iVar5 = strncmp(pcVar6,"Island",6);
        if (iVar5 == 0) {
          uVar14 = 0;
          cVar1 = *pcVar8;
        }
        else {
          iVar5 = strncmp(pcVar6,"Ground",6);
          if (iVar5 != 0) goto LAB_7102b6dba4;
          uVar14 = 1;
          cVar1 = *pcVar8;
        }
        if (cVar1 != '\0') {
          pcVar6 = pcVar8 + 1;
          pcVar9 = strchr(pcVar6,0x5f);
          if (pcVar9 == (char *)0x0) {
            sVar7 = strlen(pcVar6);
            pcVar9 = pcVar6 + sVar7;
          }
          if ((((long)pcVar9 - (long)pcVar6 == 2) && (bVar2 = pcVar8[1], bVar2 - 0x30 < 10)) &&
             ((bVar3 = pcVar8[2], bVar3 - 0x30 < 10 && (*pcVar9 != '\0')))) {
            pbVar11 = (byte *)(pcVar9 + 1);
            pbVar10 = (byte *)strchr((char *)pbVar11,0x5f);
            if (pbVar10 == (byte *)0x0) {
              sVar7 = strlen((char *)pbVar11);
              pbVar10 = pbVar11 + sVar7;
            }
            if (((long)pbVar10 - (long)pbVar11 == 1) && (bVar4 = *pbVar11, bVar4 - 0x41 < 3)) {
              local_88 = 0;
              local_84[0] = 0;
              if (*pbVar10 != 0) {
                pbVar10 = pbVar10 + 1;
                pbVar11 = (byte *)strchr((char *)pbVar10,0x5f);
                if (pbVar11 == (byte *)0x0) {
                  sVar7 = strlen((char *)pbVar10);
                  pbVar11 = pbVar10 + sVar7;
                }
                if ((long)pbVar11 - (long)pbVar10 != 0) {
                  uVar12 = (uint)((long)pbVar11 - (long)pbVar10);
                  if (0x1e < uVar12) {
                    uVar12 = 0x1f;
                  }
                  if ((int)uVar12 < 1) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = 0;
                    do {
                      if (pbVar10[uVar13] == 0) break;
                      *(byte *)(((ulong)&local_88 | 4) + uVar13) = pbVar10[uVar13];
                      uVar13 = uVar13 + 1;
                    } while ((uint)uVar13 < uVar12);
                  }
                  local_84[uVar13 & 0xffffffff] = 0;
                  local_88 = (undefined4)uVar13;
                  local_b0 = 0;
                  local_ac[0] = 0;
                  if (*pbVar11 != 0) {
                    pbVar11 = pbVar11 + 1;
                    pbVar10 = (byte *)strchr((char *)pbVar11,0x5f);
                    if (pbVar10 == (byte *)0x0) {
                      sVar7 = strlen((char *)pbVar11);
                      pbVar10 = pbVar11 + sVar7;
                    }
                    uVar12 = (int)pbVar10 - (int)pbVar11;
                    if (0x1e < uVar12) {
                      uVar12 = 0x1f;
                    }
                    if ((int)uVar12 < 1) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = 0;
                      do {
                        if (pbVar11[uVar13] == 0) break;
                        *(byte *)(((ulong)&local_b0 | 4) + uVar13) = pbVar11[uVar13];
                        uVar13 = uVar13 + 1;
                      } while ((uint)uVar13 < uVar12);
                    }
                    local_ac[uVar13 & 0xffffffff] = 0;
                    local_b0 = (undefined4)uVar13;
                  }
                  FUN_7102b5ee80(&uStack_fc,(byte *)((ulong)&local_88 | 4));
                  FUN_7102b5ee80(&uStack_d8,(byte *)((ulong)&local_b0 | 4));
                  *param_1 = 0;
                  *(uint *)(param_1 + 0xc) = (uint)bVar3 + (uint)bVar2 * 10 + -0x210;
                  *(ulong *)(param_1 + 4) = CONCAT44(bVar4 - 0x41,uVar14) & 0xffffffffff;
                  FUN_7102b5ee80((undefined4 *)(param_1 + 0x10),abStack_f8);
                  FUN_7102b5ee80((undefined4 *)(param_1 + 0x34),abStack_d4);
                  *param_1 = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_7102b6dba4:
  *param_1 = 0;
  return;
}

