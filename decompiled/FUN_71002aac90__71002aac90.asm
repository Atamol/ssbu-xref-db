// addr:      71002aac90
// offset:    0x2aac90
// name:      FUN_71002aac90
// mangled:   
// size:      416

71002aac90  str x21,[sp, #-0x30]!
71002aac94  stp x20,x19,[sp, #0x10]
71002aac98  stp x29,x30,[sp, #0x20]
71002aac9c  add x29,sp,#0x20
71002aaca0  adrp x8,0x71052a4000
71002aaca4  ldr x8,[x8, #0xda8]
71002aaca8  adrp x21,0x71052a4000
71002aacac  ldrb w8,[x8]
71002aacb0  ldr x21,[x21, #0xdb0]
71002aacb4  mov x19,x0
71002aacb8  add x20,x21,#0x28
71002aacbc  cbz w8,0x71002aacf8
71002aacc0  adrp x8,0x71052a4000
71002aacc4  ldr x8,[x8, #0xdb8]
71002aacc8  ldr x0,[x8]
71002aaccc  bl 0x7101717960
71002aacd0  ldr w8,[x0]
71002aacd4  cbz w8,0x71002aacf8
71002aacd8  ldr x10,[x21, #0xa0]
71002aacdc  ldp x9,x10,[x10]
71002aace0  sub x10,x10,x9
71002aace4  asr x10,x10,#0x3
71002aace8  cmp x10,x8
71002aacec  b.ls 0x71002aad10
71002aacf0  ldr x8,[x9, x8, LSL #0x3]
71002aacf4  add x20,x8,#0x20
71002aacf8  ldr x8,[x20]
71002aacfc  cbz x8,0x71002aad28
71002aad00  ldr x8,[x8, #0x10]
71002aad04  cbz x8,0x71002aad28
71002aad08  ldr x20,[x8, #0x10]
71002aad0c  b 0x71002aad2c
71002aad10  adrp x0,0x71042c4000
71002aad14  add x0,x0,#0x35f
71002aad18  mov w1,#0x47
71002aad1c  orr w2,wzr,#0xe0000003
71002aad20  mov w3,wzr
71002aad24  bl 0x71001b1300
71002aad28  mov x20,xzr
71002aad2c  ldr x8,[x20, #0x78]!
71002aad30  ldr x8,[x8, #0x10]
71002aad34  mov x0,x20
71002aad38  blr x8
71002aad3c  ldr x21,[x19, #0x38]
71002aad40  cbz x21,0x71002aad88
71002aad44  add x0,x21,#0x100
71002aad48  bl 0x71001d0a10
71002aad4c  mov w1,#0x5
71002aad50  mov x0,x21
71002aad54  bl 0x71001d6410
71002aad58  ldr x0,[x19, #0x38]
71002aad5c  add x8,x0,#0x8
71002aad60  ldar w11,[x8]
71002aad64  ldaxr w10,[x8]
71002aad68  sub w9,w11,#0x1
71002aad6c  cmp w10,w11
71002aad70  b.ne 0x71002aad90
71002aad74  stlxr w11,w9,[x8]
71002aad78  cbnz w11,0x71002aad94
71002aad7c  mov w11,#0x1
71002aad80  tbz w11,#0x0,0x71002aad9c
71002aad84  b 0x71002aade4
71002aad88  mov w19,wzr
71002aad8c  b 0x71002aae0c
71002aad90  clrex 
71002aad94  mov w11,wzr
71002aad98  tbnz w11,#0x0,0x71002aade4
71002aad9c  ldaxr w11,[x8]
71002aada0  sub w9,w10,#0x1
71002aada4  cmp w11,w10
71002aada8  b.ne 0x71002aadc4
71002aadac  stlxr w10,w9,[x8]
71002aadb0  cbz w10,0x71002aadd8
71002aadb4  mov w12,wzr
71002aadb8  mov w10,w11
71002aadbc  cbz w12,0x71002aad9c
71002aadc0  b 0x71002aade4
71002aadc4  clrex 
71002aadc8  mov w12,wzr
71002aadcc  mov w10,w11
71002aadd0  cbz w12,0x71002aad9c
71002aadd4  b 0x71002aade4
71002aadd8  mov w12,#0x1
71002aaddc  mov w10,w11
71002aade0  cbz w12,0x71002aad9c
71002aade4  cbnz w9,0x71002aae04
71002aade8  ldrb w8,[x0, #0xc]
71002aadec  cbnz w8,0x71002aae04
71002aadf0  mov w8,#0x1
71002aadf4  strb w8,[x0, #0xc]
71002aadf8  ldr x8,[x0]
71002aadfc  ldr x8,[x8, #0x8]
71002aae00  blr x8
71002aae04  str xzr,[x19, #0x38]
71002aae08  mov w19,#0x1
71002aae0c  ldr x8,[x20]
71002aae10  ldr x8,[x8, #0x20]
71002aae14  mov x0,x20
71002aae18  blr x8
71002aae1c  mov w0,w19
71002aae20  ldp x29,x30,[sp, #0x20]
71002aae24  ldp x20,x19,[sp, #0x10]
71002aae28  ldr x21,[sp], #0x30
71002aae2c  ret
