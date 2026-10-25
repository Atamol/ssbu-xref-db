// addr:      7103710a20
// offset:    0x3710a20
// name:      FUN_7103710a20
// mangled:   
// signature: undefined8 __cdecl FUN_7103710a20(long param_1)


undefined8 FUN_7103710a20(long param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  code *pcVar5;
  long lVar6;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  long lStack_68;
  long *local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x48);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x30) == 0)) || (*(long *)(lVar6 + 0x18) == 0)) {
    return 2;
  }
  FUN_7103700a90(DAT_710533a0b8);
  if ((long *)**(long **)(lVar6 + 0x78) != (long *)0x0) {
    (**(code **)(*(long *)**(long **)(lVar6 + 0x78) + 0x20))();
  }
  if ((long *)**(long **)(lVar6 + 0x68) != (long *)0x0) {
    (**(code **)(*(long *)**(long **)(lVar6 + 0x68) + 0x20))();
  }
  if ((long *)**(long **)(lVar6 + 0x60) != (long *)0x0) {
    (**(code **)(*(long *)**(long **)(lVar6 + 0x60) + 0x20))();
  }
  if (*(long **)(lVar6 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar6 + 0x28) + 0x20))();
  }
  if (*(long **)(lVar6 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(lVar6 + 0x20) + 0x20))();
  }
  lVar3 = 0;
  if (*(long *)(lVar6 + 0x30) != 0) {
    FUN_7100239af0(*(long *)(lVar6 + 0x30),*(ulong *)(lVar6 + 8));
    lVar3 = *(long *)(lVar6 + 0x30);
  }
  *(undefined8 *)(lVar6 + 0x10) = 0;
  FUN_7100238f30(&local_80,lVar3);
  pcVar5 = FUN_710170d030;
  pcVar1 = pcVar5;
  if ((int)local_80 < 0) {
    pcVar1 = (code *)0x0;
  }
  if (pcVar1 != (code *)0x0) goto LAB_7103710bac;
  lVar3 = DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
joined_r0x007103710b7c:
    if (lVar3 == 0) goto LAB_7103710ba0;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    lVar3 = DAT_71052af138;
    if (uVar2 == 0) goto joined_r0x007103710b7c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      lVar3 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto joined_r0x007103710b7c;
    }
    FUN_71001b1300("C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x47,0xe0000003,0);
LAB_7103710ba0:
    lVar3 = 0;
  }
  FUN_71001d5dd0(lVar3,1);
LAB_7103710bac:
  FUN_71001d1590(*(long **)(lVar6 + 0x18));
  FUN_71001b41d0((undefined4 *)&local_80);
  FUN_71002480e0((undefined4 *)&local_48,*(long *)(lVar6 + 0x30),*(long **)(lVar6 + 0x18));
  FUN_71001b4300((undefined4 *)&local_80,(undefined4 *)&local_48);
  if ((int)local_80 < 0) {
    pcVar5 = (code *)0x0;
  }
  if (pcVar5 != (code *)0x0) {
    *(undefined1 *)(lVar6 + 0x98) = 3;
    local_80 = &PTR_FUN_710523c300;
    pcStack_78 = FUN_7103710c80;
    local_70 = 0;
    lStack_68 = param_1;
    local_60 = (long *)&local_80;
    FUN_710370fde0((long *)&local_80,(long *)(param_1 + 0x90));
    if (&local_80 == (undefined ***)local_60) {
      pcVar5 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) {
        return 0;
      }
      pcVar5 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar5)();
    return 0;
  }
  FUN_710170cea0(&local_48,(uint *)&local_80,3);
  *(undefined8 *)(lVar6 + 0x88) = uStack_40;
  *(undefined8 *)(lVar6 + 0x90) = local_38;
  *(undefined8 *)(lVar6 + 0x80) = local_48;
  return 2;
}

