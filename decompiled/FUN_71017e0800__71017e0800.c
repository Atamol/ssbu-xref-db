// addr:      71017e0800
// offset:    0x17e0800
// name:      FUN_71017e0800
// mangled:   
// signature: undefined __cdecl FUN_71017e0800(uint * param_1, int param_2, undefined8 param_3, ulong param_4, ulong param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017e0800(uint *param_1,int param_2,undefined8 param_3,ulong param_4,ulong param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  uint uVar13;
  char *pcVar14;
  char local_498 [256];
  ushort local_398;
  char local_390 [256];
  ushort local_290;
  ulong local_288;
  undefined8 local_280;
  char *local_278;
  char local_270 [256];
  ushort local_170;
  char local_168 [256];
  ushort local_68;
  
  uVar11 = param_5 & 0xffffffff;
  uVar2 = (uint)param_3;
  uVar9 = param_4;
  uVar5 = param_6;
  if (((DAT_710532f938 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710532f938), iVar3 != 0)) {
    __cxa_guard_release(&DAT_710532f938);
  }
  puVar12 = (&PTR_DAT_7105186bd0)[param_2];
  uVar13 = (uint)param_4;
  if (param_2 < 0x9d) {
    if (param_2 == 0x3a) {
      if ((uVar2 == 0) && (ppuVar8 = &PTR_s_yoshimob00_710509f918, uVar13 < 7)) goto LAB_71017e0948;
    }
    else if (param_2 == 0x3b) {
      if ((uVar2 == 0) && (ppuVar8 = &PTR_s_yoshibg01_710509f950, uVar13 < 8)) goto LAB_71017e0948;
    }
    else if ((param_2 == 0x77) &&
            ((uVar2 == 0 && (ppuVar8 = &PTR_s_sausage_710509f8d0, uVar13 < 4)))) {
LAB_71017e0948:
      puVar12 = ppuVar8[param_4 & 0xffffffff];
    }
  }
  else if (param_2 == 0x9d) {
    if ((uVar2 == 0) && (ppuVar8 = &PTR_DAT_710509f8f0, uVar13 < 5)) goto LAB_71017e0948;
  }
  else if (param_2 == 0x230) {
    if (((uVar2 != 2) && (uVar2 != 4)) && (ppuVar8 = &PTR_s_crack_710509f9a8, uVar13 < 2))
    goto LAB_71017e0948;
  }
  else if (((param_2 == 0x236) && (uVar2 != 2)) &&
          ((uVar2 != 4 && (ppuVar8 = &PTR_s_meltobject_710509f990, uVar13 < 3))))
  goto LAB_71017e0948;
  if (((DAT_710532f938 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710532f938), iVar3 != 0)) {
    __cxa_guard_release(&DAT_710532f938);
  }
  local_168[0] = '\0';
  pcVar14 = (&PTR_s_fighter_7105187f08)[param_2];
  sVar4 = strlen(pcVar14);
  local_68 = 0;
  if (sVar4 == 0) {
    pcVar14 = local_168;
  }
  else {
    if (sVar4 == 1) {
      uVar6 = 0;
LAB_71017e09dc:
      local_68 = (short)uVar6 + 1;
      local_168[uVar6] = *pcVar14;
      uVar6 = (ulong)local_68;
    }
    else {
      uVar6 = 0;
      lVar10 = (sVar4 & 1) - sVar4;
      do {
        local_68 = (short)uVar6 + 1;
        local_168[uVar6] = *pcVar14;
        uVar6 = (ulong)local_68;
        pcVar7 = pcVar14 + 1;
        pcVar14 = pcVar14 + 2;
        local_68 = local_68 + 1;
        lVar10 = lVar10 + 2;
        local_168[uVar6] = *pcVar7;
        uVar6 = (ulong)local_68;
      } while (lVar10 != 0);
      if ((sVar4 & 1) != 0) goto LAB_71017e09dc;
    }
    pcVar14 = local_168 + uVar6;
  }
  *pcVar14 = '\0';
  pcVar14 = (&PTR_s_miifighter_7105189240)[param_2];
  local_270[0] = '\0';
  sVar4 = strlen(pcVar14);
  local_170 = 0;
  if (sVar4 == 0) {
    pcVar7 = local_270;
  }
  else {
    pcVar7 = pcVar14;
    if (sVar4 == 1) {
      uVar6 = 0;
LAB_71017e0a8c:
      local_170 = (short)uVar6 + 1;
      local_270[uVar6] = *pcVar7;
      uVar6 = (ulong)local_170;
    }
    else {
      uVar6 = 0;
      lVar10 = (sVar4 & 1) - sVar4;
      do {
        local_170 = (short)uVar6 + 1;
        local_270[uVar6] = *pcVar7;
        uVar6 = (ulong)local_170;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 2;
        local_170 = local_170 + 1;
        lVar10 = lVar10 + 2;
        local_270[uVar6] = *pcVar1;
        uVar6 = (ulong)local_170;
      } while (lVar10 != 0);
      if ((sVar4 & 1) != 0) goto LAB_71017e0a8c;
    }
    pcVar7 = local_270 + uVar6;
  }
  *pcVar7 = '\0';
  local_398 = 0;
  local_498[0] = '\0';
  if ((uVar2 == 5) || (uVar2 == 1)) {
    if (param_2 < 0xf4) {
      if (param_2 == 0x37) {
        pcVar14 = "fighter/samusd/motion/bunshin/c00";
      }
      else {
        if (param_2 != 0x46) {
          if (param_2 != 0x4a) goto LAB_71017e0d4c;
          pcVar14 = "fighter/kirby/motion/windummy/c%02d";
          goto LAB_71017e0bf8;
        }
        pcVar14 = "fighter/kirby/motion/rosettaticomissile/c00";
      }
      FUN_710147f330((long)local_498,pcVar14,param_3,uVar9,param_5,uVar5,param_7,param_8);
    }
    else {
      if (param_2 < 0x1c5) {
        if (param_2 == 0xf4) {
          pcVar14 = "fighter/littlemac/motion/body/c%02d";
        }
        else {
          if (param_2 != 0x1b4) {
LAB_71017e0d4c:
            local_278 = (char *)0x0;
            local_280 = 0;
            local_288 = 0;
            if ((param_2 == 0x1ca) && ((param_6 & 1) != 0)) {
              std::string::append((char *)&local_288);
              std::string::append((char *)&local_288);
              pcVar14 = local_278;
              if ((local_288 & 1) == 0) {
                pcVar14 = (char *)((ulong)&local_288 | 1);
              }
            }
            local_390[0] = '\0';
            sVar4 = strlen(pcVar14);
            local_290 = 0;
            if (sVar4 == 0) {
              pcVar14 = local_390;
            }
            else {
              if (sVar4 == 1) {
                uVar9 = 0;
LAB_71017e0e90:
                local_290 = (short)uVar9 + 1;
                local_390[uVar9] = *pcVar14;
                uVar9 = (ulong)local_290;
              }
              else {
                uVar9 = 0;
                lVar10 = (sVar4 & 1) - sVar4;
                do {
                  local_290 = (short)uVar9 + 1;
                  local_390[uVar9] = *pcVar14;
                  uVar9 = (ulong)local_290;
                  pcVar7 = pcVar14 + 1;
                  pcVar14 = pcVar14 + 2;
                  local_290 = local_290 + 1;
                  lVar10 = lVar10 + 2;
                  local_390[uVar9] = *pcVar7;
                  uVar9 = (ulong)local_290;
                } while (lVar10 != 0);
                if ((sVar4 & 1) != 0) goto LAB_71017e0e90;
              }
              pcVar14 = local_390 + uVar9;
            }
            *pcVar14 = '\0';
            memcpy(local_270,local_390,0x100);
            local_170 = local_290;
            FUN_710147f330((long)local_498,"%s/%s/motion/%s/c%02d",local_168,local_270,puVar12,
                           uVar11,param_7,param_8);
            if (((local_288 & 1) != 0) && (local_278 != (char *)0x0)) {
              FUN_710392eb40((ulong)local_278);
            }
            goto joined_r0x0071017e0bcc;
          }
          pcVar14 = "fighter/simon/motion/whip/c%02d";
        }
      }
      else if (param_2 == 0x1c5) {
        pcVar14 = "fighter/richter/motion/whip/c%02d";
      }
      else {
        if (param_2 != 0x1f2) goto LAB_71017e0d4c;
        pcVar14 = "fighter/jack/motion/windummy/c%02d";
      }
LAB_71017e0bf8:
      FUN_710147f330((long)local_498,pcVar14,uVar11,uVar9,param_5,uVar5,param_7,param_8);
    }
joined_r0x0071017e0bcc:
    if (uVar2 == 5) {
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      pcVar14 = local_498;
      local_498[uVar9] = '/';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 'm';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 'o';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 't';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 'i';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 'o';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 'n';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = '_';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 'l';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 'i';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 's';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 't';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = '.';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 'b';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 'i';
      uVar9 = (ulong)local_398;
      local_398 = local_398 + 1;
      local_498[uVar9] = 'n';
      local_498[local_398] = '\0';
      goto LAB_71017e1008;
    }
LAB_71017e0bd0:
    if ((3 < uVar2) && (uVar2 != 5)) {
      pcVar14 = local_168;
      local_68 = 0;
      local_168[0] = '\0';
      goto LAB_71017e1008;
    }
    goto LAB_71017e1004;
  }
  if (uVar2 != 0) goto LAB_71017e0bd0;
  if (0x159 < param_2) {
    switch(param_2) {
    case 0x1b3:
    case 0x1b4:
      pcVar14 = "fighter/simon/model/whip/c%02d/model.numdlb";
      break;
    case 0x1b5:
    case 0x1b6:
    case 0x1b7:
    case 0x1b8:
    case 0x1b9:
    case 0x1ba:
    case 0x1bb:
    case 0x1bc:
    case 0x1bd:
    case 0x1be:
    case 0x1bf:
    case 0x1c0:
    case 0x1c1:
    case 0x1c2:
    case 0x1c3:
    case 0x1c6:
    case 0x1c7:
    case 0x1c8:
    case 0x1c9:
    case 0x1ca:
    case 0x1cb:
    case 0x1cf:
    case 0x1d0:
    case 0x1d1:
    case 0x1d2:
    case 0x1d3:
    case 0x1d4:
    case 0x1d5:
    case 0x1d6:
    case 0x1d7:
    case 0x1d8:
    case 0x1d9:
    case 0x1da:
    case 0x1db:
    case 0x1dc:
    case 0x1dd:
    case 0x1de:
    case 0x1df:
    case 0x1e0:
    case 0x1e1:
    case 0x1e2:
    case 0x1e3:
    case 0x1e4:
    case 0x1e5:
    case 0x1e6:
    case 0x1e7:
    case 0x1e8:
    case 0x1e9:
    case 0x1ea:
    case 0x1eb:
    case 0x1ec:
    case 0x1ed:
    case 0x1ee:
    case 0x1ef:
    case 0x1f0:
    case 0x1f1:
      goto switchD_71017e0af0_caseD_1b5;
    case 0x1c4:
    case 0x1c5:
      pcVar14 = "fighter/richter/model/whip/c%02d/model.numdlb";
      break;
    case 0x1cc:
      pcVar14 = "fighter/pzenigame/model/body/c%02d/model.numdlb";
      break;
    case 0x1cd:
      pcVar14 = "fighter/pfushigisou/model/body/c%02d/model.numdlb";
      break;
    case 0x1ce:
      pcVar14 = "fighter/plizardon/model/body/c%02d/model.numdlb";
      break;
    case 0x1f2:
      pcVar14 = "fighter/jack/model/body/c%02d/model.numdlb";
      break;
    default:
      switch(param_2) {
      case 0x24f:
      case 0x252:
        pcVar14 = "fighter/elight/model/body/c%02d/model.numdlb";
        break;
      case 0x250:
        pcVar14 = "fighter/elight/model/esword/c%02d/model.numdlb";
        break;
      case 0x251:
      case 0x253:
      case 0x254:
      case 0x255:
      case 0x256:
        goto switchD_71017e0af0_caseD_1b5;
      case 599:
        pcVar14 = "fighter/eflame/model/body/c%02d/model.numdlb";
        break;
      case 600:
        pcVar14 = "fighter/eflame/model/esword/c%02d/model.numdlb";
        break;
      default:
        if (param_2 != 0x15a) goto switchD_71017e0af0_caseD_1b5;
        pcVar14 = "fighter/mewtwo/model/body/c%02d/model.numdlb";
      }
    }
    goto LAB_71017e0ff8;
  }
  if (0x82 < param_2) {
    if (param_2 < 0x98) {
      if (param_2 == 0x83) {
        pcVar14 = "boss/ganonboss/model/body/c00/model.numdlb";
        goto LAB_71017e0f78;
      }
      if (param_2 != 0x8e) goto switchD_71017e0af0_caseD_1b5;
      pcVar14 = "fighter/metaknight/model/body/c%02d/model.numdlb";
    }
    else {
      if (param_2 == 0x98) {
        pcVar14 = "fighter/samus/model/body/c00/model.numdlb";
        goto LAB_71017e0f78;
      }
      if (param_2 == 0xe2) {
        pcVar14 = "fighter/pichu/model/body/c%02d/model.numdlb";
      }
      else {
        if (param_2 != 0xf4) goto switchD_71017e0af0_caseD_1b5;
        pcVar14 = "fighter/littlemac/model/body/c%02d/model.numdlb";
      }
    }
    goto LAB_71017e0ff8;
  }
  switch(param_2) {
  case 0x37:
    pcVar14 = "fighter/samusd/model/body/c%02d/model.numdlb";
    break;
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
    goto switchD_71017e0af0_caseD_1b5;
  case 0x46:
    pcVar14 = "fighter/rosetta/model/tico/c00/model.numdlb";
LAB_71017e0f78:
    FUN_710147f330((long)local_498,pcVar14,param_3,uVar9,param_5,uVar5,param_7,param_8);
    goto LAB_71017e1004;
  case 0x4a:
    pcVar14 = "fighter/kirby/model/body/c%02d/model.numdlb";
    break;
  case 0x52:
    pcVar14 = "fighter/pikachu/model/body/c%02d/model.numdlb";
    break;
  default:
    if (param_2 == 0x6e) {
      pcVar14 = "fighter/koopag/model/body/c00/model.numdlb";
      goto LAB_71017e0f78;
    }
    goto switchD_71017e0af0_caseD_1b5;
  }
LAB_71017e0ff8:
  FUN_710147f330((long)local_498,pcVar14,uVar11,uVar9,param_5,uVar5,param_7,param_8);
LAB_71017e1004:
  pcVar14 = local_498;
LAB_71017e1008:
  FUN_710353e8e0(param_1,pcVar14);
  return;
switchD_71017e0af0_caseD_1b5:
  FUN_710147f330((long)local_498,"%s/%s/model/%s/c%02d/model.numdlb",local_168,local_270,puVar12,
                 uVar11,param_7,param_8);
  goto LAB_71017e1004;
}

