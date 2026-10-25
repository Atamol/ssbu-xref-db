// addr:      71022b6620
// offset:    0x22b6620
// name:      FUN_71022b6620
// mangled:   
// signature: undefined __cdecl FUN_71022b6620(long param_1, undefined8 param_2, char * param_3, char * param_4, Module * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_71022b6620(long param_1,undefined8 param_2,char *param_3,char *param_4,Module *param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long *********ppppppppplVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  void *__dest;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  long *********ppppppppplVar10;
  long **********pppppppppplVar11;
  ulong *puVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  ulong *puVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *********ppppppppplVar24;
  long lVar25;
  Module *pMVar26;
  void *__src;
  long lVar27;
  undefined8 local_188;
  byte local_180 [264];
  long *********local_78;
  undefined4 local_6c [3];
  
  lVar25 = *(long *)(param_1 + 8);
switchD_71022b6704_default:
  std::recursive_mutex::lock();
  if (*(long *)(lVar25 + 0xa8) != 0) {
    uVar20 = *(ulong *)(lVar25 + 0xa0);
    puVar12 = *(ulong **)(lVar25 + 0x88);
    puVar1 = (undefined4 *)
             (*(long *)((long)puVar12 + (uVar20 >> 5 & 0x7fffffffffffff8)) + (uVar20 & 0xff) * 0x10)
    ;
    uVar3 = *puVar1;
    pMVar26 = *(Module **)(puVar1 + 2);
    uVar20 = uVar20 + 1;
    *(ulong *)(lVar25 + 0xa0) = uVar20;
    *(long *)(lVar25 + 0xa8) = *(long *)(lVar25 + 0xa8) + -1;
    if (0x1ff < uVar20) {
      if (*puVar12 != 0) {
        FUN_710392eb40(*puVar12);
        puVar12 = *(ulong **)(lVar25 + 0x88);
        uVar20 = *(ulong *)(lVar25 + 0xa0);
      }
      *(ulong **)(lVar25 + 0x88) = puVar12 + 1;
      *(ulong *)(lVar25 + 0xa0) = uVar20 - 0x100;
    }
    goto LAB_71022b66e8;
  }
  if ((EventType *)**(undefined8 **)(lVar25 + 0x50) != (EventType *)0x0) {
    nn::os::ClearEvent((EventType *)**(undefined8 **)(lVar25 + 0x50));
  }
  std::recursive_mutex::unlock();
  goto switchD_71022b6704_caseD_0;
