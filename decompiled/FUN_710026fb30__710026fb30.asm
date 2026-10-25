// addr:      710026fb30
// offset:    0x26fb30
// name:      FUN_710026fb30
// mangled:   
// size:      492

710026fb30  sub sp,sp,#0xd0
710026fb34  stp x24,x23,[sp, #0x90]
710026fb38  stp x22,x21,[sp, #0xa0]
710026fb3c  stp x20,x19,[sp, #0xb0]
710026fb40  stp x29,x30,[sp, #0xc0]
710026fb44  add x29,sp,#0xc0
710026fb48  mov x20,x0
710026fb4c  add x0,sp,#0x20
710026fb50  mov x21,x3
710026fb54  mov x23,x2
710026fb58  mov x19,x1
710026fb5c  bl 0x71001e6720
710026fb60  adrp x8,0x71052a4000
710026fb64  ldr x8,[x8, #0xda8]
710026fb68  adrp x24,0x71052a4000
710026fb6c  ldrb w8,[x8]
710026fb70  ldr x24,[x24, #0xdb0]
710026fb74  add x22,x24,#0x28
710026fb78  cbz w8,0x710026fbb4
710026fb7c  adrp x8,0x71052a4000
710026fb80  ldr x8,[x8, #0xdb8]
710026fb84  ldr x0,[x8]
710026fb88  bl 0x7101717960
710026fb8c  ldr w8,[x0]
710026fb90  cbz w8,0x710026fbb4
710026fb94  ldr x10,[x24, #0xa0]
710026fb98  ldp x9,x10,[x10]
710026fb9c  sub x10,x10,x9
710026fba0  asr x10,x10,#0x3
710026fba4  cmp x10,x8
710026fba8  b.ls 0x710026fbcc
710026fbac  ldr x8,[x9, x8, LSL #0x3]
710026fbb0  add x22,x8,#0x20
710026fbb4  ldr x8,[x22]
710026fbb8  cbz x8,0x710026fbe4
710026fbbc  ldr x8,[x8, #0x10]
710026fbc0  cbz x8,0x710026fbe4
710026fbc4  ldr x22,[x8, #0x10]
710026fbc8  b 0x710026fbe8
710026fbcc  adrp x0,0x71042c4000
710026fbd0  add x0,x0,#0x35f
710026fbd4  mov w1,#0x47
710026fbd8  orr w2,wzr,#0xe0000003
710026fbdc  mov w3,wzr
710026fbe0  bl 0x71001b1300
710026fbe4  mov x22,xzr
710026fbe8  ldr x8,[x22, #0x78]!
710026fbec  ldr x8,[x8, #0x10]
710026fbf0  mov x0,x22
710026fbf4  blr x8
710026fbf8  ldrh w1,[x20, #0x48]
710026fbfc  add x0,sp,#0x20
710026fc00  mov w2,#0x1
710026fc04  bl 0x710022b480
710026fc08  add x0,sp,#0x20
710026fc0c  mov x1,x19
710026fc10  bl 0x710022b390
710026fc14  tbz w0,#0x0,0x710026fc6c
710026fc18  mov w1,#0x3b
710026fc1c  add x0,sp,#0x20
710026fc20  bl 0x710022b400
710026fc24  add x0,sp,#0x20
710026fc28  mov w2,#0x1
710026fc2c  mov x1,x23
710026fc30  bl 0x71001d0460
710026fc34  ldrb w8,[sp, #0x28]
710026fc38  cbz w8,0x710026fc74
710026fc3c  mov w8,#0xa
710026fc40  movk w8,#0x8001, LSL #16
710026fc44  add x0,sp,#0x8
710026fc48  add x1,sp,#0x4
710026fc4c  str w8,[sp, #0x4]
710026fc50  bl 0x71001b4200
710026fc54  add x1,sp,#0x8
710026fc58  mov x0,x19
710026fc5c  bl 0x71001d0c90
710026fc60  mov w23,wzr
710026fc64  mov w21,#0x1
710026fc68  b 0x710026fcd0
710026fc6c  mov w21,wzr
710026fc70  b 0x710026fccc
710026fc74  cbz x19,0x710026fc84
710026fc78  mov x0,x19
710026fc7c  mov x1,x21
710026fc80  bl 0x710022b430
710026fc84  adrp x8,0x71052a7000
710026fc88  adrp x9,0x71052a8000
710026fc8c  ldr x8,[x8, #0xf30]
710026fc90  ldr x9,[x9, #0x110]
710026fc94  str x9,[x8, #0x1d0]
710026fc98  ldrb w8,[x20, #0x70]
710026fc9c  cbz w8,0x710026fcb8
710026fca0  mov w1,#0x10
710026fca4  mov x0,x20
710026fca8  bl 0x710022b500
710026fcac  tbz w0,#0x0,0x710026fcb8
710026fcb0  mov w23,#0x1
710026fcb4  b 0x710026fcd0
710026fcb8  add x2,sp,#0x20
710026fcbc  mov x0,x20
710026fcc0  mov x1,x19
710026fcc4  bl 0x710022a7f0
710026fcc8  mov w21,w0
710026fccc  mov w23,wzr
710026fcd0  ldr x8,[x22]
710026fcd4  ldr x8,[x8, #0x20]
710026fcd8  mov x0,x22
710026fcdc  blr x8
710026fce0  cbz w23,0x710026fcf8
710026fce4  add x2,sp,#0x20
710026fce8  mov x0,x20
710026fcec  mov x1,x19
710026fcf0  bl 0x710022a7f0
710026fcf4  mov w21,w0
710026fcf8  add x0,sp,#0x20
710026fcfc  bl 0x71001e6910
710026fd00  and w0,w21,#0x1
710026fd04  ldp x29,x30,[sp, #0xc0]
710026fd08  ldp x20,x19,[sp, #0xb0]
710026fd0c  ldp x22,x21,[sp, #0xa0]
710026fd10  ldp x24,x23,[sp, #0x90]
710026fd14  add sp,sp,#0xd0
710026fd18  ret
