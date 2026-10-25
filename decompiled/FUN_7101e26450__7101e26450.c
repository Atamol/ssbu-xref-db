// addr:      7101e26450
// offset:    0x1e26450
// name:      FUN_7101e26450
// mangled:   
// signature: undefined __cdecl FUN_7101e26450(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e26450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint auStack_c0 [18];
  undefined **local_78;
  long *local_70 [8];
  
  if (*(char *)(param_1 + 0xbec) == '\0') {
    iVar1 = *(int *)(*(long *)(param_1 + 0x538) + 0x2a4);
    *(int *)(param_1 + 0xbf0) = iVar1;
    if ((ulong)(*(long *)(param_1 + 0x550) - *(long *)(param_1 + 0x548) >> 2) <= (ulong)(long)iVar1)
    {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar4 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar3 = FUN_71032a9470(lVar4,*(ushort *)(*(long *)(param_1 + 0x548) + (long)iVar1 * 4));
    FUN_71032a9540((uint *)&local_78,lVar4,uVar3);
    FUN_71003a4ca0(auStack_c0,"spi_%s",local_70,uVar3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_78,param_1 + 0xba0,(long ****)"set_txt_base",uVar3,param_4,param_5,param_6
                   ,param_7,param_8);
    plVar2 = local_70[0];
    lVar4 = *local_70[0];
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
    }
    FUN_710377a280((long)&local_78,(byte *)"mnu_spirits_select_ped_nam",1);
    local_78 = &PTR_FUN_710523d9a8;
    local_70[0] = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar2);
    }
  }
  return;
}

