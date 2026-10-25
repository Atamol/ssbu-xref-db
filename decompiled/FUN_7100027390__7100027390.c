// addr:      7100027390
// offset:    0x27390
// name:      FUN_7100027390
// mangled:   
// signature: uint __cdecl FUN_7100027390(long * param_1, char * param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_7100027390(long *param_1,char *param_2)

{
  uint uVar1;
  Fqdn *__dest;
  Fqdn *__src;
  
  __dest = (Fqdn *)FUN_7100027290();
  *(undefined8 *)(__dest + 0xf0) = 0;
  *(undefined8 *)(__dest + 0xf8) = 0;
  *(undefined8 *)(__dest + 0xe0) = 0;
  *(undefined8 *)(__dest + 0xe8) = 0;
  *(undefined8 *)(__dest + 0xd0) = 0;
  *(undefined8 *)(__dest + 0xd8) = 0;
  *(undefined8 *)(__dest + 0xc0) = 0;
  *(undefined8 *)(__dest + 200) = 0;
  *(undefined8 *)(__dest + 0xb0) = 0;
  *(undefined8 *)(__dest + 0xb8) = 0;
  *(undefined8 *)(__dest + 0xa0) = 0;
  *(undefined8 *)(__dest + 0xa8) = 0;
  *(undefined8 *)(__dest + 0x90) = 0;
  *(undefined8 *)(__dest + 0x98) = 0;
  *(undefined8 *)(__dest + 0x80) = 0;
  *(undefined8 *)(__dest + 0x88) = 0;
  *(undefined8 *)(__dest + 0x70) = 0;
  *(undefined8 *)(__dest + 0x78) = 0;
  *(undefined8 *)(__dest + 0x60) = 0;
  *(undefined8 *)(__dest + 0x68) = 0;
  *(undefined8 *)(__dest + 0x50) = 0;
  *(undefined8 *)(__dest + 0x58) = 0;
  *(undefined8 *)(__dest + 0x40) = 0;
  *(undefined8 *)(__dest + 0x48) = 0;
  *(undefined8 *)(__dest + 0x30) = 0;
  *(undefined8 *)(__dest + 0x38) = 0;
  *(undefined8 *)(__dest + 0x20) = 0;
  *(undefined8 *)(__dest + 0x28) = 0;
  *(undefined8 *)(__dest + 0x10) = 0;
  *(undefined8 *)(__dest + 0x18) = 0;
  *(undefined8 *)__dest = 0;
  *(undefined8 *)(__dest + 8) = 0;
  __src = (Fqdn *)FUN_7100027290();
  *(undefined8 *)(__src + 0xf0) = 0;
  *(undefined8 *)(__src + 0xf8) = 0;
  *(undefined8 *)(__src + 0xe0) = 0;
  *(undefined8 *)(__src + 0xe8) = 0;
  *(undefined8 *)(__src + 0xd0) = 0;
  *(undefined8 *)(__src + 0xd8) = 0;
  *(undefined8 *)(__src + 0xc0) = 0;
  *(undefined8 *)(__src + 200) = 0;
  *(undefined8 *)(__src + 0xb0) = 0;
  *(undefined8 *)(__src + 0xb8) = 0;
  *(undefined8 *)(__src + 0xa0) = 0;
  *(undefined8 *)(__src + 0xa8) = 0;
  *(undefined8 *)(__src + 0x90) = 0;
  *(undefined8 *)(__src + 0x98) = 0;
  *(undefined8 *)(__src + 0x80) = 0;
  *(undefined8 *)(__src + 0x88) = 0;
  *(undefined8 *)(__src + 0x70) = 0;
  *(undefined8 *)(__src + 0x78) = 0;
  *(undefined8 *)(__src + 0x60) = 0;
  *(undefined8 *)(__src + 0x68) = 0;
  *(undefined8 *)(__src + 0x50) = 0;
  *(undefined8 *)(__src + 0x58) = 0;
  *(undefined8 *)(__src + 0x40) = 0;
  *(undefined8 *)(__src + 0x48) = 0;
  *(undefined8 *)(__src + 0x30) = 0;
  *(undefined8 *)(__src + 0x38) = 0;
  *(undefined8 *)(__src + 0x20) = 0;
  *(undefined8 *)(__src + 0x28) = 0;
  *(undefined8 *)(__src + 0x10) = 0;
  *(undefined8 *)(__src + 0x18) = 0;
  *(undefined8 *)__src = 0;
  *(undefined8 *)(__src + 8) = 0;
  if ((__dest == (Fqdn *)0x0) || (__src == (Fqdn *)0x0)) {
    FUN_7100008270(_stderr);
    uVar1 = 0xffffffff;
  }
  else {
    strncpy((char *)__dest,param_2,0xff);
    __dest[0xff] = (Fqdn)0x0;
    uVar1 = nn::nsd::ResolveEx(__src,__dest);
    if (uVar1 == 0) {
      if ((param_1 != (long *)0x0) && ((char *)*param_1 != (char *)0x0)) {
        strncpy((char *)*param_1,(char *)__src,0xff);
        *(undefined1 *)(*param_1 + 0xff) = 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = uVar1 >> 9 & 0x1fff;
      FUN_7100008270(_stderr);
    }
  }
  if (__src != (Fqdn *)0x0) {
    FUN_71000272a0();
  }
  if (__dest != (Fqdn *)0x0) {
    FUN_71000272a0();
  }
  return uVar1;
}

