// addr:      710001f100
// offset:    0x1f100
// name:      FUN_710001f100
// mangled:   
// signature: int __cdecl FUN_710001f100(long * param_1, undefined1 * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


int FUN_710001f100(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *param_1;
  FUN_7100015020(lVar4,3);
  if ((*(byte *)(param_1[0x10b] + 0x84) >> 4 & 1) != 0) {
    *param_2 = 1;
    return 0;
  }
  *param_2 = 0;
  *(undefined1 *)((long)param_1 + 0x82a) = 0;
  if (*(long *)(lVar4 + 0x830) != 0) {
    FUN_71000272a0();
    param_1[0x110] = 0;
    lVar2 = FUN_7100007fd0((byte *)"User-Agent: %s\r\n");
    param_1[0x110] = lVar2;
    if (lVar2 == 0) {
      return 0x1b;
    }
  }
  *(undefined8 *)(lVar4 + 0xf0) = 0;
  *(undefined8 *)(lVar4 + 0x4f70) = 0;
  auVar5 = FUN_7100017740();
  *(undefined1 (*) [16])(param_1 + 0x47) = auVar5;
  if ((int)param_1[0x4b] == -1) {
    *(undefined1 *)((long)param_1 + 0x81d) = 0;
    iVar1 = FUN_71000036e0(param_1,(long *)param_1[0xe],param_3,param_4,param_5,param_6,param_7,
                           param_8);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    FUN_7100015020(lVar4,4);
    FUN_7100015020(lVar4,5);
    *(undefined1 *)((long)param_1 + 0x81d) = 1;
    *param_2 = 1;
    FUN_7100002c90(param_1,(int)param_1[0x4b],param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(char *)(*param_1 + 0x6c8) != '\0') {
      if (*(char *)((long)param_1 + 0x817) == '\0') {
        if (*(char *)((long)param_1 + 0x816) == '\0') {
          if (*(char *)((long)param_1 + 0x813) == '\0') {
            plVar3 = param_1 + 0x1c;
          }
          else {
            plVar3 = param_1 + 0x21;
          }
        }
        else {
          plVar3 = param_1 + 0x2d;
        }
      }
      else {
        plVar3 = param_1 + 0x25;
      }
      FUN_7100015de0(*param_1,(byte *)"Connected to %s (%s) port %ld (#%ld)\n",*plVar3,
                     param_1 + 0x12,param_1[0x32],param_1[0xd],param_7,param_8);
    }
  }
  auVar5 = FUN_7100017740();
  *(undefined1 (*) [16])(param_1 + 0x47) = auVar5;
  return 0;
}

