// addr:      710173fb10
// offset:    0x173fb10
// name:      FUN_710173fb10
// mangled:   
// size:      728

710173fb10  sub sp,sp,#0xb0
710173fb14  str x27,[sp, #0x50]
710173fb18  stp x26,x25,[sp, #0x60]
710173fb1c  stp x24,x23,[sp, #0x70]
710173fb20  stp x22,x21,[sp, #0x80]
710173fb24  stp x20,x19,[sp, #0x90]
710173fb28  stp x29,x30,[sp, #0xa0]
710173fb2c  add x29,sp,#0xa0
710173fb30  mov x19,x1
710173fb34  mov w20,w0
710173fb38  adrp x1,0x710424e000
710173fb3c  add x1,x1,#0xc94
710173fb40  add x0,sp,#0x48
710173fb44  bl 0x710375aa90
710173fb48  adrp x22,0x7104329000
710173fb4c  add x22,x22,#0x6b1
710173fb50  mov x8,sp
710173fb54  mov x0,sp
710173fb58  mov x1,x22
710173fb5c  strb wzr,[sp, #0x8]
710173fb60  mov w2,wzr
710173fb64  str xzr,[sp]
710173fb68  add x21,x8,#0x8
710173fb6c  bl 0x710062dc20
710173fb70  adrp x26,0x710532f000
710173fb74  ldr x8,[x26, #0x730]
710173fb78  ldr x8,[x8, #0x8]
710173fb7c  ldr x1,[x19, #0x8]
710173fb80  ldr x0,[x8, #0x168]
710173fb84  ldr x25,[sp, #0x48]
710173fb88  bl 0x7103264270
710173fb8c  ldr x9,[x25]
710173fb90  and w8,w0,#0xff
710173fb94  cmp w0,#0x0
710173fb98  orr w27,wzr,#0xff
710173fb9c  mov w24,#0x4020
710173fba0  csel w8,w27,w8,lt
710173fba4  mov x1,x21
710173fba8  stur x8,[x29, #-0x48]
710173fbac  add x0,x9,x24
710173fbb0  sub x2,x29,#0x48
710173fbb4  bl 0x71039c5fa0
710173fbb8  adrp x23,0x7104421000
710173fbbc  add x23,x23,#0x999
710173fbc0  mov x0,sp
710173fbc4  mov x1,x23
710173fbc8  mov w2,wzr
710173fbcc  bl 0x710062dc20
710173fbd0  ldr x9,[x25]
710173fbd4  ldrb w8,[x19, #0x20]
710173fbd8  sub x2,x29,#0x48
710173fbdc  mov x1,x21
710173fbe0  add x0,x9,x24
710173fbe4  stur x8,[x29, #-0x48]
710173fbe8  bl 0x71039c5fa0
710173fbec  mov x0,sp
710173fbf0  mov w2,#0x1
710173fbf4  mov x1,x22
710173fbf8  bl 0x710062dc20
710173fbfc  ldr x8,[x26, #0x730]
710173fc00  ldr x8,[x8, #0x8]
710173fc04  ldr x1,[x19, #0x10]
710173fc08  ldr x0,[x8, #0x168]
710173fc0c  bl 0x7103264270
710173fc10  ldr x9,[x25]
710173fc14  and w8,w0,#0xff
710173fc18  cmp w0,#0x0
710173fc1c  csel w8,w27,w8,lt
710173fc20  stur x8,[x29, #-0x48]
710173fc24  add x0,x9,x24
710173fc28  sub x2,x29,#0x48
710173fc2c  mov x1,x21
710173fc30  bl 0x71039c5fa0
710173fc34  mov x0,sp
710173fc38  mov w2,#0x1
710173fc3c  mov x1,x23
710173fc40  bl 0x710062dc20
710173fc44  ldr x9,[x25]
710173fc48  ldrb w8,[x19, #0x21]
710173fc4c  sub x2,x29,#0x48
710173fc50  mov x1,x21
710173fc54  add x0,x9,x24
710173fc58  stur x8,[x29, #-0x48]
710173fc5c  bl 0x71039c5fa0
710173fc60  mov x0,sp
710173fc64  mov w2,#0x2
710173fc68  mov x1,x22
710173fc6c  bl 0x710062dc20
710173fc70  ldr x8,[x26, #0x730]
710173fc74  ldr x8,[x8, #0x8]
710173fc78  ldr x1,[x19, #0x18]
710173fc7c  ldr x0,[x8, #0x168]
710173fc80  bl 0x7103264270
710173fc84  ldr x9,[x25]
710173fc88  and w8,w0,#0xff
710173fc8c  cmp w0,#0x0
710173fc90  csel w8,w27,w8,lt
710173fc94  stur x8,[x29, #-0x48]
710173fc98  add x0,x9,x24
710173fc9c  sub x2,x29,#0x48
710173fca0  mov x1,x21
710173fca4  bl 0x71039c5fa0
710173fca8  mov x0,sp
710173fcac  mov w2,#0x2
710173fcb0  mov x1,x23
710173fcb4  bl 0x710062dc20
710173fcb8  ldr x9,[x25]
710173fcbc  ldrb w8,[x19, #0x22]
710173fcc0  sub x2,x29,#0x48
710173fcc4  mov x1,x21
710173fcc8  add x0,x9,x24
710173fccc  stur x8,[x29, #-0x48]
710173fcd0  bl 0x71039c5fa0
710173fcd4  ldr x9,[x25]
710173fcd8  sxtw x8,w20
710173fcdc  adrp x1,0x7104292000
710173fce0  add x1,x1,#0x688
710173fce4  sub x2,x29,#0x48
710173fce8  stur x8,[x29, #-0x48]
710173fcec  add x0,x9,x24
710173fcf0  bl 0x71039c5fa0
710173fcf4  ldr x20,[sp, #0x48]
710173fcf8  ldr x9,[x20]
710173fcfc  ldr w8,[x19]
710173fd00  adrp x1,0x710438c000
710173fd04  add x1,x1,#0x6e
710173fd08  stur x8,[x29, #-0x48]
710173fd0c  add x0,x9,x24
710173fd10  sub x2,x29,#0x48
710173fd14  bl 0x71039c5fa0
710173fd18  ldrb w8,[x19, #0x5]
710173fd1c  ldr x9,[x20]
710173fd20  add x0,x9,x24
710173fd24  cmp w8,#0x0
710173fd28  cset w8,ne
710173fd2c  adrp x1,0x710424e000
710173fd30  add x1,x1,#0xca5
710173fd34  sub x2,x29,#0x48
710173fd38  stur x8,[x29, #-0x48]
710173fd3c  bl 0x71039c5fa0
710173fd40  ldr x9,[x20]
710173fd44  ldrb w8,[x19, #0x6]
710173fd48  adrp x1,0x71042d5000
710173fd4c  add x1,x1,#0x943
710173fd50  sub x2,x29,#0x48
710173fd54  add x0,x9,x24
710173fd58  stur x8,[x29, #-0x48]
710173fd5c  bl 0x71039c5fa0
710173fd60  adrp x8,0x710593b000
710173fd64  ldr x8,[x8, #0x580]
710173fd68  ldr x1,[x8]
710173fd6c  mov w8,#0x7300
710173fd70  ldrsw x8,[x1, x8, LSL #0x0]
710173fd74  cmn w8,#0x1
710173fd78  b.eq 0x710173fd94
710173fd7c  ldr x9,[x1, #0x72c0]
710173fd80  cmp x9,x8
710173fd84  b.ls 0x710173fde4
710173fd88  mov w9,#0xcc0
710173fd8c  madd x8,x8,x9,x1
710173fd90  add x1,x8,#0xcc0
710173fd94  ldr x8,[x20]
710173fd98  mov w9,#0x4020
710173fd9c  add x0,x8,x9
710173fda0  bl 0x71039c5fb0
710173fda4  str xzr,[sp, #0x48]
710173fda8  cbz x20,0x710173fdc4
710173fdac  ldr x0,[x20]
710173fdb0  str xzr,[x20]
710173fdb4  cbz x0,0x710173fdbc
710173fdb8  bl 0x710392eb40
710173fdbc  mov x0,x20
710173fdc0  bl 0x710392eb40
710173fdc4  ldp x29,x30,[sp, #0xa0]
710173fdc8  ldr x27,[sp, #0x50]
710173fdcc  ldp x20,x19,[sp, #0x90]
710173fdd0  ldp x22,x21,[sp, #0x80]
710173fdd4  ldp x24,x23,[sp, #0x70]
710173fdd8  ldp x26,x25,[sp, #0x60]
710173fddc  add sp,sp,#0xb0
710173fde0  ret
710173fde4  bl 0x71039c2650
