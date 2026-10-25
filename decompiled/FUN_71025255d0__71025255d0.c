// addr:      71025255d0
// offset:    0x25255d0
// name:      FUN_71025255d0
// mangled:   
// signature: bool __cdecl FUN_71025255d0(ushort * param_1, ushort * param_2)


bool FUN_71025255d0(ushort *param_1,ushort *param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ushort uVar5;
  
  if ((char)param_1[1] == '\0') {
    if ((char)param_2[1] != '\0') {
      return false;
    }
  }
  else if ((char)param_2[1] == '\0') {
    return true;
  }
  uVar5 = *param_1;
  uVar2 = *param_2;
  lVar4 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  uVar3 = 0xffff;
  if ((uVar5 != 0xffff) && ((short)uVar5 < 2000)) {
    lVar1 = lVar4 + (long)(int)(short)uVar5 * 2;
    if ((uint)*(ushort *)(lVar1 + 0x60) <
        (uint)((int)((ulong)(*(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20)) >> 6) * -0x33333333)
       ) {
      if (1999 < uVar5) goto LAB_71025256d8;
      uVar3 = *(ushort *)(lVar1 + 0x1fa0);
    }
    else {
      uVar3 = 0xffff;
    }
  }
  uVar5 = 0xffff;
  if ((uVar2 != 0xffff) && ((short)uVar2 < 2000)) {
    lVar1 = lVar4 + (long)(short)uVar2 * 2;
    if ((uint)*(ushort *)(lVar1 + 0x60) <
        (uint)((int)((ulong)(*(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20)) >> 6) * -0x33333333)
       ) {
      if (1999 < uVar2) {
LAB_71025256d8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar5 = *(ushort *)(lVar1 + 0x1fa0);
    }
    else {
      uVar5 = 0xffff;
    }
  }
  return uVar3 < uVar5;
}

