// addr:      710013c880
// offset:    0x13c880
// name:      FUN_710013c880
// mangled:   
// signature: undefined __cdecl FUN_710013c880(int * param_1)


void FUN_710013c880(int *param_1)

{
  undefined **local_40;
  char *local_38;
  undefined4 local_28 [2];
  
  FUN_710013e3f0();
  if (DAT_71052adb31 == '\x01') {
    local_40 = (undefined **)CONCAT44(local_40._4_4_,0x10c02);
  }
  else {
    local_40 = &PTR_FUN_7104f4a288;
    local_38 = "pia session heap";
    FUN_71000b1a50(0x15,0,(long)&local_40);
    DAT_71052adb31 = '\x01';
    FUN_71000bccd0((int *)&local_40,0x15);
    local_40 = (undefined **)((ulong)local_40 & 0xffffffff00000000);
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_40 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&local_40 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,(int *)&local_40);
  return;
}

