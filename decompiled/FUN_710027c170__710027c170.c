// addr:      710027c170
// offset:    0x27c170
// name:      FUN_710027c170
// mangled:   
// signature: undefined __cdecl FUN_710027c170(undefined4 * param_1, long param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, byte param_7, undefined8 param_8, void * param_9, undefined8 * param_10, undefined8 param_11, undefined1 * param_12)


void FUN_710027c170(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6,byte param_7,undefined8 param_8,
                   void *param_9,undefined8 *param_10,undefined8 param_11,undefined1 *param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  void *pvVar6;
  size_t sVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined **local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  void *pvStack_68;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710027c20c:
    if ((*plVar10 == 0) || (lVar8 = *(long *)(*plVar10 + 0x10), lVar8 == 0)) goto LAB_710027c23c;
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 == 0) goto LAB_710027c20c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710027c20c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710027c23c:
    lVar8 = 0;
  }
  plVar10 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  *(undefined8 *)(param_2 + 0xa8) = param_4;
  *(undefined8 *)(param_2 + 0xb0) = param_5;
  *(undefined4 *)(param_2 + 0xbc) = param_6;
  *(undefined4 *)(param_2 + 0xa0) = param_3;
  *(byte *)(param_2 + 0xb8) = param_7 & 1;
  *(undefined8 *)(param_2 + 0x1b8) = param_8;
  if ((undefined8 *)(param_2 + 0x5d8) != param_10) {
    FUN_7100292a60((undefined8 *)(param_2 + 0x5d8),(undefined8 *)*param_10,(undefined8 *)param_10[1]
                  );
  }
  *(undefined8 *)(param_2 + 0x5f0) = param_11;
  *param_12 = 0;
  *(undefined1 **)(param_2 + 0x600) = param_12;
  *(undefined1 *)(param_2 + 0x630) = 0;
  if (param_9 == (void *)0x0) {
    *(undefined8 *)(param_2 + 0x1d8) = 0;
    *(undefined8 *)(param_2 + 0x1e0) = 0;
    *(undefined8 *)(param_2 + 0x1e8) = 0;
    *(undefined4 *)(param_2 + 0x3d4) = 0;
    memset((void *)(param_2 + 0x1f0),0,0x1e0);
    FUN_71001cde10(&local_90);
    local_70 = 0x1f8;
    pvStack_68 = (void *)(param_2 + 0x1d8);
    uVar4 = (*(code *)local_90[6])(&local_90,&pvStack_68,&local_70,1);
    *(undefined4 *)(param_2 + 0x3d0) = uVar4;
    FUN_71001cb860();
LAB_710027c3a4:
    memcpy((void *)(param_2 + 0x3d8),(void *)(param_2 + 0x1d8),0x200);
    plVar9 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    lVar8 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_2 + 0xa0));
    FUN_710022e7e0(param_2 + 0xc0,*(long *)(lVar8 + 0xb8));
    local_90 = &PTR_FUN_7104f56e28;
    pcStack_88 = FUN_710027c4b0;
    local_80 = 0;
    puStack_78 = &DAT_71044114cc;
    FUN_71001d3d60(param_2,(long)&local_90);
    local_90 = (undefined **)CONCAT71(local_90._1_7_,1);
    FUN_71001b4220(param_1,(char *)&local_90);
    goto LAB_710027c468;
  }
  FUN_71001cde10(&local_90);
  iVar2 = *(int *)((long)param_9 + 0x1f8);
  local_70 = 0x1f8;
  pvStack_68 = param_9;
  iVar3 = (*(code *)local_90[6])(&local_90,&pvStack_68,&local_70,1);
  if (iVar2 == iVar3) {
    pvVar6 = memchr((char *)((long)param_9 + 0x18),0,0x1e0);
    if (pvVar6 == (void *)0x0) goto LAB_710027c320;
    sVar7 = strlen((char *)((long)param_9 + 0x18));
    FUN_71001cb860();
    if (sVar7 != 0) {
      memcpy((void *)(param_2 + 0x1d8),param_9,0x200);
      goto LAB_710027c3a4;
    }
  }
  else {
LAB_710027c320:
    FUN_71001cb860();
  }
  local_90 = (undefined **)CONCAT44(local_90._4_4_,0x80690008);
  FUN_71001b4200(param_1,(undefined4 *)&local_90);
LAB_710027c468:
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return;
}

