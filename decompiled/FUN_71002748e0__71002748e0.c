// addr:      71002748e0
// offset:    0x2748e0
// name:      FUN_71002748e0
// mangled:   
// signature: size_t __cdecl FUN_71002748e0(long param_1, undefined8 param_2, void * param_3, size_t param_4, undefined1 * param_5)


size_t FUN_71002748e0(long param_1,undefined8 param_2,void *param_3,size_t param_4,
                     undefined1 *param_5)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  size_t sVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong *puVar8;
  char *pcVar9;
  void *__dest;
  
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        sVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return sVar4;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar3 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar3 + 0x10) + 0x18),*(uint *)(param_1 + 8)
                                 );
  if (plVar3 != (long *)0x0) {
    pcVar9 = (char *)(param_1 + 0xa0);
    if (*pcVar9 == '\0') {
      pvVar6 = *(void **)(param_1 + 0x70);
      if (pvVar6 != *(void **)(param_1 + 0x78)) {
        uVar5 = (long)*(void **)(param_1 + 0x78) - (long)pvVar6;
        if (uVar5 <= param_4) {
          param_4 = uVar5;
        }
        if (param_4 == 0) {
          return 0;
        }
        memmove(param_3,pvVar6,param_4);
        pvVar6 = *(void **)(param_1 + 0x70);
        sVar4 = *(long *)(param_1 + 0x78) - (long)((long)pvVar6 + param_4);
        if (sVar4 != 0) {
          memmove(pvVar6,(void *)((long)pvVar6 + param_4),sVar4);
        }
        *(size_t *)(param_1 + 0x78) = (long)pvVar6 + sVar4;
        return param_4;
      }
      if (*(long *)(param_1 + 0x48) == 0) {
        param_4 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                            (*(long **)(param_1 + 0x60),param_3,param_4,pcVar9);
        uVar7 = *(ulong *)(param_1 + 0x50);
        uVar5 = *(long *)(param_1 + 0x68) + param_4;
      }
      else {
        puVar8 = (ulong *)(param_1 + 0x68);
        uVar5 = *(long *)(param_1 + 0x50) - *puVar8;
        if (uVar5 <= param_4) {
          param_4 = uVar5;
        }
        memcpy(param_3,(void *)(*(long *)(param_1 + 0x48) + *puVar8),param_4);
        uVar7 = *(ulong *)(param_1 + 0x50);
        uVar5 = param_4 + *puVar8;
        if (uVar5 == uVar7) {
          *pcVar9 = '\x01';
          *puVar8 = uVar5;
          return param_4;
        }
      }
      *(ulong *)(param_1 + 0x68) = uVar5;
      if (uVar5 <= uVar7) {
        return param_4;
      }
    }
    else {
      pvVar6 = *(void **)(param_1 + 0x88);
      uVar5 = *(long *)(param_1 + 0x90) - (long)pvVar6;
      if (uVar5 <= param_4) {
        param_4 = uVar5;
      }
      if (param_4 == 0) {
        if (pvVar6 != *(void **)(param_1 + 0x90)) {
          return 0;
        }
      }
      else {
        memmove(param_3,pvVar6,param_4);
        __dest = *(void **)(param_1 + 0x88);
        sVar4 = *(long *)(param_1 + 0x90) - (long)((long)__dest + param_4);
        pvVar6 = __dest;
        if (sVar4 != 0) {
          memmove(__dest,(void *)((long)__dest + param_4),sVar4);
          pvVar6 = *(void **)(param_1 + 0x88);
        }
        *(void **)(param_1 + 0x90) = (void *)((long)__dest + sVar4);
        if (pvVar6 != (void *)((long)__dest + sVar4)) {
          return param_4;
        }
      }
      if (*(long *)(param_1 + 0x68) == *(long *)(param_1 + 0x50)) {
        *param_5 = 1;
        return param_4;
      }
    }
    FUN_71001d0a10(plVar3);
  }
  return 0;
}

