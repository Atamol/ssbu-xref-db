// addr:      71038f7350
// offset:    0x38f7350
// name:      FUN_71038f7350
// mangled:   
// signature: ulong __cdecl FUN_71038f7350(long param_1, uint param_2, char * param_3, long * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_71038f7350(long param_1,uint param_2,char *param_3,long *param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *__s1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar3 = param_4;
  if (param_3 != (char *)0x0) {
    if ((int)param_2 < 1) {
      if ((int)param_2 < -0xf4627) {
        if (param_2 == 0xfff0b9d8) {
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
        }
        else {
          plVar6 = (long *)**(long **)(param_1 + 0x20);
          if ((int)plVar6[1] == 0x16) goto LAB_71038f7420;
          lVar5 = *plVar6;
          if ((int)(uint)*(byte *)(lVar5 + 10) < (int)(-0xf4628 - param_2)) goto LAB_71038f7420;
          puVar4 = (undefined8 *)(lVar5 + (long)(int)(-0xf4628 - param_2) * 0x10 + 0x10);
        }
      }
      else {
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      }
    }
    else {
      puVar4 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)(int)param_2 * 0x10);
      if (*(undefined8 **)(param_1 + 0x10) <= puVar4) goto LAB_71038f7420;
    }
    if ((puVar4 == &DAT_7104862960) || ((*(byte *)(puVar4 + 1) & 0xf) == 0)) goto LAB_71038f7420;
  }
  param_3 = (char *)FUN_71038f4730(param_1,param_2,(ulong *)0x0);
  if (param_3 == (char *)0x0) {
    FUN_71038f74d0(param_1,param_2,"string",plVar3,param_5,param_6,param_7,param_8);
  }
LAB_71038f7420:
  __s1 = (char *)*param_4;
  if (__s1 != (char *)0x0) {
    uVar7 = 0;
    do {
      iVar1 = strcmp(__s1,param_3);
      if (iVar1 == 0) {
        return uVar7 & 0xffffffff;
      }
      __s1 = (char *)param_4[uVar7 + 1];
      uVar7 = uVar7 + 1;
    } while (__s1 != (char *)0x0);
  }
  uVar2 = FUN_71038f4ca0(param_1,"invalid option \'%s\'");
  uVar7 = FUN_71038f6d60(param_1,param_2,uVar2,plVar3,param_5,param_6,param_7,param_8);
  return uVar7;
}

