// addr:      7100047d00
// offset:    0x47d00
// name:      FUN_7100047d00
// mangled:   
// signature: undefined __cdecl FUN_7100047d00(undefined8 param_1, undefined8 param_2, undefined8 param_3)


void FUN_7100047d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = nn::os::GetSystemTick();
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Ui2d-8_2_1-Release");
  FUN_7100048d60(param_1,param_2,param_3);
  DAT_71052ab508 = &PTR_PTR_7104f3f208;
  DAT_71052ab510 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  DAT_71052ab514 = (DAT_71052ab510 ^ DAT_71052ab510 >> 0x1e) * 0x6c078965 + 2;
  DAT_71052ab518 = (DAT_71052ab514 ^ DAT_71052ab514 >> 0x1e) * 0x6c078965 + 3;
  DAT_71052ab51c = (DAT_71052ab518 ^ DAT_71052ab518 >> 0x1e) * 0x6c078965 + 4;
  return;
}

