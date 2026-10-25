// addr:      71014d4210
// offset:    0x14d4210
// name:      FUN_71014d4210
// mangled:   
// signature: undefined __cdecl FUN_71014d4210(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71014d4210(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  Fiber *this;
  long ****pppplVar2;
  code *pcVar3;
  Fiber *this_00;
  long lVar4;
  long ***local_60;
  long lStack_58;
  long *local_40;
  undefined4 local_24;
  
  pppplVar2 = &local_60;
  lVar4 = *DAT_71052c3760;
  this = (Fiber *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (this == (Fiber *)0x0) {
    local_24 = 0;
    local_60 = (long ***)&DAT_00000008;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
    this = (Fiber *)FUN_710392e290(0x10,8,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  }
  *(undefined8 *)this = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x1df98);
  this_00 = (Fiber *)*puVar1;
  *puVar1 = this;
  if (this_00 != (Fiber *)0x0) {
    phx::Fiber::~Fiber(this_00);
    FUN_710392eb40((ulong)this_00);
    this = (Fiber *)*puVar1;
  }
  local_60 = (long ***)&PTR_FUN_710506ca00;
  lStack_58 = lVar4;
  local_40 = (long *)&local_60;
  phx::Fiber::setup(this,(long *)&local_60,(Fiber **)"InGameRetryFiberedProcess",(Fiber *)0x10000,
                    param_5,param_6,param_7,param_8);
  if (&local_60 == (long ****)local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) {
      return;
    }
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
  return;
}

