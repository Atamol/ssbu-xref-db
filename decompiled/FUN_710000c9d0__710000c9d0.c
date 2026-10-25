// addr:      710000c9d0
// offset:    0xc9d0
// name:      FUN_710000c9d0
// mangled:   
// signature: undefined FUN_710000c9d0(void)


/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000c9d0(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                    ulong *param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  size_t __n;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  long *plVar14;
  void *pvVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  FILE *pFVar19;
  undefined *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 uVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  undefined8 *puVar35;
  size_t __n_00;
  byte *pbVar36;
  long *plVar37;
  long *plVar38;
  ulong uVar39;
  byte *__haystack;
  undefined *puVar40;
  undefined *puStack_a0;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar31 = *param_1;
  __haystack = *(byte **)(lVar31 + 0x4f80);
  uStack_70 = 0;
  uStack_78 = 0;
  pbVar36 = (byte *)param_1[0x1b];
  uVar7 = *(uint *)(lVar31 + 0x480);
  *param_2 = 1;
  if (0x13 < (int)param_1[0x46]) {
    return 1;
  }
  if ((int)param_1[0x170] == 3) {
    *(undefined4 *)(param_1 + 0x46) = 0x14;
    return 1;
  }
  pcVar18 = (char *)(lVar31 + 0x4bb0);
  plVar32 = *(long **)(lVar31 + 600);
  if (*pcVar18 == '\0') {
    FUN_71000272a0();
    lVar8 = FUN_71000272c0();
    *(long *)(lVar31 + 0x4bb8) = lVar8;
    if (lVar8 == 0) {
      return 0x1b;
    }
    *(int *)(lVar31 + 0x4bc0) = (int)param_1[0x33];
  }
  plVar25 = plVar32 + 5;
  *plVar25 = 0;
  plVar33 = plVar32 + 6;
  *plVar33 = 0;
  if (((*(byte *)(param_1[0x10b] + 0x80) & 7) != 0) && (*(char *)(lVar31 + 0x6c1) != '\0')) {
    uVar7 = 4;
  }
  puVar40 = *(undefined **)(lVar31 + 0x740);
  if (puVar40 == (undefined *)0x0) {
    if (*(char *)(lVar31 + 0x6c0) == '\0') {
      if (uVar7 - 2 < 5) {
        puVar40 = (&PTR_DAT_7104f171b0)[(int)(uVar7 - 2)];
        plVar34 = *(long **)(*param_1 + 0x408);
      }
      else {
        puVar40 = &DAT_710435a1a5;
        plVar34 = *(long **)(*param_1 + 0x408);
      }
    }
    else {
      puVar40 = &DAT_710426ee8c;
      plVar34 = *(long **)(*param_1 + 0x408);
    }
  }
  else {
    plVar34 = *(long **)(*param_1 + 0x408);
  }
  for (; plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
    bVar2 = FUN_71000173b0((byte *)*plVar34,(byte *)"User-Agent:",0xb);
    if (bVar2) {
      if (*plVar34 != 0) {
        FUN_71000272a0();
        param_1[0x110] = 0;
      }
      break;
    }
  }
  pFVar19 = (FILE *)0x0;
  pbVar16 = __haystack;
  uVar9 = FUN_710000ec90(param_1,puVar40,(char *)__haystack,0,param_5,param_6,param_7,param_8);
  if ((int)uVar9 != 0) {
    return uVar9 & 0xffffffff;
  }
  if (*(char *)(lVar31 + 0x4cd9) == '\0') {
    if (((uVar7 | 4) == 5) || (*(char *)(lVar31 + 0x4cf9) == '\0')) goto LAB_710000cba4;
LAB_710000cb9c:
    uVar29 = 1;
  }
  else {
    if ((uVar7 | 4) != 5) goto LAB_710000cb9c;
LAB_710000cba4:
    uVar29 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x822) = uVar29;
  FUN_71000272a0();
  param_1[0x114] = 0;
  if (*(long *)(lVar31 + 0x9a8) == 0) {
LAB_710000cbfc:
    param_1[0x114] = 0;
    lVar8 = *(long *)(lVar31 + 0x730);
  }
  else {
    for (plVar34 = *(long **)(*param_1 + 0x408); plVar34 != (long *)0x0;
        plVar34 = (long *)plVar34[1]) {
      pbVar16 = &DAT_00000008;
      bVar2 = FUN_71000173b0((byte *)*plVar34,(byte *)"Referer:",8);
      if (bVar2) {
        if (*plVar34 != 0) goto LAB_710000cbfc;
        break;
      }
    }
    lVar8 = FUN_7100007fd0((byte *)"Referer: %s\r\n");
    param_1[0x114] = lVar8;
    if (lVar8 == 0) {
      return 0x1b;
    }
    lVar8 = *(long *)(lVar31 + 0x730);
  }
  if (lVar8 == 0) {
LAB_710000cc84:
    puStack_a0 = (undefined *)0x0;
    plVar34 = *(long **)(*param_1 + 0x408);
  }
  else {
    for (plVar34 = *(long **)(*param_1 + 0x408); plVar34 != (long *)0x0;
        plVar34 = (long *)plVar34[1]) {
      pbVar16 = &DAT_00000007;
      bVar2 = FUN_71000173b0((byte *)*plVar34,(byte *)"Cookie:",7);
      if (bVar2) {
        if (*plVar34 != 0) goto LAB_710000cc84;
        break;
      }
    }
    puStack_a0 = *(undefined **)(lVar31 + 0x730);
    plVar34 = *(long **)(*param_1 + 0x408);
  }
  for (; plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
    pbVar16 = &DAT_00000010;
    bVar2 = FUN_71000173b0((byte *)*plVar34,(byte *)"Accept-Encoding:",0x10);
    if (bVar2) {
      if (*plVar34 != 0) goto LAB_710000cd0c;
      break;
    }
  }
  if (*(long *)(lVar31 + 0x758) == 0) {
LAB_710000cd0c:
    FUN_71000272a0();
    param_1[0x111] = 0;
  }
  else {
    FUN_71000272a0();
    param_1[0x111] = 0;
    lVar8 = FUN_7100007fd0((byte *)"Accept-Encoding: %s\r\n");
    param_1[0x111] = lVar8;
    if (lVar8 == 0) {
      return 0x1b;
    }
  }
  for (plVar34 = *(long **)(*param_1 + 0x408); plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1])
  {
    pbVar16 = (byte *)0x3;
    bVar2 = FUN_71000173b0((byte *)*plVar34,&DAT_7104400185,3);
    if (bVar2) {
      if (*plVar34 != 0) goto LAB_710000cde8;
      break;
    }
  }
  if (*(char *)(lVar31 + 0x6bb) != '\0') {
    for (plVar34 = *(long **)(*param_1 + 0x408); plVar34 != (long *)0x0;
        plVar34 = (long *)plVar34[1]) {
      pbVar16 = (byte *)0xb;
      bVar2 = FUN_71000173b0((byte *)*plVar34,(byte *)"Connection:",0xb);
      if (bVar2) {
        lVar8 = *plVar34;
        FUN_71000272a0();
        param_1[0x118] = 0;
        if (lVar8 == 0) goto LAB_710000cdd4;
        lVar8 = FUN_7100007fd0((byte *)"%s, TE\r\nTE: gzip\r\n");
        param_1[0x118] = lVar8;
        goto joined_r0x00710000cdb8;
      }
    }
    FUN_71000272a0();
    param_1[0x118] = 0;
LAB_710000cdd4:
    lVar8 = FUN_71000272c0();
    param_1[0x118] = lVar8;
joined_r0x00710000cdb8:
    if (lVar8 == 0) {
      return 0x1b;
    }
  }
