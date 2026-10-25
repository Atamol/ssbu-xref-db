// addr:      7100259a40
// offset:    0x259a40
// name:      FUN_7100259a40
// mangled:   
// signature: undefined FUN_7100259a40(void)


void FUN_7100259a40(long *param_1,long param_2,long param_3,undefined1 *param_4)

{
  long ****pppplVar1;
  uint uVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  undefined8 auStack_b8 [3];
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long lStack_90;
  
  uVar2 = FUN_710022b510(param_2);
  switch(uVar2 & 0xffff) {
  case 1:
    ppplStack_a0 = (long ***)&ppplStack_a0;
    lStack_90 = 0;
    ppplStack_98 = ppplStack_a0;
    FUN_710025a580(param_2,(long *)&ppplStack_a0);
    if (*(char *)(param_2 + 8) == '\0') {
      (**(code **)(*param_1 + 0xc0))(param_1,&ppplStack_a0);
      FUN_710022b400(param_3,0x8001);
    }
    if (lStack_90 != 0) {
      ppplVar3 = (long ***)*ppplStack_98;
      ppplVar3[1] = ppplStack_a0[1];
      *ppplStack_a0[1] = (long *)ppplVar3;
      lStack_90 = 0;
      pppplVar1 = (long ****)ppplStack_98;
      while (pppplVar1 != &ppplStack_a0) {
        pppplVar4 = (long ****)pppplVar1[1];
        (*(code *)*pppplVar1[2])();
        FUN_71001b1870((long)pppplVar1);
        pppplVar1 = pppplVar4;
      }
    }
    break;
  case 2:
    FUN_71001f1c90(&ppplStack_a0);
    FUN_7100228bf0(param_2,(long)&ppplStack_a0);
    if (*(char *)(param_2 + 8) == '\0') {
      (**(code **)(*param_1 + 200))(param_1,&ppplStack_a0);
      FUN_710022b400(param_3,0x8002);
    }
    FUN_71001f2080(&ppplStack_a0);
    break;
  case 3:
    FUN_7100259c20(param_2,param_3,param_1);
    break;
  case 4:
    FUN_7100259d10(param_2,param_3,param_1);
    break;
  case 5:
    FUN_7100259e10(param_2,param_3,param_1);
    break;
  case 6:
    FUN_7100259f50(param_2,param_3,param_1);
    break;
  case 7:
    FUN_710025a060(param_2,param_3,param_1);
    break;
  default:
    ppplStack_a0 = (long ***)CONCAT44(ppplStack_a0._4_4_,0x80010002);
    FUN_71001b4200((undefined4 *)auStack_b8,(undefined4 *)&ppplStack_a0);
    FUN_710022b560((long)param_1,auStack_b8);
  }
  *param_4 = 1;
  return;
}

