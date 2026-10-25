// addr:      7103900670
// offset:    0x3900670
// name:      FUN_7103900670
// mangled:   
// signature: undefined8 __cdecl FUN_7103900670(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7103900670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar4 + 0xc) < 2) {
    puVar5 = (undefined8 *)
             (*(long *)(lVar4 + 0x18) +
             ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar4 + 0xb) & 0x3f)) & 2) * 0x20);
    do {
      if ((*(int *)(puVar5 + 3) == 0x13) && (puVar6 = puVar5, puVar5[2] == 2)) break;
      piVar1 = (int *)((long)puVar5 + 0x1c);
      puVar5 = puVar5 + (long)*piVar1 * 4;
      puVar6 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    puVar6 = (undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
  }
  uVar2 = puVar6[1];
  *puVar3 = *puVar6;
  puVar3[1] = uVar2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f9510(param_1,(long *)&PTR_s_assert_7105293bb8,0,param_4,param_5,param_6,param_7,param_8)
  ;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = puVar3[-2];
  puVar3[1] = puVar3[-1];
  lVar4 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar4 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar4 + -0x10),"_G");
  FUN_71038f4b20(param_1,"Lua 5.3");
  FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"_VERSION");
  return 1;
}

