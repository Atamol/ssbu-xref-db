// addr:      710001f340
// offset:    0x1f340
// name:      FUN_710001f340
// mangled:   
// signature: int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710001f340(long param_1,undefined8 *param_2,byte **param_3,byte **param_4,byte **param_5,
                  byte **param_6,byte **param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  size_t sVar16;
  byte **ppbVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  byte **ppbVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  int *piVar26;
  byte bVar27;
  char cVar28;
  undefined1 uVar29;
  uint uVar30;
  undefined4 uVar31;
  char *pcVar32;
  undefined8 *puVar33;
  long *plVar34;
  undefined8 *puVar35;
  char *pcVar36;
  undefined **ppuVar37;
  long *plVar38;
  long *plVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  code *local_310;
  code *local_2f8;
  byte *local_2e0;
  byte **local_2d0;
  byte **local_2c0;
  long *local_298;
  byte *local_290;
  byte *local_288;
  byte *local_280;
  byte *local_278;
  byte *local_270;
  byte *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  ulong uStack_170;
  undefined8 local_168;
  ulong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  
  local_290 = (byte *)0x0;
  local_288 = (byte *)0x0;
  ppbVar22 = param_3;
  pcVar8 = (code *)FUN_710000bbe0(*(long *)(param_1 + 0xa8));
  uVar9 = FUN_710000bbf0(*(long *)(param_1 + 0xa8));
  *(undefined1 *)param_3 = 0;
  if (*(long *)(param_1 + 0x998) == 0) {
    iVar6 = 3;
    goto LAB_710001f6a0;
  }
  plVar10 = (long *)FUN_71000272d0();
  if (plVar10 != (long *)0x0) {
    plVar10[0xd] = -1;
    plVar10[0x32] = -1;
    plVar10[0x10b] = (long)&PTR_s_<no_protocol>_7104f17360;
    *(undefined4 *)(plVar10 + 0x33) = 0xffffffff;
    plVar10[0x4c] = -1;
    plVar10[0x4b] = -1;
    FUN_7100004200((long)plVar10,1);
    auVar40 = FUN_7100017740();
    *(undefined1 (*) [16])(plVar10 + 0x49) = auVar40;
    *plVar10 = param_1;
    uVar30 = *(uint *)(param_1 + 0x660);
    *(uint *)(plVar10 + 0x2f) = uVar30;
    *(undefined4 *)(plVar10 + 0x27) = 4;
    if (*(char **)(param_1 + 0x7b8) == (char *)0x0) {
      *(undefined1 *)((long)plVar10 + 0x815) = 0;
LAB_710001f45c:
      *(undefined1 *)((long)plVar10 + 0x816) = 0;
      *(undefined1 *)((long)plVar10 + 0x817) = 0;
      pcVar32 = *(char **)(param_1 + 0x7c0);
    }
    else {
      cVar28 = **(char **)(param_1 + 0x7b8);
      *(bool *)((long)plVar10 + 0x815) = cVar28 != '\0';
      if (cVar28 == '\0') goto LAB_710001f45c;
      *(bool *)((long)plVar10 + 0x816) = uVar30 < 3;
      *(bool *)((long)plVar10 + 0x817) = 2 < uVar30;
      pcVar32 = *(char **)(param_1 + 0x7c0);
    }
    if ((pcVar32 != (char *)0x0) && (*pcVar32 != '\0')) {
      *(undefined1 *)((long)plVar10 + 0x815) = 1;
      *(undefined1 *)((long)plVar10 + 0x817) = 1;
    }
    *(bool *)((long)plVar10 + 0x819) = *(long *)(param_1 + 0x870) != 0;
    *(undefined1 *)((long)plVar10 + 0x821) = *(undefined1 *)(param_1 + 0x6b2);
    *(bool *)(plVar10 + 0x103) = *(long *)(param_1 + 0x858) != 0;
    *(undefined1 *)((long)plVar10 + 0x824) = *(undefined1 *)(param_1 + 0x6cc);
    *(undefined1 *)((long)plVar10 + 0x825) = *(undefined1 *)(param_1 + 0x6cd);
    *(undefined1 *)((long)plVar10 + 0x722) = *(undefined1 *)(param_1 + 0x4aa);
    *(undefined1 *)(plVar10 + 0xe4) = *(undefined1 *)(param_1 + 0x4a8);
    *(undefined1 *)((long)plVar10 + 0x721) = *(undefined1 *)(param_1 + 0x4a9);
    *(undefined1 *)((long)plVar10 + 0x7a2) = *(undefined1 *)(param_1 + 0x58a);
    *(undefined1 *)(plVar10 + 0xf4) = *(undefined1 *)(param_1 + 0x588);
    *(undefined1 *)((long)plVar10 + 0x7a1) = *(undefined1 *)(param_1 + 0x589);
    plVar10[0x10d] = *(long *)(param_1 + 0x688);
    bVar3 = FUN_71000093f0(*(long *)(param_1 + 0xa8),1);
    if ((bVar3) && (plVar10[0x122] == 0)) {
      lVar11 = FUN_71000272d0();
      plVar10[0x122] = lVar11;
      if (lVar11 != 0) goto LAB_710001f50c;
LAB_710001f668:
      FUN_71000068f0(plVar10 + 0x11a,0);
      FUN_71000068f0(plVar10 + 0x11e,0);
      FUN_71000272a0();
      FUN_71000272a0();
      FUN_71000272a0();
    }
    else {
LAB_710001f50c:
      FUN_71000067e0(plVar10 + 0x11a,FUN_7100022490);
      FUN_71000067e0(plVar10 + 0x11e,FUN_7100022490);
      if (*(long *)(param_1 + 0x750) != 0) {
        lVar11 = FUN_71000272c0();
        plVar10[0x16c] = lVar11;
        if (lVar11 == 0) goto LAB_710001f668;
      }
      *(undefined4 *)((long)plVar10 + 0xb6c) = *(undefined4 *)(param_1 + 0x2fc);
      *(undefined2 *)(plVar10 + 0x16d) = *(undefined2 *)(param_1 + 0x2f8);
      plVar10[10] = *(long *)(param_1 + 0x368);
      plVar10[0xb] = *(long *)(param_1 + 0x370);
      *param_2 = plVar10;
      strlen(*(char **)(param_1 + 0x998));
      FUN_71000272a0();
      *(undefined8 *)(param_1 + 0x4f80) = 0;
      *(undefined8 *)(param_1 + 0x4f78) = 0;
      lVar11 = FUN_7100027290();
      *(long *)(param_1 + 0x4f78) = lVar11;
      if (lVar11 != 0) {
        *(long *)(param_1 + 0x4f80) = lVar11;
        puVar12 = (undefined1 *)FUN_7100027290();
        plVar10[0x19] = (long)puVar12;
        if (puVar12 == (undefined1 *)0x0) {
          FUN_71000272a0();
          iVar6 = 0x1b;
          *(undefined8 *)(param_1 + 0x4f78) = 0;
          *(undefined8 *)(param_1 + 0x4f80) = 0;
          goto LAB_710001f6a0;
        }
        plVar21 = plVar10 + 0x1b;
        *plVar21 = (long)puVar12;
        *puVar12 = 0;
        pbVar13 = (byte *)FUN_71000272c0();
        local_288 = pbVar13;
        pbVar14 = (byte *)FUN_71000272c0();
        local_290 = pbVar14;
        pbVar15 = (byte *)FUN_71000272c0();
        iVar6 = 0x1b;
        if (((pbVar15 == (byte *)0x0) || (pbVar13 == (byte *)0x0)) || (pbVar14 == (byte *)0x0))
        goto LAB_710001f6a0;
        pbVar13 = *(byte **)(param_1 + 0x998);
        local_2c0 = *(byte ***)(param_1 + 0x4f80);
        pcVar32 = strpbrk((char *)pbVar13,"\r\n");
        if (pcVar32 == (char *)0x0) {
          bVar27 = *pbVar13;
          if (bVar27 != 0x3a) {
            if ((((byte)((bVar27 & 0xdf) + 0xbf) < 0x1a) && (pbVar13[1] == 0x3a)) &&
               (*(byte **)(param_1 + 0x748) != (byte *)0x0)) {
              bVar3 = FUN_7100017280(*(byte **)(param_1 + 0x748),&DAT_710444267e);
              if (!bVar3) {
                pbVar13 = *(byte **)(param_1 + 0x998);
                bVar27 = *pbVar13;
                goto LAB_710001f738;
              }
LAB_710001f8d0:
              if ((*(byte **)(param_1 + 0x748) != (byte *)0x0) &&
                 (bVar3 = FUN_7100017280(*(byte **)(param_1 + 0x748),&DAT_710444267e), bVar3)) {
                bVar3 = false;
                pcVar32 = "%[^\n]";
                goto LAB_710001f8f8;
              }
LAB_710001fa08:
              *(undefined1 *)local_2c0 = 0;
              param_5 = (byte **)*plVar21;
              ppbVar22 = (byte **)&local_168;
              param_4 = &local_268;
              param_6 = local_2c0;
              iVar6 = sscanf(*(char **)(param_1 + 0x998),"%15[^\n/:]:%3[/]%[^\n/?#]%[^\n]");
              if (iVar6 == 2) goto LAB_710001fa38;
              if (2 < iVar6) {
                sVar16 = strlen((char *)&local_268);
                if (sVar16 == 2) {
                  bVar3 = false;
                  pbVar13 = (byte *)&local_168;
                }
                else {
                  puVar1 = &DAT_71042c3be1;
                  if (sVar16 < 2) {
                    puVar1 = &DAT_71044114cc;
                  }
                  FUN_7100015de0(param_1,(byte *)
                                         "Unwillingly accepted illegal URL using %d slash%s!\n",
                                 sVar16,puVar1,param_5,param_6,param_7,param_8);
                  if (*(char *)(param_1 + 0x9a0) != '\0') {
                    FUN_71000272a0();
                  }
                  ppbVar22 = (byte **)*plVar21;
                  param_4 = local_2c0;
                  lVar11 = FUN_7100007fd0((byte *)"%s://%s%s");
                  *(long *)(param_1 + 0x998) = lVar11;
                  if (lVar11 == 0) goto LAB_710001f69c;
                  pbVar13 = (byte *)&local_168;
                  bVar3 = false;
                  *(undefined1 *)(param_1 + 0x9a0) = 1;
                }
                goto LAB_710001fc28;
              }
              ppbVar22 = (byte **)*plVar21;
              param_4 = local_2c0;
              iVar6 = sscanf(*(char **)(param_1 + 0x998),"%[^\n/?#]%[^\n]");
              if (0 < iVar6) {
                pbVar13 = *(byte **)(param_1 + 0x748);
                if (*(byte **)(param_1 + 0x748) == (byte *)0x0) {
                  ppbVar22 = (byte **)&DAT_00000004;
                  bVar3 = FUN_7100017490(&DAT_71043ce32d,(byte *)*plVar21,4);
                  if (bVar3) {
                    bVar3 = true;
                    pbVar13 = &UNK_710439c06a;
                  }
                  else {
                    ppbVar22 = (byte **)0x5;
                    bVar3 = FUN_7100017490((byte *)"DICT.",(byte *)*plVar21,5);
                    if (bVar3) {
                      bVar3 = true;
                      pbVar13 = &UNK_71042e5f72;
                    }
                    else {
                      ppbVar22 = (byte **)0x5;
                      bVar3 = FUN_7100017490((byte *)"LDAP.",(byte *)*plVar21,5);
                      if (bVar3) {
                        bVar3 = true;
                        pbVar13 = &UNK_71042a1e31;
                      }
                      else {
                        ppbVar22 = (byte **)0x5;
                        bVar3 = FUN_7100017490((byte *)"IMAP.",(byte *)*plVar21,5);
                        if (bVar3) {
                          bVar3 = true;
                          pbVar13 = &UNK_71043bd3a3;
                        }
                        else {
                          ppbVar22 = (byte **)0x5;
                          bVar3 = FUN_7100017490((byte *)"SMTP.",(byte *)*plVar21,5);
                          if (!bVar3) {
                            ppbVar22 = (byte **)0x5;
                            bVar3 = FUN_7100017490((byte *)"POP3.",(byte *)*plVar21,5);
                            pbVar13 = &DAT_71043ac61c;
                            if (bVar3) {
                              pbVar13 = &UNK_71043ef69a;
                            }
                            goto LAB_710001fa80;
                          }
                          bVar3 = true;
                          pbVar13 = &UNK_71042e5f77;
                        }
                      }
                    }
                  }
                }
                else {
LAB_710001fa80:
                  bVar3 = true;
                }
                goto LAB_710001fc28;
              }
              goto LAB_710001ff68;
            }
LAB_710001f738:
            if (((bVar27 == 0) || (bVar27 == 0x2f)) ||
               ((bVar27 != 0x3a &&
                (((bVar27 = pbVar13[1], bVar27 == 0 || (bVar27 == 0x2f)) ||
                 ((bVar27 != 0x3a &&
                  (((bVar27 = pbVar13[2], bVar27 == 0 || (bVar27 == 0x2f)) ||
                   ((bVar27 != 0x3a &&
                    (((bVar27 = pbVar13[3], bVar27 == 0 || (bVar27 == 0x2f)) ||
                     ((bVar27 != 0x3a &&
                      (((bVar27 = pbVar13[4], bVar27 == 0 || (bVar27 == 0x2f)) ||
                       ((bVar27 != 0x3a &&
                        (((bVar27 = pbVar13[5], bVar27 == 0 || (bVar27 == 0x2f)) ||
                         ((bVar27 != 0x3a &&
                          (((bVar27 = pbVar13[6], bVar27 == 0 || (bVar27 == 0x2f)) ||
                           ((bVar27 != 0x3a &&
                            (((bVar27 = pbVar13[7], bVar27 == 0 || (bVar27 == 0x2f)) ||
                             ((bVar27 != 0x3a &&
                              (((bVar27 = pbVar13[8], bVar27 == 0 || (bVar27 == 0x2f)) ||
                               ((bVar27 != 0x3a &&
                                (((bVar27 = pbVar13[9], bVar27 == 0 || (bVar27 == 0x2f)) ||
                                 ((bVar27 != 0x3a &&
                                  (((bVar27 = pbVar13[10], bVar27 == 0 || (bVar27 == 0x2f)) ||
                                   ((bVar27 != 0x3a &&
                                    (((bVar27 = pbVar13[0xb], bVar27 == 0 || (bVar27 == 0x2f)) ||
                                     ((bVar27 != 0x3a &&
                                      (((bVar27 = pbVar13[0xc], bVar27 == 0 || (bVar27 == 0x2f)) ||
                                       ((bVar27 != 0x3a &&
                                        (((bVar27 = pbVar13[0xd], bVar27 == 0 || (bVar27 == 0x2f))
                                         || ((bVar27 != 0x3a &&
                                             (((bVar27 = pbVar13[0xe], bVar27 == 0 ||
                                               (bVar27 == 0x2f)) ||
                                              ((bVar27 != 0x3a && (pbVar13[0xf] != 0x3a)))))))))))))
                                      )))))))))))))))))))))))))))))))))))))))))))))))
            goto LAB_710001f8d0;
            bVar3 = FUN_71000173b0(pbVar13,(byte *)"file:",5);
            if (!bVar3) goto LAB_710001fa08;
            bVar3 = true;
            pcVar32 = "%*15[^\n/:]:%[^\n]";
LAB_710001f8f8:
            ppbVar22 = local_2c0;
            iVar6 = sscanf(*(char **)(param_1 + 0x998),pcVar32);
            if (iVar6 != 1) {
LAB_710001fa38:
              pcVar32 = "Bad URL";
              goto LAB_710001fa40;
            }
            if (bVar3) {
              bVar27 = *(byte *)local_2c0;
              if (bVar27 == 0x2f) {
                if (*(char *)((long)local_2c0 + 1) == '/') {
                  sVar16 = strlen((char *)((long)local_2c0 + 2));
                  ppbVar22 = (byte **)(sVar16 + 1);
                  memmove(local_2c0,(char *)((long)local_2c0 + 2),(size_t)ppbVar22);
                }
                goto LAB_710001f94c;
              }
LAB_710001f958:
              if ((0x19 < (byte)((bVar27 & 0xdf) + 0xbf)) || (*(char *)((long)local_2c0 + 1) != ':')
                 ) {
                bVar4 = FUN_7100017490((byte *)"localhost/",(byte *)local_2c0,10);
                if (!bVar4) {
                  ppbVar22 = (byte **)0xa;
                  bVar4 = FUN_7100017490((byte *)"127.0.0.1/",(byte *)local_2c0,10);
                  if (!bVar4) {
                    pcVar32 = "Invalid file://hostname/, expected localhost or 127.0.0.1 or none";
                    goto LAB_710001fa40;
                  }
                }
                pcVar32 = (char *)((long)local_2c0 + 10);
                if (*(char *)((long)local_2c0 + 10) != '/') {
                  pcVar32 = (char *)((long)local_2c0 + 9);
                }
                sVar16 = strlen(pcVar32);
                ppbVar22 = (byte **)(sVar16 + 1);
                memmove(local_2c0,pcVar32,(size_t)ppbVar22);
                if (0x19 < (byte)((*(byte *)local_2c0 & 0xdf) + 0xbf)) goto LAB_710001fa8c;
              }
              if (*(char *)((long)local_2c0 + 1) == ':') {
                pcVar32 = "File drive letters are only accepted in MSDOS/Windows.";
                goto LAB_710001fa40;
              }
            }
            else {
LAB_710001f94c:
              bVar27 = *(byte *)local_2c0;
              if (bVar27 != 0x2f) goto LAB_710001f958;
            }
LAB_710001fa8c:
            pbVar13 = &DAT_710444267e;
            bVar3 = (bool)(bVar3 ^ 1);
LAB_710001fc28:
            pcVar36 = (char *)*plVar21;
            pcVar32 = strchr(pcVar36,0x40);
            if (pcVar32 == (char *)0x0) {
              pcVar32 = strchr(pcVar36,0x3f);
              if (pcVar32 == (char *)0x0) goto LAB_710001fcd4;
LAB_710001fc58:
              ppbVar22 = (byte **)strlen(pcVar32);
              sVar16 = strlen((char *)local_2c0);
              memmove((undefined1 *)((long)local_2c0 + (long)ppbVar22) + 1,local_2c0,sVar16 + 1);
              memcpy((void *)((long)local_2c0 + 1),pcVar32,(size_t)ppbVar22);
              *(undefined1 *)local_2c0 = 0x2f;
              *pcVar32 = '\0';
              cVar28 = *(char *)local_2c0;
              bVar4 = true;
joined_r0x00710001fce8:
              if (cVar28 == '/') goto LAB_710001fd24;
              sVar16 = strlen((char *)local_2c0);
              memmove((void *)((long)local_2c0 + 1),local_2c0,sVar16 + 1);
              *(undefined1 *)local_2c0 = 0x2f;
LAB_710001fd7c:
              sVar16 = strlen((char *)local_2c0);
              puVar12 = (undefined1 *)strlen((char *)*plVar21);
              if (!bVar3) {
                ppbVar17 = (byte **)strlen((char *)pbVar13);
                ppbVar22 = ppbVar17;
                bVar4 = FUN_7100017490(pbVar13,*(byte **)(param_1 + 0x998),(long)ppbVar17);
                if (!bVar4) {
LAB_710001ff68:
                  pcVar32 = "<url> malformed";
                  goto LAB_710001fa40;
                }
                bVar4 = FUN_7100017490(&DAT_710438b85a,
                                       (byte *)(*(long *)(param_1 + 0x998) + (long)ppbVar17),3);
                if (bVar4) {
                  puVar12 = (undefined1 *)((long)ppbVar17 + (long)(puVar12 + 3));
                }
                else {
                  ppbVar22 = (byte **)0x5;
                  bVar4 = FUN_7100017490((byte *)"file:",*(byte **)(param_1 + 0x998),5);
                  if (!bVar4) goto LAB_710001ff68;
                  lVar11 = 1;
                  if (*(char *)(*(long *)(param_1 + 0x998) + 5) == '/') {
                    lVar11 = 2;
                  }
                  puVar12 = (undefined1 *)((long)ppbVar17 + (long)(puVar12 + lVar11));
                }
              }
              ppbVar17 = (byte **)FUN_7100027290();
              if (ppbVar17 == (byte **)0x0) goto LAB_710001f69c;
              memcpy(ppbVar17,*(void **)(param_1 + 0x998),(size_t)puVar12);
              memcpy((undefined1 *)((long)ppbVar17 + (long)puVar12),local_2c0,sVar16 + 1);
              if (*(char *)(param_1 + 0x9a0) != '\0') {
                FUN_71000272a0();
                *(undefined8 *)(param_1 + 0x998) = 0;
                *(undefined1 *)(param_1 + 0x9a0) = 0;
              }
              ppbVar22 = ppbVar17;
              FUN_7100015de0(param_1,(byte *)"Rebuilt URL to: %s\n",ppbVar17,param_4,param_5,param_6
                             ,param_7,param_8);
              *(byte ***)(param_1 + 0x998) = ppbVar17;
              *(undefined1 *)(param_1 + 0x9a0) = 1;
            }
            else {
              pcVar32 = strchr(pcVar32 + 1,0x3f);
              if (pcVar32 != (char *)0x0) goto LAB_710001fc58;
LAB_710001fcd4:
              cVar28 = *(char *)local_2c0;
              if (cVar28 != '\0') {
                bVar4 = false;
                goto joined_r0x00710001fce8;
              }
              bVar4 = true;
              *(undefined2 *)local_2c0 = 0x2f;
LAB_710001fd24:
              if (*(char *)(param_1 + 0x962) == '\0') {
                ppbVar17 = (byte **)FUN_7100023c10((char *)local_2c0);
                if (ppbVar17 == (byte **)0x0) goto LAB_710001f69c;
                iVar6 = strcmp((char *)ppbVar17,(char *)local_2c0);
                if (iVar6 == 0) {
                  FUN_71000272a0();
                  if (!bVar4) goto LAB_710001fea8;
                }
                else {
                  FUN_71000272a0();
                  *(byte ***)(param_1 + 0x4f78) = ppbVar17;
                  *(byte ***)(param_1 + 0x4f80) = ppbVar17;
                  local_2c0 = ppbVar17;
                }
                goto LAB_710001fd7c;
              }
              if (bVar4) goto LAB_710001fd7c;
            }
LAB_710001fea8:
            ppuVar37 = &DAT_7104f170a0;
            bVar4 = FUN_7100017280(DAT_7104f170a0,pbVar13);
            if (bVar4) {
LAB_710001fed8:
              if (((*(ulong *)(param_1 + 0x8e0) & (ulong)*(uint *)(ppuVar37 + 0x10)) != 0) &&
                 ((*(char *)(param_1 + 0x4bb0) == '\0' ||
                  ((*(ulong *)(param_1 + 0x8e8) & (ulong)*(uint *)(ppuVar37 + 0x10)) != 0)))) {
                plVar10[0x10c] = (long)ppuVar37;
                plVar10[0x10b] = (long)ppuVar37;
                local_270 = (byte *)0x0;
                local_268 = (byte *)0x0;
                local_278 = (byte *)0x0;
                pcVar36 = (char *)plVar10[0x1b];
                pcVar32 = strchr(pcVar36,0x40);
                if (pcVar32 == (char *)0x0) {
LAB_710001ff44:
                  iVar6 = 0;
                }
                else {
                  *plVar21 = (long)(pcVar32 + 1);
                  if (*(int *)(param_1 + 0x6c4) == 2) goto LAB_710001ff44;
                  param_5 = (byte **)0x0;
                  if ((*(byte *)((long)ppuVar37 + 0x85) & 4) != 0) {
                    param_5 = &local_278;
                  }
                  ppbVar22 = &local_268;
                  param_4 = &local_270;
                  iVar6 = FUN_7100022250(pcVar36,(size_t)(pcVar32 + 1 + ~(ulong)pcVar36),ppbVar22,
                                         param_4,param_5);
                  if (iVar6 == 0) {
                    if (local_268 != (byte *)0x0) {
                      param_4 = &local_280;
                      ppbVar22 = (byte **)0x0;
                      param_5 = (byte **)0x0;
                      *(undefined1 *)(plVar10 + 0x105) = 1;
                      param_6 = (byte **)0x0;
                      *(undefined1 *)(plVar10 + 0x103) = 1;
                      uVar23 = FUN_71000243b0(param_1,local_268,0,param_4,(long *)0x0,0);
                      iVar6 = (int)uVar23;
                      if (iVar6 != 0) goto LAB_710001ffa4;
                      FUN_71000272a0();
                      local_288 = local_280;
                    }
                    if (local_270 != (byte *)0x0) {
                      param_4 = &local_280;
                      ppbVar22 = (byte **)0x0;
                      param_5 = (byte **)0x0;
                      param_6 = (byte **)0x0;
                      uVar23 = FUN_71000243b0(param_1,local_270,0,param_4,(long *)0x0,0);
                      iVar6 = (int)uVar23;
                      if (iVar6 != 0) goto LAB_710001ffa4;
                      FUN_71000272a0();
                      local_290 = local_280;
                    }
                    if (local_278 == (byte *)0x0) goto LAB_710001ff44;
                    param_4 = &local_280;
                    ppbVar22 = (byte **)0x0;
                    param_5 = (byte **)0x0;
                    param_6 = (byte **)0x0;
                    uVar23 = FUN_71000243b0(param_1,local_278,0,param_4,(long *)0x0,0);
                    iVar6 = (int)uVar23;
                    if (iVar6 == 0) {
                      FUN_71000272a0();
                      pbVar15 = local_280;
                    }
                  }
                }
LAB_710001ffa4:
                FUN_71000272a0();
                FUN_71000272a0();
                FUN_71000272a0();
                if (iVar6 != 0) goto LAB_710001f6a0;
                if ((*(char *)*plVar21 == '[') &&
                   (pcVar32 = strchr((char *)*plVar21,0x25), pcVar32 != (char *)0x0)) {
                  uVar23 = 3;
                  lVar11 = 3;
                  iVar6 = strncmp("%25",pcVar32,3);
                  if (iVar6 != 0) {
                    FUN_7100015de0(param_1,(byte *)"Please URL encode %% as %%25, see RFC 6874.\n",
                                   uVar23,param_4,param_5,param_6,param_7,param_8);
                    lVar11 = 1;
                  }
                  ppbVar22 = (byte **)0xa;
                  uVar18 = strtoul(pcVar32 + lVar11,(char **)&local_268,10);
                  pbVar13 = local_268;
                  if (*local_268 == 0x5d) {
                    sVar16 = strlen((char *)local_268);
                    ppbVar22 = (byte **)(sVar16 + 1);
                    memmove(pcVar32,pbVar13,(size_t)ppbVar22);
                    *(int *)(plVar10 + 0x18) = (int)uVar18;
                  }
                  else {
                    FUN_7100015de0(param_1,(byte *)"Invalid IPv6 address format\n",ppbVar22,param_4,
                                   param_5,param_6,param_7,param_8);
                  }
                }
                if (*(int *)(param_1 + 0x8d8) != 0) {
                  *(int *)(plVar10 + 0x18) = *(int *)(param_1 + 0x8d8);
                }
                pcVar32 = strchr((char *)local_2c0,0x23);
                if (pcVar32 != (char *)0x0) {
                  *pcVar32 = '\0';
                  pcVar32 = strchr(*(char **)(param_1 + 0x998),0x23);
                  if (pcVar32 != (char *)0x0) {
                    *pcVar32 = '\0';
                  }
                }
                if (bVar3) {
                  ppbVar22 = *(byte ***)(param_1 + 0x998);
                  pbVar13 = (byte *)FUN_7100007fd0((byte *)"%s://%s");
                  if (pbVar13 == (byte *)0x0) goto LAB_710001f69c;
                  uVar30 = (uint)*pbVar13;
                  pbVar14 = pbVar13;
                  if (*pbVar13 != 0x3a) {
                    do {
                      iVar6 = tolower(uVar30);
                      *pbVar14 = (byte)iVar6;
                      uVar30 = (uint)pbVar14[1];
                      pbVar14 = pbVar14 + 1;
                    } while (uVar30 != 0x3a);
                  }
                  if (*(char *)(param_1 + 0x9a0) != '\0') {
                    FUN_71000272a0();
                    *(undefined8 *)(param_1 + 0x998) = 0;
                    *(undefined1 *)(param_1 + 0x9a0) = 0;
                  }
                  *(byte **)(param_1 + 0x998) = pbVar13;
                  *(undefined1 *)(param_1 + 0x9a0) = 1;
                }
                if (((*(byte *)(plVar10[0x10c] + 0x84) >> 6 & 1) != 0) &&
                   (pcVar32 = strchr(*(char **)(*plVar10 + 0x4f80),0x3f), pcVar32 != (char *)0x0)) {
                  *pcVar32 = '\0';
                }
                if (*(long *)(param_1 + 0x8b8) != 0) {
                  lVar11 = FUN_71000272c0();
                  plVar10[0x45] = lVar11;
                  if (lVar11 == 0) goto LAB_710001f69c;
                }
                if (*(char *)(param_1 + 0x2b8) == '\0') {
LAB_7100020288:
                  lVar11 = *plVar10;
                  if (*(char *)((long)plVar10 + 0x819) == '\0') goto LAB_710002045c;
LAB_7100020294:
                  local_70 = 0;
                  local_78 = 0;
                  local_80 = 0;
                  local_88 = 0;
                  local_90 = 0;
                  local_98 = 0;
                  local_a0 = 0;
                  local_a8 = 0;
                  local_b0 = 0;
                  local_b8 = 0;
                  local_c0 = 0;
                  local_c8 = 0;
                  local_d0 = 0;
                  local_d8 = 0;
                  local_e0 = 0;
                  local_e8 = 0;
                  local_f0 = 0;
                  local_f8 = 0;
                  local_100 = 0;
                  local_108 = 0;
                  local_110 = 0;
                  local_118 = 0;
                  local_128 = 0;
                  uStack_120 = 0;
                  local_138 = 0;
                  uStack_130 = 0;
                  local_148 = 0;
                  uStack_140 = 0;
                  local_158 = 0;
                  uStack_150 = 0;
                  local_168 = (byte *)0x0;
                  local_160 = 0;
                  local_178 = 0;
                  uStack_170 = 0;
                  local_188 = 0;
                  uStack_180 = 0;
                  local_198 = 0;
                  uStack_190 = 0;
                  local_1a8 = 0;
                  uStack_1a0 = 0;
                  local_1b8 = 0;
                  uStack_1b0 = 0;
                  local_1c8 = 0;
                  uStack_1c0 = 0;
                  local_1d8 = 0;
                  uStack_1d0 = 0;
                  local_1e8 = 0;
                  uStack_1e0 = 0;
                  local_1f8 = 0;
                  uStack_1f0 = 0;
                  local_208 = 0;
                  uStack_200 = 0;
                  local_218 = 0;
                  uStack_210 = 0;
                  local_228 = 0;
                  uStack_220 = 0;
                  local_238 = 0;
                  uStack_230 = 0;
                  local_248 = 0;
                  uStack_240 = 0;
                  local_258 = 0;
                  uStack_250 = 0;
                  local_268 = (byte *)0x0;
                  uStack_260 = 0;
                  if (*(char **)(lVar11 + 0x870) != (char *)0x0) {
                    strncpy((char *)&local_168,*(char **)(lVar11 + 0x870),0x100);
                    local_70 = local_70 & 0xffffffffffffff;
                  }
                  if (*(char **)(lVar11 + 0x878) != (char *)0x0) {
                    strncpy((char *)&local_268,*(char **)(lVar11 + 0x878),0x100);
                    uStack_170 = uStack_170 & 0xffffffffffffff;
                  }
                  param_4 = (byte **)(plVar10 + 0x30);
                  param_5 = (byte **)0x0;
                  param_6 = (byte **)0x0;
                  uVar23 = FUN_71000243b0(lVar11,(byte *)&local_168,0,param_4,(long *)0x0,0);
                  iVar6 = (int)uVar23;
                  if (iVar6 == 0) {
                    param_4 = (byte **)(plVar10 + 0x31);
                    ppbVar22 = (byte **)0x0;
                    param_5 = (byte **)0x0;
                    param_6 = (byte **)0x0;
                    uVar23 = FUN_71000243b0(lVar11,(byte *)&local_268,0,param_4,(long *)0x0,0);
                    iVar6 = (int)uVar23;
                    if (iVar6 == 0) goto LAB_710002045c;
                  }
                }
                else {
                  local_b8 = local_b8 & 0xffffffff00000000;
                  local_c0 = 0;
                  local_c8 = 0;
                  local_d0 = 0;
                  local_d8 = 0;
                  local_e0 = 0;
                  local_e8 = 0;
                  local_f0 = 0;
                  local_f8 = 0;
                  local_100 = 0;
                  local_108 = 0;
                  local_110 = 0;
                  local_118 = 0;
                  local_128 = 0;
                  uStack_120 = 0;
                  local_138 = 0;
                  uStack_130 = 0;
                  local_148 = 0;
                  uStack_140 = 0;
                  local_158 = 0;
                  uStack_150 = 0;
                  local_168 = (byte *)0x0;
                  local_160 = 0;
                  uVar30 = FUN_7100027520((long)&local_168);
                  if (*(long *)(param_1 + 0x7b8) != 0) {
                    FUN_7100008270(_stderr);
                    FUN_71000272a0();
                    *(undefined8 *)(param_1 + 0x7b8) = 0;
                  }
                  if ((uVar30 != 0) || (local_168._4_1_ == '\0')) goto LAB_7100020288;
                  FUN_71000272a0();
                  *(undefined8 *)(param_1 + 0x7b8) = 0;
                  lVar11 = FUN_71000272c0();
                  if (lVar11 == 0) goto LAB_710001f69c;
                  *(long *)(param_1 + 0x7b8) = lVar11;
                  *(ulong *)(param_1 + 0x278) = (ulong)local_168 >> 0x30;
                  *(undefined1 *)((long)plVar10 + 0x815) = 1;
                  if ((char)local_f8 == '\0') goto LAB_7100020288;
                  FUN_71000272a0();
                  *(undefined8 *)(param_1 + 0x870) = 0;
                  lVar11 = FUN_71000272c0();
                  if (lVar11 == 0) goto LAB_710001f69c;
                  *(long *)(param_1 + 0x870) = lVar11;
                  FUN_71000272a0();
                  *(undefined8 *)(param_1 + 0x878) = 0;
                  lVar11 = FUN_71000272c0();
                  if (lVar11 == 0) goto LAB_710001f69c;
                  *(long *)(param_1 + 0x878) = lVar11;
                  *(undefined1 *)((long)plVar10 + 0x819) = 1;
                  lVar11 = *plVar10;
                  if (*(char *)((long)plVar10 + 0x819) != '\0') goto LAB_7100020294;
LAB_710002045c:
                  if (*(long *)(lVar11 + 0x7b8) == 0) {
                    ppbVar17 = (byte **)0x0;
LAB_710002047c:
                    if (*(long *)(lVar11 + 0x7c0) == 0) {
                      local_2d0 = (byte **)0x0;
                    }
                    else {
                      local_2d0 = (byte **)FUN_71000272c0();
                      if (local_2d0 == (byte **)0x0) goto LAB_7100020494;
                    }
                    pbVar13 = (byte *)FUN_71000242e0("no_proxy");
                    if (pbVar13 == (byte *)0x0) {
                      pbVar13 = (byte *)FUN_71000242e0("NO_PROXY");
                    }
                    uVar18 = FUN_71000224a0((char *)*plVar21,*(byte **)(lVar11 + 0x880));
                    if (((uVar18 & 1) == 0) &&
                       ((*(long *)(lVar11 + 0x880) != 0 ||
                        (uVar18 = FUN_71000224a0((char *)*plVar21,pbVar13), (uVar18 & 1) == 0)))) {
                      if (ppbVar17 == (byte **)0x0 && local_2d0 == (byte **)0x0) {
                        pbVar13 = *(byte **)plVar10[0x10b];
                        uVar30 = (uint)*pbVar13;
                        if (*pbVar13 == 0) {
                          puVar33 = &local_168;
                        }
                        else {
                          puVar35 = &local_168;
                          do {
                            pbVar13 = pbVar13 + 1;
                            iVar6 = tolower(uVar30);
                            puVar33 = (undefined8 *)((long)puVar35 + 1);
                            *(char *)puVar35 = (char)iVar6;
                            uVar30 = (uint)*pbVar13;
                            puVar35 = puVar33;
                          } while (uVar30 != 0);
                        }
                        *(undefined2 *)((long)puVar33 + 4) = 0x7978;
                        *(undefined1 *)((long)puVar33 + 6) = 0;
                        *(undefined4 *)puVar33 = 0x6f72705f;
                        ppbVar17 = (byte **)FUN_71000242e0((char *)&local_168);
                        if (ppbVar17 != (byte **)0x0) goto LAB_7100020f4c;
                        bVar3 = FUN_7100017280((byte *)"http_proxy",(byte *)&local_168);
                        if (!bVar3) {
                          FUN_7100017450((byte *)&local_168,(byte *)&local_168,0x80);
                          ppbVar17 = (byte **)FUN_71000242e0((char *)&local_168);
                          if (ppbVar17 != (byte **)0x0) goto LAB_7100020f4c;
                        }
                        ppbVar17 = (byte **)FUN_71000242e0("all_proxy");
                        if (ppbVar17 != (byte **)0x0) goto LAB_7100020f4c;
                        ppbVar17 = (byte **)FUN_71000242e0("ALL_PROXY");
                        FUN_71000272a0();
                      }
                      else {
LAB_7100020f4c:
                        FUN_71000272a0();
                      }
                      if ((ppbVar17 != (byte **)0x0) &&
                         ((*(char *)ppbVar17 == '\0' ||
                          ((*(byte *)(plVar10[0x10b] + 0x84) >> 4 & 1) != 0)))) {
                        FUN_71000272a0();
                        ppbVar17 = (byte **)0x0;
                      }
                      if (local_2d0 == (byte **)0x0) {
LAB_7100020fb0:
                        if (ppbVar17 == (byte **)0x0) goto LAB_7100020508;
                        local_2d0 = (byte **)0x0;
                        bVar3 = false;
LAB_7100020fbc:
                        param_4 = (byte **)(ulong)*(uint *)(plVar10 + 0x2f);
                        iVar6 = FUN_7100022610(lVar11,(long)plVar10,ppbVar17,param_4,param_5,param_6
                                               ,param_7,param_8);
                        FUN_71000272a0();
                        if (iVar6 != 0) goto LAB_7100020534;
                        if (bVar3) goto LAB_7100021000;
                      }
                      else {
                        if ((*(char *)local_2d0 == '\0') ||
                           ((*(byte *)(plVar10[0x10b] + 0x84) >> 4 & 1) != 0)) {
                          FUN_71000272a0();
                          goto LAB_7100020fb0;
                        }
                        if (ppbVar17 != (byte **)0x0) {
                          bVar3 = true;
                          goto LAB_7100020fbc;
                        }
LAB_7100021000:
                        param_4 = (byte **)(ulong)*(uint *)(plVar10 + 0x27);
                        iVar6 = FUN_7100022610(lVar11,(long)plVar10,local_2d0,param_4,param_5,
                                               param_6,param_7,param_8);
                        FUN_71000272a0();
                        if (iVar6 != 0) goto LAB_7100020534;
                      }
                      if (plVar10[0x2a] == 0) {
                        cVar28 = '\0';
                        *(undefined1 *)((long)plVar10 + 0x816) = 0;
                        *(undefined1 *)((long)plVar10 + 0x821) = 0;
                        lVar11 = plVar10[0x22];
                      }
                      else {
                        if ((*(byte *)(plVar10[0x10b] + 0x80) & 3) == 0) {
                          if (((*(byte *)(plVar10[0x10b] + 0x85) >> 3 & 1) == 0) ||
                             (*(char *)((long)plVar10 + 0x821) != '\0')) {
                            *(undefined1 *)((long)plVar10 + 0x821) = 1;
                          }
                          else {
                            plVar10[0x10b] = (long)&DAT_7104f170a0;
                          }
                        }
                        cVar28 = '\x01';
                        *(undefined1 *)((long)plVar10 + 0x816) = 1;
                        lVar11 = plVar10[0x22];
                      }
                      bVar3 = lVar11 != 0;
                      if ((lVar11 != 0) && (plVar10[0x2a] == 0)) {
                        if (plVar10[0x28] == 0) {
                          plVar10[0x28] = plVar10[0x30];
                          plVar10[0x30] = 0;
                          FUN_71000272a0();
                          lVar11 = plVar10[0x31];
                          plVar10[0x31] = 0;
                          plVar10[0x29] = lVar11;
                          cVar28 = *(char *)((long)plVar10 + 0x816);
                        }
                        bVar3 = true;
                      }
                      *(bool *)((long)plVar10 + 0x817) = bVar3;
                      if (cVar28 == '\0') {
                        *(bool *)((long)plVar10 + 0x815) = bVar3;
                        if (!bVar3) goto LAB_7100020518;
                        iVar6 = 0;
                      }
                      else {
                        iVar6 = 0;
                        *(undefined1 *)((long)plVar10 + 0x815) = 1;
                      }
                    }
                    else {
                      FUN_71000272a0();
                      FUN_71000272a0();
                      FUN_71000272a0();
LAB_7100020508:
                      *(undefined1 *)((long)plVar10 + 0x817) = 0;
                      *(undefined2 *)((long)plVar10 + 0x815) = 0;
LAB_7100020518:
                      iVar6 = 0;
                      *(undefined2 *)((long)plVar10 + 0x815) = 0;
                      *(undefined1 *)((long)plVar10 + 0x817) = 0;
                      *(undefined1 *)((long)plVar10 + 0x819) = 0;
                      *(undefined1 *)((long)plVar10 + 0x821) = 0;
                    }
                  }
                  else {
                    ppbVar17 = (byte **)FUN_71000272c0();
                    if (ppbVar17 != (byte **)0x0) goto LAB_710002047c;
LAB_7100020494:
                    FUN_7100016040(lVar11,(byte *)"memory shortage",ppbVar22,param_4,param_5,param_6
                                   ,param_7,param_8);
                    iVar6 = 0x1b;
                  }
                }
LAB_7100020534:
                FUN_71000272a0();
                FUN_71000272a0();
                if (iVar6 != 0) goto LAB_710001f6a0;
                if (((*(byte *)(plVar10[0x10c] + 0x84) & 1) != 0) &&
                   (*(char *)((long)plVar10 + 0x816) != '\0')) {
                  *(undefined1 *)((long)plVar10 + 0x821) = 1;
                }
                ppbVar22 = &local_268;
                iVar6 = sscanf((char *)*plVar21,"[%*45[0123456789abcdefABCDEF:.]%c");
                if ((iVar6 == 1) && ((char)local_268 == ']')) {
                  *(undefined1 *)((long)plVar10 + 0x81a) = 1;
                  lVar11 = plVar10[0x1b];
                  plVar10[0x1b] = lVar11 + 1;
                  pcVar32 = strchr((char *)(lVar11 + 1),0x5d);
                  if (pcVar32 == (char *)0x0) {
                    pcVar32 = (char *)0x0;
                    lVar11 = *(long *)(param_1 + 0x2a0);
                    goto joined_r0x0071000205e4;
                  }
                  *pcVar32 = '\0';
                  pcVar32 = pcVar32 + 1;
                  if (*pcVar32 != ':') {
                    pcVar32 = (char *)0x0;
                  }
                  lVar11 = *(long *)(param_1 + 0x2a0);
                  if (lVar11 != 0) goto LAB_7100020654;
LAB_7100020698:
                  if (pcVar32 == (char *)0x0) goto LAB_71000207cc;
                  ppbVar22 = (byte **)0xa;
                  uVar18 = FUN_71039c00b0(pcVar32 + 1,&local_168);
                  if (0xffff < uVar18) {
                    pcVar32 = "Port number out of range";
                    goto LAB_710001fa40;
                  }
                  ppbVar22 = (byte **)(ulong)*local_168;
                  if (*local_168 != 0) {
                    FUN_7100016040(param_1,(byte *)"Port number ended with \'%c\'",ppbVar22,param_4,
                                   param_5,param_6,param_7,param_8);
                    iVar6 = 3;
                    goto LAB_710001f6a0;
                  }
                  *pcVar32 = '\0';
                  if (local_168 == (byte *)(pcVar32 + 1)) goto LAB_71000207cc;
                  uVar30 = FUN_7100027090();
                  *(uint *)(plVar10 + 0x33) = uVar30 & 0xffff;
                  iVar6 = (int)plVar10[0x33];
                }
                else {
                  pcVar32 = strchr((char *)*plVar21,0x3a);
                  lVar11 = *(long *)(param_1 + 0x2a0);
joined_r0x0071000205e4:
                  if (lVar11 == 0) goto LAB_7100020698;
LAB_7100020654:
                  if (*(char *)(param_1 + 0x4c38) == '\0') goto LAB_7100020698;
                  *(uint *)(plVar10 + 0x33) = (uint)lVar11 & 0xffff;
                  if (pcVar32 != (char *)0x0) {
                    *pcVar32 = '\0';
                  }
                  if (*(char *)((long)plVar10 + 0x816) != '\0') {
                    local_160 = local_160 & 0xffffffff00000000;
                    local_168 = (byte *)0x0;
                    if (*(char *)((long)plVar10 + 0x82c) != '\0') {
                      if (*(char *)(param_1 + 0x6b3) == '\0') {
                        uVar30 = 0x49;
                        if (*(char *)(param_1 + 0x6b5) != '\0') {
                          uVar30 = 0x44;
                        }
                        uVar18 = (ulong)uVar30;
                      }
                      else {
                        uVar18 = 0x41;
                      }
                      FUN_7100007ef0((undefined1 *)&local_168,0xc,";type=%c",uVar18,param_5,param_6,
                                     param_7,param_8);
                    }
                    param_4 = (byte **)plVar10[0x1b];
                    param_6 = (byte **)(ulong)*(uint *)(plVar10 + 0x33);
                    param_5 = (byte **)&DAT_7104317c74;
                    ppbVar22 = (byte **)&DAT_710427f783;
                    if (*(char *)((long)plVar10 + 0x81a) == '\0') {
                      param_5 = (byte **)&DAT_71044114cc;
                      ppbVar22 = (byte **)&DAT_71044114cc;
                    }
                    param_8 = *(undefined8 *)(param_1 + 0x4f80);
                    param_7 = (byte **)&DAT_71044114cc;
                    if (*(char *)(param_1 + 0x4f88) != '\0') {
                      param_7 = (byte **)&DAT_710426ee53;
                    }
                    lVar11 = FUN_7100007fd0((byte *)"%s://%s%s%s:%hu%s%s%s");
                    if (lVar11 == 0) goto LAB_710001f69c;
                    if (*(char *)(param_1 + 0x9a0) != '\0') {
                      FUN_71000272a0();
                      *(undefined8 *)(param_1 + 0x998) = 0;
                      *(undefined1 *)(param_1 + 0x9a0) = 0;
                    }
                    *(long *)(param_1 + 0x998) = lVar11;
                    *(undefined1 *)(param_1 + 0x9a0) = 1;
                  }
LAB_71000207cc:
                  iVar6 = (int)plVar10[0x33];
                }
                if (iVar6 < 0) {
                  *(uint *)(plVar10 + 0x33) = (uint)*(ushort *)(plVar10[0x10c] + 0x78);
                }
                if (*(long *)(param_1 + 0x858) != 0) {
                  FUN_71000272a0();
                  local_288 = (byte *)FUN_71000272c0();
                  if (local_288 == (byte *)0x0) goto LAB_710001f69c;
                }
                if (*(long *)(param_1 + 0x860) != 0) {
                  FUN_71000272a0();
                  local_290 = (byte *)FUN_71000272c0();
                  if (local_290 == (byte *)0x0) goto LAB_710001f69c;
                }
                if (*(long *)(param_1 + 0x868) != 0) {
                  FUN_71000272a0();
                  pbVar15 = (byte *)FUN_71000272c0();
                  if (pbVar15 == (byte *)0x0) goto LAB_710001f69c;
                }
                *(undefined1 *)((long)plVar10 + 0x827) = 0;
                if (*(int *)(param_1 + 0x6c4) == 0) {
LAB_71000208a8:
                  if ((*(byte *)(plVar10[0x10b] + 0x84) >> 5 & 1) == 0) goto LAB_71000208c0;
LAB_71000208b8:
                  if ((char)plVar10[0x103] != '\0') goto LAB_71000208c0;
                  lVar11 = FUN_71000272c0();
                  plVar10[0x42] = lVar11;
                }
                else {
                  param_4 = *(byte ***)(param_1 + 0x7b0);
                  ppbVar22 = &local_290;
                  iVar6 = FUN_7100023e70((byte *)*plVar21,(long *)&local_288,(long *)ppbVar22,
                                         (long)param_4);
                  if (iVar6 < 1) {
                    if (iVar6 < 0) goto LAB_710001f69c;
                    *(undefined1 *)((long)plVar10 + 0x827) = 1;
                    *(undefined1 *)(plVar10 + 0x103) = 1;
                    goto LAB_71000208a8;
                  }
                  ppbVar22 = (byte **)*plVar21;
                  FUN_7100015de0(param_1,(byte *)
                                         "Couldn\'t find host %s in the .netrc file; using defaults\n"
                                 ,ppbVar22,param_4,param_5,param_6,param_7,param_8);
                  if ((*(byte *)(plVar10[0x10b] + 0x84) >> 5 & 1) != 0) goto LAB_71000208b8;
LAB_71000208c0:
                  lVar11 = FUN_71000272c0();
                  plVar10[0x42] = lVar11;
                }
                if (lVar11 == 0) {
                  plVar10[0x43] = 0;
                  goto LAB_710001f69c;
                }
                lVar11 = FUN_71000272c0();
                iVar6 = 0x1b;
                plVar10[0x43] = lVar11;
                if ((lVar11 == 0) || (plVar10[0x42] == 0)) goto LAB_710001f6a0;
                if (*pbVar15 != 0) {
                  lVar11 = FUN_71000272c0();
                  plVar10[0x44] = lVar11;
                  if (lVar11 == 0) goto LAB_710001f69c;
                }
                puVar33 = *(undefined8 **)(param_1 + 0x468);
                if (puVar33 != (undefined8 *)0x0) {
                  iVar6 = 0x1b;
LAB_710002090c:
                  pbVar15 = (byte *)*puVar33;
                  if (*pbVar15 == 0x3a) {
LAB_71000209ac:
                    pbVar13 = pbVar15 + 1;
                    if (*pbVar13 != 0x3a) {
                      pbVar15 = (byte *)strchr((char *)pbVar13,0x3a);
                      if (pbVar15 != (byte *)0x0) {
                        ppbVar22 = (byte **)0xa;
                        local_168 = (byte *)0x0;
                        lVar11 = FUN_71039c00b0(pbVar13,&local_168);
                        if (((local_168 == pbVar15) && (lVar11 == (int)plVar10[0x33])) &&
                           (pbVar15[1] != 0)) goto LAB_71000209c8;
                      }
                      goto LAB_7100020afc;
                    }
                    if (pbVar15[2] == 0) goto LAB_7100020afc;
LAB_71000209c8:
                    pbVar15 = (byte *)FUN_71000272c0();
                    if (pbVar15 != (byte *)0x0) {
                      local_2e0 = pbVar15;
                      local_2c0 = (byte **)pbVar15;
                      if (*pbVar15 == 0x5b) {
                        local_2e0 = pbVar15 + 1;
                        uVar30 = (uint)*local_2e0;
                        local_2c0 = (byte **)local_2e0;
                        if (*local_2e0 != 0) {
                          ppbVar17 = (byte **)(pbVar15 + 2);
                          do {
                            local_2c0 = ppbVar17;
                            iVar7 = isxdigit(uVar30);
                            if (((iVar7 == 0) && (uVar30 != 0x2e)) && (uVar30 != 0x3a)) {
                              if (uVar30 != 0x25) {
                                local_2c0 = (byte **)((long)local_2c0 + -1);
                                goto LAB_7100020c8c;
                              }
                              ppbVar22 = (byte **)0x3;
                              iVar7 = strncmp("%25",(char *)((long)local_2c0 + -1),3);
                              if (iVar7 != 0) {
                                FUN_7100015de0(param_1,(byte *)
                                                  "Please URL encode %% as %%25, see RFC 6874.\n",
                                               ppbVar22,param_4,param_5,param_6,param_7,param_8);
                              }
                              uVar30 = (uint)*(byte *)local_2c0;
                              if (uVar30 != 0) goto LAB_7100020c30;
                              break;
                            }
                            uVar30 = (uint)*(byte *)local_2c0;
                            ppbVar17 = (byte **)((long)local_2c0 + 1);
                          } while (uVar30 != 0);
                        }
                        goto LAB_7100020a48;
                      }
                      goto LAB_7100020a58;
                    }
                  }
                  else {
                    param_4 = (byte **)&DAT_7104317c74;
                    if (*(char *)((long)plVar10 + 0x81a) == '\0') {
                      param_4 = (byte **)&DAT_71044114cc;
                    }
                    pbVar13 = (byte *)FUN_7100007fd0((byte *)"%s%s%s");
                    if (pbVar13 != (byte *)0x0) {
                      ppbVar17 = (byte **)strlen((char *)pbVar13);
                      ppbVar22 = ppbVar17;
                      bVar3 = FUN_71000173b0(pbVar15,pbVar13,(long)ppbVar17);
                      FUN_71000272a0();
                      if ((bVar3) && (pbVar15 = pbVar15 + (long)ppbVar17, *pbVar15 == 0x3a))
                      goto LAB_71000209ac;
LAB_7100020afc:
                      uVar18 = 0xffffffff;
                      goto LAB_7100020b04;
                    }
                  }
                  goto LAB_710001f6a0;
                }
LAB_7100020d54:
                pcVar32 = (char *)plVar10[0x1b];
                lVar11 = *plVar10;
                plVar10[0x1c] = (long)pcVar32;
                sVar16 = strlen(pcVar32);
                if ((sVar16 != 0) && (pcVar32[sVar16 - 1] == '.')) {
                  pcVar32[sVar16 - 1] = '\0';
                  pcVar32 = (char *)*plVar21;
                }
                do {
                  cVar28 = *pcVar32;
                  if (cVar28 == '\0') goto LAB_7100020da8;
                  pcVar32 = pcVar32 + 1;
                } while (-1 < cVar28);
                FUN_7100015de0(lVar11,(byte *)
                                      "IDN support not present, can\'t parse Unicode domains\n",
                               ppbVar22,param_4,param_5,param_6,param_7,param_8);
LAB_7100020da8:
                if (*(char *)((long)plVar10 + 0x813) != '\0') {
                  pcVar32 = (char *)plVar10[0x20];
                  lVar11 = *plVar10;
                  plVar10[0x21] = (long)pcVar32;
                  sVar16 = strlen(pcVar32);
                  if ((sVar16 != 0) && (pcVar32[sVar16 - 1] == '.')) {
                    pcVar32[sVar16 - 1] = '\0';
                    pcVar32 = (char *)plVar10[0x20];
                  }
                  do {
                    cVar28 = *pcVar32;
                    if (cVar28 == '\0') goto LAB_7100020e00;
                    pcVar32 = pcVar32 + 1;
                  } while (-1 < cVar28);
                  FUN_7100015de0(lVar11,(byte *)
                                        "IDN support not present, can\'t parse Unicode domains\n",
                                 ppbVar22,param_4,param_5,param_6,param_7,param_8);
                }
LAB_7100020e00:
                if (*(char *)((long)plVar10 + 0x816) != '\0') {
                  pcVar32 = (char *)plVar10[0x2c];
                  lVar11 = *plVar10;
                  plVar10[0x2d] = (long)pcVar32;
                  sVar16 = strlen(pcVar32);
                  if ((sVar16 != 0) && (pcVar32[sVar16 - 1] == '.')) {
                    pcVar32[sVar16 - 1] = '\0';
                    pcVar32 = (char *)plVar10[0x2c];
                  }
                  do {
                    cVar28 = *pcVar32;
                    if (cVar28 == '\0') goto LAB_7100020e58;
                    pcVar32 = pcVar32 + 1;
                  } while (-1 < cVar28);
                  FUN_7100015de0(lVar11,(byte *)
                                        "IDN support not present, can\'t parse Unicode domains\n",
                                 ppbVar22,param_4,param_5,param_6,param_7,param_8);
                }
LAB_7100020e58:
                if (*(char *)((long)plVar10 + 0x817) != '\0') {
                  pcVar32 = (char *)plVar10[0x24];
                  lVar11 = *plVar10;
                  plVar10[0x25] = (long)pcVar32;
                  sVar16 = strlen(pcVar32);
                  if ((sVar16 != 0) && (pcVar32[sVar16 - 1] == '.')) {
                    pcVar32[sVar16 - 1] = '\0';
                    pcVar32 = (char *)plVar10[0x24];
                  }
                  do {
                    cVar28 = *pcVar32;
                    if (cVar28 == '\0') goto LAB_7100020eb0;
                    pcVar32 = pcVar32 + 1;
                  } while (-1 < cVar28);
                  FUN_7100015de0(lVar11,(byte *)
                                        "IDN support not present, can\'t parse Unicode domains\n",
                                 ppbVar22,param_4,param_5,param_6,param_7,param_8);
                }
LAB_7100020eb0:
                if ((*(char *)((long)plVar10 + 0x813) != '\0') &&
                   (bVar3 = FUN_7100017280((byte *)plVar10[0x20],(byte *)plVar10[0x1b]), bVar3)) {
                  *(undefined1 *)((long)plVar10 + 0x813) = 0;
                }
                if (*(char *)((long)plVar10 + 0x814) == '\0') {
LAB_7100020ee8:
                  bVar3 = true;
                  if (*(char *)((long)plVar10 + 0x813) != '\0') goto LAB_7100021104;
LAB_7100021100:
                  if (!bVar3) goto LAB_7100021104;
                }
                else {
                  if (*(int *)((long)plVar10 + 0x19c) == (int)plVar10[0x33]) {
                    *(undefined1 *)((long)plVar10 + 0x814) = 0;
                    goto LAB_7100020ee8;
                  }
                  bVar3 = false;
                  if (*(char *)((long)plVar10 + 0x813) == '\0') goto LAB_7100021100;
LAB_7100021104:
                  if (*(char *)((long)plVar10 + 0x816) != '\0') {
                    *(undefined1 *)((long)plVar10 + 0x821) = 1;
                  }
                }
                lVar11 = *plVar10;
                FUN_71000272a0();
                *(undefined8 *)(lVar11 + 600) = 0;
                FUN_71000272a0();
                memset((void *)(lVar11 + 0xc0),0,0x1a0);
                *(undefined8 *)(lVar11 + 0xd0) = 0xffffffffffffffff;
                *(undefined4 *)((long)plVar10 + 0xc4) = 1;
                lVar11 = plVar10[0x10b];
                if (*(code **)(lVar11 + 8) != (code *)0x0) {
                  iVar6 = (**(code **)(lVar11 + 8))(plVar10);
                  if (iVar6 != 0) goto LAB_710001f6a0;
                  lVar11 = plVar10[0x10b];
                }
                if (plVar10[0x32] < 0) {
                  plVar10[0x32] = *(long *)(lVar11 + 0x78);
                }
                plVar10[0x4e] = (long)FUN_7100016390;
                plVar10[0x50] = (long)FUN_7100016200;
                plVar10[0x4f] = (long)FUN_7100016390;
                plVar10[0x51] = (long)FUN_7100016200;
                *(undefined1 *)((long)plVar10 + 0x82e) = *(undefined1 *)(param_1 + 0x950);
                *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_1 + 0x810);
                *(undefined8 *)(param_1 + 0x608) = *(undefined8 *)(param_1 + 0x840);
                *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_1 + 0x7e0);
                *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x7f0);
                *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_1 + 0x7e8);
                *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_1 + 0x7f8);
                *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_1 + 0x720);
                *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_1 + 0x728);
                *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_1 + 0x778);
                *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_1 + 0x828);
                *(undefined8 *)(param_1 + 0x5d8) = *(undefined8 *)(param_1 + 0x828);
                *(undefined8 *)(param_1 + 0x5e8) = *(undefined8 *)(param_1 + 0x818);
                *(undefined8 *)(param_1 + 0x5e0) = *(undefined8 *)(param_1 + 0x820);
                *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_1 + 0x848);
                *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_1 + 0x780);
                *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x798);
                *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_1 + 0x820);
                *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_1 + 0x838);
                *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x850);
                *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x710);
                *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)(param_1 + 0x718);
                *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_1 + 0x710);
                *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(param_1 + 0x718);
                *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_1 + 0x7a0);
                *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_1 + 0x788);
                plVar38 = plVar10 + 0xe2;
                *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)(param_1 + 0x790);
                uVar18 = FUN_7100025f90((undefined8 *)(param_1 + 0x498),plVar38);
                if ((uVar18 & 1) != 0) {
                  plVar39 = plVar10 + 0xf2;
                  uVar18 = FUN_7100025f90((undefined8 *)(param_1 + 0x578),plVar39);
                  if ((uVar18 & 1) != 0) {
                    auVar40 = FUN_7100017740();
                    pcVar25 = *(code **)(*(long *)(param_1 + 0xb60) + 0x40);
                    piVar26 = *(int **)(*(long *)(param_1 + 0xb60) + 0x48);
                    lVar11 = FUN_7100017750(auVar40._0_8_,auVar40._8_4_,(long)pcVar25,(int)piVar26);
                    if (999 < lVar11) {
                      pcVar25 = FUN_7100022b50;
                      FUN_7100004690(*(long *)(param_1 + 0xb60),param_1,FUN_7100022b50);
                      *(undefined1 (*) [16])(*(long *)(param_1 + 0xb60) + 0x40) = auVar40;
                    }
                    if ((*(char *)(param_1 + 0x6cb) != '\0') &&
                       (*(char *)(param_1 + 0x4bb0) == '\0')) {
LAB_7100021b68:
                      bVar3 = false;
                      bVar27 = *(byte *)(plVar10[0x10b] + 0x85);
joined_r0x007100021fb0:
                      if ((bVar27 & 1) != 0) {
                        if (*(char *)(param_1 + 0x961) != '\0') {
                          *(undefined1 *)(plVar10 + 0x106) = 1;
                        }
                        if (*(char *)(param_1 + 0x960) != '\0') {
                          *(undefined1 *)((long)plVar10 + 0x82f) = 1;
                        }
                      }
                      if (!bVar3) {
                        lVar11 = FUN_7100004360((long)plVar10,*(long **)(param_1 + 0xb60));
                        if (((pcVar8 == (code *)0x0) || (lVar11 == 0)) ||
                           (*(code **)(lVar11 + 8) < pcVar8)) {
LAB_7100021c44:
                          if ((uVar9 != 0) &&
                             (uVar9 <= *(ulong *)(*(long *)(param_1 + 0xb60) + 0x30))) {
                            plVar21 = (long *)FUN_710001ecf0(param_1);
                            if (plVar21 == (long *)0x0) {
                              FUN_7100015de0(param_1,(byte *)"No connections available in cache\n",
                                             pcVar25,piVar26,param_5,param_6,param_7,param_8);
                              goto LAB_7100021b98;
                            }
                            *plVar21 = param_1;
                            FUN_710001e860(plVar21,0,pcVar25,piVar26,param_5,param_6,param_7,param_8
                                          );
                          }
                          FUN_7100004400(*(long *)(param_1 + 0xb60),plVar10);
                          local_298 = plVar10 + 0xc;
                          local_2e0 = (byte *)plVar10;
                          goto LAB_7100021fe8;
                        }
                        auVar41 = FUN_7100017740();
                        puVar33 = *(undefined8 **)(lVar11 + 0x10);
                        if (puVar33 != (undefined8 *)0x0) {
                          plVar21 = (long *)0x0;
                          lVar11 = -1;
                          do {
                            plVar39 = (long *)*puVar33;
                            plVar38 = plVar21;
                            lVar20 = lVar11;
                            if ((char)plVar39[0xc] == '\0') {
                              pcVar25 = (code *)plVar39[0x47];
                              piVar26 = (int *)plVar39[0x48];
                              lVar20 = FUN_7100017750(auVar41._0_8_,auVar41._8_4_,(long)pcVar25,
                                                      (int)piVar26);
                              plVar38 = plVar39;
                              if (lVar20 <= lVar11) {
                                plVar38 = plVar21;
                                lVar20 = lVar11;
                              }
                            }
                            puVar33 = (undefined8 *)puVar33[2];
                            plVar21 = plVar38;
                            lVar11 = lVar20;
                          } while (puVar33 != (undefined8 *)0x0);
                          if (plVar38 != (long *)0x0) {
                            *plVar38 = param_1;
                            FUN_710001e860(plVar38,0,pcVar25,piVar26,param_5,param_6,param_7,param_8
                                          );
                            goto LAB_7100021c44;
                          }
                        }
                        FUN_7100015de0(param_1,(byte *)"No more connections allowed to host: %d\n",
                                       pcVar8,piVar26,param_5,param_6,param_7,param_8);
                        pcVar25 = pcVar8;
                      }
LAB_7100021b98:
                      FUN_7100015de0(param_1,(byte *)"No connections available.\n",pcVar25,piVar26,
                                     param_5,param_6,param_7,param_8);
                      FUN_710001e9b0(plVar10);
                      *param_2 = 0;
                      iVar6 = 0x59;
                      goto LAB_710001f6a0;
                    }
                    if (((*(byte *)(plVar10[0x10b] + 0x80) & 3) == 0) ||
                       ((*(char *)((long)plVar10 + 0x81f) != '\0' &&
                        (*(char *)((long)plVar10 + 0x811) != '\0')))) {
                      local_2d0._0_4_ = 0;
                      piVar19 = (int *)FUN_7100004360((long)plVar10,*(long **)(param_1 + 0xb60));
                    }
                    else {
                      bVar3 = FUN_71000093f0(*(long *)(param_1 + 0xa8),1);
                      if (((bVar3) && (*(long *)(param_1 + 0x488) != 1)) &&
                         ((*(uint *)(param_1 + 0x480) | 4) == 5)) {
                        uVar30 = 1;
                        local_2d0._0_4_ = 1;
                        bVar3 = FUN_71000093f0(*(long *)(param_1 + 0xa8),2);
                        if (bVar3) {
LAB_7100021384:
                          uVar30 = (uint)local_2d0 | 2;
                          if (*(long *)(param_1 + 0x488) < 3) {
                            uVar30 = (uint)local_2d0;
                          }
                        }
                      }
                      else {
                        local_2d0._0_4_ = 0;
                        bVar3 = FUN_71000093f0(*(long *)(param_1 + 0xa8),2);
                        uVar30 = 0;
                        if (bVar3) goto LAB_7100021384;
                      }
                      if ((uVar30 & 1) == 0) {
                        piVar19 = (int *)FUN_7100004360((long)plVar10,*(long **)(param_1 + 0xb60));
                        local_2d0._0_4_ = uVar30;
                      }
                      else {
                        uVar18 = FUN_7100014250(param_1,(long)plVar10,pcVar25,piVar26,param_5,
                                                param_6,param_7,param_8);
                        local_2d0._0_4_ = uVar30 & 2;
                        if ((uVar18 & 1) == 0) {
                          local_2d0._0_4_ = uVar30;
                        }
                        piVar19 = (int *)FUN_7100004360((long)plVar10,*(long **)(param_1 + 0xb60));
                      }
                    }
                    if (piVar19 == (int *)0x0) goto LAB_7100021b68;
                    iVar6 = *piVar19;
                    if ((iVar6 == 2) || (*(long *)(param_1 + 0xa8) == 0)) {
                      local_2f8 = (code *)0x0;
                    }
                    else {
                      local_2f8 = *(code **)(*(long *)(param_1 + 0xa8) + 0x168);
                    }
                    lVar11 = 0xd8;
                    if (*(char *)((long)plVar10 + 0x813) != '\0') {
                      lVar11 = 0x100;
                    }
                    pcVar25 = *(code **)((long)plVar10 + lVar11);
                    ppbVar22 = (byte **)"can multiplex";
                    if (iVar6 != 2) {
                      ppbVar22 = (byte **)"serially";
                    }
                    param_5 = (byte **)"can pipeline";
                    if (iVar6 != 1) {
                      param_5 = ppbVar22;
                    }
                    piVar26 = piVar19;
                    FUN_7100015de0(param_1,(byte *)"Found bundle for host %s: %p [%s]\n",pcVar25,
                                   piVar19,param_5,param_6,param_7,param_8);
                    if ((uint)local_2d0 != 0) {
                      iVar6 = *piVar19;
                      if (0 < iVar6) {
LAB_7100021460:
                        if (iVar6 == 1) {
                          bVar3 = FUN_71000093f0(*(long *)(param_1 + 0xa8),1);
                          if (bVar3) {
                            iVar6 = *piVar19;
                            goto LAB_710002147c;
                          }
                          pcVar32 = "Could pipeline, but not asked to!\n";
LAB_71000214dc:
                          FUN_7100015de0(param_1,(byte *)pcVar32,pcVar25,piVar26,param_5,param_6,
                                         param_7,param_8);
                          goto LAB_71000214e4;
                        }
LAB_710002147c:
                        if ((iVar6 == 2) &&
                           (bVar3 = FUN_71000093f0(*(long *)(param_1 + 0xa8),2), !bVar3)) {
                          pcVar32 = "Could multiplex, but not asked to!\n";
                          goto LAB_71000214dc;
                        }
                        goto LAB_71000214e8;
                      }
                      if ((iVar6 != 0) || (*(char *)(param_1 + 0x963) == '\0')) {
                        FUN_7100015de0(param_1,(byte *)"Server doesn\'t support multi-use (yet)\n",
                                       pcVar25,piVar26,param_5,param_6,param_7,param_8);
                        iVar6 = *piVar19;
                        local_2d0._0_4_ = 0;
                        goto LAB_7100021460;
                      }
                      pcVar32 = "Server doesn\'t support multi-use yet, wait\n";
LAB_7100021f9c:
                      FUN_7100015de0(param_1,(byte *)pcVar32,pcVar25,piVar26,param_5,param_6,param_7
                                     ,param_8);
                      bVar3 = true;
                      bVar27 = *(byte *)(plVar10[0x10b] + 0x85);
                      goto joined_r0x007100021fb0;
                    }
LAB_71000214e4:
                    local_2d0._0_4_ = 0;
LAB_71000214e8:
                    puVar33 = *(undefined8 **)(piVar19 + 4);
                    if (puVar33 == (undefined8 *)0x0) goto LAB_7100021b68;
                    uVar29 = false;
                    local_2e0 = (byte *)0x0;
                    local_310 = local_2f8;
                    do {
                      pbVar15 = (byte *)*puVar33;
                      puVar33 = (undefined8 *)puVar33[2];
                      if ((*(long *)((long)pbVar15 + 0x8e8) + *(long *)((long)pbVar15 + 0x908) == 0)
                         && ((char)*(long *)((long)pbVar15 + 0x60) == '\0')) {
                        if (*(code **)(*(long *)((long)pbVar15 + 0x858) + 0x70) == (code *)0x0) {
                          pcVar25 = (code *)0xffffffff;
                          piVar26 = (int *)0x0;
                          uVar30 = FUN_7100015800(*(uint *)((long)pbVar15 + 600),0xffffffff,
                                                  0xffffffff,0);
                          if (uVar30 == 0) goto LAB_7100021544;
                        }
                        else {
                          uVar18 = (**(code **)(*(long *)((long)pbVar15 + 0x858) + 0x70))(pbVar15,1)
                          ;
                          if ((uVar18 & 1) == 0) goto LAB_7100021544;
                        }
                        pcVar25 = *(code **)((long)pbVar15 + 0x68);
                        *(long *)pbVar15 = param_1;
                        FUN_7100015de0(param_1,(byte *)"Connection %ld seems to be dead!\n",pcVar25,
                                       piVar26,param_5,param_6,param_7,param_8);
                        FUN_710001e860((long *)pbVar15,1,pcVar25,piVar26,param_5,param_6,param_7,
                                       param_8);
                        pbVar15 = local_2e0;
                        pcVar24 = local_310;
joined_r0x007100021ab0:
                        local_310 = pcVar24;
                        local_2e0 = pbVar15;
                      }
                      else {
LAB_7100021544:
                        pcVar24 = (code *)(*(long *)((long)pbVar15 + 0x908) +
                                          *(long *)((long)pbVar15 + 0x8e8));
                        if ((uint)local_2d0 == 0) {
                          if (pcVar24 == (code *)0x0) {
                            if ((char)*(long *)((long)pbVar15 + 0x90) == '\0') {
                              pcVar25 = *(code **)((long)pbVar15 + 0x68);
                              FUN_7100015de0(param_1,(byte *)
                                                  "Connection #%ld is still name resolving, can\'t reuse\n"
                                             ,pcVar25,piVar26,param_5,param_6,param_7,param_8);
                            }
                            else {
                              if ((int)*(long *)((long)pbVar15 + 600) == -1) {
                                if (*(char *)((long)pbVar15 + 0x811) == '\0') {
                                  uVar29 = true;
                                }
                              }
                              else if (*(char *)((long)pbVar15 + 0x811) == '\0')
                              goto LAB_7100021574;
                              pcVar25 = *(code **)((long)pbVar15 + 0x68);
                              FUN_7100015de0(param_1,(byte *)
                                                  "Connection #%ld isn\'t open enough, can\'t reuse\n"
                                             ,pcVar25,piVar26,param_5,param_6,param_7,param_8);
                            }
                          }
                        }
                        else {
                          cVar28 = *(char *)((long)pbVar15 + 0x81f);
                          if ((cVar28 == '\0') || (*(char *)((long)pbVar15 + 0x811) == '\0')) {
                            if (*(char *)((long)pbVar15 + 0x82d) == '\0') {
                              if (*(long **)((long)pbVar15 + 0x8d0) == (long *)0x0) {
                                lVar11 = 0;
                                plVar34 = *(long **)((long)pbVar15 + 0x8f0);
                                if (plVar34 == (long *)0x0) goto LAB_71000217b8;
LAB_71000216e0:
                                lVar20 = *plVar34;
                              }
                              else {
                                lVar11 = **(long **)((long)pbVar15 + 0x8d0);
                                plVar34 = *(long **)((long)pbVar15 + 0x8f0);
                                if (plVar34 != (long *)0x0) goto LAB_71000216e0;
LAB_71000217b8:
                                lVar20 = 0;
                              }
                              if (lVar11 == 0) {
                                if (lVar20 == 0) goto LAB_7100021574;
                                if (((*(byte *)(*(long *)((long)pbVar15 + 0x858) + 0x80) & 3) != 0)
                                   && ((cVar28 == '\0' || (*(char *)((long)pbVar15 + 0x811) == '\0')
                                       ))) {
                                  bVar3 = FUN_71000093f0(*(long *)(lVar20 + 0xa8),1);
                                  if ((bVar3) &&
                                     ((*(long *)(lVar20 + 0x488) != 1 &&
                                      ((*(uint *)(lVar20 + 0x480) | 4) == 5)))) {
                                    bVar3 = true;
                                    FUN_71000093f0(*(long *)(lVar20 + 0xa8),2);
                                  }
                                  else {
                                    bVar3 = false;
                                    FUN_71000093f0(*(long *)(lVar20 + 0xa8),2);
                                  }
                                  goto joined_r0x0071000218bc;
                                }
                              }
                              else if (((*(byte *)(*(long *)((long)pbVar15 + 0x858) + 0x80) & 3) !=
                                        0) && ((cVar28 == '\0' ||
                                               (*(char *)((long)pbVar15 + 0x811) == '\0')))) {
                                bVar3 = FUN_71000093f0(*(long *)(lVar11 + 0xa8),1);
                                if ((bVar3) &&
                                   ((*(long *)(lVar11 + 0x488) != 1 &&
                                    ((*(uint *)(lVar11 + 0x480) | 4) == 5)))) {
                                  bVar3 = true;
                                  FUN_71000093f0(*(long *)(lVar11 + 0xa8),2);
                                }
                                else {
                                  bVar3 = false;
                                  FUN_71000093f0(*(long *)(lVar11 + 0xa8),2);
                                }
joined_r0x0071000218bc:
                                if (bVar3) goto LAB_7100021574;
                              }
                            }
                            else {
LAB_7100021574:
                              lVar11 = plVar10[0x10b];
                              if (((((((*(uint *)(*(long *)((long)pbVar15 + 0x858) + 0x84) ^
                                       *(uint *)(lVar11 + 0x84)) & 1) == 0) ||
                                    ((uVar18 = FUN_7100022bf0((ulong)*(uint *)(*(long *)((long)
                                                  pbVar15 + 0x858) + 0x80)),
                                     (int)uVar18 == *(int *)(lVar11 + 0x80) &&
                                     ((char)*(long *)((long)pbVar15 + 0x810) != '\0')))) &&
                                   (*(char *)((long)plVar10 + 0x816) ==
                                    *(char *)((long)pbVar15 + 0x816))) &&
                                  (*(char *)((long)plVar10 + 0x817) ==
                                   *(char *)((long)pbVar15 + 0x817))) &&
                                 (((*(char *)((long)plVar10 + 0x817) == '\0' ||
                                   ((((int)plVar10[0x27] == (int)*(long *)((long)pbVar15 + 0x138) &&
                                     (plVar10[0x26] == *(long *)((long)pbVar15 + 0x130))) &&
                                    (bVar3 = FUN_7100017310((byte *)plVar10[0x24],
                                                            *(byte **)((long)pbVar15 + 0x120)),
                                    bVar3)))) &&
                                  ((*(char *)((long)plVar10 + 0x813) ==
                                    *(char *)((long)pbVar15 + 0x813) &&
                                   (*(char *)((long)plVar10 + 0x814) ==
                                    *(char *)((long)pbVar15 + 0x814))))))) {
                                if (*(char *)((long)plVar10 + 0x816) == '\0') {
LAB_71000218e0:
                                  if (((uint)local_2d0 != 0) ||
                                     ((char)*(long *)((long)pbVar15 + 0x60) == '\0')) {
                                    pcVar32 = (char *)plVar10[0x16c];
                                    if (((pcVar32 == (char *)0x0) && ((short)plVar10[0x16d] == 0))
                                       || ((((short)*(long *)((long)pbVar15 + 0xb68) ==
                                             (short)plVar10[0x16d] &&
                                            (*(int *)((long)pbVar15 + 0xb6c) ==
                                             *(int *)((long)plVar10 + 0xb6c))) &&
                                           ((pcVar32 == (char *)0x0 ||
                                            ((*(char **)((long)pbVar15 + 0xb60) != (char *)0x0 &&
                                             (iVar6 = strcmp(*(char **)((long)pbVar15 + 0xb60),
                                                             pcVar32), iVar6 == 0)))))))) {
                                      puVar35 = (undefined8 *)plVar10[0x10b];
                                      uVar30 = *(uint *)((long)puVar35 + 0x84);
                                      if (((uVar30 >> 7 & 1) != 0) ||
                                         ((iVar6 = strcmp((char *)plVar10[0x42],
                                                          *(char **)((long)pbVar15 + 0x210)),
                                          iVar6 == 0 &&
                                          (iVar6 = strcmp((char *)plVar10[0x43],
                                                          *(char **)((long)pbVar15 + 0x218)),
                                          iVar6 == 0)))) {
                                        if (((uVar30 & 1) == 0) &&
                                           ((*(char *)((long)plVar10 + 0x816) != '\0' &&
                                            (*(char *)((long)plVar10 + 0x821) == '\0')))) {
LAB_71000219b0:
                                          if (pcVar24 == (code *)0x0 || (uint)local_2d0 == 0)
                                          goto LAB_7100021ae8;
                                          if (pcVar24 < local_2f8 || local_2f8 == (code *)0x0) {
                                            bVar3 = FUN_71000140a0(param_1,(long)pbVar15);
                                            if (bVar3) {
                                              FUN_7100015de0(param_1,(byte *)"Penalized, skip\n",
                                                             pcVar25,piVar26,param_5,param_6,param_7
                                                             ,param_8);
                                            }
                                            else {
                                              if (local_2f8 == (code *)0x0) {
                                                FUN_7100015de0(param_1,(byte *)
                                                  "Multiplexed connection found!\n",pcVar25,piVar26,
                                                  param_5,param_6,param_7,param_8);
                                                goto LAB_7100021ae8;
                                              }
                                              if (pcVar24 < local_310) goto joined_r0x007100021ab0;
                                            }
                                          }
                                          else {
                                            FUN_7100015de0(param_1,(byte *)
                                                  "Pipe is full, skip (%zu)\n",pcVar24,piVar26,
                                                  param_5,param_6,param_7,param_8);
                                            pcVar25 = pcVar24;
                                          }
                                        }
                                        else {
                                          bVar3 = FUN_7100017280((byte *)*puVar35,
                                                                 (byte *)**(undefined8 **)
                                                                           ((long)pbVar15 + 0x858));
                                          if ((((bVar3) ||
                                               ((uVar18 = FUN_7100022bf0((ulong)*(uint *)(*(long *)(
                                                  (long)pbVar15 + 0x858) + 0x80)),
                                                (int)uVar18 == *(int *)(plVar10[0x10b] + 0x80) &&
                                                ((char)*(long *)((long)pbVar15 + 0x810) != '\0'))))
                                              && ((*(char *)((long)plVar10 + 0x813) == '\0' ||
                                                  (bVar3 = FUN_7100017280((byte *)plVar10[0x20],
                                                                          *(byte **)((long)pbVar15 +
                                                                                    0x100)), bVar3))
                                                 )) && ((((*(char *)((long)plVar10 + 0x814) == '\0'
                                                          || (*(int *)((long)plVar10 + 0x19c) ==
                                                              *(int *)((long)pbVar15 + 0x19c))) &&
                                                         (bVar3 = FUN_7100017280((byte *)*plVar21,
                                                                                 *(byte **)((long)
                                                  pbVar15 + 0xd8)), bVar3)) &&
                                                  ((int)plVar10[0x33] ==
                                                   (int)*(long *)((long)pbVar15 + 0x198))))) {
                                            if ((*(byte *)(plVar10[0x10b] + 0x84) & 1) == 0)
                                            goto LAB_71000219b0;
                                            uVar18 = FUN_7100025ed0(plVar38,(long *)((long)pbVar15 +
                                                                                    0x710));
                                            if ((uVar18 & 1) != 0) {
                                              if (*(int *)((long)pbVar15 + 0x294) == 2)
                                              goto LAB_71000219b0;
                                              uVar29 = true;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                else if ((((int)plVar10[0x2f] ==
                                           (int)*(long *)((long)pbVar15 + 0x178)) &&
                                         (plVar10[0x2e] == *(long *)((long)pbVar15 + 0x170))) &&
                                        ((bVar3 = FUN_7100017310((byte *)plVar10[0x2c],
                                                                 *(byte **)((long)pbVar15 + 0x160)),
                                         bVar3 && (*(char *)((long)plVar10 + 0x821) ==
                                                   *(char *)((long)pbVar15 + 0x821))))) {
                                  if ((int)plVar10[0x2f] != 2) goto LAB_71000218e0;
                                  if ((*(byte *)(plVar10[0x10b] + 0x84) & 1) == 0) {
                                    uVar18 = FUN_7100025ed0(plVar38,(long *)((long)pbVar15 + 0x710))
                                    ;
                                    if ((uVar18 & 1) != 0) {
                                      iVar6 = *(int *)((long)pbVar15 + 0x294);
joined_r0x0071000218dc:
                                      if (iVar6 == 2) goto LAB_71000218e0;
                                    }
                                  }
                                  else {
                                    uVar18 = FUN_7100025ed0(plVar39,(long *)((long)pbVar15 + 0x790))
                                    ;
                                    if ((uVar18 & 1) != 0) {
                                      iVar6 = *(int *)((long)pbVar15 + 0x4d4);
                                      goto joined_r0x0071000218dc;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    } while (puVar33 != (undefined8 *)0x0);
                    pbVar15 = local_2e0;
                    if (local_2e0 == (byte *)0x0) {
                      if (((bool)uVar29) && (*(char *)(param_1 + 0x963) != '\0')) {
                        pcVar32 = "Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n";
                        goto LAB_7100021f9c;
                      }
                      goto LAB_7100021b68;
                    }
LAB_7100021ae8:
                    local_2e0 = pbVar15;
                    if (((*(byte *)(*(long *)((long)local_2e0 + 0x858) + 0x80) & 3) != 0) &&
                       ((*(char *)((long)local_2e0 + 0x81f) == '\0' ||
                        (*(char *)((long)local_2e0 + 0x811) == '\0')))) {
                      bVar3 = FUN_71000093f0(*(long *)(param_1 + 0xa8),1);
                      if ((bVar3) &&
                         ((*(long *)(param_1 + 0x488) != 1 &&
                          ((*(uint *)(param_1 + 0x480) | 4) == 5)))) {
                        bVar3 = true;
                        bVar5 = FUN_71000093f0(*(long *)(param_1 + 0xa8),2);
                        bVar4 = bVar3;
                        if (!bVar5) goto LAB_7100021b54;
LAB_7100021ca8:
                        if ((!bVar4) && (*(long *)(param_1 + 0x488) < 3)) goto LAB_7100021d1c;
                      }
                      else {
                        bVar3 = false;
                        bVar4 = false;
                        bVar5 = FUN_71000093f0(*(long *)(param_1 + 0xa8),2);
                        if (bVar5) goto LAB_7100021ca8;
LAB_7100021b54:
                        if (!bVar3) goto LAB_7100021d1c;
                      }
                      piVar26 = (int *)(*(long *)((long)local_2e0 + 0x908) +
                                       *(long *)((long)local_2e0 + 0x8e8));
                      if (piVar26 != (int *)0x0) {
                        pcVar25 = *(code **)((long)local_2e0 + 0x68);
                        FUN_7100015de0(param_1,(byte *)
                                               "Found connection %ld, with requests in the pipe (%zu)\n"
                                       ,pcVar25,piVar26,param_5,param_6,param_7,param_8);
                        if ((*(code **)(*(long *)((long)local_2e0 + 0xb78) + 8) < pcVar8) &&
                           (*(ulong *)(*(long *)(param_1 + 0xb60) + 0x30) < uVar9)) {
                          FUN_7100015de0(param_1,(byte *)
                                                 "We can reuse, but we want a new connection anyway\n"
                                         ,pcVar25,piVar26,param_5,param_6,param_7,param_8);
                          goto LAB_7100021b68;
                        }
                      }
                    }
LAB_7100021d1c:
                    local_298 = (long *)((long)local_2e0 + 0x60);
                    *(undefined1 *)local_298 = 1;
                    FUN_71000272a0();
                    FUN_71000272a0();
                    FUN_71000260b0((long)plVar38);
                    FUN_71000260b0((long)plVar39);
                    *(long *)local_2e0 = *plVar10;
                    lVar11 = plVar10[0x103];
                    *(char *)((long)local_2e0 + 0x818) = (char)lVar11;
                    if ((char)lVar11 != '\0') {
                      FUN_71000272a0();
                      *(long *)((long)local_2e0 + 0x210) = 0;
                      FUN_71000272a0();
                      *(long *)((long)local_2e0 + 0x218) = 0;
                      *(long *)((long)local_2e0 + 0x210) = plVar10[0x42];
                      *(long *)((long)local_2e0 + 0x218) = plVar10[0x43];
                      plVar10[0x42] = 0;
                      plVar10[0x43] = 0;
                    }
                    cVar28 = *(char *)((long)plVar10 + 0x819);
                    *(char *)((long)local_2e0 + 0x819) = cVar28;
                    if (cVar28 != '\0') {
                      FUN_71000272a0();
                      *(long *)((long)local_2e0 + 0x180) = 0;
                      FUN_71000272a0();
                      *(long *)((long)local_2e0 + 0x140) = 0;
                      FUN_71000272a0();
                      *(long *)((long)local_2e0 + 0x188) = 0;
                      FUN_71000272a0();
                      *(long *)((long)local_2e0 + 0x148) = 0;
                      *(long *)((long)local_2e0 + 0x180) = plVar10[0x30];
                      *(long *)((long)local_2e0 + 0x140) = plVar10[0x28];
                      *(long *)((long)local_2e0 + 0x188) = plVar10[0x31];
                      *(long *)((long)local_2e0 + 0x148) = plVar10[0x29];
                      plVar10[0x28] = 0;
                      plVar10[0x29] = 0;
                      plVar10[0x30] = 0;
                      plVar10[0x31] = 0;
                    }
                    FUN_71000272a0();
                    *(long *)((long)local_2e0 + 200) = 0;
                    FUN_71000272a0();
                    *(long *)((long)local_2e0 + 0xf0) = 0;
                    lVar11 = plVar10[0x19];
                    lVar20 = plVar10[0x1a];
                    lVar2 = plVar10[0x1c];
                    *(long *)((long)local_2e0 + 0xd8) = plVar10[0x1b];
                    *(long *)((long)local_2e0 + 0xe0) = lVar2;
                    *(long *)((long)local_2e0 + 200) = lVar11;
                    *(long *)((long)local_2e0 + 0xd0) = lVar20;
                    *(undefined1 *)((long)local_2e0 + 0x813) =
                         *(undefined1 *)((long)plVar10 + 0x813);
                    lVar11 = plVar10[0x1e];
                    lVar20 = plVar10[0x1f];
                    lVar2 = plVar10[0x21];
                    *(long *)((long)local_2e0 + 0x100) = plVar10[0x20];
                    *(long *)((long)local_2e0 + 0x108) = lVar2;
                    *(long *)((long)local_2e0 + 0xf0) = lVar11;
                    *(long *)((long)local_2e0 + 0xf8) = lVar20;
                    *(undefined1 *)((long)local_2e0 + 0x814) =
                         *(undefined1 *)((long)plVar10 + 0x814);
                    *(undefined4 *)((long)local_2e0 + 0x19c) =
                         *(undefined4 *)((long)plVar10 + 0x19c);
                    FUN_7100002bd0((long *)local_2e0);
                    *(undefined1 *)((long)local_2e0 + 0x812) = 1;
                    FUN_71000272a0();
                    plVar10[0x42] = 0;
                    FUN_71000272a0();
                    plVar10[0x43] = 0;
                    FUN_71000272a0();
                    plVar10[0x30] = 0;
                    FUN_71000272a0();
                    plVar10[0x28] = 0;
                    FUN_71000272a0();
                    plVar10[0x31] = 0;
                    FUN_71000272a0();
                    plVar10[0x29] = 0;
                    FUN_71000272a0();
                    plVar10[0x16c] = 0;
                    FUN_71000068f0(plVar10 + 0x11a,0);
                    FUN_71000068f0(plVar10 + 0x11e,0);
                    FUN_71000272a0();
                    plVar10[0x122] = 0;
                    FUN_71000272a0();
                    *param_2 = local_2e0;
                    pcVar32 = "host";
                    if (*(char *)((long)local_2e0 + 0x815) != '\0') {
                      pcVar32 = "proxy";
                    }
                    if (*(long *)((long)local_2e0 + 0x120) == 0) {
                      if (*(long *)((long)local_2e0 + 0x160) == 0) {
                        plVar10 = (long *)((long)local_2e0 + 0xe0);
                      }
                      else {
                        plVar10 = (long *)((long)local_2e0 + 0x168);
                      }
                    }
                    else {
                      plVar10 = (long *)((long)local_2e0 + 0x128);
                    }
                    FUN_7100015de0(param_1,(byte *)
                                           "Re-using existing connection! (#%ld) with %s %s\n",
                                   *(long *)((long)local_2e0 + 0x68),pcVar32,*plVar10,param_6,
                                   param_7,param_8);
LAB_7100021fe8:
                    *(undefined1 *)local_298 = 1;
                    *(undefined1 *)((long)local_2e0 + 0x81c) = 0;
                    *(undefined1 *)(param_1 + 0x4fc8) = 0;
                    *(undefined1 *)(param_1 + 0x4f68) = 0;
                    if (*(char *)(param_1 + 0x6c0) == '\0') {
                      if (*(int *)(param_1 + 0x480) == 5) {
                        uVar31 = 1;
                        goto LAB_710002202c;
                      }
                    }
                    else {
                      uVar31 = 5;
LAB_710002202c:
                      *(undefined4 *)(param_1 + 0x480) = uVar31;
                    }
                    auVar40 = FUN_7100017740();
                    *(undefined1 *)(param_1 + 0x120) = 1;
                    *(undefined1 (*) [16])(param_1 + 0x100) = auVar40;
                    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0xb98);
                    *(undefined1 (*) [16])(param_1 + 0x110) = auVar40;
                    *(undefined8 *)(param_1 + 0xe0) = 0;
                    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0xb88);
                    *(undefined1 *)(param_1 + 0x229) = 0;
                    FUN_7100016cc0(param_1);
                    FUN_7100015270(param_1,0);
                    FUN_71000151d0(param_1,0);
                    lVar11 = *(long *)(param_1 + 0x400);
                    *(long *)(param_1 + 0x4f98) = lVar11;
                    if ((lVar11 != 0) || (uVar29 = 0, *(long *)(param_1 + 0x7c8) != 0)) {
                      if (*(char *)(param_1 + 0x4f8a) != '\0') {
                        FUN_71000272a0();
                        lVar11 = *(long *)(param_1 + 0x4f98);
                      }
                      if (lVar11 == 0) {
                        lVar11 = FUN_71000272c0();
                      }
                      else {
                        lVar11 = FUN_7100007fd0(&DAT_71043defc2);
                      }
                      *(long *)(param_1 + 0x4f90) = lVar11;
                      *(bool *)(param_1 + 0x4f8a) = lVar11 != 0;
                      if (lVar11 == 0) goto LAB_710001f69c;
                      uVar29 = 1;
                    }
                    *(undefined1 *)(param_1 + 0x4f89) = uVar29;
                    *(long *)((long)local_2e0 + 0x928) = *(long *)(param_1 + 0x2e8);
                    *(long *)((long)local_2e0 + 0x930) = *(long *)(param_1 + 0x378);
                    lVar11 = FUN_7100002af0(param_1,(undefined1 (*) [12])0x0,1);
                    if (*(char *)((long)local_2e0 + 0x812) != '\0') {
                      iVar6 = 0;
                      *(undefined1 *)param_3 = 0;
                      goto LAB_710001f6a0;
                    }
                    if (*(char *)((long)local_2e0 + 0x815) == '\0') {
                      plVar10 = (long *)((long)local_2e0 + 200);
                      if (*(char *)((long)local_2e0 + 0x813) != '\0') {
                        plVar10 = (long *)((long)local_2e0 + 0xf0);
                      }
                      lVar20 = 0x198;
                      if (*(char *)((long)local_2e0 + 0x814) != '\0') {
                        lVar20 = 0x19c;
                      }
                      plVar21 = &local_168;
                      uVar30 = *(uint *)((long)local_2e0 + lVar20);
                      *(long *)((long)local_2e0 + 400) = (long)(int)uVar30;
                      uVar30 = FUN_71000060b0((long *)local_2e0,(byte *)plVar10[2],uVar30,plVar21,
                                              lVar11,param_6,param_7,param_8);
                      if (uVar30 == 0xfffffffe) goto LAB_71000221ec;
                      if (uVar30 == 1) goto LAB_71000221dc;
                      if (local_168 != (byte *)0x0) goto LAB_71000221fc;
                      FUN_7100016040(param_1,(byte *)"Couldn\'t resolve host \'%s\'",plVar10[3],
                                     plVar21,lVar11,param_6,param_7,param_8);
                      iVar6 = 6;
                    }
                    else {
                      plVar10 = (long *)((long)local_2e0 + 0x150);
                      if (*(char *)((long)local_2e0 + 0x817) != '\0') {
                        plVar10 = (long *)((long)local_2e0 + 0x110);
                      }
                      plVar21 = &local_168;
                      uVar30 = FUN_71000060b0((long *)local_2e0,(byte *)plVar10[2],
                                              *(uint *)((long)local_2e0 + 400),plVar21,lVar11,
                                              param_6,param_7,param_8);
                      if (uVar30 == 0xfffffffe) {
LAB_71000221ec:
                        iVar6 = 0x1c;
                      }
                      else if (uVar30 == 1) {
LAB_71000221dc:
                        iVar6 = 0;
                        *(undefined1 *)param_3 = 1;
                      }
                      else if (local_168 == (byte *)0x0) {
                        FUN_7100016040(param_1,(byte *)"Couldn\'t resolve proxy \'%s\'",plVar10[3],
                                       plVar21,lVar11,param_6,param_7,param_8);
                        iVar6 = 5;
                      }
                      else {
LAB_71000221fc:
                        iVar6 = 0;
                      }
                    }
                    *(byte **)((long)local_2e0 + 0x70) = local_168;
                    goto LAB_710001f6a0;
                  }
                }
                goto LAB_710001f69c;
              }
            }
            else {
              ppuVar37 = &PTR_DAT_7104f17128;
              bVar4 = FUN_7100017280(PTR_DAT_7104f17128,pbVar13);
              if (bVar4) goto LAB_710001fed8;
            }
            FUN_7100016040(param_1,(byte *)"Protocol \"%s\" not supported or disabled in libcurl",
                           pbVar13,param_4,param_5,param_6,param_7,param_8);
            iVar6 = 1;
            goto LAB_710001f6a0;
          }
          pcVar32 = "Bad URL, colon is first character";
        }
        else {
          pcVar32 = "Illegal characters found in URL";
        }
LAB_710001fa40:
        FUN_7100016040(param_1,(byte *)pcVar32,ppbVar22,param_4,param_5,param_6,param_7,param_8);
        iVar6 = 3;
        goto LAB_710001f6a0;
      }
    }
  }
LAB_710001f69c:
  iVar6 = 0x1b;
LAB_710001f6a0:
  FUN_71000272a0();
  FUN_71000272a0();
  FUN_71000272a0();
  return iVar6;
  while( true ) {
    local_2c0 = (byte **)((long)local_2c0 + 1);
    uVar30 = (uint)*(byte *)local_2c0;
    if (uVar30 == 0) break;
LAB_7100020c30:
    if (((0x19 < (uVar30 | 0x20) - 0x61) && (iVar7 = isxdigit(uVar30), iVar7 == 0)) &&
       ((1 < uVar30 - 0x2d && ((uVar30 != 0x7e && (uVar30 != 0x5f)))))) goto LAB_7100020c8c;
  }
LAB_7100020a48:
  FUN_7100015de0(param_1,(byte *)"Invalid IPv6 address format\n",ppbVar22,param_4,param_5,param_6,
                 param_7,param_8);
LAB_7100020a58:
  pcVar32 = strchr((char *)local_2c0,0x3a);
  if (pcVar32 == (char *)0x0) goto LAB_7100020b68;
LAB_7100020a68:
  local_168 = (byte *)0x0;
  *pcVar32 = '\0';
  ppbVar17 = (byte **)(pcVar32 + 1);
  if (*(char *)ppbVar17 == '\0') goto LAB_7100020b68;
  ppbVar22 = (byte **)0xa;
  uVar18 = FUN_71039c00b0(ppbVar17,&local_168);
  if (local_168 == (byte *)0x0) {
    if (0xffff < uVar18) {
LAB_7100020b50:
      FUN_7100015de0(param_1,(byte *)"No valid port number in connect to host string (%s)\n",
                     ppbVar17,param_4,param_5,param_6,param_7,param_8);
      local_2e0 = (byte *)0x0;
      ppbVar22 = ppbVar17;
      goto LAB_7100020b68;
    }
  }
  else if ((uVar18 >> 0x10 != 0) || (*local_168 != 0)) goto LAB_7100020b50;
LAB_7100020b70:
  iVar7 = (int)uVar18;
  if (local_2e0 == (byte *)0x0) {
    FUN_71000272a0();
  }
  else {
    ppbVar17 = (byte **)FUN_71000272c0();
    FUN_71000272a0();
    if (ppbVar17 == (byte **)0x0) goto LAB_710001f6a0;
    if (*(char *)ppbVar17 != '\0') {
      plVar10[0x1e] = (long)ppbVar17;
      plVar10[0x20] = (long)ppbVar17;
      *(undefined1 *)((long)plVar10 + 0x813) = 1;
      ppbVar22 = ppbVar17;
      FUN_7100015de0(param_1,(byte *)"Connecting to hostname: %s\n",ppbVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      goto joined_r0x007100020bbc;
    }
  }
LAB_7100020b04:
  *(undefined1 *)((long)plVar10 + 0x813) = 0;
  FUN_71000272a0();
  ppbVar17 = (byte **)0x0;
  iVar7 = (int)uVar18;
joined_r0x007100020bbc:
  if (iVar7 < 0) {
    *(undefined1 *)((long)plVar10 + 0x814) = 0;
  }
  else {
    ppbVar22 = (byte **)(uVar18 & 0xffffffff);
    iVar7 = (int)uVar18;
    *(int *)((long)plVar10 + 0x19c) = iVar7;
    *(undefined1 *)((long)plVar10 + 0x814) = 1;
    FUN_7100015de0(param_1,(byte *)"Connecting to port: %d\n",ppbVar22,param_4,param_5,param_6,
                   param_7,param_8);
  }
  if (((iVar7 != -1) || (ppbVar17 != (byte **)0x0)) ||
     (puVar33 = (undefined8 *)puVar33[1], puVar33 == (undefined8 *)0x0)) goto LAB_7100020d54;
  goto LAB_710002090c;
LAB_7100020c8c:
  if (uVar30 != 0x5d) goto LAB_7100020a48;
  *(byte *)local_2c0 = 0;
  pcVar32 = strchr((char *)((long)local_2c0 + 1),0x3a);
  if (pcVar32 != (char *)0x0) goto LAB_7100020a68;
LAB_7100020b68:
  uVar18 = 0xffffffff;
  goto LAB_7100020b70;
}

