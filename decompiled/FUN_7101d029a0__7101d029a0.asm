// addr:      7101d029a0
// offset:    0x1d029a0
// name:      FUN_7101d029a0
// mangled:   
// size:      420

7101d029a0  sub sp,sp,#0x80
7101d029a4  stp x28,x27,[sp, #0x20]
7101d029a8  stp x26,x25,[sp, #0x30]
7101d029ac  stp x24,x23,[sp, #0x40]
7101d029b0  stp x22,x21,[sp, #0x50]
7101d029b4  stp x20,x19,[sp, #0x60]
7101d029b8  stp x29,x30,[sp, #0x70]
7101d029bc  add x29,sp,#0x70
7101d029c0  ldr x23,[x0, #0x198]
7101d029c4  add x26,x0,#0x1a0
7101d029c8  cmp x23,x26
7101d029cc  b.eq 0x7101d02b24
7101d029d0  eor w8,w2,#0x1
7101d029d4  mov w19,w2
7101d029d8  mov w20,w1
7101d029dc  mov x21,x0
7101d029e0  and w27,w2,#0x1
7101d029e4  adrp x22,0x7104443000
7101d029e8  add x22,x22,#0x961
7101d029ec  and w8,w8,#0x1
7101d029f0  str w8,[sp, #0xc]
7101d029f4  adrp x28,0x710523d000
7101d029f8  add x28,x28,#0x9a8
7101d029fc  ldr x24,[x23, #0x20]
7101d02a00  cmp w24,w20
7101d02a04  b.ge 0x7101d02ac8
7101d02a08  ldr x9,[x21, #0x190]
7101d02a0c  ldr x10,[x9, #0x1b8]
7101d02a10  cbz x10,0x7101d02a80
7101d02a14  ldr w8,[x23, #0x1c]
7101d02a18  add x11,x9,#0x1b8
7101d02a1c  mov x9,x11
7101d02a20  ldr w12,[x10, #0x20]
7101d02a24  cmp w12,w8
7101d02a28  cset w12,lt
7101d02a2c  csel x9,x9,x10,lt
7101d02a30  ldr x10,[x10, w12, UXTW #0x3]
7101d02a34  cbnz x10,0x7101d02a20
7101d02a38  cmp x9,x11
7101d02a3c  b.eq 0x7101d02a80
7101d02a40  ldr w10,[x9, #0x20]
7101d02a44  cmp w10,w8
7101d02a48  b.gt 0x7101d02a80
7101d02a4c  ldr x25,[x9, #0x28]
7101d02a50  cbz x25,0x7101d02a80
7101d02a54  ldr x8,[x25]
7101d02a58  ldr x8,[x8, #0x1f8]
7101d02a5c  and w1,w19,#0x1
7101d02a60  mov x0,x25
7101d02a64  blr x8
7101d02a68  ldr x8,[x25]
7101d02a6c  ldr x8,[x8, #0x388]
7101d02a70  ldr w1,[sp, #0xc]
7101d02a74  mov x0,x25
7101d02a78  mov w2,wzr
7101d02a7c  blr x8
7101d02a80  ldr x8,[x21, #0x188]
7101d02a84  ldr x8,[x8]
7101d02a88  lsr x3,x24,#0x20
7101d02a8c  mov x1,x22
7101d02a90  mov w2,w24
7101d02a94  add x0,x8,#0x8
7101d02a98  add x8,sp,#0x10
7101d02a9c  bl 0x7103776910
7101d02aa0  ldr x0,[sp, #0x18]
7101d02aa4  ldr x8,[x0]
7101d02aa8  cbz x8,0x7101d02abc
7101d02aac  ldrb w9,[x8, #0x58]
7101d02ab0  and w9,w9,#0xfe
7101d02ab4  orr w9,w9,w27
7101d02ab8  strb w9,[x8, #0x58]
7101d02abc  stp x28,xzr,[sp, #0x10]
7101d02ac0  cbz x0,0x7101d02ac8
7101d02ac4  bl 0x710392eb40
7101d02ac8  ldr x8,[x23, #0x8]
7101d02acc  cbz x8,0x7101d02ae0
7101d02ad0  mov x23,x8
7101d02ad4  ldr x8,[x8]
7101d02ad8  cbnz x8,0x7101d02ad0
7101d02adc  b 0x7101d02b0c
7101d02ae0  mov x8,x23
7101d02ae4  ldr x9,[x8, #0x10]!
7101d02ae8  ldr x10,[x9]
7101d02aec  cmp x10,x23
7101d02af0  b.eq 0x7101d02b18
7101d02af4  ldr x9,[x8]
7101d02af8  mov x8,x9
7101d02afc  ldr x23,[x8, #0x10]!
7101d02b00  ldr x10,[x23]
7101d02b04  cmp x10,x9
7101d02b08  b.ne 0x7101d02af4
7101d02b0c  cmp x23,x26
7101d02b10  b.ne 0x7101d029fc
7101d02b14  b 0x7101d02b24
7101d02b18  mov x23,x9
7101d02b1c  cmp x23,x26
7101d02b20  b.ne 0x7101d029fc
7101d02b24  ldp x29,x30,[sp, #0x70]
7101d02b28  ldp x20,x19,[sp, #0x60]
7101d02b2c  ldp x22,x21,[sp, #0x50]
7101d02b30  ldp x24,x23,[sp, #0x40]
7101d02b34  ldp x26,x25,[sp, #0x30]
7101d02b38  ldp x28,x27,[sp, #0x20]
7101d02b3c  add sp,sp,#0x80
7101d02b40  ret
