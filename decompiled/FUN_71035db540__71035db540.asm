// addr:      71035db540
// offset:    0x35db540
// name:      FUN_71035db540
// mangled:   
// size:      2872

71035db540  sub sp,sp,#0x50
71035db544  stp x22,x21,[sp, #0x20]
71035db548  stp x20,x19,[sp, #0x30]
71035db54c  stp x29,x30,[sp, #0x40]
71035db550  add x29,sp,#0x40
71035db554  adrp x9,0x7105337000
71035db558  add x9,x9,#0x230
71035db55c  ldarb w9,[x9]
71035db560  mov w8,w1
71035db564  mov x19,x0
71035db568  tbz w9,#0x0,0x71035db5a0
71035db56c  adrp x9,0x7105337000
71035db570  add x9,x9,#0x238
71035db574  ldarb w9,[x9]
71035db578  tbz w9,#0x0,0x71035db760
71035db57c  adrp x9,0x7105337000
71035db580  add x9,x9,#0x240
71035db584  ldarb w9,[x9]
71035db588  tbz w9,#0x0,0x71035db924
71035db58c  mov w9,#0x7650000
71035db590  tbz w4,#0x0,0x71035dbe24
71035db594  adrp x1,0x7105336000
71035db598  add x1,x1,#0xfd0
71035db59c  b 0x71035dbe94
71035db5a0  adrp x0,0x7105337000
71035db5a4  add x0,x0,#0x230
71035db5a8  str w3,[sp, #0xc]
71035db5ac  mov w21,w4
71035db5b0  mov w22,w2
71035db5b4  mov w20,w8
71035db5b8  bl 0x71039c06b0
71035db5bc  ldr w3,[sp, #0xc]
71035db5c0  mov w8,w20
71035db5c4  mov w2,w22
71035db5c8  mov w4,w21
71035db5cc  cbz w0,0x71035db56c
71035db5d0  adrp x8,0x7105337000
71035db5d4  add x8,x8,#0x168
71035db5d8  mov w11,#0x5f4e
71035db5dc  movk w11,#0x30, LSL #16
71035db5e0  stp xzr,xzr,[x8]
71035db5e4  stur w11,[x8, #0x9]
71035db5e8  adrp x11,0x71042e5000
71035db5ec  add x11,x11,#0xae4
71035db5f0  ldr x11,[x11]
71035db5f4  stp xzr,xzr,[x8, #0x30]
71035db5f8  stur x11,[x8, #0x31]
71035db5fc  mov w11,#0x33
71035db600  adrp x10,0x7104317000
71035db604  add x10,x10,#0x811
71035db608  stp xzr,xzr,[x8, #0x50]
71035db60c  ldr x10,[x10]
71035db610  mov w9,#0x16
71035db614  adrp x0,0x7100442000
71035db618  add x0,x0,#0x960
71035db61c  strb w11,[x8, #0x53]
71035db620  adrp x11,0x710425d000
71035db624  add x11,x11,#0xc86
71035db628  ldr x11,[x11]
71035db62c  stur x10,[x8, #0x1]
71035db630  stp xzr,xzr,[x8, #0x40]
71035db634  adrp x10,0x7104317000
71035db638  add x10,x10,#0x832
71035db63c  ldr x10,[x10]
71035db640  adrp x2,0x7104f17000
71035db644  add x2,x2,#0x0
71035db648  stp xzr,xzr,[x8, #0x60]
71035db64c  mov x1,xzr
71035db650  stur x11,[x8, #0x49]
71035db654  mov w11,#0x34
71035db658  strb w11,[x8, #0x6b]
71035db65c  adrp x11,0x710438b000
71035db660  add x11,x11,#0x3f9
71035db664  ldr x11,[x11]
71035db668  stur x11,[x8, #0x61]
71035db66c  mov w11,#0x35
71035db670  stp xzr,xzr,[x8, #0x80]
71035db674  strb wzr,[x8, #0x84]
71035db678  strb w11,[x8, #0x83]
71035db67c  adrp x11,0x710425d000
71035db680  add x11,x11,#0xc92
71035db684  ldr x11,[x11]
71035db688  strb w9,[x8]
71035db68c  strb w9,[x8, #0x30]
71035db690  strb w9,[x8, #0x48]
71035db694  strb w9,[x8, #0x60]
71035db698  strb wzr,[x8, #0x3c]
71035db69c  strb wzr,[x8, #0x54]
71035db6a0  strb wzr,[x8, #0x6c]
71035db6a4  stp xzr,xzr,[x8, #0x10]
71035db6a8  strb w9,[x8, #0x18]
71035db6ac  stp xzr,xzr,[x8, #0x70]
71035db6b0  strb w9,[x8, #0x78]
71035db6b4  stur x11,[x8, #0x79]
71035db6b8  mov w11,#0x36
71035db6bc  stp xzr,xzr,[x8, #0x90]
71035db6c0  strb w9,[x8, #0x90]
71035db6c4  strb w11,[x8, #0x9b]
71035db6c8  adrp x11,0x7104442000
71035db6cc  add x11,x11,#0x283
71035db6d0  ldr x11,[x11]
71035db6d4  stur x11,[x8, #0x91]
71035db6d8  strb wzr,[x8, #0x9c]
71035db6dc  stp xzr,xzr,[x8, #0xa0]
71035db6e0  strb w9,[x8, #0xa8]
71035db6e4  mov w9,#0x37
71035db6e8  stp xzr,xzr,[x8, #0xb0]
71035db6ec  strb w9,[x8, #0xb3]
71035db6f0  adrp x9,0x7104411000
71035db6f4  add x9,x9,#0x78
71035db6f8  ldr x9,[x9]
71035db6fc  stur x9,[x8, #0xa9]
71035db700  strb wzr,[x8, #0xb4]
71035db704  stp xzr,xzr,[x8, #0x20]
71035db708  stur x10,[x8, #0x19]
71035db70c  mov w10,#0x5f4e
71035db710  movk w10,#0x31, LSL #16
71035db714  stur w10,[x8, #0x21]
71035db718  mov w10,#0x32
71035db71c  strb w10,[x8, #0x3b]
71035db720  mov w10,#0x5f4e
71035db724  sturh w10,[x8, #0x39]
71035db728  sturh w10,[x8, #0x51]
71035db72c  sturh w10,[x8, #0x69]
71035db730  sturh w10,[x8, #0x81]
71035db734  sturh w10,[x8, #0x99]
71035db738  sturh w10,[x8, #0xb1]
71035db73c  bl 0x71000001c0
71035db740  adrp x0,0x7105337000
71035db744  add x0,x0,#0x230
71035db748  bl 0x71039c06c0
71035db74c  ldr w3,[sp, #0xc]
71035db750  mov w8,w20
71035db754  mov w2,w22
71035db758  mov w4,w21
71035db75c  b 0x71035db56c
71035db760  adrp x0,0x7105337000
71035db764  add x0,x0,#0x238
71035db768  str w3,[sp, #0xc]
71035db76c  mov w21,w4
71035db770  mov w22,w2
71035db774  mov w20,w8
71035db778  bl 0x71039c06b0
71035db77c  ldr w3,[sp, #0xc]
71035db780  mov w8,w20
71035db784  mov w2,w22
71035db788  mov w4,w21
71035db78c  cbz w0,0x71035db57c
71035db790  adrp x8,0x7105337000
71035db794  add x8,x8,#0xa8
71035db798  mov w10,#0x4550
71035db79c  movk w10,#0x305f, LSL #16
71035db7a0  stp xzr,xzr,[x8]
71035db7a4  stur w10,[x8, #0x9]
71035db7a8  adrp x10,0x71043de000
71035db7ac  add x10,x10,#0x9f0
71035db7b0  ldr x10,[x10]
71035db7b4  stur x10,[x8, #0x1]
71035db7b8  mov w10,#0x4550
71035db7bc  movk w10,#0x315f, LSL #16
71035db7c0  stp xzr,xzr,[x8, #0x20]
71035db7c4  stur w10,[x8, #0x21]
71035db7c8  adrp x10,0x71042f6000
71035db7cc  add x10,x10,#0x661
71035db7d0  stp xzr,xzr,[x8, #0x10]
71035db7d4  ldr x10,[x10]
71035db7d8  stp xzr,xzr,[x8, #0x30]
71035db7dc  orr w9,wzr,#0x18
71035db7e0  adrp x0,0x7100442000
71035db7e4  add x0,x0,#0xb00
71035db7e8  adrp x2,0x7104f17000
71035db7ec  add x2,x2,#0x0
71035db7f0  mov x1,xzr
71035db7f4  stur x10,[x8, #0x19]
71035db7f8  mov w10,#0x4550
71035db7fc  movk w10,#0x325f, LSL #16
71035db800  stur w10,[x8, #0x39]
71035db804  adrp x10,0x71043cd000
71035db808  add x10,x10,#0xe31
71035db80c  ldr x10,[x10]
71035db810  stp xzr,xzr,[x8, #0x50]
71035db814  strb wzr,[x8, #0x55]
71035db818  stur x10,[x8, #0x31]
71035db81c  mov w10,#0x4550
71035db820  movk w10,#0x335f, LSL #16
71035db824  stp xzr,xzr,[x8, #0x40]
71035db828  strb w9,[x8, #0x48]
71035db82c  stur w10,[x8, #0x51]
71035db830  adrp x10,0x7104290000
71035db834  add x10,x10,#0x319
71035db838  ldr x10,[x10]
71035db83c  stur x10,[x8, #0x49]
71035db840  mov w10,#0x4550
71035db844  movk w10,#0x345f, LSL #16
71035db848  stp xzr,xzr,[x8, #0x60]
71035db84c  strb w9,[x8, #0x60]
71035db850  stur w10,[x8, #0x69]
71035db854  adrp x10,0x7104290000
71035db858  add x10,x10,#0x326
71035db85c  ldr x10,[x10]
71035db860  stur x10,[x8, #0x61]
71035db864  mov w10,#0x4550
71035db868  movk w10,#0x355f, LSL #16
71035db86c  strb w9,[x8]
71035db870  stp xzr,xzr,[x8, #0x80]
71035db874  strb wzr,[x8, #0x85]
71035db878  stp xzr,xzr,[x8, #0x70]
71035db87c  strb w9,[x8, #0x78]
71035db880  stur w10,[x8, #0x81]
71035db884  adrp x10,0x710437b000
71035db888  add x10,x10,#0x58
71035db88c  ldr x10,[x10]
71035db890  strb w9,[x8, #0x18]
71035db894  strb w9,[x8, #0x30]
71035db898  strb wzr,[x8, #0xd]
71035db89c  strb wzr,[x8, #0x6d]
71035db8a0  stur x10,[x8, #0x79]
71035db8a4  mov w10,#0x4550
71035db8a8  movk w10,#0x365f, LSL #16
71035db8ac  strb wzr,[x8, #0x25]
71035db8b0  strb wzr,[x8, #0x3d]
71035db8b4  stp xzr,xzr,[x8, #0x90]
71035db8b8  strb w9,[x8, #0x90]
71035db8bc  stur w10,[x8, #0x99]
71035db8c0  adrp x10,0x7104328000
71035db8c4  add x10,x10,#0x8ce
71035db8c8  ldr x10,[x10]
71035db8cc  stur x10,[x8, #0x91]
71035db8d0  strb wzr,[x8, #0x9d]
71035db8d4  stp xzr,xzr,[x8, #0xa0]
71035db8d8  strb w9,[x8, #0xa8]
71035db8dc  mov w9,#0x4550
71035db8e0  movk w9,#0x375f, LSL #16
71035db8e4  stp xzr,xzr,[x8, #0xb0]
71035db8e8  stur w9,[x8, #0xb1]
71035db8ec  adrp x9,0x7104431000
71035db8f0  add x9,x9,#0xa6d
71035db8f4  ldr x9,[x9]
71035db8f8  stur x9,[x8, #0xa9]
71035db8fc  strb wzr,[x8, #0xb5]
71035db900  bl 0x71000001c0
71035db904  adrp x0,0x7105337000
71035db908  add x0,x0,#0x238
71035db90c  bl 0x71039c06c0
71035db910  ldr w3,[sp, #0xc]
71035db914  mov w8,w20
71035db918  mov w2,w22
71035db91c  mov w4,w21
71035db920  b 0x71035db57c
71035db924  adrp x0,0x7105337000
71035db928  add x0,x0,#0x240
71035db92c  stp w4,w3,[sp, #0x8]
71035db930  stp w8,w2,[sp]
71035db934  bl 0x71039c06b0
71035db938  ldp w8,w2,[sp]
71035db93c  ldp w4,w3,[sp, #0x8]
71035db940  cbz w0,0x71035db58c
71035db944  adrp x9,0x71043cd000
71035db948  add x9,x9,#0xdbb
71035db94c  adrp x8,0x7105336000
71035db950  add x8,x8,#0xe80
71035db954  ldp x11,x9,[x9]
71035db958  stp xzr,xzr,[x8]
71035db95c  str xzr,[x8, #0x90]
71035db960  stp xzr,xzr,[x8, #0x10]
71035db964  mov w10,#0x20
71035db968  stp xzr,xzr,[x8, #0x20]
71035db96c  mov w22,#0x24
71035db970  add x0,sp,#0x10
71035db974  mov w1,#0x10
71035db978  mov w2,#0x20
71035db97c  stur x9,[x8, #0x9]
71035db980  adrp x9,0x71043cd000
71035db984  add x9,x9,#0xdcc
71035db988  stur x11,[x8, #0x1]
71035db98c  ldp x11,x9,[x9]
71035db990  stur x9,[x8, #0x21]
71035db994  adrp x9,0x7104359000
71035db998  add x9,x9,#0xc6c
71035db99c  strb w10,[x8]
71035db9a0  strb w10,[x8, #0x18]
71035db9a4  strb wzr,[x8, #0x11]
71035db9a8  stur x11,[x8, #0x19]
71035db9ac  strb wzr,[x8, #0x29]
71035db9b0  stp xzr,xzr,[x8, #0x30]
71035db9b4  strb w10,[x8, #0x30]
71035db9b8  ldp x10,x9,[x9]
71035db9bc  stur x10,[x8, #0x31]
71035db9c0  adrp x10,0x71043ac000
71035db9c4  add x10,x10,#0x250
71035db9c8  stp xzr,xzr,[x8, #0x40]
71035db9cc  stur x9,[x8, #0x39]
71035db9d0  orr w9,wzr,#0x1e
71035db9d4  strb w9,[x8, #0x48]
71035db9d8  ldr x9,[x10]
71035db9dc  ldur x10,[x10, #0x7]
71035db9e0  strb wzr,[x8, #0x41]
71035db9e4  stp xzr,xzr,[x8, #0x50]
71035db9e8  strb wzr,[x8, #0x58]
71035db9ec  str x10,[x8, #0x50]
71035db9f0  mov w10,#0x465f
71035db9f4  stur x9,[x8, #0x49]
71035db9f8  adrp x9,0x7104359000
71035db9fc  add x9,x9,#0xd58
71035dba00  stp xzr,xzr,[x8, #0x70]
71035dba04  strb wzr,[x8, #0x73]
71035dba08  sturh w10,[x8, #0x71]
71035dba0c  ldp x10,x9,[x9]
71035dba10  strb w22,[x8, #0x78]
71035dba14  stp xzr,xzr,[x8, #0x60]
71035dba18  strb w22,[x8, #0x60]
71035dba1c  stur x9,[x8, #0x69]
71035dba20  mov w9,#0x4d5f
71035dba24  stur x10,[x8, #0x61]
71035dba28  adrp x10,0x71043bc000
71035dba2c  add x10,x10,#0xf98
71035dba30  stp xzr,xzr,[x8, #0x80]
71035dba34  strb wzr,[x8, #0x8b]
71035dba38  sturh w9,[x8, #0x89]
71035dba3c  ldp x9,x10,[x10]
71035dba40  stur x10,[x8, #0x81]
71035dba44  stur x9,[x8, #0x79]
71035dba48  stp xzr,xzr,[x8, #0x98]
71035dba4c  bl 0x710392e1f0
71035dba50  cmp w0,#0xc
71035dba54  b.ne 0x71035dba90
71035dba58  adrp x8,0x710593d000
71035dba5c  ldr x0,[x8, #0x2b0]
71035dba60  cbz x0,0x71035dba90
71035dba64  mov w8,#0x20
71035dba68  str x8,[sp, #0x18]
71035dba6c  ldr x8,[x0]
71035dba70  ldr x8,[x8, #0x30]
71035dba74  add x1,sp,#0x18
71035dba78  blr x8
71035dba7c  tbz w0,#0x0,0x71035dba90
71035dba80  add x0,sp,#0x10
71035dba84  mov w1,#0x10
71035dba88  mov w2,#0x20
71035dba8c  bl 0x710392e1f0
71035dba90  adrp x21,0x71052a8000
71035dba94  ldr x21,[x21, #0xa78]
71035dba98  cbz x21,0x71035dbaac
71035dba9c  ldr x2,[sp, #0x10]
71035dbaa0  mov w0,#0x20
71035dbaa4  mov w1,#0x10
71035dbaa8  bl 0x71039c19e0
71035dbaac  adrp x8,0x7105336000
71035dbab0  add x8,x8,#0xf10
71035dbab4  mov w9,#0x21
71035dbab8  mov w10,#0x19
71035dbabc  stp x9,x10,[x8]
71035dbac0  ldr x9,[sp, #0x10]
71035dbac4  mov w10,#0x57
71035dbac8  str x9,[x8, #0x10]
71035dbacc  strb w10,[x9, #0x18]
71035dbad0  adrp x10,0x71042e5000
71035dbad4  add x10,x10,#0xaca
71035dbad8  ldr x11,[x10, #0x10]
71035dbadc  str x11,[x9, #0x10]
71035dbae0  mov w12,#0x20
71035dbae4  ldp x11,x10,[x10]
71035dbae8  strb wzr,[x9, #0x19]
71035dbaec  stp x11,x10,[x9]
71035dbaf0  adrp x9,0x7104431000
71035dbaf4  add x9,x9,#0x9d8
71035dbaf8  ldp x10,x9,[x9]
71035dbafc  stp xzr,xzr,[x8, #0x18]
71035dbb00  stur x10,[x8, #0x19]
71035dbb04  stp xzr,xzr,[x8, #0x58]
71035dbb08  mov w11,#0x5443
71035dbb0c  stp xzr,xzr,[x8, #0x68]
71035dbb10  stur x10,[x8, #0x61]
71035dbb14  mov w10,#0x54
71035dbb18  stp xzr,xzr,[x8, #0x28]
71035dbb1c  strb w12,[x8, #0x30]
71035dbb20  adrp x12,0x71042a1000
71035dbb24  add x12,x12,#0x952
71035dbb28  stp xzr,xzr,[x8, #0x88]
71035dbb2c  strb wzr,[x8, #0x8a]
71035dbb30  ldp x13,x12,[x12]
71035dbb34  mov w20,#0x2a
71035dbb38  add x0,sp,#0x10
71035dbb3c  mov w1,#0x10
71035dbb40  mov w2,#0x20
71035dbb44  sturh w11,[x8, #0x71]
71035dbb48  stur x9,[x8, #0x69]
71035dbb4c  strb w22,[x8, #0x18]
71035dbb50  strb w22,[x8, #0x60]
71035dbb54  mov w22,#0x1a
71035dbb58  strb wzr,[x8, #0x5e]
71035dbb5c  strb wzr,[x8, #0x73]
71035dbb60  strb w10,[x8, #0x89]
71035dbb64  adrp x10,0x7104338000
71035dbb68  add x10,x10,#0xbfe
71035dbb6c  sturh w11,[x8, #0x29]
71035dbb70  stur x9,[x8, #0x21]
71035dbb74  ldp x11,x10,[x10]
71035dbb78  mov w9,#0x22
71035dbb7c  strb w9,[x8, #0x90]
71035dbb80  strb wzr,[x8, #0x2b]
71035dbb84  stp xzr,xzr,[x8, #0x78]
71035dbb88  strb w9,[x8, #0x78]
71035dbb8c  mov w9,#0x47
71035dbb90  stur x10,[x8, #0x81]
71035dbb94  stur x11,[x8, #0x79]
71035dbb98  mov w11,#0x4f52
71035dbb9c  stp xzr,xzr,[x8, #0x98]
71035dbba0  strb w9,[x8, #0xa1]
71035dbba4  adrp x9,0x7104442000
71035dbba8  add x9,x9,#0x25b
71035dbbac  ldp x10,x9,[x9]
71035dbbb0  stur x9,[x8, #0x99]
71035dbbb4  adrp x9,0x71043ff000
71035dbbb8  add x9,x9,#0xd52
71035dbbbc  stur x10,[x8, #0x91]
71035dbbc0  ldr x10,[x9]
71035dbbc4  ldur x9,[x9, #0x5]
71035dbbc8  strb wzr,[x8, #0xa2]
71035dbbcc  stp xzr,xzr,[x8, #0x38]
71035dbbd0  stur x12,[x8, #0x39]
71035dbbd4  adrp x12,0x7104442000
71035dbbd8  add x12,x12,#0x26d
71035dbbdc  stur x13,[x8, #0x31]
71035dbbe0  ldp x13,x14,[x12]
71035dbbe4  ldur x12,[x12, #0xd]
71035dbbe8  strb wzr,[x8, #0x41]
71035dbbec  stp xzr,xzr,[x8, #0x48]
71035dbbf0  stur x12,[x8, #0x56]
71035dbbf4  adrp x12,0x710437b000
71035dbbf8  add x12,x12,#0x65
71035dbbfc  ldr x12,[x12]
71035dbc00  strb w20,[x8, #0x48]
71035dbc04  stur x14,[x8, #0x51]
71035dbc08  stur x13,[x8, #0x49]
71035dbc0c  stp xzr,xzr,[x8, #0xa8]
71035dbc10  stur x9,[x8, #0xae]
71035dbc14  mov w9,#0x16
71035dbc18  stur x10,[x8, #0xa9]
71035dbc1c  mov w10,#0x52
71035dbc20  strb w22,[x8, #0xa8]
71035dbc24  strb wzr,[x8, #0xb6]
71035dbc28  stp xzr,xzr,[x8, #0xb8]
71035dbc2c  strb w9,[x8, #0xc0]
71035dbc30  stp xzr,xzr,[x8, #0xc8]
71035dbc34  strb w10,[x8, #0xcb]
71035dbc38  sturh w11,[x8, #0xc9]
71035dbc3c  stur x12,[x8, #0xc1]
71035dbc40  strb wzr,[x8, #0xcc]
71035dbc44  stp xzr,xzr,[x8, #0xd8]
71035dbc48  strb w9,[x8, #0xd8]
71035dbc4c  strb w10,[x8, #0xe3]
71035dbc50  sturh w11,[x8, #0xe1]
71035dbc54  stur x12,[x8, #0xd9]
71035dbc58  strb wzr,[x8, #0xe4]
71035dbc5c  stp xzr,xzr,[x8, #0xf8]
71035dbc60  stp xzr,xzr,[x8, #0xe8]
71035dbc64  bl 0x710392e1f0
71035dbc68  cmp w0,#0xc
71035dbc6c  b.ne 0x71035dbca8
71035dbc70  adrp x8,0x710593d000
71035dbc74  ldr x0,[x8, #0x2b0]
71035dbc78  cbz x0,0x71035dbca8
71035dbc7c  mov w8,#0x20
71035dbc80  str x8,[sp, #0x18]
71035dbc84  ldr x8,[x0]
71035dbc88  ldr x8,[x8, #0x30]
71035dbc8c  add x1,sp,#0x18
71035dbc90  blr x8
71035dbc94  tbz w0,#0x0,0x71035dbca8
71035dbc98  add x0,sp,#0x10
71035dbc9c  mov w1,#0x10
71035dbca0  mov w2,#0x20
71035dbca4  bl 0x710392e1f0
71035dbca8  cbz x21,0x71035dbcbc
71035dbcac  ldr x2,[sp, #0x10]
71035dbcb0  mov w0,#0x20
71035dbcb4  mov w1,#0x10
71035dbcb8  bl 0x71039c19e0
71035dbcbc  adrp x8,0x7105337000
71035dbcc0  add x8,x8,#0x0
71035dbcc4  mov w9,#0x21
71035dbcc8  orr w10,wzr,#0x18
71035dbccc  stp x9,x10,[x8]
71035dbcd0  ldr x9,[sp, #0x10]
71035dbcd4  str x9,[x8, #0x10]
71035dbcd8  adrp x10,0x7104453000
71035dbcdc  add x10,x10,#0x289
71035dbce0  strb wzr,[x9, #0x18]
71035dbce4  ldr x12,[x10, #0x10]
71035dbce8  str x12,[x9, #0x10]
71035dbcec  ldp x13,x10,[x10]
71035dbcf0  adrp x12,0x7104453000
71035dbcf4  add x12,x12,#0x264
71035dbcf8  orr w11,wzr,#0x1c
71035dbcfc  stp x13,x10,[x9]
71035dbd00  ldur x9,[x12, #0x6]
71035dbd04  stp xzr,xzr,[x8, #0x28]
71035dbd08  strb w22,[x8, #0x30]
71035dbd0c  stp xzr,xzr,[x8, #0x38]
71035dbd10  strb wzr,[x8, #0x3e]
71035dbd14  stp xzr,xzr,[x8, #0x48]
71035dbd18  stur x9,[x8, #0x1f]
71035dbd1c  ldr x9,[x12]
71035dbd20  stur x9,[x8, #0x19]
71035dbd24  adrp x9,0x710437b000
71035dbd28  add x9,x9,#0x2f
71035dbd2c  ldur x10,[x9, #0x5]
71035dbd30  ldr x9,[x9]
71035dbd34  stp xzr,xzr,[x8, #0x58]
71035dbd38  strb wzr,[x8, #0x5c]
71035dbd3c  stp xzr,xzr,[x8, #0x68]
71035dbd40  strb w20,[x8, #0x60]
71035dbd44  stp xzr,xzr,[x8, #0x80]
71035dbd48  strb wzr,[x8, #0x76]
71035dbd4c  strb wzr,[x8, #0x8e]
71035dbd50  adrp x0,0x7100442000
71035dbd54  add x0,x0,#0xca0
71035dbd58  adrp x2,0x7104f17000
71035dbd5c  add x2,x2,#0x0
71035dbd60  mov x1,xzr
71035dbd64  str xzr,[x8, #0x78]
71035dbd68  strb w20,[x8, #0x78]
71035dbd6c  str xzr,[x8, #0xa0]
71035dbd70  strb w11,[x8, #0x90]
71035dbd74  strb wzr,[x8, #0x9f]
71035dbd78  stur x10,[x8, #0x36]
71035dbd7c  stur x9,[x8, #0x31]
71035dbd80  mov w9,#0x26
71035dbd84  strb w9,[x8, #0x48]
71035dbd88  mov w9,#0x44
71035dbd8c  strb w9,[x8, #0x5b]
71035dbd90  mov w9,#0x325f
71035dbd94  sturh w9,[x8, #0x59]
71035dbd98  adrp x9,0x71043ef000
71035dbd9c  add x9,x9,#0x274
71035dbda0  ldp x10,x9,[x9]
71035dbda4  stur x9,[x8, #0x51]
71035dbda8  adrp x9,0x7104453000
71035dbdac  add x9,x9,#0x273
71035dbdb0  stur x10,[x8, #0x49]
71035dbdb4  ldp x10,x12,[x9]
71035dbdb8  ldur x9,[x9, #0xd]
71035dbdbc  stur x9,[x8, #0x6e]
71035dbdc0  adrp x9,0x71042e5000
71035dbdc4  add x9,x9,#0xaf0
71035dbdc8  stur x12,[x8, #0x69]
71035dbdcc  stur x10,[x8, #0x61]
71035dbdd0  strb w11,[x8, #0x18]
71035dbdd4  ldp x10,x12,[x9]
71035dbdd8  ldur x9,[x9, #0xd]
71035dbddc  stur x9,[x8, #0x86]
71035dbde0  adrp x9,0x7104317000
71035dbde4  add x9,x9,#0x89a
71035dbde8  stur x10,[x8, #0x79]
71035dbdec  ldr x10,[x9]
71035dbdf0  ldur x9,[x9, #0x6]
71035dbdf4  strb wzr,[x8, #0x27]
71035dbdf8  stur x12,[x8, #0x81]
71035dbdfc  stur x9,[x8, #0x97]
71035dbe00  stur x10,[x8, #0x91]
71035dbe04  bl 0x71000001c0
71035dbe08  adrp x0,0x7105337000
71035dbe0c  add x0,x0,#0x240
71035dbe10  bl 0x71039c06c0
71035dbe14  ldp w4,w3,[sp, #0x8]
71035dbe18  ldp w8,w2,[sp]
71035dbe1c  mov w9,#0x7650000
71035dbe20  tbnz w4,#0x0,0x71035db594
71035dbe24  cmp w8,#0x9
71035dbe28  b.hi 0x71035dbe8c
71035dbe2c  mov w10,#0x1
71035dbe30  lsl w10,w10,w8
71035dbe34  mov w11,#0x2dc
71035dbe38  tst w10,w11
71035dbe3c  b.eq 0x71035dbe74
71035dbe40  sxtb w10,w2
71035dbe44  cmp w10,#0x19
71035dbe48  b.hi 0x71035dbe8c
71035dbe4c  adrp x11,0x7104530000
71035dbe50  add x11,x11,#0x3ec
71035dbe54  adrp x1,0x7105336000
71035dbe58  add x1,x1,#0xeb0
71035dbe5c  ldrsw x10,[x11, x10, LSL #0x2]
71035dbe60  add x10,x10,x11
71035dbe64  br x10
71035dbe68  adrp x1,0x7105336000
71035dbe6c  add x1,x1,#0xe98
71035dbe70  b 0x71035dbe94
71035dbe74  cbz w8,0x71035dbe8c
71035dbe78  cmp w8,#0x8
71035dbe7c  b.ne 0x71035dbe8c
71035dbe80  adrp x1,0x7105336000
71035dbe84  add x1,x1,#0xfa0
71035dbe88  b 0x71035dbe94
71035dbe8c  adrp x1,0x7105337000
71035dbe90  add x1,x1,#0x168
71035dbe94  and w10,w2,#0xff
71035dbe98  and w8,w3,w9
71035dbe9c  cmp w10,#0xe
71035dbea0  b.eq 0x71035dbec8
71035dbea4  sxtb w10,w2
71035dbea8  cmp w10,#0xd
71035dbeac  b.eq 0x71035dbed4
71035dbeb0  cmp w10,#0xc
71035dbeb4  b.ne 0x71035dbee8
71035dbeb8  adrp x10,0x7105336000
71035dbebc  add x10,x10,#0xf40
71035dbec0  add x11,x10,#0xa8
71035dbec4  b 0x71035dbee0
71035dbec8  adrp x10,0x7105336000
71035dbecc  add x10,x10,#0xf88
71035dbed0  b 0x71035dbedc
71035dbed4  adrp x10,0x7105336000
71035dbed8  add x10,x10,#0xf70
71035dbedc  add x11,x10,#0x78
71035dbee0  tst w4,#0x1
71035dbee4  csel x1,x11,x10,ne
71035dbee8  cmp w8,w9
71035dbeec  b.eq 0x71035dbef8
71035dbef0  lsl w10,w3,#0x10
71035dbef4  cbz w10,0x71035dbf38
71035dbef8  sxth w10,w3
71035dbefc  cmp w8,w9
71035dbf00  b.ne 0x71035dbf20
71035dbf04  cmp w10,#0x7
71035dbf08  b.hi 0x71035dbf38
71035dbf0c  adrp x8,0x7105337000
71035dbf10  add x8,x8,#0xa8
71035dbf14  orr w9,wzr,#0x18
71035dbf18  umaddl x1,w10,w9,x8
71035dbf1c  b 0x71035dbf38
71035dbf20  cmp w10,#0x7
71035dbf24  adrp x1,0x7105337000
71035dbf28  add x1,x1,#0x168
71035dbf2c  b.hi 0x71035dbf38
71035dbf30  orr w8,wzr,#0x18
71035dbf34  umaddl x1,w10,w8,x1
71035dbf38  adrp x8,0x7105337000
71035dbf3c  ldr x8,[x8, #0x5a8]
71035dbf40  mov x20,x19
71035dbf44  adrp x9,0x710522f000
71035dbf48  add x9,x9,#0xe60
71035dbf4c  add x0,x8,#0x10
71035dbf50  str xzr,[x20, #0x8]!
71035dbf54  stp xzr,xzr,[x19, #0x10]
71035dbf58  str x9,[x19]
71035dbf5c  bl 0x7103550630
71035dbf60  cbz x0,0x71035dbfa8
71035dbf64  ldr x8,[x0, #0x38]
71035dbf68  cbz x8,0x71035dbf98
71035dbf6c  ldr x8,[x8]
71035dbf70  ldr x9,[x0, #0x40]
71035dbf74  cmp x8,x9
71035dbf78  b.ne 0x71035dbf98
71035dbf7c  ldr x8,[x0, #0x30]
71035dbf80  str x8,[x20]
71035dbf84  cbz x8,0x71035dbf9c
71035dbf88  ldr x8,[x8, #0x8]
71035dbf8c  str x8,[x19, #0x10]
71035dbf90  ldr x8,[x8]
71035dbf94  b 0x71035dbfa4
71035dbf98  str xzr,[x20]
71035dbf9c  mov x8,xzr
71035dbfa0  str xzr,[x19, #0x10]
71035dbfa4  str x8,[x19, #0x18]
71035dbfa8  ldp x29,x30,[sp, #0x40]
71035dbfac  ldp x20,x19,[sp, #0x30]
71035dbfb0  ldp x22,x21,[sp, #0x20]
71035dbfb4  add sp,sp,#0x50
71035dbfb8  ret
71035dbfbc  adrp x1,0x7105336000
71035dbfc0  add x1,x1,#0xef8
71035dbfc4  b 0x71035dbe94
71035dbfc8  adrp x1,0x7105336000
71035dbfcc  add x1,x1,#0xf28
71035dbfd0  b 0x71035dbe94
71035dbfd4  sub w8,w8,#0x2
71035dbfd8  adrp x10,0x7105336000
71035dbfdc  add x10,x10,#0xe80
71035dbfe0  adrp x11,0x7105337000
71035dbfe4  add x11,x11,#0x168
71035dbfe8  cmp w8,#0x3
71035dbfec  csel x1,x11,x10,cc
71035dbff0  b 0x71035dbe94
71035dbff4  adrp x1,0x7105336000
71035dbff8  add x1,x1,#0xec8
71035dbffc  b 0x71035dbe94
71035dc000  adrp x1,0x7105336000
71035dc004  add x1,x1,#0xee0
71035dc008  b 0x71035dbe94
71035dc00c  adrp x1,0x7105336000
71035dc010  add x1,x1,#0xf58
71035dc014  b 0x71035dbe94
71035dc018  adrp x1,0x7105336000
71035dc01c  add x1,x1,#0xfb8
71035dc020  b 0x71035dbe94
71035dc024  adrp x1,0x7105337000
71035dc028  add x1,x1,#0x18
71035dc02c  b 0x71035dbe94
71035dc030  adrp x1,0x7105336000
71035dc034  add x1,x1,#0xf10
71035dc038  b 0x71035dbe94
71035dc03c  adrp x1,0x7105337000
71035dc040  add x1,x1,#0x30
71035dc044  b 0x71035dbe94
71035dc048  adrp x1,0x7105337000
71035dc04c  add x1,x1,#0x48
71035dc050  b 0x71035dbe94
71035dc054  adrp x1,0x7105337000
71035dc058  add x1,x1,#0x60
71035dc05c  b 0x71035dbe94
71035dc060  adrp x1,0x7105337000
71035dc064  add x1,x1,#0x78
71035dc068  b 0x71035dbe94
71035dc06c  adrp x1,0x7105337000
71035dc070  add x1,x1,#0x90
71035dc074  b 0x71035dbe94
