// addr:      7100220ca0
// offset:    0x220ca0
// name:      FUN_7100220ca0
// mangled:   
// signature: undefined FUN_7100220ca0(void)


void FUN_7100220ca0(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,char *param_6,undefined1 *param_7,char *param_8,long param_9)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)(param_2 + 0x1b8);
  (**(code **)(*(long *)(param_2 + 0x1b8) + 0x10))(plVar1);
  if (*(ulong *)(param_2 + 0x250) >> 0xe == 0) {
    uVar6 = 0x8001000a;
  }
  else {
    puVar2 = FUN_71001af850(0x40);
    uVar5 = extraout_x1;
    if (puVar2 != (undefined8 *)0x0) {
      uVar9 = *(ulong *)(param_2 + 0x250);
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      if (uVar9 != 0) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        puVar3 = FUN_71001b1820(uVar9);
        puVar2[1] = puVar3;
        puVar2[2] = puVar3;
        puVar2[3] = (long)puVar3 + uVar9;
        uVar7 = uVar9;
        if ((uVar9 & 1) != 0) {
          *(undefined1 *)puVar3 = 0;
          puVar3 = (undefined8 *)(puVar2[2] + 1);
          puVar2[2] = puVar3;
          uVar7 = uVar9 - 1;
        }
        uVar5 = extraout_x1_00;
        if (uVar9 != 1) {
          do {
            *(undefined1 *)puVar3 = 0;
            lVar8 = puVar2[2];
            puVar2[2] = lVar8 + 1;
            *(undefined1 *)(lVar8 + 1) = 0;
            puVar3 = (undefined8 *)(puVar2[2] + 1);
            uVar7 = uVar7 - 2;
            puVar2[2] = puVar3;
          } while (uVar7 != 0);
        }
      }
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = uVar9;
    }
    *(undefined8 **)(param_2 + 0x218) = puVar2;
    FUN_71002206f0(param_2,uVar5,param_4,param_5,param_6,param_7,param_8,param_9);
    puVar2 = FUN_71001af850(0x78);
    auStack_60[0] = 0;
    puStack_50 = auStack_60;
    uStack_48 = 0x10;
    ppuStack_68 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&ppuStack_68,"CurlHttpConnection Thread",-1);
    FUN_71001b2360(puVar2,(long)&ppuStack_68,*(undefined4 *)(param_2 + 0xc));
    puVar2[0xd] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *puVar2 = &PTR_FUN_7104f59ee8;
    *(undefined8 **)(param_2 + 0x198) = puVar2;
    ppuStack_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_68);
    pvVar4 = *(void **)(param_2 + 0x198);
    *(code **)((long)pvVar4 + 0x58) = FUN_7100220ba0;
    *(undefined8 *)((long)pvVar4 + 0x60) = 0;
    *(long *)((long)pvVar4 + 0x68) = param_2;
    *(undefined8 *)((long)pvVar4 + 0x70) = 0;
    FUN_71001b27e0(pvVar4,0x8000);
    uVar6 = 0x10001;
  }
  ppuStack_68 = (undefined **)CONCAT44(ppuStack_68._4_4_,uVar6);
  FUN_71001b4200(param_1,(undefined4 *)&ppuStack_68);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

