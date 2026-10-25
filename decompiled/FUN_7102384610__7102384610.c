// addr:      7102384610
// offset:    0x2384610
// name:      FUN_7102384610
// mangled:   
// signature: undefined __cdecl FUN_7102384610(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7102384610(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  Any64BitId AVar4;
  char cVar5;
  bool bVar6;
  byte ***pppbVar7;
  undefined4 uVar8;
  byte **ppbVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  Any64BitId *pAVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  byte ***local_100;
  byte local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d6;
  undefined8 local_ce;
  undefined8 local_a8;
  Any64BitId local_a0 [64];
  
  lVar14 = DAT_7105329740;
  if (*(int *)((long)param_1 + 0x21c) == 0) {
    lVar11 = *param_1;
    uStack_e8 = 0x6f54656e696c6e4f;
    uVar10 = 0x811c9dc5;
    local_e0 = 0x746e656d616e7275;
    local_d8 = 0x6552;
    local_d6 = 0x656c655379616c70;
    local_ce = 0x656e6563537463;
    local_f8 = (int)param_1[0x44] == 0x14 & (DAT_7105325d10 ^ 1);
    uVar18 = 0x4f;
    lVar14 = 9;
    uVar17 = uVar10;
    do {
      uVar17 = uVar17 * 0x89 ^ uVar18;
      uVar18 = (uint)*(byte *)((long)&local_f0 + lVar14);
      lVar14 = lVar14 + 1;
    } while (uVar18 != 0);
    local_f0 = CONCAT44(0x21,uVar17);
    local_100 = (byte ***)&PTR_FUN_71050b9560;
    lVar14 = *(long *)(lVar11 + 0x38);
    if (lVar14 == 0) {
      local_a0[0] = (Any64BitId)0x0;
      local_a8 = (long ***)0x0;
    }
    else {
      uVar20 = 0;
      while( true ) {
        pAVar15 = (Any64BitId *)(lVar14 + 0x10 + uVar20);
        AVar4 = *pAVar15;
        if (AVar4 == (Any64BitId)0x0) break;
        local_a0[uVar20] = AVar4;
        if (0x3e < (int)uVar20 + 1U) {
          uVar20 = (ulong)((int)uVar20 + 1);
          break;
        }
        AVar4 = pAVar15[1];
        if (AVar4 == (Any64BitId)0x0) {
          uVar20 = uVar20 + 1;
          break;
        }
        local_a0[uVar20 + 1] = AVar4;
        uVar20 = uVar20 + 2;
      }
      local_a0[uVar20 & 0xffffffff] = (Any64BitId)0x0;
      uVar17 = (uint)(byte)local_a0[0];
      local_a8 = (long ***)(uVar20 << 0x20);
      if (local_a0[0] != (Any64BitId)0x0) {
        pAVar15 = local_a0;
        do {
          pAVar15 = pAVar15 + 1;
          uVar10 = uVar10 * 0x89 ^ uVar17;
          uVar17 = (uint)(byte)*pAVar15;
        } while (uVar17 != 0);
      }
      local_a8 = (long ***)CONCAT44((int)uVar20,uVar10);
    }
    FUN_71037266d0(*(long *)(lVar11 + 0x20),&local_f0,(long ****)&local_a8,&local_100,param_5,
                   param_6,param_7,param_8);
    *(undefined4 *)(lVar11 + 0x30) = 1;
  }
  else {
    lVar11 = *param_1;
    lVar12 = *(long *)(lVar11 + 0x28);
    if (((*(long *)(lVar12 + 0x60) == 0) && (*(long *)(lVar12 + 0x30) == *(long *)(lVar12 + 0x38)))
       && (*(long *)(*(long *)(lVar11 + 0x20) + 0x10) == 0)) {
      if (*(int *)(lVar11 + 0x40) == 1) {
        uVar17 = *(uint *)((long)param_1 + 0x214);
        if (0x12 < uVar17) goto LAB_7102384bf8;
        uVar8 = 0x16;
      }
      else {
        lVar11 = *(long *)(DAT_7105329740 + 8);
        uVar17 = *(uint *)(lVar11 + 4);
        if (uVar17 != 0) {
          uVar20 = 0;
          do {
            lVar12 = lVar11 + uVar20 * 0x18;
            plVar13 = *(long **)(lVar12 + 8);
            plVar2 = *(long **)(lVar12 + 0x10);
            if (plVar13 != plVar2) {
              do {
                lVar12 = *plVar13;
                plVar3 = (long *)plVar13[1];
                if (plVar3 == (long *)0x0) {
                  iVar19 = *(int *)(lVar12 + 0x50);
                }
                else {
                  plVar1 = plVar3 + 1;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = *plVar1 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  iVar19 = *(int *)(lVar12 + 0x50);
                  do {
                    lVar12 = *plVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = lVar12 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar12 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                if (iVar19 == -1) goto LAB_71023848d0;
                plVar13 = plVar13 + 2;
              } while (plVar13 != plVar2);
              uVar17 = *(uint *)(lVar11 + 4);
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar17);
        }
        uVar20 = (ulong)(uVar17 - 1);
LAB_71023848d0:
        lVar11 = *(long *)(lVar14 + 8);
        lVar11 = lVar11 + (ulong)(*(int *)(lVar11 + 4) - 1) * 0x18;
        plVar13 = *(long **)(lVar11 + 8);
        if (*(long **)(lVar11 + 0x10) == plVar13) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar11 = *plVar13;
        plVar13 = (long *)plVar13[1];
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        iVar19 = (int)uVar20;
        if (*(int *)(lVar11 + 0x50) != -1) {
          iVar19 = iVar19 + 1;
        }
        *(int *)(param_1 + 0x6f) = iVar19;
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 1;
          do {
            lVar11 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            std::__shared_weak_count::__release_weak();
          }
        }
        lVar11 = *(long *)(lVar14 + 8);
        lVar14 = *(long *)(lVar11 + 0x88) - *(long *)(lVar11 + 0x80);
        if (lVar14 != 0) {
          uVar16 = (lVar14 >> 5) * 0xfc0fc0fc0fc0fc1;
          uVar20 = 0;
          lVar14 = 0x810;
          do {
            if (*(char *)(*(long *)(lVar11 + 0x80) + lVar14) != '\0') goto LAB_71023849a0;
            uVar20 = uVar20 + 1;
            lVar14 = lVar14 + 0x820;
          } while (uVar20 <= uVar16 && uVar16 - uVar20 != 0);
        }
        uVar20 = 0;
LAB_71023849a0:
        uVar8 = FUN_710239d150(lVar11,(int)uVar20);
        *(undefined4 *)((long)param_1 + 0x37c) = uVar8;
        FUN_710375aa90((long *)&local_100,"online_tournament",param_3,param_4,param_5,param_6,
                       param_7,param_8);
        pppbVar7 = local_100;
        local_a0[0] = (Any64BitId)0x0;
        local_a8 = (long ***)0x0;
        local_f0 = (ulong)*(uint *)(param_1 + 0x6b);
        nn::prepo::PlayReport::Add((char *)(*local_100 + 0x804),(Any64BitId *)&DAT_710425bf57);
        local_f0 = (ulong)*(uint *)((long)param_1 + 0x35c);
        nn::prepo::PlayReport::Add((char *)(*pppbVar7 + 0x804),(Any64BitId *)"tournament_id");
        local_f0 = (ulong)*(uint *)(param_1 + 0x6c);
        nn::prepo::PlayReport::Add((char *)(*pppbVar7 + 0x804),(Any64BitId *)"event_id");
        FUN_710062dc20((uint *)&local_a8,"fighter_%d");
        uVar20 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                (undefined1 *)param_1[0x6d]);
        uVar17 = 0xff;
        if (-1 < (int)(uint)uVar20) {
          uVar17 = (uint)uVar20 & 0xff;
        }
        local_f0 = (ulong)uVar17;
        nn::prepo::PlayReport::Add((char *)(*pppbVar7 + 0x804),local_a0);
        if (((ulong)param_1[0x6e] >> 0x38 == 0xc1) && ((param_1[0x6e] & 0xffffffffffU) != 0)) {
          FUN_710062dc20((uint *)&local_a8,"fighter_%d");
          uVar20 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                  (undefined1 *)param_1[0x6e]);
          uVar17 = 0xff;
          if (-1 < (int)(uint)uVar20) {
            uVar17 = (uint)uVar20 & 0xff;
          }
          local_f0 = (ulong)uVar17;
          nn::prepo::PlayReport::Add((char *)(*pppbVar7 + 0x804),local_a0);
        }
        local_f0 = (ulong)*(uint *)(param_1 + 0x6f);
        nn::prepo::PlayReport::Add((char *)(*pppbVar7 + 0x804),(Any64BitId *)"num_passed_round");
        local_f0 = (ulong)*(uint *)((long)param_1 + 0x37c);
        nn::prepo::PlayReport::Add((char *)(*pppbVar7 + 0x804),(Any64BitId *)"num_wins");
        local_f0 = (ulong)*(uint *)(param_1 + 0x70);
        nn::prepo::PlayReport::Add((char *)(*pppbVar7 + 0x804),(Any64BitId *)"num_watch_replay");
        iVar19 = *(int *)(*DAT_710593b580 + 0x7300);
        if ((iVar19 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar19)) {
LAB_7102384bf8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        nn::prepo::PlayReport::Save((Uid *)(*pppbVar7 + 0x804));
        local_100 = (byte ***)0x0;
        ppbVar9 = *pppbVar7;
        *pppbVar7 = (byte **)0x0;
        if (ppbVar9 != (byte **)0x0) {
          FUN_710392eb40((ulong)ppbVar9);
        }
        FUN_710392eb40((ulong)pppbVar7);
        if (0x12 < *(uint *)((long)param_1 + 0x214)) goto LAB_7102384bf8;
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x214) * 4 + 0x1c8) = 2
        ;
        if (0x11 < *(int *)((long)param_1 + 0x214)) {
          return;
        }
        uVar17 = *(int *)((long)param_1 + 0x214) + 1;
        *(uint *)((long)param_1 + 0x214) = uVar17;
        if (0x12 < uVar17) goto LAB_7102384bf8;
        uVar8 = 10;
      }
      *(undefined4 *)((long)param_1 + (long)(int)uVar17 * 4 + 0x1c8) = uVar8;
    }
  }
  return;
}

