// addr:      71035db540
// offset:    0x35db540
// name:      FUN_71035db540
// mangled:   
// signature: undefined __cdecl FUN_71035db540(undefined8 * param_1, uint param_2, char param_3, uint param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71035db540(undefined8 *param_1,uint param_2,char param_3,uint param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  byte *pbVar5;
  byte ****ppppbVar6;
  long ****pppplVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long *plVar12;
  char *local_40;
  undefined8 local_38;
  
  if ((DAT_7105337230 & 1) == 0) {
    param_5 = (long ****)((ulong)param_5 & 0xffffffff);
    iVar2 = __cxa_guard_acquire(&DAT_7105337230);
    if (iVar2 != 0) {
      DAT_7105337170._5_3_ = 0;
      DAT_7105337170._1_4_ = 0x305f4e;
      _DAT_7105337199 = 0x414d5f45444f4e;
      DAT_71053371a0._0_1_ = 0x49;
      DAT_71053371c0 = 0;
      DAT_71053371b8._3_1_ = 0x33;
      _DAT_7105337169 = 0x414d5f45444f4e;
      DAT_7105337170._0_1_ = 0x49;
      DAT_71053371a8 = 0;
      _DAT_71053371b1 = 0x414d5f45444f4e;
      DAT_71053371b8._0_1_ = 0x49;
      DAT_71053371d0._3_1_ = 0x34;
      _DAT_71053371c9 = 0x414d5f45444f4e;
      DAT_71053371d0._0_1_ = 0x49;
      DAT_71053371f0 = 0;
      _DAT_71053371ec = 0;
      DAT_71053371eb = 0x35;
      DAT_7105337168 = 0x16;
      DAT_7105337198 = 0x16;
      DAT_71053371b0 = 0x16;
      DAT_71053371c8 = 0x16;
      DAT_71053371a0._4_4_ = 0;
      DAT_71053371b8._4_4_ = 0;
      DAT_71053371d0._4_4_ = 0;
      DAT_7105337178 = 0;
      DAT_7105337180 = 0x16;
      DAT_71053371d8 = 0;
      DAT_71053371e0 = 0x16;
      DAT_71053371e1._0_7_ = 0x414d5f45444f4e;
      DAT_71053371e1._7_1_ = 0x49;
      DAT_71053371f8 = 0x16;
      DAT_7105337203 = 0x36;
      DAT_71053371f9._0_7_ = 0x414d5f45444f4e;
      DAT_71053371f9._7_1_ = 0x49;
      _DAT_7105337204 = 0;
      DAT_7105337208 = 0;
      DAT_7105337210 = 0x16;
      DAT_7105337220 = 0;
      DAT_710533721b = 0x37;
      DAT_7105337211._0_7_ = 0x414d5f45444f4e;
      DAT_7105337211._7_1_ = 0x49;
      _DAT_710533721c = 0;
      uRam000000710533718d = 0;
      DAT_7105337190 = 0;
      DAT_7105337181._0_7_ = 0x414d5f45444f4e;
      DAT_7105337181._7_1_ = 0x49;
      DAT_7105337189 = 0x315f4e;
      DAT_71053371a0._3_1_ = 0x32;
      DAT_71053371a0._1_2_ = 0x5f4e;
      DAT_71053371b8._1_2_ = 0x5f4e;
      DAT_71053371d0._1_2_ = 0x5f4e;
      DAT_71053371e9 = 0x5f4e;
      DAT_7105337201 = 0x5f4e;
      DAT_7105337219 = 0x5f4e;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_7105337230);
    }
  }
  ppppbVar6 = (byte ****)(ulong)param_4;
  if ((DAT_7105337238 & 1) == 0) {
    param_5 = (long ****)((ulong)param_5 & 0xffffffff);
    iVar2 = __cxa_guard_acquire(&DAT_7105337238);
    if (iVar2 != 0) {
      DAT_71053370b0._6_2_ = 0;
      DAT_71053370b0._1_4_ = 0x305f4550;
      _DAT_71053370a9 = 0x4f4c5f45444f4e;
      DAT_71053370b0._0_1_ = 0x55;
      DAT_71053370c8._6_2_ = 0;
      DAT_71053370d0 = 0;
      DAT_71053370c8._1_4_ = 0x315f4550;
      DAT_71053370b8 = 0;
      DAT_71053370e0._6_2_ = 0;
      _DAT_71053370c1 = 0x4f4c5f45444f4e;
      DAT_71053370c8._0_1_ = 0x55;
      DAT_71053370e0._1_4_ = 0x325f4550;
      uRam00000071053370fe = 0;
      DAT_7105337100 = 0;
      DAT_71053370fd = 0;
      _DAT_71053370d9 = 0x4f4c5f45444f4e;
      DAT_71053370e0._0_1_ = 0x55;
      DAT_71053370e8 = 0;
      DAT_71053370f0 = 0x18;
      _DAT_71053370f9 = 0x335f4550;
      DAT_71053370f1._0_7_ = 0x4f4c5f45444f4e;
      DAT_71053370f1._7_1_ = 0x55;
      uRam0000007105337116 = 0;
      DAT_7105337108 = 0x18;
      _DAT_7105337111 = 0x345f4550;
      DAT_7105337109._0_7_ = 0x4f4c5f45444f4e;
      DAT_7105337109._7_1_ = 0x55;
      DAT_71053370a8 = 0x18;
      uRam000000710533712e = 0;
      DAT_7105337130 = 0;
      DAT_710533712d = 0;
      DAT_7105337118 = 0;
      DAT_7105337120 = 0x18;
      _DAT_7105337129 = 0x355f4550;
      DAT_71053370c0 = 0x18;
      DAT_71053370d8 = 0x18;
      DAT_71053370b0._5_1_ = 0;
      DAT_7105337115 = 0;
      DAT_7105337121._0_7_ = 0x4f4c5f45444f4e;
      DAT_7105337121._7_1_ = 0x55;
      DAT_71053370c8._5_1_ = 0;
      DAT_71053370e0._5_1_ = 0;
      uRam0000007105337146 = 0;
      DAT_7105337138 = 0x18;
      _DAT_7105337141 = 0x365f4550;
      DAT_7105337139._0_7_ = 0x4f4c5f45444f4e;
      DAT_7105337139._7_1_ = 0x55;
      DAT_7105337145 = 0;
      DAT_7105337148 = 0;
      DAT_7105337150 = 0x18;
      uRam000000710533715e = 0;
      DAT_7105337160 = 0;
      _DAT_7105337159 = 0x375f4550;
      DAT_7105337151._0_7_ = 0x4f4c5f45444f4e;
      DAT_7105337151._7_1_ = 0x55;
      DAT_710533715d = 0;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_7105337238);
    }
  }
  pppplVar7 = param_5;
  if ((DAT_7105337240 & 1) != 0) {
LAB_71035db58c:
    if (((ulong)pppplVar7 & 1) == 0) goto LAB_71035dbe24;
LAB_71035db594:
    pbVar5 = &DAT_7105336fd0;
    goto switchD_71035dbe64_caseD_2;
  }
  iVar2 = __cxa_guard_acquire(&DAT_7105337240);
  pppplVar7 = (long ****)((ulong)param_5 & 0xffffffff);
  if (iVar2 == 0) goto LAB_71035db58c;
  _DAT_7105336f10 = 0;
  DAT_7105336e90._2_6_ = 0;
  DAT_7105336ea8._2_6_ = 0;
  DAT_7105336e88._1_7_ = 0x5f47425f305f4e;
  DAT_7105336e90._0_1_ = 0x4e;
  _DAT_7105336e81 = 0x414d5f45444f4e;
  DAT_7105336e88._0_1_ = 0x49;
  _DAT_7105336ea1 = 0x5f47425f305f4e;
  DAT_7105336ea8._0_1_ = 0x4d;
  DAT_7105336e80 = 0x20;
  DAT_7105336e98 = 0x20;
  DAT_7105336e90._1_1_ = 0;
  DAT_7105336e99._0_7_ = 0x414d5f45444f4e;
  DAT_7105336e99._7_1_ = 0x49;
  DAT_7105336ea8._1_1_ = 0;
  DAT_7105336eb0 = 0x20;
  DAT_7105336eb1._0_7_ = 0x414d5f45444f4e;
  DAT_7105336eb1._7_1_ = 0x49;
  uRam0000007105336ec2 = 0;
  DAT_7105336eb9._0_7_ = 0x5f47425f305f4e;
  DAT_7105336eb9._7_1_ = 0x46;
  DAT_7105336ec8 = 0x1e;
  DAT_7105336ec1 = 0;
  DAT_7105336ed8 = 0;
  uRam0000007105336ed1 = 0x5241454e5f444e;
  DAT_7105336ec9._0_7_ = 0x4c425f45444f4e;
  DAT_7105336ec9._7_1_ = 0x45;
  DAT_7105336ef0._4_4_ = 0;
  DAT_7105336ef0._3_1_ = 0;
  DAT_7105336ef0._1_2_ = 0x465f;
  DAT_7105336ef8 = 0x24;
  DAT_7105336ee0 = 0x24;
  _DAT_7105336ee9 = 0x425f34585f444e;
  DAT_7105336ef0._0_1_ = 0x47;
  DAT_7105336ee1._0_7_ = 0x4c425f45444f4e;
  DAT_7105336ee1._7_1_ = 0x45;
  DAT_7105336f08._4_4_ = 0;
  DAT_7105336f08._3_1_ = 0;
  DAT_7105336f08._1_2_ = 0x4d5f;
  _DAT_7105336f01 = 0x425f34585f444e;
  DAT_7105336f08._0_1_ = 0x47;
  DAT_7105336ef9._0_7_ = 0x4c425f45444f4e;
  DAT_7105336ef9._7_1_ = 0x45;
  DAT_7105336f18 = 0;
  DAT_7105336f20 = (char *)0x0;
  iVar2 = FUN_710392e1f0(&local_40,0x10,(long ****)&SUB_00000020,ppppbVar6,pppplVar7,param_6,param_7
                         ,param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_38 = 0x20;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_38);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(&local_40,0x10,(long ****)&SUB_00000020,ppppbVar6,pppplVar7,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,local_40);
  _DAT_7105336f10 = 0x21;
  DAT_7105336f18 = 0x19;
  DAT_7105336f20 = local_40;
  builtin_strncpy(local_40,"NODE_SILHOUETTE_NEAR_DRAW",0x1a);
  _DAT_7105336f29 = 0x414d5f45444f4e;
  DAT_7105336f30._0_1_ = 0x49;
  DAT_7105336f68._7_1_ = 0;
  DAT_7105336f80._4_4_ = 0;
  _DAT_7105336f71 = 0x414d5f45444f4e;
  DAT_7105336f78._0_1_ = 0x49;
  DAT_7105336f38._4_4_ = 0;
  DAT_7105336f40 = 0x20;
  DAT_7105336f98._3_5_ = 0;
  DAT_7105336f98._2_1_ = 0;
  DAT_7105336f80._1_2_ = 0x5443;
  DAT_7105336f78._1_7_ = 0x4646455f305f4e;
  DAT_7105336f80._0_1_ = 0x45;
  DAT_7105336f28 = 0x24;
  DAT_7105336f70 = 0x24;
  DAT_7105336f68._6_1_ = 0;
  DAT_7105336f80._3_1_ = 0;
  DAT_7105336f98._1_1_ = 0x54;
  DAT_7105336f38._1_2_ = 0x5443;
  DAT_7105336f30._1_7_ = 0x4646455f305f4e;
  DAT_7105336f38._0_1_ = 0x45;
  DAT_7105336fa0 = 0x22;
  DAT_7105336f38._3_1_ = 0;
  DAT_7105336f88 = 0x22;
  _DAT_7105336f91 = 0x41524645525f54;
  DAT_7105336f98._0_1_ = 0x43;
  DAT_7105336f89._0_7_ = 0x4f505f45444f4e;
  DAT_7105336f89._7_1_ = 0x53;
  DAT_7105336fb0._3_5_ = 0;
  DAT_7105336fb0._1_1_ = 0x47;
  _DAT_7105336fa9 = 0x4245445f305f4e;
  DAT_7105336fb0._0_1_ = 0x55;
  DAT_7105336fa1._0_7_ = 0x414d5f45444f4e;
  DAT_7105336fa1._7_1_ = 0x49;
  DAT_7105336fb0._2_1_ = 0;
  DAT_7105336f50._2_6_ = 0;
  _DAT_7105336f49 = 0x4341524645525f;
  DAT_7105336f50._0_1_ = 0x54;
  DAT_7105336f41._0_7_ = 0x52505f45444f4e;
  DAT_7105336f41._7_1_ = 0x45;
  DAT_7105336f50._1_1_ = 0;
  DAT_7105336f68._1_5_ = 0x524c475f54;
  DAT_7105336f58 = 0x2a;
  _DAT_7105336f61 = 0x46455f444e;
  _DAT_7105336f66 = 0x4546;
  DAT_7105336f68._0_1_ = 0x43;
  DAT_7105336f59._0_7_ = 0x4c425f45444f4e;
  DAT_7105336f59._7_1_ = 0x45;
  DAT_7105336fc0._7_1_ = 0;
  DAT_7105336fc0._1_5_ = 0x44335f4746;
  _DAT_7105336fb9 = 0x5f45444f4e;
  _DAT_7105336fbe = 0x4955;
  DAT_7105336fc0._0_1_ = 0x5f;
  DAT_7105336fb8 = 0x1a;
  DAT_7105336fc0._6_1_ = 0;
  DAT_7105336fc8 = 0;
  DAT_7105336fd0 = 0x16;
  DAT_7105336fe0 = 0;
  DAT_7105336fdb = 0x52;
  _DAT_7105336fd9 = 0x4f52;
  DAT_7105336fd1._0_7_ = 0x494d5f45444f4e;
  DAT_7105336fd1._7_1_ = 0x52;
  _DAT_7105336fdc = 0;
  DAT_7105336fe8 = 0x16;
  DAT_7105336ff3 = 0x52;
  _DAT_7105336ff1 = 0x4f52;
  DAT_7105336fe9._0_7_ = 0x494d5f45444f4e;
  DAT_7105336fe9._7_1_ = 0x52;
  _DAT_7105336ff4 = 0;
  DAT_7105337008 = 0;
  DAT_7105337010 = (char *)0x0;
  DAT_7105336ff8 = 0;
  _DAT_7105337000 = 0;
  iVar2 = FUN_710392e1f0(&local_40,0x10,(long ****)&SUB_00000020,ppppbVar6,pppplVar7,param_6,param_7
                         ,param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_38 = 0x20;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_38);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(&local_40,0x10,(long ****)&SUB_00000020,ppppbVar6,pppplVar7,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,local_40);
  _DAT_7105337000 = 0x21;
  DAT_7105337008 = 0x18;
  DAT_7105337010 = local_40;
  builtin_strncpy(local_40,"NODE_MIRROR_POST_REFRACT",0x19);
  DAT_7105337028 = 0;
  DAT_7105337030 = 0x1a;
  uRam000000710533703f = 0;
  DAT_7105337040 = 0;
  DAT_710533703e = 0;
  uRam0000007105337021 = 0x4e4545524353;
  DAT_7105337019._0_6_ = 0x4f5f45444f4e;
  DAT_7105337019._6_2_ = 0x4646;
  DAT_7105337058._4_4_ = 0;
  DAT_7105337070._7_1_ = 0;
  DAT_7105337060 = 0x2a;
  uRam000000710533708f = 0;
  DAT_7105337070._6_1_ = 0;
  DAT_710533708e = 0;
  DAT_7105337078 = 0x2a;
  DAT_71053370a0 = 0;
  DAT_7105337090 = 0x1c;
  DAT_710533709f = 0;
  uRam0000007105337039 = 0x5345525f4a;
  DAT_7105337031._0_5_ = 0x5f45444f4e;
  DAT_7105337031._5_2_ = 0x5250;
  DAT_7105337031._7_1_ = 0x4f;
  DAT_7105337048 = 0x26;
  DAT_7105337058._3_1_ = 0x44;
  DAT_7105337058._1_2_ = 0x325f;
  _DAT_7105337051 = 0x49414d5f544345;
  DAT_7105337058._0_1_ = 0x4e;
  DAT_7105337049._0_7_ = 0x46455f45444f4e;
  DAT_7105337049._7_1_ = 0x46;
  DAT_7105337070._1_5_ = 0x304c414345;
  _DAT_7105337069 = 0x425f305f4e;
  _DAT_710533706e = 0x5f47;
  DAT_7105337070._0_1_ = 0x44;
  DAT_7105337061._0_7_ = 0x414d5f45444f4e;
  DAT_7105337061._7_1_ = 0x49;
  DAT_7105337018 = 0x1c;
  uRam0000007105337089 = 0x314c414345;
  DAT_7105337079._0_7_ = 0x414d5f45444f4e;
  DAT_7105337079._7_1_ = 0x49;
  DAT_7105337027 = 0;
  DAT_7105337081._0_5_ = 0x425f305f4e;
  DAT_7105337081._5_2_ = 0x5f47;
  DAT_7105337081._7_1_ = 0x44;
  uRam0000007105337099 = 0x50414d574f44;
  DAT_7105337091._0_6_ = 0x535f45444f4e;
  DAT_7105337091._6_2_ = 0x4148;
  FUN_71000001c0();
  __cxa_guard_release(&DAT_7105337240);
  pppplVar7 = (long ****)((ulong)param_5 & 0xffffffff);
  if (((ulong)param_5 & 1) != 0) goto LAB_71035db594;
