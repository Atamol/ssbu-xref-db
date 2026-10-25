// addr:      71024b9a60
// offset:    0x24b9a60
// name:      FUN_71024b9a60
// mangled:   
// signature: undefined __cdecl FUN_71024b9a60(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_71024b9a60(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  bool bVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *local_60;
  long *local_58;
  undefined1 *local_48;
  
  plVar5 = lib::Singleton<app::StageManager>::instance_;
  if (((*(int *)(param_1 + 0x24c) == 0) &&
      (lVar7 = *lib::Singleton<app::StageManager>::instance_, *(int *)(lVar7 + 0xbc) == 6)) &&
     (*(char *)(lVar7 + 0xdc) != '\0')) {
    *(undefined4 *)(lVar7 + 0xbc) = 7;
  }
  if (*(int *)(*plVar5 + 0xbc) == 0) {
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_00, iVar4 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      param_2 = extraout_x1_01;
    }
    FUN_71014e1e90(&DAT_71052c51b0,param_2,param_3,param_4,param_5,param_6,(ulong)param_7,
                   (uint *)param_8);
    lVar7 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20);
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0x591b) = 2;
      pbVar2 = (byte *)(lVar7 + 0x5920);
      if (*pbVar2 - 3 < 2) {
        if ((*(byte *)(lVar7 + 0x591f) & 1) != 0) {
          FUN_7100655f60(lVar7,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
          *pbVar2 = 3;
          *(undefined1 *)(lVar7 + 0x5934) = 1;
        }
      }
      else if ((*(int *)*DAT_71052c33d8 < 1) || (*pbVar2 == 6)) {
        FUN_7100655f60(lVar7,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        *pbVar2 = 5;
      }
    }
    plVar5 = lib::Singleton<app::FighterManager>::instance_;
    *(undefined1 *)(*lib::Singleton<app::FighterManager>::instance_ + 0xd0) = 0;
    *(undefined1 *)(*plVar5 + 0xd8) = 1;
    FUN_7100679ae0(*plVar5);
    lVar7 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20);
    if ((lVar7 != 0) && (uVar9 = *(ulong *)(lVar7 + 0x4150), uVar9 != 0)) {
      uVar6 = 0;
      uVar10 = 1;
      do {
        lVar8 = lVar7 + uVar6 * 8;
        plVar5 = *(long **)(lVar8 + 0x4160);
        if ((plVar5 != (long *)0x0) && (uVar6 = (**(code **)(*plVar5 + 0x518))(), (uVar6 & 1) != 0))
        {
          lVar8 = *(long *)(lVar8 + 0x4160);
          (**(code **)(**(long **)(lVar8 + 0x438) + 0x280))(*(long **)(lVar8 + 0x438),0);
          plVar5 = *(long **)(lVar8 + 0xf700);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0xc0))(plVar5,lVar8,1);
          }
        }
        bVar1 = uVar10 < uVar9;
        uVar6 = uVar10;
        uVar10 = (ulong)((int)uVar10 + 1);
      } while (bVar1);
    }
    FUN_71032e4d70(*(long *)(DAT_710532f7c8 + 8),0,1,0,0,0,param_7,param_8);
    FUN_71015435c0((long *)&local_60,(long *)*DAT_71052c3910,0x1022590708);
    if (local_60 != (long *)0x0) {
      local_48 = &DAT_f1281017e;
      uVar9 = (**(code **)(*local_60 + 0x18))(local_60,&local_48);
      if ((uVar9 & 1) != 0) {
        *(undefined1 *)(local_60 + 0x1c) = 1;
        *(int *)(*DAT_71052b8f00 + 0xc9c) = *(int *)(*DAT_71052b8f00 + 0xc9c) + 1;
      }
    }
    if (local_58 != (long *)0x0) {
      plVar5 = local_58 + 1;
      do {
        lVar7 = *plVar5;
        cVar3 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar1) {
          *plVar5 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)(param_1 + 0x2cd) = 1;
    if (0x12 < *(uint *)(param_1 + 0x244)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x244) * 4 + 0x1f8) = 9;
  }
  return;
}