LAB_710000cde8:
  for (puVar35 = *(undefined8 **)(*param_1 + 0x408); puVar35 != (undefined8 *)0x0;
      puVar35 = (undefined8 *)puVar35[1]) {
    pbVar16 = &DAT_00000012;
    bVar2 = FUN_71000173b0((byte *)*puVar35,(byte *)"Transfer-Encoding:",0x12);
    if (bVar2) {
      if ((byte *)*puVar35 != (byte *)0x0) {
        bVar4 = FUN_710000f6f0((byte *)*puVar35,(byte *)"Transfer-Encoding:",(byte *)"chunked");
        *(byte *)(lVar31 + 0x251) = bVar4 & 1;
        goto LAB_710000ce78;
      }
      break;
    }
  }
  if ((((*(byte *)(param_1[0x10b] + 0x80) & 3) == 0) || (*(char *)(lVar31 + 0x6c1) == '\0')) ||
     (*(long *)(lVar31 + 0x4fb8) != -1)) {
    *(undefined1 *)(lVar31 + 0x251) = 0;
  }
  else if (*(char *)((long)param_1 + 0x822) == '\0') {
    if ((((*(int *)(lVar31 + 0x4f64) == 10) || ((int)param_1[0x46] == 10)) ||
        ((lVar8 = *(long *)(lVar31 + 0x488), (int)param_1[0x46] < 0xb && (lVar8 == 1)))) ||
       ((lVar8 != 0 && (lVar8 < 2)))) {
      FUN_7100016040(lVar31,(byte *)"Chunky upload is not supported by HTTP 1.0",pbVar16,pFVar19,
                     param_5,param_6,param_7,param_8);
      return 0x19;
    }
    *(undefined1 *)(lVar31 + 0x251) = 1;
  }
LAB_710000ce78:
  FUN_71000272a0();
  param_1[0x115] = 0;
  for (puVar35 = *(undefined8 **)(*param_1 + 0x408); puVar35 != (undefined8 *)0x0;
      puVar35 = (undefined8 *)puVar35[1]) {
    pcVar17 = (char *)0x5;
    bVar2 = FUN_71000173b0((byte *)*puVar35,(byte *)"Host:",5);
    if (bVar2) {
      pbVar16 = (byte *)*puVar35;
      if ((pbVar16 != (byte *)0x0) &&
         ((*pcVar18 == '\0' ||
          (bVar2 = FUN_7100017280(*(byte **)(lVar31 + 0x4bb8),(byte *)param_1[0x1b]), bVar2)))) {
        pcVar12 = FUN_710000e840(pbVar16);
        if (pcVar12 == (char *)0x0) {
          return 0x1b;
        }
        if (*pcVar12 == '[') {
          sVar13 = strlen(pcVar12);
          pcVar17 = (char *)(sVar13 - 1);
          memmove(pcVar12,pcVar12 + 1,(size_t)pcVar17);
          pcVar10 = strchr(pcVar12,0x5d);
joined_r0x00710000d584:
          if (pcVar10 != (char *)0x0) {
            *pcVar10 = '\0';
          }
          FUN_71000272a0();
          param_1[0x116] = (long)pcVar12;
        }
        else {
          if (*pcVar12 != '\0') {
            pcVar10 = strchr(pcVar12,0x3a);
            goto joined_r0x00710000d584;
          }
          FUN_71000272a0();
        }
        iVar6 = strcmp("Host:",(char *)pbVar16);
        if (iVar6 == 0) {
          param_1[0x115] = 0;
          cVar1 = *(char *)((long)param_1 + 0x816);
          goto joined_r0x00710000d5d4;
        }
        lVar8 = FUN_7100007fd0(&DAT_71043ac591);
        param_1[0x115] = lVar8;
        goto joined_r0x00710000d5c0;
      }
      break;
    }
  }
  pcVar17 = (char *)pbVar36;
  if (((*(uint *)(param_1[0x10c] + 0x80) >> 1 & 1) == 0) || ((int)param_1[0x33] != 0x1bb)) {
    param_5 = (ulong *)(ulong)*(uint *)(param_1 + 0x33);
    if (((*(uint *)(param_1[0x10c] + 0x80) & 1) != 0) && (*(uint *)(param_1 + 0x33) == 0x50))
    goto LAB_710000cf38;
    pFVar19 = (FILE *)&DAT_7104317c74;
    if (*(char *)((long)param_1 + 0x81a) == '\0') {
      pFVar19 = (FILE *)&DAT_71044114cc;
    }
    lVar8 = FUN_7100007fd0((byte *)"Host: %s%s%s:%hu\r\n");
    param_1[0x115] = lVar8;
  }
  else {
LAB_710000cf38:
    pFVar19 = (FILE *)&DAT_7104317c74;
    if (*(char *)((long)param_1 + 0x81a) == '\0') {
      pFVar19 = (FILE *)&DAT_71044114cc;
    }
    lVar8 = FUN_7100007fd0((byte *)"Host: %s%s%s\r\n");
    param_1[0x115] = lVar8;
  }
joined_r0x00710000d5c0:
  if (lVar8 == 0) {
    return 0x1b;
  }
  cVar1 = *(char *)((long)param_1 + 0x816);
