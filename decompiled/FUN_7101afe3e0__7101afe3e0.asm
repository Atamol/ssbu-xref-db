// addr:      7101afe3e0
// offset:    0x1afe3e0
// name:      FUN_7101afe3e0
// mangled:   
// size:      984

7101afe3e0  stp x28,x25,[sp, #-0x50]!
7101afe3e4  stp x24,x23,[sp, #0x10]
7101afe3e8  stp x22,x21,[sp, #0x20]
7101afe3ec  stp x20,x19,[sp, #0x30]
7101afe3f0  stp x29,x30,[sp, #0x40]
7101afe3f4  add x29,sp,#0x40
7101afe3f8  sub sp,sp,#0x1, LSL #12
7101afe3fc  sub sp,sp,#0x70
7101afe400  ldr x8,[x0, #0x128]
7101afe404  ldr x8,[x8]
7101afe408  mov w19,w1
7101afe40c  mov x20,x0
7101afe410  add x0,x8,#0x8
7101afe414  adrp x1,0x71043ad000
7101afe418  add x1,x1,#0xfe3
7101afe41c  add x8,sp,#0x58
7101afe420  bl 0x7103776910
7101afe424  adrp x25,0x710523d000
7101afe428  add x25,x25,#0x9a8
7101afe42c  mov w0,#0x10
7101afe430  mov w1,#0x20
7101afe434  str x25,[sp, #0x48]
7101afe438  bl 0x710392e290
7101afe43c  cbnz x0,0x7101afe484
7101afe440  adrp x8,0x7105332000
7101afe444  ldr x0,[x8, #0xf00]
7101afe448  cbz x0,0x7101afe480
7101afe44c  mov w8,#0x20
7101afe450  str wzr,[sp, #0x38]
7101afe454  add x1,sp,#0x38
7101afe458  str x8,[sp, #0x68]
7101afe45c  ldr x8,[x0]
7101afe460  ldr x8,[x8, #0x30]
7101afe464  add x2,sp,#0x68
7101afe468  blr x8
7101afe46c  tbz w0,#0x0,0x7101afe480
7101afe470  mov w0,#0x10
7101afe474  mov w1,#0x20
7101afe478  bl 0x710392e290
7101afe47c  cbnz x0,0x7101afe484
7101afe480  mov x0,xzr
7101afe484  stp xzr,xzr,[x0, #0x10]
7101afe488  mov x21,x0
7101afe48c  stp xzr,xzr,[x0]
7101afe490  ldr x8,[sp, #0x60]
7101afe494  mov w2,#0x800
7101afe498  mov w1,w19
7101afe49c  add x22,sp,#0x68
7101afe4a0  str x0,[sp, #0x50]
7101afe4a4  ldr x9,[x8]
7101afe4a8  str x9,[x0]
7101afe4ac  ldr x8,[x8, #0x8]
7101afe4b0  str x8,[x0, #0x8]
7101afe4b4  ldr x8,[sp, #0x60]
7101afe4b8  ldr x9,[x8, #0x10]
7101afe4bc  str x9,[x21, #0x10]
7101afe4c0  ldr x8,[x8, #0x18]
7101afe4c4  add x0,sp,#0x68
7101afe4c8  str x8,[x21, #0x18]
7101afe4cc  bl 0x7103393a60
7101afe4d0  add x1,x22,#0x8
7101afe4d4  add x0,sp,#0x48
7101afe4d8  bl 0x710377a120
7101afe4dc  stp x25,xzr,[sp, #0x48]
7101afe4e0  cbz x21,0x7101afe4ec
7101afe4e4  mov x0,x21
7101afe4e8  bl 0x710392eb40
7101afe4ec  ldr x8,[x20, #0x130]
7101afe4f0  ldr x8,[x8]
7101afe4f4  add x0,x8,#0x8
7101afe4f8  adrp x1,0x71043ad000
7101afe4fc  add x1,x1,#0xfe3
7101afe500  add x8,sp,#0x38
7101afe504  bl 0x7103776910
7101afe508  ldrb w8,[x20, #0x1f0]
7101afe50c  cbz w8,0x7101afe6fc
7101afe510  mov w0,#0x10
7101afe514  mov w1,#0x20
7101afe518  str x25,[sp, #0x28]
7101afe51c  bl 0x710392e290
7101afe520  cbnz x0,0x7101afe568
7101afe524  adrp x8,0x7105332000
7101afe528  ldr x0,[x8, #0xf00]
7101afe52c  cbz x0,0x7101afe564
7101afe530  mov w8,#0x20
7101afe534  str wzr,[sp, #0x8]
7101afe538  add x1,sp,#0x8
7101afe53c  str x8,[sp, #0x68]
7101afe540  ldr x8,[x0]
7101afe544  ldr x8,[x8, #0x30]
7101afe548  add x2,sp,#0x68
7101afe54c  blr x8
7101afe550  tbz w0,#0x0,0x7101afe564
7101afe554  mov w0,#0x10
7101afe558  mov w1,#0x20
7101afe55c  bl 0x710392e290
7101afe560  cbnz x0,0x7101afe568
7101afe564  mov x0,xzr
7101afe568  stp xzr,xzr,[x0, #0x10]
7101afe56c  mov x22,x0
7101afe570  stp xzr,xzr,[x0]
7101afe574  ldr x8,[sp, #0x40]
7101afe578  mov w2,#0x40000
7101afe57c  mov w1,w19
7101afe580  add x23,sp,#0x68
7101afe584  str x0,[sp, #0x30]
7101afe588  ldr x9,[x8]
7101afe58c  str x9,[x0]
7101afe590  ldr x8,[x8, #0x8]
7101afe594  str x8,[x0, #0x8]
7101afe598  ldr x21,[sp, #0x40]
7101afe59c  ldr x8,[x21, #0x10]
7101afe5a0  str x8,[x22, #0x10]
7101afe5a4  ldr x8,[x21, #0x18]
7101afe5a8  add x0,sp,#0x68
7101afe5ac  str x8,[x22, #0x18]
7101afe5b0  bl 0x7103393a60
7101afe5b4  add x1,x23,#0x8
7101afe5b8  add x0,sp,#0x28
7101afe5bc  bl 0x710377a120
7101afe5c0  stp x25,xzr,[sp, #0x28]
7101afe5c4  cbz x22,0x7101afe5d0
7101afe5c8  mov x0,x22
7101afe5cc  bl 0x710392eb40
7101afe5d0  ldr x8,[x20, #0x130]
7101afe5d4  ldr x8,[x8]
7101afe5d8  add x0,x8,#0x8
7101afe5dc  adrp x1,0x71042b4000
7101afe5e0  add x1,x1,#0x510
7101afe5e4  add x8,sp,#0x68
7101afe5e8  bl 0x7103776640
7101afe5ec  adrp x1,0x71042a1000
7101afe5f0  add x1,x1,#0xaf1
7101afe5f4  add x8,sp,#0x8
7101afe5f8  add x0,sp,#0x68
7101afe5fc  bl 0x7103776910
7101afe600  ldr x22,[sp, #0x70]
7101afe604  adrp x8,0x710523d000
7101afe608  add x8,x8,#0x988
7101afe60c  stp x8,xzr,[sp, #0x68]
7101afe610  cbz x22,0x7101afe62c
7101afe614  ldr x0,[x22, #0x18]
7101afe618  stp x25,xzr,[x22, #0x10]
7101afe61c  cbz x0,0x7101afe624
7101afe620  bl 0x710392eb40
7101afe624  mov x0,x22
7101afe628  bl 0x710392eb40
7101afe62c  ldr x22,[sp, #0x10]
7101afe630  ldr x23,[x22, #0x10]
7101afe634  cbz x23,0x7101afe6a8
7101afe638  ldr x1,[x23, #0xe0]
7101afe63c  str w19,[x23, #0x25c]
7101afe640  cbz x1,0x7101afe6a8
7101afe644  ldrb w8,[x1]
7101afe648  cmp w8,#0x23
7101afe64c  b.eq 0x7101afe6a8
7101afe650  cmp w8,#0x40
7101afe654  b.eq 0x7101afe6a8
7101afe658  adrp x8,0x710593b000
7101afe65c  ldr x8,[x8, #0xc60]
7101afe660  ldr x0,[x8]
7101afe664  bl 0x71037a4450
7101afe668  ldr w8,[x23, #0x25c]
7101afe66c  mov x24,x0
7101afe670  add x0,sp,#0x68
7101afe674  mov w2,#0x1000
7101afe678  mov w1,wzr
7101afe67c  stur w8,[x29, #-0x48]
7101afe680  bl 0x71039c02a0
7101afe684  add x0,sp,#0x68
7101afe688  sub x2,x29,#0x48
7101afe68c  mov x1,x24
7101afe690  bl 0x71037ae170
7101afe694  mov w2,w0
7101afe698  add x1,sp,#0x68
7101afe69c  mov x0,x23
7101afe6a0  mov w3,wzr
7101afe6a4  bl 0x71037a2270
7101afe6a8  str w19,[x20, #0x1c0]
7101afe6ac  stp x25,xzr,[sp, #0x8]
7101afe6b0  cbz x22,0x7101afe6bc
7101afe6b4  mov x0,x22
7101afe6b8  bl 0x710392eb40
7101afe6bc  stp x25,xzr,[sp, #0x38]
7101afe6c0  cbz x21,0x7101afe6cc
7101afe6c4  mov x0,x21
7101afe6c8  bl 0x710392eb40
7101afe6cc  ldr x0,[sp, #0x60]
7101afe6d0  stp x25,xzr,[sp, #0x58]
7101afe6d4  cbz x0,0x7101afe6dc
7101afe6d8  bl 0x710392eb40
7101afe6dc  add sp,sp,#0x1, LSL #12
7101afe6e0  add sp,sp,#0x70
7101afe6e4  ldp x29,x30,[sp, #0x40]
7101afe6e8  ldp x20,x19,[sp, #0x30]
7101afe6ec  ldp x22,x21,[sp, #0x20]
7101afe6f0  ldp x24,x23,[sp, #0x10]
7101afe6f4  ldp x28,x25,[sp], #0x50
7101afe6f8  ret
7101afe6fc  mov w0,#0x10
7101afe700  mov w1,#0x20
7101afe704  str x25,[sp, #0x18]
7101afe708  bl 0x710392e290
7101afe70c  cbnz x0,0x7101afe754
7101afe710  adrp x8,0x7105332000
7101afe714  ldr x0,[x8, #0xf00]
7101afe718  cbz x0,0x7101afe750
7101afe71c  mov w8,#0x20
7101afe720  str wzr,[sp, #0x8]
7101afe724  add x1,sp,#0x8
7101afe728  str x8,[sp, #0x68]
7101afe72c  ldr x8,[x0]
7101afe730  ldr x8,[x8, #0x30]
7101afe734  add x2,sp,#0x68
7101afe738  blr x8
7101afe73c  tbz w0,#0x0,0x7101afe750
7101afe740  mov w0,#0x10
7101afe744  mov w1,#0x20
7101afe748  bl 0x710392e290
7101afe74c  cbnz x0,0x7101afe754
7101afe750  mov x0,xzr
7101afe754  stp xzr,xzr,[x0, #0x10]
7101afe758  mov x22,x0
7101afe75c  stp xzr,xzr,[x0]
7101afe760  ldr x8,[sp, #0x40]
7101afe764  mov w2,#0x800
7101afe768  mov w1,w19
7101afe76c  add x23,sp,#0x68
7101afe770  str x0,[sp, #0x20]
7101afe774  ldr x9,[x8]
7101afe778  str x9,[x0]
7101afe77c  ldr x8,[x8, #0x8]
7101afe780  str x8,[x0, #0x8]
7101afe784  ldr x21,[sp, #0x40]
7101afe788  ldr x8,[x21, #0x10]
7101afe78c  str x8,[x22, #0x10]
7101afe790  ldr x8,[x21, #0x18]
7101afe794  add x0,sp,#0x68
7101afe798  str x8,[x22, #0x18]
7101afe79c  bl 0x7103393a60
7101afe7a0  add x1,x23,#0x8
7101afe7a4  add x0,sp,#0x18
7101afe7a8  bl 0x710377a120
7101afe7ac  stp x25,xzr,[sp, #0x18]
7101afe7b0  cbnz x22,0x7101afe5c8
7101afe7b4  b 0x7101afe5d0
