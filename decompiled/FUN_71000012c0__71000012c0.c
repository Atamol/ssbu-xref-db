// addr:      71000012c0
// offset:    0x12c0
// name:      FUN_71000012c0
// mangled:   
// signature: long * __cdecl FUN_71000012c0(long param_1, long * param_2, ulong param_3, byte * param_4, byte * param_5, char * param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

long * FUN_71000012c0(long param_1,long *param_2,ulong param_3,byte *param_4,byte *param_5,
                     char *param_6,undefined8 param_7,undefined8 param_8)

{
  byte *__s;
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  byte *__s_00;
  byte *pbVar9;
  size_t sVar10;
  size_t sVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  void *__dest;
  byte *pbVar16;
  byte *pbVar17;
  byte bVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  byte *pbVar23;
  ulong local_470 [128];
  uint auStack_70 [4];
  
  pbVar16 = param_5;
  pcVar19 = param_6;
  lVar7 = FUN_7100027620((long *)0x0);
  plVar8 = (long *)FUN_71000272d0();
  if (plVar8 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((param_3 & 1) != 0) {
    __s_00 = (byte *)FUN_7100027290();
    if (__s_00 != (byte *)0x0) {
      pbVar9 = (byte *)strchr((char *)param_4,0x3b);
      bVar2 = *param_4;
      if (bVar2 != 9) goto LAB_710000135c;
      do {
        do {
          param_4 = param_4 + 1;
          bVar2 = *param_4;
        } while (bVar2 == 9);
LAB_710000135c:
      } while (bVar2 == 0x20);
      bVar5 = false;
LAB_7100001368:
      *__s_00 = 0;
      local_470[0] = local_470[0] & 0xffffffffffffff00;
      pbVar17 = __s_00;
      iVar6 = sscanf((char *)param_4,"%1023[^;\r\n=] =%4999[^;\r\n]",local_470);
      if (0 < iVar6) {
        sVar10 = strlen((char *)__s_00);
        sVar11 = strlen((char *)local_470);
        bVar2 = param_4[sVar11];
        if ((sVar11 != 0) && ((bVar18 = (param_4 + sVar11)[-1], bVar18 == 0x20 || (bVar18 == 9)))) {
          do {
            if (bVar18 == 0x20) {
              if (sVar11 == 0) goto LAB_7100001424;
            }
            else if (((bVar18 == 0) || (sVar11 == 0)) || (bVar18 != 9)) goto LAB_7100001424;
            bVar18 = param_4[sVar11 - 2];
            sVar11 = sVar11 - 1;
          } while( true );
        }
        goto joined_r0x00710000142c;
      }
      goto joined_r0x007100001720;
    }
    goto LAB_7100001ef8;
  }
  local_470[0] = 0;
  iVar6 = strncmp((char *)param_4,"#HttpOnly_",10);
  if (iVar6 == 0) {
    param_4 = param_4 + 10;
    *(undefined1 *)((long)plVar8 + 0x5a) = 1;
    bVar2 = *param_4;
  }
  else {
    bVar2 = *param_4;
  }
  if (bVar2 == 0x23) goto LAB_7100001ef8;
  pcVar19 = strchr((char *)param_4,0xd);
  if (pcVar19 != (char *)0x0) {
    *pcVar19 = '\0';
  }
  pcVar19 = strchr((char *)param_4,10);
  if (pcVar19 != (char *)0x0) {
    *pcVar19 = '\0';
  }
  pbVar16 = FUN_71000176a0(param_4,"\t",(long *)local_470);
  if (pbVar16 != (byte *)0x0) {
    iVar6 = 0;
    bVar5 = false;
    do {
      switch(iVar6) {
      case 0:
        lVar7 = FUN_71000272c0();
        iVar6 = 0;
        plVar8[5] = lVar7;
        bVar5 = (bool)(bVar5 | lVar7 == 0);
        break;
      case 1:
        bVar4 = FUN_7100017280(pbVar16,&DAT_7104307340);
        *(bool *)(plVar8 + 8) = bVar4;
        iVar6 = 1;
        break;
      case 2:
        iVar6 = strcmp("TRUE",(char *)pbVar16);
        if ((iVar6 == 0) || (iVar6 = strcmp("FALSE",(char *)pbVar16), iVar6 == 0)) {
          lVar7 = FUN_71000272c0();
          plVar8[3] = lVar7;
          lVar12 = FUN_71000272c0();
          bVar5 = (bool)(bVar5 | lVar7 == 0 | lVar12 == 0);
          plVar8[4] = lVar12;
          goto switchD_71000019b0_caseD_3;
        }
        lVar7 = FUN_71000272c0();
        plVar8[3] = lVar7;
        if (lVar7 == 0) {
          iVar6 = 2;
          bVar5 = true;
        }
        else {
          pcVar19 = (char *)FUN_71000272c0();
          if (pcVar19 != (char *)0x0) {
            sVar10 = strlen(pcVar19);
            if (*pcVar19 == '\"') {
              memmove(pcVar19,pcVar19 + 1,sVar10);
              sVar10 = sVar10 - 1;
            }
            if ((sVar10 != 0) && (sVar11 = sVar10 - 1, pcVar19[sVar11] == '\"')) {
              pcVar19[sVar11] = '\0';
              sVar10 = sVar11;
            }
            if (*pcVar19 == '/') {
              if ((sVar10 != 0) && (pcVar19[sVar10 - 1] == '/')) {
                pcVar19[sVar10 - 1] = '\0';
              }
            }
            else {
              FUN_71000272a0();
              pcVar19 = (char *)FUN_71000272c0();
            }
          }
          plVar8[4] = (long)pcVar19;
          iVar6 = 2;
          bVar5 = (bool)(bVar5 | pcVar19 == (char *)0x0);
        }
        break;
      case 3:
switchD_71000019b0_caseD_3:
        bVar4 = FUN_7100017280(pbVar16,&DAT_7104307340);
        *(bool *)(plVar8 + 0xb) = bVar4;
        iVar6 = 3;
        break;
      case 4:
        lVar7 = FUN_71039c00b0(pbVar16,0,10);
        plVar8[6] = lVar7;
        iVar6 = 4;
        break;
      case 5:
        lVar7 = FUN_71000272c0();
        plVar8[1] = lVar7;
        iVar6 = 5;
        bVar5 = (bool)(bVar5 | lVar7 == 0);
        break;
      case 6:
        lVar7 = FUN_71000272c0();
        bVar5 = (bool)(bVar5 | lVar7 == 0);
        iVar6 = 6;
        plVar8[2] = lVar7;
      }
      pbVar16 = FUN_71000176a0((byte *)0x0,"\t",(long *)local_470);
      iVar6 = iVar6 + 1;
    } while ((pbVar16 != (byte *)0x0) && (!bVar5));
    if (iVar6 == 6) {
      lVar7 = FUN_71000272c0();
      bVar5 = (bool)(bVar5 | lVar7 == 0);
      iVar6 = 6;
      if (lVar7 != 0) {
        iVar6 = 7;
      }
      plVar8[2] = lVar7;
    }
    if ((bVar5) || (iVar6 != 7)) goto LAB_7100001eb8;
    cVar3 = (char)param_2[2];
    goto joined_r0x007100001bb8;
  }
  goto LAB_7100001eb8;
LAB_7100001424:
  *(undefined1 *)((long)local_470 + sVar11) = 0;
joined_r0x00710000142c:
  for (; sVar10 != 0; sVar10 = sVar10 - 1) {
    if (__s_00[sVar10 - 1] != 0x20 && __s_00[sVar10 - 1] != 9) {
      bVar4 = true;
      goto LAB_7100001438;
    }
    __s_00[sVar10 - 1] = 0;
  }
  bVar4 = false;
LAB_7100001438:
  pbVar23 = __s_00;
  if (*__s_00 == 0x20 || *__s_00 == 9) {
    do {
      pbVar23 = pbVar23 + 1;
    } while (*pbVar23 == 0x20 || *pbVar23 == 9);
  }
  if ((plVar8[1] == 0) && (bVar2 == 0x3d)) {
    lVar12 = FUN_71000272c0();
    plVar8[1] = lVar12;
    lVar12 = FUN_71000272c0();
    plVar8[2] = lVar12;
    if ((lVar12 == 0) || (plVar8[1] == 0)) goto LAB_7100001e60;
  }
  else if (!bVar4) {
    bVar4 = FUN_7100017280((byte *)"secure",(byte *)local_470);
    if (bVar4) {
      *(undefined1 *)(plVar8 + 0xb) = 1;
      goto joined_r0x007100001720;
    }
    bVar4 = FUN_7100017280((byte *)"httponly",(byte *)local_470);
    if (bVar4) {
      *(undefined1 *)((long)plVar8 + 0x5a) = 1;
      goto joined_r0x007100001720;
    }
    if (bVar2 != 0x3d) goto joined_r0x007100001720;
  }
  bVar4 = FUN_7100017280(&DAT_7104421148,(byte *)local_470);
  if (bVar4) {
    FUN_71000272a0();
    lVar12 = FUN_71000272c0();
    plVar8[3] = lVar12;
    if (lVar12 == 0) goto LAB_7100001e60;
    pcVar13 = (char *)FUN_71000272c0();
    if (pcVar13 == (char *)0x0) {
      plVar8[4] = 0;
      goto LAB_7100001e60;
    }
    sVar10 = strlen(pcVar13);
    if (*pcVar13 == '\"') {
      memmove(pcVar13,pcVar13 + 1,sVar10);
      sVar10 = sVar10 - 1;
    }
    if ((sVar10 != 0) && (sVar11 = sVar10 - 1, pcVar13[sVar11] == '\"')) {
      pcVar13[sVar11] = '\0';
      sVar10 = sVar11;
    }
    if (*pcVar13 == '/') {
      if ((sVar10 != 0) && (pcVar13[sVar10 - 1] == '/')) {
        pcVar13[sVar10 - 1] = '\0';
      }
      plVar8[4] = (long)pcVar13;
      goto joined_r0x007100001720;
    }
    FUN_71000272a0();
    lVar12 = FUN_71000272c0();
    plVar8[4] = lVar12;
  }
  else {
    bVar4 = FUN_7100017280((byte *)"domain",(byte *)local_470);
    if (bVar4) {
      __s = pbVar23 + 1;
      if (*pbVar23 != 0x2e) {
        __s = pbVar23;
      }
      pcVar13 = strchr((char *)__s,0x2e);
      pbVar23 = param_5;
      if (pcVar13 == (char *)0x0) {
        bVar4 = FUN_7100017280((byte *)"localhost",__s);
        pbVar23 = &DAT_71044425b1;
        if (bVar4) {
          pbVar23 = param_5;
        }
      }
      pbVar1 = pbVar23;
      if (pbVar23 == (byte *)0x0) {
        pbVar1 = __s;
      }
      uVar14 = FUN_7100006690(2,pbVar1,auStack_70);
      param_5 = pbVar23;
      if (pbVar23 == (byte *)0x0) {
LAB_7100001634:
        FUN_71000272a0();
        lVar12 = FUN_71000272c0();
        plVar8[5] = lVar12;
        if (((int)uVar14 == 0) && (lVar12 != 0)) {
          *(undefined1 *)(plVar8 + 8) = 1;
        }
        else {
          if (lVar12 == 0) {
            bVar5 = true;
            pcVar19 = (char *)plVar8[10];
            goto joined_r0x007100002010;
          }
          bVar5 = (bool)(bVar5 | lVar12 == 0);
        }
      }
      else {
        if ((int)uVar14 == 0) {
          sVar10 = strlen((char *)__s);
          sVar11 = strlen((char *)pbVar23);
          if (sVar10 <= sVar11) {
            bVar4 = FUN_7100017280(__s,pbVar23 + (sVar11 - sVar10));
            if ((bVar4) && ((sVar11 == sVar10 || ((pbVar23 + (sVar11 - sVar10))[-1] == 0x2e))))
            goto LAB_7100001634;
          }
        }
        else {
          iVar6 = strcmp((char *)__s,(char *)pbVar23);
          if (iVar6 == 0) goto LAB_7100001634;
        }
        FUN_7100015de0(param_1,(byte *)"skipped cookie with bad tailmatch domain: %s\n",__s,pbVar17,
                       pbVar16,pcVar19,param_7,param_8);
        bVar5 = true;
      }
      goto joined_r0x007100001720;
    }
    bVar4 = FUN_7100017280((byte *)"version",(byte *)local_470);
    if (bVar4) {
      FUN_71000272a0();
      lVar12 = FUN_71000272c0();
      plVar8[9] = lVar12;
    }
    else {
      bVar4 = FUN_7100017280((byte *)"max-age",(byte *)local_470);
      if (bVar4) {
        FUN_71000272a0();
        lVar12 = FUN_71000272c0();
        plVar8[10] = lVar12;
        if (lVar12 == 0) {
          bVar5 = true;
          pbVar16 = (byte *)plVar8[7];
          goto joined_r0x00710000202c;
        }
        goto joined_r0x007100001720;
      }
      bVar4 = FUN_7100017280((byte *)"expires",(byte *)local_470);
      if (!bVar4) goto joined_r0x007100001720;
      FUN_71000272a0();
      lVar12 = FUN_71000272c0();
      plVar8[7] = lVar12;
    }
  }
  if (lVar12 == 0) {
LAB_7100001e60:
    bVar5 = true;
    pcVar19 = (char *)plVar8[10];
    goto joined_r0x007100002010;
  }
joined_r0x007100001720:
  if ((pbVar9 == (byte *)0x0) || (*pbVar9 == 0)) goto LAB_710000180c;
  param_4 = pbVar9 + 1;
  bVar2 = *param_4;
  if (bVar2 == 0x20 || bVar2 == 9) {
    do {
      param_4 = param_4 + 1;
      bVar2 = *param_4;
    } while (bVar2 == 0x20 || bVar2 == 9);
  }
  pbVar9 = (byte *)strchr((char *)param_4,0x3b);
  if (pbVar9 == (byte *)0x0) {
    if (bVar2 == 0) goto LAB_710000180c;
    sVar10 = strlen((char *)param_4);
    pbVar9 = param_4 + sVar10;
  }
  if (pbVar9 == (byte *)0x0) goto LAB_710000180c;
  goto LAB_7100001368;
LAB_710000180c:
  pcVar19 = (char *)plVar8[10];
joined_r0x007100002010:
  if (pcVar19 == (char *)0x0) {
    pbVar16 = (byte *)plVar8[7];
joined_r0x00710000202c:
    if (pbVar16 != (byte *)0x0) {
      lVar7 = FUN_7100013750(pbVar16);
      plVar8[6] = lVar7;
      if (lVar7 == 0) {
        plVar8[6] = 1;
      }
      else if (lVar7 < 0) {
        plVar8[6] = 0;
      }
    }
  }
  else {
    pcVar13 = pcVar19 + 1;
    if (*pcVar19 != '\"') {
      pcVar13 = pcVar19;
    }
    lVar15 = FUN_71039c00b0(pcVar13,0,10);
    lVar12 = 0x7fffffffffffffff;
    plVar8[6] = lVar15;
    if (lVar15 <= 0x7fffffffffffffff - lVar7) {
      lVar12 = lVar15 + lVar7;
    }
    plVar8[6] = lVar12;
  }
  if (bVar5) goto LAB_7100001eb0;
  if ((param_5 != (byte *)0x0) && (plVar8[5] == 0)) {
    lVar7 = FUN_71000272c0();
    plVar8[5] = lVar7;
    if (lVar7 == 0) goto LAB_7100001eb0;
  }
  if ((param_6 == (char *)0x0) || (plVar8[3] != 0)) {
LAB_7100001c78:
    FUN_71000272a0();
  }
  else {
    pcVar19 = strchr(param_6,0x3f);
    if (pcVar19 == (char *)0x0) {
      pcVar19 = strrchr(param_6,0x2f);
      if (pcVar19 != (char *)0x0) goto LAB_7100001bd0;
      goto LAB_7100001c78;
    }
    pcVar19 = FUN_7100002ac0(param_6,'/',(long)pcVar19 - (long)param_6);
    if (pcVar19 == (char *)0x0) goto LAB_7100001c78;
LAB_7100001bd0:
    __dest = (void *)FUN_7100027290();
    plVar8[3] = (long)__dest;
    if (__dest == (void *)0x0) {
LAB_7100001eb0:
      FUN_71000272a0();
      goto LAB_7100001eb8;
    }
    memcpy(__dest,param_6,(size_t)(pcVar19 + (1 - (long)param_6)));
    (pcVar19 + (1 - (long)param_6))[plVar8[3]] = '\0';
    pcVar19 = (char *)FUN_71000272c0();
    if (pcVar19 == (char *)0x0) {
      plVar8[4] = 0;
      goto LAB_7100001eb0;
    }
    sVar10 = strlen(pcVar19);
    if (*pcVar19 == '\"') {
      memmove(pcVar19,pcVar19 + 1,sVar10);
      sVar10 = sVar10 - 1;
    }
    if ((sVar10 != 0) && (sVar11 = sVar10 - 1, pcVar19[sVar11] == '\"')) {
      pcVar19[sVar11] = '\0';
      sVar10 = sVar11;
    }
    if (*pcVar19 == '/') {
      if ((sVar10 != 0) && (pcVar19[sVar10 - 1] == '/')) {
        pcVar19[sVar10 - 1] = '\0';
      }
      plVar8[4] = (long)pcVar19;
      goto LAB_7100001c78;
    }
    FUN_71000272a0();
    lVar7 = FUN_71000272c0();
    plVar8[4] = lVar7;
    FUN_71000272a0();
    if (lVar7 == 0) goto LAB_7100001eb8;
  }
  if (plVar8[1] != 0) {
    cVar3 = (char)param_2[2];
joined_r0x007100001bb8:
    if (((cVar3 != '\0') || ((char)param_2[4] == '\0')) || (plVar8[6] != 0)) {
      *(char *)((long)plVar8 + 0x59) = cVar3;
      lVar7 = FUN_7100027620((long *)0x0);
      if ((long *)*param_2 == (long *)0x0) {
        plVar22 = (long *)0x0;
        cVar3 = (char)param_2[2];
        bVar5 = false;
      }
      else {
        plVar22 = (long *)*param_2;
        plVar20 = (long *)0x0;
        do {
          while (plVar21 = plVar22, plVar22 = (long *)*plVar21,
                plVar21[6] == 0 || lVar7 <= plVar21[6]) {
            plVar20 = plVar21;
            if (plVar22 == (long *)0x0) goto LAB_7100001d40;
          }
          if (plVar21 == (long *)*param_2) {
            *param_2 = (long)plVar22;
          }
          else {
            *plVar20 = (long)plVar22;
          }
          param_2[3] = param_2[3] + -1;
          FUN_71000272a0();
          FUN_71000272a0();
          FUN_71000272a0();
          FUN_71000272a0();
          FUN_71000272a0();
          FUN_71000272a0();
          FUN_71000272a0();
          FUN_71000272a0();
          FUN_71000272a0();
        } while (plVar22 != (long *)0x0);
LAB_7100001d40:
        plVar22 = (long *)*param_2;
        if ((long *)*param_2 == (long *)0x0) {
          plVar20 = (long *)0x0;
          cVar3 = (char)param_2[2];
        }
        else {
          do {
            plVar20 = plVar22;
            bVar5 = FUN_7100017280((byte *)plVar20[1],(byte *)plVar8[1]);
            if (bVar5) {
              pbVar16 = (byte *)plVar8[5];
              if ((byte *)plVar20[5] == (byte *)0x0) {
                if (pbVar16 == (byte *)0x0) goto LAB_7100001d84;
              }
              else if (((pbVar16 != (byte *)0x0) &&
                       (bVar5 = FUN_7100017280((byte *)plVar20[5],pbVar16), bVar5)) &&
                      ((char)plVar20[8] == (char)plVar8[8])) {
LAB_7100001d84:
                pbVar16 = (byte *)plVar8[4];
                if ((byte *)plVar20[4] == (byte *)0x0) {
                  if (pbVar16 == (byte *)0x0) goto LAB_7100001f54;
                }
                else if ((pbVar16 != (byte *)0x0) &&
                        (bVar5 = FUN_7100017280((byte *)plVar20[4],pbVar16), bVar5)) {
LAB_7100001f54:
                  if ((*(char *)((long)plVar8 + 0x59) != '\0') ||
                     (*(char *)((long)plVar20 + 0x59) == '\0')) {
                    *plVar8 = *plVar20;
                    FUN_71000272a0();
                    FUN_71000272a0();
                    FUN_71000272a0();
                    FUN_71000272a0();
                    FUN_71000272a0();
                    FUN_71000272a0();
                    FUN_71000272a0();
                    FUN_71000272a0();
                    lVar7 = *plVar8;
                    lVar12 = plVar8[1];
                    lVar15 = plVar8[3];
                    plVar20[2] = plVar8[2];
                    plVar20[3] = lVar15;
                    *plVar20 = lVar7;
                    plVar20[1] = lVar12;
                    lVar7 = plVar8[4];
                    lVar12 = plVar8[5];
                    lVar15 = plVar8[7];
                    plVar20[6] = plVar8[6];
                    plVar20[7] = lVar15;
                    plVar20[4] = lVar7;
                    plVar20[5] = lVar12;
                    lVar7 = plVar8[8];
                    lVar12 = plVar8[9];
                    lVar15 = plVar8[0xb];
                    plVar20[10] = plVar8[10];
                    plVar20[0xb] = lVar15;
                    plVar20[8] = lVar7;
                    plVar20[9] = lVar12;
                    FUN_71000272a0();
                    plVar8 = plVar20;
                    do {
                      plVar22 = plVar8;
                      plVar8 = (long *)*plVar22;
                    } while ((long *)*plVar22 != (long *)0x0);
                    bVar5 = true;
                    cVar3 = (char)param_2[2];
                    plVar8 = plVar20;
                    goto joined_r0x007100001dc4;
                  }
                  goto LAB_7100001eb8;
                }
              }
            }
            plVar22 = (long *)*plVar20;
          } while ((long *)*plVar20 != (long *)0x0);
          cVar3 = (char)param_2[2];
        }
        bVar5 = false;
        plVar22 = plVar20;
      }
joined_r0x007100001dc4:
      if (cVar3 != '\0') {
        pcVar19 = "Replaced";
        if (!bVar5) {
          pcVar19 = "Added";
        }
        FUN_7100015de0(param_1,(byte *)"%s cookie %s=\"%s\" for domain %s, path %s, expire %ld\n",
                       pcVar19,plVar8[1],plVar8[2],plVar8[5],plVar8[3],plVar8[6]);
      }
      if (!bVar5) {
        plVar20 = param_2;
        if (plVar22 != (long *)0x0) {
          plVar20 = plVar22;
        }
        *plVar20 = (long)plVar8;
        param_2[3] = param_2[3] + 1;
        return plVar8;
      }
      return plVar8;
    }
  }
LAB_7100001eb8:
  FUN_71000272a0();
  FUN_71000272a0();
  FUN_71000272a0();
  FUN_71000272a0();
  FUN_71000272a0();
  FUN_71000272a0();
  FUN_71000272a0();
  FUN_71000272a0();
LAB_7100001ef8:
  FUN_71000272a0();
  return (long *)0x0;
}

