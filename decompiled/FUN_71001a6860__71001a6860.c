// addr:      71001a6860
// offset:    0x1a6860
// name:      FUN_71001a6860
// mangled:   
// signature: undefined __cdecl FUN_71001a6860(undefined8 param_1, undefined4 param_2, undefined1 param_3, uint param_4)


void FUN_71001a6860(undefined8 param_1,undefined4 param_2,undefined1 param_3,uint param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ErrorResultVariant *this;
  int local_148 [32];
  int local_c8 [4];
  int local_b8 [4];
  int local_a8 [4];
  int local_98 [4];
  int local_88 [4];
  int local_78 [4];
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  FUN_71000bce50(local_58,(int *)(*(long *)(DAT_71052adfc0 + 8) + 0x9c));
  switch(param_3) {
  case 2:
  case 0x12:
    local_148[0] = 0x6442;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_148 | 4));
    local_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_148 | 4),(Result *)local_68);
    if (local_58[0] == local_148[0]) goto switchD_71001a68c0_caseD_e;
    local_68[0] = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
    if (local_58[0] == local_68[0]) goto switchD_71001a68c0_caseD_e;
    local_78[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_78 | 4));
    local_88[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
    if (local_58[0] == local_78[0]) goto switchD_71001a68c0_caseD_e;
    local_88[0] = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_88 | 4));
    local_98[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_98);
    if (local_58[0] == local_88[0]) goto switchD_71001a68c0_caseD_e;
    local_98[0] = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_98 | 4));
    local_a8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_a8);
    if (local_58[0] == local_98[0]) goto switchD_71001a68c0_caseD_e;
    local_148[0] = 0x643f;
    break;
  case 3:
  case 0x13:
    local_148[0] = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_148 | 4));
    local_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_148 | 4),(Result *)local_68);
    if (local_58[0] == local_148[0]) goto switchD_71001a68c0_caseD_e;
    local_68[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
    if (local_58[0] == local_68[0]) goto switchD_71001a68c0_caseD_e;
    local_78[0] = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_78 | 4));
    local_88[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
    if (local_58[0] == local_78[0]) goto switchD_71001a68c0_caseD_e;
    local_88[0] = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_88 | 4));
    local_98[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_98);
    if (local_58[0] == local_88[0]) goto switchD_71001a68c0_caseD_e;
    local_148[0] = 0x6442;
    break;
  case 4:
  case 7:
  case 0x14:
  case 0x17:
    local_148[0] = 0x644a;
    this = (ErrorResultVariant *)((ulong)local_148 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    local_68[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)local_68);
    if (local_58[0] == local_148[0]) goto switchD_71001a68c0_caseD_e;
    local_148[0] = 0x6445;
    goto LAB_71001a6df4;
  case 5:
  case 0x15:
    local_148[0] = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_148 | 4));
    local_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_148 | 4),(Result *)local_68);
    if (local_58[0] == local_148[0]) goto switchD_71001a68c0_caseD_e;
    local_68[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
    if (local_58[0] == local_68[0]) goto switchD_71001a68c0_caseD_e;
    if ((param_4 & 1) == 0) goto LAB_71001a6c00;
LAB_71001a6b84:
    local_148[0] = 0x6444;
    break;
  case 6:
  case 0x16:
    local_148[0] = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_148 | 4));
    local_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_148 | 4),(Result *)local_68);
    if (local_58[0] == local_148[0]) goto switchD_71001a68c0_caseD_e;
    local_68[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
    if (local_58[0] == local_68[0]) goto switchD_71001a68c0_caseD_e;
    if ((param_4 & 1) == 0) goto LAB_71001a6b84;
LAB_71001a6c00:
    local_148[0] = 0x6443;
    break;
  case 8:
  case 0x18:
    local_148[0] = 0x644a;
    break;
  case 9:
  case 0x19:
    local_148[0] = 0x6c0e;
    break;
  case 10:
  case 0x1a:
    local_148[0] = 0x6442;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_148 | 4));
    local_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_148 | 4),(Result *)local_68);
    if (local_58[0] == local_148[0]) goto switchD_71001a68c0_caseD_e;
    local_68[0] = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
    if (local_58[0] == local_68[0]) goto switchD_71001a68c0_caseD_e;
    local_78[0] = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_78 | 4));
    local_88[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
    if (local_58[0] == local_78[0]) goto switchD_71001a68c0_caseD_e;
    local_88[0] = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_88 | 4));
    local_98[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_98);
    if (local_58[0] == local_88[0]) goto switchD_71001a68c0_caseD_e;
    local_98[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_98 | 4));
    local_a8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_a8);
    if (local_58[0] == local_98[0]) goto switchD_71001a68c0_caseD_e;
    local_a8[0] = 0x646a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_a8 | 4));
    local_b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_a8 | 4),(Result *)local_b8);
    if (local_58[0] == local_a8[0]) goto switchD_71001a68c0_caseD_e;
    local_b8[0] = 0x6468;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_b8 | 4));
    local_c8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_b8 | 4),(Result *)local_c8);
    if (local_58[0] == local_b8[0]) goto switchD_71001a68c0_caseD_e;
    local_c8[0] = 0x6469;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_c8 | 4));
    local_48[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_c8 | 4),(Result *)local_48);
    if (local_58[0] == local_c8[0]) goto switchD_71001a68c0_caseD_e;
    local_148[0] = 0x6467;
    break;
  case 0xb:
  case 0x1b:
    local_148[0] = 0x6442;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_148 | 4));
    local_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_148 | 4),(Result *)local_68);
    if (local_58[0] == local_148[0]) goto switchD_71001a68c0_caseD_e;
    local_68[0] = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
    if (local_58[0] == local_68[0]) goto switchD_71001a68c0_caseD_e;
    local_78[0] = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_78 | 4));
    local_88[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
    if (local_58[0] == local_78[0]) goto switchD_71001a68c0_caseD_e;
    local_88[0] = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_88 | 4));
    local_98[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_98);
    if (local_58[0] == local_88[0]) goto switchD_71001a68c0_caseD_e;
    local_98[0] = 0x646a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_98 | 4));
    local_a8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_a8);
    if (local_58[0] == local_98[0]) goto switchD_71001a68c0_caseD_e;
    local_a8[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_a8 | 4));
    local_b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_a8 | 4),(Result *)local_b8);
    if (local_58[0] == local_a8[0]) goto switchD_71001a68c0_caseD_e;
    if ((param_4 & 1) == 0) goto LAB_71001a71dc;
