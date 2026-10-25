// addr:      71001bdb60
// offset:    0x1bdb60
// name:      FUN_71001bdb60
// mangled:   
// size:      400

71001bdb60  ldr w8,[x0, #0x10]
71001bdb64  cbz w8,0x71001bdbd8
71001bdb68  sub sp,sp,#0x70
71001bdb6c  stp x22,x21,[sp, #0x40]
71001bdb70  stp x20,x19,[sp, #0x50]
71001bdb74  stp x29,x30,[sp, #0x60]
71001bdb78  add x29,sp,#0x60
71001bdb7c  mov x20,x1
71001bdb80  mov x19,x0
71001bdb84  add x0,sp,#0x30
71001bdb88  mov w2,#0x10
71001bdb8c  mov w1,wzr
71001bdb90  bl 0x71039c02a0
71001bdb94  mov w8,#0x2
71001bdb98  strb w8,[sp, #0x31]
71001bdb9c  ldr w0,[x20]
71001bdba0  bl 0x71039c0f70
71001bdba4  str w0,[sp, #0x34]
71001bdba8  ldrh w0,[x20, #0x8]
71001bdbac  bl 0x71039c11e0
71001bdbb0  strh w0,[sp, #0x32]
71001bdbb4  ldrb w8,[x19, #0x28]
71001bdbb8  cbz w8,0x71001bdbe0
71001bdbbc  ldr w0,[x19, #0xc]
71001bdbc0  add x1,sp,#0x30
71001bdbc4  mov w2,#0x10
71001bdbc8  bl 0x71039c1270
71001bdbcc  tbnz w0,#0x1f,0x71001bdc7c
71001bdbd0  mov w0,wzr
71001bdbd4  b 0x71001bdcdc
71001bdbd8  mov w0,wzr
71001bdbdc  ret
71001bdbe0  ldp x8,x9,[sp, #0x30]
71001bdbe4  orr w0,wzr,#0x78
71001bdbe8  stp x8,x9,[x19, #0x18]
71001bdbec  bl 0x71001af850
71001bdbf0  cbz x0,0x71001bdc90
71001bdbf4  adrp x8,0x71052a4000
71001bdbf8  ldr x8,[x8, #0xd80]
71001bdbfc  strb wzr,[sp, #0x10]
71001bdc00  add x22,x8,#0x10
71001bdc04  add x8,sp,#0x8
71001bdc08  add x8,x8,#0x8
71001bdc0c  mov x20,x0
71001bdc10  adrp x1,0x71043df000
71001bdc14  add x1,x1,#0x5bc
71001bdc18  mov x2,#-0x1
71001bdc1c  add x0,sp,#0x8
71001bdc20  str x22,[sp, #0x8]
71001bdc24  str x8,[sp, #0x20]
71001bdc28  mov w8,#0x10
71001bdc2c  str x8,[sp, #0x28]
71001bdc30  bl 0x71001b47e0
71001bdc34  adrp x8,0x71052a6000
71001bdc38  ldr x8,[x8, #0xa40]
71001bdc3c  ldr w2,[x8]
71001bdc40  add x1,sp,#0x8
71001bdc44  mov x0,x20
71001bdc48  bl 0x71001b2360
71001bdc4c  adrp x8,0x71052a6000
71001bdc50  ldr x8,[x8, #0xa48]
71001bdc54  mov x21,x19
71001bdc58  stp xzr,xzr,[x20, #0x58]
71001bdc5c  add x8,x8,#0x10
71001bdc60  add x0,sp,#0x8
71001bdc64  str xzr,[x20, #0x68]
71001bdc68  str x8,[x20]
71001bdc6c  str x20,[x21, #0x30]!
71001bdc70  str x22,[sp, #0x8]
71001bdc74  bl 0x71001b4910
71001bdc78  b 0x71001bdc98
71001bdc7c  bl 0x71039c0b10
71001bdc80  cmp w0,#0x73
71001bdc84  orr w8,wzr,#0x3
71001bdc88  csinc w0,w8,wzr,eq
71001bdc8c  b 0x71001bdcdc
71001bdc90  mov x21,x19
71001bdc94  str xzr,[x21, #0x30]!
71001bdc98  adrp x8,0x71052a6000
71001bdc9c  ldr x8,[x8, #0xa50]
71001bdca0  ldr w8,[x8]
71001bdca4  mov w9,#0x80000000
71001bdca8  cmp w8,w9
71001bdcac  b.ne 0x71001bdcb8
71001bdcb0  ldr x0,[x21]
71001bdcb4  b 0x71001bdcc0
71001bdcb8  ldr x0,[x21]
71001bdcbc  str w8,[x0, #0x54]
71001bdcc0  adrp x8,0x71052a6000
71001bdcc4  ldr x8,[x8, #0xa58]
71001bdcc8  mov w1,#0x8000
71001bdccc  stp x8,xzr,[x0, #0x58]
71001bdcd0  stp x19,x19,[x0, #0x68]
71001bdcd4  bl 0x71001b27e0
71001bdcd8  orr w0,wzr,#0x3
71001bdcdc  ldp x29,x30,[sp, #0x60]
71001bdce0  ldp x20,x19,[sp, #0x50]
71001bdce4  ldp x22,x21,[sp, #0x40]
71001bdce8  add sp,sp,#0x70
71001bdcec  ret
