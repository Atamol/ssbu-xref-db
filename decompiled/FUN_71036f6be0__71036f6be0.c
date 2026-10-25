// addr:      71036f6be0
// offset:    0x36f6be0
// name:      FUN_71036f6be0
// mangled:   
// signature: long __cdecl FUN_71036f6be0(long param_1, long * param_2, ulong param_3, void * param_4, long param_5)


long FUN_71036f6be0(long param_1,long *param_2,ulong param_3,void *param_4,long param_5)

{
  size_t __n;
  ulong uVar1;
  uint param1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long local_68;
  
  lVar6 = *(long *)(param_1 + 8);
  if (*(long *)(lVar6 + 0x30) == 0) {
    local_68 = 0;
    if (param_2 == (long *)0x0) {
      return 0;
    }
    if ((long)param_3 < 0) {
      return 0;
    }
    if (param_4 == (void *)0x0) {
      return 0;
    }
    if (param_5 == 0) {
      return 0;
    }
    if (*param_2 == **(long **)(lVar6 + 8)) {
      nn::fs::ReadFile(&local_68,*param_2,*(long *)(lVar6 + 0x20) + param_3,param_4,param_5);
      return local_68;
    }
  }
  else if ((*(long *)(lVar6 + 0x48) != 0) && (param_5 - 1U >> 0x1f == 0)) {
    uVar7 = (param_3 + param_5) - 1;
    uVar8 = *(ulong *)(lVar6 + 0x78);
    lVar3 = 0;
    uVar5 = (uVar8 + *(long *)(lVar6 + 0x70)) - 1;
    do {
      if (((uVar5 < param_3) || (param_3 < uVar8)) || (*(long *)(lVar6 + 0x70) == 0)) {
        uVar4 = param_3 & 0xfffffffffffc0000;
        uVar5 = *(long *)(lVar6 + 0x58) - uVar4;
        iVar2 = (int)uVar5;
        if (0x7ffff < uVar5) {
          iVar2 = 0x80000;
        }
        local_68 = 0;
        param1 = nn::album::ReadAlbumMovieStream
                           (&local_68,*(undefined8 *)(lVar6 + 0x50),iVar2 + 0x3ffffU & 0x1c0000,
                            *param_2,uVar4);
        *(long *)(lVar6 + 0x70) = local_68;
        *(ulong *)(lVar6 + 0x78) = uVar4;
        *(ulong *)(lVar6 + 0x60) = uVar5;
        *(long *)(lVar6 + 0x68) = local_68;
        if (param1 != 0) {
          printf("Movie:Error(%08x)\n",param1);
          nn::err::ShowError(param1);
          DAT_710533a010 = 1;
          return lVar3;
        }
        uVar5 = local_68 + uVar4;
        uVar8 = uVar4;
      }
      else {
        uVar4 = *(ulong *)(lVar6 + 0x78);
      }
      uVar1 = uVar5;
      if (uVar7 <= uVar5) {
        uVar1 = uVar7;
      }
      __n = (uVar1 - param_3) + 1;
      memcpy(param_4,(void *)(*(long *)(lVar6 + 0x50) + (param_3 - uVar4)),__n);
      param_5 = param_5 - __n;
      param_4 = (void *)((long)param_4 + __n);
      param_3 = uVar1 + 1;
      lVar3 = __n + lVar3;
    } while (param_5 - 1U >> 0x1f == 0);
    return lVar3;
  }
  return 0;
}

