// addr:      71014f75d0
// offset:    0x14f75d0
// name:      FUN_71014f75d0
// mangled:   
// signature: undefined __cdecl FUN_71014f75d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71014f75d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long ***ppplVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long ****pppplVar10;
  undefined4 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  uint *puVar21;
  long *plVar22;
  ulong uVar23;
  undefined1 *local_a8;
  long ***local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int *local_88;
  undefined8 local_80;
  int local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  lVar15 = *lib::Singleton<app::StageManager>::instance_;
  if (2 < *(uint *)(lVar15 + 0x17c)) goto LAB_71014f7d90;
  uVar7 = (**(code **)(**(long **)(lVar15 + (ulong)*(uint *)(lVar15 + 0x17c) * 8 + 0x110) + 0x490))
                    ();
  if ((uVar7 & 1) != 0) {
    puVar11 = *(undefined4 **)(*(long *)(lVar15 + 0x198) + 200);
    puVar11[1] = *puVar11;
    *(undefined8 *)(puVar11 + 2) = 0x41a000003f800000;
    puVar11[4] = 0;
  }
  if (2 < *(uint *)(lVar15 + 0x17c)) goto LAB_71014f7d90;
  plVar8 = *(long **)(lVar15 + (ulong)*(uint *)(lVar15 + 0x17c) * 8 + 0x110);
  (**(code **)(*plVar8 + 0x5b8))(plVar8,0);
  if (*(char *)(*(long *)(lVar15 + 0x200) + 0xd0) == '\0') {
    *(undefined1 *)(*(long *)(lVar15 + 0x200) + 0xd0) = 1;
  }
  lVar13 = DAT_71052c35a8;
  lVar15 = DAT_71052c35a0;
  if (DAT_71052c35a8 == 0) goto LAB_71014f7b64;
  piVar19 = *(int **)(DAT_71052c35a0 + 8);
  local_a0 = (long ***)&DAT_2d000000500;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0xf;
  local_88 = piVar19 + 2;
  local_80 = 0x200;
  uStack_94 = 7500000;
  if (*(char *)((long)piVar19 + 0x13f) != '\0') {
    uStack_94 = 5000000;
  }
  local_98 = 0x3c;
  local_78 = piVar19[0x1a];
  if (*piVar19 != -1) {
    local_78 = *piVar19;
  }
  FUN_71036eb720(*(long *)(*DAT_710533a080 + 8),(int *)&local_a0,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  puVar21 = *(uint **)(lVar13 + 8);
  *puVar21 = DAT_710593b540 & 0xff;
  DAT_710593b540 = 1;
  nn::oe::SetFocusHandlingMode(1);
  iVar16 = DAT_710593b534;
  *(undefined1 *)((long)puVar21 + 0x25) = 1;
  puVar21[7] = 0;
  puVar21[8] = 0;
  *(undefined4 *)((long)puVar21 + 0x26) = 0;
  puVar21[1] = (uint)(iVar16 != 0);
  puVar21[2] = 0;
  iVar16 = piVar19[0x1a];
  puVar21[4] = 0;
  puVar21[5] = 0;
  puVar21[3] = iVar16 * 0x3c;
  uVar2 = *piVar19 * 0x3c;
  if (*piVar19 == -1) {
    uVar2 = 0xffffffff;
  }
  puVar21[6] = uVar2;
  lVar13 = *(long *)(lVar13 + 8);
  uVar2 = *(uint *)(lVar13 + 0xc);
  lVar20 = *(long *)(*(long *)(lVar15 + 8) + 0x210);
  lVar15 = *(long *)(lVar20 + 0x80);
  *(uint *)(lVar15 + 0x120) = uVar2;
  *(undefined4 *)(lVar15 + 0x124) = *(undefined4 *)(lVar13 + 0x10);
  uVar7 = *(ulong *)(lVar15 + 0x140);
  *(undefined4 *)(lVar15 + 0x128) = *(undefined4 *)(lVar13 + 0x14);
  uVar1 = *(undefined4 *)(lVar13 + 0x18);
  *(ulong *)(lVar15 + 0x148) = uVar7;
  *(undefined4 *)(lVar15 + 300) = uVar1;
  *(float *)(lVar15 + 0x130) = 1.0 / (float)uVar2;
  if ((ulong)((long)(*(long *)(lVar15 + 0x150) - uVar7) >> 3) < 0x20) {
    lVar13 = FUN_710392e290(0x10,0x100,param_3,param_4,param_5,param_6,param_7,param_8);
    if (lVar13 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a8 = (undefined1 *)((ulong)local_a8 & 0xffffffff00000000);
        local_a0 = (long ***)&DAT_00000100;
        pppplVar10 = &local_a0;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
        if (((uVar9 & 1) != 0) &&
           (lVar13 = FUN_710392e290(0x10,0x100,pppplVar10,param_4,param_5,param_6,param_7,param_8),
           lVar13 != 0)) goto LAB_71014f782c;
      }
      lVar13 = 0;
    }
LAB_71014f782c:
    *(long *)(lVar15 + 0x140) = lVar13;
    *(long *)(lVar15 + 0x148) = lVar13;
    *(long *)(lVar15 + 0x150) = lVar13 + 0x100;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  *(undefined8 *)(lVar15 + 0x134) = 0;
  plVar8 = *(long **)(lVar15 + 0x100);
  plVar17 = (long *)plVar8[1];
  if (plVar17 != (long *)0x0) {
    if ((char)plVar8[2] != '\0') {
      plVar22 = *(long **)(*plVar8 + 0x80);
      plVar8 = (long *)(*plVar8 + 0x88);
      if (plVar22 != plVar8) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar22[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar17 + 0x120))(plVar17,plVar22[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar22[0xd] + 0x178))();
              (**(code **)(*(long *)plVar22[0xd] + 0x140))((long *)plVar22[0xd],0);
            }
            plVar12 = (long *)plVar22[1];
            if ((long *)plVar22[1] == (long *)0x0) break;
            do {
              plVar22 = plVar12;
              plVar12 = (long *)*plVar22;
            } while ((long *)*plVar22 != (long *)0x0);
LAB_71014f7908:
            if (plVar22 == plVar8) goto LAB_71014f7920;
          }
          plVar12 = plVar22 + 2;
          plVar14 = (long *)*plVar12;
          if ((long *)*plVar14 != plVar22) {
            do {
              lVar13 = *plVar12;
              plVar12 = (long *)(lVar13 + 0x10);
              plVar22 = (long *)*plVar12;
            } while (*plVar22 != lVar13);
            goto LAB_71014f7908;
          }
          plVar22 = plVar14;
        } while (plVar14 != plVar8);
