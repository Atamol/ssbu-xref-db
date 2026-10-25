// addr:      71038760b0
// offset:    0x38760b0
// name:      FUN_71038760b0
// mangled:   
// signature: undefined __cdecl FUN_71038760b0(long * param_1, long * param_2, uint * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038760b0(long *param_1,long *param_2,uint *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  logic_error *this;
  byte ****ppppbVar4;
  ulong uVar5;
  long lVar6;
  long ****pppplVar7;
  uint *local_60;
  long ****local_58;
  
  uVar5 = param_2[2];
  if (-uVar5 == -0x666666666666666) {
    this = (logic_error *)__cxa_allocate_exception(0x10);
    std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
    *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
  }
  lVar6 = *param_2;
  uVar2 = uVar5;
  if (uVar5 == 0) {
    uVar2 = 1;
  }
  lVar1 = 0x666666666666666;
  if (uVar2 <= -uVar5 + 0x666666666666666) {
    lVar1 = uVar2 + uVar5;
  }
  pppplVar7 = (long ****)(lVar1 * 0x28);
  ppppbVar4 = param_4;
  iVar3 = FUN_710392e1f0(&local_60,0x10,pppplVar7,param_4,param_5,param_6,param_7,param_8);
  if (((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
     (local_58 = pppplVar7, uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_58),
     (uVar5 & 1) != 0)) {
    FUN_710392e1f0(&local_60,0x10,pppplVar7,ppppbVar4,param_5,param_6,param_7,param_8);
  }
  nu::VirtualAllocHook((ulong)pppplVar7,0x10,local_60);
  FUN_71035e95b0(param_2,local_60,lVar1,param_3,(long)param_4);
  *param_1 = *param_2 + ((long)param_3 - lVar6 >> 3) * 8;
  return;
}

