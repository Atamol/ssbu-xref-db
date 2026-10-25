// addr:      7101aeec40
// offset:    0x1aeec40
// name:      FUN_7101aeec40
// mangled:   
// signature: undefined __cdecl FUN_7101aeec40(long * param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101aeec40(long *param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  long *********ppppppppplVar9;
  long lVar10;
  long *plVar11;
  long ********local_58;
  ulong local_50;
  undefined **local_48;
  undefined8 *local_40;
  undefined4 local_34;
  
  ppppppppplVar9 = param_3;
  uVar7 = FUN_710323ac20((byte *)param_3,0x2a);
  if ((uVar7 & 0xffffffffff) == 0) {
    local_48 = (undefined **)CONCAT44(local_48._4_4_,0xffffff);
  }
  else {
    FUN_710353da30((uint *)&local_48,uVar7);
    if ((uint)local_48 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,(uint)local_48,ppppppppplVar9,param_4,param_5,param_6,param_7,
                     param_8);
      ppppppppplVar9 = (long *********)&DAT_0000002a;
      local_48 = (undefined **)CONCAT44(local_48._4_4_,0xffffff);
      pppuVar8 = (undefined ***)
                 FUN_7103240bd0(param_1,(byte *)param_3,(long ****)&DAT_0000002a,param_4,param_5,
                                param_6,param_7,param_8);
      local_48 = &PTR_FUN_710523da08;
      local_40 = (undefined8 *)
                 FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar9,param_4,param_5,param_6,param_7,
                                param_8);
      if (local_40 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_34 = 0;
          local_58 = (long ********)&DAT_00000010;
          ppppppppplVar9 = &local_58;
          uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
          if (((uVar7 & 1) != 0) &&
             (local_40 = (undefined8 *)
                         FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar9,param_4,param_5,param_6,
                                        param_7,param_8), local_40 != (undefined8 *)0x0))
          goto LAB_7101aeed14;
        }
        local_40 = (undefined8 *)0x0;
      }
LAB_7101aeed14:
      *local_40 = 0;
      local_40[1] = 0;
      if (&local_48 != pppuVar8) {
        puVar2 = *pppuVar8[1];
        puVar3 = pppuVar8[1][1];
        if (puVar3 == (undefined *)0x0) {
          *local_40 = puVar2;
          local_40[1] = 0;
        }
        else {
          plVar11 = (long *)(puVar3 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          plVar11 = (long *)local_40[1];
          *local_40 = puVar2;
          local_40[1] = puVar3;
          if (plVar11 != (long *)0x0) {
            plVar1 = plVar11 + 1;
            do {
              lVar10 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
      }
      FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x71044545c2);
      FUN_7103776910(&local_58,param_2,(long ****)"set_rep_pic_natio_flag",ppppppppplVar9,param_4,
                     param_5,param_6,param_7,param_8);
      uVar7 = local_50;
      FUN_7103778b80(local_50,(long)&local_48,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8
                    );
      local_58 = (long ********)&PTR_FUN_710523d9a8;
      local_50 = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      puVar6 = local_40;
      local_48 = &PTR_FUN_710523da08;
      local_40 = (undefined8 *)0x0;
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      plVar11 = (long *)puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          lVar10 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          std::__shared_weak_count::__release_weak();
        }
        plVar11 = (long *)puVar6[1];
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          do {
            lVar10 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      FUN_710392eb40((ulong)puVar6);
      return;
    }
  }
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x710425ee72);
  return;
}

