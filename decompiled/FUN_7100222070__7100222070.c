// addr:      7100222070
// offset:    0x222070
// name:      FUN_7100222070
// mangled:   
// signature: undefined __cdecl FUN_7100222070(undefined4 * param_1, long param_2, undefined4 param_3, long param_4, undefined4 param_5, undefined8 param_6, undefined8 param_7)


void FUN_7100222070(undefined4 *param_1,long param_2,undefined4 param_3,long param_4,
                   undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100222100:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_7100222134;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_7100222100;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100222100;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_7100222134:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  *(undefined4 *)(param_2 + 0xa0) = param_3;
  FUN_71001b2f70(param_2 + 0xb0,param_4);
  *(undefined4 *)(param_2 + 0xd8) = param_5;
  *(undefined8 *)(param_2 + 0x100) = param_6;
  *(undefined8 *)(param_2 + 0x108) = param_7;
  local_80 = &PTR_FUN_7104f56e28;
  pcStack_78 = FUN_71002221d0;
  local_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_2,(long)&local_80);
  local_80 = (undefined **)CONCAT71(local_80._1_7_,1);
  FUN_71001b4220(param_1,(char *)&local_80);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

