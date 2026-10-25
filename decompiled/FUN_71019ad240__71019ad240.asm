// addr:      71019ad240
// offset:    0x19ad240
// name:      FUN_71019ad240
// mangled:   
// size:      624

71019ad240  stp x22,x21,[sp, #-0x30]!
71019ad244  stp x20,x19,[sp, #0x10]
71019ad248  stp x29,x30,[sp, #0x20]
71019ad24c  add x29,sp,#0x20
71019ad250  mov x8,#0x2
71019ad254  movk x8,#0x3, LSL #32
71019ad258  str wzr,[x0, #0x400]
71019ad25c  str x8,[x0, #0x3f8]
71019ad260  adrp x8,0x7105314000
71019ad264  add x8,x8,#0x4d8
71019ad268  ldarb w8,[x8]
71019ad26c  mov x19,x0
71019ad270  tbz w8,#0x0,0x71019ad46c
71019ad274  adrp x8,0x7105307000
71019ad278  ldr w1,[x8, #0xd50]
71019ad27c  adrp x8,0x710532f000
71019ad280  ldr x20,[x8, #0x7b0]
71019ad284  ldr x0,[x20, #0x8]
71019ad288  mov x21,#-0x3f00000000000000
71019ad28c  bl 0x71032df050
71019ad290  adrp x8,0x710532f000
71019ad294  ldr x8,[x8, #0x730]
71019ad298  ldr x8,[x8, #0x8]
71019ad29c  ldr x22,[x0, #0x8]
71019ad2a0  ldr x0,[x8, #0x168]
71019ad2a4  mov x1,#0x4ff6
71019ad2a8  movk x1,#0x915a, LSL #16
71019ad2ac  movk x1,#0x12, LSL #32
71019ad2b0  bl 0x71032631a0
71019ad2b4  and x10,x22,#-0x100000000000000
71019ad2b8  and x9,x22,#0xffffffffff
71019ad2bc  and x8,x0,#0xffffffffff
71019ad2c0  cmp x10,x21
71019ad2c4  ccmp x9,#0x0,#0x4,eq
71019ad2c8  b.ne 0x71019ad2fc
71019ad2cc  and x9,x0,#-0x100000000000000
71019ad2d0  cmp x9,x21
71019ad2d4  ccmp x8,#0x0,#0x4,eq
71019ad2d8  b.ne 0x71019ad318
71019ad2dc  adrp x8,0x7104329000
71019ad2e0  add x8,x8,#0x8fb
71019ad2e4  adrp x9,0x710438c000
71019ad2e8  add x9,x9,#0x1fb
71019ad2ec  str x8,[x19, #0x308]
71019ad2f0  adrp x8,0x710426f000
71019ad2f4  add x8,x8,#0x8da
71019ad2f8  b 0x71019ad334
71019ad2fc  and x9,x0,#-0x100000000000000
71019ad300  cmp x9,x21
71019ad304  ccmp x8,#0x0,#0x4,eq
71019ad308  eor x8,x0,x22
71019ad30c  and x8,x8,#0xffffffffff
71019ad310  ccmp x8,#0x0,#0x0,ne
71019ad314  b.eq 0x71019ad2dc
71019ad318  adrp x8,0x7104329000
71019ad31c  add x8,x8,#0x8fb
71019ad320  adrp x9,0x7104291000
71019ad324  add x9,x9,#0x4e6
71019ad328  str x8,[x19, #0x308]
71019ad32c  adrp x8,0x710436b000
71019ad330  add x8,x8,#0xbc9
71019ad334  ldr w10,[x19, #0x31c]
71019ad338  cmp w10,#0x1
71019ad33c  csel x8,x8,x9,gt
71019ad340  str x8,[x19, #0x310]
71019ad344  mov w8,#0x100
71019ad348  strh w8,[x19, #0x320]
71019ad34c  ldr x20,[x20, #0x8]
71019ad350  mov x0,x20
71019ad354  bl 0x71039c1a40
71019ad358  mov w8,#0xa51
71019ad35c  movk w8,#0x1, LSL #16
71019ad360  mov w9,#0x1
71019ad364  strb w9,[x20, x8, LSL ]
71019ad368  mov w8,#0xa4e
71019ad36c  movk w8,#0x1, LSL #16
71019ad370  str wzr,[x20, #0xa28]
71019ad374  strh wzr,[x20, #0xa20]
71019ad378  strb wzr,[x20, x8, LSL ]
71019ad37c  mov w8,#0xa4a
71019ad380  movk w8,#0x1, LSL #16
71019ad384  str wzr,[x20, x8, LSL #0x0]
71019ad388  ldrsw x8,[x20, #0x164]
71019ad38c  cmp w8,#0x13
71019ad390  b.cs 0x71019ad4ac
71019ad394  add x8,x20,x8, LSL #0x2
71019ad398  str wzr,[x8, #0x118]
71019ad39c  ldr w8,[x20, #0x164]
71019ad3a0  cmp w8,#0x11
71019ad3a4  b.gt 0x71019ad3c4
71019ad3a8  add w8,w8,#0x1
71019ad3ac  cmp w8,#0x13
71019ad3b0  str w8,[x20, #0x164]
71019ad3b4  b.cs 0x71019ad4ac
71019ad3b8  add x8,x20,w8, SXTW  #0x2
71019ad3bc  mov w9,#0xb
71019ad3c0  str w9,[x8, #0x118]
71019ad3c4  mov x0,x20
71019ad3c8  bl 0x71039c1a50
71019ad3cc  ldrsw x8,[x19, #0x2cc]
71019ad3d0  cmp w8,#0x13
71019ad3d4  b.cs 0x71019ad4ac
71019ad3d8  add x8,x19,x8, LSL #0x2
71019ad3dc  mov w9,#0xd
71019ad3e0  str w9,[x8, #0x280]
71019ad3e4  ldr w8,[x19, #0x2cc]
71019ad3e8  cmp w8,#0x11
71019ad3ec  b.gt 0x71019ad45c
71019ad3f0  add w8,w8,#0x1
71019ad3f4  cmp w8,#0x13
71019ad3f8  str w8,[x19, #0x2cc]
71019ad3fc  b.cs 0x71019ad4ac
71019ad400  add x8,x19,w8, SXTW  #0x2
71019ad404  mov w9,#0x1
71019ad408  str w9,[x8, #0x280]
71019ad40c  ldr w8,[x19, #0x2cc]
71019ad410  cmp w8,#0x11
71019ad414  b.gt 0x71019ad45c
71019ad418  add w8,w8,#0x1
71019ad41c  cmp w8,#0x13
71019ad420  str w8,[x19, #0x2cc]
71019ad424  b.cs 0x71019ad4ac
71019ad428  add x8,x19,w8, SXTW  #0x2
71019ad42c  mov w9,#0x15
71019ad430  str w9,[x8, #0x280]
71019ad434  ldr w8,[x19, #0x2cc]
71019ad438  cmp w8,#0x11
71019ad43c  b.gt 0x71019ad45c
71019ad440  add w8,w8,#0x1
71019ad444  cmp w8,#0x13
71019ad448  str w8,[x19, #0x2cc]
71019ad44c  b.cs 0x71019ad4ac
71019ad450  add x8,x19,w8, SXTW  #0x2
71019ad454  mov w9,#0x20
71019ad458  str w9,[x8, #0x280]
71019ad45c  ldp x29,x30,[sp, #0x20]
71019ad460  ldp x20,x19,[sp, #0x10]
71019ad464  ldp x22,x21,[sp], #0x30
71019ad468  ret
71019ad46c  adrp x0,0x7105314000
71019ad470  add x0,x0,#0x4d8
71019ad474  bl 0x71039c06b0
71019ad478  cbz w0,0x71019ad274
71019ad47c  bl 0x7101764000
71019ad480  adrp x0,0x7101763000
71019ad484  add x0,x0,#0xc40
71019ad488  adrp x1,0x71052c5000
71019ad48c  add x1,x1,#0x180
71019ad490  adrp x2,0x7104f17000
71019ad494  add x2,x2,#0x0
71019ad498  bl 0x71000001c0
71019ad49c  adrp x0,0x7105314000
71019ad4a0  add x0,x0,#0x4d8
71019ad4a4  bl 0x71039c06c0
71019ad4a8  b 0x71019ad274
71019ad4ac  bl 0x71039c2650
