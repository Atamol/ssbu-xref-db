// addr:      71022ec380
// offset:    0x22ec380
// name:      FUN_71022ec380
// mangled:   
// size:      1000

71022ec380  sub sp,sp,#0xd0
71022ec384  str x23,[sp, #0x90]
71022ec388  stp x22,x21,[sp, #0xa0]
71022ec38c  stp x20,x19,[sp, #0xb0]
71022ec390  stp x29,x30,[sp, #0xc0]
71022ec394  add x29,sp,#0xc0
71022ec398  adrp x8,0x710532f000
71022ec39c  ldr x8,[x8, #0x840]
71022ec3a0  ldr x8,[x8, #0x8]
71022ec3a4  mov x20,x0
71022ec3a8  ldr x0,[x8, #0xb8]
71022ec3ac  mov x19,x1
71022ec3b0  mov w1,#0x1
71022ec3b4  bl 0x7101af86a0
71022ec3b8  ldr w8,[x20, #0x2a0]
71022ec3bc  cmp w8,#0x1
71022ec3c0  b.ne 0x71022ec53c
71022ec3c4  ldr x8,[x19, #0x8]!
71022ec3c8  ldr x22,[x8, #0x20]
71022ec3cc  ldr x8,[x22, #0x10]
71022ec3d0  cbz x8,0x71022ec45c
71022ec3d4  ldp x8,x20,[x22]
71022ec3d8  ldr x9,[x8, #0x8]
71022ec3dc  ldr x10,[x20]
71022ec3e0  str x9,[x10, #0x8]
71022ec3e4  ldr x9,[x20]
71022ec3e8  ldr x8,[x8, #0x8]
71022ec3ec  cmp x20,x22
71022ec3f0  str x9,[x8]
71022ec3f4  str xzr,[x22, #0x10]
71022ec3f8  b.ne 0x71022ec420
71022ec3fc  b 0x71022ec45c
71022ec400  ldr x8,[x21]
71022ec404  ldr x8,[x8, #0x10]
71022ec408  mov x0,x21
71022ec40c  blr x8
71022ec410  mov x0,x21
71022ec414  bl 0x71039c2670
71022ec418  cbnz x20,0x71022ec448
71022ec41c  b 0x71022ec450
71022ec420  ldr x23,[x20, #0x8]
71022ec424  ldr x21,[x20, #0xa8]
71022ec428  cbz x21,0x71022ec444
71022ec42c  add x8,x21,#0x8
71022ec430  ldaxr x9,[x8]
71022ec434  sub x10,x9,#0x1
71022ec438  stlxr w11,x10,[x8]
71022ec43c  cbnz w11,0x71022ec430
71022ec440  cbz x9,0x71022ec400
71022ec444  cbz x20,0x71022ec450
71022ec448  mov x0,x20
71022ec44c  bl 0x710392eb40
71022ec450  cmp x23,x22
71022ec454  mov x20,x23
71022ec458  b.ne 0x71022ec420
71022ec45c  ldr x8,[x19]
71022ec460  mov x9,xzr
71022ec464  adrp x10,0x7104420000
71022ec468  add x10,x10,#0x71
71022ec46c  mov x11,sp
71022ec470  str xzr,[sp]
71022ec474  b 0x71022ec480
71022ec478  add x9,x9,#0x2
71022ec47c  strb w13,[x12, #0x9]
71022ec480  add x13,x10,x9
71022ec484  ldrb w14,[x13]
71022ec488  cbz w14,0x71022ec4a0
71022ec48c  ldrb w13,[x13, #0x1]
71022ec490  add x12,x11,x9
71022ec494  strb w14,[x12, #0x8]
71022ec498  cbnz w13,0x71022ec478
71022ec49c  add x9,x9,#0x1
71022ec4a0  mov x10,sp
71022ec4a4  add x11,x10,#0x8
71022ec4a8  mov w20,#0x9dc5
71022ec4ac  movk w20,#0x811c, LSL #16
71022ec4b0  strb wzr,[x11, w9, UXTW ]
71022ec4b4  str w9,[sp, #0x4]
71022ec4b8  ldrb w9,[sp, #0x8]
71022ec4bc  mov w11,w20
71022ec4c0  cbz w9,0x71022ec4e4
71022ec4c4  add x10,x10,#0x9
71022ec4c8  mov w12,#0x89
71022ec4cc  mov w11,w20
71022ec4d0  mul w11,w11,w12
71022ec4d4  and w9,w9,#0xff
71022ec4d8  eor w11,w11,w9
71022ec4dc  ldrb w9,[x10], #0x1
71022ec4e0  cbnz w9,0x71022ec4d0
71022ec4e4  str w11,[sp]
71022ec4e8  ldr x10,[x8, #0x38]
71022ec4ec  cbz x10,0x71022ec570
71022ec4f0  mov x9,xzr
71022ec4f4  add x10,x10,#0x10
71022ec4f8  add x11,sp,#0x48
71022ec4fc  str wzr,[sp, #0x48]
71022ec500  b 0x71022ec50c
71022ec504  add x9,x9,#0x2
71022ec508  strb w12,[x13, #0x9]
71022ec50c  add x12,x10,x9
71022ec510  ldrb w14,[x12]
71022ec514  cbz w14,0x71022ec580
71022ec518  add w15,w9,#0x1
71022ec51c  add x13,x11,x9
71022ec520  cmp w15,#0x3f
71022ec524  strb w14,[x13, #0x8]
71022ec528  b.cs 0x71022ec57c
71022ec52c  ldrb w12,[x12, #0x1]
71022ec530  cbnz w12,0x71022ec504
71022ec534  add x9,x9,#0x1
71022ec538  b 0x71022ec580
71022ec53c  adrp x8,0x710532f000
71022ec540  ldr x8,[x8, #0x7b0]
71022ec544  ldr x0,[x8, #0x8]
71022ec548  bl 0x71032dfc50
71022ec54c  adrp x8,0x7105314000
71022ec550  add x8,x8,#0x4d8
71022ec554  ldarb w8,[x8]
71022ec558  tbz w8,#0x0,0x71022ec728
71022ec55c  adrp x8,0x7105307000
71022ec560  mov w9,#0xffffffff
71022ec564  add x19,x19,#0x8
71022ec568  str w9,[x8, #0xd50]
71022ec56c  b 0x71022ec708
71022ec570  strb wzr,[sp, #0x50]
71022ec574  str xzr,[sp, #0x48]
71022ec578  b 0x71022ec5c0
71022ec57c  add w9,w9,#0x1
71022ec580  add x10,sp,#0x48
71022ec584  add x11,x10,#0x8
71022ec588  strb wzr,[x11, w9, UXTW ]
71022ec58c  str w9,[sp, #0x4c]
71022ec590  ldrb w9,[sp, #0x50]
71022ec594  mov w11,w20
71022ec598  cbz w9,0x71022ec5bc
71022ec59c  add x10,x10,#0x9
71022ec5a0  mov w12,#0x89
71022ec5a4  mov w11,w20
71022ec5a8  mul w11,w11,w12
71022ec5ac  and w9,w9,#0xff
71022ec5b0  eor w11,w11,w9
71022ec5b4  ldrb w9,[x10], #0x1
71022ec5b8  cbnz w9,0x71022ec5a8
71022ec5bc  str w11,[sp, #0x48]
71022ec5c0  ldr x0,[x8, #0x20]
71022ec5c4  mov x1,sp
71022ec5c8  add x2,sp,#0x48
71022ec5cc  mov x3,xzr
71022ec5d0  mov x21,sp
71022ec5d4  bl 0x7103726240
71022ec5d8  ldr x8,[x19]
71022ec5dc  mov x9,xzr
71022ec5e0  adrp x10,0x710427e000
71022ec5e4  add x10,x10,#0x854
71022ec5e8  str xzr,[sp]
71022ec5ec  b 0x71022ec5f8
71022ec5f0  add x9,x9,#0x2
71022ec5f4  strb w12,[x11, #0x9]
71022ec5f8  add x12,x10,x9
71022ec5fc  ldrb w13,[x12]
71022ec600  cbz w13,0x71022ec618
71022ec604  ldrb w12,[x12, #0x1]
71022ec608  add x11,x21,x9
71022ec60c  strb w13,[x11, #0x8]
71022ec610  cbnz w12,0x71022ec5f0
71022ec614  add x9,x9,#0x1
71022ec618  mov x10,sp
71022ec61c  add x11,x10,#0x8
71022ec620  strb wzr,[x11, w9, UXTW ]
71022ec624  str w9,[sp, #0x4]
71022ec628  ldrb w9,[sp, #0x8]
71022ec62c  mov w11,w20
71022ec630  cbz w9,0x71022ec654
71022ec634  add x10,x10,#0x9
71022ec638  mov w12,#0x89
71022ec63c  mov w11,w20
71022ec640  mul w11,w11,w12
71022ec644  and w9,w9,#0xff
71022ec648  eor w11,w11,w9
71022ec64c  ldrb w9,[x10], #0x1
71022ec650  cbnz w9,0x71022ec640
71022ec654  str w11,[sp]
71022ec658  ldr x10,[x8, #0x38]
71022ec65c  cbz x10,0x71022ec6ac
71022ec660  mov x9,xzr
71022ec664  add x10,x10,#0x10
71022ec668  add x11,sp,#0x48
71022ec66c  str wzr,[sp, #0x48]
71022ec670  b 0x71022ec67c
71022ec674  add x9,x9,#0x2
71022ec678  strb w12,[x13, #0x9]
71022ec67c  add x12,x10,x9
71022ec680  ldrb w14,[x12]
71022ec684  cbz w14,0x71022ec6bc
71022ec688  add w15,w9,#0x1
71022ec68c  add x13,x11,x9
71022ec690  cmp w15,#0x3f
71022ec694  strb w14,[x13, #0x8]
71022ec698  b.cs 0x71022ec6b8
71022ec69c  ldrb w12,[x12, #0x1]
71022ec6a0  cbnz w12,0x71022ec674
71022ec6a4  add x9,x9,#0x1
71022ec6a8  b 0x71022ec6bc
71022ec6ac  strb wzr,[sp, #0x50]
71022ec6b0  str xzr,[sp, #0x48]
71022ec6b4  b 0x71022ec6f4
71022ec6b8  add w9,w9,#0x1
71022ec6bc  add x11,sp,#0x48
71022ec6c0  add x10,x11,#0x8
71022ec6c4  strb wzr,[x10, w9, UXTW ]
71022ec6c8  ldrb w10,[sp, #0x50]
71022ec6cc  str w9,[sp, #0x4c]
71022ec6d0  cbz w10,0x71022ec6f0
71022ec6d4  add x9,x11,#0x9
71022ec6d8  mov w11,#0x89
71022ec6dc  mul w12,w20,w11
71022ec6e0  and w10,w10,#0xff
71022ec6e4  eor w20,w12,w10
71022ec6e8  ldrb w10,[x9], #0x1
71022ec6ec  cbnz w10,0x71022ec6dc
71022ec6f0  str w20,[sp, #0x48]
71022ec6f4  ldr x0,[x8, #0x20]
71022ec6f8  mov x1,sp
71022ec6fc  add x2,sp,#0x48
71022ec700  mov x3,xzr
71022ec704  bl 0x7103726240
71022ec708  ldr x0,[x19]
71022ec70c  ldp x29,x30,[sp, #0xc0]
71022ec710  ldp x20,x19,[sp, #0xb0]
71022ec714  mov w1,wzr
71022ec718  ldp x22,x21,[sp, #0xa0]
71022ec71c  ldr x23,[sp, #0x90]
71022ec720  add sp,sp,#0xd0
71022ec724  b 0x7103726af0
71022ec728  adrp x0,0x7105314000
71022ec72c  add x0,x0,#0x4d8
71022ec730  bl 0x71039c06b0
71022ec734  cbz w0,0x71022ec55c
71022ec738  bl 0x7101764000
71022ec73c  adrp x0,0x7101763000
71022ec740  add x0,x0,#0xc40
71022ec744  adrp x1,0x71052c5000
71022ec748  add x1,x1,#0x180
71022ec74c  adrp x2,0x7104f17000
71022ec750  add x2,x2,#0x0
71022ec754  bl 0x71000001c0
71022ec758  adrp x0,0x7105314000
71022ec75c  add x0,x0,#0x4d8
71022ec760  bl 0x71039c06c0
71022ec764  b 0x71022ec55c
