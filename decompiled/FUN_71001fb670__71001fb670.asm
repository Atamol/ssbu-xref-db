// addr:      71001fb670
// offset:    0x1fb670
// name:      FUN_71001fb670
// mangled:   
// size:      828

71001fb670  sub sp,sp,#0x90
71001fb674  stp x28,x27,[sp, #0x30]
71001fb678  stp x26,x25,[sp, #0x40]
71001fb67c  stp x24,x23,[sp, #0x50]
71001fb680  stp x22,x21,[sp, #0x60]
71001fb684  stp x20,x19,[sp, #0x70]
71001fb688  stp x29,x30,[sp, #0x80]
71001fb68c  add x29,sp,#0x80
71001fb690  str x0,[sp, #0x10]
71001fb694  adrp x21,0x71052a4000
71001fb698  ldr x21,[x21, #0xda8]
71001fb69c  adrp x20,0x71052a4000
71001fb6a0  ldrb w8,[x21]
71001fb6a4  ldr x20,[x20, #0xdb0]
71001fb6a8  mov x19,x1
71001fb6ac  add x22,x20,#0x28
71001fb6b0  cbz w8,0x71001fb6ec
71001fb6b4  adrp x8,0x71052a4000
71001fb6b8  ldr x8,[x8, #0xdb8]
71001fb6bc  ldr x0,[x8]
71001fb6c0  bl 0x7101717960
71001fb6c4  ldr w8,[x0]
71001fb6c8  cbz w8,0x71001fb6ec
71001fb6cc  ldr x10,[x20, #0xa0]
71001fb6d0  ldp x9,x10,[x10]
71001fb6d4  sub x10,x10,x9
71001fb6d8  asr x10,x10,#0x3
71001fb6dc  cmp x10,x8
71001fb6e0  b.ls 0x71001fb704
71001fb6e4  ldr x8,[x9, x8, LSL #0x3]
71001fb6e8  add x22,x8,#0x20
71001fb6ec  ldr x8,[x22]
71001fb6f0  cbz x8,0x71001fb71c
71001fb6f4  ldr x8,[x8, #0x10]
71001fb6f8  cbz x8,0x71001fb71c
71001fb6fc  ldr x24,[x8, #0x10]
71001fb700  b 0x71001fb720
71001fb704  adrp x0,0x71042c4000
71001fb708  add x0,x0,#0x35f
71001fb70c  mov w1,#0x47
71001fb710  orr w2,wzr,#0xe0000003
71001fb714  mov w3,wzr
71001fb718  bl 0x71001b1300
71001fb71c  mov x24,xzr
71001fb720  ldr x8,[x24, #0x78]!
71001fb724  ldr x8,[x8, #0x10]
71001fb728  mov x0,x24
71001fb72c  blr x8
71001fb730  ldr x8,[x19, #0x10]
71001fb734  cbz x8,0x71001fb784
71001fb738  ldp x8,x22,[x19]
71001fb73c  ldr x9,[x8, #0x8]
71001fb740  ldr x10,[x22]
71001fb744  str x9,[x10, #0x8]
71001fb748  ldr x8,[x8, #0x8]
71001fb74c  cmp x22,x19
71001fb750  str x10,[x8]
71001fb754  str xzr,[x19, #0x10]
71001fb758  b.eq 0x71001fb784
71001fb75c  mov x0,x22
71001fb760  ldr x23,[x22, #0x8]
71001fb764  ldr x8,[x0, #0x10]!
71001fb768  ldr x8,[x8]
71001fb76c  blr x8
71001fb770  mov x0,x22
71001fb774  bl 0x71001b1870
71001fb778  cmp x23,x19
71001fb77c  mov x22,x23
71001fb780  b.ne 0x71001fb75c
71001fb784  ldrb w8,[x21]
71001fb788  add x21,x20,#0x18
71001fb78c  str x24,[sp, #0x8]
71001fb790  cbz w8,0x71001fb7cc
71001fb794  adrp x8,0x71052a4000
71001fb798  ldr x8,[x8, #0xdb8]
71001fb79c  ldr x0,[x8]
71001fb7a0  bl 0x7101717960
71001fb7a4  ldr w8,[x0]
71001fb7a8  cbz w8,0x71001fb7cc
71001fb7ac  ldr x10,[x20, #0xa0]
71001fb7b0  ldp x9,x10,[x10]
71001fb7b4  sub x10,x10,x9
71001fb7b8  asr x10,x10,#0x3
71001fb7bc  cmp x10,x8
71001fb7c0  b.ls 0x71001fb964
71001fb7c4  ldr x8,[x9, x8, LSL #0x3]
71001fb7c8  add x21,x8,#0x10
71001fb7cc  ldr x8,[x21]
71001fb7d0  cbz x8,0x71001fb97c
71001fb7d4  adrp x9,0x71052a6000
71001fb7d8  ldr x8,[x8, #0x10]
71001fb7dc  ldr x9,[x9, #0xe78]
71001fb7e0  cmp x8,#0x0
71001fb7e4  ldr x0,[x9]
71001fb7e8  ccmp x0,#0x0,#0x4,ne
71001fb7ec  b.eq 0x71001fb97c
71001fb7f0  ldr x8,[sp, #0x10]
71001fb7f4  ldr x28,[x8, #0x2c8]
71001fb7f8  ldr x8,[x8, #0x2d0]
71001fb7fc  cmp x28,x8
71001fb800  b.eq 0x71001fb97c
71001fb804  adrp x8,0x71052a6000
71001fb808  ldr x8,[x8, #0xe70]
71001fb80c  add x27,sp,#0x18
71001fb810  mov w21,#0x1
71001fb814  mov w22,#0x90
71001fb818  add x20,x8,#0x10
71001fb81c  b 0x71001fb82c
71001fb820  adrp x8,0x71052a6000
71001fb824  ldr x8,[x8, #0xe78]
71001fb828  ldr x0,[x8]
71001fb82c  stp x27,x27,[sp, #0x18]
71001fb830  add x1,sp,#0x18
71001fb834  str xzr,[sp, #0x28]
71001fb838  ldr x8,[x0]
71001fb83c  ldr x8,[x8, #0x10]
71001fb840  blr x8
71001fb844  ldr x8,[sp, #0x28]
71001fb848  cbz x8,0x71001fb94c
71001fb84c  ldr x24,[sp, #0x20]
71001fb850  ldrh w23,[x28, #0x4]
71001fb854  ldrb w8,[x24, #0x78]
71001fb858  cbnz w8,0x71001fb864
71001fb85c  add x0,x24,#0x10
71001fb860  bl 0x71001f2180
71001fb864  ldr x0,[x24, #0x18]
71001fb868  mov w1,w23
71001fb86c  bl 0x71001bee30
71001fb870  strb wzr,[x24, #0x79]
71001fb874  ldr x8,[sp, #0x20]
71001fb878  mov w0,#0x80
71001fb87c  add x24,x8,#0x10
71001fb880  bl 0x71001b1820
71001fb884  mov x25,x0
71001fb888  mov x8,x0
71001fb88c  str xzr,[x0]
71001fb890  str x20,[x25, #0x10]!
71001fb894  str xzr,[x8, #0x30]!
71001fb898  str x8,[x0, #0x28]
71001fb89c  mov x8,x0
71001fb8a0  mov x23,x0
71001fb8a4  str xzr,[x8, #0x48]!
71001fb8a8  stp xzr,x8,[x0, #0x38]
71001fb8ac  mov x8,x0
71001fb8b0  str xzr,[x8, #0x60]!
71001fb8b4  stp xzr,x8,[x0, #0x50]
71001fb8b8  strh w21,[x0, #0x78]
71001fb8bc  strb wzr,[x0, #0x7a]
71001fb8c0  stp xzr,xzr,[x0, #0x68]
71001fb8c4  mov x0,x22
71001fb8c8  bl 0x71001af850
71001fb8cc  mov x26,x0
71001fb8d0  cbz x0,0x71001fb8dc
71001fb8d4  mov x0,x26
71001fb8d8  bl 0x71001beb40
71001fb8dc  mov x0,x25
71001fb8e0  mov x1,x24
71001fb8e4  str x26,[x23, #0x18]
71001fb8e8  bl 0x71001f1f40
71001fb8ec  str x19,[x23, #0x8]
71001fb8f0  ldr x8,[x19]
71001fb8f4  str x8,[x23]
71001fb8f8  str x23,[x8, #0x8]
71001fb8fc  ldr x8,[x19, #0x10]
71001fb900  add x8,x8,#0x1
71001fb904  str x23,[x19]
71001fb908  str x8,[x19, #0x10]
71001fb90c  ldr x23,[sp, #0x20]
71001fb910  ldp x8,x9,[x23]
71001fb914  str x9,[x8, #0x8]
71001fb918  ldr x9,[x23, #0x8]
71001fb91c  str x8,[x9]
71001fb920  ldr x8,[sp, #0x28]
71001fb924  sub x8,x8,#0x1
71001fb928  str x8,[sp, #0x28]
71001fb92c  mov x0,x23
71001fb930  ldr x8,[x0, #0x10]!
71001fb934  ldr x8,[x8]
71001fb938  blr x8
71001fb93c  mov x0,x23
71001fb940  bl 0x71001b1870
71001fb944  ldr x8,[sp, #0x28]
71001fb948  cbnz x8,0x71001fb84c
71001fb94c  ldr x8,[sp, #0x10]
71001fb950  ldr x8,[x8, #0x2d0]
71001fb954  add x28,x28,#0x10
71001fb958  cmp x28,x8
71001fb95c  b.ne 0x71001fb820
71001fb960  b 0x71001fb97c
71001fb964  adrp x0,0x71042c4000
71001fb968  add x0,x0,#0x35f
71001fb96c  mov w1,#0x47
71001fb970  orr w2,wzr,#0xe0000003
71001fb974  mov w3,wzr
71001fb978  bl 0x71001b1300
71001fb97c  ldr x0,[sp, #0x8]
71001fb980  ldr x8,[x0]
71001fb984  ldr x8,[x8, #0x20]
71001fb988  blr x8
71001fb98c  ldp x29,x30,[sp, #0x80]
71001fb990  ldp x20,x19,[sp, #0x70]
71001fb994  ldp x22,x21,[sp, #0x60]
71001fb998  ldp x24,x23,[sp, #0x50]
71001fb99c  ldp x26,x25,[sp, #0x40]
71001fb9a0  ldp x28,x27,[sp, #0x30]
71001fb9a4  add sp,sp,#0x90
71001fb9a8  ret
