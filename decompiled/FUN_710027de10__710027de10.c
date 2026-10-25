// addr:      710027de10
// offset:    0x27de10
// name:      FUN_710027de10
// mangled:   
// signature: undefined FUN_710027de10(void)


void FUN_710027de10(long param_1)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar6 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar6 != 0) {
    if (*(int *)(param_1 + 0xd4) == 2) {
      bVar2 = false;
LAB_710027ded4:
      if ((ulong)(*(long *)(param_1 + 0x1c8) - *(long *)(param_1 + 0x1c0) >> 5) <=
          (ulong)*(uint *)(param_1 + 0x5fc)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar6 = param_1 + 0x3d8;
      *(undefined8 *)(param_1 + 1000) =
           *(undefined8 *)
            (*(long *)(param_1 + 0x1c0) + (ulong)*(uint *)(param_1 + 0x5fc) * 0x20 + 0x10);
      FUN_71001cde10(&ppuStack_58);
      uStack_38 = 0x1f8;
      lStack_28 = lVar6;
      uVar4 = (*(code *)ppuStack_58[6])(&ppuStack_58,&lStack_28,&uStack_38,1);
      *(undefined4 *)(param_1 + 0x5d0) = uVar4;
      FUN_71001cb860();
      plVar7 = *(long **)(param_1 + 0x5f0);
      if (bVar2) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,0,*(undefined8 *)(param_1 + 1000));
      }
      else {
        if ((ulong)(*(long *)(param_1 + 0x5e0) - *(long *)(param_1 + 0x5d8) >> 3) <=
            (ulong)*(uint *)(param_1 + 0x5f8)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        (**(code **)(*plVar7 + 0x18))
                  (plVar7,lVar6,
                   *(undefined8 *)
                    (*(long *)(param_1 + 0x5d8) + (ulong)*(uint *)(param_1 + 0x5f8) * 8),
                   *(undefined8 *)(param_1 + 1000));
        *(int *)(param_1 + 0x5f8) = *(int *)(param_1 + 0x5f8) + 1;
      }
      *(int *)(param_1 + 0x5fc) = *(int *)(param_1 + 0x5fc) + 1;
      ppuStack_58 = &PTR_FUN_7104f56e28;
      pcStack_50 = FUN_710027d7e0;
      uStack_48 = 0;
      puStack_40 = &DAT_71044114cc;
      FUN_71001d3d60(param_1,(long)&ppuStack_58);
      return;
    }
    if (*(int *)(param_1 + 0xd4) != 4) {
      ppuStack_58 = *(undefined ***)(param_1 + 0x118);
      pcStack_50 = *(code **)(param_1 + 0x120);
      uStack_48 = *(undefined8 *)(param_1 + 0x128);
      uVar3 = FUN_71001b11f0((long)&ppuStack_58);
      if (uVar3 == 0x69) {
        lStack_28 = CONCAT44(lStack_28._4_4_,0x80690001);
        bVar2 = FUN_71001b4260((int *)&ppuStack_58,(int *)&lStack_28);
        if (!bVar2) {
          bVar2 = true;
          goto LAB_710027ded4;
        }
      }
      goto LAB_710027dec0;
    }
  }
  lStack_28 = CONCAT44(lStack_28._4_4_,0x80010004);
  FUN_71001b4200((undefined4 *)&ppuStack_58,(undefined4 *)&lStack_28);
LAB_710027dec0:
  FUN_710027ca30(param_1,(int *)&ppuStack_58);
  return;
}

