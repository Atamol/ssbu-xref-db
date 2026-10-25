// addr:      71001ccd00
// offset:    0x1ccd00
// name:      FUN_71001ccd00
// mangled:   
// size:      240

71001ccd00  str x21,[sp, #-0x30]!
71001ccd04  stp x20,x19,[sp, #0x10]
71001ccd08  stp x29,x30,[sp, #0x20]
71001ccd0c  add x29,sp,#0x20
71001ccd10  adrp x8,0x71052a4000
71001ccd14  ldr x8,[x8, #0xda8]
71001ccd18  adrp x21,0x71052a4000
71001ccd1c  ldrb w8,[x8]
71001ccd20  ldr x21,[x21, #0xdb0]
71001ccd24  mov x19,x0
71001ccd28  add x20,x21,#0x28
71001ccd2c  cbz w8,0x71001ccd68
71001ccd30  adrp x8,0x71052a4000
71001ccd34  ldr x8,[x8, #0xdb8]
71001ccd38  ldr x0,[x8]
71001ccd3c  bl 0x7101717960
71001ccd40  ldr w8,[x0]
71001ccd44  cbz w8,0x71001ccd68
71001ccd48  ldr x10,[x21, #0xa0]
71001ccd4c  ldp x9,x10,[x10]
71001ccd50  sub x10,x10,x9
71001ccd54  asr x10,x10,#0x3
71001ccd58  cmp x10,x8
71001ccd5c  b.ls 0x71001ccd80
71001ccd60  ldr x8,[x9, x8, LSL #0x3]
71001ccd64  add x20,x8,#0x20
71001ccd68  ldr x8,[x20]
71001ccd6c  cbz x8,0x71001ccd98
71001ccd70  ldr x8,[x8, #0x10]
71001ccd74  cbz x8,0x71001ccd98
71001ccd78  ldr x20,[x8, #0x10]
71001ccd7c  b 0x71001ccd9c
71001ccd80  adrp x0,0x71042c4000
71001ccd84  add x0,x0,#0x35f
71001ccd88  mov w1,#0x47
71001ccd8c  orr w2,wzr,#0xe0000003
71001ccd90  mov w3,wzr
71001ccd94  bl 0x71001b1300
71001ccd98  mov x20,xzr
71001ccd9c  ldr x8,[x20, #0x78]!
71001ccda0  ldr x8,[x8, #0x10]
71001ccda4  mov x0,x20
71001ccda8  blr x8
71001ccdac  mov x0,x19
71001ccdb0  bl 0x71001d1710
71001ccdb4  tbz w0,#0x0,0x71001ccdc8
71001ccdb8  mov x0,x19
71001ccdbc  bl 0x71001d11f0
71001ccdc0  mov w19,#0x1
71001ccdc4  b 0x71001ccdcc
71001ccdc8  mov w19,wzr
71001ccdcc  ldr x8,[x20]
71001ccdd0  ldr x8,[x8, #0x20]
71001ccdd4  mov x0,x20
71001ccdd8  blr x8
71001ccddc  mov w0,w19
71001ccde0  ldp x29,x30,[sp, #0x20]
71001ccde4  ldp x20,x19,[sp, #0x10]
71001ccde8  ldr x21,[sp], #0x30
71001ccdec  ret
