// addr:      710392dca0
// offset:    0x392dca0
// name:      FUN_710392dca0
// mangled:   
// signature: undefined1 __cdecl FUN_710392dca0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined1
FUN_710392dca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_7105294560 != 2) {
    iVar1 = FUN_71039296d0();
    if (iVar1 < 0) {
      DAT_7105294560 = 2;
      uVar2 = DAT_7106d4b58c;
      if (DAT_7106d4b58c == 0) {
        uVar2 = FUN_710392e060();
      }
      FUN_7103957550((byte *)
                     "<jemalloc>: perCPU arena getcpu() not available. Setting narenas to %u.\n",
                     (ulong)uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (DAT_7106d4b579 == '\x01') {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (0xffe < DAT_7106d434a0) {
        FUN_7103957550((byte *)"<jemalloc>: narenas w/ percpuarena beyond limit (%d)\n",
                       (ulong)DAT_7106d434a0,param_3,param_4,param_5,param_6,param_7,param_8);
        if (DAT_7106d4b579 != '\x01') {
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar1 = FUN_710392e010(DAT_7105294560);
      if (((iVar1 == 4) && ((DAT_7106d434a0 & 1) != 0)) &&
         (FUN_7103957550((byte *)
                         "<jemalloc>: invalid configuration -- per physical CPU arena with odd number (%u) of CPUs (no hyper threading?).\n"
                         ,(ulong)DAT_7106d434a0,param_3,param_4,param_5,param_6,param_7,param_8),
         DAT_7106d4b579 == '\x01')) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar1 = FUN_710392e010(DAT_7105294560);
      uVar2 = FUN_71039293d0(iVar1);
      if (DAT_7106d4b58c < uVar2) {
        DAT_7106d4b58c = uVar2;
      }
    }
  }
  if (DAT_7106d4b58c == 0) {
    DAT_7106d4b58c = FUN_710392e060();
  }
  DAT_7106d434a4 = DAT_7106d4b58c;
  if (0xffe < DAT_7106d4b58c) {
    DAT_7106d434a4 = 0xffe;
    FUN_7103957550((byte *)"<jemalloc>: Reducing narenas to limit (%d)\n",0xffe,param_3,param_4,
                   param_5,param_6,param_7,param_8);
  }
  FUN_710392e0b0(DAT_7106d434a4);
  return 0;
}

