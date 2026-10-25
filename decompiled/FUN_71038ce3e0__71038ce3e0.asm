// addr:      71038ce3e0
// offset:    0x38ce3e0
// name:      FUN_71038ce3e0
// mangled:   
// size:      3056

71038ce3e0  sub sp,sp,#0xb0
71038ce3e4  stp x28,x27,[sp, #0x50]
71038ce3e8  stp x26,x25,[sp, #0x60]
71038ce3ec  stp x24,x23,[sp, #0x70]
71038ce3f0  stp x22,x21,[sp, #0x80]
71038ce3f4  stp x20,x19,[sp, #0x90]
71038ce3f8  stp x29,x30,[sp, #0xa0]
71038ce3fc  add x29,sp,#0xa0
71038ce400  mov x21,x1
71038ce404  mov x19,x0
71038ce408  mov w2,#0x4c90
71038ce40c  add x0,sp,#0x40
71038ce410  mov w1,#0x10
71038ce414  bl 0x710392e1f0
71038ce418  cmp w0,#0xc
71038ce41c  b.ne 0x71038ce458
71038ce420  adrp x8,0x710593d000
71038ce424  ldr x0,[x8, #0x2b0]
71038ce428  cbz x0,0x71038ce458
71038ce42c  mov w8,#0x4c90
71038ce430  str x8,[sp, #0x48]
71038ce434  ldr x8,[x0]
71038ce438  ldr x8,[x8, #0x30]
71038ce43c  add x1,sp,#0x48
71038ce440  blr x8
71038ce444  tbz w0,#0x0,0x71038ce458
71038ce448  mov w2,#0x4c90
71038ce44c  add x0,sp,#0x40
71038ce450  mov w1,#0x10
71038ce454  bl 0x710392e1f0
71038ce458  adrp x26,0x71052a8000
71038ce45c  ldr x26,[x26, #0xa78]
71038ce460  cbz x26,0x71038ce474
71038ce464  ldr x2,[sp, #0x40]
71038ce468  mov w0,#0x4c90
71038ce46c  mov w1,#0x10
71038ce470  bl 0x71039c19e0
71038ce474  ldr x20,[sp, #0x40]
71038ce478  mov x0,x20
71038ce47c  bl 0x71037c3a70
71038ce480  mov w9,#0x4c48
71038ce484  adrp x8,0x7105291000
71038ce488  add x8,x8,#0xd28
71038ce48c  add x24,x20,x9
71038ce490  mov w9,#0x4c88
71038ce494  str x8,[x20]
71038ce498  add x27,x20,#0x30
71038ce49c  mov w8,#0x40
71038ce4a0  str wzr,[x20, #0x10]
71038ce4a4  add x23,x20,x9
71038ce4a8  stp x27,xzr,[x20, #0x18]
71038ce4ac  str x8,[x20, #0x28]
71038ce4b0  str x24,[x20, #0x4c30]
71038ce4b4  str xzr,[x20, #0x4c38]
71038ce4b8  str x8,[x20, #0x4c40]
71038ce4bc  strb wzr,[x23]
71038ce4c0  ldr x8,[x21, #0x8]
71038ce4c4  cbz x8,0x71038ce7e8
71038ce4c8  ldr w25,[x21, #0x10]
71038ce4cc  cbz w25,0x71038ce7e8
71038ce4d0  ldr w8,[x21]
71038ce4d4  cbz w8,0x71038ce7e8
71038ce4d8  cmp w25,#0x40
71038ce4dc  stp x27,x23,[sp, #0x30]
71038ce4e0  str x24,[sp, #0x28]
71038ce4e4  b.ls 0x71038ce7fc
71038ce4e8  mov w8,#0x130
71038ce4ec  mul x22,x25,x8
71038ce4f0  add x0,sp,#0x40
71038ce4f4  mov w1,#0x10
71038ce4f8  mov x2,x22
71038ce4fc  bl 0x710392e1f0
71038ce500  cmp w0,#0xc
71038ce504  b.ne 0x71038ce53c
71038ce508  adrp x8,0x710593d000
71038ce50c  ldr x0,[x8, #0x2b0]
71038ce510  cbz x0,0x71038ce53c
71038ce514  str x22,[sp, #0x48]
71038ce518  ldr x8,[x0]
71038ce51c  ldr x8,[x8, #0x30]
71038ce520  add x1,sp,#0x48
71038ce524  blr x8
71038ce528  tbz w0,#0x0,0x71038ce53c
71038ce52c  add x0,sp,#0x40
71038ce530  mov w1,#0x10
71038ce534  mov x2,x22
71038ce538  bl 0x710392e1f0
71038ce53c  cbz x26,0x71038ce550
71038ce540  ldr x2,[sp, #0x40]
71038ce544  mov w1,#0x10
71038ce548  mov x0,x22
71038ce54c  bl 0x71039c19e0
71038ce550  ldr x23,[sp, #0x40]
71038ce554  ldr x8,[x20, #0x18]
71038ce558  mov x24,x23
71038ce55c  cbz x8,0x71038ce7b8
71038ce560  ldr x10,[x20, #0x20]
71038ce564  mov x24,x23
71038ce568  cbz x10,0x71038ce790
71038ce56c  mov w11,#0x130
71038ce570  madd x10,x10,x11,x8
71038ce574  mov x9,xzr
71038ce578  add x12,x8,x9
71038ce57c  ldr w13,[x12]
71038ce580  add x11,x23,x9
71038ce584  add x9,x9,#0x130
71038ce588  str w13,[x11]
71038ce58c  ldr x15,[x12, #0x18]
71038ce590  ldp x13,x14,[x12, #0x8]
71038ce594  str x13,[x11, #0x8]
71038ce598  stp x14,x15,[x11, #0x10]
71038ce59c  str xzr,[x12, #0x8]
71038ce5a0  ldp x13,x14,[x12, #0x20]
71038ce5a4  ldp x15,x16,[x12, #0x30]
71038ce5a8  stp xzr,xzr,[x12, #0x10]
71038ce5ac  stp x15,x16,[x11, #0x30]
71038ce5b0  stp x13,x14,[x11, #0x20]
71038ce5b4  ldp x13,x14,[x12, #0x40]
71038ce5b8  ldp x15,x16,[x12, #0x50]
71038ce5bc  stp x15,x16,[x11, #0x50]
71038ce5c0  stp x13,x14,[x11, #0x40]
71038ce5c4  ldp x13,x14,[x12, #0x60]
71038ce5c8  ldp x15,x16,[x12, #0x70]
71038ce5cc  stp x15,x16,[x11, #0x70]
71038ce5d0  stp x13,x14,[x11, #0x60]
71038ce5d4  ldr x13,[x12, #0x80]
71038ce5d8  str x13,[x11, #0x80]
71038ce5dc  ldr x13,[x12, #0x88]
71038ce5e0  str x13,[x11, #0x88]
71038ce5e4  ldp x13,x14,[x12, #0x90]
71038ce5e8  ldp x15,x16,[x12, #0xa0]
71038ce5ec  stp x15,x16,[x11, #0xa0]
71038ce5f0  stp x13,x14,[x11, #0x90]
71038ce5f4  ldr x13,[x12, #0xb0]
71038ce5f8  str x13,[x11, #0xb0]
71038ce5fc  ldp x13,x14,[x12, #0xb8]
71038ce600  ldp x15,x16,[x12, #0xc8]
71038ce604  stp x15,x16,[x11, #0xc8]
71038ce608  stp x13,x14,[x11, #0xb8]
71038ce60c  ldr x13,[x12, #0xd8]
71038ce610  str x13,[x11, #0xd8]
71038ce614  ldr x13,[x12, #0xe0]
71038ce618  str x13,[x11, #0xe0]
71038ce61c  ldp x13,x14,[x12, #0xe8]
71038ce620  ldp x15,x16,[x12, #0xf8]
71038ce624  stp x15,x16,[x11, #0xf8]
71038ce628  stp x13,x14,[x11, #0xe8]
71038ce62c  ldr x13,[x12, #0x108]
71038ce630  str x13,[x11, #0x108]
71038ce634  ldp x13,x14,[x12, #0x110]
71038ce638  ldp x15,x16,[x12, #0x120]
71038ce63c  add x12,x12,#0x130
71038ce640  cmp x12,x10
71038ce644  stp x15,x16,[x11, #0x120]
71038ce648  stp x13,x14,[x11, #0x110]
71038ce64c  b.ne 0x71038ce578
71038ce650  ldr x26,[x20, #0x20]
71038ce654  mov w11,#0x130
71038ce658  madd x11,x26,x11,x8
71038ce65c  add x24,x23,x9
71038ce660  cmp x10,x11
71038ce664  b.eq 0x71038ce750
71038ce668  mov x12,xzr
71038ce66c  add x14,x10,x12
71038ce670  ldr w15,[x14]
71038ce674  add x13,x23,x12
71038ce678  add x13,x13,x9
71038ce67c  str w15,[x13]
71038ce680  ldr x17,[x14, #0x18]
71038ce684  ldp x15,x16,[x14, #0x8]
71038ce688  str x15,[x13, #0x8]
71038ce68c  stp x16,x17,[x13, #0x10]
71038ce690  str xzr,[x14, #0x8]
71038ce694  ldp x15,x16,[x14, #0x20]
71038ce698  add x12,x12,#0x130
71038ce69c  ldp x17,x18,[x14, #0x30]
71038ce6a0  stp xzr,xzr,[x14, #0x10]
71038ce6a4  stp x17,x18,[x13, #0x30]
71038ce6a8  stp x15,x16,[x13, #0x20]
71038ce6ac  ldp x15,x16,[x14, #0x40]
71038ce6b0  ldp x17,x18,[x14, #0x50]
71038ce6b4  stp x17,x18,[x13, #0x50]
71038ce6b8  stp x15,x16,[x13, #0x40]
71038ce6bc  ldp x15,x16,[x14, #0x60]
71038ce6c0  ldp x17,x18,[x14, #0x70]
71038ce6c4  stp x17,x18,[x13, #0x70]
71038ce6c8  stp x15,x16,[x13, #0x60]
71038ce6cc  ldr x15,[x14, #0x80]
71038ce6d0  str x15,[x13, #0x80]
71038ce6d4  ldr x15,[x14, #0x88]
71038ce6d8  str x15,[x13, #0x88]
71038ce6dc  ldp x15,x16,[x14, #0x90]
71038ce6e0  ldp x17,x18,[x14, #0xa0]
71038ce6e4  stp x17,x18,[x13, #0xa0]
71038ce6e8  stp x15,x16,[x13, #0x90]
71038ce6ec  ldr x15,[x14, #0xb0]
71038ce6f0  str x15,[x13, #0xb0]
71038ce6f4  ldp x15,x16,[x14, #0xb8]
71038ce6f8  ldp x17,x18,[x14, #0xc8]
71038ce6fc  stp x17,x18,[x13, #0xc8]
71038ce700  stp x15,x16,[x13, #0xb8]
71038ce704  ldr x15,[x14, #0xd8]
71038ce708  str x15,[x13, #0xd8]
71038ce70c  ldr x15,[x14, #0xe0]
71038ce710  str x15,[x13, #0xe0]
71038ce714  ldp x15,x16,[x14, #0xe8]
71038ce718  ldp x17,x18,[x14, #0xf8]
71038ce71c  stp x17,x18,[x13, #0xf8]
71038ce720  stp x15,x16,[x13, #0xe8]
71038ce724  ldr x15,[x14, #0x108]
71038ce728  str x15,[x13, #0x108]
71038ce72c  ldp x15,x16,[x14, #0x110]
71038ce730  ldp x17,x18,[x14, #0x120]
71038ce734  add x14,x14,#0x130
71038ce738  cmp x14,x11
71038ce73c  stp x17,x18,[x13, #0x120]
71038ce740  stp x15,x16,[x13, #0x110]
71038ce744  b.ne 0x71038ce66c
71038ce748  ldr x26,[x20, #0x20]
71038ce74c  add x24,x24,x12
71038ce750  cbz x26,0x71038ce78c
71038ce754  adrp x28,0x71052a8000
71038ce758  ldr x28,[x28, #0xa70]
71038ce75c  add x27,x8,#0x18
71038ce760  ldurb w8,[x27, #-0x10]
71038ce764  tbz w8,#0x0,0x71038ce780
71038ce768  ldr x22,[x27]
71038ce76c  cbz x28,0x71038ce778
71038ce770  mov x0,x22
71038ce774  bl 0x71039c19b0
71038ce778  mov x0,x22
71038ce77c  bl 0x710392eb40
71038ce780  sub x26,x26,#0x1
71038ce784  add x27,x27,#0x130
71038ce788  cbnz x26,0x71038ce760
71038ce78c  ldr x27,[sp, #0x30]
71038ce790  ldr x22,[x20, #0x18]
71038ce794  cmp x22,x27
71038ce798  b.eq 0x71038ce7b8
71038ce79c  adrp x8,0x71052a8000
71038ce7a0  ldr x8,[x8, #0xa70]
71038ce7a4  cbz x8,0x71038ce7b0
71038ce7a8  mov x0,x22
71038ce7ac  bl 0x71039c19b0
71038ce7b0  mov x0,x22
71038ce7b4  bl 0x710392eb40
71038ce7b8  sub x8,x24,x23
71038ce7bc  mov x9,#0xca1b
71038ce7c0  movk x9,#0x286b, LSL #16
71038ce7c4  asr x8,x8,#0x4
71038ce7c8  movk x9,#0xa1af, LSL #32
71038ce7cc  movk x9,#0x86bc, LSL #48
71038ce7d0  mul x8,x8,x9
71038ce7d4  stp x23,x8,[x20, #0x18]
71038ce7d8  str x25,[x20, #0x28]
71038ce7dc  ldr w9,[x21, #0x10]
71038ce7e0  cbnz w9,0x71038ce804
71038ce7e4  b 0x71038cec60
71038ce7e8  mov x0,x20
71038ce7ec  bl 0x71038ce2b0
71038ce7f0  stp xzr,xzr,[x19, #0x10]
71038ce7f4  str xzr,[x19, #0x8]
71038ce7f8  b 0x71038cee6c
71038ce7fc  mov x8,xzr
71038ce800  mov w25,#0x40
71038ce804  mov x22,xzr
71038ce808  mov w27,wzr
71038ce80c  mov w26,#0x28
71038ce810  mov w28,#0x130
71038ce814  b 0x71038ce824
71038ce818  mul w8,w11,w8
71038ce81c  add w27,w9,w8
71038ce820  ldp x8,x25,[x20, #0x20]
71038ce824  ldr x9,[x21, #0x8]
71038ce828  madd x24,x22,x26,x9
71038ce82c  ldr x9,[x20, #0x18]
71038ce830  madd x23,x8,x28,x9
71038ce834  cmp x8,x25
71038ce838  b.cs 0x71038ce908
71038ce83c  mov x0,x23
71038ce840  mov x1,x24
71038ce844  bl 0x71038cda50
71038ce848  ldr x8,[x20, #0x20]
71038ce84c  add x8,x8,#0x1
71038ce850  str x8,[x20, #0x20]
71038ce854  mul x10,x22,x26
71038ce858  sub x9,x8,#0x1
71038ce85c  ldr x8,[x21, #0x8]
71038ce860  ldr w11,[x8, x10, LSL #0x0]
71038ce864  ldr x10,[x20, #0x18]
71038ce868  lsr w8,w11,#0x1c
71038ce86c  cmp w8,#0x3
71038ce870  and w8,w11,#0x1
71038ce874  ubfx w12,w11,#0x1,#0x1
71038ce878  add w8,w12,w8
71038ce87c  ubfx w12,w11,#0x2,#0x1
71038ce880  add w8,w8,w12
71038ce884  ubfx w12,w11,#0x3,#0x1
71038ce888  add w8,w8,w12
71038ce88c  and w12,w11,#0x3
71038ce890  ubfx w13,w11,#0x2,#0x2
71038ce894  add w13,w13,#0x1
71038ce898  and w11,w11,#0xff00
71038ce89c  add w12,w12,#0x1
71038ce8a0  mul w12,w13,w12
71038ce8a4  csel w8,w8,w12,ne
71038ce8a8  cmp w11,#0x300
71038ce8ac  b.eq 0x71038ce8d0
71038ce8b0  cmp w11,#0x200
71038ce8b4  b.eq 0x71038ce8c8
71038ce8b8  cmp w11,#0x100
71038ce8bc  b.ne 0x71038ce8d8
71038ce8c0  mov w11,#0x1
71038ce8c4  b 0x71038ce8dc
71038ce8c8  mov w11,#0x2
71038ce8cc  b 0x71038ce8dc
71038ce8d0  mov w11,#0x4
71038ce8d4  b 0x71038ce8dc
71038ce8d8  mov w11,wzr
71038ce8dc  madd x10,x9,x28,x10
71038ce8e0  ldr w9,[x10]
71038ce8e4  cmn w9,#0x1
71038ce8e8  b.ne 0x71038ce8f4
71038ce8ec  mov w9,w27
71038ce8f0  str w27,[x10]
71038ce8f4  ldr w10,[x21, #0x10]
71038ce8f8  add x22,x22,#0x1
71038ce8fc  cmp x22,x10
71038ce900  b.cc 0x71038ce818
71038ce904  b 0x71038cec60
71038ce908  mov x11,#0x7943
71038ce90c  movk x11,#0xe50d, LSL #16
71038ce910  movk x11,#0x9435, LSL #32
71038ce914  movk x11,#0xd7, LSL #48
71038ce918  subs x8,x11,x25
71038ce91c  b.eq 0x71038cee98
71038ce920  cmp x25,#0x0
71038ce924  csinc x9,x25,xzr,ne
71038ce928  add x10,x9,x25
71038ce92c  cmp x8,x9
71038ce930  csel x8,x11,x10,cc
71038ce934  mul x25,x8,x28
71038ce938  add x0,sp,#0x40
71038ce93c  mov w1,#0x10
71038ce940  mov x2,x25
71038ce944  str x8,[sp, #0x10]
71038ce948  bl 0x710392e1f0
71038ce94c  cmp w0,#0xc
71038ce950  b.ne 0x71038ce988
71038ce954  adrp x8,0x710593d000
71038ce958  ldr x0,[x8, #0x2b0]
71038ce95c  cbz x0,0x71038ce988
71038ce960  str x25,[sp, #0x48]
71038ce964  ldr x8,[x0]
71038ce968  ldr x8,[x8, #0x30]
71038ce96c  add x1,sp,#0x48
71038ce970  blr x8
71038ce974  tbz w0,#0x0,0x71038ce988
71038ce978  add x0,sp,#0x40
71038ce97c  mov w1,#0x10
71038ce980  mov x2,x25
71038ce984  bl 0x710392e1f0
71038ce988  adrp x8,0x71052a8000
71038ce98c  ldr x8,[x8, #0xa78]
71038ce990  cbz x8,0x71038ce9a4
71038ce994  ldr x2,[sp, #0x40]
71038ce998  mov w1,#0x10
71038ce99c  mov x0,x25
71038ce9a0  bl 0x71039c19e0
71038ce9a4  ldr x25,[sp, #0x40]
71038ce9a8  ldr x13,[x20, #0x18]
71038ce9ac  stp x25,x13,[sp, #0x18]
71038ce9b0  cbz x13,0x71038cea98
71038ce9b4  cmp x13,x23
71038ce9b8  b.eq 0x71038ceaa0
71038ce9bc  mov x8,x13
71038ce9c0  ldr w9,[x8]
71038ce9c4  str w9,[x25]
71038ce9c8  ldr x11,[x8, #0x18]
71038ce9cc  ldp x9,x10,[x8, #0x8]
71038ce9d0  str x9,[x25, #0x8]
71038ce9d4  stp x10,x11,[x25, #0x10]
71038ce9d8  str xzr,[x8, #0x8]
71038ce9dc  ldp x9,x10,[x8, #0x20]
71038ce9e0  ldp x11,x12,[x8, #0x30]
71038ce9e4  stp xzr,xzr,[x8, #0x10]
71038ce9e8  stp x11,x12,[x25, #0x30]
71038ce9ec  stp x9,x10,[x25, #0x20]
71038ce9f0  ldp x9,x10,[x8, #0x40]
71038ce9f4  ldp x11,x12,[x8, #0x50]
71038ce9f8  stp x11,x12,[x25, #0x50]
71038ce9fc  stp x9,x10,[x25, #0x40]
71038cea00  ldp x9,x10,[x8, #0x60]
71038cea04  ldp x11,x12,[x8, #0x70]
71038cea08  stp x11,x12,[x25, #0x70]
71038cea0c  stp x9,x10,[x25, #0x60]
71038cea10  ldr x9,[x8, #0x80]
71038cea14  str x9,[x25, #0x80]
71038cea18  ldr x9,[x8, #0x88]
71038cea1c  str x9,[x25, #0x88]
71038cea20  ldp x9,x10,[x8, #0x90]
71038cea24  ldp x11,x12,[x8, #0xa0]
71038cea28  stp x11,x12,[x25, #0xa0]
71038cea2c  stp x9,x10,[x25, #0x90]
71038cea30  ldr x9,[x8, #0xb0]
71038cea34  str x9,[x25, #0xb0]
71038cea38  ldp x9,x10,[x8, #0xb8]
71038cea3c  ldp x11,x12,[x8, #0xc8]
71038cea40  stp x11,x12,[x25, #0xc8]
71038cea44  stp x9,x10,[x25, #0xb8]
71038cea48  ldr x9,[x8, #0xd8]
71038cea4c  str x9,[x25, #0xd8]
71038cea50  ldr x9,[x8, #0xe0]
71038cea54  str x9,[x25, #0xe0]
71038cea58  ldp x9,x10,[x8, #0xe8]
71038cea5c  ldp x11,x12,[x8, #0xf8]
71038cea60  stp x11,x12,[x25, #0xf8]
71038cea64  stp x9,x10,[x25, #0xe8]
71038cea68  ldr x9,[x8, #0x108]
71038cea6c  str x9,[x25, #0x108]
71038cea70  ldp x9,x10,[x8, #0x110]
71038cea74  ldp x11,x12,[x8, #0x120]
71038cea78  add x8,x8,#0x130
71038cea7c  cmp x8,x23
71038cea80  stp x11,x12,[x25, #0x120]
71038cea84  stp x9,x10,[x25, #0x110]
71038cea88  add x25,x25,#0x130
71038cea8c  b.ne 0x71038ce9c0
71038cea90  ldr x8,[sp, #0x18]
71038cea94  b 0x71038ceaa4
71038cea98  str xzr,[sp, #0x8]
71038cea9c  b 0x71038ceac4
71038ceaa0  mov x8,x25
71038ceaa4  sub x8,x25,x8
71038ceaa8  mov x9,#0xca1b
71038ceaac  movk x9,#0x286b, LSL #16
71038ceab0  asr x8,x8,#0x4
71038ceab4  movk x9,#0xa1af, LSL #32
71038ceab8  movk x9,#0x86bc, LSL #48
71038ceabc  mul x8,x8,x9
71038ceac0  str x8,[sp, #0x8]
71038ceac4  mov x0,x25
71038ceac8  mov x1,x24
71038ceacc  bl 0x71038cda50
71038cead0  ldr x13,[sp, #0x20]
71038cead4  add x24,x25,#0x130
71038cead8  cbz x13,0x71038cec30
71038ceadc  ldr x25,[x20, #0x20]
71038ceae0  madd x8,x25,x28,x13
71038ceae4  cmp x23,x8
71038ceae8  b.eq 0x71038cebc0
71038ceaec  ldr w9,[x23]
71038ceaf0  str w9,[x24]
71038ceaf4  ldr x11,[x23, #0x18]
71038ceaf8  ldp x9,x10,[x23, #0x8]
71038ceafc  str x9,[x24, #0x8]
71038ceb00  stp x10,x11,[x24, #0x10]
71038ceb04  str xzr,[x23, #0x8]
71038ceb08  ldp x9,x10,[x23, #0x20]
71038ceb0c  ldp x11,x12,[x23, #0x30]
71038ceb10  stp xzr,xzr,[x23, #0x10]
71038ceb14  stp x11,x12,[x24, #0x30]
71038ceb18  stp x9,x10,[x24, #0x20]
71038ceb1c  ldp x9,x10,[x23, #0x40]
71038ceb20  ldp x11,x12,[x23, #0x50]
71038ceb24  stp x11,x12,[x24, #0x50]
71038ceb28  stp x9,x10,[x24, #0x40]
71038ceb2c  ldp x9,x10,[x23, #0x60]
71038ceb30  ldp x11,x12,[x23, #0x70]
71038ceb34  stp x11,x12,[x24, #0x70]
71038ceb38  stp x9,x10,[x24, #0x60]
71038ceb3c  ldr x9,[x23, #0x80]
71038ceb40  str x9,[x24, #0x80]
71038ceb44  ldr x9,[x23, #0x88]
71038ceb48  str x9,[x24, #0x88]
71038ceb4c  ldp x9,x10,[x23, #0x90]
71038ceb50  ldp x11,x12,[x23, #0xa0]
71038ceb54  stp x11,x12,[x24, #0xa0]
71038ceb58  stp x9,x10,[x24, #0x90]
71038ceb5c  ldr x9,[x23, #0xb0]
71038ceb60  str x9,[x24, #0xb0]
71038ceb64  ldp x9,x10,[x23, #0xb8]
71038ceb68  ldp x11,x12,[x23, #0xc8]
71038ceb6c  stp x11,x12,[x24, #0xc8]
71038ceb70  stp x9,x10,[x24, #0xb8]
71038ceb74  ldr x9,[x23, #0xd8]
71038ceb78  str x9,[x24, #0xd8]
71038ceb7c  ldr x9,[x23, #0xe0]
71038ceb80  str x9,[x24, #0xe0]
71038ceb84  ldp x9,x10,[x23, #0xe8]
71038ceb88  ldp x11,x12,[x23, #0xf8]
71038ceb8c  stp x11,x12,[x24, #0xf8]
71038ceb90  stp x9,x10,[x24, #0xe8]
71038ceb94  ldr x9,[x23, #0x108]
71038ceb98  str x9,[x24, #0x108]
71038ceb9c  ldp x9,x10,[x23, #0x110]
71038ceba0  ldp x11,x12,[x23, #0x120]
71038ceba4  add x23,x23,#0x130
71038ceba8  cmp x23,x8
71038cebac  stp x11,x12,[x24, #0x120]
71038cebb0  stp x9,x10,[x24, #0x110]
71038cebb4  add x24,x24,#0x130
71038cebb8  b.ne 0x71038ceaec
71038cebbc  ldr x25,[x20, #0x20]
71038cebc0  cbz x25,0x71038cebfc
71038cebc4  add x23,x13,#0x18
71038cebc8  ldurb w8,[x23, #-0x10]
71038cebcc  tbz w8,#0x0,0x71038cebf0
71038cebd0  adrp x8,0x71052a8000
71038cebd4  ldr x0,[x23]
71038cebd8  ldr x8,[x8, #0xa70]
71038cebdc  cbz x8,0x71038cebec
71038cebe0  str x0,[sp, #0x20]
71038cebe4  bl 0x71039c19b0
71038cebe8  ldr x0,[sp, #0x20]
71038cebec  bl 0x710392eb40
71038cebf0  sub x25,x25,#0x1
71038cebf4  add x23,x23,#0x130
71038cebf8  cbnz x25,0x71038cebc8
71038cebfc  ldr x23,[x20, #0x18]
71038cec00  ldr x8,[sp, #0x30]
71038cec04  cmp x23,x8
71038cec08  b.eq 0x71038cec30
71038cec0c  adrp x8,0x71052a8000
71038cec10  ldr x8,[x8, #0xa70]
71038cec14  ldr x25,[sp, #0x18]
71038cec18  cbz x8,0x71038cec24
71038cec1c  mov x0,x23
71038cec20  bl 0x71039c19b0
71038cec24  mov x0,x23
71038cec28  bl 0x710392eb40
71038cec2c  b 0x71038cec34
71038cec30  ldr x25,[sp, #0x18]
71038cec34  sub x8,x24,x25
71038cec38  mov x9,#0xca1b
71038cec3c  movk x9,#0x286b, LSL #16
71038cec40  asr x8,x8,#0x4
71038cec44  movk x9,#0xa1af, LSL #32
71038cec48  movk x9,#0x86bc, LSL #48
71038cec4c  mul x8,x8,x9
71038cec50  stp x25,x8,[x20, #0x18]
71038cec54  ldr x9,[sp, #0x10]
71038cec58  str x9,[x20, #0x28]
71038cec5c  b 0x71038ce854
71038cec60  ldr w8,[x21]
71038cec64  str w8,[x20, #0x10]
71038cec68  ldr x9,[x21, #0x18]
71038cec6c  cbz x9,0x71038cee08
71038cec70  ldr x9,[x20, #0x4c38]
71038cec74  cmp x9,x8
71038cec78  b.hi 0x71038cedf4
71038cec7c  sub x23,x8,x9
71038cec80  ldr x8,[x20, #0x4c30]
71038cec84  add x24,x8,x9
71038cec88  ldr x8,[x20, #0x4c40]
71038cec8c  sub x9,x8,x9
71038cec90  cmp x9,x23
71038cec94  b.cs 0x71038cedb4
71038cec98  mvn x9,x8
71038cec9c  cmp x23,x9
71038ceca0  b.hi 0x71038ceed8
71038ceca4  cmp x8,x23
71038ceca8  csel x10,x23,x8,cc
71038cecac  add x8,x10,x8
71038cecb0  cmp x10,x9
71038cecb4  csinv x28,x8,xzr,ls
71038cecb8  add x0,sp,#0x40
71038cecbc  mov w1,#0x10
71038cecc0  mov x2,x28
71038cecc4  bl 0x710392e1f0
71038cecc8  adrp x22,0x71052a8000
71038ceccc  ldr x22,[x22, #0xa78]
71038cecd0  cmp w0,#0xc
71038cecd4  b.ne 0x71038ced0c
71038cecd8  adrp x8,0x710593d000
71038cecdc  ldr x0,[x8, #0x2b0]
71038cece0  cbz x0,0x71038ced0c
71038cece4  str x28,[sp, #0x48]
71038cece8  ldr x8,[x0]
71038cecec  ldr x8,[x8, #0x30]
71038cecf0  add x1,sp,#0x48
71038cecf4  blr x8
71038cecf8  tbz w0,#0x0,0x71038ced0c
71038cecfc  add x0,sp,#0x40
71038ced00  mov w1,#0x10
71038ced04  mov x2,x28
71038ced08  bl 0x710392e1f0
71038ced0c  cbz x22,0x71038ced20
71038ced10  ldr x2,[sp, #0x40]
71038ced14  mov w1,#0x10
71038ced18  mov x0,x28
71038ced1c  bl 0x71039c19e0
71038ced20  ldr x25,[sp, #0x40]
71038ced24  ldr x26,[x20, #0x4c30]
71038ced28  cbz x26,0x71038cedd4
71038ced2c  subs x22,x24,x26
71038ced30  mov x27,x25
71038ced34  b.eq 0x71038ced4c
71038ced38  mov x0,x25
71038ced3c  mov x1,x26
71038ced40  mov x2,x22
71038ced44  bl 0x71039c00a0
71038ced48  add x27,x25,x22
71038ced4c  mov x0,x27
71038ced50  mov w1,wzr
71038ced54  mov x2,x23
71038ced58  bl 0x71039c02a0
71038ced5c  ldr x8,[x20, #0x4c38]
71038ced60  add x8,x26,x8
71038ced64  add x23,x27,x23
71038ced68  subs x26,x8,x24
71038ced6c  b.eq 0x71038ced84
71038ced70  mov x0,x23
71038ced74  mov x1,x24
71038ced78  mov x2,x26
71038ced7c  bl 0x71039c00a0
71038ced80  add x23,x23,x26
71038ced84  ldr x24,[x20, #0x4c30]
71038ced88  ldr x8,[sp, #0x28]
71038ced8c  cmp x24,x8
71038ced90  b.eq 0x71038cede8
71038ced94  adrp x8,0x71052a8000
71038ced98  ldr x8,[x8, #0xa70]
71038ced9c  cbz x8,0x71038ceda8
71038ceda0  mov x0,x24
71038ceda4  bl 0x71039c19b0
71038ceda8  mov x0,x24
71038cedac  bl 0x710392eb40
71038cedb0  b 0x71038cede8
71038cedb4  cbz x23,0x71038cedf8
71038cedb8  mov x0,x24
71038cedbc  mov w1,wzr
71038cedc0  mov x2,x23
71038cedc4  bl 0x71039c02a0
71038cedc8  ldr x8,[x20, #0x4c38]
71038cedcc  add x8,x8,x23
71038cedd0  b 0x71038cedf4
71038cedd4  mov x0,x25
71038cedd8  mov w1,wzr
71038ceddc  mov x2,x23
71038cede0  bl 0x71039c02a0
71038cede4  add x23,x25,x23
71038cede8  sub x8,x23,x25
71038cedec  str x25,[x20, #0x4c30]
71038cedf0  str x28,[x20, #0x4c40]
71038cedf4  str x8,[x20, #0x4c38]
71038cedf8  ldr x0,[x20, #0x4c30]
71038cedfc  ldr x1,[x21, #0x18]
71038cee00  ldr w2,[x21]
71038cee04  bl 0x71039c00e0
71038cee08  ldr x9,[x20, #0x20]
71038cee0c  ldr x13,[sp, #0x38]
71038cee10  cbz x9,0x71038cee54
71038cee14  mov x11,xzr
71038cee18  mov w8,#0x1
71038cee1c  mov w10,#0x130
71038cee20  ldr x12,[x20, #0x4c38]
71038cee24  cbz x12,0x71038cee44
71038cee28  ldr x9,[x20, #0x18]
71038cee2c  madd x9,x11,x10,x9
71038cee30  ldr w11,[x9]
71038cee34  ldr x12,[x20, #0x4c30]
71038cee38  add x11,x12,x11
71038cee3c  str x11,[x9, #0x28]
71038cee40  ldr x9,[x20, #0x20]
71038cee44  mov w11,w8
71038cee48  add w8,w8,#0x1
71038cee4c  cmp x9,x11
71038cee50  b.hi 0x71038cee20
71038cee54  mov w8,#0x1
71038cee58  strb w8,[x13]
71038cee5c  ldr x8,[x20, #0x8]
71038cee60  stp x20,x8,[x19, #0x8]
71038cee64  ldr x8,[x8]
71038cee68  str x8,[x19, #0x18]
71038cee6c  adrp x8,0x7105239000
71038cee70  add x8,x8,#0x490
71038cee74  str x8,[x19]
71038cee78  ldp x29,x30,[sp, #0xa0]
71038cee7c  ldp x20,x19,[sp, #0x90]
71038cee80  ldp x22,x21,[sp, #0x80]
71038cee84  ldp x24,x23,[sp, #0x70]
71038cee88  ldp x26,x25,[sp, #0x60]
71038cee8c  ldp x28,x27,[sp, #0x50]
71038cee90  add sp,sp,#0xb0
71038cee94  ret
71038cee98  mov w0,#0x10
71038cee9c  bl 0x71039c6c40
71038ceea0  mov x20,x0
71038ceea4  adrp x1,0x7104359000
71038ceea8  add x1,x1,#0xf68
71038ceeac  bl 0x71039c5f10
71038ceeb0  adrp x8,0x71052a8000
71038ceeb4  ldr x8,[x8, #0xbc0]
71038ceeb8  add x8,x8,#0x10
71038ceebc  str x8,[x20]
71038ceec0  adrp x1,0x71052a8000
71038ceec4  adrp x2,0x71052a8000
71038ceec8  ldr x1,[x1, #0xbc8]
71038ceecc  ldr x2,[x2, #0xbd0]
71038ceed0  mov x0,x20
71038ceed4  bl 0x71039c6c50
71038ceed8  mov w0,#0x10
71038ceedc  bl 0x71039c6c40
71038ceee0  mov x20,x0
71038ceee4  adrp x1,0x7104359000
71038ceee8  add x1,x1,#0xf68
71038ceeec  bl 0x71039c5f10
71038ceef0  b 0x71038ceeb0
71038ceef4  b 0x71038ceef8
71038ceef8  mov x19,x0
71038ceefc  mov x0,x20
71038cef00  bl 0x71039c6c60
71038cef04  mov x0,x19
71038cef08  bl 0x71039c19f0
71038cef0c  bl 0x71037b2bc0
71038cef10  ldr x8,[sp, #0x18]
71038cef14  mov x19,x0
71038cef18  cbz x8,0x71038cefc4
71038cef1c  ldr x22,[sp, #0x8]
71038cef20  cbz x22,0x71038cef60
71038cef24  ldr x8,[sp, #0x18]
71038cef28  add x21,x8,#0x18
71038cef2c  ldurb w8,[x21, #-0x10]
71038cef30  tbz w8,#0x0,0x71038cef54
71038cef34  adrp x8,0x71052a8000
71038cef38  ldr x20,[x21]
71038cef3c  ldr x8,[x8, #0xa70]
71038cef40  cbz x8,0x71038cef4c
71038cef44  mov x0,x20
71038cef48  bl 0x71039c19b0
71038cef4c  mov x0,x20
71038cef50  bl 0x710392eb40
71038cef54  sub x22,x22,#0x1
71038cef58  add x21,x21,#0x130
71038cef5c  cbnz x22,0x71038cef2c
71038cef60  ldr x8,[sp, #0x30]
71038cef64  ldr x9,[sp, #0x18]
71038cef68  cmp x8,x9
71038cef6c  b.eq 0x71038cefc4
71038cef70  adrp x8,0x71052a8000
71038cef74  ldr x8,[x8, #0xa70]
71038cef78  cbz x8,0x71038cef84
71038cef7c  ldr x0,[sp, #0x18]
71038cef80  bl 0x71039c19b0
71038cef84  ldr x0,[sp, #0x18]
71038cef88  b 0x71038cefc0
71038cef8c  bl 0x71037b2bc0
71038cef90  bl 0x71037b2bc0
71038cef94  bl 0x71037b2bc0
71038cef98  bl 0x71037b2bc0
71038cef9c  bl 0x71037b2bc0
71038cefa0  bl 0x71037b2bc0
71038cefa4  adrp x8,0x71052a8000
71038cefa8  ldr x8,[x8, #0xa70]
71038cefac  mov x19,x0
71038cefb0  cbz x8,0x71038cefbc
71038cefb4  mov x0,x20
71038cefb8  bl 0x71039c19b0
71038cefbc  mov x0,x20
71038cefc0  bl 0x710392eb40
71038cefc4  mov x0,x19
71038cefc8  bl 0x71039c19f0
71038cefcc  bl 0x71037b2bc0
