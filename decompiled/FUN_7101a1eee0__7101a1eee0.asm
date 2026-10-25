// addr:      7101a1eee0
// offset:    0x1a1eee0
// name:      FUN_7101a1eee0
// mangled:   
// size:      464

7101a1eee0  str x23,[sp, #-0x40]!
7101a1eee4  stp x22,x21,[sp, #0x10]
7101a1eee8  stp x20,x19,[sp, #0x20]
7101a1eeec  stp x29,x30,[sp, #0x30]
7101a1eef0  add x29,sp,#0x30
7101a1eef4  mov x21,x0
7101a1eef8  ldr x0,[x1, #0x8]
7101a1eefc  mov x19,x1
7101a1ef00  mov x1,xzr
7101a1ef04  mov w20,w2
7101a1ef08  bl 0x7101a06920
7101a1ef0c  ldr x8,[x19, #0x8]
7101a1ef10  orr w9,wzr,#0x3
7101a1ef14  str w9,[x8, #0x1f4]
7101a1ef18  ldr x8,[x19, #0x8]
7101a1ef1c  ldr w9,[x8, #0x150]
7101a1ef20  add w9,w9,#0x1
7101a1ef24  str w9,[x8, #0x1f0]
7101a1ef28  ldr x0,[x19, #0x8]
7101a1ef2c  mov w1,#0x2
7101a1ef30  bl 0x7101a028b0
7101a1ef34  ldr x8,[x19, #0x8]
7101a1ef38  ldr x22,[x8, #0x5e8]
7101a1ef3c  strb wzr,[x8, #0x211]
7101a1ef40  ldr w8,[x22, #0x21c]
7101a1ef44  cmp w8,#0x1
7101a1ef48  str wzr,[x22, #0x250]
7101a1ef4c  b.ne 0x7101a1ef7c
7101a1ef50  add x0,x22,#0x88
7101a1ef54  adrp x1,0x71042b3000
7101a1ef58  add x1,x1,#0xd87
7101a1ef5c  mov w2,#0x1
7101a1ef60  mov w3,wzr
7101a1ef64  bl 0x710377a280
7101a1ef68  ldr w2,[x22, #0x250]
7101a1ef6c  add x0,x22,#0x68
7101a1ef70  adrp x1,0x710439d000
7101a1ef74  add x1,x1,#0xc8e
7101a1ef78  bl 0x7103778430
7101a1ef7c  ldr x8,[x19, #0x8]
7101a1ef80  strb wzr,[x8, #0x6bd]
7101a1ef84  ldr x8,[x19, #0x8]
7101a1ef88  ldr x8,[x8, #0x5e8]
7101a1ef8c  ldr x0,[x8, #0x10]
7101a1ef90  adrp x1,0x710425e000
7101a1ef94  add x1,x1,#0xd91
7101a1ef98  bl 0x7103778760
7101a1ef9c  ldr x8,[x19, #0x8]
7101a1efa0  ldr x23,[x8, #0x5e8]
7101a1efa4  ldr x0,[x23, #0x10]
7101a1efa8  adrp x22,0x710433a000
7101a1efac  add x22,x22,#0x9c5
7101a1efb0  mov x1,x22
7101a1efb4  bl 0x7103778760
7101a1efb8  ldr x0,[x23, #0xf0]
7101a1efbc  mov x1,x22
7101a1efc0  bl 0x7103778760
7101a1efc4  ldr x0,[x23, #0x100]
7101a1efc8  mov x1,x22
7101a1efcc  bl 0x7103778760
7101a1efd0  mov x0,x21
7101a1efd4  mov x1,x19
7101a1efd8  bl 0x7101a1f530
7101a1efdc  ldr x0,[x19, #0x8]
7101a1efe0  mov w1,#0xffffffff
7101a1efe4  bl 0x7101a024c0
7101a1efe8  ldr x8,[x19, #0x8]
7101a1efec  ldr x21,[x8, #0x5e8]
7101a1eff0  strb wzr,[x8, #0x2e0]
7101a1eff4  ldr x0,[x21, #0x40]
7101a1eff8  fmov s0,0x3f800000
7101a1effc  adrp x1,0x7104349000
7101a1f000  add x1,x1,#0xd11
7101a1f004  str wzr,[x21, #0x254]
7101a1f008  bl 0x7103778300
7101a1f00c  ldr x8,[x21, #0xa0]
7101a1f010  ldr x0,[x8, #0x10]
7101a1f014  cbz x0,0x7101a1f02c
7101a1f018  add x1,sp,#0xc
7101a1f01c  mov w2,wzr
7101a1f020  mov w3,wzr
7101a1f024  str wzr,[sp, #0xc]
7101a1f028  bl 0x71037a2270
7101a1f02c  ldr x8,[x19, #0x8]
7101a1f030  ldr x9,[x8, #0x5e8]
7101a1f034  ldr x9,[x9, #0x80]
7101a1f038  ldr x0,[x9, #0x10]
7101a1f03c  cbz x0,0x7101a1f058
7101a1f040  adrp x1,0x7104753000
7101a1f044  add x1,x1,#0xea0
7101a1f048  mov w2,#0xffffffff
7101a1f04c  mov w3,#0x1
7101a1f050  bl 0x71037a2270
7101a1f054  ldr x8,[x19, #0x8]
7101a1f058  mov w9,#0x1
7101a1f05c  str w9,[x8, #0x5d0]
7101a1f060  ldrb w9,[x8, #0x6b9]
7101a1f064  cbnz w9,0x7101a1f070
7101a1f068  ldr w9,[x8, #0x1f8]
7101a1f06c  cbz w9,0x7101a1f080
7101a1f070  ldr x9,[x8, #0x678]
7101a1f074  cmp x9,#0x0
7101a1f078  cset w9,ne
7101a1f07c  and w20,w9,w20
7101a1f080  ldr x0,[x8, #0x5e8]
7101a1f084  and w2,w20,#0x1
7101a1f088  mov w1,#0x1
7101a1f08c  mov w20,#0x1
7101a1f090  bl 0x71019fff00
7101a1f094  ldr x8,[x19, #0x8]
7101a1f098  strb w20,[x8, #0x6ba]
7101a1f09c  ldp x29,x30,[sp, #0x30]
7101a1f0a0  ldp x20,x19,[sp, #0x20]
7101a1f0a4  ldp x22,x21,[sp, #0x10]
7101a1f0a8  ldr x23,[sp], #0x40
7101a1f0ac  ret
