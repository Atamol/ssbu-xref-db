// addr:      71020b89a0
// offset:    0x20b89a0
// name:      FUN_71020b89a0
// mangled:   
// size:      364

71020b89a0  sub sp,sp,#0xb0
71020b89a4  str x21,[sp, #0x80]
71020b89a8  stp x20,x19,[sp, #0x90]
71020b89ac  stp x29,x30,[sp, #0xa0]
71020b89b0  add x29,sp,#0xa0
71020b89b4  ldr x8,[x0, #0x18]
71020b89b8  ldr x8,[x8, #0x18]
71020b89bc  mov x19,x0
71020b89c0  cmp x8,#0x1
71020b89c4  b.lt 0x71020b89d0
71020b89c8  mov x0,x19
71020b89cc  bl 0x71038fec40
71020b89d0  mov x0,x19
71020b89d4  bl 0x710391e050
71020b89d8  ldr x8,[x19, #0x10]
71020b89dc  mov w9,#0x45
71020b89e0  str w9,[x8, #0x8]
71020b89e4  str x0,[x8]
71020b89e8  ldr x8,[x19, #0x10]
71020b89ec  mov x1,x0
71020b89f0  mov w3,#0x2
71020b89f4  mov x0,x19
71020b89f8  mov w2,wzr
71020b89fc  mov w20,#0x2
71020b8a00  add x8,x8,#0x10
71020b8a04  str x8,[x19, #0x10]
71020b8a08  bl 0x710391d4c0
71020b8a0c  mov w8,#0xa
71020b8a10  str w8,[sp, #0x8]
71020b8a14  mov x8,#0xb312
71020b8a18  movk x8,#0x14e8, LSL #16
71020b8a1c  movk x8,#0x10, LSL #32
71020b8a20  mov x9,#-0x10000
71020b8a24  stp xzr,xzr,[sp, #0x48]
71020b8a28  movk x9,#0x5000, LSL #16
71020b8a2c  stp x8,xzr,[sp, #0x10]
71020b8a30  mov x8,#0x7a80
71020b8a34  movk x8,#0xfb99, LSL #16
71020b8a38  movk x8,#0x7, LSL #32
71020b8a3c  orr w21,wzr,#0x3f800000
71020b8a40  str x9,[sp, #0x20]
71020b8a44  strb wzr,[sp, #0x28]
71020b8a48  mov x0,sp
71020b8a4c  str wzr,[sp, #0x2c]
71020b8a50  mov w2,#0x1
71020b8a54  mov x1,x19
71020b8a58  stp x8,x8,[sp, #0x30]
71020b8a5c  adrp x8,0x71052a8000
71020b8a60  str w21,[sp, #0x40]
71020b8a64  strh wzr,[sp, #0x44]
71020b8a68  ldr x8,[x8, #0xa80]
71020b8a6c  ldr q0,[x8]
71020b8a70  mov x8,#-0xffff00000001
71020b8a74  movk x8,#0x3f80, LSL #48
71020b8a78  str x8,[sp, #0x70]
71020b8a7c  adrp x8,0x71050b4000
71020b8a80  add x8,x8,#0x648
71020b8a84  str x8,[sp]
71020b8a88  str q0,[sp, #0x60]
71020b8a8c  bl 0x71020b6200
71020b8a90  ldr x8,[x19, #0x10]
71020b8a94  adrp x9,0x71020b8000
71020b8a98  add x9,x9,#0xb10
71020b8a9c  str x9,[x8]
71020b8aa0  str w20,[x8, #0x8]
71020b8aa4  ldr x8,[x19, #0x10]
71020b8aa8  add x9,x8,#0x10
71020b8aac  sub x1,x8,#0x10
71020b8ab0  adrp x2,0x710430c000
71020b8ab4  add x2,x2,#0x66a
71020b8ab8  mov x0,x19
71020b8abc  str x9,[x19, #0x10]
71020b8ac0  bl 0x71038f5390
71020b8ac4  ldr x8,[x19, #0x10]
71020b8ac8  orr w9,wzr,#0x3
71020b8acc  str w9,[x8, #0x8]
71020b8ad0  str w21,[x8]
71020b8ad4  ldr x8,[x19, #0x10]
71020b8ad8  add x9,x8,#0x10
71020b8adc  sub x1,x8,#0x10
71020b8ae0  adrp x2,0x710433b000
71020b8ae4  add x2,x2,#0x3a0
71020b8ae8  mov x0,x19
71020b8aec  str x9,[x19, #0x10]
71020b8af0  bl 0x71038f5390
71020b8af4  ldp x29,x30,[sp, #0xa0]
71020b8af8  ldr x21,[sp, #0x80]
71020b8afc  ldp x20,x19,[sp, #0x90]
71020b8b00  mov w0,#0x1
71020b8b04  add sp,sp,#0xb0
71020b8b08  ret
