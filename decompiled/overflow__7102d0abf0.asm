// addr:      7102d0abf0
// offset:    0x2d0abf0
// name:      std::stringbuf::overflow
// mangled:   _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi
// size:      408

7102d0abf0  sub sp,sp,#0x70
7102d0abf4  stp x28,x27,[sp, #0x10]
7102d0abf8  stp x26,x25,[sp, #0x20]
7102d0abfc  stp x24,x23,[sp, #0x30]
7102d0ac00  stp x22,x21,[sp, #0x40]
7102d0ac04  stp x20,x19,[sp, #0x50]
7102d0ac08  stp x29,x30,[sp, #0x60]
7102d0ac0c  add x29,sp,#0x60
7102d0ac10  cmn w1,#0x1
7102d0ac14  b.eq 0x7102d0ac40
7102d0ac18  ldp x24,x8,[x0, #0x30]
7102d0ac1c  mov w19,w1
7102d0ac20  ldp x22,x23,[x0, #0x10]
7102d0ac24  mov x20,x0
7102d0ac28  cmp x24,x8
7102d0ac2c  b.eq 0x7102d0ac48
7102d0ac30  mov x26,x20
7102d0ac34  ldr x10,[x26, #0x58]!
7102d0ac38  add x25,x26,#0x8
7102d0ac3c  b 0x7102d0acd8
7102d0ac40  mov w0,wzr
7102d0ac44  b 0x7102d0ad38
7102d0ac48  mov x25,x20
7102d0ac4c  ldrb w8,[x25, #0x60]!
7102d0ac50  tbnz w8,#0x4,0x7102d0ac5c
7102d0ac54  mov w0,#0xffffffff
7102d0ac58  b 0x7102d0ad38
7102d0ac5c  mov x26,x20
7102d0ac60  ldr x27,[x26, #0x58]!
7102d0ac64  ldur x28,[x26, #-0x30]
7102d0ac68  sub x21,x26,#0x18
7102d0ac6c  mov x0,x21
7102d0ac70  mov w1,wzr
7102d0ac74  bl 0x71039c6710
7102d0ac78  ldurb w8,[x26, #-0x18]
7102d0ac7c  tbnz w8,#0x0,0x7102d0ac88
7102d0ac80  mov w1,#0x16
7102d0ac84  b 0x7102d0ac94
7102d0ac88  ldr x8,[x21]
7102d0ac8c  and x8,x8,#-0x2
7102d0ac90  sub x1,x8,#0x1
7102d0ac94  mov x0,x21
7102d0ac98  mov w2,wzr
7102d0ac9c  sub x24,x24,x28
7102d0aca0  sub x27,x27,x28
7102d0aca4  bl 0x71039c67a0
7102d0aca8  ldrb w8,[x21]
7102d0acac  tbnz w8,#0x0,0x7102d0acbc
7102d0acb0  add x9,x21,#0x1
7102d0acb4  lsr x8,x8,#0x1
7102d0acb8  b 0x7102d0acc0
7102d0acbc  ldp x8,x9,[x20, #0x48]
7102d0acc0  add x8,x9,x8
7102d0acc4  add x24,x9,x24
7102d0acc8  add x10,x9,x27
7102d0accc  str x9,[x20, #0x28]
7102d0acd0  stp x24,x8,[x20, #0x30]
7102d0acd4  str x10,[x20, #0x58]
7102d0acd8  add x9,x24,#0x1
7102d0acdc  cmp x9,x10
7102d0ace0  add x10,sp,#0x8
7102d0ace4  str x9,[sp, #0x8]
7102d0ace8  csel x10,x26,x10,cc
7102d0acec  ldr x10,[x10]
7102d0acf0  str x10,[x26]
7102d0acf4  ldrb w11,[x25]
7102d0acf8  tbz w11,#0x3,0x7102d0ad24
7102d0acfc  mov x12,x20
7102d0ad00  ldrb w13,[x12, #0x40]!
7102d0ad04  sub x11,x23,x22
7102d0ad08  tbnz w13,#0x0,0x7102d0ad14
7102d0ad0c  add x12,x12,#0x1
7102d0ad10  b 0x7102d0ad18
7102d0ad14  ldr x12,[x20, #0x50]
7102d0ad18  add x11,x12,x11
7102d0ad1c  stp x12,x11,[x20, #0x10]
7102d0ad20  str x10,[x20, #0x20]
7102d0ad24  cmp x24,x8
7102d0ad28  b.eq 0x7102d0ad58
7102d0ad2c  and w0,w19,#0xff
7102d0ad30  str x9,[x20, #0x30]
7102d0ad34  strb w19,[x24]
7102d0ad38  ldp x29,x30,[sp, #0x60]
7102d0ad3c  ldp x20,x19,[sp, #0x50]
7102d0ad40  ldp x22,x21,[sp, #0x40]
7102d0ad44  ldp x24,x23,[sp, #0x30]
7102d0ad48  ldp x26,x25,[sp, #0x20]
7102d0ad4c  ldp x28,x27,[sp, #0x10]
7102d0ad50  add sp,sp,#0x70
7102d0ad54  ret
7102d0ad58  ldr x8,[x20]
7102d0ad5c  and w1,w19,#0xff
7102d0ad60  mov x0,x20
7102d0ad64  ldp x29,x30,[sp, #0x60]
7102d0ad68  ldr x2,[x8, #0x68]
7102d0ad6c  ldp x20,x19,[sp, #0x50]
7102d0ad70  ldp x22,x21,[sp, #0x40]
7102d0ad74  ldp x24,x23,[sp, #0x30]
7102d0ad78  ldp x26,x25,[sp, #0x20]
7102d0ad7c  ldp x28,x27,[sp, #0x10]
7102d0ad80  add sp,sp,#0x70
7102d0ad84  br x2
