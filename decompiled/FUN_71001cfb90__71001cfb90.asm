// addr:      71001cfb90
// offset:    0x1cfb90
// name:      FUN_71001cfb90
// mangled:   
// size:      328

71001cfb90  str x23,[sp, #-0x40]!
71001cfb94  stp x22,x21,[sp, #0x10]
71001cfb98  stp x20,x19,[sp, #0x20]
71001cfb9c  stp x29,x30,[sp, #0x30]
71001cfba0  add x29,sp,#0x30
71001cfba4  cmp x0,x1
71001cfba8  b.cs 0x71001cfcc4
71001cfbac  adrp x22,0x71052a4000
71001cfbb0  ldr x22,[x22, #0xda8]
71001cfbb4  adrp x21,0x71052a4000
71001cfbb8  ldrb w8,[x22]
71001cfbbc  ldr x21,[x21, #0xdb0]
71001cfbc0  cmp x0,#0x0
71001cfbc4  mov x19,x1
71001cfbc8  csinc x20,x0,xzr,ne
71001cfbcc  add x23,x21,#0x80
71001cfbd0  cbz w8,0x71001cfc0c
71001cfbd4  adrp x8,0x71052a4000
71001cfbd8  ldr x8,[x8, #0xdb8]
71001cfbdc  ldr x0,[x8]
71001cfbe0  bl 0x7101717960
71001cfbe4  ldr w8,[x0]
71001cfbe8  cbz w8,0x71001cfc0c
71001cfbec  ldr x10,[x21, #0xa0]
71001cfbf0  ldp x9,x10,[x10]
71001cfbf4  sub x10,x10,x9
71001cfbf8  asr x10,x10,#0x3
71001cfbfc  cmp x10,x8
71001cfc00  b.ls 0x71001cfc68
71001cfc04  ldr x8,[x9, x8, LSL #0x3]
71001cfc08  add x23,x8,#0x78
71001cfc0c  ldr x8,[x23]
71001cfc10  cbz x8,0x71001cfc58
71001cfc14  ldrb w8,[x22]
71001cfc18  cbz w8,0x71001cfc60
71001cfc1c  adrp x8,0x71052a4000
71001cfc20  ldr x8,[x8, #0xdb8]
71001cfc24  ldr x0,[x8]
71001cfc28  bl 0x7101717960
71001cfc2c  ldr w8,[x0]
71001cfc30  cbz w8,0x71001cfc60
71001cfc34  ldr x10,[x21, #0xa0]
71001cfc38  ldp x9,x10,[x10]
71001cfc3c  sub x10,x10,x9
71001cfc40  asr x10,x10,#0x3
71001cfc44  cmp x10,x8
71001cfc48  b.ls 0x71001cfc88
71001cfc4c  ldr x8,[x9, x8, LSL #0x3]
71001cfc50  ldr x0,[x8, #0x78]
71001cfc54  b 0x71001cfca4
71001cfc58  mov x0,xzr
71001cfc5c  b 0x71001cfcac
71001cfc60  ldr x0,[x21, #0x80]
71001cfc64  b 0x71001cfca4
71001cfc68  adrp x0,0x71042c4000
71001cfc6c  add x0,x0,#0x35f
71001cfc70  mov w1,#0x47
71001cfc74  orr w2,wzr,#0xe0000003
71001cfc78  mov w3,wzr
71001cfc7c  bl 0x71001b1300
71001cfc80  mov x0,xzr
71001cfc84  b 0x71001cfcac
71001cfc88  adrp x0,0x71042c4000
71001cfc8c  add x0,x0,#0x35f
71001cfc90  mov w1,#0x47
71001cfc94  orr w2,wzr,#0xe0000003
71001cfc98  mov w3,wzr
71001cfc9c  bl 0x71001b1300
71001cfca0  mov x0,xzr
71001cfca4  mov x1,x19
71001cfca8  bl 0x71001b2100
71001cfcac  cmp x0,x19
71001cfcb0  csel x8,x20,x0,cc
71001cfcb4  mov x0,x8
71001cfcb8  lsl x8,x8,#0x1
71001cfcbc  cmp x0,x19
71001cfcc0  b.cc 0x71001cfcb4
71001cfcc4  ldp x29,x30,[sp, #0x30]
71001cfcc8  ldp x20,x19,[sp, #0x20]
71001cfccc  ldp x22,x21,[sp, #0x10]
71001cfcd0  ldr x23,[sp], #0x40
71001cfcd4  ret
