// addr:      71019aa670
// offset:    0x19aa670
// name:      FUN_71019aa670
// mangled:   
// size:      1372

71019aa670  stp x24,x23,[sp, #-0x40]!
71019aa674  stp x22,x21,[sp, #0x10]
71019aa678  stp x20,x19,[sp, #0x20]
71019aa67c  stp x29,x30,[sp, #0x30]
71019aa680  add x29,sp,#0x30
71019aa684  ldr w8,[x0, #0x2d4]
71019aa688  mov x19,x0
71019aa68c  cbz w8,0x71019aa6d0
71019aa690  adrp x21,0x710532f000
71019aa694  ldr x8,[x21, #0x7b0]
71019aa698  ldr x20,[x8, #0x8]
71019aa69c  mov x0,x20
71019aa6a0  bl 0x71039c1a40
71019aa6a4  mov w8,#0xa51
71019aa6a8  movk w8,#0x1, LSL #16
71019aa6ac  mov x0,x20
71019aa6b0  ldrb w22,[x20, x8, LSL ]
71019aa6b4  bl 0x71039c1a50
71019aa6b8  cbz w22,0x71019aa720
71019aa6bc  ldp x29,x30,[sp, #0x30]
71019aa6c0  ldp x20,x19,[sp, #0x20]
71019aa6c4  ldp x22,x21,[sp, #0x10]
71019aa6c8  ldp x24,x23,[sp], #0x40
71019aa6cc  ret
71019aa6d0  ldr x8,[x19, #0x20]
71019aa6d4  ldr x8,[x8]
71019aa6d8  ldr x8,[x8]
71019aa6dc  ldr x8,[x8, #0x600]
71019aa6e0  adrp x9,0x7104280000
71019aa6e4  add x9,x9,#0x2df
71019aa6e8  adrp x10,0x7104421000
71019aa6ec  add x10,x10,#0xbe1
71019aa6f0  strb wzr,[x8, #0x4aa]
71019aa6f4  mov w8,#0x101
71019aa6f8  str x9,[x19, #0x308]
71019aa6fc  str x10,[x19, #0x310]
71019aa700  strh w8,[x19, #0x320]
71019aa704  add x1,x19,#0x308
71019aa708  mov x0,x19
71019aa70c  ldp x29,x30,[sp, #0x30]
71019aa710  ldp x20,x19,[sp, #0x20]
71019aa714  ldp x22,x21,[sp, #0x10]
71019aa718  ldp x24,x23,[sp], #0x40
71019aa71c  b 0x71019ac280
71019aa720  ldr x0,[x19, #0x538]
71019aa724  cbz x0,0x71019aa78c
71019aa728  ldr x8,[x0]
71019aa72c  ldr x8,[x8, #0x20]
71019aa730  blr x8
71019aa734  tbnz w0,#0x0,0x71019aa78c
71019aa738  adrp x8,0x710593b000
71019aa73c  ldr x8,[x8, #0x438]
71019aa740  ldr x8,[x8]
71019aa744  ldrb w8,[x8, #0x1]
71019aa748  cbz w8,0x71019aa78c
71019aa74c  ldr w8,[x19, #0x544]
71019aa750  mov w22,#0x6500
71019aa754  movk w22,#0x87, LSL #16
71019aa758  cmp w8,w22
71019aa75c  b.ne 0x71019aa78c
71019aa760  adrp x23,0x7106dd5000
71019aa764  ldrb w8,[x23, #0x3a8]
71019aa768  cmp w8,#0x1
71019aa76c  b.ne 0x71019aa78c
71019aa770  adrp x24,0x7106dd5000
71019aa774  ldr w8,[x19, #0x540]
71019aa778  ldr w9,[x24, #0x3ac]
71019aa77c  cmp w8,w9
71019aa780  b.ne 0x71019aa78c
71019aa784  ldrb w8,[x19, #0x548]
71019aa788  cbz w8,0x71019aaa84
71019aa78c  mov w8,#0x1
71019aa790  strb w8,[x19, #0x56c]
71019aa794  ldr x8,[x21, #0x7b0]
71019aa798  ldr x8,[x8, #0x8]
71019aa79c  ldr w8,[x8, #0x210]
71019aa7a0  cmp w8,#0x8
71019aa7a4  b.eq 0x71019aa860
71019aa7a8  cbnz w8,0x71019aa910
71019aa7ac  mov w8,#0x2
71019aa7b0  str w8,[x19, #0x300]
71019aa7b4  adrp x22,0x7105314000
71019aa7b8  add x22,x22,#0x4d8
71019aa7bc  ldarb w8,[x22]
71019aa7c0  tbz w8,#0x0,0x71019aab48
71019aa7c4  ldr x8,[x21, #0x7b0]
71019aa7c8  adrp x20,0x7105307000
71019aa7cc  ldr w1,[x20, #0xd50]
71019aa7d0  ldr x0,[x8, #0x8]
71019aa7d4  bl 0x71032dc2a0
71019aa7d8  ldrb w8,[x0]
71019aa7dc  cmp w8,#0x0
71019aa7e0  cset w8,eq
71019aa7e4  strb w8,[x19, #0x56a]
71019aa7e8  ldr x8,[x19, #0x328]
71019aa7ec  ldrsw x1,[x8, #0xb0]
71019aa7f0  cmn w1,#0x1
71019aa7f4  b.eq 0x71019aa9f8
71019aa7f8  cmp w1,#0x9
71019aa7fc  adrp x8,0x7105339000
71019aa800  add x8,x8,#0x830
71019aa804  b.hi 0x71019aa828
71019aa808  adrp x9,0x7105339000
71019aa80c  ldr x9,[x9, #0x8b0]
71019aa810  ldrb w9,[x9, #0x8]
71019aa814  cbz w9,0x71019aa828
71019aa818  adrp x8,0x7105339000
71019aa81c  add x8,x8,#0x860
71019aa820  ldr x8,[x8, x1, LSL #0x3]
71019aa824  cbz x8,0x71019aa9c0
71019aa828  ldr x8,[x8, #0x10]
71019aa82c  ldr w8,[x8, #0x9c]
71019aa830  sub w8,w8,#0x1
71019aa834  cmp w8,#0x6
71019aa838  b.hi 0x71019aa9c0
71019aa83c  adrp x9,0x7104753000
71019aa840  add x9,x9,#0xde0
71019aa844  fmov s0,0x3f800000
71019aa848  ldr w8,[x9, w8, SXTW #0x2]
71019aa84c  fmov s1,wzr
71019aa850  sub w8,w8,#0x1
71019aa854  cmp w8,#0x2
71019aa858  fcsel s0,s1,s0,cc
71019aa85c  b 0x71019aa9c4
71019aa860  adrp x8,0x7104280000
71019aa864  add x8,x8,#0x2df
71019aa868  str x8,[x19, #0x308]
71019aa86c  mov w8,#0x100
71019aa870  strh w8,[x19, #0x320]
71019aa874  ldrsw x8,[x19, #0x2cc]
71019aa878  adrp x9,0x7104291000
71019aa87c  add x9,x9,#0x50a
71019aa880  str x9,[x19, #0x310]
71019aa884  cmp w8,#0x13
71019aa888  b.cs 0x71019aabc8
71019aa88c  add x8,x19,x8, LSL #0x2
71019aa890  mov w9,#0x12
71019aa894  str w9,[x8, #0x280]
71019aa898  ldr w8,[x19, #0x2cc]
71019aa89c  cmp w8,#0x11
71019aa8a0  b.gt 0x71019aa6bc
71019aa8a4  add w8,w8,#0x1
71019aa8a8  cmp w8,#0x13
71019aa8ac  str w8,[x19, #0x2cc]
71019aa8b0  b.cs 0x71019aabc8
71019aa8b4  add x8,x19,w8, SXTW  #0x2
71019aa8b8  mov w9,#0x1
71019aa8bc  str w9,[x8, #0x280]
71019aa8c0  ldr w8,[x19, #0x2cc]
71019aa8c4  cmp w8,#0x11
71019aa8c8  b.gt 0x71019aa6bc
71019aa8cc  add w8,w8,#0x1
71019aa8d0  cmp w8,#0x13
71019aa8d4  str w8,[x19, #0x2cc]
71019aa8d8  b.cs 0x71019aabc8
71019aa8dc  add x8,x19,w8, SXTW  #0x2
71019aa8e0  mov w9,#0x2
71019aa8e4  str w9,[x8, #0x280]
71019aa8e8  ldr w8,[x19, #0x2cc]
71019aa8ec  cmp w8,#0x11
71019aa8f0  b.gt 0x71019aa6bc
71019aa8f4  add w8,w8,#0x1
71019aa8f8  cmp w8,#0x13
71019aa8fc  str w8,[x19, #0x2cc]
71019aa900  b.cs 0x71019aabc8
71019aa904  add x8,x19,w8, SXTW  #0x2
71019aa908  mov w9,#0x14
71019aa90c  b 0x71019aaa54
71019aa910  adrp x8,0x7104280000
71019aa914  add x8,x8,#0x2df
71019aa918  str x8,[x19, #0x308]
71019aa91c  mov w8,#0x100
71019aa920  strh w8,[x19, #0x320]
71019aa924  ldrsw x8,[x19, #0x2cc]
71019aa928  adrp x9,0x7104291000
71019aa92c  add x9,x9,#0x50a
71019aa930  str x9,[x19, #0x310]
71019aa934  cmp w8,#0x13
71019aa938  b.cs 0x71019aabc8
71019aa93c  add x8,x19,x8, LSL #0x2
71019aa940  mov w9,#0x12
71019aa944  str w9,[x8, #0x280]
71019aa948  ldr w8,[x19, #0x2cc]
71019aa94c  cmp w8,#0x11
71019aa950  b.gt 0x71019aa6bc
71019aa954  add w8,w8,#0x1
71019aa958  cmp w8,#0x13
71019aa95c  str w8,[x19, #0x2cc]
71019aa960  b.cs 0x71019aabc8
71019aa964  add x8,x19,w8, SXTW  #0x2
71019aa968  mov w9,#0x1
71019aa96c  str w9,[x8, #0x280]
71019aa970  ldr w8,[x19, #0x2cc]
71019aa974  cmp w8,#0x11
71019aa978  b.gt 0x71019aa6bc
71019aa97c  add w8,w8,#0x1
71019aa980  cmp w8,#0x13
71019aa984  str w8,[x19, #0x2cc]
71019aa988  b.cs 0x71019aabc8
71019aa98c  add x8,x19,w8, SXTW  #0x2
71019aa990  mov w9,#0x2
71019aa994  str w9,[x8, #0x280]
71019aa998  ldr w8,[x19, #0x2cc]
71019aa99c  cmp w8,#0x11
71019aa9a0  b.gt 0x71019aa6bc
71019aa9a4  add w8,w8,#0x1
71019aa9a8  cmp w8,#0x13
71019aa9ac  str w8,[x19, #0x2cc]
71019aa9b0  b.cs 0x71019aabc8
71019aa9b4  add x8,x19,w8, SXTW  #0x2
71019aa9b8  mov w9,#0x19
71019aa9bc  b 0x71019aaa54
71019aa9c0  fmov s0,0x3f800000
71019aa9c4  adrp x8,0x71052c5000
71019aa9c8  ldr x8,[x8, #0x120]
71019aa9cc  ldr x0,[x8, #0x8]
71019aa9d0  fmov s1,0x3f800000
71019aa9d4  mov x2,#0x88dd
71019aa9d8  movk x2,#0x7e25, LSL #16
71019aa9dc  movk x2,#0x1a, LSL #32
71019aa9e0  mov w3,wzr
71019aa9e4  mov w4,wzr
71019aa9e8  mov w5,wzr
71019aa9ec  mov w6,wzr
71019aa9f0  mov w7,wzr
71019aa9f4  bl 0x710175dfc0
71019aa9f8  ldarb w8,[x22]
71019aa9fc  tbz w8,#0x0,0x71019aab88
71019aaa00  ldrsw x22,[x19, #0x2cc]
71019aaa04  cmp w22,#0x13
71019aaa08  b.cs 0x71019aabc8
71019aaa0c  ldr x8,[x21, #0x7b0]
71019aaa10  ldr w1,[x20, #0xd50]
71019aaa14  ldr x0,[x8, #0x8]
71019aaa18  bl 0x71032df050
71019aaa1c  add x8,x19,x22, LSL #0x2
71019aaa20  str wzr,[x8, #0x280]
71019aaa24  ldrh w8,[x0, #0xae]
71019aaa28  cbz w8,0x71019aaa58
71019aaa2c  ldr w8,[x19, #0x2cc]
71019aaa30  cmp w8,#0x11
71019aaa34  strb wzr,[x19, #0x56c]
71019aaa38  b.gt 0x71019aa6bc
71019aaa3c  add w8,w8,#0x1
71019aaa40  cmp w8,#0x13
71019aaa44  str w8,[x19, #0x2cc]
71019aaa48  b.cs 0x71019aabc8
71019aaa4c  add x8,x19,w8, SXTW  #0x2
71019aaa50  orr w9,wzr,#0x1c
71019aaa54  str w9,[x8, #0x280]
71019aaa58  ldr w8,[x19, #0x2cc]
71019aaa5c  cmp w8,#0x11
71019aaa60  b.gt 0x71019aa6bc
71019aaa64  add w8,w8,#0x1
71019aaa68  cmp w8,#0x13
71019aaa6c  str w8,[x19, #0x2cc]
71019aaa70  b.cs 0x71019aabc8
71019aaa74  add x8,x19,w8, SXTW  #0x2
71019aaa78  mov w9,#0x20
71019aaa7c  str w9,[x8, #0x280]
71019aaa80  b 0x71019aa6bc
71019aaa84  ldr x0,[x19, #0x538]
71019aaa88  cbz x0,0x71019aa78c
71019aaa8c  ldr x8,[x0]
71019aaa90  ldr x8,[x8, #0x20]
71019aaa94  blr x8
71019aaa98  tbnz w0,#0x0,0x71019aa78c
71019aaa9c  ldr x0,[x19, #0x538]
71019aaaa0  ldr x8,[x0]
71019aaaa4  ldr x8,[x8, #0x68]
71019aaaa8  blr x8
71019aaaac  tbnz w0,#0x0,0x71019aa78c
71019aaab0  add x0,x19,#0x528
71019aaab4  mov w1,wzr
71019aaab8  bl 0x710373b540
71019aaabc  add x20,x19,#0x530
71019aaac0  mov x0,x20
71019aaac4  str wzr,[x19, #0x528]
71019aaac8  bl 0x71039602c0
71019aaacc  adrp x8,0x7104f73000
71019aaad0  add x8,x8,#0xd50
71019aaad4  str x8,[x19, #0x530]
71019aaad8  ldr x8,[x19, #0x538]
71019aaadc  cbz x8,0x71019aab10
71019aaae0  ldrb w9,[x23, #0x3a8]
71019aaae4  cmp w9,#0x1
71019aaae8  b.ne 0x71019aab10
71019aaaec  ldr w9,[x19, #0x540]
71019aaaf0  ldr w10,[x24, #0x3ac]
71019aaaf4  cmp w9,w10
71019aaaf8  b.ne 0x71019aab10
71019aaafc  ldr wzr,[x8, #0x38]!
71019aab00  ldaxr w9,[x8]
71019aab04  sub w9,w9,#0x1
71019aab08  stlxr w10,w9,[x8]
71019aab0c  cbnz w10,0x71019aab00
71019aab10  adrp x8,0x7104f73000
71019aab14  add x8,x8,#0xd30
71019aab18  stp xzr,xzr,[x20, #0x10]
71019aab1c  stp xzr,xzr,[x20]
71019aab20  str x8,[x19, #0x530]
71019aab24  mov x8,#-0x1
71019aab28  str xzr,[x19, #0x538]
71019aab2c  str wzr,[x19, #0x540]
71019aab30  str w22,[x19, #0x544]
71019aab34  strb wzr,[x19, #0x548]
71019aab38  str x8,[x19, #0x550]
71019aab3c  str xzr,[x19, #0x558]
71019aab40  str wzr,[x19, #0x564]
71019aab44  b 0x71019aa78c
71019aab48  adrp x0,0x7105314000
71019aab4c  add x0,x0,#0x4d8
71019aab50  bl 0x71039c06b0
71019aab54  cbz w0,0x71019aa7c4
71019aab58  bl 0x7101764000
71019aab5c  adrp x0,0x7101763000
71019aab60  add x0,x0,#0xc40
71019aab64  adrp x1,0x71052c5000
71019aab68  add x1,x1,#0x180
71019aab6c  adrp x2,0x7104f17000
71019aab70  add x2,x2,#0x0
71019aab74  bl 0x71000001c0
71019aab78  adrp x0,0x7105314000
71019aab7c  add x0,x0,#0x4d8
71019aab80  bl 0x71039c06c0
71019aab84  b 0x71019aa7c4
71019aab88  adrp x0,0x7105314000
71019aab8c  add x0,x0,#0x4d8
71019aab90  bl 0x71039c06b0
71019aab94  cbz w0,0x71019aaa00
71019aab98  bl 0x7101764000
71019aab9c  adrp x0,0x7101763000
71019aaba0  add x0,x0,#0xc40
71019aaba4  adrp x1,0x71052c5000
71019aaba8  add x1,x1,#0x180
71019aabac  adrp x2,0x7104f17000
71019aabb0  add x2,x2,#0x0
71019aabb4  bl 0x71000001c0
71019aabb8  adrp x0,0x7105314000
71019aabbc  add x0,x0,#0x4d8
71019aabc0  bl 0x71039c06c0
71019aabc4  b 0x71019aaa00
71019aabc8  bl 0x71039c2650