LAB_71035dbe24:
  if (param_2 < 10) {
    if ((1 << (ulong)(param_2 & 0x1f) & 0x2dcU) == 0) {
      if ((param_2 == 0) || (param_2 != 8)) goto switchD_71035dbe64_caseD_c;
      pbVar5 = &DAT_7105336fa0;
    }
    else {
      pbVar5 = &DAT_7105336eb0;
      switch(param_3) {
      case '\0':
        pbVar5 = &DAT_7105337168;
        if (2 < param_2 - 2) {
          pbVar5 = &DAT_7105336e80;
        }
        break;
      case '\x01':
      case '\b':
        pbVar5 = &DAT_7105336e98;
        break;
      case '\x02':
      case '\a':
        break;
      case '\x03':
        pbVar5 = &DAT_7105336ec8;
        break;
      case '\x04':
      case '\x06':
        pbVar5 = &DAT_7105336ef8;
        break;
      case '\x05':
        pbVar5 = &DAT_7105336ee0;
        break;
      case '\t':
      case '\v':
        pbVar5 = &DAT_7105336f28;
        break;
      case '\n':
        pbVar5 = &DAT_7105336f58;
        break;
      default:
        goto switchD_71035dbe64_caseD_c;
      case '\x0f':
        pbVar5 = &DAT_7105336fb8;
        break;
      case '\x11':
        pbVar5 = &DAT_7105337018;
        break;
      case '\x14':
        pbVar5 = &DAT_7105336f10;
        break;
      case '\x15':
        pbVar5 = &DAT_7105337030;
        break;
      case '\x16':
        pbVar5 = &DAT_7105337048;
        break;
      case '\x17':
        pbVar5 = &DAT_7105337060;
        break;
      case '\x18':
        pbVar5 = &DAT_7105337078;
        break;
      case '\x19':
        pbVar5 = &DAT_7105337090;
      }
    }
  }
  else {
switchD_71035dbe64_caseD_c:
    pbVar5 = &DAT_7105337168;
  }
