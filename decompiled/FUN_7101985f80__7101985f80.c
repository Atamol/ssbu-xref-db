// addr:      7101985f80
// offset:    0x1985f80
// name:      FUN_7101985f80
// mangled:   
// signature: uint __cdecl FUN_7101985f80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


uint FUN_7101985f80(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  FUN_7103771a80((long *)(param_1 + 0x1d8),0,0);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),0x710435ad98);
  uVar1 = FUN_71022e6a40((long *)*DAT_7105328170,2,pcVar2,param_4,param_5,param_6,param_7,param_8);
  if (*(uint *)(param_1 + 0x43c) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x43c) * 4 + 0x3f0) = 6;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

