// addr:      71038f2f80
// offset:    0x38f2f80
// name:      FUN_71038f2f80
// mangled:   
// signature: undefined __cdecl FUN_71038f2f80(undefined8 * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, byte * param_8)


/* WARNING: Removing unreachable block (ram,0x0071038f30f8) */
/* WARNING: Removing unreachable block (ram,0x0071038f3110) */
/* WARNING: Removing unreachable block (ram,0x0071038f3130) */

void FUN_71038f2f80(undefined8 *param_1,long param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,byte *param_8)

{
  char *__s;
  int iVar1;
  ulong uVar2;
  logic_error *this;
  long lVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ***ppplVar7;
  long ****pppplVar8;
  long ***ppplVar9;
  long ****pppplVar10;
  ulong uVar11;
  long ****pppplVar12;
  uint uVar13;
  undefined **local_6f8;
  long *local_6f0;
  long *local_6e8;
  long local_6e0;
  long ****local_6d8;
  long ***local_6d0;
  long ****local_6c8;
  undefined **local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  long ****local_6a0;
  ulong local_698;
  ulong local_690;
  long ***local_688 [192];
  undefined8 local_88;
  byte local_80;
  long ****local_78;
  long ****local_70 [2];
  
  if ((((*(long **)(param_2 + 0x10) == (long *)0x0) ||
       (**(long **)(param_2 + 0x10) != *(long *)(param_2 + 0x18))) ||
      (*(long **)(param_3 + 0x10) == (long *)0x0)) ||
     (**(long **)(param_3 + 0x10) != *(long *)(param_3 + 0x18))) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &PTR_FUN_7105239450;
    param_1[1] = 0;
  }
  else {
    local_80 = (byte)param_4 & 1;
    local_6c0 = &PTR_FUN_7105291d98;
    uStack_6b8 = 0;
    local_6a0 = local_688;
    local_698 = 0;
    local_690 = 0x40;
    local_88 = 0x10;
    local_6b0 = 0;
    uStack_6a8 = 0;
    uVar11 = *(long *)(*(long *)(param_2 + 8) + 0x50) - *(long *)(*(long *)(param_2 + 8) + 0x48) >>
             3;
    if (0x40 < uVar11) {
      pppplVar8 = (long ****)(uVar11 * 0x18);
      iVar1 = FUN_710392e1f0(local_70,0x10,pppplVar8,param_4,param_5,param_6,param_7,param_8);
      if (((iVar1 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_6d8 = pppplVar8,
         uVar2 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_6d8), (uVar2 & 1) != 0)
         ) {
        FUN_710392e1f0(local_70,0x10,pppplVar8,param_4,param_5,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar8,0x10,local_70[0]);
      pppplVar8 = local_70[0];
      pppplVar10 = local_70[0];
      if ((local_698 != 0) && (local_6a0 != (long ****)0x0)) {
        lVar3 = local_698 * 0x18;
        pppplVar6 = local_6a0;
        pppplVar4 = local_70[0];
        do {
          ppplVar9 = *pppplVar6;
          ppplVar7 = pppplVar6[2];
          pppplVar4[1] = pppplVar6[1];
          pppplVar4[2] = ppplVar7;
          lVar3 = lVar3 + -0x18;
          pppplVar10 = pppplVar4 + 3;
          *pppplVar4 = ppplVar9;
          pppplVar6[1] = (long ***)0x0;
          pppplVar6[2] = (long ***)0x0;
          *pppplVar6 = (long ***)0x0;
          pppplVar6 = pppplVar6 + 3;
          pppplVar4 = pppplVar10;
        } while (lVar3 != 0);
      }
      if (local_6a0 != (long ****)0x0) {
        if (local_698 != 0) {
          pppplVar6 = local_6a0 + 2;
          uVar2 = local_698;
          do {
            if (((ulong)pppplVar6[-2] & 1) != 0) {
              ppplVar9 = *pppplVar6;
              nu::VirtualFreeHook(ppplVar9);
              FUN_710392eb40((ulong)ppplVar9);
            }
            uVar2 = uVar2 - 1;
            pppplVar6 = pppplVar6 + 3;
          } while (uVar2 != 0);
        }
        pppplVar6 = local_6a0;
        if (local_6a0 != local_688) {
          nu::VirtualFreeHook(local_6a0);
          FUN_710392eb40((ulong)pppplVar6);
        }
      }
      local_698 = ((long)pppplVar10 - (long)pppplVar8 >> 3) * -0x5555555555555555;
      local_6a0 = pppplVar8;
      local_690 = uVar11;
    }
    uVar13 = 0;
    while( true ) {
      lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x48);
      if ((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x50) - lVar3 >> 3) <= (ulong)uVar13) break;
      lVar3 = *(long *)(lVar3 + (long)(int)uVar13 * 8);
      local_6d8 = (long ****)0x0;
      local_6d0 = (long ***)0x0;
      local_6c8 = (long ****)0x0;
      __s = (char *)(lVar3 + 0x41);
      if ((*(byte *)(lVar3 + 0x40) & 1) != 0) {
        __s = *(char **)(lVar3 + 0x50);
      }
      ppplVar9 = (long ***)strlen(__s);
      if ((long ***)0xffffffffffffffef < ppplVar9) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (ppplVar9 < (long ***)0x17) {
        local_6d8 = (long ****)CONCAT71(local_6d8._1_7_,(char)((int)ppplVar9 << 1));
        pppplVar8 = (long ****)((ulong)&local_6d8 | 1);
        if (ppplVar9 != (long ***)0x0) goto LAB_71038f32f8;
      }
      else {
        pppplVar8 = (long ****)((ulong)(ppplVar9 + 2) & 0xfffffffffffffff0);
        iVar1 = FUN_710392e1f0(&local_78,0x10,pppplVar8,param_4,param_5,param_6,param_7,param_8);
        if (((iVar1 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_70[0] = pppplVar8,
           uVar11 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
           (uVar11 & 1) != 0)) {
          FUN_710392e1f0(&local_78,0x10,pppplVar8,param_4,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar8,0x10,local_78);
        local_6d8 = (long ****)((ulong)pppplVar8 | 1);
        local_6c8 = local_78;
        pppplVar8 = local_78;
        local_6d0 = ppplVar9;
LAB_71038f32f8:
        memcpy(pppplVar8,__s,(size_t)ppplVar9);
      }
      *(undefined1 *)((long)pppplVar8 + (long)ppplVar9) = 0;
      pppplVar8 = local_6a0 + local_698 * 3;
      if (local_698 < local_690) {
        pppplVar8[1] = local_6d0;
        pppplVar8[2] = (long ***)local_6c8;
        *pppplVar8 = (long ***)local_6d8;
        local_698 = local_698 + 1;
        local_6d8 = (long ****)0x0;
        local_6d0 = (long ***)0x0;
        local_6c8 = (void *)0x0;
        uVar13 = uVar13 + 1;
      }
      else {
        if (-local_690 == -0xaaaaaaaaaaaaaaa) {
          this = (logic_error *)__cxa_allocate_exception(0x10);
          std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
          *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
        }
        uVar11 = local_690;
        if (local_690 == 0) {
          uVar11 = 1;
        }
        uVar2 = 0xaaaaaaaaaaaaaaa;
        if (uVar11 <= -local_690 + 0xaaaaaaaaaaaaaaa) {
          uVar2 = uVar11 + local_690;
        }
        pppplVar10 = (long ****)(uVar2 * 0x18);
        iVar1 = FUN_710392e1f0(&local_78,0x10,pppplVar10,param_4,param_5,param_6,param_7,param_8);
        if (((iVar1 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_70[0] = pppplVar10,
           uVar11 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
           (uVar11 & 1) != 0)) {
          FUN_710392e1f0(&local_78,0x10,pppplVar10,param_4,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar10,0x10,local_78);
        pppplVar10 = local_78;
        if (local_6a0 == (long ****)0x0) {
          pppplVar6 = local_78 + 3;
          local_78[1] = local_6d0;
          local_78[2] = (long ***)local_6c8;
          *local_78 = (long ***)local_6d8;
          local_6d0 = (long ***)0x0;
          local_6c8 = (void *)0x0;
          local_6d8 = (long ****)0x0;
        }
        else {
          if (local_6a0 == pppplVar8) {
            local_78[1] = local_6d0;
            local_78[2] = (long ***)local_6c8;
            *local_78 = (long ***)local_6d8;
            pppplVar6 = local_78 + 3;
          }
          else {
            pppplVar4 = local_6a0;
            pppplVar6 = local_78 + 3;
            do {
              pppplVar12 = pppplVar6;
              ppplVar9 = *pppplVar4;
              ppplVar7 = pppplVar4[2];
              pppplVar12[-2] = pppplVar4[1];
              pppplVar12[-1] = ppplVar7;
              pppplVar12[-3] = ppplVar9;
              pppplVar4[1] = (long ***)0x0;
              pppplVar4[2] = (long ***)0x0;
              pppplVar6 = pppplVar12 + 3;
              pppplVar5 = pppplVar4 + 3;
              *pppplVar4 = (long ***)0x0;
              pppplVar4 = pppplVar5;
            } while (pppplVar8 != pppplVar5);
            pppplVar12[1] = local_6d0;
            pppplVar12[2] = (long ***)local_6c8;
            *pppplVar12 = (long ***)local_6d8;
          }
          local_6c8 = (void *)0x0;
          local_6d0 = (long ***)0x0;
          local_6d8 = (long ****)0x0;
          for (; local_6a0 + local_698 * 3 != pppplVar8; pppplVar8 = pppplVar8 + 3) {
            ppplVar9 = *pppplVar8;
            ppplVar7 = pppplVar8[2];
            pppplVar6[1] = pppplVar8[1];
            pppplVar6[2] = ppplVar7;
            *pppplVar6 = ppplVar9;
            pppplVar8[1] = (long ***)0x0;
            pppplVar8[2] = (long ***)0x0;
            *pppplVar8 = (long ***)0x0;
            pppplVar6 = pppplVar6 + 3;
          }
          if (local_698 != 0) {
            pppplVar8 = local_6a0 + 2;
            uVar11 = local_698;
            do {
              if (((ulong)pppplVar8[-2] & 1) != 0) {
                ppplVar9 = *pppplVar8;
                nu::VirtualFreeHook(ppplVar9);
                FUN_710392eb40((ulong)ppplVar9);
              }
              uVar11 = uVar11 - 1;
              pppplVar8 = pppplVar8 + 3;
            } while (uVar11 != 0);
          }
          pppplVar8 = local_6a0;
          if (local_6a0 != local_688) {
            nu::VirtualFreeHook(local_6a0);
            FUN_710392eb40((ulong)pppplVar8);
          }
        }
        pppplVar8 = local_6c8;
        local_698 = ((long)pppplVar6 - (long)pppplVar10 >> 3) * -0x5555555555555555;
        local_6a0 = pppplVar10;
        local_690 = uVar2;
        if (((ulong)local_6d8 & 1) != 0) {
          nu::VirtualFreeHook(local_6c8);
          FUN_710392eb40((ulong)pppplVar8);
        }
        uVar13 = uVar13 + 1;
      }
    }
    local_6e8 = (long *)0x0;
    local_6e0 = 0;
    local_6f8 = &PTR_FUN_7105239430;
    local_6f0 = (long *)0x0;
    if ((*(long **)(param_3 + 0x10) != (long *)0x0) &&
       (**(long **)(param_3 + 0x10) == *(long *)(param_3 + 0x18))) {
      local_6f0 = *(long **)(param_3 + 8);
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined8 *)(param_3 + 8) = 0;
      if (local_6f0 == (long *)0x0) {
        local_6e0 = 0;
        local_6e8 = (long *)0x0;
      }
      else {
        local_6e8 = (long *)local_6f0[1];
        local_6e0 = *local_6e8;
      }
    }
    FUN_71038cf720(param_1,(long)&local_6c0,(long)&local_6f8,param_4,param_5,param_6,param_7,param_8
                  );
    local_6f8 = &PTR_FUN_7105239430;
    if (((local_6e8 != (long *)0x0) && (*local_6e8 == local_6e0)) && (local_6f0 != (long *)0x0)) {
      (**(code **)(*local_6f0 + 8))();
    }
    if (local_698 != 0) {
      pppplVar8 = local_6a0 + 2;
      uVar11 = local_698;
      do {
        if (((ulong)pppplVar8[-2] & 1) != 0) {
          ppplVar9 = *pppplVar8;
          nu::VirtualFreeHook(ppplVar9);
          FUN_710392eb40((ulong)ppplVar9);
        }
        uVar11 = uVar11 - 1;
        pppplVar8 = pppplVar8 + 3;
      } while (uVar11 != 0);
    }
    pppplVar8 = local_6a0;
    if ((local_690 != 0) && (local_6a0 != local_688)) {
      nu::VirtualFreeHook(local_6a0);
      FUN_710392eb40((ulong)pppplVar8);
    }
  }
  return;
}

