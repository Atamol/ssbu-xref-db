// addr:      71001becd0
// offset:    0x1becd0
// name:      FUN_71001becd0
// mangled:   
// signature: undefined8 __cdecl FUN_71001becd0(long param_1, char * param_2)


undefined8 FUN_71001becd0(long param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  char local_188 [16];
  int local_178 [13];
  char acStack_144 [256];
  char acStack_44 [28];
  addrinfo *local_28 [5];
  
  while( true ) {
    iVar1 = strcmp(param_2,"255.255.255.255");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      return 1;
    }
    iVar1 = strcmp(param_2,"localhost");
    if (iVar1 != 0) break;
    param_2 = "127.0.0.1";
  }
  FUN_71001b5db0(param_2,acStack_144,0x100);
  iVar1 = nn::socket::InetPton(2,acStack_144,local_178);
  if (iVar1 < 1) {
    local_178[0] = -1;
  }
  piVar2 = (int *)(param_1 + 0xc);
  *piVar2 = local_178[0];
  if (local_178[0] != -1) {
    return 1;
  }
  if (DAT_7104f55550 == '\0') {
    return 1;
  }
  local_28[0] = (addrinfo *)0x0;
  memset(local_178,0,0x30);
  local_178[1] = 2;
  iVar1 = nn::socket::GetAddrInfo(acStack_144,(char *)0x0,(addrinfo *)local_178,local_28);
  if ((iVar1 == 0) && (local_28[0] != (addrinfo *)0x0)) {
    *piVar2 = *(int *)(*(long *)(local_28[0] + 0x20) + 4);
    nn::socket::FreeAddrInfo(local_28[0]);
    local_188[0] = '\0';
    local_188[1] = '\0';
    local_188[2] = '\0';
    local_188[3] = '\0';
    local_188[4] = '\0';
    local_188[5] = '\0';
    local_188[6] = '\0';
    local_188[7] = '\0';
    local_188[8] = '\0';
    local_188[9] = '\0';
    local_188[10] = '\0';
    local_188[0xb] = '\0';
    local_188[0xc] = '\0';
    local_188[0xd] = '\0';
    local_188[0xe] = '\0';
    local_188[0xf] = '\0';
    nn::socket::InetNtop(2,piVar2,acStack_44,0x14);
    FUN_71001b5d80(acStack_44,local_188,0x10);
    return 1;
  }
  return 0;
}