joined_r0x00710000d5d4:
  if ((cVar1 == '\0') || (*(char *)((long)param_1 + 0x821) != '\0')) {
LAB_710000cfd0:
    bVar2 = false;
  }
  else {
    pcVar17 = (char *)param_1[0x1b];
    pcVar12 = (char *)param_1[0x1c];
    __haystack = *(byte **)(lVar31 + 0x998);
    if ((pcVar12 != pcVar17) &&
       (pcVar10 = strstr((char *)__haystack,pcVar12), pcVar10 != (char *)0x0)) {
      sVar13 = strlen(pcVar12);
      __n = strlen(pcVar17);
      sVar11 = strlen((char *)__haystack);
      pbVar16 = (byte *)FUN_7100027290();
      if (pbVar16 == (byte *)0x0) {
        return 0x1b;
      }
      __n_00 = (long)pcVar10 - (long)__haystack;
      memcpy(pbVar16,__haystack,__n_00);
      memcpy(pbVar16 + __n_00,(void *)param_1[0x1b],__n);
      memcpy(pbVar16 + __n_00 + __n,pcVar10 + sVar13,((1 - __n_00) - sVar13) + sVar11);
      if (*(char *)(lVar31 + 0x9a0) != '\0') {
        FUN_71000272a0();
        *(undefined8 *)(lVar31 + 0x998) = 0;
        *(undefined1 *)(lVar31 + 0x9a0) = 0;
      }
      *(byte **)(lVar31 + 0x998) = pbVar16;
      *(undefined1 *)(lVar31 + 0x9a0) = 1;
      __haystack = pbVar16;
    }
    pcVar17 = (char *)0x6;
    bVar2 = FUN_7100017490((byte *)"ftp://",__haystack,6);
    if (!bVar2) goto LAB_710000cfd0;
    if (*(char *)(lVar31 + 0x708) != '\0') {
      pcVar12 = strstr((char *)__haystack,";type=");
      if (pcVar12 == (char *)0x0) {
LAB_710000d2d8:
        if (**(char **)(lVar31 + 0x4f80) == '\0') {
          puVar35 = &uStack_78;
          sVar13 = strlen((char *)__haystack);
          if (__haystack[sVar13 - 1] != 0x2f) {
            puVar35 = (undefined8 *)((ulong)puVar35 | 1);
            uStack_78 = CONCAT71(uStack_78._1_7_,0x2f);
          }
        }
        else {
          puVar35 = &uStack_78;
        }
        uVar5 = 0x69;
        if (*(char *)(lVar31 + 0x6b3) != '\0') {
          uVar5 = 0x61;
        }
        pFVar19 = (FILE *)(ulong)uVar5;
        pcVar17 = ";type=%c";
        FUN_7100007ef0((undefined1 *)puVar35,8,";type=%c",pFVar19,param_5,param_6,param_7,param_8);
      }
      else if (((byte)pcVar12[6] != 0) && (pcVar12[7] == '\0')) {
        uVar5 = FUN_7100017260((uint)(byte)pcVar12[6]);
        uVar5 = (uVar5 & 0xff) - 0x41;
        if ((8 < uVar5) || ((1 << (ulong)(uVar5 & 0x1f) & 0x109U) == 0)) goto LAB_710000d2d8;
      }
    }
    if ((char)param_1[0x103] == '\0') goto LAB_710000cfd0;
    bVar2 = (char)param_1[0x105] == '\0';
  }
  if (uVar7 == 3) {
    pcVar17 = *(char **)(lVar31 + 0x418);
    for (puVar35 = *(undefined8 **)(*param_1 + 0x408); puVar35 != (undefined8 *)0x0;
        puVar35 = (undefined8 *)puVar35[1]) {
      bVar3 = FUN_71000173b0((byte *)*puVar35,(byte *)"Content-Type:",0xd);
      if (bVar3) {
        pFVar19 = (FILE *)*puVar35;
        goto LAB_710000d114;
      }
    }
    pFVar19 = (FILE *)0x0;
LAB_710000d114:
    param_5 = (ulong *)(plVar32 + 1);
    uVar5 = FUN_7100011c00(lVar31,plVar32,(long *)pcVar17,pFVar19,param_5,param_6,param_7,param_8);
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
  }
  plVar34 = *(long **)(*param_1 + 0x408);
  if (plVar34 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    do {
      pcVar17 = &DAT_00000007;
      bVar3 = FUN_71000173b0((byte *)*plVar34,(byte *)"Accept:",7);
      if (bVar3) {
        lVar8 = *plVar34;
        goto LAB_710000d17c;
      }
      plVar34 = (long *)plVar34[1];
    } while (plVar34 != (long *)0x0);
    lVar8 = 0;
  }
