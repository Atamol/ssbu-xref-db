// addr:      7102de6460
// offset:    0x2de6460
// name:      FUN_7102de6460
// mangled:   
// size:      924

7102de6460  sub sp,sp,#0x50
7102de6464  str x23,[sp, #0x10]
7102de6468  stp x22,x21,[sp, #0x20]
7102de646c  stp x20,x19,[sp, #0x30]
7102de6470  stp x29,x30,[sp, #0x40]
7102de6474  add x29,sp,#0x40
7102de6478  ldr x8,[x0, #0x310]
7102de647c  ldp x9,x10,[x8, #0xd0]
7102de6480  mov x19,x0
7102de6484  cmp x9,x10
7102de6488  b.eq 0x7102de64c0
7102de648c  mov x23,#0x177c
7102de6490  movk x23,#0xd6d1, LSL #16
7102de6494  movk x23,#0x10, LSL #32
7102de6498  ldr w8,[x9, #0x8]
7102de649c  cmp w8,#0x1
7102de64a0  b.hi 0x7102de64b4
7102de64a4  ldr x8,[x9]
7102de64a8  ldr x11,[x8, #0x68]
7102de64ac  cmp x11,x23
7102de64b0  b.eq 0x7102de651c
7102de64b4  add x9,x9,#0x10
7102de64b8  cmp x10,x9
7102de64bc  b.ne 0x7102de6498
7102de64c0  ldr x8,[x19, #0x310]
7102de64c4  ldp x9,x10,[x8, #0xd0]
7102de64c8  cmp x9,x10
7102de64cc  b.eq 0x7102de6504
7102de64d0  mov x23,#0xf517
7102de64d4  movk x23,#0x3a75, LSL #16
7102de64d8  movk x23,#0x13, LSL #32
7102de64dc  ldr w8,[x9, #0x8]
7102de64e0  cmp w8,#0x1
7102de64e4  b.hi 0x7102de64f8
7102de64e8  ldr x8,[x9]
7102de64ec  ldr x11,[x8, #0x68]
7102de64f0  cmp x11,x23
7102de64f4  b.eq 0x7102de6554
7102de64f8  add x9,x9,#0x10
7102de64fc  cmp x10,x9
7102de6500  b.ne 0x7102de64dc
7102de6504  ldp x29,x30,[sp, #0x40]
7102de6508  ldr x23,[sp, #0x10]
7102de650c  ldp x20,x19,[sp, #0x30]
7102de6510  ldp x22,x21,[sp, #0x20]
7102de6514  add sp,sp,#0x50
7102de6518  ret
7102de651c  cbz x8,0x7102de64c0
7102de6520  ldr x9,[x19, #0x300]
7102de6524  ldr x10,[x9, #0x18]
7102de6528  ldp x9,x10,[x10]
7102de652c  cmp x9,x10
7102de6530  b.eq 0x7102de65b0
7102de6534  ldr x11,[x9], #0x8
7102de6538  ldr x12,[x11, #0xa0]
7102de653c  and x12,x12,#0xffffffffff
7102de6540  cmp x12,x23
7102de6544  b.eq 0x7102de658c
7102de6548  cmp x10,x9
7102de654c  b.ne 0x7102de6534
7102de6550  b 0x7102de65b0
7102de6554  cbz x8,0x7102de6504
7102de6558  ldr x9,[x19, #0x300]
7102de655c  ldr x10,[x9, #0x18]
7102de6560  ldp x9,x10,[x10]
7102de6564  cmp x9,x10
7102de6568  b.eq 0x7102de66d8
7102de656c  ldr x11,[x9], #0x8
7102de6570  ldr x12,[x11, #0xa0]
7102de6574  and x12,x12,#0xffffffffff
7102de6578  cmp x12,x23
7102de657c  b.eq 0x7102de66b4
7102de6580  cmp x10,x9
7102de6584  b.ne 0x7102de656c
7102de6588  b 0x7102de66d8
7102de658c  ldr x9,[x11, #0x110]
7102de6590  cbz x9,0x7102de65b0
7102de6594  ldp x10,x11,[x9]
7102de6598  cmp x10,x11
7102de659c  csel x20,xzr,x9,eq
7102de65a0  ldr x8,[x8, #0xd8]
7102de65a4  cbnz x8,0x7102de65bc
7102de65a8  mov w21,#0xffffffff
7102de65ac  b 0x7102de65e0
7102de65b0  mov x20,xzr
7102de65b4  ldr x8,[x8, #0xd8]
7102de65b8  cbz x8,0x7102de65a8
7102de65bc  ldr x8,[x8, #0x8]
7102de65c0  ldr x0,[x8, #0x8]
7102de65c4  ldr x8,[x0]
7102de65c8  ldr x8,[x8, #0x20]
7102de65cc  mov x1,#0x8ce3
7102de65d0  movk x1,#0x2ed6, LSL #16
7102de65d4  movk x1,#0x10, LSL #32
7102de65d8  blr x8
7102de65dc  mov w21,w0
7102de65e0  mov w1,#0x1d0
7102de65e4  mov w0,#0x10
7102de65e8  bl 0x710392e290
7102de65ec  mov x22,x0
7102de65f0  cbnz x0,0x7102de663c
7102de65f4  adrp x8,0x7105332000
7102de65f8  ldr x0,[x8, #0xf00]
7102de65fc  cbz x0,0x7102de6638
7102de6600  mov w8,#0x1d0
7102de6604  str wzr,[sp, #0x1c]
7102de6608  add x1,sp,#0x1c
7102de660c  str x8,[sp, #0x8]
7102de6610  ldr x8,[x0]
7102de6614  ldr x8,[x8, #0x30]
7102de6618  add x2,sp,#0x8
7102de661c  blr x8
7102de6620  tbz w0,#0x0,0x7102de6638
7102de6624  mov w1,#0x1d0
7102de6628  mov w0,#0x10
7102de662c  bl 0x710392e290
7102de6630  mov x22,x0
7102de6634  cbnz x0,0x7102de663c
7102de6638  mov x22,xzr
7102de663c  adrp x2,0x7104306000
7102de6640  add x2,x2,#0x958
7102de6644  mov x0,x22
7102de6648  mov x1,x19
7102de664c  mov x3,x20
7102de6650  mov w4,w21
7102de6654  bl 0x71031453b0
7102de6658  adrp x8,0x710513d000
7102de665c  add x8,x8,#0x780
7102de6660  mov w9,#0xfdb
7102de6664  movk w9,#0x4049, LSL #16
7102de6668  str x8,[x22]
7102de666c  mov w8,#0x1
7102de6670  mov x0,x22
7102de6674  str w9,[x22, #0x80]
7102de6678  strb w8,[x22, #0x60]
7102de667c  bl 0x710313ef20
7102de6680  ldr x8,[x19, #0x300]
7102de6684  ldr x9,[x8, #0x18]
7102de6688  ldp x8,x9,[x9]
7102de668c  cmp x8,x9
7102de6690  b.eq 0x7102de64c0
7102de6694  ldr x10,[x8], #0x8
7102de6698  ldr x11,[x10, #0xa0]
7102de669c  and x11,x11,#0xffffffffff
7102de66a0  cmp x11,x23
7102de66a4  b.eq 0x7102de67dc
7102de66a8  cmp x9,x8
7102de66ac  b.ne 0x7102de6694
7102de66b0  b 0x7102de64c0
7102de66b4  ldr x9,[x11, #0x110]
7102de66b8  cbz x9,0x7102de66d8
7102de66bc  ldp x10,x11,[x9]
7102de66c0  cmp x10,x11
7102de66c4  csel x20,xzr,x9,eq
7102de66c8  ldr x8,[x8, #0xd8]
7102de66cc  cbnz x8,0x7102de66e4
7102de66d0  mov w21,#0xffffffff
7102de66d4  b 0x7102de6708
7102de66d8  mov x20,xzr
7102de66dc  ldr x8,[x8, #0xd8]
7102de66e0  cbz x8,0x7102de66d0
7102de66e4  ldr x8,[x8, #0x8]
7102de66e8  ldr x0,[x8, #0x8]
7102de66ec  ldr x8,[x0]
7102de66f0  ldr x8,[x8, #0x20]
7102de66f4  mov x1,#0x223a
7102de66f8  movk x1,#0xcb7e, LSL #16
7102de66fc  movk x1,#0x12, LSL #32
7102de6700  blr x8
7102de6704  mov w21,w0
7102de6708  mov w1,#0x1d0
7102de670c  mov w0,#0x10
7102de6710  bl 0x710392e290
7102de6714  mov x22,x0
7102de6718  cbnz x0,0x7102de6764
7102de671c  adrp x8,0x7105332000
7102de6720  ldr x0,[x8, #0xf00]
7102de6724  cbz x0,0x7102de6760
7102de6728  mov w8,#0x1d0
7102de672c  str wzr,[sp, #0x1c]
7102de6730  add x1,sp,#0x1c
7102de6734  str x8,[sp, #0x8]
7102de6738  ldr x8,[x0]
7102de673c  ldr x8,[x8, #0x30]
7102de6740  add x2,sp,#0x8
7102de6744  blr x8
7102de6748  tbz w0,#0x0,0x7102de6760
7102de674c  mov w1,#0x1d0
7102de6750  mov w0,#0x10
7102de6754  bl 0x710392e290
7102de6758  mov x22,x0
7102de675c  cbnz x0,0x7102de6764
7102de6760  mov x22,xzr
7102de6764  adrp x2,0x71043ab000
7102de6768  add x2,x2,#0xcbf
7102de676c  mov x0,x22
7102de6770  mov x1,x19
7102de6774  mov x3,x20
7102de6778  mov w4,w21
7102de677c  bl 0x71031453b0
7102de6780  adrp x8,0x710513d000
7102de6784  add x8,x8,#0x780
7102de6788  mov w9,#0xfdb
7102de678c  movk w9,#0x4049, LSL #16
7102de6790  str x8,[x22]
7102de6794  mov w8,#0x1
7102de6798  mov x0,x22
7102de679c  str w9,[x22, #0x80]
7102de67a0  strb w8,[x22, #0x60]
7102de67a4  bl 0x710313ef20
7102de67a8  ldr x8,[x19, #0x300]
7102de67ac  ldr x9,[x8, #0x18]
7102de67b0  ldp x8,x9,[x9]
7102de67b4  cmp x8,x9
7102de67b8  b.eq 0x7102de6504
7102de67bc  ldr x10,[x8], #0x8
7102de67c0  ldr x11,[x10, #0xa0]
7102de67c4  and x11,x11,#0xffffffffff
7102de67c8  cmp x11,x23
7102de67cc  b.eq 0x7102de67ec
7102de67d0  cmp x9,x8
7102de67d4  b.ne 0x7102de67bc
7102de67d8  b 0x7102de6504
7102de67dc  ldr x8,[x10, #0x130]
7102de67e0  cbz x8,0x7102de64c0
7102de67e4  str x8,[x22, #0xc0]
7102de67e8  b 0x7102de64c0
7102de67ec  ldr x8,[x10, #0x130]
7102de67f0  cbz x8,0x7102de6504
7102de67f4  str x8,[x22, #0xc0]
7102de67f8  b 0x7102de6504
