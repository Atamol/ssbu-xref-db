// addr:      7102d0ab20
// offset:    0x2d0ab20
// name:      std::stringbuf::underflow
// mangled:   _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv
// size:      88

7102d0ab20  ldr x8,[x0, #0x58]
7102d0ab24  ldr x9,[x0, #0x30]
7102d0ab28  cmp x8,x9
7102d0ab2c  b.cs 0x7102d0ab38
7102d0ab30  mov x8,x9
7102d0ab34  str x9,[x0, #0x58]
7102d0ab38  ldrb w9,[x0, #0x60]
7102d0ab3c  tbnz w9,#0x3,0x7102d0ab48
7102d0ab40  mov w0,#0xffffffff
7102d0ab44  ret
7102d0ab48  ldr x9,[x0, #0x20]
7102d0ab4c  cmp x9,x8
7102d0ab50  b.cs 0x7102d0ab5c
7102d0ab54  mov x9,x8
7102d0ab58  str x8,[x0, #0x20]
7102d0ab5c  ldr x8,[x0, #0x18]
7102d0ab60  cmp x8,x9
7102d0ab64  b.cs 0x7102d0ab70
7102d0ab68  ldrb w0,[x8]
7102d0ab6c  ret
7102d0ab70  mov w0,#0xffffffff
7102d0ab74  ret
