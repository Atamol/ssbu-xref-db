// addr:      7100000a90
// offset:    0xa90
// name:      FUN_7100000a90
// mangled:   
// signature: undefined4 __cdecl FUN_7100000a90(long * param_1, undefined8 param_2, undefined1 * param_3, undefined1 * param_4, char * param_5, byte * * param_6, size_t * * * * * * * param_7, size_t * * * * * * * param_8)


undefined4
FUN_7100000a90(long *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
              char *param_5,byte **param_6,size_t *******param_7,size_t *******param_8)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t *******pppppppsVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined8 local_68;
  
  uVar9 = 0x2b;
  if (param_1 != (long *)0x0) {
    if (param_1[0x15] == 0) {
      plVar11 = (long *)param_1[0x16];
      if (plVar11 == (long *)0x0) {
        plVar11 = FUN_71000082f0(1,3,param_3,param_4,param_5,(undefined1 *)param_6,(char *)param_7,
                                 (long)param_8);
        if (plVar11 == (long *)0x0) {
          return 0x1b;
        }
        param_1[0x16] = (long)plVar11;
      }
      lVar5 = param_1[299];
      FUN_710000b5e0(plVar11,6,lVar5,param_4,param_5,param_6,param_7,param_8);
      uVar4 = FUN_7100008440(plVar11,param_1,lVar5,param_4,param_5,param_6,param_7,param_8);
      if ((int)uVar4 == 0) {
        bVar1 = false;
        uVar9 = 0;
        uVar12 = 0;
        param_1[0x15] = (long)plVar11;
        do {
          local_68._4_4_ = 0;
          auVar13 = FUN_7100017740();
          pppppppsVar8 = (size_t *******)&local_68;
          uVar6 = 0;
          uVar7 = 1000;
          uVar4 = FUN_7100009580(plVar11,0,0,1000,(int *)pppppppsVar8);
          auVar15._8_8_ = uVar7;
          auVar15._0_8_ = uVar6;
          iVar3 = (int)uVar4;
          if (iVar3 == 0) {
            if ((uint)local_68 == 0) {
              auVar14 = FUN_7100017740();
              lVar5 = FUN_7100017750(auVar14._0_8_,auVar14._8_4_,auVar13._0_8_,auVar13._8_4_);
              auVar15 = auVar13;
              if (10 < lVar5) goto LAB_7100000bf4;
              uVar2 = uVar12 + 1;
              if (1 < (int)uVar12) {
                iVar3 = 1 << (ulong)(uVar12 & 0x1f);
                if (8 < (int)uVar12) {
                  iVar3 = 1000;
                }
                FUN_7100015730(iVar3);
              }
            }
            else {
LAB_7100000bf4:
              uVar2 = 0;
            }
            uVar12 = uVar2;
            iVar3 = FUN_7100009aa0(plVar11,(undefined4 *)((long)&local_68 + 4),auVar15._0_8_,
                                   auVar15._8_8_,pppppppsVar8,param_6,param_7,param_8);
            if (local_68._4_4_ == 0 && iVar3 == 0) goto LAB_7100000b8c;
          }
          else if (local_68._4_4_ == 0 && iVar3 == 0) {
LAB_7100000b8c:
            lVar5 = FUN_710000b4b0(plVar11,(uint *)&local_68);
            if (lVar5 != 0) {
              uVar9 = *(undefined4 *)(lVar5 + 0x10);
              bVar1 = true;
            }
          }
        } while ((iVar3 == 0) && (!bVar1));
        uVar10 = 0x1b;
        if (iVar3 != 3) {
          uVar10 = 0x2b;
        }
        if (iVar3 != 0) {
          uVar9 = uVar10;
        }
        FUN_71000088e0(plVar11,param_1,auVar15._0_8_,auVar15._8_8_,pppppppsVar8,param_6,param_7,
                       param_8);
      }
      else {
        FUN_710000b340(plVar11,extraout_x1,lVar5,param_4,param_5,param_6,param_7,param_8);
        uVar9 = 0x1b;
        if ((int)uVar4 != 3) {
          uVar9 = 2;
        }
      }
    }
    else {
      FUN_7100016040((long)param_1,(byte *)"easy handle already used in multi handle",param_3,
                     param_4,param_5,param_6,param_7,param_8);
      uVar9 = 2;
    }
  }
  return uVar9;
}

