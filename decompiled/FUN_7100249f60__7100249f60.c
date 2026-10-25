// addr:      7100249f60
// offset:    0x249f60
// name:      FUN_7100249f60
// mangled:   
// signature: undefined __cdecl FUN_7100249f60(long param_1)


void FUN_7100249f60(long param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  SystemEventType *pSVar6;
  undefined4 uVar7;
  long *plVar8;
  UserHandle *pUVar9;
  undefined **local_c70;
  code *pcStack_c68;
  undefined8 local_c60;
  undefined1 *puStack_c58;
  undefined4 local_c4c;
  SystemEventType aSStack_c48 [40];
  char local_c20;
  ulong uStack_40;
  undefined8 local_38;
  
  pSVar6 = (SystemEventType *)&local_c70;
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar8 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar4 == 0) {
    uVar7 = 0x80010004;
  }
  else {
    local_c20 = '\0';
    nn::account::AsyncContext::GetSystemEvent((SystemEvent *)(*(long *)(param_1 + 0x108) + 8));
    uVar5 = nn::os::TimedWaitSystemEvent(aSStack_c48,0);
    if (local_c20 != '\0') {
      nn::os::DestroySystemEvent(aSStack_c48);
    }
    if ((uVar5 & 1) == 0) {
      FUN_71001d6410(param_1,1);
      *(undefined4 *)(param_1 + 0x44) = 0x10;
      return;
    }
    iVar1 = nn::account::AsyncContext::GetResult();
    *(int *)(param_1 + 0xa8) = iVar1;
    if (iVar1 == 0) {
      FUN_71001d4640(param_1 + 0xb0);
      pUVar9 = *(UserHandle **)(param_1 + 0xe0);
      iVar1 = nn::account::GetNetworkServiceAccountId((NetworkServiceAccountId *)&local_38,pUVar9);
      *(int *)(param_1 + 0xa8) = iVar1;
      if (iVar1 == 0) {
        uVar2 = nn::account::LoadNetworkServiceAccountIdTokenCache
                          (&uStack_40,(char *)aSStack_c48,0xc01,pUVar9);
        *(uint *)(param_1 + 0xa8) = uVar2;
        if (uVar2 == 0) {
          FUN_71001b3cb0(*(long *)(param_1 + 0xe8),(char *)aSStack_c48);
          **(undefined8 **)(param_1 + 0xf0) = local_38;
          local_c4c = 0x10001;
        }
        else {
          if ((((uVar2 & 0x1ff) == 0x7c) && ((uVar2 >> 9 & 0x1fff) - 0x1ae < 0x46)) &&
             (*(uint *)(param_1 + 0x100) < *(uint *)(param_1 + 0x104))) {
            *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) + 1;
            local_c70 = &PTR_FUN_7104f56e28;
            pcStack_c68 = FUN_7100249f60;
            local_c60 = 0;
            puStack_c58 = &DAT_71044114cc;
            FUN_71001d3d60(param_1,(long)&local_c70);
            return;
          }
          local_c4c = 0x80680010;
        }
        FUN_71001b4200((undefined4 *)&local_c70,&local_c4c);
        goto LAB_710024a078;
      }
    }
    uVar7 = 0x80680010;
  }
  local_c70 = (undefined **)CONCAT44(local_c70._4_4_,uVar7);
  FUN_71001b4200((undefined4 *)aSStack_c48,(undefined4 *)&local_c70);
  pSVar6 = aSStack_c48;
LAB_710024a078:
  FUN_7100249e20(param_1,(int *)pSVar6);
  return;
}

