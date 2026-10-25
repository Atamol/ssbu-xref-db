// addr:      71001df750
// offset:    0x1df750
// name:      FUN_71001df750
// mangled:   
// size:      276

71001df750  stp x22,x21,[sp, #-0x30]!
71001df754  stp x20,x19,[sp, #0x10]
71001df758  stp x29,x30,[sp, #0x20]
71001df75c  add x29,sp,#0x20
71001df760  add x19,x0,#0x58
71001df764  mov x0,x19
71001df768  mov x20,x1
71001df76c  bl 0x71001bef20
71001df770  cbz w0,0x71001df83c
71001df774  ldr x8,[x20]
71001df778  ldr x8,[x8, #0x80]
71001df77c  mov w1,#0xffffffff
71001df780  mov x0,x20
71001df784  blr x8
71001df788  ldr x8,[x20]
71001df78c  ldr x8,[x8, #0x70]
71001df790  mov x0,x20
71001df794  blr x8
71001df798  adrp x8,0x71052a4000
71001df79c  ldr x8,[x8, #0xda8]
71001df7a0  adrp x22,0x71052a4000
71001df7a4  ldrb w8,[x8]
71001df7a8  ldr x22,[x22, #0xdb0]
71001df7ac  add x21,x22,#0x18
71001df7b0  cbz w8,0x71001df7ec
71001df7b4  adrp x8,0x71052a4000
71001df7b8  ldr x8,[x8, #0xdb8]
71001df7bc  ldr x0,[x8]
71001df7c0  bl 0x7101717960
71001df7c4  ldr w8,[x0]
71001df7c8  cbz w8,0x71001df7ec
71001df7cc  ldr x10,[x22, #0xa0]
71001df7d0  ldp x9,x10,[x10]
71001df7d4  sub x10,x10,x9
71001df7d8  asr x10,x10,#0x3
71001df7dc  cmp x10,x8
71001df7e0  b.ls 0x71001df84c
71001df7e4  ldr x8,[x9, x8, LSL #0x3]
71001df7e8  add x21,x8,#0x10
71001df7ec  ldr x8,[x21]
71001df7f0  ldr x8,[x8, #0x10]
71001df7f4  ldr x0,[x8, #0xe8]
71001df7f8  ldr x8,[x0]
71001df7fc  ldr x8,[x8, #0x78]
71001df800  blr x8
71001df804  ldrb w8,[x20, #0x78]
71001df808  mov x21,x0
71001df80c  cbnz w8,0x71001df818
71001df810  add x0,x20,#0x10
71001df814  bl 0x71001f2180
71001df818  ldr x8,[x21, #0x18]
71001df81c  ldr x1,[x20, #0x18]
71001df820  mov x2,x19
71001df824  ldp x29,x30,[sp, #0x20]
71001df828  mov w3,#0x1
71001df82c  ldp x20,x19,[sp, #0x10]
71001df830  add x0,x8,#0x90
71001df834  ldp x22,x21,[sp], #0x30
71001df838  b 0x71001f7bc0
71001df83c  ldp x29,x30,[sp, #0x20]
71001df840  ldp x20,x19,[sp, #0x10]
71001df844  ldp x22,x21,[sp], #0x30
71001df848  ret
71001df84c  adrp x0,0x71042c4000
71001df850  add x0,x0,#0x35f
71001df854  mov w1,#0x47
71001df858  orr w2,wzr,#0xe0000003
71001df85c  mov w3,wzr
71001df860  bl 0x71001b1300
