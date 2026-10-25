// addr:      71038f7870
// offset:    0x38f7870
// name:      FUN_71038f7870
// mangled:   
// signature: long __cdecl FUN_71038f7870(undefined8 * param_1, ulong param_2, undefined * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


long FUN_71038f7870(undefined8 *param_1,ulong param_2,undefined *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  void *__dest;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar5 = param_1[2];
  if (param_1[1] - uVar5 < param_2) {
    uVar6 = param_1[1] * 2;
    lVar7 = param_1[3];
    uVar1 = uVar5 + param_2;
    if (param_2 <= uVar6 - uVar5) {
      uVar1 = uVar6;
    }
    if (uVar1 < uVar5 || uVar1 - uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_71038f6c50(lVar7,"buffer too large",param_3,param_4,param_5,param_6,param_7,param_8);
    }
    if ((undefined8 *)*param_1 == param_1 + 4) {
      puVar2 = FUN_71038f6930(lVar7,0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar3 = FUN_71038f7260(lVar7,"LUABOX");
      if ((int)uVar3 != 0) {
        puVar2 = *(undefined8 **)(lVar7 + 0x10);
        *puVar2 = FUN_71038f7a70;
        *(undefined4 *)(puVar2 + 1) = 0x16;
        lVar4 = *(long *)(lVar7 + 0x10);
        param_3 = &DAT_710436afcd;
        *(long *)(lVar7 + 0x10) = lVar4 + 0x10;
        FUN_71038f5390(lVar7,(long *)(lVar4 + -0x10),"__gc");
      }
      FUN_71038f5c00(lVar7,-2);
      __dest = (void *)FUN_71038f79a0(lVar7,uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
      memcpy(__dest,(void *)*param_1,param_1[2]);
    }
    else {
      __dest = (void *)FUN_71038f79a0(lVar7,uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    uVar5 = param_1[2];
    *param_1 = __dest;
    param_1[1] = uVar1;
  }
  else {
    __dest = (void *)*param_1;
  }
  return (long)__dest + uVar5;
}