LAB_71014f7920:
        plVar17 = *(long **)(*(long *)(lVar15 + 0x100) + 8);
      }
    }
    (**(code **)(*plVar17 + 0x188))(plVar17);
  }
  if ((*(char *)(lVar15 + 0x183) == '\0') && (*(char *)(lVar15 + 0x182) == '\0')) {
    FUN_7101b8c5b0(lVar15,1,(long ****)0x1,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_71037760f0(*(long *)**(undefined8 **)(lVar15 + 0xd0),1);
  (**(code **)(**(long **)(lVar15 + 0x118) + 0x60))(*(long **)(lVar15 + 0x118),1);
  (**(code **)(**(long **)(lVar15 + 0x118) + 0x70))(*(long **)(lVar15 + 0x118),1);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar15 + 0xd0),2,(long ****)0x51000,param_4,param_5,
                 param_6,param_7,param_8);
  lVar18 = **(long **)(lVar15 + 0xd0);
  lVar13 = *(long *)(lVar18 + 0x10);
  if (*(int *)(lVar15 + 300) == -1) {
    FUN_7103778300(0x3f800000,lVar13,0x710435b456);
  }
  else {
    FUN_7103778300(0x3f800000,lVar13,0x710426fd90);
    if (*(int *)(lVar15 + 300) != -1) {
      FUN_710377a310(lVar15 + 0xd8,1);
    }
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x7104329d33);
  if (*(uint *)(lVar15 + 0xb4) < 0x13) {
    *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar15 + 0xb4) * 4 + 0x68) = 2;
    *(undefined1 *)(lVar20 + 0x70) = 0;
    FUN_71015435c0((long *)&local_a0,(long *)*DAT_71052c3910,0x1022590708);
    ppplVar6 = local_a0;
    if (local_a0 != (long ***)0x0) {
      local_a8 = &DAT_f1281017e;
      uVar7 = (*(code *)(*local_a0)[3])(local_a0,&local_a8);
      if ((uVar7 & 1) != 0) {
        (*(code *)(*ppplVar6)[0xc])(ppplVar6,0xffffffff);
      }
    }
    plVar8 = (long *)CONCAT44(uStack_94,local_98);
    if (plVar8 != (long *)0x0) {
      plVar17 = plVar8 + 1;
      do {
        lVar15 = *plVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
LAB_71014f7b64:
    lVar15 = DAT_7105324680;
    if ((((*(long *)(*DAT_71052c3930 + 0x28) != 0) &&
         (*(char *)(*(long *)(*DAT_71052c3930 + 0x28) + 10) != '\0')) &&
        (*(char *)(param_1 + 0x118) == '\0')) && (*(char *)(param_1 + 0x73) == '\0')) {
      std::recursive_mutex::lock();
      lVar15 = *(long *)(lVar15 + 0x70);
      std::recursive_mutex::unlock();
      if ((lVar15 != 0) &&
         (lVar15 = *lib::Singleton<app::FighterManager>::instance_, 0 < *(int *)(lVar15 + 0xa0))) {
        iVar16 = 0;
        plVar8 = lib::Singleton<app::FighterManager>::instance_;
        do {
          iVar5 = iVar16;
          if (*(long *)(lVar15 + 0x20) == 0) {
LAB_71014f7c14:
            if (*(long *)(lVar15 + 0x28) != 0) {
              if (iVar5 == 0) {
                lVar13 = 0x100000000;
                goto LAB_71014f7cc4;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(long *)(lVar15 + 0x30) != 0) {
              if (iVar5 == 0) {
                lVar13 = 0x200000000;
                goto LAB_71014f7cc4;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(long *)(lVar15 + 0x38) != 0) {
              if (iVar5 == 0) {
                lVar13 = 0x300000000;
                goto LAB_71014f7cc4;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(long *)(lVar15 + 0x40) != 0) {
              if (iVar5 == 0) {
                lVar13 = 0x400000000;
                goto LAB_71014f7cc4;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(long *)(lVar15 + 0x48) != 0) {
              if (iVar5 == 0) {
                lVar13 = 0x500000000;
                goto LAB_71014f7cc4;
              }
              iVar5 = iVar5 + -1;
            }
            if (*(long *)(lVar15 + 0x50) != 0) {
              if (iVar5 == 0) {
                lVar13 = 0x600000000;
                goto LAB_71014f7cc4;
              }
              iVar5 = iVar5 + -1;
            }
            lVar13 = 0x700000000;
            if (*(long *)(lVar15 + 0x58) == 0 || iVar5 != 0) {
              lVar13 = -0x100000000;
            }
            if ((iVar5 != 0) || (*(long *)(lVar15 + 0x58) == 0)) goto LAB_71014f7d90;
          }
          else {
            if (iVar16 != 0) {
              iVar5 = iVar16 + -1;
              goto LAB_71014f7c14;
            }
            lVar13 = 0;
          }
LAB_71014f7cc4:
          lVar15 = *(long *)(lVar15 + (lVar13 >> 0x1d) + 0x20);
          if (lVar15 != 0) {
            uVar7 = *(ulong *)(lVar15 + 0x4150);
            if (uVar7 == 0) {
LAB_71014f7d68:
              lVar15 = 0;
            }
            else {
              uVar9 = 0;
              uVar23 = 1;
              do {
                plVar8 = *(long **)(lVar15 + uVar9 * 8 + 0x4160);
                if ((plVar8 != (long *)0x0) &&
                   (uVar9 = (**(code **)(*plVar8 + 0x518))(plVar8), (uVar9 & 1) != 0)) {
                  (**(code **)(**(long **)(plVar8[4] + 0x98) + 0x58))
                            (*(long **)(plVar8[4] + 0x98),4);
                }
                bVar4 = uVar23 < uVar7;
                uVar9 = uVar23;
                uVar23 = (ulong)((int)uVar23 + 1);
              } while (bVar4);
              if (*(ulong *)(lVar15 + 0x4150) <= (ulong)*(byte *)(lVar15 + 0x5918))
              goto LAB_71014f7d68;
              lVar15 = lVar15 + (ulong)*(byte *)(lVar15 + 0x5918) * 8;
              plVar8 = *(long **)(lVar15 + 0x4160);
              if ((plVar8 == (long *)0x0) ||
                 (uVar7 = (**(code **)(*plVar8 + 0x518))(), (uVar7 & 1) == 0)) goto LAB_71014f7d68;
              lVar15 = *(long *)(lVar15 + 0x4160);
            }
            FUN_71003a9ab0(&local_a0,lVar15);
            plVar8 = lib::Singleton<app::FighterManager>::instance_;
          }
          lVar15 = *plVar8;
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(lVar15 + 0xa0));
      }
    }
    return;
  }
LAB_71014f7d90:
                    /* WARNING: Subroutine does not return */
  abort();
}

