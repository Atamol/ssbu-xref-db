// addr:      71001ed7a0
// offset:    0x1ed7a0
// name:      FUN_71001ed7a0
// mangled:   
// size:      644

71001ed7a0  sub sp,sp,#0xd0
71001ed7a4  str x23,[sp, #0x90]
71001ed7a8  stp x22,x21,[sp, #0xa0]
71001ed7ac  stp x20,x19,[sp, #0xb0]
71001ed7b0  stp x29,x30,[sp, #0xc0]
71001ed7b4  add x29,sp,#0xc0
71001ed7b8  adrp x23,0x71052a4000
71001ed7bc  ldr x23,[x23, #0xda8]
71001ed7c0  adrp x22,0x71052a4000
71001ed7c4  ldrb w8,[x23]
71001ed7c8  ldr x22,[x22, #0xdb0]
71001ed7cc  mov x19,x0
71001ed7d0  add x20,x22,#0x18
71001ed7d4  cbz w8,0x71001ed810
71001ed7d8  adrp x8,0x71052a4000
71001ed7dc  ldr x8,[x8, #0xdb8]
71001ed7e0  ldr x0,[x8]
71001ed7e4  bl 0x7101717960
71001ed7e8  ldr w8,[x0]
71001ed7ec  cbz w8,0x71001ed810
71001ed7f0  ldr x10,[x22, #0xa0]
71001ed7f4  ldp x9,x10,[x10]
71001ed7f8  sub x10,x10,x9
71001ed7fc  asr x10,x10,#0x3
71001ed800  cmp x10,x8
71001ed804  b.ls 0x71001ed9ac
71001ed808  ldr x8,[x9, x8, LSL #0x3]
71001ed80c  add x20,x8,#0x10
71001ed810  ldr x8,[x20]
71001ed814  cbz x8,0x71001ed9c4
71001ed818  ldr x8,[x8, #0x10]
71001ed81c  cbz x8,0x71001ed9c4
71001ed820  ldrb w8,[x23]
71001ed824  add x20,x22,#0x28
71001ed828  cbz w8,0x71001ed864
71001ed82c  adrp x8,0x71052a4000
71001ed830  ldr x8,[x8, #0xdb8]
71001ed834  ldr x0,[x8]
71001ed838  bl 0x7101717960
71001ed83c  ldr w8,[x0]
71001ed840  cbz w8,0x71001ed864
71001ed844  ldr x10,[x22, #0xa0]
71001ed848  ldp x9,x10,[x10]
71001ed84c  sub x10,x10,x9
71001ed850  asr x10,x10,#0x3
71001ed854  cmp x10,x8
71001ed858  b.ls 0x71001eda0c
71001ed85c  ldr x8,[x9, x8, LSL #0x3]
71001ed860  add x20,x8,#0x20
71001ed864  ldr x8,[x20]
71001ed868  ldr x8,[x8, #0x10]
71001ed86c  ldr x0,[x8, #0x18]
71001ed870  ldr w1,[x19, #0xa0]
71001ed874  bl 0x71001cd7d0
71001ed878  cbz x0,0x71001ed9c4
71001ed87c  ldrb w8,[x23]
71001ed880  add x20,x22,#0x18
71001ed884  cbz w8,0x71001ed8c0
71001ed888  adrp x8,0x71052a4000
71001ed88c  ldr x8,[x8, #0xdb8]
71001ed890  ldr x0,[x8]
71001ed894  bl 0x7101717960
71001ed898  ldr w8,[x0]
71001ed89c  cbz w8,0x71001ed8c0
71001ed8a0  ldr x10,[x22, #0xa0]
71001ed8a4  ldp x9,x10,[x10]
71001ed8a8  sub x10,x10,x9
71001ed8ac  asr x10,x10,#0x3
71001ed8b0  cmp x10,x8
71001ed8b4  b.ls 0x71001eda0c
71001ed8b8  ldr x8,[x9, x8, LSL #0x3]
71001ed8bc  add x20,x8,#0x10
71001ed8c0  ldr x8,[x20]
71001ed8c4  ldr x8,[x8, #0x10]
71001ed8c8  ldr x8,[x8, #0x198]
71001ed8cc  ldr x20,[x8, #0x10]
71001ed8d0  cbz x20,0x71001ed9c4
71001ed8d4  mov x0,sp
71001ed8d8  add x21,x19,#0xa8
71001ed8dc  bl 0x71001beb40
71001ed8e0  ldr x8,[x20]
71001ed8e4  ldr x8,[x8, #0x30]
71001ed8e8  mov x2,sp
71001ed8ec  mov w3,#0x1
71001ed8f0  mov x0,x20
71001ed8f4  mov x1,x21
71001ed8f8  blr x8
71001ed8fc  mov x0,sp
71001ed900  bl 0x71001bef00
71001ed904  ldrb w8,[x23]
71001ed908  add x20,x22,#0x28
71001ed90c  cbz w8,0x71001ed948
71001ed910  adrp x8,0x71052a4000
71001ed914  ldr x8,[x8, #0xdb8]
71001ed918  ldr x0,[x8]
71001ed91c  bl 0x7101717960
71001ed920  ldr w8,[x0]
71001ed924  cbz w8,0x71001ed948
71001ed928  ldr x10,[x22, #0xa0]
71001ed92c  ldp x9,x10,[x10]
71001ed930  sub x10,x10,x9
71001ed934  asr x10,x10,#0x3
71001ed938  cmp x10,x8
71001ed93c  b.ls 0x71001eda0c
71001ed940  ldr x8,[x9, x8, LSL #0x3]
71001ed944  add x20,x8,#0x20
71001ed948  ldr x8,[x20]
71001ed94c  ldr x8,[x8, #0x10]
71001ed950  ldr x0,[x8, #0x18]
71001ed954  ldr w1,[x19, #0xa0]
71001ed958  ldr w2,[x19, #0xc0]
71001ed95c  bl 0x71001d3780
71001ed960  adrp x8,0x71052a6000
71001ed964  ldr x8,[x8, #0xc28]
71001ed968  adrp x9,0x71052a7000
71001ed96c  ldr x9,[x9, #0x28]
71001ed970  mov x1,sp
71001ed974  add x8,x8,#0x10
71001ed978  stp x8,x9,[sp]
71001ed97c  adrp x8,0x7104411000
71001ed980  add x8,x8,#0x4cc
71001ed984  mov x0,x19
71001ed988  stp xzr,x8,[sp, #0x10]
71001ed98c  bl 0x71001d3d60
71001ed990  mov x8,sp
71001ed994  bl 0x71001b12a0
71001ed998  ldr x8,[sp]
71001ed99c  mov w9,#0x1388
71001ed9a0  add x8,x8,x9
71001ed9a4  str x8,[x19, #0x138]
71001ed9a8  b 0x71001ed9f4
71001ed9ac  adrp x0,0x71042c4000
71001ed9b0  add x0,x0,#0x35f
71001ed9b4  mov w1,#0x47
71001ed9b8  orr w2,wzr,#0xe0000003
71001ed9bc  mov w3,wzr
71001ed9c0  bl 0x71001b1300
71001ed9c4  adrp x8,0x71052a6000
71001ed9c8  ldr x8,[x8, #0xc28]
71001ed9cc  adrp x9,0x71052a7000
71001ed9d0  ldr x9,[x9, #0x30]
71001ed9d4  mov x1,sp
71001ed9d8  add x8,x8,#0x10
71001ed9dc  stp x8,x9,[sp]
71001ed9e0  adrp x8,0x7104411000
71001ed9e4  add x8,x8,#0x4cc
71001ed9e8  mov x0,x19
71001ed9ec  stp xzr,x8,[sp, #0x10]
71001ed9f0  bl 0x71001d3d60
71001ed9f4  ldp x29,x30,[sp, #0xc0]
71001ed9f8  ldr x23,[sp, #0x90]
71001ed9fc  ldp x20,x19,[sp, #0xb0]
71001eda00  ldp x22,x21,[sp, #0xa0]
71001eda04  add sp,sp,#0xd0
71001eda08  ret
71001eda0c  adrp x0,0x71042c4000
71001eda10  add x0,x0,#0x35f
71001eda14  mov w1,#0x47
71001eda18  orr w2,wzr,#0xe0000003
71001eda1c  mov w3,wzr
71001eda20  bl 0x71001b1300
