// addr:      7101bcc690
// offset:    0x1bcc690
// name:      FUN_7101bcc690
// mangled:   
// signature: undefined __cdecl FUN_7101bcc690(long * param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bcc690(long *param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long ****pppplVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined ***pppuVar8;
  long *plVar9;
  undefined **local_110;
  ulong local_108;
  undefined **local_100;
  undefined **local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined4 local_90;
  char *local_88;
  undefined4 local_80;
  char *local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  long ***local_50;
  undefined4 local_44;
  
  uVar7 = SUB84(param_5,0);
  uVar6 = (uint)param_4;
  pppplVar5 = param_3;
  FUN_7103776390(&local_110,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (uVar6 < 9) {
    *(uint *)(param_1 + 8) = uVar6;
    *(undefined4 *)((long)param_1 + 0x44) = uVar7;
    if (uVar6 != 0) {
LAB_7101bcc6f8:
      plVar9 = param_1 + 8;
      pppplVar5 = (long ****)0x0;
      FUN_7103776640(&local_100,(long)&local_110,(byte ****)"player_%02d",0,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103776390(&local_70,&local_100,pppplVar5,param_4,param_5,param_6,param_7,param_8);
      pppplVar5 = param_3;
      FUN_7101bcb6b0(*param_1,&local_70,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar3 = local_68;
      local_70 = &PTR_FUN_710523d988;
      local_68 = 0;
      if (uVar3 != 0) {
        uVar4 = *(ulong *)(uVar3 + 0x18);
        *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar3 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar3);
      }
      ppuVar1 = local_f8;
      local_100 = &PTR_FUN_710523d988;
      local_f8 = (undefined **)0x0;
      if (ppuVar1 != (undefined **)0x0) {
        uVar3 = *(ulong *)((long)ppuVar1 + 0x18);
        *(undefined ***)((long)ppuVar1 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)ppuVar1 + 0x18) = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
        FUN_710392eb40((ulong)ppuVar1);
      }
      if (1 < (int)*plVar9) {
        pppplVar5 = (long ****)0x1;
        FUN_7103776640(&local_100,(long)&local_110,(byte ****)"player_%02d",1,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_7103776390(&local_70,&local_100,pppplVar5,param_4,param_5,param_6,param_7,param_8);
        pppplVar5 = param_3;
        FUN_7101bcb6b0(param_1[1],&local_70,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar3 = local_68;
        local_70 = &PTR_FUN_710523d988;
        local_68 = 0;
        if (uVar3 != 0) {
          uVar4 = *(ulong *)(uVar3 + 0x18);
          *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar3 + 0x18) = 0;
          if (uVar4 != 0) {
            FUN_710392eb40(uVar4);
          }
          FUN_710392eb40(uVar3);
        }
        ppuVar1 = local_f8;
        local_100 = &PTR_FUN_710523d988;
        local_f8 = (undefined **)0x0;
        if (ppuVar1 != (undefined **)0x0) {
          uVar3 = *(ulong *)((long)ppuVar1 + 0x18);
          *(undefined ***)((long)ppuVar1 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)((long)ppuVar1 + 0x18) = 0;
          if (uVar3 != 0) {
            FUN_710392eb40(uVar3);
          }
          FUN_710392eb40((ulong)ppuVar1);
        }
        if (2 < (int)*plVar9) {
          pppplVar5 = (long ****)0x2;
          FUN_7103776640(&local_100,(long)&local_110,(byte ****)"player_%02d",2,param_4,param_5,
                         param_6,param_7,param_8);
          FUN_7103776390(&local_70,&local_100,pppplVar5,param_4,param_5,param_6,param_7,param_8);
          pppplVar5 = param_3;
          FUN_7101bcb6b0(param_1[2],&local_70,param_3,param_4,param_5,param_6,param_7,param_8);
          uVar3 = local_68;
          local_70 = &PTR_FUN_710523d988;
          local_68 = 0;
          if (uVar3 != 0) {
            uVar4 = *(ulong *)(uVar3 + 0x18);
            *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar3 + 0x18) = 0;
            if (uVar4 != 0) {
              FUN_710392eb40(uVar4);
            }
            FUN_710392eb40(uVar3);
          }
          ppuVar1 = local_f8;
          local_100 = &PTR_FUN_710523d988;
          local_f8 = (undefined **)0x0;
          if (ppuVar1 != (undefined **)0x0) {
            uVar3 = *(ulong *)((long)ppuVar1 + 0x18);
            *(undefined ***)((long)ppuVar1 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)((long)ppuVar1 + 0x18) = 0;
            if (uVar3 != 0) {
              FUN_710392eb40(uVar3);
            }
            FUN_710392eb40((ulong)ppuVar1);
          }
          if (3 < (int)*plVar9) {
            pppplVar5 = (long ****)0x3;
            FUN_7103776640(&local_100,(long)&local_110,(byte ****)"player_%02d",3,param_4,param_5,
                           param_6,param_7,param_8);
            FUN_7103776390(&local_70,&local_100,pppplVar5,param_4,param_5,param_6,param_7,param_8);
            pppplVar5 = param_3;
            FUN_7101bcb6b0(param_1[3],&local_70,param_3,param_4,param_5,param_6,param_7,param_8);
            uVar3 = local_68;
            local_70 = &PTR_FUN_710523d988;
            local_68 = 0;
            if (uVar3 != 0) {
              uVar4 = *(ulong *)(uVar3 + 0x18);
              *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar3 + 0x18) = 0;
              if (uVar4 != 0) {
                FUN_710392eb40(uVar4);
              }
              FUN_710392eb40(uVar3);
            }
            ppuVar1 = local_f8;
            local_100 = &PTR_FUN_710523d988;
            local_f8 = (undefined **)0x0;
            if (ppuVar1 != (undefined **)0x0) {
              uVar3 = *(ulong *)((long)ppuVar1 + 0x18);
              *(undefined ***)((long)ppuVar1 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)((long)ppuVar1 + 0x18) = 0;
              if (uVar3 != 0) {
                FUN_710392eb40(uVar3);
              }
              FUN_710392eb40((ulong)ppuVar1);
            }
            if (4 < (int)*plVar9) {
              pppplVar5 = (long ****)&DAT_00000004;
              FUN_7103776640(&local_100,(long)&local_110,(byte ****)"player_%02d",4,param_4,param_5,
                             param_6,param_7,param_8);
              FUN_7103776390(&local_70,&local_100,pppplVar5,param_4,param_5,param_6,param_7,param_8)
              ;
              pppplVar5 = param_3;
              FUN_7101bcb6b0(param_1[4],&local_70,param_3,param_4,param_5,param_6,param_7,param_8);
              uVar3 = local_68;
              local_70 = &PTR_FUN_710523d988;
              local_68 = 0;
              if (uVar3 != 0) {
                uVar4 = *(ulong *)(uVar3 + 0x18);
                *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)(uVar3 + 0x18) = 0;
                if (uVar4 != 0) {
                  FUN_710392eb40(uVar4);
                }
                FUN_710392eb40(uVar3);
              }
              ppuVar1 = local_f8;
              local_100 = &PTR_FUN_710523d988;
              local_f8 = (undefined **)0x0;
              if (ppuVar1 != (undefined **)0x0) {
                uVar3 = *(ulong *)((long)ppuVar1 + 0x18);
                *(undefined ***)((long)ppuVar1 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)((long)ppuVar1 + 0x18) = 0;
                if (uVar3 != 0) {
                  FUN_710392eb40(uVar3);
                }
                FUN_710392eb40((ulong)ppuVar1);
              }
              if (5 < (int)*plVar9) {
                pppplVar5 = (long ****)0x5;
                FUN_7103776640(&local_100,(long)&local_110,(byte ****)"player_%02d",5,param_4,
                               param_5,param_6,param_7,param_8);
                FUN_7103776390(&local_70,&local_100,pppplVar5,param_4,param_5,param_6,param_7,
                               param_8);
                pppplVar5 = param_3;
                FUN_7101bcb6b0(param_1[5],&local_70,param_3,param_4,param_5,param_6,param_7,param_8)
                ;
                uVar3 = local_68;
                local_70 = &PTR_FUN_710523d988;
                local_68 = 0;
                if (uVar3 != 0) {
                  uVar4 = *(ulong *)(uVar3 + 0x18);
                  *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
                  *(undefined8 *)(uVar3 + 0x18) = 0;
                  if (uVar4 != 0) {
                    FUN_710392eb40(uVar4);
                  }
                  FUN_710392eb40(uVar3);
                }
                ppuVar1 = local_f8;
                local_100 = &PTR_FUN_710523d988;
                local_f8 = (undefined **)0x0;
                if (ppuVar1 != (undefined **)0x0) {
                  uVar3 = *(ulong *)((long)ppuVar1 + 0x18);
                  *(undefined ***)((long)ppuVar1 + 0x10) = &PTR_FUN_710523d9a8;
                  *(undefined8 *)((long)ppuVar1 + 0x18) = 0;
                  if (uVar3 != 0) {
                    FUN_710392eb40(uVar3);
                  }
                  FUN_710392eb40((ulong)ppuVar1);
                }
                if (6 < (int)*plVar9) {
                  pppplVar5 = (long ****)0x6;
                  FUN_7103776640(&local_100,(long)&local_110,(byte ****)"player_%02d",6,param_4,
                                 param_5,param_6,param_7,param_8);
                  FUN_7103776390(&local_70,&local_100,pppplVar5,param_4,param_5,param_6,param_7,
                                 param_8);
                  pppplVar5 = param_3;
                  FUN_7101bcb6b0(param_1[6],&local_70,param_3,param_4,param_5,param_6,param_7,
                                 param_8);
                  uVar3 = local_68;
                  local_70 = &PTR_FUN_710523d988;
                  local_68 = 0;
                  if (uVar3 != 0) {
                    uVar4 = *(ulong *)(uVar3 + 0x18);
                    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
                    *(undefined8 *)(uVar3 + 0x18) = 0;
                    if (uVar4 != 0) {
                      FUN_710392eb40(uVar4);
                    }
                    FUN_710392eb40(uVar3);
                  }
                  ppuVar1 = local_f8;
                  local_100 = &PTR_FUN_710523d988;
                  local_f8 = (undefined **)0x0;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar3 = *(ulong *)((long)ppuVar1 + 0x18);
                    *(undefined ***)((long)ppuVar1 + 0x10) = &PTR_FUN_710523d9a8;
                    *(undefined8 *)((long)ppuVar1 + 0x18) = 0;
                    if (uVar3 != 0) {
                      FUN_710392eb40(uVar3);
                    }
                    FUN_710392eb40((ulong)ppuVar1);
                  }
                  if (7 < (int)*plVar9) {
                    pppplVar5 = (long ****)&DAT_00000007;
                    FUN_7103776640(&local_100,(long)&local_110,(byte ****)"player_%02d",7,param_4,
                                   param_5,param_6,param_7,param_8);
                    FUN_7103776390(&local_70,&local_100,pppplVar5,param_4,param_5,param_6,param_7,
                                   param_8);
                    FUN_7101bcb6b0(param_1[7],&local_70,param_3,param_4,param_5,param_6,param_7,
                                   param_8);
                    uVar3 = local_68;
                    local_70 = &PTR_FUN_710523d988;
                    local_68 = 0;
                    pppplVar5 = param_3;
                    if (uVar3 != 0) {
                      uVar4 = *(ulong *)(uVar3 + 0x18);
                      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
                      *(undefined8 *)(uVar3 + 0x18) = 0;
                      if (uVar4 != 0) {
                        FUN_710392eb40(uVar4);
                        pppplVar5 = param_3;
                      }
                      FUN_710392eb40(uVar3);
                    }
                    ppuVar1 = local_f8;
                    local_100 = &PTR_FUN_710523d988;
                    local_f8 = (undefined **)0x0;
                    if (ppuVar1 != (undefined **)0x0) {
                      uVar3 = *(ulong *)((long)ppuVar1 + 0x18);
                      *(undefined ***)((long)ppuVar1 + 0x10) = &PTR_FUN_710523d9a8;
                      *(undefined8 *)((long)ppuVar1 + 0x18) = 0;
                      if (uVar3 != 0) {
                        FUN_710392eb40(uVar3);
                      }
                      FUN_710392eb40((ulong)ppuVar1);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (0 < (int)uVar6) {
      if (7 < (int)uVar6) {
        uVar6 = 8;
      }
      *(uint *)(param_1 + 8) = uVar6;
      *(undefined4 *)((long)param_1 + 0x44) = uVar7;
      goto LAB_7101bcc6f8;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)((long)param_1 + 0x44) = uVar7;
  }
  local_f8 = (undefined **)0x71042b4212;
  local_e8 = "layout_pn1";
  local_e0 = 2;
  local_d0 = 3;
  local_c8 = "layout_pn3";
  local_c0 = 4;
  local_b8 = "layout_pn4";
  local_b0 = 5;
  local_a0 = 6;
  local_d8 = "layout_pn2";
  local_a8 = "layout_pn5";
  local_98 = "layout_pn6";
  local_90 = 7;
  local_88 = "layout_pn7";
  local_100 = (undefined **)((ulong)local_100 & 0xffffffff00000000);
  local_f0 = 1;
  local_80 = 8;
  local_78 = "layout_pn8";
  local_60 = &PTR_FUN_710523d9e8;
  puVar2 = (undefined8 *)FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&SUB_00000018;
      pppplVar5 = &local_50;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         puVar2 != (undefined8 *)0x0)) goto LAB_7101bcccd0;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101bcccd0:
  *(undefined1 *)(puVar2 + 2) = 1;
  *puVar2 = 0;
  puVar2[1] = 0;
  if ((undefined ***)(param_1 + 10) != &local_60) {
    *(undefined8 *)param_1[0xb] = *puVar2;
    *(undefined8 *)(param_1[0xb] + 8) = puVar2[1];
    *(undefined1 *)(param_1[0xb] + 0x10) = *(undefined1 *)(puVar2 + 2);
  }
  if ((undefined ***)(param_1 + 0xc) != &local_60) {
    *(undefined8 *)param_1[0xd] = *puVar2;
    *(undefined8 *)(param_1[0xd] + 8) = puVar2[1];
    *(undefined1 *)(param_1[0xd] + 0x10) = *(undefined1 *)(puVar2 + 2);
  }
  if ((undefined ***)(param_1 + 0xe) != &local_60) {
    *(undefined8 *)param_1[0xf] = *puVar2;
    *(undefined8 *)(param_1[0xf] + 8) = puVar2[1];
    *(undefined1 *)(param_1[0xf] + 0x10) = *(undefined1 *)(puVar2 + 2);
  }
  if ((undefined ***)(param_1 + 0x10) != &local_60) {
    *(undefined8 *)param_1[0x11] = *puVar2;
    *(undefined8 *)(param_1[0x11] + 8) = puVar2[1];
    *(undefined1 *)(param_1[0x11] + 0x10) = *(undefined1 *)(puVar2 + 2);
  }
  if ((undefined ***)(param_1 + 0x12) != &local_60) {
    *(undefined8 *)param_1[0x13] = *puVar2;
    *(undefined8 *)(param_1[0x13] + 8) = puVar2[1];
    *(undefined1 *)(param_1[0x13] + 0x10) = *(undefined1 *)(puVar2 + 2);
  }
  if ((undefined ***)(param_1 + 0x14) != &local_60) {
    *(undefined8 *)param_1[0x15] = *puVar2;
    *(undefined8 *)(param_1[0x15] + 8) = puVar2[1];
    *(undefined1 *)(param_1[0x15] + 0x10) = *(undefined1 *)(puVar2 + 2);
  }
  if ((undefined ***)(param_1 + 0x16) != &local_60) {
    *(undefined8 *)param_1[0x17] = *puVar2;
    *(undefined8 *)(param_1[0x17] + 8) = puVar2[1];
    *(undefined1 *)(param_1[0x17] + 0x10) = *(undefined1 *)(puVar2 + 2);
  }
  if ((undefined ***)(param_1 + 0x18) != &local_60) {
    *(undefined8 *)param_1[0x19] = *puVar2;
    *(undefined8 *)(param_1[0x19] + 8) = puVar2[1];
    *(undefined1 *)(param_1[0x19] + 0x10) = *(undefined1 *)(puVar2 + 2);
  }
  if ((undefined ***)(param_1 + 0x1a) != &local_60) {
    *(undefined8 *)param_1[0x1b] = *puVar2;
    *(undefined8 *)(param_1[0x1b] + 8) = puVar2[1];
    *(undefined1 *)(param_1[0x1b] + 0x10) = *(undefined1 *)(puVar2 + 2);
  }
  local_60 = &PTR_FUN_710523d9e8;
  local_58 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  pppuVar8 = &local_100;
  while (*(uint *)pppuVar8 < 9) {
    FUN_71037780e0(&local_60,(long)&local_110,(long ****)pppuVar8[1],pppplVar5,param_4,param_5,
                   param_6,param_7,param_8);
    uVar3 = local_58;
    uVar6 = *(uint *)pppuVar8;
    if (8 < uVar6) break;
    if ((undefined ***)(param_1 + (long)(int)uVar6 * 2 + 10) != &local_60) {
      local_58 = 0;
      uVar4 = param_1[(long)(int)uVar6 * 2 + 0xb];
      param_1[(long)(int)uVar6 * 2 + 0xb] = uVar3;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
    uVar3 = local_58;
    local_60 = &PTR_FUN_710523d9e8;
    local_58 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    uVar3 = local_108;
    pppuVar8 = pppuVar8 + 2;
    if (pppuVar8 == &local_70) {
      local_110 = &PTR_FUN_710523d988;
      local_108 = 0;
      if (uVar3 != 0) {
        uVar4 = *(ulong *)(uVar3 + 0x18);
        *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar3 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar3);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

