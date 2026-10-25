// addr:      7101e53af0
// offset:    0x1e53af0
// name:      FUN_7101e53af0
// mangled:   
// signature: undefined __cdecl FUN_7101e53af0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, long param_6, ulong param_7, ulong param_8)


void FUN_7101e53af0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,long param_6,ulong param_7,ulong param_8)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  FUN_7103778300(0xbf800000,*(long *)(param_1 + 0x20),0x7104412f1d);
  FUN_7101e54b40(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101e54cc0(param_1,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101e55c60(param_1,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(uint *)(param_1 + 0x16c) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x16c) * 4 + 0x120) = 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

