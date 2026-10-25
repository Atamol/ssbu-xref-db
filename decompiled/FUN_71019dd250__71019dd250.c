// addr:      71019dd250
// offset:    0x19dd250
// name:      FUN_71019dd250
// mangled:   
// signature: undefined __cdecl FUN_71019dd250(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019dd250(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *********ppppppppplVar7;
  byte ****ppppbVar8;
  long ****pppplVar9;
  long *********ppppppppplVar10;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  if (1 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3)) {
    lVar1 = *(long *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 8) + 8;
    ppppppppplVar10 = (long *********)(ulong)param_2;
    uVar6 = 0;
    plVar5 = (long *)(param_1 + 0xf0);
    FUN_7103776640(&local_70,lVar1,(byte ****)"set_item_%02d",0,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_60,(long)&local_70,(long ****)"set_rep_special",uVar6,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = local_68;
    local_70 = &PTR_FUN_710523d988;
    local_68 = 0;
    if (uVar2 != 0) {
      uVar3 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar2);
    }
    ppppbVar8 = (byte ****)&DAT_00000025;
    pppplVar9 = (long ****)0x0;
    ppppppppplVar7 = ppppppppplVar10;
    plVar4 = FUN_71032407a0(plVar5,*(ulong *)(param_1 + 0xf8),param_2,0x25,0,param_6,param_7,param_8
                           );
    uVar2 = local_58;
    FUN_7103778b80(local_58,(long)plVar4,ppppppppplVar7,ppppbVar8,pppplVar9,param_6,param_7,param_8)
    ;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    uVar6 = 1;
    FUN_7103776640(&local_70,lVar1,(byte ****)"set_item_%02d",1,ppppbVar8,pppplVar9,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_60,(long)&local_70,(long ****)"set_rep_special",uVar6,ppppbVar8,pppplVar9,
                   param_6,param_7,param_8);
    uVar2 = local_68;
    local_70 = &PTR_FUN_710523d988;
    local_68 = 0;
    if (uVar2 != 0) {
      uVar3 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar2);
    }
    ppppbVar8 = (byte ****)&DAT_00000025;
    pppplVar9 = (long ****)0x1;
    ppppppppplVar7 = ppppppppplVar10;
    plVar4 = FUN_71032407a0(plVar5,*(ulong *)(param_1 + 0xf8),param_2,0x25,1,param_6,param_7,param_8
                           );
    uVar2 = local_58;
    FUN_7103778b80(local_58,(long)plVar4,ppppppppplVar7,ppppbVar8,pppplVar9,param_6,param_7,param_8)
    ;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    uVar6 = 2;
    FUN_7103776640(&local_70,lVar1,(byte ****)"set_item_%02d",2,ppppbVar8,pppplVar9,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_60,(long)&local_70,(long ****)"set_rep_special",uVar6,ppppbVar8,pppplVar9,
                   param_6,param_7,param_8);
    uVar2 = local_68;
    local_70 = &PTR_FUN_710523d988;
    local_68 = 0;
    if (uVar2 != 0) {
      uVar3 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar2);
    }
    ppppbVar8 = (byte ****)&DAT_00000025;
    pppplVar9 = (long ****)0x2;
    plVar5 = FUN_71032407a0(plVar5,*(ulong *)(param_1 + 0xf8),param_2,0x25,2,param_6,param_7,param_8
                           );
    uVar2 = local_58;
    FUN_7103778b80(local_58,(long)plVar5,ppppppppplVar10,ppppbVar8,pppplVar9,param_6,param_7,param_8
                  );
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

