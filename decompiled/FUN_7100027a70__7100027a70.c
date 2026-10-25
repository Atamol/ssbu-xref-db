// addr:      7100027a70
// offset:    0x27a70
// name:      FUN_7100027a70
// mangled:   
// signature: void * __cdecl FUN_7100027a70(long param_1, undefined8 param_2, undefined8 param_3)


void * FUN_7100027a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  void *__s;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_50;
  undefined4 local_44;
  
  __s = (void *)FUN_7100027290();
  if (__s == (void *)0x0) {
    uVar2 = nnResultIsFailure(0xffffffff);
  }
  else {
    memset(__s,0,0x1f0);
    uVar2 = FUN_71000272e0(0x1000,param_1);
    *(ulong *)((long)__s + 0x1d0) = uVar2;
    if (uVar2 == 0) {
      FUN_71000272a0();
      uVar2 = nnResultIsFailure(0xffffffff);
      __s = (void *)0x0;
    }
    else {
      nnosGetCurrentThread();
      uVar1 = nnosGetThreadPriority();
      uVar1 = nnosCreateThread(__s,FUN_7100027bf0,__s,uVar2,param_1,uVar1);
      uVar2 = nnResultIsFailure(uVar1);
      if ((uVar2 & 1) == 0) {
        local_44 = 0xffffffff;
        local_50 = 0;
        uVar3 = nnosGetCurrentThread();
        nnosGetThreadCoreMask(&local_44,&local_50,uVar3);
        nnosSetThreadCoreMask(__s,local_44,local_50);
        nnosSetThreadNamePointer(__s,"LibcurlResolver");
        *(undefined8 *)((long)__s + 0x1c0) = param_2;
        *(undefined8 *)((long)__s + 0x1c8) = param_3;
        uVar2 = nnResultIsFailure(uVar1);
      }
      else {
        uVar2 = nnResultIsFailure(uVar1);
      }
    }
  }
  pvVar4 = __s;
  if (((uVar2 & 1) != 0) && (pvVar4 = (void *)0x0, __s != (void *)0x0)) {
    nnosDestroyThread(__s);
    if (*(long *)((long)__s + 0x1d0) != 0) {
      FUN_7100027340(*(long *)((long)__s + 0x1d0));
      *(undefined8 *)((long)__s + 0x1d0) = 0;
    }
    *(undefined8 *)((long)__s + 0x1c0) = 0;
    *(undefined8 *)((long)__s + 0x1c8) = 0;
    FUN_71000272a0();
    pvVar4 = (void *)0x0;
  }
  return pvVar4;
}

