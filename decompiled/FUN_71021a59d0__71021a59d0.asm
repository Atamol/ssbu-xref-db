// addr:      71021a59d0
// offset:    0x21a59d0
// name:      FUN_71021a59d0
// mangled:   
// size:      408

71021a59d0  sub sp,sp,#0x40
71021a59d4  str x21,[sp, #0x10]
71021a59d8  stp x20,x19,[sp, #0x20]
71021a59dc  stp x29,x30,[sp, #0x30]
71021a59e0  add x29,sp,#0x30
71021a59e4  mov w21,w2
71021a59e8  mov x19,x1
71021a59ec  mov x20,x0
71021a59f0  bl 0x7101ff9450
71021a59f4  ldr x9,[x19, #0x20]
71021a59f8  cmp w21,#0x1
71021a59fc  b.lt 0x71021a5a20
71021a5a00  ldr x8,[x9]
71021a5a04  ldr x10,[x19, #0x10]
71021a5a08  add x8,x8,w21, SXTW  #0x4
71021a5a0c  adrp x9,0x7104862000
71021a5a10  add x9,x9,#0x960
71021a5a14  cmp x8,x10
71021a5a18  csel x1,x8,x9,cc
71021a5a1c  b 0x71021a5a88
71021a5a20  mov w8,#0xb9d8
71021a5a24  movk w8,#0xfff0, LSL #16
71021a5a28  add w10,w8,#0x1
71021a5a2c  cmp w21,w10
71021a5a30  b.ge 0x71021a5a48
71021a5a34  cmp w21,w8
71021a5a38  b.ne 0x71021a5a54
71021a5a3c  ldr x8,[x19, #0x18]
71021a5a40  add x1,x8,#0x40
71021a5a44  b 0x71021a5a88
71021a5a48  ldr x8,[x19, #0x10]
71021a5a4c  add x1,x8,w21, SXTW  #0x4
71021a5a50  b 0x71021a5a88
71021a5a54  ldr x9,[x9]
71021a5a58  ldr w10,[x9, #0x8]
71021a5a5c  adrp x1,0x7104862000
71021a5a60  add x1,x1,#0x960
71021a5a64  cmp w10,#0x16
71021a5a68  b.eq 0x71021a5a88
71021a5a6c  ldr x9,[x9]
71021a5a70  sub w8,w8,w21
71021a5a74  add x10,x9,w8, SXTW  #0x4
71021a5a78  ldrb w9,[x9, #0xa]
71021a5a7c  add x10,x10,#0x10
71021a5a80  cmp w8,w9
71021a5a84  csel x1,x1,x10,gt
71021a5a88  adrp x2,0x7104385000
71021a5a8c  add x2,x2,#0x52
71021a5a90  mov x0,x19
71021a5a94  bl 0x71038f4d40
71021a5a98  ldr x8,[x19, #0x10]
71021a5a9c  sub x21,x8,#0x10
71021a5aa0  ldur w8,[x8, #-0x8]
71021a5aa4  cmp w8,#0x13
71021a5aa8  b.ne 0x71021a5ab4
71021a5aac  ldr x8,[x21]
71021a5ab0  b 0x71021a5b14
71021a5ab4  ldr w8,[x21, #0x8]
71021a5ab8  cmp w8,#0x13
71021a5abc  b.eq 0x71021a5aac
71021a5ac0  cmp w8,#0x3
71021a5ac4  b.eq 0x71021a5b38
71021a5ac8  and w8,w8,#0xf
71021a5acc  cmp w8,#0x4
71021a5ad0  b.ne 0x71021a5b10
71021a5ad4  ldr x8,[x21]
71021a5ad8  add x0,x8,#0x18
71021a5adc  mov x1,sp
71021a5ae0  bl 0x7103907f00
71021a5ae4  ldr x8,[x21]
71021a5ae8  ldrb w9,[x8, #0x8]
71021a5aec  cmp w9,#0x4
71021a5af0  b.ne 0x71021a5afc
71021a5af4  ldrb w8,[x8, #0xb]
71021a5af8  b 0x71021a5b00
71021a5afc  ldr x8,[x8, #0x10]
71021a5b00  add x8,x8,#0x1
71021a5b04  mov x21,sp
71021a5b08  cmp x0,x8
71021a5b0c  b.eq 0x71021a5ab4
71021a5b10  mov x8,xzr
71021a5b14  str x8,[x20, #0x30]
71021a5b18  ldr x8,[x19, #0x10]
71021a5b1c  sub x8,x8,#0x10
71021a5b20  str x8,[x19, #0x10]
71021a5b24  ldp x29,x30,[sp, #0x30]
71021a5b28  ldp x20,x19,[sp, #0x20]
71021a5b2c  ldr x21,[sp, #0x10]
71021a5b30  add sp,sp,#0x40
71021a5b34  ret
71021a5b38  ldr s0,[x21]
71021a5b3c  adrp x8,0x7104472000
71021a5b40  ldr s1,[x8, #0x8f4]
71021a5b44  frintm s0,s0
71021a5b48  fcmp s0,s1
71021a5b4c  b.lt 0x71021a5b10
71021a5b50  adrp x8,0x7104472000
71021a5b54  ldr s1,[x8, #0xe68]
71021a5b58  fcmp s0,s1
71021a5b5c  b.pl 0x71021a5b10
71021a5b60  fcvtzs x8,s0
71021a5b64  b 0x71021a5b14
