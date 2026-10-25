// addr:      71001fbe80
// offset:    0x1fbe80
// name:      FUN_71001fbe80
// mangled:   
// signature: undefined FUN_71001fbe80(void)


/* WARNING: Removing unreachable block (ram,0x0071001fc0fc) */
/* WARNING: Removing unreachable block (ram,0x0071001fc110) */

void FUN_71001fbe80(undefined4 *param_1,long param_2,undefined4 param_3,long param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined4 uStack_44;
  
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fbf00:
    if ((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 == 0)) goto LAB_71001fbf30;
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_71001fbf00;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001fbf00;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001fbf30:
    lVar9 = 0;
  }
  plVar11 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  if (*(char *)(param_4 + 0x68) == '\0') {
    FUN_71001f2180(param_4);
    iVar10 = *(int *)(param_4 + 0x10);
  }
  else {
    iVar10 = *(int *)(param_4 + 0x10);
  }
  if (iVar10 == 3) {
    if (*(char *)(param_4 + 0x68) == '\0') {
      FUN_71001f2180(param_4);
      cVar4 = *(char *)(param_4 + 0x6a);
    }
    else {
      cVar4 = *(char *)(param_4 + 0x6a);
    }
    if (cVar4 != '\0') {
      if (param_5 == 0) {
        uStack_44 = 0x8001000a;
        goto LAB_71001fbfe4;
      }
      if ((*(byte *)(param_5 + 0x30) >> 2 & 1) == 0) {
        plVar8 = FUN_71001af850(0x238);
        if (plVar8 == (long *)0x0) {
LAB_71001fc064:
          cVar4 = *(char *)(param_4 + 0x68);
        }
        else {
          FUN_7100216320(plVar8,0,7,0,param_5,0);
          cVar4 = *(char *)(param_4 + 0x68);
        }
        if (cVar4 == '\0') {
          FUN_71001f2180(param_4);
        }
        FUN_71001bec20((long)(plVar8 + 0x28),*(long *)(param_4 + 8));
        *(undefined1 *)(plVar8 + 8) = 0;
        *(undefined2 *)((long)plVar8 + 0xac) = *(undefined2 *)(param_2 + 0x128);
        *(undefined4 *)(plVar8 + 0x3d) = param_3;
        (**(code **)(**(long **)(param_2 + 0x328) + 0x18))(*(long **)(param_2 + 0x328),plVar8,1);
        plVar1 = plVar8 + 1;
        iVar10 = (int)*plVar1;
        iVar6 = (int)*plVar1 + -1;
        if (iVar10 != (int)*plVar1) {
          ClearExclusiveLocal();
          goto LAB_71001fc0d8;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
        while (cVar4 != '\0') {
LAB_71001fc0d8:
          while( true ) {
            iVar2 = (int)*plVar1;
            iVar6 = iVar10 + -1;
            if (iVar2 == iVar10) break;
            ClearExclusiveLocal();
            iVar10 = iVar2;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          iVar10 = iVar2;
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        }
        if ((iVar6 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar8 + 0xc) = 1;
          (**(code **)(*plVar8 + 8))(plVar8);
        }
        uStack_44 = 0x10001;
      }
      else {
        plVar8 = FUN_71001b4580(0x238,0);
        if (plVar8 != (long *)0x0) {
          FUN_71001e2270(plVar8,0,7,0,param_5,0);
          if (((*(byte *)(plVar8 + 0xc) >> 6 & 1) == 0) || (plVar8[0x3e] != 0)) goto LAB_71001fc064;
          (**(code **)(*plVar8 + 8))(plVar8);
        }
        uStack_44 = 0x8005001f;
      }
      goto LAB_71001fbfe4;
    }
  }
  uStack_44 = 0x80050003;
LAB_71001fbfe4:
  FUN_71001b4200(param_1,&uStack_44);
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return;
}

