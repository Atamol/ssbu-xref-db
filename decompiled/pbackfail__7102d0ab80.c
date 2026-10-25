// addr:      7102d0ab80
// offset:    0x2d0ab80
// name:      std::stringbuf::pbackfail
// mangled:   _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi
// signature: uint __thiscall pbackfail(stringbuf * this, uint param_1)


/* std::stringbuf::pbackfail(int) */

uint __thiscall std::stringbuf::pbackfail(stringbuf *this,uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar2) {
    *(ulong *)(this + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  uVar2 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x10) < uVar2) {
    if (param_1 == 0xffffffff) {
      *(ulong *)(this + 0x18) = uVar2 - 1;
      *(ulong *)(this + 0x20) = uVar1;
      return 0;
    }
    if ((((byte)this[0x60] >> 4 & 1) != 0) || ((uint)*(byte *)(uVar2 - 1) == (param_1 & 0xff))) {
      *(undefined1 **)(this + 0x18) = (undefined1 *)(uVar2 - 1);
      *(ulong *)(this + 0x20) = uVar1;
      *(undefined1 *)(uVar2 - 1) = (char)param_1;
      return param_1;
    }
  }
  return 0xffffffff;
}

