// addr:      7102d94980
// offset:    0x2d94980
// name:      FUN_7102d94980
// mangled:   
// size:      408

7102d94980  str x19,[sp, #-0x20]!
7102d94984  stp x29,x30,[sp, #0x10]
7102d94988  add x29,sp,#0x10
7102d9498c  mov x19,x0
7102d94990  ldr x0,[x0, #0x40]
7102d94994  ldr x8,[x0]
7102d94998  ldr x8,[x8, #0x40]
7102d9499c  blr x8
7102d949a0  ldr x0,[x19, #0x38]
7102d949a4  ldr x8,[x0]
7102d949a8  ldr x8,[x8, #0x40]
7102d949ac  blr x8
7102d949b0  ldr x0,[x19, #0x48]
7102d949b4  ldr x8,[x0]
7102d949b8  ldr x8,[x8, #0x40]
7102d949bc  blr x8
7102d949c0  ldr x0,[x19, #0x50]
7102d949c4  ldr x8,[x0]
7102d949c8  ldr x8,[x8, #0x40]
7102d949cc  blr x8
7102d949d0  ldr x0,[x19, #0x58]
7102d949d4  ldr x8,[x0]
7102d949d8  ldr x8,[x8, #0x40]
7102d949dc  blr x8
7102d949e0  ldr x0,[x19, #0x60]
7102d949e4  ldr x8,[x0]
7102d949e8  ldr x8,[x8, #0x40]
7102d949ec  blr x8
7102d949f0  ldr x0,[x19, #0x68]
7102d949f4  ldr x8,[x0]
7102d949f8  ldr x8,[x8, #0x40]
7102d949fc  blr x8
7102d94a00  ldr x0,[x19, #0x70]
7102d94a04  ldr x8,[x0]
7102d94a08  ldr x8,[x8, #0x40]
7102d94a0c  blr x8
7102d94a10  ldr x0,[x19, #0x78]
7102d94a14  ldr x8,[x0]
7102d94a18  ldr x8,[x8, #0x40]
7102d94a1c  blr x8
7102d94a20  ldr x8,[x19, #0x8]
7102d94a24  ldr x9,[x8, #0x338]
7102d94a28  ldr x9,[x9]
7102d94a2c  ldr x0,[x9, #0x8]
7102d94a30  cbz x0,0x7102d94a4c
7102d94a34  ldr x8,[x0]
7102d94a38  ldr x8,[x8, #0x58]
7102d94a3c  mov w1,#0x1b
7102d94a40  mov w2,#0xffffffff
7102d94a44  blr x8
7102d94a48  ldr x8,[x19, #0x8]
7102d94a4c  ldr x8,[x8, #0x300]
7102d94a50  ldr x9,[x8, #0x18]
7102d94a54  ldp x8,x9,[x9]
7102d94a58  cmp x8,x9
7102d94a5c  b.eq 0x7102d94b0c
7102d94a60  mov x10,#0xdf99
7102d94a64  movk x10,#0xb569, LSL #16
7102d94a68  movk x10,#0x7, LSL #32
7102d94a6c  mov x11,x8
7102d94a70  ldr x12,[x11], #0x8
7102d94a74  ldr x13,[x12, #0xa0]
7102d94a78  and x13,x13,#0xffffffffff
7102d94a7c  cmp x13,x10
7102d94a80  b.eq 0x7102d94a90
7102d94a84  cmp x9,x11
7102d94a88  b.ne 0x7102d94a70
7102d94a8c  b 0x7102d94ab8
7102d94a90  ldr x10,[x12, #0x130]
7102d94a94  cbz x10,0x7102d94ab8
7102d94a98  ldp x0,x1,[x10]
7102d94a9c  adrp x2,0x71042a1000
7102d94aa0  add x2,x2,#0x67e
7102d94aa4  bl 0x71025f5420
7102d94aa8  ldr x8,[x19, #0x8]
7102d94aac  ldr x8,[x8, #0x300]
7102d94ab0  ldr x9,[x8, #0x18]
7102d94ab4  ldp x8,x9,[x9]
7102d94ab8  cmp x8,x9
7102d94abc  b.eq 0x7102d94b0c
7102d94ac0  mov x10,#0xbc1e
7102d94ac4  movk x10,#0xa462, LSL #16
7102d94ac8  movk x10,#0x7, LSL #32
7102d94acc  ldr x11,[x8], #0x8
7102d94ad0  ldr x12,[x11, #0xa0]
7102d94ad4  and x12,x12,#0xffffffffff
7102d94ad8  cmp x12,x10
7102d94adc  b.eq 0x7102d94aec
7102d94ae0  cmp x9,x8
7102d94ae4  b.ne 0x7102d94acc
7102d94ae8  b 0x7102d94b0c
7102d94aec  ldr x8,[x11, #0x130]
7102d94af0  cbz x8,0x7102d94b0c
7102d94af4  ldp x0,x1,[x8]
7102d94af8  adrp x2,0x710436a000
7102d94afc  add x2,x2,#0x805
7102d94b00  ldp x29,x30,[sp, #0x10]
7102d94b04  ldr x19,[sp], #0x20
7102d94b08  b 0x71025f55b0
7102d94b0c  ldp x29,x30,[sp, #0x10]
7102d94b10  ldr x19,[sp], #0x20
7102d94b14  ret
