// addr:      71027271e0
// offset:    0x27271e0
// name:      FUN_71027271e0
// mangled:   
// signature: undefined __cdecl FUN_71027271e0(undefined8 * param_1, long * param_2, long * * * * param_3, uint param_4, undefined4 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71027271e0(undefined8 *param_1,long *param_2,long ****param_3,uint param_4,
                   undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char *pcVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte ****ppppbVar8;
  long *plVar9;
  
  *(undefined4 *)(param_1 + 2) = param_5;
  *param_1 = &PTR_FUN_71050d6138;
  param_1[1] = param_2;
  ppppbVar8 = (byte ****)(ulong)param_4;
  pcVar2 = strstr((char *)(param_3 + 9),"NoItemInEasyMode");
  *(bool *)((long)param_1 + 0x14) = pcVar2 != (char *)0x0;
  pcVar2 = strstr((char *)(param_3 + 9),"NoMove");
  piVar1 = (int *)(param_1 + 4);
  pppplVar3 = (long ****)0x1;
  *(bool *)((long)param_1 + 0x15) = pcVar2 != (char *)0x0;
  FUN_7102727640(piVar1,param_2,(long)param_3,param_4,1);
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x10a) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  lVar4 = param_1[7];
  *(undefined1 *)(lVar4 + 0x128) = 0;
  *(undefined1 *)(lVar4 + 0x130) = *(undefined1 *)(lVar4 + 299);
  *(undefined4 *)(lVar4 + 299) = 0;
  uVar6 = *(undefined8 *)(lVar4 + 0x100);
  uVar7 = *(undefined8 *)(lVar4 + 0x110);
  *(undefined8 *)(lVar4 + 0x100) = *(undefined8 *)(lVar4 + 0x88);
  *(undefined8 *)(lVar4 + 0x108) = *(undefined8 *)(lVar4 + 0x90);
  *(undefined8 *)(lVar4 + 0x110) = *(undefined8 *)(lVar4 + 0x98);
  *(undefined8 *)(lVar4 + 0x90) = uVar6;
  *(undefined8 *)(lVar4 + 0x98) = uVar7;
  *(undefined8 *)(lVar4 + 0x88) = uVar6;
  *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0xd0);
  *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(lVar4 + 0xb8);
  *(undefined1 *)(lVar4 + 0x12f) = 0;
  *(undefined8 *)(lVar4 + 0xf0) = *(undefined8 *)(lVar4 + 0xe8);
  uVar6 = extraout_x1;
  if (*(long *)(lVar4 + 8) != 0) {
    *(undefined8 *)(*(long *)(lVar4 + 8) + 0xd8) = 0;
    lVar4 = *(long *)(lVar4 + 8);
    if (*(char *)(lVar4 + 0xe0) != '\0') {
      plVar9 = *(long **)(lVar4 + 0x80);
      *(undefined2 *)(lVar4 + 0xe0) = 0;
      *(undefined2 *)(lVar4 + 0xe7) = 0;
      for (; (long *)(lVar4 + 0x80) != plVar9; plVar9 = (long *)*plVar9) {
        *(undefined1 *)(plVar9 + 0x20) = 0;
        if (*(uint *)((long)plVar9 + 0xfc) != 0) {
          plVar5 = (long *)plVar9[0x1e];
          *(undefined1 *)(*plVar5 + (ulong)*(uint *)((long)plVar9 + 0xfc) * 0x18 + 0x10) = 0;
          param_3 = (long ****)0x0;
          (**(code **)(*(long *)plVar5[3] + 0x18))();
        }
        *(undefined4 *)(plVar9 + 0x10) = 0;
        plVar9[0xe] = 0;
        plVar9[0xf] = 0;
        plVar9[0xc] = 0;
        plVar9[0xd] = 0;
      }
      for (plVar9 = *(long **)(lVar4 + 0x68); (long *)(lVar4 + 0x68) != plVar9;
          plVar9 = (long *)*plVar9) {
        *(undefined1 *)(plVar9 + 10) = 0;
      }
      FUN_7100525010(DAT_71052b9298,lVar4);
      uVar6 = extraout_x1_00;
    }
  }
  *piVar1 = 1;
  FUN_71027282b0(piVar1,uVar6,param_3,ppppbVar8,pppplVar3,param_6,param_7,param_8);
  return;
}

