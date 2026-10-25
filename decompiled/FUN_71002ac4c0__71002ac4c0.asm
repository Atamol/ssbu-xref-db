// addr:      71002ac4c0
// offset:    0x2ac4c0
// name:      FUN_71002ac4c0
// mangled:   
// size:      1140

71002ac4c0  stp x28,x27,[sp, #-0x60]!
71002ac4c4  stp x26,x25,[sp, #0x10]
71002ac4c8  stp x24,x23,[sp, #0x20]
71002ac4cc  stp x22,x21,[sp, #0x30]
71002ac4d0  stp x20,x19,[sp, #0x40]
71002ac4d4  stp x29,x30,[sp, #0x50]
71002ac4d8  add x29,sp,#0x50
71002ac4dc  sub sp,sp,#0x4c0
71002ac4e0  mov x21,x0
71002ac4e4  mov w8,#0x10000
71002ac4e8  mov x22,x1
71002ac4ec  str wzr,[x21, #0x38]!
71002ac4f0  mov x20,x21
71002ac4f4  mov x19,x0
71002ac4f8  add x0,sp,#0x28
71002ac4fc  str xzr,[x20, #0x8]!
71002ac500  str x8,[sp, #0x98]
71002ac504  add x8,sp,#0xb8
71002ac508  str xzr,[sp, #0x28]
71002ac50c  stp x8,xzr,[sp, #0xa0]
71002ac510  str wzr,[sp, #0x80]
71002ac514  stp xzr,x8,[sp, #0x88]
71002ac518  mov w8,#0x3e8
71002ac51c  stp xzr,x8,[sp, #0xb0]
71002ac520  add x8,sp,#0x90
71002ac524  stp x8,xzr,[sp, #0x40]
71002ac528  mov w8,#0x400
71002ac52c  stp xzr,xzr,[sp, #0xc0]
71002ac530  stp xzr,xzr,[sp, #0x30]
71002ac534  strh wzr,[sp, #0x3e]
71002ac538  stp xzr,xzr,[sp, #0x50]
71002ac53c  stp xzr,xzr,[sp, #0x60]
71002ac540  stp xzr,x8,[sp, #0x70]
71002ac544  ldr x8,[x1]
71002ac548  mov x1,sp
71002ac54c  stp x8,x8,[sp]
71002ac550  bl 0x71001ba380
71002ac554  ldr w8,[sp, #0x80]
71002ac558  mov w23,wzr
71002ac55c  cbz w8,0x71002ac610
71002ac560  ldr x19,[sp, #0x48]
71002ac564  cbz x19,0x71002ac5a4
71002ac568  ldr x0,[x19]
71002ac56c  cbz x0,0x71002ac590
71002ac570  ldr x8,[x19, #0x10]
71002ac574  cmp x8,x0
71002ac578  b.eq 0x71002ac6ec
71002ac57c  ldr x20,[x0, #0x10]
71002ac580  bl 0x71001b1870
71002ac584  mov x0,x20
71002ac588  str x20,[x19]
71002ac58c  cbnz x20,0x71002ac570
71002ac590  ldr x0,[x19, #0x20]
71002ac594  cbz x0,0x71002ac59c
71002ac598  bl 0x71001b1870
71002ac59c  mov x0,x19
71002ac5a0  bl 0x710353c3d0
71002ac5a4  ldr x0,[sp, #0x60]
71002ac5a8  bl 0x71001b1870
71002ac5ac  ldr x0,[sp, #0x58]
71002ac5b0  cbz x0,0x71002ac5b8
71002ac5b4  bl 0x71001b1870
71002ac5b8  ldr x0,[sp, #0x90]
71002ac5bc  cbz x0,0x71002ac5e0
71002ac5c0  ldr x8,[sp, #0xa0]
71002ac5c4  cmp x8,x0
71002ac5c8  b.eq 0x71002ac6dc
71002ac5cc  ldr x19,[x0, #0x10]
71002ac5d0  bl 0x71001b1870
71002ac5d4  mov x0,x19
71002ac5d8  str x19,[sp, #0x90]
71002ac5dc  cbnz x19,0x71002ac5c0
71002ac5e0  ldr x0,[sp, #0xb0]
71002ac5e4  cbz x0,0x71002ac5ec
71002ac5e8  bl 0x71001b1870
71002ac5ec  and w0,w23,#0x1
71002ac5f0  add sp,sp,#0x4c0
71002ac5f4  ldp x29,x30,[sp, #0x50]
71002ac5f8  ldp x20,x19,[sp, #0x40]
71002ac5fc  ldp x22,x21,[sp, #0x30]
71002ac600  ldp x24,x23,[sp, #0x20]
71002ac604  ldp x26,x25,[sp, #0x10]
71002ac608  ldp x28,x27,[sp], #0x60
71002ac60c  ret
71002ac610  adrp x8,0x710424e000
71002ac614  add x8,x8,#0xb25
71002ac618  ldr x23,[sp, #0x30]
71002ac61c  stp xzr,x8,[sp]
71002ac620  ldr w8,[sp, #0x28]
71002ac624  mov w24,#0x405
71002ac628  orr w9,wzr,#0x6
71002ac62c  str xzr,[sp, #0x10]
71002ac630  strh w24,[sp, #0x16]
71002ac634  str w9,[sp]
71002ac638  cbz w8,0x71002ac6fc
71002ac63c  mov w11,wzr
71002ac640  mov w10,#0x405
71002ac644  orr w12,wzr,#0x6
71002ac648  mov w25,#0x15
71002ac64c  mov x26,sp
71002ac650  orr w27,wzr,#0x30
71002ac654  mov x9,x23
71002ac658  b 0x71002ac668
71002ac65c  ldrh w10,[sp, #0x16]
71002ac660  ldrb w11,[sp, #0x15]
71002ac664  ldr w12,[sp]
71002ac668  sub w11,w25,w11, UXTB 
71002ac66c  tst w10,#0x1000
71002ac670  csel w11,w12,w11,eq
71002ac674  ldrh w12,[x23, #0x16]
71002ac678  ldrb w13,[x23, #0x15]
71002ac67c  ldr w14,[x23]
71002ac680  sub w13,w25,w13
71002ac684  tst w12,#0x1000
71002ac688  csel w13,w14,w13,eq
71002ac68c  cmp w11,w13
71002ac690  b.ne 0x71002ac6c8
71002ac694  ldr x13,[sp, #0x8]
71002ac698  tst w10,#0x1000
71002ac69c  ldr x10,[x23, #0x8]
71002ac6a0  csel x0,x13,x26,eq
71002ac6a4  tst w12,#0x1000
71002ac6a8  csel x1,x10,x23,eq
71002ac6ac  cmp x0,x1
71002ac6b0  b.eq 0x71002ac74c
71002ac6b4  mov w2,w11
71002ac6b8  bl 0x71039c0250
71002ac6bc  cbz w0,0x71002ac744
71002ac6c0  ldr x9,[sp, #0x30]
71002ac6c4  ldr w8,[sp, #0x28]
71002ac6c8  umaddl x10,w8,w27,x9
71002ac6cc  add x23,x23,#0x30
71002ac6d0  cmp x23,x10
71002ac6d4  b.ne 0x71002ac65c
71002ac6d8  b 0x71002ac74c
71002ac6dc  str xzr,[x0, #0x8]
71002ac6e0  ldr x0,[sp, #0xb0]
71002ac6e4  cbnz x0,0x71002ac5e8
71002ac6e8  b 0x71002ac5ec
71002ac6ec  str xzr,[x0, #0x8]
71002ac6f0  ldr x0,[x19, #0x20]
71002ac6f4  cbnz x0,0x71002ac598
71002ac6f8  b 0x71002ac59c
71002ac6fc  mov x9,x23
71002ac700  mov x10,x23
71002ac704  orr w11,wzr,#0x30
71002ac708  umaddl x11,w8,w11,x9
71002ac70c  cmp x10,x11
71002ac710  b.eq 0x71002ac764
71002ac714  ldrb w11,[x10, #0x2e]
71002ac718  tbz w11,#0x4,0x71002ac764
71002ac71c  ldr x10,[x10, #0x18]
71002ac720  str x10,[x19, #0x8]
71002ac724  cbz x10,0x71002ac774
71002ac728  mov x0,x19
71002ac72c  mov x1,x22
71002ac730  bl 0x71002ac940
71002ac734  mov w23,w0
71002ac738  ldr x19,[sp, #0x48]
71002ac73c  cbnz x19,0x71002ac568
71002ac740  b 0x71002ac5a4
71002ac744  ldr x9,[sp, #0x30]
71002ac748  ldr w8,[sp, #0x28]
71002ac74c  mov x10,x23
71002ac750  mov x23,x9
71002ac754  orr w11,wzr,#0x30
71002ac758  umaddl x11,w8,w11,x9
71002ac75c  cmp x10,x11
71002ac760  b.ne 0x71002ac714
71002ac764  mov w23,wzr
71002ac768  ldr x19,[sp, #0x48]
71002ac76c  cbnz x19,0x71002ac568
71002ac770  b 0x71002ac5a4
71002ac774  adrp x10,0x7104421000
71002ac778  add x10,x10,#0x84c
71002ac77c  str xzr,[sp, #0x10]
71002ac780  stp xzr,x10,[sp]
71002ac784  orr w10,wzr,#0x6
71002ac788  strh w24,[sp, #0x16]
71002ac78c  str w10,[sp]
71002ac790  cbz w8,0x71002ac840
71002ac794  mov w12,wzr
71002ac798  mov w10,#0x405
71002ac79c  orr w13,wzr,#0x6
71002ac7a0  mov w22,#0x15
71002ac7a4  mov x24,sp
71002ac7a8  orr w25,wzr,#0x30
71002ac7ac  mov x11,x23
71002ac7b0  b 0x71002ac7c0
71002ac7b4  ldrh w10,[sp, #0x16]
71002ac7b8  ldrb w12,[sp, #0x15]
71002ac7bc  ldr w13,[sp]
71002ac7c0  sub w12,w22,w12, UXTB 
71002ac7c4  tst w10,#0x1000
71002ac7c8  csel w12,w13,w12,eq
71002ac7cc  ldrh w13,[x23, #0x16]
71002ac7d0  ldrb w14,[x23, #0x15]
71002ac7d4  ldr w15,[x23]
71002ac7d8  sub w14,w22,w14
71002ac7dc  tst w13,#0x1000
71002ac7e0  csel w14,w15,w14,eq
71002ac7e4  cmp w12,w14
71002ac7e8  b.ne 0x71002ac824
71002ac7ec  ldr x11,[sp, #0x8]
71002ac7f0  tst w10,#0x1000
71002ac7f4  ldr x10,[x23, #0x8]
71002ac7f8  csel x0,x11,x24,eq
71002ac7fc  tst w13,#0x1000
71002ac800  csel x1,x10,x23,eq
71002ac804  cmp x0,x1
71002ac808  b.eq 0x71002ac840
71002ac80c  mov w2,w12
71002ac810  bl 0x71039c0250
71002ac814  cbz w0,0x71002ac838
71002ac818  ldr x9,[sp, #0x30]
71002ac81c  ldr w8,[sp, #0x28]
71002ac820  mov x11,x9
71002ac824  umaddl x10,w8,w25,x11
71002ac828  add x23,x23,#0x30
71002ac82c  cmp x23,x10
71002ac830  b.ne 0x71002ac7b4
71002ac834  b 0x71002ac840
71002ac838  ldr x9,[sp, #0x30]
71002ac83c  ldr w8,[sp, #0x28]
71002ac840  orr w10,wzr,#0x30
71002ac844  umaddl x8,w8,w10,x9
71002ac848  cmp x23,x8
71002ac84c  b.eq 0x71002ac764
71002ac850  ldrh w8,[x23, #0x2e]
71002ac854  cmp w8,#0x3
71002ac858  b.ne 0x71002ac764
71002ac85c  adrp x8,0x71052a4000
71002ac860  ldr x8,[x8, #0xd80]
71002ac864  strb wzr,[sp, #0x8]
71002ac868  add x24,x8,#0x10
71002ac86c  mov x8,sp
71002ac870  add x25,x8,#0x8
71002ac874  mov w8,#0x10
71002ac878  adrp x1,0x710425e000
71002ac87c  add x1,x1,#0x88b
71002ac880  mov x2,#-0x1
71002ac884  mov x0,sp
71002ac888  add x22,x23,#0x18
71002ac88c  str x24,[sp]
71002ac890  stp x25,x8,[sp, #0x18]
71002ac894  bl 0x71001b47e0
71002ac898  add x0,sp,#0x28
71002ac89c  mov x2,sp
71002ac8a0  mov x1,x22
71002ac8a4  mov x3,x21
71002ac8a8  bl 0x71002accf0
71002ac8ac  mov w21,w0
71002ac8b0  mov x0,sp
71002ac8b4  str x24,[sp]
71002ac8b8  bl 0x71001b4910
71002ac8bc  mov w23,wzr
71002ac8c0  tbz w21,#0x0,0x71002ac560
71002ac8c4  mov w8,#0x10
71002ac8c8  adrp x1,0x7104318000
71002ac8cc  add x1,x1,#0x4b7
71002ac8d0  mov x2,#-0x1
71002ac8d4  mov x0,sp
71002ac8d8  str x24,[sp]
71002ac8dc  strb wzr,[sp, #0x8]
71002ac8e0  stp x25,x8,[sp, #0x18]
71002ac8e4  bl 0x71001b47e0
71002ac8e8  add x0,sp,#0x28
71002ac8ec  mov x2,sp
71002ac8f0  mov x1,x22
71002ac8f4  mov x3,x20
71002ac8f8  bl 0x71002ace40
71002ac8fc  mov w21,w0
71002ac900  mov x0,sp
71002ac904  str x24,[sp]
71002ac908  bl 0x71001b4910
71002ac90c  mov w23,wzr
71002ac910  tbz w21,#0x0,0x71002ac560
71002ac914  ldr x8,[x19, #0x48]
71002ac918  cbz x8,0x71002ac924
71002ac91c  ldr x9,[x20]
71002ac920  str x9,[x8, #0x8]
71002ac924  mov w23,#0x1
71002ac928  ldr x19,[sp, #0x48]
71002ac92c  cbnz x19,0x71002ac568
71002ac930  b 0x71002ac5a4
