// addr:      7101cc6370
// offset:    0x1cc6370
// name:      online_scene_state_handler
// mangled:   
// signature: undefined __cdecl online_scene_state_handler(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, ulong param_8)


void online_scene_state_handler
               (long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
               long ****param_5,ulong param_6,ulong param_7,ulong param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *__dest;
  undefined8 *puVar5;
  ulong uVar6;
  long *********ppppppppplVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  byte ****ppppbVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined **local_98;
  undefined8 *local_90;
  undefined **local_88;
  undefined8 *local_80;
  long ********local_78;
  undefined8 *local_70;
  long ********local_68;
  undefined4 local_54;
  
  if (*(int *)(param_1 + 0x19c) != 0) {
    lVar12 = *(long *)(param_1 + 0x1b0);
    lVar4 = *(long *)(lVar12 + 0x80);
    if ((*(uint *)(lVar4 + 0xe8) | 4) != 5) {
      if (*(char *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x80) + 0x244) != '\0') {
        return;
      }
      if (*(uint *)(lVar4 + 0xe8) != 1) {
        *(undefined1 *)(lVar4 + 0x131) = 1;
        *(undefined1 *)(lVar4 + 0x133) = 1;
      }
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18c) = 0;
      *(undefined8 *)(param_1 + 0x184) = 0;
      *(undefined8 *)(param_1 + 0x17c) = 0;
      *(undefined8 *)(param_1 + 0x174) = 0;
      *(undefined8 *)(param_1 + 0x16c) = 0;
      *(undefined8 *)(param_1 + 0x164) = 0;
      *(undefined8 *)(param_1 + 0x15c) = 0;
      *(undefined8 *)(param_1 + 0x14c) = 0;
      *(undefined8 *)(param_1 + 0x154) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x194) = 0;
      *(undefined1 *)(param_1 + 0x1a4) = 0;
      *(undefined4 *)(param_1 + 0x148) = 0x11;
      return;
    }
    if (*(char *)(lVar4 + 0x130) == '\0') {
      FUN_7101cd0bc0(lVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      *(undefined1 *)(lVar12 + 0x70) = 1;
      if (*(uint *)(param_1 + 0x194) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x194) * 4 + 0x148) = 3;
        return;
      }
    }
    else if (*(uint *)(param_1 + 0x194) < 0x13) {
      lVar4 = param_1 + (long)(int)*(uint *)(param_1 + 0x194) * 4;
      *(int *)(lVar4 + 0x148) = *(int *)(lVar4 + 0x148) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  switch(*(undefined2 *)(param_1 + 0x5d0)) {
  case 0:
    lVar4 = *(long *)(param_1 + 0x1b0);
    uVar3 = *(uint *)(param_1 + 0x5d4);
    FUN_7101cd16d0(*(long *)(lVar4 + 0x80),param_1 + 0x1c8,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    lVar14 = *(long *)(lVar4 + 0x80);
    *(undefined2 *)(lVar14 + 0x120) = 0;
    lVar12 = **(long **)(lVar14 + 0x100);
    lVar4 = lVar12 + 8;
    FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x10),0x710425f56d);
    FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x10),0x710437c6e1);
    puVar5 = *(undefined8 **)(*DAT_7105314510 + 0x88);
    __dest = (undefined8 *)
             FUN_710392e290(0x10,0x64340,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (__dest == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
        local_78 = (long ********)0x64340;
        param_3 = &local_78;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar6 & 1) != 0) &&
           (__dest = (undefined8 *)
                     FUN_710392e290(0x10,0x64340,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), __dest != (undefined8 *)0x0)) goto LAB_7101cc64c0;
      }
      __dest = (undefined8 *)0x0;
    }
