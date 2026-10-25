// addr:      7101ee8290
// offset:    0x1ee8290
// name:      FUN_7101ee8290
// mangled:   
// signature: undefined __cdecl FUN_7101ee8290(undefined8 * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ee8290(undefined8 *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong *puVar7;
  byte *pbVar8;
  long ****pppplVar9;
  long lVar10;
  long lVar11;
  undefined **local_1058;
  ulong local_1050;
  long ***local_1048;
  ulong local_1040;
  int local_48 [2];
  
  if (*(int *)((long)param_1 + 0x10c) == 0) {
    *(undefined4 *)((long)param_1 + 0x1c4) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x3a) == '\0') {
    if ((param_1[0x37] & 0xff00000000000000) != 0x800000000000000) {
      return;
    }
    if ((param_1[0x37] & 0xffffffffff) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x38) <= *(int *)((long)param_1 + 0x1c4)) {
      return;
    }
    iVar2 = *(int *)((long)param_1 + 0x1c4) + 1;
    *(int *)((long)param_1 + 0x1c4) = iVar2;
    if (*(int *)(param_1 + 0x38) <= iVar2) {
      if ((*(long **)(param_1[0x29] + 8) == (long *)0x0) ||
         (uVar3 = (**(code **)(**(long **)(param_1[0x29] + 8) + 0x148))(), (uVar3 & 1) == 0)) {
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
          FUN_7101764000();
          param_3 = &PTR_LOOP_7104f17000;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        FUN_7103776640(&local_1048,*(long *)*param_1 + 8,(byte ****)"set_txt_keyhelp",param_3,
                       param_4,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_1058,(long)&local_1048,(long ****)"set_txt_help",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        uVar3 = local_1040;
        local_1048 = (long ***)&PTR_FUN_710523d988;
        local_1040 = 0;
        if (uVar3 != 0) {
          uVar5 = *(ulong *)(uVar3 + 0x18);
          *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar3 + 0x18) = 0;
          if (uVar5 != 0) {
            FUN_710392eb40(uVar5);
          }
          FUN_710392eb40(uVar3);
        }
        uVar3 = local_1050;
        plVar4 = *(long **)(local_1050 + 0x10);
        if (plVar4 != (long *)0x0) {
          pbVar8 = (byte *)plVar4[0x1c];
          *(undefined4 *)((long)plVar4 + 0x25c) = DAT_7105307b68._4_4_;
          if (((pbVar8 != (byte *)0x0) && (*pbVar8 != 0x23)) && (*pbVar8 != 0x40)) {
            puVar6 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar8);
            local_48[0] = *(int *)((long)plVar4 + 0x25c);
            memset(&local_1048,0,0x1000);
            uVar1 = FUN_71037ae170((long)&local_1048,puVar6,local_48);
            param_3 = (undefined **)(ulong)uVar1;
            param_4 = (byte ****)0x0;
            FUN_71037a2270(plVar4,(ushort *)&local_1048,uVar1,0);
          }
        }
        FUN_710377aee0(0x3f800000,(long)(param_1 + 0x28));
        local_1058 = &PTR_FUN_710523d9a8;
        local_1050 = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
      }
      (**(code **)(*(long *)param_1[0x32] + 0x60))((long *)param_1[0x32],1);
      uVar3 = param_1[0x37];
      if ((uVar3 & 0xff00000000000000) != 0x800000000000000) {
        return;
      }
      if ((uVar3 & 0xffffffffff) == 0) {
        return;
      }
      puVar7 = (ulong *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                       param_8);
      if (puVar7 == (ulong *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1058 = (undefined **)((ulong)local_1058 & 0xffffffff00000000);
          local_1048 = (long ***)&DAT_00000008;
          pppplVar9 = &local_1048;
          uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1058);
          if (((uVar5 & 1) != 0) &&
             (puVar7 = (ulong *)FUN_710392e290(0x10,8,pppplVar9,param_4,param_5,param_6,param_7,
                                               param_8), puVar7 != (ulong *)0x0))
          goto LAB_7101ee8554;
        }
        puVar7 = (ulong *)0x0;
      }
LAB_7101ee8554:
      *puVar7 = uVar3;
      uVar5 = FUN_71032b6c10(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1b8),uVar3);
      if ((int)uVar5 != -1) {
        uVar5 = FUN_71032b6c10(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1b8),uVar3);
        uVar1 = (uint)uVar5;
        if (uVar1 != 0xffffffff) {
          if (uVar1 < 2000) {
            if (*(char *)(*DAT_7105314510 + 1) == '\0') {
              plVar4 = *(long **)(**(long **)(*DAT_7105314510 + 8) + 0x18);
              uVar1 = *(uint *)(plVar4 + 1);
              if (0x28 < uVar1) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar3 = FUN_71032b6c10(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) +
                                                         (long)(int)uVar1 * 8 + 8) + 8),uVar3);
              uVar1 = (uint)uVar3;
              if (uVar1 < 0x7e0) {
                lVar10 = *plVar4;
                lVar11 = (ulong)(uVar1 >> 5) * 4;
                *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) | 1 << (ulong)(uVar1 & 0x1f)
                ;
              }
            }
          }
          else {
            uVar1 = uVar1 - 2000;
            if (uVar1 < 0x200) {
              lVar10 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + (ulong)(uVar1 >> 5) * 4
              ;
              *(uint *)(lVar10 + 0x6544) = *(uint *)(lVar10 + 0x6544) | 1 << (ulong)(uVar1 & 0x1f);
            }
          }
        }
      }
      if (puVar7 != (ulong *)0x0) {
        FUN_710392eb40((ulong)puVar7);
      }
      return;
    }
  }
  else {
    *(int *)((long)param_1 + 0x1c4) = *(int *)((long)param_1 + 0x1c4) + 1;
  }
  uVar3 = (**(code **)(*(long *)param_1[0x32] + 0x68))();
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar4 = *(long **)(param_1[0x29] + 8);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x140))(plVar4,0);
  }
  FUN_710377b140((long)(param_1 + 0x2a));
                    /* WARNING: Could not recover jumptable at 0x007101ee832c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x32] + 0x60))((long *)param_1[0x32],0);
  return;
}

