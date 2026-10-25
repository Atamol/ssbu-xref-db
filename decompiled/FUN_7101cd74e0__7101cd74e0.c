// addr:      7101cd74e0
// offset:    0x1cd74e0
// name:      FUN_7101cd74e0
// mangled:   
// signature: undefined __cdecl FUN_7101cd74e0(long param_1, int param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cd74e0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char *pcVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  byte ****ppppbVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  byte ***local_1a0;
  undefined2 local_198;
  undefined4 local_196;
  undefined2 local_192;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  undefined **local_70;
  long *local_68;
  undefined ***local_50;
  
  ppppbVar4 = &local_1a0;
  ppppbVar3 = &local_1a0;
  ppppbVar5 = &local_1a0;
  ppppbVar6 = &local_1a0;
  plVar12 = (long *)(param_1 + 0x260);
  if (*(long *)(param_1 + 0x260) == 0) {
    local_198 = 0x101;
    local_190 = 1;
    local_18c = 1;
    local_18a = 1;
    local_188 = &DAT_41f0000000000000;
    local_1a0 = (byte ***)0x0;
    local_192 = 0;
    local_196 = 0;
    local_180 = 0;
    local_150 = (long *)0x0;
    local_120 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_90 = (long *)0x0;
    local_80 = 0;
    local_70 = (undefined **)&DAT_71051860d0;
    local_50 = &local_70;
    FUN_7101989a30((long *)&local_70,alStack_e0);
    if (&local_70 == local_50) {
      pcVar7 = (code *)(*local_50)[4];
LAB_7101cd759c:
      (*pcVar7)();
    }
    else if (local_50 != (undefined ***)0x0) {
      pcVar7 = (code *)(*local_50)[5];
      goto LAB_7101cd759c;
    }
    FUN_7103770b30(plVar12,(undefined8 *)(param_1 + 0x170),(long ****)"selector_01",&local_1a0,
                   param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,0,"set_parts_btn_req_00",ppppbVar4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,1,"set_parts_btn_req_01",ppppbVar4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,2,"set_parts_btn_req_02",ppppbVar4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,3,"set_parts_btn_req_03",ppppbVar4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,4,"set_parts_btn_req_04",ppppbVar4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,5,"set_parts_btn_req_05",ppppbVar4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,6,"set_parts_btn_req_06",ppppbVar4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,7,"set_parts_btn_req_07",ppppbVar4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,8,"set_parts_btn_req_08",ppppbVar4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,9,"set_parts_btn_req_09",ppppbVar4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,10,"set_ok_dummy",ppppbVar4,param_5,param_6,param_7,param_8);
    lVar10 = *(long *)(*(long *)(param_1 + 0x260) + 0x1b8);
    if (lVar10 != 0) {
      lVar8 = *(long *)(param_1 + 0x260) + 0x1b8;
      lVar9 = lVar8;
      lVar11 = lVar10;
      do {
        bVar1 = *(int *)(lVar11 + 0x20) < 0;
        if (!bVar1) {
          lVar9 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)bVar1 * 8);
      } while (lVar11 != 0);
      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 1)) &&
         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x208))(plVar13,0);
        (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
        lVar8 = *plVar12 + 0x1b8;
        lVar10 = *(long *)(*plVar12 + 0x1b8);
      }
      lVar9 = lVar8;
      lVar11 = lVar10;
      if (lVar10 != 0) {
        do {
          if (0 < *(int *)(lVar11 + 0x20)) {
            lVar9 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 1) * 8);
        } while (lVar11 != 0);
        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 2)) &&
           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
          (**(code **)(*plVar13 + 0x208))(plVar13,0);
          (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
          lVar8 = *plVar12 + 0x1b8;
          lVar10 = *(long *)(*plVar12 + 0x1b8);
        }
        lVar9 = lVar8;
        lVar11 = lVar10;
        if (lVar10 != 0) {
          do {
            if (1 < *(int *)(lVar11 + 0x20)) {
              lVar9 = lVar11;
            }
            lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 2) * 8);
          } while (lVar11 != 0);
          if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 3)) &&
             (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
            (**(code **)(*plVar13 + 0x208))(plVar13,1);
            (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
            lVar8 = *plVar12 + 0x1b8;
            lVar10 = *(long *)(*plVar12 + 0x1b8);
          }
          lVar9 = lVar8;
          lVar11 = lVar10;
          if (lVar10 != 0) {
            do {
              if (2 < *(int *)(lVar11 + 0x20)) {
                lVar9 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 3) * 8);
            } while (lVar11 != 0);
            if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 4)) &&
               (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
              (**(code **)(*plVar13 + 0x208))(plVar13,0);
              (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
              lVar8 = *plVar12 + 0x1b8;
              lVar10 = *(long *)(*plVar12 + 0x1b8);
            }
            lVar9 = lVar8;
            lVar11 = lVar10;
            if (lVar10 != 0) {
              do {
                if (3 < *(int *)(lVar11 + 0x20)) {
                  lVar9 = lVar11;
                }
                lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 4) * 8);
              } while (lVar11 != 0);
              if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 5)) &&
                 (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                (**(code **)(*plVar13 + 0x208))(plVar13,0);
                (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                lVar8 = *plVar12 + 0x1b8;
                lVar10 = *(long *)(*plVar12 + 0x1b8);
              }
              lVar9 = lVar8;
              lVar11 = lVar10;
              if (lVar10 != 0) {
                do {
                  if (4 < *(int *)(lVar11 + 0x20)) {
                    lVar9 = lVar11;
                  }
                  lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 5) * 8);
                } while (lVar11 != 0);
                if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 6)) &&
                   (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                  (**(code **)(*plVar13 + 0x208))(plVar13,0);
                  (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                  lVar8 = *plVar12 + 0x1b8;
                  lVar10 = *(long *)(*plVar12 + 0x1b8);
                }
                lVar9 = lVar8;
                lVar11 = lVar10;
                if (lVar10 != 0) {
                  do {
                    if (5 < *(int *)(lVar11 + 0x20)) {
                      lVar9 = lVar11;
                    }
                    lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 6) * 8);
                  } while (lVar11 != 0);
                  if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 7)) &&
                     (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                    (**(code **)(*plVar13 + 0x208))(plVar13,0);
                    (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                    lVar8 = *plVar12 + 0x1b8;
                    lVar10 = *(long *)(*plVar12 + 0x1b8);
                  }
                  lVar9 = lVar8;
                  lVar11 = lVar10;
                  if (lVar10 != 0) {
                    do {
                      if (6 < *(int *)(lVar11 + 0x20)) {
                        lVar9 = lVar11;
                      }
                      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 7) * 8);
                    } while (lVar11 != 0);
                    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 8)) &&
                       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                      (**(code **)(*plVar13 + 0x208))(plVar13,0);
                      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                      lVar8 = *plVar12 + 0x1b8;
                      lVar10 = *(long *)(*plVar12 + 0x1b8);
                    }
                    lVar9 = lVar8;
                    lVar11 = lVar10;
                    if (lVar10 != 0) {
                      do {
                        if (7 < *(int *)(lVar11 + 0x20)) {
                          lVar9 = lVar11;
                        }
                        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 8) * 8);
                      } while (lVar11 != 0);
                      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 9)) &&
                         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                        (**(code **)(*plVar13 + 0x208))(plVar13,0);
                        (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                        lVar8 = *plVar12 + 0x1b8;
                        lVar10 = *(long *)(*plVar12 + 0x1b8);
                      }
                      lVar9 = lVar8;
                      lVar11 = lVar10;
                      if (lVar10 != 0) {
                        do {
                          if (8 < *(int *)(lVar11 + 0x20)) {
                            lVar9 = lVar11;
                          }
                          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 9) * 8);
                        } while (lVar11 != 0);
                        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 10)) &&
                           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                          (**(code **)(*plVar13 + 0x208))(plVar13,1);
                          (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
                          lVar8 = *plVar12 + 0x1b8;
                          lVar10 = *(long *)(*plVar12 + 0x1b8);
                        }
                        lVar9 = lVar8;
                        if (lVar10 != 0) {
                          do {
                            if (9 < *(int *)(lVar10 + 0x20)) {
                              lVar9 = lVar10;
                            }
                            lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 10) * 8);
                          } while (lVar10 != 0);
                          if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 0xb)) &&
                             (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                            (**(code **)(*plVar13 + 0x208))(plVar13,0);
                            (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
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
      }
    }
    if (alStack_b0 == local_90) {
      pcVar7 = *(code **)(*local_90 + 0x20);
LAB_7101cd7be4:
      (*pcVar7)();
    }
    else if (local_90 != (long *)0x0) {
      pcVar7 = *(code **)(*local_90 + 0x28);
      goto LAB_7101cd7be4;
    }
    if (alStack_e0 == local_c0) {
      pcVar7 = *(code **)(*local_c0 + 0x20);
LAB_7101cd7c14:
      (*pcVar7)();
    }
    else if (local_c0 != (long *)0x0) {
      pcVar7 = *(code **)(*local_c0 + 0x28);
      goto LAB_7101cd7c14;
    }
    if (alStack_110 == local_f0) {
      pcVar7 = *(code **)(*local_f0 + 0x20);
LAB_7101cd7c44:
      (*pcVar7)();
    }
    else if (local_f0 != (long *)0x0) {
      pcVar7 = *(code **)(*local_f0 + 0x28);
      goto LAB_7101cd7c44;
    }
    if (alStack_140 == local_120) {
      pcVar7 = *(code **)(*local_120 + 0x20);
LAB_7101cd7c74:
      (*pcVar7)();
    }
    else if (local_120 != (long *)0x0) {
      pcVar7 = *(code **)(*local_120 + 0x28);
      goto LAB_7101cd7c74;
    }
    if (alStack_170 == local_150) {
      pcVar7 = *(code **)(*local_150 + 0x20);
    }
    else {
      if (local_150 == (long *)0x0) goto LAB_7101cd7ca8;
      pcVar7 = *(code **)(*local_150 + 0x28);
    }
    (*pcVar7)();
  }
