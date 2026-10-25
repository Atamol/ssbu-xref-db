// addr:      7101bca1b0
// offset:    0x1bca1b0
// name:      FUN_7101bca1b0
// mangled:   
// size:      208

7101bca1b0  mov x8,x0
7101bca1b4  ldr x9,[x8, #0x8]!
7101bca1b8  ldr x11,[x8, #0x8]
7101bca1bc  sub x11,x11,x9
7101bca1c0  sxtw x10,w1
7101bca1c4  asr x11,x11,#0x2
7101bca1c8  cmp x11,x10
7101bca1cc  b.ls 0x7101bca270
7101bca1d0  ldr w8,[x9, x10, LSL #0x2]
7101bca1d4  cmp w8,#0x6
7101bca1d8  b.hi 0x7101bca22c
7101bca1dc  add x9,x0,w2, UXTW  #0x4
7101bca1e0  add x0,x9,#0x28
7101bca1e4  adrp x9,0x71044f8000
7101bca1e8  add x9,x9,#0xb8c
7101bca1ec  ldrsw x8,[x9, x8, LSL #0x2]
7101bca1f0  add x8,x8,x9
7101bca1f4  br x8
7101bca1f8  adrp x1,0x71042f8000
7101bca1fc  add x1,x1,#0x144
7101bca200  b 0x710377a120
7101bca204  adrp x1,0x71042d6000
7101bca208  add x1,x1,#0x159
7101bca20c  mov w2,#0x1
7101bca210  orr w3,wzr,#0x3
7101bca214  b 0x710377a280
7101bca218  adrp x1,0x71042d6000
7101bca21c  add x1,x1,#0x159
7101bca220  mov w2,#0x1
7101bca224  mov w3,#0x1
7101bca228  b 0x710377a280
7101bca22c  ret
7101bca230  adrp x1,0x71042d6000
7101bca234  add x1,x1,#0x159
7101bca238  mov w2,#0x1
7101bca23c  mov w3,#0x2
7101bca240  b 0x710377a280
7101bca244  adrp x1,0x71042d6000
7101bca248  add x1,x1,#0x159
7101bca24c  mov w2,#0x1
7101bca250  mov w3,wzr
7101bca254  b 0x710377a280
7101bca258  adrp x1,0x710436c000
7101bca25c  add x1,x1,#0x176
7101bca260  b 0x710377a120
7101bca264  adrp x1,0x71043df000
7101bca268  add x1,x1,#0xf7d
7101bca26c  b 0x710377a120
7101bca270  stp x29,x30,[sp, #-0x10]!
7101bca274  mov x29,sp
7101bca278  mov x0,x8
7101bca27c  bl 0x71039c1330
