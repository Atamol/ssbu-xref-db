// addr:      71036423c0
// offset:    0x36423c0
// name:      FUN_71036423c0
// mangled:   
// signature: undefined __cdecl FUN_71036423c0(char * param_1, long param_2)


void FUN_71036423c0(char *param_1,long param_2)

{
  ulong uVar1;
  byte local_48 [16];
  ulong local_38;
  
  builtin_strncpy(param_1,"\x123d_final_",0xb);
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  std::to_string(*(int *)(param_2 + 0xac));
  uVar1 = (ulong)local_48 | 1;
  if ((local_48[0] & 1) != 0) {
    uVar1 = local_38;
  }
  std::string::append(param_1,uVar1);
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    FUN_710392eb40(local_38);
  }
  std::to_string(*(int *)(param_2 + 0xa8));
  uVar1 = (ulong)local_48 | 1;
  if ((local_48[0] & 1) != 0) {
    uVar1 = local_38;
  }
  std::string::append(param_1,uVar1);
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    FUN_710392eb40(local_38);
  }
  std::to_string(*(int *)(param_2 + 0xa4));
  uVar1 = (ulong)local_48 | 1;
  if ((local_48[0] & 1) != 0) {
    uVar1 = local_38;
  }
  std::string::append(param_1,uVar1);
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    FUN_710392eb40(local_38);
  }
  std::to_string(*(int *)(param_2 + 0xa0));
  uVar1 = (ulong)local_48 | 1;
  if ((local_48[0] & 1) != 0) {
    uVar1 = local_38;
  }
  std::string::append(param_1,uVar1);
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    FUN_710392eb40(local_38);
  }
  std::to_string(*(int *)(param_2 + 0x9c));
  uVar1 = (ulong)local_48 | 1;
  if ((local_48[0] & 1) != 0) {
    uVar1 = local_38;
  }
  std::string::append(param_1,uVar1);
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    FUN_710392eb40(local_38);
  }
  std::to_string(*(int *)(param_2 + 0x98));
  uVar1 = (ulong)local_48 | 1;
  if ((local_48[0] & 1) != 0) {
    uVar1 = local_38;
  }
  std::string::append(param_1,uVar1);
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    FUN_710392eb40(local_38);
  }
  std::to_string(*(int *)(&DAT_71046fda30 + (long)*(int *)(param_2 + 0x94) * 4));
  uVar1 = (ulong)local_48 | 1;
  if ((local_48[0] & 1) != 0) {
    uVar1 = local_38;
  }
  std::string::append(param_1,uVar1);
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    FUN_710392eb40(local_38);
  }
  std::to_string(*(int *)(param_2 + 0x90));
  uVar1 = (ulong)local_48 | 1;
  if ((local_48[0] & 1) != 0) {
    uVar1 = local_38;
  }
  std::string::append(param_1,uVar1);
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    FUN_710392eb40(local_38);
  }
  std::string::append(param_1);
  return;
}