LAB_7101cd7ca8:
  switch(param_2) {
  case 0:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),0x710432a122);
    lVar10 = *(long *)(*(long *)(param_1 + 0x260) + 0x1b8);
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    lVar8 = *(long *)(param_1 + 0x260) + 0x1b8;
    lVar9 = lVar8;
    lVar11 = lVar10;
    do {
      bVar1 = *(int *)(lVar11 + 0x20) < 0;
      if (!bVar1) {
        lVar9 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)bVar1 * 8);
    } while (lVar11 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 1)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
      (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
      lVar8 = *plVar12 + 0x1b8;
      lVar10 = *(long *)(*plVar12 + 0x1b8);
    }
    lVar9 = lVar8;
    lVar11 = lVar10;
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    do {
      if (0 < *(int *)(lVar11 + 0x20)) {
        lVar9 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 1) * 8);
    } while (lVar11 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 2)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
      (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
      lVar8 = *plVar12 + 0x1b8;
      lVar10 = *(long *)(*plVar12 + 0x1b8);
    }
    lVar9 = lVar8;
    lVar11 = lVar10;
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    do {
      if (1 < *(int *)(lVar11 + 0x20)) {
        lVar9 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 2) * 8);
    } while (lVar11 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 3)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
      lVar8 = *plVar12 + 0x1b8;
      lVar10 = *(long *)(*plVar12 + 0x1b8);
    }
    lVar9 = lVar8;
    lVar11 = lVar10;
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    do {
      if (2 < *(int *)(lVar11 + 0x20)) {
        lVar9 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 3) * 8);
    } while (lVar11 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 4)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
      lVar8 = *plVar12 + 0x1b8;
      lVar10 = *(long *)(*plVar12 + 0x1b8);
    }
    lVar9 = lVar8;
    lVar11 = lVar10;
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    do {
      if (3 < *(int *)(lVar11 + 0x20)) {
        lVar9 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 4) * 8);
    } while (lVar11 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 5)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
      lVar8 = *plVar12 + 0x1b8;
      lVar10 = *(long *)(*plVar12 + 0x1b8);
    }
    lVar9 = lVar8;
    lVar11 = lVar10;
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    do {
      if (4 < *(int *)(lVar11 + 0x20)) {
        lVar9 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 5) * 8);
    } while (lVar11 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 6)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
      lVar8 = *plVar12 + 0x1b8;
      lVar10 = *(long *)(*plVar12 + 0x1b8);
    }
    lVar9 = lVar8;
    lVar11 = lVar10;
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    do {
      if (5 < *(int *)(lVar11 + 0x20)) {
        lVar9 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 6) * 8);
    } while (lVar11 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 7)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
      lVar8 = *plVar12 + 0x1b8;
      lVar10 = *(long *)(*plVar12 + 0x1b8);
    }
    lVar9 = lVar8;
    lVar11 = lVar10;
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    do {
      if (6 < *(int *)(lVar11 + 0x20)) {
        lVar9 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 7) * 8);
    } while (lVar11 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 8)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
      lVar8 = *plVar12 + 0x1b8;
      lVar10 = *(long *)(*plVar12 + 0x1b8);
    }
    lVar9 = lVar8;
    lVar11 = lVar10;
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    do {
      if (7 < *(int *)(lVar11 + 0x20)) {
        lVar9 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 8) * 8);
    } while (lVar11 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 9)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
      lVar8 = *plVar12 + 0x1b8;
      lVar10 = *(long *)(*plVar12 + 0x1b8);
    }
    lVar9 = lVar8;
    lVar11 = lVar10;
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    do {
      if (8 < *(int *)(lVar11 + 0x20)) {
        lVar9 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 9) * 8);
    } while (lVar11 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 10)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
      lVar8 = *plVar12 + 0x1b8;
      lVar10 = *(long *)(*plVar12 + 0x1b8);
    }
    lVar9 = lVar8;
    if (lVar10 == 0) goto LAB_7101cd9bcc;
    do {
      if (9 < *(int *)(lVar10 + 0x20)) {
        lVar9 = lVar10;
      }
      lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 10) * 8);
    } while (lVar10 != 0);
