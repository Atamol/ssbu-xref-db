// addr:      71001df120
// offset:    0x1df120
// name:      FUN_71001df120
// mangled:   
// size:      804

71001df120  sub sp,sp,#0x80
71001df124  str x25,[sp, #0x30]
71001df128  stp x24,x23,[sp, #0x40]
71001df12c  stp x22,x21,[sp, #0x50]
71001df130  stp x20,x19,[sp, #0x60]
71001df134  stp x29,x30,[sp, #0x70]
71001df138  add x29,sp,#0x70
71001df13c  adrp x9,0x71052a6000
71001df140  ldr x9,[x9, #0xde8]
71001df144  adrp x10,0x71052a4000
71001df148  ldr x10,[x10, #0xd80]
71001df14c  add x8,sp,#0x8
71001df150  add x8,x8,#0x8
71001df154  and w23,w3,#0x1
71001df158  and w24,w4,#0x1
71001df15c  add x9,x9,#0x10
71001df160  mov w21,w2
71001df164  mov x19,x0
71001df168  mov x22,x1
71001df16c  add x25,x10,#0x10
71001df170  add x20,x0,#0x10
71001df174  adrp x1,0x71042a2000
71001df178  add x1,x1,#0x521
71001df17c  str x9,[x0]
71001df180  str x8,[sp, #0x20]
71001df184  mov w8,#0x10
71001df188  str x25,[sp, #0x8]
71001df18c  strb wzr,[sp, #0x10]
71001df190  mov x2,#-0x1
71001df194  add x0,sp,#0x8
71001df198  str x8,[sp, #0x28]
71001df19c  bl 0x71001b47e0
71001df1a0  add x1,sp,#0x8
71001df1a4  mov x0,x20
71001df1a8  bl 0x71001d22e0
71001df1ac  adrp x8,0x71052a6000
71001df1b0  ldr x8,[x8, #0xdf0]
71001df1b4  add x8,x8,#0x10
71001df1b8  add x0,sp,#0x8
71001df1bc  str x8,[x19, #0x10]
71001df1c0  str x25,[sp, #0x8]
71001df1c4  bl 0x71001b4910
71001df1c8  add x0,x19,#0x58
71001df1cc  bl 0x71001beb40
71001df1d0  str wzr,[x19, #0xf0]
71001df1d4  adrp x8,0x71052a6000
71001df1d8  ldr x8,[x8, #0xdf8]
71001df1dc  str xzr,[x19, #0x120]
71001df1e0  strb w23,[x19, #0x128]
71001df1e4  add x8,x8,#0x10
71001df1e8  stp x22,x8,[x19, #0x100]
71001df1ec  add x8,x19,#0x110
71001df1f0  stp x8,x8,[x19, #0x110]
71001df1f4  strb w24,[x19, #0x129]
71001df1f8  str w21,[x19, #0x12c]
71001df1fc  adrp x21,0x71052a4000
71001df200  ldr x21,[x21, #0xda8]
71001df204  str xzr,[x19, #0xe8]
71001df208  strb wzr,[x19, #0xf8]
71001df20c  ldrb w8,[x21]
71001df210  cbz w8,0x71001df228
71001df214  adrp x8,0x71052a4000
71001df218  ldr x8,[x8, #0xdb8]
71001df21c  ldr x0,[x8]
71001df220  bl 0x7101717960
71001df224  ldr w8,[x0]
71001df228  mov x0,x20
71001df22c  str w8,[x19, #0x8]
71001df230  bl 0x71001d4d00
71001df234  adrp x22,0x71052a4000
71001df238  ldrb w8,[x21]
71001df23c  ldr x22,[x22, #0xdb0]
71001df240  add x20,x22,#0x18
71001df244  cbz w8,0x71001df284
71001df248  adrp x8,0x71052a4000
71001df24c  ldr x8,[x8, #0xdb8]
71001df250  ldr x0,[x8]
71001df254  bl 0x7101717960
71001df258  ldr w8,[x0]
71001df25c  cbz w8,0x71001df284
71001df260  ldr x10,[x22, #0xa0]
71001df264  ldp x9,x10,[x10]
71001df268  sub x10,x10,x9
71001df26c  asr x10,x10,#0x3
71001df270  cmp x10,x8
71001df274  b.ls 0x71001df42c
71001df278  ldr x8,[x9, x8, LSL #0x3]
71001df27c  add x8,x8,#0x10
71001df280  b 0x71001df288
71001df284  mov x8,x20
71001df288  ldr x8,[x8]
71001df28c  ldr x8,[x8, #0x10]
71001df290  ldr x0,[x8, #0xe8]
71001df294  ldr x8,[x0]
71001df298  ldr x8,[x8, #0x78]
71001df29c  blr x8
71001df2a0  ldr x8,[x0, #0x18]
71001df2a4  add x0,x8,#0x90
71001df2a8  mov x1,xzr
71001df2ac  bl 0x71001df450
71001df2b0  ldrb w8,[x21]
71001df2b4  cbz w8,0x71001df2f8
71001df2b8  adrp x8,0x71052a4000
71001df2bc  ldr x8,[x8, #0xdb8]
71001df2c0  ldr x0,[x8]
71001df2c4  bl 0x7101717960
71001df2c8  ldr w8,[x0]
71001df2cc  cbz w8,0x71001df2f4
71001df2d0  ldr x10,[x22, #0xa0]
71001df2d4  ldp x9,x10,[x10]
71001df2d8  sub x10,x10,x9
71001df2dc  asr x10,x10,#0x3
71001df2e0  cmp x10,x8
71001df2e4  b.ls 0x71001df42c
71001df2e8  ldr x8,[x9, x8, LSL #0x3]
71001df2ec  add x20,x8,#0x10
71001df2f0  b 0x71001df2f8
71001df2f4  add x20,x22,#0x18
71001df2f8  ldr x8,[x20]
71001df2fc  ldr x8,[x8, #0x10]
71001df300  ldr x0,[x8, #0xe8]
71001df304  ldr x8,[x0]
71001df308  ldr x8,[x8, #0x78]
71001df30c  blr x8
71001df310  ldrb w8,[x0, #0x9]
71001df314  strb wzr,[x0, #0x8]
71001df318  cbz w8,0x71001df348
71001df31c  ldr x8,[x0, #0x18]
71001df320  ldr x9,[x8, #0xc0]
71001df324  mov x20,x0
71001df328  cbz x9,0x71001df348
71001df32c  ldr w1,[x8, #0x8]
71001df330  add x0,x9,#0xf0
71001df334  mov w2,#0x1
71001df338  bl 0x71001f54b0
71001df33c  mvn w8,w0
71001df340  and w8,w8,#0x1
71001df344  strb w8,[x20, #0x9]
71001df348  ldrb w20,[x19, #0x129]
71001df34c  ldrb w8,[x21]
71001df350  add x19,x22,#0x18
71001df354  cbz w8,0x71001df390
71001df358  adrp x8,0x71052a4000
71001df35c  ldr x8,[x8, #0xdb8]
71001df360  ldr x0,[x8]
71001df364  bl 0x7101717960
71001df368  ldr w8,[x0]
71001df36c  cbz w8,0x71001df390
71001df370  ldr x10,[x22, #0xa0]
71001df374  ldp x9,x10,[x10]
71001df378  sub x10,x10,x9
71001df37c  asr x10,x10,#0x3
71001df380  cmp x10,x8
71001df384  b.ls 0x71001df42c
71001df388  ldr x8,[x9, x8, LSL #0x3]
71001df38c  add x19,x8,#0x10
71001df390  ldr x8,[x19]
71001df394  ldr x8,[x8, #0x10]
71001df398  ldr x0,[x8, #0xe8]
71001df39c  ldr x8,[x0]
71001df3a0  ldr x8,[x8, #0x78]
71001df3a4  blr x8
71001df3a8  mov x19,x0
71001df3ac  cbz w20,0x71001df3dc
71001df3b0  ldr x1,[x19, #0x18]
71001df3b4  mov w8,#0x1
71001df3b8  strb w8,[x19, #0x8]
71001df3bc  ldr x8,[x1, #0xc0]
71001df3c0  cbz x8,0x71001df410
71001df3c4  add x0,x8,#0xf0
71001df3c8  mov w2,#0x1
71001df3cc  mov x3,xzr
71001df3d0  bl 0x71001f5750
71001df3d4  and w8,w0,#0x1
71001df3d8  b 0x71001df40c
71001df3dc  ldrb w8,[x19, #0x9]
71001df3e0  strb wzr,[x19, #0x8]
71001df3e4  cbz w8,0x71001df410
71001df3e8  ldr x8,[x19, #0x18]
71001df3ec  ldr x9,[x8, #0xc0]
71001df3f0  cbz x9,0x71001df410
71001df3f4  ldr w1,[x8, #0x8]
71001df3f8  add x0,x9,#0xf0
71001df3fc  mov w2,#0x1
71001df400  bl 0x71001f54b0
71001df404  mvn w8,w0
71001df408  and w8,w8,#0x1
71001df40c  strb w8,[x19, #0x9]
71001df410  ldp x29,x30,[sp, #0x70]
71001df414  ldr x25,[sp, #0x30]
71001df418  ldp x20,x19,[sp, #0x60]
71001df41c  ldp x22,x21,[sp, #0x50]
71001df420  ldp x24,x23,[sp, #0x40]
71001df424  add sp,sp,#0x80
71001df428  ret
71001df42c  adrp x0,0x71042c4000
71001df430  add x0,x0,#0x35f
71001df434  mov w1,#0x47
71001df438  orr w2,wzr,#0xe0000003
71001df43c  mov w3,wzr
71001df440  bl 0x71001b1300
