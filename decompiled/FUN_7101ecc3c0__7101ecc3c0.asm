// addr:      7101ecc3c0
// offset:    0x1ecc3c0
// name:      FUN_7101ecc3c0
// mangled:   
// size:      4404

7101ecc3c0  sub sp,sp,#0xd0
7101ecc3c4  stp x28,x27,[sp, #0x70]
7101ecc3c8  stp x26,x25,[sp, #0x80]
7101ecc3cc  stp x24,x23,[sp, #0x90]
7101ecc3d0  stp x22,x21,[sp, #0xa0]
7101ecc3d4  stp x20,x19,[sp, #0xb0]
7101ecc3d8  stp x29,x30,[sp, #0xc0]
7101ecc3dc  add x29,sp,#0xc0
7101ecc3e0  mov x19,x0
7101ecc3e4  mov w1,#0x2d0
7101ecc3e8  mov w0,#0x10
7101ecc3ec  bl 0x710392e290
7101ecc3f0  cbnz x0,0x7101ecc438
7101ecc3f4  adrp x8,0x7105332000
7101ecc3f8  ldr x0,[x8, #0xf00]
7101ecc3fc  cbz x0,0x7101ecc434
7101ecc400  mov w8,#0x2d0
7101ecc404  str wzr,[sp, #0x58]
7101ecc408  add x1,sp,#0x58
7101ecc40c  str x8,[sp, #0x10]
7101ecc410  ldr x8,[x0]
7101ecc414  ldr x8,[x8, #0x30]
7101ecc418  add x2,sp,#0x10
7101ecc41c  blr x8
7101ecc420  tbz w0,#0x0,0x7101ecc434
7101ecc424  mov w1,#0x2d0
7101ecc428  mov w0,#0x10
7101ecc42c  bl 0x710392e290
7101ecc430  cbnz x0,0x7101ecc438
7101ecc434  mov x0,xzr
7101ecc438  add x8,x0,#0x2d0
7101ecc43c  str x8,[sp, #0x68]
7101ecc440  orr x8,xzr,#0xc00000000
7101ecc444  mov w20,#0x9dc5
7101ecc448  movk w20,#0x811c, LSL #16
7101ecc44c  str x8,[sp, #0x10]
7101ecc450  mov x22,#0x6573
7101ecc454  movk x22,#0x5f74, LSL #16
7101ecc458  add x8,sp,#0x10
7101ecc45c  mov w9,#0x7267
7101ecc460  movk w9,#0x6469, LSL #16
7101ecc464  str w9,[sp, #0x20]
7101ecc468  movk x22,#0x7462, LSL #32
7101ecc46c  movk x22,#0x5f6e, LSL #48
7101ecc470  str x22,[sp, #0x18]
7101ecc474  add x8,x8,#0x9
7101ecc478  mov w9,#0x73
7101ecc47c  strb wzr,[sp, #0x24]
7101ecc480  mov w21,#0x89
7101ecc484  mov w10,w20
7101ecc488  stp x0,x0,[sp, #0x58]
7101ecc48c  mul w10,w10,w21
7101ecc490  and w9,w9,#0xff
7101ecc494  eor w10,w10,w9
7101ecc498  ldrb w9,[x8], #0x1
7101ecc49c  cbnz w9,0x7101ecc48c
7101ecc4a0  str w10,[sp, #0x10]
7101ecc4a4  mov x9,x0
7101ecc4a8  add x10,sp,#0x10
7101ecc4ac  mov x8,xzr
7101ecc4b0  add x10,x10,#0x9
7101ecc4b4  mov w12,#0x73
7101ecc4b8  str wzr,[x9], #0x8
7101ecc4bc  add w11,w8,#0x1
7101ecc4c0  cmp w11,#0x3e
7101ecc4c4  strb w12,[x9, x8, LSL ]
7101ecc4c8  b.hi 0x7101ecc4e0
7101ecc4cc  ldrb w12,[x10, x8, LSL ]
7101ecc4d0  add x11,x8,#0x1
7101ecc4d4  mov x8,x11
7101ecc4d8  cbnz w12,0x7101ecc4bc
7101ecc4dc  b 0x7101ecc4e4
7101ecc4e0  add w11,w8,#0x1
7101ecc4e4  add x8,x0,#0x8
7101ecc4e8  strb wzr,[x8, w11, UXTW ]
7101ecc4ec  ldrb w8,[x0, #0x8]
7101ecc4f0  mov w9,w20
7101ecc4f4  str w11,[x0, #0x4]
7101ecc4f8  cbz w8,0x7101ecc518
7101ecc4fc  add x10,x0,#0x9
7101ecc500  mov w9,w20
7101ecc504  mul w9,w9,w21
7101ecc508  and w8,w8,#0xff
7101ecc50c  eor w9,w9,w8
7101ecc510  ldrb w8,[x10], #0x1
7101ecc514  cbnz w8,0x7101ecc504
7101ecc518  mov x8,x0
7101ecc51c  mov x10,#0x616c
7101ecc520  movk x10,#0x6579, LSL #16
7101ecc524  str w9,[x8], #0x48
7101ecc528  mov x9,#0x1200000000
7101ecc52c  movk x10,#0x6372, LSL #32
7101ecc530  movk x10,#0x6c6f, LSL #48
7101ecc534  stp x9,x22,[sp, #0x10]
7101ecc538  add x9,sp,#0x10
7101ecc53c  str x10,[sp, #0x20]
7101ecc540  mov w10,#0x726f
7101ecc544  add x9,x9,#0x9
7101ecc548  strh w10,[sp, #0x28]
7101ecc54c  mov w10,#0x73
7101ecc550  mov w11,w20
7101ecc554  str x8,[sp, #0x60]
7101ecc558  strb wzr,[sp, #0x2a]
7101ecc55c  mul w11,w11,w21
7101ecc560  and w10,w10,#0xff
7101ecc564  eor w11,w11,w10
7101ecc568  ldrb w10,[x9], #0x1
7101ecc56c  cbnz w10,0x7101ecc55c
7101ecc570  add x10,sp,#0x10
7101ecc574  mov x9,xzr
7101ecc578  str w11,[sp, #0x10]
7101ecc57c  add x10,x10,#0x9
7101ecc580  mov w11,#0x73
7101ecc584  str wzr,[x8]
7101ecc588  tst w11,#0xff
7101ecc58c  b.ne 0x7101ecc5ac
7101ecc590  b 0x7101ecc5d4
7101ecc594  add x13,x10,x9
7101ecc598  strb w11,[x12, #0x51]
7101ecc59c  ldrb w11,[x13, #0x1]
7101ecc5a0  add x9,x9,#0x2
7101ecc5a4  tst w11,#0xff
7101ecc5a8  b.eq 0x7101ecc5d4
7101ecc5ac  add w13,w9,#0x1
7101ecc5b0  add x12,x0,x9
7101ecc5b4  cmp w13,#0x3f
7101ecc5b8  strb w11,[x12, #0x50]
7101ecc5bc  b.cs 0x7101ecc5d0
7101ecc5c0  ldrb w11,[x10, x9, LSL ]
7101ecc5c4  cbnz w11,0x7101ecc594
7101ecc5c8  add x9,x9,#0x1
7101ecc5cc  b 0x7101ecc5d4
7101ecc5d0  add w9,w9,#0x1
7101ecc5d4  add x8,x8,w9, UXTW 
7101ecc5d8  strb wzr,[x8, #0x8]
7101ecc5dc  ldrb w8,[x0, #0x50]
7101ecc5e0  mov w10,w20
7101ecc5e4  str w9,[x0, #0x4c]
7101ecc5e8  cbz w8,0x7101ecc608
7101ecc5ec  add x9,x0,#0x51
7101ecc5f0  mov w10,w20
7101ecc5f4  mul w10,w10,w21
7101ecc5f8  and w8,w8,#0xff
7101ecc5fc  eor w10,w10,w8
7101ecc600  ldrb w8,[x9], #0x1
7101ecc604  cbnz w8,0x7101ecc5f4
7101ecc608  add x8,x0,#0x90
7101ecc60c  orr x9,xzr,#0x1800000000
7101ecc610  mov x24,#0x616c
7101ecc614  movk x24,#0x6579, LSL #16
7101ecc618  str w10,[x0, #0x48]
7101ecc61c  str x8,[sp, #0x60]
7101ecc620  stp x9,x22,[sp, #0x10]
7101ecc624  movk x24,#0x5f72, LSL #32
7101ecc628  movk x24,#0x3430, LSL #48
7101ecc62c  mov w28,#0x765f
7101ecc630  mov w23,#0x7369
7101ecc634  movk w23,#0x6269, LSL #16
7101ecc638  mov w27,#0x656c
7101ecc63c  mov w9,#0x73
7101ecc640  mov w8,#0x9
7101ecc644  add x10,sp,#0x10
7101ecc648  str x24,[sp, #0x20]
7101ecc64c  mov w11,w20
7101ecc650  strh w28,[sp, #0x28]
7101ecc654  stur w23,[sp, #0x2a]
7101ecc658  strh w27,[sp, #0x2e]
7101ecc65c  strb wzr,[sp, #0x30]
7101ecc660  mul w11,w11,w21
7101ecc664  and w9,w9,#0xff
7101ecc668  eor w11,w11,w9
7101ecc66c  ldrb w9,[x10, x8, LSL ]
7101ecc670  add x8,x8,#0x1
7101ecc674  cbnz w9,0x7101ecc660
7101ecc678  ldp x8,x9,[sp, #0x60]
7101ecc67c  cmp x8,x9
7101ecc680  str w11,[sp, #0x10]
7101ecc684  b.cs 0x7101ecc6d4
7101ecc688  add x10,sp,#0x10
7101ecc68c  mov x9,xzr
7101ecc690  str wzr,[x8]
7101ecc694  add x10,x10,#0x8
7101ecc698  b 0x7101ecc6a4
7101ecc69c  add x9,x9,#0x2
7101ecc6a0  strb w11,[x12, #0x9]
7101ecc6a4  add x11,x10,x9
7101ecc6a8  ldrb w13,[x11]
7101ecc6ac  cbz w13,0x7101ecc6e8
7101ecc6b0  add w14,w9,#0x1
7101ecc6b4  add x12,x8,x9
7101ecc6b8  cmp w14,#0x3f
7101ecc6bc  strb w13,[x12, #0x8]
7101ecc6c0  b.cs 0x7101ecc6e4
7101ecc6c4  ldrb w11,[x11, #0x1]
7101ecc6c8  cbnz w11,0x7101ecc69c
7101ecc6cc  add x9,x9,#0x1
7101ecc6d0  b 0x7101ecc6e8
7101ecc6d4  add x0,sp,#0x58
7101ecc6d8  add x1,sp,#0x10
7101ecc6dc  bl 0x71019c1c50
7101ecc6e0  b 0x7101ecc72c
7101ecc6e4  add w9,w9,#0x1
7101ecc6e8  add x10,x8,#0x8
7101ecc6ec  strb wzr,[x10, w9, UXTW ]
7101ecc6f0  str w9,[x8, #0x4]
7101ecc6f4  ldrb w9,[x8, #0x8]
7101ecc6f8  mov w11,w20
7101ecc6fc  cbz w9,0x7101ecc71c
7101ecc700  add x10,x8,#0x9
7101ecc704  mov w11,w20
7101ecc708  mul w11,w11,w21
7101ecc70c  and w9,w9,#0xff
7101ecc710  eor w11,w11,w9
7101ecc714  ldrb w9,[x10], #0x1
7101ecc718  cbnz w9,0x7101ecc708
7101ecc71c  str w11,[x8]
7101ecc720  ldr x8,[sp, #0x60]
7101ecc724  add x8,x8,#0x48
7101ecc728  str x8,[sp, #0x60]
7101ecc72c  orr x8,xzr,#0x1800000000
7101ecc730  mov x25,#0x616c
7101ecc734  movk x25,#0x6579, LSL #16
7101ecc738  stp x8,x22,[sp, #0x10]
7101ecc73c  movk x25,#0x5f72, LSL #32
7101ecc740  movk x25,#0x3330, LSL #48
7101ecc744  mov w9,#0x73
7101ecc748  mov w8,#0x9
7101ecc74c  add x10,sp,#0x10
7101ecc750  mov w11,w20
7101ecc754  str x25,[sp, #0x20]
7101ecc758  strh w28,[sp, #0x28]
7101ecc75c  stur w23,[sp, #0x2a]
7101ecc760  strh w27,[sp, #0x2e]
7101ecc764  strb wzr,[sp, #0x30]
7101ecc768  mul w11,w11,w21
7101ecc76c  and w9,w9,#0xff
7101ecc770  eor w11,w11,w9
7101ecc774  ldrb w9,[x10, x8, LSL ]
7101ecc778  add x8,x8,#0x1
7101ecc77c  cbnz w9,0x7101ecc768
7101ecc780  ldp x8,x9,[sp, #0x60]
7101ecc784  cmp x8,x9
7101ecc788  str w11,[sp, #0x10]
7101ecc78c  b.cs 0x7101ecc7dc
7101ecc790  add x10,sp,#0x10
7101ecc794  mov x9,xzr
7101ecc798  str wzr,[x8]
7101ecc79c  add x10,x10,#0x8
7101ecc7a0  b 0x7101ecc7ac
7101ecc7a4  add x9,x9,#0x2
7101ecc7a8  strb w11,[x12, #0x9]
7101ecc7ac  add x11,x10,x9
7101ecc7b0  ldrb w13,[x11]
7101ecc7b4  cbz w13,0x7101ecc7f0
7101ecc7b8  add w14,w9,#0x1
7101ecc7bc  add x12,x8,x9
7101ecc7c0  cmp w14,#0x3f
7101ecc7c4  strb w13,[x12, #0x8]
7101ecc7c8  b.cs 0x7101ecc7ec
7101ecc7cc  ldrb w11,[x11, #0x1]
7101ecc7d0  cbnz w11,0x7101ecc7a4
7101ecc7d4  add x9,x9,#0x1
7101ecc7d8  b 0x7101ecc7f0
7101ecc7dc  add x0,sp,#0x58
7101ecc7e0  add x1,sp,#0x10
7101ecc7e4  bl 0x71019c1c50
7101ecc7e8  b 0x7101ecc834
7101ecc7ec  add w9,w9,#0x1
7101ecc7f0  add x10,x8,#0x8
7101ecc7f4  strb wzr,[x10, w9, UXTW ]
7101ecc7f8  str w9,[x8, #0x4]
7101ecc7fc  ldrb w9,[x8, #0x8]
7101ecc800  mov w11,w20
7101ecc804  cbz w9,0x7101ecc824
7101ecc808  add x10,x8,#0x9
7101ecc80c  mov w11,w20
7101ecc810  mul w11,w11,w21
7101ecc814  and w9,w9,#0xff
7101ecc818  eor w11,w11,w9
7101ecc81c  ldrb w9,[x10], #0x1
7101ecc820  cbnz w9,0x7101ecc810
7101ecc824  str w11,[x8]
7101ecc828  ldr x8,[sp, #0x60]
7101ecc82c  add x8,x8,#0x48
7101ecc830  str x8,[sp, #0x60]
7101ecc834  orr x8,xzr,#0x1800000000
7101ecc838  mov x26,#0x616c
7101ecc83c  movk x26,#0x6579, LSL #16
7101ecc840  stp x8,x22,[sp, #0x10]
7101ecc844  movk x26,#0x5f72, LSL #32
7101ecc848  movk x26,#0x3230, LSL #48
7101ecc84c  mov w9,#0x73
7101ecc850  mov w8,#0x9
7101ecc854  add x10,sp,#0x10
7101ecc858  mov w11,w20
7101ecc85c  str x26,[sp, #0x20]
7101ecc860  strh w28,[sp, #0x28]
7101ecc864  stur w23,[sp, #0x2a]
7101ecc868  strh w27,[sp, #0x2e]
7101ecc86c  strb wzr,[sp, #0x30]
7101ecc870  mul w11,w11,w21
7101ecc874  and w9,w9,#0xff
7101ecc878  eor w11,w11,w9
7101ecc87c  ldrb w9,[x10, x8, LSL ]
7101ecc880  add x8,x8,#0x1
7101ecc884  cbnz w9,0x7101ecc870
7101ecc888  ldp x8,x9,[sp, #0x60]
7101ecc88c  cmp x8,x9
7101ecc890  str w11,[sp, #0x10]
7101ecc894  b.cs 0x7101ecc8e4
7101ecc898  add x10,sp,#0x10
7101ecc89c  mov x9,xzr
7101ecc8a0  str wzr,[x8]
7101ecc8a4  add x10,x10,#0x8
7101ecc8a8  b 0x7101ecc8b4
7101ecc8ac  add x9,x9,#0x2
7101ecc8b0  strb w11,[x12, #0x9]
7101ecc8b4  add x11,x10,x9
7101ecc8b8  ldrb w13,[x11]
7101ecc8bc  cbz w13,0x7101ecc8f8
7101ecc8c0  add w14,w9,#0x1
7101ecc8c4  add x12,x8,x9
7101ecc8c8  cmp w14,#0x3f
7101ecc8cc  strb w13,[x12, #0x8]
7101ecc8d0  b.cs 0x7101ecc8f4
7101ecc8d4  ldrb w11,[x11, #0x1]
7101ecc8d8  cbnz w11,0x7101ecc8ac
7101ecc8dc  add x9,x9,#0x1
7101ecc8e0  b 0x7101ecc8f8
7101ecc8e4  add x0,sp,#0x58
7101ecc8e8  add x1,sp,#0x10
7101ecc8ec  bl 0x71019c1c50
7101ecc8f0  b 0x7101ecc93c
7101ecc8f4  add w9,w9,#0x1
7101ecc8f8  add x10,x8,#0x8
7101ecc8fc  strb wzr,[x10, w9, UXTW ]
7101ecc900  str w9,[x8, #0x4]
7101ecc904  ldrb w9,[x8, #0x8]
7101ecc908  mov w11,w20
7101ecc90c  cbz w9,0x7101ecc92c
7101ecc910  add x10,x8,#0x9
7101ecc914  mov w11,w20
7101ecc918  mul w11,w11,w21
7101ecc91c  and w9,w9,#0xff
7101ecc920  eor w11,w11,w9
7101ecc924  ldrb w9,[x10], #0x1
7101ecc928  cbnz w9,0x7101ecc918
7101ecc92c  str w11,[x8]
7101ecc930  ldr x8,[sp, #0x60]
7101ecc934  add x8,x8,#0x48
7101ecc938  str x8,[sp, #0x60]
7101ecc93c  orr x8,xzr,#0x1800000000
7101ecc940  mov x12,#0x616c
7101ecc944  movk x12,#0x6579, LSL #16
7101ecc948  stp x8,x22,[sp, #0x10]
7101ecc94c  movk x12,#0x5f72, LSL #32
7101ecc950  movk x12,#0x3130, LSL #48
7101ecc954  mov w9,#0x73
7101ecc958  mov w8,#0x9
7101ecc95c  add x10,sp,#0x10
7101ecc960  mov w11,w20
7101ecc964  str x12,[sp, #0x20]
7101ecc968  strh w28,[sp, #0x28]
7101ecc96c  stur w23,[sp, #0x2a]
7101ecc970  strh w27,[sp, #0x2e]
7101ecc974  strb wzr,[sp, #0x30]
7101ecc978  mul w11,w11,w21
7101ecc97c  and w9,w9,#0xff
7101ecc980  eor w11,w11,w9
7101ecc984  ldrb w9,[x10, x8, LSL ]
7101ecc988  add x8,x8,#0x1
7101ecc98c  cbnz w9,0x7101ecc978
7101ecc990  ldp x8,x9,[sp, #0x60]
7101ecc994  mov x23,x12
7101ecc998  cmp x8,x9
7101ecc99c  str w11,[sp, #0x10]
7101ecc9a0  b.cs 0x7101ecc9f0
7101ecc9a4  add x10,sp,#0x10
7101ecc9a8  mov x9,xzr
7101ecc9ac  str wzr,[x8]
7101ecc9b0  add x10,x10,#0x8
7101ecc9b4  b 0x7101ecc9c0
7101ecc9b8  add x9,x9,#0x2
7101ecc9bc  strb w11,[x12, #0x9]
7101ecc9c0  add x11,x10,x9
7101ecc9c4  ldrb w13,[x11]
7101ecc9c8  cbz w13,0x7101ecca04
7101ecc9cc  add w14,w9,#0x1
7101ecc9d0  add x12,x8,x9
7101ecc9d4  cmp w14,#0x3f
7101ecc9d8  strb w13,[x12, #0x8]
7101ecc9dc  b.cs 0x7101ecca00
7101ecc9e0  ldrb w11,[x11, #0x1]
7101ecc9e4  cbnz w11,0x7101ecc9b8
7101ecc9e8  add x9,x9,#0x1
7101ecc9ec  b 0x7101ecca04
7101ecc9f0  add x0,sp,#0x58
7101ecc9f4  add x1,sp,#0x10
7101ecc9f8  bl 0x71019c1c50
7101ecc9fc  b 0x7101ecca48
7101ecca00  add w9,w9,#0x1
7101ecca04  add x10,x8,#0x8
7101ecca08  strb wzr,[x10, w9, UXTW ]
7101ecca0c  str w9,[x8, #0x4]
7101ecca10  ldrb w9,[x8, #0x8]
7101ecca14  mov w11,w20
7101ecca18  cbz w9,0x7101ecca38
7101ecca1c  add x10,x8,#0x9
7101ecca20  mov w11,w20
7101ecca24  mul w11,w11,w21
7101ecca28  and w9,w9,#0xff
7101ecca2c  eor w11,w11,w9
7101ecca30  ldrb w9,[x10], #0x1
7101ecca34  cbnz w9,0x7101ecca24
7101ecca38  str w11,[x8]
7101ecca3c  ldr x8,[sp, #0x60]
7101ecca40  add x8,x8,#0x48
7101ecca44  str x8,[sp, #0x60]
7101ecca48  orr x8,xzr,#0x1000000000
7101ecca4c  mov w9,#0x73
7101ecca50  add x10,sp,#0x10
7101ecca54  stp x8,x22,[sp, #0x10]
7101ecca58  mov w8,#0x9
7101ecca5c  mov w11,w20
7101ecca60  str x24,[sp, #0x20]
7101ecca64  strb wzr,[sp, #0x28]
7101ecca68  mul w11,w11,w21
7101ecca6c  and w9,w9,#0xff
7101ecca70  eor w11,w11,w9
7101ecca74  ldrb w9,[x10, x8, LSL ]
7101ecca78  add x8,x8,#0x1
7101ecca7c  cbnz w9,0x7101ecca68
7101ecca80  ldp x8,x9,[sp, #0x60]
7101ecca84  cmp x8,x9
7101ecca88  str w11,[sp, #0x10]
7101ecca8c  b.cs 0x7101eccadc
7101ecca90  add x10,sp,#0x10
7101ecca94  mov x9,xzr
7101ecca98  str wzr,[x8]
7101ecca9c  add x10,x10,#0x8
7101eccaa0  b 0x7101eccaac
7101eccaa4  add x9,x9,#0x2
7101eccaa8  strb w11,[x12, #0x9]
7101eccaac  add x11,x10,x9
7101eccab0  ldrb w13,[x11]
7101eccab4  cbz w13,0x7101eccaf0
7101eccab8  add w14,w9,#0x1
7101eccabc  add x12,x8,x9
7101eccac0  cmp w14,#0x3f
7101eccac4  strb w13,[x12, #0x8]
7101eccac8  b.cs 0x7101eccaec
7101eccacc  ldrb w11,[x11, #0x1]
7101eccad0  cbnz w11,0x7101eccaa4
7101eccad4  add x9,x9,#0x1
7101eccad8  b 0x7101eccaf0
7101eccadc  add x0,sp,#0x58
7101eccae0  add x1,sp,#0x10
7101eccae4  bl 0x71019c1c50
7101eccae8  b 0x7101eccb34
7101eccaec  add w9,w9,#0x1
7101eccaf0  add x10,x8,#0x8
7101eccaf4  strb wzr,[x10, w9, UXTW ]
7101eccaf8  str w9,[x8, #0x4]
7101eccafc  ldrb w9,[x8, #0x8]
7101eccb00  mov w11,w20
7101eccb04  cbz w9,0x7101eccb24
7101eccb08  add x10,x8,#0x9
7101eccb0c  mov w11,w20
7101eccb10  mul w11,w11,w21
7101eccb14  and w9,w9,#0xff
7101eccb18  eor w11,w11,w9
7101eccb1c  ldrb w9,[x10], #0x1
7101eccb20  cbnz w9,0x7101eccb10
7101eccb24  str w11,[x8]
7101eccb28  ldr x8,[sp, #0x60]
7101eccb2c  add x8,x8,#0x48
7101eccb30  str x8,[sp, #0x60]
7101eccb34  orr x8,xzr,#0x1000000000
7101eccb38  mov w9,#0x73
7101eccb3c  add x10,sp,#0x10
7101eccb40  stp x8,x22,[sp, #0x10]
7101eccb44  mov w8,#0x9
7101eccb48  mov w11,w20
7101eccb4c  str x25,[sp, #0x20]
7101eccb50  strb wzr,[sp, #0x28]
7101eccb54  mul w11,w11,w21
7101eccb58  and w9,w9,#0xff
7101eccb5c  eor w11,w11,w9
7101eccb60  ldrb w9,[x10, x8, LSL ]
7101eccb64  add x8,x8,#0x1
7101eccb68  cbnz w9,0x7101eccb54
7101eccb6c  ldp x8,x9,[sp, #0x60]
7101eccb70  cmp x8,x9
7101eccb74  str w11,[sp, #0x10]
7101eccb78  b.cs 0x7101eccbc8
7101eccb7c  add x10,sp,#0x10
7101eccb80  mov x9,xzr
7101eccb84  str wzr,[x8]
7101eccb88  add x10,x10,#0x8
7101eccb8c  b 0x7101eccb98
7101eccb90  add x9,x9,#0x2
7101eccb94  strb w11,[x12, #0x9]
7101eccb98  add x11,x10,x9
7101eccb9c  ldrb w13,[x11]
7101eccba0  cbz w13,0x7101eccbdc
7101eccba4  add w14,w9,#0x1
7101eccba8  add x12,x8,x9
7101eccbac  cmp w14,#0x3f
7101eccbb0  strb w13,[x12, #0x8]
7101eccbb4  b.cs 0x7101eccbd8
7101eccbb8  ldrb w11,[x11, #0x1]
7101eccbbc  cbnz w11,0x7101eccb90
7101eccbc0  add x9,x9,#0x1
7101eccbc4  b 0x7101eccbdc
7101eccbc8  add x0,sp,#0x58
7101eccbcc  add x1,sp,#0x10
7101eccbd0  bl 0x71019c1c50
7101eccbd4  b 0x7101eccc20
7101eccbd8  add w9,w9,#0x1
7101eccbdc  add x10,x8,#0x8
7101eccbe0  strb wzr,[x10, w9, UXTW ]
7101eccbe4  str w9,[x8, #0x4]
7101eccbe8  ldrb w9,[x8, #0x8]
7101eccbec  mov w11,w20
7101eccbf0  cbz w9,0x7101eccc10
7101eccbf4  add x10,x8,#0x9
7101eccbf8  mov w11,w20
7101eccbfc  mul w11,w11,w21
7101eccc00  and w9,w9,#0xff
7101eccc04  eor w11,w11,w9
7101eccc08  ldrb w9,[x10], #0x1
7101eccc0c  cbnz w9,0x7101eccbfc
7101eccc10  str w11,[x8]
7101eccc14  ldr x8,[sp, #0x60]
7101eccc18  add x8,x8,#0x48
7101eccc1c  str x8,[sp, #0x60]
7101eccc20  orr x8,xzr,#0x1000000000
7101eccc24  mov w9,#0x73
7101eccc28  add x10,sp,#0x10
7101eccc2c  stp x8,x22,[sp, #0x10]
7101eccc30  mov w8,#0x9
7101eccc34  mov w11,w20
7101eccc38  str x26,[sp, #0x20]
7101eccc3c  strb wzr,[sp, #0x28]
7101eccc40  mul w11,w11,w21
7101eccc44  and w9,w9,#0xff
7101eccc48  eor w11,w11,w9
7101eccc4c  ldrb w9,[x10, x8, LSL ]
7101eccc50  add x8,x8,#0x1
7101eccc54  cbnz w9,0x7101eccc40
7101eccc58  ldp x8,x9,[sp, #0x60]
7101eccc5c  cmp x8,x9
7101eccc60  str w11,[sp, #0x10]
7101eccc64  b.cs 0x7101ecccb4
7101eccc68  add x10,sp,#0x10
7101eccc6c  mov x9,xzr
7101eccc70  str wzr,[x8]
7101eccc74  add x10,x10,#0x8
7101eccc78  b 0x7101eccc84
7101eccc7c  add x9,x9,#0x2
7101eccc80  strb w11,[x12, #0x9]
7101eccc84  add x11,x10,x9
7101eccc88  ldrb w13,[x11]
7101eccc8c  cbz w13,0x7101ecccc8
7101eccc90  add w14,w9,#0x1
7101eccc94  add x12,x8,x9
7101eccc98  cmp w14,#0x3f
7101eccc9c  strb w13,[x12, #0x8]
7101eccca0  b.cs 0x7101ecccc4
7101eccca4  ldrb w11,[x11, #0x1]
7101eccca8  cbnz w11,0x7101eccc7c
7101ecccac  add x9,x9,#0x1
7101ecccb0  b 0x7101ecccc8
7101ecccb4  add x0,sp,#0x58
7101ecccb8  add x1,sp,#0x10
7101ecccbc  bl 0x71019c1c50
7101ecccc0  b 0x7101eccd0c
7101ecccc4  add w9,w9,#0x1
7101ecccc8  add x10,x8,#0x8
7101eccccc  strb wzr,[x10, w9, UXTW ]
7101ecccd0  str w9,[x8, #0x4]
7101ecccd4  ldrb w9,[x8, #0x8]
7101ecccd8  mov w11,w20
7101ecccdc  cbz w9,0x7101ecccfc
7101eccce0  add x10,x8,#0x9
7101eccce4  mov w11,w20
7101eccce8  mul w11,w11,w21
7101ecccec  and w9,w9,#0xff
7101ecccf0  eor w11,w11,w9
7101ecccf4  ldrb w9,[x10], #0x1
7101ecccf8  cbnz w9,0x7101eccce8
7101ecccfc  str w11,[x8]
7101eccd00  ldr x8,[sp, #0x60]
7101eccd04  add x8,x8,#0x48
7101eccd08  str x8,[sp, #0x60]
7101eccd0c  orr x8,xzr,#0x1000000000
7101eccd10  mov w9,#0x73
7101eccd14  add x10,sp,#0x10
7101eccd18  stp x8,x22,[sp, #0x10]
7101eccd1c  mov w8,#0x9
7101eccd20  mov w11,w20
7101eccd24  str x23,[sp, #0x20]
7101eccd28  strb wzr,[sp, #0x28]
7101eccd2c  mul w11,w11,w21
7101eccd30  and w9,w9,#0xff
7101eccd34  eor w11,w11,w9
7101eccd38  ldrb w9,[x10, x8, LSL ]
7101eccd3c  add x8,x8,#0x1
7101eccd40  cbnz w9,0x7101eccd2c
7101eccd44  ldp x8,x9,[sp, #0x60]
7101eccd48  cmp x8,x9
7101eccd4c  str w11,[sp, #0x10]
7101eccd50  b.cs 0x7101eccda0
7101eccd54  add x10,sp,#0x10
7101eccd58  mov x9,xzr
7101eccd5c  str wzr,[x8]
7101eccd60  add x10,x10,#0x8
7101eccd64  b 0x7101eccd70
7101eccd68  add x9,x9,#0x2
7101eccd6c  strb w11,[x12, #0x9]
7101eccd70  add x11,x10,x9
7101eccd74  ldrb w13,[x11]
7101eccd78  cbz w13,0x7101eccdb4
7101eccd7c  add w14,w9,#0x1
7101eccd80  add x12,x8,x9
7101eccd84  cmp w14,#0x3f
7101eccd88  strb w13,[x12, #0x8]
7101eccd8c  b.cs 0x7101eccdb0
7101eccd90  ldrb w11,[x11, #0x1]
7101eccd94  cbnz w11,0x7101eccd68
7101eccd98  add x9,x9,#0x1
7101eccd9c  b 0x7101eccdb4
7101eccda0  add x0,sp,#0x58
7101eccda4  add x1,sp,#0x10
7101eccda8  bl 0x71019c1c50
7101eccdac  b 0x7101eccdf0
7101eccdb0  add w9,w9,#0x1
7101eccdb4  add x10,x8,#0x8
7101eccdb8  strb wzr,[x10, w9, UXTW ]
7101eccdbc  ldrb w10,[x8, #0x8]
7101eccdc0  str w9,[x8, #0x4]
7101eccdc4  cbz w10,0x7101eccde0
7101eccdc8  add x9,x8,#0x9
7101eccdcc  mul w11,w20,w21
7101eccdd0  and w10,w10,#0xff
7101eccdd4  eor w20,w11,w10
7101eccdd8  ldrb w10,[x9], #0x1
7101eccddc  cbnz w10,0x7101eccdcc
7101eccde0  str w20,[x8]
7101eccde4  ldr x8,[sp, #0x60]
7101eccde8  add x8,x8,#0x48
7101eccdec  str x8,[sp, #0x60]
7101eccdf0  adrp x1,0x7104281000
7101eccdf4  add x1,x1,#0x283
7101eccdf8  add x2,sp,#0x58
7101eccdfc  mov x0,x19
7101ecce00  bl 0x7101ec4640
7101ecce04  mov x0,x19
7101ecce08  mov w1,wzr
7101ecce0c  bl 0x7101ecda10
7101ecce10  mov w1,#0x1
7101ecce14  mov x0,x19
7101ecce18  bl 0x7101ecda10
7101ecce1c  mov w1,#0x2
7101ecce20  mov x0,x19
7101ecce24  bl 0x7101ecda10
7101ecce28  orr w1,wzr,#0x6
7101ecce2c  mov x0,x19
7101ecce30  bl 0x7101ecad70
7101ecce34  ldr x0,[x19, #0x8]
7101ecce38  adrp x1,0x71042b4000
7101ecce3c  add x1,x1,#0xb87
7101ecce40  add x8,sp,#0x10
7101ecce44  mov w2,#0x4
7101ecce48  bl 0x7103776640
7101ecce4c  add x0,x19,#0x38
7101ecce50  add x1,sp,#0x10
7101ecce54  bl 0x7101ecb480
7101ecce58  ldr x20,[sp, #0x18]
7101ecce5c  adrp x21,0x710523d000
7101ecce60  add x21,x21,#0x988
7101ecce64  stp x21,xzr,[sp, #0x10]
7101ecce68  cbz x20,0x7101ecce8c
7101ecce6c  ldr x0,[x20, #0x18]
7101ecce70  adrp x8,0x710523d000
7101ecce74  add x8,x8,#0x9a8
7101ecce78  stp x8,xzr,[x20, #0x10]
7101ecce7c  cbz x0,0x7101ecce84
7101ecce80  bl 0x710392eb40
7101ecce84  mov x0,x20
7101ecce88  bl 0x710392eb40
7101ecce8c  orr w1,wzr,#0x3
7101ecce90  mov x0,x19
7101ecce94  bl 0x7101ecda10
7101ecce98  orr w1,wzr,#0x7
7101ecce9c  mov x0,x19
7101eccea0  bl 0x7101ecad70
7101eccea4  ldr x0,[x19, #0x8]
7101eccea8  adrp x1,0x71042b4000
7101ecceac  add x1,x1,#0xb87
7101ecceb0  add x8,sp,#0x10
7101ecceb4  orr w2,wzr,#0x3
7101ecceb8  bl 0x7103776640
7101eccebc  add x0,x19,#0x98
7101eccec0  add x1,sp,#0x10
7101eccec4  bl 0x7101ecb480
7101eccec8  ldr x20,[sp, #0x18]
7101eccecc  stp x21,xzr,[sp, #0x10]
7101ecced0  cbz x20,0x7101eccef4
7101ecced4  ldr x0,[x20, #0x18]
7101ecced8  adrp x8,0x710523d000
7101eccedc  add x8,x8,#0x9a8
7101eccee0  stp x8,xzr,[x20, #0x10]
7101eccee4  cbz x0,0x7101ecceec
7101eccee8  bl 0x710392eb40
7101ecceec  mov x0,x20
7101eccef0  bl 0x710392eb40
7101eccef4  mov w1,#0x4
7101eccef8  mov x0,x19
7101eccefc  bl 0x7101ecda10
7101eccf00  mov w1,#0x8
7101eccf04  mov x0,x19
7101eccf08  bl 0x7101ecad70
7101eccf0c  ldr x0,[x19, #0x8]
7101eccf10  adrp x1,0x71042b4000
7101eccf14  add x1,x1,#0xb87
7101eccf18  add x8,sp,#0x10
7101eccf1c  mov w2,#0x2
7101eccf20  bl 0x7103776640
7101eccf24  add x0,x19,#0xf8
7101eccf28  add x1,sp,#0x10
7101eccf2c  bl 0x7101ecb480
7101eccf30  ldr x20,[sp, #0x18]
7101eccf34  stp x21,xzr,[sp, #0x10]
7101eccf38  cbz x20,0x7101eccf5c
7101eccf3c  ldr x0,[x20, #0x18]
7101eccf40  adrp x8,0x710523d000
7101eccf44  add x8,x8,#0x9a8
7101eccf48  stp x8,xzr,[x20, #0x10]
7101eccf4c  cbz x0,0x7101eccf54
7101eccf50  bl 0x710392eb40
7101eccf54  mov x0,x20
7101eccf58  bl 0x710392eb40
7101eccf5c  mov w1,#0x5
7101eccf60  mov x0,x19
7101eccf64  bl 0x7101ecda10
7101eccf68  mov w1,#0x9
7101eccf6c  mov x0,x19
7101eccf70  bl 0x7101ecad70
7101eccf74  ldr x0,[x19, #0x8]
7101eccf78  adrp x1,0x71042b4000
7101eccf7c  add x1,x1,#0xb87
7101eccf80  add x8,sp,#0x10
7101eccf84  mov w2,#0x1
7101eccf88  bl 0x7103776640
7101eccf8c  add x0,x19,#0x158
7101eccf90  add x1,sp,#0x10
7101eccf94  bl 0x7101ecb480
7101eccf98  ldr x20,[sp, #0x18]
7101eccf9c  stp x21,xzr,[sp, #0x10]
7101eccfa0  cbz x20,0x7101eccfc4
7101eccfa4  ldr x0,[x20, #0x18]
7101eccfa8  adrp x8,0x710523d000
7101eccfac  add x8,x8,#0x9a8
7101eccfb0  stp x8,xzr,[x20, #0x10]
7101eccfb4  cbz x0,0x7101eccfbc
7101eccfb8  bl 0x710392eb40
7101eccfbc  mov x0,x20
7101eccfc0  bl 0x710392eb40
7101eccfc4  mov x22,x19
7101eccfc8  ldr x9,[x22, #0x20]!
7101eccfcc  cbz x9,0x7101ecd31c
7101eccfd0  mov x8,x22
7101eccfd4  ldr w10,[x9, #0x20]
7101eccfd8  cmp w10,#0x0
7101eccfdc  cset w10,lt
7101eccfe0  csel x8,x8,x9,lt
7101eccfe4  ldr x9,[x9, w10, UXTW #0x3]
7101eccfe8  cbnz x9,0x7101eccfd4
7101eccfec  cmp x8,x22
7101eccff0  b.eq 0x7101ecd074
7101eccff4  ldr w9,[x8, #0x20]
7101eccff8  cmp w9,#0x0
7101eccffc  b.gt 0x7101ecd074
7101ecd000  ldr x9,[x8, #0x28]
7101ecd004  ldr w10,[x9, #0x8]
7101ecd008  cmp w10,#0x1
7101ecd00c  b.ne 0x7101ecd074
7101ecd010  ldr x20,[x8, #0x30]
7101ecd014  cbz x20,0x7101ecd06c
7101ecd018  add x8,x20,#0x8
7101ecd01c  ldxr x10,[x8]
7101ecd020  add x10,x10,#0x1
7101ecd024  stxr w11,x10,[x8]
7101ecd028  cbnz w11,0x7101ecd01c
7101ecd02c  mov w10,#0x1
7101ecd030  strb w10,[x9, #0x57]
7101ecd034  ldaxr x9,[x8]
7101ecd038  sub x10,x9,#0x1
7101ecd03c  stlxr w11,x10,[x8]
7101ecd040  cbnz w11,0x7101ecd034
7101ecd044  cbnz x9,0x7101ecd074
7101ecd048  ldr x8,[x20]
7101ecd04c  ldr x8,[x8, #0x10]
7101ecd050  mov x0,x20
7101ecd054  blr x8
7101ecd058  mov x0,x20
7101ecd05c  bl 0x71039c2670
7101ecd060  ldr x9,[x22]
7101ecd064  cbnz x9,0x7101ecd07c
7101ecd068  b 0x7101ecd31c
7101ecd06c  mov w8,#0x1
7101ecd070  strb w8,[x9, #0x57]
7101ecd074  ldr x9,[x22]
7101ecd078  cbz x9,0x7101ecd31c
7101ecd07c  mov x8,x22
7101ecd080  ldr w10,[x9, #0x20]
7101ecd084  cmp w10,#0x2
7101ecd088  cset w10,lt
7101ecd08c  csel x8,x8,x9,lt
7101ecd090  ldr x9,[x9, w10, UXTW #0x3]
7101ecd094  cbnz x9,0x7101ecd080
7101ecd098  cmp x8,x22
7101ecd09c  b.eq 0x7101ecd120
7101ecd0a0  ldr w9,[x8, #0x20]
7101ecd0a4  cmp w9,#0x2
7101ecd0a8  b.gt 0x7101ecd120
7101ecd0ac  ldr x9,[x8, #0x28]
7101ecd0b0  ldr w10,[x9, #0x8]
7101ecd0b4  cmp w10,#0x1
7101ecd0b8  b.ne 0x7101ecd120
7101ecd0bc  ldr x20,[x8, #0x30]
7101ecd0c0  cbz x20,0x7101ecd118
7101ecd0c4  add x8,x20,#0x8
7101ecd0c8  ldxr x10,[x8]
7101ecd0cc  add x10,x10,#0x1
7101ecd0d0  stxr w11,x10,[x8]
7101ecd0d4  cbnz w11,0x7101ecd0c8
7101ecd0d8  mov w10,#0x1
7101ecd0dc  strb w10,[x9, #0x57]
7101ecd0e0  ldaxr x9,[x8]
7101ecd0e4  sub x10,x9,#0x1
7101ecd0e8  stlxr w11,x10,[x8]
7101ecd0ec  cbnz w11,0x7101ecd0e0
7101ecd0f0  cbnz x9,0x7101ecd120
7101ecd0f4  ldr x8,[x20]
7101ecd0f8  ldr x8,[x8, #0x10]
7101ecd0fc  mov x0,x20
7101ecd100  blr x8
7101ecd104  mov x0,x20
7101ecd108  bl 0x71039c2670
7101ecd10c  ldr x9,[x22]
7101ecd110  cbnz x9,0x7101ecd128
7101ecd114  b 0x7101ecd31c
7101ecd118  mov w8,#0x1
7101ecd11c  strb w8,[x9, #0x57]
7101ecd120  ldr x9,[x22]
7101ecd124  cbz x9,0x7101ecd31c
7101ecd128  mov x8,x22
7101ecd12c  ldr w10,[x9, #0x20]
7101ecd130  cmp w10,#0x3
7101ecd134  cset w10,lt
7101ecd138  csel x8,x8,x9,lt
7101ecd13c  ldr x9,[x9, w10, UXTW #0x3]
7101ecd140  cbnz x9,0x7101ecd12c
7101ecd144  cmp x8,x22
7101ecd148  b.eq 0x7101ecd1cc
7101ecd14c  ldr w9,[x8, #0x20]
7101ecd150  cmp w9,#0x3
7101ecd154  b.gt 0x7101ecd1cc
7101ecd158  ldr x9,[x8, #0x28]
7101ecd15c  ldr w10,[x9, #0x8]
7101ecd160  cmp w10,#0x1
7101ecd164  b.ne 0x7101ecd1cc
7101ecd168  ldr x20,[x8, #0x30]
7101ecd16c  cbz x20,0x7101ecd1c4
7101ecd170  add x8,x20,#0x8
7101ecd174  ldxr x10,[x8]
7101ecd178  add x10,x10,#0x1
7101ecd17c  stxr w11,x10,[x8]
7101ecd180  cbnz w11,0x7101ecd174
7101ecd184  mov w10,#0x1
7101ecd188  strb w10,[x9, #0x57]
7101ecd18c  ldaxr x9,[x8]
7101ecd190  sub x10,x9,#0x1
7101ecd194  stlxr w11,x10,[x8]
7101ecd198  cbnz w11,0x7101ecd18c
7101ecd19c  cbnz x9,0x7101ecd1cc
7101ecd1a0  ldr x8,[x20]
7101ecd1a4  ldr x8,[x8, #0x10]
7101ecd1a8  mov x0,x20
7101ecd1ac  blr x8
7101ecd1b0  mov x0,x20
7101ecd1b4  bl 0x71039c2670
7101ecd1b8  ldr x9,[x22]
7101ecd1bc  cbnz x9,0x7101ecd1d4
7101ecd1c0  b 0x7101ecd31c
7101ecd1c4  mov w8,#0x1
7101ecd1c8  strb w8,[x9, #0x57]
7101ecd1cc  ldr x9,[x22]
7101ecd1d0  cbz x9,0x7101ecd31c
7101ecd1d4  mov x8,x22
7101ecd1d8  ldr w10,[x9, #0x20]
7101ecd1dc  cmp w10,#0x4
7101ecd1e0  cset w10,lt
7101ecd1e4  csel x8,x8,x9,lt
7101ecd1e8  ldr x9,[x9, w10, UXTW #0x3]
7101ecd1ec  cbnz x9,0x7101ecd1d8
7101ecd1f0  cmp x8,x22
7101ecd1f4  b.eq 0x7101ecd278
7101ecd1f8  ldr w9,[x8, #0x20]
7101ecd1fc  cmp w9,#0x4
7101ecd200  b.gt 0x7101ecd278
7101ecd204  ldr x9,[x8, #0x28]
7101ecd208  ldr w10,[x9, #0x8]
7101ecd20c  cmp w10,#0x1
7101ecd210  b.ne 0x7101ecd278
7101ecd214  ldr x20,[x8, #0x30]
7101ecd218  cbz x20,0x7101ecd270
7101ecd21c  add x8,x20,#0x8
7101ecd220  ldxr x10,[x8]
7101ecd224  add x10,x10,#0x1
7101ecd228  stxr w11,x10,[x8]
7101ecd22c  cbnz w11,0x7101ecd220
7101ecd230  mov w10,#0x1
7101ecd234  strb w10,[x9, #0x57]
7101ecd238  ldaxr x9,[x8]
7101ecd23c  sub x10,x9,#0x1
7101ecd240  stlxr w11,x10,[x8]
7101ecd244  cbnz w11,0x7101ecd238
7101ecd248  cbnz x9,0x7101ecd278
7101ecd24c  ldr x8,[x20]
7101ecd250  ldr x8,[x8, #0x10]
7101ecd254  mov x0,x20
7101ecd258  blr x8
7101ecd25c  mov x0,x20
7101ecd260  bl 0x71039c2670
7101ecd264  ldr x9,[x22]
7101ecd268  cbnz x9,0x7101ecd280
7101ecd26c  b 0x7101ecd31c
7101ecd270  mov w8,#0x1
7101ecd274  strb w8,[x9, #0x57]
7101ecd278  ldr x9,[x22]
7101ecd27c  cbz x9,0x7101ecd31c
7101ecd280  mov x8,x22
7101ecd284  ldr w10,[x9, #0x20]
7101ecd288  cmp w10,#0x5
7101ecd28c  cset w10,lt
7101ecd290  csel x8,x8,x9,lt
7101ecd294  ldr x9,[x9, w10, UXTW #0x3]
7101ecd298  cbnz x9,0x7101ecd284
7101ecd29c  cmp x8,x22
7101ecd2a0  b.eq 0x7101ecd31c
7101ecd2a4  ldr w9,[x8, #0x20]
7101ecd2a8  cmp w9,#0x5
7101ecd2ac  b.gt 0x7101ecd31c
7101ecd2b0  ldr x9,[x8, #0x28]
7101ecd2b4  ldr w10,[x9, #0x8]
7101ecd2b8  cmp w10,#0x1
7101ecd2bc  b.ne 0x7101ecd31c
7101ecd2c0  ldr x20,[x8, #0x30]
7101ecd2c4  cbz x20,0x7101ecd314
7101ecd2c8  add x8,x20,#0x8
7101ecd2cc  ldxr x10,[x8]
7101ecd2d0  add x10,x10,#0x1
7101ecd2d4  stxr w11,x10,[x8]
7101ecd2d8  cbnz w11,0x7101ecd2cc
7101ecd2dc  mov w10,#0x1
7101ecd2e0  strb w10,[x9, #0x57]
7101ecd2e4  ldaxr x9,[x8]
7101ecd2e8  sub x10,x9,#0x1
7101ecd2ec  stlxr w11,x10,[x8]
7101ecd2f0  cbnz w11,0x7101ecd2e4
7101ecd2f4  cbnz x9,0x7101ecd31c
7101ecd2f8  ldr x8,[x20]
7101ecd2fc  ldr x8,[x8, #0x10]
7101ecd300  mov x0,x20
7101ecd304  blr x8
7101ecd308  mov x0,x20
7101ecd30c  bl 0x71039c2670
7101ecd310  b 0x7101ecd31c
7101ecd314  mov w8,#0x1
7101ecd318  strb w8,[x9, #0x57]
7101ecd31c  ldr x0,[x19, #0x8]
7101ecd320  adrp x1,0x7104455000
7101ecd324  add x1,x1,#0x245
7101ecd328  add x8,sp,#0x10
7101ecd32c  add x20,sp,#0x10
7101ecd330  bl 0x71037780e0
7101ecd334  add x8,x19,#0x1b8
7101ecd338  cmp x8,x20
7101ecd33c  b.eq 0x7101ecd358
7101ecd340  ldr x8,[sp, #0x18]
7101ecd344  str xzr,[sp, #0x18]
7101ecd348  ldr x0,[x19, #0x1c0]
7101ecd34c  str x8,[x19, #0x1c0]
7101ecd350  cbz x0,0x7101ecd358
7101ecd354  bl 0x710392eb40
7101ecd358  ldr x0,[sp, #0x18]
7101ecd35c  adrp x20,0x710523d000
7101ecd360  add x20,x20,#0x9e8
7101ecd364  stp x20,xzr,[sp, #0x10]
7101ecd368  cbz x0,0x7101ecd370
7101ecd36c  bl 0x710392eb40
7101ecd370  ldr x0,[x19, #0x8]
7101ecd374  adrp x1,0x7104422000
7101ecd378  add x1,x1,#0xb38
7101ecd37c  add x8,sp,#0x10
7101ecd380  add x22,sp,#0x10
7101ecd384  bl 0x71037780e0
7101ecd388  add x8,x19,#0x1c8
7101ecd38c  cmp x8,x22
7101ecd390  b.eq 0x7101ecd3ac
7101ecd394  ldr x8,[sp, #0x18]
7101ecd398  str xzr,[sp, #0x18]
7101ecd39c  ldr x0,[x19, #0x1d0]
7101ecd3a0  str x8,[x19, #0x1d0]
7101ecd3a4  cbz x0,0x7101ecd3ac
7101ecd3a8  bl 0x710392eb40
7101ecd3ac  ldr x0,[sp, #0x18]
7101ecd3b0  stp x20,xzr,[sp, #0x10]
7101ecd3b4  cbz x0,0x7101ecd3bc
7101ecd3b8  bl 0x710392eb40
7101ecd3bc  ldr x0,[x19, #0x8]
7101ecd3c0  adrp x1,0x71043be000
7101ecd3c4  add x1,x1,#0xdb3
7101ecd3c8  add x8,sp,#0x10
7101ecd3cc  add x22,sp,#0x10
7101ecd3d0  bl 0x71037780e0
7101ecd3d4  add x8,x19,#0x1d8
7101ecd3d8  cmp x8,x22
7101ecd3dc  b.eq 0x7101ecd3f8
7101ecd3e0  ldr x8,[sp, #0x18]
7101ecd3e4  str xzr,[sp, #0x18]
7101ecd3e8  ldr x0,[x19, #0x1e0]
7101ecd3ec  str x8,[x19, #0x1e0]
7101ecd3f0  cbz x0,0x7101ecd3f8
7101ecd3f4  bl 0x710392eb40
7101ecd3f8  ldr x0,[sp, #0x18]
7101ecd3fc  stp x20,xzr,[sp, #0x10]
7101ecd400  cbz x0,0x7101ecd408
7101ecd404  bl 0x710392eb40
7101ecd408  ldr x0,[x19, #0x8]
7101ecd40c  adrp x1,0x710436c000
7101ecd410  add x1,x1,#0xb3f
7101ecd414  mov x8,sp
7101ecd418  bl 0x7103776640
7101ecd41c  adrp x1,0x71043ad000
7101ecd420  add x1,x1,#0xfe3
7101ecd424  add x8,sp,#0x10
7101ecd428  mov x0,sp
7101ecd42c  bl 0x7103776910
7101ecd430  ldr x19,[sp, #0x8]
7101ecd434  stp x21,xzr,[sp]
7101ecd438  cbz x19,0x7101ecd45c
7101ecd43c  ldr x0,[x19, #0x18]
7101ecd440  adrp x8,0x710523d000
7101ecd444  add x8,x8,#0x9a8
7101ecd448  stp x8,xzr,[x19, #0x10]
7101ecd44c  cbz x0,0x7101ecd454
7101ecd450  bl 0x710392eb40
7101ecd454  mov x0,x19
7101ecd458  bl 0x710392eb40
7101ecd45c  adrp x8,0x710593b000
7101ecd460  ldr x8,[x8, #0xa90]
7101ecd464  ldr x8,[x8]
7101ecd468  ldr w8,[x8, #0x3ac]
7101ecd46c  cmp w8,#0x6
7101ecd470  b.ne 0x7101ecd498
7101ecd474  ldr x19,[sp, #0x18]
7101ecd478  ldr x0,[x19, #0x10]
7101ecd47c  cbz x0,0x7101ecd4ac
7101ecd480  mov x1,sp
7101ecd484  mov w2,wzr
7101ecd488  mov w3,wzr
7101ecd48c  str wzr,[sp]
7101ecd490  bl 0x71037a2270
7101ecd494  b 0x7101ecd4ac
7101ecd498  adrp x1,0x71043f1000
7101ecd49c  add x1,x1,#0xb4
7101ecd4a0  add x0,sp,#0x10
7101ecd4a4  bl 0x710377a120
7101ecd4a8  ldr x19,[sp, #0x18]
7101ecd4ac  adrp x8,0x710523d000
7101ecd4b0  add x8,x8,#0x9a8
7101ecd4b4  stp x8,xzr,[sp, #0x10]
7101ecd4b8  cbz x19,0x7101ecd4c4
7101ecd4bc  mov x0,x19
7101ecd4c0  bl 0x710392eb40
7101ecd4c4  ldr x0,[sp, #0x58]
7101ecd4c8  cbz x0,0x7101ecd4d4
7101ecd4cc  str x0,[sp, #0x60]
7101ecd4d0  bl 0x710392eb40
7101ecd4d4  ldp x29,x30,[sp, #0xc0]
7101ecd4d8  ldp x20,x19,[sp, #0xb0]
7101ecd4dc  ldp x22,x21,[sp, #0xa0]
7101ecd4e0  ldp x24,x23,[sp, #0x90]
7101ecd4e4  ldp x26,x25,[sp, #0x80]
7101ecd4e8  ldp x28,x27,[sp, #0x70]
7101ecd4ec  add sp,sp,#0xd0
7101ecd4f0  ret
