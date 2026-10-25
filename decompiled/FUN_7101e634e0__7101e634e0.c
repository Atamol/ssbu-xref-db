// addr:      7101e634e0
// offset:    0x1e634e0
// name:      FUN_7101e634e0
// mangled:   
// signature: undefined __cdecl FUN_7101e634e0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e634e0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long ****pppplVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  long ***local_90;
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pppplVar4 = &local_90;
  *(undefined2 *)(param_1 + 0x270) = 0;
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x1f0),0x71043e07cf);
    pcVar5 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
    bVar2 = *pcVar5 != '\x01';
    FUN_710377a120((long)(pcVar5 + (ulong)bVar2 * 0x48 + 0x18),"cam_searchfield_go",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar5 + (ulong)bVar2 * 0x48 + 0x28),"cam_searchfield_go",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar5 + (ulong)bVar2 * 0x48 + 0x38),"cam_searchfield_go",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar5 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
    cVar1 = *pcVar5;
    FUN_7103778300(0x3f800000,*(long *)(pcVar5 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),
                   0x710433a880);
    FUN_7103778300(0x3f800000,*(long *)(pcVar5 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),
                   0x7104433776);
    FUN_7101e96fc0(param_1 + 0x1d8,'\x01',param_3,param_4,param_5,param_6,param_7,param_8);
    param_4 = (byte ****)0x0;
    FUN_7103771930(**(long **)(param_1 + 0x1e0),
                   (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\x01'),(long ****)&DAT_00000007
                   ,(byte ****)0x0,param_5,param_6,param_7,param_8);
    local_90 = (long ***)0xf57a523f5;
    FUN_7103772070(**(long **)(param_1 + 0x1e0),
                   (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\x01'),&local_90,param_4,
                   param_5,param_6,param_7,param_8);
    plVar13 = *(long **)(param_1 + 0x1e0);
    bVar2 = (char)plVar13[1] != '\0';
    lVar6 = *(long *)(*plVar13 + 0x1b8);
    if (lVar6 != 0) {
      lVar8 = *plVar13 + 0x1b8;
      lVar9 = lVar8;
      lVar10 = lVar6;
      do {
        uVar11 = (uint)bVar2;
        if ((int)uVar11 <= *(int *)(lVar10 + 0x20)) {
          lVar9 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < (int)uVar11) * 8);
      } while (lVar10 != 0);
      uVar11 = (uint)bVar2;
      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) <= (int)uVar11)) &&
         (plVar12 = *(long **)(lVar9 + 0x28), plVar12 != (long *)0x0)) {
        (**(code **)(*plVar12 + 0x208))(plVar12,0);
        pppplVar4 = (long ****)0x0;
        (**(code **)(*plVar12 + 0x388))(plVar12,1);
        lVar8 = *plVar13 + 0x1b8;
        lVar6 = *(long *)(*plVar13 + 0x1b8);
      }
      lVar9 = lVar8;
      if (lVar6 != 0) {
        do {
          if ((int)uVar11 <= *(int *)(lVar6 + 0x20)) {
            lVar9 = lVar6;
          }
          lVar6 = *(long *)(lVar6 + (ulong)(*(int *)(lVar6 + 0x20) < (int)uVar11) * 8);
        } while (lVar6 != 0);
        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) <= (int)uVar11)) &&
           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
          (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
          pppplVar4 = (long ****)0x0;
          (**(code **)(*plVar13 + 0x388))(plVar13,1);
        }
      }
    }
    *(undefined1 *)(*(long *)(param_1 + 0x1e0) + 0x98) = 0;
    if (*(char *)(param_1 + 0x1f8) != '\0') {
      *(undefined1 *)(param_1 + 0x1f8) = 0;
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x1f0),0x71043e07cf);
      pcVar5 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
      bVar2 = *pcVar5 != '\x01';
      FUN_710377a120((long)(pcVar5 + (ulong)bVar2 * 0x48 + 0x18),"cam_searchfield_go",pppplVar4,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_710377a120((long)(pcVar5 + (ulong)bVar2 * 0x48 + 0x28),"cam_searchfield_go",pppplVar4,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_710377a120((long)(pcVar5 + (ulong)bVar2 * 0x48 + 0x38),"cam_searchfield_go",pppplVar4,
                     param_4,param_5,param_6,param_7,param_8);
      pcVar5 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
      cVar1 = *pcVar5;
      FUN_7103778300(0x3f800000,*(long *)(pcVar5 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),
                     0x710433a880);
      FUN_7103778300(0x3f800000,*(long *)(pcVar5 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),
                     0x7104433776);
      FUN_7101e96fc0(param_1 + 0x1d8,'\x01',pppplVar4,param_4,param_5,param_6,param_7,param_8);
      param_4 = (byte ****)0x0;
      FUN_7103771930(**(long **)(param_1 + 0x1e0),
                     (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\x01'),
                     (long ****)&DAT_00000007,(byte ****)0x0,param_5,param_6,param_7,param_8);
      local_90 = (long ***)0xf57a523f5;
      FUN_7103772070(**(long **)(param_1 + 0x1e0),
                     (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\x01'),&local_90,param_4,
                     param_5,param_6,param_7,param_8);
      plVar13 = *(long **)(param_1 + 0x1e0);
      bVar2 = (char)plVar13[1] != '\0';
      lVar6 = *(long *)(*plVar13 + 0x1b8);
      if (lVar6 != 0) {
        lVar8 = *plVar13 + 0x1b8;
        lVar9 = lVar8;
        lVar10 = lVar6;
        do {
          uVar11 = (uint)bVar2;
          if ((int)uVar11 <= *(int *)(lVar10 + 0x20)) {
            lVar9 = lVar10;
          }
          lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < (int)uVar11) * 8);
        } while (lVar10 != 0);
        uVar11 = (uint)bVar2;
        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) <= (int)uVar11)) &&
           (plVar12 = *(long **)(lVar9 + 0x28), plVar12 != (long *)0x0)) {
          (**(code **)(*plVar12 + 0x208))(plVar12,0);
          (**(code **)(*plVar12 + 0x388))(plVar12,1,0);
          lVar8 = *plVar13 + 0x1b8;
          lVar6 = *(long *)(*plVar13 + 0x1b8);
        }
        lVar9 = lVar8;
        if (lVar6 != 0) {
          do {
            if ((int)uVar11 <= *(int *)(lVar6 + 0x20)) {
              lVar9 = lVar6;
            }
            lVar6 = *(long *)(lVar6 + (ulong)(*(int *)(lVar6 + 0x20) < (int)uVar11) * 8);
          } while (lVar6 != 0);
          if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) <= (int)uVar11)) &&
             (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
            (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
            (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
          }
        }
      }
      *(undefined1 *)(*(long *)(param_1 + 0x1e0) + 0x98) = 0;
    }
  }
  plVar13 = *(long **)(param_1 + 0x1e0);
  bVar2 = (char)plVar13[1] != '\x01';
  lVar6 = *(long *)(*plVar13 + 0x1b8);
  if (lVar6 != 0) {
    lVar8 = *plVar13 + 0x1b8;
    lVar9 = lVar8;
    lVar10 = lVar6;
    do {
      uVar11 = (uint)bVar2;
      if ((int)uVar11 <= *(int *)(lVar10 + 0x20)) {
        lVar9 = lVar10;
      }
      lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < (int)uVar11) * 8);
    } while (lVar10 != 0);
    uVar11 = (uint)bVar2;
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) <= (int)uVar11)) &&
       (plVar12 = *(long **)(lVar9 + 0x28), plVar12 != (long *)0x0)) {
      (**(code **)(*plVar12 + 0x208))(plVar12,0);
      (**(code **)(*plVar12 + 0x388))(plVar12,1,0);
      lVar8 = *plVar13 + 0x1b8;
      lVar6 = *(long *)(*plVar13 + 0x1b8);
    }
    lVar9 = lVar8;
    if (lVar6 != 0) {
      do {
        if ((int)uVar11 <= *(int *)(lVar6 + 0x20)) {
          lVar9 = lVar6;
        }
        lVar6 = *(long *)(lVar6 + (ulong)(*(int *)(lVar6 + 0x20) < (int)uVar11) * 8);
      } while (lVar6 != 0);
      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) <= (int)uVar11)) &&
         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
        (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
      }
    }
  }
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar3 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x14f00ee606,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8), (uVar3 & 1) != 0)) {
    FUN_71024076d0((undefined4 *)&local_90,0x14f00ee606);
    if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
      piVar7 = (int *)(local_80 + 0x38);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
    local_78 = 0x87650000000000;
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0;
    local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
    local_58 = 0;
  }
  local_88 = &PTR_FUN_7104f73d50;
  local_80 = 0;
  local_70 = 0;
  if (0x12 < *(uint *)(param_1 + 0x19c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x19c) * 4 + 0x150) = 2;
  return;
}