LAB_7101cd8c00:
    if (((lVar9 == lVar8) || (10 < *(int *)(lVar9 + 0x20))) ||
       (plVar12 = *(long **)(lVar9 + 0x28), plVar12 == (long *)0x0)) goto LAB_7101cd9bcc;
    goto LAB_7101cd9ba0;
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),0x71042a31be);
    lVar10 = *(long *)(*(long *)(param_1 + 0x260) + 0x1b8);
    if (lVar10 != 0) {
      lVar8 = *(long *)(param_1 + 0x260) + 0x1b8;
      lVar9 = lVar8;
      lVar11 = lVar10;
      do {
        bVar1 = *(int *)(lVar11 + 0x20) < 0;
        if (!bVar1) {
          lVar9 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)bVar1 * 8);
      } while (lVar11 != 0);
      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 1)) &&
         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
        (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
        lVar8 = *plVar12 + 0x1b8;
        lVar10 = *(long *)(*plVar12 + 0x1b8);
      }
      lVar9 = lVar8;
      lVar11 = lVar10;
      if (lVar10 != 0) {
        do {
          if (0 < *(int *)(lVar11 + 0x20)) {
            lVar9 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 1) * 8);
        } while (lVar11 != 0);
        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 2)) &&
           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
          (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
          (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
          lVar8 = *plVar12 + 0x1b8;
          lVar10 = *(long *)(*plVar12 + 0x1b8);
        }
        lVar9 = lVar8;
        lVar11 = lVar10;
        if (lVar10 != 0) {
          do {
            if (1 < *(int *)(lVar11 + 0x20)) {
              lVar9 = lVar11;
            }
            lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 2) * 8);
          } while (lVar11 != 0);
          if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 3)) &&
             (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
            (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
            (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
            lVar8 = *plVar12 + 0x1b8;
            lVar10 = *(long *)(*plVar12 + 0x1b8);
          }
          lVar9 = lVar8;
          lVar11 = lVar10;
          if (lVar10 != 0) {
            do {
              if (2 < *(int *)(lVar11 + 0x20)) {
                lVar9 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 3) * 8);
            } while (lVar11 != 0);
            if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 4)) &&
               (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
              (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
              (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
              lVar8 = *plVar12 + 0x1b8;
              lVar10 = *(long *)(*plVar12 + 0x1b8);
            }
            lVar9 = lVar8;
            lVar11 = lVar10;
            if (lVar10 != 0) {
              do {
                if (3 < *(int *)(lVar11 + 0x20)) {
                  lVar9 = lVar11;
                }
                lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 4) * 8);
              } while (lVar11 != 0);
              if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 5)) &&
                 (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
                (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
                lVar8 = *plVar12 + 0x1b8;
                lVar10 = *(long *)(*plVar12 + 0x1b8);
              }
              lVar9 = lVar8;
              lVar11 = lVar10;
              if (lVar10 != 0) {
                do {
                  if (4 < *(int *)(lVar11 + 0x20)) {
                    lVar9 = lVar11;
                  }
                  lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 5) * 8);
                } while (lVar11 != 0);
                if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 6)) &&
                   (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                  (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                  (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                  lVar8 = *plVar12 + 0x1b8;
                  lVar10 = *(long *)(*plVar12 + 0x1b8);
                }
                lVar9 = lVar8;
                lVar11 = lVar10;
                if (lVar10 != 0) {
                  do {
                    if (5 < *(int *)(lVar11 + 0x20)) {
                      lVar9 = lVar11;
                    }
                    lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 6) * 8);
                  } while (lVar11 != 0);
                  if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 7)) &&
                     (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                    (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                    (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                    lVar8 = *plVar12 + 0x1b8;
                    lVar10 = *(long *)(*plVar12 + 0x1b8);
                  }
                  lVar9 = lVar8;
                  lVar11 = lVar10;
                  if (lVar10 != 0) {
                    do {
                      if (6 < *(int *)(lVar11 + 0x20)) {
                        lVar9 = lVar11;
                      }
                      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 7) * 8);
                    } while (lVar11 != 0);
                    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 8)) &&
                       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                      lVar8 = *plVar12 + 0x1b8;
                      lVar10 = *(long *)(*plVar12 + 0x1b8);
                    }
                    lVar9 = lVar8;
                    lVar11 = lVar10;
                    if (lVar10 != 0) {
                      do {
                        if (7 < *(int *)(lVar11 + 0x20)) {
                          lVar9 = lVar11;
                        }
                        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 8) * 8);
                      } while (lVar11 != 0);
                      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 9)) &&
                         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                        (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                        (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                        lVar8 = *plVar12 + 0x1b8;
                        lVar10 = *(long *)(*plVar12 + 0x1b8);
                      }
                      lVar9 = lVar8;
                      lVar11 = lVar10;
                      if (lVar10 != 0) {
                        do {
                          if (8 < *(int *)(lVar11 + 0x20)) {
                            lVar9 = lVar11;
                          }
                          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 9) * 8);
                        } while (lVar11 != 0);
                        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 10)) &&
                           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                          (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                          (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                          lVar8 = *plVar12 + 0x1b8;
                          lVar10 = *(long *)(*plVar12 + 0x1b8);
                        }
                        lVar9 = lVar8;
                        if (lVar10 != 0) {
                          do {
                            if (9 < *(int *)(lVar10 + 0x20)) {
                              lVar9 = lVar10;
                            }
                            lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 10) * 8);
                          } while (lVar10 != 0);
                          goto LAB_7101cd8c00;
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
    }
    goto LAB_7101cd9bcc;
  case 2:
    lVar10 = *(long *)(param_1 + 0x178);
    pcVar2 = "category_watch";
    break;
  case 3:
    lVar10 = *(long *)(param_1 + 0x178);
    pcVar2 = "category_mii";
    break;
  case 4:
    lVar10 = *(long *)(param_1 + 0x178);
    pcVar2 = "category_stage";
    break;
  case 5:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),0x7104401716);
    lVar10 = *(long *)(*(long *)(param_1 + 0x260) + 0x1b8);
    if (lVar10 != 0) {
      lVar8 = *(long *)(param_1 + 0x260) + 0x1b8;
      lVar9 = lVar8;
      lVar11 = lVar10;
      do {
        bVar1 = *(int *)(lVar11 + 0x20) < 0;
        if (!bVar1) {
          lVar9 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)bVar1 * 8);
      } while (lVar11 != 0);
      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 1)) &&
         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
        (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
        lVar8 = *plVar12 + 0x1b8;
        lVar10 = *(long *)(*plVar12 + 0x1b8);
      }
      lVar9 = lVar8;
      lVar11 = lVar10;
      if (lVar10 != 0) {
        do {
          if (0 < *(int *)(lVar11 + 0x20)) {
            lVar9 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 1) * 8);
        } while (lVar11 != 0);
        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 2)) &&
           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
          (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
          (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
          lVar8 = *plVar12 + 0x1b8;
          lVar10 = *(long *)(*plVar12 + 0x1b8);
        }
        lVar9 = lVar8;
        lVar11 = lVar10;
        if (lVar10 != 0) {
          do {
            if (1 < *(int *)(lVar11 + 0x20)) {
              lVar9 = lVar11;
            }
            lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 2) * 8);
          } while (lVar11 != 0);
          if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 3)) &&
             (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
            (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
            (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
            lVar8 = *plVar12 + 0x1b8;
            lVar10 = *(long *)(*plVar12 + 0x1b8);
          }
          lVar9 = lVar8;
          lVar11 = lVar10;
          if (lVar10 != 0) {
            do {
              if (2 < *(int *)(lVar11 + 0x20)) {
                lVar9 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 3) * 8);
            } while (lVar11 != 0);
            if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 4)) &&
               (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
              (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
              (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
              lVar8 = *plVar12 + 0x1b8;
              lVar10 = *(long *)(*plVar12 + 0x1b8);
            }
            lVar9 = lVar8;
            lVar11 = lVar10;
            if (lVar10 != 0) {
              do {
                if (3 < *(int *)(lVar11 + 0x20)) {
                  lVar9 = lVar11;
                }
                lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 4) * 8);
              } while (lVar11 != 0);
              if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 5)) &&
                 (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                lVar8 = *plVar12 + 0x1b8;
                lVar10 = *(long *)(*plVar12 + 0x1b8);
              }
              lVar9 = lVar8;
              lVar11 = lVar10;
              if (lVar10 != 0) {
                do {
                  if (4 < *(int *)(lVar11 + 0x20)) {
                    lVar9 = lVar11;
                  }
                  lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 5) * 8);
                } while (lVar11 != 0);
                if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 6)) &&
                   (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                  (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                  (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                  lVar8 = *plVar12 + 0x1b8;
                  lVar10 = *(long *)(*plVar12 + 0x1b8);
                }
                lVar9 = lVar8;
                lVar11 = lVar10;
                if (lVar10 != 0) {
                  do {
                    if (5 < *(int *)(lVar11 + 0x20)) {
                      lVar9 = lVar11;
                    }
                    lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 6) * 8);
                  } while (lVar11 != 0);
                  if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 7)) &&
                     (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                    (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                    (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                    lVar8 = *plVar12 + 0x1b8;
                    lVar10 = *(long *)(*plVar12 + 0x1b8);
                  }
                  lVar9 = lVar8;
                  lVar11 = lVar10;
                  if (lVar10 != 0) {
                    do {
                      if (6 < *(int *)(lVar11 + 0x20)) {
                        lVar9 = lVar11;
                      }
                      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 7) * 8);
                    } while (lVar11 != 0);
                    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 8)) &&
                       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                      lVar8 = *plVar12 + 0x1b8;
                      lVar10 = *(long *)(*plVar12 + 0x1b8);
                    }
                    lVar9 = lVar8;
                    lVar11 = lVar10;
                    if (lVar10 != 0) {
                      do {
                        if (7 < *(int *)(lVar11 + 0x20)) {
                          lVar9 = lVar11;
                        }
                        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 8) * 8);
                      } while (lVar11 != 0);
                      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 9)) &&
                         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                        (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
                        (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
                        lVar8 = *plVar12 + 0x1b8;
                        lVar10 = *(long *)(*plVar12 + 0x1b8);
                      }
                      lVar9 = lVar8;
                      lVar11 = lVar10;
                      if (lVar10 != 0) {
                        do {
                          if (8 < *(int *)(lVar11 + 0x20)) {
                            lVar9 = lVar11;
                          }
                          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 9) * 8);
                        } while (lVar11 != 0);
                        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 10)) &&
                           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                          (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
                          (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
                          lVar8 = *plVar12 + 0x1b8;
                          lVar10 = *(long *)(*plVar12 + 0x1b8);
                        }
                        lVar9 = lVar8;
                        if (lVar10 != 0) {
                          do {
                            if (9 < *(int *)(lVar10 + 0x20)) {
                              lVar9 = lVar10;
                            }
                            lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 10) * 8);
                          } while (lVar10 != 0);
                          goto LAB_7101cd8c00;
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
    }
    goto LAB_7101cd9bcc;
  case 6:
    lVar10 = *(long *)(param_1 + 0x178);
    pcVar2 = "category_like";
    break;
  default:
    lVar10 = *(long *)(*plVar12 + 0x1b8);
    if (lVar10 != 0) {
      lVar8 = *plVar12 + 0x1b8;
      lVar9 = lVar8;
      do {
        bVar1 = *(int *)(lVar10 + 0x20) < 0;
        if (!bVar1) {
          lVar9 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + (ulong)bVar1 * 8);
      } while (lVar10 != 0);
      goto LAB_7101cd8c60;
    }
    goto LAB_7101cd8ca8;
  }
  FUN_7103778300(0x3f800000,lVar10,(long)pcVar2);
  lVar10 = *(long *)(*plVar12 + 0x1b8);
  if (lVar10 != 0) {
    lVar8 = *plVar12 + 0x1b8;
    lVar9 = lVar8;
    do {
      bVar1 = *(int *)(lVar10 + 0x20) < 0;
      if (!bVar1) {
        lVar9 = lVar10;
      }
      lVar10 = *(long *)(lVar10 + (ulong)bVar1 * 8);
    } while (lVar10 != 0);
LAB_7101cd8c60:
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 1)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
      (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
    }
  }
