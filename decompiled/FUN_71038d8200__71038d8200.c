// addr:      71038d8200
// offset:    0x38d8200
// name:      FUN_71038d8200
// mangled:   
// signature: undefined __cdecl FUN_71038d8200(long * param_1, long * param_2, undefined8 * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038d8200(long *param_1,long *param_2,undefined8 *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  byte ****ppppbVar2;
  size_t sVar3;
  int iVar4;
  ulong uVar5;
  logic_error *this;
  byte ****ppppbVar6;
  void *__src;
  void *pvVar7;
  void *__src_00;
  long *plVar8;
  long lVar9;
  void *local_70;
  long ****local_68;
  
  ppppbVar6 = (byte ****)param_2[2];
  if ((byte ****)~(ulong)ppppbVar6 < param_4) {
    this = (logic_error *)__cxa_allocate_exception(0x10);
    std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
    *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
  }
  ppppbVar2 = param_4;
  if (param_4 <= ppppbVar6) {
    ppppbVar2 = ppppbVar6;
  }
  __src = (void *)*param_3;
  lVar9 = *param_2;
  pppplVar1 = (long ****)((long)ppppbVar2 + (long)ppppbVar6);
  if ((byte ****)~(ulong)ppppbVar6 < ppppbVar2) {
    pppplVar1 = (long ****)0xffffffffffffffff;
  }
  ppppbVar6 = param_4;
  iVar4 = FUN_710392e1f0(&local_70,0x10,pppplVar1,param_4,param_5,param_6,param_7,param_8);
  if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
     (local_68 = pppplVar1, uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68),
     (uVar5 & 1) != 0)) {
    FUN_710392e1f0(&local_70,0x10,pppplVar1,ppppbVar6,param_5,param_6,param_7,param_8);
  }
  nu::VirtualAllocHook((ulong)pppplVar1,0x10,local_70);
  __src_00 = (void *)*param_2;
  if (__src_00 == (void *)0x0) {
    memset(local_70,0,(size_t)param_4);
    pvVar7 = (void *)((long)local_70 + (long)param_4);
  }
  else {
    sVar3 = (long)__src - (long)__src_00;
    pvVar7 = local_70;
    if (sVar3 != 0) {
      memmove(local_70,__src_00,sVar3);
      pvVar7 = (void *)((long)local_70 + sVar3);
    }
    memset(pvVar7,0,(size_t)param_4);
    pvVar7 = (void *)((long)pvVar7 + (long)param_4);
    sVar3 = (long)__src_00 + (param_2[1] - (long)__src);
    if (sVar3 != 0) {
      memmove(pvVar7,__src,sVar3);
      pvVar7 = (void *)((long)pvVar7 + sVar3);
    }
    plVar8 = (long *)*param_2;
    if (plVar8 != param_2 + 3) {
      nu::VirtualFreeHook(plVar8);
      FUN_710392eb40((ulong)plVar8);
    }
  }
  param_2[2] = (long)pppplVar1;
  *param_2 = (long)local_70;
  param_2[1] = (long)pvVar7 - (long)local_70;
  *param_1 = (long)local_70 + ((long)__src - lVar9);
  return;
}