switchD_71035dbe64_caseD_2:
  if (param_3 == '\x0e') {
    pbVar11 = &DAT_7105336f88;
LAB_71035dbedc:
    pbVar5 = pbVar11 + 0x78;
LAB_71035dbee0:
    if (((ulong)pppplVar7 & 1) == 0) {
      pbVar5 = pbVar11;
    }
  }
  else {
    if (param_3 == '\r') {
      pbVar11 = &DAT_7105336f70;
      goto LAB_71035dbedc;
    }
    if (param_3 == '\f') {
      pbVar11 = &DAT_7105336f40;
      pbVar5 = &DAT_7105336fe8;
      goto LAB_71035dbee0;
    }
  }
  if (((param_4 & 0x7650000) == 0x7650000) || ((param_4 & 0xffff) != 0)) {
    uVar1 = (uint)(short)param_4;
    if ((param_4 & 0x7650000) == 0x7650000) {
      if (uVar1 < 8) {
        pbVar5 = &DAT_71053370a8 + (ulong)uVar1 * 0x18;
      }
    }
    else {
      pbVar5 = &DAT_7105337168;
      if (uVar1 < 8) {
        pbVar5 = &DAT_7105337168 + (ulong)uVar1 * 0x18;
      }
    }
  }
  plVar4 = (long *)(DAT_71053375a8 + 0x10);
  plVar12 = param_1 + 1;
  *plVar12 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_710522fe60;
  plVar4 = FUN_7103550630(plVar4,pbVar5);
  if (plVar4 == (long *)0x0) {
    return;
  }
  if (((long *)plVar4[7] == (long *)0x0) || (*(long *)plVar4[7] != plVar4[8])) {
    *plVar12 = 0;
  }
  else {
    lVar8 = plVar4[6];
    *plVar12 = lVar8;
    if (lVar8 != 0) {
      puVar9 = *(undefined8 **)(lVar8 + 8);
      param_1[2] = puVar9;
      uVar10 = *puVar9;
      goto LAB_71035dbfa4;
    }
  }
  uVar10 = 0;
  param_1[2] = 0;
LAB_71035dbfa4:
  param_1[3] = uVar10;
  return;
}

