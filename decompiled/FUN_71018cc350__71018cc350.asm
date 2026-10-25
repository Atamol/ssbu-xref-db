// addr:      71018cc350
// offset:    0x18cc350
// name:      FUN_71018cc350
// mangled:   
// size:      2064

71018cc350  sub sp,sp,#0x60
71018cc354  str x23,[sp, #0x20]
71018cc358  stp x22,x21,[sp, #0x30]
71018cc35c  stp x20,x19,[sp, #0x40]
71018cc360  stp x29,x30,[sp, #0x50]
71018cc364  add x29,sp,#0x50
71018cc368  mov x20,x0
71018cc36c  mov w1,#0x118
71018cc370  mov w0,#0x10
71018cc374  bl 0x710392e290
71018cc378  mov x19,x0
71018cc37c  cbnz x0,0x71018cc3c8
71018cc380  adrp x8,0x7105332000
71018cc384  ldr x0,[x8, #0xf00]
71018cc388  cbz x0,0x71018cc3c4
71018cc38c  mov w8,#0x118
71018cc390  str wzr,[sp, #0x10]
71018cc394  add x1,sp,#0x10
71018cc398  str x8,[sp, #0x28]
71018cc39c  ldr x8,[x0]
71018cc3a0  ldr x8,[x8, #0x30]
71018cc3a4  add x2,sp,#0x28
71018cc3a8  blr x8
71018cc3ac  tbz w0,#0x0,0x71018cc3c4
71018cc3b0  mov w1,#0x118
71018cc3b4  mov w0,#0x10
71018cc3b8  bl 0x710392e290
71018cc3bc  mov x19,x0
71018cc3c0  cbnz x0,0x71018cc3c8
71018cc3c4  mov x19,xzr
71018cc3c8  mov w8,#0xffffffff
71018cc3cc  mov w0,#0x10
71018cc3d0  mov w1,#0x80
71018cc3d4  stp xzr,xzr,[x19, #0x10]
71018cc3d8  str w8,[x19, #0xe0]
71018cc3dc  stp x19,xzr,[x19]
71018cc3e0  strb wzr,[x19, #0xe4]
71018cc3e4  stp xzr,x8,[x19, #0xd0]
71018cc3e8  stp xzr,xzr,[x19, #0xc0]
71018cc3ec  stp xzr,xzr,[x19, #0xb0]
71018cc3f0  stp xzr,xzr,[x19, #0xa0]
71018cc3f4  stp xzr,xzr,[x19, #0x90]
71018cc3f8  stp xzr,xzr,[x19, #0x80]
71018cc3fc  stp xzr,xzr,[x19, #0x70]
71018cc400  stp xzr,xzr,[x19, #0x60]
71018cc404  stp xzr,xzr,[x19, #0x50]
71018cc408  stp xzr,xzr,[x19, #0x40]
71018cc40c  stp xzr,xzr,[x19, #0x30]
71018cc410  stp xzr,xzr,[x19, #0x20]
71018cc414  bl 0x710392e290
71018cc418  cbnz x0,0x71018cc460
71018cc41c  adrp x8,0x7105332000
71018cc420  ldr x0,[x8, #0xf00]
71018cc424  cbz x0,0x71018cc45c
71018cc428  mov w8,#0x80
71018cc42c  str wzr,[sp, #0x10]
71018cc430  add x1,sp,#0x10
71018cc434  str x8,[sp, #0x28]
71018cc438  ldr x8,[x0]
71018cc43c  ldr x8,[x8, #0x30]
71018cc440  add x2,sp,#0x28
71018cc444  blr x8
71018cc448  tbz w0,#0x0,0x71018cc45c
71018cc44c  mov w0,#0x10
71018cc450  mov w1,#0x80
71018cc454  bl 0x710392e290
71018cc458  cbnz x0,0x71018cc460
71018cc45c  mov x0,xzr
71018cc460  adrp x8,0x7105181000
71018cc464  add x8,x8,#0xb40
71018cc468  str x8,[x0]
71018cc46c  mov x8,x0
71018cc470  mov x9,x0
71018cc474  mov x10,x0
71018cc478  str xzr,[x8, #0x10]!
71018cc47c  str x8,[x0, #0x8]
71018cc480  mov x8,x0
71018cc484  mov w11,#0x2
71018cc488  str xzr,[x9, #0x28]!
71018cc48c  stp xzr,x9,[x0, #0x18]
71018cc490  adrp x9,0x710532f000
71018cc494  str xzr,[x8, #0x40]!
71018cc498  stp xzr,x8,[x0, #0x30]
71018cc49c  adrp x8,0x71018ca000
71018cc4a0  add x8,x8,#0xd20
71018cc4a4  str xzr,[x0, #0x60]
71018cc4a8  adrp x12,0x71018cb000
71018cc4ac  add x12,x12,#0xfb0
71018cc4b0  adrp x13,0x71018cc000
71018cc4b4  add x13,x13,#0x70
71018cc4b8  str xzr,[x10, #0x58]!
71018cc4bc  str w11,[x0, #0x68]
71018cc4c0  str wzr,[x0, #0x78]
71018cc4c4  str xzr,[x0, #0x70]
71018cc4c8  stp xzr,x10,[x0, #0x48]
71018cc4cc  adrp x10,0x71018cb000
71018cc4d0  add x10,x10,#0xc90
71018cc4d4  stp x0,xzr,[x19, #0xe8]
71018cc4d8  ldr x9,[x9, #0x840]
71018cc4dc  ldr x11,[x9, #0x8]
71018cc4e0  ldr x11,[x11, #0xb8]
71018cc4e4  str x11,[x19, #0xf8]
71018cc4e8  ldr x9,[x9, #0x8]
71018cc4ec  ldr x9,[x9, #0xc0]
71018cc4f0  stp x8,xzr,[x19, #0x28]
71018cc4f4  ldrsw x8,[x19, #0xd4]
71018cc4f8  adrp x11,0x71018cc000
71018cc4fc  add x11,x11,#0x1b0
71018cc500  str x9,[x19, #0x100]
71018cc504  adrp x9,0x71018cc000
71018cc508  add x9,x9,#0x260
71018cc50c  cmp w8,#0x13
71018cc510  stp xzr,xzr,[x19, #0x108]
71018cc514  stp x10,xzr,[x19, #0x38]
71018cc518  stp x12,xzr,[x19, #0x48]
71018cc51c  stp x13,xzr,[x19, #0x58]
71018cc520  stp x11,xzr,[x19, #0x68]
71018cc524  stp x9,xzr,[x19, #0x78]
71018cc528  b.cs 0x71018ccb54
71018cc52c  add x8,x19,x8, LSL #0x2
71018cc530  str wzr,[x8, #0x88]
71018cc534  ldr x21,[x20, #0x58]
71018cc538  str x19,[x20, #0x58]
71018cc53c  cbz x21,0x71018cc57c
71018cc540  ldr x0,[x21, #0xf0]
71018cc544  str xzr,[x21, #0xf0]
71018cc548  cbz x0,0x71018cc550
71018cc54c  bl 0x71032cad20
71018cc550  ldr x0,[x21, #0xe8]
71018cc554  bl 0x710323b9e0
71018cc558  ldr x0,[x21, #0xe8]
71018cc55c  str xzr,[x21, #0xe8]
71018cc560  cbz x0,0x71018cc570
71018cc564  ldr x8,[x0]
71018cc568  ldr x8,[x8, #0x8]
71018cc56c  blr x8
71018cc570  mov x0,x21
71018cc574  bl 0x710392eb40
71018cc578  ldr x19,[x20, #0x58]
71018cc57c  mov x21,x19
71018cc580  ldr x0,[x21, #0xe8]!
71018cc584  ldrsw x2,[x0, #0x70]
71018cc588  ldr w3,[x0, #0x68]
71018cc58c  adrp x1,0x7104545000
71018cc590  add x1,x1,#0x610
71018cc594  mov w4,wzr
71018cc598  bl 0x710323beb0
71018cc59c  ldr x0,[x21]
71018cc5a0  mov x22,#0x6117
71018cc5a4  movk x22,#0xd5d0, LSL #16
71018cc5a8  movk x22,#0x1d, LSL #32
71018cc5ac  str x22,[sp, #0x28]
71018cc5b0  ldrsw x2,[x0, #0x70]
71018cc5b4  ldr w3,[x0, #0x68]
71018cc5b8  add x1,sp,#0x28
71018cc5bc  mov w4,#0x1
71018cc5c0  bl 0x710323beb0
71018cc5c4  ldr x0,[x21]
71018cc5c8  mov x23,#0xad60
71018cc5cc  movk x23,#0xf525, LSL #16
71018cc5d0  movk x23,#0x22, LSL #32
71018cc5d4  str x23,[sp, #0x28]
71018cc5d8  ldrsw x2,[x0, #0x70]
71018cc5dc  ldr w3,[x0, #0x68]
71018cc5e0  add x1,sp,#0x28
71018cc5e4  mov w4,#0x1
71018cc5e8  bl 0x710323beb0
71018cc5ec  ldr x0,[x21]
71018cc5f0  ldrsw x2,[x0, #0x70]
71018cc5f4  ldr w3,[x0, #0x68]
71018cc5f8  adrp x20,0x7104545000
71018cc5fc  add x20,x20,#0x618
71018cc600  mov w4,#0x1
71018cc604  mov x1,x20
71018cc608  bl 0x710323beb0
71018cc60c  ldr x0,[x21]
71018cc610  str x22,[sp, #0x28]
71018cc614  ldrsw x2,[x0, #0x70]
71018cc618  ldr w3,[x0, #0x68]
71018cc61c  add x1,sp,#0x28
71018cc620  mov w4,#0x1
71018cc624  bl 0x710323beb0
71018cc628  ldr x0,[x21]
71018cc62c  str x23,[sp, #0x28]
71018cc630  ldrsw x2,[x0, #0x70]
71018cc634  ldr w3,[x0, #0x68]
71018cc638  add x1,sp,#0x28
71018cc63c  mov w4,#0x1
71018cc640  bl 0x710323beb0
71018cc644  ldr x0,[x21]
71018cc648  ldrsw x2,[x0, #0x70]
71018cc64c  ldr w3,[x0, #0x68]
71018cc650  add x1,x20,#0x8
71018cc654  mov w4,#0x1
71018cc658  bl 0x710323beb0
71018cc65c  ldr x20,[x21]
71018cc660  mov x0,x20
71018cc664  bl 0x710323cb80
71018cc668  tbnz w0,#0x0,0x71018cc688
71018cc66c  mov w22,#0x4240
71018cc670  movk w22,#0xf, LSL #16
71018cc674  mov x0,x22
71018cc678  bl 0x71039c0d80
71018cc67c  mov x0,x20
71018cc680  bl 0x710323cb80
71018cc684  tbz w0,#0x0,0x71018cc674
71018cc688  mov w1,#0x88
71018cc68c  mov w0,#0x10
71018cc690  bl 0x710392e290
71018cc694  mov x20,x0
71018cc698  cbnz x0,0x71018cc6e4
71018cc69c  adrp x8,0x7105332000
71018cc6a0  ldr x0,[x8, #0xf00]
71018cc6a4  cbz x0,0x71018cc6e0
71018cc6a8  mov w8,#0x88
71018cc6ac  str wzr,[sp, #0x10]
71018cc6b0  add x1,sp,#0x10
71018cc6b4  str x8,[sp, #0x28]
71018cc6b8  ldr x8,[x0]
71018cc6bc  ldr x8,[x8, #0x30]
71018cc6c0  add x2,sp,#0x28
71018cc6c4  blr x8
71018cc6c8  tbz w0,#0x0,0x71018cc6e0
71018cc6cc  mov w1,#0x88
71018cc6d0  mov w0,#0x10
71018cc6d4  bl 0x710392e290
71018cc6d8  mov x20,x0
71018cc6dc  cbnz x0,0x71018cc6e4
71018cc6e0  mov x20,xzr
71018cc6e4  adrp x8,0x71050af000
71018cc6e8  add x8,x8,#0x188
71018cc6ec  mov w22,#0x1
71018cc6f0  stp x8,xzr,[x20]
71018cc6f4  orr x8,xzr,#0x1ffffffff
71018cc6f8  mov w0,#0x10
71018cc6fc  orr w1,wzr,#0x70
71018cc700  strb wzr,[x20, #0x58]
71018cc704  stp xzr,xzr,[x20, #0x10]
71018cc708  str x21,[x20, #0x78]
71018cc70c  strb w22,[x20, #0x70]
71018cc710  stp xzr,xzr,[x20, #0x48]
71018cc714  stp xzr,x8,[x20, #0x60]
71018cc718  bl 0x710392e290
71018cc71c  cbnz x0,0x71018cc764
71018cc720  adrp x8,0x7105332000
71018cc724  ldr x0,[x8, #0xf00]
71018cc728  cbz x0,0x71018cc760
71018cc72c  orr w8,wzr,#0x70
71018cc730  str wzr,[sp, #0x10]
71018cc734  add x1,sp,#0x10
71018cc738  str x8,[sp, #0x28]
71018cc73c  ldr x8,[x0]
71018cc740  ldr x8,[x8, #0x30]
71018cc744  add x2,sp,#0x28
71018cc748  blr x8
71018cc74c  tbz w0,#0x0,0x71018cc760
71018cc750  mov w0,#0x10
71018cc754  orr w1,wzr,#0x70
71018cc758  bl 0x710392e290
71018cc75c  cbnz x0,0x71018cc764
71018cc760  mov x0,xzr
71018cc764  mov w8,#0x1000
71018cc768  str w8,[x0, #0x8]
71018cc76c  mov x8,x0
71018cc770  stp xzr,xzr,[x0, #0x18]
71018cc774  mov x3,#0xda84
71018cc778  movk x3,#0x7df6, LSL #16
71018cc77c  str xzr,[x0, #0x10]
71018cc780  adrp x2,0x71050af000
71018cc784  add x2,x2,#0x168
71018cc788  movk x3,#0x28, LSL #32
71018cc78c  mov w4,#0x1
71018cc790  str xzr,[x8, #0x30]!
71018cc794  str x8,[x0, #0x28]
71018cc798  adrp x8,0x71050af000
71018cc79c  add x8,x8,#0xe0
71018cc7a0  str x8,[x0]
71018cc7a4  mov x8,#0x100000001
71018cc7a8  mov x1,x21
71018cc7ac  stp xzr,xzr,[x0, #0x38]
71018cc7b0  strb wzr,[x0, #0x48]
71018cc7b4  stur x8,[x0, #0x4c]
71018cc7b8  str w22,[x0, #0x54]
71018cc7bc  str xzr,[x0, #0x58]
71018cc7c0  stp xzr,xzr,[x0, #0x60]
71018cc7c4  str x0,[x20, #0x80]
71018cc7c8  bl 0x71032cb040
71018cc7cc  ldr x0,[x20, #0x80]
71018cc7d0  ldr x8,[x0]
71018cc7d4  ldr x8,[x8, #0x8]
71018cc7d8  mov w1,wzr
71018cc7dc  blr x8
71018cc7e0  ldr x22,[x20, #0x80]
71018cc7e4  ldr x8,[x22, #0x40]
71018cc7e8  cbz x8,0x71018ccac0
71018cc7ec  ldr x8,[x8]
71018cc7f0  cbz x8,0x71018cc7fc
71018cc7f4  ldr x0,[x8]
71018cc7f8  b 0x71018cc800
71018cc7fc  mov x0,xzr
71018cc800  mov x8,x22
71018cc804  ldr x9,[x8, #0x10]!
71018cc808  ldr x10,[x8, #0x8]
71018cc80c  cmp x10,x9
71018cc810  b.eq 0x71018ccb58
71018cc814  ldr x8,[x9]
71018cc818  ldr x2,[x8]
71018cc81c  adrp x1,0x7104270000
71018cc820  add x1,x1,#0x556
71018cc824  bl 0x71033743c0
71018cc828  ldr x21,[x22, #0x40]
71018cc82c  mov w1,#0x28
71018cc830  mov w0,#0x10
71018cc834  bl 0x710392e290
71018cc838  cbnz x0,0x71018cc880
71018cc83c  adrp x8,0x7105332000
71018cc840  ldr x0,[x8, #0xf00]
71018cc844  cbz x0,0x71018cc87c
71018cc848  mov w8,#0x28
71018cc84c  str wzr,[sp, #0x10]
71018cc850  add x1,sp,#0x10
71018cc854  str x8,[sp, #0x28]
71018cc858  ldr x8,[x0]
71018cc85c  ldr x8,[x8, #0x30]
71018cc860  add x2,sp,#0x28
71018cc864  blr x8
71018cc868  tbz w0,#0x0,0x71018cc87c
71018cc86c  mov w1,#0x28
71018cc870  mov w0,#0x10
71018cc874  bl 0x710392e290
71018cc878  cbnz x0,0x71018cc880
71018cc87c  mov x0,xzr
71018cc880  adrp x23,0x71050af000
71018cc884  add x23,x23,#0x128
71018cc888  adrp x8,0x7101d40000
71018cc88c  add x8,x8,#0x460
71018cc890  str x23,[x0]
71018cc894  str xzr,[x0, #0x20]
71018cc898  stp x22,x8,[x0, #0x10]
71018cc89c  adrp x1,0x7104319000
71018cc8a0  add x1,x1,#0x1dd
71018cc8a4  str wzr,[x0, #0x8]
71018cc8a8  add x2,sp,#0x10
71018cc8ac  str x0,[sp, #0x10]
71018cc8b0  mov x0,x21
71018cc8b4  bl 0x7103376af0
71018cc8b8  ldr x0,[sp, #0x10]
71018cc8bc  str xzr,[sp, #0x10]
71018cc8c0  cbz x0,0x71018cc8d0
71018cc8c4  ldr x8,[x0]
71018cc8c8  ldr x8,[x8, #0x8]
71018cc8cc  blr x8
71018cc8d0  ldr x21,[x22, #0x40]
71018cc8d4  mov w1,#0x28
71018cc8d8  mov w0,#0x10
71018cc8dc  bl 0x710392e290
71018cc8e0  cbnz x0,0x71018cc928
71018cc8e4  adrp x8,0x7105332000
71018cc8e8  ldr x0,[x8, #0xf00]
71018cc8ec  cbz x0,0x71018cc924
71018cc8f0  mov w8,#0x28
71018cc8f4  str wzr,[sp, #0x8]
71018cc8f8  add x1,sp,#0x8
71018cc8fc  str x8,[sp, #0x28]
71018cc900  ldr x8,[x0]
71018cc904  ldr x8,[x8, #0x30]
71018cc908  add x2,sp,#0x28
71018cc90c  blr x8
71018cc910  tbz w0,#0x0,0x71018cc924
71018cc914  mov w1,#0x28
71018cc918  mov w0,#0x10
71018cc91c  bl 0x710392e290
71018cc920  cbnz x0,0x71018cc928
71018cc924  mov x0,xzr
71018cc928  adrp x8,0x7101d40000
71018cc92c  add x8,x8,#0x780
71018cc930  str x23,[x0]
71018cc934  stp x22,x8,[x0, #0x10]
71018cc938  adrp x1,0x710438c000
71018cc93c  add x1,x1,#0xdc8
71018cc940  str xzr,[x0, #0x20]
71018cc944  add x2,sp,#0x8
71018cc948  str wzr,[x0, #0x8]
71018cc94c  str x0,[sp, #0x8]
71018cc950  mov x0,x21
71018cc954  bl 0x7103376af0
71018cc958  ldr x0,[sp, #0x8]
71018cc95c  str xzr,[sp, #0x8]
71018cc960  cbz x0,0x71018cc970
71018cc964  ldr x8,[x0]
71018cc968  ldr x8,[x8, #0x8]
71018cc96c  blr x8
71018cc970  ldr x21,[x22, #0x40]
71018cc974  mov w0,#0x10
71018cc978  orr w1,wzr,#0x38
71018cc97c  bl 0x710392e290
71018cc980  cbnz x0,0x71018cc9c8
71018cc984  adrp x8,0x7105332000
71018cc988  ldr x0,[x8, #0xf00]
71018cc98c  cbz x0,0x71018cc9c4
71018cc990  orr w8,wzr,#0x38
71018cc994  str wzr,[sp]
71018cc998  mov x1,sp
71018cc99c  str x8,[sp, #0x28]
71018cc9a0  ldr x8,[x0]
71018cc9a4  ldr x8,[x8, #0x30]
71018cc9a8  add x2,sp,#0x28
71018cc9ac  blr x8
71018cc9b0  tbz w0,#0x0,0x71018cc9c4
71018cc9b4  mov w0,#0x10
71018cc9b8  orr w1,wzr,#0x38
71018cc9bc  bl 0x710392e290
71018cc9c0  cbnz x0,0x71018cc9c8
71018cc9c4  mov x0,xzr
71018cc9c8  adrp x8,0x71050af000
71018cc9cc  add x8,x8,#0x150
71018cc9d0  adrp x9,0x7101d40000
71018cc9d4  add x9,x9,#0x7b0
71018cc9d8  str x8,[x0]
71018cc9dc  mov w8,#0x1
71018cc9e0  stp x22,xzr,[x0, #0x10]
71018cc9e4  str xzr,[x0, #0x30]
71018cc9e8  stp xzr,x9,[x0, #0x20]
71018cc9ec  adrp x1,0x71043ad000
71018cc9f0  add x1,x1,#0xa54
71018cc9f4  mov x2,sp
71018cc9f8  str w8,[x0, #0x8]
71018cc9fc  str x0,[sp]
71018cca00  mov x0,x21
71018cca04  bl 0x7103376af0
71018cca08  ldr x0,[sp]
71018cca0c  str xzr,[sp]
71018cca10  cbz x0,0x71018cca20
71018cca14  ldr x8,[x0]
71018cca18  ldr x8,[x8, #0x8]
71018cca1c  blr x8
71018cca20  ldr x21,[x22, #0x40]
71018cca24  mov w1,#0x28
71018cca28  mov w0,#0x10
71018cca2c  bl 0x710392e290
71018cca30  cbnz x0,0x71018cca78
71018cca34  adrp x8,0x7105332000
71018cca38  ldr x0,[x8, #0xf00]
71018cca3c  cbz x0,0x71018cca74
71018cca40  mov w8,#0x28
71018cca44  str wzr,[sp, #0x1c]
71018cca48  add x1,sp,#0x1c
71018cca4c  str x8,[sp, #0x28]
71018cca50  ldr x8,[x0]
71018cca54  ldr x8,[x8, #0x30]
71018cca58  add x2,sp,#0x28
71018cca5c  blr x8
71018cca60  tbz w0,#0x0,0x71018cca74
71018cca64  mov w1,#0x28
71018cca68  mov w0,#0x10
71018cca6c  bl 0x710392e290
71018cca70  cbnz x0,0x71018cca78
71018cca74  mov x0,xzr
71018cca78  adrp x8,0x7101d40000
71018cca7c  add x8,x8,#0x7c0
71018cca80  str x23,[x0]
71018cca84  stp x22,x8,[x0, #0x10]
71018cca88  adrp x1,0x7104454000
71018cca8c  add x1,x1,#0xd45
71018cca90  str xzr,[x0, #0x20]
71018cca94  add x2,sp,#0x28
71018cca98  str wzr,[x0, #0x8]
71018cca9c  str x0,[sp, #0x28]
71018ccaa0  mov x0,x21
71018ccaa4  bl 0x7103376af0
71018ccaa8  ldr x0,[sp, #0x28]
71018ccaac  str xzr,[sp, #0x28]
71018ccab0  cbz x0,0x71018ccac0
71018ccab4  ldr x8,[x0]
71018ccab8  ldr x8,[x8, #0x8]
71018ccabc  blr x8
71018ccac0  adrp x8,0x7105333000
71018ccac4  add x8,x8,#0x600
71018ccac8  str x8,[x20, #0x10]
71018ccacc  ldp w9,w8,[x8, #0x60]
71018ccad0  stp w9,w8,[x20, #0x68]
71018ccad4  adrp x8,0x7105333000
71018ccad8  add x8,x8,#0x650
71018ccadc  mov w9,#0x1
71018ccae0  ldaxrb w10,[x8]
71018ccae4  stxrb w11,w9,[x8]
71018ccae8  and w10,w10,#0x1
71018ccaec  cmp w11,#0x0
71018ccaf0  ccmp w10,#0x0,#0x0,eq
71018ccaf4  b.ne 0x71018ccae0
71018ccaf8  adrp x8,0x7105333000
71018ccafc  add x8,x8,#0x648
71018ccb00  ldr x9,[x8]
71018ccb04  str x9,[x20, #0x48]
71018ccb08  mov x0,x20
71018ccb0c  str x20,[x8], #0x8
71018ccb10  stlrb wzr,[x8]
71018ccb14  bl 0x71032caea0
71018ccb18  ldr x0,[x19, #0xf0]
71018ccb1c  str x20,[x19, #0xf0]
71018ccb20  cbz x0,0x71018ccb3c
71018ccb24  ldp x29,x30,[sp, #0x50]
71018ccb28  ldr x23,[sp, #0x20]
71018ccb2c  ldp x20,x19,[sp, #0x40]
71018ccb30  ldp x22,x21,[sp, #0x30]
71018ccb34  add sp,sp,#0x60
71018ccb38  b 0x71032cad20
71018ccb3c  ldp x29,x30,[sp, #0x50]
71018ccb40  ldr x23,[sp, #0x20]
71018ccb44  ldp x20,x19,[sp, #0x40]
71018ccb48  ldp x22,x21,[sp, #0x30]
71018ccb4c  add sp,sp,#0x60
71018ccb50  ret
71018ccb54  bl 0x71039c2650
71018ccb58  mov x0,x8
71018ccb5c  bl 0x71039c1330
