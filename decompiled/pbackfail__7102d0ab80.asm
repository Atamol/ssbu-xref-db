// addr:      7102d0ab80
// offset:    0x2d0ab80
// name:      std::stringbuf::pbackfail
// mangled:   _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi
// size:      112

7102d0ab80  ldr x8,[x0, #0x58]
7102d0ab84  ldr x9,[x0, #0x30]
7102d0ab88  cmp x8,x9
7102d0ab8c  b.cs 0x7102d0ab98
7102d0ab90  mov x8,x9
7102d0ab94  str x9,[x0, #0x58]
7102d0ab98  ldp x10,x9,[x0, #0x10]
7102d0ab9c  cmp x10,x9
7102d0aba0  b.cs 0x7102d0abc0
7102d0aba4  cmn w1,#0x1
7102d0aba8  b.eq 0x7102d0abcc
7102d0abac  ldrb w10,[x0, #0x60]
7102d0abb0  tbnz w10,#0x4,0x7102d0abdc
7102d0abb4  ldrb w10,[x9, #-0x1]!
7102d0abb8  cmp w10,w1, UXTB 
7102d0abbc  b.eq 0x7102d0abe0
7102d0abc0  mov w1,#0xffffffff
7102d0abc4  mov w0,w1
7102d0abc8  ret
7102d0abcc  sub x9,x9,#0x1
7102d0abd0  stp x9,x8,[x0, #0x18]
7102d0abd4  mov w0,wzr
7102d0abd8  ret
7102d0abdc  sub x9,x9,#0x1
7102d0abe0  stp x9,x8,[x0, #0x18]
7102d0abe4  mov w0,w1
7102d0abe8  strb w1,[x9]
7102d0abec  ret
