// addr:      7101c3de80
// offset:    0x1c3de80
// name:      FUN_7101c3de80
// mangled:   
// signature: undefined __cdecl FUN_7101c3de80(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c3de80(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  void *__src;
  long ****pppplVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  void *pvVar10;
  long ****pppplVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long ***ppplVar14;
  long **pplVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  int *piVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  ulong uVar27;
  long *plVar28;
  void *__dest;
  long ****__n;
  long ****pppplVar29;
  size_t sVar30;
  void *pvVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined **local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined4 uStack_de;
  undefined2 uStack_da;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  long *local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined4 local_84;
  
  if (*(int *)(param_1 + 0x164) == 0) {
    uVar26 = 0x811c9dc5;
    (**(code **)(**(long **)(param_1 + 0x40) + 0x60))(*(long **)(param_1 + 0x40),0);
    (**(code **)(**(long **)(param_1 + 0x40) + 0x70))(*(long **)(param_1 + 0x40),0);
    (**(code **)(**(long **)(param_1 + 0x50) + 0x60))(*(long **)(param_1 + 0x50),0);
    plVar28 = (long *)(param_1 + 0x48);
    (**(code **)(*(long *)*plVar28 + 0x60))((long *)*plVar28,1);
    (**(code **)(*(long *)*plVar28 + 0x70))((long *)*plVar28,1);
    param_3 = (undefined **)0x0;
    FUN_7103771a80(plVar28,*(int *)(param_1 + 0x198),0);
    local_100 = (undefined **)0x1f00000000;
    uStack_f8 = 0x72756f745f6c656d;
    uStack_e6 = 0x706c65685f65;
    uStack_e0 = 0x735f;
    uStack_de = 0x63656c65;
    uStack_da = 0x74;
    local_f0 = 0x745f746e656d616e;
    uVar20 = 0x6d;
    lVar18 = 9;
    uStack_e8 = 0x7079;
    uVar24 = uVar26;
    do {
      uVar24 = uVar24 * 0x89 ^ uVar20;
      uVar20 = (uint)*(byte *)((long)&local_100 + lVar18);
      lVar18 = lVar18 + 1;
    } while (uVar20 != 0);
    local_100 = (undefined **)CONCAT44(0x1f,uVar24);
    FUN_7101af53d0(*(long *)(*(long *)(param_1 + 0x1a0) + 0x80),(uint *)&local_100,param_3,param_4,
                   param_5,param_6,param_7,param_8);
    if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar24 = DAT_71053050f0;
    FUN_7101af8900(*(long *)(param_1 + 0x1a0),DAT_71053050f0,param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar18 = *(long *)(param_1 + 0x1a0);
    FUN_7103394f60((uint *)&local_100,uVar24);
    FUN_7101af8c80(*(long *)(lVar18 + 0x80),(uint *)&local_100,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    lVar18 = *(long *)(param_1 + 0x1a0);
    FUN_7103395260((uint *)&local_100,uVar24);
    FUN_7101af8e90(*(long *)(lVar18 + 0x80),(uint *)&local_100,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    local_100 = (undefined **)0x1900000000;
    uStack_f8 = 0x72756f745f6c656d;
    uVar20 = 0x6d;
    lVar18 = 9;
    local_f0 = 0x745f746e656d616e;
    uStack_e8 = 0x7079;
    uStack_e6 = 0x6c7469745f65;
    uStack_e0 = 0x65;
    do {
      uVar26 = uVar26 * 0x89 ^ uVar20;
      uVar20 = (uint)*(byte *)((long)&local_100 + lVar18);
      lVar18 = lVar18 + 1;
    } while (uVar20 != 0);
    local_100 = (undefined **)CONCAT44(0x19,uVar26);
    FUN_7101af90b0(*(long *)(*(long *)(param_1 + 0x1a0) + 0x80),(uint *)&local_100,param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7101af8900(*(long *)(param_1 + 0x1a0),uVar24,param_3,param_4,param_5,param_6,param_7,param_8
                  );
  }
  FUN_71037780e0(&local_100,param_1 + 0x30,(long ****)"00_to_01",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar27 = uStack_f8;
  if (*(long **)(uStack_f8 + 8) == (long *)0x0) {
    uVar9 = 1;
  }
  else {
    uVar9 = (**(code **)(**(long **)(uStack_f8 + 8) + 0x138))();
    uVar9 = uVar9 & 0xffffffff;
  }
  local_100 = &PTR_FUN_710523d9e8;
  uStack_f8 = 0;
  if (uVar27 != 0) {
    FUN_710392eb40(uVar27);
  }
  if ((uVar9 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x408) = 1;
  if (0x12 < *(uint *)(param_1 + 0x15c)) {
LAB_7101c3eb3c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x15c) * 4 + 0x110) = 5;
  puVar13 = DAT_7105329070;
  if (DAT_7105329070 != (undefined8 *)0x0) {
    iVar8 = *(int *)(param_1 + 0x170);
    puVar13 = &DAT_7105329070;
    puVar25 = DAT_7105329070;
    do {
      if (iVar8 <= *(int *)(puVar25 + 4)) {
        puVar13 = puVar25;
      }
      puVar25 = (undefined8 *)puVar25[*(int *)(puVar25 + 4) < iVar8];
    } while (puVar25 != (undefined8 *)0x0);
    if (((undefined8 **)puVar13 == &DAT_7105329070) || (iVar8 < *(int *)(puVar13 + 4))) {
      puVar25 = DAT_7105329070;
      puVar13 = &DAT_7105329070;
      do {
        while (puVar12 = puVar25, 0 < *(int *)(puVar12 + 4)) {
          puVar25 = (undefined8 *)*puVar12;
          puVar13 = puVar12;
          if ((undefined8 *)*puVar12 == (undefined8 *)0x0) goto LAB_7101c3e19c;
        }
        if (-1 < *(int *)(puVar12 + 4)) break;
        puVar13 = puVar12 + 1;
        puVar25 = (undefined8 *)*puVar13;
      } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
LAB_7101c3e19c:
      puVar13 = (undefined8 *)*puVar13;
    }
  }
  plVar28 = (long *)(param_1 + 0x180);
  if (plVar28 != puVar13 + 5) {
    pvVar31 = (void *)puVar13[5];
    pvVar10 = (void *)puVar13[6];
    lVar18 = *(long *)(param_1 + 400);
    __dest = *(void **)(param_1 + 0x180);
    sVar30 = (long)pvVar10 - (long)pvVar31;
    uVar27 = (long)sVar30 >> 3;
    if ((ulong)(lVar18 - (long)__dest >> 3) < uVar27) {
      if (__dest != (void *)0x0) {
        *(void **)(param_1 + 0x188) = __dest;
        FUN_710392eb40((ulong)__dest);
        lVar18 = 0;
        *plVar28 = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
      }
      if (uVar27 >> 0x3d != 0) {
LAB_7101c3e228:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
        uVar9 = lVar18 >> 2;
        if ((uVar27 <= uVar9) && (uVar27 = uVar9, uVar9 >> 0x3d != 0)) goto LAB_7101c3e228;
      }
      else {
        uVar27 = 0x1fffffffffffffff;
      }
      ppplVar14 = (long ***)(uVar27 * 8);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar10 = (void *)FUN_710392e290(0x10,ppplVar14,(long ****)param_3,param_4,param_5,param_6,
                                       param_7,param_8);
      if (pvVar10 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
          pppplVar11 = (long ****)&local_100;
          local_100 = (undefined **)ppplVar14;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
          if (((uVar9 & 1) != 0) &&
             (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar11,param_4,param_5,param_6,
                                               param_7,param_8), pvVar10 != (void *)0x0))
          goto LAB_7101c3e328;
        }
        pvVar10 = (void *)0x0;
      }
LAB_7101c3e328:
      *(void **)(param_1 + 0x180) = pvVar10;
      *(void **)(param_1 + 0x188) = pvVar10;
      *(void **)(param_1 + 400) = (void *)((long)pvVar10 + uVar27 * 8);
      if (0 < (long)sVar30) {
        memcpy(pvVar10,pvVar31,sVar30);
        *(size_t *)(param_1 + 0x188) = (long)pvVar10 + sVar30;
      }
    }
    else {
      lVar18 = *(long *)(param_1 + 0x188) - (long)__dest;
      uVar9 = lVar18 >> 3;
      __src = (void *)((long)pvVar31 + lVar18);
      if (uVar27 <= uVar9) {
        __src = pvVar10;
      }
      sVar30 = (long)__src - (long)pvVar31;
      if (sVar30 != 0) {
        memmove(__dest,pvVar31,sVar30);
      }
      plVar4 = (long *)(param_1 + 0x188);
      if (uVar9 < uVar27) {
        sVar30 = (long)pvVar10 - (long)__src;
        if (0 < (long)sVar30) {
          memcpy((void *)*plVar4,__src,sVar30);
          *plVar4 = *plVar4 + sVar30;
        }
      }
      else {
        *plVar4 = (long)((long)__dest + ((long)sVar30 >> 3) * 8);
      }
    }
  }
  lVar18 = *plVar28;
  uStack_f8 = 0;
  local_100 = (undefined **)0xc3280000c424c000;
  pppplVar11 = (long ****)(*(long *)(param_1 + 0x188) - lVar18 >> 3);
  uStack_e8 = 0;
  uStack_e6 = 0;
  local_f0 = 0xc3280000c3828000;
  uStack_d8 = 0;
  uStack_e0 = 0xc000;
  uStack_de = 0xc424;
  uStack_da = 0x4351;
  pppplVar2 = pppplVar11;
  if ((long ****)0x3 < pppplVar11) {
    pppplVar2 = (long ****)&DAT_00000004;
  }
  uStack_c8 = 0;
  local_d0 = 0x43510000c3828000;
  if (pppplVar2 != (long ****)0x0) {
    pppplVar29 = (long ****)0x0;
LAB_7101c3e408:
    pbVar1 = (byte *)(lVar18 + (long)pppplVar29 * 8);
    local_b8 = (undefined **)CONCAT44(*(undefined4 *)(param_1 + 0x170),(uint)*pbVar1);
    local_b0 = (long *)(ulong)CONCAT14(pbVar1[3],(uint)pbVar1[2]);
    local_a8 = (ulong)CONCAT14(pbVar1[5],(uint)pbVar1[4]);
    local_a0 = (ulong)CONCAT14((pbVar1 + 2)[(ulong)pbVar1[1] - 1],(uint)pbVar1[6]);
    FUN_7102350980(*(uint **)(DAT_7105329060 + 8),(uint *)&local_b8,pppplVar11,param_4,param_5,
                   param_6,param_7,param_8);
    lVar18 = DAT_7105329060;
    uVar27 = (ulong)pppplVar29 & 0xffffffff;
    *(byte *)(*(long *)(DAT_7105329060 + 8) + 0xb0) = pbVar1[7];
    uVar33 = CONCAT44((float)((ulong)(&local_100)[(long)pppplVar29 * 2] >> 0x20) + 540.0,
                      (float)(&local_100)[(long)pppplVar29 * 2] + 960.0);
    uVar34 = CONCAT44((float)((ulong)(&uStack_f8)[(long)pppplVar29 * 2] >> 0x20) + 0.0,
                      (float)(&uStack_f8)[(long)pppplVar29 * 2] + 0.0);
    lVar19 = *(long *)(lVar18 + 8);
    *(undefined8 *)(lVar19 + 0x108) = uVar34;
    *(undefined8 *)(lVar19 + 0x100) = uVar33;
    *(undefined8 *)(lVar19 + 0x118) = uVar34;
    *(undefined8 *)(lVar19 + 0x110) = uVar33;
    *(undefined4 *)(lVar19 + 0x130) = 0xbf800000;
    *(undefined8 *)(lVar19 + 0x128) = uVar34;
    *(undefined8 *)(lVar19 + 0x120) = uVar33;
    lVar18 = *(long *)(lVar18 + 8);
    *(undefined1 **)(lVar18 + 0xe4) = &DAT_3f8000003f800000;
    *(undefined8 *)(lVar18 + 0xec) = 0xbf8000003f800000;
    FUN_7103776640(&local_110,**(long **)(param_1 + 0x10) + 8,(byte ****)"set_parts_btn2_%02d",
                   uVar27,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_b8,(long)&local_110,(long ****)"set_pic_final_base",uVar27,param_4,param_5
                   ,param_6,param_7,param_8);
    plVar4 = local_b0;
    pppplVar11 = (long ****)*local_b0;
    FUN_7101c3f510(298.0,232.0,param_1,(uint)pppplVar29,(long)pppplVar11);
    local_b8 = &PTR_FUN_710523d9a8;
    local_b0 = (long *)0x0;
    if (plVar4 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    lVar19 = param_1 + (long)pppplVar29 * 0x18;
    *(undefined8 *)(lVar19 + 0x1b0) = *(undefined8 *)(lVar19 + 0x1a8);
    lVar18 = DAT_7105329060;
    iVar8 = *(int *)(*(long *)(DAT_7105329060 + 8) + 4);
    if ((iVar8 != 0) &&
       (lVar21 = *(long *)(DAT_7105329060 + 8) + (ulong)(iVar8 - 1) * 0x18,
       plVar4 = *(long **)(lVar21 + 8), *(long **)(lVar21 + 0x10) != plVar4)) {
      ppplVar14 = (long ***)*plVar4;
      plVar4 = (long *)plVar4[1];
      if (plVar4 != (long *)0x0) {
        plVar16 = plVar4 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = *plVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (ppplVar14 != (long ***)0x0) {
        lVar21 = *(long *)(lVar18 + 8);
        pppplVar11 = (long ****)(lVar21 + 0x110);
        local_b8 = (undefined **)ppplVar14;
        local_b0 = plVar4;
        if (plVar4 == (long *)0x0) {
          param_4 = (byte ****)0x0;
          FUN_7102351c30(lVar21,&local_b8,pppplVar11,0);
        }
        else {
          plVar16 = plVar4 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = *plVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          lVar18 = *(long *)(lVar18 + 8);
          plVar16 = plVar4 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = *plVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          param_4 = (byte ****)0x0;
          FUN_7102351c30(lVar18,&local_b8,pppplVar11,0);
          do {
            lVar18 = *plVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = lVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            std::__shared_weak_count::__release_weak();
          }
          do {
            lVar18 = *plVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = lVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            std::__shared_weak_count::__release_weak();
          }
        }
        pplVar15 = *ppplVar14;
        bVar7 = *(int *)((long)pplVar15 + 4) != 0;
        lVar18 = 0x38;
        if (bVar7) {
          lVar18 = 0x10;
        }
        lVar21 = 0x30;
        if (bVar7) {
          lVar21 = 8;
        }
        lVar36 = 2;
        if (bVar7) {
          lVar36 = 4;
        }
        if ((int)((ulong)(*(long *)((long)pplVar15 + lVar18) - *(long *)((long)pplVar15 + lVar21))
                 >> lVar36) != 0) {
          uVar27 = 0;
          do {
            uVar9 = uVar27 + 1;
            pppplVar11 = (long ****)(uVar9 & 0xffffffff);
            FUN_7103776910(&local_b8,(long)&local_110,(long ****)"set_final_pos_p%d",pppplVar11,
                           param_4,param_5,param_6,param_7,param_8);
            plVar16 = (*ppplVar14)[1];
            if ((ulong)((long)(*ppplVar14)[2] - (long)plVar16 >> 4) <= uVar27) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            plVar16 = plVar16 + uVar27 * 2;
            plVar5 = (long *)*plVar16;
            plVar16 = (long *)plVar16[1];
            if (plVar16 != (long *)0x0) {
              plVar3 = plVar16 + 1;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar7) {
                  *plVar3 = *plVar3 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            lVar18 = *local_b0;
            if (lVar18 != 0) {
              uVar33 = *(undefined8 *)(*plVar5 + 0xa0);
              fVar41 = (float)uVar33;
              fVar32 = 8.0;
              if (0.0 <= fVar41) {
                fVar32 = -8.0;
              }
              *(float *)(lVar18 + 0x30) = fVar41 + fVar32;
              *(float *)(lVar18 + 0x34) = -(float)((ulong)uVar33 >> 0x20);
              *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
            }
            if (plVar16 != (long *)0x0) {
              plVar5 = plVar16 + 1;
              do {
                lVar18 = *plVar5;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar7) {
                  *plVar5 = lVar18 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
                std::__shared_weak_count::__release_weak();
              }
            }
            plVar16 = local_b0;
            local_b8 = &PTR_FUN_710523d9a8;
            local_b0 = (long *)0x0;
            if (plVar16 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar16);
            }
            pplVar15 = *ppplVar14;
            bVar7 = *(int *)((long)pplVar15 + 4) != 0;
            lVar18 = 0x30;
            if (bVar7) {
              lVar18 = 8;
            }
            lVar21 = 0x38;
            if (bVar7) {
              lVar21 = 0x10;
            }
            lVar36 = 2;
            if (bVar7) {
              lVar36 = 4;
            }
            uVar27 = uVar9;
          } while (uVar9 < ((ulong)(*(long *)((long)pplVar15 + lVar21) -
                                   *(long *)((long)pplVar15 + lVar18)) >> lVar36 & 0xffffffff));
        }
        lVar18 = *(long *)(DAT_7105329060 + 8);
        puVar22 = (uint *)(lVar18 + 0xae10);
        piVar23 = (int *)(lVar18 + 0xae14);
        uVar26 = *puVar22;
        uVar24 = *piVar23 + uVar26;
        if (uVar24 != 0) {
          uVar27 = 0;
          plVar16 = (long *)(lVar19 + 0x1b0);
          lVar21 = 0x210;
          plVar5 = (long *)(param_1 + (long)pppplVar29 * 0x18 + 0x1b8);
          do {
            plVar3 = (long *)(lVar18 + lVar21);
            if (uVar26 <= uVar27) {
              plVar3 = (long *)(lVar18 + (ulong)((int)uVar27 - uVar26) * 0x30 + 0xa210);
            }
            iVar8 = (**(code **)(*plVar3 + 0x10))(plVar3);
            if (iVar8 == 0) {
              lVar36 = plVar3[3];
              lVar18 = plVar3[2];
              lVar39 = plVar3[5];
              lVar38 = plVar3[4];
              fVar40 = (float)lVar38 - (float)lVar18;
              fVar41 = (float)((ulong)lVar38 >> 0x20) - (float)((ulong)lVar18 >> 0x20);
              fVar42 = (float)lVar39 - (float)lVar36;
              fVar43 = (float)((ulong)lVar39 >> 0x20) - (float)((ulong)lVar36 >> 0x20);
              fVar32 = fVar40 * fVar40 + fVar41 * fVar41;
              if (fVar32 != 0.0) {
                fVar42 = SQRT(fVar32);
                if (NAN(fVar42)) {
                  fVar42 = sqrtf(fVar32);
                }
                fVar40 = (1.0 / fVar42) * fVar40;
                fVar41 = (1.0 / fVar42) * fVar41;
                fVar42 = 0.0;
                fVar43 = 0.0;
                lVar36 = plVar3[3];
                lVar18 = plVar3[2];
                lVar39 = plVar3[5];
                lVar38 = plVar3[4];
              }
              uVar35 = CONCAT44((float)((ulong)lVar18 >> 0x20) - (fVar41 + fVar41),
                                (float)lVar18 - (fVar40 + fVar40));
              uVar37 = CONCAT44((float)((ulong)lVar36 >> 0x20) - (fVar43 + fVar43),
                                (float)lVar36 - (fVar42 + fVar42));
              puVar25 = (undefined8 *)*plVar16;
              uVar33 = CONCAT44(fVar41 + fVar41 + (float)((ulong)lVar38 >> 0x20),
                                fVar40 + fVar40 + (float)lVar38);
              uVar34 = CONCAT44(fVar43 + fVar43 + (float)((ulong)lVar39 >> 0x20),
                                fVar42 + fVar42 + (float)lVar39);
              puVar13 = (undefined8 *)*plVar5;
              if (puVar25 == puVar13) {
                pvVar31 = *(void **)(lVar19 + 0x1a8);
                __n = (long ****)((long)puVar25 - (long)pvVar31);
                uVar9 = ((long)__n >> 5) + 1;
                if (uVar9 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar18 = (long)puVar13 - (long)pvVar31;
                if ((ulong)(lVar18 >> 5) < 0x3ffffffffffffff) {
                  uVar17 = lVar18 >> 4;
                  if (uVar9 <= uVar17) {
                    uVar9 = uVar17;
                  }
                  if (uVar9 != 0) {
                    if (uVar9 >> 0x3b == 0) goto LAB_7101c3e914;
                    goto LAB_7101c3eb3c;
                  }
                  pvVar10 = (void *)0x0;
                }
                else {
                  uVar9 = 0x7ffffffffffffff;
LAB_7101c3e914:
                  ppplVar14 = (long ***)(uVar9 * 0x20);
                  if (ppplVar14 == (long ***)0x0) {
                    ppplVar14 = (long ***)0x1;
                  }
                  pvVar10 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar11,param_4,param_5,param_6
                                                   ,param_7,param_8);
                  if (pvVar10 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_84 = 0;
                      pppplVar11 = (long ****)&local_b8;
                      local_b8 = (undefined **)ppplVar14;
                      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
                      if (((uVar17 & 1) != 0) &&
                         (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar11,param_4,param_5
                                                           ,param_6,param_7,param_8),
                         pvVar10 != (void *)0x0)) goto LAB_7101c3e97c;
                    }
                    pvVar10 = (void *)0x0;
                  }
                }
LAB_7101c3e97c:
                puVar13 = (undefined8 *)((long)pvVar10 + ((long)__n >> 5) * 0x20);
                puVar13[1] = uVar37;
                *puVar13 = uVar35;
                puVar13[3] = uVar34;
                puVar13[2] = uVar33;
                if (0 < (long)__n) {
                  memcpy(pvVar10,pvVar31,(size_t)__n);
                  pppplVar11 = __n;
                }
                *(void **)(lVar19 + 0x1a8) = pvVar10;
                *plVar16 = (long)(puVar13 + 4);
                *plVar5 = (long)((long)pvVar10 + uVar9 * 0x20);
                if (pvVar31 != (void *)0x0) {
                  FUN_710392eb40((ulong)pvVar31);
                }
              }
              else {
                puVar25[1] = uVar37;
                *puVar25 = uVar35;
                puVar25[3] = uVar34;
                puVar25[2] = uVar33;
                *plVar16 = *plVar16 + 0x20;
              }
            }
            lVar18 = *(long *)(DAT_7105329060 + 8);
            uVar27 = uVar27 + 1;
            puVar22 = (uint *)(lVar18 + 0xae10);
            if (uVar24 <= uVar27) goto LAB_7101c3e9fc;
            uVar26 = *puVar22;
            lVar21 = lVar21 + 0x50;
          } while( true );
        }
        goto LAB_7101c3ea0c;
      }
      goto LAB_7101c3ea20;
    }
    goto LAB_7101c3ea5c;
  }
LAB_7101c3eab4:
  FUN_7103778430(param_1 + 0x30,"type_number_%d",pppplVar11,param_4,param_5,param_6,param_7,param_8)
  ;
  return;
LAB_7101c3e9fc:
  piVar23 = (int *)(lVar18 + 0xae14);
LAB_7101c3ea0c:
  *puVar22 = 0;
  *piVar23 = 0;
LAB_7101c3ea20:
  if (plVar4 != (long *)0x0) {
    plVar16 = plVar4 + 1;
    do {
      lVar18 = *plVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_7101c3ea5c:
  uVar27 = local_108;
  local_110 = &PTR_FUN_710523d988;
  local_108 = 0;
  if (uVar27 != 0) {
    uVar9 = *(ulong *)(uVar27 + 0x18);
    *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar27 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar27);
  }
  pppplVar29 = (long ****)((long)pppplVar29 + 1);
  if (pppplVar2 <= pppplVar29) goto code_r0x007101c3ea9c;
  lVar18 = *(long *)(param_1 + 0x180);
  goto LAB_7101c3e408;
code_r0x007101c3ea9c:
  pppplVar11 = (long ****)(*(long *)(param_1 + 0x188) - *plVar28 >> 3);
  goto LAB_7101c3eab4;
}

