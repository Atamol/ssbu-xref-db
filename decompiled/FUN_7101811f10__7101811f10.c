// addr:      7101811f10
// offset:    0x1811f10
// name:      FUN_7101811f10
// mangled:   
// signature: undefined __cdecl FUN_7101811f10(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, long param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101811f10(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  size_t __n;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long ***ppplVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  void *pvVar18;
  long ****pppplVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long ***local_90;
  undefined8 *local_88;
  undefined **local_80;
  undefined8 *local_78;
  long ***local_70;
  undefined4 local_64;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar7 = DAT_7105307d28._4_4_;
  uVar6 = (undefined4)DAT_7105307d28;
  lVar16 = *(long *)(param_1 + 0x110);
  lVar22 = *(long *)(lVar16 + 0x80);
  uVar17 = (ulong)DAT_7105307d28._4_4_;
  *(undefined1 *)(lVar22 + 0xf8) = DAT_7105307d3c._2_1_;
  *(undefined4 *)(lVar22 + 0xf0) = uVar6;
  *(int *)(lVar22 + 0xf4) = iVar7;
  pvVar18 = *(void **)(lVar22 + 0x110);
  uVar13 = *(long *)(lVar22 + 0x118) - (long)pvVar18;
  uVar21 = uVar13 >> 2;
  iVar8 = (int)uVar21;
  if (iVar7 == iVar8) {
    *(undefined4 *)(lVar22 + 0x100) = 0;
    if (0 < iVar7) {
      uVar17 = 0;
      do {
        if ((ulong)((long)uVar13 >> 2) <= uVar17) {
LAB_7101812644:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (*(int *)((long)pvVar18 + uVar17 * 4) == *(int *)(lVar22 + 0xfc)) {
          *(int *)(lVar22 + 0x100) = (int)uVar17;
          break;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < iVar7);
    }
  }
  else {
    if (iVar8 < iVar7) {
      FUN_71019bfaf0((ulong *)(lVar22 + 0x128),uVar17,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103776640(&local_90,**(long **)(lVar22 + 0xe0) + 8,(byte ****)"set_parts_scr_item_00",
                     param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_80,(long)&local_90,(long ****)"set_pic_mii",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      puVar9 = local_88;
      local_90 = (long ***)&PTR_FUN_710523d988;
      local_88 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar13 = *(ulong *)((long)puVar9 + 0x18);
        *(undefined ***)((long)puVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar9 + 0x18) = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
        FUN_710392eb40((ulong)puVar9);
      }
      do {
        local_90 = (long ***)&PTR_FUN_71052401d0;
        puVar9 = (undefined8 *)
                 FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                               );
        if (puVar9 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            local_70 = (long ***)&DAT_00000010;
            pppplVar19 = &local_70;
            uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar13 & 1) != 0) &&
               (puVar9 = (undefined8 *)
                         FUN_710392e290(0x10,0x10,pppplVar19,param_4,param_5,param_6,param_7,param_8
                                       ), puVar9 != (undefined8 *)0x0)) goto LAB_710181209c;
          }
          puVar9 = (undefined8 *)0x0;
        }
LAB_710181209c:
        *puVar9 = 0;
        puVar9[1] = 0;
        param_3 = (undefined **)*local_78;
        local_88 = puVar9;
        FUN_710379ca30((long)&local_90,(ulong)((int)uVar21 + 0x1a),(long ****)param_3,param_4,
                       param_5,param_6,param_7,param_8);
        if (*(undefined8 **)(lVar22 + 0x130) < *(undefined8 **)(lVar22 + 0x138)) {
          FUN_710379c960(*(undefined8 **)(lVar22 + 0x130),&local_90);
          *(long *)(lVar22 + 0x130) = *(long *)(lVar22 + 0x130) + 0x10;
        }
        else {
          FUN_71019bfc50((long *)(lVar22 + 0x128),&local_90,(long ****)param_3,param_4,param_5,
                         param_6,param_7,param_8);
        }
        puVar9 = local_88;
        local_90 = (long ***)&PTR_FUN_71052401d0;
        local_88 = (undefined8 *)0x0;
        if (puVar9 != (undefined8 *)0x0) {
          plVar20 = (long *)puVar9[1];
          *puVar9 = 0;
          puVar9[1] = 0;
          if (plVar20 != (long *)0x0) {
            plVar2 = plVar20 + 1;
            do {
              lVar14 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
              std::__shared_weak_count::__release_weak();
              plVar20 = (long *)puVar9[1];
            }
            else {
              plVar20 = (long *)puVar9[1];
            }
            if (plVar20 != (long *)0x0) {
              plVar2 = plVar20 + 1;
              do {
                lVar14 = *plVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = lVar14 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          FUN_710392eb40((ulong)puVar9);
        }
        uVar1 = (int)uVar21 + 1;
        uVar21 = (ulong)uVar1;
      } while ((int)uVar1 < iVar7);
      uVar13 = *(ulong *)(lVar22 + 0x110);
      *(ulong *)(lVar22 + 0x118) = uVar13;
      if ((ulong)((long)(*(long *)(lVar22 + 0x120) - uVar13) >> 2) < uVar17) {
        if (iVar7 < 0) goto LAB_7101812654;
        ppplVar11 = (long ***)(uVar17 << 2);
        if (iVar7 == 0) {
          ppplVar11 = (long ***)0x1;
        }
        lVar14 = FUN_710392e290(0x10,ppplVar11,(long ****)param_3,param_4,param_5,param_6,param_7,
                                param_8);
        if (lVar14 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
            param_3 = (undefined **)&local_90;
            local_90 = ppplVar11;
            uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
            if (((uVar21 & 1) != 0) &&
               (lVar14 = FUN_710392e290(0x10,ppplVar11,(long ****)param_3,param_4,param_5,param_6,
                                        param_7,param_8), lVar14 != 0)) goto LAB_7101812200;
          }
          lVar14 = 0;
        }
LAB_7101812200:
        *(long *)(lVar22 + 0x110) = lVar14;
        *(long *)(lVar22 + 0x118) = lVar14;
        *(ulong *)(lVar22 + 0x120) = lVar14 + uVar17 * 4;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
      }
      iVar8 = *(int *)(lVar22 + 0xf0);
      iVar15 = *(int *)(lVar22 + 0xf4);
      iVar5 = iVar15 - iVar8;
      if (0 < iVar5) {
        iVar8 = 0;
        do {
          iVar15 = iVar15 + -1;
          piVar12 = *(int **)(lVar22 + 0x118);
          if (piVar12 < *(int **)(lVar22 + 0x120)) {
            *piVar12 = iVar15;
            *(long *)(lVar22 + 0x118) = *(long *)(lVar22 + 0x118) + 4;
          }
          else {
            pvVar18 = *(void **)(lVar22 + 0x110);
            pppplVar19 = (long ****)((long)piVar12 - (long)pvVar18);
            uVar13 = ((long)pppplVar19 >> 2) + 1;
            if (uVar13 >> 0x3e != 0) goto LAB_710181264c;
            lVar14 = (long)*(int **)(lVar22 + 0x120) - (long)pvVar18;
            if ((ulong)(lVar14 >> 2) < 0x1fffffffffffffff) {
              uVar17 = lVar14 >> 1;
              if (uVar13 <= uVar17) {
                uVar13 = uVar17;
              }
              if (uVar13 != 0) {
                if (uVar13 >> 0x3e == 0) goto LAB_71018122a8;
                goto LAB_7101812654;
              }
LAB_7101812308:
              pvVar10 = (void *)0x0;
            }
            else {
              uVar13 = 0x3fffffffffffffff;
LAB_71018122a8:
              ppplVar11 = (long ***)(uVar13 * 4);
              if (ppplVar11 == (long ***)0x0) {
                ppplVar11 = (long ***)0x1;
              }
              pvVar10 = (void *)FUN_710392e290(0x10,ppplVar11,(long ****)param_3,param_4,param_5,
                                               param_6,param_7,param_8);
              if (pvVar10 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
                  param_3 = (undefined **)&local_90;
                  local_90 = ppplVar11;
                  uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
                  if (((uVar17 & 1) != 0) &&
                     (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar11,(long ****)param_3,param_4,
                                                       param_5,param_6,param_7,param_8),
                     pvVar10 != (void *)0x0)) goto LAB_710181230c;
                }
                goto LAB_7101812308;
              }
            }
LAB_710181230c:
            piVar12 = (int *)((long)pvVar10 + ((long)pppplVar19 >> 2) * 4);
            *piVar12 = iVar15;
            if (0 < (long)pppplVar19) {
              memcpy(pvVar10,pvVar18,(size_t)pppplVar19);
              param_3 = (undefined **)pppplVar19;
            }
            *(void **)(lVar22 + 0x110) = pvVar10;
            *(int **)(lVar22 + 0x118) = piVar12 + 1;
            *(void **)(lVar22 + 0x120) = (void *)((long)pvVar10 + uVar13 * 4);
            if (pvVar18 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar18);
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar5);
        iVar8 = *(int *)(lVar22 + 0xf0);
      }
      piVar12 = *(int **)(lVar22 + 0x118);
      *(int *)(lVar22 + 0x104) = (int)((ulong)((long)piVar12 - *(long *)(lVar22 + 0x110)) >> 2);
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          if (piVar12 == *(int **)(lVar22 + 0x120)) {
            pvVar18 = *(void **)(lVar22 + 0x110);
            pppplVar19 = (long ****)((long)piVar12 - (long)pvVar18);
            uVar17 = (long)pppplVar19 >> 2;
            uVar13 = uVar17 + 1;
            if (uVar13 >> 0x3e != 0) {
LAB_710181264c:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar17 < 0x1fffffffffffffff) {
              if (uVar13 <= (ulong)((long)pppplVar19 >> 1)) {
                uVar13 = (long)pppplVar19 >> 1;
              }
              if (uVar13 != 0) {
                if (uVar13 >> 0x3e == 0) goto LAB_71018123e8;
                goto LAB_7101812654;
              }
LAB_7101812448:
              pvVar10 = (void *)0x0;
            }
            else {
              uVar13 = 0x3fffffffffffffff;
LAB_71018123e8:
              ppplVar11 = (long ***)(uVar13 * 4);
              if (ppplVar11 == (long ***)0x0) {
                ppplVar11 = (long ***)0x1;
              }
              pvVar10 = (void *)FUN_710392e290(0x10,ppplVar11,(long ****)param_3,param_4,param_5,
                                               param_6,param_7,param_8);
              if (pvVar10 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
                  param_3 = (undefined **)&local_90;
                  local_90 = ppplVar11;
                  uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
                  if (((uVar21 & 1) != 0) &&
                     (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar11,(long ****)param_3,param_4,
                                                       param_5,param_6,param_7,param_8),
                     pvVar10 != (void *)0x0)) goto LAB_710181244c;
                }
                goto LAB_7101812448;
              }
            }
