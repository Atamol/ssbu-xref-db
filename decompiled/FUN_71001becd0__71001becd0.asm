// addr:      71001becd0
// offset:    0x1becd0
// name:      FUN_71001becd0
// mangled:   
// size:      340

71001becd0  sub sp,sp,#0x190
71001becd4  str x28,[sp, #0x160]
71001becd8  stp x20,x19,[sp, #0x170]
71001becdc  stp x29,x30,[sp, #0x180]
71001bece0  add x29,sp,#0x180
71001bece4  mov x20,x1
71001bece8  mov x19,x0
71001becec  adrp x1,0x710439c000
71001becf0  add x1,x1,#0x835
71001becf4  mov x0,x20
71001becf8  bl 0x71039c0060
71001becfc  cbz w0,0x71001beddc
71001bed00  adrp x1,0x71043ce000
71001bed04  add x1,x1,#0x1bd
71001bed08  mov x0,x20
71001bed0c  bl 0x71039c0060
71001bed10  cbz w0,0x71001bedec
71001bed14  add x1,sp,#0x4c
71001bed18  mov w2,#0x100
71001bed1c  mov x0,x20
71001bed20  bl 0x71001b5db0
71001bed24  mov w0,#0x2
71001bed28  add x1,sp,#0x4c
71001bed2c  add x2,sp,#0x18
71001bed30  bl 0x71039c12f0
71001bed34  ldr w8,[sp, #0x18]
71001bed38  cmp w0,#0x0
71001bed3c  mov w0,#0x1
71001bed40  csinv w8,w8,wzr,gt
71001bed44  cmn w8,#0x1
71001bed48  str w8,[x19, #0xc]!
71001bed4c  b.ne 0x71001bee10
71001bed50  adrp x8,0x71052a6000
71001bed54  ldr x8,[x8, #0xa80]
71001bed58  ldrb w8,[x8]
71001bed5c  cbz w8,0x71001bee10
71001bed60  add x0,sp,#0x18
71001bed64  orr w2,wzr,#0x30
71001bed68  mov w1,wzr
71001bed6c  stur xzr,[x29, #-0x18]
71001bed70  bl 0x71039c02a0
71001bed74  mov w8,#0x2
71001bed78  add x0,sp,#0x4c
71001bed7c  add x2,sp,#0x18
71001bed80  sub x3,x29,#0x18
71001bed84  mov x1,xzr
71001bed88  str w8,[sp, #0x1c]
71001bed8c  bl 0x71039c1300
71001bed90  cbnz w0,0x71001bee0c
71001bed94  ldur x0,[x29, #-0x18]
71001bed98  cbz x0,0x71001bee0c
71001bed9c  ldr x8,[x0, #0x20]
71001beda0  ldr w8,[x8, #0x4]
71001beda4  str w8,[x19]
71001beda8  bl 0x71039c1310
71001bedac  mov w3,#0x14
71001bedb0  mov w0,#0x2
71001bedb4  sub x2,x29,#0x34
71001bedb8  mov x1,x19
71001bedbc  stp xzr,xzr,[sp, #0x8]
71001bedc0  bl 0x71039c1320
71001bedc4  sub x0,x29,#0x34
71001bedc8  add x1,sp,#0x8
71001bedcc  mov w2,#0x10
71001bedd0  bl 0x71001b5d80
71001bedd4  mov w0,#0x1
71001bedd8  b 0x71001bee10
71001beddc  mov w8,#0xffffffff
71001bede0  str w8,[x19, #0xc]
71001bede4  mov w0,#0x1
71001bede8  b 0x71001bee10
71001bedec  mov x0,x19
71001bedf0  ldp x29,x30,[sp, #0x180]
71001bedf4  ldp x20,x19,[sp, #0x170]
71001bedf8  ldr x28,[sp, #0x160]
71001bedfc  adrp x1,0x7104411000
71001bee00  add x1,x1,#0xded
71001bee04  add sp,sp,#0x190
71001bee08  b 0x71001becd0
71001bee0c  mov w0,wzr
71001bee10  ldp x29,x30,[sp, #0x180]
71001bee14  ldr x28,[sp, #0x160]
71001bee18  ldp x20,x19,[sp, #0x170]
71001bee1c  add sp,sp,#0x190
71001bee20  ret
