// addr:      71001513f0
// offset:    0x1513f0
// name:      FUN_71001513f0
// mangled:   
// signature: undefined __cdecl FUN_71001513f0(int * param_1)


void FUN_71001513f0(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined **local_38;
  char *local_30;
  undefined4 local_28 [2];
  
  FUN_71001531b0();
  bVar1 = FUN_71000b1480();
  if ((bVar1 & 1) == 0) {
    uVar2 = 0x10c08;
  }
  else {
    if (DAT_71052adb48 != '\x01') {
      local_38 = &PTR_FUN_7104f4a288;
      local_30 = "pia transport heap";
      FUN_71000b1a50(0xe,0,(long)&local_38);
      DAT_71052adb48 = '\x01';
      FUN_71000bccd0((int *)&local_38,0xe);
      local_38 = (undefined **)((ulong)local_38 & 0xffffffff00000000);
      goto LAB_7100151494;
    }
    uVar2 = 0x10c02;
  }
  local_38 = (undefined **)CONCAT44(local_38._4_4_,uVar2);
LAB_7100151494:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,(int *)&local_38);
  return;
}

