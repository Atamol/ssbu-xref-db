// addr:      7102e1e1d0
// offset:    0x2e1e1d0
// name:      FUN_7102e1e1d0
// mangled:   
// signature: undefined __cdecl FUN_7102e1e1d0(ulong * param_1, byte * * * * param_2, undefined4 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102e1e1d0(ulong *param_1,byte ****param_2,undefined4 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ***ppplVar1;
  size_t __n;
  ulong uVar2;
  char *__format;
  long ****pppplVar3;
  void *__dest;
  long ***ppplVar4;
  ulong local_168;
  ulong local_160;
  void *local_158;
  char acStack_150 [256];
  long ***local_50;
  undefined4 local_44;
  
  switch(param_3) {
  case 1:
    __format = "%s_land";
    break;
  case 2:
    __format = "%s_wait";
    break;
  case 3:
    __format = "%s_happy";
    break;
  case 4:
    __format = "%s_attack";
    break;
  case 5:
    __format = "%s_tokusyu";
    break;
  default:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  snprintf(acStack_150,0x100,__format);
  local_160 = 0;
  local_158 = (void *)0x0;
  local_168 = 0;
  __n = strlen(acStack_150);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_168 = CONCAT71(local_168._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_168 | 1);
    if (__n == 0) goto LAB_7102e1e314;
  }
  else {
    ppplVar4 = (long ***)(__n + 0x10 & 0xfffffffffffffff0);
    ppplVar1 = ppplVar4;
    if ((__n + 0x10 & 0xfffffffffffffff0) == 0) {
      ppplVar1 = (long ***)0x1;
    }
    __dest = (void *)FUN_710392e290(0x10,ppplVar1,(long ****)__format,param_2,param_5,param_6,
                                    param_7,param_8);
    if (__dest == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        pppplVar3 = &local_50;
        local_50 = ppplVar1;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar2 & 1) != 0) &&
           (__dest = (void *)FUN_710392e290(0x10,ppplVar1,pppplVar3,param_2,param_5,param_6,param_7,
                                            param_8), __dest != (void *)0x0)) goto LAB_7102e1e2f8;
      }
      __dest = (void *)0x0;
    }
LAB_7102e1e2f8:
    local_168 = (ulong)ppplVar4 | 1;
    local_160 = __n;
    local_158 = __dest;
  }
  memcpy(__dest,acStack_150,__n);
LAB_7102e1e314:
  *(undefined1 *)((long)__dest + __n) = 0;
  param_1[2] = (ulong)local_158;
  *param_1 = local_168;
  param_1[1] = local_160;
  return;
}

