// addr:      71000c4e70
// offset:    0xc4e70
// name:      FUN_71000c4e70
// mangled:   
// signature: undefined __cdecl FUN_71000c4e70(int * param_1, long * param_2)


void FUN_71000c4e70(int *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  ErrorResultVariant *this;
  long lVar7;
  int local_78 [4];
  undefined8 local_68;
  long local_58;
  undefined4 local_48 [2];
  
  local_58 = 0;
  FUN_71000bb5d0(&local_58);
  lVar2 = FUN_71000c74c0(param_2[0x12]);
  if (*(int *)(lVar2 + 8) == 4) {
LAB_71000c4eb0:
    local_68 = 0;
    FUN_71000bb5d0(&local_68);
    lVar2 = local_58;
    uVar5 = local_68;
    plVar3 = FUN_71000bb680();
    lVar7 = *plVar3;
    uVar4 = (**(code **)(*param_2 + 0x58))(param_2);
    if ((uVar4 & 1) != 0) {
      DAT_71052ac600 = 0;
      if (lVar7 != 0) {
        DAT_71052ac600 = (undefined2)((long)(uVar5 - lVar2) / lVar7);
      }
    }
    local_68 = local_68 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_78);
    piVar6 = (int *)&local_68;
  }
  else {
    local_68 = (ulong)local_68._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_78);
    lVar2 = FUN_71000c74c0(param_2[0x12]);
    *(undefined4 *)(lVar2 + 8) = 0;
    bVar1 = FUN_71000b1f20((long)&DAT_71052ace30);
    if (((bVar1) ||
        (uVar5 = FUN_71000ba850("nncs1-%.n.n.srv.nintendo.net",(char *)0x0,2,0,(long)&DAT_71052ace30
                               ), (uVar5 & 1) != 0)) &&
       ((bVar1 = FUN_71000b1f20((long)&DAT_71052ace50), bVar1 ||
        (uVar5 = FUN_71000ba850("nncs2-%.n.n.srv.nintendo.net",(char *)0x0,2,0,(long)&DAT_71052ace50
                               ), (uVar5 & 1) != 0)))) {
      DAT_71052ace48 = 0x2729;
      lVar2 = FUN_71000c74c0(param_2[0x12]);
      FUN_71000c5120(local_78,lVar2,(long)&DAT_71052ace30);
      FUN_71000bcf30((int *)&local_68,local_78);
      if ((int)local_68 == 0) {
        DAT_71052ace48 = 0x278d;
        lVar2 = FUN_71000c74c0(param_2[0x12]);
        FUN_71000c5120(local_78,lVar2,(long)&DAT_71052ace30);
        FUN_71000bcf30((int *)&local_68,local_78);
        if ((int)local_68 == 0) {
          DAT_71052ace68 = 0x2729;
          lVar2 = FUN_71000c74c0(param_2[0x12]);
          FUN_71000c5120(local_78,lVar2,(long)&DAT_71052ace50);
          FUN_71000bcf30((int *)&local_68,local_78);
          if ((int)local_68 == 0) {
            DAT_71052ace68 = 0x278d;
            lVar2 = FUN_71000c74c0(param_2[0x12]);
            FUN_71000c5120(local_78,lVar2,(long)&DAT_71052ace50);
            FUN_71000bcf30((int *)&local_68,local_78);
            if ((int)local_68 == 0) {
              FUN_71000cf9e0((long)&DAT_71052ace30,(long)&DAT_71052ace50);
              goto LAB_71000c4eb0;
            }
          }
          this = (ErrorResultVariant *)((ulong)local_78 | 4);
        }
        else {
          this = (ErrorResultVariant *)((ulong)local_78 | 4);
        }
      }
      else {
        this = (ErrorResultVariant *)((ulong)local_78 | 4);
      }
    }
    else {
      this = (ErrorResultVariant *)((ulong)local_78 | 4);
    }
    local_78[0] = 0x6436;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    local_48[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
    piVar6 = local_78;
  }
  FUN_71000bce50(param_1,piVar6);
  return;
}

