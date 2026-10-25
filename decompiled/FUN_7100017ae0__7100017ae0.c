// addr:      7100017ae0
// offset:    0x17ae0
// name:      FUN_7100017ae0
// mangled:   
// signature: ulong __cdecl FUN_7100017ae0(size_t * * * * * * * param_1, long param_2, char * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, uint * param_6, undefined8 param_7, size_t * * * * * * * param_8)


/* WARNING: Type propagation algorithm not settling */

ulong FUN_7100017ae0(size_t *******param_1,long param_2,char *param_3,size_t *******param_4,
                    size_t *******param_5,uint *param_6,undefined8 param_7,size_t *******param_8)

{
  uint *puVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar10;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  long extraout_x1_08;
  undefined8 extraout_x1_09;
  long extraout_x1_10;
  long extraout_x1_11;
  long extraout_x1_12;
  long extraout_x1_13;
  long extraout_x1_14;
  char *pcVar15;
  long extraout_x1_15;
  size_t ************ppppppppppppsVar16;
  void *pvVar17;
  size_t ************ppppppppppppsVar18;
  size_t ************ppppppppppppsVar19;
  size_t ******ppppppsVar20;
  undefined1 *puVar21;
  char cVar22;
  long lVar23;
  size_t ***********pppppppppppsVar24;
  size_t ************ppppppppppppsVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  char local_70 [4];
  uint local_6c;
  size_t ***********local_68;
  
  uVar7 = *(uint *)(param_1 + 0x16b);
  *(undefined4 *)(param_1 + 0x16b) = 0;
  uVar8 = *(uint *)(param_2 + 0x224);
  if ((uVar8 & 0x15) == 1) {
    uVar6 = *(uint *)(param_1 + 0x10e);
    if ((uVar8 & 0x2a) == 2) goto LAB_7100017b5c;
LAB_7100017b40:
    ppppppppppppsVar16 = (size_t ************)&DAT_ffffffff;
  }
  else {
    uVar6 = 0xffffffff;
    if ((uVar8 & 0x2a) != 2) goto LAB_7100017b40;
LAB_7100017b5c:
    ppppppppppppsVar16 = (size_t ************)(ulong)*(uint *)((long)param_1 + 0x874);
  }
  uVar7 = uVar7 | (*param_1)[0x9f8] != (size_t *****)0x0;
  lVar13 = param_2;
  ppppppppppppsVar18 = (size_t ************)param_4;
  if (uVar7 == 0) {
    ppppppppppppsVar18 = (size_t ************)0x0;
    uVar7 = FUN_7100015800(uVar6,0xffffffff,(uint)ppppppppppppsVar16,0);
    lVar13 = extraout_x1;
  }
  if (uVar7 == 4) {
    FUN_7100016040(param_2,(byte *)"select/poll returned error",ppppppppppppsVar16,
                   ppppppppppppsVar18,param_5,param_6,param_7,param_8);
    return 0x37;
  }
  puVar1 = (uint *)(param_2 + 0x224);
  uVar8 = *puVar1;
  plVar2 = (long *)(param_2 + 0xc0);
  if (((uVar8 & 1) == 0) || (((uVar7 & 1) == 0 && (*(char *)((long)param_1 + 0x829) == '\0')))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    ppppppppppppsVar25 = (size_t ************)0x0;
    iVar10 = 100;
    local_6c = local_6c & 0xffffff00;
    *param_3 = '\0';
    *(undefined1 *)param_4 = 0;
    do {
      ppppppppppppsVar19 = *(size_t *************)(param_2 + 0x670);
      ppppppppppppsVar18 = ppppppppppppsVar19;
      if ((*(long *)(param_2 + 0xc0) == -1) || (*(char *)(param_2 + 0x120) != '\0')) {
        if (ppppppppppppsVar19 == (size_t ************)0x0) goto LAB_7100017d6c;
LAB_7100017cf0:
        ppppppppppppsVar16 = *(size_t *************)(param_2 + 0x218);
        param_5 = (size_t *******)&local_68;
        uVar8 = FUN_71000169e0((long *)param_1,*(int *)(param_1 + 0x10e),ppppppppppppsVar16,
                               (ulong)ppppppppppppsVar18,(size_t *)param_5);
        lVar13 = extraout_x1_04;
        if (uVar8 == 0) {
          lVar23 = *(long *)(param_2 + 0xe0);
          goto joined_r0x007100017d74;
        }
        if (uVar8 != 0x51) {
          return (ulong)uVar8;
        }
        goto joined_r0x0071000182d8;
      }
      ppppppppppppsVar18 =
           (size_t ************)(*(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xe0));
      if ((long)ppppppppppppsVar19 <= (long)ppppppppppppsVar18) {
        ppppppppppppsVar18 = ppppppppppppsVar19;
      }
      if (ppppppppppppsVar18 != (size_t ************)0x0) goto LAB_7100017cf0;
LAB_7100017d6c:
      local_68 = (size_t ***********)0x0;
      lVar23 = *(long *)(param_2 + 0xe0);
joined_r0x007100017d74:
      if (((lVar23 == 0) && (*(long *)(param_2 + 0xe8) == 0)) &&
         (FUN_7100015020(param_2,7), lVar13 = extraout_x1_05, *(int *)(param_2 + 0x188) != 0)) {
        auVar27 = FUN_7100017740();
        lVar13 = auVar27._8_8_;
        *(undefined1 (*) [16])(param_2 + 0x178) = auVar27;
        if (local_68 == (size_t ************)0x0) goto LAB_7100017d40;
LAB_7100017d84:
        bVar4 = false;
        bVar3 = bVar4;
        if (0 < (long)local_68) goto LAB_7100017d94;
LAB_7100017d90:
        bVar3 = true;
        if (bVar4) goto LAB_7100017d94;
        *puVar1 = *puVar1 & 0xfffffffe;
joined_r0x0071000182d8:
        uVar6 = 1;
        goto joined_r0x0071000182d8;
      }
      if (local_68 != (size_t ************)0x0) goto LAB_7100017d84;
LAB_7100017d40:
      bVar4 = *(long *)(param_2 + 0x210) == 0;
      bVar3 = bVar4;
      if ((long)local_68 < 1) goto LAB_7100017d90;
LAB_7100017d94:
      uVar6 = 1;
      *(undefined1 *)(*(long *)(param_2 + 0x218) + (long)local_68) = 0;
      *(undefined8 *)(param_2 + 0x140) = *(undefined8 *)(param_2 + 0x218);
      if (param_1[0x10b][0xd] != (size_t *****)0x0) {
        ppppppppppppsVar16 = &local_68;
        ppppppppppppsVar18 = (size_t ************)&local_6c;
        auVar27 = (*(code *)param_1[0x10b][0xd])(param_2,param_1);
        lVar13 = auVar27._8_8_;
        if (auVar27._0_4_ != 0) {
          return auVar27._0_8_;
        }
        if ((char)local_6c != '\0') goto joined_r0x0071000182d8;
      }
      if (*(char *)(param_2 + 0x120) != '\0') {
        ppppppppppppsVar16 = &local_68;
        ppppppppppppsVar18 = (size_t ************)local_70;
        local_70[0] = '\0';
        uVar11 = FUN_710000fb30(param_2,(uint *)param_1,(size_t *)ppppppppppppsVar16,
                                (uint *)ppppppppppppsVar18,(uint *)param_5,param_6,param_7,param_8);
        if ((int)uVar11 != 0) {
          return uVar11;
        }
        lVar13 = extraout_x1_06;
        if (((param_1[0x10b][0xd] != (size_t *****)0x0) && (*(long *)(param_2 + 0xd0) < 1)) &&
           (0 < (long)local_68)) {
          ppppppppppppsVar16 = &local_68;
          ppppppppppppsVar18 = (size_t ************)&local_6c;
          auVar27 = (*(code *)param_1[0x10b][0xd])(param_2,param_1);
          lVar13 = auVar27._8_8_;
          if (auVar27._0_4_ != 0) {
            return auVar27._0_8_;
          }
          if ((char)local_6c != '\0') goto joined_r0x0071000182d8;
        }
        if (local_70[0] != '\0') {
          if (0 < (long)local_68) {
            bVar4 = FUN_71000093f0((long)(*param_1)[0x15],1);
            ppppppppppppsVar18 = *(size_t *************)(param_2 + 0x4f80);
            ppppppppppppsVar16 = (size_t ************)local_68;
            if (bVar4) {
              FUN_7100015de0(param_2,(byte *)
                                     "Rewinding stream by : %zd bytes on url %s (zero-length body)\n"
                             ,local_68,ppppppppppppsVar18,param_5,param_6,param_7,param_8);
              param_1[0x123] = (size_t ******)((long)param_1[0x123] - (long)local_68);
              *(undefined1 *)((long)param_1 + 0x829) = 1;
              lVar13 = extraout_x1_11;
            }
            else {
              FUN_7100015de0(param_2,(byte *)
                                     "Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)\n"
                             ,local_68,ppppppppppppsVar18,param_5,param_6,param_7,param_8);
              lVar13 = extraout_x1_13;
            }
          }
          goto joined_r0x0071000182d8;
        }
      }
      if (((*(long *)(param_2 + 0x140) == 0) || (*(char *)(param_2 + 0x120) != '\0')) ||
         ((bool)((long)local_68 < 1 & (bVar3 ^ 1U)))) goto LAB_7100018138;
      if (*(char *)(param_2 + 0x6c0) != '\0') {
        FUN_7100004200((long)param_1,2);
        *param_3 = '\x01';
        return 8;
      }
      if ((bVar3 || *(long *)(param_2 + 0x210) != 0) ||
         (((ulong)param_1[0x10b][0x10] & 0x40003) == 0)) goto LAB_7100017ef4;
      if (*(long *)(param_2 + 0x238) != 0) {
        if (*(char *)((long)param_1 + 0x811) == '\0') {
          *(undefined1 *)(param_2 + 0x229) = 1;
          FUN_7100015de0(param_2,(byte *)"Ignoring the response-body\n",ppppppppppppsVar16,
                         ppppppppppppsVar18,param_5,param_6,param_7,param_8);
          goto LAB_7100017ec0;
        }
LAB_7100018888:
        *puVar1 = *puVar1 & 0xfffffffe;
        bVar4 = true;
        goto LAB_7100018594;
      }
LAB_7100017ec0:
      if ((((*(long *)(param_2 + 0x4f98) != 0) && (*(char *)(param_2 + 0x160) == '\0')) &&
          (*(int *)(param_2 + 0x480) == 1)) && (*(char *)(param_2 + 0x229) == '\0')) {
        if (*plVar2 != *(long *)(param_2 + 0x4f98)) {
          FUN_7100016040(param_2,(byte *)
                                 "HTTP server doesn\'t seem to support byte ranges. Cannot resume.",
                         ppppppppppppsVar16,ppppppppppppsVar18,param_5,param_6,param_7,param_8);
          return 0x21;
        }
        FUN_7100015de0(param_2,(byte *)"The entire document is already downloaded",
                       ppppppppppppsVar16,ppppppppppppsVar18,param_5,param_6,param_7,param_8);
        FUN_7100004200((long)param_1,1);
        goto LAB_7100018888;
      }
      if (((*(int *)(param_2 + 0x470) != 0) && (*(long *)(param_2 + 0x4f90) == 0)) &&
         ((lVar13 = *(long *)(param_2 + 0x208), lVar13 != 0 &&
          (lVar23 = *(long *)(param_2 + 0x478), lVar23 != 0)))) {
        if (*(int *)(param_2 + 0x470) == 2) {
          if (lVar23 <= lVar13) {
            pcVar15 = "The requested document is not old enough\n";
LAB_71000188c0:
            FUN_7100015de0(param_2,(byte *)pcVar15,ppppppppppppsVar16,ppppppppppppsVar18,param_5,
                           param_6,param_7,param_8);
            *(undefined1 *)(param_2 + 0x5058) = 1;
            *param_3 = '\x01';
            *(undefined4 *)(param_2 + 0x5040) = 0x130;
            FUN_7100015de0(param_2,(byte *)"Simulate a HTTP 304 response!\n",ppppppppppppsVar16,
                           ppppppppppppsVar18,param_5,param_6,param_7,param_8);
            FUN_7100004200((long)param_1,1);
            cVar22 = *param_3;
            lVar13 = extraout_x1_15;
            goto joined_r0x007100018908;
          }
        }
        else if (lVar13 <= lVar23) {
          pcVar15 = "The requested document is not new enough\n";
          goto LAB_71000188c0;
        }
      }
LAB_7100017ef4:
      *(long *)(param_2 + 0x210) = *(long *)(param_2 + 0x210) + 1;
      if (*(char *)(param_2 + 0x6c8) != '\0') {
        if (*(int *)(param_2 + 0x124) != 0) {
          ppppppppppppsVar16 = *(size_t *************)(param_2 + 0xb88);
          ppppppppppppsVar18 = *(size_t *************)(param_2 + 0x138);
          param_5 = param_1;
          FUN_7100015ed0(param_2,3,ppppppppppppsVar16,(size_t)ppppppppppppsVar18,(long)param_1,
                         param_6,param_7,param_8);
          if (*(int *)(param_2 + 0x124) != 1) goto LAB_7100017f4c;
        }
        ppppppppppppsVar16 = *(size_t *************)(param_2 + 0x140);
        ppppppppppppsVar18 = (size_t ************)local_68;
        param_5 = param_1;
        FUN_7100015ed0(param_2,3,ppppppppppppsVar16,(size_t)local_68,(long)param_1,param_6,param_7,
                       param_8);
      }
LAB_7100017f4c:
      if (*(char *)(param_2 + 0x250) == '\0') {
LAB_7100017f7c:
        iVar9 = *(int *)(param_2 + 0x124);
      }
      else {
        ppppppppppppsVar18 = &local_68;
        ppppppppppppsVar16 = (size_t ************)local_68;
        uVar12 = FUN_7100012930((long *)param_1,*(byte **)(param_2 + 0x140),(byte *)local_68,
                                (byte *)ppppppppppppsVar18,param_5,param_6,param_7,param_8);
        iVar9 = (int)uVar12;
        if (0 < iVar9) {
          if (iVar9 == 4) {
            FUN_7100016040(param_2,(byte *)"Failed writing data",ppppppppppppsVar16,
                           ppppppppppppsVar18,param_5,param_6,param_7,param_8);
            return 0x17;
          }
          puVar14 = FUN_7100012dc0(iVar9);
          FUN_7100016040(param_2,(byte *)"%s in chunked-encoding",puVar14,ppppppppppppsVar18,param_5
                         ,param_6,param_7,param_8);
          return 0x38;
        }
        if (iVar9 != -1) goto LAB_7100017f7c;
        *puVar1 = *puVar1 & 0xfffffffe;
        ppppppppppppsVar19 = (size_t ************)param_1[9];
        if (ppppppppppppsVar19 == (size_t ************)0x0) goto LAB_7100017f7c;
        ppppppppppppsVar16 = ppppppppppppsVar19;
        FUN_7100015de0((long)*param_1,(byte *)"Leftovers after chunking: %zu bytes\n",
                       ppppppppppppsVar19,ppppppppppppsVar18,param_5,param_6,param_7,param_8);
        bVar4 = FUN_71000093f0((long)(*param_1)[0x15],1);
        if (!bVar4) goto LAB_7100017f7c;
        ppppppppppppsVar16 = ppppppppppppsVar19;
        FUN_7100015de0((long)*param_1,(byte *)"Rewinding %zu bytes\n",ppppppppppppsVar19,
                       ppppppppppppsVar18,param_5,param_6,param_7,param_8);
        param_1[0x123] = (size_t ******)((long)param_1[0x123] - (long)ppppppppppppsVar19);
        *(undefined1 *)((long)param_1 + 0x829) = 1;
        iVar9 = *(int *)(param_2 + 0x124);
      }
      if ((iVar9 != 0) && (*(char *)(param_2 + 0x229) == '\0')) {
        *(long *)(param_2 + 0xe0) = *(long *)(param_2 + 0xe0) + *(long *)(param_2 + 0x138);
      }
      lVar13 = *(long *)(param_2 + 0xd0);
      if (lVar13 == -1) {
        lVar23 = *(long *)(param_2 + 0xe0);
      }
      else {
        lVar23 = *(long *)(param_2 + 0xe0);
        ppppppppppppsVar19 =
             (size_t ************)((undefined1 *)((long)local_68 + lVar23) + -lVar13);
        if (lVar13 <= (long)local_68 + lVar23) {
          if ((ppppppppppppsVar19 != (size_t ************)0x0) &&
             (*(char *)(param_2 + 0x229) == '\0')) {
            bVar4 = FUN_71000093f0((long)(*param_1)[0x15],1);
            ppppppppppppsVar16 = ppppppppppppsVar19;
            if (bVar4) {
              ppppppppppppsVar18 = *(size_t *************)(param_2 + 0x4f80);
              param_5 = *(size_t ********)(param_2 + 0xc0);
              param_6 = *(uint **)(param_2 + 0xd0);
              param_7 = *(undefined8 *)(param_2 + 0xe0);
              FUN_7100015de0(param_2,(byte *)
                                     "Rewinding stream by : %zu bytes on url %s (size = %ld, maxdownload = %ld, bytecount = %ld, nread = %zd)\n"
                             ,ppppppppppppsVar19,ppppppppppppsVar18,param_5,param_6,param_7,local_68
                            );
              param_1[0x123] = (size_t ******)((long)param_1[0x123] - (long)ppppppppppppsVar19);
              *(undefined1 *)((long)param_1 + 0x829) = 1;
              param_8 = (size_t *******)local_68;
            }
            else {
              ppppppppppppsVar18 = *(size_t *************)(param_2 + 0xc0);
              param_5 = *(size_t ********)(param_2 + 0xd0);
              param_6 = *(uint **)(param_2 + 0xe0);
              FUN_7100015de0(param_2,(byte *)
                                     "Excess found in a non pipelined read: excess = %zu, size = %ld, maxdownload = %ld, bytecount = %ld\n"
                             ,ppppppppppppsVar19,ppppppppppppsVar18,param_5,param_6,param_7,param_8)
              ;
            }
          }
          lVar23 = *(long *)(param_2 + 0xe0);
          uVar11 = *(long *)(param_2 + 0xd0) - lVar23;
          local_68 = (size_t ***********)(uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU));
          *(uint *)(param_2 + 0x224) = *(uint *)(param_2 + 0x224) & 0xfffffffe;
          ppppppppppppsVar25 = ppppppppppppsVar19;
        }
      }
      *(undefined1 **)(param_2 + 0xe0) = (undefined1 *)((long)local_68 + lVar23);
      FUN_71000151d0(param_2,(long)local_68 + lVar23);
      lVar13 = extraout_x1_07;
      if (*(char *)(param_2 + 0x250) == '\0') {
        uVar8 = *(uint *)(param_2 + 0x124);
        if ((local_68 == (size_t ************)0x0) && (!bVar3 && uVar8 == 0)) goto LAB_7100018138;
        if (uVar8 != 0) {
          if (*(char *)(param_2 + 0x229) == '\0') {
            ppppppppppppsVar18 = *(size_t *************)(param_2 + 0xd0);
            ppppppppppppsVar16 = *(size_t *************)(param_2 + 0xb88);
            if ((long)*(size_t *************)(param_2 + 0x138) <= (long)ppppppppppppsVar18 ||
                ppppppppppppsVar18 == (size_t ************)0xffffffffffffffff) {
              ppppppppppppsVar18 = *(size_t *************)(param_2 + 0x138);
            }
            auVar27 = FUN_71000167d0((long *)param_1,1,(char *)ppppppppppppsVar16,
                                     (size_t)ppppppppppppsVar18,param_5,param_6,param_7,param_8);
            lVar13 = auVar27._8_8_;
            if (auVar27._0_4_ != 0) {
              return auVar27._0_8_;
            }
            uVar8 = *(uint *)(param_2 + 0x124);
          }
          if (uVar8 < 2) goto LAB_71000181d4;
          goto LAB_71000181e8;
        }
LAB_71000181d4:
        if (*(char *)((long)*param_1 + 0x6f1) == '\0') {
          iVar9 = *(int *)(param_2 + 400);
          if (iVar9 == 2) {
            if (*(char *)(param_2 + 0x229) == '\0') {
              ppppppppppppsVar16 = (size_t ************)local_68;
              uVar8 = FUN_71000130b0((long *)param_1,(long)plVar2,(char *)local_68,
                                     (ulong)ppppppppppppsVar18,param_5,param_6,param_7,param_8);
              auVar27._4_4_ = 0;
              auVar27._0_4_ = uVar8;
              auVar27._8_8_ = extraout_x1_09;
              *(undefined4 *)(param_2 + 0x124) = 0;
              goto joined_r0x007100018274;
            }
          }
          else {
            if (iVar9 != 1) {
              if (iVar9 != 0) {
                FUN_7100016040(param_2,(byte *)
                                       "Unrecognized content encoding type. libcurl understands `identity\', `deflate\' and `gzip\' content encodings."
                               ,ppppppppppppsVar16,ppppppppppppsVar18,param_5,param_6,param_7,
                               param_8);
                *(undefined4 *)(param_2 + 0x124) = 0;
                return 0x3d;
              }
              goto LAB_71000181e0;
            }
            if (*(char *)(param_2 + 0x229) == '\0') {
              ppppppppppppsVar16 = (size_t ************)local_68;
              uVar8 = FUN_7100012df0((long *)param_1,(long)plVar2,local_68,(ulong)ppppppppppppsVar18
                                     ,param_5,param_6,param_7,param_8);
              auVar27._4_4_ = 0;
              auVar27._0_4_ = uVar8;
              auVar27._8_8_ = extraout_x1_10;
              *(undefined4 *)(param_2 + 0x124) = 0;
              goto joined_r0x007100018274;
            }
          }
        }
        else {
LAB_71000181e0:
          if (*(char *)(param_2 + 0x229) == '\0') {
            ppppppppppppsVar16 = *(size_t *************)(param_2 + 0x140);
            ppppppppppppsVar18 = (size_t ************)local_68;
            auVar27 = FUN_71000167d0((long *)param_1,1,(char *)ppppppppppppsVar16,(size_t)local_68,
                                     param_5,param_6,param_7,param_8);
            *(undefined4 *)(param_2 + 0x124) = 0;
            uVar8 = auVar27._0_4_;
joined_r0x007100018274:
            lVar13 = auVar27._8_8_;
            if (uVar8 != 0) {
              return auVar27._0_8_;
            }
            goto LAB_7100018138;
          }
        }
LAB_71000181e8:
        *(undefined4 *)(param_2 + 0x124) = 0;
        ppppppsVar20 = param_1[0x10b];
      }
      else {
LAB_7100018138:
        ppppppsVar20 = param_1[0x10b];
      }
      if (((ppppppppppppsVar25 != (size_t ************)0x0) &&
          (ppppppsVar20[0xd] != (size_t *****)0x0)) && (*(char *)((long)param_1 + 0x829) == '\0')) {
        *(undefined1 **)(param_2 + 0x140) =
             (undefined1 *)(*(long *)(param_2 + 0x140) + (long)local_68);
        ppppppppppppsVar16 = &local_68;
        ppppppppppppsVar18 = (size_t ************)&local_6c;
        local_68 = (size_t ***********)ppppppppppppsVar25;
        auVar27 = (*(code *)param_1[0x10b][0xd])(param_2,param_1);
        lVar13 = auVar27._8_8_;
        if (auVar27._0_4_ != 0) {
          return auVar27._0_8_;
        }
        if ((char)local_6c != '\0') {
          *puVar1 = *puVar1 | 1;
          goto joined_r0x0071000182d8;
        }
joined_r0x0071000182d8:
        if (0 < iVar10) {
          uVar8 = *puVar1;
          goto joined_r0x0071000185fc;
        }
        break;
      }
      if (bVar3) {
        *puVar1 = *puVar1 & 0xfffffffe;
        ppppppsVar20 = param_1[0x10b];
      }
      if ((((ulong)ppppppsVar20[0x10] & 0x30) == 0) &&
         (bVar5 = thunk_FUN_7100026eb0((long)param_1,0), lVar13 = extraout_x1_08, (bVar5 & 1) == 0))
      goto joined_r0x0071000182d8;
      iVar10 = iVar10 + -1;
    } while (iVar10 != -1);
    *(undefined4 *)(param_1 + 0x16b) = 1;
    *(undefined1 *)param_4 = 1;
    uVar8 = *puVar1;
joined_r0x0071000185fc:
    if ((uVar8 & 3) == 2) {
      if (*(char *)((long)param_1 + 0x811) != '\0') {
        FUN_7100015de0(param_2,(byte *)"we are done reading and this is set to close, stop send\n",
                       ppppppppppppsVar16,ppppppppppppsVar18,param_5,param_6,param_7,param_8);
        *(uint *)(param_2 + 0x224) = *(uint *)(param_2 + 0x224) & 0xfffffffd;
        lVar13 = extraout_x1_14;
      }
      cVar22 = *param_3;
    }
    else {
      cVar22 = *param_3;
    }
joined_r0x007100018908:
    if (cVar22 != '\0') {
      return 0;
    }
    uVar8 = *puVar1;
  }
  uVar26 = uVar6;
  if (((uVar7 & uVar8) >> 1 & 1) != 0) {
    if ((*(long *)(param_2 + 0xe0) == 0) && (*(long *)(param_2 + 0xe8) == 0)) {
      FUN_7100015020(param_2,7);
      lVar13 = extraout_x1_00;
    }
    ppppppppppppsVar18 = *(size_t *************)(param_2 + 0x240);
    uVar26 = uVar6 | 2;
    pppppppppppsVar24 = (size_t ***********)ppppppppppppsVar18;
    if (ppppppppppppsVar18 == (size_t ************)0x0) {
      *(long *)(param_2 + 0x248) = param_2 + 0xba0;
      if (*(char *)(param_2 + 0x228) == '\0') {
        if ((*(int *)(param_2 + 0x188) != 2) || (*(int *)(*(long *)(param_2 + 600) + 0x78) != 2)) {
          if (((ulong)param_1[0x10b][0x10] & 0x40003) == 0) {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(*(long *)(param_2 + 600) + 0x78) == 1;
          }
          ppppppppppppsVar16 = (size_t ************)&local_6c;
          uVar11 = FUN_71000177d0((long *)param_1,0x4000,(uint *)ppppppppppppsVar16,0,param_5,
                                  param_6,param_7,param_8);
          if ((int)uVar11 != 0) {
            return uVar11;
          }
          pppppppppppsVar24 = (size_t ***********)(long)(int)local_6c;
          lVar13 = extraout_x1_12;
          if (local_6c == 0) goto LAB_71000182a0;
          if (0 < (int)local_6c) {
            *(size_t ************)(param_2 + 0x240) = pppppppppppsVar24;
            if ((!bVar4) &&
               ((*(char *)(param_2 + 0x6b3) != '\0' || (*(char *)(param_2 + 0x422) != '\0')))) {
              lVar13 = *(long *)(param_2 + 0x4c28);
              if (lVar13 == 0) {
                lVar13 = FUN_7100027290();
                *(long *)(param_2 + 0x4c28) = lVar13;
                if (lVar13 == 0) {
                  FUN_7100016040(param_2,(byte *)"Failed to alloc scratch buffer!",
                                 ppppppppppppsVar16,ppppppppppppsVar18,param_5,param_6,param_7,
                                 param_8);
                  return 0x1b;
                }
              }
              puVar21 = (undefined1 *)0x0;
              ppppppppppppsVar16 = (size_t ************)0x0;
              cVar22 = **(char **)(param_2 + 0x248);
              if (cVar22 == '\n') goto LAB_7100018798;
LAB_710001876c:
              *(char *)(lVar13 + (long)ppppppppppppsVar16) = cVar22;
              ppppppppppppsVar18 = ppppppppppppsVar16;
              while (ppppppppppppsVar16 = (size_t ************)((long)ppppppppppppsVar18 + 1),
                    (undefined1 *)((long)pppppppppppsVar24 + -1) != puVar21) {
                while( true ) {
                  lVar13 = *(long *)(param_2 + 0x4c28);
                  puVar21 = puVar21 + 1;
                  cVar22 = puVar21[*(long *)(param_2 + 0x248)];
                  if (cVar22 != '\n') goto LAB_710001876c;
LAB_7100018798:
                  *(undefined1 *)(lVar13 + (long)ppppppppppppsVar16) = 0xd;
                  ppppppppppppsVar18 = (size_t ************)((long)ppppppppppppsVar16 + 1);
                  *(undefined1 *)(*(long *)(param_2 + 0x4c28) + (long)ppppppppppppsVar18) = 10;
                  if ((*(char *)(param_2 + 0x422) != '\0') || (*(long *)(param_2 + 0x4fb8) == -1))
                  break;
                  *(long *)(param_2 + 0x4fb8) = *(long *)(param_2 + 0x4fb8) + 1;
                  ppppppppppppsVar16 = (size_t ************)((long)ppppppppppppsVar16 + 2);
                  if ((undefined1 *)((long)pppppppppppsVar24 + -1) == puVar21) goto LAB_71000187d0;
                }
              }
LAB_71000187d0:
              if (ppppppppppppsVar16 == (size_t ************)pppppppppppsVar24) {
                pppppppppppsVar24 = (size_t ***********)*(size_t *************)(param_2 + 0x240);
              }
              else {
                *(undefined8 *)(param_2 + 0x248) = *(undefined8 *)(param_2 + 0x4c28);
                *(size_t *************)(param_2 + 0x240) = ppppppppppppsVar16;
                pppppppppppsVar24 = (size_t ***********)ppppppppppppsVar16;
              }
            }
            goto LAB_7100017bf8;
          }
          *puVar1 = *puVar1 & 0xfffffffd;
          if (*(char *)((long)param_1 + 0x823) == '\0') goto LAB_7100018384;
          goto LAB_71000182b8;
        }
        *(undefined4 *)(param_2 + 0x188) = 1;
        *(uint *)(param_2 + 0x224) = *(uint *)(param_2 + 0x224) & 0xfffffffd;
        auVar27 = FUN_7100017740();
        *(undefined1 (*) [16])(param_2 + 0x178) = auVar27;
        FUN_71000086c0(param_2,*(long *)(param_2 + 0x968),0,ppppppppppppsVar18,param_5,param_6,
                       param_7,param_8);
        uVar26 = uVar6;
      }
      else {
LAB_71000182a0:
        if (((*puVar1 >> 5 & 1) == 0) &&
           (*puVar1 = *puVar1 & 0xfffffffd, *(char *)((long)param_1 + 0x823) != '\0')) {
LAB_71000182b8:
          uVar11 = FUN_71000179b0((long *)param_1,lVar13,ppppppppppppsVar16,ppppppppppppsVar18,
                                  param_5,param_6,param_7,param_8);
          if ((int)uVar11 != 0) {
            return uVar11;
          }
        }
      }
    }
    else {
LAB_7100017bf8:
      pvVar17 = *(void **)(param_2 + 0x248);
      param_5 = (size_t *******)&local_68;
      uVar7 = FUN_7100016180((long)param_1,*(int *)((long)param_1 + 0x874),pvVar17,pppppppppppsVar24
                             ,(long *)param_5);
      if (uVar7 != 0) {
        return (ulong)uVar7;
      }
      uVar12 = extraout_x1_01;
      if (*(char *)(param_2 + 0x6c8) != '\0') {
        pvVar17 = *(void **)(param_2 + 0x248);
        pppppppppppsVar24 = local_68;
        param_5 = param_1;
        FUN_7100015ed0(param_2,4,pvVar17,(size_t)local_68,(long)param_1,param_6,param_7,param_8);
        uVar12 = extraout_x1_02;
      }
      puVar21 = (undefined1 *)(*(long *)(param_2 + 0xe8) + (long)local_68);
      *(undefined1 **)(param_2 + 0xe8) = puVar21;
      if (puVar21 == *(undefined1 **)(param_2 + 0x4fb8)) {
        *(undefined1 *)(param_2 + 0x228) = 1;
        FUN_7100015de0(param_2,(byte *)"We are completely uploaded and fine\n",pvVar17,
                       pppppppppppsVar24,param_5,param_6,param_7,param_8);
        uVar12 = extraout_x1_03;
      }
      lVar13 = *(long *)(param_2 + 0x240) - (long)local_68;
      if (lVar13 == 0) {
        *(long *)(param_2 + 0x248) = param_2 + 0xba0;
        *(undefined8 *)(param_2 + 0x240) = 0;
        if (((*(char *)(param_2 + 0x228) != '\0') &&
            (*puVar1 = *puVar1 & 0xfffffffd, *(char *)((long)param_1 + 0x823) != '\0')) &&
           (uVar11 = FUN_71000179b0((long *)param_1,uVar12,pvVar17,pppppppppppsVar24,param_5,param_6
                                    ,param_7,param_8), (int)uVar11 != 0)) {
          return uVar11;
        }
      }
      else {
        *(long *)(param_2 + 0x240) = lVar13;
        *(undefined1 **)(param_2 + 0x248) =
             (undefined1 *)(*(long *)(param_2 + 0x248) + (long)local_68);
      }
      FUN_7100015270(param_2,*(long *)(param_2 + 0xe8));
      ppppppppppppsVar18 = (size_t ************)pppppppppppsVar24;
    }
  }
