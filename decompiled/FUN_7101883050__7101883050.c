// addr:      7101883050
// offset:    0x1883050
// name:      FUN_7101883050
// mangled:   
// signature: undefined __cdecl FUN_7101883050(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101883050(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 extraout_x1;
  long ****pppplVar5;
  undefined8 uVar6;
  byte ****ppppbVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 local_21e0;
  undefined8 local_21d8;
  undefined8 local_21d0;
  undefined2 local_21c8;
  undefined8 local_21c6;
  undefined2 local_21be;
  undefined1 local_21bc;
  
  if (*(int *)(param_1 + 0xac) == 0) {
    FUN_71032eb270(*(long *)(DAT_710532f7f0 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x80);
    if (*(char *)(lVar13 + 200) == '\x01') {
      if (*(char *)(lVar13 + 0x2253) != '\x01') goto LAB_71018830c0;
    }
    else {
      *(undefined1 *)(lVar13 + 200) = 1;
LAB_71018830c0:
      if (*(char *)(lVar13 + 0x2250) != '\0') {
        param_3 = (long ****)(ulong)*(byte *)(lVar13 + 0x227c);
        FUN_7101af4c80(lVar13,1,(ulong)param_3,param_4,param_5,param_6,param_7,param_8);
        if (*(char *)(lVar13 + 200) == '\0') {
          bVar4 = false;
        }
        else {
          bVar4 = *(char *)(lVar13 + 0xc9) != '\0';
        }
        lVar16 = *(long *)(*(long *)(lVar13 + 0x2260) + 0x1b8);
        if (lVar16 != 0) {
          lVar13 = *(long *)(lVar13 + 0x2260) + 0x1b8;
          lVar14 = lVar13;
          do {
            bVar3 = *(int *)(lVar16 + 0x20) < 0;
            if (!bVar3) {
              lVar14 = lVar16;
            }
            lVar16 = *(long *)(lVar16 + (ulong)bVar3 * 8);
          } while (lVar16 != 0);
          if (((lVar14 != lVar13) && (*(int *)(lVar14 + 0x20) < 1)) &&
             (plVar15 = *(long **)(lVar14 + 0x28), plVar15 != (long *)0x0)) {
            (**(code **)(*plVar15 + 0x1f8))(plVar15,bVar4);
            param_3 = (long ****)0x0;
            (**(code **)(*plVar15 + 0x388))(plVar15,bVar4 ^ 1);
          }
        }
      }
    }
    uVar12 = 0x811c9dc5;
    FUN_7101af8900(*(long *)(param_1 + 0xb8),0x7010800,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    local_21d8 = 0x646165685f756e6d;
    uVar10 = 0x6d;
    local_21c8 = 0x65;
    lVar13 = 9;
    local_21d0 = 0x6e696c6e6f5f7265;
    uVar11 = uVar12;
    do {
      uVar11 = uVar11 * 0x89 ^ uVar10;
      uVar10 = (uint)*(byte *)((long)&local_21e0 + lVar13);
      lVar13 = lVar13 + 1;
    } while (uVar10 != 0);
    local_21e0 = (undefined **)CONCAT44(0x11,uVar11);
    FUN_7101af8c80(*(long *)(*(long *)(param_1 + 0xb8) + 0x80),(uint *)&local_21e0,param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar11 = 0x6d;
    local_21d8 = 0x646165685f756e6d;
    local_21c8 = 0x5f65;
    local_21c6 = 0x69746e65766e6f63;
    local_21be = 0x6e6f;
    lVar13 = 9;
    local_21d0 = 0x6e696c6e6f5f7265;
    local_21bc = 0;
    do {
      uVar12 = uVar12 * 0x89 ^ uVar11;
      uVar11 = (uint)*(byte *)((long)&local_21e0 + lVar13);
      lVar13 = lVar13 + 1;
    } while (uVar11 != 0);
    local_21e0 = (undefined **)CONCAT44(0x1c,uVar12);
    FUN_7101af8e90(*(long *)(*(long *)(param_1 + 0xb8) + 0x80),(uint *)&local_21e0,param_3,param_4,
                   param_5,param_6,param_7,param_8);
    local_21d8 = local_21d8 & 0xffffffffffffff00;
    local_21e0 = (undefined **)0x811c9dc5;
    FUN_7101af90b0(*(long *)(*(long *)(param_1 + 0xb8) + 0x80),(uint *)&local_21e0,param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7101af60a0(*(long *)(*(long *)(param_1 + 0xb8) + 0x80),0,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x80);
    if (*(int *)(lVar13 + 0x1204) == 0) {
      if (*(char *)(lVar13 + 0x2259) != '\0') goto LAB_71018832b8;
    }
    else {
      *(undefined4 *)(lVar13 + 0x1204) = 0;
LAB_71018832b8:
      if ((*(char *)(lVar13 + 0x2257) != '\0') && (*(char *)(lVar13 + 0x2259) != '\0')) {
        *(char *)(lVar13 + 0x2259) = '\0';
        FUN_71037780e0(&local_21e0,**(long **)(lVar13 + 0xb8) + 8,(long ****)"footer_help_out",
                       param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_710377b140((long)&local_21e0);
        uVar2 = local_21d8;
        local_21e0 = &PTR_FUN_710523d9e8;
        local_21d8 = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
      }
    }
    lVar13 = *(long *)(param_1 + 0xb8);
    FUN_7101af5880(&local_21e0,(undefined8 *)(*(long *)(lVar13 + 0x80) + 0xc0));
    pppplVar5 = (long ****)0x1;
    ppppbVar7 = (byte ****)0x1;
    FUN_7101af8570(lVar13,(int *)&local_21e0,1,1,param_5,param_6,param_7,param_8);
    FUN_7101af2070(*(long **)(*(long *)(param_1 + 0xc0) + 0x80),4,pppplVar5,ppppbVar7,param_5,
                   param_6,param_7,param_8);
    FUN_71033145d0(DAT_710532f8d0,0xd9ffff17d8a015fc,1,ppppbVar7,param_5,param_6,param_7,param_8);
    lVar16 = *(long *)(param_1 + 0xd0);
    lVar13 = *(long *)(lVar16 + 0x80);
    cVar1 = *(char *)(param_1 + 0xdc);
    uVar11 = (uint)(cVar1 == '\0');
    FUN_7103775dc0((long *)**(undefined8 **)(lVar13 + 0x528),0,(long ****)&DAT_00001000,ppppbVar7,
                   param_5,param_6,param_7,param_8);
    *(uint *)(lVar13 + 0x538) = (uint)(cVar1 == '\0');
    if (((*(uint *)(lVar13 + 0x520) & 0xfffffffe) == 2) &&
       ((cVar1 != '\0' || (*(char *)(lVar13 + 0x651) == '\0')))) {
      uVar11 = 2;
      *(undefined4 *)(lVar13 + 0x538) = 2;
    }
    FUN_7103771a80((long *)(lVar13 + 0x530),uVar11,1);
    uVar6 = 0;
    FUN_7101c456b0(lVar13,*(int *)(lVar13 + 0x538),0,ppppbVar7,param_5,param_6,param_7,param_8);
    FUN_7101c45de0(lVar13,extraout_x1,uVar6,ppppbVar7,param_5,param_6,param_7,param_8);
    if (0x12 < *(uint *)(lVar13 + 0x134)) goto LAB_7101883680;
    *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0x134) * 4 + 0xe8) = 3;
    if (((*(uint *)(lVar13 + 0x520) & 0xfffffffe) == 2) && (*(char *)(lVar13 + 0x650) != '\0')) {
      lVar14 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80);
      if (*(char *)(lVar14 + 200) == '\0') {
        if (*(char *)(lVar14 + 0x2253) != '\0') goto LAB_7101883448;
      }
      else {
        *(undefined1 *)(lVar14 + 200) = 0;
LAB_7101883448:
        if (*(char *)(lVar14 + 0x2250) != '\0') {
          FUN_7101af4c80(lVar14,0,0,ppppbVar7,param_5,param_6,param_7,param_8);
          if (*(char *)(lVar14 + 200) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(char *)(lVar14 + 0xc9) != '\0';
          }
          lVar9 = *(long *)(*(long *)(lVar14 + 0x2260) + 0x1b8);
          if (lVar9 != 0) {
            lVar14 = *(long *)(lVar14 + 0x2260) + 0x1b8;
            lVar8 = lVar14;
            do {
              bVar3 = *(int *)(lVar9 + 0x20) < 0;
              if (!bVar3) {
                lVar8 = lVar9;
              }
              lVar9 = *(long *)(lVar9 + (ulong)bVar3 * 8);
            } while (lVar9 != 0);
            if (((lVar8 != lVar14) && (*(int *)(lVar8 + 0x20) < 1)) &&
               (plVar15 = *(long **)(lVar8 + 0x28), plVar15 != (long *)0x0)) {
              (**(code **)(*plVar15 + 0x1f8))(plVar15,bVar4);
              (**(code **)(*plVar15 + 0x388))(plVar15,bVar4 ^ 1,0);
            }
          }
        }
      }
      FUN_7103778630(0,*(long *)(**(long **)(lVar13 + 0x528) + 0x10),0x710434a2f6);
      FUN_7101c456b0(lVar13,-1,0,ppppbVar7,param_5,param_6,param_7,param_8);
      (**(code **)(**(long **)(lVar13 + 0x530) + 0x70))(*(long **)(lVar13 + 0x530),0);
      if (*(int *)(lVar13 + 0x134) < 0x12) {
        uVar11 = *(int *)(lVar13 + 0x134) + 1;
        *(uint *)(lVar13 + 0x134) = uVar11;
        if (0x12 < uVar11) goto LAB_7101883680;
        *(undefined4 *)(lVar13 + (long)(int)uVar11 * 4 + 0xe8) = 8;
      }
    }
    FUN_7103778630(0,*(long *)(**(long **)(lVar13 + 0x528) + 0x10),0x7104421055);
    if (*(int *)(lVar13 + 0x134) < 0x12) {
      uVar11 = *(int *)(lVar13 + 0x134) + 1;
      *(uint *)(lVar13 + 0x134) = uVar11;
      if (0x12 < uVar11) goto LAB_7101883680;
      *(undefined4 *)(lVar13 + (long)(int)uVar11 * 4 + 0xe8) = 2;
      *(undefined4 *)(lVar13 + 0x64c) = 0;
      if (*(int *)(lVar13 + 0x134) < 0x12) {
        uVar11 = *(int *)(lVar13 + 0x134) + 1;
        *(uint *)(lVar13 + 0x134) = uVar11;
        if (0x12 < uVar11) goto LAB_7101883680;
        *(undefined4 *)(lVar13 + (long)(int)uVar11 * 4 + 0xe8) = 1;
      }
    }
    else {
      *(undefined4 *)(lVar13 + 0x64c) = 0;
    }
    if (*(int *)(lVar13 + 0x520) == 4) {
      *(undefined4 *)(lVar13 + 0x53c) = 1;
      *(undefined8 *)(lVar13 + 8) = 0;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 300) = 0;
      *(undefined8 *)(lVar13 + 0x124) = 0;
      *(undefined8 *)(lVar13 + 0x11c) = 0;
      *(undefined8 *)(lVar13 + 0x114) = 0;
      *(undefined8 *)(lVar13 + 0x10c) = 0;
      *(undefined8 *)(lVar13 + 0x104) = 0;
      *(undefined8 *)(lVar13 + 0x138) = 0xffffffff;
      *(undefined4 *)(lVar13 + 0x140) = 0xffffffff;
      *(undefined4 *)(lVar13 + 0x134) = 0;
      *(undefined8 *)(lVar13 + 0xfc) = 0;
      *(undefined8 *)(lVar13 + 0xf4) = 0;
      *(undefined8 *)(lVar13 + 0xec) = 0;
      *(undefined1 *)(lVar13 + 0x144) = 0;
      *(undefined4 *)(lVar13 + 0xe8) = 0xb;
    }
    *(undefined1 *)(lVar16 + 0x70) = 0;
  }
  if (*(uint *)(param_1 + 0xa4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xa4) * 4 + 0x58) = 2;
    return;
  }
LAB_7101883680:
                    /* WARNING: Subroutine does not return */
  abort();
}