LAB_710181244c:
            piVar12 = (int *)((long)pvVar10 + uVar17 * 4);
            *piVar12 = iVar8;
            if (0 < (long)pppplVar19) {
              memcpy(pvVar10,pvVar18,(size_t)pppplVar19);
              param_3 = (undefined **)pppplVar19;
            }
            *(void **)(lVar22 + 0x110) = pvVar10;
            *(int **)(lVar22 + 0x118) = piVar12 + 1;
            *(void **)(lVar22 + 0x120) = (void *)((long)pvVar10 + uVar13 * 4);
            if (pvVar18 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar18);
            }
          }
          else {
            *piVar12 = iVar8;
            *(long *)(lVar22 + 0x118) = *(long *)(lVar22 + 0x118) + 4;
          }
          iVar8 = iVar8 + 1;
          if (*(int *)(lVar22 + 0xf0) <= iVar8) break;
          piVar12 = *(int **)(lVar22 + 0x118);
        } while( true );
      }
      puVar9 = local_78;
      local_80 = &PTR_FUN_710523d9a8;
      local_78 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar9);
      }
    }
    else if (iVar7 < iVar8) {
      iVar8 = iVar8 - iVar7;
      if (iVar8 != 0) {
        pvVar10 = (void *)((long)pvVar18 + (long)iVar8 * 4);
        __n = *(long *)(lVar22 + 0x118) - (long)pvVar10;
        if (__n != 0) {
          memmove(pvVar18,pvVar10,__n);
        }
        *(void **)(lVar22 + 0x118) = (void *)((long)pvVar18 + ((long)__n >> 2) * 4);
      }
      *(int *)(lVar22 + 0x104) = *(int *)(lVar22 + 0x104) - iVar8;
    }
    *(undefined4 *)(lVar22 + 0x100) = 0;
    if (0 < iVar7) {
      uVar13 = 0;
      do {
        if ((ulong)(*(long *)(lVar22 + 0x118) - *(long *)(lVar22 + 0x110) >> 2) <= uVar13)
        goto LAB_7101812644;
        if (*(int *)(*(long *)(lVar22 + 0x110) + uVar13 * 4) == *(int *)(lVar22 + 0xfc)) {
          *(int *)(lVar22 + 0x100) = (int)uVar13;
          break;
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar7);
    }
    FUN_7103783690((long *)(lVar22 + 0xe8),iVar7);
  }
  FUN_7103775dc0((long *)**(undefined8 **)(lVar22 + 0xe0),0,(long ****)0x1001,param_4,param_5,
                 param_6,param_7,param_8);
  *(undefined4 *)(lVar22 + 0xcc) = 0;
  *(undefined8 *)(lVar22 + 0xd0) = 0xffffffff;
  *(undefined4 *)(lVar22 + 0xd8) = 0xffffffff;
  *(undefined8 *)(lVar22 + 0x10) = 0;
  *(undefined8 *)(lVar22 + 0x18) = 0;
  *(undefined8 *)(lVar22 + 0xc4) = 0;
  *(undefined8 *)(lVar22 + 0xbc) = 0;
  *(undefined8 *)(lVar22 + 0xb4) = 0;
  *(undefined8 *)(lVar22 + 0xac) = 0;
  *(undefined8 *)(lVar22 + 0xa4) = 0;
  *(undefined8 *)(lVar22 + 0x9c) = 0;
  *(undefined8 *)(lVar22 + 0x94) = 0;
  *(undefined8 *)(lVar22 + 0x8c) = 0;
  *(undefined8 *)(lVar22 + 0x84) = 0;
  *(undefined1 *)(lVar22 + 0xdc) = 0;
  *(undefined4 *)(lVar22 + 0x80) = 1;
  FUN_71019c0300((long *)(lVar22 + 8));
  *(undefined1 *)(lVar16 + 0x70) = 0;
  DAT_7105307d3c._2_1_ = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(uint *)(param_1 + 0xe4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 2;
    return;
  }
LAB_7101812654:
                    /* WARNING: Subroutine does not return */
  abort();
}

