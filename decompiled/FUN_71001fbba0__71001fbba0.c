// addr:      71001fbba0
// offset:    0x1fbba0
// name:      FUN_71001fbba0
// mangled:   
// signature: undefined FUN_71001fbba0(void)


undefined4
FUN_71001fbba0(long param_1,undefined4 param_2,undefined4 param_3,ushort param_4,short param_5,
              short param_6,long param_7)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined4 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ushort uStack_68;
  undefined1 uStack_66;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fbc30:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_71001fbc60;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001fbc30;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001fbc30;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001fbc60:
    lVar5 = 0;
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uStack_d0._0_6_ = CONCAT24((short)param_3,param_2);
  lVar5 = FUN_71001fa660(param_1,(uint *)&uStack_d0);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x120) != 0) {
      lStack_70 = 0;
      puStack_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      uStack_d0 = &PTR_FUN_7104f57900;
      puStack_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      ppuStack_b8 = &puStack_b0;
      ppuStack_a0 = &puStack_98;
      ppuStack_88 = &puStack_80;
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      uStack_68 = 1;
      uStack_66 = 1;
      plStack_c8 = FUN_71001af850(0x90);
      if (plStack_c8 != (long *)0x0) {
        FUN_71001beb40(plStack_c8);
      }
      if ((char)uStack_68 == '\0') {
        FUN_71001f2180((long)&uStack_d0);
        cVar2 = (char)uStack_68;
        uStack_c0 = 1;
        uStack_68 = uStack_68 & 0xff;
        if (cVar2 == '\0') {
          FUN_71001f2180((long)&uStack_d0);
        }
      }
      else {
        uStack_c0 = 1;
        uStack_68 = uStack_68 & 0xff;
      }
      FUN_71001bec20((long)plStack_c8,param_7 + 0x140);
      uStack_68 = uStack_68 & 0xff;
      uVar4 = (**(code **)(**(long **)(param_1 + 0x120) + 0x10))
                        (*(long **)(param_1 + 0x120),&uStack_d0,param_3);
      if ((char)uStack_68 == '\0') {
        FUN_71001f2180((long)&uStack_d0);
      }
      FUN_71001bec20(param_7 + 0x140,(long)plStack_c8);
      uStack_d0 = &PTR_FUN_7104f57900;
      if (lStack_70 != 0) {
        FUN_71001b1870(lStack_70 + -4);
        lStack_70 = 0;
        uStack_68 = uStack_68 & 0xff;
      }
      if (plStack_c8 != (long *)0x0) {
        (**(code **)(*plStack_c8 + 8))();
      }
      FUN_7101711670(&ppuStack_88,puStack_80);
      FUN_7101711670(&ppuStack_a0,puStack_98);
      FUN_7100219ca0(&ppuStack_b8,puStack_b0);
      if ((uVar4 & 1) != 0) {
        uVar6 = 1;
        goto LAB_71001fbe44;
      }
    }
    *(undefined8 *)(param_7 + 0x1d0) = DAT_71052aeba8;
    uVar6 = 1;
    *(ushort *)(param_7 + 0x44) = param_4 & 0xff | param_6 << 8;
    *(ushort *)(param_7 + 0x42) = param_4 & 0xff | param_5 << 8;
    *(short *)(param_7 + 0xac) = (short)param_3;
    *(undefined4 *)(param_7 + 0x1e8) = param_2;
    (**(code **)(**(long **)(param_1 + 0x328) + 0x18))(*(long **)(param_1 + 0x328),param_7,1);
  }
LAB_71001fbe44:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar6;
}

