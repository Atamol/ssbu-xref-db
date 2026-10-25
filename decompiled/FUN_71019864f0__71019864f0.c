// addr:      71019864f0
// offset:    0x19864f0
// name:      FUN_71019864f0
// mangled:   
// signature: uint __cdecl FUN_71019864f0(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


uint FUN_71019864f0(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),0x71042d5abb);
  uVar1 = FUN_71022e6a40((long *)*DAT_7105328170,1,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(uint *)(param_1 + 0x43c) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x43c) * 4 + 0x3f0) = 1;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

