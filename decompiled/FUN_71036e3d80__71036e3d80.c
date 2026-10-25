// addr:      71036e3d80
// offset:    0x36e3d80
// name:      FUN_71036e3d80
// mangled:   
// signature: undefined __cdecl FUN_71036e3d80(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, char * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071036e4b6c) */
/* WARNING: Removing unreachable block (ram,0x0071036e4b80) */
/* WARNING: Removing unreachable block (ram,0x0071036e4b84) */
/* WARNING: Removing unreachable block (ram,0x0071036e4b8c) */
/* WARNING: Removing unreachable block (ram,0x0071036e4b94) */
/* WARNING: Removing unreachable block (ram,0x0071036e4b98) */
/* WARNING: Removing unreachable block (ram,0x0071036e4bb0) */
/* WARNING: Removing unreachable block (ram,0x0071036e4bc0) */

void FUN_71036e3d80(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,char *param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  MultiWaitHolderType *pMVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar11;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  long ****pppplVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long **pplVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  ulong *puVar23;
  long *plVar24;
  undefined1 auVar25 [16];
  long ***local_a0;
  long *plStack_98;
  long ****local_80;
  undefined4 local_64;
  
  std::mutex::lock();
  auVar25 = (**(code **)(*param_1 + 0x58))(param_1);
  lVar15 = DAT_710533a028;
  uVar11 = auVar25._8_8_;
  if ((auVar25._0_8_ & 1) == 0) goto LAB_71036e4d10;
  if (3 < *(uint *)(param_1 + 1)) {
    cVar7 = *(char *)((long)param_1 + 0x46);
    goto joined_r0x0071036e3e44;
  }
  if (((*(char *)((long)param_1 + 0x41) == '\0') &&
      (*(undefined4 *)((long)param_1 + 99) = 0, *(int *)(DAT_7105332f28 + 0xe0) != 1)) &&
     (*(int *)(DAT_7105332f28 + 0xe0) != 2)) {
    lVar17 = param_1[0xe];
    if (lVar17 == 0) {
      if (((param_1[0xd] != 0) || (param_1[7] != 0)) &&
         ((*(char *)((long)param_1 + 0x41) == '\0' && ((char)param_1[8] != '\0')))) {
        *(undefined1 *)((long)param_1 + 0x41) = 1;
      }
    }
    else {
      if ((int)param_1[1] == 1) {
        if (**(ulong **)(lVar17 + 8) < (*(ulong **)(lVar17 + 8))[3]) goto LAB_71036e3e30;
LAB_71036e3e8c:
        *(undefined1 *)((long)param_1 + 0x41) = 1;
      }
      else {
        if (((int)param_1[1] == 0) && ((*(ulong **)(lVar17 + 8))[1] <= **(ulong **)(lVar17 + 8)))
        goto LAB_71036e3e8c;
LAB_71036e3e30:
        if (*(char *)((long)param_1 + 0x41) == '\0') goto LAB_71036e3ecc;
      }
      lVar22 = *(long *)(*(long *)(lVar17 + 8) + 0x28);
      param_1[4] = lVar22;
      pppplVar12 = *(long *****)(*(long *)(lVar17 + 8) + 8);
      param_1[5] = (long)pppplVar12;
      lVar17 = DAT_710533a028;
      param_4 = (byte ****)(ulong)*(uint *)(param_1 + 2);
      FUN_71036e7800(DAT_710533a028,lVar22,pppplVar12,param_4,(long ****)param_5,param_6,param_7,
                     param_8);
      param_3 = (long ****)0x1;
      FUN_71036e7940(lVar17,(ulong)*(uint *)((long)param_1 + 0xc),(long ****)0x1,param_4,
                     (long ****)param_5,param_6,param_7,param_8);
    }
  }
LAB_71036e3ecc:
  if ((((byte)DAT_710533a010 & 1) != 0) && (*(char *)((long)param_1 + 0x4a) == '\0')) {
    *(undefined1 *)((long)param_1 + 0x4a) = 1;
    (**(code **)(*param_1 + 0x20))(param_1);
    *(undefined1 *)((long)param_1 + 0x41) = 0;
  }
  auVar25 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar11 = auVar25._8_8_;
  if (*(char *)((long)param_1 + 0x45) != '\0') {
    FUN_71036e3c60((long)param_1,lVar15);
    uVar11 = extraout_x1;
  }
  cVar7 = *(char *)((long)param_1 + 0xb4);
  if ((auVar25._0_8_ & 1) == 0) {
    if ((byte)DAT_7107447040 != 0) {
      if (((((byte)DAT_7107447040 >> 2 & 1) != 0) &&
          (DAT_7107447040 = DAT_7107447040 & 0xfb, (*(byte *)((long)param_1 + 99) & 1) != 0)) &&
         (*(char *)((long)param_1 + 0xb4) == '\0')) {
        if (*(char *)((long)param_1 + 0xb5) != '\0') {
          plVar20 = *(long **)(lVar15 + 8);
          if (((*plVar20 != 0) && (plVar20[0x24] != 0)) && ((char)plVar20[0x32] == '\0')) {
            FUN_71036f31b0(*plVar20);
            uVar11 = extraout_x1_00;
          }
          *(undefined1 *)((long)plVar20 + 0x129) = 1;
        }
        *(undefined1 *)((long)param_1 + 0xb4) = 1;
      }
      if (((byte)DAT_7107447040 >> 1 & 1) != 0) {
        DAT_7107447040 = DAT_7107447040 & 0xfd;
        if ((int)param_1[0x19] == 0) {
          *(undefined4 *)(param_1 + 0x19) = 1;
        }
        else if ((5 < (int)param_1[0x19]) || (3 < (int)param_1[0x17])) goto LAB_71036e3fe8;
        *(undefined4 *)(param_1 + 0x17) = 4;
      }
    }
LAB_71036e3fe8:
    if (((byte)DAT_7107447040 >> 3 & 1) != 0) {
      DAT_7107447040 = DAT_7107447040 & 0xf7;
      iVar6 = (int)param_1[0x19];
      if (iVar6 == 0) {
        uVar13 = 1;
LAB_71036e4024:
        *(undefined4 *)(param_1 + 0x19) = uVar13;
      }
      else if (4 < iVar6 - 1U) {
        if (iVar6 != 6) goto LAB_71036e4030;
        uVar13 = 5;
        goto LAB_71036e4024;
      }
      *(undefined4 *)(param_1 + 0x17) = 0x1e;
    }
  }
LAB_71036e4030:
  if ((((int)param_1[0x19] == 0) || (*(char *)((long)param_1 + 0x47) != '\0')) ||
     (*(char *)((long)param_1 + 0x42) != '\0')) {
    bVar9 = cVar7 != '\0';
    if (cVar7 == '\0') {
      if (*(char *)((long)param_1 + 0x47) == '\0') {
        bVar9 = false;
      }
      else {
        uVar21 = param_1[0xb];
        if ((char)param_1[9] == '\0') {
          FUN_71036e7bd0(*(long **)(lVar15 + 8),uVar21,param_3,param_4,(long ****)param_5,param_6,
                         param_7,param_8);
          uVar11 = extraout_x1_11;
        }
        else {
          plVar20 = *(long **)(lVar15 + 8);
          lVar17 = *plVar20;
          if (((lVar17 != 0) && (plVar20[0x24] != 0)) && ((char)plVar20[0x32] == '\0')) {
            cVar7 = *(char *)((long)param_1 + 0x49);
            std::recursive_mutex::lock();
            iVar6 = *(int *)(lVar17 + 8);
            std::recursive_mutex::unlock();
            if (iVar6 == 4) {
              FUN_71036f31b0(*plVar20);
            }
            lVar17 = *plVar20;
            std::recursive_mutex::lock();
            std::recursive_mutex::lock();
            iVar4 = *(int *)(lVar17 + 8);
            std::recursive_mutex::unlock();
            if (iVar4 != 7) {
              std::recursive_mutex::lock();
              uVar5 = *(uint *)(lVar17 + 8);
              std::recursive_mutex::unlock();
              if ((uVar5 < 10) && ((1 << (ulong)(uVar5 & 0x1f) & 0x348U) != 0)) {
                uVar21 = uVar21 & ((long)uVar21 >> 0x3f ^ 0xffffffffffffffffU);
                std::recursive_mutex::lock();
                iVar4 = *(int *)(lVar17 + 8);
                std::recursive_mutex::unlock();
                std::recursive_mutex::lock();
                *(undefined4 *)(lVar17 + 8) = 7;
                if (*(EventType **)(lVar17 + 0x18) != (EventType *)0x0) {
                  nn::os::SignalEvent(*(EventType **)(lVar17 + 0x18));
                }
                std::recursive_mutex::unlock();
                if (3 < iVar4) {
                  uVar11 = extraout_x1_03;
                  if (*(long **)(lVar17 + 0x210) == (long *)0x0) {
                    plVar19 = *(long **)(lVar17 + 0x40);
joined_r0x0071036e4e94:
                    if (plVar19 != (long *)0x0) {
                      (**(code **)(*plVar19 + 0x40))();
                      uVar11 = extraout_x1_04;
                    }
                  }
                  else {
                    if (*(long *)(lVar17 + 0x30) != 0) {
                      *(undefined4 *)(**(long **)(lVar17 + 0x210) + 0x4c2) = 1;
                    }
                    if (*(long *)(lVar17 + 0x40) != 0) {
                      *(undefined4 *)(**(long **)(lVar17 + 0x210) + 0x4c3) = 1;
                      plVar19 = *(long **)(lVar17 + 0x40);
                      goto joined_r0x0071036e4e94;
                    }
                  }
                  if (*(long **)(lVar17 + 0x30) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar17 + 0x30) + 0x40))();
                    uVar11 = extraout_x1_05;
                  }
                  if (*(long **)(lVar17 + 0x68) != (long *)0x0) {
                    FUN_71036f6620(**(long **)(lVar17 + 0x68),uVar11,param_3,param_4,
                                   (long ****)param_5,param_6,param_7,param_8);
                  }
                  if (*(long **)(lVar17 + 0x58) != (long *)0x0) {
                    lVar22 = **(long **)(lVar17 + 0x58);
                    std::mutex::lock();
                    *(undefined8 *)(lVar22 + 0x30) = *(undefined8 *)(lVar22 + 0x28);
                    std::mutex::unlock();
                  }
                  if (*(long **)(lVar17 + 0x60) != (long *)0x0) {
                    nn::os::SendMessageQueue
                              ((MessageQueueType *)(**(long **)(lVar17 + 0x60) + 0x230),5);
                  }
                  if (*(long **)(lVar17 + 0x50) != (long *)0x0) {
                    nn::os::SendMessageQueue
                              ((MessageQueueType *)(**(long **)(lVar17 + 0x50) + 0x230),3);
                  }
                }
                (**(code **)(**(long **)(lVar17 + 0x28) + 0x40))(*(long **)(lVar17 + 0x28),uVar21);
                if (cVar7 != '\0') {
                  (**(code **)(**(long **)(lVar17 + 0x28) + 0x40))(*(long **)(lVar17 + 0x28),uVar21)
                  ;
                }
                std::recursive_mutex::lock();
                *(undefined4 *)(lVar17 + 8) = 8;
                if (*(EventType **)(lVar17 + 0x18) != (EventType *)0x0) {
                  nn::os::SignalEvent(*(EventType **)(lVar17 + 0x18));
                }
                std::recursive_mutex::unlock();
                if (3 < iVar4) {
                  if (*(long **)(lVar17 + 0x68) != (long *)0x0) {
                    FUN_71036f6620(**(long **)(lVar17 + 0x68),extraout_x1_06,param_3,param_4,
                                   (long ****)param_5,param_6,param_7,param_8);
                  }
                  if (*(long **)(lVar17 + 0x58) != (long *)0x0) {
                    lVar22 = **(long **)(lVar17 + 0x58);
                    std::mutex::lock();
                    *(undefined8 *)(lVar22 + 0x30) = *(undefined8 *)(lVar22 + 0x28);
                    std::mutex::unlock();
                  }
                  if (*(long **)(lVar17 + 0x60) != (long *)0x0) {
                    nn::os::SendMessageQueue
                              ((MessageQueueType *)(**(long **)(lVar17 + 0x60) + 0x230),5);
                  }
                  if (*(long **)(lVar17 + 0x50) != (long *)0x0) {
                    nn::os::SendMessageQueue
                              ((MessageQueueType *)(**(long **)(lVar17 + 0x50) + 0x230),3);
                  }
                  if (*(long **)(lVar17 + 0x210) == (long *)0x0) {
                    plVar19 = *(long **)(lVar17 + 0x40);
joined_r0x0071036e4ea4:
                    if (plVar19 != (long *)0x0) {
                      (**(code **)(*plVar19 + 0x28))();
                    }
                  }
                  else {
                    if (*(long *)(lVar17 + 0x30) != 0) {
                      *(undefined4 *)(**(long **)(lVar17 + 0x210) + 0x4c2) = 0;
                    }
                    if (*(long *)(lVar17 + 0x40) != 0) {
                      *(undefined4 *)(**(long **)(lVar17 + 0x210) + 0x4c3) = 0;
                      plVar19 = *(long **)(lVar17 + 0x40);
                      goto joined_r0x0071036e4ea4;
                    }
                  }
                  if (*(long **)(lVar17 + 0x30) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar17 + 0x30) + 0x28))();
                  }
                }
              }
            }
            std::recursive_mutex::unlock();
            if (iVar6 == 6) {
              FUN_71036f32f0(*plVar20,extraout_x1_07,param_3,param_4,(long ****)param_5,param_6,
                             param_7,param_8);
              nn::os::SleepThread(8000000);
              FUN_71036f31b0(*plVar20);
              uVar11 = extraout_x1_22;
            }
            else {
              uVar11 = extraout_x1_07;
              if (iVar6 == 4) {
                FUN_71036f32f0(*plVar20,extraout_x1_07,param_3,param_4,(long ****)param_5,param_6,
                               param_7,param_8);
                uVar11 = extraout_x1_08;
              }
            }
          }
        }
        bVar9 = false;
        *(undefined1 *)((long)param_1 + 0x47) = 0;
      }
    }
    goto joined_r0x0071036e4504;
  }
  switch((int)param_1[0x19]) {
  case 1:
  case 2:
    if ((*(byte *)((long)param_1 + 99) & 1) == 0) goto switchD_71036e44a4_default;
    if (*(char *)((long)param_1 + 0xb4) == '\0') {
      plVar20 = *(long **)(lVar15 + 8);
      if (((*plVar20 != 0) && (plVar20[0x24] != 0)) && ((char)plVar20[0x32] == '\0')) {
        FUN_71036f31b0(*plVar20);
        uVar11 = extraout_x1_10;
      }
      *(undefined1 *)((long)plVar20 + 0x129) = 1;
      *(undefined1 *)((long)param_1 + 0xb4) = 1;
    }
    uVar13 = 3;
    break;
  case 3:
    uVar13 = 4;
    break;
  case 4:
    if (((int)param_1[2] != 0) && ((int)param_1[2] != 3)) {
      FUN_71036e7bd0(*(long **)(lVar15 + 8),param_1[0x18],param_3,param_4,(long ****)param_5,param_6
                     ,param_7,param_8);
      uVar11 = extraout_x1_20;
    }
    uVar13 = 5;
    break;
  case 5:
    lVar17 = param_1[0x17];
    iVar6 = (int)lVar17 + -1;
    *(int *)(param_1 + 0x17) = iVar6;
    if (iVar6 != 0 && 0 < (int)lVar17) goto switchD_71036e44a4_default;
    uVar13 = 6;
    break;
  case 6:
    if ((*(byte *)((long)param_1 + 0x61) & 1) == 0) {
      plVar20 = *(long **)(lVar15 + 8);
      if (((*plVar20 != 0) && (plVar20[0x24] != 0)) && ((char)plVar20[0x32] == '\0')) {
        FUN_71036f32f0(*plVar20,uVar11,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
        uVar11 = extraout_x1_21;
      }
      *(undefined1 *)((long)plVar20 + 0x129) = 0;
    }
    *(undefined4 *)(param_1 + 0x19) = 0;
    *(undefined1 *)((long)param_1 + 0xb4) = 0;
    goto joined_r0x0071036e4e34;
  default:
switchD_71036e44a4_default:
joined_r0x0071036e4e34:
    bVar9 = true;
    goto joined_r0x0071036e4504;
  }
  *(undefined4 *)(param_1 + 0x19) = uVar13;
  bVar9 = true;
joined_r0x0071036e4504:
  if ((auVar25._0_8_ & 1) == 0) {
    if (!bVar9) {
      if (((*(char *)((long)param_1 + 0x41) != '\0') && (*(char *)((long)param_1 + 0x42) != '\0'))
         && ((*(byte *)((long)param_1 + 99) & 1) == 0)) {
        auVar25 = (**(code **)(*param_1 + 0x48))(param_1);
        uVar11 = auVar25._8_8_;
        if (((auVar25._0_8_ & 1) != 0) && (param_1[0xf] == 0)) {
          puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,8,param_3,param_4,(long ****)param_5,param_6,param_7,param_8
                                  );
          if (puVar14 == (undefined8 *)0x0) {
            local_64 = 0;
            local_a0 = (long ***)&DAT_00000008;
            param_3 = &local_a0;
            (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            puVar14 = (undefined8 *)
                      FUN_710392e290(0x10,8,param_3,param_4,(long ****)param_5,param_6,param_7,
                                     param_8);
          }
          *puVar14 = 0;
          plVar20 = (long *)param_1[0xf];
          param_1[0xf] = (long)puVar14;
          if (plVar20 != (long *)0x0) {
            if ((long *)*plVar20 != (long *)0x0) {
              (**(code **)(*(long *)*plVar20 + 0x18))(&local_a0);
              if ((long *)*plVar20 != (long *)0x0) {
                (**(code **)(*(long *)*plVar20 + 8))();
              }
              *plVar20 = 0;
            }
            FUN_710392eb40((ulong)plVar20);
            puVar14 = (undefined8 *)param_1[0xf];
            uVar11 = extraout_x1_17;
            if (puVar14 == (undefined8 *)0x0) goto LAB_71036e4e80;
          }
          param_5 = "MOVIE_PLAYBACK";
          param_3 = (long ****)0x3;
          param_4 = (byte ****)0x1;
          param_6 = 0x40000;
          local_a0 = (long ***)&DAT_710523b640;
          plStack_98 = param_1;
          local_80 = &local_a0;
          FUN_710353d5b0(puVar14,(long *)&local_a0,(long ****)0x3,(byte ****)0x1,
                         (long ****)"MOVIE_PLAYBACK",0x40000,param_7,param_8);
          if (&local_a0 == local_80) {
            pplVar16 = (*local_80)[4];
          }
          else {
            uVar11 = extraout_x1_18;
            if (local_80 == (long ****)0x0) goto LAB_71036e4e80;
            pplVar16 = (*local_80)[5];
          }
          (*(code *)pplVar16)();
          uVar11 = extraout_x1_23;
        }
LAB_71036e4e80:
        *(undefined2 *)((long)param_1 + 0x42) = 0x100;
      }
      goto LAB_71036e4060;
    }
  }
  else {
    *(undefined2 *)((long)param_1 + 0x42) = 0;
    *(undefined1 *)((long)param_1 + 0x44) = 0;
LAB_71036e4060:
    if (!bVar9 && (*(byte *)((long)param_1 + 99) & 1) != 0) {
      auVar25 = (**(code **)(*param_1 + 0x78))(param_1);
      uVar11 = auVar25._8_8_;
      plVar20 = (long *)param_1[0xf];
      param_1[0x18] = auVar25._0_8_;
      *(undefined1 *)((long)param_1 + 0x43) = 0;
      if (plVar20 != (long *)0x0) {
        param_1[0xf] = 0;
        if ((long *)*plVar20 != (long *)0x0) {
          (**(code **)(*(long *)*plVar20 + 0x18))(&local_a0);
          if ((long *)*plVar20 != (long *)0x0) {
            (**(code **)(*(long *)*plVar20 + 8))();
          }
          *plVar20 = 0;
        }
        FUN_710392eb40((ulong)plVar20);
        uVar11 = extraout_x1_01;
      }
      if (*(char *)((long)param_1 + 0x44) == '\0') {
        if ((*(byte *)((long)param_1 + 0x61) & 1) != 0) {
          plVar20 = *(long **)(lVar15 + 8);
          if (((*plVar20 != 0) && (plVar20[0x24] != 0)) && ((char)plVar20[0x32] == '\0')) {
            FUN_71036f32f0(*plVar20,uVar11,param_3,param_4,(long ****)param_5,param_6,param_7,
                           param_8);
            uVar11 = extraout_x1_09;
          }
          *(undefined1 *)((long)plVar20 + 0x129) = 0;
          *(undefined4 *)((long)param_1 + 0x61) = 0;
        }
      }
      else if ((*(byte *)((long)param_1 + 0x61) & 1) == 0) {
        plVar20 = *(long **)(lVar15 + 8);
        if (((*plVar20 != 0) && (plVar20[0x24] != 0)) && ((char)plVar20[0x32] == '\0')) {
          FUN_71036f31b0(*plVar20);
          uVar11 = extraout_x1_02;
        }
        *(undefined1 *)((long)plVar20 + 0x129) = 1;
        *(undefined4 *)((long)param_1 + 0x61) = 1;
      }
    }
  }
  if (((*(char *)((long)param_1 + 0x46) != '\0') && ((*(byte *)(param_1 + 0xc) & 1) == 0)) &&
     ((*(char *)((long)param_1 + 0x42) == '\0' &&
      ((*(char *)((long)param_1 + 0x43) == '\0' && ((int)param_1[10] < -99)))))) {
    auVar25 = (**(code **)(*param_1 + 0x50))(param_1);
    uVar11 = auVar25._8_8_;
    if (((auVar25._0_8_ & 1) != 0) ||
       (((*(byte *)((long)param_1 + 0x62) & 1) != 0 ||
        (*(int *)(*(long *)(lVar15 + 8) + 0x118) == 5)))) {
      if (param_1[0xe] != 0) {
        lVar17 = *(long *)(param_1[0xe] + 8);
        std::mutex::lock();
        if ((*(byte *)(lVar17 + 0x38) & 1) != 0) {
          if (*(char *)((long)*(long **)(lVar17 + 0x40) + 0x22c) != '\0') {
            (**(code **)(**(long **)(lVar17 + 0x40) + 0x30))(&local_a0);
            *(undefined1 *)(*(long *)(lVar17 + 0x40) + 0x22c) = 0;
          }
          *(undefined4 *)(lVar17 + 0x38) = 0;
        }
        *(undefined4 *)(lVar17 + 0x39) = 1;
        std::mutex::unlock();
        plVar20 = (long *)param_1[0xe];
        uVar11 = extraout_x1_12;
        if (*plVar20 != 0) {
          puVar23 = (ulong *)plVar20[1];
          if (*puVar23 < puVar23[1]) {
            bVar2 = (byte)puVar23[7];
            while ((bVar2 & 1) != 0) {
              nn::os::SleepThread(1000000);
              uVar11 = extraout_x1_13;
              bVar2 = (byte)puVar23[7];
            }
          }
          plVar19 = (long *)*plVar20;
          *plVar20 = 0;
          if (plVar19 != (long *)0x0) {
            if ((long *)*plVar19 != (long *)0x0) {
              (**(code **)(*(long *)*plVar19 + 0x18))(&local_a0);
              if ((long *)*plVar19 != (long *)0x0) {
                (**(code **)(*(long *)*plVar19 + 8))();
              }
              *plVar19 = 0;
            }
            FUN_710392eb40((ulong)plVar19);
            uVar11 = extraout_x1_14;
          }
        }
      }
      if ((*(byte *)((long)param_1 + 0x62) & 1) == 0) {
        FUN_71036e3c60((long)param_1,lVar15);
        uVar11 = extraout_x1_15;
      }
      *(undefined4 *)(param_1 + 10) = 10;
    }
  }
  puVar14 = (undefined8 *)param_1[0xe];
  if (((puVar14 != (undefined8 *)0x0) && (((ulong *)puVar14[1])[1] <= *(ulong *)puVar14[1])) &&
     (plVar20 = (long *)*puVar14, plVar20 != (long *)0x0)) {
    *puVar14 = 0;
    if ((long *)*plVar20 != (long *)0x0) {
      (**(code **)(*(long *)*plVar20 + 0x18))(&local_a0);
      if ((long *)*plVar20 != (long *)0x0) {
        (**(code **)(*(long *)*plVar20 + 8))();
      }
      *plVar20 = 0;
    }
    FUN_710392eb40((ulong)plVar20);
    uVar11 = extraout_x1_16;
  }
  cVar7 = *(char *)((long)param_1 + 0x46);
joined_r0x0071036e3e44:
  if (cVar7 != '\0') {
    iVar6 = (int)param_1[10];
    if (iVar6 < 1) {
      if (-100 < iVar6) goto LAB_71036e4710;
    }
    else {
      *(int *)(param_1 + 10) = iVar6 + -1;
      if (iVar6 < 5) {
LAB_71036e4710:
        if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
          if ((int)param_1[1] == 3) {
            if (*(char *)((long)param_1 + 0x4d) == '\0') {
              param_5 = "MOVIE_PREPARE_FINALIZING";
              param_3 = (long ****)0x3;
              param_4 = (byte ****)0x1;
              param_6 = 0x40000;
              local_a0 = (long ***)&DAT_710523b688;
              plStack_98 = param_1;
              local_80 = &local_a0;
              FUN_710353d5b0((undefined8 *)param_1[0x11],(long *)&local_a0,(long ****)0x3,
                             (byte ****)0x1,(long ****)"MOVIE_PREPARE_FINALIZING",0x40000,param_7,
                             param_8);
              if (&local_a0 == local_80) {
                pplVar16 = (*local_80)[4];
              }
              else {
                if (local_80 == (long ****)0x0) goto LAB_71036e48bc;
                pplVar16 = (*local_80)[5];
              }
              (*(code *)pplVar16)();
            }
LAB_71036e48bc:
            *(undefined1 *)((long)param_1 + 0x4d) = 1;
          }
          else {
            FUN_71036e7260(*(ulong **)(lVar15 + 8),uVar11,param_3,param_4,(long ****)param_5,param_6
                           ,param_7,param_8);
            *(undefined4 *)(param_1 + 0xc) = 1;
          }
        }
      }
    }
  }
  plVar20 = *(long **)(lVar15 + 8);
  if (*(char *)((long)plVar20 + 0x11c) == '\0') {
LAB_71036e4928:
    bVar9 = false;
  }
  else {
    lVar15 = param_1[1];
    pMVar10 = (MultiWaitHolderType *)nn::os::TryWaitAny((MultiWaitType *)(plVar20 + 0x1d));
    if ((pMVar10 == (MultiWaitHolderType *)0x0) ||
       (puVar14 = (undefined8 *)nn::os::GetMultiWaitHolderUserData(pMVar10),
       puVar14 == (undefined8 *)0x0)) goto LAB_71036e4928;
    nn::os::ClearEvent((EventType *)*puVar14);
    if (*(int *)(puVar14 + 1) != 1) {
      if (*(int *)(puVar14 + 1) == 2) {
        std::mutex::lock();
        if (*plVar20 != 0) {
          FUN_71036f2ea0(*plVar20);
        }
        std::mutex::unlock();
      }
      goto LAB_71036e4928;
    }
    std::mutex::lock();
    lVar17 = *plVar20;
    if (lVar17 == 0) {
LAB_71036e4e44:
      bVar9 = false;
    }
    else {
      std::recursive_mutex::lock();
      *(undefined4 *)(plVar20 + 0x23) = *(undefined4 *)(lVar17 + 8);
      std::recursive_mutex::unlock();
      if ((int)plVar20[0x23] != 9) goto LAB_71036e4e44;
      if ((char)plVar20[0x25] != '\0') {
        FUN_71036f26f0(*plVar20,extraout_x1_19,param_3,param_4,(long ****)param_5,param_6,param_7,
                       param_8);
        goto LAB_71036e4e44;
      }
      if ((int)lVar15 != 3) {
        FUN_71036f2ea0(*plVar20);
        goto LAB_71036e4e44;
      }
      bVar9 = true;
    }
    std::mutex::unlock();
  }
  if (DAT_710533a079 == '\x01') {
    std::mutex::lock();
    plVar18 = DAT_710533a040;
    plVar19 = DAT_710533a038;
    plVar3 = DAT_710533a040;
    for (plVar20 = DAT_710533a038; DAT_710533a038 = plVar19, DAT_710533a040 = plVar3,
        plVar20 != plVar18; plVar20 = plVar20 + 2) {
      plVar19 = (long *)*plVar20;
      plVar3 = (long *)plVar20[1];
      if (plVar3 != (long *)0x0) {
        plVar24 = plVar3 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar8) {
            *plVar24 = *plVar24 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if ((int)plVar19[0xa5] < 1) {
        (**(code **)(*plVar19 + 0x10))();
      }
      if (plVar3 != (long *)0x0) {
        plVar19 = plVar3 + 1;
        do {
          lVar15 = *plVar19;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar8) {
            *plVar19 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar19 = DAT_710533a038;
      plVar3 = DAT_710533a040;
    }
    if (plVar19 == plVar3) {
LAB_71036e4a68:
      plVar18 = plVar19;
      plVar20 = plVar19;
      if (plVar19 != plVar3) {
        while (plVar24 = plVar20, plVar20 = plVar24 + 2, plVar18 = plVar19, plVar20 != plVar3) {
          lVar15 = *plVar20;
          plVar18 = (long *)plVar24[3];
          if (plVar18 == (long *)0x0) {
            iVar6 = *(int *)(lVar15 + 0x528);
          }
          else {
            plVar1 = plVar18 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = *plVar1 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            iVar6 = *(int *)(lVar15 + 0x528);
            do {
              lVar15 = *plVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = lVar15 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (0 < iVar6) {
            lVar15 = *plVar20;
            lVar17 = plVar24[3];
            *plVar20 = 0;
            plVar24[3] = 0;
            plVar18 = (long *)plVar19[1];
            *plVar19 = lVar15;
            plVar19[1] = lVar17;
            if (plVar18 != (long *)0x0) {
              plVar24 = plVar18 + 1;
              do {
                lVar15 = *plVar24;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar8) {
                  *plVar24 = lVar15 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                std::__shared_weak_count::__release_weak();
              }
            }
            plVar19 = plVar19 + 2;
          }
        }
      }
    }
    else {
      do {
        lVar15 = *plVar19;
        plVar20 = (long *)plVar19[1];
        if (plVar20 == (long *)0x0) {
          iVar6 = *(int *)(lVar15 + 0x528);
        }
        else {
          plVar18 = plVar20 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar8) {
              *plVar18 = *plVar18 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          iVar6 = *(int *)(lVar15 + 0x528);
          do {
            lVar15 = *plVar18;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar8) {
              *plVar18 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (iVar6 < 1) goto LAB_71036e4a68;
        plVar19 = plVar19 + 2;
        plVar18 = plVar3;
      } while (plVar19 != plVar3);
    }
    plVar19 = DAT_710533a040;
    plVar20 = DAT_710533a038;
    plVar3 = DAT_710533a040;
    if (plVar18 != DAT_710533a040) {
      while (plVar20 = DAT_710533a038, plVar3 = plVar18, plVar19 != plVar18) {
        plVar20 = (long *)plVar19[-1];
        plVar19 = plVar19 + -2;
        if (plVar20 != (long *)0x0) {
          plVar3 = plVar20 + 1;
          do {
            lVar15 = *plVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *plVar3 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    for (; DAT_710533a040 = plVar3, plVar20 != plVar18; plVar20 = plVar20 + 2) {
      lVar15 = *plVar20;
      plVar19 = (long *)plVar20[1];
      if (plVar19 == (long *)0x0) {
        *(int *)(lVar15 + 0x528) = *(int *)(lVar15 + 0x528) + -1;
      }
      else {
        plVar3 = plVar19 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *plVar3 = *plVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        *(int *)(lVar15 + 0x528) = *(int *)(lVar15 + 0x528) + -1;
        do {
          lVar15 = *plVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *plVar3 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar3 = DAT_710533a040;
    }
    std::mutex::unlock();
  }
  if (!bVar9) goto LAB_71036e4d10;
  if (*(char *)((long)param_1 + 0x4c) == '\0') {
    local_a0 = (long ***)&DAT_710523b6d0;
    plStack_98 = param_1;
    local_80 = &local_a0;
    FUN_710353d5b0((undefined8 *)param_1[0x10],(long *)&local_a0,(long ****)0x3,(byte ****)0x1,
                   (long ****)"MOVIE_STOP",0x40000,param_7,param_8);
    if (&local_a0 == local_80) {
      pplVar16 = (*local_80)[4];
    }
    else {
      if (local_80 == (long ****)0x0) goto LAB_71036e4d08;
      pplVar16 = (*local_80)[5];
    }
    (*(code *)pplVar16)();
  }
LAB_71036e4d08:
  *(undefined1 *)((long)param_1 + 0x4c) = 1;
LAB_71036e4d10:
  std::mutex::unlock();
  return;
}

