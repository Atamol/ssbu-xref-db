// addr:      7101e6de20
// offset:    0x1e6de20
// name:      FUN_7101e6de20
// mangled:   
// size:      468

7101e6de20  sub sp,sp,#0x80
7101e6de24  stp x22,x21,[sp, #0x50]
7101e6de28  stp x20,x19,[sp, #0x60]
7101e6de2c  stp x29,x30,[sp, #0x70]
7101e6de30  add x29,sp,#0x70
7101e6de34  ldr w8,[x0, #0x194]
7101e6de38  mov x19,x0
7101e6de3c  cbz w8,0x7101e6de8c
7101e6de40  ldr x9,[x19, #0x1c0]
7101e6de44  ldr x8,[x9]
7101e6de48  ldrsw x10,[x8, #0x25c]
7101e6de4c  cmn w10,#0x1
7101e6de50  b.eq 0x7101e6dea4
7101e6de54  cmp w10,#0x2
7101e6de58  b.cs 0x7101e6dff0
7101e6de5c  mov w11,#0x48
7101e6de60  madd x9,x10,x11,x9
7101e6de64  mov w10,#0x1
7101e6de68  ldrb w9,[x9, #0x8]
7101e6de6c  ldrb w8,[x8, #0x280]
7101e6de70  cbnz w8,0x7101e6deb4
7101e6de74  cbz x10,0x7101e6debc
7101e6de78  cbz w9,0x7101e6deb4
7101e6de7c  cmp w9,#0x1
7101e6de80  b.ne 0x7101e6debc
7101e6de84  mov w8,#0x2
7101e6de88  b 0x7101e6deb8
7101e6de8c  ldrb w8,[x19, #0x2da]
7101e6de90  cmp x8,#0x3
7101e6de94  b.ls 0x7101e6df20
7101e6de98  adrp x20,0x7104292000
7101e6de9c  add x20,x20,#0x372
7101e6dea0  b 0x7101e6df48
7101e6dea4  mov x10,xzr
7101e6dea8  mov w9,wzr
7101e6deac  ldrb w8,[x8, #0x280]
7101e6deb0  cbz w8,0x7101e6de74
7101e6deb4  mov w8,#0x1
7101e6deb8  strb w8,[x19, #0x2d8]
7101e6debc  ldrb w8,[x19, #0x2d8]
7101e6dec0  cbz w8,0x7101e6dfdc
7101e6dec4  ldr x8,[x19, #0x1a0]
7101e6dec8  ldr x8,[x8]
7101e6decc  ldr x0,[x8]
7101e6ded0  mov w1,wzr
7101e6ded4  bl 0x71037760f0
7101e6ded8  ldr x20,[x19, #0x1c0]
7101e6dedc  ldr x0,[x20]
7101e6dee0  ldr x8,[x0]
7101e6dee4  ldr x8,[x8, #0x60]
7101e6dee8  mov w1,wzr
7101e6deec  blr x8
7101e6def0  ldr x0,[x20]
7101e6def4  ldr x8,[x0]
7101e6def8  ldr x8,[x8, #0x70]
7101e6defc  mov w1,wzr
7101e6df00  blr x8
7101e6df04  ldrsw x8,[x19, #0x18c]
7101e6df08  cmp w8,#0x13
7101e6df0c  b.cs 0x7101e6dff0
7101e6df10  add x8,x19,x8, LSL #0x2
7101e6df14  mov w9,#0xa
7101e6df18  str w9,[x8, #0x140]
7101e6df1c  b 0x7101e6dfdc
7101e6df20  add x8,x19,x8, LSL #0x3
7101e6df24  ldr x8,[x8, #0x210]
7101e6df28  adrp x20,0x7104292000
7101e6df2c  add x20,x20,#0x372
7101e6df30  cbz x8,0x7101e6df48
7101e6df34  ldrb w8,[x8, #0xf9]
7101e6df38  adrp x9,0x71042e7000
7101e6df3c  add x9,x9,#0x874
7101e6df40  cmp w8,#0x0
7101e6df44  csel x20,x20,x9,eq
7101e6df48  ldrb w1,[x19, #0x2a8]
7101e6df4c  ldr x21,[x19, #0x2b0]
7101e6df50  adrp x0,0x7104433000
7101e6df54  add x0,x0,#0x69c
7101e6df58  add x8,sp,#0x8
7101e6df5c  add x22,sp,#0x8
7101e6df60  bl 0x71003a4ca0
7101e6df64  add x1,x22,#0x8
7101e6df68  mov w2,#0x1
7101e6df6c  mov x0,x21
7101e6df70  mov x3,x20
7101e6df74  bl 0x7101e94890
7101e6df78  ldr x0,[x19, #0x2b0]
7101e6df7c  mov w1,wzr
7101e6df80  bl 0x7101e94ba0
7101e6df84  ldr x20,[x19, #0x1c0]
7101e6df88  ldr x0,[x20]
7101e6df8c  ldr x8,[x0]
7101e6df90  ldr x8,[x8, #0x60]
7101e6df94  mov w1,#0x1
7101e6df98  blr x8
7101e6df9c  ldr x0,[x20]
7101e6dfa0  ldr x8,[x0]
7101e6dfa4  ldr x8,[x8, #0x70]
7101e6dfa8  mov w1,#0x1
7101e6dfac  blr x8
7101e6dfb0  ldr x0,[x19, #0x1c0]
7101e6dfb4  ldrb w8,[x0, #0x8]
7101e6dfb8  cmp w8,#0x0
7101e6dfbc  cset w1,ne
7101e6dfc0  mov w2,#0x1
7101e6dfc4  bl 0x7103771a80
7101e6dfc8  ldr x8,[x19, #0x1a0]
7101e6dfcc  ldr x8,[x8]
7101e6dfd0  ldr x0,[x8]
7101e6dfd4  mov w1,#0x1
7101e6dfd8  bl 0x71037760f0
7101e6dfdc  ldp x29,x30,[sp, #0x70]
7101e6dfe0  ldp x20,x19,[sp, #0x60]
7101e6dfe4  ldp x22,x21,[sp, #0x50]
7101e6dfe8  add sp,sp,#0x80
7101e6dfec  ret
7101e6dff0  bl 0x71039c2650
