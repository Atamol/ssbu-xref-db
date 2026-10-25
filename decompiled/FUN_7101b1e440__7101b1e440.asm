// addr:      7101b1e440
// offset:    0x1b1e440
// name:      FUN_7101b1e440
// mangled:   
// size:      1944

7101b1e440  sub sp,sp,#0xb0
7101b1e444  str x23,[sp, #0x70]
7101b1e448  stp x22,x21,[sp, #0x80]
7101b1e44c  stp x20,x19,[sp, #0x90]
7101b1e450  stp x29,x30,[sp, #0xa0]
7101b1e454  add x29,sp,#0xa0
7101b1e458  ldr x8,[x1]
7101b1e45c  mov x19,x1
7101b1e460  mov x20,x0
7101b1e464  cbz x8,0x7101b1e470
7101b1e468  ldr x21,[x8]
7101b1e46c  b 0x7101b1e474
7101b1e470  mov x21,xzr
7101b1e474  add x2,x20,#0x10
7101b1e478  adrp x1,0x71043ce000
7101b1e47c  add x1,x1,#0xfdf
7101b1e480  mov x0,x21
7101b1e484  bl 0x71033744b0
7101b1e488  add x2,x20,#0xa0
7101b1e48c  adrp x1,0x710438c000
7101b1e490  add x1,x1,#0x54a
7101b1e494  mov x0,x21
7101b1e498  bl 0x71033745a0
7101b1e49c  ldr x0,[x19]
7101b1e4a0  cbz x0,0x7101b1e4bc
7101b1e4a4  ldr x3,[x20, #0x98]
7101b1e4a8  adrp x1,0x7104412000
7101b1e4ac  add x1,x1,#0x558
7101b1e4b0  adrp x2,0x710439b000
7101b1e4b4  add x2,x2,#0x9ac
7101b1e4b8  bl 0x7103375650
7101b1e4bc  mov w0,#0x10
7101b1e4c0  orr w1,wzr,#0x38
7101b1e4c4  bl 0x710392e290
7101b1e4c8  cbnz x0,0x7101b1e500
7101b1e4cc  adrp x8,0x7105332000
7101b1e4d0  ldr x0,[x8, #0xf00]
7101b1e4d4  orr w8,wzr,#0x38
7101b1e4d8  stur wzr,[x29, #-0x24]
7101b1e4dc  sub x1,x29,#0x24
7101b1e4e0  stur x8,[x29, #-0x38]
7101b1e4e4  ldr x8,[x0]
7101b1e4e8  ldr x8,[x8, #0x30]
7101b1e4ec  sub x2,x29,#0x38
7101b1e4f0  blr x8
7101b1e4f4  mov w0,#0x10
7101b1e4f8  orr w1,wzr,#0x38
7101b1e4fc  bl 0x710392e290
7101b1e500  adrp x21,0x71050aa000
7101b1e504  add x21,x21,#0x520
7101b1e508  adrp x8,0x7101b20000
7101b1e50c  add x8,x8,#0x7a0
7101b1e510  stp xzr,xzr,[x0, #0x28]
7101b1e514  str x21,[x0]
7101b1e518  str x20,[x0, #0x10]
7101b1e51c  adrp x1,0x71042c4000
7101b1e520  add x1,x1,#0x9da
7101b1e524  stp x8,xzr,[x0, #0x18]
7101b1e528  sub x2,x29,#0x40
7101b1e52c  str wzr,[x0, #0x8]
7101b1e530  stur x0,[x29, #-0x40]
7101b1e534  mov x0,x19
7101b1e538  bl 0x7103376af0
7101b1e53c  ldur x0,[x29, #-0x40]
7101b1e540  stur xzr,[x29, #-0x40]
7101b1e544  cbz x0,0x7101b1e554
7101b1e548  ldr x8,[x0]
7101b1e54c  ldr x8,[x8, #0x8]
7101b1e550  blr x8
7101b1e554  mov w0,#0x10
7101b1e558  orr w1,wzr,#0x38
7101b1e55c  bl 0x710392e290
7101b1e560  cbnz x0,0x7101b1e598
7101b1e564  adrp x8,0x7105332000
7101b1e568  ldr x0,[x8, #0xf00]
7101b1e56c  orr w8,wzr,#0x38
7101b1e570  stur wzr,[x29, #-0x24]
7101b1e574  sub x1,x29,#0x24
7101b1e578  stur x8,[x29, #-0x38]
7101b1e57c  ldr x8,[x0]
7101b1e580  ldr x8,[x8, #0x30]
7101b1e584  sub x2,x29,#0x38
7101b1e588  blr x8
7101b1e58c  mov w0,#0x10
7101b1e590  orr w1,wzr,#0x38
7101b1e594  bl 0x710392e290
7101b1e598  adrp x8,0x7101b20000
7101b1e59c  add x8,x8,#0x850
7101b1e5a0  adrp x22,0x71050aa000
7101b1e5a4  add x22,x22,#0x548
7101b1e5a8  stp x8,xzr,[x0, #0x18]
7101b1e5ac  mov w8,#0x1
7101b1e5b0  stp xzr,xzr,[x0, #0x28]
7101b1e5b4  str x22,[x0]
7101b1e5b8  adrp x1,0x71042f7000
7101b1e5bc  add x1,x1,#0xea0
7101b1e5c0  str x20,[x0, #0x10]
7101b1e5c4  sub x2,x29,#0x48
7101b1e5c8  str w8,[x0, #0x8]
7101b1e5cc  stur x0,[x29, #-0x48]
7101b1e5d0  mov x0,x19
7101b1e5d4  bl 0x7103376af0
7101b1e5d8  ldur x0,[x29, #-0x48]
7101b1e5dc  stur xzr,[x29, #-0x48]
7101b1e5e0  cbz x0,0x7101b1e5f0
7101b1e5e4  ldr x8,[x0]
7101b1e5e8  ldr x8,[x8, #0x8]
7101b1e5ec  blr x8
7101b1e5f0  mov w0,#0x10
7101b1e5f4  orr w1,wzr,#0x38
7101b1e5f8  bl 0x710392e290
7101b1e5fc  cbnz x0,0x7101b1e634
7101b1e600  adrp x8,0x7105332000
7101b1e604  ldr x0,[x8, #0xf00]
7101b1e608  orr w8,wzr,#0x38
7101b1e60c  stur wzr,[x29, #-0x24]
7101b1e610  sub x1,x29,#0x24
7101b1e614  stur x8,[x29, #-0x38]
7101b1e618  ldr x8,[x0]
7101b1e61c  ldr x8,[x8, #0x30]
7101b1e620  sub x2,x29,#0x38
7101b1e624  blr x8
7101b1e628  mov w0,#0x10
7101b1e62c  orr w1,wzr,#0x38
7101b1e630  bl 0x710392e290
7101b1e634  adrp x8,0x7101b20000
7101b1e638  add x8,x8,#0xba0
7101b1e63c  str x22,[x0]
7101b1e640  stp x8,xzr,[x0, #0x18]
7101b1e644  mov w8,#0x1
7101b1e648  stp xzr,xzr,[x0, #0x28]
7101b1e64c  adrp x1,0x7104443000
7101b1e650  add x1,x1,#0x1c4
7101b1e654  add x2,sp,#0x50
7101b1e658  str x20,[x0, #0x10]
7101b1e65c  str w8,[x0, #0x8]
7101b1e660  str x0,[sp, #0x50]
7101b1e664  mov x0,x19
7101b1e668  bl 0x7103376af0
7101b1e66c  ldr x0,[sp, #0x50]
7101b1e670  str xzr,[sp, #0x50]
7101b1e674  cbz x0,0x7101b1e684
7101b1e678  ldr x8,[x0]
7101b1e67c  ldr x8,[x8, #0x8]
7101b1e680  blr x8
7101b1e684  mov w0,#0x10
7101b1e688  orr w1,wzr,#0x38
7101b1e68c  bl 0x710392e290
7101b1e690  cbnz x0,0x7101b1e6c8
7101b1e694  adrp x8,0x7105332000
7101b1e698  ldr x0,[x8, #0xf00]
7101b1e69c  orr w8,wzr,#0x38
7101b1e6a0  stur wzr,[x29, #-0x24]
7101b1e6a4  sub x1,x29,#0x24
7101b1e6a8  stur x8,[x29, #-0x38]
7101b1e6ac  ldr x8,[x0]
7101b1e6b0  ldr x8,[x8, #0x30]
7101b1e6b4  sub x2,x29,#0x38
7101b1e6b8  blr x8
7101b1e6bc  mov w0,#0x10
7101b1e6c0  orr w1,wzr,#0x38
7101b1e6c4  bl 0x710392e290
7101b1e6c8  adrp x8,0x7101b20000
7101b1e6cc  add x8,x8,#0xe30
7101b1e6d0  adrp x23,0x71050aa000
7101b1e6d4  add x23,x23,#0x570
7101b1e6d8  stp xzr,x8,[x0, #0x20]
7101b1e6dc  mov w8,#0x1
7101b1e6e0  stp x20,xzr,[x0, #0x10]
7101b1e6e4  str x23,[x0]
7101b1e6e8  adrp x1,0x71043be000
7101b1e6ec  add x1,x1,#0x2bb
7101b1e6f0  str xzr,[x0, #0x30]
7101b1e6f4  add x2,sp,#0x48
7101b1e6f8  str w8,[x0, #0x8]
7101b1e6fc  str x0,[sp, #0x48]
7101b1e700  mov x0,x19
7101b1e704  bl 0x7103376af0
7101b1e708  ldr x0,[sp, #0x48]
7101b1e70c  str xzr,[sp, #0x48]
7101b1e710  cbz x0,0x7101b1e720
7101b1e714  ldr x8,[x0]
7101b1e718  ldr x8,[x8, #0x8]
7101b1e71c  blr x8
7101b1e720  mov w0,#0x10
7101b1e724  orr w1,wzr,#0x38
7101b1e728  bl 0x710392e290
7101b1e72c  cbnz x0,0x7101b1e764
7101b1e730  adrp x8,0x7105332000
7101b1e734  ldr x0,[x8, #0xf00]
7101b1e738  orr w8,wzr,#0x38
7101b1e73c  stur wzr,[x29, #-0x24]
7101b1e740  sub x1,x29,#0x24
7101b1e744  stur x8,[x29, #-0x38]
7101b1e748  ldr x8,[x0]
7101b1e74c  ldr x8,[x8, #0x30]
7101b1e750  sub x2,x29,#0x38
7101b1e754  blr x8
7101b1e758  mov w0,#0x10
7101b1e75c  orr w1,wzr,#0x38
7101b1e760  bl 0x710392e290
7101b1e764  adrp x8,0x7101b20000
7101b1e768  add x8,x8,#0xed0
7101b1e76c  str x23,[x0]
7101b1e770  stp xzr,x8,[x0, #0x20]
7101b1e774  mov w8,#0x1
7101b1e778  stp x20,xzr,[x0, #0x10]
7101b1e77c  adrp x1,0x71042b3000
7101b1e780  add x1,x1,#0xf36
7101b1e784  add x2,sp,#0x40
7101b1e788  str xzr,[x0, #0x30]
7101b1e78c  str w8,[x0, #0x8]
7101b1e790  str x0,[sp, #0x40]
7101b1e794  mov x0,x19
7101b1e798  bl 0x7103376af0
7101b1e79c  ldr x0,[sp, #0x40]
7101b1e7a0  str xzr,[sp, #0x40]
7101b1e7a4  cbz x0,0x7101b1e7b4
7101b1e7a8  ldr x8,[x0]
7101b1e7ac  ldr x8,[x8, #0x8]
7101b1e7b0  blr x8
7101b1e7b4  mov w0,#0x10
7101b1e7b8  orr w1,wzr,#0x38
7101b1e7bc  bl 0x710392e290
7101b1e7c0  cbnz x0,0x7101b1e7f8
7101b1e7c4  adrp x8,0x7105332000
7101b1e7c8  ldr x0,[x8, #0xf00]
7101b1e7cc  orr w8,wzr,#0x38
7101b1e7d0  stur wzr,[x29, #-0x24]
7101b1e7d4  sub x1,x29,#0x24
7101b1e7d8  stur x8,[x29, #-0x38]
7101b1e7dc  ldr x8,[x0]
7101b1e7e0  ldr x8,[x8, #0x30]
7101b1e7e4  sub x2,x29,#0x38
7101b1e7e8  blr x8
7101b1e7ec  mov w0,#0x10
7101b1e7f0  orr w1,wzr,#0x38
7101b1e7f4  bl 0x710392e290
7101b1e7f8  adrp x8,0x7101b20000
7101b1e7fc  add x8,x8,#0xf00
7101b1e800  str x21,[x0]
7101b1e804  stp xzr,xzr,[x0, #0x28]
7101b1e808  adrp x1,0x710426f000
7101b1e80c  add x1,x1,#0xbf3
7101b1e810  str x20,[x0, #0x10]
7101b1e814  add x2,sp,#0x38
7101b1e818  stp x8,xzr,[x0, #0x18]
7101b1e81c  str wzr,[x0, #0x8]
7101b1e820  str x0,[sp, #0x38]
7101b1e824  mov x0,x19
7101b1e828  bl 0x7103376af0
7101b1e82c  ldr x0,[sp, #0x38]
7101b1e830  str xzr,[sp, #0x38]
7101b1e834  cbz x0,0x7101b1e844
7101b1e838  ldr x8,[x0]
7101b1e83c  ldr x8,[x8, #0x8]
7101b1e840  blr x8
7101b1e844  mov w0,#0x10
7101b1e848  orr w1,wzr,#0x38
7101b1e84c  bl 0x710392e290
7101b1e850  cbnz x0,0x7101b1e888
7101b1e854  adrp x8,0x7105332000
7101b1e858  ldr x0,[x8, #0xf00]
7101b1e85c  orr w8,wzr,#0x38
7101b1e860  stur wzr,[x29, #-0x24]
7101b1e864  sub x1,x29,#0x24
7101b1e868  stur x8,[x29, #-0x38]
7101b1e86c  ldr x8,[x0]
7101b1e870  ldr x8,[x8, #0x30]
7101b1e874  sub x2,x29,#0x38
7101b1e878  blr x8
7101b1e87c  mov w0,#0x10
7101b1e880  orr w1,wzr,#0x38
7101b1e884  bl 0x710392e290
7101b1e888  adrp x8,0x7101b21000
7101b1e88c  add x8,x8,#0xf0
7101b1e890  str x22,[x0]
7101b1e894  stp x8,xzr,[x0, #0x18]
7101b1e898  mov w8,#0x1
7101b1e89c  stp xzr,xzr,[x0, #0x28]
7101b1e8a0  adrp x1,0x7104349000
7101b1e8a4  add x1,x1,#0xeff
7101b1e8a8  add x2,sp,#0x30
7101b1e8ac  str x20,[x0, #0x10]
7101b1e8b0  str w8,[x0, #0x8]
7101b1e8b4  str x0,[sp, #0x30]
7101b1e8b8  mov x0,x19
7101b1e8bc  bl 0x7103376af0
7101b1e8c0  ldr x0,[sp, #0x30]
7101b1e8c4  str xzr,[sp, #0x30]
7101b1e8c8  cbz x0,0x7101b1e8d8
7101b1e8cc  ldr x8,[x0]
7101b1e8d0  ldr x8,[x8, #0x8]
7101b1e8d4  blr x8
7101b1e8d8  mov w0,#0x10
7101b1e8dc  orr w1,wzr,#0x38
7101b1e8e0  bl 0x710392e290
7101b1e8e4  cbnz x0,0x7101b1e91c
7101b1e8e8  adrp x8,0x7105332000
7101b1e8ec  ldr x0,[x8, #0xf00]
7101b1e8f0  orr w8,wzr,#0x38
7101b1e8f4  stur wzr,[x29, #-0x24]
7101b1e8f8  sub x1,x29,#0x24
7101b1e8fc  stur x8,[x29, #-0x38]
7101b1e900  ldr x8,[x0]
7101b1e904  ldr x8,[x8, #0x30]
7101b1e908  sub x2,x29,#0x38
7101b1e90c  blr x8
7101b1e910  mov w0,#0x10
7101b1e914  orr w1,wzr,#0x38
7101b1e918  bl 0x710392e290
7101b1e91c  adrp x8,0x71050aa000
7101b1e920  add x8,x8,#0x598
7101b1e924  adrp x9,0x7101b21000
7101b1e928  add x9,x9,#0x5f0
7101b1e92c  str x8,[x0]
7101b1e930  mov w8,#0x1
7101b1e934  stp x20,xzr,[x0, #0x10]
7101b1e938  str xzr,[x0, #0x30]
7101b1e93c  stp xzr,x9,[x0, #0x20]
7101b1e940  adrp x1,0x7104339000
7101b1e944  add x1,x1,#0xd67
7101b1e948  add x2,sp,#0x28
7101b1e94c  str w8,[x0, #0x8]
7101b1e950  str x0,[sp, #0x28]
7101b1e954  mov x0,x19
7101b1e958  bl 0x7103376af0
7101b1e95c  ldr x0,[sp, #0x28]
7101b1e960  str xzr,[sp, #0x28]
7101b1e964  cbz x0,0x7101b1e974
7101b1e968  ldr x8,[x0]
7101b1e96c  ldr x8,[x8, #0x8]
7101b1e970  blr x8
7101b1e974  mov w0,#0x10
7101b1e978  orr w1,wzr,#0x38
7101b1e97c  bl 0x710392e290
7101b1e980  cbnz x0,0x7101b1e9b8
7101b1e984  adrp x8,0x7105332000
7101b1e988  ldr x0,[x8, #0xf00]
7101b1e98c  orr w8,wzr,#0x38
7101b1e990  stur wzr,[x29, #-0x24]
7101b1e994  sub x1,x29,#0x24
7101b1e998  stur x8,[x29, #-0x38]
7101b1e99c  ldr x8,[x0]
7101b1e9a0  ldr x8,[x8, #0x30]
7101b1e9a4  sub x2,x29,#0x38
7101b1e9a8  blr x8
7101b1e9ac  mov w0,#0x10
7101b1e9b0  orr w1,wzr,#0x38
7101b1e9b4  bl 0x710392e290
7101b1e9b8  adrp x8,0x7101b21000
7101b1e9bc  add x8,x8,#0x600
7101b1e9c0  str x21,[x0]
7101b1e9c4  stp xzr,xzr,[x0, #0x28]
7101b1e9c8  adrp x1,0x71042a2000
7101b1e9cc  add x1,x1,#0xb06
7101b1e9d0  str x20,[x0, #0x10]
7101b1e9d4  add x2,sp,#0x20
7101b1e9d8  stp x8,xzr,[x0, #0x18]
7101b1e9dc  str wzr,[x0, #0x8]
7101b1e9e0  str x0,[sp, #0x20]
7101b1e9e4  mov x0,x19
7101b1e9e8  bl 0x7103376af0
7101b1e9ec  ldr x0,[sp, #0x20]
7101b1e9f0  str xzr,[sp, #0x20]
7101b1e9f4  cbz x0,0x7101b1ea04
7101b1e9f8  ldr x8,[x0]
7101b1e9fc  ldr x8,[x8, #0x8]
7101b1ea00  blr x8
7101b1ea04  mov w0,#0x10
7101b1ea08  orr w1,wzr,#0x38
7101b1ea0c  bl 0x710392e290
7101b1ea10  cbnz x0,0x7101b1ea48
7101b1ea14  adrp x8,0x7105332000
7101b1ea18  ldr x0,[x8, #0xf00]
7101b1ea1c  orr w8,wzr,#0x38
7101b1ea20  stur wzr,[x29, #-0x24]
7101b1ea24  sub x1,x29,#0x24
7101b1ea28  stur x8,[x29, #-0x38]
7101b1ea2c  ldr x8,[x0]
7101b1ea30  ldr x8,[x8, #0x30]
7101b1ea34  sub x2,x29,#0x38
7101b1ea38  blr x8
7101b1ea3c  mov w0,#0x10
7101b1ea40  orr w1,wzr,#0x38
7101b1ea44  bl 0x710392e290
7101b1ea48  adrp x8,0x7101b21000
7101b1ea4c  add x8,x8,#0x750
7101b1ea50  str x21,[x0]
7101b1ea54  stp xzr,xzr,[x0, #0x28]
7101b1ea58  adrp x1,0x7104421000
7101b1ea5c  add x1,x1,#0xf44
7101b1ea60  str x20,[x0, #0x10]
7101b1ea64  add x2,sp,#0x18
7101b1ea68  stp x8,xzr,[x0, #0x18]
7101b1ea6c  str wzr,[x0, #0x8]
7101b1ea70  str x0,[sp, #0x18]
7101b1ea74  mov x0,x19
7101b1ea78  bl 0x7103376af0
7101b1ea7c  ldr x0,[sp, #0x18]
7101b1ea80  str xzr,[sp, #0x18]
7101b1ea84  cbz x0,0x7101b1ea94
7101b1ea88  ldr x8,[x0]
7101b1ea8c  ldr x8,[x8, #0x8]
7101b1ea90  blr x8
7101b1ea94  mov w0,#0x10
7101b1ea98  orr w1,wzr,#0x38
7101b1ea9c  bl 0x710392e290
7101b1eaa0  cbnz x0,0x7101b1ead8
7101b1eaa4  adrp x8,0x7105332000
7101b1eaa8  ldr x0,[x8, #0xf00]
7101b1eaac  orr w8,wzr,#0x38
7101b1eab0  stur wzr,[x29, #-0x24]
7101b1eab4  sub x1,x29,#0x24
7101b1eab8  stur x8,[x29, #-0x38]
7101b1eabc  ldr x8,[x0]
7101b1eac0  ldr x8,[x8, #0x30]
7101b1eac4  sub x2,x29,#0x38
7101b1eac8  blr x8
7101b1eacc  mov w0,#0x10
7101b1ead0  orr w1,wzr,#0x38
7101b1ead4  bl 0x710392e290
7101b1ead8  adrp x8,0x71050aa000
7101b1eadc  add x8,x8,#0x5c0
7101b1eae0  str x20,[x0, #0x10]
7101b1eae4  str x8,[x0]
7101b1eae8  adrp x8,0x7101b21000
7101b1eaec  add x8,x8,#0x800
7101b1eaf0  stp x8,xzr,[x0, #0x18]
7101b1eaf4  mov w8,#0x1
7101b1eaf8  stp xzr,xzr,[x0, #0x28]
7101b1eafc  adrp x1,0x7104349000
7101b1eb00  add x1,x1,#0xf12
7101b1eb04  add x2,sp,#0x10
7101b1eb08  str w8,[x0, #0x8]
7101b1eb0c  str x0,[sp, #0x10]
7101b1eb10  mov x0,x19
7101b1eb14  bl 0x7103376af0
7101b1eb18  ldr x0,[sp, #0x10]
7101b1eb1c  str xzr,[sp, #0x10]
7101b1eb20  cbz x0,0x7101b1eb30
7101b1eb24  ldr x8,[x0]
7101b1eb28  ldr x8,[x8, #0x8]
7101b1eb2c  blr x8
7101b1eb30  mov w0,#0x10
7101b1eb34  orr w1,wzr,#0x38
7101b1eb38  bl 0x710392e290
7101b1eb3c  cbnz x0,0x7101b1eb74
7101b1eb40  adrp x8,0x7105332000
7101b1eb44  ldr x0,[x8, #0xf00]
7101b1eb48  orr w8,wzr,#0x38
7101b1eb4c  stur wzr,[x29, #-0x24]
7101b1eb50  sub x1,x29,#0x24
7101b1eb54  stur x8,[x29, #-0x38]
7101b1eb58  ldr x8,[x0]
7101b1eb5c  ldr x8,[x8, #0x30]
7101b1eb60  sub x2,x29,#0x38
7101b1eb64  blr x8
7101b1eb68  mov w0,#0x10
7101b1eb6c  orr w1,wzr,#0x38
7101b1eb70  bl 0x710392e290
7101b1eb74  adrp x8,0x7101b21000
7101b1eb78  add x8,x8,#0x8a0
7101b1eb7c  str x21,[x0]
7101b1eb80  stp xzr,xzr,[x0, #0x28]
7101b1eb84  adrp x1,0x7104454000
7101b1eb88  add x1,x1,#0x6a5
7101b1eb8c  str x20,[x0, #0x10]
7101b1eb90  add x2,sp,#0x8
7101b1eb94  stp x8,xzr,[x0, #0x18]
7101b1eb98  str wzr,[x0, #0x8]
7101b1eb9c  str x0,[sp, #0x8]
7101b1eba0  mov x0,x19
7101b1eba4  bl 0x7103376af0
7101b1eba8  ldr x0,[sp, #0x8]
7101b1ebac  str xzr,[sp, #0x8]
7101b1ebb0  cbz x0,0x7101b1ebc0
7101b1ebb4  ldr x8,[x0]
7101b1ebb8  ldr x8,[x8, #0x8]
7101b1ebbc  blr x8
7101b1ebc0  ldp x29,x30,[sp, #0xa0]
7101b1ebc4  ldr x23,[sp, #0x70]
7101b1ebc8  ldp x20,x19,[sp, #0x90]
7101b1ebcc  ldp x22,x21,[sp, #0x80]
7101b1ebd0  add sp,sp,#0xb0
7101b1ebd4  ret
