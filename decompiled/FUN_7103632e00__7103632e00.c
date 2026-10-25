// addr:      7103632e00
// offset:    0x3632e00
// name:      FUN_7103632e00
// mangled:   
// signature: undefined __cdecl FUN_7103632e00(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, long * * * * param_7, void * param_8)


void FUN_7103632e00(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,long ****param_7,void *param_8)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  void *pvVar10;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar11;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  int *piVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long ****__n;
  long *plVar20;
  undefined8 *puVar21;
  long ****pppplVar22;
  void *__dest;
  long ***local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long ****local_b0;
  void *local_a8;
  undefined4 local_a0;
  undefined8 uStack_98;
  long local_90;
  long *local_88;
  long local_80;
  void *local_78;
  long ****local_70 [2];
  
  std::mutex::lock();
  piVar12 = *(int **)(param_1 + 0x2f0);
  iVar4 = piVar12[5];
  if (piVar12 == (int *)0x0) goto LAB_7103633e2c;
  iVar5 = *piVar12;
  piVar12 = (int *)(param_1 + 8);
  iVar8 = *piVar12;
  if (iVar8 == iVar5) goto LAB_7103633e2c;
  if (iVar8 == 2) {
    plVar16 = *(long **)(*(long *)(param_1 + 0x178) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x178) + 0x10) = 0;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 0;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
        } while (lVar17 != lVar13);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x198) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x10) = 0;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 0;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
        } while (lVar17 != lVar13);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x1b8) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x1b8) + 0x10) = 0;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 0;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
        } while (lVar17 != lVar13);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x1d8) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x1d8) + 0x10) = 0;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 0;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
        } while (lVar17 != lVar13);
      }
    }
    *(undefined1 *)(*(long *)(param_1 + 0x78) + 0xf0) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x98) + 0xf0) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xb8) + 0xf0) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xd8) + 0xf0) = 0;
    lVar13 = *(long *)(param_1 + 0xf8);
