// addr:      7103708800
// offset:    0x3708800
// name:      FUN_7103708800
// mangled:   
// signature: undefined8 __cdecl FUN_7103708800(long param_1, int * param_2)


undefined8 FUN_7103708800(long param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  uint local_90 [4];
  uint auStack_80 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar3 = DAT_71052adb38;
  if (DAT_71052adb38 == 0) {
LAB_71037089ac:
    uVar8 = 0;
  }
  else {
    local_90[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_90 | 4));
    local_1b8._0_4_ = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)&local_1b8);
    memset((void *)(param_1 + 0x48),0,0x108);
    cVar2 = *(char *)(param_1 + 0x14);
    if (cVar2 == '\x03') {
      FUN_7100117100(&local_1b8);
      plVar5 = (long *)FUN_7100145da0(lVar3);
      if (plVar5 != (long *)0x0) {
        iVar1 = *param_2;
        plVar6 = (long *)(**(code **)(*plVar5 + 0x10))();
        plVar7 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5);
        plVar9 = plVar6;
        while ((plVar6 != plVar7 &&
               (((long *)*plVar6 == (long *)0x0 ||
                (iVar4 = (**(code **)(*(long *)*plVar6 + 0x18))(), plVar9 = plVar6, iVar4 != iVar1))
               ))) {
          plVar6 = plVar6 + 1;
          plVar9 = plVar7;
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5);
        if (plVar9 != plVar5) {
          (**(code **)(CONCAT44(local_1b8._4_4_,(int)local_1b8) + 0x38))(&local_1b8,*plVar9);
        }
      }
      FUN_7100145f80((int *)&local_70,lVar3,&local_1b8);
      FUN_71000bcf30((int *)local_90,(int *)&local_70);
      if (local_90[0] != 0) {
        nex_error_info_init((int *)&local_70,local_90,2);
        nex_error_info_init((int *)&local_70,local_90,2);
        *(undefined8 *)(param_1 + 0x38) = uStack_68;
        *(undefined8 *)(param_1 + 0x40) = local_60;
        *(undefined8 *)(param_1 + 0x30) = local_70;
        thunk_FUN_710013f900();
        return 0;
      }
      thunk_FUN_710013f900();
    }
    else if (cVar2 == '\x02') {
      FUN_71000d0390(&local_1b8);
      plVar5 = (long *)FUN_7100145da0(lVar3);
      if (plVar5 != (long *)0x0) {
        iVar1 = *param_2;
        plVar6 = (long *)(**(code **)(*plVar5 + 0x10))();
        plVar7 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5);
        plVar9 = plVar6;
        while ((plVar6 != plVar7 &&
               (((long *)*plVar6 == (long *)0x0 ||
                (iVar4 = (**(code **)(*(long *)*plVar6 + 0x18))(), plVar9 = plVar6, iVar4 != iVar1))
               ))) {
          plVar6 = plVar6 + 1;
          plVar9 = plVar7;
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5);
        if (plVar9 != plVar5) {
          (**(code **)(CONCAT44(local_1b8._4_4_,(int)local_1b8) + 0x38))(&local_1b8,*plVar9);
        }
      }
      if (*(char *)((long)param_2 + 0xd) != '\0') {
        FUN_71000bac60(&local_70,(byte *)(param_2 + 1));
        FUN_71000d0600((int *)auStack_80,(long)&local_1b8,(long)&local_70);
      }
      FUN_7100145f80((int *)&local_70,lVar3,&local_1b8);
      FUN_71000bcf30((int *)local_90,(int *)&local_70);
      if (local_90[0] != 0) {
        nex_error_info_init((int *)&local_70,local_90,2);
        nex_error_info_init((int *)&local_70,local_90,2);
        *(undefined8 *)(param_1 + 0x38) = uStack_68;
        *(undefined8 *)(param_1 + 0x40) = local_60;
        *(undefined8 *)(param_1 + 0x30) = local_70;
        FUN_71000d0510(&local_1b8);
        return 0;
      }
      FUN_71000d0510(&local_1b8);
    }
    else if (cVar2 == '\x01') {
      FUN_7100167a80(&local_1b8);
      plVar5 = (long *)FUN_7100145da0(lVar3);
      if (plVar5 != (long *)0x0) {
        iVar1 = *param_2;
        plVar6 = (long *)(**(code **)(*plVar5 + 0x10))();
        plVar7 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5);
        plVar9 = plVar6;
        while ((plVar6 != plVar7 &&
               (((long *)*plVar6 == (long *)0x0 ||
                (iVar4 = (**(code **)(*(long *)*plVar6 + 0x18))(), plVar9 = plVar6, iVar4 != iVar1))
               ))) {
          plVar6 = plVar6 + 1;
          plVar9 = plVar7;
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5);
        if (plVar9 != plVar5) {
          (**(code **)(CONCAT44(local_1b8._4_4_,(int)local_1b8) + 0x38))(&local_1b8,*plVar9);
        }
      }
      (**(code **)(CONCAT44(local_1b8._4_4_,(int)local_1b8) + 0x50))
                (auStack_80,&local_1b8,"session_simple key",0x13);
      nex_error_info_init((int *)&local_70,auStack_80,2);
      FUN_7100145f80((int *)&local_70,lVar3,&local_1b8);
      FUN_71000bcf30((int *)local_90,(int *)&local_70);
      if (local_90[0] != 0) {
        nex_error_info_init((int *)&local_70,local_90,2);
        nex_error_info_init((int *)&local_70,local_90,2);
        *(undefined8 *)(param_1 + 0x38) = uStack_68;
        *(undefined8 *)(param_1 + 0x40) = local_60;
        *(undefined8 *)(param_1 + 0x30) = local_70;
        FUN_71001772b0(&local_1b8);
        goto LAB_71037089ac;
      }
      FUN_71001772b0(&local_1b8);
    }
    if (local_90[0] == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 4;
      uVar8 = 1;
    }
    else {
      nex_error_info_init((int *)&local_1b8,local_90,2);
      uVar8 = 0;
      *(undefined8 *)(param_1 + 0x38) = uStack_1b0;
      *(undefined8 *)(param_1 + 0x40) = local_1a8;
      *(ulong *)(param_1 + 0x30) = CONCAT44(local_1b8._4_4_,(int)local_1b8);
    }
  }
  return uVar8;
}

