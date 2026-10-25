// addr:      71026b2db0
// offset:    0x26b2db0
// name:      FUN_71026b2db0
// mangled:   
// signature: ulong __cdecl FUN_71026b2db0(ulong param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


ulong FUN_71026b2db0(ulong param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  byte local_50 [32];
  
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = param_1;
  if ((lVar6 != 0) && ((*(long *)(lVar6 + 0xd8) == 0 || (*(long *)(lVar6 + 0x68) != 0x15e6230a1c))))
  {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x310);
    plVar2 = *(long **)(lVar5 + 0x100);
    plVar4 = *(long **)(lVar5 + 0x108);
    if (plVar2 != plVar4) {
      do {
        if (((int)plVar2[1] == 0) && (lVar5 = *plVar2, *(long *)(lVar5 + 8) == 0xe8c278baf)) {
          if (lVar5 != 0) {
            if (*(int *)(param_1 + 0xe8) - 6U < 2) {
              if (*(byte *)(param_1 + 0x179) < 2) goto LAB_71026b2e94;
LAB_71026b2ef0:
              uVar3 = FUN_71025eae10(lVar6 + 0x60,lVar5,(long ****)"dys_common_set_tstance",param_4,
                                     param_5,param_6,param_7,param_8);
LAB_71026b2f04:
              lVar6 = *(long *)(param_1 + 0x10);
            }
            else {
              if (1 < *(int *)(param_1 + 0xe8) - 0x16U) goto LAB_71026b2ef0;
LAB_71026b2e94:
              plVar2 = *(long **)(lVar6 + 0xd8);
              *(undefined8 *)(lVar6 + 0xd0) = 0;
              *(undefined8 *)(lVar6 + 0xd8) = 0;
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 8))();
              }
              *(long *)(lVar6 + 0xd0) = lVar5;
              plVar2 = FUN_71026533a0((undefined8 *)(lVar6 + 0x90),lVar5,param_3,param_4,param_5,
                                      param_6,param_7,param_8);
              plVar4 = *(long **)(lVar6 + 0xd8);
              *(long **)(lVar6 + 0xd8) = plVar2;
              uVar3 = 0;
              if (plVar4 == (long *)0x0) goto LAB_71026b2f04;
              uVar3 = (**(code **)(*plVar4 + 8))();
              lVar6 = *(long *)(param_1 + 0x10);
            }
            if (lVar6 == 0) {
              return uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_wait");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x18) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_hear");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x20) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_clap");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x28) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_komari");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x30) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_musu");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x38) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_niko");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x40) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_walk");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x48) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_run");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x50) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_sleep");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x58) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_sit");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x60) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_pose_wait");
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(*(long *)(param_1 + 0x10) + 0xd0),local_50),
               uVar3 != 0)) {
              *(ulong *)(param_1 + 0x68) = uVar3;
            }
            local_50[0x10] = 0;
            local_50[0x11] = 0;
            local_50[0x12] = 0;
            local_50[0x13] = 0;
            local_50[0x14] = 0;
            local_50[0x15] = 0;
            local_50[0x16] = 0;
            local_50[0x17] = 0;
            local_50[0x18] = 0;
            local_50[0x19] = 0;
            local_50[0x1a] = 0;
            local_50[0x1b] = 0;
            local_50[0x1c] = 0;
            local_50[0x1d] = 0;
            local_50[0x1e] = 0;
            local_50[0x1f] = 0;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            local_50[8] = 0;
            local_50[9] = 0;
            local_50[10] = 0;
            local_50[0xb] = 0;
            local_50[0xc] = 0;
            local_50[0xd] = 0;
            local_50[0xe] = 0;
            local_50[0xf] = 0;
            uVar1 = snprintf((char *)local_50,0x20,"%s%s","dys_common_set","_Monban_wait");
            uVar3 = (ulong)uVar1;
            lVar6 = *(long *)(param_1 + 0x10);
            if ((lVar6 != 0) &&
               (uVar3 = FUN_71025ee6c0(*(long *)(lVar6 + 0xd0),local_50), uVar3 != 0)) {
              *(ulong *)(param_1 + 0x70) = uVar3;
              if (lVar6 == 0) {
                return uVar3;
              }
              goto LAB_71026b2e38;
            }
          }
          break;
        }
        plVar2 = plVar2 + 2;
      } while (plVar4 != plVar2);
      if (lVar6 == 0) {
        return uVar3;
      }
    }
LAB_71026b2e38:
    if (*(long *)(lVar6 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar6 + 0xd8) + 8) + 8);
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,&DAT_71043064b0);
      *(int *)(param_1 + 0x94) = (int)uVar3;
    }
  }
  return uVar3;
}

