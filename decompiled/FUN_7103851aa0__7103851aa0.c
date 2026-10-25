// addr:      7103851aa0
// offset:    0x3851aa0
// name:      FUN_7103851aa0
// mangled:   
// signature: undefined __cdecl FUN_7103851aa0(undefined8 * param_1, long param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103851aa0(undefined8 *param_1,long param_2,ulong param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *__src;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  int iVar5;
  logic_error *this;
  long ****pppplVar6;
  ulong uVar7;
  long ****pppplVar8;
  long ****__dest;
  long ****pppplVar9;
  long ***ppplVar10;
  long **pplVar11;
  void *pvVar12;
  long ****local_70;
  long ****local_68;
  
  std::recursive_mutex::lock();
  uVar7 = *(ulong *)(param_2 + 0x248);
  plVar1 = (long *)(param_2 + 0x30);
  if (uVar7 < *(ulong *)(param_2 + 0x38)) {
    pppplVar9 = *(long *****)(*plVar1 + uVar7 * 8);
    if (pppplVar9 == (long ****)0x0) {
      ppplVar10 = (long ***)0x0;
      pplVar11 = (long **)0x0;
    }
    else {
      ppplVar10 = pppplVar9[1];
      pplVar11 = *ppplVar10;
    }
  }
  else {
    local_68 = (long ****)*plVar1;
    local_70 = local_68 + *(ulong *)(param_2 + 0x38);
    FUN_7103851e80((ulong *)&local_68,(ulong *)&local_70);
    iVar5 = FUN_710392e1f0(&local_70,0x10,(long ****)&DAT_000000a8,param_4,param_5,param_6,param_7,
                           param_8);
    if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_68 = (long ****)&DAT_000000a8;
      uVar7 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68);
      if ((uVar7 & 1) != 0) {
        FUN_710392e1f0(&local_70,0x10,(long ****)&DAT_000000a8,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0xa8,0x10,local_70);
    pppplVar9 = local_70;
    FUN_71037c3a70(local_70);
    pppplVar9[2] = (long ***)0x0;
    pppplVar9[0xb] = (long ***)0x0;
    pppplVar9[0xc] = (long ***)0x0;
    *pppplVar9 = (long ***)&PTR_FUN_71052658b8;
    *(undefined1 *)(pppplVar9 + 0x14) = 0;
    pppplVar9[9] = (long ***)0x0;
    pppplVar9[10] = (long ***)0x0;
    pppplVar9[7] = (long ***)0x0;
    pppplVar9[8] = (long ***)0x0;
    pppplVar9[5] = (long ***)0x0;
    pppplVar9[6] = (long ***)0x0;
    pppplVar9[3] = (long ***)0x0;
    pppplVar9[4] = (long ***)0x0;
    pppplVar9[0x12] = (long ***)0x0;
    pppplVar9[0x13] = (long ***)0x0;
    pppplVar9[0x10] = (long ***)0x0;
    pppplVar9[0x11] = (long ***)0x0;
    pppplVar9[0xe] = (long ***)0x0;
    pppplVar9[0xf] = (long ***)0x0;
    if (pppplVar9 == (long ****)0x0) {
      ppplVar10 = (long ***)0x0;
      pplVar11 = (long **)0x0;
    }
    else {
      ppplVar10 = pppplVar9[1];
      pplVar11 = *ppplVar10;
    }
    uVar7 = *(ulong *)(param_2 + 0x40);
    __src = (undefined8 *)(*(long *)(param_2 + 0x30) + *(ulong *)(param_2 + 0x38) * 8);
    if (*(ulong *)(param_2 + 0x38) < uVar7) {
      *__src = pppplVar9;
      *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
    }
    else {
      if (-uVar7 == -0x1fffffffffffffff) {
        this = (logic_error *)__cxa_allocate_exception(0x10);
        std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
        *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
      }
      uVar3 = uVar7;
      if (uVar7 == 0) {
        uVar3 = 1;
      }
      lVar2 = 0x1fffffffffffffff;
      if (uVar3 <= -uVar7 + 0x1fffffffffffffff) {
        lVar2 = uVar3 + uVar7;
      }
      pppplVar6 = (long ****)(lVar2 << 3);
      iVar5 = FUN_710392e1f0(&local_70,0x10,pppplVar6,param_4,param_5,param_6,param_7,param_8);
      if (((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_68 = pppplVar6,
         uVar7 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68), (uVar7 & 1) != 0))
      {
        FUN_710392e1f0(&local_70,0x10,pppplVar6,param_4,param_5,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar6,0x10,local_70);
      pppplVar6 = local_70;
      pvVar12 = (void *)*plVar1;
      if (pvVar12 == (void *)0x0) {
        __dest = local_70 + 1;
        *local_70 = (long ***)pppplVar9;
      }
      else {
        sVar4 = (long)__src - (long)pvVar12;
        pppplVar8 = local_70;
        if (sVar4 != 0) {
          memmove(local_70,pvVar12,sVar4);
          pppplVar8 = (long ****)((long)pppplVar6 + sVar4);
        }
        __dest = pppplVar8 + 1;
        *pppplVar8 = (long ***)pppplVar9;
        sVar4 = (long)pvVar12 + (*(long *)(param_2 + 0x38) * 8 - (long)__src);
        if (sVar4 != 0) {
          memmove(__dest,__src,sVar4);
          __dest = (long ****)((long)__dest + sVar4);
        }
        pvVar12 = (void *)*plVar1;
        if (pvVar12 != (void *)(param_2 + 0x48)) {
          nu::VirtualFreeHook(pvVar12);
          FUN_710392eb40((ulong)pvVar12);
        }
      }
      *(long *****)(param_2 + 0x30) = pppplVar6;
      *(long *)(param_2 + 0x38) = (long)__dest - (long)pppplVar6 >> 3;
      *(long *)(param_2 + 0x40) = lVar2;
    }
    uVar7 = *(ulong *)(param_2 + 0x248);
  }
  *(ulong *)(param_2 + 0x248) = uVar7 + 1;
  (*(code *)(*pppplVar9)[2])(&local_68,pppplVar9,param_3 & 0xffffffff);
  if ((int)local_68 < 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
  }
  else {
    *(ulong *)(param_2 + 0x250) = *(long *)(param_2 + 0x250) + param_3;
    param_1[1] = pppplVar9;
    param_1[2] = ppplVar10;
    param_1[3] = pplVar11;
  }
  *param_1 = &PTR_FUN_7105265a58;
  std::recursive_mutex::unlock();
  return;
}

