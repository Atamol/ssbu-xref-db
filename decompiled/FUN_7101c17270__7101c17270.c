// addr:      7101c17270
// offset:    0x1c17270
// name:      FUN_7101c17270
// mangled:   
// signature: undefined __cdecl FUN_7101c17270(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c17270(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  long *********ppppppppplVar10;
  long ****pppplVar11;
  long lVar12;
  long lVar13;
  long ****pppplVar14;
  long lVar15;
  long lVar16;
  undefined **local_148;
  long *local_140;
  undefined **local_138;
  ulong local_130 [8];
  undefined **local_f0;
  long *local_e8;
  undefined **local_e0;
  long *local_d8;
  undefined **local_d0;
  long *local_c8;
  undefined **local_c0;
  long *local_b8;
  undefined **local_b0;
  long *local_a8 [9];
  
  if (-1 < param_2) {
    if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3))
    {
      if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar16 = **(long **)**(undefined8 **)(param_1 + 0x10);
      lVar13 = lVar16 + 8;
      if (param_2 == 0) {
        iVar1 = (int)param_3;
        FUN_7103776910(&local_b0,lVar13,(long ****)"set_rep_item",param_3,param_4,param_5,param_6,
                       param_7,param_8);
        plVar2 = local_a8[0];
        lVar12 = *local_a8[0];
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
        }
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8[0] = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar2);
        }
        FUN_7103776910(&local_b0,lVar13,(long ****)"set_rep_item_sdw",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        plVar2 = local_a8[0];
        lVar12 = *local_a8[0];
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
        }
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8[0] = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar2);
        }
        FUN_7103776910(&local_b0,lVar13,(long ****)"bg_category",param_3,param_4,param_5,param_6,
                       param_7,param_8);
        plVar2 = local_a8[0];
        lVar12 = *local_a8[0];
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
        }
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8[0] = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar2);
        }
        FUN_7103776910(&local_b0,lVar13,(long ****)"set_txt_item_name",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        plVar2 = local_a8[0];
        lVar12 = *local_a8[0];
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
        }
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8[0] = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar2);
        }
        FUN_7103776910(&local_b0,lVar13,(long ****)"set_txt_item_help",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        plVar2 = local_a8[0];
        lVar13 = *local_a8[0];
        if (lVar13 != 0) {
          *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
        }
        if (iVar1 == 0) {
          pcVar9 = "mel_rule_item_help_allbutton_off";
        }
        else {
          pcVar9 = "mel_rule_item_help_allbutton_on";
        }
        FUN_710377a120((long)&local_b0,pcVar9,param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x10),0x710430843f);
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8[0] = (long *)0x0;
      }
      else {
        pppplVar14 = *(long *****)(*(long *)(param_1 + 0x50) + (long)param_2 * 8);
        ppppppppplVar10 = (long *********)&DAT_00000015;
        lVar15 = *(long *)(DAT_710532f730 + 8);
        plVar7 = FUN_710323f8d0(*(long **)(param_1 + 0x48),pppplVar14,(long ****)&DAT_00000015,
                                param_4,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_c0,lVar13,(long ****)"set_rep_item",ppppppppplVar10,param_4,param_5,
                       param_6,param_7,param_8);
        plVar2 = local_b8;
        FUN_7103778b80((long)local_b8,(long)plVar7,ppppppppplVar10,param_4,param_5,param_6,param_7,
                       param_8);
        lVar12 = *local_b8;
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
        }
        FUN_7103776910(&local_d0,lVar13,(long ****)"set_rep_item_sdw",ppppppppplVar10,param_4,
                       param_5,param_6,param_7,param_8);
        plVar6 = local_c8;
        FUN_7103778b80((long)local_c8,(long)plVar7,ppppppppplVar10,param_4,param_5,param_6,param_7,
                       param_8);
        lVar12 = *local_c8;
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
        }
        uVar8 = FUN_7103280000(*(long *)(lVar15 + 0x268),(ulong)pppplVar14);
        FUN_7103776910(&local_e0,lVar13,(long ****)"bg_category",ppppppppplVar10,param_4,param_5,
                       param_6,param_7,param_8);
        plVar7 = local_d8;
        lVar12 = *local_d8;
        if ((int)uVar8 == 0) {
          if (lVar12 != 0) {
            *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
          }
        }
        else {
          if (lVar12 != 0) {
            *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
          }
          FUN_7103776910(&local_138,lVar13,(long ****)"set_txt_item_category",ppppppppplVar10,
                         param_4,param_5,param_6,param_7,param_8);
          FUN_71033980b0((uint *)&local_b0,(ulong)pppplVar14);
          FUN_710377a120((long)&local_138,(char *)local_a8,ppppppppplVar10,param_4,param_5,param_6,
                         param_7,param_8);
          uVar4 = local_130[0];
          local_138 = &PTR_FUN_710523d9a8;
          local_130[0] = 0;
          if (uVar4 != 0) {
            FUN_710392eb40(uVar4);
          }
          ppppppppplVar10 = (long *********)(ulong)((int)uVar8 - 1);
          FUN_7103778430(lVar13,"category_%02d",ppppppppplVar10,param_4,param_5,param_6,param_7,
                         param_8);
        }
        FUN_7103776910(&local_f0,lVar13,(long ****)"set_txt_item_name",ppppppppplVar10,param_4,
                       param_5,param_6,param_7,param_8);
        plVar5 = local_e8;
        lVar12 = *local_e8;
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
        }
        pppplVar11 = pppplVar14;
        FUN_710327fc30((uint *)&local_b0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x268),
                       (ulong)pppplVar14);
        FUN_71003a4ca0((uint *)&local_138,"nam_item_%s",local_a8,pppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
        FUN_710377a120((long)&local_f0,(char *)local_130,pppplVar11,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103776910(&local_148,lVar13,(long ****)"set_txt_item_help",pppplVar11,param_4,param_5,
                       param_6,param_7,param_8);
        plVar3 = local_140;
        lVar13 = *local_140;
        if (lVar13 != 0) {
          *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
        }
        FUN_710327fc30((uint *)&local_b0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x268),
                       (ulong)pppplVar14);
        FUN_71003a4ca0((uint *)&local_138,"nam_item_help_%s",local_a8,pppplVar14,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377a120((long)&local_148,(char *)local_130,pppplVar14,param_4,param_5,param_6,param_7
                       ,param_8);
        FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x10),0x710435b75f);
        local_148 = &PTR_FUN_710523d9a8;
        local_140 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar3);
        }
        local_f0 = &PTR_FUN_710523d9a8;
        local_e8 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar5);
        }
        local_e0 = &PTR_FUN_710523d9a8;
        local_d8 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar7);
        }
        local_d0 = &PTR_FUN_710523d9a8;
        local_c8 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar6);
        }
        local_c0 = &PTR_FUN_710523d9a8;
        local_b8 = (long *)0x0;
      }
      if (plVar2 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar2);
      }
    }
  }
  return;
}

