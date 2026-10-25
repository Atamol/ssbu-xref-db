// addr:      710363da60
// offset:    0x363da60
// name:      FUN_710363da60
// mangled:   
// signature: undefined __cdecl FUN_710363da60(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710363da60(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong __n;
  void *pvVar4;
  long ****pppplVar5;
  void *__dest;
  long *plVar6;
  undefined **local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  void *local_a8;
  undefined4 local_a0;
  undefined8 uStack_98;
  long local_90;
  long *local_88;
  long local_80;
  void *local_78;
  long ****local_70 [2];
  
  if (2 < *(uint *)(param_1 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x28) + 0x128);
  if (plVar6 != (long *)0x0) {
    lVar3 = *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x1c) * 0x70;
    do {
      local_c8 = (undefined8 *)0x0;
      local_d8 = (undefined **)0x1a;
      builtin_strncpy((char *)((ulong)&local_d8 | 1),"VSM_SRV_IPLUG",0xd);
      local_d0 = 0;
      FUN_7103856830(&uStack_98,plVar6[5],(byte *)&local_d8);
      if ((local_88 != (long *)0x0) && (*local_88 == local_80)) {
        local_d0 = 0;
        if (*(long **)(lVar3 + 0x100) == (long *)0x0) {
LAB_710363db88:
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
        }
        else {
          if (**(long **)(lVar3 + 0x100) != *(long *)(lVar3 + 0x108)) {
            local_d0 = 0;
            goto LAB_710363db88;
          }
          local_d0 = *(long *)(lVar3 + 0xf8);
          if (local_d0 == 0) goto LAB_710363db88;
          local_c8 = *(undefined8 **)(local_d0 + 8);
          local_c0 = *local_c8;
        }
        local_d8 = &PTR_FUN_71052382b0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = (void *)0x0;
        if ((*(byte *)(lVar3 + 0xc0) & 1) == 0) {
          local_b8 = *(ulong *)(lVar3 + 0xc0);
          local_b0 = *(ulong *)(lVar3 + 200);
          local_a8 = *(void **)(lVar3 + 0xd0);
        }
        else {
          __n = *(ulong *)(lVar3 + 200);
          if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          pvVar4 = *(void **)(lVar3 + 0xd0);
          if (__n < 0x17) {
            local_b8 = (ulong)(byte)((int)__n << 1);
            __dest = (void *)((long)&local_b8 + 1);
            if (__n != 0) goto LAB_710363dc74;
          }
          else {
            pppplVar5 = (long ****)(__n + 0x10 & 0xfffffffffffffff0);
            iVar1 = FUN_710392e1f0(&local_78,0x10,pppplVar5,param_4,param_5,param_6,param_7,param_8)
            ;
            if (((iVar1 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_70[0] = pppplVar5,
               uVar2 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
               (uVar2 & 1) != 0)) {
              FUN_710392e1f0(&local_78,0x10,pppplVar5,param_4,param_5,param_6,param_7,param_8);
            }
            nu::VirtualAllocHook((ulong)pppplVar5,0x10,local_78);
            local_b8 = (ulong)pppplVar5 | 1;
            local_a8 = local_78;
            __dest = local_78;
            local_b0 = __n;
LAB_710363dc74:
            memcpy(__dest,pvVar4,__n);
          }
          *(undefined1 *)((long)__dest + __n) = 0;
        }
        local_a0 = 2;
        FUN_710386cae0(local_90,(long)&local_d8);
        pvVar4 = local_a8;
        if ((local_b8 & 1) != 0) {
          nu::VirtualFreeHook(local_a8);
          FUN_710392eb40((ulong)pvVar4);
        }
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}

