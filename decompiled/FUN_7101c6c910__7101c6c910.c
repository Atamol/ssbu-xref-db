// addr:      7101c6c910
// offset:    0x1c6c910
// name:      FUN_7101c6c910
// mangled:   
// signature: undefined __cdecl FUN_7101c6c910(ulong param_1, uint param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c6c910(ulong param_1,uint param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  long *********ppppppppplVar3;
  long lVar4;
  long ********local_78;
  ulong local_70;
  undefined **local_40;
  ulong local_38;
  
  if (((uint)*(byte *)(param_1 + 0x1920) != (param_2 & 0xff)) &&
     ((uint)*(byte *)(param_1 + 0x1861) != (param_2 & 0xff) && (param_2 & 0xff) < 8)) {
    lVar4 = param_1 + ((ulong)param_2 & 0xff) * 0x1e8;
    if (*(char *)(lVar4 + 0xafc) != '\0') {
      *(undefined1 *)(lVar4 + 0xafc) = 0;
      lVar4 = param_1 + ((ulong)param_2 & 0xff) * 0x1e8;
      *(undefined4 *)(lVar4 + 0x958) = 3;
      FUN_7101c6cac0(param_1,param_2);
      FUN_7101c76940(*(long *)(param_1 + 0x450),(byte)param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      local_78 = (long ********)0x0;
      FUN_7101696040((uint *)&local_78,(ushort *)(lVar4 + 0x924));
      ppppppppplVar3 = &local_78;
      FUN_7101c74ac0((long *)(param_1 + 0x480),2,(long ****)ppppppppplVar3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7101c78060(*(undefined8 **)(*(long *)(param_1 + 0x468) + 0x80),extraout_x1,ppppppppplVar3,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_78,*(long *)(param_1 + 0x478) + 0x88,(byte ****)"set_parts_header_btn",
                     ppppppppplVar3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_40,(long)&local_78,(long ****)"set_txt_now",ppppppppplVar3,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_710377a280((long)&local_40,(byte *)"mnu_online_room_search_participants_n",1);
      uVar1 = local_38;
      local_40 = &PTR_FUN_710523d9a8;
      local_38 = 0;
      if (uVar1 != 0) {
        FUN_710392eb40(uVar1);
      }
      uVar1 = local_70;
      local_78 = (long ********)&PTR_FUN_710523d988;
      local_70 = 0;
      if (uVar1 != 0) {
        uVar2 = *(ulong *)(uVar1 + 0x18);
        *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar1 + 0x18) = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
        FUN_710392eb40(uVar1);
      }
    }
  }
  return;
}

