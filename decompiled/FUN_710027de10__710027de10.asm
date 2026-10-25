// addr:      710027de10
// offset:    0x27de10
// name:      FUN_710027de10
// mangled:   
// size:      584

710027de10  sub sp,sp,#0x60
710027de14  str x21,[sp, #0x30]
710027de18  stp x20,x19,[sp, #0x40]
710027de1c  stp x29,x30,[sp, #0x50]
710027de20  add x29,sp,#0x50
710027de24  adrp x8,0x71052a4000
710027de28  ldr x8,[x8, #0xda8]
710027de2c  adrp x21,0x71052a4000
710027de30  ldrb w8,[x8]
710027de34  ldr x21,[x21, #0xdb0]
710027de38  mov x19,x0
710027de3c  add x20,x21,#0x28
710027de40  cbz w8,0x710027de7c
710027de44  adrp x8,0x71052a4000
710027de48  ldr x8,[x8, #0xdb8]
710027de4c  ldr x0,[x8]
710027de50  bl 0x7101717960
710027de54  ldr w8,[x0]
710027de58  cbz w8,0x710027de7c
710027de5c  ldr x10,[x21, #0xa0]
710027de60  ldp x9,x10,[x10]
710027de64  sub x10,x10,x9
710027de68  asr x10,x10,#0x3
710027de6c  cmp x10,x8
710027de70  b.ls 0x710027e030
710027de74  ldr x8,[x9, x8, LSL #0x3]
710027de78  add x20,x8,#0x20
710027de7c  ldr x8,[x20]
710027de80  ldr x8,[x8, #0x10]
710027de84  ldr x0,[x8, #0x18]
710027de88  ldr w1,[x19, #0xa0]
710027de8c  bl 0x71001cd7d0
710027de90  cbz x0,0x710027dea8
710027de94  ldr w8,[x19, #0xd4]
710027de98  cmp w8,#0x2
710027de9c  b.eq 0x710027ded0
710027dea0  cmp w8,#0x4
710027dea4  b.ne 0x710027df5c
710027dea8  mov w8,#0x4
710027deac  movk w8,#0x8001, LSL #16
710027deb0  add x0,sp,#0x8
710027deb4  sub x1,x29,#0x18
710027deb8  stur w8,[x29, #-0x18]
710027debc  bl 0x71001b4200
710027dec0  add x1,sp,#0x8
710027dec4  mov x0,x19
710027dec8  bl 0x710027ca30
710027decc  b 0x710027e01c
710027ded0  mov w21,wzr
710027ded4  ldp x9,x10,[x19, #0x1c0]
710027ded8  ldr w8,[x19, #0x5fc]
710027dedc  sub x10,x10,x9
710027dee0  asr x10,x10,#0x5
710027dee4  cmp x10,x8
710027dee8  b.ls 0x710027e048
710027deec  add x8,x9,x8, LSL #0x5
710027def0  ldr x8,[x8, #0x10]
710027def4  add x0,sp,#0x8
710027def8  add x20,x19,#0x3d8
710027defc  str x8,[x19, #0x3e8]
710027df00  bl 0x71001cde10
710027df04  orr w8,wzr,#0x1f8
710027df08  str x8,[sp, #0x28]
710027df0c  ldr x8,[sp, #0x8]
710027df10  stur x20,[x29, #-0x18]
710027df14  ldr x8,[x8, #0x30]
710027df18  add x0,sp,#0x8
710027df1c  sub x1,x29,#0x18
710027df20  add x2,sp,#0x28
710027df24  mov w3,#0x1
710027df28  blr x8
710027df2c  str w0,[x19, #0x5d0]
710027df30  add x0,sp,#0x8
710027df34  bl 0x71001cb860
710027df38  ldr x0,[x19, #0x5f0]
710027df3c  tbz w21,#0x0,0x710027dfa0
710027df40  ldr x8,[x0]
710027df44  ldr x3,[x19, #0x3e8]
710027df48  mov x1,x20
710027df4c  mov x2,xzr
710027df50  ldr x8,[x8, #0x18]
710027df54  blr x8
710027df58  b 0x710027dfe0
710027df5c  ldp x8,x9,[x19, #0x118]
710027df60  ldr x10,[x19, #0x128]
710027df64  add x0,sp,#0x8
710027df68  stp x9,x10,[sp, #0x10]
710027df6c  str x8,[sp, #0x8]
710027df70  bl 0x71001b11f0
710027df74  cmp w0,#0x69
710027df78  b.ne 0x710027dec0
710027df7c  mov w8,#0x1
710027df80  movk w8,#0x8069, LSL #16
710027df84  add x0,sp,#0x8
710027df88  sub x1,x29,#0x18
710027df8c  stur w8,[x29, #-0x18]
710027df90  bl 0x71001b4260
710027df94  tbnz w0,#0x0,0x710027dec0
710027df98  mov w21,#0x1
710027df9c  b 0x710027ded4
710027dfa0  ldr x10,[x19, #0x5e0]
710027dfa4  ldr x9,[x19, #0x5d8]
710027dfa8  sub x10,x10,x9
710027dfac  ldr w8,[x19, #0x5f8]
710027dfb0  asr x10,x10,#0x3
710027dfb4  cmp x10,x8
710027dfb8  b.ls 0x710027e050
710027dfbc  ldr x2,[x9, x8, LSL #0x3]
710027dfc0  ldr x8,[x0]
710027dfc4  ldr x3,[x19, #0x3e8]
710027dfc8  mov x1,x20
710027dfcc  ldr x8,[x8, #0x18]
710027dfd0  blr x8
710027dfd4  ldr w8,[x19, #0x5f8]
710027dfd8  add w8,w8,#0x1
710027dfdc  str w8,[x19, #0x5f8]
710027dfe0  adrp x8,0x71052a6000
710027dfe4  ldr x8,[x8, #0xc28]
710027dfe8  ldr w9,[x19, #0x5fc]
710027dfec  add w9,w9,#0x1
710027dff0  str w9,[x19, #0x5fc]
710027dff4  adrp x9,0x71052a8000
710027dff8  ldr x9,[x9, #0x3b8]
710027dffc  add x8,x8,#0x10
710027e000  add x1,sp,#0x8
710027e004  stp x8,x9,[sp, #0x8]
710027e008  adrp x8,0x7104411000
710027e00c  add x8,x8,#0x4cc
710027e010  mov x0,x19
710027e014  stp xzr,x8,[sp, #0x18]
710027e018  bl 0x71001d3d60
710027e01c  ldp x29,x30,[sp, #0x50]
710027e020  ldr x21,[sp, #0x30]
710027e024  ldp x20,x19,[sp, #0x40]
710027e028  add sp,sp,#0x60
710027e02c  ret
710027e030  adrp x0,0x71042c4000
710027e034  add x0,x0,#0x35f
710027e038  mov w1,#0x47
710027e03c  orr w2,wzr,#0xe0000003
710027e040  mov w3,wzr
710027e044  bl 0x71001b1300
710027e048  add x0,x19,#0x1c0
710027e04c  bl 0x71039c1330
710027e050  add x0,x19,#0x5d8
710027e054  bl 0x71039c1330
