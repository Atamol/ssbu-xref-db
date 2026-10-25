// addr:      7100018bc0
// offset:    0x18bc0
// name:      FUN_7100018bc0
// mangled:   
// signature: undefined8 __cdecl FUN_7100018bc0(long param_1, byte * param_2, int param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7100018bc0(long param_1,byte *param_2,int param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  size_t sVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  uint uVar17;
  byte bVar18;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [16];
  
  if (param_3 == 3) {
    bVar5 = true;
    if ((*(long *)(param_1 + 0x2d0) != -1) &&
       (*(long *)(param_1 + 0x2d0) <= *(long *)(param_1 + 0x2c8))) {
      param_3 = 1;
      goto LAB_7100018c78;
    }
    *(undefined1 *)(param_1 + 0x4bb0) = 1;
    *(long *)(param_1 + 0x2c8) = *(long *)(param_1 + 0x2c8) + 1;
    if (*(char *)(param_1 + 0x6bf) == '\0') {
LAB_7100018c74:
      bVar5 = false;
      param_3 = 3;
      goto LAB_7100018c78;
    }
    if (*(char *)(param_1 + 0x9b0) != '\0') {
      FUN_71000272a0();
      *(undefined8 *)(param_1 + 0x9a8) = 0;
      *(undefined1 *)(param_1 + 0x9b0) = 0;
    }
    lVar7 = FUN_71000272c0();
    *(long *)(param_1 + 0x9a8) = lVar7;
    if (lVar7 != 0) {
      *(undefined1 *)(param_1 + 0x9b0) = 1;
      goto LAB_7100018c74;
    }
LAB_7100018fb8:
    uVar15 = 0x1b;
  }
  else {
    bVar5 = false;
LAB_7100018c78:
    puVar16 = auStack_74;
    iVar6 = sscanf((char *)param_2,"%15[^?&/:]://%c",auStack_70);
    if (iVar6 == 2) {
      pcVar8 = strstr((char *)param_2,"//");
      pbVar10 = param_2;
      if (pcVar8 != (char *)0x0) {
        pbVar10 = (byte *)(pcVar8 + 2);
      }
      pbVar9 = (byte *)strchr((char *)pbVar10,0x3f);
      pbVar10 = (byte *)strchr((char *)pbVar10,0x2f);
      if (pbVar10 == (byte *)0x0) {
        sVar12 = strlen((char *)param_2);
        pbVar10 = param_2 + sVar12;
        if (pbVar9 == (byte *)0x0) goto LAB_7100018e30;
LAB_7100018cdc:
        bVar18 = *param_2;
        if (pbVar9 <= pbVar10) {
          pbVar10 = pbVar9;
        }
      }
      else {
        if (pbVar9 != (byte *)0x0) goto LAB_7100018cdc;
LAB_7100018e30:
        sVar12 = strlen((char *)param_2);
        bVar18 = *param_2;
        if (param_2 + sVar12 <= pbVar10) {
          pbVar10 = param_2 + sVar12;
        }
      }
      if (bVar18 != 0) {
        bVar3 = true;
        pbVar9 = param_2;
        do {
          while (pbVar9 < pbVar10) {
LAB_7100018d24:
            pbVar9 = pbVar9 + 1;
            bVar18 = *pbVar9;
            if (bVar18 == 0) goto LAB_7100018e50;
          }
          if (bVar18 != 0x20) {
            if (bVar18 == 0x3f) {
              bVar3 = false;
            }
            goto LAB_7100018d24;
          }
          if (bVar3) {
            bVar18 = pbVar9[1];
          }
          else {
            bVar18 = pbVar9[1];
          }
          pbVar9 = pbVar9 + 1;
        } while (bVar18 != 0);
      }
LAB_7100018e50:
      pcVar11 = (char *)FUN_7100027290();
      if (pcVar11 == (char *)0x0) goto LAB_7100018fb8;
      pcVar8 = strstr((char *)param_2,"//");
      pbVar10 = param_2;
      if (pcVar8 != (char *)0x0) {
        pbVar10 = (byte *)(pcVar8 + 2);
      }
      pbVar9 = (byte *)strchr((char *)pbVar10,0x3f);
      pbVar10 = (byte *)strchr((char *)pbVar10,0x2f);
      if (pbVar10 == (byte *)0x0) {
        sVar12 = strlen((char *)param_2);
        pbVar10 = param_2 + sVar12;
      }
      if (pbVar9 == (byte *)0x0) {
        sVar12 = strlen((char *)param_2);
        pbVar9 = param_2 + sVar12;
      }
      uVar17 = (uint)*param_2;
      if (pbVar9 <= pbVar10) {
        pbVar10 = pbVar9;
      }
      pcVar8 = pcVar11;
      if (*param_2 != 0) {
        bVar3 = true;
        pcVar14 = pcVar11;
        do {
          while (cVar2 = (char)uVar17, param_2 < pbVar10) {
            pcVar8 = pcVar14 + 1;
            *pcVar14 = cVar2;
            param_2 = param_2 + 1;
            uVar17 = (uint)*param_2;
            pcVar14 = pcVar8;
            if (*param_2 == 0) goto LAB_7100018f80;
          }
          if (uVar17 == 0x20) {
            if (bVar3) {
              pcVar14[0] = '%';
              pcVar14[1] = '2';
              pcVar14[2] = '0';
              bVar3 = true;
              bVar18 = param_2[1];
joined_r0x007100018f28:
              pcVar8 = pcVar14 + 3;
            }
            else {
              bVar3 = false;
              pcVar8 = pcVar14 + 1;
              *pcVar14 = '+';
              bVar18 = param_2[1];
            }
          }
          else {
            if (uVar17 == 0x3f) {
              bVar3 = false;
              *pcVar14 = '?';
              bVar18 = param_2[1];
            }
            else {
              if (cVar2 < '\0') {
                puVar16 = (undefined1 *)(ulong)uVar17;
                FUN_7100007ef0(pcVar14,4,"%%%02x",puVar16,param_5,param_6,param_7,param_8);
                bVar18 = param_2[1];
                goto joined_r0x007100018f28;
              }
              *pcVar14 = cVar2;
              bVar18 = param_2[1];
            }
            pcVar8 = pcVar14 + 1;
          }
          uVar17 = (uint)bVar18;
          param_2 = param_2 + 1;
          pcVar14 = pcVar8;
        } while (uVar17 != 0);
      }
LAB_7100018f80:
      bVar3 = true;
      *pcVar8 = '\0';
      if (param_3 != 1) goto LAB_71000193a0;
LAB_7100018f94:
      *(char **)(param_1 + 0x5090) = pcVar11;
      if (bVar5) {
        FUN_7100016040(param_1,(byte *)"Maximum (%ld) redirects followed",
                       *(undefined8 *)(param_1 + 0x2d0),puVar16,param_5,param_6,param_7,param_8);
        return 0x2f;
      }
    }
    else {
      pcVar8 = (char *)FUN_71000272c0();
      if (pcVar8 == (char *)0x0) goto LAB_7100018fb8;
      pcVar11 = strstr(pcVar8,"//");
      bVar18 = *param_2;
      pcVar14 = pcVar8;
      if (pcVar11 != (char *)0x0) {
        pcVar14 = pcVar11 + 2;
      }
      if (bVar18 == 0x2f) {
        if (param_2[1] == 0x2f) {
          param_2 = param_2 + 2;
          *pcVar14 = '\0';
          pcVar11 = strstr((char *)param_2,"//");
          pbVar10 = param_2;
          if (pcVar11 != (char *)0x0) {
            pbVar10 = (byte *)(pcVar11 + 2);
          }
          pbVar9 = (byte *)strchr((char *)pbVar10,0x3f);
          pbVar10 = (byte *)strchr((char *)pbVar10,0x2f);
          if (pbVar10 == (byte *)0x0) {
            sVar12 = strlen((char *)param_2);
            pbVar10 = param_2 + sVar12;
          }
          if (pbVar9 == (byte *)0x0) {
            sVar12 = strlen((char *)param_2);
            pbVar9 = param_2 + sVar12;
          }
          bVar3 = false;
          if (pbVar9 <= pbVar10) {
            pbVar10 = pbVar9;
          }
          bVar18 = *param_2;
        }
        else {
          pcVar13 = strchr(pcVar14,0x2f);
          pcVar11 = strchr(pcVar14,0x3f);
          if (pcVar13 == (char *)0x0) {
            if (pcVar11 != (char *)0x0) {
              *pcVar11 = '\0';
            }
            goto LAB_710001915c;
          }
          if (pcVar11 == (char *)0x0 || pcVar13 <= pcVar11) {
            pcVar11 = pcVar13;
          }
          *pcVar11 = '\0';
          bVar18 = *param_2;
joined_r0x007100019134:
          bVar3 = true;
          pbVar10 = param_2;
        }
      }
      else {
        pcVar11 = strchr(pcVar14,0x3f);
        if (pcVar11 != (char *)0x0) {
          *pcVar11 = '\0';
          bVar18 = *param_2;
        }
        if ((bVar18 != 0x3f) && (pcVar11 = strrchr(pcVar14,0x2f), pcVar11 != (char *)0x0)) {
          *pcVar11 = '\0';
          bVar18 = *param_2;
        }
        pcVar11 = strchr(pcVar14,0x2f);
        pcVar14 = (char *)0x0;
        if (pcVar11 != (char *)0x0) {
          pcVar14 = pcVar11 + 1;
        }
        if (bVar18 == 0x2e) {
          pbVar10 = param_2 + 2;
          if (param_2[1] != 0x2f) {
            pbVar10 = param_2;
          }
          if (param_2[(ulong)(param_2[1] == 0x2f) * 2] == 0x2e) {
            iVar6 = 0;
            do {
              param_2 = pbVar10;
              if ((pbVar10[1] != 0x2e) || (pbVar10[2] != 0x2f)) break;
              pbVar10 = pbVar10 + 3;
              iVar6 = iVar6 + 1;
              param_2 = pbVar10;
            } while (*pbVar10 == 0x2e);
          }
          else {
            iVar6 = 0;
            param_2 = pbVar10;
          }
        }
        else {
          iVar6 = 0;
        }
        pbVar10 = param_2;
        if (pcVar11 == (char *)0x0) {
          pcVar14 = (char *)0x0;
          bVar3 = true;
          bVar18 = *param_2;
        }
        else {
          if (iVar6 == 0) {
            pcVar14 = pcVar11 + 1;
            bVar18 = *param_2;
            goto joined_r0x007100019134;
          }
          do {
            pcVar11 = strrchr(pcVar14,0x2f);
            if (pcVar11 == (char *)0x0) {
              *pcVar14 = '\0';
              bVar3 = true;
              bVar18 = *param_2;
              goto joined_r0x00710001914c;
            }
            iVar6 = iVar6 + -1;
            *pcVar11 = '\0';
          } while (iVar6 != 0);
LAB_710001915c:
          bVar3 = true;
          bVar18 = *param_2;
          pbVar10 = param_2;
        }
      }
joined_r0x00710001914c:
      if (bVar18 != 0) {
        bVar4 = true;
        pbVar9 = param_2;
        do {
          while (pbVar9 < pbVar10) {
            pbVar9 = pbVar9 + 1;
            bVar18 = *pbVar9;
            if (bVar18 == 0) goto LAB_71000191ec;
          }
          if (bVar18 == 0x20) {
            if (bVar4) {
              bVar4 = true;
              bVar18 = pbVar9[1];
            }
            else {
              bVar4 = false;
              bVar18 = pbVar9[1];
            }
          }
          else {
            if (bVar18 == 0x3f) {
              bVar4 = false;
            }
            bVar18 = pbVar9[1];
          }
          pbVar9 = pbVar9 + 1;
        } while (bVar18 != 0);
      }
LAB_71000191ec:
      sVar12 = strlen(pcVar8);
      pcVar11 = (char *)FUN_7100027290();
      if (pcVar11 == (char *)0x0) {
        FUN_71000272a0();
        return 0x1b;
      }
      memcpy(pcVar11,pcVar8,sVar12);
      bVar18 = *param_2;
      if (bVar18 != 0x2f) {
        if (pcVar14 == (char *)0x0) {
          if (bVar18 != 0x3f) goto LAB_7100019240;
        }
        else if ((bVar18 != 0x3f) && (*pcVar14 != '\0')) {
LAB_7100019240:
          pcVar11[sVar12] = '/';
          sVar12 = sVar12 + 1;
        }
      }
      pcVar8 = pcVar11 + sVar12;
      pbVar10 = param_2;
      if (!bVar3) {
        pcVar14 = strstr((char *)param_2,"//");
        if (pcVar14 != (char *)0x0) {
          pbVar10 = (byte *)(pcVar14 + 2);
        }
        pbVar9 = (byte *)strchr((char *)pbVar10,0x3f);
        pbVar10 = (byte *)strchr((char *)pbVar10,0x2f);
        if (pbVar10 == (byte *)0x0) {
          sVar12 = strlen((char *)param_2);
          pbVar10 = param_2 + sVar12;
        }
        if (pbVar9 == (byte *)0x0) {
          sVar12 = strlen((char *)param_2);
          pbVar9 = param_2 + sVar12;
        }
        if (pbVar9 <= pbVar10) {
          pbVar10 = pbVar9;
        }
      }
      uVar17 = (uint)*param_2;
      if (*param_2 != 0) {
        bVar3 = true;
        pcVar14 = pcVar8;
        do {
          while (cVar2 = (char)uVar17, param_2 < pbVar10) {
            pcVar8 = pcVar14 + 1;
            *pcVar14 = cVar2;
            param_2 = param_2 + 1;
            uVar17 = (uint)*param_2;
            pcVar14 = pcVar8;
            if (*param_2 == 0) goto LAB_7100019384;
          }
          if (uVar17 == 0x20) {
            if (bVar3) {
              pcVar14[0] = '%';
              pcVar14[1] = '2';
              pcVar14[2] = '0';
              bVar3 = true;
              bVar18 = param_2[1];
joined_r0x00710001932c:
              pcVar8 = pcVar14 + 3;
            }
            else {
              bVar3 = false;
              pcVar8 = pcVar14 + 1;
              *pcVar14 = '+';
              bVar18 = param_2[1];
            }
          }
          else {
            if (uVar17 == 0x3f) {
              bVar3 = false;
              *pcVar14 = '?';
              bVar18 = param_2[1];
            }
            else {
              if (cVar2 < '\0') {
                puVar16 = (undefined1 *)(ulong)uVar17;
                FUN_7100007ef0(pcVar14,4,"%%%02x",puVar16,param_5,param_6,param_7,param_8);
                bVar18 = param_2[1];
                goto joined_r0x00710001932c;
              }
              *pcVar14 = cVar2;
              bVar18 = param_2[1];
            }
            pcVar8 = pcVar14 + 1;
          }
          uVar17 = (uint)bVar18;
          param_2 = param_2 + 1;
          pcVar14 = pcVar8;
        } while (uVar17 != 0);
      }
LAB_7100019384:
      *pcVar8 = '\0';
      FUN_71000272a0();
      bVar3 = false;
      if (param_3 == 1) goto LAB_7100018f94;
LAB_71000193a0:
      if (bVar3) {
        *(undefined1 *)(param_1 + 0x4c38) = 0;
      }
      if (*(char *)(param_1 + 0x9a0) != '\0') {
        FUN_71000272a0();
        *(undefined8 *)(param_1 + 0x998) = 0;
        *(undefined1 *)(param_1 + 0x9a0) = 0;
      }
      *(char **)(param_1 + 0x998) = pcVar11;
      *(undefined1 *)(param_1 + 0x9a0) = 1;
      FUN_7100015de0(param_1,(byte *)"Issue another request to this URL: \'%s\'\n",pcVar11,puVar16,
                     param_5,param_6,param_7,param_8);
      iVar6 = *(int *)(param_1 + 0x5040);
      if (iVar6 == 0x12f) {
        if ((*(int *)(param_1 + 0x480) != 1) && ((*(byte *)(param_1 + 0x2d8) >> 2 & 1) == 0)) {
          *(undefined4 *)(param_1 + 0x480) = 1;
          puVar1 = &DAT_710435a1a5;
          if (*(char *)(param_1 + 0x6c0) != '\0') {
            puVar1 = &DAT_710426ee8c;
          }
          FUN_7100015de0(param_1,(byte *)"Disables POST, goes with %s\n",puVar1,puVar16,param_5,
                         param_6,param_7,param_8);
        }
      }
      else if (iVar6 == 0x12e) {
        if ((*(uint *)(param_1 + 0x480) & 0xfffffffe) == 2) {
          bVar18 = *(byte *)(param_1 + 0x2d8) >> 1;
          goto joined_r0x007100019444;
        }
      }
      else if ((iVar6 == 0x12d) && ((*(uint *)(param_1 + 0x480) & 0xfffffffe) == 2)) {
        bVar18 = *(byte *)(param_1 + 0x2d8);
joined_r0x007100019444:
        if ((bVar18 & 1) == 0) {
          FUN_7100015de0(param_1,(byte *)"Switch from POST to GET\n",pcVar11,puVar16,param_5,param_6
                         ,param_7,param_8);
          *(undefined4 *)(param_1 + 0x480) = 1;
        }
      }
      FUN_7100015020(param_1,10);
      FUN_7100014f90(param_1);
    }
    uVar15 = 0;
  }
  return uVar15;
}

