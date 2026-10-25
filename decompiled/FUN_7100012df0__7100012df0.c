// addr:      7100012df0
// offset:    0x12df0
// name:      FUN_7100012df0
// mangled:   
// signature: int __cdecl FUN_7100012df0(long * param_1, long param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_7100012df0(long *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_3;
  if (*(int *)(param_2 + 0xd4) == 0) {
    *(undefined8 *)(param_2 + 0x138) = 0;
    *(undefined8 *)(param_2 + 0x140) = 0;
    uVar2 = 0x70;
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(undefined8 *)(param_2 + 0x130) = 0;
    *(undefined8 *)(param_2 + 0x118) = 0;
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(undefined8 *)(param_2 + 0xf8) = 0;
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(undefined8 *)(param_2 + 0xe8) = 0;
    *(undefined8 *)(param_2 + 0xf0) = 0;
    *(undefined8 *)(param_2 + 0xd8) = 0;
    *(undefined8 *)(param_2 + 0xe0) = 0;
    *(code **)(param_2 + 0x118) = FUN_7100012ed0;
    *(code **)(param_2 + 0x120) = FUN_7100012ee0;
    iVar1 = FUN_7100028410(param_2 + 0xd8,"1.2.11.f-NINTENDO-SDK-v1",0x70);
    if (iVar1 != 0) {
      if (*(long *)(param_2 + 0x108) == 0) {
        FUN_7100016040(*param_1,(byte *)
                                "Error while processing content unencoding: Unknown failure within decompression software."
                       ,0,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        FUN_7100016040(*param_1,(byte *)"Error while processing content unencoding: %s",
                       *(long *)(param_2 + 0x108),param_4,param_5,param_6,param_7,param_8);
      }
      return 0x3d;
    }
    *(undefined4 *)(param_2 + 0xd4) = 1;
  }
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
  *(int *)(param_2 + 0xe0) = (int)param_3;
  iVar1 = FUN_7100012ef0(param_1,param_2,uVar2,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}

