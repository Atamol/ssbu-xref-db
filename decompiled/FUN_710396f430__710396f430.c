// addr:      710396f430
// offset:    0x396f430
// name:      FUN_710396f430
// mangled:   
// signature: undefined8 __cdecl FUN_710396f430(long param_1, long param_2, uint param_3, char * param_4, undefined4 param_5, byte param_6)


undefined8
FUN_710396f430(long param_1,long param_2,uint param_3,char *param_4,undefined4 param_5,byte param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  byte *pbVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  uVar14 = 0x80000015;
  if ((((*(char *)(param_2 + 1) == '\x02') && (*(char *)(param_2 + 2) == '\x01')) &&
      (*(char *)(param_2 + 3) == '\0')) && (*(int *)(param_2 + 4) == 0)) {
    *(long *)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 8);
    iVar2 = *(int *)(param_2 + 0xc);
    uVar6 = (ulong)(iVar2 * 4 + 0x1c);
    *(int *)(param_1 + 0x48) = iVar2;
    uVar14 = 0x80000017;
    if ((uVar6 + 8 <= (ulong)param_3) &&
       (uVar6 = (ulong)*(uint *)(param_2 + uVar6), uVar6 + 0xbc <= (ulong)param_3)) {
      uVar14 = 0x80000017;
      if (((*(uint *)(param_2 + 0x10) < 0x10001) || (*(char *)(param_1 + 0x58) == '\0')) &&
         (lVar5 = param_2 + uVar6,
         uVar4 = *(int *)(lVar5 + 0x18) + *(uint *)(param_2 + 0x10) + *(int *)(lVar5 + 0x14),
         uVar4 <= param_3 || *(char *)(param_1 + 0x58) != '\0')) {
        *(uint *)(param_1 + 0x10) = uVar4;
        uVar4 = iVar2 << 4;
        if (DAT_7106dd53f0 == (code *)0x0) {
          std::recursive_mutex::lock();
          puVar3 = FUN_71039873e0(DAT_7106dd53e0,uVar4,0);
          std::recursive_mutex::unlock();
        }
        else {
          puVar3 = (undefined8 *)(*DAT_7106dd53f0)((ulong)uVar4);
        }
        uVar14 = 0x80000004;
        *(undefined8 **)(param_1 + 0x50) = puVar3;
        if (puVar3 != (undefined8 *)0x0) {
          memset(puVar3,0,(ulong)uVar4);
          *(char **)(param_1 + 0x18) = param_4;
          *(undefined4 *)(param_1 + 0x20) = param_5;
          if (((param_4 == (char *)0x0) || (*param_4 != '\x01')) ||
             ((param_4[1] != '\0' || ((param_4[2] != '\0' || (param_4[3] != '\0')))))) {
            sprintf((char *)(param_1 + 0x34),"BANK%03d",*(int *)(param_1 + 0x30));
            *(char **)(param_1 + 0x28) = (char *)(param_1 + 0x34);
            iVar2 = *(int *)(param_1 + 0x48) << 3;
            if (DAT_7106dd53f0 == (code *)0x0) {
              std::recursive_mutex::lock();
              puVar3 = FUN_71039873e0(DAT_7106dd53e0,iVar2,0);
              std::recursive_mutex::unlock();
              *(undefined8 **)(param_1 + 0x40) = puVar3;
            }
            else {
              puVar3 = (undefined8 *)(*DAT_7106dd53f0)(iVar2);
              *(undefined8 **)(param_1 + 0x40) = puVar3;
            }
            if (puVar3 == (undefined8 *)0x0) {
              return 0x80000004;
            }
            memset(puVar3,0,(ulong)(uint)(*(int *)(param_1 + 0x48) << 3));
            if (*(int *)(param_1 + 0x48) != 0) {
              uVar15 = 0;
              uVar6 = 0;
              do {
                sprintf((char *)(*(long *)(param_1 + 0x40) + (uVar15 & 0xfffffff8)),"TONE%03d",
                        (int)uVar6);
                uVar6 = uVar6 + 1;
                uVar15 = uVar15 + 8;
              } while (uVar6 < *(uint *)(param_1 + 0x48));
            }
            lVar5 = *(long *)(param_1 + 0x18);
          }
          else {
            *(char **)(param_1 + 0x28) = param_4 + 0x20;
            lVar5 = *(long *)(param_1 + 0x18);
          }
          if (lVar5 != 0) {
            lVar5 = (ulong)*(uint *)(param_1 + 0x48) * 0x18;
            if (DAT_7106dd53f0 == (code *)0x0) {
              std::recursive_mutex::lock();
              puVar3 = FUN_71039873e0(DAT_7106dd53e0,(int)lVar5,0);
              std::recursive_mutex::unlock();
              *(undefined8 **)(param_1 + 0x68) = puVar3;
            }
            else {
              puVar3 = (undefined8 *)(*DAT_7106dd53f0)(lVar5);
              *(undefined8 **)(param_1 + 0x68) = puVar3;
            }
            if (puVar3 == (undefined8 *)0x0) {
              return 0x80000004;
            }
            memset((long *)(param_1 + 0x70),0,0x2000);
            *(undefined8 **)(param_1 + 0x60) = puVar3;
            if (*(int *)(param_1 + 0x48) != 0) {
              lVar5 = *(long *)(param_1 + 0x18);
              uVar4 = 0;
              pbVar7 = (byte *)(lVar5 + 0x40);
              pbVar8 = (byte *)(lVar5 + 0x41);
              uVar1 = *(int *)(lVar5 + 0x14) + *(int *)(lVar5 + 0x10);
              do {
                uVar9 = (uint)*pbVar7;
                plVar12 = (long *)(param_1 + 0x70);
                if (*pbVar7 != 0) {
                  uVar11 = 0;
                  pbVar13 = pbVar8;
                  do {
                    uVar11 = uVar11 * 3 + uVar9;
                    uVar9 = (uint)*pbVar13;
                    pbVar13 = pbVar13 + 1;
                  } while (uVar9 != 0);
                  plVar12 = (long *)(param_1 + (ulong)(uVar11 & 0x3ff) * 8 + 0x70);
                }
                *puVar3 = pbVar7;
                *(uint *)(*(long *)(param_1 + 0x60) + 8) = uVar4;
                *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) = 0;
                lVar5 = *plVar12;
                if (*plVar12 == 0) {
                  lVar5 = *(long *)(param_1 + 0x60);
                  *plVar12 = lVar5;
                }
                else {
                  do {
                    lVar10 = lVar5;
                    lVar5 = *(long *)(lVar10 + 0x10);
                  } while (lVar5 != 0);
                  *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(param_1 + 0x60);
                  lVar5 = *(long *)(param_1 + 0x60);
                }
                puVar3 = (undefined8 *)(lVar5 + 0x18);
                uVar4 = uVar4 + 1;
                pbVar7 = pbVar7 + uVar1;
                pbVar8 = pbVar8 + uVar1;
                *(undefined8 **)(param_1 + 0x60) = puVar3;
              } while (uVar4 < *(uint *)(param_1 + 0x48));
            }
          }
          uVar14 = 0;
          *(byte *)(param_1 + 0x59) = param_6 & 1;
        }
      }
    }
  }
  return uVar14;
}

