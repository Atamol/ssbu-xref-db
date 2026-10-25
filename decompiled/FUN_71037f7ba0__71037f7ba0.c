// addr:      71037f7ba0
// offset:    0x37f7ba0
// name:      FUN_71037f7ba0
// mangled:   
// signature: long * __cdecl FUN_71037f7ba0(long * param_1, uint param_2)


long * FUN_71037f7ba0(long *param_1,uint param_2)

{
  ulong uVar1;
  logic_error *this;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = (ulong)param_2;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar6 = uVar4 - 1;
    if ((uVar6 & uVar4) == 0) {
      uVar3 = uVar6 & uVar2;
    }
    else {
      uVar3 = uVar2;
      if (uVar4 <= uVar2) {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar2 / uVar4;
        }
        uVar3 = uVar2 - uVar3 * uVar4;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar3 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if ((uVar6 & uVar4) == 0) {
        do {
          uVar4 = plVar5[1];
          if (uVar4 != uVar2 && (uVar4 & uVar6) != uVar3) break;
          if ((uVar4 == uVar2) && (*(uint *)(plVar5 + 2) == param_2)) goto LAB_71037f7ca8;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar2) {
            if (*(uint *)(plVar5 + 2) == param_2) {
LAB_71037f7ca8:
              return plVar5 + 3;
            }
          }
          else {
            if (uVar4 <= uVar6) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar6 / uVar4;
              }
              uVar6 = uVar6 - uVar1 * uVar4;
            }
            if (uVar6 != uVar3) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  this = (logic_error *)__cxa_allocate_exception(0x10);
  std::logic_error::logic_error(this,"unordered_map::at: key not found");
  *(undefined **)this = &DAT_7107960010;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::out_of_range::typeinfo,std::out_of_range::~out_of_range);
}

