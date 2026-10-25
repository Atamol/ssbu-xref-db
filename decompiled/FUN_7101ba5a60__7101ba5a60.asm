// addr:      7101ba5a60
// offset:    0x1ba5a60
// name:      FUN_7101ba5a60
// mangled:   
// size:      356

7101ba5a60  stp x20,x19,[sp, #-0x20]!
7101ba5a64  stp x29,x30,[sp, #0x10]
7101ba5a68  add x29,sp,#0x10
7101ba5a6c  ldp x8,x9,[x1]
7101ba5a70  mov x19,x0
7101ba5a74  mov x11,x8
7101ba5a78  cmp x8,x9
7101ba5a7c  b.eq 0x7101ba5b28
7101ba5a80  mov x10,#-0x3f00000000000000
7101ba5a84  and x12,x2,#-0x100000000000000
7101ba5a88  cmp x12,x10
7101ba5a8c  b.ne 0x7101ba5ad8
7101ba5a90  and x12,x2,#0xffffffffff
7101ba5a94  cbz x12,0x7101ba5ad8
7101ba5a98  ldr x12,[x11]
7101ba5a9c  and x14,x12,#-0x100000000000000
7101ba5aa0  and x13,x12,#0xffffffffff
7101ba5aa4  eor x12,x12,x2
7101ba5aa8  cmp x14,x10
7101ba5aac  ccmp x13,#0x0,#0x4,eq
7101ba5ab0  and x12,x12,#0xffffffffff
7101ba5ab4  ccmp x12,#0x0,#0x0,ne
7101ba5ab8  b.eq 0x7101ba5b28
7101ba5abc  add x11,x11,#0x8
7101ba5ac0  cmp x9,x11
7101ba5ac4  b.ne 0x7101ba5a98
7101ba5ac8  mov x11,x9
7101ba5acc  cmp x9,x11
7101ba5ad0  b.ne 0x7101ba5b30
7101ba5ad4  b 0x7101ba5bb8
7101ba5ad8  ldr x12,[x11]
7101ba5adc  and x13,x12,#0xffffffffff
7101ba5ae0  and x12,x12,#-0x100000000000000
7101ba5ae4  cmp x12,x10
7101ba5ae8  ccmp x13,#0x0,#0x4,eq
7101ba5aec  b.eq 0x7101ba5b28
7101ba5af0  add x11,x8,#0x8
7101ba5af4  cmp x9,x11
7101ba5af8  b.eq 0x7101ba5b24
7101ba5afc  ldr x12,[x11], #0x8
7101ba5b00  and x13,x12,#-0x100000000000000
7101ba5b04  cmp x13,x10
7101ba5b08  b.ne 0x7101ba5b14
7101ba5b0c  and x12,x12,#0xffffffffff
7101ba5b10  cbnz x12,0x7101ba5af4
7101ba5b14  sub x11,x11,#0x8
7101ba5b18  cmp x9,x11
7101ba5b1c  b.ne 0x7101ba5b30
7101ba5b20  b 0x7101ba5bb8
7101ba5b24  mov x11,x9
7101ba5b28  cmp x9,x11
7101ba5b2c  b.eq 0x7101ba5bb8
7101ba5b30  sub x8,x11,x8
7101ba5b34  mov w9,#0x8e39
7101ba5b38  movk w9,#0x38e3, LSL #16
7101ba5b3c  lsr x20,x8,#0x3
7101ba5b40  smull x8,w20,w9
7101ba5b44  lsr x9,x8,#0x3f
7101ba5b48  asr x8,x8,#0x23
7101ba5b4c  add w8,w8,w9
7101ba5b50  mov w9,#0x1518
7101ba5b54  scvtf d0,w8
7101ba5b58  add x0,x19,x9
7101ba5b5c  fcvtms w8,d0
7101ba5b60  cmp w8,#0x2
7101ba5b64  csel w8,wzr,w8,hi
7101ba5b68  add w3,w8,#0x1
7101ba5b6c  adrp x1,0x710434a000
7101ba5b70  add x1,x1,#0x131
7101ba5b74  mov w2,#0x1
7101ba5b78  str w8,[x19, #0x1538]
7101ba5b7c  bl 0x710377a280
7101ba5b80  ldr w8,[x19, #0x1538]
7101ba5b84  cmp w8,#0x2
7101ba5b88  b.eq 0x7101ba5ba0
7101ba5b8c  cmp w8,#0x1
7101ba5b90  b.eq 0x7101ba5ba8
7101ba5b94  cbnz w8,0x7101ba5bb4
7101ba5b98  add x0,x19,#0x708
7101ba5b9c  b 0x7101ba5bac
7101ba5ba0  add x0,x19,#0x728
7101ba5ba4  b 0x7101ba5bac
7101ba5ba8  add x0,x19,#0x718
7101ba5bac  fmov s0,0x3f800000
7101ba5bb0  bl 0x710377aee0
7101ba5bb4  str w20,[x19, #0x1548]
7101ba5bb8  ldp x29,x30,[sp, #0x10]
7101ba5bbc  ldp x20,x19,[sp], #0x20
7101ba5bc0  ret
