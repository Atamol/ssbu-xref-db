// addr:      71001dfb90
// offset:    0x1dfb90
// name:      FUN_71001dfb90
// mangled:   
// size:      340

71001dfb90  sub sp,sp,#0x50
71001dfb94  stp x22,x21,[sp, #0x20]
71001dfb98  stp x20,x19,[sp, #0x30]
71001dfb9c  stp x29,x30,[sp, #0x40]
71001dfba0  add x29,sp,#0x40
71001dfba4  adrp x8,0x71052a4000
71001dfba8  ldr x8,[x8, #0xda8]
71001dfbac  adrp x22,0x71052a4000
71001dfbb0  ldrb w8,[x8]
71001dfbb4  ldr x22,[x22, #0xdb0]
71001dfbb8  mov x19,x2
71001dfbbc  mov x20,x1
71001dfbc0  add x21,x22,#0x28
71001dfbc4  cbz w8,0x71001dfc00
71001dfbc8  adrp x8,0x71052a4000
71001dfbcc  ldr x8,[x8, #0xdb8]
71001dfbd0  ldr x0,[x8]
71001dfbd4  bl 0x7101717960
71001dfbd8  ldr w8,[x0]
71001dfbdc  cbz w8,0x71001dfc00
71001dfbe0  ldr x10,[x22, #0xa0]
71001dfbe4  ldp x9,x10,[x10]
71001dfbe8  sub x10,x10,x9
71001dfbec  asr x10,x10,#0x3
71001dfbf0  cmp x10,x8
71001dfbf4  b.ls 0x71001dfc18
71001dfbf8  ldr x8,[x9, x8, LSL #0x3]
71001dfbfc  add x21,x8,#0x20
71001dfc00  ldr x8,[x21]
71001dfc04  cbz x8,0x71001dfc30
71001dfc08  ldr x8,[x8, #0x10]
71001dfc0c  cbz x8,0x71001dfc30
71001dfc10  ldr x21,[x8, #0x10]
71001dfc14  b 0x71001dfc34
71001dfc18  adrp x0,0x71042c4000
71001dfc1c  add x0,x0,#0x35f
71001dfc20  mov w1,#0x47
71001dfc24  orr w2,wzr,#0xe0000003
71001dfc28  mov w3,wzr
71001dfc2c  bl 0x71001b1300
71001dfc30  mov x21,xzr
71001dfc34  ldr x8,[x21, #0x78]!
71001dfc38  ldr x8,[x8, #0x10]
71001dfc3c  mov x0,x21
71001dfc40  blr x8
71001dfc44  mov x0,x20
71001dfc48  bl 0x71001ccd00
71001dfc4c  tbz w0,#0x0,0x71001dfcb8
71001dfc50  ldr w8,[x20, #0x18]
71001dfc54  str w8,[sp]
71001dfc58  adrp x8,0x71052a6000
71001dfc5c  ldr x8,[x8, #0xe00]
71001dfc60  ldr w3,[x8]
71001dfc64  ldr x8,[x19]
71001dfc68  ldr x9,[x8, #0xe8]
71001dfc6c  adrp x1,0x71001df000
71001dfc70  add x1,x1,#0xcf0
71001dfc74  add x8,sp,#0x8
71001dfc78  mov x2,sp
71001dfc7c  mov x0,x19
71001dfc80  blr x9
71001dfc84  adrp x8,0x71052a5000
71001dfc88  ldr x8,[x8, #0x110]
71001dfc8c  ldr w9,[sp, #0x8]
71001dfc90  cmp w9,#0x0
71001dfc94  csel x8,x8,xzr,ge
71001dfc98  cbz x8,0x71001dfca4
71001dfc9c  mov w19,#0x1
71001dfca0  b 0x71001dfcbc
71001dfca4  ldr x0,[x19, #0x8]
71001dfca8  ldr x8,[x0]
71001dfcac  ldr x8,[x8, #0x80]
71001dfcb0  mov x1,x19
71001dfcb4  blr x8
71001dfcb8  mov w19,wzr
71001dfcbc  ldr x8,[x21]
71001dfcc0  ldr x8,[x8, #0x20]
71001dfcc4  mov x0,x21
71001dfcc8  blr x8
71001dfccc  mov w0,w19
71001dfcd0  ldp x29,x30,[sp, #0x40]
71001dfcd4  ldp x20,x19,[sp, #0x30]
71001dfcd8  ldp x22,x21,[sp, #0x20]
71001dfcdc  add sp,sp,#0x50
71001dfce0  ret
