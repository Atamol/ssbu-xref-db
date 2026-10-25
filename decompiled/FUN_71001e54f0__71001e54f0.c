// addr:      71001e54f0
// offset:    0x1e54f0
// name:      FUN_71001e54f0
// mangled:   
// signature: undefined FUN_71001e54f0(void)


void FUN_71001e54f0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0xc0) + 200))();
  *(undefined4 *)(param_1 + 0x334) = uVar3;
  (**(code **)(**(long **)(*(long *)(param_1 + 0xc0) + 8) + 0x80))();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  plVar5 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e5588:
    if ((*plVar5 != 0) && (*(long *)(*plVar5 + 0x10) != 0)) {
      plVar5 = &DAT_71052af128;
      if (DAT_71052af1d8 != '\0') {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar4;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
        }
      }
      if (*(long *)(*(long *)(*plVar5 + 0x10) + 0x198) == 0) {
        if (*(short *)(param_1 + 0x310) != 0) {
          lVar6 = *(long *)(param_1 + 0x318);
          if (*(char *)(lVar6 + 0x78) == '\0') {
            FUN_71001f2180(lVar6 + 0x10);
          }
          FUN_71001bec20(*(long *)(lVar6 + 0x18),param_1 + 0x280);
          *(undefined1 *)(lVar6 + 0x79) = 0;
          lVar6 = *(long *)(param_1 + 0x318);
          uVar2 = *(ushort *)(param_1 + 0x310);
          if (*(char *)(lVar6 + 0x78) == '\0') {
            FUN_71001f2180(lVar6 + 0x10);
          }
          FUN_71001bee30(*(long *)(lVar6 + 0x18),uVar2);
          *(undefined1 *)(lVar6 + 0x79) = 0;
          FUN_71001beb90(param_1 + 0x280);
          *(undefined2 *)(param_1 + 0x310) = 0;
        }
        *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(*(long *)(param_1 + 0x318) + 8);
        pcStack_48 = FUN_71001e37f0;
      }
      else {
        pcStack_48 = FUN_71001e5700;
      }
      goto LAB_71001e5628;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_71001e5588;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_71001e5588;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  pcStack_48 = FUN_71001e2a90;
LAB_71001e5628:
  ppuStack_50 = &PTR_FUN_7104f56e28;
  uStack_40 = 0;
  puStack_38 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_50);
  return;
}

