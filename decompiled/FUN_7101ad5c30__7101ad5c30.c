// addr:      7101ad5c30
// offset:    0x1ad5c30
// name:      FUN_7101ad5c30
// mangled:   
// signature: undefined __cdecl FUN_7101ad5c30(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ad5c30(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  undefined4 local_110 [2];
  undefined **local_108;
  long local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined **local_d0;
  ulong local_c8;
  uint local_c0 [2];
  undefined1 local_b8 [72];
  
  uVar3 = FUN_710323cb80(**(long **)(param_1 + 0x170),param_2,param_3,param_4,param_5,param_6,
                         param_7,param_8);
  if ((((uVar3 & 1) != 0) &&
      (uVar3 = FUN_710259d3a0(*(long *)(*DAT_7105329f98 + 0x20),0,param_3,param_4,param_5,param_6,
                              param_7,param_8), (uVar3 & 1) != 0)) &&
     (uVar3 = FUN_710259d3a0(*(long *)(*DAT_7105329f98 + 0x20),2,param_3,param_4,param_5,param_6,
                             param_7,param_8), (uVar3 & 1) != 0)) {
    uVar3 = 0;
    bVar2 = false;
    uVar5 = extraout_x1;
    do {
      if (*(char *)(param_1 + uVar3 + 0x560) != '\0') {
        param_3 = (long *********)(uVar3 & 0xffffffff);
        local_b8[0] = 0;
        local_c0[0] = 0;
        local_c0[1] = 0;
        FUN_710062dc20(local_c0,"set_btn_item_%02d");
        if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        FUN_7103776640(&local_d0,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,
                       (byte ****)local_b8,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar9 = local_c8;
        FUN_7103778300(0x3f800000,local_c8,0x71044225ea);
        uVar5 = extraout_x1_00;
        if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
          param_3 = (long *********)&DAT_00000004;
          uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x18b84eac57,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8);
          uVar5 = extraout_x1_01;
          if ((uVar4 & 1) == 0) goto LAB_7101ad5dcc;
          FUN_71024076d0(local_110,0x18b84eac57);
          uVar5 = extraout_x1_02;
          if (((local_100 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_f8 == DAT_7106dd53ac))
          {
            piVar8 = (int *)(local_100 + 0x38);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar2) {
                *piVar8 = *piVar8 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              uVar9 = local_c8;
            } while (cVar1 != '\0');
          }
        }
        else {
LAB_7101ad5dcc:
          local_f8 = 0x87650000000000;
          local_110[0] = 0;
          local_e8 = 0xffffffffffffffff;
          local_e0 = 0;
          uStack_d8 = 0;
        }
        local_108 = &PTR_FUN_7104f73d50;
        local_100 = 0;
        local_f0 = 0;
        local_d0 = &PTR_FUN_710523d988;
        local_c8 = 0;
        if (uVar9 != 0) {
          uVar4 = *(ulong *)(uVar9 + 0x18);
          *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar9 + 0x18) = 0;
          if (uVar4 != 0) {
            FUN_710392eb40(uVar4);
          }
          FUN_710392eb40(uVar9);
          uVar5 = extraout_x1_03;
        }
        bVar2 = true;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 10);
    if (bVar2) {
      iVar6 = *(int *)(param_1 + 0x15c);
      if ((iVar6 < 1) ||
         (*(int *)(param_1 + 0x15c) = iVar6 + -1, bVar2 = iVar6 < 0x13, iVar6 = iVar6 + -1, bVar2))
      {
        uVar7 = (uint)((long)iVar6 + 1);
        *(uint *)(param_1 + 0x15c) = uVar7;
        if (0x12 < uVar7) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)(param_1 + ((long)iVar6 + 1) * 4 + 0x110) = 3;
      }
    }
    else {
      FUN_7101ad8100(param_1,uVar5,(char *)param_3,param_4,param_5,param_6,param_7,param_8);
      if (0 < *(int *)(param_1 + 0x15c)) {
        *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + -1;
      }
    }
  }
  return;
}