LAB_7101cd8ca8:
  lVar10 = *(long *)(*plVar12 + 0x1b8);
  if (lVar10 != 0) {
    lVar8 = *plVar12 + 0x1b8;
    lVar9 = lVar8;
    do {
      if (0 < *(int *)(lVar10 + 0x20)) {
        lVar9 = lVar10;
      }
      lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 1) * 8);
    } while (lVar10 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 2)) &&
       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
    }
  }
  if (param_2 == 2) {
    lVar10 = *(long *)(*plVar12 + 0x1b8);
    if (lVar10 != 0) {
      lVar8 = *plVar12 + 0x1b8;
      lVar9 = lVar8;
      lVar11 = lVar10;
      do {
        if (1 < *(int *)(lVar11 + 0x20)) {
          lVar9 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 2) * 8);
      } while (lVar11 != 0);
      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 3)) &&
         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
        (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
        lVar8 = *plVar12 + 0x1b8;
        lVar10 = *(long *)(*plVar12 + 0x1b8);
      }
      lVar9 = lVar8;
      lVar11 = lVar10;
      if (lVar10 != 0) {
        do {
          if (2 < *(int *)(lVar11 + 0x20)) {
            lVar9 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 3) * 8);
        } while (lVar11 != 0);
        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 4)) &&
           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
          (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
          (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
          lVar8 = *plVar12 + 0x1b8;
          lVar10 = *(long *)(*plVar12 + 0x1b8);
        }
        lVar9 = lVar8;
        lVar11 = lVar10;
        if (lVar10 != 0) {
          do {
            if (3 < *(int *)(lVar11 + 0x20)) {
              lVar9 = lVar11;
            }
            lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 4) * 8);
          } while (lVar11 != 0);
          if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 5)) &&
             (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
            (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
            (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
            lVar8 = *plVar12 + 0x1b8;
            lVar10 = *(long *)(*plVar12 + 0x1b8);
          }
          lVar9 = lVar8;
          lVar11 = lVar10;
          if (lVar10 != 0) {
            do {
              if (4 < *(int *)(lVar11 + 0x20)) {
                lVar9 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 5) * 8);
            } while (lVar11 != 0);
            if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 6)) &&
               (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
              (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
              (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
              lVar8 = *plVar12 + 0x1b8;
              lVar10 = *(long *)(*plVar12 + 0x1b8);
            }
            lVar9 = lVar8;
            lVar11 = lVar10;
            if (lVar10 != 0) {
              do {
                if (5 < *(int *)(lVar11 + 0x20)) {
                  lVar9 = lVar11;
                }
                lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 6) * 8);
              } while (lVar11 != 0);
              if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 7)) &&
                 (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                lVar8 = *plVar12 + 0x1b8;
                lVar10 = *(long *)(*plVar12 + 0x1b8);
              }
              lVar9 = lVar8;
              lVar11 = lVar10;
              if (lVar10 != 0) {
                do {
                  if (6 < *(int *)(lVar11 + 0x20)) {
                    lVar9 = lVar11;
                  }
                  lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 7) * 8);
                } while (lVar11 != 0);
                if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 8)) &&
                   (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                  (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                  (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                  lVar8 = *plVar12 + 0x1b8;
                  lVar10 = *(long *)(*plVar12 + 0x1b8);
                }
                lVar9 = lVar8;
                lVar11 = lVar10;
                if (lVar10 != 0) {
                  do {
                    if (7 < *(int *)(lVar11 + 0x20)) {
                      lVar9 = lVar11;
                    }
                    lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 8) * 8);
                  } while (lVar11 != 0);
                  if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 9)) &&
                     (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                    (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                    (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                    lVar8 = *plVar12 + 0x1b8;
                    lVar10 = *(long *)(*plVar12 + 0x1b8);
                  }
                  lVar9 = lVar8;
                  if (lVar10 != 0) {
                    do {
                      if (8 < *(int *)(lVar10 + 0x20)) {
                        lVar9 = lVar10;
                      }
                      lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 9) * 8);
                    } while (lVar10 != 0);
                    goto LAB_7101cd9b10;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_2 == 3) {
    lVar10 = *(long *)(*plVar12 + 0x1b8);
    if (lVar10 != 0) {
      lVar8 = *plVar12 + 0x1b8;
      lVar9 = lVar8;
      lVar11 = lVar10;
      do {
        if (1 < *(int *)(lVar11 + 0x20)) {
          lVar9 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 2) * 8);
      } while (lVar11 != 0);
      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 3)) &&
         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
        (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
        lVar8 = *plVar12 + 0x1b8;
        lVar10 = *(long *)(*plVar12 + 0x1b8);
      }
      lVar9 = lVar8;
      lVar11 = lVar10;
      if (lVar10 != 0) {
        do {
          if (2 < *(int *)(lVar11 + 0x20)) {
            lVar9 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 3) * 8);
        } while (lVar11 != 0);
        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 4)) &&
           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
          (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
          (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
          lVar8 = *plVar12 + 0x1b8;
          lVar10 = *(long *)(*plVar12 + 0x1b8);
        }
        lVar9 = lVar8;
        lVar11 = lVar10;
        if (lVar10 != 0) {
          do {
            if (3 < *(int *)(lVar11 + 0x20)) {
              lVar9 = lVar11;
            }
            lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 4) * 8);
          } while (lVar11 != 0);
          if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 5)) &&
             (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
            (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
            (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
            lVar8 = *plVar12 + 0x1b8;
            lVar10 = *(long *)(*plVar12 + 0x1b8);
          }
          lVar9 = lVar8;
          lVar11 = lVar10;
          if (lVar10 != 0) {
            do {
              if (4 < *(int *)(lVar11 + 0x20)) {
                lVar9 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 5) * 8);
            } while (lVar11 != 0);
            if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 6)) &&
               (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
              (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
              (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
              lVar8 = *plVar12 + 0x1b8;
              lVar10 = *(long *)(*plVar12 + 0x1b8);
            }
            lVar9 = lVar8;
            lVar11 = lVar10;
            if (lVar10 != 0) {
              do {
                if (5 < *(int *)(lVar11 + 0x20)) {
                  lVar9 = lVar11;
                }
                lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 6) * 8);
              } while (lVar11 != 0);
              if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 7)) &&
                 (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                lVar8 = *plVar12 + 0x1b8;
                lVar10 = *(long *)(*plVar12 + 0x1b8);
              }
              lVar9 = lVar8;
              lVar11 = lVar10;
              if (lVar10 != 0) {
                do {
                  if (6 < *(int *)(lVar11 + 0x20)) {
                    lVar9 = lVar11;
                  }
                  lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 7) * 8);
                } while (lVar11 != 0);
                if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 8)) &&
                   (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                  (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                  (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                  lVar8 = *plVar12 + 0x1b8;
                  lVar10 = *(long *)(*plVar12 + 0x1b8);
                }
                lVar9 = lVar8;
                lVar11 = lVar10;
                if (lVar10 != 0) {
                  do {
                    if (7 < *(int *)(lVar11 + 0x20)) {
                      lVar9 = lVar11;
                    }
                    lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 8) * 8);
                  } while (lVar11 != 0);
                  if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 9)) &&
                     (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                    (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                    (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                    lVar8 = *plVar12 + 0x1b8;
                    lVar10 = *(long *)(*plVar12 + 0x1b8);
                  }
                  lVar9 = lVar8;
                  if (lVar10 != 0) {
                    do {
                      if (8 < *(int *)(lVar10 + 0x20)) {
                        lVar9 = lVar10;
                      }
                      lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 9) * 8);
                    } while (lVar10 != 0);
                    goto LAB_7101cd9b10;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_2 == 4) {
    lVar10 = *(long *)(*plVar12 + 0x1b8);
    if (lVar10 != 0) {
      lVar8 = *plVar12 + 0x1b8;
      lVar9 = lVar8;
      lVar11 = lVar10;
      do {
        if (1 < *(int *)(lVar11 + 0x20)) {
          lVar9 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 2) * 8);
      } while (lVar11 != 0);
      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 3)) &&
         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
        (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
        lVar8 = *plVar12 + 0x1b8;
        lVar10 = *(long *)(*plVar12 + 0x1b8);
      }
      lVar9 = lVar8;
      lVar11 = lVar10;
      if (lVar10 != 0) {
        do {
          if (2 < *(int *)(lVar11 + 0x20)) {
            lVar9 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 3) * 8);
        } while (lVar11 != 0);
        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 4)) &&
           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
          (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
          (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
          lVar8 = *plVar12 + 0x1b8;
          lVar10 = *(long *)(*plVar12 + 0x1b8);
        }
        lVar9 = lVar8;
        lVar11 = lVar10;
        if (lVar10 != 0) {
          do {
            if (3 < *(int *)(lVar11 + 0x20)) {
              lVar9 = lVar11;
            }
            lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 4) * 8);
          } while (lVar11 != 0);
          if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 5)) &&
             (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
            (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
            (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
            lVar8 = *plVar12 + 0x1b8;
            lVar10 = *(long *)(*plVar12 + 0x1b8);
          }
          lVar9 = lVar8;
          lVar11 = lVar10;
          if (lVar10 != 0) {
            do {
              if (4 < *(int *)(lVar11 + 0x20)) {
                lVar9 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 5) * 8);
            } while (lVar11 != 0);
            if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 6)) &&
               (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
              (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
              (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
              lVar8 = *plVar12 + 0x1b8;
              lVar10 = *(long *)(*plVar12 + 0x1b8);
            }
            lVar9 = lVar8;
            lVar11 = lVar10;
            if (lVar10 != 0) {
              do {
                if (5 < *(int *)(lVar11 + 0x20)) {
                  lVar9 = lVar11;
                }
                lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 6) * 8);
              } while (lVar11 != 0);
              if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 7)) &&
                 (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
                (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
                lVar8 = *plVar12 + 0x1b8;
                lVar10 = *(long *)(*plVar12 + 0x1b8);
              }
              lVar9 = lVar8;
              lVar11 = lVar10;
              if (lVar10 != 0) {
                do {
                  if (6 < *(int *)(lVar11 + 0x20)) {
                    lVar9 = lVar11;
                  }
                  lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 7) * 8);
                } while (lVar11 != 0);
                if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 8)) &&
                   (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                  (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
                  (**(code **)(*plVar13 + 0x388))(plVar13,0,0);
                  lVar8 = *plVar12 + 0x1b8;
                  lVar10 = *(long *)(*plVar12 + 0x1b8);
                }
                lVar9 = lVar8;
                lVar11 = lVar10;
                if (lVar10 != 0) {
                  do {
                    if (7 < *(int *)(lVar11 + 0x20)) {
                      lVar9 = lVar11;
                    }
                    lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 8) * 8);
                  } while (lVar11 != 0);
                  if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 9)) &&
                     (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                    (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                    (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                    lVar8 = *plVar12 + 0x1b8;
                    lVar10 = *(long *)(*plVar12 + 0x1b8);
                  }
                  lVar9 = lVar8;
                  if (lVar10 != 0) {
                    do {
                      if (8 < *(int *)(lVar10 + 0x20)) {
                        lVar9 = lVar10;
                      }
                      lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 9) * 8);
                    } while (lVar10 != 0);
LAB_7101cd9b10:
                    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 10)) &&
                       (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                      (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                      (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
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
    lVar10 = *(long *)(*plVar12 + 0x1b8);
    if (lVar10 != 0) {
      lVar8 = *plVar12 + 0x1b8;
      lVar9 = lVar8;
      lVar11 = lVar10;
      do {
        if (1 < *(int *)(lVar11 + 0x20)) {
          lVar9 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 2) * 8);
      } while (lVar11 != 0);
      if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 3)) &&
         (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
        (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
        lVar8 = *plVar12 + 0x1b8;
        lVar10 = *(long *)(*plVar12 + 0x1b8);
      }
      lVar9 = lVar8;
      lVar11 = lVar10;
      if (lVar10 != 0) {
        do {
          if (2 < *(int *)(lVar11 + 0x20)) {
            lVar9 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 3) * 8);
        } while (lVar11 != 0);
        if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 4)) &&
           (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
          (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
          (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
          lVar8 = *plVar12 + 0x1b8;
          lVar10 = *(long *)(*plVar12 + 0x1b8);
        }
        lVar9 = lVar8;
        lVar11 = lVar10;
        if (lVar10 != 0) {
          do {
            if (3 < *(int *)(lVar11 + 0x20)) {
              lVar9 = lVar11;
            }
            lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 4) * 8);
          } while (lVar11 != 0);
          if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 5)) &&
             (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
            (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
            (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
            lVar8 = *plVar12 + 0x1b8;
            lVar10 = *(long *)(*plVar12 + 0x1b8);
          }
          lVar9 = lVar8;
          lVar11 = lVar10;
          if (lVar10 != 0) {
            do {
              if (4 < *(int *)(lVar11 + 0x20)) {
                lVar9 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 5) * 8);
            } while (lVar11 != 0);
            if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 6)) &&
               (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
              (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
              (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
              lVar8 = *plVar12 + 0x1b8;
              lVar10 = *(long *)(*plVar12 + 0x1b8);
            }
            lVar9 = lVar8;
            lVar11 = lVar10;
            if (lVar10 != 0) {
              do {
                if (5 < *(int *)(lVar11 + 0x20)) {
                  lVar9 = lVar11;
                }
                lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 6) * 8);
              } while (lVar11 != 0);
              if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 7)) &&
                 (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                lVar8 = *plVar12 + 0x1b8;
                lVar10 = *(long *)(*plVar12 + 0x1b8);
              }
              lVar9 = lVar8;
              lVar11 = lVar10;
              if (lVar10 != 0) {
                do {
                  if (6 < *(int *)(lVar11 + 0x20)) {
                    lVar9 = lVar11;
                  }
                  lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 7) * 8);
                } while (lVar11 != 0);
                if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 8)) &&
                   (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                  (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                  (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                  lVar8 = *plVar12 + 0x1b8;
                  lVar10 = *(long *)(*plVar12 + 0x1b8);
                }
                lVar9 = lVar8;
                lVar11 = lVar10;
                if (lVar10 != 0) {
                  do {
                    if (7 < *(int *)(lVar11 + 0x20)) {
                      lVar9 = lVar11;
                    }
                    lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 8) * 8);
                  } while (lVar11 != 0);
                  if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 9)) &&
                     (plVar13 = *(long **)(lVar9 + 0x28), plVar13 != (long *)0x0)) {
                    (**(code **)(*plVar13 + 0x1f8))(plVar13,0);
                    (**(code **)(*plVar13 + 0x388))(plVar13,1,0);
                    lVar8 = *plVar12 + 0x1b8;
                    lVar10 = *(long *)(*plVar12 + 0x1b8);
                  }
                  lVar9 = lVar8;
                  if (lVar10 != 0) {
                    do {
                      if (8 < *(int *)(lVar10 + 0x20)) {
                        lVar9 = lVar10;
                      }
                      lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 9) * 8);
                    } while (lVar10 != 0);
                    goto LAB_7101cd9b10;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar10 = *(long *)(*plVar12 + 0x1b8);
  if (lVar10 != 0) {
    lVar8 = *plVar12 + 0x1b8;
    lVar9 = lVar8;
    do {
      if (9 < *(int *)(lVar10 + 0x20)) {
        lVar9 = lVar10;
      }
      lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 10) * 8);
    } while (lVar10 != 0);
    if (((lVar9 != lVar8) && (*(int *)(lVar9 + 0x20) < 0xb)) &&
       (plVar12 = *(long **)(lVar9 + 0x28), plVar12 != (long *)0x0)) {
LAB_7101cd9ba0:
      (**(code **)(*plVar12 + 0x1f8))(plVar12,1);
      (**(code **)(*plVar12 + 0x388))(plVar12,0,0);
    }
  }
