// addr:      71014f7da0
// offset:    0x14f7da0
// name:      FUN_71014f7da0
// mangled:   
// signature: undefined __cdecl FUN_71014f7da0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71014f7da0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined **ppuVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  long *plVar21;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined **local_70;
  long *local_68;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  pbVar1 = (byte *)(param_1 + 0x60);
  DAT_71052c5180._4_4_ = 0;
  DAT_71052c5190 = 0x3f800000;
  DAT_71052c518a = 0;
  DAT_71052c5188 = 0x101;
  FUN_71014e49e0(pbVar1,param_1 + 8);
  bVar11 = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*pbVar1 == 0x1e) {
      bVar11 = 0;
    }
    else {
      bVar11 = *(byte *)(param_1 + 0x10) ^ 1;
    }
  }
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(byte *)(param_1 + 0x14) = bVar11;
  plVar16 = lib::Singleton<app::FighterManager>::instance_;
  *(undefined1 *)(*lib::Singleton<app::FighterManager>::instance_ + 0xd0) = 0;
  FUN_7100679ae0(*plVar16);
  lVar10 = *plVar16;
  iVar6 = *(int *)(lVar10 + 0xa0);
  if (iVar6 != 0) {
    iVar20 = 0;
    do {
      iVar4 = iVar20;
      if (*(long *)(lVar10 + 0x20) == 0) {
LAB_71014f7e98:
        if (*(long *)(lVar10 + 0x28) != 0) {
          if (iVar4 == 0) {
            uVar12 = 1;
            goto LAB_71014f7f5c;
          }
          iVar4 = iVar4 + -1;
        }
        if (*(long *)(lVar10 + 0x30) != 0) {
          if (iVar4 == 0) {
            uVar12 = 2;
            goto LAB_71014f7f5c;
          }
          iVar4 = iVar4 + -1;
        }
        if (*(long *)(lVar10 + 0x38) != 0) {
          if (iVar4 == 0) {
            uVar12 = 3;
            goto LAB_71014f7f5c;
          }
          iVar4 = iVar4 + -1;
        }
        if (*(long *)(lVar10 + 0x40) != 0) {
          if (iVar4 == 0) {
            uVar12 = 4;
            goto LAB_71014f7f5c;
          }
          iVar4 = iVar4 + -1;
        }
        if (*(long *)(lVar10 + 0x48) != 0) {
          if (iVar4 == 0) {
            uVar12 = 5;
            goto LAB_71014f7f5c;
          }
          iVar4 = iVar4 + -1;
        }
        if (*(long *)(lVar10 + 0x50) != 0) {
          if (iVar4 == 0) {
            uVar12 = 6;
            goto LAB_71014f7f5c;
          }
          iVar4 = iVar4 + -1;
        }
        uVar12 = 7;
        if (iVar4 == 0 && *(long *)(lVar10 + 0x58) != 0) goto LAB_71014f7f5c;
      }
      else {
        if (iVar20 != 0) {
          iVar4 = iVar20 + -1;
          goto LAB_71014f7e98;
        }
        uVar12 = 0;
LAB_71014f7f5c:
        lVar10 = *(long *)(lVar10 + ((long)((ulong)uVar12 << 0x20) >> 0x1d) + 0x20);
        if (lVar10 != 0) {
          if (7 < uVar12) goto LAB_71014f8934;
          uVar8 = *(ulong *)(lVar10 + 0x4150);
          if (uVar8 == 0) {
LAB_71014f8024:
            lVar10 = 0;
          }
          else {
            uVar9 = 0;
            uVar13 = 1;
            do {
              lVar15 = lVar10 + uVar9 * 8;
              plVar7 = *(long **)(lVar15 + 0x4160);
              if ((plVar7 != (long *)0x0) &&
                 (uVar9 = (**(code **)(*plVar7 + 0x518))(), (uVar9 & 1) != 0)) {
                lVar15 = *(long *)(lVar15 + 0x4160);
                (**(code **)(**(long **)(lVar15 + 0x438) + 0x280))(*(long **)(lVar15 + 0x438),0);
                plVar7 = *(long **)(lVar15 + 0xf700);
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0xc0))(plVar7,lVar15,1);
                }
              }
              bVar5 = uVar13 < uVar8;
              uVar9 = uVar13;
              uVar13 = (ulong)((int)uVar13 + 1);
            } while (bVar5);
            if (*(ulong *)(lVar10 + 0x4150) <= (ulong)*(byte *)(lVar10 + 0x5918))
            goto LAB_71014f8024;
            lVar10 = lVar10 + (ulong)*(byte *)(lVar10 + 0x5918) * 8;
            plVar7 = *(long **)(lVar10 + 0x4160);
            if ((plVar7 == (long *)0x0) ||
               (uVar8 = (**(code **)(*plVar7 + 0x518))(), (uVar8 & 1) == 0)) goto LAB_71014f8024;
            lVar10 = *(long *)(lVar10 + 0x4160);
          }
          FUN_71003a9ab0(&local_70,lVar10);
          if (3 < *(byte *)((long)local_68 + 0x3a)) {
            (**(code **)(**(long **)(local_68[4] + 0x48) + 0x358))(*(long **)(local_68[4] + 0x48),0)
            ;
          }
        }
      }
      iVar20 = iVar20 + 1;
      if (iVar20 == iVar6) break;
      lVar10 = *plVar16;
    } while( true );
  }
  plVar16 = lib::Singleton<app::FighterManager>::instance_;
  lVar10 = *lib::Singleton<app::FighterManager>::instance_;
  iVar6 = *(int *)(lVar10 + 0xa0);
  if (iVar6 != 0) {
    iVar20 = 0;
    do {
      iVar4 = iVar20;
      if (*(long *)(lVar10 + 0x20) == 0) {
LAB_71014f80b0:
        if (*(long *)(lVar10 + 0x28) != 0) {
          if (iVar4 == 0) {
            lVar15 = 0x100000000;
            goto LAB_71014f8160;
          }
          iVar4 = iVar4 + -1;
        }
        if (*(long *)(lVar10 + 0x30) != 0) {
          if (iVar4 == 0) {
            lVar15 = 0x200000000;
            goto LAB_71014f8160;
          }
          iVar4 = iVar4 + -1;
        }
        if (*(long *)(lVar10 + 0x38) != 0) {
          if (iVar4 == 0) {
            lVar15 = 0x300000000;
            goto LAB_71014f8160;
          }
          iVar4 = iVar4 + -1;
        }
        if (*(long *)(lVar10 + 0x40) != 0) {
          if (iVar4 == 0) {
            lVar15 = 0x400000000;
            goto LAB_71014f8160;
          }
          iVar4 = iVar4 + -1;
        }
        if (*(long *)(lVar10 + 0x48) != 0) {
          if (iVar4 == 0) {
            lVar15 = 0x500000000;
            goto LAB_71014f8160;
          }
          iVar4 = iVar4 + -1;
        }
        if (*(long *)(lVar10 + 0x50) != 0) {
          if (iVar4 == 0) {
            lVar15 = 0x600000000;
            goto LAB_71014f8160;
          }
          iVar4 = iVar4 + -1;
        }
        lVar15 = 0x700000000;
        if (*(long *)(lVar10 + 0x58) == 0 || iVar4 != 0) {
          lVar15 = -0x100000000;
        }
        if ((iVar4 != 0) || (*(long *)(lVar10 + 0x58) == 0)) goto LAB_71014f8934;
      }
      else {
        if (iVar20 != 0) {
          iVar4 = iVar20 + -1;
          goto LAB_71014f80b0;
        }
        lVar15 = 0;
      }
LAB_71014f8160:
      lVar10 = *(long *)(lVar10 + (lVar15 >> 0x1d) + 0x20);
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0)) {
        *(undefined2 *)(lVar10 + 8) = 1;
      }
      if (iVar6 + -1 == iVar20) break;
      lVar10 = *plVar16;
      iVar20 = iVar20 + 1;
    } while( true );
  }
  if (lib::Singleton<app::BossManager>::instance_ != 0) {
    *(undefined1 *)(*(long *)(lib::Singleton<app::BossManager>::instance_ + 8) + 0x14e) = 0;
  }
  puVar14 = DAT_71052c3910;
  FUN_71015435c0((long *)&local_70,(long *)*DAT_71052c3910,0x10af089a93);
  ppuVar17 = local_70;
  if (local_70 == (undefined **)0x0) {
    ppuVar17 = (undefined **)0x0;
  }
  else {
    local_88 = (long *)&DAT_10af089a93;
    uVar8 = (**(code **)(*local_70 + 0x18))(local_70,&local_88);
    if ((uVar8 & 1) == 0) {
      ppuVar17 = (undefined **)0x0;
    }
  }
  FUN_71015435c0((long *)&local_88,(long *)*puVar14,0x1022590708);
  plVar16 = local_88;
  if (local_88 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    local_98 = (long *)&DAT_f1281017e;
    uVar8 = (**(code **)(*local_88 + 0x18))(local_88,&local_98);
    if ((uVar8 & 1) == 0) {
      plVar16 = (long *)0x0;
    }
  }
  FUN_71015435c0((long *)&local_98,(long *)*puVar14,0x149f3d0e7d);
  plVar7 = local_98;
  if (local_98 != (long *)0x0) {
    local_a8 = (long *)&DAT_149f3d0e7d;
    uVar8 = (**(code **)(*local_98 + 0x18))(local_98,&local_a8);
    if ((uVar8 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
  }
  FUN_71015435c0((long *)&local_a8,(long *)*puVar14,0x1661e6448d);
  plVar18 = local_a8;
  if (local_a8 != (long *)0x0) {
    local_b8 = (long *)&DAT_1661e6448d;
    uVar8 = (**(code **)(*local_a8 + 0x18))(local_a8,&local_b8);
    if ((uVar8 & 1) == 0) {
      plVar18 = (long *)0x0;
    }
  }
  FUN_71015435c0((long *)&local_b8,(long *)*puVar14,0x1308abad79);
  plVar19 = local_b8;
  if (local_b8 != (long *)0x0) {
    local_c8 = (long *)&DAT_1308abad79;
    uVar8 = (**(code **)(*local_b8 + 0x18))(local_b8,&local_c8);
    if ((uVar8 & 1) == 0) {
      plVar19 = (long *)0x0;
    }
  }
  uVar8 = 0x1a4f818270;
  FUN_71015435c0((long *)&local_c8,(long *)*puVar14,0x1a4f818270);
  plVar21 = local_c8;
  if (local_c8 != (long *)0x0) {
    local_78 = 0x1a4f818270;
    uVar9 = (**(code **)(*local_c8 + 0x18))(local_c8,&local_78);
    if ((uVar9 & 1) == 0) {
      plVar21 = (long *)0x0;
    }
  }
  if (ppuVar17 != (undefined **)0x0) {
    (**(code **)(*ppuVar17 + 0x28))(ppuVar17);
    *(undefined1 *)((long)ppuVar17 + 0x19) = *(undefined1 *)(param_1 + 0xf);
  }
  if ((plVar7 != (long *)0x0) &&
     ((**(code **)(*plVar7 + 0x28))(plVar7), *(char *)(param_1 + 0x6a) != '\0')) {
    uVar8 = (ulong)*(byte *)(param_1 + 0x6c);
    (**(code **)(*plVar7 + 0x58))(plVar7,*(undefined1 *)(param_1 + 0x6b));
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x28))(plVar18);
  }
  if (plVar16 != (long *)0x0) {
    *(undefined2 *)(plVar16 + 0x1c) = 0x101;
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x28))(plVar19);
    (**(code **)(*plVar19 + 0x138))(plVar19,0);
  }
  if (plVar21 != (long *)0x0) {
    *(undefined2 *)(plVar21 + 1) = 1;
  }
  if (DAT_71052c3950 != (long *)0x0) {
    FUN_71015901b0(*DAT_71052c3950);
  }
  if ((DAT_71052c3948 != (long *)0x0) && (*(char *)(*DAT_71052c3948 + 0x38) != '\0')) {
    *(undefined1 *)(*DAT_71052c3948 + 0x39) = 1;
  }
  if ((DAT_71052c3940 != (undefined8 *)0x0) && ((*(ushort *)*DAT_71052c3940 & 0x3ff) != 0)) {
    *(undefined1 *)((ushort *)*DAT_71052c3940 + 4) = 1;
  }
  if (DAT_71052c3790 != (long *)0x0) {
    lVar10 = *DAT_71052c3790;
    puVar14 = *(undefined8 **)(lVar10 + 8);
    puVar2 = *(undefined8 **)(lVar10 + 0x10);
    *(undefined1 *)(lVar10 + 1) = 1;
    for (; puVar14 != puVar2; puVar14 = puVar14 + 1) {
      (**(code **)(*(long *)*puVar14 + 0x20))();
    }
  }
  if (DAT_71052c3618 != (long *)0x0) {
    lVar15 = *DAT_71052c3618;
    lVar10 = *(long *)(lVar15 + 0x28);
    plVar16 = *(long **)(lVar15 + 0x30);
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar10 != 0) {
      *(undefined4 *)(*(long *)(lVar10 + 8) + 8) = 0x3f800000;
    }
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        lVar10 = *plVar7;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar2 = *(undefined8 **)(lVar15 + 0x50);
    for (puVar14 = *(undefined8 **)(lVar15 + 0x48); puVar14 != puVar2; puVar14 = puVar14 + 2) {
      (**(code **)(*(long *)*puVar14 + 0x28))();
    }
  }
  if (DAT_71052c33e8 != (long *)0x0) {
    lVar15 = *DAT_71052c33e8;
    lVar10 = *(long *)(lVar15 + 8);
    plVar16 = *(long **)(lVar15 + 0x10);
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 8), *(char *)(lVar10 + 8) != '\0')) {
      *(undefined1 *)(lVar10 + 9) = 1;
      puVar2 = *(undefined8 **)(lVar15 + 0x30);
      for (puVar14 = *(undefined8 **)(lVar15 + 0x28); puVar14 != puVar2; puVar14 = puVar14 + 2) {
        (**(code **)(*(long *)*puVar14 + 0x38))();
      }
    }
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        lVar10 = *plVar7;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (DAT_71052c33f0 != (long *)0x0) {
    lVar15 = *DAT_71052c33f0;
    lVar10 = *(long *)(lVar15 + 8);
    plVar16 = *(long **)(lVar15 + 0x10);
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar10 != 0) {
      *(undefined4 *)(*(long *)(lVar10 + 8) + 8) = 0x3f800000;
    }
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        lVar10 = *plVar7;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar2 = *(undefined8 **)(lVar15 + 0x30);
    for (puVar14 = *(undefined8 **)(lVar15 + 0x28); puVar14 != puVar2; puVar14 = puVar14 + 2) {
      (**(code **)(*(long *)*puVar14 + 0x30))();
    }
  }
  if (local_c0 != (long *)0x0) {
    plVar16 = local_c0 + 1;
    do {
      lVar10 = *plVar16;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_c0 + 0x10))(local_c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0 != (long *)0x0) {
    plVar16 = local_b0 + 1;
    do {
      lVar10 = *plVar16;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_a0 != (long *)0x0) {
    plVar16 = local_a0 + 1;
    do {
      lVar10 = *plVar16;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_90 != (long *)0x0) {
    plVar16 = local_90 + 1;
    do {
      lVar10 = *plVar16;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_80 == (long *)0x0) {
LAB_71014f874c:
    if (local_68 == (long *)0x0) goto LAB_71014f876c;
LAB_71014f8754:
    plVar16 = local_68 + 1;
    do {
      lVar10 = *plVar16;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 != 0) goto LAB_71014f876c;
    (**(code **)(*local_68 + 0x10))(local_68);
    std::__shared_weak_count::__release_weak();
    if (*(char *)(param_1 + 0x66) == '\0') goto LAB_71014f87c0;
LAB_71014f8774:
    bVar5 = false;
  }
  else {
    plVar16 = local_80 + 1;
    do {
      lVar10 = *plVar16;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 != 0) goto LAB_71014f874c;
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__shared_weak_count::__release_weak();
    if (local_68 != (long *)0x0) goto LAB_71014f8754;
LAB_71014f876c:
    if (*(char *)(param_1 + 0x66) != '\0') goto LAB_71014f8774;
LAB_71014f87c0:
    uVar12 = *pbVar1 - 9;
    if ((uVar12 < 0x1c) && ((0x1ffffeeU >> (ulong)(uVar12 & 0x1f) & 1) == 0)) goto LAB_71014f8774;
    bVar5 = (*pbVar1 & 0xfe) != 0x1c;
  }
  *(bool *)(DAT_71052c50f0 + 0x5c2) = bVar5;
  if (((*(char *)(param_1 + 0x66) == '\0') && (*(char *)(param_1 + 0x75) != '\0')) &&
     (DAT_710532f7f0 != 0)) {
    lVar15 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
    FUN_7103776910(&local_70,**(long **)(lVar15 + 0x130) + 8,(long ****)"set_txt_key",uVar8,param_4,
                   param_5,param_6,param_7,param_8);
    plVar16 = local_68;
    lVar10 = *local_68;
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar16);
    }
    *(undefined1 *)(lVar15 + 0x200) = 1;
  }
  if (*(char *)(*DAT_71052b8f00 + 0xc94) != '\0') {
    lVar10 = *(long *)(*DAT_71052b8f00 + 0xa50);
    if (*(uint *)(lVar10 + 0xac) < 0x13) {
      *(undefined4 *)(lVar10 + (long)(int)*(uint *)(lVar10 + 0xac) * 4 + 0x60) = 1;
      if (*(uint *)(lVar10 + 0x194) < 0x13) {
        *(undefined4 *)(lVar10 + (long)(int)*(uint *)(lVar10 + 0x194) * 4 + 0x148) = 1;
        goto LAB_71014f8848;
      }
    }
LAB_71014f8934:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_71014f8848:
  (**(code **)(**(long **)(param_1 + 0x1e008) + 0x20))();
  return;
}

