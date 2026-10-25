// addr:      710056a420
// offset:    0x56a420
// name:      FUN_710056a420
// mangled:   
// size:      3740

710056a420  sub sp,sp,#0x60
710056a424  str x25,[sp, #0x10]
710056a428  stp x24,x23,[sp, #0x20]
710056a42c  stp x22,x21,[sp, #0x30]
710056a430  stp x20,x19,[sp, #0x40]
710056a434  stp x29,x30,[sp, #0x50]
710056a438  add x29,sp,#0x50
710056a43c  adrp x8,0x7104f77000
710056a440  add x8,x8,#0x158
710056a444  str wzr,[x0, #0x38]
710056a448  str x8,[x0]
710056a44c  mov x8,x0
710056a450  mov x19,x0
710056a454  stp xzr,xzr,[x0, #0x28]
710056a458  stp xzr,xzr,[x0, #0x18]
710056a45c  stp xzr,xzr,[x0, #0x8]
710056a460  str xzr,[x8, #0x48]!
710056a464  str x8,[x0, #0x40]
710056a468  mov x8,x0
710056a46c  str xzr,[x8, #0x60]!
710056a470  stp xzr,x8,[x0, #0x50]
710056a474  mov x8,x0
710056a478  str xzr,[x8, #0x78]!
710056a47c  stp xzr,x8,[x0, #0x68]
710056a480  add x8,x0,#0x90
710056a484  str x8,[x0, #0x90]
710056a488  stp xzr,xzr,[x0, #0x80]
710056a48c  add x0,x0,#0xa8
710056a490  stp x8,xzr,[x19, #0x98]
710056a494  bl 0x71039c26d0
710056a498  mov x8,x19
710056a49c  mov w9,#0x1
710056a4a0  adrp x10,0x7104f77000
710056a4a4  add x10,x10,#0x3b0
710056a4a8  orr x22,xzr,#0xffffff00ffffff
710056a4ac  mov w21,#0xffffffff
710056a4b0  str xzr,[x8, #0xf0]!
710056a4b4  sturb w9,[x8, #-0x28]
710056a4b8  mov w9,#0x10
710056a4bc  strb wzr,[x8, #0x28]
710056a4c0  mov w0,#0x10
710056a4c4  mov w1,#0x20
710056a4c8  str xzr,[x8, #0x30]
710056a4cc  stp x10,x9,[x8, #-0x20]
710056a4d0  str w21,[x8, #0x38]
710056a4d4  stp xzr,x8,[x8, #-0x10]
710056a4d8  stp xzr,xzr,[x8, #0x8]
710056a4dc  stp x22,xzr,[x8, #0x18]
710056a4e0  bl 0x710392e290
710056a4e4  mov x20,x0
710056a4e8  cbnz x0,0x710056a534
710056a4ec  adrp x8,0x7105332000
710056a4f0  ldr x0,[x8, #0xf00]
710056a4f4  cbz x0,0x710056a530
710056a4f8  mov w8,#0x20
710056a4fc  str wzr,[sp, #0x1c]
710056a500  add x1,sp,#0x1c
710056a504  str x8,[sp, #0x8]
710056a508  ldr x8,[x0]
710056a50c  ldr x8,[x8, #0x30]
710056a510  add x2,sp,#0x8
710056a514  blr x8
710056a518  tbz w0,#0x0,0x710056a530
710056a51c  mov w0,#0x10
710056a520  mov w1,#0x20
710056a524  bl 0x710392e290
710056a528  mov x20,x0
710056a52c  cbnz x0,0x710056a534
710056a530  mov x20,xzr
710056a534  mov x0,x20
710056a538  stp xzr,xzr,[x20, #0x10]
710056a53c  stp xzr,xzr,[x20]
710056a540  bl 0x71039c26d0
710056a544  mov w0,#0x10
710056a548  mov w1,#0x20
710056a54c  strb wzr,[x19, #0x160]
710056a550  stp xzr,xzr,[x19, #0x140]
710056a554  str xzr,[x19, #0x168]
710056a558  str w21,[x19, #0x170]
710056a55c  stp x20,xzr,[x19, #0x130]
710056a560  stp x22,xzr,[x19, #0x150]
710056a564  bl 0x710392e290
710056a568  mov x20,x0
710056a56c  cbnz x0,0x710056a5b8
710056a570  adrp x8,0x7105332000
710056a574  ldr x0,[x8, #0xf00]
710056a578  cbz x0,0x710056a5b4
710056a57c  mov w8,#0x20
710056a580  str wzr,[sp, #0x1c]
710056a584  add x1,sp,#0x1c
710056a588  str x8,[sp, #0x8]
710056a58c  ldr x8,[x0]
710056a590  ldr x8,[x8, #0x30]
710056a594  add x2,sp,#0x8
710056a598  blr x8
710056a59c  tbz w0,#0x0,0x710056a5b4
710056a5a0  mov w0,#0x10
710056a5a4  mov w1,#0x20
710056a5a8  bl 0x710392e290
710056a5ac  mov x20,x0
710056a5b0  cbnz x0,0x710056a5b8
710056a5b4  mov x20,xzr
710056a5b8  mov x0,x20
710056a5bc  stp xzr,xzr,[x20, #0x10]
710056a5c0  stp xzr,xzr,[x20]
710056a5c4  bl 0x71039c26d0
710056a5c8  orr x22,xzr,#0xffffff00ffffff
710056a5cc  mov w0,#0x10
710056a5d0  mov w1,#0x20
710056a5d4  stp xzr,xzr,[x19, #0x188]
710056a5d8  strb wzr,[x19, #0x1a8]
710056a5dc  stp x20,xzr,[x19, #0x178]
710056a5e0  str xzr,[x19, #0x1b0]
710056a5e4  str w21,[x19, #0x1b8]
710056a5e8  stp x22,xzr,[x19, #0x198]
710056a5ec  bl 0x710392e290
710056a5f0  mov x20,x0
710056a5f4  cbnz x0,0x710056a640
710056a5f8  adrp x8,0x7105332000
710056a5fc  ldr x0,[x8, #0xf00]
710056a600  cbz x0,0x710056a63c
710056a604  mov w8,#0x20
710056a608  str wzr,[sp, #0x1c]
710056a60c  add x1,sp,#0x1c
710056a610  str x8,[sp, #0x8]
710056a614  ldr x8,[x0]
710056a618  ldr x8,[x8, #0x30]
710056a61c  add x2,sp,#0x8
710056a620  blr x8
710056a624  tbz w0,#0x0,0x710056a63c
710056a628  mov w0,#0x10
710056a62c  mov w1,#0x20
710056a630  bl 0x710392e290
710056a634  mov x20,x0
710056a638  cbnz x0,0x710056a640
710056a63c  mov x20,xzr
710056a640  mov x0,x20
710056a644  stp xzr,xzr,[x20, #0x10]
710056a648  stp xzr,xzr,[x20]
710056a64c  bl 0x71039c26d0
710056a650  mov w0,#0x10
710056a654  mov w1,#0x20
710056a658  strb wzr,[x19, #0x1f0]
710056a65c  stp xzr,xzr,[x19, #0x1d0]
710056a660  str xzr,[x19, #0x1f8]
710056a664  str w21,[x19, #0x200]
710056a668  stp x20,xzr,[x19, #0x1c0]
710056a66c  stp x22,xzr,[x19, #0x1e0]
710056a670  bl 0x710392e290
710056a674  mov x20,x0
710056a678  cbnz x0,0x710056a6c4
710056a67c  adrp x8,0x7105332000
710056a680  ldr x0,[x8, #0xf00]
710056a684  cbz x0,0x710056a6c0
710056a688  mov w8,#0x20
710056a68c  str wzr,[sp, #0x1c]
710056a690  add x1,sp,#0x1c
710056a694  str x8,[sp, #0x8]
710056a698  ldr x8,[x0]
710056a69c  ldr x8,[x8, #0x30]
710056a6a0  add x2,sp,#0x8
710056a6a4  blr x8
710056a6a8  tbz w0,#0x0,0x710056a6c0
710056a6ac  mov w0,#0x10
710056a6b0  mov w1,#0x20
710056a6b4  bl 0x710392e290
710056a6b8  mov x20,x0
710056a6bc  cbnz x0,0x710056a6c4
710056a6c0  mov x20,xzr
710056a6c4  mov x0,x20
710056a6c8  stp xzr,xzr,[x20, #0x10]
710056a6cc  stp xzr,xzr,[x20]
710056a6d0  bl 0x71039c26d0
710056a6d4  orr x22,xzr,#0xffffff00ffffff
710056a6d8  mov w0,#0x10
710056a6dc  mov w1,#0x20
710056a6e0  str x20,[x19, #0x208]
710056a6e4  str xzr,[x19, #0x220]
710056a6e8  str xzr,[x19, #0x218]
710056a6ec  str xzr,[x19, #0x210]
710056a6f0  str x22,[x19, #0x228]
710056a6f4  str xzr,[x19, #0x230]
710056a6f8  strb wzr,[x19, #0x238]
710056a6fc  str xzr,[x19, #0x240]
710056a700  str w21,[x19, #0x248]
710056a704  bl 0x710392e290
710056a708  mov x20,x0
710056a70c  cbnz x0,0x710056a758
710056a710  adrp x8,0x7105332000
710056a714  ldr x0,[x8, #0xf00]
710056a718  cbz x0,0x710056a754
710056a71c  mov w8,#0x20
710056a720  str wzr,[sp, #0x1c]
710056a724  add x1,sp,#0x1c
710056a728  str x8,[sp, #0x8]
710056a72c  ldr x8,[x0]
710056a730  ldr x8,[x8, #0x30]
710056a734  add x2,sp,#0x8
710056a738  blr x8
710056a73c  tbz w0,#0x0,0x710056a754
710056a740  mov w0,#0x10
710056a744  mov w1,#0x20
710056a748  bl 0x710392e290
710056a74c  mov x20,x0
710056a750  cbnz x0,0x710056a758
710056a754  mov x20,xzr
710056a758  mov x0,x20
710056a75c  stp xzr,xzr,[x20, #0x10]
710056a760  stp xzr,xzr,[x20]
710056a764  bl 0x71039c26d0
710056a768  mov w0,#0x10
710056a76c  mov w1,#0x20
710056a770  str x20,[x19, #0x250]
710056a774  str xzr,[x19, #0x268]
710056a778  str xzr,[x19, #0x260]
710056a77c  str xzr,[x19, #0x258]
710056a780  str x22,[x19, #0x270]
710056a784  str xzr,[x19, #0x278]
710056a788  strb wzr,[x19, #0x280]
710056a78c  str xzr,[x19, #0x288]
710056a790  str w21,[x19, #0x290]
710056a794  bl 0x710392e290
710056a798  mov x20,x0
710056a79c  cbnz x0,0x710056a7e8
710056a7a0  adrp x8,0x7105332000
710056a7a4  ldr x0,[x8, #0xf00]
710056a7a8  cbz x0,0x710056a7e4
710056a7ac  mov w8,#0x20
710056a7b0  str wzr,[sp, #0x1c]
710056a7b4  add x1,sp,#0x1c
710056a7b8  str x8,[sp, #0x8]
710056a7bc  ldr x8,[x0]
710056a7c0  ldr x8,[x8, #0x30]
710056a7c4  add x2,sp,#0x8
710056a7c8  blr x8
710056a7cc  tbz w0,#0x0,0x710056a7e4
710056a7d0  mov w0,#0x10
710056a7d4  mov w1,#0x20
710056a7d8  bl 0x710392e290
710056a7dc  mov x20,x0
710056a7e0  cbnz x0,0x710056a7e8
710056a7e4  mov x20,xzr
710056a7e8  mov x0,x20
710056a7ec  stp xzr,xzr,[x20, #0x10]
710056a7f0  stp xzr,xzr,[x20]
710056a7f4  bl 0x71039c26d0
710056a7f8  orr x22,xzr,#0xffffff00ffffff
710056a7fc  mov w0,#0x10
710056a800  mov w1,#0x20
710056a804  str x20,[x19, #0x298]
710056a808  str xzr,[x19, #0x2b0]
710056a80c  str xzr,[x19, #0x2a8]
710056a810  str xzr,[x19, #0x2a0]
710056a814  str x22,[x19, #0x2b8]
710056a818  str xzr,[x19, #0x2c0]
710056a81c  strb wzr,[x19, #0x2c8]
710056a820  str xzr,[x19, #0x2d0]
710056a824  str w21,[x19, #0x2d8]
710056a828  bl 0x710392e290
710056a82c  mov x20,x0
710056a830  cbnz x0,0x710056a87c
710056a834  adrp x8,0x7105332000
710056a838  ldr x0,[x8, #0xf00]
710056a83c  cbz x0,0x710056a878
710056a840  mov w8,#0x20
710056a844  str wzr,[sp, #0x1c]
710056a848  add x1,sp,#0x1c
710056a84c  str x8,[sp, #0x8]
710056a850  ldr x8,[x0]
710056a854  ldr x8,[x8, #0x30]
710056a858  add x2,sp,#0x8
710056a85c  blr x8
710056a860  tbz w0,#0x0,0x710056a878
710056a864  mov w0,#0x10
710056a868  mov w1,#0x20
710056a86c  bl 0x710392e290
710056a870  mov x20,x0
710056a874  cbnz x0,0x710056a87c
710056a878  mov x20,xzr
710056a87c  mov x0,x20
710056a880  stp xzr,xzr,[x20, #0x10]
710056a884  stp xzr,xzr,[x20]
710056a888  bl 0x71039c26d0
710056a88c  mov w0,#0x10
710056a890  mov w1,#0x20
710056a894  str x20,[x19, #0x2e0]
710056a898  str xzr,[x19, #0x2f8]
710056a89c  str xzr,[x19, #0x2f0]
710056a8a0  str xzr,[x19, #0x2e8]
710056a8a4  str x22,[x19, #0x300]
710056a8a8  str xzr,[x19, #0x308]
710056a8ac  strb wzr,[x19, #0x310]
710056a8b0  str xzr,[x19, #0x318]
710056a8b4  str w21,[x19, #0x320]
710056a8b8  bl 0x710392e290
710056a8bc  mov x20,x0
710056a8c0  cbnz x0,0x710056a90c
710056a8c4  adrp x8,0x7105332000
710056a8c8  ldr x0,[x8, #0xf00]
710056a8cc  cbz x0,0x710056a908
710056a8d0  mov w8,#0x20
710056a8d4  str wzr,[sp, #0x1c]
710056a8d8  add x1,sp,#0x1c
710056a8dc  str x8,[sp, #0x8]
710056a8e0  ldr x8,[x0]
710056a8e4  ldr x8,[x8, #0x30]
710056a8e8  add x2,sp,#0x8
710056a8ec  blr x8
710056a8f0  tbz w0,#0x0,0x710056a908
710056a8f4  mov w0,#0x10
710056a8f8  mov w1,#0x20
710056a8fc  bl 0x710392e290
710056a900  mov x20,x0
710056a904  cbnz x0,0x710056a90c
710056a908  mov x20,xzr
710056a90c  mov x0,x20
710056a910  stp xzr,xzr,[x20, #0x10]
710056a914  stp xzr,xzr,[x20]
710056a918  bl 0x71039c26d0
710056a91c  orr x22,xzr,#0xffffff00ffffff
710056a920  mov w0,#0x10
710056a924  mov w1,#0x20
710056a928  str x20,[x19, #0x328]
710056a92c  str xzr,[x19, #0x340]
710056a930  str xzr,[x19, #0x338]
710056a934  str xzr,[x19, #0x330]
710056a938  str x22,[x19, #0x348]
710056a93c  str xzr,[x19, #0x350]
710056a940  strb wzr,[x19, #0x358]
710056a944  str xzr,[x19, #0x360]
710056a948  str w21,[x19, #0x368]
710056a94c  bl 0x710392e290
710056a950  mov x20,x0
710056a954  cbnz x0,0x710056a9a0
710056a958  adrp x8,0x7105332000
710056a95c  ldr x0,[x8, #0xf00]
710056a960  cbz x0,0x710056a99c
710056a964  mov w8,#0x20
710056a968  str wzr,[sp, #0x1c]
710056a96c  add x1,sp,#0x1c
710056a970  str x8,[sp, #0x8]
710056a974  ldr x8,[x0]
710056a978  ldr x8,[x8, #0x30]
710056a97c  add x2,sp,#0x8
710056a980  blr x8
710056a984  tbz w0,#0x0,0x710056a99c
710056a988  mov w0,#0x10
710056a98c  mov w1,#0x20
710056a990  bl 0x710392e290
710056a994  mov x20,x0
710056a998  cbnz x0,0x710056a9a0
710056a99c  mov x20,xzr
710056a9a0  mov x0,x20
710056a9a4  stp xzr,xzr,[x20, #0x10]
710056a9a8  stp xzr,xzr,[x20]
710056a9ac  bl 0x71039c26d0
710056a9b0  mov w0,#0x10
710056a9b4  mov w1,#0x20
710056a9b8  str x20,[x19, #0x370]
710056a9bc  str xzr,[x19, #0x388]
710056a9c0  str xzr,[x19, #0x380]
710056a9c4  str xzr,[x19, #0x378]
710056a9c8  str x22,[x19, #0x390]
710056a9cc  str xzr,[x19, #0x398]
710056a9d0  strb wzr,[x19, #0x3a0]
710056a9d4  str xzr,[x19, #0x3a8]
710056a9d8  str w21,[x19, #0x3b0]
710056a9dc  bl 0x710392e290
710056a9e0  mov x20,x0
710056a9e4  cbnz x0,0x710056aa30
710056a9e8  adrp x8,0x7105332000
710056a9ec  ldr x0,[x8, #0xf00]
710056a9f0  cbz x0,0x710056aa2c
710056a9f4  mov w8,#0x20
710056a9f8  str wzr,[sp, #0x1c]
710056a9fc  add x1,sp,#0x1c
710056aa00  str x8,[sp, #0x8]
710056aa04  ldr x8,[x0]
710056aa08  ldr x8,[x8, #0x30]
710056aa0c  add x2,sp,#0x8
710056aa10  blr x8
710056aa14  tbz w0,#0x0,0x710056aa2c
710056aa18  mov w0,#0x10
710056aa1c  mov w1,#0x20
710056aa20  bl 0x710392e290
710056aa24  mov x20,x0
710056aa28  cbnz x0,0x710056aa30
710056aa2c  mov x20,xzr
710056aa30  mov x0,x20
710056aa34  stp xzr,xzr,[x20, #0x10]
710056aa38  stp xzr,xzr,[x20]
710056aa3c  bl 0x71039c26d0
710056aa40  orr x22,xzr,#0xffffff00ffffff
710056aa44  mov w0,#0x10
710056aa48  mov w1,#0x20
710056aa4c  str x20,[x19, #0x3b8]
710056aa50  str xzr,[x19, #0x3d0]
710056aa54  str xzr,[x19, #0x3c8]
710056aa58  str xzr,[x19, #0x3c0]
710056aa5c  str x22,[x19, #0x3d8]
710056aa60  str xzr,[x19, #0x3e0]
710056aa64  strb wzr,[x19, #0x3e8]
710056aa68  str xzr,[x19, #0x3f0]
710056aa6c  str w21,[x19, #0x3f8]
710056aa70  bl 0x710392e290
710056aa74  mov x20,x0
710056aa78  cbnz x0,0x710056aac4
710056aa7c  adrp x8,0x7105332000
710056aa80  ldr x0,[x8, #0xf00]
710056aa84  cbz x0,0x710056aac0
710056aa88  mov w8,#0x20
710056aa8c  str wzr,[sp, #0x1c]
710056aa90  add x1,sp,#0x1c
710056aa94  str x8,[sp, #0x8]
710056aa98  ldr x8,[x0]
710056aa9c  ldr x8,[x8, #0x30]
710056aaa0  add x2,sp,#0x8
710056aaa4  blr x8
710056aaa8  tbz w0,#0x0,0x710056aac0
710056aaac  mov w0,#0x10
710056aab0  mov w1,#0x20
710056aab4  bl 0x710392e290
710056aab8  mov x20,x0
710056aabc  cbnz x0,0x710056aac4
710056aac0  mov x20,xzr
710056aac4  mov x0,x20
710056aac8  stp xzr,xzr,[x20, #0x10]
710056aacc  stp xzr,xzr,[x20]
710056aad0  bl 0x71039c26d0
710056aad4  mov w0,#0x10
710056aad8  mov w1,#0x20
710056aadc  str x20,[x19, #0x400]
710056aae0  str xzr,[x19, #0x418]
710056aae4  str xzr,[x19, #0x410]
710056aae8  str xzr,[x19, #0x408]
710056aaec  str x22,[x19, #0x420]
710056aaf0  str xzr,[x19, #0x428]
710056aaf4  strb wzr,[x19, #0x430]
710056aaf8  str xzr,[x19, #0x438]
710056aafc  str w21,[x19, #0x440]
710056ab00  bl 0x710392e290
710056ab04  mov x20,x0
710056ab08  cbnz x0,0x710056ab54
710056ab0c  adrp x8,0x7105332000
710056ab10  ldr x0,[x8, #0xf00]
710056ab14  cbz x0,0x710056ab50
710056ab18  mov w8,#0x20
710056ab1c  str wzr,[sp, #0x1c]
710056ab20  add x1,sp,#0x1c
710056ab24  str x8,[sp, #0x8]
710056ab28  ldr x8,[x0]
710056ab2c  ldr x8,[x8, #0x30]
710056ab30  add x2,sp,#0x8
710056ab34  blr x8
710056ab38  tbz w0,#0x0,0x710056ab50
710056ab3c  mov w0,#0x10
710056ab40  mov w1,#0x20
710056ab44  bl 0x710392e290
710056ab48  mov x20,x0
710056ab4c  cbnz x0,0x710056ab54
710056ab50  mov x20,xzr
710056ab54  mov x0,x20
710056ab58  stp xzr,xzr,[x20, #0x10]
710056ab5c  stp xzr,xzr,[x20]
710056ab60  bl 0x71039c26d0
710056ab64  orr x22,xzr,#0xffffff00ffffff
710056ab68  mov w0,#0x10
710056ab6c  mov w1,#0x20
710056ab70  str x20,[x19, #0x448]
710056ab74  str xzr,[x19, #0x460]
710056ab78  str xzr,[x19, #0x458]
710056ab7c  str xzr,[x19, #0x450]
710056ab80  str x22,[x19, #0x468]
710056ab84  str xzr,[x19, #0x470]
710056ab88  strb wzr,[x19, #0x478]
710056ab8c  str xzr,[x19, #0x480]
710056ab90  str w21,[x19, #0x488]
710056ab94  bl 0x710392e290
710056ab98  mov x20,x0
710056ab9c  cbnz x0,0x710056abe8
710056aba0  adrp x8,0x7105332000
710056aba4  ldr x0,[x8, #0xf00]
710056aba8  cbz x0,0x710056abe4
710056abac  mov w8,#0x20
710056abb0  str wzr,[sp, #0x1c]
710056abb4  add x1,sp,#0x1c
710056abb8  str x8,[sp, #0x8]
710056abbc  ldr x8,[x0]
710056abc0  ldr x8,[x8, #0x30]
710056abc4  add x2,sp,#0x8
710056abc8  blr x8
710056abcc  tbz w0,#0x0,0x710056abe4
710056abd0  mov w0,#0x10
710056abd4  mov w1,#0x20
710056abd8  bl 0x710392e290
710056abdc  mov x20,x0
710056abe0  cbnz x0,0x710056abe8
710056abe4  mov x20,xzr
710056abe8  mov x0,x20
710056abec  stp xzr,xzr,[x20, #0x10]
710056abf0  stp xzr,xzr,[x20]
710056abf4  bl 0x71039c26d0
710056abf8  mov w0,#0x10
710056abfc  mov w1,#0x20
710056ac00  str x20,[x19, #0x490]
710056ac04  str xzr,[x19, #0x4a8]
710056ac08  str xzr,[x19, #0x4a0]
710056ac0c  str xzr,[x19, #0x498]
710056ac10  str x22,[x19, #0x4b0]
710056ac14  str xzr,[x19, #0x4b8]
710056ac18  strb wzr,[x19, #0x4c0]
710056ac1c  str xzr,[x19, #0x4c8]
710056ac20  str w21,[x19, #0x4d0]
710056ac24  bl 0x710392e290
710056ac28  mov x20,x0
710056ac2c  cbnz x0,0x710056ac78
710056ac30  adrp x8,0x7105332000
710056ac34  ldr x0,[x8, #0xf00]
710056ac38  cbz x0,0x710056ac74
710056ac3c  mov w8,#0x20
710056ac40  str wzr,[sp, #0x1c]
710056ac44  add x1,sp,#0x1c
710056ac48  str x8,[sp, #0x8]
710056ac4c  ldr x8,[x0]
710056ac50  ldr x8,[x8, #0x30]
710056ac54  add x2,sp,#0x8
710056ac58  blr x8
710056ac5c  tbz w0,#0x0,0x710056ac74
710056ac60  mov w0,#0x10
710056ac64  mov w1,#0x20
710056ac68  bl 0x710392e290
710056ac6c  mov x20,x0
710056ac70  cbnz x0,0x710056ac78
710056ac74  mov x20,xzr
710056ac78  mov x0,x20
710056ac7c  stp xzr,xzr,[x20, #0x10]
710056ac80  stp xzr,xzr,[x20]
710056ac84  bl 0x71039c26d0
710056ac88  orr x22,xzr,#0xffffff00ffffff
710056ac8c  mov w0,#0x10
710056ac90  mov w1,#0x20
710056ac94  str x20,[x19, #0x4d8]
710056ac98  str xzr,[x19, #0x4f0]
710056ac9c  str xzr,[x19, #0x4e8]
710056aca0  str xzr,[x19, #0x4e0]
710056aca4  str x22,[x19, #0x4f8]
710056aca8  str xzr,[x19, #0x500]
710056acac  strb wzr,[x19, #0x508]
710056acb0  str xzr,[x19, #0x510]
710056acb4  str w21,[x19, #0x518]
710056acb8  bl 0x710392e290
710056acbc  mov x20,x0
710056acc0  cbnz x0,0x710056ad0c
710056acc4  adrp x8,0x7105332000
710056acc8  ldr x0,[x8, #0xf00]
710056accc  cbz x0,0x710056ad08
710056acd0  mov w8,#0x20
710056acd4  str wzr,[sp, #0x1c]
710056acd8  add x1,sp,#0x1c
710056acdc  str x8,[sp, #0x8]
710056ace0  ldr x8,[x0]
710056ace4  ldr x8,[x8, #0x30]
710056ace8  add x2,sp,#0x8
710056acec  blr x8
710056acf0  tbz w0,#0x0,0x710056ad08
710056acf4  mov w0,#0x10
710056acf8  mov w1,#0x20
710056acfc  bl 0x710392e290
710056ad00  mov x20,x0
710056ad04  cbnz x0,0x710056ad0c
710056ad08  mov x20,xzr
710056ad0c  mov x0,x20
710056ad10  stp xzr,xzr,[x20, #0x10]
710056ad14  stp xzr,xzr,[x20]
710056ad18  bl 0x71039c26d0
710056ad1c  mov w0,#0x10
710056ad20  mov w1,#0x20
710056ad24  str x20,[x19, #0x520]
710056ad28  str xzr,[x19, #0x538]
710056ad2c  str xzr,[x19, #0x530]
710056ad30  str xzr,[x19, #0x528]
710056ad34  str x22,[x19, #0x540]
710056ad38  str xzr,[x19, #0x548]
710056ad3c  strb wzr,[x19, #0x550]
710056ad40  str xzr,[x19, #0x558]
710056ad44  str w21,[x19, #0x560]
710056ad48  bl 0x710392e290
710056ad4c  mov x20,x0
710056ad50  cbnz x0,0x710056ad9c
710056ad54  adrp x8,0x7105332000
710056ad58  ldr x0,[x8, #0xf00]
710056ad5c  cbz x0,0x710056ad98
710056ad60  mov w8,#0x20
710056ad64  str wzr,[sp, #0x1c]
710056ad68  add x1,sp,#0x1c
710056ad6c  str x8,[sp, #0x8]
710056ad70  ldr x8,[x0]
710056ad74  ldr x8,[x8, #0x30]
710056ad78  add x2,sp,#0x8
710056ad7c  blr x8
710056ad80  tbz w0,#0x0,0x710056ad98
710056ad84  mov w0,#0x10
710056ad88  mov w1,#0x20
710056ad8c  bl 0x710392e290
710056ad90  mov x20,x0
710056ad94  cbnz x0,0x710056ad9c
710056ad98  mov x20,xzr
710056ad9c  mov x0,x20
710056ada0  stp xzr,xzr,[x20, #0x10]
710056ada4  stp xzr,xzr,[x20]
710056ada8  bl 0x71039c26d0
710056adac  mov w8,#0x10
710056adb0  str x20,[x19, #0x568]
710056adb4  str x8,[x19, #0xe0]
710056adb8  adrp x8,0x7105324000
710056adbc  ldr x20,[x8, #0x680]
710056adc0  ldr x8,[x20, #0xb8]
710056adc4  cbz x8,0x710056add4
710056adc8  ldr x8,[x20, #0xc0]
710056adcc  cbnz x8,0x710056af3c
710056add0  b 0x710056ae8c
710056add4  mov w1,#0x48
710056add8  mov w0,#0x10
710056addc  bl 0x710392e290
710056ade0  cbnz x0,0x710056ae28
710056ade4  adrp x8,0x7105332000
710056ade8  ldr x0,[x8, #0xf00]
710056adec  cbz x0,0x710056ae24
710056adf0  mov w8,#0x48
710056adf4  str wzr,[sp, #0x1c]
710056adf8  add x1,sp,#0x1c
710056adfc  str x8,[sp, #0x8]
710056ae00  ldr x8,[x0]
710056ae04  ldr x8,[x8, #0x30]
710056ae08  add x2,sp,#0x8
710056ae0c  blr x8
710056ae10  tbz w0,#0x0,0x710056ae24
710056ae14  mov w1,#0x48
710056ae18  mov w0,#0x10
710056ae1c  bl 0x710392e290
710056ae20  cbnz x0,0x710056ae28
710056ae24  mov x0,xzr
710056ae28  mov x8,x0
710056ae2c  adrp x9,0x710509f000
710056ae30  add x9,x9,#0xa80
710056ae34  str xzr,[x8, #0x10]!
710056ae38  stp x9,x8,[x0]
710056ae3c  mov w8,#0x1
710056ae40  str xzr,[x0, #0x18]
710056ae44  strb wzr,[x0, #0x20]
710056ae48  stp xzr,xzr,[x0, #0x38]
710056ae4c  stp xzr,xzr,[x0, #0x28]
710056ae50  strh w8,[x0, #0x28]
710056ae54  strb wzr,[x0, #0x2a]
710056ae58  ldr x8,[x20, #0xb8]
710056ae5c  str x0,[x20, #0xb8]
710056ae60  cbz x8,0x710056ae78
710056ae64  ldr x9,[x8]
710056ae68  ldr x9,[x9, #0x8]
710056ae6c  mov x0,x8
710056ae70  blr x9
710056ae74  ldr x0,[x20, #0xb8]
710056ae78  ldr x8,[x0]
710056ae7c  ldr x8,[x8, #0x10]
710056ae80  blr x8
710056ae84  ldr x8,[x20, #0xc0]
710056ae88  cbnz x8,0x710056af3c
710056ae8c  mov w1,#0x48
710056ae90  mov w0,#0x10
710056ae94  bl 0x710392e290
710056ae98  cbnz x0,0x710056aee0
710056ae9c  adrp x8,0x7105332000
710056aea0  ldr x0,[x8, #0xf00]
710056aea4  cbz x0,0x710056aedc
710056aea8  mov w8,#0x48
710056aeac  str wzr,[sp, #0x1c]
710056aeb0  add x1,sp,#0x1c
710056aeb4  str x8,[sp, #0x8]
710056aeb8  ldr x8,[x0]
710056aebc  ldr x8,[x8, #0x30]
710056aec0  add x2,sp,#0x8
710056aec4  blr x8
710056aec8  tbz w0,#0x0,0x710056aedc
710056aecc  mov w1,#0x48
710056aed0  mov w0,#0x10
710056aed4  bl 0x710392e290
710056aed8  cbnz x0,0x710056aee0
710056aedc  mov x0,xzr
710056aee0  mov x8,x0
710056aee4  adrp x9,0x710509f000
710056aee8  add x9,x9,#0xa38
710056aeec  str xzr,[x8, #0x10]!
710056aef0  stp x9,x8,[x0]
710056aef4  mov w8,#0x1
710056aef8  str xzr,[x0, #0x18]
710056aefc  strb wzr,[x0, #0x20]
710056af00  stp xzr,xzr,[x0, #0x38]
710056af04  stp xzr,xzr,[x0, #0x28]
710056af08  strh w8,[x0, #0x28]
710056af0c  strb wzr,[x0, #0x2a]
710056af10  ldr x8,[x20, #0xc0]
710056af14  str x0,[x20, #0xc0]
710056af18  cbz x8,0x710056af30
710056af1c  ldr x9,[x8]
710056af20  ldr x9,[x9, #0x8]
710056af24  mov x0,x8
710056af28  blr x9
710056af2c  ldr x0,[x20, #0xc0]
710056af30  ldr x8,[x0]
710056af34  ldr x8,[x8, #0x10]
710056af38  blr x8
710056af3c  add x8,x19,#0x57c
710056af40  str xzr,[x8]
710056af44  add x8,x19,#0x584
710056af48  mov x23,#-0x1
710056af4c  str x23,[x8]
710056af50  ldr x8,[x19, #0x18]
710056af54  ldr x20,[x19, #0x8]
710056af58  sub x8,x8,x20
710056af5c  asr x9,x8,#0x4
710056af60  orr x8,xzr,#-0x3333333333333334
710056af64  movk x8,#0xcccd
710056af68  mul x9,x9,x8
710056af6c  cmp x9,#0x13
710056af70  strh wzr,[x19, #0x58c]
710056af74  b.hi 0x710056b028
710056af78  ldr x9,[x19, #0x10]
710056af7c  sub x21,x9,x20
710056af80  asr x9,x21,#0x4
710056af84  mov w1,#0x640
710056af88  mov w0,#0x10
710056af8c  mul x22,x9,x8
710056af90  bl 0x710392e290
710056af94  cbnz x0,0x710056afdc
710056af98  adrp x8,0x7105332000
710056af9c  ldr x0,[x8, #0xf00]
710056afa0  cbz x0,0x710056afd8
710056afa4  mov w8,#0x640
710056afa8  str wzr,[sp, #0x1c]
710056afac  add x1,sp,#0x1c
710056afb0  str x8,[sp, #0x8]
710056afb4  ldr x8,[x0]
710056afb8  ldr x8,[x8, #0x30]
710056afbc  add x2,sp,#0x8
710056afc0  blr x8
710056afc4  tbz w0,#0x0,0x710056afd8
710056afc8  mov w1,#0x640
710056afcc  mov w0,#0x10
710056afd0  bl 0x710392e290
710056afd4  cbnz x0,0x710056afdc
710056afd8  mov x0,xzr
710056afdc  orr x9,xzr,#-0x6666666666666667
710056afe0  smulh x9,x21,x9
710056afe4  mov w8,#0x50
710056afe8  madd x24,x22,x8,x0
710056afec  add x25,x0,#0x640
710056aff0  cmp x21,#0x1
710056aff4  asr x10,x9,#0x5
710056aff8  add x9,x10,x9, LSR #0x3f
710056affc  madd x22,x9,x8,x24
710056b000  b.lt 0x710056b014
710056b004  mov x0,x22
710056b008  mov x1,x20
710056b00c  mov x2,x21
710056b010  bl 0x71039c00e0
710056b014  stp x22,x24,[x19, #0x8]
710056b018  str x25,[x19, #0x18]
710056b01c  cbz x20,0x710056b028
710056b020  mov x0,x20
710056b024  bl 0x710392eb40
710056b028  ldr x8,[x19, #0x30]
710056b02c  ldr x20,[x19, #0x20]
710056b030  sub x8,x8,x20
710056b034  asr x9,x8,#0x4
710056b038  mov x8,#0x6db7
710056b03c  movk x8,#0xb6db, LSL #16
710056b040  movk x8,#0xdb6d, LSL #32
710056b044  movk x8,#0x6db6, LSL #48
710056b048  mul x9,x9,x8
710056b04c  cmp x9,#0x13
710056b050  b.hi 0x710056b110
710056b054  ldr x9,[x19, #0x28]
710056b058  sub x21,x9,x20
710056b05c  asr x9,x21,#0x4
710056b060  mov w1,#0x8c0
710056b064  mov w0,#0x10
710056b068  mul x22,x9,x8
710056b06c  bl 0x710392e290
710056b070  cbnz x0,0x710056b0b8
710056b074  adrp x8,0x7105332000
710056b078  ldr x0,[x8, #0xf00]
710056b07c  cbz x0,0x710056b0b4
710056b080  mov w8,#0x8c0
710056b084  str wzr,[sp, #0x1c]
710056b088  add x1,sp,#0x1c
710056b08c  str x8,[sp, #0x8]
710056b090  ldr x8,[x0]
710056b094  ldr x8,[x8, #0x30]
710056b098  add x2,sp,#0x8
710056b09c  blr x8
710056b0a0  tbz w0,#0x0,0x710056b0b4
710056b0a4  mov w1,#0x8c0
710056b0a8  mov w0,#0x10
710056b0ac  bl 0x710392e290
710056b0b0  cbnz x0,0x710056b0b8
710056b0b4  mov x0,xzr
710056b0b8  mov x9,#0xb6db
710056b0bc  movk x9,#0xdb6d, LSL #16
710056b0c0  movk x9,#0x6db6, LSL #32
710056b0c4  movk x9,#0xb6db, LSL #48
710056b0c8  smulh x9,x21,x9
710056b0cc  orr w8,wzr,#0x70
710056b0d0  madd x24,x22,x8,x0
710056b0d4  add x25,x0,#0x8c0
710056b0d8  cmp x21,#0x1
710056b0dc  asr x10,x9,#0x5
710056b0e0  add x9,x10,x9, LSR #0x3f
710056b0e4  madd x22,x9,x8,x24
710056b0e8  b.lt 0x710056b0fc
710056b0ec  mov x0,x22
710056b0f0  mov x1,x20
710056b0f4  mov x2,x21
710056b0f8  bl 0x71039c00e0
710056b0fc  stp x22,x24,[x19, #0x20]
710056b100  str x25,[x19, #0x30]
710056b104  cbz x20,0x710056b110
710056b108  mov x0,x20
710056b10c  bl 0x710392eb40
710056b110  adrp x21,0x71052b9000
710056b114  ldr x8,[x21, #0x418]
710056b118  cbnz x8,0x710056b298
710056b11c  mov w0,#0x10
710056b120  orr w1,wzr,#0xc0
710056b124  bl 0x710392e290
710056b128  mov x20,x0
710056b12c  cbnz x0,0x710056b178
710056b130  adrp x8,0x7105332000
710056b134  ldr x0,[x8, #0xf00]
710056b138  cbz x0,0x710056b174
710056b13c  orr w8,wzr,#0xc0
710056b140  str wzr,[sp, #0x1c]
710056b144  add x1,sp,#0x1c
710056b148  str x8,[sp, #0x8]
710056b14c  ldr x8,[x0]
710056b150  ldr x8,[x8, #0x30]
710056b154  add x2,sp,#0x8
710056b158  blr x8
710056b15c  tbz w0,#0x0,0x710056b174
710056b160  mov w0,#0x10
710056b164  orr w1,wzr,#0xc0
710056b168  bl 0x710392e290
710056b16c  mov x20,x0
710056b170  cbnz x0,0x710056b178
710056b174  mov x20,xzr
710056b178  adrp x8,0x7104f79000
710056b17c  add x8,x8,#0x4d0
710056b180  mov w0,#0x10
710056b184  mov w1,#0x100
710056b188  str x8,[x20]
710056b18c  bl 0x710392e290
710056b190  cbnz x0,0x710056b1d8
710056b194  adrp x8,0x7105332000
710056b198  ldr x0,[x8, #0xf00]
710056b19c  cbz x0,0x710056b1d4
710056b1a0  mov w8,#0x100
710056b1a4  str wzr,[sp, #0x1c]
710056b1a8  add x1,sp,#0x1c
710056b1ac  str x8,[sp, #0x8]
710056b1b0  ldr x8,[x0]
710056b1b4  ldr x8,[x8, #0x30]
710056b1b8  add x2,sp,#0x8
710056b1bc  blr x8
710056b1c0  tbz w0,#0x0,0x710056b1d4
710056b1c4  mov w0,#0x10
710056b1c8  mov w1,#0x100
710056b1cc  bl 0x710392e290
710056b1d0  cbnz x0,0x710056b1d8
710056b1d4  mov x0,xzr
710056b1d8  adrp x9,0x7104f79000
710056b1dc  add x9,x9,#0x518
710056b1e0  orr w8,wzr,#0xffffff
710056b1e4  stp xzr,xzr,[x0, #0x10]
710056b1e8  stp xzr,xzr,[x0]
710056b1ec  str w8,[x0]
710056b1f0  stp x9,xzr,[x0, #0x8]
710056b1f4  adrp x9,0x7104f76000
710056b1f8  add x9,x9,#0xb70
710056b1fc  stp xzr,xzr,[x0, #0x30]
710056b200  str x9,[x0, #0x30]
710056b204  adrp x9,0x7104f79000
710056b208  add x9,x9,#0x490
710056b20c  stp xzr,xzr,[x0, #0xd0]
710056b210  str w8,[x0, #0xd0]
710056b214  str xzr,[x0, #0xd8]
710056b218  stp xzr,xzr,[x0, #0x70]
710056b21c  stp xzr,xzr,[x0, #0x60]
710056b220  str w8,[x0, #0x68]
710056b224  stp xzr,xzr,[x0, #0x20]
710056b228  str w8,[x0, #0x28]
710056b22c  orr w8,wzr,#0xffff
710056b230  stp x9,xzr,[x0, #0x70]
710056b234  orr x9,xzr,#0xffffff00ffffff
710056b238  stp xzr,xzr,[x0, #0xf0]
710056b23c  stp xzr,xzr,[x0, #0xe0]
710056b240  stp xzr,xzr,[x0, #0xc0]
710056b244  stp xzr,xzr,[x0, #0xb0]
710056b248  stp xzr,xzr,[x0, #0xa0]
710056b24c  stp xzr,xzr,[x0, #0x90]
710056b250  stp xzr,xzr,[x0, #0x80]
710056b254  stp xzr,xzr,[x0, #0x50]
710056b258  stp xzr,xzr,[x0, #0x40]
710056b25c  stp xzr,xzr,[x0, #0x18]
710056b260  stp xzr,xzr,[x0, #0x58]
710056b264  stp xzr,xzr,[x0, #0x48]
710056b268  stp xzr,xzr,[x0, #0x38]
710056b26c  stp xzr,xzr,[x0, #0xb0]
710056b270  stp xzr,xzr,[x0, #0xa0]
710056b274  stp xzr,xzr,[x0, #0x90]
710056b278  stp xzr,xzr,[x0, #0x80]
710056b27c  stp x9,x9,[x0, #0xc0]
710056b280  stp xzr,xzr,[x0, #0xf0]
710056b284  stp xzr,xzr,[x0, #0xe0]
710056b288  str x0,[x20, #0xb8]
710056b28c  strh w8,[x20, #0xb0]
710056b290  str x23,[x20, #0xa8]
710056b294  str x20,[x21, #0x418]
710056b298  strh wzr,[x19, #0x578]
710056b29c  str xzr,[x19, #0x570]
710056b2a0  ldr x25,[sp, #0x10]
710056b2a4  ldp x29,x30,[sp, #0x50]
710056b2a8  ldp x20,x19,[sp, #0x40]
710056b2ac  ldp x22,x21,[sp, #0x30]
710056b2b0  ldp x24,x23,[sp, #0x20]
710056b2b4  add sp,sp,#0x60
710056b2b8  ret
