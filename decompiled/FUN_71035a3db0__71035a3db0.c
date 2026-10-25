// addr:      71035a3db0
// offset:    0x35a3db0
// name:      FUN_71035a3db0
// mangled:   
// signature: undefined __cdecl FUN_71035a3db0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71035a3db0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong uVar6;
  void *__src;
  undefined8 uVar7;
  long ****pppplVar8;
  long *plVar9;
  undefined8 uVar10;
  long ***ppplVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long ***local_40;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 8) == -1) {
    uVar3 = *(uint *)(param_1 + 0x38);
    if ((int)uVar3 < 0) {
      if (((ulong)(*(long *)(DAT_7105338f68 + 0x60) - *(long *)(DAT_7105338f68 + 0x58) >> 3) <=
           (ulong)(uVar3 & 0x7fffffff)) ||
         (lVar13 = *(long *)(*(long *)(DAT_7105338f68 + 0x58) + (ulong)(uVar3 & 0x7fffffff) * 8),
         lVar13 == 0)) {
        lVar13 = *(long *)(DAT_7105338f68 + 0x28);
      }
    }
    else {
      lVar12 = *(long *)(DAT_7105338f68 + 0x28);
      if ((*(uint *)(DAT_7105338f68 + 0x38) <= uVar3) ||
         (lVar13 = lVar12 + (ulong)uVar3 * 0x100, *(char *)(lVar13 + 0xf8) == '\0')) {
        plVar9 = *(long **)(lVar12 + 0x40);
        goto joined_r0x0071035a406c;
      }
    }
    plVar9 = *(long **)(lVar13 + 0x40);
    lVar12 = lVar13;
joined_r0x0071035a406c:
    if ((plVar9 != (long *)0x0) && (*plVar9 == *(long *)(lVar12 + 0x48))) {
      puVar14 = *(undefined8 **)(param_1 + 0x30);
      (**(code **)(**(long **)(lVar12 + 0x38) + 0x20))(&local_60);
      uVar10 = *(undefined8 *)((long)local_58 + 0x1c0);
      uVar7 = (*DAT_7105940d30)(*puVar14);
      if (((DAT_7105335e18 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_7105335e18), iVar4 != 0))
      {
        FUN_71037c3a70(&DAT_7105335b90);
        _DAT_7105335bc8 = 0;
        DAT_7105335bb8 = 0;
        DAT_7105335bc0._0_5_ = 0;
        DAT_7105335bc0._5_3_ = 0;
        DAT_7105335b90 = &PTR_FUN_7105265b08;
        DAT_7105335ba8 = 0;
        DAT_7105335bb0 = 0;
        std::recursive_mutex::recursive_mutex((recursive_mutex *)&DAT_7105335bd0);
        DAT_7105335b90 = &PTR_FUN_7105265b48;
        DAT_7105335bf0 = &PTR_FUN_7105265b98;
        DAT_7105335bf8 = 0;
        DAT_7105335c38 = 0;
        DAT_7105335c40 = 0;
        DAT_7105335c48 = 0;
        _DAT_7105335c30 = 1;
        DAT_7105335c50 = 0x20000;
        DAT_7105335c20 = 0;
        DAT_7105335c28 = 0;
        DAT_7105335c10 = 0;
        DAT_7105335c18 = 0;
        DAT_7105335c00 = 0;
        DAT_7105335c08 = 0;
        DAT_7105335c88 = 0;
        _DAT_7105335c90 = 0;
        DAT_7105335c78 = 0;
        DAT_7105335c80 = 0;
        DAT_7105335c68 = 0;
        DAT_7105335c70 = 0;
        DAT_7105335c58 = 0;
        DAT_7105335c60 = 0;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_7105335e18);
      }
      FUN_71037feb60((undefined4 *)&local_60,uVar10,uVar7,0,*(undefined4 *)(puVar14 + 0x23),
                     *(undefined4 *)((long)puVar14 + 0x11c),1);
    }
    return;
  }
  lVar13 = *(long *)(param_1 + 0x28);
  local_58 = (undefined1 *)0x0;
  local_50 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  ppplVar11 = (long ***)(lVar13 + 0xb0);
  if (ppplVar11 == (long ***)0x0) goto LAB_71035a3ee0;
  if ((long)ppplVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  puVar5 = (undefined1 *)
           FUN_710392e290(0x10,ppplVar11,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined1 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      pppplVar8 = &local_40;
      local_40 = ppplVar11;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined1 *)
                   FUN_710392e290(0x10,ppplVar11,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         puVar5 != (undefined1 *)0x0)) goto LAB_71035a3e44;
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_71035a3e44:
  local_50 = puVar5 + (long)ppplVar11;
  local_58 = puVar5;
  if (((ulong)ppplVar11 & 1) != 0) {
    ppplVar11 = (long ***)(lVar13 + 0xaf);
    local_58 = puVar5 + 1;
    *puVar5 = 0;
  }
  local_60 = puVar5;
  if (lVar13 != -0xaf) {
    do {
      *local_58 = 0;
      local_58[1] = 0;
      local_58 = local_58 + 2;
      ppplVar11 = (long ***)((long)ppplVar11 - 2);
    } while (ppplVar11 != (long ***)0x0);
  }
