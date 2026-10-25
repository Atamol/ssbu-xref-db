// addr:      710055ab10
// offset:    0x55ab10
// name:      FUN_710055ab10
// mangled:   
// signature: undefined __cdecl FUN_710055ab10(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710055ab10(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  long ****pppplVar4;
  undefined8 *puVar5;
  ShopServiceAccessor *pSVar6;
  AsyncResponse *pAVar7;
  ShopServiceAccessor *this;
  AsyncResponse *this_00;
  undefined8 local_80;
  undefined8 uStack_78;
  long ***local_70;
  long ****local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 uStack_4f;
  undefined6 uStack_4e;
  ulong local_48;
  ulong local_40 [2];
  
  pSVar6 = *(ShopServiceAccessor **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (pSVar6 != (ShopServiceAccessor *)0x0) {
    nn::ec::ShopServiceAccessor::~ShopServiceAccessor(pSVar6);
    FUN_710392eb40((ulong)pSVar6);
  }
  pAVar7 = *(AsyncResponse **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (pAVar7 != (AsyncResponse *)0x0) {
    nn::ec::ShopServiceAccessor::AsyncResponse::~AsyncResponse(pAVar7);
    FUN_710392eb40((ulong)pAVar7);
  }
  pSVar6 = (ShopServiceAccessor *)
           FUN_710392e290(0x10,0x48,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pSVar6 == (ShopServiceAccessor *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_58._0_4_ = 0x48;
      local_58._4_4_ = 0;
      param_3 = (long ****)&local_58;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (pSVar6 = (ShopServiceAccessor *)
                   FUN_710392e290(0x10,0x48,param_3,param_4,param_5,param_6,param_7,param_8),
         pSVar6 != (ShopServiceAccessor *)0x0)) goto LAB_710055abbc;
    }
    pSVar6 = (ShopServiceAccessor *)0x0;
  }
LAB_710055abbc:
  nn::ec::ShopServiceAccessor::ShopServiceAccessor(pSVar6);
  this = *(ShopServiceAccessor **)(param_1 + 0x108);
  *(ShopServiceAccessor **)(param_1 + 0x108) = pSVar6;
  if (this != (ShopServiceAccessor *)0x0) {
    nn::ec::ShopServiceAccessor::~ShopServiceAccessor(this);
    FUN_710392eb40((ulong)this);
  }
  pAVar7 = (AsyncResponse *)
           FUN_710392e290(0x10,0x50,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pAVar7 == (AsyncResponse *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_58._0_4_ = 0x50;
      local_58._4_4_ = 0;
      pppplVar4 = (long ****)&local_58;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar3 & 1) != 0) &&
         (pAVar7 = (AsyncResponse *)
                   FUN_710392e290(0x10,0x50,pppplVar4,param_4,param_5,param_6,param_7,param_8),
         pAVar7 != (AsyncResponse *)0x0)) goto LAB_710055ac3c;
    }
    pAVar7 = (AsyncResponse *)0x0;
  }
LAB_710055ac3c:
  nn::ec::ShopServiceAccessor::AsyncResponse::AsyncResponse(pAVar7);
  this_00 = *(AsyncResponse **)(param_1 + 0x100);
  *(AsyncResponse **)(param_1 + 0x100) = pAVar7;
  if (this_00 != (AsyncResponse *)0x0) {
    nn::ec::ShopServiceAccessor::AsyncResponse::~AsyncResponse(this_00);
    FUN_710392eb40((ulong)this_00);
  }
  local_58._0_4_ = 1;
  nn::ec::ShopServiceAccessor::Initialize(*(ShopService **)(param_1 + 0x108));
  uStack_4e = 0;
  local_48 = 0;
  local_58._0_4_ = 0x666f2610;
  local_58._4_4_ = 0x74657366;
  local_50 = 0x3d;
  uStack_4f = 0;
  std::to_string(*(uint *)(param_1 + 0x11c));
  pcVar1 = (char *)((ulong)&local_70 | 1);
  if (((ulong)local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  std::string::append((char *)&local_58,(ulong)pcVar1);
  if ((((ulong)local_70 & 1) != 0) && (local_60 != (char *)0x0)) {
    FUN_710392eb40((ulong)local_60);
  }
  std::string::append((char *)&local_58);
  std::to_string(*(uint *)(param_1 + 0x114));
  pppplVar4 = (long ****)((ulong)local_70 >> 1 & 0x7f);
  pcVar1 = (char *)((ulong)&local_70 | 1);
  if (((ulong)local_70 & 1) != 0) {
    pppplVar4 = local_68;
    pcVar1 = local_60;
  }
  std::string::append((char *)&local_58,(ulong)pcVar1);
  if ((((ulong)local_70 & 1) != 0) && (local_60 != (char *)0x0)) {
    FUN_710392eb40((ulong)local_60);
  }
  local_60 = (char *)FUN_710392e290(0x10,0x50,pppplVar4,param_4,param_5,param_6,param_7,param_8);
  if (local_60 == (char *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_40[0] = local_40[0] & 0xffffffff00000000;
      local_70 = (long ***)&DAT_00000050;
      pppplVar4 = &local_70;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_40);
      if (((uVar3 & 1) != 0) &&
         (local_60 = (char *)FUN_710392e290(0x10,0x50,pppplVar4,param_4,param_5,param_6,param_7,
                                            param_8), local_60 != (char *)0x0)) goto LAB_710055adb8;
    }
    local_60 = (char *)0x0;
  }
LAB_710055adb8:
  local_70 = (long ***)&DAT_00000051;
  local_68 = (long ****)0x43;
  builtin_strncpy(local_60,"/v1/applications/{applicationId}/aocs/items?country={country}&lang=",
                  0x44);
  std::string::append((char *)&local_70);
  uVar3 = (ulong)&local_58 | 1;
  if (((uint)local_58 & 1) != 0) {
    uVar3 = local_48;
  }
  std::string::append((char *)&local_70,uVar3);
  puVar5 = (undefined8 *)*DAT_710593b580;
  iVar2 = *(int *)(puVar5 + 0xe60);
  if (iVar2 != -1) {
    if ((ulong)puVar5[0xe58] <= (ulong)(long)iVar2) goto LAB_710055aefc;
    puVar5 = puVar5 + (long)iVar2 * 0x198 + 0x198;
  }
  local_80 = *puVar5;
  uStack_78 = puVar5[1];
  pcVar1 = (char *)((ulong)&local_70 | 1);
  if (((ulong)local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  local_40[0] = 0;
  local_40[1] = 0;
  nn::ec::ShopServiceAccessor::Request
            (*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x100),&local_80,0,pcVar1,
             local_40,_DefaultTimeout);
  if (*(uint *)(param_1 + 0xe4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 4;
    if ((((ulong)local_70 & 1) != 0) && (local_60 != (char *)0x0)) {
      FUN_710392eb40((ulong)local_60);
    }
    if ((((uint)local_58 & 1) != 0) && (local_48 != 0)) {
      FUN_710392eb40(local_48);
    }
    return;
  }
LAB_710055aefc:
                    /* WARNING: Subroutine does not return */
  abort();
}

