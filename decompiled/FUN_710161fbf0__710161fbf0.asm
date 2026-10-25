// addr:      710161fbf0
// offset:    0x161fbf0
// name:      FUN_710161fbf0
// mangled:   
// size:      332

710161fbf0  sub sp,sp,#0x70
710161fbf4  stp d9,d8,[sp, #0x30]
710161fbf8  stp x22,x21,[sp, #0x40]
710161fbfc  stp x20,x19,[sp, #0x50]
710161fc00  stp x29,x30,[sp, #0x60]
710161fc04  add x29,sp,#0x60
710161fc08  ldr x8,[x0]
710161fc0c  ldr x8,[x8, #0x78]
710161fc10  mov w19,w3
710161fc14  mov x20,x2
710161fc18  mov x22,x1
710161fc1c  mov x21,x0
710161fc20  blr x8
710161fc24  tbnz w0,#0x0,0x710161fd24
710161fc28  str xzr,[sp, #0x28]
710161fc2c  ldr q0,[x22]
710161fc30  ldr x8,[x21]
710161fc34  ldr x8,[x8, #0x50]
710161fc38  dup s9,v0.S[0x1]
710161fc3c  str q0,[sp]
710161fc40  ldr q0,[x20]
710161fc44  mov x20,#0xc1b2
710161fc48  movk x20,#0x99eb, LSL #16
710161fc4c  mov x0,x21
710161fc50  movk x20,#0x21, LSL #32
710161fc54  str q0,[sp, #0x10]
710161fc58  dup s8,v0.S[0x1]
710161fc5c  blr x8
710161fc60  tbz w0,#0x0,0x710161fca0
710161fc64  ldp q0,q2,[sp]
710161fc68  fcvt d2,s2
710161fc6c  fcvt d0,s0
710161fc70  fcvt d1,s9
710161fc74  fcvt d3,s8
710161fc78  ldr x0,[x21, #0x1d8]
710161fc7c  adrp x3,0x710425e000
710161fc80  add x3,x3,#0x9a3
710161fc84  add x2,sp,#0x28
710161fc88  mov x1,x20
710161fc8c  mov w4,w19
710161fc90  bl 0x710372e100
710161fc94  ldr x19,[sp, #0x28]
710161fc98  cbnz x19,0x710161fcd8
710161fc9c  b 0x710161fd24
710161fca0  ldp q0,q2,[sp]
710161fca4  fcvt d2,s2
710161fca8  fcvt d0,s0
710161fcac  fcvt d1,s9
710161fcb0  fcvt d3,s8
710161fcb4  ldr x0,[x21, #0x10]
710161fcb8  adrp x3,0x710425e000
710161fcbc  add x3,x3,#0x9a3
710161fcc0  add x2,sp,#0x28
710161fcc4  mov x1,x20
710161fcc8  mov w4,w19
710161fccc  bl 0x71037278a0
710161fcd0  ldr x19,[sp, #0x28]
710161fcd4  cbz x19,0x710161fd24
710161fcd8  ldr x21,[x19, #0x10]
710161fcdc  mov x20,xzr
710161fce0  b 0x710161fce8
710161fce4  add x20,x20,#0x1
710161fce8  ldrb w8,[x21, x20, LSL ]
710161fcec  cmp w8,#0x73
710161fcf0  b.eq 0x710161fcfc
710161fcf4  cbnz w8,0x710161fce4
710161fcf8  b 0x710161fd14
710161fcfc  ldr x22,[x19, #0x8]
710161fd00  ldr x0,[x22, x20, LSL #0x3]
710161fd04  cbz x0,0x710161fd0c
710161fd08  bl 0x710392eb40
710161fd0c  str xzr,[x22, x20, LSL #0x3]
710161fd10  b 0x710161fce4
710161fd14  ldr x0,[sp, #0x28]
710161fd18  cbz x0,0x710161fd20
710161fd1c  bl 0x710392eb40
710161fd20  str xzr,[sp, #0x28]
710161fd24  ldp d9,d8,[sp, #0x30]
710161fd28  ldp x29,x30,[sp, #0x60]
710161fd2c  ldp x20,x19,[sp, #0x50]
710161fd30  ldp x22,x21,[sp, #0x40]
710161fd34  add sp,sp,#0x70
710161fd38  ret