LAB_71022b66e8:
  std::recursive_mutex::unlock();
  switch(uVar3) {
  case 0:
switchD_71022b6704_caseD_0:
    if ((EventType *)**(undefined8 **)(lVar25 + 0x50) != (EventType *)0x0) {
      nn::os::WaitEvent((EventType *)**(undefined8 **)(lVar25 + 0x50));
    }
    goto switchD_71022b6704_default;
  case 1:
    uVar20 = 1;
    break;
  case 2:
    pbVar16 = (byte *)(lVar25 + 0x30);
    if ((*pbVar16 & 1) != 0) {
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      nn::ro::UnregisterModuleInfo((RegistrationInfo *)(lVar25 + 0x10));
      if (*(ulong *)(lVar25 + 8) != 0) {
        FUN_710392eb40(*(ulong *)(lVar25 + 8));
      }
      *(ulong *)(lVar25 + 8) = 0;
    }
    uVar20 = (ulong)(((ulong)pMVar26 & 0xff) != 0);
    break;
  case 3:
    uVar9 = extraout_x1;
    if (((byte)pMVar26[0x132] & 1) != 0) {
      *(undefined4 *)(pMVar26 + 0x132) = 0;
      nn::ro::UnloadModule(pMVar26);
      uVar9 = extraout_x1_00;
      if (*(ulong *)(pMVar26 + 0x20) != 0) {
        FUN_710392eb40(*(ulong *)(pMVar26 + 0x20));
        *(undefined8 *)(pMVar26 + 0x20) = 0;
        uVar9 = extraout_x1_01;
      }
      if (*(ulong *)(pMVar26 + 0x28) != 0) {
        FUN_710392eb40(*(ulong *)(pMVar26 + 0x28));
        *(undefined8 *)(pMVar26 + 0x28) = 0;
        uVar9 = extraout_x1_02;
      }
    }
    if (((byte)pMVar26[0x133] & 1) == 0) {
      param_5 = pMVar26 + 0x30;
      param_3 = "prebuilt:/nro/%s/lua2cpp_%s.nro";
      param_4 = "Release";
      FUN_7101ea04d0(local_180,uVar9,"prebuilt:/nro/%s/lua2cpp_%s.nro","Release",param_5,param_6,
                     param_7,param_8);
      lVar27 = DAT_7105332f20;
      uVar21 = (uint)local_180[0];
      if (local_180[0] != 0) {
        uVar20 = 0;
        uVar19 = 0xffffffff;
        pbVar16 = (byte *)((ulong)local_180 | 1);
        do {
          uVar15 = uVar21 + 0x20;
          if (0x19 < uVar21 - 0x41) {
            uVar15 = uVar21;
          }
          uVar19 = (&DAT_7104754084)[(uVar15 ^ uVar19) & 0xff] ^ uVar19 >> 8;
          uVar21 = (uint)*pbVar16;
          uVar20 = uVar20 + 0x100000000;
          pbVar16 = pbVar16 + 1;
        } while (uVar21 != 0);
        uVar20 = uVar20 & 0xff00000000 | (ulong)~uVar19;
        if (uVar20 != 0) {
          lVar8 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
          uVar22 = (ulong)*(uint *)(lVar8 + 4);
          uVar18 = 0;
          if (uVar22 != 0) {
            uVar18 = uVar20 / uVar22;
          }
          lVar8 = lVar8 + (uVar20 - uVar18 * uVar22) * 8;
          uVar21 = *(uint *)(lVar8 + 0xc);
          uVar18 = (ulong)uVar21;
          puVar12 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                             (ulong)*(uint *)(lVar8 + 8) * 8);
          puVar2 = puVar12 + uVar18;
          puVar17 = puVar12;
          if (uVar21 != 0) {
            do {
              uVar22 = uVar18;
              if ((long)uVar18 < 0) {
                uVar22 = uVar18 + 1;
              }
              uVar22 = (long)uVar22 >> 1;
              puVar12 = puVar17 + uVar22 + 1;
              uVar18 = uVar18 + ~uVar22;
              if (uVar20 <= (puVar17[uVar22] & 0xffffffffff)) {
                puVar12 = puVar17;
                uVar18 = uVar22;
              }
              puVar17 = puVar12;
            } while (uVar18 != 0);
          }
          if (puVar12 != puVar2) {
            uVar18 = *puVar12;
            uVar21 = (uint)(uVar18 >> 0x28);
            if ((uVar18 & 0xffffffffff) == uVar20 && uVar21 != 0xffffff) {
              std::recursive_mutex::lock();
              puVar7 = FUN_71035404b0(lVar27,uVar18 & 0xffffff0000000000 | uVar20);
              std::recursive_mutex::unlock();
              uVar19 = 0xffffff;
              if (puVar7 != (uint *)0x0) {
                uVar19 = uVar21;
              }
              uVar20 = (ulong)uVar19;
              if ((uVar19 != 0xffffff) &&
                 (*(char *)(*(long *)(lVar27 + 8) + (ulong)uVar19 * 8 + 4) != '\0')) {
                if (*(uint *)(DAT_7105332f20 + 0x18) <= uVar19) goto LAB_71022b6a24;
                if (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar20 * 8 + 4) == '\0')
                goto LAB_71022b6a24;
                uVar21 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar20 * 8);
                do {
                  if ((uVar21 != 0xffffff) && (uVar21 < *(uint *)(DAT_7105332f20 + 0x1c))) {
                    plVar13 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar21 * 0x18);
                    if ((*(char *)((long)plVar13 + 0xc) != '\0' && plVar13 != (long *)0x0) &&
                       ((*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar21 * 0x18 + 0xd) ==
                         '\x03' && (*plVar13 != 0)))) goto LAB_71022b6ab0;
                  }
LAB_71022b6a24:
                  do {
                    lVar27 = DAT_7105332f28;
                    if (1 < *(byte *)(*(long *)(DAT_7105332f20 + 0x10) +
                                      (ulong)*(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar20 * 8) *
                                      0x18 + 0xd) - 1) {
                      std::recursive_mutex::lock();
                      param_3 = (char *)0x2;
                      FUN_71035465b0(lVar27,uVar19,2,(byte ****)param_4,(long ****)param_5,param_6,
                                     param_7,param_8);
                      std::recursive_mutex::unlock();
                    }
                    nn::os::SleepThread(1000000);
                  } while ((*(uint *)(DAT_7105332f20 + 0x18) <= uVar19) ||
                          (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar20 * 8 + 4) == '\0'));
                  uVar21 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar20 * 8);
                } while( true );
              }
            }
          }
        }
      }
    }
    goto switchD_71022b6704_default;
  case 4:
    if (((byte)pMVar26[0x132] & 1) != 0) {
      *(undefined4 *)(pMVar26 + 0x132) = 0;
      nn::ro::UnloadModule(pMVar26);
      if (*(ulong *)(pMVar26 + 0x20) != 0) {
        FUN_710392eb40(*(ulong *)(pMVar26 + 0x20));
        *(undefined8 *)(pMVar26 + 0x20) = 0;
      }
      if (*(ulong *)(pMVar26 + 0x28) != 0) {
        FUN_710392eb40(*(ulong *)(pMVar26 + 0x28));
        *(undefined8 *)(pMVar26 + 0x28) = 0;
      }
    }
    goto switchD_71022b6704_default;
  case 5:
    if (pMVar26 != (Module *)0x0) {
      if (((byte)pMVar26[0x132] & 1) != 0) {
        *(undefined4 *)(pMVar26 + 0x132) = 0;
        nn::ro::UnloadModule(pMVar26);
        if (*(ulong *)(pMVar26 + 0x20) != 0) {
          FUN_710392eb40(*(ulong *)(pMVar26 + 0x20));
          *(undefined8 *)(pMVar26 + 0x20) = 0;
        }
        if (*(ulong *)(pMVar26 + 0x28) != 0) {
          FUN_710392eb40(*(ulong *)(pMVar26 + 0x28));
        }
      }
      FUN_710392eb40((ulong)pMVar26);
    }
    goto switchD_71022b6704_default;
  case 6:
    goto switchD_71022b6704_caseD_6;
  default:
    goto switchD_71022b6704_default;
  }
  FUN_71022b6d10((ulong *)(lVar25 + 8),uVar20,(long ****)param_3,(byte ****)param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  goto switchD_71022b6704_default;
LAB_71022b6ab0:
  if ((*(uint *)(DAT_7105332f20 + 0x18) <= uVar19) ||
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar20 * 8 + 4) == '\0')) goto LAB_71022b6cd4;
  uVar21 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar20 * 8);
  if ((uVar21 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar21)) goto LAB_71022b6cd4;
  puVar23 = (undefined8 *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar21 * 0x18);
  if ((*(char *)((long)puVar23 + 0xc) == '\0') ||
     ((puVar23 == (undefined8 *)0x0 || (__src = (void *)*puVar23, __src == (void *)0x0))))
  goto LAB_71022b6cd4;
  lVar27 = **(long **)(DAT_7105332f20 + 0x78);
  if (uVar19 < *(uint *)(*(long *)(lVar27 + 0x40) + 4)) {
    uVar15 = (uint)((ulong)*(undefined8 *)(*(long *)(lVar27 + 0x60) + uVar20 * 0x20) >> 0x20);
    uVar14 = uVar15 >> 8;
    if ((uVar14 == 0xffffff) ||
       (uVar4 = *(uint *)(*(long *)(lVar27 + 0x40) + 8), uVar15 = uVar15 >> 8,
       uVar4 < uVar14 || uVar4 == uVar15)) goto LAB_71022b6b8c;
    uVar21 = *(uint *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar21 * 0x18 + 0x10);
    param_3 = (char *)(ulong)uVar21;
    lVar8 = FUN_7103541e10(lVar27,*(long *)(lVar27 + 0x90) +
                                  ((ulong)*(uint *)(*(long *)(lVar27 + 0x68) + (ulong)uVar15 * 8 + 4
                                                   ) & 0xffffff) * 0x10,uVar21);
    uVar21 = *(uint *)(*(long *)(lVar27 + 0xa0) + (ulong)*(uint *)(lVar8 + 4) * 0x10 + 8);
    ppppppppplVar24 = (long *********)(ulong)uVar21;
    ppppppppplVar10 = (long *********)param_3;
    ppppppppplVar5 = ppppppppplVar24;
    if (uVar21 == 0) goto LAB_71022b6b8c;
  }
  else {
LAB_71022b6b8c:
    ppppppppplVar24 = (long *********)0x1;
    ppppppppplVar10 = (long *********)param_3;
    ppppppppplVar5 = (long *********)0x0;
  }
  param_3 = (char *)ppppppppplVar5;
  __dest = (void *)FUN_710392e290(0x1000,ppppppppplVar24,(long ****)ppppppppplVar10,
                                  (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
  if (__dest == (void *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_188._0_4_ = 0;
      pppppppppplVar11 = &local_78;
      local_78 = ppppppppplVar24;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_188);
      if (((uVar20 & 1) != 0) &&
         (__dest = (void *)FUN_710392e290(0x1000,ppppppppplVar24,(long ****)pppppppppplVar11,
                                          (byte ****)param_4,(long ****)param_5,param_6,param_7,
                                          param_8), __dest != (void *)0x0)) goto LAB_71022b6be4;
    }
    __dest = (void *)0x0;
  }
LAB_71022b6be4:
  *(void **)(pMVar26 + 0x20) = __dest;
  memcpy(__dest,__src,(size_t)param_3);
  iVar6 = nn::ro::GetBufferSize(&local_188,*(void **)(pMVar26 + 0x20));
  if (iVar6 != 0) {
    if (*(ulong *)(pMVar26 + 0x20) != 0) {
      FUN_710392eb40(*(ulong *)(pMVar26 + 0x20));
    }
    *(undefined8 *)(pMVar26 + 0x20) = 0;
    goto LAB_71022b6cd4;
  }
  ppppppppplVar10 = (long *********)CONCAT44(local_188._4_4_,(undefined4)local_188);
  if (ppppppppplVar10 == (long *********)0x0) {
    param_3 = *(char **)(pMVar26 + 0x28);
    param_4 = (char *)0x0;
  }
  else {
    param_3 = (char *)FUN_710392e290(0x1000,ppppppppplVar10,(long ****)param_3,(byte ****)param_4,
                                     (long ****)param_5,param_6,param_7,param_8);
    if ((long *********)param_3 == (long *********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        pppppppppplVar11 = &local_78;
        local_78 = ppppppppplVar10;
        uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar20 & 1) != 0) &&
           (param_3 = (char *)FUN_710392e290(0x1000,ppppppppplVar10,(long ****)pppppppppplVar11,
                                             (byte ****)param_4,(long ****)param_5,param_6,param_7,
                                             param_8),
           (long *********)param_3 != (long *********)0x0)) goto LAB_71022b6c78;
      }
      param_3 = (char *)0x0;
    }
LAB_71022b6c78:
    *(char **)(pMVar26 + 0x28) = param_3;
    param_4 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188);
  }
  param_5 = (Module *)0x2;
  iVar6 = nn::ro::LoadModule(pMVar26,*(void **)(pMVar26 + 0x20),param_3,(ulong)param_4,2);
  if (iVar6 == 0) {
    *(undefined4 *)(pMVar26 + 0x132) = 1;
  }
  else {
    if (*(ulong *)(pMVar26 + 0x20) != 0) {
      FUN_710392eb40(*(ulong *)(pMVar26 + 0x20));
    }
    if (*(ulong *)(pMVar26 + 0x28) != 0) {
      FUN_710392eb40(*(ulong *)(pMVar26 + 0x28));
    }
    *(undefined8 *)(pMVar26 + 0x20) = 0;
    *(undefined8 *)(pMVar26 + 0x28) = 0;
  }
LAB_71022b6cd4:
  if (uVar19 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar19,(long *********)param_3,(byte ****)param_4,
                   (long ****)param_5,param_6,param_7,param_8);
  }
  goto switchD_71022b6704_default;
switchD_71022b6704_caseD_6:
  return;
}

