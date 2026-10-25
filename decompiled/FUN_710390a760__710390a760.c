// addr:      710390a760
// offset:    0x390a760
// name:      FUN_710390a760
// mangled:   
// signature: noreturn undefined __cdecl FUN_710390a760(long param_1, int param_2)


void FUN_710390a760(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  FUN_710390eb20(param_1,param_2);
  uVar1 = FUN_7103908660(uVar1,"%s expected");
                    /* WARNING: Subroutine does not return */
  FUN_710390eb80(param_1,uVar1);
}

