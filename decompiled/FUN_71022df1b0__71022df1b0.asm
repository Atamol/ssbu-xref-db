// addr:      71022df1b0
// offset:    0x22df1b0
// name:      FUN_71022df1b0
// mangled:   
// size:      3200

71022df1b0  sub sp,sp,#0x1a0
71022df1b4  stp x28,x27,[sp, #0x140]
71022df1b8  stp x26,x25,[sp, #0x150]
71022df1bc  stp x24,x23,[sp, #0x160]
71022df1c0  stp x22,x21,[sp, #0x170]
71022df1c4  stp x20,x19,[sp, #0x180]
71022df1c8  stp x29,x30,[sp, #0x190]
71022df1cc  add x29,sp,#0x190
71022df1d0  ldr x8,[x2]
71022df1d4  ldr x8,[x8, #0x20]
71022df1d8  mov x19,x0
71022df1dc  mov x0,x2
71022df1e0  mov x20,x2
71022df1e4  mov x21,x1
71022df1e8  blr x8
71022df1ec  mov x9,#0xf1c
71022df1f0  movk x9,#0x7ba5, LSL #16
71022df1f4  mov x8,x0
71022df1f8  movk x9,#0xc, LSL #32
71022df1fc  mov w0,wzr
71022df200  cmp x8,x9
71022df204  b.gt 0x71022df2f8
71022df208  mov x9,#0xa452
71022df20c  movk x9,#0x161e, LSL #16
71022df210  movk x9,#0xa, LSL #32
71022df214  cmp x8,x9
71022df218  b.eq 0x71022df388
71022df21c  mov x9,#0x70ce
71022df220  movk x9,#0xcd19, LSL #16
71022df224  movk x9,#0xb, LSL #32
71022df228  cmp x8,x9
71022df22c  b.eq 0x71022df3fc
71022df230  mov x9,#0x8201
71022df234  movk x9,#0x1d06, LSL #16
71022df238  movk x9,#0xc, LSL #32
71022df23c  cmp x8,x9
71022df240  b.ne 0x71022dfd14
71022df244  adrp x8,0x71050a1000
71022df248  add x8,x8,#0x140
71022df24c  str x8,[sp, #0xa8]
71022df250  add x8,sp,#0x50
71022df254  strb wzr,[sp, #0x58]
71022df258  str xzr,[sp, #0x50]
71022df25c  str x8,[sp, #0xb0]
71022df260  ldr x8,[x21, #0x8]
71022df264  ldr x8,[x8, #0x18]
71022df268  cbz x8,0x71022df29c
71022df26c  ldr x0,[x8, #0x38]
71022df270  cbz x0,0x71022df29c
71022df274  ldrb w9,[x8, #0x8c]
71022df278  cbnz w9,0x71022df29c
71022df27c  adrp x9,0x710523c000
71022df280  add x9,x9,#0xd18
71022df284  sub x1,x29,#0xa0
71022df288  stp x9,x8,[x29, #-0xa0]
71022df28c  ldr x8,[x0]
71022df290  ldr x8,[x8, #0x40]
71022df294  add x2,sp,#0xa8
71022df298  blr x8
71022df29c  ldr x9,[x20, #0x8]
71022df2a0  add x10,x19,#0x8
71022df2a4  mov w8,#0x9dc5
71022df2a8  movk w8,#0x811c, LSL #16
71022df2ac  cmp x9,x10
71022df2b0  b.eq 0x71022df6a4
71022df2b4  mov x10,xzr
71022df2b8  add x11,x19,#0x10
71022df2bc  b 0x71022df2c8
71022df2c0  add x10,x10,#0x2
71022df2c4  strb w12,[x13, #0x9]
71022df2c8  add x12,x11,x10
71022df2cc  ldrb w14,[x12]
71022df2d0  cbz w14,0x71022df664
71022df2d4  add w15,w10,#0x1
71022df2d8  add x13,x9,x10
71022df2dc  cmp w15,#0x3f
71022df2e0  strb w14,[x13, #0x8]
71022df2e4  b.cs 0x71022df660
71022df2e8  ldrb w12,[x12, #0x1]
71022df2ec  cbnz w12,0x71022df2c0
71022df2f0  add x10,x10,#0x1
71022df2f4  b 0x71022df664
71022df2f8  mov x9,#0xf1d
71022df2fc  movk x9,#0x7ba5, LSL #16
71022df300  movk x9,#0xc, LSL #32
71022df304  cmp x8,x9
71022df308  b.eq 0x71022df634
71022df30c  mov x9,#0xc8cd
71022df310  movk x9,#0xe99f, LSL #16
71022df314  movk x9,#0xc, LSL #32
71022df318  cmp x8,x9
71022df31c  b.eq 0x71022df640
71022df320  mov x9,#0x827a
71022df324  movk x9,#0xa7eb, LSL #16
71022df328  movk x9,#0x1a, LSL #32
71022df32c  cmp x8,x9
71022df330  b.ne 0x71022dfd14
71022df334  ldr x8,[x20, #0x8]
71022df338  add x9,x19,#0x8
71022df33c  cmp x8,x9
71022df340  b.eq 0x71022df658
71022df344  mov x9,xzr
71022df348  add x10,x19,#0x10
71022df34c  b 0x71022df358
71022df350  add x9,x9,#0x2
71022df354  strb w11,[x12, #0x9]
71022df358  add x11,x10,x9
71022df35c  ldrb w13,[x11]
71022df360  cbz w13,0x71022df6fc
71022df364  add w14,w9,#0x1
71022df368  add x12,x8,x9
71022df36c  cmp w14,#0x3f
71022df370  strb w13,[x12, #0x8]
71022df374  b.cs 0x71022df6f8
71022df378  ldrb w11,[x11, #0x1]
71022df37c  cbnz w11,0x71022df350
71022df380  add x9,x9,#0x1
71022df384  b 0x71022df6fc
71022df388  mov w8,#0x1
71022df38c  strb w8,[x19, #0xe0]
71022df390  ldr x8,[x19, #0x88]
71022df394  cbnz x8,0x71022dfd08
71022df398  ldr x22,[x19, #0x78]
71022df39c  ldr x8,[x22, #0x60]
71022df3a0  cbz x8,0x71022dfd08
71022df3a4  ldr x23,[x22, #0x8]!
71022df3a8  cbz x23,0x71022dfd08
71022df3ac  ldr w24,[x8, #0x8]
71022df3b0  add x20,x8,#0x10
71022df3b4  mov w25,#0xffffffff
71022df3b8  mov x21,x22
71022df3bc  ldr w8,[x23, #0x20]
71022df3c0  cmp w8,w24
71022df3c4  mov w0,w25
71022df3c8  b.cc 0x71022df3e4
71022df3cc  b.ls 0x71022df3d8
71022df3d0  mov w0,#0x1
71022df3d4  b 0x71022df3e4
71022df3d8  add x0,x23,#0x28
71022df3dc  mov x1,x20
71022df3e0  bl 0x71039c0060
71022df3e4  cmp w0,#0x0
71022df3e8  cset w8,lt
71022df3ec  csel x21,x21,x23,lt
71022df3f0  ldr x23,[x23, w8, UXTW #0x3]
71022df3f4  cbnz x23,0x71022df3bc
71022df3f8  b 0x71022dfd94
71022df3fc  ldr x24,[x19, #0x70]
71022df400  ldr x8,[x24, #0x10]
71022df404  cbz x8,0x71022df484
71022df408  ldp x8,x22,[x24]
71022df40c  ldr x9,[x8, #0x8]
71022df410  ldr x10,[x22]
71022df414  str x9,[x10, #0x8]
71022df418  ldr x9,[x22]
71022df41c  ldr x8,[x8, #0x8]
71022df420  cmp x22,x24
71022df424  str x9,[x8]
71022df428  str xzr,[x24, #0x10]
71022df42c  b.eq 0x71022df484
71022df430  ldr x25,[x22, #0x8]
71022df434  ldr x23,[x22, #0xa8]
71022df438  cbz x23,0x71022df46c
71022df43c  add x8,x23,#0x8
71022df440  ldaxr x9,[x8]
71022df444  sub x10,x9,#0x1
71022df448  stlxr w11,x10,[x8]
71022df44c  cbnz w11,0x71022df440
71022df450  cbnz x9,0x71022df46c
71022df454  ldr x8,[x23]
71022df458  ldr x8,[x8, #0x10]
71022df45c  mov x0,x23
71022df460  blr x8
71022df464  mov x0,x23
71022df468  bl 0x71039c2670
71022df46c  cbz x22,0x71022df478
71022df470  mov x0,x22
71022df474  bl 0x710392eb40
71022df478  cmp x25,x24
71022df47c  mov x22,x25
71022df480  b.ne 0x71022df430
71022df484  ldrb w25,[x20, #0x98]
71022df488  mov w24,#0x9dc5
71022df48c  movk w24,#0x811c, LSL #16
71022df490  cbz w25,0x71022df8fc
71022df494  ldr x8,[x21, #0x8]
71022df498  ldr x26,[x8, #0x20]
71022df49c  ldr x8,[x26, #0x10]
71022df4a0  cbz x8,0x71022df520
71022df4a4  ldp x8,x22,[x26]
71022df4a8  ldr x9,[x8, #0x8]
71022df4ac  ldr x10,[x22]
71022df4b0  str x9,[x10, #0x8]
71022df4b4  ldr x9,[x22]
71022df4b8  ldr x8,[x8, #0x8]
71022df4bc  cmp x22,x26
71022df4c0  str x9,[x8]
71022df4c4  str xzr,[x26, #0x10]
71022df4c8  b.eq 0x71022df520
71022df4cc  ldr x27,[x22, #0x8]
71022df4d0  ldr x23,[x22, #0xa8]
71022df4d4  cbz x23,0x71022df508
71022df4d8  add x8,x23,#0x8
71022df4dc  ldaxr x9,[x8]
71022df4e0  sub x10,x9,#0x1
71022df4e4  stlxr w11,x10,[x8]
71022df4e8  cbnz w11,0x71022df4dc
71022df4ec  cbnz x9,0x71022df508
71022df4f0  ldr x8,[x23]
71022df4f4  ldr x8,[x8, #0x10]
71022df4f8  mov x0,x23
71022df4fc  blr x8
71022df500  mov x0,x23
71022df504  bl 0x71039c2670
71022df508  cbz x22,0x71022df514
71022df50c  mov x0,x22
71022df510  bl 0x710392eb40
71022df514  cmp x27,x26
71022df518  mov x22,x27
71022df51c  b.ne 0x71022df4cc
71022df520  adrp x8,0x710593b000
71022df524  add x8,x8,#0x2d0
71022df528  ldarb w8,[x8]
71022df52c  tbz w8,#0x0,0x71022dfe00
71022df530  ldr x8,[x19, #0x78]
71022df534  ldr x8,[x8, #0x60]
71022df538  adrp x9,0x710593b000
71022df53c  add x9,x9,#0x280
71022df540  add x10,x8,#0x8
71022df544  cmp x8,#0x0
71022df548  csel x8,x9,x10,eq
71022df54c  mov w10,#0x3cb
71022df550  movk w10,#0x2f9a, LSL #16
71022df554  ldr w9,[x8]
71022df558  cmp w9,w10
71022df55c  b.ne 0x71022df574
71022df560  add x0,x8,#0x8
71022df564  adrp x1,0x7104359000
71022df568  add x1,x1,#0x123
71022df56c  bl 0x71039c0060
71022df570  cbz w0,0x71022df8fc
71022df574  mov x9,#0x614d
71022df578  movk x9,#0x6e69, LSL #16
71022df57c  mov x8,#0xd00000000
71022df580  movk x9,#0x654d, LSL #32
71022df584  movk x9,#0x756e, LSL #48
71022df588  add x10,sp,#0x8
71022df58c  stp x8,x9,[sp, #0x8]
71022df590  mov w8,#0x6353
71022df594  movk w8,#0x6e65, LSL #16
71022df598  str w8,[sp, #0x18]
71022df59c  mov w8,#0x65
71022df5a0  add x9,x10,#0x9
71022df5a4  mov w10,#0x4d
71022df5a8  strh w8,[sp, #0x1c]
71022df5ac  mov w8,#0x89
71022df5b0  mov w11,w24
71022df5b4  mul w11,w11,w8
71022df5b8  and w10,w10,#0xff
71022df5bc  eor w11,w11,w10
71022df5c0  ldrb w10,[x9], #0x1
71022df5c4  cbnz w10,0x71022df5b4
71022df5c8  str w11,[sp, #0x8]
71022df5cc  adrp x11,0x71050b6000
71022df5d0  add x11,x11,#0x2b8
71022df5d4  add x10,sp,#0x50
71022df5d8  str x11,[sp, #0x50]
71022df5dc  add x11,sp,#0x8
71022df5e0  mov x9,xzr
71022df5e4  add x10,x10,#0x10
71022df5e8  add x11,x11,#0xa
71022df5ec  mov w12,#0x4d
71022df5f0  str wzr,[sp, #0x58]
71022df5f4  tst w12,#0xff
71022df5f8  b.eq 0x71022df788
71022df5fc  add w13,w9,#0x1
71022df600  cmp w13,#0x3f
71022df604  strb w12,[x10, x9, LSL ]
71022df608  b.cs 0x71022df77c
71022df60c  add x12,x11,x9
71022df610  ldurb w13,[x12, #-0x1]
71022df614  cbz w13,0x71022df784
71022df618  ldrb w12,[x11, x9, LSL ]
71022df61c  add x14,x10,x9
71022df620  add x9,x9,#0x2
71022df624  strb w13,[x14, #0x1]
71022df628  tst w12,#0xff
71022df62c  b.ne 0x71022df5fc
71022df630  b 0x71022df788
71022df634  ldr x8,[x19]
71022df638  ldr x8,[x8, #0x80]
71022df63c  b 0x71022df648
71022df640  ldr x8,[x19]
71022df644  ldr x8,[x8, #0x88]
71022df648  mov x0,x19
71022df64c  mov x1,x21
71022df650  mov x2,x20
71022df654  blr x8
71022df658  mov w0,wzr
71022df65c  b 0x71022dfd14
71022df660  add w10,w10,#0x1
71022df664  add x11,x9,#0x8
71022df668  strb wzr,[x11, w10, UXTW ]
71022df66c  str w10,[x9, #0x4]
71022df670  ldrb w10,[x9, #0x8]
71022df674  mov w12,w8
71022df678  cbz w10,0x71022df69c
71022df67c  add x11,x9,#0x9
71022df680  mov w13,#0x89
71022df684  mov w12,w8
71022df688  mul w12,w12,w13
71022df68c  and w10,w10,#0xff
71022df690  eor w12,w12,w10
71022df694  ldrb w10,[x11], #0x1
71022df698  cbnz w10,0x71022df688
71022df69c  str w12,[x9]
71022df6a0  ldr x9,[x20, #0x8]
71022df6a4  add x10,x9,#0x90
71022df6a8  add x12,sp,#0x50
71022df6ac  cmp x10,x12
71022df6b0  b.eq 0x71022dfd10
71022df6b4  mov x11,xzr
71022df6b8  add x12,x12,#0x8
71022df6bc  b 0x71022df6c8
71022df6c0  add x11,x11,#0x2
71022df6c4  strb w13,[x14, #0x99]
71022df6c8  add x13,x12,x11
71022df6cc  ldrb w15,[x13]
71022df6d0  cbz w15,0x71022df744
71022df6d4  add w16,w11,#0x1
71022df6d8  add x14,x9,x11
71022df6dc  cmp w16,#0x3f
71022df6e0  strb w15,[x14, #0x98]
71022df6e4  b.cs 0x71022df740
71022df6e8  ldrb w13,[x13, #0x1]
71022df6ec  cbnz w13,0x71022df6c0
71022df6f0  add x11,x11,#0x1
71022df6f4  b 0x71022df744
71022df6f8  add w9,w9,#0x1
71022df6fc  add x10,x8,#0x8
71022df700  strb wzr,[x10, w9, UXTW ]
71022df704  ldrb w11,[x8, #0x8]
71022df708  mov w10,#0x9dc5
71022df70c  movk w10,#0x811c, LSL #16
71022df710  str w9,[x8, #0x4]
71022df714  cbz w11,0x71022df734
71022df718  add x9,x8,#0x9
71022df71c  mov w12,#0x89
71022df720  mul w10,w10,w12
71022df724  and w11,w11,#0xff
71022df728  eor w10,w10,w11
71022df72c  ldrb w11,[x9], #0x1
71022df730  cbnz w11,0x71022df720
71022df734  mov w0,wzr
71022df738  str w10,[x8]
71022df73c  b 0x71022dfd14
71022df740  add w11,w11,#0x1
71022df744  add x12,x9,#0x98
71022df748  strb wzr,[x12, w11, UXTW ]
71022df74c  str w11,[x9, #0x94]
71022df750  ldrb w11,[x9, #0x98]
71022df754  cbz w11,0x71022df774
71022df758  add x9,x9,#0x99
71022df75c  mov w12,#0x89
71022df760  mul w8,w8,w12
71022df764  and w11,w11,#0xff
71022df768  eor w8,w8,w11
71022df76c  ldrb w11,[x9], #0x1
71022df770  cbnz w11,0x71022df760
71022df774  str w8,[x10]
71022df778  b 0x71022dfd10
71022df77c  add w9,w9,#0x1
71022df780  b 0x71022df788
71022df784  add x9,x9,#0x1
71022df788  add x10,sp,#0x50
71022df78c  add x11,x10,#0x10
71022df790  strb wzr,[x11, w9, UXTW ]
71022df794  str w9,[sp, #0x5c]
71022df798  ldrb w9,[sp, #0x60]
71022df79c  mov w11,w24
71022df7a0  cbz w9,0x71022df7c0
71022df7a4  add x10,x10,#0x11
71022df7a8  mov w11,w24
71022df7ac  mul w11,w11,w8
71022df7b0  and w9,w9,#0xff
71022df7b4  eor w11,w11,w9
71022df7b8  ldrb w9,[x10], #0x1
71022df7bc  cbnz w9,0x71022df7ac
71022df7c0  str w11,[sp, #0x58]
71022df7c4  strh wzr,[sp, #0xa0]
71022df7c8  ldr x9,[x21, #0x8]
71022df7cc  mov x10,xzr
71022df7d0  adrp x11,0x710427e000
71022df7d4  add x11,x11,#0x854
71022df7d8  add x12,sp,#0xa8
71022df7dc  str xzr,[sp, #0xa8]
71022df7e0  b 0x71022df7ec
71022df7e4  add x10,x10,#0x2
71022df7e8  strb w14,[x13, #0x9]
71022df7ec  add x14,x11,x10
71022df7f0  ldrb w15,[x14]
71022df7f4  cbz w15,0x71022df80c
71022df7f8  ldrb w14,[x14, #0x1]
71022df7fc  add x13,x12,x10
71022df800  strb w15,[x13, #0x8]
71022df804  cbnz w14,0x71022df7e4
71022df808  add x10,x10,#0x1
71022df80c  add x11,sp,#0xa8
71022df810  add x12,x11,#0x8
71022df814  strb wzr,[x12, w10, UXTW ]
71022df818  str w10,[sp, #0xac]
71022df81c  ldrb w10,[sp, #0xb0]
71022df820  mov w12,w24
71022df824  cbz w10,0x71022df844
71022df828  add x11,x11,#0x9
71022df82c  mov w12,w24
71022df830  mul w12,w12,w8
71022df834  and w10,w10,#0xff
71022df838  eor w12,w12,w10
71022df83c  ldrb w10,[x11], #0x1
71022df840  cbnz w10,0x71022df830
71022df844  str w12,[sp, #0xa8]
71022df848  ldr x11,[x9, #0x38]
71022df84c  cbz x11,0x71022df89c
71022df850  mov x10,xzr
71022df854  add x11,x11,#0x10
71022df858  sub x12,x29,#0xa0
71022df85c  stur wzr,[x29, #-0xa0]
71022df860  b 0x71022df86c
71022df864  add x10,x10,#0x2
71022df868  strb w13,[x14, #0x9]
71022df86c  add x13,x11,x10
71022df870  ldrb w15,[x13]
71022df874  cbz w15,0x71022df8ac
71022df878  add w16,w10,#0x1
71022df87c  add x14,x12,x10
71022df880  cmp w16,#0x3f
71022df884  strb w15,[x14, #0x8]
71022df888  b.cs 0x71022df8a8
71022df88c  ldrb w13,[x13, #0x1]
71022df890  cbnz w13,0x71022df864
71022df894  add x10,x10,#0x1
71022df898  b 0x71022df8ac
71022df89c  sturb wzr,[x29, #-0x98]
71022df8a0  stur xzr,[x29, #-0xa0]
71022df8a4  b 0x71022df8e8
71022df8a8  add w10,w10,#0x1
71022df8ac  sub x11,x29,#0xa0
71022df8b0  add x12,x11,#0x8
71022df8b4  strb wzr,[x12, w10, UXTW ]
71022df8b8  stur w10,[x29, #-0x9c]
71022df8bc  ldurb w10,[x29, #-0x98]
71022df8c0  mov w12,w24
71022df8c4  cbz w10,0x71022df8e4
71022df8c8  add x11,x11,#0x9
71022df8cc  mov w12,w24
71022df8d0  mul w12,w12,w8
71022df8d4  and w10,w10,#0xff
71022df8d8  eor w12,w12,w10
71022df8dc  ldrb w10,[x11], #0x1
71022df8e0  cbnz w10,0x71022df8d0
71022df8e4  stur w12,[x29, #-0xa0]
71022df8e8  ldr x0,[x9, #0x20]
71022df8ec  add x1,sp,#0xa8
71022df8f0  sub x2,x29,#0xa0
71022df8f4  add x3,sp,#0x50
71022df8f8  bl 0x7103726240
71022df8fc  adrp x8,0x710593b000
71022df900  add x8,x8,#0x2d0
71022df904  ldarb w8,[x8]
71022df908  tbz w8,#0x0,0x71022dfdd0
71022df90c  ldr x9,[x19, #0x78]
71022df910  ldr x9,[x9, #0x60]
71022df914  adrp x10,0x710593b000
71022df918  add x10,x10,#0x280
71022df91c  add x11,x9,#0x8
71022df920  cmp x9,#0x0
71022df924  csel x9,x10,x11,eq
71022df928  mov x8,xzr
71022df92c  adrp x22,0x71050b6000
71022df930  add x22,x22,#0x2b8
71022df934  str x22,[sp, #0x50]
71022df938  str wzr,[sp, #0x58]
71022df93c  add x9,x9,#0x8
71022df940  add x10,sp,#0x50
71022df944  b 0x71022df950
71022df948  add x8,x8,#0x2
71022df94c  strb w11,[x12, #0x11]
71022df950  add x11,x9,x8
71022df954  ldrb w13,[x11]
71022df958  cbz w13,0x71022df984
71022df95c  add w14,w8,#0x1
71022df960  add x12,x10,x8
71022df964  cmp w14,#0x3f
71022df968  strb w13,[x12, #0x10]
71022df96c  b.cs 0x71022df980
71022df970  ldrb w11,[x11, #0x1]
71022df974  cbnz w11,0x71022df948
71022df978  add x8,x8,#0x1
71022df97c  b 0x71022df984
71022df980  add w8,w8,#0x1
71022df984  add x9,sp,#0x50
71022df988  add x10,x9,#0x10
71022df98c  strb wzr,[x10, w8, UXTW ]
71022df990  str w8,[sp, #0x5c]
71022df994  ldrb w8,[sp, #0x60]
71022df998  mov w10,w24
71022df99c  cbz w8,0x71022df9c0
71022df9a0  add x9,x9,#0x11
71022df9a4  mov w11,#0x89
71022df9a8  mov w10,w24
71022df9ac  mul w10,w10,w11
71022df9b0  and w8,w8,#0xff
71022df9b4  eor w10,w10,w8
71022df9b8  ldrb w8,[x9], #0x1
71022df9bc  cbnz w8,0x71022df9ac
71022df9c0  str w10,[sp, #0x58]
71022df9c4  strb wzr,[sp, #0xa0]
71022df9c8  mov x9,xzr
71022df9cc  strb w25,[sp, #0xa1]
71022df9d0  ldr x8,[x21, #0x8]
71022df9d4  add x10,x19,#0x10
71022df9d8  add x11,sp,#0xa8
71022df9dc  str xzr,[sp, #0xa8]
71022df9e0  b 0x71022df9ec
71022df9e4  add x9,x9,#0x2
71022df9e8  strb w12,[x13, #0x9]
71022df9ec  add x12,x10,x9
71022df9f0  ldrb w14,[x12]
71022df9f4  cbz w14,0x71022dfa20
71022df9f8  add w15,w9,#0x1
71022df9fc  add x13,x11,x9
71022dfa00  cmp w15,#0x3f
71022dfa04  strb w14,[x13, #0x8]
71022dfa08  b.cs 0x71022dfa1c
71022dfa0c  ldrb w12,[x12, #0x1]
71022dfa10  cbnz w12,0x71022df9e4
71022dfa14  add x9,x9,#0x1
71022dfa18  b 0x71022dfa20
71022dfa1c  add w9,w9,#0x1
71022dfa20  add x10,sp,#0xa8
71022dfa24  add x11,x10,#0x8
71022dfa28  strb wzr,[x11, w9, UXTW ]
71022dfa2c  str w9,[sp, #0xac]
71022dfa30  ldrb w9,[sp, #0xb0]
71022dfa34  mov w11,w24
71022dfa38  cbz w9,0x71022dfa5c
71022dfa3c  add x10,x10,#0x9
71022dfa40  mov w12,#0x89
71022dfa44  mov w11,w24
71022dfa48  mul w11,w11,w12
71022dfa4c  and w9,w9,#0xff
71022dfa50  eor w11,w11,w9
71022dfa54  ldrb w9,[x10], #0x1
71022dfa58  cbnz w9,0x71022dfa48
71022dfa5c  str w11,[sp, #0xa8]
71022dfa60  ldr x10,[x8, #0x38]
71022dfa64  cbz x10,0x71022dfab4
71022dfa68  mov x9,xzr
71022dfa6c  add x10,x10,#0x10
71022dfa70  sub x11,x29,#0xa0
71022dfa74  stur wzr,[x29, #-0xa0]
71022dfa78  b 0x71022dfa84
71022dfa7c  add x9,x9,#0x2
71022dfa80  strb w12,[x13, #0x9]
71022dfa84  add x12,x10,x9
71022dfa88  ldrb w14,[x12]
71022dfa8c  cbz w14,0x71022dfac4
71022dfa90  add w15,w9,#0x1
71022dfa94  add x13,x11,x9
71022dfa98  cmp w15,#0x3f
71022dfa9c  strb w14,[x13, #0x8]
71022dfaa0  b.cs 0x71022dfac0
71022dfaa4  ldrb w12,[x12, #0x1]
71022dfaa8  cbnz w12,0x71022dfa7c
71022dfaac  add x9,x9,#0x1
71022dfab0  b 0x71022dfac4
71022dfab4  sturb wzr,[x29, #-0x98]
71022dfab8  stur xzr,[x29, #-0xa0]
71022dfabc  b 0x71022dfb04
71022dfac0  add w9,w9,#0x1
71022dfac4  sub x10,x29,#0xa0
71022dfac8  add x11,x10,#0x8
71022dfacc  strb wzr,[x11, w9, UXTW ]
71022dfad0  stur w9,[x29, #-0x9c]
71022dfad4  ldurb w9,[x29, #-0x98]
71022dfad8  mov w11,w24
71022dfadc  cbz w9,0x71022dfb00
71022dfae0  add x10,x10,#0x9
71022dfae4  mov w12,#0x89
71022dfae8  mov w11,w24
71022dfaec  mul w11,w11,w12
71022dfaf0  and w9,w9,#0xff
71022dfaf4  eor w11,w11,w9
71022dfaf8  ldrb w9,[x10], #0x1
71022dfafc  cbnz w9,0x71022dfaec
71022dfb00  stur w11,[x29, #-0xa0]
71022dfb04  ldr x0,[x8, #0x20]
71022dfb08  add x1,sp,#0xa8
71022dfb0c  sub x2,x29,#0xa0
71022dfb10  add x3,sp,#0x50
71022dfb14  add x23,sp,#0x50
71022dfb18  bl 0x71037266d0
71022dfb1c  mov x8,xzr
71022dfb20  add x9,x20,#0x10
71022dfb24  add x10,x20,#0x58
71022dfb28  str x22,[sp, #0x50]
71022dfb2c  str wzr,[sp, #0x58]
71022dfb30  b 0x71022dfb3c
71022dfb34  add x8,x8,#0x2
71022dfb38  strb w11,[x12, #0x11]
71022dfb3c  add x11,x10,x8
71022dfb40  ldrb w13,[x11]
71022dfb44  cbz w13,0x71022dfb70
71022dfb48  add w14,w8,#0x1
71022dfb4c  add x12,x23,x8
71022dfb50  cmp w14,#0x3f
71022dfb54  strb w13,[x12, #0x10]
71022dfb58  b.cs 0x71022dfb6c
71022dfb5c  ldrb w11,[x11, #0x1]
71022dfb60  cbnz w11,0x71022dfb34
71022dfb64  add x8,x8,#0x1
71022dfb68  b 0x71022dfb70
71022dfb6c  add w8,w8,#0x1
71022dfb70  add x10,sp,#0x50
71022dfb74  add x11,x10,#0x10
71022dfb78  strb wzr,[x11, w8, UXTW ]
71022dfb7c  str w8,[sp, #0x5c]
71022dfb80  ldrb w8,[sp, #0x60]
71022dfb84  mov w11,w24
71022dfb88  cbz w8,0x71022dfbac
71022dfb8c  add x10,x10,#0x11
71022dfb90  mov w12,#0x89
71022dfb94  mov w11,w24
71022dfb98  mul w11,w11,w12
71022dfb9c  and w8,w8,#0xff
71022dfba0  eor w11,w11,w8
71022dfba4  ldrb w8,[x10], #0x1
71022dfba8  cbnz w8,0x71022dfb98
71022dfbac  str w11,[sp, #0x58]
71022dfbb0  strb w25,[sp, #0xa0]
71022dfbb4  mov x10,xzr
71022dfbb8  strb wzr,[sp, #0xa1]
71022dfbbc  ldr x8,[x21, #0x8]
71022dfbc0  add x11,sp,#0xa8
71022dfbc4  str xzr,[sp, #0xa8]
71022dfbc8  b 0x71022dfbd4
71022dfbcc  add x10,x10,#0x2
71022dfbd0  strb w12,[x13, #0x9]
71022dfbd4  add x12,x9,x10
71022dfbd8  ldrb w14,[x12]
71022dfbdc  cbz w14,0x71022dfc08
71022dfbe0  add w15,w10,#0x1
71022dfbe4  add x13,x11,x10
71022dfbe8  cmp w15,#0x3f
71022dfbec  strb w14,[x13, #0x8]
71022dfbf0  b.cs 0x71022dfc04
71022dfbf4  ldrb w12,[x12, #0x1]
71022dfbf8  cbnz w12,0x71022dfbcc
71022dfbfc  add x10,x10,#0x1
71022dfc00  b 0x71022dfc08
71022dfc04  add w10,w10,#0x1
71022dfc08  add x12,sp,#0xa8
71022dfc0c  add x9,x12,#0x8
71022dfc10  mov w11,w24
71022dfc14  strb wzr,[x9, w10, UXTW ]
71022dfc18  ldrb w9,[sp, #0xb0]
71022dfc1c  str w10,[sp, #0xac]
71022dfc20  cbz w9,0x71022dfc44
71022dfc24  add x10,x12,#0x9
71022dfc28  mov w12,#0x89
71022dfc2c  mov w11,w24
71022dfc30  mul w11,w11,w12
71022dfc34  and w9,w9,#0xff
71022dfc38  eor w11,w11,w9
71022dfc3c  ldrb w9,[x10], #0x1
71022dfc40  cbnz w9,0x71022dfc30
71022dfc44  str w11,[sp, #0xa8]
71022dfc48  ldr x10,[x8, #0x38]
71022dfc4c  cbz x10,0x71022dfc9c
71022dfc50  mov x9,xzr
71022dfc54  add x10,x10,#0x10
71022dfc58  sub x11,x29,#0xa0
71022dfc5c  stur wzr,[x29, #-0xa0]
71022dfc60  b 0x71022dfc6c
71022dfc64  add x9,x9,#0x2
71022dfc68  strb w12,[x13, #0x9]
71022dfc6c  add x12,x10,x9
71022dfc70  ldrb w14,[x12]
71022dfc74  cbz w14,0x71022dfcac
71022dfc78  add w15,w9,#0x1
71022dfc7c  add x13,x11,x9
71022dfc80  cmp w15,#0x3f
71022dfc84  strb w14,[x13, #0x8]
71022dfc88  b.cs 0x71022dfca8
71022dfc8c  ldrb w12,[x12, #0x1]
71022dfc90  cbnz w12,0x71022dfc64
71022dfc94  add x9,x9,#0x1
71022dfc98  b 0x71022dfcac
71022dfc9c  sturb wzr,[x29, #-0x98]
71022dfca0  stur xzr,[x29, #-0xa0]
71022dfca4  b 0x71022dfce4
71022dfca8  add w9,w9,#0x1
71022dfcac  sub x11,x29,#0xa0
71022dfcb0  add x10,x11,#0x8
71022dfcb4  strb wzr,[x10, w9, UXTW ]
71022dfcb8  ldurb w10,[x29, #-0x98]
71022dfcbc  stur w9,[x29, #-0x9c]
71022dfcc0  cbz w10,0x71022dfce0
71022dfcc4  add x9,x11,#0x9
71022dfcc8  mov w11,#0x89
71022dfccc  mul w12,w24,w11
71022dfcd0  and w10,w10,#0xff
71022dfcd4  eor w24,w12,w10
71022dfcd8  ldrb w10,[x9], #0x1
71022dfcdc  cbnz w10,0x71022dfccc
71022dfce0  stur w24,[x29, #-0xa0]
71022dfce4  ldr x0,[x8, #0x20]
71022dfce8  add x1,sp,#0xa8
71022dfcec  sub x2,x29,#0xa0
71022dfcf0  add x3,sp,#0x50
71022dfcf4  bl 0x71037266d0
71022dfcf8  mov w8,#0x1
71022dfcfc  strb w8,[x19, #0xe0]
71022dfd00  ldr x8,[x19, #0x88]
71022dfd04  cbz x8,0x71022dfd34
71022dfd08  mov w8,wzr
71022dfd0c  strb w8,[x19, #0xe1]
71022dfd10  mov w0,#0x1
71022dfd14  ldp x29,x30,[sp, #0x190]
71022dfd18  ldp x20,x19,[sp, #0x180]
71022dfd1c  ldp x22,x21,[sp, #0x170]
71022dfd20  ldp x24,x23,[sp, #0x160]
71022dfd24  ldp x26,x25,[sp, #0x150]
71022dfd28  ldp x28,x27,[sp, #0x140]
71022dfd2c  add sp,sp,#0x1a0
71022dfd30  ret
71022dfd34  ldr x22,[x19, #0x78]
71022dfd38  ldr x8,[x22, #0x60]
71022dfd3c  cbz x8,0x71022dfd08
71022dfd40  ldr x23,[x22, #0x8]!
71022dfd44  cbz x23,0x71022dfd08
71022dfd48  ldr w24,[x8, #0x8]
71022dfd4c  add x20,x8,#0x10
71022dfd50  mov w25,#0xffffffff
71022dfd54  mov x21,x22
71022dfd58  ldr w8,[x23, #0x20]
71022dfd5c  cmp w8,w24
71022dfd60  mov w0,w25
71022dfd64  b.cc 0x71022dfd80
71022dfd68  b.ls 0x71022dfd74
71022dfd6c  mov w0,#0x1
71022dfd70  b 0x71022dfd80
71022dfd74  add x0,x23,#0x28
71022dfd78  mov x1,x20
71022dfd7c  bl 0x71039c0060
71022dfd80  cmp w0,#0x0
71022dfd84  cset w8,lt
71022dfd88  csel x21,x21,x23,lt
71022dfd8c  ldr x23,[x23, w8, UXTW #0x3]
71022dfd90  cbnz x23,0x71022dfd58
71022dfd94  cmp x21,x22
71022dfd98  b.eq 0x71022dfd08
71022dfd9c  ldr w8,[x21, #0x20]
71022dfda0  cmp w24,w8
71022dfda4  b.cc 0x71022dfd08
71022dfda8  b.hi 0x71022dfdbc
71022dfdac  add x1,x21,#0x28
71022dfdb0  mov x0,x20
71022dfdb4  bl 0x71039c0060
71022dfdb8  tbnz w0,#0x1f,0x71022dfd08
71022dfdbc  ldr x8,[x21, #0x68]
71022dfdc0  ldr w8,[x8, #0x10]
71022dfdc4  cbz w8,0x71022dfd08
71022dfdc8  mov w8,#0x1
71022dfdcc  b 0x71022dfd0c
71022dfdd0  adrp x0,0x710593b000
71022dfdd4  add x0,x0,#0x2d0
71022dfdd8  bl 0x71039c06b0
71022dfddc  cbz w0,0x71022df90c
71022dfde0  adrp x8,0x710593b000
71022dfde4  add x8,x8,#0x280
71022dfde8  adrp x0,0x710593b000
71022dfdec  add x0,x0,#0x2d0
71022dfdf0  strb wzr,[x8, #0x8]
71022dfdf4  str xzr,[x8]
71022dfdf8  bl 0x71039c06c0
71022dfdfc  b 0x71022df90c
71022dfe00  adrp x0,0x710593b000
71022dfe04  add x0,x0,#0x2d0
71022dfe08  bl 0x71039c06b0
71022dfe0c  cbz w0,0x71022df530
71022dfe10  adrp x8,0x710593b000
71022dfe14  add x8,x8,#0x280
71022dfe18  adrp x0,0x710593b000
71022dfe1c  add x0,x0,#0x2d0
71022dfe20  strb wzr,[x8, #0x8]
71022dfe24  str xzr,[x8]
71022dfe28  bl 0x71039c06c0
71022dfe2c  b 0x71022df530
