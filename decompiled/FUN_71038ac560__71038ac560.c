// addr:      71038ac560
// offset:    0x38ac560
// name:      FUN_71038ac560
// mangled:   
// signature: undefined __cdecl FUN_71038ac560(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038ac560(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  logic_error *this;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long ***ppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long lVar16;
  undefined8 *puVar17;
  long **pplVar18;
  ulong uVar19;
  ulong uVar20;
  long ****pppplVar21;
  void *pvVar22;
  long lVar23;
  ulong *__s2;
  void *pvVar24;
  ulong uVar25;
  ulong unaff_x27;
  long ****pppplVar26;
  float fVar27;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 local_88;
  undefined2 uStack_87;
  undefined5 uStack_85;
  long local_80;
  undefined8 uStack_78;
  long *local_70;
  long ****local_68;
  
  if ((*(long **)(param_1 + 200) != (long *)0x0) &&
     (**(long **)(param_1 + 200) == *(long *)(param_1 + 0xd0))) {
    if (*(char *)(param_1 + 0x138) == '\0') {
      lVar16 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
      lVar12 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
      if (lVar16 != lVar12) {
        do {
          plVar7 = FUN_71038ad1f0((long *)(param_1 + 0x70),(byte *)(*(long *)(lVar16 + 8) + 0x28),
                                  param_3,param_4,param_5,param_6,param_7,param_8);
          if (((long *)plVar7[2] != (long *)0x0) && (*(long *)plVar7[2] == plVar7[3])) {
            lVar10 = plVar7[1];
            if (((*(long **)(lVar10 + 0x20) != (long *)0x0) &&
                (((**(long **)(lVar10 + 0x20) == *(long *)(lVar10 + 0x28) &&
                  (*(long **)(lVar16 + 0x10) != (long *)0x0)) &&
                 (**(long **)(lVar16 + 0x10) == *(long *)(lVar16 + 0x18))))) &&
               (*(long *)(lVar10 + 0x18) == *(long *)(lVar16 + 8))) {
              if ((((*(long *)(param_1 + 0xd8) == 0) && (*(long *)(param_1 + 0xe0) == 0)) &&
                  ((*(long *)(param_1 + 0xe8) == 0 &&
                   ((*(long *)(param_1 + 0xf0) == 0 && (*(long *)(param_1 + 0xf8) == 0)))))) &&
                 ((*(ulong *)(param_1 + 0x100) & 0x3fffffffffff) == 0)) {
                return;
              }
              bVar5 = false;
              goto LAB_71038acd68;
            }
          }
          lVar16 = lVar16 + 0x20;
        } while (lVar12 != lVar16);
      }
    }
    plVar7 = (long *)(param_1 + 0x70);
    if (*(long *)(param_1 + 0x88) != 0) {
      puVar17 = *(void **)(param_1 + 0x80);
      while (puVar17 != (void *)0x0) {
        pvVar24 = (void *)*puVar17;
        puVar17[5] = &PTR_FUN_7104f61e38;
        if ((((long *)puVar17[7] != (long *)0x0) && (*(long *)puVar17[7] == puVar17[8])) &&
           ((long *)puVar17[6] != (long *)0x0)) {
          (**(code **)(*(long *)puVar17[6] + 8))();
        }
        if ((*(byte *)(puVar17 + 2) & 1) != 0) {
          pvVar22 = (void *)puVar17[4];
          nu::VirtualFreeHook(pvVar22);
          FUN_710392eb40((ulong)pvVar22);
        }
        nu::VirtualFreeHook(puVar17);
        FUN_710392eb40((ulong)puVar17);
        puVar17 = pvVar24;
      }
      uVar19 = *(ulong *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x80) = 0;
      if (uVar19 != 0) {
        uVar11 = uVar19 & 3;
        if (uVar19 - 1 < 3) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          do {
            lVar12 = lVar16 * 8;
            lVar16 = lVar16 + 4;
            *(undefined8 *)(*plVar7 + lVar12) = 0;
            *(undefined8 *)(*plVar7 + lVar12 + 8) = 0;
            *(undefined8 *)(*plVar7 + lVar12 + 0x10) = 0;
            *(undefined8 *)(*plVar7 + lVar12 + 0x18) = 0;
          } while (uVar19 - uVar11 != lVar16);
        }
        if (uVar11 != 0) {
          lVar16 = lVar16 << 3;
          lVar12 = -uVar11;
          do {
            *(undefined8 *)(*plVar7 + lVar16) = 0;
            lVar16 = lVar16 + 8;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    lVar12 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
    for (lVar16 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10); lVar16 != lVar12;
        lVar16 = lVar16 + 0x20) {
      plVar8 = FUN_71038ad1f0(plVar7,(byte *)(*(long *)(lVar16 + 8) + 0x28),param_3,param_4,param_5,
                              param_6,param_7,param_8);
      iVar6 = FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_000003b0,param_4,param_5,param_6,param_7
                             ,param_8);
      if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_90 = 0xb0;
        uStack_8f = 3;
        uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
        if ((uVar19 & 1) != 0) {
          FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_000003b0,param_4,param_5,param_6,param_7,
                         param_8);
        }
      }
      param_3 = local_68;
      nu::VirtualAllocHook(0x3b0,0x10,local_68);
      pppplVar15 = local_68;
      FUN_71038ae0b0((long ***)local_68,lVar16,param_3,param_4,param_5,param_6,param_7,param_8);
      if (pppplVar15 == (long ****)0x0) {
        ppplVar13 = (long ***)0x0;
        pplVar18 = (long **)0x0;
      }
      else {
        ppplVar13 = pppplVar15[1];
        pplVar18 = *ppplVar13;
      }
      plVar1 = (long *)plVar8[1];
      plVar2 = (long *)plVar8[2];
      plVar8[1] = (long)pppplVar15;
      plVar8[2] = (long)ppplVar13;
      lVar10 = plVar8[3];
      plVar8[3] = (long)pplVar18;
      if (((plVar2 != (long *)0x0) && (plVar1 != (long *)0x0)) && (*plVar2 == lVar10)) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    bVar5 = true;
LAB_71038acd68:
    lVar16 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
    lVar12 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
    if (lVar16 != lVar12) {
      do {
        lVar10 = *(long *)(lVar16 + 8);
        plVar7 = FUN_71038ad1f0((long *)(param_1 + 0x70),(byte *)(lVar10 + 0x28),param_3,param_4,
                                param_5,param_6,param_7,param_8);
        if (((long *)plVar7[2] != (long *)0x0) && (*(long *)plVar7[2] == plVar7[3])) {
          lVar23 = plVar7[1];
          plVar7 = *(long **)(param_1 + 0x20);
          if (plVar7 != (long *)0x0) {
            if (bVar5) {
              do {
                param_3 = (long ****)(plVar7 + 2);
                param_4 = (byte ****)(plVar7 + 4);
                FUN_71038af680(lVar23,param_2,(long)param_3,param_4,param_5,param_6,param_7,param_8)
                ;
                plVar7 = (long *)*plVar7;
              } while (plVar7 != (long *)0x0);
            }
            else {
              do {
                uVar3 = *(uint *)(plVar7 + 3);
                if (0x16d < uVar3) {
                  this = (logic_error *)__cxa_allocate_exception(0x10);
                  std::logic_error::logic_error(this,"bitset test argument out of range");
                  *(undefined **)this = &DAT_7107960010;
                    /* WARNING: Subroutine does not return */
                  __cxa_throw(this,&std::out_of_range::typeinfo,std::out_of_range::~out_of_range);
                }
                if ((*(ulong *)(param_1 + ((ulong)(uVar3 >> 3) & 0x1ffffff8) + 0xd8) &
                    1L << ((ulong)uVar3 & 0x3f)) != 0) {
                  param_3 = (long ****)(plVar7 + 2);
                  param_4 = (byte ****)(plVar7 + 4);
                  FUN_71038af680(lVar23,param_2,(long)param_3,param_4,param_5,param_6,param_7,
                                 param_8);
                }
                plVar7 = (long *)*plVar7;
              } while (plVar7 != (long *)0x0);
            }
          }
          if (bVar5) {
            lVar9 = FUN_71038cd8c0();
            pppplVar26 = *(long *****)(*(long *)(lVar10 + 0x110) + -8);
            pppplVar15 = (long ****)0x0;
            if (pppplVar26[0x12] != (long ***)0x0) {
              pppplVar15 = (long ****)(pppplVar26[0x12] + -0x11);
            }
            if (pppplVar26 != pppplVar15) {
              do {
                uVar3 = *(uint *)(pppplVar15 + 1);
                plVar7 = FUN_71038ab050((long *)(param_1 + 0x10),uVar3);
                if (plVar7 == (long *)0x0) {
                  if (*(char *)(pppplVar15 + 7) == '\0') {
                    plVar7 = FUN_710368a270((long *)(lVar9 + 0x30),uVar3);
                    if (plVar7 == (long *)0x0) goto LAB_71038aceac;
                    param_3 = (long ****)(plVar7 + 2);
                    param_4 = (byte ****)(plVar7 + 4);
                  }
                  else {
                    param_4 = (byte ****)(pppplVar15 + 8);
                    param_3 = pppplVar15;
                  }
                  FUN_71038af680(lVar23,param_2,(long)param_3,param_4,param_5,param_6,param_7,
                                 param_8);
                }
LAB_71038aceac:
                pppplVar21 = pppplVar15 + 0x13;
                if (*pppplVar21 == (long ***)0x0) {
                  pppplVar14 = pppplVar15 + 0x11;
                  pppplVar15 = (long ****)((ulong)*pppplVar14 & 0xfffffffffffffffe);
                  if ((long ****)pppplVar15[2] == pppplVar14) {
                    do {
                      pppplVar14 = pppplVar15;
                      pppplVar15 = (long ****)((ulong)*pppplVar14 & 0xfffffffffffffffe);
                    } while (pppplVar14 == (long ****)pppplVar15[2]);
                    pppplVar21 = (long ****)pppplVar14[2];
                  }
                  else {
                    pppplVar21 = (long ****)0x0;
                  }
                  if (pppplVar21 != pppplVar15) {
                    pppplVar14 = pppplVar15;
                  }
                }
                else {
                  do {
                    pppplVar14 = (long ****)*pppplVar21;
                    pppplVar21 = pppplVar14 + 1;
                  } while (*pppplVar21 != (long ***)0x0);
                }
                pppplVar15 = (long ****)0x0;
                if (pppplVar14 != (long ****)0x0) {
                  pppplVar15 = pppplVar14 + -0x11;
                }
              } while (pppplVar26 != pppplVar15);
            }
          }
          for (plVar7 = *(long **)(lVar23 + 0x398); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7)
          {
            lVar10 = plVar7[4];
            if (*(void **)(lVar10 + 0x50) != (void *)0x0) {
              param_3 = (long ****)(*(long *)(lVar10 + 0x60) - (long)*(void **)(lVar10 + 0x58));
              memcpy(*(void **)(lVar10 + 0x50),*(void **)(lVar10 + 0x58),(size_t)param_3);
              *(undefined8 *)(lVar10 + 0x50) = 0;
              (**(code **)(**(long **)(lVar10 + 0x38) + 0x18))
                        (*(long **)(lVar10 + 0x38),*(undefined8 *)(param_2 + 8));
            }
          }
        }
        lVar16 = lVar16 + 0x20;
      } while (lVar16 != lVar12);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(ulong *)(param_1 + 0x100) = *(ulong *)(param_1 + 0x100) & 0xffffc00000000000;
    goto LAB_71038acff8;
  }
  plVar7 = (long *)(param_1 + 0x70);
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar17 = *(void **)(param_1 + 0x80);
    while (puVar17 != (void *)0x0) {
      pvVar24 = (void *)*puVar17;
      puVar17[5] = &PTR_FUN_7104f61e38;
      if ((((long *)puVar17[7] != (long *)0x0) && (*(long *)puVar17[7] == puVar17[8])) &&
         ((long *)puVar17[6] != (long *)0x0)) {
        (**(code **)(*(long *)puVar17[6] + 8))();
      }
      if ((*(byte *)(puVar17 + 2) & 1) != 0) {
        pvVar22 = (void *)puVar17[4];
        nu::VirtualFreeHook(pvVar22);
        FUN_710392eb40((ulong)pvVar22);
      }
      nu::VirtualFreeHook(puVar17);
      FUN_710392eb40((ulong)puVar17);
      puVar17 = pvVar24;
    }
    uVar19 = *(ulong *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (uVar19 != 0) {
      uVar11 = uVar19 & 3;
      if (uVar19 - 1 < 3) {
        lVar16 = 0;
      }
      else {
        lVar16 = 0;
        do {
          lVar12 = lVar16 * 8;
          lVar16 = lVar16 + 4;
          *(undefined8 *)(*plVar7 + lVar12) = 0;
          *(undefined8 *)(*plVar7 + lVar12 + 8) = 0;
          *(undefined8 *)(*plVar7 + lVar12 + 0x10) = 0;
          *(undefined8 *)(*plVar7 + lVar12 + 0x18) = 0;
        } while (uVar19 - uVar11 != lVar16);
      }
      if (uVar11 != 0) {
        lVar16 = lVar16 << 3;
        lVar12 = -uVar11;
        do {
          *(undefined8 *)(*plVar7 + lVar16) = 0;
          lVar16 = lVar16 + 8;
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  iVar6 = FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_000003b0,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_90 = 0xb0;
    uStack_8f = 3;
    uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
    if ((uVar19 & 1) != 0) {
      FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_000003b0,param_4,param_5,param_6,param_7,param_8
                    );
    }
  }
  pppplVar26 = local_68;
  nu::VirtualAllocHook(0x3b0,0x10,local_68);
  pppplVar15 = local_68;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0x78;
  uStack_8f = 0x7105233b;
  local_88 = 0;
  uStack_87 = 0;
  uStack_85 = 0;
  FUN_71038ae0b0((long ***)local_68,(long)&local_90,pppplVar26,param_4,param_5,param_6,param_7,
                 param_8);
  uStack_85 = 0;
  local_90 = 0x12;
  __s2 = (ulong *)((ulong)&local_90 | 1);
  uStack_8f = 0x6e69463a3a756e;
  local_88 = 0x61;
  local_80 = 0;
  uStack_87 = 0x6c;
  uVar19 = FUN_7102677830(__s2,9);
  uVar11 = *(ulong *)(param_1 + 0x78);
  if (uVar11 != 0) {
    uVar25 = uVar11 - 1;
    if ((uVar25 & uVar11) == 0) {
      unaff_x27 = uVar25 & uVar19;
    }
    else {
      unaff_x27 = uVar19;
      if (uVar11 <= uVar19) {
        uVar20 = 0;
        if (uVar11 != 0) {
          uVar20 = uVar19 / uVar11;
        }
        unaff_x27 = uVar19 - uVar20 * uVar11;
      }
    }
    puVar17 = *(undefined8 **)(*plVar7 + unaff_x27 * 8);
    if ((puVar17 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar17, plVar8 != (long *)0x0)) {
      if ((uVar25 & uVar11) == 0) {
        do {
          if (plVar8[1] != uVar19 && (plVar8[1] & uVar25) != unaff_x27) break;
          bVar4 = *(byte *)(plVar8 + 2);
          uVar20 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar20 = plVar8[3];
          }
          if (uVar20 == 9) {
            if ((bVar4 & 1) == 0) {
              uVar20 = 0;
              while (*(char *)((long)plVar8 + uVar20 + 0x11) ==
                     *(char *)(((ulong)&local_90 | 1) + uVar20)) {
                uVar20 = uVar20 + 1;
                if (bVar4 >> 1 == uVar20) goto LAB_71038acfac;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar8[4],__s2,9);
              if (iVar6 == 0) goto LAB_71038acfac;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar25 = plVar8[1];
          if (uVar25 != uVar19) {
            if (uVar11 <= uVar25) {
              uVar20 = 0;
              if (uVar11 != 0) {
                uVar20 = uVar25 / uVar11;
              }
              uVar25 = uVar25 - uVar20 * uVar11;
            }
            if (uVar25 != unaff_x27) break;
          }
          bVar4 = *(byte *)(plVar8 + 2);
          uVar25 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar25 = plVar8[3];
          }
          if (uVar25 == 9) {
            if ((bVar4 & 1) == 0) {
              uVar25 = 0;
              while (*(char *)((long)plVar8 + uVar25 + 0x11) ==
                     *(char *)(((ulong)&local_90 | 1) + uVar25)) {
                uVar25 = uVar25 + 1;
                if (bVar4 >> 1 == uVar25) goto LAB_71038acfac;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar8[4],__s2,9);
              if (iVar6 == 0) goto LAB_71038acfac;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  iVar6 = FUN_710392e1f0(&local_70,0x10,(long ****)&DAT_00000048,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_68 = (long ****)&DAT_00000048;
    uVar25 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68);
    if ((uVar25 & 1) != 0) {
      FUN_710392e1f0(&local_70,0x10,(long ****)&DAT_00000048,param_4,param_5,param_6,param_7,param_8
                    );
    }
  }
  plVar8 = local_70;
  nu::VirtualAllocHook(0x48,0x10,local_70);
  local_70[3] = CONCAT53(uStack_85,CONCAT21(uStack_87,local_88));
  local_70[4] = local_80;
  local_70[2] = CONCAT71(uStack_8f,local_90);
  local_88 = 0;
  uStack_87 = 0;
  uStack_85 = 0;
  local_80 = 0;
  local_90 = 0;
  uStack_8f = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[8] = 0;
  local_70[5] = (long)&PTR_FUN_7104f61e38;
  *local_70 = 0;
  local_70[1] = uVar19;
  fVar27 = (float)(*(long *)(param_1 + 0x88) + 1);
  if ((uVar11 == 0) || (*(float *)(param_1 + 0x90) * (float)uVar11 < fVar27)) {
    if (uVar11 < 3) {
      uVar25 = 1;
    }
    else {
      uVar25 = (ulong)((uVar11 - 1 & uVar11) != 0);
    }
    uVar20 = (ulong)(fVar27 / *(float *)(param_1 + 0x90));
    uVar25 = uVar25 | uVar11 << 1;
    if (uVar20 <= uVar25) {
      uVar20 = uVar25;
    }
    FUN_71038ad760(plVar7,uVar20,plVar8,param_4,param_5,param_6,param_7,param_8);
    uVar11 = *(ulong *)(param_1 + 0x78);
    if ((uVar11 - 1 & uVar11) == 0) {
      unaff_x27 = uVar11 - 1 & uVar19;
    }
    else {
      unaff_x27 = uVar19;
      if (uVar11 <= uVar19) {
        uVar25 = 0;
        if (uVar11 != 0) {
          uVar25 = uVar19 / uVar11;
        }
        unaff_x27 = uVar19 - uVar25 * uVar11;
      }
    }
  }
  plVar8 = *(long **)(*plVar7 + unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)(param_1 + 0x80);
    *local_70 = *plVar8;
    *plVar8 = (long)local_70;
    *(long **)(*(long *)(param_1 + 0x70) + unaff_x27 * 8) = plVar8;
    if (*local_70 != 0) {
      uVar19 = *(ulong *)(*local_70 + 8);
      if ((uVar11 - 1 & uVar11) == 0) {
        uVar19 = uVar19 & uVar11 - 1;
      }
      else if (uVar11 <= uVar19) {
        uVar25 = 0;
        if (uVar11 != 0) {
          uVar25 = uVar19 / uVar11;
        }
        uVar19 = uVar19 - uVar25 * uVar11;
      }
      plVar8 = (long *)(*plVar7 + uVar19 * 8);
      goto LAB_71038acf9c;
    }
  }
  else {
    *local_70 = *plVar8;
LAB_71038acf9c:
    *plVar8 = (long)local_70;
  }
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  plVar8 = local_70;
LAB_71038acfac:
  if (pppplVar15 == (long ****)0x0) {
    ppplVar13 = (long ***)0x0;
    pplVar18 = (long **)0x0;
  }
  else {
    ppplVar13 = pppplVar15[1];
    pplVar18 = *ppplVar13;
  }
  plVar7 = (long *)plVar8[6];
  plVar1 = (long *)plVar8[7];
  plVar8[6] = (long)pppplVar15;
  plVar8[7] = (long)ppplVar13;
  lVar16 = plVar8[8];
  plVar8[8] = (long)pplVar18;
  if (((plVar1 != (long *)0x0) && (plVar7 != (long *)0x0)) && (*plVar1 == lVar16)) {
    (**(code **)(*plVar7 + 8))();
  }
LAB_71038acff8:
  *(undefined1 *)(param_1 + 0x138) = 0;
  return;
}

