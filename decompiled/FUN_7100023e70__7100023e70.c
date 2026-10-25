// addr:      7100023e70
// offset:    0x23e70
// name:      FUN_7100023e70
// mangled:   
// signature: undefined4 __cdecl FUN_7100023e70(byte * param_1, long * param_2, long * param_3, long param_4)


/* WARNING: Removing unreachable block (ram,0x007100024214) */

undefined4 FUN_7100023e70(byte *param_1,long *param_2,long *param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  byte abStack_170 [256];
  long alStack_70 [2];
  
  if ((char *)*param_2 == (char *)0x0) {
    bVar2 = false;
    if (param_4 != 0) goto LAB_7100023eb4;
LAB_7100024238:
    lVar6 = FUN_71000242e0("HOME");
    if (lVar6 == 0) {
      return 1;
    }
    lVar6 = FUN_7100007fd0((byte *)"%s%s%s");
    FUN_71000272a0();
    if (lVar6 == 0) {
      return 0xffffffff;
    }
    lVar6 = FUN_7100027980();
    FUN_71000272a0();
  }
  else {
    bVar2 = *(char *)*param_2 != '\0';
    if (param_4 == 0) goto LAB_7100024238;
LAB_7100023eb4:
    lVar6 = FUN_7100027980();
  }
  if (lVar6 == 0) {
    return 1;
  }
  bVar3 = false;
  bVar1 = false;
  bVar4 = false;
  iVar10 = 0;
  uVar11 = 1;
  while (lVar6 = FUN_7100027a10(), lVar6 != 0) {
    pbVar7 = FUN_71000176a0(abStack_170," \t\n",alStack_70);
    if ((pbVar7 != (byte *)0x0) && (*pbVar7 != 0x23)) {
      if (bVar2) {
        do {
          pbVar8 = (byte *)*param_2;
          if (((pbVar8 != (byte *)0x0) && (*pbVar8 != 0)) &&
             (((char *)*param_3 != (char *)0x0 && (*(char *)*param_3 != '\0'))))
          goto LAB_71000242b0;
          if (iVar10 == 0) {
            bVar5 = FUN_7100017280((byte *)"machine",pbVar7);
            if (!bVar5) {
              pcVar9 = "default";
              goto LAB_7100024074;
            }
            iVar10 = 1;
          }
          else {
            pcVar9 = (char *)param_1;
            if (iVar10 == 1) {
LAB_7100024074:
              bVar5 = FUN_7100017280((byte *)pcVar9,pbVar7);
              if (bVar5) {
                uVar11 = 0;
              }
              iVar10 = 0;
              if (bVar5) {
                iVar10 = 2;
              }
            }
            else if (iVar10 == 2) {
              if (bVar4) {
                bVar3 = FUN_7100017280(pbVar8,pbVar7);
                bVar4 = false;
                iVar10 = 2;
              }
              else if (bVar1) {
                if (bVar3 == false) {
                  bVar4 = false;
                  bVar1 = false;
                  bVar3 = false;
                  iVar10 = 2;
                }
                else {
                  FUN_71000272a0();
                  lVar6 = FUN_71000272c0();
                  *param_3 = lVar6;
                  if (lVar6 == 0) goto LAB_71000242ac;
                  bVar4 = false;
                  bVar1 = false;
                  iVar10 = 2;
                }
              }
              else {
                bVar4 = FUN_7100017280((byte *)"login",pbVar7);
                if (bVar4) {
                  bVar1 = false;
                  bVar4 = true;
                  iVar10 = 2;
                }
                else {
                  bVar4 = FUN_7100017280((byte *)"password",pbVar7);
                  if (bVar4) {
                    bVar4 = false;
                    bVar1 = true;
                    iVar10 = 2;
                  }
                  else {
                    bVar4 = FUN_7100017280((byte *)"machine",pbVar7);
                    iVar10 = 1;
                    if (bVar4) {
                      bVar3 = false;
                    }
                    else {
                      iVar10 = 2;
                    }
                    bVar4 = false;
                    bVar1 = false;
                  }
                }
              }
            }
          }
          pbVar7 = FUN_71000176a0((byte *)0x0," \t\n",alStack_70);
        } while (pbVar7 != (byte *)0x0);
      }
      else {
        do {
          if (((((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 != '\0')) &&
              ((char *)*param_3 != (char *)0x0)) && (*(char *)*param_3 != '\0'))
          goto LAB_71000242b0;
          if (iVar10 == 2) {
            if (bVar4) {
              FUN_71000272a0();
              lVar6 = FUN_71000272c0();
              *param_2 = lVar6;
              if (lVar6 == 0) goto LAB_71000242ac;
              bVar4 = false;
              iVar10 = 2;
            }
            else if (bVar1) {
              FUN_71000272a0();
              lVar6 = FUN_71000272c0();
              *param_3 = lVar6;
              if (lVar6 == 0) goto LAB_71000242ac;
              bVar4 = false;
              bVar1 = false;
              iVar10 = 2;
            }
            else {
              bVar4 = FUN_7100017280((byte *)"login",pbVar7);
              if (bVar4) {
                bVar1 = false;
                bVar4 = true;
                iVar10 = 2;
              }
              else {
                bVar4 = FUN_7100017280((byte *)"password",pbVar7);
                if (bVar4) {
                  bVar4 = false;
                  bVar1 = true;
                  iVar10 = 2;
                }
                else {
                  bVar5 = FUN_7100017280((byte *)"machine",pbVar7);
                  iVar10 = 1;
                  if (!bVar5) {
                    iVar10 = 2;
                  }
                  bVar4 = false;
                  bVar1 = false;
                  if (bVar5) {
                    bVar3 = false;
                  }
                }
              }
            }
          }
          else {
            pcVar9 = (char *)param_1;
            if (iVar10 == 1) {
LAB_71000241dc:
              bVar5 = FUN_7100017280((byte *)pcVar9,pbVar7);
              if (bVar5) {
                uVar11 = 0;
              }
              iVar10 = 0;
              if (bVar5) {
                iVar10 = 2;
              }
            }
            else if (iVar10 == 0) {
              bVar5 = FUN_7100017280((byte *)"machine",pbVar7);
              if (!bVar5) {
                pcVar9 = "default";
                goto LAB_71000241dc;
              }
              iVar10 = 1;
            }
          }
          pbVar7 = FUN_71000176a0((byte *)0x0," \t\n",alStack_70);
        } while (pbVar7 != (byte *)0x0);
      }
    }
  }
LAB_71000242b0:
  FUN_7100027950();
  return uVar11;
LAB_71000242ac:
  uVar11 = 0xffffffff;
  goto LAB_71000242b0;
}

