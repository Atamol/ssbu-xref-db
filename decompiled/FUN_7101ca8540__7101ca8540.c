// addr:      7101ca8540
// offset:    0x1ca8540
// name:      FUN_7101ca8540
// mangled:   
// signature: undefined __cdecl FUN_7101ca8540(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ca8540(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined **local_a8;
  ulong local_a0;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  if ((*(int *)(*(long *)(param_1 + 0x218) + 0x160) < 1) && (*(int *)(param_1 + 0x138) != 10)) {
    if (0x12 < *(uint *)(param_1 + 0x134)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 10;
  }
  FUN_7103776390(&local_40,(undefined8 *)(**(long **)(param_1 + 0x150) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (*(int *)(param_1 + 0x220) != 1) {
    if (*(int *)(param_1 + 0x220) == 2) {
      FUN_7103778300(0x3f800000,local_38,0x710443327f);
      FUN_7103776910(&local_a8,(long)&local_40,(long ****)"set_txt_id",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar4 = local_a0;
      if (*(long **)(local_a0 + 0x10) != (long *)0x0) {
        FUN_71037a28a0(*(long **)(local_a0 + 0x10),(byte *)(param_1 + 0x29c));
      }
      local_a8 = &PTR_FUN_710523d9a8;
      local_a0 = 0;
      if (uVar4 == 0) goto LAB_7101ca8c70;
    }
    else {
      FUN_7103778300(0x3f800000,local_38,0x7104433255);
      FUN_7103776640(&local_a8,(long)&local_40,(byte ****)"set_parts_scr_txt_word",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_50,(long)&local_a8,(long ****)"set_txt_mask",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar4 = local_48;
      if (*(long **)(local_48 + 0x10) != (long *)0x0) {
        param_3 = (long ****)&DAT_ffffffff;
        param_4 = (byte ****)0x1;
        FUN_71037a2270(*(long **)(local_48 + 0x10),(ushort *)(param_1 + 0x22c),0xffffffff,1);
      }
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_7103776910(&local_50,(long)&local_a8,(long ****)"set_txt_main",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar4 = local_48;
      if (*(long **)(local_48 + 0x10) != (long *)0x0) {
        FUN_71037a2270(*(long **)(local_48 + 0x10),(ushort *)(param_1 + 0x22c),0xffffffff,1);
      }
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      uVar4 = local_a0;
      FUN_7103778950(*(long *)(local_a0 + 8));
      if (*(long *)(uVar4 + 8) != 0) {
        puVar7 = *(undefined8 **)(*(long *)(uVar4 + 8) + 0x78);
        if (((DAT_710593ba40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&DAT_710593ba40), iVar1 != 0)) {
          if (((DAT_710593ba48 & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(&DAT_710593ba48), iVar1 != 0)) {
            DAT_710593ba50 = 0;
            __cxa_guard_release(&DAT_710593ba48);
          }
          DAT_710593ba58 = &DAT_710593ba50;
          __cxa_guard_release(&DAT_710593ba40);
        }
        if (puVar7 != (undefined8 *)0x0) {
          for (puVar2 = (undefined8 *)(**(code **)*puVar7)(puVar7); puVar2 != (undefined8 *)0x0;
              puVar2 = (undefined8 *)*puVar2) {
            if ((undefined8 **)puVar2 == &DAT_710593ba58) {
              lVar6 = puVar7[3];
              *(undefined4 *)(puVar7 + 0xb) = *(undefined4 *)((long)puVar7 + 0x54);
              if (lVar6 != 0) {
                *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)((long)puVar7 + 0x54);
                *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
              }
              lVar6 = puVar7[4];
              if (lVar6 != 0) {
                *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(puVar7 + 0xb);
                *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
              }
              if ((long *)puVar7[5] != (long *)0x0) {
                (**(code **)(*(long *)puVar7[5] + 0x180))(0);
              }
              plVar3 = (long *)puVar7[6];
              if (plVar3 != (long *)0x0) {
                if (*(char *)((long)puVar7 + 99) == '\0') {
                  (**(code **)(*plVar3 + 0x180))(0);
                }
                else {
                  (**(code **)(*plVar3 + 400))();
                }
              }
              *(undefined2 *)((long)puVar7 + 100) = 1;
              break;
            }
          }
        }
      }
      uVar4 = local_a0;
      local_a8 = &PTR_FUN_710523d988;
      local_a0 = 0;
      if (uVar4 == 0) goto LAB_7101ca8c70;
      uVar5 = *(ulong *)(uVar4 + 0x18);
      *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar4 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
    }
    goto LAB_7101ca8c6c;
  }
  FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_parts_requirement_00",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  switch(*(undefined4 *)(param_1 + 0x2a8)) {
  case 0:
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x150) + 0x10),0x7104308668);
    FUN_7103776910(&local_a8,**(long **)(param_1 + 0x150) + 8,(long ****)"set_parts_requirement",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x150) + 0x10),0x71043ad8b0);
    FUN_7103776910(&local_60,**(long **)(param_1 + 0x150) + 8,(long ****)"set_parts_requirement_00",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7101cf20d0((uint *)&local_a8,*(ulong *)(param_1 + 0x2b0),*(uint *)(param_1 + 0x2b8),param_4,
                   param_5,param_6,param_7,param_8);
    goto LAB_7101ca8b6c;
  case 2:
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x150) + 0x10),0x71043ad8b0);
    FUN_7103776910(&local_60,**(long **)(param_1 + 0x150) + 8,(long ****)"set_parts_requirement_00",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7101cf20d0((uint *)&local_a8,*(ulong *)(param_1 + 0x2c8),*(uint *)(param_1 + 0x2d0),param_4,
                   param_5,param_6,param_7,param_8);
LAB_7101ca8b6c:
    FUN_710377a280((long)&local_60,(byte *)"mnu_share_search_result_message_04",4);
    uVar4 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    goto joined_r0x007101ca8b94;
  case 3:
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x150) + 0x10),0x7104308668);
    FUN_7103776910(&local_a8,**(long **)(param_1 + 0x150) + 8,(long ****)"set_parts_requirement",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 4:
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x150) + 0x10),0x7104308668);
    FUN_7103776910(&local_a8,**(long **)(param_1 + 0x150) + 8,(long ****)"set_parts_requirement",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710377a280((long)&local_a8,(byte *)"mnu_share_search_result_message_03",3);
    goto LAB_7101ca8bfc;
  case 5:
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x150) + 0x10),0x7104308668);
    FUN_7103776910(&local_a8,**(long **)(param_1 + 0x150) + 8,(long ****)"set_parts_requirement",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 6:
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x150) + 0x10),0x7104308668);
    FUN_7103776910(&local_a8,**(long **)(param_1 + 0x150) + 8,(long ****)"set_parts_requirement",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710377a280((long)&local_a8,(byte *)"mnu_share_search_result_message_01",1);
    goto LAB_7101ca8bfc;
  default:
    goto switchD_7101ca8638_default;
  }
  FUN_710377a280((long)&local_a8,(byte *)"mnu_share_search_result_message_02",2);
LAB_7101ca8bfc:
  uVar4 = local_a0;
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = 0;
joined_r0x007101ca8b94:
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
switchD_7101ca8638_default:
  uVar4 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar4 != 0) {
LAB_7101ca8c6c:
    FUN_710392eb40(uVar4);
  }
LAB_7101ca8c70:
  uVar4 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  return;
}

