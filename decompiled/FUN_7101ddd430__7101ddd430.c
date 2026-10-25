// addr:      7101ddd430
// offset:    0x1ddd430
// name:      FUN_7101ddd430
// mangled:   
// signature: undefined __cdecl FUN_7101ddd430(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101ddd430(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long ****pppplVar6;
  long lVar7;
  undefined1 *puVar8;
  long ***ppplVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int *piVar13;
  uint uVar14;
  void *__src;
  long lVar15;
  size_t __n;
  undefined1 unaff_w25;
  undefined4 unaff_w26;
  undefined1 uVar16;
  byte ***pppbVar17;
  undefined8 local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  long *local_b8;
  uint local_b0 [2];
  byte ***local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0xf0) == 0) {
    lVar15 = 0;
  }
  else if (*(int *)(param_1 + 0x150) == 0) {
    lVar15 = 1;
  }
  else if (*(int *)(param_1 + 0x1b0) == 0) {
    lVar15 = 2;
  }
  else if (*(int *)(param_1 + 0x210) == 0) {
    lVar15 = 3;
  }
  else if (*(int *)(param_1 + 0x270) == 0) {
    lVar15 = 4;
  }
  else if (*(int *)(param_1 + 0x2d0) == 0) {
    lVar15 = 5;
  }
  else if (*(int *)(param_1 + 0x330) == 0) {
    lVar15 = 6;
  }
  else if (*(int *)(param_1 + 0x390) == 0) {
    lVar15 = 7;
  }
  else if (*(int *)(param_1 + 0x3f0) == 0) {
    lVar15 = 8;
  }
  else if (*(int *)(param_1 + 0x450) == 0) {
    lVar15 = 9;
  }
  else if (*(int *)(param_1 + 0x4b0) == 0) {
    lVar15 = 10;
  }
  else if (*(int *)(param_1 + 0x510) == 0) {
    lVar15 = 0xb;
  }
  else if (*(int *)(param_1 + 0x570) == 0) {
    lVar15 = 0xc;
  }
  else if (*(int *)(param_1 + 0x5d0) == 0) {
    lVar15 = 0xd;
  }
  else if (*(int *)(param_1 + 0x630) == 0) {
    lVar15 = 0xe;
  }
  else if (*(int *)(param_1 + 0x690) == 0) {
    lVar15 = 0xf;
  }
  else if (*(int *)(param_1 + 0x6f0) == 0) {
    lVar15 = 0x10;
  }
  else if (*(int *)(param_1 + 0x750) == 0) {
    lVar15 = 0x11;
  }
  else if (*(int *)(param_1 + 0x7b0) == 0) {
    lVar15 = 0x12;
  }
  else if (*(int *)(param_1 + 0x810) == 0) {
    lVar15 = 0x13;
  }
  else if (*(int *)(param_1 + 0x870) == 0) {
    lVar15 = 0x14;
  }
  else if (*(int *)(param_1 + 0x8d0) == 0) {
    lVar15 = 0x15;
  }
  else if (*(int *)(param_1 + 0x930) == 0) {
    lVar15 = 0x16;
  }
  else if (*(int *)(param_1 + 0x990) == 0) {
    lVar15 = 0x17;
  }
  else if (*(int *)(param_1 + 0x9f0) == 0) {
    lVar15 = 0x18;
  }
  else if (*(int *)(param_1 + 0xa50) == 0) {
    lVar15 = 0x19;
  }
  else if (*(int *)(param_1 + 0xab0) == 0) {
    lVar15 = 0x1a;
  }
  else if (*(int *)(param_1 + 0xb10) == 0) {
    lVar15 = 0x1b;
  }
  else if (*(int *)(param_1 + 0xb70) == 0) {
    lVar15 = 0x1c;
  }
  else if (*(int *)(param_1 + 0xbd0) == 0) {
    lVar15 = 0x1d;
  }
  else if (*(int *)(param_1 + 0xc30) == 0) {
    lVar15 = 0x1e;
  }
  else if (*(int *)(param_1 + 0xc90) == 0) {
    lVar15 = 0x1f;
  }
  else if (*(int *)(param_1 + 0xcf0) == 0) {
    lVar15 = 0x20;
  }
  else if (*(int *)(param_1 + 0xd50) == 0) {
    lVar15 = 0x21;
  }
  else if (*(int *)(param_1 + 0xdb0) == 0) {
    lVar15 = 0x22;
  }
  else if (*(int *)(param_1 + 0xe10) == 0) {
    lVar15 = 0x23;
  }
  else if (*(int *)(param_1 + 0xe70) == 0) {
    lVar15 = 0x24;
  }
  else if (*(int *)(param_1 + 0xed0) == 0) {
    lVar15 = 0x25;
  }
  else if (*(int *)(param_1 + 0xf30) == 0) {
    lVar15 = 0x26;
  }
  else {
    if (*(int *)(param_1 + 0xf90) != 0) {
      return;
    }
    lVar15 = 0x27;
  }
  pppbVar17 = *param_4;
  if ((*(char *)(param_1 + 0x1038) == '\0') && (*(int *)(param_1 + 0xa4) == 1)) {
    pppbVar17 = (byte ***)CONCAT44((int)((ulong)pppbVar17 >> 0x20),SUB84(pppbVar17,0) + -110.0);
  }
  lVar7 = param_1 + lVar15 * 0x60;
  *(byte ****)(lVar7 + 0x108) = param_4[1];
  *(byte ****)(lVar7 + 0x100) = pppbVar17;
  *(undefined8 *)(lVar7 + 0xf0) = 1;
  pppplVar6 = param_3;
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    pppplVar6 = (long ****)&DAT_00000004;
    uVar3 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19e854613d,(long ****)&DAT_00000004,
                           param_4,param_5,param_6,param_7,param_8);
    if ((uVar3 & 1) == 0) goto LAB_7101ddd7f8;
    FUN_71024076d0(local_b0,0x19e854613d);
    *(uint *)(param_1 + lVar15 * 0x60 + 0x110) = local_b0[0];
    if (local_a0 == 0) goto LAB_7101ddd830;
    if (*(int *)(param_1 + lVar15 * 0x60 + 300) == 0x876500) {
      lVar7 = param_1 + lVar15 * 0x60;
      if (*(int *)(lVar7 + 0x128) == DAT_7106dd53ac) {
        lVar7 = param_1 + lVar15 * 0x60;
        plVar12 = (long *)(lVar7 + 0x120);
        lVar7 = *(long *)(lVar7 + 0x120);
        if ((lVar7 != 0) && (DAT_7106dd53a8 == '\x01')) {
          piVar13 = (int *)(lVar7 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar2) {
              *piVar13 = *piVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lVar7 = param_1 + lVar15 * 0x60;
        *plVar12 = 0;
        *(undefined1 *)(lVar7 + 0x130) = 0;
      }
      else {
        *(int *)(lVar7 + 0x128) = DAT_7106dd53ac;
        lVar7 = param_1 + lVar15 * 0x60;
        plVar12 = (long *)(lVar7 + 0x120);
      }
      *plVar12 = local_a0;
      piVar13 = (int *)(local_a0 + 0x38);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = *piVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_7101ddd894;
    }
  }
  else {
LAB_7101ddd7f8:
    local_90 = 0;
    local_a0 = 0;
    local_98 = 0x87650000000000;
    local_88 = 0xffffffffffffffff;
    uStack_80 = 0;
    local_b0[0] = 0;
    local_78 = 0;
    *(undefined4 *)(param_1 + lVar15 * 0x60 + 0x110) = 0;
LAB_7101ddd830:
    lVar7 = param_1 + lVar15 * 0x60;
    lVar10 = *(long *)(lVar7 + 0x120);
    if (((lVar10 != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_1 + lVar15 * 0x60 + 0x128) == DAT_7106dd53ac)) {
      piVar13 = (int *)(lVar10 + 0x38);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = *piVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(undefined8 *)(lVar7 + 0x120) = 0;
    lVar7 = param_1 + lVar15 * 0x60;
LAB_7101ddd894:
    *(undefined1 *)(lVar7 + 0x130) = 0;
  }
  lVar7 = param_1 + lVar15 * 0x60;
  *(undefined8 *)(lVar7 + 0x138) = local_88;
  *(undefined8 *)(lVar7 + 0x140) = uStack_80;
  *(undefined8 *)(lVar7 + 0x148) = local_78;
  local_a8 = (byte ***)&PTR_FUN_7104f73d50;
  if (((local_a0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_98 == DAT_7106dd53ac)) {
    piVar13 = (int *)(local_a0 + 0x38);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar2) {
        *piVar13 = *piVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_a0 = 0;
  FUN_71003a4ca0(local_b0,"set_parts_anim_icon_%02d",lVar15,pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_c0,param_1 + 0x18,(long ****)&local_a8,pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  plVar12 = local_b8;
  lVar15 = *local_b8;
  if (lVar15 != 0) {
    *(byte ****)(lVar15 + 0x30) = pppbVar17;
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
  }
  FUN_7103776640(&local_d0,param_1 + 0x18,&local_a8,pppplVar6,param_4,param_5,param_6,param_7,
                 param_8);
  uVar3 = local_c8;
  if ((*(long *)(local_c8 + 8) != 0) &&
     (lVar15 = *(long *)(*(long *)(local_c8 + 8) + 0x18), lVar15 != 0)) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
  }
  uVar14 = (uint)param_3;
  if (param_2 == 0) {
    FUN_7103776640(&local_e0,(long)&local_d0,(byte ****)"set_parts_icon_energy",pppplVar6,param_4,
                   param_5,param_6,param_7,param_8);
    uVar5 = local_d8;
    if ((*(long *)(local_d8 + 8) != 0) &&
       (lVar15 = *(long *)(*(long *)(local_d8 + 8) + 0x18), lVar15 != 0)) {
      *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
    }
    local_e0 = &PTR_FUN_710523d988;
    local_d8 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    FUN_7103776640(&local_e0,(long)&local_d0,(byte ****)"set_parts_icon_base",pppplVar6,param_4,
                   param_5,param_6,param_7,param_8);
    uVar5 = local_d8;
    if ((*(long *)(local_d8 + 8) != 0) &&
       (lVar15 = *(long *)(*(long *)(local_d8 + 8) + 0x18), lVar15 != 0)) {
      *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
    }
    local_e0 = &PTR_FUN_710523d988;
    local_d8 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    if (uVar14 == 2) {
      FUN_7103776640(&local_e0,(long)&local_d0,(byte ****)"set_parts_icon_energy",pppplVar6,param_4,
                     param_5,param_6,param_7,param_8);
      uVar5 = local_d8;
      FUN_7103778300(0x3f800000,local_d8,0x71042920c0);
      local_e0 = &PTR_FUN_710523d988;
      local_d8 = 0;
      if (uVar5 != 0) {
        uVar4 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar5);
      }
      uVar16 = 1;
      unaff_w26 = 2;
    }
    else if (uVar14 == 1) {
      FUN_7103776640(&local_e0,(long)&local_d0,(byte ****)"set_parts_icon_energy",pppplVar6,param_4,
                     param_5,param_6,param_7,param_8);
      uVar5 = local_d8;
      FUN_7103778300(0x3f800000,local_d8,0x710434a86d);
      local_e0 = &PTR_FUN_710523d988;
      local_d8 = 0;
      if (uVar5 != 0) {
        uVar4 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar5);
      }
      unaff_w26 = 1;
      uVar16 = 1;
    }
    else if (uVar14 == 0) {
      FUN_7103776640(&local_e0,(long)&local_d0,(byte ****)"set_parts_icon_energy",pppplVar6,param_4,
                     param_5,param_6,param_7,param_8);
      uVar5 = local_d8;
      FUN_7103778300(0x3f800000,local_d8,0x710437ca5d);
      local_e0 = &PTR_FUN_710523d988;
      local_d8 = 0;
      if (uVar5 != 0) {
        uVar4 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar5);
      }
      unaff_w26 = 0;
      uVar16 = 1;
    }
    else {
      uVar16 = 1;
    }
  }
  else {
    FUN_7103776640(&local_e0,(long)&local_d0,(byte ****)"set_parts_icon_energy",pppplVar6,param_4,
                   param_5,param_6,param_7,param_8);
    uVar5 = local_d8;
    if ((*(long *)(local_d8 + 8) != 0) &&
       (lVar15 = *(long *)(*(long *)(local_d8 + 8) + 0x18), lVar15 != 0)) {
      *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
    }
    local_e0 = &PTR_FUN_710523d988;
    local_d8 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    FUN_7103776640(&local_e0,(long)&local_d0,(byte ****)"set_parts_icon_base",pppplVar6,param_4,
                   param_5,param_6,param_7,param_8);
    uVar5 = local_d8;
    if ((*(long *)(local_d8 + 8) != 0) &&
       (lVar15 = *(long *)(*(long *)(local_d8 + 8) + 0x18), lVar15 != 0)) {
      *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
    }
    switch(param_2) {
    case 1:
      FUN_7103778300(0x3f800000,local_d8,0x710437cb20);
      unaff_w25 = 1;
      break;
    case 2:
      FUN_7103778300(0x3f800000,local_d8,0x7104433649);
      unaff_w25 = 2;
      break;
    case 3:
      FUN_7103778300(0x3f800000,local_d8,0x710436c98a);
      unaff_w25 = 3;
      break;
    case 4:
      FUN_7103778300(0x3f800000,local_d8,0x710428109c);
      unaff_w25 = 0;
      break;
    case 5:
      FUN_7103778300(0x3f800000,local_d8,0x710432a69e);
      unaff_w25 = 4;
      break;
    default:
    }
    if (uVar14 < 4) {
      switch((long)&switchD_7101dddbb8::switchdataD_71044fb6a8 +
             (long)(int)(&switchD_7101dddbb8::switchdataD_71044fb6a8)[(ulong)param_3 & 0xffffffff])
      {
      case 0x7101dddbbc:
        FUN_7103778300(0x3f800000,uVar5,0x7104464374);
        unaff_w26 = 0;
        break;
      case 0x7101dddbe0:
        FUN_7103778300(0x3f800000,uVar5,0x71044530ac);
        unaff_w26 = 2;
        break;
      case 0x7101dddc04:
        FUN_7103778300(0x3f800000,uVar5,0x710436ac3e);
        unaff_w26 = 3;
        break;
      case 0x7101dddc28:
        FUN_7103778300(0x3f800000,uVar5,0x7104442147);
        unaff_w26 = 1;
      }
    }
    local_d8 = 0;
    local_e0 = &PTR_FUN_710523d988;
    if (uVar5 != 0) {
      local_d8 = 0;
      local_e0 = &PTR_FUN_710523d988;
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    uVar16 = 0;
  }
  puVar8 = *(undefined1 **)(param_1 + 0x1000);
  if (puVar8 != *(undefined1 **)(param_1 + 0x1008)) {
    *puVar8 = uVar16;
    puVar8[3] = local_e0._2_1_;
    *(undefined2 *)(puVar8 + 1) = (undefined2)local_e0;
    *(undefined4 *)(puVar8 + 4) = unaff_w26;
    puVar8[8] = unaff_w25;
    puVar8[0xb] = local_64._2_1_;
    *(undefined2 *)(puVar8 + 9) = (undefined2)local_64;
    *(long *)(param_1 + 0x1000) = *(long *)(param_1 + 0x1000) + 0xc;
    goto LAB_7101ddde30;
  }
  __src = *(void **)(param_1 + 0xff8);
  __n = (long)puVar8 - (long)__src;
  uVar4 = 0x1555555555555555;
  uVar5 = ((long)__n >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar15 = (long)*(undefined1 **)(param_1 + 0x1008) - (long)__src >> 2;
  if ((ulong)(lVar15 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar11 = lVar15 * 0x5555555555555556;
    uVar4 = uVar5;
    if (uVar5 <= uVar11) {
      uVar4 = uVar11;
    }
    if (uVar4 != 0) goto LAB_7101dddd48;
LAB_7101dddda4:
    lVar15 = 0;
  }
  else {
LAB_7101dddd48:
    ppplVar9 = (long ***)(uVar4 * 0xc);
    if (ppplVar9 == (long ***)0x0) {
      ppplVar9 = (long ***)0x1;
    }
    lVar15 = FUN_710392e290(0x10,ppplVar9,pppplVar6,param_4,param_5,param_6,param_7,param_8);
    if (lVar15 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        pppplVar6 = (long ****)&local_e0;
        local_e0 = (undefined **)ppplVar9;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar5 & 1) != 0) &&
           (lVar15 = FUN_710392e290(0x10,ppplVar9,pppplVar6,param_4,param_5,param_6,param_7,param_8)
           , lVar15 != 0)) goto LAB_7101dddda8;
      }
      goto LAB_7101dddda4;
    }
  }