LAB_7101cd9bcc:
  if (*(long *)(param_1 + 0x268) == 0) {
    plVar12 = (long *)(param_1 + 0x268);
    local_198 = 0x101;
    local_1a0 = (byte ***)0x0;
    local_192 = 0;
    local_190 = 1;
    local_18c = 1;
    local_18a = 1;
    local_188 = &DAT_41f0000000000000;
    local_180 = 0;
    local_150 = (long *)0x0;
    local_120 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_90 = (long *)0x0;
    local_80 = 0;
    local_196 = 1;
    FUN_7103770b30(plVar12,(undefined8 *)(param_1 + 0x170),(long ****)"selector_03",&local_1a0,
                   param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,0,"set_parts_csr_l",ppppbVar3,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,1,"set_parts_csr_r",ppppbVar3,param_5,param_6,param_7,param_8);
    FUN_7103771930(*(long *)(param_1 + 0x268),0,(long ****)0x6,(byte ****)0x1,param_5,param_6,
                   param_7,param_8);
    ppppbVar4 = (byte ****)0x1;
    FUN_7103771930(*(long *)(param_1 + 0x268),1,(long ****)&DAT_00000007,(byte ****)0x1,param_5,
                   param_6,param_7,param_8);
    FUN_7103771d60(&local_70,*(long *)(param_1 + 0x268),(long ****)0x0,ppppbVar4,param_5,param_6,
                   param_7,param_8);
    plVar13 = local_68;
    local_68 = (long *)*local_68;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x268))(local_68,1,1);
    }
    local_70 = &PTR_FUN_710523d9c8;
    local_68 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar13);
    }
    FUN_7103771d60(&local_70,*plVar12,(long ****)0x1,ppppbVar4,param_5,param_6,param_7,param_8);
    plVar12 = local_68;
    plVar13 = (long *)*local_68;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x268))(plVar13,1,1);
    }
    local_70 = &PTR_FUN_710523d9c8;
    local_68 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
    if (alStack_b0 == local_90) {
      pcVar7 = *(code **)(*local_90 + 0x20);
LAB_7101cd9d40:
      (*pcVar7)();
    }
    else if (local_90 != (long *)0x0) {
      pcVar7 = *(code **)(*local_90 + 0x28);
      goto LAB_7101cd9d40;
    }
    if (alStack_e0 == local_c0) {
      pcVar7 = *(code **)(*local_c0 + 0x20);
LAB_7101cd9d70:
      (*pcVar7)();
    }
    else if (local_c0 != (long *)0x0) {
      pcVar7 = *(code **)(*local_c0 + 0x28);
      goto LAB_7101cd9d70;
    }
    if (alStack_110 == local_f0) {
      pcVar7 = *(code **)(*local_f0 + 0x20);
LAB_7101cd9da0:
      (*pcVar7)();
    }
    else if (local_f0 != (long *)0x0) {
      pcVar7 = *(code **)(*local_f0 + 0x28);
      goto LAB_7101cd9da0;
    }
    if (alStack_140 == local_120) {
      pcVar7 = *(code **)(*local_120 + 0x20);
LAB_7101cd9dd0:
      (*pcVar7)();
    }
    else if (local_120 != (long *)0x0) {
      pcVar7 = *(code **)(*local_120 + 0x28);
      goto LAB_7101cd9dd0;
    }
    if (alStack_170 == local_150) {
      pcVar7 = *(code **)(*local_150 + 0x20);
    }
    else {
      if (local_150 == (long *)0x0) goto LAB_7101cd9e04;
      pcVar7 = *(code **)(*local_150 + 0x28);
    }
    (*pcVar7)();
  }
