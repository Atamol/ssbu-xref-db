// addr:      71001e5700
// offset:    0x1e5700
// name:      FUN_71001e5700
// mangled:   
// signature: undefined FUN_71001e5700(void)


void FUN_71001e5700(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ushort uStack_48;
  undefined1 uStack_46;
  
  plVar5 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto LAB_71001e5978;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if ((*plVar5 != 0) && (*(long *)(*plVar5 + 0x10) != 0)) {
    plVar5 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar3;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    if (*(long *)(*(long *)(*plVar5 + 0x10) + 0x198) != 0) {
      lStack_50 = 0;
      puStack_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      ppuStack_b0 = &PTR_FUN_7104f57900;
      puStack_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      ppuStack_98 = &puStack_90;
      ppuStack_80 = &puStack_78;
      ppuStack_68 = &puStack_60;
      puStack_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      uStack_48 = 1;
      uStack_46 = 1;
      pcStack_a8 = (code *)FUN_71001af850(0x90);
      if (pcStack_a8 != (code *)0x0) {
        FUN_71001beb40((undefined8 *)pcStack_a8);
      }
      if ((char)uStack_48 == '\0') {
        FUN_71001f2180((long)&ppuStack_b0);
      }
      uStack_48 = uStack_48 & 0xff;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
      uVar4 = FUN_71001e4b40(param_1);
      if ((uVar4 & 1) == 0) {
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
      }
      ppuStack_d0 = &PTR_FUN_7104f56e28;
      pcStack_c8 = FUN_71001e37f0;
      uStack_c0 = 0;
      puStack_b8 = &DAT_71044114cc;
      FUN_71001d3d60(param_1,(long)&ppuStack_d0);
      ppuStack_b0 = &PTR_FUN_7104f57900;
      if (lStack_50 != 0) {
        FUN_71001b1870(lStack_50 + -4);
        lStack_50 = 0;
        uStack_48 = uStack_48 & 0xff;
      }
      if (pcStack_a8 != (code *)0x0) {
        (**(code **)(*(long *)pcStack_a8 + 8))();
      }
      FUN_7101711670(&ppuStack_68,puStack_60);
      FUN_7101711670(&ppuStack_80,puStack_78);
      FUN_7100219ca0(&ppuStack_98,puStack_90);
      return;
    }
  }
LAB_71001e5978:
  ppuStack_b0 = &PTR_FUN_7104f56e28;
  pcStack_a8 = FUN_71001e2a90;
  uStack_a0 = 0;
  ppuStack_98 = (undefined8 **)&DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_b0);
  return;
}

