// addr:      7100244fc0
// offset:    0x244fc0
// name:      FUN_7100244fc0
// mangled:   
// signature: undefined __cdecl FUN_7100244fc0(long param_1, undefined8 * param_2)


void FUN_7100244fc0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100245030:
    if ((*plVar5 != 0) && (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_7100245064;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_7100245030;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100245030;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_7100245064:
  plVar5 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 != 0) {
    FUN_71001e1680(*(long *)(lVar3 + 0xc0),0);
    FUN_71001e1620(*(long *)(lVar3 + 0xc0),0);
    FUN_71001e1680(lVar3,0);
    FUN_71001e1620(lVar3,0);
    *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x88) = 0;
    FUN_71001dfee0(*(long *)(lVar3 + 0xc0));
    pcVar4 = *(code **)(lVar3 + 200);
    *(undefined8 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 200) = 0;
    local_48 = *param_2;
    local_40 = param_2[1];
    uStack_38 = param_2[2];
    (*pcVar4)(lVar3,&local_48,lVar3 + 0xd0);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}

