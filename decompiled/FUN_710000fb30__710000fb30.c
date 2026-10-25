// addr:      710000fb30
// offset:    0xfb30
// name:      FUN_710000fb30
// mangled:   
// signature: ulong __cdecl FUN_710000fb30(long param_1, uint * param_2, size_t * param_3, uint * param_4, uint * param_5, uint * param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000fb30(long param_1,uint *param_2,size_t *param_3,uint *param_4,uint *param_5,
                    uint *param_6,undefined8 param_7,undefined8 param_8)

{
  uint *param4;
  uint *param3;
  uint *param3_00;
  long *plVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  void *__dest;
  char *pcVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  size_t sVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  char *pcVar18;
  size_t __n;
  byte *pbVar19;
  uint *puVar20;
  long lVar21;
  char cVar22;
  long lVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined1 auVar26 [16];
  undefined8 local_70;
  char local_68 [4];
  uint local_64;
  
  param4 = (uint *)(param_1 + 0x170);
  param3 = param_2 + 0x8c;
  param3_00 = param_2 + 0x8d;
  pcVar18 = *(char **)(param_1 + 0x140);
  plVar1 = (long *)(param_1 + 0x158);
  puVar12 = param_4;
  do {
    *(char **)(param_1 + 0x148) = pcVar18;
    sVar10 = *param_3;
    pvVar6 = memchr(pcVar18,10,sVar10);
    *(void **)(param_1 + 0x150) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      sVar17 = *param_3;
      uVar8 = *(long *)(param_1 + 0x138) + sVar17;
      if (uVar8 < *(ulong *)(param_1 + 0xb90)) {
        pvVar6 = *(void **)(param_1 + 0x130);
      }
      else {
        if (0x19000 < uVar8) goto LAB_7100010b40;
        lVar16 = *(long *)(param_1 + 0xb88);
        uVar15 = *(ulong *)(param_1 + 0xb90) * 2;
        lVar21 = *(long *)(param_1 + 0x130);
        uVar8 = uVar8 * 3 >> 1;
        if (uVar8 <= uVar15) {
          uVar8 = uVar15;
        }
        lVar23 = FUN_71000272b0();
        if (lVar23 == 0) goto LAB_7100010c38;
        *(ulong *)(param_1 + 0xb90) = uVar8;
        pcVar18 = *(char **)(param_1 + 0x148);
        *(long *)(param_1 + 0xb88) = lVar23;
        pvVar6 = (void *)(lVar23 + (lVar21 - lVar16));
        *(void **)(param_1 + 0x130) = pvVar6;
      }
      memcpy(pvVar6,pcVar18,sVar17);
      lVar16 = *(long *)(param_1 + 0x130);
      *(size_t *)(param_1 + 0x130) = lVar16 + sVar17;
      *(size_t *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + sVar17;
      *(undefined1 *)(lVar16 + sVar17) = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        return 0;
      }
      if (*(ulong *)(param_1 + 0x138) < 6) {
        return 0;
      }
      pbVar19 = *(byte **)(param_1 + 0xb88);
      puVar25 = *(undefined8 **)(param_1 + 0x680);
      while( true ) {
        if (puVar25 == (undefined8 *)0x0) {
          bVar3 = FUN_7100017490((byte *)"HTTP/",pbVar19,5);
          if (bVar3) {
            return 0;
          }
          *(undefined1 *)(param_1 + 0x120) = 0;
          *(undefined4 *)(param_1 + 0x124) = 2;
          return 0;
        }
        pbVar24 = (byte *)*puVar25;
        sVar10 = strlen((char *)pbVar24);
        bVar3 = FUN_7100017490(pbVar24,pbVar19,sVar10);
        if (bVar3) break;
        puVar25 = (undefined8 *)puVar25[1];
      }
      return 0;
    }
    sVar17 = (long)pvVar6 + (1 - (long)pcVar18);
    *param_3 = *param_3 - sVar17;
    pvVar6 = *(void **)(param_1 + 0x148);
    lVar16 = *(long *)(param_1 + 0x150) + 1;
    *(long *)(param_1 + 0x140) = lVar16;
    __n = lVar16 - (long)pvVar6;
    uVar8 = *(long *)(param_1 + 0x138) + __n;
    if (uVar8 < *(ulong *)(param_1 + 0xb90)) {
      __dest = *(void **)(param_1 + 0x130);
    }
    else {
      if (0x19000 < uVar8) {
LAB_7100010b40:
        FUN_7100016040(param_1,(byte *)"Avoided giant realloc for header (max is %d)!",0x19000,
                       puVar12,param_5,param_6,param_7,param_8);
        return 0x1b;
      }
      lVar16 = *(long *)(param_1 + 0xb88);
      uVar15 = *(ulong *)(param_1 + 0xb90) * 2;
      lVar21 = *(long *)(param_1 + 0x130);
      uVar8 = uVar8 * 3 >> 1;
      if (uVar8 <= uVar15) {
        uVar8 = uVar15;
      }
      lVar23 = FUN_71000272b0();
      if (lVar23 == 0) {
LAB_7100010c38:
        FUN_7100016040(param_1,(byte *)"Failed to alloc memory for big header!",sVar10,puVar12,
                       param_5,param_6,param_7,param_8);
        return 0x1b;
      }
      pvVar6 = *(void **)(param_1 + 0x148);
      *(long *)(param_1 + 0xb88) = lVar23;
      __dest = (void *)(lVar23 + (lVar21 - lVar16));
      *(ulong *)(param_1 + 0xb90) = uVar8;
      *(void **)(param_1 + 0x130) = __dest;
    }
    sVar10 = __n;
    memcpy(__dest,pvVar6,__n);
    lVar16 = *(long *)(param_1 + 0x130);
    *(size_t *)(param_1 + 0x130) = lVar16 + __n;
    *(size_t *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + __n;
    *(undefined1 *)(lVar16 + __n) = 0;
    pbVar19 = *(byte **)(param_1 + 0xb88);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x130);
    *(byte **)(param_1 + 0x158) = pbVar19;
    if ((*(int *)(param_1 + 0x128) == 0) && (5 < *(ulong *)(param_1 + 0x138))) {
      for (puVar25 = *(undefined8 **)(param_1 + 0x680); puVar25 != (undefined8 *)0x0;
          puVar25 = (undefined8 *)puVar25[1]) {
        pbVar24 = (byte *)*puVar25;
        sVar10 = strlen((char *)pbVar24);
        bVar3 = FUN_7100017490(pbVar24,pbVar19,sVar10);
        if (bVar3) goto LAB_710000fcf4;
      }
      sVar10 = 5;
      bVar3 = FUN_7100017490((byte *)"HTTP/",pbVar19,5);
      if (!bVar3) {
        *(undefined1 *)(param_1 + 0x120) = 0;
        if (*param_3 == 0) {
          *(undefined4 *)(param_1 + 0x124) = 2;
          *param_3 = sVar17;
          return 0;
        }
        *(undefined4 *)(param_1 + 0x124) = 1;
        return 0;
      }
    }
LAB_710000fcf4:
    pcVar7 = (char *)*plVar1;
    pcVar18 = pcVar7;
    if (*pcVar7 == '\n') {
LAB_710000fd28:
      *plVar1 = (long)(pcVar18 + 1);
LAB_710000fd30:
      uVar13 = *param4;
      if (uVar13 - 100 < 100) {
        if (uVar13 == 0x65) {
          if (*(int *)(param_1 + 0x18c) == 1) {
            FUN_7100015de0(param_1,(byte *)"Received 101\n",sVar10,puVar12,param_5,param_6,param_7,
                           param_8);
            *(undefined4 *)(param_1 + 0x18c) = 2;
            *(undefined1 *)(param_1 + 0x120) = 1;
            *(undefined4 *)(param_1 + 0x128) = 0;
            return 1;
          }
          *(undefined1 *)(param_1 + 0x120) = 0;
          goto LAB_710000ff88;
        }
        if (uVar13 == 100) {
          *(undefined1 *)(param_1 + 0x120) = 1;
          *(undefined4 *)(param_1 + 0x128) = 0;
          if (*(int *)(param_1 + 0x188) == 0) goto LAB_710000ff88;
          *(undefined4 *)(param_1 + 0x188) = 0;
          *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 2;
          FUN_710000bba0(param_1,0);
          lVar16 = *(long *)param_2;
          iVar5 = *(int *)(lVar16 + 0x170);
        }
        else {
          *(undefined1 *)(param_1 + 0x120) = 1;
          *(undefined4 *)(param_1 + 0x128) = 0;
          lVar16 = *(long *)param_2;
          iVar5 = *(int *)(lVar16 + 0x170);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x120) = 0;
        if (((((*(long *)(param_1 + 0xc0) == -1) && (*(char *)(param_1 + 0x250) == '\0')) &&
             (*(char *)((long)param_2 + 0x811) == '\0')) &&
            ((*param3 == 0xb && ((*(byte *)(*(long *)(param_2 + 0x216) + 0x82) >> 2 & 1) == 0)))) &&
           (*(int *)(param_1 + 0x480) != 5)) {
          FUN_7100015de0(param_1,(byte *)"no chunk, no close, no size. Assume close to signal end\n"
                         ,sVar10,puVar12,param_5,param_6,param_7,param_8);
          FUN_7100004200((long)param_2,2);
          lVar16 = *(long *)param_2;
          iVar5 = *(int *)(lVar16 + 0x170);
          goto joined_r0x00710000feac;
        }
LAB_710000ff88:
        lVar16 = *(long *)param_2;
        iVar5 = *(int *)(lVar16 + 0x170);
      }
joined_r0x00710000feac:
      if ((399 < iVar5) && (*(char *)(lVar16 + 0x6b8) != '\0')) {
        if (iVar5 == 0x197) {
          cVar22 = *(char *)((long)param_2 + 0x819);
joined_r0x00710000feb8:
          if ((cVar22 != '\0') && (*(char *)(lVar16 + 0x4d00) == '\0')) goto LAB_710000ff98;
        }
        else if (iVar5 == 0x191) {
          cVar22 = (char)param_2[0x206];
          goto joined_r0x00710000feb8;
        }
        uVar13 = *(uint *)(param_1 + 0x170);
LAB_7100010ae4:
        FUN_7100016040(param_1,(byte *)"The requested URL returned error: %d",(ulong)uVar13,puVar12,
                       param_5,param_6,param_7,param_8);
        return 0x16;
      }
LAB_710000ff98:
      uVar13 = 2;
      if (*(char *)(param_1 + 0x6bd) != '\0') {
        uVar13 = 3;
      }
      pcVar18 = *(char **)(param_1 + 0xb88);
      puVar20 = (uint *)(*(long *)(param_1 + 0x158) - (long)pcVar18);
      puVar12 = puVar20;
      auVar26 = FUN_71000167d0((long *)param_2,uVar13,pcVar18,(size_t)puVar20,param_5,param_6,
                               param_7,param_8);
      if (auVar26._0_4_ != 0) {
        return auVar26._0_8_;
      }
      *(long *)(param_1 + 0x5060) = *(long *)(param_1 + 0x5060) + (long)puVar20;
      lVar16 = *(long *)(param_1 + 0xf0) + (long)puVar20;
      *(long *)(param_1 + 0xf0) = lVar16;
      if (99 < *(int *)(param_1 + 0x170) - 100U) {
        lVar16 = 0;
      }
      *(long *)(param_1 + 0xf8) = lVar16;
      uVar8 = FUN_710000e940((long *)param_2,auVar26._8_8_,pcVar18,puVar12,param_5,param_6,param_7,
                             param_8);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      if (299 < (int)*param4) {
        if ((*(char *)((long)param_2 + 0x822) == '\0') && (*(char *)((long)param_2 + 0x811) == '\0')
           ) {
          if (*(char *)((long)param_2 + 0x823) == '\0') {
            if ((2 < *(int *)(param_1 + 0x480) - 2U) ||
               (FUN_710000bba0(param_1,0), *(char *)(param_1 + 0x228) != '\0')) goto LAB_7100010020;
            if (*(char *)(param_1 + 0x6b9) == '\0') {
              FUN_7100015de0(param_1,(byte *)"HTTP error before end of send, stop sending\n",pcVar18
                             ,puVar12,param_5,param_6,param_7,param_8);
              FUN_7100004200((long)param_2,2);
              *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfffffffd;
              *(undefined1 *)(param_1 + 0x228) = 1;
              if (*(char *)(param_1 + 0x4f68) == '\0') goto LAB_7100010020;
              *(undefined4 *)(param_1 + 0x188) = 3;
              cVar22 = *(char *)((long)param_2 + 0x823);
            }
            else {
              FUN_7100015de0(param_1,(byte *)"HTTP error before end of send, keep sending\n",pcVar18
                             ,puVar12,param_5,param_6,param_7,param_8);
              if (*(int *)(param_1 + 0x188) == 0) goto LAB_7100010020;
              *(undefined4 *)(param_1 + 0x188) = 0;
              *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 2;
              cVar22 = *(char *)((long)param_2 + 0x823);
            }
            goto joined_r0x007100010110;
          }
        }
        else {
LAB_7100010020:
          cVar22 = *(char *)((long)param_2 + 0x823);
joined_r0x007100010110:
          if (cVar22 == '\0') goto LAB_7100010044;
        }
        FUN_7100015de0(param_1,(byte *)"Keep sending data to get tossed away!\n",pcVar18,puVar12,
                       param_5,param_6,param_7,param_8);
        *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 2;
      }
LAB_7100010044:
      if (*(char *)(param_1 + 0x120) != '\0') goto LAB_71000103f4;
      if (*(char *)(param_1 + 0x6c0) == '\0') {
        if (*(char *)(param_1 + 0x250) == '\0') goto LAB_7100010b04;
        *(undefined8 *)(param_1 + 0xc0) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0xd0) = 0xffffffffffffffff;
LAB_7100010c68:
        if (*(long *)(param_1 + 0xd0) == 0) goto LAB_7100010b24;
LAB_7100010c70:
        if ((char)*param_4 == '\0') goto LAB_7100010c84;
      }
      else {
        *(undefined1 *)param_4 = 1;
LAB_7100010b04:
        if (*(long *)(param_1 + 0xc0) == -1) goto LAB_7100010c68;
        FUN_7100014fc0(param_1,*(long *)(param_1 + 0xc0));
        *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xc0);
        if (*(long *)(param_1 + 0xc0) != 0) goto LAB_7100010c70;
LAB_7100010b24:
        *(undefined1 *)param_4 = 1;
      }
      *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfffffffe;