LAB_7101cd9e04:
  if (*(long *)(param_1 + 0x270) == 0) {
    local_198 = 0x101;
    plVar12 = (long *)(param_1 + 0x270);
    local_18c = 1;
    local_190 = 1;
    local_18a = 1;
    local_188 = &DAT_41f0000000000000;
    local_1a0 = (byte ***)0x0;
    local_192 = 0;
    local_196 = 0;
    local_180 = 0;
    local_150 = (long *)0x0;
    local_120 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_90 = (long *)0x0;
    local_80 = 0;
    FUN_7103770b30(plVar12,(undefined8 *)(param_1 + 0x170),(long ****)"selector_02",&local_1a0,
                   param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar12,10,"set_parts_btn_decide",ppppbVar5,param_5,param_6,param_7,param_8);
    FUN_7103771930(*(long *)(param_1 + 0x270),10,(long ****)&DAT_00000008,(byte ****)0x0,param_5,
                   param_6,param_7,param_8);
    FUN_7103771a80(plVar12,10,0);
    if (alStack_b0 == local_90) {
      pcVar7 = *(code **)(*local_90 + 0x20);
LAB_7101cd9ed8:
      (*pcVar7)();
    }
    else if (local_90 != (long *)0x0) {
      pcVar7 = *(code **)(*local_90 + 0x28);
      goto LAB_7101cd9ed8;
    }
    if (alStack_e0 == local_c0) {
      pcVar7 = *(code **)(*local_c0 + 0x20);
LAB_7101cd9f08:
      (*pcVar7)();
    }
    else if (local_c0 != (long *)0x0) {
      pcVar7 = *(code **)(*local_c0 + 0x28);
      goto LAB_7101cd9f08;
    }
    if (alStack_110 == local_f0) {
      pcVar7 = *(code **)(*local_f0 + 0x20);
LAB_7101cd9f38:
      (*pcVar7)();
    }
    else if (local_f0 != (long *)0x0) {
      pcVar7 = *(code **)(*local_f0 + 0x28);
      goto LAB_7101cd9f38;
    }
    if (alStack_140 == local_120) {
      pcVar7 = *(code **)(*local_120 + 0x20);
LAB_7101cd9f68:
      (*pcVar7)();
    }
    else if (local_120 != (long *)0x0) {
      pcVar7 = *(code **)(*local_120 + 0x28);
      goto LAB_7101cd9f68;
    }
    if (alStack_170 == local_150) {
      pcVar7 = *(code **)(*local_150 + 0x20);
    }
    else {
      if (local_150 == (long *)0x0) goto LAB_7101cd9f9c;
      pcVar7 = *(code **)(*local_150 + 0x28);
    }
    (*pcVar7)();
  }
