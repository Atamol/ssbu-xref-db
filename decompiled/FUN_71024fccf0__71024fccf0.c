// addr:      71024fccf0
// offset:    0x24fccf0
// name:      FUN_71024fccf0
// mangled:   
// signature: undefined __cdecl FUN_71024fccf0(long param_1, uint param_2)


void FUN_71024fccf0(long param_1,uint param_2)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  
  if (param_2 == 0xffff) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(param_1 + (ulong)param_2 * 4 + 0x510);
  }
  if (*(uint *)(param_1 + 0x5c0) != uVar3) {
    *(uint *)(param_1 + 0x5c0) = uVar3;
    lVar4 = *(long *)(*(long *)(param_1 + 0x558) + 0x80);
    if ((uVar3 == 0xffffffff) || (2 < (int)uVar3)) {
      lVar4 = *(long *)(lVar4 + 0x38);
      pcVar2 = "mapitem_out";
    }
    else {
      if (uVar3 == 2) {
        lVar1 = *(long *)(lVar4 + 0x38);
        pcVar2 = "mapitem_food";
        *(long *)(lVar4 + 0x128) = lVar4 + 0x150;
      }
      else if (uVar3 == 1) {
        lVar1 = *(long *)(lVar4 + 0x38);
        *(long *)(lVar4 + 0x128) = lVar4 + 0x130;
        pcVar2 = "mapitem_bullet";
      }
      else {
        if (uVar3 != 0) goto LAB_71024fcdcc;
        lVar1 = *(long *)(lVar4 + 0x38);
        *(long *)(lVar4 + 0x128) = lVar4 + 0x140;
        pcVar2 = "mapitem_namazu";
      }
      FUN_7103778300(0x3f800000,lVar1,(long)pcVar2);
      lVar4 = *(long *)(lVar4 + 0x38);
      pcVar2 = "mapitem_in";
    }
    FUN_7103778300(0x3f800000,lVar4,(long)pcVar2);
  }
LAB_71024fcdcc:
  if (((*(int *)(param_1 + 0x5c0) != -1) && (*(int *)(param_1 + 0x5c0) < 3)) &&
     (lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x558) + 0x80) + 0x128), lVar4 != 0)) {
    FUN_710377a280(lVar4,(byte *)(param_1 + (ulong)uVar3 * 0x48 + 0x440),1);
    return;
  }
  return;
}

