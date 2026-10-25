// addr:      7101efe2e0
// offset:    0x1efe2e0
// name:      FUN_7101efe2e0
// mangled:   
// size:      3860

7101efe2e0  stp x28,x27,[sp, #-0x60]!
7101efe2e4  stp x26,x25,[sp, #0x10]
7101efe2e8  stp x24,x23,[sp, #0x20]
7101efe2ec  stp x22,x21,[sp, #0x30]
7101efe2f0  stp x20,x19,[sp, #0x40]
7101efe2f4  stp x29,x30,[sp, #0x50]
7101efe2f8  add x29,sp,#0x50
7101efe2fc  sub sp,sp,#0x1, LSL #12
7101efe300  sub sp,sp,#0x2e0
7101efe304  ldr w9,[x0, #0x1fc]
7101efe308  ldr x8,[x0, #0x2a8]
7101efe30c  mov x26,x0
7101efe310  cbz w9,0x7101efe3a8
7101efe314  ldr w9,[x8, #0xe0]
7101efe318  cbnz w9,0x7101eff104
7101efe31c  ldr w9,[x26]
7101efe320  cmp w9,#0x2
7101efe324  b.cs 0x7101eff1e8
7101efe328  ldr w22,[x8, #0xf0]
7101efe32c  adrp x8,0x7105328000
7101efe330  ldr x8,[x8, #0xe18]
7101efe334  ldr x8,[x8]
7101efe338  mov w10,#0x1b8
7101efe33c  madd x8,x9,x10,x8
7101efe340  cmn w22,#0x1
7101efe344  str w22,[x8, #0x1d8]
7101efe348  b.eq 0x7101efe534
7101efe34c  cmp w22,#0x9
7101efe350  adrp x8,0x7105339000
7101efe354  add x8,x8,#0x830
7101efe358  b.hi 0x7101efe380
7101efe35c  adrp x9,0x7105339000
7101efe360  ldr x9,[x9, #0x8b0]
7101efe364  ldrb w9,[x9, #0x8]
7101efe368  cbz w9,0x7101efe380
7101efe36c  adrp x8,0x7105339000
7101efe370  add x8,x8,#0x860
7101efe374  sxtw x9,w22
7101efe378  ldr x8,[x8, x9, LSL #0x3]
7101efe37c  cbz x8,0x7101efe534
7101efe380  ldr x8,[x8, #0x10]
7101efe384  ldr w8,[x8, #0x9c]
7101efe388  sub w8,w8,#0x1
7101efe38c  cmp w8,#0x6
7101efe390  b.hi 0x7101efe534
7101efe394  adrp x9,0x7104753000
7101efe398  add x9,x9,#0xde0
7101efe39c  ldr w8,[x9, w8, SXTW #0x2]
7101efe3a0  str w8,[sp, #0x34]
7101efe3a4  b 0x7101efe538
7101efe3a8  ldrsw x9,[x8, #0xf0]
7101efe3ac  cmp w9,#0xa
7101efe3b0  b.cs 0x7101eff1e8
7101efe3b4  ldr x10,[x8, #0x8]
7101efe3b8  ldr x10,[x10, #0x8]
7101efe3bc  add x11,x10,x9, LSL #0x2
7101efe3c0  add x9,x10,x9
7101efe3c4  str wzr,[x11]
7101efe3c8  str wzr,[x11, #0x28]
7101efe3cc  strb wzr,[x9, #0x50]
7101efe3d0  ldrsw x9,[x8, #0xdc]
7101efe3d4  mov w19,#0xffffffff
7101efe3d8  str w19,[x8, #0xf0]
7101efe3dc  cmp w9,#0x13
7101efe3e0  b.cs 0x7101eff1e8
7101efe3e4  add x8,x8,x9, LSL #0x2
7101efe3e8  mov w9,#0x1
7101efe3ec  str w9,[x8, #0x90]
7101efe3f0  adrp x21,0x7105314000
7101efe3f4  add x21,x21,#0x4d8
7101efe3f8  ldarb w8,[x21]
7101efe3fc  tbz w8,#0x0,0x7101eff128
7101efe400  ldr w9,[x26]
7101efe404  adrp x8,0x710530a000
7101efe408  add x8,x8,#0x9c8
7101efe40c  mov w10,#0x1428
7101efe410  add x10,x8,x10
7101efe414  cmp w9,#0x0
7101efe418  csel x20,x8,x10,eq
7101efe41c  ldarb w8,[x21]
7101efe420  tbz w8,#0x0,0x7101eff168
7101efe424  adrp x8,0x710530a000
7101efe428  ldrb w10,[x8, #0x975]
7101efe42c  ldr x8,[x26, #0x2a0]
7101efe430  ldr w9,[x8, #0x134]
7101efe434  cmp w10,#0x2
7101efe438  b.eq 0x7101efe4bc
7101efe43c  ldrh w10,[x20, #0x4a]
7101efe440  cbnz w10,0x7101efe4bc
7101efe444  cbnz w9,0x7101eff104
7101efe448  mov w9,#0x1
7101efe44c  str w9,[x8, #0x134]
7101efe450  ldr w9,[x8, #0x130]
7101efe454  cbz w9,0x7101eff104
7101efe458  add x10,x8,#0x10c
7101efe45c  orr x11,xzr,#-0x100000000
7101efe460  str wzr,[x8, #0x100]
7101efe464  stp xzr,xzr,[x8, #0x18]
7101efe468  cmp w9,#0x3
7101efe46c  stp xzr,xzr,[x8, #0xf0]
7101efe470  stp xzr,xzr,[x8, #0xe0]
7101efe474  stp xzr,xzr,[x8, #0xd0]
7101efe478  stp xzr,xzr,[x8, #0xc0]
7101efe47c  str x11,[x10]
7101efe480  orr x10,xzr,#0x100000000
7101efe484  orr x11,xzr,#-0xffffffff
7101efe488  str x10,[x8, #0xb8]
7101efe48c  add x10,x8,#0x104
7101efe490  strb wzr,[x8, #0x114]
7101efe494  str x11,[x10]
7101efe498  b.eq 0x7101efed10
7101efe49c  cmp w9,#0x2
7101efe4a0  b.eq 0x7101efed28
7101efe4a4  cmp w9,#0x1
7101efe4a8  b.ne 0x7101efed34
7101efe4ac  mov w9,#0x2
7101efe4b0  str w9,[x8, #0x104]
7101efe4b4  orr w9,wzr,#0x3
7101efe4b8  b 0x7101efed30
7101efe4bc  cbnz w9,0x7101eff104
7101efe4c0  mov w9,#0x1
7101efe4c4  str w9,[x8, #0x134]
7101efe4c8  ldr w9,[x8, #0x130]
7101efe4cc  cmp w9,#0x1
7101efe4d0  b.eq 0x7101eff104
7101efe4d4  cmp w9,#0x3
7101efe4d8  stp xzr,xzr,[x8, #0x18]
7101efe4dc  str wzr,[x8, #0x104]
7101efe4e0  stur xzr,[x8, #0xfc]
7101efe4e4  stur xzr,[x8, #0xf4]
7101efe4e8  stur xzr,[x8, #0xec]
7101efe4ec  stur xzr,[x8, #0xe4]
7101efe4f0  stur xzr,[x8, #0xdc]
7101efe4f4  stur xzr,[x8, #0xd4]
7101efe4f8  stur xzr,[x8, #0xcc]
7101efe4fc  stur xzr,[x8, #0xc4]
7101efe500  stur xzr,[x8, #0xbc]
7101efe504  str x19,[x8, #0x108]
7101efe508  str w19,[x8, #0x110]
7101efe50c  strb wzr,[x8, #0x114]
7101efe510  str wzr,[x8, #0xb8]
7101efe514  b.eq 0x7101efed40
7101efe518  cmp w9,#0x2
7101efe51c  b.eq 0x7101efed54
7101efe520  cbnz w9,0x7101efed68
7101efe524  mov w9,#0x1
7101efe528  str w9,[x8, #0x104]
7101efe52c  mov w9,#0x2
7101efe530  b 0x7101efed4c
7101efe534  str wzr,[sp, #0x34]
7101efe538  adrp x8,0x7105314000
7101efe53c  add x8,x8,#0x4d8
7101efe540  ldarb w8,[x8]
7101efe544  tbz w8,#0x0,0x7101eff1a8
7101efe548  adrp x8,0x710530d000
7101efe54c  ldr w8,[x8, #0x560]
7101efe550  cmp w8,#0x0
7101efe554  mov w9,#0x5
7101efe558  orr w8,wzr,#0x3
7101efe55c  csel w8,w8,w9,eq
7101efe560  ldrsw x9,[x26, #0x4]
7101efe564  str x8,[sp, #0x48]
7101efe568  ldr x8,[x26, #0x8]
7101efe56c  ldr x8,[x8]
7101efe570  ldr x8,[x8]
7101efe574  ldr x8,[x8]
7101efe578  cbz w9,0x7101efe5a0
7101efe57c  ldr x11,[x8, #0x610]
7101efe580  ldr x10,[x8, #0x608]
7101efe584  sub x11,x11,x10
7101efe588  sub x9,x9,#0x1
7101efe58c  asr x11,x11,#0x4
7101efe590  cmp x11,x9
7101efe594  b.ls 0x7101eff1ec
7101efe598  add x8,x10,x9, LSL #0x4
7101efe59c  b 0x7101efe5a4
7101efe5a0  add x8,x8,#0x5f8
7101efe5a4  ldr x8,[x8, #0x8]
7101efe5a8  ldr w9,[x8, #0x48c]
7101efe5ac  cmp w9,w22
7101efe5b0  str wzr,[x8, #0x484]
7101efe5b4  str w22,[x8, #0x488]
7101efe5b8  b.eq 0x7101efe5c0
7101efe5bc  str w22,[x8, #0x48c]
7101efe5c0  add x9,sp,#0x90
7101efe5c4  add x8,x9,#0x88
7101efe5c8  str x8,[sp, #0x38]
7101efe5cc  add x8,x26,#0x208
7101efe5d0  str x8,[sp, #0x40]
7101efe5d4  add x8,x9,#0x28
7101efe5d8  str x8,[sp, #0x18]
7101efe5dc  add x8,x9,#0x30
7101efe5e0  add x27,x9,#0x1c
7101efe5e4  add x20,x9,#0x60
7101efe5e8  add x19,x9,#0x70
7101efe5ec  add x24,x9,#0x228
7101efe5f0  stp x26,x8,[sp, #0x8]
7101efe5f4  adrp x8,0x710530b000
7101efe5f8  add x8,x8,#0x2b0
7101efe5fc  mov w9,#0x1428
7101efe600  mov x21,xzr
7101efe604  mov x23,xzr
7101efe608  add x8,x8,x9
7101efe60c  adrp x28,0x710523d000
7101efe610  add x28,x28,#0x988
7101efe614  stp x8,x22,[sp, #0x20]
7101efe618  ldr x0,[sp, #0x38]
7101efe61c  mov w8,#0xffffffff
7101efe620  mov x9,#-0x1
7101efe624  stp x8,xzr,[sp, #0x90]
7101efe628  str x9,[sp, #0xa0]
7101efe62c  strh wzr,[sp, #0xa8]
7101efe630  str x9,[x27]
7101efe634  orr w9,wzr,#0xffff
7101efe638  strh w9,[x27, #0x8]
7101efe63c  str w8,[sp, #0xf0]
7101efe640  orr x8,xzr,#0x3f8000003f800000
7101efe644  str xzr,[sp, #0xb8]
7101efe648  strh wzr,[sp, #0xc0]
7101efe64c  strb wzr,[sp, #0xf4]
7101efe650  str wzr,[sp, #0xf8]
7101efe654  strb wzr,[sp, #0xfc]
7101efe658  strh wzr,[sp, #0x110]
7101efe65c  stp x8,x8,[sp, #0x100]
7101efe660  bl 0x71017abd00
7101efe664  mov x8,#0x753f
7101efe668  movk x8,#0x95d0, LSL #16
7101efe66c  movk x8,#0xb, LSL #32
7101efe670  str x8,[sp, #0x2c0]
7101efe674  orr w8,wzr,#0xff
7101efe678  strb wzr,[sp, #0x2b8]
7101efe67c  ldr x9,[sp, #0x20]
7101efe680  strb w8,[sp, #0x2c8]
7101efe684  ldr w8,[x26]
7101efe688  cmp w8,#0x0
7101efe68c  adrp x8,0x710530b000
7101efe690  add x8,x8,#0x2b0
7101efe694  csel x8,x8,x9,eq
7101efe698  cmp x23,#0x5
7101efe69c  b.cs 0x7101eff1e8
7101efe6a0  add x25,x8,x21
7101efe6a4  ldp x9,x10,[x25]
7101efe6a8  ldr x11,[x25, #0x10]
7101efe6ac  ldrh w12,[x25, #0x18]
7101efe6b0  strh w12,[sp, #0xa8]
7101efe6b4  ldur x13,[x25, #0x1c]
7101efe6b8  stp x10,x11,[sp, #0x98]
7101efe6bc  ldrh w11,[x25, #0x24]
7101efe6c0  add x10,sp,#0x90
7101efe6c4  sub x8,x10,x8
7101efe6c8  cmp x8,x21
7101efe6cc  str x9,[sp, #0x90]
7101efe6d0  strh w11,[x27, #0x8]
7101efe6d4  str x13,[x27]
7101efe6d8  b.eq 0x7101efe6e8
7101efe6dc  ldr x0,[sp, #0x18]
7101efe6e0  add x1,x25,#0x30
7101efe6e4  bl 0x7101696040
7101efe6e8  ldr x8,[x25, #0x60]
7101efe6ec  ldur x9,[x25, #0x65]
7101efe6f0  stur x9,[x20, #0x5]
7101efe6f4  ldp x10,x11,[x25, #0x70]
7101efe6f8  str x8,[x20]
7101efe6fc  ldrh w8,[x25, #0x80]
7101efe700  ldr x0,[sp, #0x38]
7101efe704  add x1,x25,#0x88
7101efe708  stp x10,x11,[x19]
7101efe70c  strh w8,[x19, #0x10]
7101efe710  bl 0x71016b6a10
7101efe714  ldrb w9,[x25, #0x238]
7101efe718  ldr x8,[x25, #0x228]
7101efe71c  cmp w23,#0x5
7101efe720  strb w9,[x24, #0x10]
7101efe724  ldr x9,[x25, #0x230]
7101efe728  stp x8,x9,[x24]
7101efe72c  str w22,[sp, #0x90]
7101efe730  b.cs 0x7101eff1e8
7101efe734  ldr w8,[x26]
7101efe738  adrp x9,0x710530b000
7101efe73c  add x9,x9,#0x2b0
7101efe740  mov x14,x9
7101efe744  mov w9,#0x1428
7101efe748  add x9,x14,x9
7101efe74c  ldp x10,x11,[sp, #0x90]
7101efe750  ldr x12,[sp, #0xa0]
7101efe754  cmp w8,#0x0
7101efe758  csel x8,x14,x9,eq
7101efe75c  add x9,sp,#0x90
7101efe760  add x25,x8,x21
7101efe764  ldrh w13,[sp, #0xa8]
7101efe768  sub x9,x9,x8
7101efe76c  ldr x8,[x27]
7101efe770  str x10,[x25]
7101efe774  ldrh w10,[x27, #0x8]
7101efe778  cmp x9,x21
7101efe77c  strh w13,[x25, #0x18]
7101efe780  stur x8,[x25, #0x1c]
7101efe784  stp x11,x12,[x25, #0x8]
7101efe788  strh w10,[x25, #0x24]
7101efe78c  b.eq 0x7101efe79c
7101efe790  ldr x1,[sp, #0x10]
7101efe794  add x0,x25,#0x28
7101efe798  bl 0x7101696040
7101efe79c  ldr x8,[x20]
7101efe7a0  ldur x9,[x20, #0x5]
7101efe7a4  stur x9,[x25, #0x65]
7101efe7a8  ldp x10,x11,[x19]
7101efe7ac  str x8,[x25, #0x60]
7101efe7b0  ldrh w8,[x19, #0x10]
7101efe7b4  ldr x1,[sp, #0x38]
7101efe7b8  add x0,x25,#0x88
7101efe7bc  mov x22,x28
7101efe7c0  strh w8,[x25, #0x80]
7101efe7c4  stp x10,x11,[x25, #0x70]
7101efe7c8  bl 0x71016b6a10
7101efe7cc  ldp x8,x9,[x24]
7101efe7d0  ldrb w10,[x24, #0x10]
7101efe7d4  strb w10,[x25, #0x238]
7101efe7d8  str x9,[x25, #0x230]
7101efe7dc  str x8,[x25, #0x228]
7101efe7e0  ldr w8,[x26]
7101efe7e4  cmp w8,#0x2
7101efe7e8  b.cs 0x7101eff1e8
7101efe7ec  adrp x9,0x71050b3000
7101efe7f0  add x9,x9,#0xe88
7101efe7f4  adrp x1,0x71043cf000
7101efe7f8  add x1,x1,#0xcaf
7101efe7fc  ldr x2,[x9, x8, LSL #0x3]
7101efe800  ldp x0,x3,[sp, #0x40]
7101efe804  add x8,sp,#0x80
7101efe808  mov w4,w23
7101efe80c  bl 0x7103776640
7101efe810  add x8,sp,#0x70
7101efe814  add x0,sp,#0x80
7101efe818  adrp x1,0x71042a3000
7101efe81c  add x1,x1,#0x7fe
7101efe820  bl 0x7103776910
7101efe824  ldr x28,[sp, #0x78]
7101efe828  ldr x25,[x28, #0x10]
7101efe82c  cbz x25,0x7101efe8a8
7101efe830  ldr w8,[sp, #0x34]
7101efe834  ldr x1,[x25, #0xe0]
7101efe838  str w8,[x25, #0x25c]
7101efe83c  cbz x1,0x7101efe8a8
7101efe840  ldrb w8,[x1]
7101efe844  cmp w8,#0x23
7101efe848  b.eq 0x7101efe8a8
7101efe84c  cmp w8,#0x40
7101efe850  b.eq 0x7101efe8a8
7101efe854  adrp x8,0x710593b000
7101efe858  ldr x8,[x8, #0xc60]
7101efe85c  ldr x0,[x8]
7101efe860  bl 0x71037a4450
7101efe864  ldr w8,[x25, #0x25c]
7101efe868  mov x26,x0
7101efe86c  add x0,sp,#0x2d0
7101efe870  mov w2,#0x1000
7101efe874  mov w1,wzr
7101efe878  str w8,[sp, #0x60]
7101efe87c  bl 0x71039c02a0
7101efe880  mov x1,x26
7101efe884  ldr x26,[sp, #0x8]
7101efe888  add x0,sp,#0x2d0
7101efe88c  add x2,sp,#0x60
7101efe890  bl 0x71037ae170
7101efe894  mov w2,w0
7101efe898  add x1,sp,#0x2d0
7101efe89c  mov x0,x25
7101efe8a0  mov w3,wzr
7101efe8a4  bl 0x71037a2270
7101efe8a8  adrp x8,0x710523d000
7101efe8ac  add x8,x8,#0x9a8
7101efe8b0  stp x8,xzr,[sp, #0x70]
7101efe8b4  cbz x28,0x7101efe8c0
7101efe8b8  mov x0,x28
7101efe8bc  bl 0x710392eb40
7101efe8c0  add x8,sp,#0x70
7101efe8c4  add x0,sp,#0x80
7101efe8c8  adrp x1,0x710437c000
7101efe8cc  add x1,x1,#0xd8d
7101efe8d0  bl 0x7103776910
7101efe8d4  ldr x28,[sp, #0x78]
7101efe8d8  ldr x25,[x28, #0x10]
7101efe8dc  cbz x25,0x7101efe958
7101efe8e0  ldr w8,[sp, #0x34]
7101efe8e4  ldr x1,[x25, #0xe0]
7101efe8e8  str w8,[x25, #0x25c]
7101efe8ec  cbz x1,0x7101efe958
7101efe8f0  ldrb w8,[x1]
7101efe8f4  cmp w8,#0x23
7101efe8f8  b.eq 0x7101efe958
7101efe8fc  cmp w8,#0x40
7101efe900  b.eq 0x7101efe958
7101efe904  adrp x8,0x710593b000
7101efe908  ldr x8,[x8, #0xc60]
7101efe90c  ldr x0,[x8]
7101efe910  bl 0x71037a4450
7101efe914  ldr w8,[x25, #0x25c]
7101efe918  mov x26,x0
7101efe91c  add x0,sp,#0x2d0
7101efe920  mov w2,#0x1000
7101efe924  mov w1,wzr
7101efe928  str w8,[sp, #0x60]
7101efe92c  bl 0x71039c02a0
7101efe930  mov x1,x26
7101efe934  ldr x26,[sp, #0x8]
7101efe938  add x0,sp,#0x2d0
7101efe93c  add x2,sp,#0x60
7101efe940  bl 0x71037ae170
7101efe944  mov w2,w0
7101efe948  add x1,sp,#0x2d0
7101efe94c  mov x0,x25
7101efe950  mov w3,wzr
7101efe954  bl 0x71037a2270
7101efe958  adrp x8,0x710523d000
7101efe95c  add x8,x8,#0x9a8
7101efe960  stp x8,xzr,[sp, #0x70]
7101efe964  cbz x28,0x7101efe970
7101efe968  mov x0,x28
7101efe96c  bl 0x710392eb40
7101efe970  ldr w8,[x26]
7101efe974  cmp w8,#0x2
7101efe978  b.cs 0x7101eff1e8
7101efe97c  adrp x9,0x71050b3000
7101efe980  add x9,x9,#0xe88
7101efe984  adrp x1,0x71043cf000
7101efe988  add x1,x1,#0xcc8
7101efe98c  ldr x2,[x9, x8, LSL #0x3]
7101efe990  ldp x0,x3,[sp, #0x40]
7101efe994  add x8,sp,#0x70
7101efe998  mov w4,w23
7101efe99c  bl 0x7103776640
7101efe9a0  add x8,sp,#0x60
7101efe9a4  add x0,sp,#0x70
7101efe9a8  adrp x1,0x71042e7000
7101efe9ac  add x1,x1,#0xb00
7101efe9b0  bl 0x7103776910
7101efe9b4  ldr x28,[sp, #0x68]
7101efe9b8  ldr x25,[x28, #0x10]
7101efe9bc  cbz x25,0x7101efea38
7101efe9c0  ldr w8,[sp, #0x34]
7101efe9c4  ldr x1,[x25, #0xe0]
7101efe9c8  str w8,[x25, #0x25c]
7101efe9cc  cbz x1,0x7101efea38
7101efe9d0  ldrb w8,[x1]
7101efe9d4  cmp w8,#0x23
7101efe9d8  b.eq 0x7101efea38
7101efe9dc  cmp w8,#0x40
7101efe9e0  b.eq 0x7101efea38
7101efe9e4  adrp x8,0x710593b000
7101efe9e8  ldr x8,[x8, #0xc60]
7101efe9ec  ldr x0,[x8]
7101efe9f0  bl 0x71037a4450
7101efe9f4  ldr w8,[x25, #0x25c]
7101efe9f8  mov x26,x0
7101efe9fc  add x0,sp,#0x2d0
7101efea00  mov w2,#0x1000
7101efea04  mov w1,wzr
7101efea08  str w8,[sp, #0x50]
7101efea0c  bl 0x71039c02a0
7101efea10  mov x1,x26
7101efea14  ldr x26,[sp, #0x8]
7101efea18  add x0,sp,#0x2d0
7101efea1c  add x2,sp,#0x50
7101efea20  bl 0x71037ae170
7101efea24  mov w2,w0
7101efea28  add x1,sp,#0x2d0
7101efea2c  mov x0,x25
7101efea30  mov w3,wzr
7101efea34  bl 0x71037a2270
7101efea38  adrp x8,0x710523d000
7101efea3c  add x8,x8,#0x9a8
7101efea40  stp x8,xzr,[sp, #0x60]
7101efea44  cbz x28,0x7101efea50
7101efea48  mov x0,x28
7101efea4c  bl 0x710392eb40
7101efea50  ldr w8,[x26]
7101efea54  cmp w8,#0x2
7101efea58  b.cs 0x7101eff1e8
7101efea5c  adrp x9,0x71050b3000
7101efea60  add x9,x9,#0xe88
7101efea64  adrp x1,0x710436c000
7101efea68  add x1,x1,#0xbe6
7101efea6c  ldr x2,[x9, x8, LSL #0x3]
7101efea70  ldp x0,x3,[sp, #0x40]
7101efea74  add x8,sp,#0x60
7101efea78  mov w4,w23
7101efea7c  bl 0x7103776640
7101efea80  add x8,sp,#0x50
7101efea84  add x0,sp,#0x60
7101efea88  adrp x1,0x71042e7000
7101efea8c  add x1,x1,#0xb00
7101efea90  bl 0x7103776910
7101efea94  ldr x28,[sp, #0x58]
7101efea98  ldr x25,[x28, #0x10]
7101efea9c  cbz x25,0x7101efeb18
7101efeaa0  ldr w8,[sp, #0x34]
7101efeaa4  ldr x1,[x25, #0xe0]
7101efeaa8  str w8,[x25, #0x25c]
7101efeaac  cbz x1,0x7101efeb18
7101efeab0  ldrb w8,[x1]
7101efeab4  cmp w8,#0x23
7101efeab8  b.eq 0x7101efeb18
7101efeabc  cmp w8,#0x40
7101efeac0  b.eq 0x7101efeb18
7101efeac4  adrp x8,0x710593b000
7101efeac8  ldr x8,[x8, #0xc60]
7101efeacc  ldr x0,[x8]
7101efead0  bl 0x71037a4450
7101efead4  ldr w8,[x25, #0x25c]
7101efead8  mov x26,x0
7101efeadc  add x0,sp,#0x2d0
7101efeae0  mov w2,#0x1000
7101efeae4  mov w1,wzr
7101efeae8  stur w8,[x29, #-0x60]
7101efeaec  bl 0x71039c02a0
7101efeaf0  mov x1,x26
7101efeaf4  ldr x26,[sp, #0x8]
7101efeaf8  add x0,sp,#0x2d0
7101efeafc  sub x2,x29,#0x60
7101efeb00  bl 0x71037ae170
7101efeb04  mov w2,w0
7101efeb08  add x1,sp,#0x2d0
7101efeb0c  mov x0,x25
7101efeb10  mov w3,wzr
7101efeb14  bl 0x71037a2270
7101efeb18  adrp x8,0x710523d000
7101efeb1c  add x8,x8,#0x9a8
7101efeb20  stp x8,xzr,[sp, #0x50]
7101efeb24  cbz x28,0x7101efeb30
7101efeb28  mov x0,x28
7101efeb2c  bl 0x710392eb40
7101efeb30  mov x28,x22
7101efeb34  ldr x25,[sp, #0x68]
7101efeb38  stp x22,xzr,[sp, #0x60]
7101efeb3c  ldr x22,[sp, #0x28]
7101efeb40  cbz x25,0x7101efeb64
7101efeb44  ldr x0,[x25, #0x18]
7101efeb48  adrp x8,0x710523d000
7101efeb4c  add x8,x8,#0x9a8
7101efeb50  stp x8,xzr,[x25, #0x10]
7101efeb54  cbz x0,0x7101efeb5c
7101efeb58  bl 0x710392eb40
7101efeb5c  mov x0,x25
7101efeb60  bl 0x710392eb40
7101efeb64  ldr x25,[sp, #0x78]
7101efeb68  stp x28,xzr,[sp, #0x70]
7101efeb6c  cbz x25,0x7101efeb90
7101efeb70  ldr x0,[x25, #0x18]
7101efeb74  adrp x8,0x710523d000
7101efeb78  add x8,x8,#0x9a8
7101efeb7c  stp x8,xzr,[x25, #0x10]
7101efeb80  cbz x0,0x7101efeb88
7101efeb84  bl 0x710392eb40
7101efeb88  mov x0,x25
7101efeb8c  bl 0x710392eb40
7101efeb90  ldr x25,[sp, #0x88]
7101efeb94  stp x28,xzr,[sp, #0x80]
7101efeb98  cbz x25,0x7101efebbc
7101efeb9c  ldr x0,[x25, #0x18]
7101efeba0  adrp x8,0x710523d000
7101efeba4  add x8,x8,#0x9a8
7101efeba8  stp x8,xzr,[x25, #0x10]
7101efebac  cbz x0,0x7101efebb4
7101efebb0  bl 0x710392eb40
7101efebb4  mov x0,x25
7101efebb8  bl 0x710392eb40
7101efebbc  ldr x8,[sp, #0x48]
7101efebc0  add x23,x23,#0x1
7101efebc4  add x21,x21,#0x240
7101efebc8  cmp x23,x8
7101efebcc  b.cc 0x7101efe618
7101efebd0  ldr x0,[x26, #0x2a0]
7101efebd4  mov w1,w22
7101efebd8  bl 0x7101ef8550
7101efebdc  ldr x8,[x26, #0x2a0]
7101efebe0  ldr w9,[x8, #0x134]
7101efebe4  subs w9,w9,#0x1
7101efebe8  b.lt 0x7101efee24
7101efebec  cmp w9,#0x2
7101efebf0  str w9,[x8, #0x134]
7101efebf4  b.cs 0x7101eff1e8
7101efebf8  add x10,x8,w9, SXTW  #0x2
7101efebfc  ldr w9,[x10, #0x128]
7101efec00  ldr w11,[x8, #0x130]
7101efec04  cmp w11,w9
7101efec08  b.eq 0x7101efee24
7101efec0c  add x10,x10,#0x128
7101efec10  mov w12,#0xffffffff
7101efec14  cmp w9,#0x3
7101efec18  stp xzr,xzr,[x8, #0x18]
7101efec1c  str wzr,[x8, #0x104]
7101efec20  stur xzr,[x8, #0xfc]
7101efec24  stur xzr,[x8, #0xf4]
7101efec28  stur xzr,[x8, #0xec]
7101efec2c  stur xzr,[x8, #0xe4]
7101efec30  stur xzr,[x8, #0xdc]
7101efec34  stur xzr,[x8, #0xd4]
7101efec38  stur xzr,[x8, #0xcc]
7101efec3c  stur xzr,[x8, #0xc4]
7101efec40  stur xzr,[x8, #0xbc]
7101efec44  str x12,[x8, #0x108]
7101efec48  str w12,[x8, #0x110]
7101efec4c  strb wzr,[x8, #0x114]
7101efec50  str wzr,[x8, #0xb8]
7101efec54  b.hi 0x7101efee1c
7101efec58  mov w12,w9
7101efec5c  adrp x13,0x71044fc000
7101efec60  add x13,x13,#0x378
7101efec64  ldrsw x12,[x13, x12, LSL #0x2]
7101efec68  add x12,x12,x13
7101efec6c  br x12
7101efec70  mov w12,#0x1
7101efec74  cmp w11,#0x3
7101efec78  str w12,[x8, #0x104]
7101efec7c  str w12,[x8, #0xbc]
7101efec80  b.eq 0x7101efed78
7101efec84  cmp w11,#0x2
7101efec88  b.eq 0x7101efed90
7101efec8c  cmp w11,#0x1
7101efec90  b.ne 0x7101efee1c
7101efec94  mov w11,#0x2
7101efec98  str w11,[x8, #0x104]
7101efec9c  orr w11,wzr,#0x3
7101efeca0  str w11,[x8, #0xc0]
7101efeca4  b 0x7101efee1c
7101efeca8  cmp w11,#0x3
7101efecac  b.eq 0x7101efeda0
7101efecb0  cmp w11,#0x1
7101efecb4  b.eq 0x7101efedbc
7101efecb8  cbnz w11,0x7101efee1c
7101efecbc  mov w11,#0x1
7101efecc0  str w11,[x8, #0x104]
7101efecc4  mov w11,#0x4
7101efecc8  b 0x7101efee18
7101efeccc  cmp w11,#0x3
7101efecd0  b.eq 0x7101efedc8
7101efecd4  cmp w11,#0x2
7101efecd8  b.eq 0x7101efedd8
7101efecdc  cbnz w11,0x7101efee1c
7101efece0  mov w11,#0x1
7101efece4  str w11,[x8, #0x104]
7101efece8  mov w11,#0x2
7101efecec  b 0x7101efee18
7101efecf0  cmp w11,#0x2
7101efecf4  b.eq 0x7101efedf0
7101efecf8  cmp w11,#0x1
7101efecfc  b.eq 0x7101efee10
7101efed00  cbnz w11,0x7101efee1c
7101efed04  mov x11,#0x6
7101efed08  movk x11,#0x2, LSL #32
7101efed0c  b 0x7101efede0
7101efed10  mov x9,#0x5
7101efed14  movk x9,#0x7, LSL #32
7101efed18  str x9,[x8, #0xc0]
7101efed1c  orr w9,wzr,#0x3
7101efed20  str w9,[x8, #0x104]
7101efed24  b 0x7101efed34
7101efed28  str w9,[x8, #0x104]
7101efed2c  mov w9,#0x5
7101efed30  str w9,[x8, #0xc0]
7101efed34  add x8,x8,#0x12c
7101efed38  str xzr,[x8]
7101efed3c  b 0x7101eff104
7101efed40  mov w9,#0x1
7101efed44  str w9,[x8, #0x104]
7101efed48  orr w9,wzr,#0x7
7101efed4c  str w9,[x8, #0xbc]
7101efed50  b 0x7101efed68
7101efed54  mov x9,#0x2
7101efed58  movk x9,#0x5, LSL #32
7101efed5c  stur x9,[x8, #0xbc]
7101efed60  mov w9,#0x2
7101efed64  str w9,[x8, #0x104]
7101efed68  add x8,x8,#0x12c
7101efed6c  mov x9,#0x100000001
7101efed70  str x9,[x8]
7101efed74  b 0x7101eff104
7101efed78  mov x11,#0x5
7101efed7c  movk x11,#0x7, LSL #32
7101efed80  str x11,[x8, #0xc0]
7101efed84  orr w11,wzr,#0x3
7101efed88  str w11,[x8, #0x104]
7101efed8c  b 0x7101efee1c
7101efed90  str w11,[x8, #0x104]
7101efed94  mov w11,#0x5
7101efed98  str w11,[x8, #0xc0]
7101efed9c  b 0x7101efee1c
7101efeda0  mov x11,#0x4
7101efeda4  movk x11,#0x3, LSL #32
7101efeda8  orr w12,wzr,#0x3
7101efedac  str w12,[x8, #0x104]
7101efedb0  stur x11,[x8, #0xbc]
7101efedb4  orr w11,wzr,#0x7
7101efedb8  b 0x7101efee08
7101efedbc  mov x11,#0x4
7101efedc0  movk x11,#0x3, LSL #32
7101efedc4  b 0x7101efede0
7101efedc8  mov w11,#0x1
7101efedcc  str w11,[x8, #0x104]
7101efedd0  orr w11,wzr,#0x7
7101efedd4  b 0x7101efee18
7101efedd8  mov x11,#0x2
7101efeddc  movk x11,#0x5, LSL #32
7101efede0  stur x11,[x8, #0xbc]
7101efede4  mov w11,#0x2
7101efede8  str w11,[x8, #0x104]
7101efedec  b 0x7101efee1c
7101efedf0  mov x11,#0x6
7101efedf4  movk x11,#0x2, LSL #32
7101efedf8  stur x11,[x8, #0xbc]
7101efedfc  orr w11,wzr,#0x3
7101efee00  str w11,[x8, #0x104]
7101efee04  mov w11,#0x5
7101efee08  str w11,[x8, #0xc4]
7101efee0c  b 0x7101efee1c
7101efee10  str w11,[x8, #0x104]
7101efee14  orr w11,wzr,#0x6
7101efee18  str w11,[x8, #0xbc]
7101efee1c  str w9,[x10]
7101efee20  str w9,[x8, #0x130]
7101efee24  ldr w8,[x26]
7101efee28  cbnz w8,0x7101eff0f0
7101efee2c  ldr x0,[sp, #0x40]
7101efee30  adrp x1,0x71043be000
7101efee34  add x1,x1,#0xe8e
7101efee38  add x8,sp,#0x80
7101efee3c  bl 0x7103776640
7101efee40  adrp x1,0x71042a1000
7101efee44  add x1,x1,#0xaf1
7101efee48  add x8,sp,#0x90
7101efee4c  add x0,sp,#0x80
7101efee50  bl 0x7103776910
7101efee54  ldr x24,[sp, #0x98]
7101efee58  ldr x22,[x24, #0x10]
7101efee5c  cbz x22,0x7101efeed4
7101efee60  ldr w8,[sp, #0x34]
7101efee64  ldr x1,[x22, #0xe0]
7101efee68  str w8,[x22, #0x25c]
7101efee6c  cbz x1,0x7101efeed4
7101efee70  ldrb w8,[x1]
7101efee74  cmp w8,#0x23
7101efee78  b.eq 0x7101efeed4
7101efee7c  cmp w8,#0x40
7101efee80  b.eq 0x7101efeed4
7101efee84  adrp x8,0x710593b000
7101efee88  ldr x8,[x8, #0xc60]
7101efee8c  ldr x0,[x8]
7101efee90  bl 0x71037a4450
7101efee94  ldr w8,[x22, #0x25c]
7101efee98  mov x23,x0
7101efee9c  add x0,sp,#0x2d0
7101efeea0  mov w2,#0x1000
7101efeea4  mov w1,wzr
7101efeea8  str w8,[sp, #0x70]
7101efeeac  bl 0x71039c02a0
7101efeeb0  add x0,sp,#0x2d0
7101efeeb4  add x2,sp,#0x70
7101efeeb8  mov x1,x23
7101efeebc  bl 0x71037ae170
7101efeec0  mov w2,w0
7101efeec4  add x1,sp,#0x2d0
7101efeec8  mov x0,x22
7101efeecc  mov w3,wzr
7101efeed0  bl 0x71037a2270
7101efeed4  adrp x8,0x710523d000
7101efeed8  add x8,x8,#0x9a8
7101efeedc  stp x8,xzr,[sp, #0x90]
7101efeee0  cbz x24,0x7101efeeec
7101efeee4  mov x0,x24
7101efeee8  bl 0x710392eb40
7101efeeec  ldr x22,[sp, #0x88]
7101efeef0  stp x28,xzr,[sp, #0x80]
7101efeef4  cbz x22,0x7101efef18
7101efeef8  ldr x0,[x22, #0x18]
7101efeefc  adrp x8,0x710523d000
7101efef00  add x8,x8,#0x9a8
7101efef04  stp x8,xzr,[x22, #0x10]
7101efef08  cbz x0,0x7101efef10
7101efef0c  bl 0x710392eb40
7101efef10  mov x0,x22
7101efef14  bl 0x710392eb40
7101efef18  ldr x0,[sp, #0x40]
7101efef1c  adrp x1,0x710432a000
7101efef20  add x1,x1,#0x84e
7101efef24  add x8,sp,#0x80
7101efef28  bl 0x7103776640
7101efef2c  adrp x1,0x71042a1000
7101efef30  add x1,x1,#0xaf1
7101efef34  add x8,sp,#0x90
7101efef38  add x0,sp,#0x80
7101efef3c  bl 0x7103776910
7101efef40  ldr x24,[sp, #0x98]
7101efef44  ldr x22,[x24, #0x10]
7101efef48  cbz x22,0x7101efefc0
7101efef4c  ldr w8,[sp, #0x34]
7101efef50  ldr x1,[x22, #0xe0]
7101efef54  str w8,[x22, #0x25c]
7101efef58  cbz x1,0x7101efefc0
7101efef5c  ldrb w8,[x1]
7101efef60  cmp w8,#0x23
7101efef64  b.eq 0x7101efefc0
7101efef68  cmp w8,#0x40
7101efef6c  b.eq 0x7101efefc0
7101efef70  adrp x8,0x710593b000
7101efef74  ldr x8,[x8, #0xc60]
7101efef78  ldr x0,[x8]
7101efef7c  bl 0x71037a4450
7101efef80  ldr w8,[x22, #0x25c]
7101efef84  mov x23,x0
7101efef88  add x0,sp,#0x2d0
7101efef8c  mov w2,#0x1000
7101efef90  mov w1,wzr
7101efef94  str w8,[sp, #0x70]
7101efef98  bl 0x71039c02a0
7101efef9c  add x0,sp,#0x2d0
7101efefa0  add x2,sp,#0x70
7101efefa4  mov x1,x23
7101efefa8  bl 0x71037ae170
7101efefac  mov w2,w0
7101efefb0  add x1,sp,#0x2d0
7101efefb4  mov x0,x22
7101efefb8  mov w3,wzr
7101efefbc  bl 0x71037a2270
7101efefc0  adrp x8,0x710523d000
7101efefc4  add x8,x8,#0x9a8
7101efefc8  stp x8,xzr,[sp, #0x90]
7101efefcc  cbz x24,0x7101efefd8
7101efefd0  mov x0,x24
7101efefd4  bl 0x710392eb40
7101efefd8  ldr x22,[sp, #0x88]
7101efefdc  stp x28,xzr,[sp, #0x80]
7101efefe0  cbz x22,0x7101eff004
7101efefe4  ldr x0,[x22, #0x18]
7101efefe8  adrp x8,0x710523d000
7101efefec  add x8,x8,#0x9a8
7101efeff0  stp x8,xzr,[x22, #0x10]
7101efeff4  cbz x0,0x7101efeffc
7101efeff8  bl 0x710392eb40
7101efeffc  mov x0,x22
7101eff000  bl 0x710392eb40
7101eff004  ldr x0,[sp, #0x40]
7101eff008  adrp x1,0x7104455000
7101eff00c  add x1,x1,#0x2f5
7101eff010  add x8,sp,#0x80
7101eff014  bl 0x7103776640
7101eff018  adrp x1,0x71042a1000
7101eff01c  add x1,x1,#0xaf1
7101eff020  add x8,sp,#0x90
7101eff024  add x0,sp,#0x80
7101eff028  bl 0x7103776910
7101eff02c  ldr x20,[sp, #0x98]
7101eff030  ldr x23,[x20, #0x10]
7101eff034  cbz x23,0x7101eff0ac
7101eff038  ldr w8,[sp, #0x34]
7101eff03c  ldr x1,[x23, #0xe0]
7101eff040  str w8,[x23, #0x25c]
7101eff044  cbz x1,0x7101eff0ac
7101eff048  ldrb w8,[x1]
7101eff04c  cmp w8,#0x23
7101eff050  b.eq 0x7101eff0ac
7101eff054  cmp w8,#0x40
7101eff058  b.eq 0x7101eff0ac
7101eff05c  adrp x8,0x710593b000
7101eff060  ldr x8,[x8, #0xc60]
7101eff064  ldr x0,[x8]
7101eff068  bl 0x71037a4450
7101eff06c  ldr w8,[x23, #0x25c]
7101eff070  mov x22,x0
7101eff074  add x0,sp,#0x2d0
7101eff078  mov w2,#0x1000
7101eff07c  mov w1,wzr
7101eff080  str w8,[sp, #0x70]
7101eff084  bl 0x71039c02a0
7101eff088  add x0,sp,#0x2d0
7101eff08c  add x2,sp,#0x70
7101eff090  mov x1,x22
7101eff094  bl 0x71037ae170
7101eff098  mov w2,w0
7101eff09c  add x1,sp,#0x2d0
7101eff0a0  mov x0,x23
7101eff0a4  mov w3,wzr
7101eff0a8  bl 0x71037a2270
7101eff0ac  adrp x8,0x710523d000
7101eff0b0  add x8,x8,#0x9a8
7101eff0b4  stp x8,xzr,[sp, #0x90]
7101eff0b8  cbz x20,0x7101eff0c4
7101eff0bc  mov x0,x20
7101eff0c0  bl 0x710392eb40
7101eff0c4  ldr x20,[sp, #0x88]
7101eff0c8  stp x28,xzr,[sp, #0x80]
7101eff0cc  cbz x20,0x7101eff0f0
7101eff0d0  ldr x0,[x20, #0x18]
7101eff0d4  adrp x8,0x710523d000
7101eff0d8  add x8,x8,#0x9a8
7101eff0dc  stp x8,xzr,[x20, #0x10]
7101eff0e0  cbz x0,0x7101eff0e8
7101eff0e4  bl 0x710392eb40
7101eff0e8  mov x0,x20
7101eff0ec  bl 0x710392eb40
7101eff0f0  ldr w8,[x26, #0x1f4]
7101eff0f4  subs w8,w8,#0x1
7101eff0f8  b.lt 0x7101eff100
7101eff0fc  str w8,[x26, #0x1f4]
7101eff100  strb wzr,[x26, #0x2b8]
7101eff104  add sp,sp,#0x1, LSL #12
7101eff108  add sp,sp,#0x2e0
7101eff10c  ldp x29,x30,[sp, #0x50]
7101eff110  ldp x20,x19,[sp, #0x40]
7101eff114  ldp x22,x21,[sp, #0x30]
7101eff118  ldp x24,x23,[sp, #0x20]
7101eff11c  ldp x26,x25,[sp, #0x10]
7101eff120  ldp x28,x27,[sp], #0x60
7101eff124  ret
7101eff128  adrp x0,0x7105314000
7101eff12c  add x0,x0,#0x4d8
7101eff130  bl 0x71039c06b0
7101eff134  cbz w0,0x7101efe400
7101eff138  bl 0x7101764000
7101eff13c  adrp x0,0x7101763000
7101eff140  add x0,x0,#0xc40
7101eff144  adrp x1,0x71052c5000
7101eff148  add x1,x1,#0x180
7101eff14c  adrp x2,0x7104f17000
7101eff150  add x2,x2,#0x0
7101eff154  bl 0x71000001c0
7101eff158  adrp x0,0x7105314000
7101eff15c  add x0,x0,#0x4d8
7101eff160  bl 0x71039c06c0
7101eff164  b 0x7101efe400
7101eff168  adrp x0,0x7105314000
7101eff16c  add x0,x0,#0x4d8
7101eff170  bl 0x71039c06b0
7101eff174  cbz w0,0x7101efe424
7101eff178  bl 0x7101764000
7101eff17c  adrp x0,0x7101763000
7101eff180  add x0,x0,#0xc40
7101eff184  adrp x1,0x71052c5000
7101eff188  add x1,x1,#0x180
7101eff18c  adrp x2,0x7104f17000
7101eff190  add x2,x2,#0x0
7101eff194  bl 0x71000001c0
7101eff198  adrp x0,0x7105314000
7101eff19c  add x0,x0,#0x4d8
7101eff1a0  bl 0x71039c06c0
7101eff1a4  b 0x7101efe424
7101eff1a8  adrp x0,0x7105314000
7101eff1ac  add x0,x0,#0x4d8
7101eff1b0  bl 0x71039c06b0
7101eff1b4  cbz w0,0x7101efe548
7101eff1b8  bl 0x7101764000
7101eff1bc  adrp x0,0x7101763000
7101eff1c0  add x0,x0,#0xc40
7101eff1c4  adrp x1,0x71052c5000
7101eff1c8  add x1,x1,#0x180
7101eff1cc  adrp x2,0x7104f17000
7101eff1d0  add x2,x2,#0x0
7101eff1d4  bl 0x71000001c0
7101eff1d8  adrp x0,0x7105314000
7101eff1dc  add x0,x0,#0x4d8
7101eff1e0  bl 0x71039c06c0
7101eff1e4  b 0x7101efe548
7101eff1e8  bl 0x71039c2650
7101eff1ec  add x0,x8,#0x608
7101eff1f0  bl 0x71039c1330