LAB_7101cd9f9c:
  if (*(long *)(param_1 + 0x278) != 0) {
    return;
  }
  plVar12 = (long *)(param_1 + 0x278);
  local_198 = 0x101;
  local_188 = &DAT_41f0000000000000;
  local_1a0 = (byte ***)0x0;
  local_192 = 0;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  local_196 = 1;
  FUN_7103770b30(plVar12,(undefined8 *)(param_1 + 0x170),(long ****)"selector_04",&local_1a0,param_5
                 ,param_6,param_7,param_8);
  FUN_71037717d0(plVar12,0,"set_parts_reset",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_7103771930(*(long *)(param_1 + 0x278),0,(long ****)&DAT_00000009,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  FUN_7103771a80(plVar12,0,0);
  if (alStack_b0 == local_90) {
    pcVar7 = *(code **)(*local_90 + 0x20);
LAB_7101cda070:
    (*pcVar7)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar7 = *(code **)(*local_90 + 0x28);
    goto LAB_7101cda070;
  }
  if (alStack_e0 == local_c0) {
    pcVar7 = *(code **)(*local_c0 + 0x20);
LAB_7101cda0a0:
    (*pcVar7)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar7 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101cda0a0;
  }
  if (alStack_110 == local_f0) {
    pcVar7 = *(code **)(*local_f0 + 0x20);
LAB_7101cda0d0:
    (*pcVar7)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar7 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101cda0d0;
  }
  if (alStack_140 == local_120) {
    pcVar7 = *(code **)(*local_120 + 0x20);
  }
  else {
    if (local_120 == (long *)0x0) goto LAB_7101cda104;
    pcVar7 = *(code **)(*local_120 + 0x28);
  }
  (*pcVar7)();
LAB_7101cda104:
  if (alStack_170 == local_150) {
    pcVar7 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) {
      return;
    }
    pcVar7 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar7)();
  return;
}

