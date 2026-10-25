// addr:      71000fa600
// offset:    0xfa600
// name:      FUN_71000fa600
// mangled:   
// size:      988

71000fa600  stp x28,x27,[sp, #-0x60]!
71000fa604  stp x26,x25,[sp, #0x10]
71000fa608  stp x24,x23,[sp, #0x20]
71000fa60c  stp x22,x21,[sp, #0x30]
71000fa610  stp x20,x19,[sp, #0x40]
71000fa614  stp x29,x30,[sp, #0x50]
71000fa618  add x29,sp,#0x50
71000fa61c  sub sp,sp,#0x220
71000fa620  adrp x23,0x71052a5000
71000fa624  ldr x23,[x23, #0x80]
71000fa628  mov x19,x0
71000fa62c  ldr x0,[x23]
71000fa630  bl 0x7100146ba0
71000fa634  sub w8,w0,#0x5
71000fa638  cmp w8,#0x3
71000fa63c  b.hi 0x71000fa664
71000fa640  adrp x9,0x7104496000
71000fa644  add x9,x9,#0x2fc
71000fa648  ldrsw x8,[x9, x8, LSL #0x2]
71000fa64c  add x8,x8,x9
71000fa650  br x8
71000fa654  mov w8,#0x1
71000fa658  orr w9,wzr,#0x3
71000fa65c  mov w10,#0xc406
71000fa660  b 0x71000fa718
71000fa664  adrp x8,0x71052a4000
71000fa668  ldr x8,[x8, #0xdf0]
71000fa66c  ldr x0,[x8]
71000fa670  add x8,sp,#0x118
71000fa674  bl 0x7100192e90
71000fa678  ldr w8,[sp, #0x118]
71000fa67c  cbnz w8,0x71000fa690
71000fa680  ldr x0,[x23]
71000fa684  bl 0x7100146ba0
71000fa688  cmp w0,#0x4
71000fa68c  b.ne 0x71000fa7a0
71000fa690  mov w8,#0x6c59
71000fa694  str w8,[sp, #0x118]
71000fa698  add x8,sp,#0x118
71000fa69c  orr x20,x8,#0x4
71000fa6a0  mov x0,x20
71000fa6a4  bl 0x71039c0a80
71000fa6a8  add x1,sp,#0x20
71000fa6ac  mov x0,x20
71000fa6b0  str wzr,[sp, #0x20]
71000fa6b4  bl 0x71039c0a90
71000fa6b8  add x0,x19,#0x220
71000fa6bc  add x1,sp,#0x118
71000fa6c0  bl 0x71000bcf30
71000fa6c4  adrp x8,0x71052a5000
71000fa6c8  ldr x8,[x8, #0x238]
71000fa6cc  mov w9,#0x4
71000fa6d0  strb w9,[x19, #0x130]
71000fa6d4  adrp x9,0x7104290000
71000fa6d8  add x9,x9,#0xd05
71000fa6dc  str x9,[x19, #0x40]
71000fa6e0  stp x8,xzr,[x19, #0x30]
71000fa6e4  mov w0,#0x5
71000fa6e8  b 0x71000fa780
71000fa6ec  mov w8,#0x1
71000fa6f0  orr w9,wzr,#0x3
71000fa6f4  mov w10,#0xa471
71000fa6f8  b 0x71000fa718
71000fa6fc  mov w8,#0x1
71000fa700  orr w9,wzr,#0x3
71000fa704  mov w10,#0xc420
71000fa708  b 0x71000fa718
71000fa70c  mov w8,#0x1
71000fa710  orr w9,wzr,#0x3
71000fa714  mov w10,#0xc421
71000fa718  strb w8,[x19, #0xfa]
71000fa71c  add x8,sp,#0x118
71000fa720  orr x20,x8,#0x4
71000fa724  mov x0,x20
71000fa728  strb w9,[x19, #0x130]
71000fa72c  str w10,[sp, #0x118]
71000fa730  bl 0x71039c0a80
71000fa734  add x1,sp,#0x20
71000fa738  mov x0,x20
71000fa73c  str wzr,[sp, #0x20]
71000fa740  bl 0x71039c0a90
71000fa744  add x0,x19,#0x220
71000fa748  add x1,sp,#0x118
71000fa74c  bl 0x71000bcf30
71000fa750  ldr x8,[x23]
71000fa754  ldr x0,[x8, #0x8]
71000fa758  ldr x8,[x0]
71000fa75c  ldr x8,[x8, #0x28]
71000fa760  blr x8
71000fa764  adrp x8,0x71052a5000
71000fa768  ldr x8,[x8, #0x240]
71000fa76c  mov x0,xzr
71000fa770  stp x8,xzr,[x19, #0x30]
71000fa774  adrp x8,0x71043ac000
71000fa778  add x8,x8,#0x982
71000fa77c  str x8,[x19, #0x40]
71000fa780  add sp,sp,#0x220
71000fa784  ldp x29,x30,[sp, #0x50]
71000fa788  ldp x20,x19,[sp, #0x40]
71000fa78c  ldp x22,x21,[sp, #0x30]
71000fa790  ldp x24,x23,[sp, #0x20]
71000fa794  ldp x26,x25,[sp, #0x10]
71000fa798  ldp x28,x27,[sp], #0x60
71000fa79c  ret
71000fa7a0  ldrb w8,[x19, #0xfb]
71000fa7a4  cbz w8,0x71000fa7c4
71000fa7a8  add x1,x19,#0x100
71000fa7ac  add x0,x19,#0x220
71000fa7b0  bl 0x71000bcf30
71000fa7b4  adrp x8,0x71052a5000
71000fa7b8  ldr x8,[x8, #0x238]
71000fa7bc  orr w9,wzr,#0x6
71000fa7c0  b 0x71000fa6d0
71000fa7c4  ldr x0,[x19, #0x58]
71000fa7c8  cbz x0,0x71000fa818
71000fa7cc  ldrb w8,[x0, #0x28]
71000fa7d0  cbz w8,0x71000fa818
71000fa7d4  ldr w8,[x0]
71000fa7d8  sub w8,w8,#0x2
71000fa7dc  cmp w8,#0x3
71000fa7e0  b.cc 0x71000fa7e8
71000fa7e4  bl 0x71000b4260
71000fa7e8  str xzr,[x19, #0x58]
71000fa7ec  ldr x8,[x23]
71000fa7f0  ldrb w9,[x8, #0x162]
71000fa7f4  cmp w9,#0x0
71000fa7f8  cset w9,eq
71000fa7fc  add x8,x8,w9, UXTW  #0x3
71000fa800  ldr x0,[x8, #0x168]
71000fa804  bl 0x71000d8f90
71000fa808  mov x0,x19
71000fa80c  bl 0x7100140910
71000fa810  mov w0,#0x1
71000fa814  b 0x71000fa780
71000fa818  ldr x26,[x19, #0xb0]
71000fa81c  add x25,x19,#0xa8
71000fa820  cmp x26,x25
71000fa824  b.eq 0x71000fa970
71000fa828  ldr x24,[x23]
71000fa82c  mov w21,wzr
71000fa830  mov w20,wzr
71000fa834  add x27,sp,#0x118
71000fa838  add x28,sp,#0x20
71000fa83c  ldr x0,[x24, #0xb8]
71000fa840  ldr x1,[x26, #0x10]
71000fa844  bl 0x7100150680
71000fa848  tbz w0,#0x0,0x71000fa890
71000fa84c  ldr x8,[x26, #0x10]
71000fa850  and x9,x21,#0xffff
71000fa854  add w21,w21,#0x1
71000fa858  str x8,[x27, x9, LSL #0x3]
71000fa85c  ldr x0,[x24, #0xb8]
71000fa860  ldr x1,[x26, #0x10]
71000fa864  bl 0x71001508c0
71000fa868  mov w22,w0
71000fa86c  ldr x0,[x24, #0xb8]
71000fa870  ldr x1,[x26, #0x10]
71000fa874  bl 0x7100150720
71000fa878  cbnz w22,0x71000fa890
71000fa87c  tbnz w0,#0x0,0x71000fa890
71000fa880  ldr x8,[x26, #0x10]
71000fa884  and x9,x20,#0xffff
71000fa888  add w20,w20,#0x1
71000fa88c  str x8,[x28, x9, LSL #0x3]
71000fa890  ldr x26,[x26, #0x8]
71000fa894  cmp x26,x25
71000fa898  b.ne 0x71000fa83c
71000fa89c  tst w20,#0xffff
71000fa8a0  b.eq 0x71000fa970
71000fa8a4  ldr x0,[x24, #0xc8]
71000fa8a8  ldr w1,[x19, #0x90]
71000fa8ac  add x8,sp,#0x10
71000fa8b0  ldr x4,[x24, #0xf0]
71000fa8b4  add x2,sp,#0x118
71000fa8b8  add x5,sp,#0x20
71000fa8bc  mov w3,w21
71000fa8c0  mov w6,w20
71000fa8c4  bl 0x710014efa0
71000fa8c8  mov w8,#0x4c0d
71000fa8cc  str w8,[sp]
71000fa8d0  mov x8,sp
71000fa8d4  orr x20,x8,#0x4
71000fa8d8  mov x0,x20
71000fa8dc  bl 0x71039c0a80
71000fa8e0  sub x1,x29,#0x60
71000fa8e4  mov x0,x20
71000fa8e8  stur wzr,[x29, #-0x60]
71000fa8ec  bl 0x71039c0a90
71000fa8f0  ldr w8,[sp, #0x10]
71000fa8f4  cbz w8,0x71000fa970
71000fa8f8  ldr w9,[sp]
71000fa8fc  cmp w8,w9
71000fa900  b.eq 0x71000fa970
71000fa904  mov w8,#0x2c0a
71000fa908  str w8,[sp]
71000fa90c  mov x8,sp
71000fa910  orr x20,x8,#0x4
71000fa914  mov x0,x20
71000fa918  bl 0x71039c0a80
71000fa91c  sub x1,x29,#0x60
71000fa920  mov x0,x20
71000fa924  stur wzr,[x29, #-0x60]
71000fa928  bl 0x71039c0a90
71000fa92c  ldr w8,[sp, #0x10]
71000fa930  ldr w9,[sp]
71000fa934  cmp w8,w9
71000fa938  b.ne 0x71000fa9a0
71000fa93c  mov w8,#0x8
71000fa940  strb w8,[x19, #0x130]
71000fa944  mov w8,#0x6c59
71000fa948  mov x0,x20
71000fa94c  str w8,[sp]
71000fa950  bl 0x71039c0a80
71000fa954  sub x1,x29,#0x60
71000fa958  mov x0,x20
71000fa95c  stur wzr,[x29, #-0x60]
71000fa960  bl 0x71039c0a90
71000fa964  add x0,x19,#0x220
71000fa968  mov x1,sp
71000fa96c  b 0x71000fa9b0
71000fa970  adrp x8,0x71052a4000
71000fa974  ldr x8,[x8, #0xc70]
71000fa978  adrp x9,0x71052a5000
71000fa97c  ldr x9,[x9, #0x2a8]
71000fa980  ldr x8,[x8]
71000fa984  ldr x8,[x8, #0x30]
71000fa988  str x8,[x19, #0x1b8]
71000fa98c  adrp x8,0x710435a000
71000fa990  add x8,x8,#0x5b0
71000fa994  stp x9,xzr,[x19, #0x30]
71000fa998  str x8,[x19, #0x40]
71000fa99c  b 0x71000fa6e4
71000fa9a0  orr w8,wzr,#0x3
71000fa9a4  add x0,x19,#0x220
71000fa9a8  add x1,sp,#0x10
71000fa9ac  strb w8,[x19, #0x130]
71000fa9b0  bl 0x71000bcf30
71000fa9b4  ldr x8,[x23]
71000fa9b8  ldrb w9,[x8, #0x162]
71000fa9bc  cmp w9,#0x0
71000fa9c0  cset w9,eq
71000fa9c4  add x8,x8,w9, UXTW  #0x3
71000fa9c8  ldr x0,[x8, #0x168]
71000fa9cc  bl 0x71000d8f90
71000fa9d0  adrp x8,0x71052a5000
71000fa9d4  ldr x8,[x8, #0x238]
71000fa9d8  b 0x71000fa6d4
