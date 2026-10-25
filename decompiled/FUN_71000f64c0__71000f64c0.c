// addr:      71000f64c0
// offset:    0xf64c0
// name:      FUN_71000f64c0
// mangled:   
// signature: undefined FUN_71000f64c0(void)


void FUN_71000f64c0(int *param_1,long *param_2,int param_3,int param_4,long *param_5,ulong param_6,
                   long param_7)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  lVar4 = DAT_71052adb38;
  if ((param_6 & 0xffff) != 0) {
    lVar10 = *(long *)(DAT_71052adb38 + 0xf0);
    if (((uint)param_6 & 0xffff) == 1) {
      lVar11 = 0;
      bVar5 = false;
      bVar3 = false;
    }
    else {
      lVar11 = 0;
      bVar5 = false;
      bVar3 = false;
      do {
        plVar1 = param_5 + lVar11;
        lVar11 = lVar11 + 2;
        lVar12 = *plVar1;
        lVar2 = plVar1[1];
        bVar5 = (bool)(bVar5 | lVar12 == param_7 | lVar2 == param_7);
        bVar3 = (bool)(bVar3 | lVar12 == lVar10 | lVar2 == lVar10);
      } while ((param_6 & 0xffff) - (param_6 & 1) != lVar11);
    }
    if ((param_6 & 1) != 0) {
      bVar3 = (bool)(bVar3 | param_5[lVar11] == lVar10);
      bVar5 = (bool)(bVar5 | param_5[lVar11] == param_7);
    }
    if ((bVar5) && (bVar3)) {
      plVar1 = param_2 + 0x15;
      if ((int)param_2[0x17] != 0) {
        if ((long *)param_2[0x16] != plVar1) {
          plVar9 = (long *)param_2[0x16];
          do {
            plVar14 = (long *)plVar9[1];
            *plVar9 = 0;
            plVar9[1] = 0;
            FUN_71000b70c0((long)(param_2 + 0x18),(long)(param_2 + 0x18),
                           (long *)((long)*(int *)((long)param_2 + 0xd4) + (long)plVar9));
            plVar9 = plVar14;
          } while (plVar14 != plVar1);
        }
        FUN_71000b7080((long)plVar1);
      }
      *(undefined4 *)(param_2 + 0x1e) = 0;
      if (param_3 != 10) {
        if (param_3 == 9) {
          if (*(int *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x162) * 4 + 0x180) == 0)
          goto LAB_71000f6878;
          *(undefined1 *)((long)param_2 + 0x264) = 0;
          lVar10 = *(long *)(lVar4 + 8);
          if (lVar10 != 0) {
            iVar6 = FUN_71000ee2c0(lVar10);
            if (iVar6 != 0) {
              uVar13 = 0;
              do {
                iVar6 = FUN_71000ee290(lVar10,uVar13);
                if ((iVar6 != 0) &&
                   (iVar6 = FUN_71000ee290(lVar10,uVar13),
                   iVar6 != *(int *)(lVar4 + (ulong)(*(char *)(lVar4 + 0x162) == '\0') * 4 + 0x180))
                   ) goto LAB_71000f66ac;
                uVar13 = uVar13 + 1;
                uVar7 = FUN_71000ee2c0(lVar10);
              } while (uVar13 < uVar7);
            }
            *(undefined1 *)((long)param_2 + 0x264) = 1;
          }
LAB_71000f66ac:
          if (param_4 == 8) {
            *(undefined4 *)(param_2 + 0x46) = 3;
            lVar10 = FUN_7100193a50(DAT_71052adfc0);
            lVar11 = *(long *)(lVar10 + 8);
            if (lVar11 != lVar10) {
              lVar12 = *(long *)(lVar4 + 0xb8);
              do {
                bVar5 = FUN_7100150680(lVar12,*(long *)(lVar11 + 0x10));
                if ((((bVar5) &&
                     (uVar8 = FUN_7100150d50(lVar12,*(long *)(lVar11 + 0x10),aiStack_78),
                     (uVar8 & 1) != 0)) &&
                    (aiStack_78[0] == *(int *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x162) * 4 + 0x180))
                    ) && ((int)param_2[0x1a] != 0)) {
                  plVar9 = FUN_71000b71c0(param_2 + 0x18);
                  if (plVar9 == (long *)0x0) {
                    plVar9 = (long *)0x0;
                  }
                  else {
                    plVar9 = (long *)((long)plVar9 - (long)*(int *)((long)param_2 + 0xd4));
                  }
                  plVar9[2] = 0;
                  FUN_71000b7090((long)plVar1,plVar1,plVar9);
                  plVar9[2] = *(long *)(lVar11 + 0x10);
                }
                lVar11 = *(long *)(lVar11 + 8);
              } while (lVar11 != lVar10);
            }
          }
          else {
            (**(code **)(*param_2 + 0x80))(param_1,param_2,9,param_5,param_6 & 0xffffffff,param_7);
            if (*param_1 != 0) {
              return;
            }
          }
        }
        else {
          if (*(int *)(lVar4 + (ulong)(*(char *)(lVar4 + 0x162) == '\0') * 4 + 0x180) != 0)
          goto LAB_71000f6878;
          *(undefined1 *)((long)param_2 + 0x264) = 0;
          lVar10 = *(long *)(lVar4 + 8);
          if ((lVar10 != 0) && (iVar6 = FUN_71000ee2c0(lVar10), iVar6 != 0)) {
            uVar13 = 0;
            do {
              iVar6 = FUN_71000ee290(lVar10,uVar13);
              if ((iVar6 != 0) &&
                 (iVar6 = FUN_71000ee290(lVar10,uVar13),
                 iVar6 != *(int *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x162) * 4 + 0x180))) {
                *(undefined1 *)((long)param_2 + 0x264) = 1;
              }
              uVar13 = uVar13 + 1;
              uVar7 = FUN_71000ee2c0(lVar10);
            } while (uVar13 < uVar7);
          }
          *(undefined4 *)(param_2 + 0x46) = 6;
          *(undefined4 *)(param_2 + 0x13) = 6;
          if ((param_6 & 0xffff) != 0) {
            param_6 = param_6 & 0xffff;
            do {
              if ((int)param_2[0x1a] != 0) {
                plVar9 = FUN_71000b71c0(param_2 + 0x18);
                if (plVar9 == (long *)0x0) {
                  plVar9 = (long *)0x0;
                }
                else {
                  plVar9 = (long *)((long)plVar9 - (long)*(int *)((long)param_2 + 0xd4));
                }
                plVar9[2] = 0;
                FUN_71000b7090((long)plVar1,plVar1,plVar9);
                plVar9[2] = *param_5;
              }
              param_5 = param_5 + 1;
              param_6 = param_6 - 1;
            } while (param_6 != 0);
          }
        }
