// addr:      71001d0f00
// offset:    0x1d0f00
// name:      FUN_71001d0f00
// mangled:   
// signature: undefined __cdecl FUN_71001d0f00(long * param_1, int param_2, undefined8 * param_3, uint param_4)


/* WARNING: Removing unreachable block (ram,0x0071001d1174) */
/* WARNING: Removing unreachable block (ram,0x0071001d1188) */

void FUN_71001d0f00(long *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  long alStack_60 [2];
  undefined4 local_44;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d0f80:
    if ((*plVar9 != 0) && (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 != 0)) {
      lVar7 = *(long *)(lVar7 + 0x10);
      goto LAB_71001d0fb4;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_71001d0f80;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001d0f80;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar7 = 0;
LAB_71001d0fb4:
  plVar9 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  if (param_2 == 0) {
    local_44 = 0x80010001;
    FUN_71001b4200((undefined4 *)&local_68,&local_44);
    FUN_71001b4300((undefined4 *)(param_1 + 0xb),(undefined4 *)&local_68);
    iVar8 = *(int *)((long)param_1 + 0x14);
  }
  else {
    iVar8 = *(int *)((long)param_1 + 0x14);
  }
  if ((iVar8 == 1) && ((int)param_1[3] != 0)) {
    plVar10 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar6;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    FUN_71001d1390(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 3));
    *(undefined4 *)(param_1 + 3) = 0;
  }
  local_80 = *param_3;
  local_78 = param_3[1];
  uStack_70 = param_3[2];
  (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_80,param_4 & 1);
  *(int *)((long)param_1 + 0x14) = param_2;
  if ((param_4 & 1) != 0) {
    FUN_71001b4300((undefined4 *)(param_1 + 0xb),(undefined4 *)param_3);
  }
  (**(code **)(*plVar9 + 0x20))(plVar9);
  if (param_2 - 2U < 3) {
    plVar9 = (long *)param_1[5];
    if (param_1 + 4 != plVar9) {
      do {
        local_68 = (code *)plVar9[2];
        alStack_60[0] = plVar9[3];
        (*local_68)(param_1,alStack_60);
        plVar9 = (long *)plVar9[1];
      } while (param_1 + 4 != plVar9);
    }
    (**(code **)(*param_1 + 0x20))(param_1);
    if ((*(byte *)(param_1 + 2) >> 1 & 1) != 0) {
      plVar9 = param_1 + 1;
      iVar8 = (int)*plVar9;
      iVar5 = (int)*plVar9 + -1;
      if (iVar8 != (int)*plVar9) {
        ClearExclusiveLocal();
        goto LAB_71001d1150;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_71001d1150:
        while( true ) {
          iVar1 = (int)*plVar9;
          iVar5 = iVar8 + -1;
          if (iVar1 == iVar8) break;
          ClearExclusiveLocal();
          iVar8 = iVar1;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        iVar8 = iVar1;
        if (bVar4) {
          *(int *)plVar9 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar5 == 0) && (*(char *)((long)param_1 + 0xc) == '\0')) {
        *(undefined1 *)((long)param_1 + 0xc) = 1;
        (**(code **)(*param_1 + 8))(param_1);
      }
    }
  }
  return;
}

