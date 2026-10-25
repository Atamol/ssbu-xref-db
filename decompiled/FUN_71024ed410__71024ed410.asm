// addr:      71024ed410
// offset:    0x24ed410
// name:      FUN_71024ed410
// mangled:   
// size:      1368

71024ed410  sub sp,sp,#0xa0
71024ed414  str d8,[sp, #0x40]
71024ed418  str x27,[sp, #0x48]
71024ed41c  stp x26,x25,[sp, #0x50]
71024ed420  stp x24,x23,[sp, #0x60]
71024ed424  stp x22,x21,[sp, #0x70]
71024ed428  stp x20,x19,[sp, #0x80]
71024ed42c  stp x29,x30,[sp, #0x90]
71024ed430  add x29,sp,#0x90
71024ed434  adrp x8,0x71050c0000
71024ed438  add x8,x8,#0x740
71024ed43c  str xzr,[x0, #0x10]
71024ed440  stp x8,x1,[x0]
71024ed444  mov w8,#0x101
71024ed448  str wzr,[x0, #0x18]
71024ed44c  mov x19,x0
71024ed450  str wzr,[x0, #0x60]
71024ed454  strh w8,[x0, #0x64]
71024ed458  strb wzr,[x0, #0x66]
71024ed45c  stp xzr,xzr,[x0, #0x50]
71024ed460  stp xzr,xzr,[x0, #0x40]
71024ed464  stp xzr,xzr,[x0, #0x30]
71024ed468  stp xzr,xzr,[x0, #0x20]
71024ed46c  ldr x8,[x1]
71024ed470  ldr x8,[x8, #0x540]
71024ed474  mov x0,x1
71024ed478  mov w1,wzr
71024ed47c  blr x8
71024ed480  adrp x23,0x710532a000
71024ed484  ldr x8,[x23, #0x860]
71024ed488  ldr x1,[x8]
71024ed48c  add x0,sp,#0x28
71024ed490  mov w2,#0x2
71024ed494  bl 0x71024d1810
71024ed498  ldr w24,[sp, #0x28]
71024ed49c  orr w8,wzr,#0xffffff
71024ed4a0  cmp w24,w8
71024ed4a4  b.eq 0x71024ed658
71024ed4a8  adrp x22,0x7105332000
71024ed4ac  ldr x20,[x22, #0xf20]
71024ed4b0  ldr w8,[x20, #0x48]
71024ed4b4  cmp w8,w24
71024ed4b8  b.ls 0x71024ed608
71024ed4bc  ldr x21,[x20]
71024ed4c0  mov x0,x21
71024ed4c4  bl 0x71039c1a40
71024ed4c8  ldr x8,[x20, #0x40]
71024ed4cc  mov w9,#0x48
71024ed4d0  madd x20,x24,x9,x8
71024ed4d4  ldrb w25,[x20, #0x8]
71024ed4d8  mov x0,x21
71024ed4dc  bl 0x71039c1a50
71024ed4e0  tbz w25,#0x0,0x71024ed608
71024ed4e4  cbz x20,0x71024ed608
71024ed4e8  ldr w8,[x20]
71024ed4ec  orr w9,wzr,#0xffffff
71024ed4f0  cmp w8,w9
71024ed4f4  b.eq 0x71024ed608
71024ed4f8  mov x0,x20
71024ed4fc  bl 0x7103543080
71024ed500  cmp w0,#0x3
71024ed504  b.ne 0x71024ed608
71024ed508  ldr x9,[x23, #0x860]
71024ed50c  adrp x8,0x710532a000
71024ed510  ldr x8,[x8, #0x868]
71024ed514  ldr x8,[x8]
71024ed518  ldr x9,[x9]
71024ed51c  ldr w9,[x9, #0x78]
71024ed520  mov w10,#0x138
71024ed524  madd x8,x9,x10,x8
71024ed528  ldr x20,[x22, #0xf20]
71024ed52c  ldr s8,[x8, #0x540]
71024ed530  ldr w8,[x20, #0x48]
71024ed534  cmp w8,w24
71024ed538  b.ls 0x71024ed574
71024ed53c  ldr x21,[x20]
71024ed540  mov x0,x21
71024ed544  bl 0x71039c1a40
71024ed548  ldr x8,[x20, #0x40]
71024ed54c  mov w9,#0x48
71024ed550  madd x9,x24,x9,x8
71024ed554  ldrb w9,[x9, #0x8]
71024ed558  tbz w9,#0x0,0x71024ed56c
71024ed55c  mov w9,#0x48
71024ed560  madd x1,x24,x9,x8
71024ed564  mov x0,x20
71024ed568  bl 0x710353f5a0
71024ed56c  mov x0,x21
71024ed570  bl 0x71039c1a50
71024ed574  fcmp s8,#0.0
71024ed578  orr w21,wzr,#0xffffff
71024ed57c  str w21,[sp, #0x28]
71024ed580  b.le 0x71024ed658
71024ed584  ldr x8,[x23, #0x860]
71024ed588  ldr x1,[x8]
71024ed58c  add x0,sp,#0x20
71024ed590  mov w2,#0x2
71024ed594  bl 0x71024d1810
71024ed598  adrp x2,0x7104328000
71024ed59c  add x2,x2,#0x86f
71024ed5a0  add x0,sp,#0x28
71024ed5a4  add x1,sp,#0x20
71024ed5a8  bl 0x710353e1d0
71024ed5ac  ldr w20,[sp, #0x28]
71024ed5b0  cmp w20,w21
71024ed5b4  b.eq 0x71024ed5cc
71024ed5b8  ldr x0,[x22, #0xf20]
71024ed5bc  mov w1,w20
71024ed5c0  bl 0x7103540b10
71024ed5c4  orr w8,wzr,#0xffffff
71024ed5c8  str w8,[sp, #0x28]
71024ed5cc  ldr x8,[x22, #0xf20]
71024ed5d0  ldr x8,[x8, #0x78]
71024ed5d4  orr w9,wzr,#0xffffff
71024ed5d8  cmp w20,w9
71024ed5dc  b.eq 0x71024ed81c
71024ed5e0  ldr x9,[x8]
71024ed5e4  ldr x10,[x9, #0x40]
71024ed5e8  ldr w10,[x10, #0x4]
71024ed5ec  cmp w10,w20
71024ed5f0  b.ls 0x71024ed81c
71024ed5f4  ldr x9,[x9, #0x60]
71024ed5f8  lsl x10,x20,#0x5
71024ed5fc  ldr x9,[x9, x10, LSL #0x0]
71024ed600  and x9,x9,#0xffffffffff
71024ed604  b 0x71024ed820
71024ed608  ldr x20,[x22, #0xf20]
71024ed60c  ldr w8,[x20, #0x48]
71024ed610  cmp w8,w24
71024ed614  b.ls 0x71024ed650
71024ed618  ldr x21,[x20]
71024ed61c  mov x0,x21
71024ed620  bl 0x71039c1a40
71024ed624  ldr x8,[x20, #0x40]
71024ed628  mov w9,#0x48
71024ed62c  madd x9,x24,x9,x8
71024ed630  ldrb w9,[x9, #0x8]
71024ed634  tbz w9,#0x0,0x71024ed648
71024ed638  mov w9,#0x48
71024ed63c  madd x1,x24,x9,x8
71024ed640  mov x0,x20
71024ed644  bl 0x710353f5a0
71024ed648  mov x0,x21
71024ed64c  bl 0x71039c1a50
71024ed650  orr w8,wzr,#0xffffff
71024ed654  str w8,[sp, #0x28]
71024ed658  adrp x8,0x710532a000
71024ed65c  ldr x8,[x8, #0x868]
71024ed660  ldr x8,[x8]
71024ed664  ldr w26,[x8, #0x90]
71024ed668  ldp w23,w24,[x8, #0xb4]
71024ed66c  ldr w25,[x8, #0xbc]
71024ed670  ldr w21,[x8, #0x10c]
71024ed674  ldr w22,[x8, #0x110]
71024ed678  mov w1,#0x21d0
71024ed67c  mov w0,#0x10
71024ed680  bl 0x710392e290
71024ed684  mov x20,x0
71024ed688  cbnz x0,0x71024ed6d4
71024ed68c  adrp x8,0x7105332000
71024ed690  ldr x0,[x8, #0xf00]
71024ed694  cbz x0,0x71024ed6d0
71024ed698  mov w8,#0x21d0
71024ed69c  str wzr,[sp, #0x38]
71024ed6a0  add x1,sp,#0x38
71024ed6a4  str x8,[sp, #0x28]
71024ed6a8  ldr x8,[x0]
71024ed6ac  ldr x8,[x8, #0x30]
71024ed6b0  add x2,sp,#0x28
71024ed6b4  blr x8
71024ed6b8  tbz w0,#0x0,0x71024ed6d0
71024ed6bc  mov w1,#0x21d0
71024ed6c0  mov w0,#0x10
71024ed6c4  bl 0x710392e290
71024ed6c8  mov x20,x0
71024ed6cc  cbnz x0,0x71024ed6d4
71024ed6d0  mov x20,xzr
71024ed6d4  adrp x8,0x71050c0000
71024ed6d8  add x8,x8,#0x7d8
71024ed6dc  add x0,x20,#0x148
71024ed6e0  mov w2,#0x2014
71024ed6e4  mov w1,wzr
71024ed6e8  str xzr,[sp, #0x8]
71024ed6ec  stp xzr,xzr,[sp, #0x10]
71024ed6f0  str x8,[x20]
71024ed6f4  stp xzr,xzr,[x20, #0xa8]
71024ed6f8  str xzr,[x20, #0xc0]
71024ed6fc  str wzr,[x20, #0x110]
71024ed700  str wzr,[x20, #0x140]
71024ed704  stp xzr,xzr,[x20, #0x98]
71024ed708  stp xzr,xzr,[x20, #0x88]
71024ed70c  stp xzr,xzr,[x20, #0x78]
71024ed710  stp xzr,xzr,[x20, #0xd8]
71024ed714  stp xzr,xzr,[x20, #0xc8]
71024ed718  stp xzr,xzr,[x20, #0x100]
71024ed71c  stp xzr,xzr,[x20, #0xf0]
71024ed720  stp xzr,xzr,[x20, #0x130]
71024ed724  stp xzr,xzr,[x20, #0x120]
71024ed728  bl 0x71039c02a0
71024ed72c  mov x27,#0x42b40000
71024ed730  movk x27,#0x42b4, LSL #48
71024ed734  orr x8,xzr,#0x3f80000000000000
71024ed738  add x0,x20,#0x158
71024ed73c  mov w2,#0x2000
71024ed740  str xzr,[x20, #0x2190]
71024ed744  mov w1,wzr
71024ed748  str xzr,[x20, #0x2188]
71024ed74c  str xzr,[x20, #0x2180]
71024ed750  str xzr,[x20, #0x2178]
71024ed754  str xzr,[x20, #0x2170]
71024ed758  str xzr,[x20, #0x2168]
71024ed75c  str xzr,[x20, #0x2160]
71024ed760  str x27,[x20, #0x2198]
71024ed764  str xzr,[x20, #0x21b8]
71024ed768  str xzr,[x20, #0x21b0]
71024ed76c  str xzr,[x20, #0x21a8]
71024ed770  str x8,[x20, #0x21c0]
71024ed774  str xzr,[x20, #0x21a0]
71024ed778  bl 0x71039c02a0
71024ed77c  mov w8,#0x21ce
71024ed780  strb wzr,[x20, x8, LSL ]
71024ed784  mov w8,#0x21cc
71024ed788  strh wzr,[x20, x8, LSL #0x0]
71024ed78c  orr x8,xzr,#0x3f8000003f800000
71024ed790  str wzr,[x20, #0x21c8]
71024ed794  str w26,[x20, #0x8]
71024ed798  stur x8,[x20, #0xc]
71024ed79c  mov w1,#0x1
71024ed7a0  stur x8,[x20, #0x14]
71024ed7a4  stur xzr,[x20, #0x24]
71024ed7a8  stur xzr,[x20, #0x1c]
71024ed7ac  stur x27,[x20, #0x2c]
71024ed7b0  stur x27,[x20, #0x34]
71024ed7b4  stur xzr,[x20, #0x3c]
71024ed7b8  stp w23,w24,[x20, #0x44]
71024ed7bc  str w25,[x20, #0x4c]
71024ed7c0  ldp x8,x9,[sp, #0x8]
71024ed7c4  ldr x10,[sp, #0x18]
71024ed7c8  str x8,[x20, #0x50]
71024ed7cc  mov w8,#0x43340000
71024ed7d0  stp w21,w22,[x20, #0x68]
71024ed7d4  strb wzr,[x20, #0x74]
71024ed7d8  str w8,[x20, #0x70]
71024ed7dc  stp x9,x10,[x20, #0x58]
71024ed7e0  ldr x8,[x19, #0x8]
71024ed7e4  str x20,[x19, #0x10]
71024ed7e8  ldr x0,[x8, #0x1d8]
71024ed7ec  ldr x8,[x0]
71024ed7f0  ldr x8,[x8, #0x298]
71024ed7f4  blr x8
71024ed7f8  ldr d8,[sp, #0x40]
71024ed7fc  ldp x29,x30,[sp, #0x90]
71024ed800  ldp x20,x19,[sp, #0x80]
71024ed804  ldr x27,[sp, #0x48]
71024ed808  ldp x22,x21,[sp, #0x70]
71024ed80c  ldp x24,x23,[sp, #0x60]
71024ed810  ldp x26,x25,[sp, #0x50]
71024ed814  add sp,sp,#0xa0
71024ed818  ret
71024ed81c  mov x9,xzr
71024ed820  ldr x20,[x8, #0x8]
71024ed824  str x9,[sp, #0x28]
71024ed828  ldr x8,[x20, #0x8]
71024ed82c  ldr x1,[x20, #0x20]
71024ed830  ldr w2,[x8, #0x8]
71024ed834  adrp x4,0x7103542000
71024ed838  add x4,x4,#0x240
71024ed83c  add x0,sp,#0x28
71024ed840  mov w3,#0x8
71024ed844  bl 0x71039c2630
71024ed848  orr w8,wzr,#0xffffff
71024ed84c  cbz x0,0x71024ed874
71024ed850  ldr x9,[x0]
71024ed854  lsr x9,x9,#0x28
71024ed858  cmp w9,w8
71024ed85c  b.eq 0x71024ed874
71024ed860  ldr x8,[x20, #0x8]
71024ed864  ldr w8,[x8, #0x4]
71024ed868  cmp w8,w9
71024ed86c  orr w8,wzr,#0xffffff
71024ed870  csel w8,w9,w8,hi
71024ed874  add x0,sp,#0x28
71024ed878  add x1,sp,#0x38
71024ed87c  mov w2,#0x4
71024ed880  str w8,[sp, #0x38]
71024ed884  bl 0x71035c2890
71024ed888  ldp x8,x9,[sp, #0x28]
71024ed88c  stp xzr,xzr,[sp, #0x28]
71024ed890  ldr x20,[x19, #0x28]
71024ed894  stp x8,x9,[x19, #0x20]
71024ed898  cbz x20,0x71024ed8cc
71024ed89c  add x8,x20,#0x8
71024ed8a0  ldaxr x9,[x8]
71024ed8a4  sub x10,x9,#0x1
71024ed8a8  stlxr w11,x10,[x8]
71024ed8ac  cbnz w11,0x71024ed8a0
71024ed8b0  cbnz x9,0x71024ed8cc
71024ed8b4  ldr x8,[x20]
71024ed8b8  ldr x8,[x8, #0x10]
71024ed8bc  mov x0,x20
71024ed8c0  blr x8
71024ed8c4  mov x0,x20
71024ed8c8  bl 0x71039c2670
71024ed8cc  ldr x20,[sp, #0x30]
71024ed8d0  cbz x20,0x71024ed904
71024ed8d4  add x8,x20,#0x8
71024ed8d8  ldaxr x9,[x8]
71024ed8dc  sub x10,x9,#0x1
71024ed8e0  stlxr w11,x10,[x8]
71024ed8e4  cbnz w11,0x71024ed8d8
71024ed8e8  cbnz x9,0x71024ed904
71024ed8ec  ldr x8,[x20]
71024ed8f0  ldr x8,[x8, #0x10]
71024ed8f4  mov x0,x20
71024ed8f8  blr x8
71024ed8fc  mov x0,x20
71024ed900  bl 0x71039c2670
71024ed904  ldr w23,[sp, #0x20]
71024ed908  orr w8,wzr,#0xffffff
71024ed90c  cmp w23,w8
71024ed910  b.eq 0x71024ed658
71024ed914  ldr x20,[x22, #0xf20]
71024ed918  ldr w8,[x20, #0x48]
71024ed91c  cmp w8,w23
71024ed920  b.ls 0x71024ed95c
71024ed924  ldr x21,[x20]
71024ed928  mov x0,x21
71024ed92c  bl 0x71039c1a40
71024ed930  ldr x8,[x20, #0x40]
71024ed934  mov w9,#0x48
71024ed938  madd x9,x23,x9,x8
71024ed93c  ldrb w9,[x9, #0x8]
71024ed940  tbz w9,#0x0,0x71024ed954
71024ed944  mov w9,#0x48
71024ed948  madd x1,x23,x9,x8
71024ed94c  mov x0,x20
71024ed950  bl 0x710353f5a0
71024ed954  mov x0,x21
71024ed958  bl 0x71039c1a50
71024ed95c  orr w8,wzr,#0xffffff
71024ed960  str w8,[sp, #0x20]
71024ed964  b 0x71024ed658