LAB_7101dddda8:
  puVar8 = (undefined1 *)(lVar15 + ((long)__n >> 2) * 4);
  *puVar8 = uVar16;
  lVar7 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
  *(undefined4 *)(puVar8 + 4) = unaff_w26;
  puVar8[8] = unaff_w25;
  *(undefined2 *)(puVar8 + 1) = (undefined2)local_e0;
  puVar8[3] = local_e0._2_1_;
  puVar8[0xb] = local_64._2_1_;
  *(undefined2 *)(puVar8 + 9) = (undefined2)local_64;
  if (0 < (long)__n) {
    memcpy(puVar8 + ((lVar7 >> 1) - (lVar7 >> 0x3f)) * 0xc,__src,__n);
  }
  *(ulong *)(param_1 + 0x1008) = lVar15 + uVar4 * 0xc;
  *(undefined1 **)(param_1 + 0xff8) = puVar8 + ((lVar7 >> 1) - (lVar7 >> 0x3f)) * 0xc;
  *(undefined1 **)(param_1 + 0x1000) = puVar8 + 0xc;
  if (__src != (void *)0x0) {
    FUN_710392eb40((ulong)__src);
  }
LAB_7101ddde30:
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar3 != 0) {
    uVar5 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar3);
  }
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar12);
  }
  return;
}