LAB_71001a6d6c:
    local_148[0] = 0x6469;
    break;
  case 0xc:
  case 0x1c:
    local_148[0] = 0x6442;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_148 | 4));
    local_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_148 | 4),(Result *)local_68);
    if (local_58[0] == local_148[0]) goto switchD_71001a68c0_caseD_e;
    local_68[0] = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
    if (local_58[0] == local_68[0]) goto switchD_71001a68c0_caseD_e;
    local_78[0] = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_78 | 4));
    local_88[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
    if (local_58[0] == local_78[0]) goto switchD_71001a68c0_caseD_e;
    local_88[0] = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_88 | 4));
    local_98[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_98);
    if (local_58[0] == local_88[0]) goto switchD_71001a68c0_caseD_e;
    local_98[0] = 0x646a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_98 | 4));
    local_a8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_a8);
    if (local_58[0] == local_98[0]) goto switchD_71001a68c0_caseD_e;
    local_a8[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_a8 | 4));
    local_b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_a8 | 4),(Result *)local_b8);
    if (local_58[0] == local_a8[0]) goto switchD_71001a68c0_caseD_e;
    if ((param_4 & 1) == 0) goto LAB_71001a6d6c;
LAB_71001a71dc:
    local_148[0] = 0x6468;
    break;
  case 0xd:
  case 0x1d:
    local_148[0] = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_148 | 4));
    local_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_148 | 4),(Result *)local_68);
    if (local_58[0] == local_148[0]) goto switchD_71001a68c0_caseD_e;
    local_68[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
    if (local_58[0] == local_68[0]) goto switchD_71001a68c0_caseD_e;
    local_148[0] = 0x646a;
    break;
  default:
    goto switchD_71001a68c0_caseD_e;
  }
  this = (ErrorResultVariant *)((ulong)local_148 | 4);
LAB_71001a6df4:
  nn::err::ErrorResultVariant::ErrorResultVariant(this);
  local_68[0] = 0;
  nn::err::ErrorResultVariant::operator=(this,(Result *)local_68);
  FUN_71000bcf30((int *)(*(long *)(DAT_71052adfc0 + 8) + 0x9c),local_148);
switchD_71001a68c0_caseD_e:
  plVar2 = (long *)FUN_7100161fa0(DAT_71052add68);
  lVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2);
  if (lVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_710015fd60((undefined8 *)local_148);
    plVar2 = (long *)FUN_7100161fb0(DAT_71052add68);
    (**(code **)(*plVar2 + 0x28))(local_68,plVar2,lVar3,local_148);
    if (local_68[0] == 0) {
      uVar1 = FUN_71001602d0((long)local_148);
    }
    else {
      uVar1 = 0xffffffff;
    }
    FUN_710015ff20((undefined8 *)local_148);
  }
  *(undefined4 *)(*(long *)(DAT_71052adfc0 + 8) + 0xac) = uVar1;
  return;
}

