// addr:      71019b8840
// offset:    0x19b8840
// name:      FUN_71019b8840
// mangled:   
// signature: undefined __cdecl FUN_71019b8840(ulong param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019b8840(ulong param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  ulong local_118;
  long *local_110;
  uint local_e0 [2];
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  uint *local_c0;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
    *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600) + 0x4aa) = 1;
    if (*(char *)(param_1 + 0x410) != '\0') {
      return;
    }
LAB_71019b8988:
    lVar12 = *(long *)(param_1 + 0x350);
LAB_71019b898c:
    *(undefined4 *)(lVar12 + 0xb0) = 0xffffffff;
    if (*(uint *)(lVar12 + 0x9c) < 0x13) {
      *(undefined4 *)(lVar12 + (long)(int)*(uint *)(lVar12 + 0x9c) * 4 + 0x50) = 1;
      *(undefined1 *)(param_1 + 0x410) = 1;
      return;
    }
    goto LAB_71019b91d0;
  }
  if (*(char *)(param_1 + 0x410) == '\0') {
    lVar12 = *(long *)(DAT_710532f7b0 + 8);
    std::recursive_mutex::lock();
    cVar3 = *(char *)(lVar12 + 0x10a51);
    std::recursive_mutex::unlock();
    if (cVar3 == '\0') {
      lVar12 = *(long *)(param_1 + 0x350);
      uVar15 = *(uint *)(lVar12 + 0xb0);
      if (uVar15 != 0xffffffff) {
        if (9 < uVar15) goto LAB_71019b91d0;
        lVar11 = *(long *)(*(long *)(DAT_71053398d8 + 8) + (long)(int)uVar15 * 8 + 8);
        if ((*(int *)(lVar11 + 0xa8) == 1) || (*(char *)(lVar11 + 0xdd) != '\0')) {
          *(undefined2 *)(lVar11 + 0xdd) = 0x100;
          if (0x12 < *(uint *)(lVar11 + 0xa4)) goto LAB_71019b91d0;
          *(undefined4 *)(lVar11 + (long)(int)*(uint *)(lVar11 + 0xa4) * 4 + 0x58) = 2;
          goto LAB_71019b8988;
        }
      }
      goto LAB_71019b898c;
    }
  }
  else {
    FUN_7101990680(*(long *)(param_1 + 0x350));
    if (*(int *)(*(long *)(param_1 + 0x350) + 0xa0) == 0) {
      *(undefined1 *)(param_1 + 0x410) = 0;
      uVar15 = *(uint *)(*(long *)(param_1 + 0x350) + 0xb0);
      lVar12 = param_1 + 0x28;
      FUN_7103776910(&local_70,lVar12,(long ****)"set_txt_string",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      if (uVar15 == 0xffffffff) {
        if (*(int *)(*(long *)(DAT_710532f7b0 + 8) + 0x210) == 3) {
          pcVar7 = "pop_amiibo_read_nfc_invalid";
        }
        else {
          pcVar7 = "mnu_amiibo_writing_controller_connect";
        }
      }
      else {
        iVar8 = *(int *)(param_1 + 0x358);
        if (iVar8 == 2) {
          pcVar7 = "mnu_amiibo_journey_start_nfc_touch";
        }
        else if (iVar8 == 3) {
          pcVar7 = "mnu_amiibo_journey_save_nfc_touch";
        }
        else if (iVar8 == 4) {
          pcVar7 = "mnu_amiibo_journey_stop_nfc_touch";
        }
        else {
          pcVar7 = "mnu_amiibo_writing_howto";
        }
      }
      FUN_710377a120((long)&local_70,pcVar7,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_80,lVar12,(byte ****)"set_parts_controller_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776640(&local_90,lVar12,(byte ****)"set_parts_controller_01",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar2 = local_78;
      FUN_7103778300(0x3f800000,local_78,0x71043190b3);
      uVar5 = local_88;
      FUN_7103778300(0x3f800000,local_88,0x71043190b3);
      if ((*(char *)(param_1 + 0x414) == '\0') || (*(uint *)(param_1 + 0x418) != uVar15)) {
        *(uint *)(param_1 + 0x418) = uVar15;
        *(undefined1 *)(param_1 + 0x414) = 1;
        if (uVar15 == 0xffffffff) {
          uVar15 = 0x811c9dc5;
          FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x30),0x710435ae38);
          local_e0[0] = 0;
          local_e0[1] = 0xe;
          uStack_d8 = 0x6c6c6f72746e6f63;
          local_d0 = 0x705f7265;
          local_cc = 0x6f72;
          uVar14 = 99;
          local_ca = 0;
          pbVar10 = (byte *)((long)&uStack_d8 + 1);
          local_e0[0] = uVar15;
          do {
            local_e0[0] = local_e0[0] * 0x89 ^ uVar14;
            uVar14 = (uint)*pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (uVar14 != 0);
          local_e0[1] = 0xe;
          FUN_7103778300(0x3f800000,local_78,(long)&uStack_d8);
          FUN_7103778300(0x3f800000,local_78,0x710426f946);
          local_130 = (undefined *)0x1000000000;
          local_128 = (code *)0x6c6c6f72746e6f63;
          local_120 = 0x725f796f6a5f7265;
          uVar14 = 99;
          local_118 = local_118 & 0xffffffffffffff00;
          pbVar10 = (byte *)((long)&local_128 + 1);
          do {
            uVar15 = uVar15 * 0x89 ^ uVar14;
            uVar14 = (uint)*pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (uVar14 != 0);
          local_130 = (undefined *)CONCAT44(0x10,uVar15);
          FUN_7103778300(0x3f800000,local_88,(long)&local_128);
          pcVar7 = "indicator_off";
        }
        else {
          FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x30),0x710439cd03);
          puVar9 = &DAT_7105339830;
          if ((((uVar15 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
              (puVar9 = (undefined8 *)(&DAT_7105339860)[(int)uVar15], puVar9 == (undefined8 *)0x0))
             || (uVar14 = *(int *)(puVar9[2] + 0x9c) - 1, 6 < uVar14)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 4;
            if (uVar14 != 1) {
              uVar6 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar14 * 4);
            }
          }
          FUN_710339d9f0(local_e0,uVar6);
          FUN_7103778300(0x3f800000,local_78,(long)&uStack_d8);
          puVar9 = &DAT_7105339830;
          local_88 = local_78;
          if ((((uVar15 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
              (puVar9 = (undefined8 *)(&DAT_7105339860)[(int)uVar15], puVar9 == (undefined8 *)0x0))
             || ((char)((long *)puVar9[2])[0x17] == '\0')) {
LAB_71019b8cc8:
            local_128 = (code *)((ulong)local_128 & 0xffffffffffffff00);
            local_130 = (undefined *)0x811c9dc5;
          }
          else {
            cVar3 = (**(code **)(*(long *)puVar9[2] + 0x20))();
            bVar1 = cVar3 - 1;
            if ((0xe < bVar1) || ((0x2e8aUL >> ((long)(char)bVar1 & 0x3fU) & 1) != 0))
            goto LAB_71019b8cc8;
            FUN_71003a4ca0((uint *)&local_130,"indicator_%d",
                           (ulong)(*(int *)(&DAT_7104753e00 + (long)(char)bVar1 * 4) + 1),param_3,
                           param_4,param_5,param_6,param_7,param_8);
            if (local_130._4_4_ != 0) {
              pcVar7 = (char *)&local_128;
              goto LAB_71019b8ce8;
            }
          }
          pcVar7 = "indicator_off";
        }
LAB_71019b8ce8:
        FUN_7103778300(0x3f800000,local_88,(long)pcVar7);
      }
      local_90 = &PTR_FUN_710523d988;
      local_88 = 0;
      if (uVar5 != 0) {
        uVar4 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar5);
      }
      local_80 = &PTR_FUN_710523d988;
      local_78 = 0;
      if (uVar2 != 0) {
        uVar5 = *(ulong *)(uVar2 + 0x18);
        *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar2 + 0x18) = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40(uVar2);
      }
      uVar5 = local_68;
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      lVar12 = DAT_710532f7b0;
      lVar11 = *(long *)(param_1 + 0x350);
      if (*(int *)(lVar11 + 0xb0) == -1) {
        *(undefined4 *)(lVar11 + 0xb0) = 0xffffffff;
        if (0x12 < *(uint *)(lVar11 + 0x9c)) goto LAB_71019b91d0;
        *(undefined4 *)(lVar11 + (long)(int)*(uint *)(lVar11 + 0x9c) * 4 + 0x50) = 1;
        *(undefined1 *)(param_1 + 0x410) = 1;
      }
      else {
        *(int *)(*(long *)(DAT_710532f7b0 + 8) + 0x178) = *(int *)(lVar11 + 0xb0);
        local_130 = &DAT_71050a7660;
        local_128 = FUN_71019bc2e0;
        local_120 = 0;
        lVar12 = *(long *)(lVar12 + 8);
        local_118 = param_1;
        local_110 = &local_130;
        local_c0 = local_e0;
        FUN_71019bc500((long)&local_130,(undefined8 *)local_e0);
        FUN_71003cb050((long *)local_e0,(long *)(lVar12 + 0x1b0));
        if (local_e0 == local_c0) {
          pcVar13 = *(code **)(*(long *)local_c0 + 0x20);
LAB_71019b8e0c:
          (*pcVar13)();
        }
        else if (local_c0 != (uint *)0x0) {
          pcVar13 = *(code **)(*(long *)local_c0 + 0x28);
          goto LAB_71019b8e0c;
        }
        if (&local_130 == local_110) {
          pcVar13 = *(code **)(*local_110 + 0x20);
LAB_71019b8e38:
          (*pcVar13)();
        }
        else if (local_110 != (long *)0x0) {
          pcVar13 = *(code **)(*local_110 + 0x28);
          goto LAB_71019b8e38;
        }
        lVar12 = *(long *)(DAT_710532f7b0 + 8);
        iVar8 = *(int *)(param_1 + 0x358);
        std::recursive_mutex::lock();
        if (iVar8 == 2) {
          if (*(char *)(lVar12 + 0x10a50) != '\0') {
            *(undefined1 *)(lVar12 + 0x10a51) = 1;
            *(undefined4 *)(lVar12 + 0xa28) = 1;
            *(undefined2 *)(lVar12 + 0xa20) = 0;
            *(undefined1 *)(lVar12 + 0x10a4a) = 1;
            *(undefined4 *)(lVar12 + 0x10a4b) = 0;
            *(undefined1 *)(lVar12 + 0x10a4f) = 1;
LAB_71019b8ef4:
            *(undefined4 *)(lVar12 + 0x214) = 0xffffffff;
            if ((undefined8 *)(lVar12 + 0x10a30) != (undefined8 *)(param_1 + 0x210)) {
              FUN_71014bfc60((undefined8 *)(lVar12 + 0x10a30),*(void **)(param_1 + 0x210),
                             *(long *****)(param_1 + 0x218),param_4,param_5,param_6,param_7,param_8)
              ;
            }
            if (0x12 < *(uint *)(lVar12 + 0x164)) goto LAB_71019b91d0;
            *(undefined4 *)(lVar12 + (long)(int)*(uint *)(lVar12 + 0x164) * 4 + 0x118) = 5;
          }
        }
        else if (*(char *)(lVar12 + 0x10a50) != '\0') {
          *(undefined1 *)(lVar12 + 0x10a51) = 1;
          *(undefined4 *)(lVar12 + 0xa28) = 1;
          *(undefined2 *)(lVar12 + 0xa20) = 0;
          *(undefined1 *)(lVar12 + 0x10a4a) = 1;
          *(undefined1 *)(lVar12 + 0x10a4f) = 0;
          *(undefined4 *)(lVar12 + 0x10a4b) = 0;
          goto LAB_71019b8ef4;
        }
        std::recursive_mutex::unlock();
        uVar15 = *(uint *)(*(long *)(param_1 + 0x350) + 0xb0);
        if (uVar15 != 0xffffffff) {
          puVar9 = &DAT_7105339830;
          if ((uVar15 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) {
            puVar9 = (undefined8 *)(&DAT_7105339860)[(int)uVar15];
            iVar8 = 0;
            if (puVar9 != (undefined8 *)0x0) goto LAB_71019b8f78;
          }
          else {
LAB_71019b8f78:
            uVar14 = *(int *)(puVar9[2] + 0x9c) - 1;
            if (uVar14 < 7) {
              iVar8 = *(int *)(&DAT_7104753de0 + (long)(int)uVar14 * 4);
            }
            else {
              iVar8 = 0;
            }
          }
          fVar16 = 0.0;
          if (1 < iVar8 - 1U) {
            fVar16 = 1.0;
          }
          FUN_710175dfc0(fVar16,1.0,*(long *)(DAT_71052c5120 + 8),uVar15,0x165fc419fc,0,0,0,0,0);
        }
      }
    }
  }
  lVar12 = DAT_710532f7b0;
  if (*(int *)(*(long *)(DAT_710532f7b0 + 8) + 0xa28) == 2) {
    if (*(uint *)(param_1 + 500) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 500) * 4 + 0x1a8) = 4;
      uVar15 = *(uint *)(*(long *)(param_1 + 0x350) + 0xb0);
      if (uVar15 != 0xffffffff) {
        if (9 < uVar15) goto LAB_71019b91d0;
        lVar12 = *(long *)(*(long *)(DAT_71053398d8 + 8) + (long)(int)uVar15 * 8 + 8);
        if ((*(int *)(lVar12 + 0xa8) == 1) || (*(char *)(lVar12 + 0xdd) != '\0')) {
          *(undefined2 *)(lVar12 + 0xdd) = 0x100;
          if (0x12 < *(uint *)(lVar12 + 0xa4)) goto LAB_71019b91d0;
          *(undefined4 *)(lVar12 + (long)(int)*(uint *)(lVar12 + 0xa4) * 4 + 0x58) = 2;
        }
      }
      return;
    }
  }
  else {
    lVar11 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600);
    if (*(char *)(lVar11 + 0x4aa) == '\0') {
      return;
    }
    if ((*(byte *)(lVar11 + 0x1ac) >> 1 & 1) == 0) {
      return;
    }
    uVar15 = *(uint *)(*(long *)(param_1 + 0x350) + 0xb0);
    if (uVar15 != 0xffffffff) {
      if (9 < uVar15) goto LAB_71019b91d0;
      lVar11 = *(long *)(*(long *)(DAT_71053398d8 + 8) + (long)(int)uVar15 * 8 + 8);
      if ((*(int *)(lVar11 + 0xa8) == 1) || (*(char *)(lVar11 + 0xdd) != '\0')) {
        *(undefined2 *)(lVar11 + 0xdd) = 0x100;
        if (0x12 < *(uint *)(lVar11 + 0xa4)) goto LAB_71019b91d0;
        *(undefined4 *)(lVar11 + (long)(int)*(uint *)(lVar11 + 0xa4) * 4 + 0x58) = 2;
      }
    }
    if (*(char *)(param_1 + 0x410) == '\0') {
      lVar12 = *(long *)(lVar12 + 8);
      std::recursive_mutex::lock();
      *(undefined1 *)(lVar12 + 0x10a51) = 1;
      *(undefined4 *)(lVar12 + 0xa28) = 0;
      *(undefined2 *)(lVar12 + 0xa20) = 0;
      *(undefined1 *)(lVar12 + 0x10a4e) = 0;
      *(undefined4 *)(lVar12 + 0x10a4a) = 0;
      if (0x12 < *(uint *)(lVar12 + 0x164)) goto LAB_71019b91d0;
      *(undefined4 *)(lVar12 + (long)(int)*(uint *)(lVar12 + 0x164) * 4 + 0x118) = 0;
      if (*(int *)(lVar12 + 0x164) < 0x12) {
        uVar15 = *(int *)(lVar12 + 0x164) + 1;
        *(uint *)(lVar12 + 0x164) = uVar15;
        if (0x12 < uVar15) goto LAB_71019b91d0;
        *(undefined4 *)(lVar12 + (long)(int)uVar15 * 4 + 0x118) = 0xb;
      }
      std::recursive_mutex::unlock();
      uVar6 = 6;
    }
    else {
      uVar6 = 0x11;
    }
    *(undefined4 *)(param_1 + 0x420) = uVar6;
    *(undefined1 *)(param_1 + 0x41c) = 1;
    if (*(uint *)(param_1 + 500) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 500) * 4 + 0x1a8) = 0xc;
      return;
    }
  }
LAB_71019b91d0:
                    /* WARNING: Subroutine does not return */
  abort();
}