LAB_710000d17c:
  pcVar12 = "Accept: */*\r\n";
  if (lVar8 != 0) {
    pcVar12 = (char *)0x0;
  }
  plVar32[4] = (long)pcVar12;
  if ((uVar7 - 2 < 3) && (*(long *)(lVar31 + 0x4f98) != 0)) {
    if (*(long *)(lVar31 + 0x4f98) < 0) {
      *(undefined8 *)(lVar31 + 0x4f98) = 0;
    }
    else if (*pcVar18 == '\0') {
      if ((code *)param_1[0x125] != (code *)0x0) {
        pcVar17 = (char *)0x0;
        iVar6 = (*(code *)param_1[0x125])(param_1[0x126]);
        if (iVar6 != 0) {
          if (iVar6 != 2) {
            FUN_7100016040(lVar31,(byte *)"Could not seek stream",pcVar17,pFVar19,param_5,param_6,
                           param_7,param_8);
            return 0x1a;
          }
          lVar30 = *(long *)(lVar31 + 0x4f98);
          lVar8 = 0;
          do {
            pbVar16 = *(byte **)(lVar31 + 0x670);
            if (lVar30 - lVar8 <= (long)pbVar16) {
              pbVar16 = (byte *)FUN_7100027100();
            }
            pFVar19 = *(FILE **)(lVar31 + 0x4fd8);
            pcVar17 = (char *)pbVar16;
            lVar30 = (**(code **)(lVar31 + 0x4fd0))(*(undefined8 *)(lVar31 + 0xb98),1);
            lVar8 = lVar30 + lVar8;
            if (pbVar16 <= (byte *)(lVar30 + -1)) {
              FUN_7100016040(lVar31,(byte *)"Could only read %ld bytes from the input",lVar8,pFVar19
                             ,param_5,param_6,param_7,param_8);
              return 0x1a;
            }
            lVar30 = *(long *)(lVar31 + 0x4f98);
          } while (lVar8 < lVar30);
        }
      }
      if ((0 < *(long *)(lVar31 + 0x4fb8)) &&
         (lVar8 = *(long *)(lVar31 + 0x4fb8) - *(long *)(lVar31 + 0x4f98),
         *(long *)(lVar31 + 0x4fb8) = lVar8, lVar8 < 1)) {
        FUN_7100016040(lVar31,(byte *)"File already completely uploaded",pcVar17,pFVar19,param_5,
                       param_6,param_7,param_8);
        return 0x12;
      }
    }
  }
  if (*(char *)(lVar31 + 0x4f89) == '\0') {
LAB_710000d398:
    if (*(int *)(lVar31 + 0x4f64) == 10) goto LAB_710000d3dc;
LAB_710000d3d0:
    if ((int)param_1[0x46] == 10) goto LAB_710000d3dc;
    lVar8 = *(long *)(lVar31 + 0x488);
    if (((10 < (int)param_1[0x46]) || (puVar20 = &DAT_710435a19c, lVar8 != 1)) &&
       (puVar20 = &DAT_71042c3b2f, lVar8 < 2 && lVar8 != 0)) {
      puVar20 = &DAT_710435a19c;
    }
    plVar34 = (long *)FUN_71000272d0();
  }
  else {
    if ((uVar7 | 4) != 5) {
LAB_710000d390:
      if (uVar7 != 1) {
        for (plVar34 = *(long **)(*param_1 + 0x408); plVar34 != (long *)0x0;
            plVar34 = (long *)plVar34[1]) {
          bVar3 = FUN_71000173b0((byte *)*plVar34,(byte *)"Content-Range:",0xe);
          if (bVar3) {
            if (*plVar34 != 0) goto LAB_710000d398;
            break;
          }
        }
        FUN_71000272a0();
        if (*(long *)(lVar31 + 0x400) < 0) {
          lVar8 = FUN_7100007fd0((byte *)"Content-Range: bytes 0-%ld/%ld\r\n");
          param_1[0x113] = lVar8;
        }
        else if (*(long *)(lVar31 + 0x4f98) == 0) {
          lVar8 = FUN_7100007fd0((byte *)"Content-Range: bytes %s/%ld\r\n");
          param_1[0x113] = lVar8;
        }
        else {
          pFVar19 = (FILE *)(*(long *)(lVar31 + 0x4fb8) + *(long *)(lVar31 + 0x4f98));
          lVar8 = FUN_7100007fd0((byte *)"Content-Range: bytes %s%ld/%ld\r\n");
          param_1[0x113] = lVar8;
        }
        if (lVar8 == 0) {
          return 0x1b;
        }
      }
      goto LAB_710000d398;
    }
    for (plVar34 = *(long **)(*param_1 + 0x408); plVar34 != (long *)0x0;
        plVar34 = (long *)plVar34[1]) {
      bVar3 = FUN_71000173b0((byte *)*plVar34,(byte *)"Range:",6);
      if (bVar3) {
        if (*plVar34 != 0) goto LAB_710000d390;
        break;
      }
    }
    FUN_71000272a0();
    lVar8 = FUN_7100007fd0((byte *)"Range: bytes=%s\r\n");
    param_1[0x113] = lVar8;
    if (*(int *)(lVar31 + 0x4f64) != 10) goto LAB_710000d3d0;
LAB_710000d3dc:
    puVar20 = &DAT_710435a19c;
    plVar34 = (long *)FUN_71000272d0();
  }
  if (plVar34 == (long *)0x0) {
    return 0x1b;
  }
  uVar9 = FUN_710000f530(plVar34,&DAT_7104453816,puVar40,pFVar19,param_5,param_6,param_7,param_8);
  if ((int)uVar9 != 0) {
    return uVar9 & 0xffffffff;
  }
  if (*(byte **)(lVar31 + 0x8c0) != (byte *)0x0) {
    __haystack = *(byte **)(lVar31 + 0x8c0);
  }
  if (bVar2) {
    uVar9 = FUN_710000f530(plVar34,(byte *)"ftp://%s:%s@%s",param_1[0x42],param_1[0x43],
                           __haystack + 6,param_6,param_7,param_8);
    iVar6 = (int)uVar9;
  }
  else {
    sVar13 = strlen((char *)__haystack);
    uVar9 = FUN_710000f600(plVar34,__haystack,sVar13);
    iVar6 = (int)uVar9;
  }
  if (iVar6 != 0) {
    return uVar9 & 0xffffffff;
  }
  puVar22 = &DAT_71044114cc;
  if ((undefined1 *)param_1[0x115] != (undefined1 *)0x0) {
    puVar22 = (undefined1 *)param_1[0x115];
  }
  puVar26 = &DAT_71044114cc;
  if ((undefined1 *)param_1[0x10f] != (undefined1 *)0x0) {
    puVar26 = (undefined1 *)param_1[0x10f];
  }
  puVar27 = &DAT_71044114cc;
  if ((undefined1 *)param_1[0x112] != (undefined1 *)0x0) {
    puVar27 = (undefined1 *)param_1[0x112];
  }
  puVar28 = &DAT_71044114cc;
  if ((*(char *)(lVar31 + 0x4f89) != '\0') && ((undefined1 *)param_1[0x113] != (undefined1 *)0x0)) {
    puVar28 = (undefined1 *)param_1[0x113];
  }
  if ((*(char *)((long)param_1 + 0x816) != '\0') && (*(char *)((long)param_1 + 0x821) == '\0')) {
    lVar8 = *param_1;
    if ((*(char *)((long)param_1 + 0x815) == '\0') || (*(char *)(lVar8 + 0x420) == '\0')) {
      puVar35 = *(undefined8 **)(lVar8 + 0x408);
    }
    else {
      puVar35 = *(undefined8 **)(lVar8 + 0x410);
    }
    while ((puVar35 != (undefined8 *)0x0 &&
           (bVar2 = FUN_71000173b0((byte *)*puVar35,(byte *)"Proxy-Connection:",0x11), !bVar2))) {
      puVar35 = (undefined8 *)puVar35[1];
    }
  }
  puVar35 = &uStack_78;
  uVar9 = FUN_710000f530(plVar34,(byte *)"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s",puVar35,puVar20,
                         puVar22,puVar26,puVar27,puVar28);
  FUN_71000272a0();
  param_1[0x112] = 0;
  FUN_71000272a0();
  param_1[0x10f] = 0;
  if ((int)uVar9 != 0) {
    return uVar9 & 0xffffffff;
  }
  if ((((*(byte *)(param_1[0x10b] + 0x84) & 1) == 0) && ((int)param_1[0x46] != 0x14)) &&
     (*(long *)(lVar31 + 0x488) == 3)) {
    return 1;
  }
  if ((puStack_a0 != (undefined *)0x0) || (*(long *)(lVar31 + 0x9c8) != 0)) {
    if (*(long *)(lVar31 + 0x9c8) == 0) {
LAB_710000d9d0:
      iVar6 = 0;
    }
    else {
      FUN_7100016b40(lVar31,2);
      if ((byte *)param_1[0x116] != (byte *)0x0) {
        pbVar36 = (byte *)param_1[0x116];
      }
      puVar35 = *(undefined8 **)(lVar31 + 0x4f80);
      puVar20 = (undefined *)(ulong)(*(uint *)(param_1[0x10b] + 0x80) >> 1 & 1);
      plVar14 = FUN_7100002080(*(long **)(lVar31 + 0x9c8),pbVar36,puVar35,(ulong)puVar20);
      FUN_7100016ba0(lVar31,2);
      if (plVar14 == (long *)0x0) goto LAB_710000d9d0;
      iVar6 = 0;
      plVar37 = plVar14;
      do {
        puVar22 = (undefined1 *)plVar37[2];
        if (puVar22 != (undefined1 *)0x0) {
          if (iVar6 == 0) {
            uVar9 = FUN_710000f530(plVar34,(byte *)"Cookie: ",puVar35,puVar20,puVar22,puVar26,
                                   puVar27,puVar28);
            if ((int)uVar9 != 0) {
              uVar9 = uVar9 & 0xffffffff;
              iVar6 = 0;
              FUN_7100002540(plVar14);
              goto joined_r0x00710000db20;
            }
            puVar22 = (undefined1 *)plVar37[2];
          }
          puVar20 = (undefined *)plVar37[1];
          puVar35 = (undefined8 *)&DAT_71044114cc;
          if (iVar6 != 0) {
            puVar35 = (undefined8 *)&DAT_7104442605;
          }
          uVar9 = FUN_710000f530(plVar34,(byte *)"%s%s=%s",puVar35,puVar20,puVar22,puVar26,puVar27,
                                 puVar28);
          if ((int)uVar9 != 0) {
            uVar9 = uVar9 & 0xffffffff;
            FUN_7100002540(plVar14);
            goto joined_r0x00710000db20;
          }
          iVar6 = iVar6 + 1;
        }
        plVar37 = (long *)*plVar37;
      } while (plVar37 != (long *)0x0);
      FUN_7100002540(plVar14);
    }
    uVar9 = 0;
joined_r0x00710000db20:
    if ((puStack_a0 != (undefined *)0x0) && ((int)uVar9 == 0)) {
      if (iVar6 == 0) {
        uVar9 = FUN_710000f530(plVar34,(byte *)"Cookie: ",puVar35,puVar20,puVar22,puVar26,puVar27,
                               puVar28);
        if ((int)uVar9 != 0) {
          return uVar9 & 0xffffffff;
        }
      }
      puVar35 = (undefined8 *)&DAT_7104442605;
      if (iVar6 == 0) {
        puVar35 = (undefined8 *)&DAT_71044114cc;
      }
      uVar9 = FUN_710000f530(plVar34,&DAT_7104421177,puVar35,puStack_a0,puVar22,puVar26,puVar27,
                             puVar28);
      uVar9 = uVar9 & 0xffffffff;
      iVar6 = iVar6 + 1;
      puVar20 = puStack_a0;
    }
    if ((iVar6 != 0) && ((int)uVar9 == 0)) {
      puVar35 = (undefined8 *)0x2;
      uVar9 = FUN_710000f600(plVar34,&DAT_710426ee5d,2);
      uVar9 = uVar9 & 0xffffffff;
    }
    if ((int)uVar9 != 0) {
      return uVar9;
    }
  }
  uVar9 = FUN_710000fa20(lVar31,plVar34,puVar35,puVar20,puVar22,puVar26,puVar27,puVar28);
  if ((int)uVar9 != 0) {
    return uVar9 & 0xffffffff;
  }
  pcVar18 = (char *)plVar34;
  uVar9 = FUN_710000f7f0(param_1,0,plVar34,puVar20,puVar22,puVar26,puVar27,puVar28);
  if ((int)uVar9 != 0) {
    return uVar9 & 0xffffffff;
  }
  plVar37 = plVar32 + 2;
  *plVar37 = 0;
  FUN_7100014ff0(lVar31,-1);
  plVar14 = plVar33;
  if (uVar7 == 2) {
    if (*(char *)((long)param_1 + 0x822) == '\0') {
      plVar38 = *(long **)(lVar31 + 0x4fb8);
      if (plVar38 != (long *)0xffffffffffffffff) {
        cVar1 = *(char *)(lVar31 + 0x251);
        goto joined_r0x00710000dbd0;
      }
    }
    else {
      plVar38 = (long *)0x0;
      cVar1 = *(char *)(lVar31 + 0x251);
joined_r0x00710000dbd0:
      if (cVar1 == '\0') {
        if (*(char *)((long)param_1 + 0x822) == '\0') {
          for (plVar21 = *(long **)(*param_1 + 0x408); plVar21 != (long *)0x0;
              plVar21 = (long *)plVar21[1]) {
            pcVar18 = &DAT_0000000f;
            bVar2 = FUN_71000173b0((byte *)*plVar21,(byte *)"Content-Length:",0xf);
            if (bVar2) {
              if (*plVar21 != 0) goto LAB_710000dbd4;
              break;
            }
          }
        }
        pcVar18 = (char *)plVar38;
        uVar9 = FUN_710000f530(plVar34,(byte *)"Content-Length: %ld\r\n",plVar38,puVar20,puVar22,
                               puVar26,puVar27,puVar28);
        if ((int)uVar9 != 0) {
          return uVar9 & 0xffffffff;
        }
      }
    }
LAB_710000dbd4:
    for (plVar21 = *(long **)(*param_1 + 0x408); plVar21 != (long *)0x0;
        plVar21 = (long *)plVar21[1]) {
      pcVar18 = &DAT_0000000d;
      bVar2 = FUN_71000173b0((byte *)*plVar21,(byte *)"Content-Type:",0xd);
      if (bVar2) {
        if (*plVar21 != 0) goto LAB_710000dcc8;
        break;
      }
    }
    uVar9 = FUN_710000f530(plVar34,(byte *)"Content-Type: application/x-www-form-urlencoded\r\n",
                           pcVar18,puVar20,puVar22,puVar26,puVar27,puVar28);
    if ((int)uVar9 != 0) {
      return uVar9 & 0xffffffff;
    }
LAB_710000dcc8:
    for (puVar35 = *(undefined8 **)(*param_1 + 0x408); puVar35 != (undefined8 *)0x0;
        puVar35 = (undefined8 *)puVar35[1]) {
      pcVar18 = &DAT_00000007;
      bVar2 = FUN_71000173b0((byte *)*puVar35,(byte *)"Expect:",7);
      if (bVar2) {
        if ((byte *)*puVar35 != (byte *)0x0) {
          bVar4 = FUN_710000f6f0((byte *)*puVar35,(byte *)"Expect:",(byte *)"100-continue");
          bVar4 = bVar4 & 1;
          *(byte *)(lVar31 + 0x4f68) = bVar4;
          lVar8 = *(long *)(lVar31 + 0x2e0);
          goto joined_r0x00710000dddc;
        }
        break;
      }
    }
    bVar4 = 0;
    *(undefined1 *)(lVar31 + 0x4f68) = 0;
    if (plVar38 < (long *)0x401) {
LAB_710000e2f8:
      if (*(long *)(lVar31 + 0x2e0) == 0) goto LAB_710000de34;
LAB_710000e300:
      if ((((int)param_1[0x46] == 0x14) || (0xffff < (long)plVar38)) || (bVar4 != 0)) {
        plVar32[1] = (long)plVar38;
        plVar32[2] = *(long *)(lVar31 + 0x2e0);
        *(undefined4 *)(plVar32 + 0xf) = 2;
        *(code **)(lVar31 + 0x4fd0) = FUN_710000f460;
        *(long **)(lVar31 + 0x4fd8) = param_1;
        FUN_7100014ff0(lVar31,plVar32[1]);
        uVar9 = FUN_710000f600(plVar34,&DAT_710426ee5d,2);
        iVar6 = (int)uVar9;
        goto joined_r0x00710000e358;
      }
      uVar9 = FUN_710000f600(plVar34,&DAT_710426ee5d,2);
      if ((int)uVar9 != 0) {
        return uVar9 & 0xffffffff;
      }
      if (*(char *)(lVar31 + 0x251) == '\0') {
        uVar9 = FUN_710000f600(plVar34,*(void **)(lVar31 + 0x2e0),(ulong)plVar38);
        iVar6 = (int)uVar9;
        plVar21 = plVar38;
      }
      else {
        if (plVar38 == (long *)0x0) {
          plVar21 = (long *)0x5;
        }
        else {
          uVar9 = FUN_710000f530(plVar34,&DAT_7104421192,(ulong)plVar38 & 0xffffffff,puVar20,puVar22
                                 ,puVar26,puVar27,puVar28);
          if ((int)uVar9 != 0) {
            return uVar9 & 0xffffffff;
          }
          uVar9 = FUN_710000f600(plVar34,*(void **)(lVar31 + 0x2e0),(ulong)plVar38);
          if ((int)uVar9 != 0) {
            return uVar9 & 0xffffffff;
          }
          uVar9 = FUN_710000f600(plVar34,&DAT_710426ee5d,2);
          if ((int)uVar9 != 0) {
            return uVar9 & 0xffffffff;
          }
          plVar21 = (long *)((long)plVar38 + 7);
        }
        uVar9 = FUN_710000f600(plVar34,"0\r\n\r\n",5);
        iVar6 = (int)uVar9;
      }
      if (iVar6 != 0) {
        return uVar9 & 0xffffffff;
      }
      FUN_7100014ff0(lVar31,(long)plVar38);
    }
    else {
      if (((*(int *)(lVar31 + 0x4f64) != 10) && (iVar6 = (int)param_1[0x46], iVar6 != 10)) &&
         ((lVar8 = *(long *)(lVar31 + 0x488), 10 < iVar6 || (lVar8 != 1)))) {
        bVar4 = 0;
        if ((iVar6 != 0x14) && (lVar8 == 0 || 1 < lVar8)) {
          for (puVar35 = *(undefined8 **)(*param_1 + 0x408); puVar35 != (undefined8 *)0x0;
              puVar35 = (undefined8 *)puVar35[1]) {
            pcVar18 = &DAT_00000007;
            bVar2 = FUN_71000173b0((byte *)*puVar35,(byte *)"Expect:",7);
            if (bVar2) {
              if ((byte *)*puVar35 != (byte *)0x0) {
                bVar4 = FUN_710000f6f0((byte *)*puVar35,(byte *)"Expect:",(byte *)"100-continue");
                bVar4 = bVar4 & 1;
                goto LAB_710000e2f0;
              }
              break;
            }
          }
          uVar9 = FUN_710000f530(plVar34,(byte *)"Expect: 100-continue\r\n",pcVar18,puVar20,puVar22,
                                 puVar26,puVar27,puVar28);
          if ((int)uVar9 != 0) {
            return uVar9 & 0xffffffff;
          }
          bVar4 = 1;
LAB_710000e2f0:
          *(byte *)(lVar31 + 0x4f68) = bVar4;
        }
        goto LAB_710000e2f8;
      }
      bVar4 = 0;
      lVar8 = *(long *)(lVar31 + 0x2e0);
joined_r0x00710000dddc:
      if (lVar8 != 0) goto LAB_710000e300;
LAB_710000de34:
      uVar9 = FUN_710000f600(plVar34,&DAT_710426ee5d,2);
      if ((int)uVar9 != 0) {
        return uVar9 & 0xffffffff;
      }
      if ((*(char *)(lVar31 + 0x251) == '\0') || (*(char *)((long)param_1 + 0x822) == '\0')) {
        if (*(long *)(lVar31 + 0x4fb8) != 0) {
          plVar21 = plVar38;
          if (plVar38 == (long *)0x0) {
            plVar21 = (long *)0xffffffffffffffff;
          }
          FUN_7100014ff0(lVar31,(long)plVar21);
          if (*(char *)((long)param_1 + 0x822) == '\0') {
            plVar21 = (long *)0x0;
            plVar32[1] = (long)plVar38;
            plVar32[2] = (long)plVar37;
            goto LAB_710000e360;
          }
        }
      }
      else {
        uVar9 = FUN_710000f600(plVar34,"0\r\n\r\n",5);
        iVar6 = (int)uVar9;
joined_r0x00710000e358:
        if (iVar6 != 0) {
          return uVar9 & 0xffffffff;
        }
      }
      plVar21 = (long *)0x0;
    }
LAB_710000e360:
    plVar32 = (long *)(lVar31 + 0x5068);
    uVar23 = 0;
    uVar7 = FUN_710000f280(plVar34,param_1,plVar32,(long)plVar21,0,puVar26,puVar27,puVar28);
    if (uVar7 != 0) {
      uVar9 = (ulong)uVar7;
      pcVar18 = "Failed sending HTTP POST request";
LAB_710000e38c:
      FUN_7100016040(lVar31,(byte *)pcVar18,plVar32,plVar21,uVar23,puVar26,puVar27,puVar28);
      return uVar9;
    }
    bVar2 = *plVar37 == 0;
    bVar4 = bVar2;
  }
  else {
    if (uVar7 != 4) {
      if (uVar7 == 3) {
        if ((*plVar32 == 0) || (*(char *)((long)param_1 + 0x822) != '\0')) {
          uVar9 = FUN_710000f530(plVar34,(byte *)"Content-Length: 0\r\n\r\n",pcVar18,puVar20,puVar22
                                 ,puVar26,puVar27,puVar28);
          if ((int)uVar9 != 0) {
            return uVar9 & 0xffffffff;
          }
          plVar32 = (long *)(lVar31 + 0x5068);
          plVar21 = (long *)0x0;
          uVar23 = 0;
          uVar7 = FUN_710000f280(plVar34,param_1,plVar32,0,0,puVar26,puVar27,puVar28);
          if (uVar7 != 0) {
            uVar9 = (ulong)uVar7;
            pcVar18 = "Failed sending POST request";
            goto LAB_710000e38c;
          }
          uVar9 = 0xffffffff;
          plVar14 = (long *)0x0;
        }
        else {
          plVar37 = plVar32 + 7;
          uVar23 = FUN_7100012300(plVar37,*plVar32);
          if ((int)uVar23 != 0) {
            pcVar17 = "Internal HTTP POST error!";
LAB_710000dd74:
            FUN_7100016040(lVar31,(byte *)pcVar17,pcVar18,puVar20,puVar22,puVar26,puVar27,puVar28);
            return 0x22;
          }
          plVar32[10] = *(long *)(lVar31 + 0x4fd0);
          *(code **)(lVar31 + 0x4fd0) = FUN_71000125c0;
          *(long **)(lVar31 + 0x4fd8) = plVar37;
          *(undefined4 *)(plVar32 + 0xf) = 2;
          if (*(char *)(lVar31 + 0x251) == '\0') {
            for (plVar38 = *(long **)(*param_1 + 0x408); plVar38 != (long *)0x0;
                plVar38 = (long *)plVar38[1]) {
              pcVar18 = &DAT_0000000f;
              bVar2 = FUN_71000173b0((byte *)*plVar38,(byte *)"Content-Length:",0xf);
              if (bVar2) {
                if (*plVar38 != 0) goto LAB_710000dfdc;
                break;
              }
            }
            pcVar18 = (char *)plVar32[1];
            uVar9 = FUN_710000f530(plVar34,(byte *)"Content-Length: %ld\r\n",pcVar18,puVar20,puVar22
                                   ,puVar26,puVar27,puVar28);
            if ((int)uVar9 != 0) {
              return uVar9 & 0xffffffff;
            }
          }
LAB_710000dfdc:
          *(undefined1 *)(lVar31 + 0x4f68) = 0;
          if (((*(int *)(lVar31 + 0x4f64) != 10) && (iVar6 = (int)param_1[0x46], iVar6 != 10)) &&
             ((lVar8 = *(long *)(lVar31 + 0x488), 10 < iVar6 || (lVar8 != 1)))) {
            if ((iVar6 != 0x14) && (lVar8 == 0 || 1 < lVar8)) {
              for (puVar35 = *(undefined8 **)(*param_1 + 0x408); puVar35 != (undefined8 *)0x0;
                  puVar35 = (undefined8 *)puVar35[1]) {
                pcVar18 = &DAT_00000007;
                bVar2 = FUN_71000173b0((byte *)*puVar35,(byte *)"Expect:",7);
                if (bVar2) {
                  if ((byte *)*puVar35 != (byte *)0x0) {
                    pcVar18 = "100-continue";
                    bVar4 = FUN_710000f6f0((byte *)*puVar35,(byte *)"Expect:",(byte *)"100-continue"
                                          );
                    bVar4 = bVar4 & 1;
                    goto LAB_710000e52c;
                  }
                  break;
                }
              }
              uVar9 = FUN_710000f530(plVar34,(byte *)"Expect: 100-continue\r\n",pcVar18,puVar20,
                                     puVar22,puVar26,puVar27,puVar28);
              if ((int)uVar9 != 0) {
                return uVar9 & 0xffffffff;
              }
              bVar4 = 1;
LAB_710000e52c:
              *(byte *)(lVar31 + 0x4f68) = bVar4;
            }
          }
          uStack_80 = 0;
          pvVar15 = (void *)FUN_7100012720(plVar37,&uStack_80);
          if (pvVar15 == (void *)0x0) {
            pcVar17 = "Could not get Content-Type header line!";
            goto LAB_710000dd74;
          }
          uVar9 = FUN_710000f600(plVar34,pvVar15,uStack_80);
          if ((int)uVar9 != 0) {
            return uVar9 & 0xffffffff;
          }
          uVar9 = FUN_710000f600(plVar34,&DAT_710426ee5d,2);
          if ((int)uVar9 != 0) {
            return uVar9 & 0xffffffff;
          }
          FUN_7100014ff0(lVar31,plVar32[1]);
          plVar37 = (long *)(lVar31 + 0x5068);
          uVar23 = 0;
          uVar24 = 0;
          uVar7 = FUN_710000f280(plVar34,param_1,plVar37,0,0,puVar26,puVar27,puVar28);
          if (uVar7 != 0) {
            FUN_7100016040(lVar31,(byte *)"Failed sending POST request",plVar37,uVar23,uVar24,
                           puVar26,puVar27,puVar28);
            FUN_7100011ba0(plVar32);
            return (ulong)uVar7;
          }
          uVar9 = 0;
        }
      }
      else {
        uVar9 = FUN_710000f600(plVar34,&DAT_710426ee5d,2);
        if ((int)uVar9 != 0) {
          return uVar9 & 0xffffffff;
        }
        plVar32 = (long *)(lVar31 + 0x5068);
        plVar21 = (long *)0x0;
        uVar23 = 0;
        uVar7 = FUN_710000f280(plVar34,param_1,plVar32,0,0,puVar26,puVar27,puVar28);
        if (uVar7 != 0) {
          uVar9 = (ulong)uVar7;
          pcVar18 = "Failed sending HTTP request";
          goto LAB_710000e38c;
        }
        uVar9 = (ulong)-(uint)(*plVar37 == 0);
        if (*plVar37 == 0) {
          plVar14 = (long *)0x0;
        }
      }
      FUN_7100019600(param_1,0,-1,1,plVar25,uVar9,plVar14,puVar28);
      plVar38 = (long *)0x0;
      lVar8 = *plVar33;
      goto joined_r0x00710000e458;
    }
    if (*(char *)((long)param_1 + 0x822) == '\0') {
      plVar38 = *(long **)(lVar31 + 0x4fb8);
      if (plVar38 != (long *)0xffffffffffffffff) {
        cVar1 = *(char *)(lVar31 + 0x251);
        goto joined_r0x00710000dc1c;
      }
LAB_710000dc24:
      *(undefined1 *)(lVar31 + 0x4f68) = 0;
      if (((*(int *)(lVar31 + 0x4f64) == 10) || (iVar6 = (int)param_1[0x46], iVar6 == 10)) ||
         ((lVar8 = *(long *)(lVar31 + 0x488), iVar6 < 0xb && (lVar8 == 1)))) {
LAB_710000dc58:
        bVar3 = true;
      }
      else {
        bVar3 = true;
        if ((iVar6 != 0x14) && (lVar8 == 0 || 1 < lVar8)) {
          for (puVar35 = *(undefined8 **)(*param_1 + 0x408); puVar35 != (undefined8 *)0x0;
              puVar35 = (undefined8 *)puVar35[1]) {
            pcVar18 = &DAT_00000007;
            bVar2 = FUN_71000173b0((byte *)*puVar35,(byte *)"Expect:",7);
            if (bVar2) {
              if ((byte *)*puVar35 != (byte *)0x0) {
                bVar4 = FUN_710000f6f0((byte *)*puVar35,(byte *)"Expect:",(byte *)"100-continue");
                *(byte *)(lVar31 + 0x4f68) = bVar4 & 1;
                goto LAB_710000dc58;
              }
              break;
            }
          }
          uVar9 = FUN_710000f530(plVar34,(byte *)"Expect: 100-continue\r\n",pcVar18,puVar20,puVar22,
                                 puVar26,puVar27,puVar28);
          if ((int)uVar9 != 0) {
            return uVar9 & 0xffffffff;
          }
          bVar3 = true;
          *(undefined1 *)(lVar31 + 0x4f68) = 1;
        }
      }
    }
    else {
      plVar38 = (long *)0x0;
      cVar1 = *(char *)(lVar31 + 0x251);
joined_r0x00710000dc1c:
      if (cVar1 == '\0') {
        if (*(char *)((long)param_1 + 0x822) == '\0') {
          for (plVar32 = *(long **)(*param_1 + 0x408); plVar32 != (long *)0x0;
              plVar32 = (long *)plVar32[1]) {
            pcVar18 = &DAT_0000000f;
            bVar2 = FUN_71000173b0((byte *)*plVar32,(byte *)"Content-Length:",0xf);
            if (bVar2) {
              if (*plVar32 != 0) goto LAB_710000dc20;
              break;
            }
          }
        }
        pcVar18 = (char *)plVar38;
        uVar9 = FUN_710000f530(plVar34,(byte *)"Content-Length: %ld\r\n",plVar38,puVar20,puVar22,
                               puVar26,puVar27,puVar28);
        if ((int)uVar9 != 0) {
          return uVar9 & 0xffffffff;
        }
      }
LAB_710000dc20:
      if (plVar38 != (long *)0x0) goto LAB_710000dc24;
      bVar3 = false;
    }
    uVar9 = FUN_710000f600(plVar34,&DAT_710426ee5d,2);
    if ((int)uVar9 != 0) {
      return uVar9 & 0xffffffff;
    }
    FUN_7100014ff0(lVar31,(long)plVar38);
    plVar32 = (long *)(lVar31 + 0x5068);
    plVar21 = (long *)0x0;
    uVar23 = 0;
    uVar7 = FUN_710000f280(plVar34,param_1,plVar32,0,0,puVar26,puVar27,puVar28);
    if (uVar7 != 0) {
      uVar9 = (ulong)uVar7;
      pcVar18 = "Failed sending PUT request";
      goto LAB_710000e38c;
    }
    bVar2 = !bVar3;
    bVar4 = ~bVar3;
  }
  uVar9 = (ulong)-(uint)bVar4;
  if (bVar2) {
    plVar14 = (long *)0x0;
  }
  FUN_7100019600(param_1,0,-1,1,plVar25,uVar9,plVar14,puVar28);
  lVar8 = *plVar33;
