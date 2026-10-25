// addr:      7101c5d270
// offset:    0x1c5d270
// name:      FUN_7101c5d270
// mangled:   
// signature: undefined __cdecl FUN_7101c5d270(long param_1, byte param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c5d270(long param_1,byte param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  long lVar2;
  char *pcVar3;
  
  if (7 < param_2) {
LAB_7101c5d330:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = *(ushort *)(param_1 + (ulong)param_2 * 2 + 0x160);
  if ((uVar1 & 0xff) == 0) {
    return;
  }
  if (0x3ff < uVar1) goto LAB_7101c5d330;
  if (*(int *)(param_3 + 0x1d8) == 1) {
    lVar2 = *(long *)(param_1 + (ulong)(uVar1 >> 8) * 0x10 + 0x28);
    pcVar3 = "ol_bln_disp_ok";
  }
  else {
    if (*(int *)(param_3 + 0x1d8) != 0) goto LAB_7101c5d310;
    lVar2 = *(long *)(param_1 + (ulong)(uVar1 >> 8) * 0x10 + 0x28);
    if (*(char *)(param_3 + 0x1e2) == '\0') {
      pcVar3 = "ol_bln_disp_txt";
    }
    else {
      pcVar3 = "ol_bln_disp_time";
    }
  }
  FUN_7103778300(0x3f800000,lVar2,(long)pcVar3);
LAB_7101c5d310:
  FUN_7101c5d340(param_1,(byte)(uVar1 >> 8),*(int *)(param_3 + 0x40),
                 (ulong)*(uint *)(param_3 + 0x44),(ulong)*(uint *)(param_3 + 0x1d8),param_6,param_7,
                 param_8);
  return;
}