LAB_71000f69d4:
        if (param_3 - 6U < 3) {
          DAT_71052acc28 = 0xffffffffffffffff;
          DAT_71052acc30 = 0xffffffff;
          DAT_71052ac93c = 0xffffffff;
        }
        DAT_71052acc34 = 0xffffffffffffffff;
        *(undefined1 *)((long)param_2 + 0x234) = 0;
        *(undefined1 *)(param_2 + 0x48) = 0;
        *(undefined1 *)(param_2 + 0x4a) = 0;
        param_2[6] = (long)FUN_71000f53b0;
        param_2[7] = 0;
        *(undefined2 *)(param_2 + 0x4c) = 0;
        param_2[8] = (long)"NexMatchJointSessionJob::CallSessionEvent";
        aiStack_78[0] = 0;
        goto LAB_71000f6888;
      }
      if (*(int *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x162) * 4 + 0x180) != 0) {
        *(undefined1 *)((long)param_2 + 0x264) = 0;
        lVar10 = *(long *)(lVar4 + 8);
        if (lVar10 != 0) {
          iVar6 = FUN_71000ee2c0(lVar10);
          if (iVar6 != 0) {
            uVar13 = 0;
            do {
              iVar6 = FUN_71000ee290(lVar10,uVar13);
              if ((iVar6 != 0) &&
                 (iVar6 = FUN_71000ee290(lVar10,uVar13),
                 iVar6 != *(int *)(lVar4 + (ulong)(*(char *)(lVar4 + 0x162) == '\0') * 4 + 0x180)))
              goto LAB_71000f67f4;
              uVar13 = uVar13 + 1;
              uVar7 = FUN_71000ee2c0(lVar10);
            } while (uVar13 < uVar7);
          }
          *(undefined1 *)((long)param_2 + 0x264) = 1;
        }
LAB_71000f67f4:
        *(undefined4 *)(param_2 + 0x46) = 6;
        *(undefined4 *)(param_2 + 0x13) = 6;
        if ((param_6 & 0xffff) != 0) {
          param_6 = param_6 & 0xffff;
          do {
            if ((int)param_2[0x1a] != 0) {
              plVar9 = FUN_71000b71c0(param_2 + 0x18);
              if (plVar9 == (long *)0x0) {
                plVar9 = (long *)0x0;
              }
              else {
                plVar9 = (long *)((long)plVar9 - (long)*(int *)((long)param_2 + 0xd4));
              }
              plVar9[2] = 0;
              FUN_71000b7090((long)plVar1,plVar1,plVar9);
              plVar9[2] = *param_5;
            }
            param_5 = param_5 + 1;
            param_6 = param_6 - 1;
          } while (param_6 != 0);
        }
        goto LAB_71000f69d4;
      }
    }
  }
LAB_71000f6878:
  aiStack_78[0] = 0x10c08;
LAB_71000f6888:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
  auStack_68[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)auStack_68);
  FUN_71000bce50(param_1,aiStack_78);
  return;
}

