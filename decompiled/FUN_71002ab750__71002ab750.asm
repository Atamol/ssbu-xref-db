// addr:      71002ab750
// offset:    0x2ab750
// name:      FUN_71002ab750
// mangled:   
// size:      540

71002ab750  sub sp,sp,#0x70
71002ab754  str x25,[sp, #0x20]
71002ab758  stp x24,x23,[sp, #0x30]
71002ab75c  stp x22,x21,[sp, #0x40]
71002ab760  stp x20,x19,[sp, #0x50]
71002ab764  stp x29,x30,[sp, #0x60]
71002ab768  add x29,sp,#0x60
71002ab76c  mov x0,x1
71002ab770  mov w20,w6
71002ab774  mov x21,x5
71002ab778  mov x22,x4
71002ab77c  mov x23,x3
71002ab780  mov x24,x2
71002ab784  mov x25,x1
71002ab788  bl 0x71001ccd00
71002ab78c  tbz w0,#0x0,0x71002ab838
71002ab790  mov w0,#0x240
71002ab794  bl 0x71001af850
71002ab798  mov x19,x0
71002ab79c  cbz x0,0x71002ab7a8
71002ab7a0  mov x0,x19
71002ab7a4  bl 0x710029f7b0
71002ab7a8  ldr w1,[x25, #0x18]
71002ab7ac  mov x0,x19
71002ab7b0  mov x2,x24
71002ab7b4  mov x3,x23
71002ab7b8  mov x4,x22
71002ab7bc  mov x5,x21
71002ab7c0  mov w6,w20
71002ab7c4  bl 0x710029fc90
71002ab7c8  tbz w0,#0x0,0x71002ab870
71002ab7cc  adrp x8,0x71052a4000
71002ab7d0  ldr x8,[x8, #0xda8]
71002ab7d4  adrp x21,0x71052a4000
71002ab7d8  ldrb w8,[x8]
71002ab7dc  ldr x21,[x21, #0xdb0]
71002ab7e0  add x20,x21,#0x28
71002ab7e4  cbz w8,0x71002ab820
71002ab7e8  adrp x8,0x71052a4000
71002ab7ec  ldr x8,[x8, #0xdb8]
71002ab7f0  ldr x0,[x8]
71002ab7f4  bl 0x7101717960
71002ab7f8  ldr w8,[x0]
71002ab7fc  cbz w8,0x71002ab820
71002ab800  ldr x10,[x21, #0xa0]
71002ab804  ldp x9,x10,[x10]
71002ab808  sub x10,x10,x9
71002ab80c  asr x10,x10,#0x3
71002ab810  cmp x10,x8
71002ab814  b.ls 0x71002ab904
71002ab818  ldr x8,[x9, x8, LSL #0x3]
71002ab81c  add x20,x8,#0x20
71002ab820  ldr x8,[x20]
71002ab824  cbz x8,0x71002ab91c
71002ab828  ldr x8,[x8, #0x10]
71002ab82c  cbz x8,0x71002ab91c
71002ab830  ldr x0,[x8, #0x10]
71002ab834  b 0x71002ab920
71002ab838  mov w8,#0xd
71002ab83c  movk w8,#0x8001, LSL #16
71002ab840  add x0,sp,#0x8
71002ab844  add x1,sp,#0x2c
71002ab848  str w8,[sp, #0x2c]
71002ab84c  bl 0x71001b4200
71002ab850  ldr w8,[sp, #0x8]
71002ab854  adrp x9,0x71052a5000
71002ab858  ldr x9,[x9, #0x110]
71002ab85c  cmp w8,#0x0
71002ab860  csel x8,x9,xzr,ge
71002ab864  cmp x8,#0x0
71002ab868  cset w0,ne
71002ab86c  b 0x71002ab930
71002ab870  add x8,x19,#0x8
71002ab874  ldar w11,[x8]
71002ab878  ldaxr w10,[x8]
71002ab87c  sub w9,w11,#0x1
71002ab880  cmp w10,w11
71002ab884  b.ne 0x71002ab89c
71002ab888  stlxr w11,w9,[x8]
71002ab88c  cbnz w11,0x71002ab8a0
71002ab890  mov w11,#0x1
71002ab894  tbz w11,#0x0,0x71002ab8a8
71002ab898  b 0x71002ab8f0
71002ab89c  clrex 
71002ab8a0  mov w11,wzr
71002ab8a4  tbnz w11,#0x0,0x71002ab8f0
71002ab8a8  ldaxr w11,[x8]
71002ab8ac  sub w9,w10,#0x1
71002ab8b0  cmp w11,w10
71002ab8b4  b.ne 0x71002ab8d0
71002ab8b8  stlxr w10,w9,[x8]
71002ab8bc  cbz w10,0x71002ab8e4
71002ab8c0  mov w12,wzr
71002ab8c4  mov w10,w11
71002ab8c8  cbz w12,0x71002ab8a8
71002ab8cc  b 0x71002ab8f0
71002ab8d0  clrex 
71002ab8d4  mov w12,wzr
71002ab8d8  mov w10,w11
71002ab8dc  cbz w12,0x71002ab8a8
71002ab8e0  b 0x71002ab8f0
71002ab8e4  mov w12,#0x1
71002ab8e8  mov w10,w11
71002ab8ec  cbz w12,0x71002ab8a8
71002ab8f0  cbnz w9,0x71002ab8fc
71002ab8f4  ldrb w8,[x19, #0xc]
71002ab8f8  cbz w8,0x71002ab94c
71002ab8fc  mov w0,wzr
71002ab900  b 0x71002ab930
71002ab904  adrp x0,0x71042c4000
71002ab908  add x0,x0,#0x35f
71002ab90c  mov w1,#0x47
71002ab910  orr w2,wzr,#0xe0000003
71002ab914  mov w3,wzr
71002ab918  bl 0x71001b1300
71002ab91c  mov x0,xzr
71002ab920  mov x1,x19
71002ab924  mov w2,wzr
71002ab928  bl 0x71001ccdf0
71002ab92c  mov w0,#0x1
71002ab930  ldp x29,x30,[sp, #0x60]
71002ab934  ldr x25,[sp, #0x20]
71002ab938  ldp x20,x19,[sp, #0x50]
71002ab93c  ldp x22,x21,[sp, #0x40]
71002ab940  ldp x24,x23,[sp, #0x30]
71002ab944  add sp,sp,#0x70
71002ab948  ret
71002ab94c  mov w8,#0x1
71002ab950  strb w8,[x19, #0xc]
71002ab954  ldr x8,[x19]
71002ab958  ldr x8,[x8, #0x8]
71002ab95c  mov x0,x19
71002ab960  blr x8
71002ab964  mov w0,wzr
71002ab968  b 0x71002ab930
