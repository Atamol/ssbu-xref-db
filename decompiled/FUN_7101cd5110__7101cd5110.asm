// addr:      7101cd5110
// offset:    0x1cd5110
// name:      FUN_7101cd5110
// mangled:   
// size:      448

7101cd5110  str x21,[sp, #-0x30]!
7101cd5114  stp x20,x19,[sp, #0x10]
7101cd5118  stp x29,x30,[sp, #0x20]
7101cd511c  add x29,sp,#0x20
7101cd5120  ldr w8,[x0, #0x164]
7101cd5124  mov x20,x1
7101cd5128  mov x19,x0
7101cd512c  cbnz w8,0x7101cd51a0
7101cd5130  ldr x0,[x19, #0x258]
7101cd5134  ldr x8,[x0]
7101cd5138  ldr x8,[x8, #0x70]
7101cd513c  mov w1,wzr
7101cd5140  blr x8
7101cd5144  ldr x0,[x19, #0x260]
7101cd5148  ldr x8,[x0]
7101cd514c  ldr x8,[x8, #0x70]
7101cd5150  mov w1,wzr
7101cd5154  blr x8
7101cd5158  ldr x0,[x19, #0x270]
7101cd515c  ldr x8,[x0]
7101cd5160  ldr x8,[x8, #0x70]
7101cd5164  mov w1,wzr
7101cd5168  blr x8
7101cd516c  ldr x0,[x19, #0x280]
7101cd5170  ldr x8,[x0]
7101cd5174  ldr x8,[x8, #0x70]
7101cd5178  mov w1,wzr
7101cd517c  blr x8
7101cd5180  ldr x8,[x19, #0x2a0]
7101cd5184  orr w9,wzr,#0xfffffffe
7101cd5188  str w9,[x8, #0xf0]
7101cd518c  ldr x0,[x19, #0x178]
7101cd5190  fmov s0,0x3f800000
7101cd5194  adrp x1,0x7104292000
7101cd5198  add x1,x1,#0x1b0
7101cd519c  bl 0x7103778300
7101cd51a0  add x21,x19,#0x298
7101cd51a4  mov x0,x21
7101cd51a8  mov x1,x20
7101cd51ac  bl 0x71032d6350
7101cd51b0  ldr x8,[x19, #0x2a0]
7101cd51b4  ldr w9,[x8, #0xb8]
7101cd51b8  cmp w9,#0x1
7101cd51bc  b.lt 0x7101cd5200
7101cd51c0  ldr w8,[x8, #0xf0]
7101cd51c4  cmn w8,#0x2
7101cd51c8  b.eq 0x7101cd52bc
7101cd51cc  cbz w8,0x7101cd5250
7101cd51d0  cmp w8,#0x1
7101cd51d4  b.ne 0x7101cd5278
7101cd51d8  ldr w8,[x19, #0x15c]
7101cd51dc  cmp w8,#0x11
7101cd51e0  b.gt 0x7101cd52bc
7101cd51e4  add w8,w8,#0x1
7101cd51e8  cmp w8,#0x13
7101cd51ec  str w8,[x19, #0x15c]
7101cd51f0  b.cs 0x7101cd52cc
7101cd51f4  add x8,x19,w8, SXTW  #0x2
7101cd51f8  mov w9,#0xb
7101cd51fc  b 0x7101cd52b8
7101cd5200  ldr x8,[x19, #0x290]
7101cd5204  cbz x8,0x7101cd5214
7101cd5208  ldr x8,[x8, #0x8]
7101cd520c  mov w9,#0x1
7101cd5210  strb w9,[x8, #0x4aa]
7101cd5214  ldr x0,[x19, #0x178]
7101cd5218  fmov s0,0x3f800000
7101cd521c  adrp x1,0x71042b4000
7101cd5220  add x1,x1,#0x521
7101cd5224  bl 0x7103778300
7101cd5228  mov x0,x19
7101cd522c  bl 0x7101cd5a10
7101cd5230  ldrsw x8,[x19, #0x15c]
7101cd5234  ldr w9,[x19, #0x288]
7101cd5238  cmp w8,#0x13
7101cd523c  cbz w9,0x7101cd5284
7101cd5240  b.cs 0x7101cd52cc
7101cd5244  add x8,x19,x8, LSL #0x2
7101cd5248  orr w9,wzr,#0x7
7101cd524c  b 0x7101cd52b8
7101cd5250  ldr w8,[x19, #0x15c]
7101cd5254  cmp w8,#0x11
7101cd5258  b.gt 0x7101cd52bc
7101cd525c  add w8,w8,#0x1
7101cd5260  cmp w8,#0x13
7101cd5264  str w8,[x19, #0x15c]
7101cd5268  b.cs 0x7101cd52cc
7101cd526c  add x8,x19,w8, SXTW  #0x2
7101cd5270  mov w9,#0xa
7101cd5274  b 0x7101cd52b8
7101cd5278  mov x0,x21
7101cd527c  bl 0x71032d6200
7101cd5280  b 0x7101cd52bc
7101cd5284  b.cs 0x7101cd52cc
7101cd5288  add x8,x19,x8, LSL #0x2
7101cd528c  mov w9,#0x5
7101cd5290  str w9,[x8, #0x110]
7101cd5294  ldr w8,[x19, #0x15c]
7101cd5298  cmp w8,#0x11
7101cd529c  b.gt 0x7101cd52bc
7101cd52a0  add w8,w8,#0x1
7101cd52a4  cmp w8,#0x13
7101cd52a8  str w8,[x19, #0x15c]
7101cd52ac  b.cs 0x7101cd52cc
7101cd52b0  add x8,x19,w8, SXTW  #0x2
7101cd52b4  mov w9,#0x8
7101cd52b8  str w9,[x8, #0x110]
7101cd52bc  ldp x29,x30,[sp, #0x20]
7101cd52c0  ldp x20,x19,[sp, #0x10]
7101cd52c4  ldr x21,[sp], #0x30
7101cd52c8  ret
7101cd52cc  bl 0x71039c2650