LAB_7100018384:
  auVar27 = FUN_7100017740();
  *(undefined1 (*) [16])(param_2 + 0x110) = auVar27;
  if (uVar26 == 0) {
    if (*(int *)(param_2 + 0x188) == 1) {
      lVar13 = *(long *)(param_2 + 0x178);
      ppppppppppppsVar18 = *(size_t *************)(param_2 + 0x180);
      lVar23 = FUN_7100017750(auVar27._0_8_,auVar27._8_4_,lVar13,(int)ppppppppppppsVar18);
      if (*(long *)(param_2 + 0x968) <= lVar23) {
        *(undefined4 *)(param_2 + 0x188) = 0;
        *(uint *)(param_2 + 0x224) = *(uint *)(param_2 + 0x224) | 2;
        FUN_710000bba0(param_2,0);
        FUN_7100015de0(param_2,(byte *)"Done waiting for 100-continue\n",lVar13,ppppppppppppsVar18,
                       param_5,param_6,param_7,param_8);
      }
    }
LAB_7100018474:
    iVar10 = FUN_7100014700((long *)param_1);
  }
  else {
    if (*(undefined8 **)(param_2 + 200) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 200) = *(undefined8 *)(param_2 + 0xe0);
    }
    if (*(undefined8 **)(param_2 + 0xd8) == (undefined8 *)0x0) goto LAB_7100018474;
    **(undefined8 **)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0xe8);
    iVar10 = FUN_7100014700((long *)param_1);
  }
  if (iVar10 == 0) {
    lVar13 = *(long *)(param_2 + 0x118);
    uVar11 = FUN_7100016cd0(param_2,*(long *)(param_2 + 0x110),lVar13,(long)ppppppppppppsVar18,
                            param_5,param_6,param_7,param_8);
    if ((int)uVar11 != 0) {
      return uVar11;
    }
    if (*puVar1 == 0) {
      if (*(char *)(param_2 + 0x6c0) == '\0') {
        lVar23 = *plVar2;
        if (lVar23 != -1) {
          lVar13 = lVar23 - *(long *)(param_2 + 0xe0);
          if (((lVar13 != 0) && (*(long *)(param_2 + 0xe0) != *(long *)(param_2 + 0x4f70) + lVar23))
             && (*(long *)(param_2 + 0x238) == 0)) {
            FUN_7100016040(param_2,(byte *)"transfer closed with %ld bytes remaining to read",lVar13
                           ,ppppppppppppsVar18,param_5,param_6,param_7,param_8);
            return 0x12;
          }
        }
        if ((*(char *)(param_2 + 0x250) != '\0') && (*(int *)(param_1 + 7) != 4)) {
          FUN_7100016040(param_2,(byte *)"transfer closed with outstanding read data remaining",
                         lVar13,ppppppppppppsVar18,param_5,param_6,param_7,param_8);
          return 0x12;
        }
      }
      iVar10 = FUN_7100014700((long *)param_1);
      if (iVar10 != 0) goto LAB_7100018480;
    }
    else {
      lVar13 = FUN_7100002af0(param_2,(undefined1 (*) [12])(param_2 + 0x110),0);
      if (lVar13 < 0) {
        lVar23 = *(long *)(param_2 + 0xc0);
        lVar13 = FUN_7100017750(*(long *)(param_2 + 0x110),(int)*(undefined8 *)(param_2 + 0x118),
                                *(long *)(param_2 + 0xa68),(int)*(undefined8 *)(param_2 + 0xa70));
        if (lVar23 != -1) {
          FUN_7100016040(param_2,(byte *)
                                 "Operation timed out after %ld milliseconds with %ld out of %ld bytes received"
                         ,lVar13,*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_2 + 0xc0),
                         param_6,param_7,param_8);
          return 0x1c;
        }
        FUN_7100016040(param_2,(byte *)
                               "Operation timed out after %ld milliseconds with %ld bytes received",
                       lVar13,*(undefined8 *)(param_2 + 0xe0),param_5,param_6,param_7,param_8);
        return 0x1c;
      }
    }
    bVar4 = (*puVar1 & 0x33) == 0;
LAB_7100018594:
    uVar11 = 0;
    *param_3 = bVar4;
  }
  else {
LAB_7100018480:
    uVar11 = 0x2a;
  }
  return uVar11;
}

