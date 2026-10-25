// addr:      71000db590
// offset:    0xdb590
// name:      FUN_71000db590
// mangled:   
// size:      1220

71000db590  sub sp,sp,#0xd0
71000db594  str x27,[sp, #0x70]
71000db598  stp x26,x25,[sp, #0x80]
71000db59c  stp x24,x23,[sp, #0x90]
71000db5a0  stp x22,x21,[sp, #0xa0]
71000db5a4  stp x20,x19,[sp, #0xb0]
71000db5a8  stp x29,x30,[sp, #0xc0]
71000db5ac  add x29,sp,#0xc0
71000db5b0  mov x19,x8
71000db5b4  cbz x1,0x71000db5c4
71000db5b8  ldr w8,[x1]
71000db5bc  cmp w8,#0x1
71000db5c0  b.ne 0x71000db5d0
71000db5c4  mov w8,#0xc07
71000db5c8  movk w8,#0x1, LSL #16
71000db5cc  b 0x71000db5f4
71000db5d0  ldr x8,[x0, #0x2c0]
71000db5d4  mov x20,x0
71000db5d8  cbnz x8,0x71000db5e8
71000db5dc  ldr w8,[x20, #0x154]
71000db5e0  cmp w8,#0x1
71000db5e4  b.ne 0x71000db644
71000db5e8  mov w8,#0xc07
71000db5ec  movk w8,#0x1, LSL #16
71000db5f0  add w8,w8,#0x1
71000db5f4  str w8,[sp, #0x28]
71000db5f8  add x8,sp,#0x28
71000db5fc  orr x20,x8,#0x4
71000db600  mov x0,x20
71000db604  bl 0x71039c0a80
71000db608  mov x1,sp
71000db60c  mov x0,x20
71000db610  str wzr,[sp]
71000db614  bl 0x71039c0a90
71000db618  add x1,sp,#0x28
71000db61c  mov x0,x19
71000db620  bl 0x71000bce50
71000db624  ldp x29,x30,[sp, #0xc0]
71000db628  ldr x27,[sp, #0x70]
71000db62c  ldp x20,x19,[sp, #0xb0]
71000db630  ldp x22,x21,[sp, #0xa0]
71000db634  ldp x24,x23,[sp, #0x90]
71000db638  ldp x26,x25,[sp, #0x80]
71000db63c  add sp,sp,#0xd0
71000db640  ret
71000db644  str x1,[x20, #0x2c0]
71000db648  adrp x22,0x71052a5000
71000db64c  ldr x22,[x22, #0x80]
71000db650  ldr x0,[x22]
71000db654  add x21,x20,#0x140
71000db658  cbz x0,0x71000dba10
71000db65c  bl 0x7100148da0
71000db660  and w8,w0,#0xff
71000db664  cmp w8,#0x2
71000db668  b.cc 0x71000dba10
71000db66c  ldr x0,[x22]
71000db670  bl 0x7100148d80
71000db674  tbz w0,#0x0,0x71000dba10
71000db678  ldr x0,[x22]
71000db67c  bl 0x7100148da0
71000db680  mov w22,w0
71000db684  ldr x0,[x20, #0x60]
71000db688  cbz x0,0x71000db6b4
71000db68c  ldr x8,[x0]
71000db690  ldr x8,[x8, #0x18]
71000db694  blr x8
71000db698  adrp x8,0x71052a4000
71000db69c  ldr x8,[x8, #0xd88]
71000db6a0  mov x23,x0
71000db6a4  ldr x0,[x8]
71000db6a8  bl 0x71000c36b0
71000db6ac  cmp x23,x0
71000db6b0  b.ne 0x71000db6c4
71000db6b4  mov w24,wzr
71000db6b8  ldr x0,[x20, #0x68]
71000db6bc  cbnz x0,0x71000db700
71000db6c0  b 0x71000db75c
71000db6c4  ldr x24,[x20, #0x128]
71000db6c8  orr w0,wzr,#0x18
71000db6cc  bl 0x71001b1820
71000db6d0  stp x24,x23,[x0, #0x8]
71000db6d4  str xzr,[x0]
71000db6d8  ldr x8,[x24]
71000db6dc  str x8,[x0]
71000db6e0  str x0,[x8, #0x8]
71000db6e4  ldr x8,[x24, #0x10]
71000db6e8  add x8,x8,#0x1
71000db6ec  str x0,[x24]
71000db6f0  str x8,[x24, #0x10]
71000db6f4  mov w24,#0x1
71000db6f8  ldr x0,[x20, #0x68]
71000db6fc  cbz x0,0x71000db75c
71000db700  ldr x8,[x0]
71000db704  ldr x8,[x8, #0x18]
71000db708  blr x8
71000db70c  adrp x8,0x71052a4000
71000db710  ldr x8,[x8, #0xd88]
71000db714  mov x23,x0
71000db718  ldr x0,[x8]
71000db71c  bl 0x71000c36b0
71000db720  cmp x23,x0
71000db724  b.eq 0x71000db75c
71000db728  ldr x25,[x20, #0x128]
71000db72c  orr w0,wzr,#0x18
71000db730  bl 0x71001b1820
71000db734  stp x25,x23,[x0, #0x8]
71000db738  add w24,w24,#0x1
71000db73c  str xzr,[x0]
71000db740  ldr x8,[x25]
71000db744  str x8,[x0]
71000db748  str x0,[x8, #0x8]
71000db74c  ldr x8,[x25, #0x10]
71000db750  add x8,x8,#0x1
71000db754  str x0,[x25]
71000db758  str x8,[x25, #0x10]
71000db75c  ldr x0,[x20, #0x70]
71000db760  cbz x0,0x71000db7c0
71000db764  ldr x8,[x0]
71000db768  ldr x8,[x8, #0x18]
71000db76c  blr x8
71000db770  adrp x8,0x71052a4000
71000db774  ldr x8,[x8, #0xd88]
71000db778  mov x23,x0
71000db77c  ldr x0,[x8]
71000db780  bl 0x71000c36b0
71000db784  cmp x23,x0
71000db788  b.eq 0x71000db7c0
71000db78c  ldr x25,[x20, #0x128]
71000db790  orr w0,wzr,#0x18
71000db794  bl 0x71001b1820
71000db798  stp x25,x23,[x0, #0x8]
71000db79c  add w24,w24,#0x1
71000db7a0  str xzr,[x0]
71000db7a4  ldr x8,[x25]
71000db7a8  str x8,[x0]
71000db7ac  str x0,[x8, #0x8]
71000db7b0  ldr x8,[x25, #0x10]
71000db7b4  add x8,x8,#0x1
71000db7b8  str x0,[x25]
71000db7bc  str x8,[x25, #0x10]
71000db7c0  ldr x0,[x20, #0x78]
71000db7c4  cbz x0,0x71000db824
71000db7c8  ldr x8,[x0]
71000db7cc  ldr x8,[x8, #0x18]
71000db7d0  blr x8
71000db7d4  adrp x8,0x71052a4000
71000db7d8  ldr x8,[x8, #0xd88]
71000db7dc  mov x23,x0
71000db7e0  ldr x0,[x8]
71000db7e4  bl 0x71000c36b0
71000db7e8  cmp x23,x0
71000db7ec  b.eq 0x71000db824
71000db7f0  ldr x25,[x20, #0x128]
71000db7f4  orr w0,wzr,#0x18
71000db7f8  bl 0x71001b1820
71000db7fc  stp x25,x23,[x0, #0x8]
71000db800  add w24,w24,#0x1
71000db804  str xzr,[x0]
71000db808  ldr x8,[x25]
71000db80c  str x8,[x0]
71000db810  str x0,[x8, #0x8]
71000db814  ldr x8,[x25, #0x10]
71000db818  add x8,x8,#0x1
71000db81c  str x0,[x25]
71000db820  str x8,[x25, #0x10]
71000db824  ldr x8,[x20, #0xc0]
71000db828  ldr x2,[x20, #0x128]
71000db82c  add x0,x8,#0x160
71000db830  cmp x0,x2
71000db834  b.eq 0x71000db844
71000db838  ldr x1,[x2, #0x8]
71000db83c  mov x3,xzr
71000db840  bl 0x71000eba40
71000db844  sub w8,w22,w24
71000db848  cbnz w24,0x71000db858
71000db84c  ldr x9,[x20, #0xc0]
71000db850  and w10,w8,#0xff
71000db854  strh w10,[x9, #0x1a8]
71000db858  mov w22,#0x47
71000db85c  and w3,w8,#0xff
71000db860  adrp x2,0x710424e000
71000db864  add x2,x2,#0x707
71000db868  add x0,sp,#0x28
71000db86c  mov x1,x22
71000db870  add x24,sp,#0x28
71000db874  bl 0x71039c0770
71000db878  mov w23,w0
71000db87c  ldr x0,[x20, #0x60]
71000db880  cbz x0,0x71000db898
71000db884  ldr x8,[x0]
71000db888  ldr x8,[x8, #0x18]
71000db88c  blr x8
71000db890  mov x3,x0
71000db894  b 0x71000db89c
71000db898  mov x3,xzr
71000db89c  sxtw x8,w23
71000db8a0  mov w25,#0x20
71000db8a4  add x26,x8,#0x1
71000db8a8  strb w25,[x24, x8, LSL ]
71000db8ac  add x0,x24,x26
71000db8b0  mov w24,#0x46
71000db8b4  sub w8,w24,w23
71000db8b8  sxtw x1,w8
71000db8bc  adrp x2,0x710425e000
71000db8c0  add x2,x2,#0x550
71000db8c4  bl 0x71039c0770
71000db8c8  sxtw x8,w0
71000db8cc  ldr x0,[x20, #0x68]
71000db8d0  add x26,x8,w26, SXTW 
71000db8d4  cbz x0,0x71000db8ec
71000db8d8  ldr x8,[x0]
71000db8dc  ldr x8,[x8, #0x18]
71000db8e0  blr x8
71000db8e4  mov x3,x0
71000db8e8  b 0x71000db8f0
71000db8ec  mov x3,xzr
71000db8f0  add x23,sp,#0x28
71000db8f4  add x27,x26,#0x1
71000db8f8  sub w8,w24,w26
71000db8fc  add x0,x23,x27
71000db900  sxtw x1,w8
71000db904  adrp x2,0x710425e000
71000db908  add x2,x2,#0x550
71000db90c  strb w25,[x23, x26, LSL ]
71000db910  bl 0x71039c0770
71000db914  sxtw x8,w0
71000db918  ldr x0,[x20, #0x70]
71000db91c  add x26,x8,w27, SXTW 
71000db920  cbz x0,0x71000db938
71000db924  ldr x8,[x0]
71000db928  ldr x8,[x8, #0x18]
71000db92c  blr x8
71000db930  mov x3,x0
71000db934  b 0x71000db93c
71000db938  mov x3,xzr
71000db93c  add x27,x26,#0x1
71000db940  sub w8,w24,w26
71000db944  mov w25,#0x20
71000db948  add x0,x23,x27
71000db94c  sxtw x1,w8
71000db950  adrp x2,0x710425e000
71000db954  add x2,x2,#0x550
71000db958  strb w25,[x23, x26, LSL ]
71000db95c  bl 0x71039c0770
71000db960  sxtw x8,w0
71000db964  ldr x0,[x20, #0x78]
71000db968  add x23,x8,w27, SXTW 
71000db96c  cbz x0,0x71000db984
71000db970  ldr x8,[x0]
71000db974  ldr x8,[x8, #0x18]
71000db978  blr x8
71000db97c  mov x3,x0
71000db980  b 0x71000db988
71000db984  mov x3,xzr
71000db988  add x26,sp,#0x28
71000db98c  add x27,x23,#0x1
71000db990  sub w8,w24,w23
71000db994  add x0,x26,x27
71000db998  sxtw x1,w8
71000db99c  adrp x2,0x710425e000
71000db9a0  add x2,x2,#0x550
71000db9a4  strb w25,[x26, x23, LSL ]
71000db9a8  bl 0x71039c0770
71000db9ac  add w8,w0,w27
71000db9b0  mov x0,sp
71000db9b4  cmp w8,#0x47
71000db9b8  csel w8,w8,w22,lt
71000db9bc  strb wzr,[x26, w8, SXTW ]
71000db9c0  adrp x8,0x71052a4000
71000db9c4  ldr x8,[x8, #0xd80]
71000db9c8  ldr x22,[x20, #0xc0]
71000db9cc  strb wzr,[sp, #0x8]
71000db9d0  add x23,x8,#0x10
71000db9d4  mov x8,sp
71000db9d8  add x8,x8,#0x8
71000db9dc  str x8,[sp, #0x18]
71000db9e0  mov w8,#0x10
71000db9e4  mov x2,#-0x1
71000db9e8  add x1,sp,#0x28
71000db9ec  str x23,[sp]
71000db9f0  str x8,[sp, #0x20]
71000db9f4  bl 0x71001b47e0
71000db9f8  add x0,x22,#0x180
71000db9fc  mov x1,sp
71000dba00  bl 0x71001b2f70
71000dba04  mov x0,sp
71000dba08  str x23,[sp]
71000dba0c  bl 0x71001b4910
71000dba10  ldr x0,[x20, #0x58]
71000dba14  ldr x2,[x20, #0xc0]
71000dba18  mov x1,x21
71000dba1c  ldr x3,[x20, #0xa8]
71000dba20  bl 0x710024e400
71000dba24  tbz w0,#0x0,0x71000dba48
71000dba28  ldr x0,[x20, #0x2c0]
71000dba2c  bl 0x71000b4160
71000dba30  ldr x0,[x20, #0xa0]
71000dba34  ldr x8,[x0]
71000dba38  ldr x8,[x8, #0x40]
71000dba3c  blr x8
71000dba40  str wzr,[sp, #0x28]
71000dba44  b 0x71000db5f8
71000dba48  mov w8,#0xac5a
71000dba4c  str xzr,[x20, #0x2c0]
71000dba50  b 0x71000db5f4