LAB_71035a3ee0:
  puVar5 = local_60;
  __src = (void *)(*DAT_7105940d28)(**(undefined8 **)(param_1 + 0x30));
  memcpy(puVar5,__src,*(size_t *)(*(long *)(param_1 + 0x30) + 0x130));
  puVar2 = (undefined4 *)(puVar5 + *(long *)(param_1 + 0x28));
  *puVar2 = (int)*(long *)(param_1 + 0x28);
  puVar2[0xf] = 0;
  *(undefined8 *)(puVar2 + 0xd) = 0;
  *(undefined8 *)(puVar2 + 0xb) = 0;
  *(undefined8 *)(puVar2 + 9) = 0;
  *(undefined8 *)(puVar2 + 7) = 0;
  *(undefined8 *)(puVar2 + 5) = 0;
  *(undefined8 *)(puVar2 + 3) = 0;
  *(undefined8 *)(puVar2 + 1) = 0;
  lVar13 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(local_60 + lVar13 + 0x40) = 0x544e5820;
  pcVar1 = local_60 + lVar13 + 0x51;
  pcVar1[0] = 'u';
  pcVar1[1] = 'r';
  pcVar1[2] = 'e';
  pcVar1[3] = 'T';
  pcVar1[4] = 'a';
  pcVar1[5] = 's';
  pcVar1[6] = 'k';
  pcVar1[7] = '\0';
  pcVar1 = local_60 + lVar13 + 0x4c;
  pcVar1[0] = 'g';
  pcVar1[1] = 'T';
  pcVar1[2] = 'e';
  pcVar1[3] = 'x';
  pcVar1[4] = 't';
  pcVar1[5] = 'u';
  pcVar1[6] = 'r';
  pcVar1[7] = 'e';
  pcVar1 = local_60 + lVar13 + 0x44;
  pcVar1[0] = 'E';
  pcVar1[1] = 'x';
  pcVar1[2] = 'p';
  pcVar1[3] = 'o';
  pcVar1[4] = 'r';
  pcVar1[5] = 't';
  pcVar1[6] = 'i';
  pcVar1[7] = 'n';
  *(undefined4 *)(local_60 + lVar13 + 0x84) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(local_60 + lVar13 + 0x88) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(local_60 + lVar13 + 0x8c) = 1;
  *(undefined4 *)(local_60 + lVar13 + 0x90) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 **)(local_60 + lVar13 + 0x94) = &DAT_100000002;
  *(undefined8 *)(local_60 + lVar13 + 0x9c) = 0x100000000;
  *(int *)(local_60 + lVar13 + 0xa4) = (int)*(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(local_60 + *(long *)(param_1 + 0x28) + 0xa8) = 0x254455820;
  lVar13 = *(long *)(param_1 + 0x40);
  if ((lVar13 != 0) && (std::mutex::lock(), (*(byte *)(lVar13 + 0x40) & 1) == 0)) {
    local_40 = (long ***)0x0;
    lVar12 = *(long *)(lVar13 + 0x10);
    std::exception_ptr::~exception_ptr((exception_ptr *)&local_40);
    if (lVar12 == 0) {
      *(undefined1 **)(lVar13 + 0x48) = local_60;
      *(undefined1 **)(lVar13 + 0x50) = local_58;
      *(undefined1 **)(lVar13 + 0x58) = local_50;
      local_58 = (undefined1 *)0x0;
      local_50 = (undefined1 *)0x0;
      local_60 = (undefined1 *)0x0;
      *(uint *)(lVar13 + 0x40) = *(uint *)(lVar13 + 0x40) | 5;
      std::condition_variable::notify_all();
      std::mutex::unlock();
      if (local_60 == (undefined1 *)0x0) {
        return;
      }
      local_58 = local_60;
      FUN_710392eb40((ulong)local_60);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

