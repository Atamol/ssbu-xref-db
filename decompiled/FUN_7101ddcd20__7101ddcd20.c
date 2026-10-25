// addr:      7101ddcd20
// offset:    0x1ddcd20
// name:      FUN_7101ddcd20
// mangled:   
// signature: undefined __cdecl FUN_7101ddcd20(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ddcd20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  uint auStack_c0 [18];
  undefined **local_78;
  long *local_70 [8];
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (-1 < iVar1) {
    uVar3 = *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50);
    iVar4 = (int)(uVar3 >> 2);
    if ((iVar1 < iVar4) && (iVar4 != 0)) {
      if ((ulong)((long)uVar3 >> 2) <= (ulong)(long)iVar1) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar5 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar3 = FUN_71032a9470(lVar5,*(ushort *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 4));
      FUN_71032a9540((uint *)&local_78,lVar5,uVar3);
      FUN_71003a4ca0(auStack_c0,"spi_%s",local_70,uVar3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_78,param_1 + 0x18,(long ****)"set_txt_help",uVar3,param_4,param_5,
                     param_6,param_7,param_8);
      plVar2 = local_70[0];
      lVar5 = *local_70[0];
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
      }
      local_78 = &PTR_FUN_710523d9a8;
      local_70[0] = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar2);
      }
      FUN_7103776910(&local_78,param_1 + 0x18,(long ****)"set_txt_help",uVar3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a280((long)&local_78,(byte *)"mnu_spirits_select_ped_nam",1);
      plVar2 = local_70[0];
      goto joined_r0x007101ddce78;
    }
  }
  FUN_7103776910(&local_78,param_1 + 0x18,(long ****)"set_txt_help",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  lVar5 = *local_70[0];
  plVar2 = local_70[0];
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
joined_r0x007101ddce78:
  if (plVar2 != (long *)0x0) {
    local_70[0] = (long *)0x0;
    local_78 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)plVar2);
  }
  return;
}

