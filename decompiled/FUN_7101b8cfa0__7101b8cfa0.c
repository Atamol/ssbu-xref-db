// addr:      7101b8cfa0
// offset:    0x1b8cfa0
// name:      FUN_7101b8cfa0
// mangled:   
// signature: undefined __cdecl FUN_7101b8cfa0(undefined8 * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b8cfa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  long *local_48;
  
  lVar6 = *(long *)(**(long **)*param_1 + 0x600);
  if (((*(char *)(lVar6 + 0x4aa) == '\0') || ((*(byte *)(lVar6 + 0x1a8) >> 1 & 1) == 0)) &&
     (*(int *)((long)param_1 + 0x124) != 0)) {
    if ((*(char *)(lVar6 + 0x4aa) == '\0') || ((*(byte *)(lVar6 + 0x1ac) >> 1 & 1) == 0)) {
      *(int *)((long)param_1 + 0x124) = *(int *)((long)param_1 + 0x124) + -1;
      goto LAB_7101b8d1a4;
    }
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = 4;
      uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1053dffe8c,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar5 & 1) == 0) goto LAB_7101b8d278;
      FUN_71024076d0(local_90,0x1053dffe8c);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar7 = (int *)(local_80 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
LAB_7101b8d278:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90[0] = 0;
      local_58 = 0;
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_80 = 0;
    local_70 = 0;
    FUN_71037780e0(&local_50,(long)(param_1 + 3),(long ****)"turn_loop",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_48;
    plVar11 = (long *)local_48[1];
    if (plVar11 == (long *)0x0) {
      local_50 = &PTR_FUN_710523d9e8;
      local_48 = (long *)0x0;
      if (plVar4 != (long *)0x0) goto LAB_7101b8d3c8;
    }
    else {
      if ((char)local_48[2] != '\0') {
        plVar12 = *(long **)(*local_48 + 0x80);
        plVar1 = (long *)(*local_48 + 0x88);
        if (plVar12 != plVar1) {
          do {
            while( true ) {
              uVar5 = (**(code **)(*(long *)plVar12[0xd] + 0x148))();
              if (((uVar5 & 1) != 0) &&
                 (uVar5 = (**(code **)(*plVar11 + 0x120))(plVar11,plVar12[0xd]), (uVar5 & 1) != 0))
              {
                (**(code **)(*(long *)plVar12[0xd] + 0x178))();
                (**(code **)(*(long *)plVar12[0xd] + 0x140))((long *)plVar12[0xd],0);
              }
              plVar8 = (long *)plVar12[1];
              if ((long *)plVar12[1] == (long *)0x0) break;
              do {
                plVar12 = plVar8;
                plVar8 = (long *)*plVar12;
              } while ((long *)*plVar12 != (long *)0x0);
LAB_7101b8d37c:
              if (plVar12 == plVar1) goto LAB_7101b8d394;
            }
            plVar8 = plVar12 + 2;
            plVar10 = (long *)*plVar8;
            if ((long *)*plVar10 != plVar12) {
              do {
                lVar6 = *plVar8;
                plVar8 = (long *)(lVar6 + 0x10);
                plVar12 = (long *)*plVar8;
              } while (*plVar12 != lVar6);
              goto LAB_7101b8d37c;
            }
            plVar12 = plVar10;
          } while (plVar10 != plVar1);
LAB_7101b8d394:
          plVar11 = (long *)local_48[1];
        }
      }
      (**(code **)(*plVar11 + 0x178))(plVar11);
LAB_7101b8d3c8:
      local_48 = (long *)0x0;
      local_50 = &PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar4);
    }
    *(undefined4 *)(param_1 + 0x24) = 2;
    if (0x12 < *(uint *)((long)param_1 + 0x10c)) {
LAB_7101b8d3fc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)(int)*(uint *)((long)param_1 + 0x10c) << 2;
    uVar9 = 4;
    if (*(char *)((long)param_1 + 0x129) == '\0') {
      uVar9 = 5;
    }
  }
  else {
    FUN_71037780e0(&local_50,(long)(param_1 + 3),(long ****)"turn_loop",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_48;
    plVar11 = (long *)local_48[1];
    if (plVar11 == (long *)0x0) {
      local_50 = &PTR_FUN_710523d9e8;
      local_48 = (long *)0x0;
      if (plVar4 != (long *)0x0) goto LAB_7101b8d118;
    }
    else {
      if ((char)local_48[2] != '\0') {
        plVar12 = *(long **)(*local_48 + 0x80);
        plVar1 = (long *)(*local_48 + 0x88);
        if (plVar12 != plVar1) {
          do {
            while( true ) {
              uVar5 = (**(code **)(*(long *)plVar12[0xd] + 0x148))();
              if (((uVar5 & 1) != 0) &&
                 (uVar5 = (**(code **)(*plVar11 + 0x120))(plVar11,plVar12[0xd]), (uVar5 & 1) != 0))
              {
                (**(code **)(*(long *)plVar12[0xd] + 0x178))();
                (**(code **)(*(long *)plVar12[0xd] + 0x140))((long *)plVar12[0xd],0);
              }
              plVar8 = (long *)plVar12[1];
              if ((long *)plVar12[1] == (long *)0x0) break;
              do {
                plVar12 = plVar8;
                plVar8 = (long *)*plVar12;
              } while ((long *)*plVar12 != (long *)0x0);
LAB_7101b8d0cc:
              if (plVar12 == plVar1) goto LAB_7101b8d0e4;
            }
            plVar8 = plVar12 + 2;
            plVar10 = (long *)*plVar8;
            if ((long *)*plVar10 != plVar12) {
              do {
                lVar6 = *plVar8;
                plVar8 = (long *)(lVar6 + 0x10);
                plVar12 = (long *)*plVar8;
              } while (*plVar12 != lVar6);
              goto LAB_7101b8d0cc;
            }
            plVar12 = plVar10;
          } while (plVar10 != plVar1);
LAB_7101b8d0e4:
          plVar11 = (long *)local_48[1];
        }
      }
      (**(code **)(*plVar11 + 0x178))(plVar11);
LAB_7101b8d118:
      local_48 = (long *)0x0;
      local_50 = &PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar4);
    }
    FUN_7103776640(&local_50,(long)(param_1 + 1),(byte ****)"set_parts_key",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_48;
    if ((*(long *)((long)local_48 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)((long)local_48 + 8) + 0x18), lVar6 != 0)) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    }
    local_50 = &PTR_FUN_710523d988;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      uVar5 = *(ulong *)((long)plVar4 + 0x18);
      *(undefined ***)((long)plVar4 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar4 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40((ulong)plVar4);
    }
    *(undefined4 *)(param_1 + 0x24) = 1;
    if (0x12 < *(uint *)((long)param_1 + 0x10c)) goto LAB_7101b8d3fc;
    lVar6 = (long)(int)*(uint *)((long)param_1 + 0x10c) * 4;
    uVar9 = 3;
  }
  *(undefined4 *)((long)param_1 + lVar6 + 0xc0) = uVar9;
LAB_7101b8d1a4:
  FUN_710377a280((long)(param_1 + 5),(byte *)"mnu_replay_play_next",1);
  return;
}

