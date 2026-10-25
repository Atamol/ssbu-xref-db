// addr:      71038cf2c0
// offset:    0x38cf2c0
// name:      FUN_71038cf2c0
// mangled:   
// signature: undefined __cdecl FUN_71038cf2c0(long * param_1, long * param_2, undefined8 * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038cf2c0(long *param_1,long *param_2,undefined8 *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long lVar2;
  size_t sVar3;
  int iVar4;
  ulong uVar5;
  logic_error *this;
  byte ****ppppbVar6;
  void *__src;
  long ****pppplVar7;
  void *pvVar8;
  void *__src_00;
  long *plVar9;
  long lVar10;
  void *local_68;
  long ****local_58;
  
  ppppbVar6 = (byte ****)param_2[2];
  if (param_4 <= (byte ****)(0x3fffffffffffffff - (long)ppppbVar6)) {
    ppppbVar1 = param_4;
    if (param_4 <= ppppbVar6) {
      ppppbVar1 = ppppbVar6;
    }
    __src = (void *)*param_3;
    lVar10 = *param_2;
    lVar2 = 0x3fffffffffffffff;
    if (ppppbVar1 <= (byte ****)(0x3fffffffffffffff - (long)ppppbVar6)) {
      lVar2 = (long)ppppbVar1 + (long)ppppbVar6;
    }
    pppplVar7 = (long ****)(lVar2 << 2);
    ppppbVar6 = param_4;
    iVar4 = FUN_710392e1f0(&local_68,0x10,pppplVar7,param_4,param_5,param_6,param_7,param_8);
    if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_58 = pppplVar7,
       uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_58), (uVar5 & 1) != 0)) {
      FUN_710392e1f0(&local_68,0x10,pppplVar7,ppppbVar6,param_5,param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)pppplVar7,0x10,local_68);
    __src_00 = (void *)*param_2;
    if (__src_00 == (void *)0x0) {
      memset(local_68,0,(long)param_4 * 4);
      pvVar8 = (void *)((long)local_68 + (long)param_4 * 4);
    }
    else {
      sVar3 = (long)__src - (long)__src_00;
      pvVar8 = local_68;
      if (sVar3 != 0) {
        memmove(local_68,__src_00,sVar3);
        pvVar8 = (void *)((long)local_68 + sVar3);
      }
      memset(pvVar8,0,(long)param_4 * 4);
      pvVar8 = (void *)((long)pvVar8 + (long)param_4 * 4);
      sVar3 = (long)__src_00 + (param_2[1] * 4 - (long)__src);
      if (sVar3 != 0) {
        memmove(pvVar8,__src,sVar3);
        pvVar8 = (void *)((long)pvVar8 + sVar3);
      }
      plVar9 = (long *)*param_2;
      if (plVar9 != param_2 + 3) {
        nu::VirtualFreeHook(plVar9);
        FUN_710392eb40((ulong)plVar9);
      }
    }
    param_2[2] = lVar2;
    *param_2 = (long)local_68;
    param_2[1] = (long)pvVar8 - (long)local_68 >> 2;
    *param_1 = (long)((long)local_68 + ((long)__src - lVar10 >> 2) * 4);
    return;
  }
  this = (logic_error *)__cxa_allocate_exception(0x10);
  std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
  *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
}