joined_r0x00710000e458:
  if (lVar8 == 0) {
    uVar39 = 0;
    iVar6 = (int)param_1[0x46];
  }
  else {
    FUN_7100015270(lVar31,lVar8);
    iVar6 = FUN_7100014700(param_1);
    uVar7 = 0;
    if (iVar6 != 0) {
      uVar7 = 0x2a;
    }
    uVar39 = (ulong)uVar7;
    lVar8 = *plVar33;
    if (lVar8 < (long)plVar38) {
      *(long *)(lVar31 + 0xe8) = lVar8;
      iVar6 = (int)param_1[0x46];
    }
    else {
      FUN_7100015de0(lVar31,(byte *)"upload completely sent off: %ld out of %ld bytes\n",lVar8,
                     plVar38,plVar25,uVar9,plVar14,puVar28);
      *(undefined1 *)(lVar31 + 0x228) = 1;
      *(undefined4 *)(lVar31 + 0x188) = 0;
      *(uint *)(lVar31 + 0x224) = *(uint *)(lVar31 + 0x224) & 0xfffffffd;
      FUN_710000bba0(lVar31,0);
      iVar6 = (int)param_1[0x46];
    }
  }
  if (iVar6 != 0x14) {
    return uVar39;
  }
  if (*(char *)(lVar31 + 0x251) == '\0') {
    return uVar39;
  }
  *(undefined1 *)(lVar31 + 0x251) = 0;
  return uVar39;
}