LAB_7103633158:
    *(undefined1 *)(lVar13 + 0xf0) = 0;
  }
  else if (iVar8 == 1) {
    plVar16 = *(long **)(*(long *)(param_1 + 0x50) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x50) + 0x10) = 0;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 0;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
        } while (lVar17 != lVar13);
      }
    }
    lVar13 = *(long *)(param_1 + 0x68);
    if (lVar13 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(lVar13 + 0x40) + 8) + 0xf0) = 0;
      lVar17 = *(long *)(lVar13 + 0x50);
      if ((*(long **)(lVar17 + 0x1290) != (long *)0x0) &&
         (**(long **)(lVar17 + 0x1290) == *(long *)(lVar17 + 0x1298))) {
        *(undefined1 *)(*(long *)(lVar17 + 0x1248) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar17 + 0x1288) + 0xf0) = 0;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0x48) + 8);
      goto LAB_7103633158;
    }
  }
  if (iVar5 == 2) {
    plVar16 = *(long **)(*(long *)(param_1 + 0x178) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x178) + 0x10) = 1;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 1;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 1;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 1;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 1;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 1;
        } while (lVar17 != lVar13);
      }
    }
    lVar13 = *(long *)(param_1 + 0x198);
    *(undefined1 *)(lVar13 + 0x10) = 1;
    plVar16 = *(long **)(lVar13 + 0x48);
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 1;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 1;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 1;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 1;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 1;
        } while (lVar17 != lVar13);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x1b8) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x1b8) + 0x10) = 1;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 1;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 1;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 1;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 1;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 1;
        } while (lVar17 != lVar13);
      }
    }
    lVar13 = *(long *)(param_1 + 0x1d8);
    *(undefined1 *)(lVar13 + 0x10) = 1;
    plVar16 = *(long **)(lVar13 + 0x48);
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 1;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 1;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 1;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 1;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 1;
        } while (lVar17 != lVar13);
      }
    }
    *(undefined1 *)(*(long *)(param_1 + 0x78) + 0xf0) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0x98) + 0xf0) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0xb8) + 0xf0) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0xd8) + 0xf0) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0xf8) + 0xf0) = 1;
    plVar16 = *(long **)(*(long *)(param_1 + 0x18) + 0x128);
    if (plVar16 != (long *)0x0) {
      do {
        param_3 = &local_d8;
        local_c8 = (undefined8 *)0x0;
        local_d8 = (long ***)&DAT_0000001a;
        builtin_strncpy((char *)((ulong)&local_d8 | 1),"VSM_SRV_IPLUG",0xd);
        local_d0 = 0;
        FUN_7103856830(&uStack_98,plVar16[5],(byte *)param_3);
        if ((local_88 != (long *)0x0) && (*local_88 == local_80)) {
          local_d0 = 0;
          if (*(long **)(param_1 + 0x250) == (long *)0x0) {
LAB_710363391c:
            local_c8 = (undefined8 *)0x0;
            local_c0 = 0;
          }
          else {
            if (**(long **)(param_1 + 0x250) != *(long *)(param_1 + 600)) {
              local_d0 = 0;
              goto LAB_710363391c;
            }
            local_d0 = *(long *)(param_1 + 0x248);
            if (local_d0 == 0) goto LAB_710363391c;
            local_c8 = *(undefined8 **)(local_d0 + 8);
            local_c0 = *local_c8;
          }
          local_d8 = (long ***)&PTR_FUN_71052382b0;
          local_b8 = 0;
          local_b0 = (long ****)0x0;
          local_a8 = (void *)0x0;
          if ((*(byte *)(param_1 + 0x210) & 1) == 0) {
            local_b8 = *(ulong *)(param_1 + 0x210);
            local_b0 = *(long *****)(param_1 + 0x218);
            local_a8 = *(void **)(param_1 + 0x220);
          }
          else {
            __n = *(long *****)(param_1 + 0x218);
            if ((long ****)0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            pvVar10 = *(void **)(param_1 + 0x220);
            if (__n < (long ****)0x17) {
              local_b8 = (ulong)(byte)((int)__n << 1);
              __dest = (void *)((long)&local_b8 + 1);
              if (__n != (long ****)0x0) goto LAB_7103633a10;
            }
            else {
              pppplVar22 = (long ****)((ulong)(__n + 2) & 0xfffffffffffffff0);
              iVar8 = FUN_710392e1f0(&local_78,0x10,pppplVar22,param_4,param_5,param_6,param_7,
                                     param_8);
              if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
                 (local_70[0] = pppplVar22,
                 uVar9 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
                 (uVar9 & 1) != 0)) {
                FUN_710392e1f0(&local_78,0x10,pppplVar22,param_4,param_5,param_6,param_7,param_8);
              }
              nu::VirtualAllocHook((ulong)pppplVar22,0x10,local_78);
              local_b8 = (ulong)pppplVar22 | 1;
              local_a8 = local_78;
              __dest = local_78;
              local_b0 = __n;
LAB_7103633a10:
              param_3 = __n;
              memcpy(__dest,pvVar10,(size_t)__n);
            }
            *(byte *)((long)__dest + (long)__n) = 0;
          }
          local_a0 = 0xf;
          FUN_710386cae0(local_90,(long)&local_d8);
          pvVar10 = local_a8;
          if ((local_b8 & 1) != 0) {
            nu::VirtualFreeHook(local_a8);
            FUN_710392eb40((ulong)pvVar10);
          }
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    std::mutex::lock();
    puVar14 = *(undefined8 **)(param_1 + 0x260);
    puVar21 = *(undefined8 **)(param_1 + 0x268);
    if (puVar14 != puVar21) {
      do {
        lVar13 = *(long *)*puVar14;
        plVar16 = (long *)((long *)*puVar14)[1];
        if (plVar16 == (long *)0x0) {
          FUN_71035fb5c0(lVar13,param_1 + 0x170,0,param_4,param_5,param_6,param_7,param_8);
        }
        else {
          plVar20 = plVar16 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = *plVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          FUN_71035fb5c0(lVar13,param_1 + 0x170,0,param_4,param_5,param_6,param_7,param_8);
          do {
            lVar13 = *plVar20;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
          }
        }
        lVar13 = *(long *)*puVar14;
        plVar16 = (long *)((long *)*puVar14)[1];
        if (plVar16 == (long *)0x0) {
          FUN_71035fb5c0(lVar13,param_1 + 400,1,param_4,param_5,param_6,param_7,param_8);
        }
        else {
          plVar20 = plVar16 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = *plVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          FUN_71035fb5c0(lVar13,param_1 + 400,1,param_4,param_5,param_6,param_7,param_8);
          do {
            lVar13 = *plVar20;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
          }
        }
        lVar13 = *(long *)*puVar14;
        plVar16 = (long *)((long *)*puVar14)[1];
        if (plVar16 == (long *)0x0) {
          FUN_71035fb5c0(lVar13,param_1 + 0x1b0,2,param_4,param_5,param_6,param_7,param_8);
        }
        else {
          plVar20 = plVar16 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = *plVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          FUN_71035fb5c0(lVar13,param_1 + 0x1b0,2,param_4,param_5,param_6,param_7,param_8);
          do {
            lVar13 = *plVar20;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
          }
        }
        lVar13 = *(long *)*puVar14;
        plVar16 = (long *)((long *)*puVar14)[1];
        if (plVar16 == (long *)0x0) {
          param_3 = (long ****)0x3;
          FUN_71035fb5c0(lVar13,param_1 + 0x1d0,3,param_4,param_5,param_6,param_7,param_8);
        }
        else {
          plVar20 = plVar16 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = *plVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          param_3 = (long ****)0x3;
          FUN_71035fb5c0(lVar13,param_1 + 0x1d0,3,param_4,param_5,param_6,param_7,param_8);
          do {
            lVar13 = *plVar20;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
          }
        }
        puVar14 = puVar14 + 2;
      } while (puVar14 != puVar21);
    }
    std::mutex::unlock();
  }
  else if (iVar5 == 1) {
    lVar13 = *(long *)(param_1 + 0x50);
    *(undefined1 *)(lVar13 + 0x10) = 1;
    plVar16 = *(long **)(lVar13 + 0x48);
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 1;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 1;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 1;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 1;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 1;
        } while (lVar17 != lVar13);
      }
    }
    lVar13 = *(long *)(param_1 + 0x68);
    if (lVar13 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(lVar13 + 0x40) + 8) + 0xf0) = 1;
      lVar17 = *(long *)(lVar13 + 0x50);
      if ((*(long **)(lVar17 + 0x1290) != (long *)0x0) &&
         (**(long **)(lVar17 + 0x1290) == *(long *)(lVar17 + 0x1298))) {
        *(undefined1 *)(*(long *)(lVar17 + 0x1248) + 0x14) = 1;
        *(undefined1 *)(*(long *)(lVar17 + 0x1288) + 0xf0) = 1;
      }
      *(undefined1 *)(*(long *)(*(long *)(lVar13 + 0x48) + 8) + 0xf0) = 1;
      if (*(long *)(param_1 + 0x68) != 0) {
        FUN_710363da60(*(long *)(param_1 + 0x68),extraout_x1,param_3,param_4,param_5,param_6,param_7
                       ,param_8);
      }
    }
    std::mutex::lock();
    puVar14 = *(undefined8 **)(param_1 + 0x260);
    puVar21 = *(undefined8 **)(param_1 + 0x268);
    if (puVar14 != puVar21) {
      do {
        lVar13 = *(long *)*puVar14;
        plVar16 = (long *)((long *)*puVar14)[1];
        if (plVar16 == (long *)0x0) {
          param_3 = (long ****)0x0;
          FUN_71035fb5c0(lVar13,param_1 + 0x48,0,param_4,param_5,param_6,param_7,param_8);
        }
        else {
          plVar20 = plVar16 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = *plVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          param_3 = (long ****)0x0;
          FUN_71035fb5c0(lVar13,param_1 + 0x48,0,param_4,param_5,param_6,param_7,param_8);
          do {
            lVar13 = *plVar20;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
          }
        }
        puVar14 = puVar14 + 2;
      } while (puVar14 != puVar21);
    }
    std::mutex::unlock();
  }
  else if (iVar5 == 0) {
    plVar16 = *(long **)(*(long *)(param_1 + 0x178) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x178) + 0x10) = 0;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 0;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
        } while (lVar17 != lVar13);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x198) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x10) = 0;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 0;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
        } while (lVar17 != lVar13);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x1b8) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x1b8) + 0x10) = 0;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 0;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
        } while (lVar17 != lVar13);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x1d8) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x1d8) + 0x10) = 0;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 0;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
        } while (lVar17 != lVar13);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x50) + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x50) + 0x10) = 0;
    lVar13 = *plVar16;
    lVar17 = plVar16[1];
    if (lVar13 != lVar17) {
      uVar18 = (lVar17 + -0x40) - lVar13;
      uVar1 = ((uint)(uVar18 >> 6) & 0x3ffffff) + 1;
      uVar9 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        lVar19 = -uVar9;
        plVar16 = (long *)(lVar13 + 0x28);
        do {
          lVar19 = lVar19 + 1;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
          plVar16 = plVar16 + 8;
        } while (lVar19 != 0);
        lVar13 = lVar13 + uVar9 * 0x40;
      }
      if (0xbf < uVar18) {
        do {
          *(undefined1 *)(*(long *)(lVar13 + 0x28) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x14) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 0xa8) + 0x14) = 0;
          plVar16 = (long *)(lVar13 + 0xe8);
          lVar13 = lVar13 + 0x100;
          *(undefined1 *)(*plVar16 + 0x14) = 0;
        } while (lVar17 != lVar13);
      }
    }
    lVar13 = *(long *)(param_1 + 0x68);
    if (lVar13 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(lVar13 + 0x40) + 8) + 0xf0) = 0;
      lVar17 = *(long *)(lVar13 + 0x50);
      if ((*(long **)(lVar17 + 0x1290) != (long *)0x0) &&
         (**(long **)(lVar17 + 0x1290) == *(long *)(lVar17 + 0x1298))) {
        *(undefined1 *)(*(long *)(lVar17 + 0x1248) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar17 + 0x1288) + 0xf0) = 0;
      }
      *(undefined1 *)(*(long *)(*(long *)(lVar13 + 0x48) + 8) + 0xf0) = 0;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x78) + 0xf0) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x98) + 0xf0) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xb8) + 0xf0) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xd8) + 0xf0) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xf8) + 0xf0) = 0;
  }
  if (*piVar12 == 2) {
    if (iVar5 != 2) {
      std::mutex::lock();
      plVar20 = *(long **)(param_1 + 0x268);
      for (plVar16 = *(long **)(param_1 + 0x260); plVar16 != plVar20; plVar16 = plVar16 + 2) {
        lVar13 = *(long *)*plVar16;
        plVar2 = (long *)((long *)*plVar16)[1];
        if (plVar2 != (long *)0x0) {
          plVar3 = plVar2 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = *plVar3 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar17 = *plVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = lVar17 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_7103634300(*(long *)(*(long *)(lVar13 + 0x40) + 0x68),*(int *)(*plVar16 + 0x28),param_3,
                       param_4,param_5,param_6,param_7,param_8);
        lVar17 = *(long *)(lVar13 + 0x40);
        lVar13 = *(long *)(lVar17 + 0x1100);
        if (lVar13 != 0) {
          puVar14 = *(undefined8 **)(lVar13 + 0x18);
          plVar3 = (long *)puVar14[1];
          for (plVar2 = (long *)*puVar14; plVar2 != plVar3; plVar2 = plVar2 + 6) {
            lVar19 = plVar2[1];
            for (lVar13 = *plVar2; lVar13 != lVar19; lVar13 = lVar13 + 0xe0) {
              FUN_710360da70(lVar13);
            }
          }
        }
        *(undefined1 *)(lVar17 + 0xc0) = 0;
      }
LAB_7103633e18:
      std::mutex::unlock();
    }
  }
  else if (iVar5 == 2) {
    std::mutex::lock();
    puVar21 = *(undefined8 **)(param_1 + 0x268);
    uVar11 = extraout_x1_00;
    for (puVar14 = *(undefined8 **)(param_1 + 0x260); puVar14 != puVar21; puVar14 = puVar14 + 2) {
      lVar13 = *(long *)*puVar14;
      plVar16 = (long *)((long *)*puVar14)[1];
      if (plVar16 != (long *)0x0) {
        plVar20 = plVar16 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *plVar20 = *plVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          lVar17 = *plVar20;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *plVar20 = lVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          std::__shared_weak_count::__release_weak();
          uVar11 = extraout_x1_01;
        }
      }
      FUN_7103633eb0(*(long *)(*(long *)(lVar13 + 0x40) + 0x68),uVar11,(undefined **)param_3,param_4
                     ,param_5,param_6,param_7,param_8);
      lVar17 = *(long *)(lVar13 + 0x40);
      lVar13 = *(long *)(lVar17 + 0x1100);
      uVar11 = extraout_x1_02;
      if (lVar13 != 0) {
        puVar15 = *(undefined8 **)(lVar13 + 0x18);
        plVar20 = (long *)puVar15[1];
        for (plVar16 = (long *)*puVar15; plVar16 != plVar20; plVar16 = plVar16 + 6) {
          lVar19 = plVar16[1];
          for (lVar13 = *plVar16; lVar13 != lVar19; lVar13 = lVar13 + 0xe0) {
            FUN_710360da70(lVar13);
            uVar11 = extraout_x1_03;
          }
        }
      }
      *(undefined1 *)(lVar17 + 0xc0) = 0;
    }
    goto LAB_7103633e18;
  }
  *piVar12 = iVar5;
LAB_7103633e2c:
  std::mutex::unlock();
  if (*(int *)(param_1 + 8) != 1) {
    return;
  }
  lVar13 = *(long *)(param_1 + 0x68);
  if (*(int *)(lVar13 + 0xc) != iVar4) {
    *(int *)(lVar13 + 0xc) = iVar4;
    *(int *)(lVar13 + 0x1c) = iVar4;
    *(undefined1 *)(lVar13 + 9) = 1;
    lVar13 = *(long *)(param_1 + 0x68);
  }
  FUN_710363cf10(lVar13,extraout_x1_04,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

