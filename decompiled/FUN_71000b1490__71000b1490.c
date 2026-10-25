// addr:      71000b1490
// offset:    0xb1490
// name:      FUN_71000b1490
// mangled:   
// signature: undefined __cdecl FUN_71000b1490(int * param_1, ulong * param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000b1490(int *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined **local_58;
  char *local_50;
  undefined4 local_48 [2];
  
  FUN_71000bccc0();
  FUN_71000b1940();
  uVar3 = DAT_71052ac5ea;
  uVar2 = _DAT_71052ac5e8;
  uVar1 = DAT_71052ac5e0;
  if (((*param_2 == 0) || ((int)param_2[1] == 0)) || ((*param_2 & 7) != 0)) {
    uVar4 = 0x10c07;
  }
  else {
    if (DAT_71052ab9a0 != '\x01') {
      if ((DAT_71052ab9a1 & 1) == 0) {
        FUN_71000b7200((undefined2 *)&DAT_71052ac5a8);
        FUN_71000b8e10((undefined2 *)&DAT_71052ac928);
        DAT_71052ab9a1 = 1;
      }
      else {
        FUN_71000b7200((undefined2 *)&DAT_71052ac5a8);
        FUN_71000b8e10((undefined2 *)&DAT_71052ac928);
        DAT_71052ac5e0 = uVar1;
        _DAT_71052ac5e8 = uVar2;
        DAT_71052ac5ea = uVar3;
      }
      FUN_71000b1960(*param_2,(ulong)(uint)param_2[1]);
      DAT_71052ac5cc = (undefined4)param_2[1];
      local_58 = &PTR_FUN_7104f4a288;
      local_50 = "pia common heap";
      FUN_71000b1a50(2,0,(long)&local_58);
      FUN_71000b65e0((undefined4 *)&DAT_71052ab9b0);
      DAT_71052ab9a8 = &DAT_71052ab9b0;
      DAT_71052ac578 = &DAT_71052ab9b0;
      FUN_71001309c0(&PTR_PTR_7104f4a228);
      DAT_71052ab9a0 = '\x01';
      FUN_71000bccd0((int *)&local_58,2);
      local_58 = (undefined **)((ulong)local_58 & 0xffffffff00000000);
      goto LAB_71000b14e4;
    }
    uVar4 = 0x10c02;
  }
  local_58 = (undefined **)CONCAT44(local_58._4_4_,uVar4);
LAB_71000b14e4:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_58 | 4));
  local_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_48);
  FUN_71000bce50(param_1,(int *)&local_58);
  return;
}