LAB_7101cc64c0:
    __dest[0x26] = 0x13ffff0000000000;
    __dest[0x27] = 0x5affff0000000000;
    __dest[0x22] = 0;
    *(undefined2 *)(__dest + 0x23) = 0;
    *(undefined2 *)((long)__dest + 0x144) = 0;
    *(undefined4 *)(__dest + 0x28) = 0;
    __dest[0x34] = &DAT_c1ffff0000000000;
    FUN_71017bd0b0(__dest);
    if (((uVar3 != 0) && (*(char *)*DAT_7105314510 == '\0')) &&
       (plVar13 = (long *)*puVar5, plVar13[0xb] != 0)) {
      plVar9 = plVar13 + 10;
      plVar10 = (long *)*plVar9;
      if (plVar10 != (long *)0x0) {
        plVar8 = plVar9;
        do {
          bVar2 = *(uint *)((long)plVar10 + 0x1c) < uVar3;
          if (!bVar2) {
            plVar8 = plVar10;
          }
          plVar10 = (long *)plVar10[bVar2];
        } while (plVar10 != (long *)0x0);
        if (((plVar8 != plVar9) && (*(uint *)((long)plVar8 + 0x1c) <= uVar3)) &&
           (uVar6 = (ulong)(int)plVar8[4], (int)plVar8[4] != -1)) {
          lVar12 = *plVar13;
          if ((ulong)((plVar13[1] - lVar12) / 0x64340) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          if (*(char *)(lVar12 + uVar6 * 0x64340 + 0x1a9) == '\0') {
            memcpy(__dest,(void *)(lVar12 + uVar6 * 0x64340),0x64340);
            if (*(uint *)((long)__dest + 0x1ac) == 0) {
              puVar5 = *(undefined8 **)(lVar14 + 0x118);
              plVar13 = (long *)puVar5[1];
              *puVar5 = 0;
              puVar5[1] = 0;
              if (plVar13 != (long *)0x0) {
                plVar9 = plVar13 + 1;
                do {
                  lVar12 = *plVar9;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar2) {
                    *plVar9 = lVar12 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar12 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                  std::__shared_weak_count::__release_weak();
                }
              }
            }
            else {
              param_4 = (byte ****)0x1;
              FUN_710377c0d0(*(undefined8 **)(lVar14 + 0x118),(byte ***)(__dest + 0x36),
                             (long ******)(ulong)*(uint *)((long)__dest + 0x1ac),(byte ****)0x1,
                             param_5,param_6,param_7,param_8);
            }
            uVar3 = (uint)*(byte *)(__dest + 0x28);
            if (0xb < uVar3) {
              uVar3 = 0xc;
            }
            param_3 = (long *********)(ulong)uVar3;
            FUN_7103778430(lVar4,"mf_clr_%02d",param_3,param_4,param_5,param_6,param_7,param_8);
          }
        }
      }
    }
    FUN_7103776910(&local_78,lVar4,(long ****)"set_rep_mfshot",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    puVar5 = local_70;
    if (local_70[1] == 0) {
LAB_7101cc6ad4:
      local_78 = (long ********)&PTR_FUN_710523d9a8;
      local_70 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) goto LAB_7101cc6ae4;
    }
    else {
      lVar12 = **(long **)(lVar14 + 0x118);
      if (lVar12 == 0) {
LAB_7101cc6ac8:
        FUN_71037790a0((long)puVar5,1,param_3,param_4,param_5,param_6,param_7,param_8);
        goto LAB_7101cc6ad4;
      }
      plVar13 = (long *)(*(long **)(lVar14 + 0x118))[1];
      if (plVar13 == (long *)0x0) {
        plVar9 = (long *)(*(long *)(lVar12 + 8) + 0x188);
      }
      else {
        plVar10 = plVar13 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = *plVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plVar9 = (long *)(*(long *)(lVar12 + 8) + 0x188);
        do {
          lVar12 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar6 = (**(code **)(*plVar9 + 0x30))(plVar9);
      puVar5 = local_70;
      if ((uVar6 & 1) == 0) goto LAB_7101cc6ac8;
      param_3 = (long *********)0x0;
      FUN_710379e9c0((long *)local_70[1],plVar9,0);
LAB_7101cc6ae4:
      local_70 = (undefined8 *)0x0;
      local_78 = (long ********)&PTR_FUN_710523d9a8;
      FUN_710392eb40((ulong)puVar5);
    }
    FUN_7103776910(&local_78,lVar4,(long ****)"set_rep_mfshot_sd",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    puVar5 = local_70;
    if (*(long *)((long)local_70 + 8) == 0) {
LAB_7101cc6bbc:
      local_78 = (long ********)&PTR_FUN_710523d9a8;
      local_70 = (undefined8 *)0x0;
      if (puVar5 == (undefined8 *)0x0) break;
    }
    else {
      lVar4 = **(long **)(lVar14 + 0x118);
      if (lVar4 == 0) {
LAB_7101cc6bb0:
        puVar5 = local_70;
        FUN_71037790a0((long)local_70,1,param_3,param_4,param_5,param_6,param_7,param_8);
        goto LAB_7101cc6bbc;
      }
      plVar13 = (long *)(*(long **)(lVar14 + 0x118))[1];
      if (plVar13 == (long *)0x0) {
        plVar9 = (long *)(*(long *)(lVar4 + 8) + 0x188);
      }
      else {
        plVar10 = plVar13 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = *plVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plVar9 = (long *)(*(long *)(lVar4 + 8) + 0x188);
        do {
          lVar4 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar6 = (**(code **)(*plVar9 + 0x30))(plVar9);
      puVar5 = local_70;
      if ((uVar6 & 1) == 0) goto LAB_7101cc6bb0;
      FUN_710379e9c0(*(long **)((long)local_70 + 8),plVar9,0);
    }
    local_70 = (undefined8 *)0x0;
    local_78 = (long ********)&PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)puVar5);
    break;
  case 1:
    lVar4 = *(long *)(param_1 + 0x1b0);
    uVar3 = *(uint *)(param_1 + 0x5dc);
    FUN_7101cd16d0(*(long *)(lVar4 + 0x80),param_1 + 0x1c8,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    lVar4 = *(long *)(lVar4 + 0x80);
    *(undefined2 *)(lVar4 + 0x120) = 1;
    lVar4 = **(long **)(lVar4 + 0x100);
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x710434a491);
    FUN_7103776910(&local_78,lVar4 + 8,(long ****)"set_rep_edit",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    __dest = local_70;
    if (*(long *)(*DAT_710532f860 + 0x10) != 0) {
      plVar9 = (long *)(*DAT_710532f860 + 8);
      plVar10 = (long *)*plVar9;
      plVar13 = plVar9;
      if (plVar10 != (long *)0x0) {
        do {
          if (*(uint *)(plVar10 + 4) >= uVar3) {
            plVar13 = plVar10;
          }
          plVar10 = (long *)plVar10[*(uint *)(plVar10 + 4) < uVar3];
        } while (plVar10 != (long *)0x0);
        if ((plVar13 != plVar9) && (*(uint *)(plVar13 + 4) <= uVar3)) {
          FUN_7103779480((long)&local_78,(long)(plVar13 + 5),param_3,param_4,param_5,param_6,param_7
                         ,param_8);
          __dest = local_70;
        }
      }
    }
joined_r0x007101cc6a7c:
    local_70 = (undefined8 *)0x0;
    local_78 = (long ********)&PTR_FUN_710523d9a8;
    if (__dest == (undefined8 *)0x0) goto LAB_7101cc6be0;
    goto LAB_7101cc6bdc;
  case 2:
    lVar4 = *(long *)(param_1 + 0x1b0);
    uVar3 = *(uint *)(param_1 + 0x5e4);
    ppppbVar11 = (byte ****)(ulong)*(uint *)(param_1 + 0x5e0);
    FUN_7101cd16d0(*(long *)(lVar4 + 0x80),param_1 + 0x1c8,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    lVar14 = *(long *)(lVar4 + 0x80);
    *(undefined2 *)(lVar14 + 0x120) = 2;
    lVar12 = *(long *)(**(long **)(lVar14 + 0x100) + 0x10);
    lVar4 = **(long **)(lVar14 + 0x100) + 8;
    if (uVar3 != 0x145) {
      FUN_7103778300(0x3f800000,lVar12,0x71043f0ab9);
      FUN_7103776910(&local_78,lVar4,(long ****)"set_rep_replay",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar13 = *(long **)(lVar14 + 0xf8);
      local_98 = &PTR_FUN_710523d9a8;
      puVar5 = (undefined8 *)
               FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar5 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_68 = (long ********)&SUB_00000020;
          ppppppppplVar7 = &local_68;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar6 & 1) != 0) &&
             (puVar5 = (undefined8 *)
                       FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar7,param_4,param_5,param_6,
                                      param_7,param_8), puVar5 != (undefined8 *)0x0))
          goto LAB_7101cc6a18;
        }
        puVar5 = (undefined8 *)0x0;
      }
LAB_7101cc6a18:
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      param_5 = (long ****)0x1;
      *puVar5 = *local_70;
      puVar5[1] = local_70[1];
      puVar5[2] = local_70[2];
      puVar5[3] = local_70[3];
      local_90 = puVar5;
      FUN_7101ad2060(plVar13,(long)&local_98,(long *********)(ulong)uVar3,ppppbVar11,(long ****)0x1,
                     param_6,param_7,param_8);
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = (undefined8 *)0x0;
      param_4 = ppppbVar11;
      __dest = local_70;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar5);
        param_4 = ppppbVar11;
      }
      goto joined_r0x007101cc6a7c;
    }
    FUN_7103778300(0x3f800000,lVar12,0x710434a491);
    FUN_7103776910(&local_78,lVar4,(long ****)"set_rep_edit",param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    local_88 = &PTR_FUN_710523d9a8;
    puVar5 = (undefined8 *)
             FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar5 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_68 = (long ********)&SUB_00000020;
        param_3 = &local_68;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar6 & 1) != 0) &&
           (puVar5 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar5 != (undefined8 *)0x0)) goto LAB_7101cc67dc;
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_7101cc67dc:
    __dest = local_70;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *puVar5 = *local_70;
    puVar5[1] = local_70[1];
    puVar5[2] = local_70[2];
    puVar5[3] = local_70[3];
    local_80 = puVar5;
    FUN_71037790a0((long)puVar5,0,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar3 = FUN_7101af0cc0(*(long *)(DAT_7105324ee8 + 8),ppppbVar11,(long ****)param_3,param_4,
                           param_5,param_6,param_7,param_8);
    if (*(long *)(*DAT_710532f860 + 0x10) != 0) {
      plVar9 = (long *)(*DAT_710532f860 + 8);
      plVar10 = (long *)*plVar9;
      plVar13 = plVar9;
      if (plVar10 != (long *)0x0) {
        do {
          if (*(uint *)(plVar10 + 4) >= uVar3) {
            plVar13 = plVar10;
          }
          plVar10 = (long *)plVar10[*(uint *)(plVar10 + 4) < uVar3];
        } while (plVar10 != (long *)0x0);
        if ((plVar13 != plVar9) && (*(uint *)(plVar13 + 4) <= uVar3)) {
          FUN_7103779480((long)&local_88,(long)(plVar13 + 5),param_3,param_4,param_5,param_6,param_7
                         ,param_8);
        }
      }
    }
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar5);
    }
    local_78 = (long ********)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    break;
  default:
    goto LAB_7101cc6be0;
  case 4:
    FUN_7101cd2220(*(long *)(param_1 + 0x1b0),param_1 + 0x1c8,(long *********)(param_1 + 0xbe0),
                   param_4,param_5,param_6,param_7,param_8);
    goto LAB_7101cc6be0;
  }
  if (__dest != (undefined8 *)0x0) {
LAB_7101cc6bdc:
    FUN_710392eb40((ulong)__dest);
  }
LAB_7101cc6be0:
  *(undefined1 *)(*(long *)(param_1 + 0x1b0) + 0x70) = 0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x80);
  if (*(int *)(lVar4 + 0xe8) == 1) {
    FUN_7103775dc0((long *)**(undefined8 **)(lVar4 + 0x100),1,(long ****)0x16fff,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar4 + 0x100) + 0x10),0x7104291d6e);
    *(undefined1 *)(lVar4 + 0xf4) = 0;
    *(undefined8 *)(lVar4 + 0xe0) = 0x100000000;
    *(undefined8 *)(lVar4 + 0xe8) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0xf0) = 0xffffffff;
    *(undefined2 *)(lVar4 + 0x130) = 0;
    *(undefined1 *)(lVar4 + 0x132) = 1;
    *(undefined4 *)(lVar4 + 0x98) = 4;
    *(undefined4 *)(lVar4 + 0x9c) = 2;
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0xd0) = 0;
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    *(undefined8 *)(lVar4 + 0xa0) = 0;
    *(undefined8 *)(lVar4 + 0xa8) = 0;
  }
  return;
}

