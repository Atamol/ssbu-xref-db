// addr:      7102363ed0
// offset:    0x2363ed0
// name:      FUN_7102363ed0
// mangled:   
// signature: undefined8 __cdecl FUN_7102363ed0(long * param_1, undefined8 param_2, long * param_3)


undefined8 FUN_7102363ed0(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  lVar9 = param_1[0x1d];
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if (((lVar6 == 0xbcd1970ce) && ((int)param_3[1] == (int)param_1[1])) &&
     (iVar5 = strcmp((char *)(param_3 + 2),(char *)(param_1 + 2)), iVar5 == 0)) {
    plVar10 = (long *)param_1[0xe];
    if (plVar10[2] != 0) {
      lVar6 = *plVar10;
      plVar11 = (long *)plVar10[1];
      *(undefined8 *)(*plVar11 + 8) = *(undefined8 *)(lVar6 + 8);
      **(long **)(lVar6 + 8) = *plVar11;
      plVar10[2] = 0;
      while (plVar4 = plVar11, plVar4 != plVar10) {
        plVar11 = (long *)plVar4[1];
        plVar8 = (long *)plVar4[0x15];
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            lVar6 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar4 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar4);
        }
      }
    }
    if (((int)param_3[10] == 0x2f9a03cb) &&
       (iVar5 = strcmp((char *)(param_3 + 0xb),"MainMenuScene"), iVar5 == 0)) {
      if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71053083c8 == 0) {
        DAT_7105307788 = 0;
      }
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined8 *)(lVar9 + 0x104) = 0;
      *(undefined8 *)(lVar9 + 0xfc) = 0;
      *(undefined8 *)(lVar9 + 0xf4) = 0;
      *(undefined8 *)(lVar9 + 0xec) = 0;
      *(undefined8 *)(lVar9 + 0xe4) = 0;
      *(undefined8 *)(lVar9 + 0xdc) = 0;
      *(undefined8 *)(lVar9 + 0xd4) = 0;
      *(undefined8 *)(lVar9 + 0xcc) = 0;
      *(undefined8 *)(lVar9 + 0x114) = 0xffffffff00000000;
      *(undefined8 *)(lVar9 + 0xc0) = 0x800000007;
      *(undefined1 *)(lVar9 + 0x11c) = 0;
      *(undefined8 *)(lVar9 + 0x10c) = 0xffffffff00000002;
      *(undefined4 *)(lVar9 + 200) = 2;
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x007102364014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
  return uVar7;
}