LAB_7100010c84:
      if (*(char *)(param_1 + 0x6c8) == '\0') {
        return 0;
      }
      FUN_7100015ed0(param_1,1,*(void **)(param_1 + 0x148),(size_t)puVar20,(long)param_2,param_6,
                     param_7,param_8);
      return 0;
    }
    if (*pcVar7 == '\r') {
      pcVar18 = pcVar7 + 1;
      *plVar1 = (long)pcVar18;
      if (pcVar7[1] == '\n') goto LAB_710000fd28;
      goto LAB_710000fd30;
    }
    iVar5 = *(int *)(param_1 + 0x128);
    *(int *)(param_1 + 0x128) = iVar5 + 1;
    if (iVar5 == 0) {
      if ((*(uint *)(*(long *)(param_2 + 0x216) + 0x80) & 3) == 0) {
        if ((*(uint *)(*(long *)(param_2 + 0x216) + 0x80) >> 0x12 & 1) == 0) goto LAB_7100010d14;
        puVar20 = &local_64;
        puVar12 = param3_00;
        param_5 = param4;
        iVar5 = sscanf(pcVar7," RTSP/%d.%d %3d",(int *)puVar20,(int *)param3_00,(int *)param4);
        if (iVar5 != 3) goto LAB_7100010d14;
        *param3_00 = *param3_00 + local_64 * 10;
        *param3 = 0xb;
      }
      else {
        puVar20 = (uint *)&local_70;
        param_5 = (uint *)local_68;
        puVar12 = param3;
        param_6 = param4;
        iVar5 = sscanf(pcVar7," HTTP/%1d.%1d%c%3d",(int *)puVar20,(int *)param3,(uchar *)param_5,
                       (int *)param4);
        if ((iVar5 == 1) && ((uint)local_70 == 2)) {
          puVar20 = param4;
          iVar5 = sscanf((char *)*plVar1," HTTP/2 %d",(int *)param4);
          if (iVar5 != 1) goto LAB_7100010d20;
          iVar5 = 4;
          *param3 = 0;
          local_68[0] = ' ';
LAB_710000ff34:
          if (local_68[0] == ' ') {
            uVar13 = *param3 + (uint)local_70 * 10;
            *param3 = uVar13;
            if ((uVar13 != 0x14) && (*(int *)(param_1 + 0x18c) == 2)) {
              FUN_7100015de0(param_1,(byte *)"Lying server, not serving HTTP/2\n",puVar20,puVar12,
                             param_5,param_6,param_7,param_8);
            }
            goto LAB_71000101a8;
          }
        }
        else if (iVar5 == 4) goto LAB_710000ff34;
        if (iVar5 != 0) {
LAB_7100010d20:
          FUN_7100016040(param_1,(byte *)"Unsupported HTTP version in response\n",puVar20,puVar12,
                         param_5,param_6,param_7,param_8);
          return 1;
        }
        puVar20 = param4;
        iVar5 = sscanf((char *)*plVar1," HTTP %3d",(int *)param4);
        *param3 = 10;
        if (iVar5 == 0) {
          pbVar19 = *(byte **)(param_1 + 0x158);
          for (puVar25 = *(undefined8 **)(param_1 + 0x680); puVar25 != (undefined8 *)0x0;
              puVar25 = (undefined8 *)puVar25[1]) {
            pbVar24 = (byte *)*puVar25;
            puVar20 = (uint *)strlen((char *)pbVar24);
            bVar3 = FUN_7100017490(pbVar24,pbVar19,(long)puVar20);
            if (bVar3) goto LAB_7100010194;
          }
          puVar20 = (uint *)0x5;
          bVar3 = FUN_7100017490((byte *)"HTTP/",pbVar19,5);
          if (!bVar3) {
LAB_7100010d14:
            *(undefined1 *)(param_1 + 0x120) = 0;
            return 0;
          }
LAB_7100010194:
          *param4 = 200;
          *param3 = 10;
        }
      }
LAB_71000101a8:
      uVar13 = *param4;
      *(uint *)(param_1 + 0x5040) = uVar13;
      *(uint *)(param_1 + 0x5048) = *param3;
      uVar2 = *(uint *)(param_1 + 0x4f64);
      if ((uVar2 == 0) || ((int)*param3 < (int)uVar2)) {
        *(uint *)(param_1 + 0x4f64) = *param3;
      }
      if ((399 < (int)uVar13) && (*(char *)(param_1 + 0x6b8) != '\0')) {
        if (uVar13 == 0x197) {
          cVar22 = *(char *)((long)param_2 + 0x819);
joined_r0x007100010210:
          if (cVar22 != '\0') goto LAB_7100010230;
        }
        else if (uVar13 == 0x191) {
          cVar22 = (char)param_2[0x206];
          goto joined_r0x007100010210;
        }
        if (((*(long *)(param_1 + 0x4f98) == 0) || (uVar13 != 0x1a0)) ||
           (*(int *)(param_1 + 0x480) != 1)) {
          pcVar18 = (char *)*plVar1;
          iVar5 = strncmp(pcVar18,"HTTP",4);
          if (((iVar5 == 0) && (pcVar18 = strchr(pcVar18,0x20), pcVar18 != (char *)0x0)) &&
             (pcVar18 = pcVar18 + 1, *pcVar18 != '\0')) {
            cVar22 = '\r';
            pcVar7 = strchr(pcVar18,0xd);
            if (pcVar7 == (char *)0x0) {
              cVar22 = '\n';
              pcVar7 = strchr(pcVar18,10);
              if (pcVar7 == (char *)0x0) goto LAB_7100010ae4;
            }
            *pcVar7 = '\0';
            FUN_7100016040(param_1,(byte *)"The requested URL returned error: %s",pcVar18,puVar12,
                           param_5,param_6,param_7,param_8);
            *pcVar7 = cVar22;
            return 0x16;
          }
          goto LAB_7100010ae4;
        }
      }
LAB_7100010230:
      uVar2 = *param3;
      if (uVar2 == 0x14) {
LAB_71000102a0:
        **(undefined4 **)(param_2 + 0x2de) = 2;
LAB_71000102b0:
        uVar13 = *param4;
      }
      else {
        if (uVar2 != 10) {
          if ((uVar13 == 0x65) && (*(int *)(param_1 + 0x18c) == 1)) goto LAB_71000102a0;
          if ((10 < (int)uVar2) &&
             (((*(char *)((long)param_2 + 0x811) == '\0' && (*(long *)(param_2 + 0x2de) != 0)) &&
              (uVar8 = FUN_7100014250(param_1,(long)param_2,puVar20,puVar12,param_5,param_6,param_7,
                                      param_8), (uVar8 & 1) == 0)))) {
            **(undefined4 **)(param_2 + 0x2de) = 1;
            uVar13 = *param4;
            goto joined_r0x007100010498;
          }
          goto LAB_71000102b0;
        }
        FUN_7100015de0(param_1,(byte *)"HTTP 1.0, assume close after body\n",puVar20,puVar12,param_5
                       ,param_6,param_7,param_8);
        FUN_7100004200((long)param_2,1);
        uVar13 = *param4;
      }
joined_r0x007100010498:
      if ((uVar13 == 0x130) || (uVar13 == 0xcc)) {
        if (*(int *)(param_1 + 0x470) != 0) {
          *(undefined1 *)(param_1 + 0x5058) = 1;
        }
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(undefined1 *)(param_1 + 0x22a) = 1;
        cVar22 = *(char *)(param_1 + 0x22a);
      }
      else {
        cVar22 = *(char *)(param_1 + 0x22a);
      }
    }
    else {
      cVar22 = *(char *)(param_1 + 0x22a);
    }
    if (((cVar22 == '\0') && (*(char *)(param_1 + 0x6df) == '\0')) &&
       (bVar3 = FUN_7100017490((byte *)"Content-Length:",(byte *)*plVar1,0xf), bVar3)) {
      uVar11 = 10;
      lVar16 = FUN_71039c00b0(*(long *)(param_1 + 0x158) + 0xf,0);
      if ((*(long *)(param_1 + 0x690) != 0) && (*(long *)(param_1 + 0x690) < lVar16)) {
        FUN_7100016040(param_1,(byte *)"Maximum file size exceeded",uVar11,puVar12,param_5,param_6,
                       param_7,param_8);
        return 0x3f;
      }
      if (lVar16 < 0) {
        FUN_7100004200((long)param_2,2);
        FUN_7100015de0(param_1,(byte *)"Negative content-length: %ld, closing after transfer\n",
                       lVar16,puVar12,param_5,param_6,param_7,param_8);
      }
      else {
        *(long *)(param_1 + 0xc0) = lVar16;
        *(long *)(param_1 + 0xd0) = lVar16;
        FUN_7100014fc0(param_1,lVar16);
      }
      goto LAB_7100010390;
    }
    bVar3 = FUN_7100017490((byte *)"Content-Type:",(byte *)*plVar1,0xd);
    if (bVar3) {
      pcVar18 = FUN_710000e840((byte *)*plVar1);
      if (pcVar18 == (char *)0x0) {
        return 0x1b;
      }
      if (*pcVar18 != '\0') {
        FUN_71000272a0();
        *(char **)(param_1 + 0x5088) = pcVar18;
        goto LAB_7100010390;
      }
LAB_7100010388:
      FUN_71000272a0();
    }
    else {
      uVar11 = 7;
      bVar3 = FUN_7100017490((byte *)"Server:",(byte *)*plVar1,7);
      uVar13 = *param3;
      if (bVar3) {
        if ((int)uVar13 < 0x14) {
          pbVar19 = FUN_710000e840((byte *)*plVar1);
          if (((*(int **)(param_2 + 0x2de) != (int *)0x0) && (**(int **)(param_2 + 0x2de) == 1)) &&
             (uVar8 = FUN_7100014410(param_1,pbVar19,uVar11,puVar12,param_5,param_6,param_7,param_8)
             , (uVar8 & 1) != 0)) {
            **(undefined4 **)(param_2 + 0x2de) = 0xffffffff;
          }
          goto LAB_7100010388;
        }
        goto LAB_7100010390;
      }
      if (uVar13 == 10) {
        if (*(char *)((long)param_2 + 0x816) != '\0') {
          pcVar18 = "keep-alive";
          bVar4 = FUN_710000f6f0((byte *)*plVar1,(byte *)"Proxy-Connection:",(byte *)"keep-alive");
          if ((bVar4 & 1) != 0) {
            FUN_7100004200((long)param_2,0);
            FUN_7100015de0(param_1,(byte *)"HTTP/1.0 proxy connection set to keep alive!\n",pcVar18,
                           puVar12,param_5,param_6,param_7,param_8);
            goto LAB_7100010390;
          }
          uVar13 = *param3;
          goto LAB_71000104c8;
        }
LAB_7100010520:
        pcVar18 = "keep-alive";
        bVar4 = FUN_710000f6f0((byte *)*plVar1,(byte *)"Connection:",(byte *)"keep-alive");
        if ((bVar4 & 1) != 0) {
          FUN_7100004200((long)param_2,0);
          FUN_7100015de0(param_1,(byte *)"HTTP/1.0 connection set to keep alive!\n",pcVar18,puVar12,
                         param_5,param_6,param_7,param_8);
          goto LAB_7100010390;
        }
      }
      else {
LAB_71000104c8:
        if (uVar13 == 0xb) {
          if (*(char *)((long)param_2 + 0x816) != '\0') {
            pcVar18 = "close";
            bVar4 = FUN_710000f6f0((byte *)*plVar1,(byte *)"Proxy-Connection:",(byte *)"close");
            if ((bVar4 & 1) != 0) {
              FUN_7100004200((long)param_2,1);
              FUN_7100015de0(param_1,(byte *)"HTTP/1.1 proxy connection set close!\n",pcVar18,
                             puVar12,param_5,param_6,param_7,param_8);
              goto LAB_7100010390;
            }
            uVar13 = *param3;
            goto LAB_7100010518;
          }
        }
        else {
LAB_7100010518:
          if (uVar13 == 10) goto LAB_7100010520;
        }
      }
      bVar4 = FUN_710000f6f0((byte *)*plVar1,(byte *)"Connection:",(byte *)"close");
      if ((bVar4 & 1) == 0) {
        bVar3 = FUN_7100017490((byte *)"Transfer-Encoding:",(byte *)*plVar1,0x12);
        if (bVar3) {
          pbVar19 = (byte *)*plVar1 + 0x12;
          uVar13 = (uint)*pbVar19;
          if (*pbVar19 == 0) goto LAB_71000105ec;
          do {
            if (((uVar13 - 9 < 5) || (uVar13 == 0x2c)) || (uVar13 == 0x20)) {
              pbVar19 = pbVar19 + 1;
              bVar4 = *pbVar19;
              goto joined_r0x0071000105d4;
            }
LAB_71000105ec:
            do {
              bVar3 = FUN_7100017490((byte *)"chunked",pbVar19,7);
              if (bVar3) {
                *(undefined1 *)(param_1 + 0x250) = 1;
                FUN_7100012920((long)param_2);
                pbVar19 = pbVar19 + 7;
              }
              if (*(int *)(param_1 + 400) != 0) goto LAB_7100010390;
              bVar3 = FUN_7100017490((byte *)"identity",pbVar19,8);
              if (bVar3) {
                uVar14 = 0;
                lVar16 = 8;
              }
              else {
                bVar3 = FUN_7100017490((byte *)"deflate",pbVar19,7);
                if (bVar3) {
                  uVar14 = 1;
                  lVar16 = 7;
                }
                else {
                  bVar3 = FUN_7100017490(&DAT_710433907a,pbVar19,4);
                  if (bVar3) {
                    uVar14 = 2;
                    lVar16 = 4;
                  }
                  else {
                    bVar3 = FUN_7100017490((byte *)"x-gzip",pbVar19,6);
                    if (!bVar3) goto LAB_7100010390;
                    uVar14 = 2;
                    lVar16 = 6;
                  }
                }
              }
              *(undefined4 *)(param_1 + 400) = uVar14;
              pbVar19 = pbVar19 + lVar16;
              bVar4 = *pbVar19;
joined_r0x0071000105d4:
              uVar13 = (uint)bVar4;
            } while (uVar13 == 0);
          } while( true );
        }
        bVar3 = FUN_7100017490((byte *)"Content-Encoding:",(byte *)*plVar1,0x11);
        if ((bVar3) && (*(long *)(param_1 + 0x758) != 0)) {
          pbVar19 = (byte *)(*plVar1 + 0x11);
          bVar4 = *pbVar19;
          if (4 < bVar4 - 9) goto LAB_71000106f4;
          do {
            do {
              pbVar19 = pbVar19 + 1;
              bVar4 = *pbVar19;
            } while (bVar4 - 9 < 5);
LAB_71000106f4:
          } while (bVar4 == 0x20);
          bVar3 = FUN_7100017490((byte *)"identity",pbVar19,8);
          if (bVar3) {
            *(undefined4 *)(param_1 + 400) = 0;
          }
          else {
            bVar3 = FUN_7100017490((byte *)"deflate",pbVar19,7);
            if (bVar3) {
              *(undefined4 *)(param_1 + 400) = 1;
            }
            else {
              bVar3 = FUN_7100017490(&DAT_710433907a,pbVar19,4);
              if ((bVar3) || (bVar3 = FUN_7100017490((byte *)"x-gzip",pbVar19,6), bVar3)) {
                *(undefined4 *)(param_1 + 400) = 2;
              }
            }
          }
        }
        else {
          bVar3 = FUN_7100017490((byte *)"Content-Range:",(byte *)*plVar1,0xe);
          if (bVar3) {
            pbVar19 = (byte *)(*plVar1 + 0xe);
            uVar13 = (uint)*pbVar19;
            if (*pbVar19 != 0) {
              do {
                if ((uVar13 == 0x2a) || (uVar13 - 0x30 < 10)) {
                  if (uVar13 - 0x30 < 10) {
                    lVar16 = FUN_71039c00b0(pbVar19,0,10);
                    *(long *)(param_1 + 0x168) = lVar16;
                    if (*(long *)(param_1 + 0x4f98) == lVar16) {
                      *(undefined1 *)(param_1 + 0x160) = 1;
                    }
                    goto LAB_7100010390;
                  }
                  break;
                }
                pbVar19 = pbVar19 + 1;
                uVar13 = (uint)*pbVar19;
              } while (uVar13 != 0);
            }
            *(undefined8 *)(param_1 + 0x4f98) = 0;
          }
          else if ((*(long *)(param_1 + 0x9c8) == 0) ||
                  (bVar3 = FUN_7100017490((byte *)"Set-Cookie:",(byte *)*plVar1,0xb), !bVar3)) {
            bVar3 = FUN_7100017490((byte *)"Last-Modified:",(byte *)*plVar1,0xe);
            if ((!bVar3) ||
               ((*(int *)(param_1 + 0x470) == 0 && (*(char *)(param_1 + 0x6b1) == '\0')))) {
              bVar3 = FUN_7100017490((byte *)"WWW-Authenticate:",(byte *)*plVar1,0x11);
              if ((!bVar3) || (iVar5 = 0x191, *param4 != 0x191)) {
                bVar3 = FUN_7100017490((byte *)"Proxy-authenticate:",(byte *)*plVar1,0x13);
                if ((!bVar3) || (iVar5 = 0x197, *param4 != 0x197)) {
                  if (*param4 - 300 < 100) {
                    uVar11 = 9;
                    bVar3 = FUN_7100017490((byte *)"Location:",(byte *)*plVar1,9);
                    if ((bVar3) && (*(long *)(param_1 + 0x230) == 0)) {
                      pcVar18 = FUN_710000e840((byte *)*plVar1);
                      if (pcVar18 == (char *)0x0) {
                        return 0x1b;
                      }
                      if (*pcVar18 == '\0') {
                        FUN_71000272a0();
                      }
                      else {
                        *(char **)(param_1 + 0x230) = pcVar18;
                        if (*(char *)(param_1 + 0x6ba) != '\0') {
                          auVar26 = FUN_71000272c0();
                          uVar9 = auVar26._8_8_;
                          *(long *)(param_1 + 0x238) = auVar26._0_8_;
                          if (auVar26._0_8_ == 0) {
                            return 0x1b;
                          }
                          lVar21 = *(long *)param_2;
                          lVar16 = *(long *)(lVar21 + 600);
                          if ((lVar16 != 0) &&
                             (uVar13 = *(uint *)(lVar21 + 0x480), (uVar13 | 4) != 5)) {
                            lVar23 = *(long *)(lVar16 + 0x30);
                            if ((*(char *)((long)param_2 + 0x822) == '\0') &&
                               (*(char *)((long)param_2 + 0x81f) != '\0')) {
                              if (uVar13 == 2) {
LAB_7100010a60:
                                lVar16 = *(long *)(lVar21 + 0x4fb8);
                                *(undefined1 *)((long)param_2 + 0x823) = 0;
joined_r0x007100010a80:
                                if (lVar16 != -1) goto LAB_7100010a28;
                              }
                              else {
                                if (uVar13 == 3) {
                                  lVar16 = *(long *)(lVar16 + 8);
                                  *(undefined1 *)((long)param_2 + 0x823) = 0;
                                  goto joined_r0x007100010a80;
                                }
                                if (uVar13 == 4) goto LAB_7100010a60;
                                *(undefined1 *)((long)param_2 + 0x823) = 0;
                              }
LAB_7100010a8c:
                              FUN_7100004200((long)param_2,2);
                              *(undefined8 *)(lVar21 + 0xc0) = 0;
                              uVar9 = extraout_x1;
                            }
                            else {
                              lVar16 = 0;
                              *(undefined1 *)((long)param_2 + 0x823) = 0;
LAB_7100010a28:
                              if (lVar23 < lVar16) goto LAB_7100010a8c;
                            }
                            if ((lVar23 != 0) &&
                               (uVar8 = FUN_71000179b0((long *)param_2,uVar9,uVar11,puVar12,param_5,
                                                       param_6,param_7,param_8), (int)uVar8 != 0)) {
                              return uVar8;
                            }
                          }
                        }
                      }
                      goto LAB_7100010390;
                    }
                  }
                  if ((*(byte *)(*(long *)(param_2 + 0x216) + 0x82) >> 2 & 1) != 0) {
                    return 4;
                  }
                  goto LAB_7100010390;
                }
              }
              pbVar19 = FUN_710000e840((byte *)*plVar1);
              if (pbVar19 == (byte *)0x0) {
                return 0x1b;
              }
              FUN_710000f090((long *)param_2,(uint)(iVar5 == 0x197),pbVar19,puVar12,param_5,param_6,
                             param_7,param_8);
              goto LAB_7100010388;
            }
            local_70 = FUN_7100027620((long *)0x0);
            lVar16 = FUN_7100013750((byte *)(*(long *)(param_1 + 0x158) + 0xe));
            *(long *)(param_1 + 0x208) = lVar16;
            if (*(char *)(param_1 + 0x6b1) != '\0') {
              *(long *)(param_1 + 0x5050) = lVar16;
            }
          }
          else {
            FUN_7100016b40(param_1,2);
            param_5 = *(uint **)(param_2 + 0x22c);
            if (param_5 == (uint *)0x0) {
              param_5 = *(uint **)(param_2 + 0x36);
            }
            param_6 = *(uint **)(param_1 + 0x4f80);
            FUN_71000012c0(param_1,*(long **)(param_1 + 0x9c8),1,
                           (byte *)(*(long *)(param_1 + 0x158) + 0xb),(byte *)param_5,
                           (char *)param_6,param_7,param_8);
            FUN_7100016ba0(param_1,2);
          }
        }
      }
      else {
        FUN_7100004200((long)param_2,2);
      }
    }
LAB_7100010390:
    uVar13 = 2;
    if (*(char *)(param_1 + 0x6bd) != '\0') {
      uVar13 = 3;
    }
    if (*(char *)(param_1 + 0x6c8) != '\0') {
      param_5 = param_2;
      FUN_7100015ed0(param_1,1,*(void **)(param_1 + 0x158),*(size_t *)(param_1 + 0x138),
                     (long)param_2,param_6,param_7,param_8);
    }
    puVar12 = *(uint **)(param_1 + 0x138);
    uVar8 = FUN_71000167d0((long *)param_2,uVar13,*(char **)(param_1 + 0x158),(size_t)puVar12,
                           param_5,param_6,param_7,param_8);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    *(long *)(param_1 + 0x5060) = *(long *)(param_1 + 0x5060) + *(long *)(param_1 + 0x138);
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + *(long *)(param_1 + 0x138);
LAB_71000103f4:
    pcVar18 = *(char **)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0xb88);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (*pcVar18 == '\0') {
      return 0;
    }
  } while( true );
}

