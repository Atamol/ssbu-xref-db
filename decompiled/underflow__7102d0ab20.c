// addr:      7102d0ab20
// offset:    0x2d0ab20
// name:      std::stringbuf::underflow
// mangled:   _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv
// signature: ulong __thiscall underflow(stringbuf * this)


/* std::stringbuf::underflow() */

ulong __thiscall std::stringbuf::underflow(stringbuf *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(this + 0x30);
  pbVar1 = *(byte **)(this + 0x58);
  if (*(byte **)(this + 0x58) < pbVar2) {
    *(byte **)(this + 0x58) = pbVar2;
    pbVar1 = pbVar2;
  }
  if (((byte)this[0x60] >> 3 & 1) == 0) {
    return 0xffffffff;
  }
  pbVar2 = *(byte **)(this + 0x20);
  if (*(byte **)(this + 0x20) < pbVar1) {
    *(byte **)(this + 0x20) = pbVar1;
    pbVar2 = pbVar1;
  }
  if (*(byte **)(this + 0x18) < pbVar2) {
    return (ulong)**(byte **)(this + 0x18);
  }
  return 0xffffffff;
}

