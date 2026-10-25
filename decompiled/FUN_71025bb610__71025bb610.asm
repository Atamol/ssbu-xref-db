// addr:      71025bb610
// offset:    0x25bb610
// name:      FUN_71025bb610
// mangled:   
// size:      26016

71025bb610  sub sp,sp,#0x110
71025bb614  stp x28,x27,[sp, #0xb0]
71025bb618  stp x26,x25,[sp, #0xc0]
71025bb61c  stp x24,x23,[sp, #0xd0]
71025bb620  stp x22,x21,[sp, #0xe0]
71025bb624  stp x20,x19,[sp, #0xf0]
71025bb628  stp x29,x30,[sp, #0x100]
71025bb62c  add x29,sp,#0x100
71025bb630  and w8,w1,#0xff
71025bb634  sub w8,w8,#0x1
71025bb638  cmp w8,#0x2e
71025bb63c  b.hi 0x71025c1860
71025bb640  adrp x9,0x7104506000
71025bb644  add x9,x9,#0x440
71025bb648  ldrsw x8,[x9, x8, LSL #0x2]
71025bb64c  add x8,x8,x9
71025bb650  br x8
71025bb654  adrp x9,0x7105329000
71025bb658  ldr x9,[x9, #0xfa0]
71025bb65c  mov w19,#0x8
71025bb660  strb wzr,[sp, #0x18]
71025bb664  str xzr,[sp, #0x10]
71025bb668  strb wzr,[sp, #0x60]
71025bb66c  str xzr,[sp, #0x58]
71025bb670  mov w8,#0x9dc5
71025bb674  movk w8,#0x811c, LSL #16
71025bb678  str w19,[sp, #0xa0]
71025bb67c  ldr x9,[x9]
71025bb680  ldr x12,[x9, #0x300]
71025bb684  ldr x10,[x9, #0x2f8]
71025bb688  sub x3,x12,x10
71025bb68c  lsr x11,x3,#0x4
71025bb690  cbz w11,0x71025c06ac
71025bb694  cmp x12,x10
71025bb698  b.eq 0x71025bc154
71025bb69c  add x13,sp,#0x10
71025bb6a0  mov x14,#0x616e
71025bb6a4  movk x14,#0x5f6d, LSL #16
71025bb6a8  mov x15,#0x7469
71025bb6ac  movk x15,#0x5f73, LSL #16
71025bb6b0  mov x17,#0x6c75
71025bb6b4  movk x17,#0x5f65, LSL #16
71025bb6b8  mov x21,#0x5f6b
71025bb6bc  movk x21,#0x7075, LSL #16
71025bb6c0  mov x12,xzr
71025bb6c4  mov w6,wzr
71025bb6c8  add x13,x13,#0x9
71025bb6cc  mov w19,#0x8
71025bb6d0  movk x14,#0x7073, LSL #32
71025bb6d4  movk x14,#0x7269, LSL #48
71025bb6d8  movk x15,#0x6968, LSL #32
71025bb6dc  movk x15,#0x746e, LSL #48
71025bb6e0  mov w16,#0x725f
71025bb6e4  movk x17,#0x6f70, LSL #32
71025bb6e8  movk x17,#0x6577, LSL #48
71025bb6ec  mov w18,#0x7572
71025bb6f0  movk w18,#0x5f70, LSL #16
71025bb6f4  mov w1,#0x7461
71025bb6f8  mov w5,#0x2b
71025bb6fc  mov w4,#0x6e
71025bb700  mov w7,#0x89
71025bb704  mov w25,#0x5
71025bb708  mov w20,#0x6f6d
71025bb70c  mov w24,#0x756a
71025bb710  mov w26,#0x6564
71025bb714  asr x22,x3,#0x4
71025bb718  mov w30,#0x2a
71025bb71c  movk x21,#0x615f, LSL #32
71025bb720  movk x21,#0x6c6c, LSL #48
71025bb724  mov w3,#0x28
71025bb728  lsl x23,x12,#0x4
71025bb72c  ldr x23,[x10, x23, LSL #0x0]
71025bb730  eor x23,x23,x2
71025bb734  tst x23,#0xffffffffff
71025bb738  b.ne 0x71025bc13c
71025bb73c  add x23,x10,x12, LSL #0x4
71025bb740  ldrb w27,[x23, #0x9]
71025bb744  ldrb w28,[x23, #0x8]
71025bb748  cbz w27,0x71025bb7ac
71025bb74c  ldr w27,[x23, #0xc]
71025bb750  ldrb w23,[x23, #0xa]
71025bb754  cmp w27,#0x1
71025bb758  cbz w28,0x71025bb824
71025bb75c  b.lt 0x71025bb88c
71025bb760  cmp w23,#0x2
71025bb764  b.ne 0x71025bb8f0
71025bb768  mov x6,x13
71025bb76c  mov w23,w4
71025bb770  mov w19,w8
71025bb774  stp x14,x15,[sp, #0x18]
71025bb778  strh w16,[sp, #0x28]
71025bb77c  stur x17,[sp, #0x2a]
71025bb780  stur w18,[sp, #0x32]
71025bb784  strh w1,[sp, #0x36]
71025bb788  str x21,[sp, #0x38]
71025bb78c  strb wzr,[sp, #0x40]
71025bb790  str w3,[sp, #0x14]
71025bb794  mul w19,w19,w7
71025bb798  and w23,w23,#0xff
71025bb79c  eor w19,w19,w23
71025bb7a0  ldrb w23,[x6], #0x1
71025bb7a4  cbnz w23,0x71025bb794
71025bb7a8  b 0x71025bc12c
71025bb7ac  cbz w28,0x71025bc13c
71025bb7b0  ldr w27,[x23, #0xc]
71025bb7b4  ldrb w23,[x23, #0xa]
71025bb7b8  cmp w27,#0x1
71025bb7bc  b.lt 0x71025bb958
71025bb7c0  cmp w23,#0x2
71025bb7c4  b.ne 0x71025bba34
71025bb7c8  mov x6,#0x5f6b
71025bb7cc  movk x6,#0x7075, LSL #16
71025bb7d0  mov w23,w4
71025bb7d4  movk x6,#0x705f, LSL #32
71025bb7d8  movk x6,#0x616c, LSL #48
71025bb7dc  strh w16,[sp, #0x28]
71025bb7e0  str x6,[sp, #0x38]
71025bb7e4  mov w6,#0x6579
71025bb7e8  movk w6,#0x72, LSL #16
71025bb7ec  str w6,[sp, #0x40]
71025bb7f0  mov x6,x13
71025bb7f4  mov w19,w8
71025bb7f8  stp x14,x15,[sp, #0x18]
71025bb7fc  stur x17,[sp, #0x2a]
71025bb800  stur w18,[sp, #0x32]
71025bb804  strh w1,[sp, #0x36]
71025bb808  str w5,[sp, #0x14]
71025bb80c  mul w19,w19,w7
71025bb810  and w23,w23,#0xff
71025bb814  eor w19,w19,w23
71025bb818  ldrb w23,[x6], #0x1
71025bb81c  cbnz w23,0x71025bb80c
71025bb820  b 0x71025bc12c
71025bb824  b.lt 0x71025bb9c8
71025bb828  cmp w23,#0x2
71025bb82c  b.ne 0x71025bbaa4
71025bb830  mov x6,#0x5f6b
71025bb834  movk x6,#0x7075, LSL #16
71025bb838  mov w23,w4
71025bb83c  movk x6,#0x655f, LSL #32
71025bb840  movk x6,#0x656e, LSL #48
71025bb844  strh w16,[sp, #0x28]
71025bb848  str x6,[sp, #0x38]
71025bb84c  mov w6,#0x796d
71025bb850  mov w19,w8
71025bb854  strh w6,[sp, #0x40]
71025bb858  mov x6,x13
71025bb85c  stur x17,[sp, #0x2a]
71025bb860  stp x14,x15,[sp, #0x18]
71025bb864  stur w18,[sp, #0x32]
71025bb868  strh w1,[sp, #0x36]
71025bb86c  strb wzr,[sp, #0x42]
71025bb870  str w30,[sp, #0x14]
71025bb874  mul w19,w19,w7
71025bb878  and w23,w23,#0xff
71025bb87c  eor w19,w19,w23
71025bb880  ldrb w23,[x6], #0x1
71025bb884  cbnz w23,0x71025bb874
71025bb888  b 0x71025bbeac
71025bb88c  cmp w23,#0x2
71025bb890  b.ne 0x71025bbb14
71025bb894  mov x6,#0x5f6b
71025bb898  movk x6,#0x6f64, LSL #16
71025bb89c  mov w23,w4
71025bb8a0  movk x6,#0x6e77, LSL #32
71025bb8a4  movk x6,#0x615f, LSL #48
71025bb8a8  strh w16,[sp, #0x28]
71025bb8ac  str x6,[sp, #0x38]
71025bb8b0  mov w6,#0x6c6c
71025bb8b4  mov w19,w8
71025bb8b8  strh w6,[sp, #0x40]
71025bb8bc  mov x6,x13
71025bb8c0  stur x17,[sp, #0x2a]
71025bb8c4  stp x14,x15,[sp, #0x18]
71025bb8c8  stur w18,[sp, #0x32]
71025bb8cc  strh w1,[sp, #0x36]
71025bb8d0  strb wzr,[sp, #0x42]
71025bb8d4  str w30,[sp, #0x14]
71025bb8d8  mul w19,w19,w7
71025bb8dc  and w23,w23,#0xff
71025bb8e0  eor w19,w19,w23
71025bb8e4  ldrb w23,[x6], #0x1
71025bb8e8  cbnz w23,0x71025bb8d8
71025bb8ec  b 0x71025bbf6c
71025bb8f0  cbz w23,0x71025bbc78
71025bb8f4  cmp w23,#0x1
71025bb8f8  b.eq 0x71025bbcd4
71025bb8fc  cmp w23,#0x5
71025bb900  b.ne 0x71025bc13c
71025bb904  mov x6,#0x5f66
71025bb908  movk x6,#0x7075, LSL #16
71025bb90c  mov w23,w4
71025bb910  movk x6,#0x615f, LSL #32
71025bb914  movk x6,#0x6c6c, LSL #48
71025bb918  strh w16,[sp, #0x28]
71025bb91c  str x6,[sp, #0x38]
71025bb920  mov x6,x13
71025bb924  mov w19,w8
71025bb928  stp x14,x15,[sp, #0x18]
71025bb92c  stur x17,[sp, #0x2a]
71025bb930  stur w18,[sp, #0x32]
71025bb934  strh w26,[sp, #0x36]
71025bb938  strb wzr,[sp, #0x40]
71025bb93c  str w3,[sp, #0x14]
71025bb940  mul w19,w19,w7
71025bb944  and w23,w23,#0xff
71025bb948  eor w19,w19,w23
71025bb94c  ldrb w23,[x6], #0x1
71025bb950  cbnz w23,0x71025bb940
71025bb954  b 0x71025bc12c
71025bb958  cmp w23,#0x2
71025bb95c  b.ne 0x71025bbb84
71025bb960  mov x6,#0x5f6b
71025bb964  movk x6,#0x6f64, LSL #16
71025bb968  mov w23,w4
71025bb96c  movk x6,#0x6e77, LSL #32
71025bb970  movk x6,#0x705f, LSL #48
71025bb974  strh w16,[sp, #0x28]
71025bb978  str x6,[sp, #0x38]
71025bb97c  mov w6,#0x616c
71025bb980  movk w6,#0x6579, LSL #16
71025bb984  str w6,[sp, #0x40]
71025bb988  mov w6,#0x72
71025bb98c  strh w6,[sp, #0x44]
71025bb990  mov x6,x13
71025bb994  mov w19,w8
71025bb998  mov w27,#0x2d
71025bb99c  stp x14,x15,[sp, #0x18]
71025bb9a0  stur x17,[sp, #0x2a]
71025bb9a4  stur w18,[sp, #0x32]
71025bb9a8  strh w1,[sp, #0x36]
71025bb9ac  str w27,[sp, #0x14]
71025bb9b0  mul w19,w19,w7
71025bb9b4  and w23,w23,#0xff
71025bb9b8  eor w19,w19,w23
71025bb9bc  ldrb w23,[x6], #0x1
71025bb9c0  cbnz w23,0x71025bb9b0
71025bb9c4  b 0x71025bbf6c
71025bb9c8  cmp w23,#0x2
71025bb9cc  b.ne 0x71025bbc00
71025bb9d0  mov x6,#0x5f6b
71025bb9d4  movk x6,#0x6f64, LSL #16
71025bb9d8  mov w23,w4
71025bb9dc  movk x6,#0x6e77, LSL #32
71025bb9e0  movk x6,#0x655f, LSL #48
71025bb9e4  strh w16,[sp, #0x28]
71025bb9e8  str x6,[sp, #0x38]
71025bb9ec  mov w6,#0x656e
71025bb9f0  movk w6,#0x796d, LSL #16
71025bb9f4  str w6,[sp, #0x40]
71025bb9f8  mov x6,x13
71025bb9fc  mov w19,w8
71025bba00  mov w27,#0x2c
71025bba04  stp x14,x15,[sp, #0x18]
71025bba08  stur x17,[sp, #0x2a]
71025bba0c  stur w18,[sp, #0x32]
71025bba10  strh w1,[sp, #0x36]
71025bba14  strb wzr,[sp, #0x44]
71025bba18  str w27,[sp, #0x14]
71025bba1c  mul w19,w19,w7
71025bba20  and w23,w23,#0xff
71025bba24  eor w19,w19,w23
71025bba28  ldrb w23,[x6], #0x1
71025bba2c  cbnz w23,0x71025bba1c
71025bba30  b 0x71025bc12c
71025bba34  cbz w23,0x71025bbd30
71025bba38  cmp w23,#0x1
71025bba3c  b.eq 0x71025bbd94
71025bba40  cmp w23,#0x5
71025bba44  b.ne 0x71025bc13c
71025bba48  mov x6,#0x5f66
71025bba4c  movk x6,#0x7075, LSL #16
71025bba50  mov w23,w4
71025bba54  movk x6,#0x705f, LSL #32
71025bba58  movk x6,#0x616c, LSL #48
71025bba5c  strh w16,[sp, #0x28]
71025bba60  str x6,[sp, #0x38]
71025bba64  mov w6,#0x6579
71025bba68  movk w6,#0x72, LSL #16
71025bba6c  str w6,[sp, #0x40]
71025bba70  mov x6,x13
71025bba74  mov w19,w8
71025bba78  stp x14,x15,[sp, #0x18]
71025bba7c  stur x17,[sp, #0x2a]
71025bba80  stur w18,[sp, #0x32]
71025bba84  strh w26,[sp, #0x36]
71025bba88  str w5,[sp, #0x14]
71025bba8c  mul w19,w19,w7
71025bba90  and w23,w23,#0xff
71025bba94  eor w19,w19,w23
71025bba98  ldrb w23,[x6], #0x1
71025bba9c  cbnz w23,0x71025bba8c
71025bbaa0  b 0x71025bc12c
71025bbaa4  cbz w23,0x71025bbdf8
71025bbaa8  cmp w23,#0x1
71025bbaac  b.eq 0x71025bbe54
71025bbab0  cmp w23,#0x5
71025bbab4  b.ne 0x71025bc13c
71025bbab8  mov x6,#0x5f66
71025bbabc  movk x6,#0x7075, LSL #16
71025bbac0  mov w23,w4
71025bbac4  movk x6,#0x655f, LSL #32
71025bbac8  movk x6,#0x656e, LSL #48
71025bbacc  strh w16,[sp, #0x28]
71025bbad0  str x6,[sp, #0x38]
71025bbad4  mov w6,#0x796d
71025bbad8  mov w19,w8
71025bbadc  strh w6,[sp, #0x40]
71025bbae0  mov x6,x13
71025bbae4  stur x17,[sp, #0x2a]
71025bbae8  stp x14,x15,[sp, #0x18]
71025bbaec  stur w18,[sp, #0x32]
71025bbaf0  strh w26,[sp, #0x36]
71025bbaf4  strb wzr,[sp, #0x42]
71025bbaf8  str w30,[sp, #0x14]
71025bbafc  mul w19,w19,w7
71025bbb00  and w23,w23,#0xff
71025bbb04  eor w19,w19,w23
71025bbb08  ldrb w23,[x6], #0x1
71025bbb0c  cbnz w23,0x71025bbafc
71025bbb10  b 0x71025bbeac
71025bbb14  cbz w23,0x71025bbeb8
71025bbb18  cmp w23,#0x1
71025bbb1c  b.eq 0x71025bbf14
71025bbb20  cmp w23,#0x5
71025bbb24  b.ne 0x71025bc13c
71025bbb28  mov x6,#0x5f66
71025bbb2c  movk x6,#0x6f64, LSL #16
71025bbb30  mov w23,w4
71025bbb34  movk x6,#0x6e77, LSL #32
71025bbb38  movk x6,#0x615f, LSL #48
71025bbb3c  strh w16,[sp, #0x28]
71025bbb40  str x6,[sp, #0x38]
71025bbb44  mov w6,#0x6c6c
71025bbb48  mov w19,w8
71025bbb4c  strh w6,[sp, #0x40]
71025bbb50  mov x6,x13
71025bbb54  stur x17,[sp, #0x2a]
71025bbb58  stp x14,x15,[sp, #0x18]
71025bbb5c  stur w18,[sp, #0x32]
71025bbb60  strh w26,[sp, #0x36]
71025bbb64  strb wzr,[sp, #0x42]
71025bbb68  str w30,[sp, #0x14]
71025bbb6c  mul w19,w19,w7
71025bbb70  and w23,w23,#0xff
71025bbb74  eor w19,w19,w23
71025bbb78  ldrb w23,[x6], #0x1
71025bbb7c  cbnz w23,0x71025bbb6c
71025bbb80  b 0x71025bbf6c
71025bbb84  cbz w23,0x71025bbf80
71025bbb88  cmp w23,#0x1
71025bbb8c  b.eq 0x71025bbfec
71025bbb90  cmp w23,#0x5
71025bbb94  b.ne 0x71025bc13c
71025bbb98  mov x6,#0x5f66
71025bbb9c  movk x6,#0x6f64, LSL #16
71025bbba0  mov w23,w4
71025bbba4  movk x6,#0x6e77, LSL #32
71025bbba8  movk x6,#0x705f, LSL #48
71025bbbac  strh w16,[sp, #0x28]
71025bbbb0  str x6,[sp, #0x38]
71025bbbb4  mov w6,#0x616c
71025bbbb8  movk w6,#0x6579, LSL #16
71025bbbbc  str w6,[sp, #0x40]
71025bbbc0  mov w6,#0x72
71025bbbc4  strh w6,[sp, #0x44]
71025bbbc8  mov x6,x13
71025bbbcc  mov w19,w8
71025bbbd0  mov w27,#0x2d
71025bbbd4  stp x14,x15,[sp, #0x18]
71025bbbd8  stur x17,[sp, #0x2a]
71025bbbdc  stur w18,[sp, #0x32]
71025bbbe0  strh w26,[sp, #0x36]
71025bbbe4  str w27,[sp, #0x14]
71025bbbe8  mul w19,w19,w7
71025bbbec  and w23,w23,#0xff
71025bbbf0  eor w19,w19,w23
71025bbbf4  ldrb w23,[x6], #0x1
71025bbbf8  cbnz w23,0x71025bbbe8
71025bbbfc  b 0x71025bc054
71025bbc00  cbz w23,0x71025bc060
71025bbc04  cmp w23,#0x1
71025bbc08  b.eq 0x71025bc0c8
71025bbc0c  cmp w23,#0x5
71025bbc10  b.ne 0x71025bc13c
71025bbc14  mov x6,#0x5f66
71025bbc18  movk x6,#0x6f64, LSL #16
71025bbc1c  mov w23,w4
71025bbc20  movk x6,#0x6e77, LSL #32
71025bbc24  movk x6,#0x655f, LSL #48
71025bbc28  strh w16,[sp, #0x28]
71025bbc2c  str x6,[sp, #0x38]
71025bbc30  mov w6,#0x656e
71025bbc34  movk w6,#0x796d, LSL #16
71025bbc38  str w6,[sp, #0x40]
71025bbc3c  mov x6,x13
71025bbc40  mov w19,w8
71025bbc44  mov w27,#0x2c
71025bbc48  stp x14,x15,[sp, #0x18]
71025bbc4c  stur x17,[sp, #0x2a]
71025bbc50  stur w18,[sp, #0x32]
71025bbc54  strh w26,[sp, #0x36]
71025bbc58  strb wzr,[sp, #0x44]
71025bbc5c  str w27,[sp, #0x14]
71025bbc60  mul w19,w19,w7
71025bbc64  and w23,w23,#0xff
71025bbc68  eor w19,w19,w23
71025bbc6c  ldrb w23,[x6], #0x1
71025bbc70  cbnz w23,0x71025bbc60
71025bbc74  b 0x71025bc12c
71025bbc78  mov x6,#0x6576
71025bbc7c  movk x6,#0x755f, LSL #16
71025bbc80  mov w23,w4
71025bbc84  movk x6,#0x5f70, LSL #32
71025bbc88  movk x6,#0x6c61, LSL #48
71025bbc8c  strh w16,[sp, #0x28]
71025bbc90  str x6,[sp, #0x38]
71025bbc94  mov w6,#0x6c
71025bbc98  mov w19,w8
71025bbc9c  strh w6,[sp, #0x40]
71025bbca0  mov x6,x13
71025bbca4  mov w27,#0x29
71025bbca8  stp x14,x15,[sp, #0x18]
71025bbcac  stur x17,[sp, #0x2a]
71025bbcb0  stur w18,[sp, #0x32]
71025bbcb4  strh w20,[sp, #0x36]
71025bbcb8  str w27,[sp, #0x14]
71025bbcbc  mul w19,w19,w7
71025bbcc0  and w23,w23,#0xff
71025bbcc4  eor w19,w19,w23
71025bbcc8  ldrb w23,[x6], #0x1
71025bbccc  cbnz w23,0x71025bbcbc
71025bbcd0  b 0x71025bc12c
71025bbcd4  mov x6,#0x706d
71025bbcd8  movk x6,#0x755f, LSL #16
71025bbcdc  mov w23,w4
71025bbce0  movk x6,#0x5f70, LSL #32
71025bbce4  movk x6,#0x6c61, LSL #48
71025bbce8  strh w16,[sp, #0x28]
71025bbcec  str x6,[sp, #0x38]
71025bbcf0  mov w6,#0x6c
71025bbcf4  mov w19,w8
71025bbcf8  strh w6,[sp, #0x40]
71025bbcfc  mov x6,x13
71025bbd00  mov w27,#0x29
71025bbd04  stp x14,x15,[sp, #0x18]
71025bbd08  stur x17,[sp, #0x2a]
71025bbd0c  stur w18,[sp, #0x32]
71025bbd10  strh w24,[sp, #0x36]
71025bbd14  str w27,[sp, #0x14]
71025bbd18  mul w19,w19,w7
71025bbd1c  and w23,w23,#0xff
71025bbd20  eor w19,w19,w23
71025bbd24  ldrb w23,[x6], #0x1
71025bbd28  cbnz w23,0x71025bbd18
71025bbd2c  b 0x71025bc12c
71025bbd30  mov x6,#0x6576
71025bbd34  movk x6,#0x755f, LSL #16
71025bbd38  mov w23,w4
71025bbd3c  movk x6,#0x5f70, LSL #32
71025bbd40  movk x6,#0x6c70, LSL #48
71025bbd44  strh w16,[sp, #0x28]
71025bbd48  str x6,[sp, #0x38]
71025bbd4c  mov w6,#0x7961
71025bbd50  movk w6,#0x7265, LSL #16
71025bbd54  str w6,[sp, #0x40]
71025bbd58  mov x6,x13
71025bbd5c  mov w19,w8
71025bbd60  mov w27,#0x2c
71025bbd64  stp x14,x15,[sp, #0x18]
71025bbd68  stur x17,[sp, #0x2a]
71025bbd6c  stur w18,[sp, #0x32]
71025bbd70  strh w20,[sp, #0x36]
71025bbd74  strb wzr,[sp, #0x44]
71025bbd78  str w27,[sp, #0x14]
71025bbd7c  mul w19,w19,w7
71025bbd80  and w23,w23,#0xff
71025bbd84  eor w19,w19,w23
71025bbd88  ldrb w23,[x6], #0x1
71025bbd8c  cbnz w23,0x71025bbd7c
71025bbd90  b 0x71025bc12c
71025bbd94  mov x6,#0x706d
71025bbd98  movk x6,#0x755f, LSL #16
71025bbd9c  mov w23,w4
71025bbda0  movk x6,#0x5f70, LSL #32
71025bbda4  movk x6,#0x6c70, LSL #48
71025bbda8  strh w16,[sp, #0x28]
71025bbdac  str x6,[sp, #0x38]
71025bbdb0  mov w6,#0x7961
71025bbdb4  movk w6,#0x7265, LSL #16
71025bbdb8  str w6,[sp, #0x40]
71025bbdbc  mov x6,x13
71025bbdc0  mov w19,w8
71025bbdc4  mov w27,#0x2c
71025bbdc8  stp x14,x15,[sp, #0x18]
71025bbdcc  stur x17,[sp, #0x2a]
71025bbdd0  stur w18,[sp, #0x32]
71025bbdd4  strh w24,[sp, #0x36]
71025bbdd8  strb wzr,[sp, #0x44]
71025bbddc  str w27,[sp, #0x14]
71025bbde0  mul w19,w19,w7
71025bbde4  and w23,w23,#0xff
71025bbde8  eor w19,w19,w23
71025bbdec  ldrb w23,[x6], #0x1
71025bbdf0  cbnz w23,0x71025bbde0
71025bbdf4  b 0x71025bc12c
71025bbdf8  mov x6,#0x6576
71025bbdfc  movk x6,#0x755f, LSL #16
71025bbe00  mov w23,w4
71025bbe04  movk x6,#0x5f70, LSL #32
71025bbe08  movk x6,#0x6e65, LSL #48
71025bbe0c  strh w16,[sp, #0x28]
71025bbe10  str x6,[sp, #0x38]
71025bbe14  mov w6,#0x6d65
71025bbe18  movk w6,#0x79, LSL #16
71025bbe1c  str w6,[sp, #0x40]
71025bbe20  mov x6,x13
71025bbe24  mov w19,w8
71025bbe28  stp x14,x15,[sp, #0x18]
71025bbe2c  stur x17,[sp, #0x2a]
71025bbe30  stur w18,[sp, #0x32]
71025bbe34  strh w20,[sp, #0x36]
71025bbe38  str w5,[sp, #0x14]
71025bbe3c  mul w19,w19,w7
71025bbe40  and w23,w23,#0xff
71025bbe44  eor w19,w19,w23
71025bbe48  ldrb w23,[x6], #0x1
71025bbe4c  cbnz w23,0x71025bbe3c
71025bbe50  b 0x71025bbeac
71025bbe54  mov x6,#0x706d
71025bbe58  movk x6,#0x755f, LSL #16
71025bbe5c  mov w23,w4
71025bbe60  movk x6,#0x5f70, LSL #32
71025bbe64  movk x6,#0x6e65, LSL #48
71025bbe68  strh w16,[sp, #0x28]
71025bbe6c  str x6,[sp, #0x38]
71025bbe70  mov w6,#0x6d65
71025bbe74  movk w6,#0x79, LSL #16
71025bbe78  str w6,[sp, #0x40]
71025bbe7c  mov x6,x13
71025bbe80  mov w19,w8
71025bbe84  stp x14,x15,[sp, #0x18]
71025bbe88  stur x17,[sp, #0x2a]
71025bbe8c  stur w18,[sp, #0x32]
71025bbe90  strh w24,[sp, #0x36]
71025bbe94  str w5,[sp, #0x14]
71025bbe98  mul w19,w19,w7
71025bbe9c  and w23,w23,#0xff
71025bbea0  eor w19,w19,w23
71025bbea4  ldrb w23,[x6], #0x1
71025bbea8  cbnz w23,0x71025bbe98
71025bbeac  str w19,[sp, #0x10]
71025bbeb0  orr w19,wzr,#0x3
71025bbeb4  b 0x71025bbf74
71025bbeb8  mov x6,#0x6576
71025bbebc  movk x6,#0x645f, LSL #16
71025bbec0  mov w23,w4
71025bbec4  movk x6,#0x776f, LSL #32
71025bbec8  movk x6,#0x5f6e, LSL #48
71025bbecc  strh w16,[sp, #0x28]
71025bbed0  str x6,[sp, #0x38]
71025bbed4  mov w6,#0x6c61
71025bbed8  movk w6,#0x6c, LSL #16
71025bbedc  str w6,[sp, #0x40]
71025bbee0  mov x6,x13
71025bbee4  mov w19,w8
71025bbee8  stp x14,x15,[sp, #0x18]
71025bbeec  stur x17,[sp, #0x2a]
71025bbef0  stur w18,[sp, #0x32]
71025bbef4  strh w20,[sp, #0x36]
71025bbef8  str w5,[sp, #0x14]
71025bbefc  mul w19,w19,w7
71025bbf00  and w23,w23,#0xff
71025bbf04  eor w19,w19,w23
71025bbf08  ldrb w23,[x6], #0x1
71025bbf0c  cbnz w23,0x71025bbefc
71025bbf10  b 0x71025bbf6c
71025bbf14  mov x6,#0x706d
71025bbf18  movk x6,#0x645f, LSL #16
71025bbf1c  mov w23,w4
71025bbf20  movk x6,#0x776f, LSL #32
71025bbf24  movk x6,#0x5f6e, LSL #48
71025bbf28  strh w16,[sp, #0x28]
71025bbf2c  str x6,[sp, #0x38]
71025bbf30  mov w6,#0x6c61
71025bbf34  movk w6,#0x6c, LSL #16
71025bbf38  str w6,[sp, #0x40]
71025bbf3c  mov x6,x13
71025bbf40  mov w19,w8
71025bbf44  stp x14,x15,[sp, #0x18]
71025bbf48  stur x17,[sp, #0x2a]
71025bbf4c  stur w18,[sp, #0x32]
71025bbf50  strh w24,[sp, #0x36]
71025bbf54  str w5,[sp, #0x14]
71025bbf58  mul w19,w19,w7
71025bbf5c  and w23,w23,#0xff
71025bbf60  eor w19,w19,w23
71025bbf64  ldrb w23,[x6], #0x1
71025bbf68  cbnz w23,0x71025bbf58
71025bbf6c  str w19,[sp, #0x10]
71025bbf70  mov w19,#0x4
71025bbf74  mov w6,w4
71025bbf78  str w19,[sp, #0xa0]
71025bbf7c  b 0x71025bc13c
71025bbf80  mov x6,#0x6576
71025bbf84  movk x6,#0x645f, LSL #16
71025bbf88  mov w23,w4
71025bbf8c  movk x6,#0x776f, LSL #32
71025bbf90  movk x6,#0x5f6e, LSL #48
71025bbf94  strh w16,[sp, #0x28]
71025bbf98  str x6,[sp, #0x38]
71025bbf9c  mov w6,#0x6c70
71025bbfa0  movk w6,#0x7961, LSL #16
71025bbfa4  str w6,[sp, #0x40]
71025bbfa8  mov w6,#0x7265
71025bbfac  strh w6,[sp, #0x44]
71025bbfb0  mov x6,x13
71025bbfb4  mov w19,w8
71025bbfb8  mov w27,#0x2e
71025bbfbc  stp x14,x15,[sp, #0x18]
71025bbfc0  stur x17,[sp, #0x2a]
71025bbfc4  stur w18,[sp, #0x32]
71025bbfc8  strh w20,[sp, #0x36]
71025bbfcc  strb wzr,[sp, #0x46]
71025bbfd0  str w27,[sp, #0x14]
71025bbfd4  mul w19,w19,w7
71025bbfd8  and w23,w23,#0xff
71025bbfdc  eor w19,w19,w23
71025bbfe0  ldrb w23,[x6], #0x1
71025bbfe4  cbnz w23,0x71025bbfd4
71025bbfe8  b 0x71025bc054
71025bbfec  mov x6,#0x706d
71025bbff0  movk x6,#0x645f, LSL #16
71025bbff4  mov w23,w4
71025bbff8  movk x6,#0x776f, LSL #32
71025bbffc  movk x6,#0x5f6e, LSL #48
71025bc000  strh w16,[sp, #0x28]
71025bc004  str x6,[sp, #0x38]
71025bc008  mov w6,#0x6c70
71025bc00c  movk w6,#0x7961, LSL #16
71025bc010  str w6,[sp, #0x40]
71025bc014  mov w6,#0x7265
71025bc018  strh w6,[sp, #0x44]
71025bc01c  mov x6,x13
71025bc020  mov w19,w8
71025bc024  mov w27,#0x2e
71025bc028  stp x14,x15,[sp, #0x18]
71025bc02c  stur x17,[sp, #0x2a]
71025bc030  stur w18,[sp, #0x32]
71025bc034  strh w24,[sp, #0x36]
71025bc038  strb wzr,[sp, #0x46]
71025bc03c  str w27,[sp, #0x14]
71025bc040  mul w19,w19,w7
71025bc044  and w23,w23,#0xff
71025bc048  eor w19,w19,w23
71025bc04c  ldrb w23,[x6], #0x1
71025bc050  cbnz w23,0x71025bc040
71025bc054  str w19,[sp, #0x10]
71025bc058  mov w19,#0x2
71025bc05c  b 0x71025bbf74
71025bc060  mov x6,#0x6576
71025bc064  movk x6,#0x645f, LSL #16
71025bc068  mov w23,w4
71025bc06c  movk x6,#0x776f, LSL #32
71025bc070  movk x6,#0x5f6e, LSL #48
71025bc074  strh w16,[sp, #0x28]
71025bc078  str x6,[sp, #0x38]
71025bc07c  mov w6,#0x6e65
71025bc080  movk w6,#0x6d65, LSL #16
71025bc084  str w6,[sp, #0x40]
71025bc088  mov w6,#0x79
71025bc08c  strh w6,[sp, #0x44]
71025bc090  mov x6,x13
71025bc094  mov w19,w8
71025bc098  mov w27,#0x2d
71025bc09c  stp x14,x15,[sp, #0x18]
71025bc0a0  stur x17,[sp, #0x2a]
71025bc0a4  stur w18,[sp, #0x32]
71025bc0a8  strh w20,[sp, #0x36]
71025bc0ac  str w27,[sp, #0x14]
71025bc0b0  mul w19,w19,w7
71025bc0b4  and w23,w23,#0xff
71025bc0b8  eor w19,w19,w23
71025bc0bc  ldrb w23,[x6], #0x1
71025bc0c0  cbnz w23,0x71025bc0b0
71025bc0c4  b 0x71025bc12c
71025bc0c8  mov x6,#0x706d
71025bc0cc  movk x6,#0x645f, LSL #16
71025bc0d0  mov w23,w4
71025bc0d4  movk x6,#0x776f, LSL #32
71025bc0d8  movk x6,#0x5f6e, LSL #48
71025bc0dc  strh w16,[sp, #0x28]
71025bc0e0  str x6,[sp, #0x38]
71025bc0e4  mov w6,#0x6e65
71025bc0e8  movk w6,#0x6d65, LSL #16
71025bc0ec  str w6,[sp, #0x40]
71025bc0f0  mov w6,#0x79
71025bc0f4  strh w6,[sp, #0x44]
71025bc0f8  mov x6,x13
71025bc0fc  mov w19,w8
71025bc100  mov w27,#0x2d
71025bc104  stp x14,x15,[sp, #0x18]
71025bc108  stur x17,[sp, #0x2a]
71025bc10c  stur w18,[sp, #0x32]
71025bc110  strh w24,[sp, #0x36]
71025bc114  str w27,[sp, #0x14]
71025bc118  mul w19,w19,w7
71025bc11c  and w23,w23,#0xff
71025bc120  eor w19,w19,w23
71025bc124  ldrb w23,[x6], #0x1
71025bc128  cbnz w23,0x71025bc118
71025bc12c  str w19,[sp, #0x10]
71025bc130  mov w19,w25
71025bc134  mov w6,w4
71025bc138  str w25,[sp, #0xa0]
71025bc13c  add w23,w12,#0x1
71025bc140  cmp w23,w11
71025bc144  b.cs 0x71025c06b0
71025bc148  add x12,x12,#0x1
71025bc14c  cmp x22,w23, UXTW 
71025bc150  b.hi 0x71025bb728
71025bc154  add x0,x9,#0x2f8
71025bc158  bl 0x71039c1330
71025bc15c  mov w8,#0x8
71025bc160  str w8,[sp, #0xa0]
71025bc164  adrp x8,0x7105329000
71025bc168  ldr x8,[x8, #0xfa0]
71025bc16c  strb wzr,[sp, #0x18]
71025bc170  str xzr,[sp, #0x10]
71025bc174  strb wzr,[sp, #0x60]
71025bc178  str xzr,[sp, #0x58]
71025bc17c  ldr x8,[x8]
71025bc180  ldr x9,[x8, #0x5b8]
71025bc184  ldr x10,[x8, #0x5b0]
71025bc188  sub x9,x9,x10
71025bc18c  asr x11,x9,#0x4
71025bc190  cbz w11,0x71025bc1e4
71025bc194  mov w12,wzr
71025bc198  add x8,x8,#0x5b0
71025bc19c  adrp x9,0x710438a000
71025bc1a0  add x9,x9,#0x9c7
71025bc1a4  mov w12,w12
71025bc1a8  cmp x11,x12
71025bc1ac  b.ls 0x71025c1ba0
71025bc1b0  lsl x13,x12,#0x4
71025bc1b4  ldr x13,[x10, x13, LSL #0x0]
71025bc1b8  eor x13,x13,x2
71025bc1bc  tst x13,#0xffffffffff
71025bc1c0  b.ne 0x71025bc1d8
71025bc1c4  add x13,x10,x12, LSL #0x4
71025bc1c8  ldrb w14,[x13, #0x8]
71025bc1cc  ldrb w13,[x13, #0x9]
71025bc1d0  cbnz w14,0x71025c1880
71025bc1d4  cbnz w13,0x71025c1898
71025bc1d8  add w12,w12,#0x1
71025bc1dc  cmp w12,w11
71025bc1e0  b.cc 0x71025bc1a4
71025bc1e4  mov w10,wzr
71025bc1e8  add x11,sp,#0x10
71025bc1ec  add x9,x11,#0x8
71025bc1f0  mov w8,#0x9dc5
71025bc1f4  movk w8,#0x811c, LSL #16
71025bc1f8  mov w12,w8
71025bc1fc  strb wzr,[x9, w10, UXTW ]
71025bc200  str w10,[sp, #0x14]
71025bc204  ldrb w10,[sp, #0x18]
71025bc208  cbz w10,0x71025bc230
71025bc20c  add x9,x11,#0x9
71025bc210  mov w13,#0x89
71025bc214  mov w14,w10
71025bc218  mov w12,w8
71025bc21c  mul w12,w12,w13
71025bc220  and w14,w14,#0xff
71025bc224  eor w12,w12,w14
71025bc228  ldrb w14,[x9], #0x1
71025bc22c  cbnz w14,0x71025bc21c
71025bc230  mov w9,#0x4
71025bc234  cmp x11,x0
71025bc238  str w12,[sp, #0x10]
71025bc23c  str w9,[sp, #0xa0]
71025bc240  b.eq 0x71025c16b8
71025bc244  add x13,sp,#0x10
71025bc248  mov x11,xzr
71025bc24c  add x12,x0,#0x9
71025bc250  add x13,x13,#0x9
71025bc254  tst w10,#0xff
71025bc258  b.eq 0x71025c0a80
71025bc25c  add w14,w11,#0x1
71025bc260  add x15,x12,x11
71025bc264  cmp w14,#0x3f
71025bc268  sturb w10,[x15, #-0x1]
71025bc26c  b.cs 0x71025c0738
71025bc270  ldrb w10,[x13, x11, LSL ]
71025bc274  cbz w10,0x71025c0a7c
71025bc278  add x14,x13,x11
71025bc27c  strb w10,[x12, x11, LSL ]
71025bc280  ldrb w10,[x14, #0x1]
71025bc284  add x11,x11,#0x2
71025bc288  tst w10,#0xff
71025bc28c  b.ne 0x71025bc25c
71025bc290  b 0x71025c0a80
71025bc294  mov w9,#0x8
71025bc298  str w9,[sp, #0xa0]
71025bc29c  mov x9,#0x616e
71025bc2a0  movk x9,#0x5f6d, LSL #16
71025bc2a4  movk x9,#0x7073, LSL #32
71025bc2a8  movk x9,#0x7269, LSL #48
71025bc2ac  str x9,[sp, #0x18]
71025bc2b0  mov w9,#0x7469
71025bc2b4  movk w9,#0x5f73, LSL #16
71025bc2b8  str w9,[sp, #0x20]
71025bc2bc  mov w9,#0x6968
71025bc2c0  strh w9,[sp, #0x24]
71025bc2c4  mov x9,#0x746e
71025bc2c8  movk x9,#0x725f, LSL #16
71025bc2cc  movk x9,#0x6c75, LSL #32
71025bc2d0  movk x9,#0x5f65, LSL #48
71025bc2d4  mov x8,#0x2100000000
71025bc2d8  str x8,[sp, #0x10]
71025bc2dc  mov w8,#0x9dc5
71025bc2e0  movk w8,#0x811c, LSL #16
71025bc2e4  strb wzr,[sp, #0x60]
71025bc2e8  stur x9,[sp, #0x26]
71025bc2ec  mov x9,#0x6d72
71025bc2f0  movk x9,#0x6c61, LSL #16
71025bc2f4  mov w10,#0x6f6e
71025bc2f8  movk x9,#0x735f, LSL #32
71025bc2fc  movk x9,#0x6165, LSL #48
71025bc300  mov w13,#0x6c
71025bc304  strh w10,[sp, #0x2e]
71025bc308  str x9,[sp, #0x30]
71025bc30c  mov w11,#0x6e
71025bc310  mov w10,#0x9
71025bc314  strh w13,[sp, #0x38]
71025bc318  mov w9,#0x89
71025bc31c  add x12,sp,#0x10
71025bc320  str xzr,[sp, #0x58]
71025bc324  mov w13,w8
71025bc328  mul w13,w13,w9
71025bc32c  and w11,w11,#0xff
71025bc330  eor w13,w13,w11
71025bc334  ldrb w11,[x12, x10, LSL ]
71025bc338  add x10,x10,#0x1
71025bc33c  cbnz w11,0x71025bc328
71025bc340  str w13,[sp, #0x10]
71025bc344  add x13,sp,#0x10
71025bc348  mov w10,#0x2
71025bc34c  cmp x13,x0
71025bc350  str w10,[sp, #0xa0]
71025bc354  b.eq 0x71025c185c
71025bc358  mov x11,xzr
71025bc35c  add x12,x0,#0x9
71025bc360  add x13,x13,#0x9
71025bc364  mov w14,#0x6e
71025bc368  tst w14,#0xff
71025bc36c  b.eq 0x71025c0918
71025bc370  add w15,w11,#0x1
71025bc374  add x16,x12,x11
71025bc378  cmp w15,#0x3f
71025bc37c  sturb w14,[x16, #-0x1]
71025bc380  b.cs 0x71025c0708
71025bc384  ldrb w14,[x13, x11, LSL ]
71025bc388  cbz w14,0x71025c0914
71025bc38c  add x15,x13,x11
71025bc390  strb w14,[x12, x11, LSL ]
71025bc394  ldrb w14,[x15, #0x1]
71025bc398  add x11,x11,#0x2
71025bc39c  tst w14,#0xff
71025bc3a0  b.ne 0x71025bc370
71025bc3a4  b 0x71025c0918
71025bc3a8  mov w9,#0x8
71025bc3ac  str w9,[sp, #0xa0]
71025bc3b0  mov x9,#0x616e
71025bc3b4  movk x9,#0x5f6d, LSL #16
71025bc3b8  movk x9,#0x7073, LSL #32
71025bc3bc  movk x9,#0x7269, LSL #48
71025bc3c0  str x9,[sp, #0x18]
71025bc3c4  mov w9,#0x7469
71025bc3c8  movk w9,#0x5f73, LSL #16
71025bc3cc  str w9,[sp, #0x20]
71025bc3d0  mov w9,#0x6968
71025bc3d4  strh w9,[sp, #0x24]
71025bc3d8  mov x9,#0x746e
71025bc3dc  movk x9,#0x725f, LSL #16
71025bc3e0  movk x9,#0x6c75, LSL #32
71025bc3e4  movk x9,#0x5f65, LSL #48
71025bc3e8  stur x9,[sp, #0x26]
71025bc3ec  mov w9,#0x7073
71025bc3f0  mov x8,#0x2200000000
71025bc3f4  str x8,[sp, #0x10]
71025bc3f8  mov w8,#0x9dc5
71025bc3fc  movk w8,#0x811c, LSL #16
71025bc400  mov w12,#0x6c61
71025bc404  strh w12,[sp, #0x38]
71025bc408  strh w9,[sp, #0x2e]
71025bc40c  mov x9,#0x6d5f
71025bc410  movk x9,#0x766f, LSL #16
71025bc414  movk x9,#0x5f65, LSL #32
71025bc418  movk x9,#0x6573, LSL #48
71025bc41c  str x9,[sp, #0x30]
71025bc420  mov w11,#0x6e
71025bc424  mov w10,#0x9
71025bc428  strb wzr,[sp, #0x60]
71025bc42c  mov w9,#0x89
71025bc430  add x12,sp,#0x10
71025bc434  str xzr,[sp, #0x58]
71025bc438  mov w13,w8
71025bc43c  strb wzr,[sp, #0x3a]
71025bc440  mul w13,w13,w9
71025bc444  and w11,w11,#0xff
71025bc448  eor w13,w13,w11
71025bc44c  ldrb w11,[x12, x10, LSL ]
71025bc450  add x10,x10,#0x1
71025bc454  cbnz w11,0x71025bc440
71025bc458  str w13,[sp, #0x10]
71025bc45c  add x13,sp,#0x10
71025bc460  mov w10,#0x2
71025bc464  cmp x13,x0
71025bc468  str w10,[sp, #0xa0]
71025bc46c  b.eq 0x71025c185c
71025bc470  mov x11,xzr
71025bc474  add x12,x0,#0x9
71025bc478  add x13,x13,#0x9
71025bc47c  mov w14,#0x6e
71025bc480  tst w14,#0xff
71025bc484  b.eq 0x71025c0954
71025bc488  add w15,w11,#0x1
71025bc48c  add x16,x12,x11
71025bc490  cmp w15,#0x3f
71025bc494  sturb w14,[x16, #-0x1]
71025bc498  b.cs 0x71025c0710
71025bc49c  ldrb w14,[x13, x11, LSL ]
71025bc4a0  cbz w14,0x71025c0950
71025bc4a4  add x15,x13,x11
71025bc4a8  strb w14,[x12, x11, LSL ]
71025bc4ac  ldrb w14,[x15, #0x1]
71025bc4b0  add x11,x11,#0x2
71025bc4b4  tst w14,#0xff
71025bc4b8  b.ne 0x71025bc488
71025bc4bc  b 0x71025c0954
71025bc4c0  adrp x10,0x7105329000
71025bc4c4  ldr x10,[x10, #0xfa0]
71025bc4c8  mov w8,#0x8
71025bc4cc  strb wzr,[sp, #0x18]
71025bc4d0  str xzr,[sp, #0x10]
71025bc4d4  strb wzr,[sp, #0x60]
71025bc4d8  str xzr,[sp, #0x58]
71025bc4dc  mov w9,#0x9dc5
71025bc4e0  movk w9,#0x811c, LSL #16
71025bc4e4  str w8,[sp, #0xa0]
71025bc4e8  ldr x12,[x10]
71025bc4ec  ldr x11,[x12, #0x3d8]
71025bc4f0  ldr x10,[x12, #0x3d0]
71025bc4f4  sub x11,x11,x10
71025bc4f8  mov w4,wzr
71025bc4fc  asr x11,x11,#0x4
71025bc500  cbz w11,0x71025bc784
71025bc504  add x8,x12,#0x3d0
71025bc508  str x8,[sp, #0x8]
71025bc50c  add x8,sp,#0x10
71025bc510  mov x13,#0x616e
71025bc514  movk x13,#0x5f6d, LSL #16
71025bc518  mov x14,#0x7469
71025bc51c  movk x14,#0x5f73, LSL #16
71025bc520  mov x16,#0x6c75
71025bc524  movk x16,#0x5f65, LSL #16
71025bc528  mov x6,#0x7075
71025bc52c  movk x6,#0x705f, LSL #16
71025bc530  mov x23,#0x7075
71025bc534  movk x23,#0x655f, LSL #16
71025bc538  mov w30,wzr
71025bc53c  add x12,x8,#0x9
71025bc540  mov w8,#0x8
71025bc544  movk x13,#0x7073, LSL #32
71025bc548  movk x13,#0x7269, LSL #48
71025bc54c  movk x14,#0x6968, LSL #32
71025bc550  movk x14,#0x746e, LSL #48
71025bc554  mov w15,#0x725f
71025bc558  movk x16,#0x7267, LSL #32
71025bc55c  movk x16,#0x7661, LSL #48
71025bc560  mov w17,#0x7469
71025bc564  movk w17,#0x5f79, LSL #16
71025bc568  mov w1,#0x6e
71025bc56c  mov w5,#0x89
71025bc570  movk x6,#0x616c, LSL #32
71025bc574  movk x6,#0x6579, LSL #48
71025bc578  mov w7,#0x72
71025bc57c  mov w19,#0x27
71025bc580  mov w21,#0x796d
71025bc584  mov w22,#0x28
71025bc588  movk x23,#0x656e, LSL #32
71025bc58c  movk x23,#0x796d, LSL #48
71025bc590  mov w24,#0x26
71025bc594  mov w25,#0x6f64
71025bc598  movk w25,#0x6e77, LSL #16
71025bc59c  mov w26,#0x22
71025bc5a0  mov w27,#0x7075
71025bc5a4  mov w28,#0x20
71025bc5a8  mov w30,w30
71025bc5ac  cmp x11,x30
71025bc5b0  b.ls 0x71025c1ba8
71025bc5b4  lsl x18,x30,#0x4
71025bc5b8  ldr x18,[x10, x18, LSL #0x0]
71025bc5bc  eor x18,x18,x2
71025bc5c0  tst x18,#0xffffffffff
71025bc5c4  b.ne 0x71025bc778
71025bc5c8  add x3,x10,x30, LSL #0x4
71025bc5cc  ldrb w20,[x3, #0x9]
71025bc5d0  ldrb w18,[x3, #0x8]
71025bc5d4  cbz w20,0x71025bc624
71025bc5d8  ldrb w8,[x3, #0xa]
71025bc5dc  stp x13,x14,[sp, #0x18]
71025bc5e0  strh w15,[sp, #0x28]
71025bc5e4  stur x16,[sp, #0x2a]
71025bc5e8  stur w17,[sp, #0x32]
71025bc5ec  cbz w18,0x71025bc670
71025bc5f0  cbz w8,0x71025bc6a4
71025bc5f4  mov x8,x12
71025bc5f8  mov w18,w1
71025bc5fc  mov w4,w9
71025bc600  strh w27,[sp, #0x36]
71025bc604  strb wzr,[sp, #0x38]
71025bc608  str w28,[sp, #0x14]
71025bc60c  mul w3,w4,w5
71025bc610  and w18,w18,#0xff
71025bc614  eor w4,w3,w18
71025bc618  ldrb w18,[x8], #0x1
71025bc61c  cbnz w18,0x71025bc60c
71025bc620  b 0x71025bc71c
71025bc624  cbz w18,0x71025bc778
71025bc628  ldrb w8,[x3, #0xa]
71025bc62c  stp x13,x14,[sp, #0x18]
71025bc630  strh w15,[sp, #0x28]
71025bc634  stur x16,[sp, #0x2a]
71025bc638  stur w17,[sp, #0x32]
71025bc63c  cbz w8,0x71025bc6d4
71025bc640  mov x8,x12
71025bc644  mov w18,w1
71025bc648  mov w4,w9
71025bc64c  stur x6,[sp, #0x36]
71025bc650  strh w7,[sp, #0x3e]
71025bc654  str w19,[sp, #0x14]
71025bc658  mul w3,w4,w5
71025bc65c  and w18,w18,#0xff
71025bc660  eor w4,w3,w18
71025bc664  ldrb w18,[x8], #0x1
71025bc668  cbnz w18,0x71025bc658
71025bc66c  b 0x71025bc71c
71025bc670  cbz w8,0x71025bc728
71025bc674  mov x8,x12
71025bc678  mov w18,w1
71025bc67c  mov w4,w9
71025bc680  stur x23,[sp, #0x36]
71025bc684  strb wzr,[sp, #0x3e]
71025bc688  str w24,[sp, #0x14]
71025bc68c  mul w3,w4,w5
71025bc690  and w18,w18,#0xff
71025bc694  eor w4,w3,w18
71025bc698  ldrb w18,[x8], #0x1
71025bc69c  cbnz w18,0x71025bc68c
71025bc6a0  b 0x71025bc768
71025bc6a4  mov x8,x12
71025bc6a8  mov w18,w1
71025bc6ac  mov w4,w9
71025bc6b0  stur w25,[sp, #0x36]
71025bc6b4  strb wzr,[sp, #0x3a]
71025bc6b8  str w26,[sp, #0x14]
71025bc6bc  mul w3,w4,w5
71025bc6c0  and w18,w18,#0xff
71025bc6c4  eor w4,w3,w18
71025bc6c8  ldrb w18,[x8], #0x1
71025bc6cc  cbnz w18,0x71025bc6bc
71025bc6d0  b 0x71025bc71c
71025bc6d4  mov x8,#0x6f64
71025bc6d8  movk x8,#0x6e77, LSL #16
71025bc6dc  movk x8,#0x705f, LSL #32
71025bc6e0  movk x8,#0x616c, LSL #48
71025bc6e4  stur x8,[sp, #0x36]
71025bc6e8  mov w8,#0x6579
71025bc6ec  movk w8,#0x72, LSL #16
71025bc6f0  stur w8,[sp, #0x3e]
71025bc6f4  mov x8,x12
71025bc6f8  mov w18,w1
71025bc6fc  mov w4,w9
71025bc700  mov w3,#0x29
71025bc704  str w3,[sp, #0x14]
71025bc708  mul w3,w4,w5
71025bc70c  and w18,w18,#0xff
71025bc710  eor w4,w3,w18
71025bc714  ldrb w18,[x8], #0x1
71025bc718  cbnz w18,0x71025bc708
71025bc71c  orr w8,wzr,#0x3
71025bc720  str w4,[sp, #0x10]
71025bc724  b 0x71025bc770
71025bc728  mov x8,#0x6f64
71025bc72c  movk x8,#0x6e77, LSL #16
71025bc730  movk x8,#0x655f, LSL #32
71025bc734  movk x8,#0x656e, LSL #48
71025bc738  stur x8,[sp, #0x36]
71025bc73c  mov x8,x12
71025bc740  mov w18,w1
71025bc744  mov w4,w9
71025bc748  strh w21,[sp, #0x3e]
71025bc74c  strb wzr,[sp, #0x40]
71025bc750  str w22,[sp, #0x14]
71025bc754  mul w3,w4,w5
71025bc758  and w18,w18,#0xff
71025bc75c  eor w4,w3,w18
71025bc760  ldrb w18,[x8], #0x1
71025bc764  cbnz w18,0x71025bc754
71025bc768  str w4,[sp, #0x10]
71025bc76c  mov w8,#0x4
71025bc770  mov w4,w1
71025bc774  str w8,[sp, #0xa0]
71025bc778  add w30,w30,#0x1
71025bc77c  cmp w30,w11
71025bc780  b.cc 0x71025bc5a8
71025bc784  add x12,sp,#0x10
71025bc788  cmp x12,x0
71025bc78c  b.eq 0x71025c0f20
71025bc790  mov x10,xzr
71025bc794  add x11,x0,#0x9
71025bc798  add x12,x12,#0x9
71025bc79c  tst w4,#0xff
71025bc7a0  b.eq 0x71025c0edc
71025bc7a4  add w13,w10,#0x1
71025bc7a8  add x14,x11,x10
71025bc7ac  cmp w13,#0x3f
71025bc7b0  sturb w4,[x14, #-0x1]
71025bc7b4  b.cs 0x71025c0790
71025bc7b8  ldrb w13,[x12, x10, LSL ]
71025bc7bc  cbz w13,0x71025c0ed8
71025bc7c0  add x14,x12,x10
71025bc7c4  strb w13,[x11, x10, LSL ]
71025bc7c8  ldrb w4,[x14, #0x1]
71025bc7cc  add x10,x10,#0x2
71025bc7d0  tst w4,#0xff
71025bc7d4  b.ne 0x71025bc7a4
71025bc7d8  b 0x71025c0edc
71025bc7dc  mov w9,#0x8
71025bc7e0  str w9,[sp, #0xa0]
71025bc7e4  mov x9,#0x616e
71025bc7e8  movk x9,#0x5f6d, LSL #16
71025bc7ec  movk x9,#0x7073, LSL #32
71025bc7f0  movk x9,#0x7269, LSL #48
71025bc7f4  str x9,[sp, #0x18]
71025bc7f8  mov w9,#0x7469
71025bc7fc  movk w9,#0x5f73, LSL #16
71025bc800  str w9,[sp, #0x20]
71025bc804  mov w9,#0x6968
71025bc808  strh w9,[sp, #0x24]
71025bc80c  mov x9,#0x746e
71025bc810  movk x9,#0x725f, LSL #16
71025bc814  orr x8,xzr,#0x2000000000
71025bc818  mov x12,#0x7472
71025bc81c  movk x12,#0x7168, LSL #16
71025bc820  str x8,[sp, #0x10]
71025bc824  movk x9,#0x6c75, LSL #32
71025bc828  movk x9,#0x5f65, LSL #48
71025bc82c  stur x9,[sp, #0x26]
71025bc830  mov w8,#0x9dc5
71025bc834  movk w8,#0x811c, LSL #16
71025bc838  strb wzr,[sp, #0x60]
71025bc83c  mov w9,#0x6165
71025bc840  movk x12,#0x6175, LSL #32
71025bc844  movk x12,#0x656b, LSL #48
71025bc848  strh w9,[sp, #0x2e]
71025bc84c  mov w11,#0x6e
71025bc850  str x12,[sp, #0x30]
71025bc854  mov w10,#0x9
71025bc858  mov w9,#0x89
71025bc85c  str xzr,[sp, #0x58]
71025bc860  add x12,sp,#0x10
71025bc864  mov w13,w8
71025bc868  strb wzr,[sp, #0x38]
71025bc86c  mul w13,w13,w9
71025bc870  and w11,w11,#0xff
71025bc874  eor w13,w13,w11
71025bc878  ldrb w11,[x12, x10, LSL ]
71025bc87c  add x10,x10,#0x1
71025bc880  cbnz w11,0x71025bc86c
71025bc884  str w13,[sp, #0x10]
71025bc888  add x13,sp,#0x10
71025bc88c  orr w10,wzr,#0x3
71025bc890  cmp x13,x0
71025bc894  str w10,[sp, #0xa0]
71025bc898  b.eq 0x71025c185c
71025bc89c  mov x11,xzr
71025bc8a0  add x12,x0,#0x9
71025bc8a4  add x13,x13,#0x9
71025bc8a8  mov w14,#0x6e
71025bc8ac  tst w14,#0xff
71025bc8b0  b.eq 0x71025c0990
71025bc8b4  add w15,w11,#0x1
71025bc8b8  add x16,x12,x11
71025bc8bc  cmp w15,#0x3f
71025bc8c0  sturb w14,[x16, #-0x1]
71025bc8c4  b.cs 0x71025c0718
71025bc8c8  ldrb w14,[x13, x11, LSL ]
71025bc8cc  cbz w14,0x71025c098c
71025bc8d0  add x15,x13,x11
71025bc8d4  strb w14,[x12, x11, LSL ]
71025bc8d8  ldrb w14,[x15, #0x1]
71025bc8dc  add x11,x11,#0x2
71025bc8e0  tst w14,#0xff
71025bc8e4  b.ne 0x71025bc8b4
71025bc8e8  b 0x71025c0990
71025bc8ec  mov w8,#0x8
71025bc8f0  str w8,[sp, #0xa0]
71025bc8f4  adrp x8,0x7105329000
71025bc8f8  ldr x8,[x8, #0xfa0]
71025bc8fc  strb wzr,[sp, #0x18]
71025bc900  str xzr,[sp, #0x10]
71025bc904  strb wzr,[sp, #0x60]
71025bc908  str xzr,[sp, #0x58]
71025bc90c  ldr x8,[x8]
71025bc910  ldr x9,[x8, #0x408]
71025bc914  ldr x10,[x8, #0x400]
71025bc918  sub x9,x9,x10
71025bc91c  asr x11,x9,#0x4
71025bc920  cbz w11,0x71025bc974
71025bc924  mov w12,wzr
71025bc928  add x8,x8,#0x400
71025bc92c  adrp x9,0x71043ee000
71025bc930  add x9,x9,#0x867
71025bc934  mov w12,w12
71025bc938  cmp x11,x12
71025bc93c  b.ls 0x71025c1ba0
71025bc940  lsl x13,x12,#0x4
71025bc944  ldr x13,[x10, x13, LSL #0x0]
71025bc948  eor x13,x13,x2
71025bc94c  tst x13,#0xffffffffff
71025bc950  b.ne 0x71025bc968
71025bc954  add x13,x10,x12, LSL #0x4
71025bc958  ldrb w14,[x13, #0x8]
71025bc95c  ldrb w13,[x13, #0x9]
71025bc960  cbnz w14,0x71025c18dc
71025bc964  cbnz w13,0x71025c18f4
71025bc968  add w12,w12,#0x1
71025bc96c  cmp w12,w11
71025bc970  b.cc 0x71025bc934
71025bc974  mov w10,wzr
71025bc978  add x11,sp,#0x10
71025bc97c  add x9,x11,#0x8
71025bc980  mov w8,#0x9dc5
71025bc984  movk w8,#0x811c, LSL #16
71025bc988  mov w12,w8
71025bc98c  strb wzr,[x9, w10, UXTW ]
71025bc990  str w10,[sp, #0x14]
71025bc994  ldrb w10,[sp, #0x18]
71025bc998  cbz w10,0x71025bc9c0
71025bc99c  add x9,x11,#0x9
71025bc9a0  mov w13,#0x89
71025bc9a4  mov w14,w10
71025bc9a8  mov w12,w8
71025bc9ac  mul w12,w12,w13
71025bc9b0  and w14,w14,#0xff
71025bc9b4  eor w12,w12,w14
71025bc9b8  ldrb w14,[x9], #0x1
71025bc9bc  cbnz w14,0x71025bc9ac
71025bc9c0  mov w9,#0x4
71025bc9c4  cmp x11,x0
71025bc9c8  str w12,[sp, #0x10]
71025bc9cc  str w9,[sp, #0xa0]
71025bc9d0  b.eq 0x71025c16b8
71025bc9d4  add x13,sp,#0x10
71025bc9d8  mov x11,xzr
71025bc9dc  add x12,x0,#0x9
71025bc9e0  add x13,x13,#0x9
71025bc9e4  tst w10,#0xff
71025bc9e8  b.eq 0x71025c0b40
71025bc9ec  add w14,w11,#0x1
71025bc9f0  add x15,x12,x11
71025bc9f4  cmp w14,#0x3f
71025bc9f8  sturb w10,[x15, #-0x1]
71025bc9fc  b.cs 0x71025c0740
71025bca00  ldrb w10,[x13, x11, LSL ]
71025bca04  cbz w10,0x71025c0b3c
71025bca08  add x14,x13,x11
71025bca0c  strb w10,[x12, x11, LSL ]
71025bca10  ldrb w10,[x14, #0x1]
71025bca14  add x11,x11,#0x2
71025bca18  tst w10,#0xff
71025bca1c  b.ne 0x71025bc9ec
71025bca20  b 0x71025c0b40
71025bca24  mov w9,#0x8
71025bca28  str w9,[sp, #0xa0]
71025bca2c  mov x9,#0x616e
71025bca30  movk x9,#0x5f6d, LSL #16
71025bca34  movk x9,#0x7073, LSL #32
71025bca38  movk x9,#0x7269, LSL #48
71025bca3c  str x9,[sp, #0x18]
71025bca40  mov w9,#0x7469
71025bca44  movk w9,#0x5f73, LSL #16
71025bca48  str w9,[sp, #0x20]
71025bca4c  mov w9,#0x6968
71025bca50  strh w9,[sp, #0x24]
71025bca54  mov x9,#0x746e
71025bca58  movk x9,#0x725f, LSL #16
71025bca5c  movk x9,#0x6c75, LSL #32
71025bca60  movk x9,#0x5f65, LSL #48
71025bca64  stur x9,[sp, #0x26]
71025bca68  mov w9,#0x6461
71025bca6c  strh w9,[sp, #0x2e]
71025bca70  mov x9,#0x6176
71025bca74  movk x9,#0x746e, LSL #16
71025bca78  mov x8,#0x2600000000
71025bca7c  str x8,[sp, #0x10]
71025bca80  mov w8,#0x9dc5
71025bca84  movk w8,#0x811c, LSL #16
71025bca88  mov w12,#0x656c
71025bca8c  strh w12,[sp, #0x3c]
71025bca90  movk x9,#0x6761, LSL #32
71025bca94  movk x9,#0x5f65, LSL #48
71025bca98  str x9,[sp, #0x30]
71025bca9c  mov w9,#0x6f64
71025bcaa0  movk w9,#0x6275, LSL #16
71025bcaa4  str w9,[sp, #0x38]
71025bcaa8  mov w11,#0x6e
71025bcaac  mov w10,#0x9
71025bcab0  strb wzr,[sp, #0x60]
71025bcab4  mov w9,#0x89
71025bcab8  add x12,sp,#0x10
71025bcabc  str xzr,[sp, #0x58]
71025bcac0  mov w13,w8
71025bcac4  strb wzr,[sp, #0x3e]
71025bcac8  mul w13,w13,w9
71025bcacc  and w11,w11,#0xff
71025bcad0  eor w13,w13,w11
71025bcad4  ldrb w11,[x12, x10, LSL ]
71025bcad8  add x10,x10,#0x1
71025bcadc  cbnz w11,0x71025bcac8
71025bcae0  str w13,[sp, #0x10]
71025bcae4  add x13,sp,#0x10
71025bcae8  mov w10,#0x2
71025bcaec  cmp x13,x0
71025bcaf0  str w10,[sp, #0xa0]
71025bcaf4  b.eq 0x71025c185c
71025bcaf8  mov x11,xzr
71025bcafc  add x12,x0,#0x9
71025bcb00  add x13,x13,#0x9
71025bcb04  mov w14,#0x6e
71025bcb08  tst w14,#0xff
71025bcb0c  b.eq 0x71025c09cc
71025bcb10  add w15,w11,#0x1
71025bcb14  add x16,x12,x11
71025bcb18  cmp w15,#0x3f
71025bcb1c  sturb w14,[x16, #-0x1]
71025bcb20  b.cs 0x71025c0720
71025bcb24  ldrb w14,[x13, x11, LSL ]
71025bcb28  cbz w14,0x71025c09c8
71025bcb2c  add x15,x13,x11
71025bcb30  strb w14,[x12, x11, LSL ]
71025bcb34  ldrb w14,[x15, #0x1]
71025bcb38  add x11,x11,#0x2
71025bcb3c  tst w14,#0xff
71025bcb40  b.ne 0x71025bcb10
71025bcb44  b 0x71025c09cc
71025bcb48  mov w9,#0x8
71025bcb4c  str w9,[sp, #0xa0]
71025bcb50  mov x9,#0x616e
71025bcb54  movk x9,#0x5f6d, LSL #16
71025bcb58  movk x9,#0x7073, LSL #32
71025bcb5c  movk x9,#0x7269, LSL #48
71025bcb60  str x9,[sp, #0x18]
71025bcb64  mov w9,#0x7469
71025bcb68  movk w9,#0x5f73, LSL #16
71025bcb6c  str w9,[sp, #0x20]
71025bcb70  mov w9,#0x6968
71025bcb74  mov x8,#0x1a00000000
71025bcb78  str x8,[sp, #0x10]
71025bcb7c  mov w8,#0x9dc5
71025bcb80  movk w8,#0x811c, LSL #16
71025bcb84  strh w9,[sp, #0x24]
71025bcb88  mov x9,#0x746e
71025bcb8c  movk x9,#0x725f, LSL #16
71025bcb90  movk x9,#0x6c75, LSL #32
71025bcb94  movk x9,#0x5f65, LSL #48
71025bcb98  stur x9,[sp, #0x26]
71025bcb9c  mov w12,#0x6164
71025bcba0  movk w12,#0x6b72, LSL #16
71025bcba4  stur w12,[sp, #0x2e]
71025bcba8  mov w11,#0x6e
71025bcbac  mov w10,#0x9
71025bcbb0  strb wzr,[sp, #0x60]
71025bcbb4  mov w9,#0x89
71025bcbb8  add x12,sp,#0x10
71025bcbbc  str xzr,[sp, #0x58]
71025bcbc0  mov w13,w8
71025bcbc4  strb wzr,[sp, #0x32]
71025bcbc8  mul w13,w13,w9
71025bcbcc  and w11,w11,#0xff
71025bcbd0  eor w13,w13,w11
71025bcbd4  ldrb w11,[x12, x10, LSL ]
71025bcbd8  add x10,x10,#0x1
71025bcbdc  cbnz w11,0x71025bcbc8
71025bcbe0  str w13,[sp, #0x10]
71025bcbe4  add x13,sp,#0x10
71025bcbe8  mov w10,#0x2
71025bcbec  cmp x13,x0
71025bcbf0  str w10,[sp, #0xa0]
71025bcbf4  b.eq 0x71025c185c
71025bcbf8  mov x11,xzr
71025bcbfc  add x12,x0,#0x9
71025bcc00  add x13,x13,#0x9
71025bcc04  mov w14,#0x6e
71025bcc08  tst w14,#0xff
71025bcc0c  b.eq 0x71025c0a08
71025bcc10  add w15,w11,#0x1
71025bcc14  add x16,x12,x11
71025bcc18  cmp w15,#0x3f
71025bcc1c  sturb w14,[x16, #-0x1]
71025bcc20  b.cs 0x71025c0728
71025bcc24  ldrb w14,[x13, x11, LSL ]
71025bcc28  cbz w14,0x71025c0a04
71025bcc2c  add x15,x13,x11
71025bcc30  strb w14,[x12, x11, LSL ]
71025bcc34  ldrb w14,[x15, #0x1]
71025bcc38  add x11,x11,#0x2
71025bcc3c  tst w14,#0xff
71025bcc40  b.ne 0x71025bcc10
71025bcc44  b 0x71025c0a08
71025bcc48  adrp x8,0x7105329000
71025bcc4c  ldr x8,[x8, #0xfa0]
71025bcc50  mov w10,#0x8
71025bcc54  strb wzr,[sp, #0x18]
71025bcc58  str xzr,[sp, #0x10]
71025bcc5c  strb wzr,[sp, #0x60]
71025bcc60  str xzr,[sp, #0x58]
71025bcc64  mov w9,#0x9dc5
71025bcc68  movk w9,#0x811c, LSL #16
71025bcc6c  str w10,[sp, #0xa0]
71025bcc70  ldr x8,[x8]
71025bcc74  ldr x12,[x8, #0x4e0]
71025bcc78  ldr x11,[x8, #0x4d8]
71025bcc7c  sub x12,x12,x11
71025bcc80  mov w24,wzr
71025bcc84  asr x12,x12,#0x4
71025bcc88  cbz w12,0x71025bce18
71025bcc8c  add x10,sp,#0x10
71025bcc90  mov x14,#0x616e
71025bcc94  movk x14,#0x5f6d, LSL #16
71025bcc98  mov x15,#0x7469
71025bcc9c  movk x15,#0x5f73, LSL #16
71025bcca0  mov x17,#0x6c75
71025bcca4  movk x17,#0x5f65, LSL #16
71025bcca8  mov w23,wzr
71025bccac  add x8,x8,#0x4d8
71025bccb0  add x13,x10,#0x9
71025bccb4  mov w10,#0x8
71025bccb8  movk x14,#0x7073, LSL #32
71025bccbc  movk x14,#0x7269, LSL #48
71025bccc0  movk x15,#0x6968, LSL #32
71025bccc4  movk x15,#0x746e, LSL #48
71025bccc8  mov w16,#0x725f
71025bcccc  movk x17,#0x7264, LSL #32
71025bccd0  movk x17,#0x776f, LSL #48
71025bccd4  mov w18,#0x5f6e
71025bccd8  movk w18,#0x7075, LSL #16
71025bccdc  mov w1,#0x705f
71025bcce0  mov w3,#0x616c
71025bcce4  movk w3,#0x6579, LSL #16
71025bcce8  mov w4,#0x72
71025bccec  mov w5,#0x25
71025bccf0  mov w6,#0x6e
71025bccf4  mov w7,#0x89
71025bccf8  mov w19,#0x655f
71025bccfc  movk w19,#0x656e, LSL #16
71025bcd00  mov w20,#0x796d
71025bcd04  mov w21,#0x24
71025bcd08  orr w22,wzr,#0x1e
71025bcd0c  mov w23,w23
71025bcd10  cmp x12,x23
71025bcd14  b.ls 0x71025c1ba0
71025bcd18  lsl x25,x23,#0x4
71025bcd1c  ldr x25,[x11, x25, LSL #0x0]
71025bcd20  eor x25,x25,x2
71025bcd24  tst x25,#0xffffffffff
71025bcd28  b.ne 0x71025bce0c
71025bcd2c  add x25,x11,x23, LSL #0x4
71025bcd30  ldrb w26,[x25, #0x9]
71025bcd34  ldrb w25,[x25, #0x8]
71025bcd38  cbz w26,0x71025bcd7c
71025bcd3c  stp x14,x15,[sp, #0x18]
71025bcd40  strh w16,[sp, #0x28]
71025bcd44  stur x17,[sp, #0x2a]
71025bcd48  stur w18,[sp, #0x32]
71025bcd4c  cbz w25,0x71025bcdcc
71025bcd50  mov x10,x13
71025bcd54  mov w25,w6
71025bcd58  mov w24,w9
71025bcd5c  strb wzr,[sp, #0x36]
71025bcd60  str w22,[sp, #0x14]
71025bcd64  mul w24,w24,w7
71025bcd68  and w25,w25,#0xff
71025bcd6c  eor w24,w24,w25
71025bcd70  ldrb w25,[x10], #0x1
71025bcd74  cbnz w25,0x71025bcd64
71025bcd78  b 0x71025bcdc0
71025bcd7c  cbz w25,0x71025bce0c
71025bcd80  mov x10,x13
71025bcd84  mov w25,w6
71025bcd88  mov w24,w9
71025bcd8c  stp x14,x15,[sp, #0x18]
71025bcd90  strh w16,[sp, #0x28]
71025bcd94  stur x17,[sp, #0x2a]
71025bcd98  stur w18,[sp, #0x32]
71025bcd9c  strh w1,[sp, #0x36]
71025bcda0  str w3,[sp, #0x38]
71025bcda4  strh w4,[sp, #0x3c]
71025bcda8  str w5,[sp, #0x14]
71025bcdac  mul w24,w24,w7
71025bcdb0  and w25,w25,#0xff
71025bcdb4  eor w24,w24,w25
71025bcdb8  ldrb w25,[x10], #0x1
71025bcdbc  cbnz w25,0x71025bcdac
71025bcdc0  mov w10,#0x2
71025bcdc4  str w24,[sp, #0x10]
71025bcdc8  b 0x71025bce04
71025bcdcc  mov x10,x13
71025bcdd0  mov w25,w6
71025bcdd4  mov w24,w9
71025bcdd8  stur w19,[sp, #0x36]
71025bcddc  strh w20,[sp, #0x3a]
71025bcde0  strb wzr,[sp, #0x3c]
71025bcde4  str w21,[sp, #0x14]
71025bcde8  mul w24,w24,w7
71025bcdec  and w25,w25,#0xff
71025bcdf0  eor w24,w24,w25
71025bcdf4  ldrb w25,[x10], #0x1
71025bcdf8  cbnz w25,0x71025bcde8
71025bcdfc  str w24,[sp, #0x10]
71025bce00  orr w10,wzr,#0x3
71025bce04  mov w24,w6
71025bce08  str w10,[sp, #0xa0]
71025bce0c  add w23,w23,#0x1
71025bce10  cmp w23,w12
71025bce14  b.cc 0x71025bcd0c
71025bce18  add x12,sp,#0x10
71025bce1c  cmp x12,x0
71025bce20  b.eq 0x71025c185c
71025bce24  mov x8,xzr
71025bce28  add x11,x0,#0x9
71025bce2c  add x12,x12,#0x9
71025bce30  tst w24,#0xff
71025bce34  b.eq 0x71025c0f2c
71025bce38  add w13,w8,#0x1
71025bce3c  add x14,x11,x8
71025bce40  cmp w13,#0x3f
71025bce44  sturb w24,[x14, #-0x1]
71025bce48  b.cs 0x71025c0798
71025bce4c  ldrb w13,[x12, x8, LSL ]
71025bce50  cbz w13,0x71025c0f28
71025bce54  add x14,x12,x8
71025bce58  strb w13,[x11, x8, LSL ]
71025bce5c  ldrb w24,[x14, #0x1]
71025bce60  add x8,x8,#0x2
71025bce64  tst w24,#0xff
71025bce68  b.ne 0x71025bce38
71025bce6c  b 0x71025c0f2c
71025bce70  adrp x8,0x7105329000
71025bce74  ldr x8,[x8, #0xfa0]
71025bce78  mov w4,#0x8
71025bce7c  strb wzr,[sp, #0x18]
71025bce80  str xzr,[sp, #0x10]
71025bce84  strb wzr,[sp, #0x60]
71025bce88  str xzr,[sp, #0x58]
71025bce8c  mov w9,#0x9dc5
71025bce90  movk w9,#0x811c, LSL #16
71025bce94  str w4,[sp, #0xa0]
71025bce98  ldr x8,[x8]
71025bce9c  ldr x11,[x8, #0x4f8]
71025bcea0  ldr x10,[x8, #0x4f0]
71025bcea4  sub x11,x11,x10
71025bcea8  mov w6,wzr
71025bceac  asr x11,x11,#0x4
71025bceb0  cbz w11,0x71025bd164
71025bceb4  add x8,x8,#0x4f0
71025bceb8  str x8,[sp, #0x8]
71025bcebc  add x8,sp,#0x10
71025bcec0  mov x13,#0x616e
71025bcec4  movk x13,#0x5f6d, LSL #16
71025bcec8  mov x14,#0x7469
71025bcecc  movk x14,#0x5f73, LSL #16
71025bced0  mov x16,#0x6c75
71025bced4  movk x16,#0x5f65, LSL #16
71025bced8  mov x19,#0x7075
71025bcedc  movk x19,#0x705f, LSL #16
71025bcee0  mov x25,#0x7075
71025bcee4  movk x25,#0x655f, LSL #16
71025bcee8  mov x27,#0x6f64
71025bceec  movk x27,#0x6e77, LSL #16
71025bcef0  mov w3,wzr
71025bcef4  add x12,x8,#0x9
71025bcef8  mov w4,#0x8
71025bcefc  movk x13,#0x7073, LSL #32
71025bcf00  movk x13,#0x7269, LSL #48
71025bcf04  movk x14,#0x6968, LSL #32
71025bcf08  movk x14,#0x746e, LSL #48
71025bcf0c  mov w15,#0x725f
71025bcf10  movk x16,#0x7262, LSL #32
71025bcf14  movk x16,#0x776f, LSL #48
71025bcf18  mov w17,#0x7761
71025bcf1c  movk w17,#0x7961, LSL #16
71025bcf20  mov w18,#0x7075
71025bcf24  mov w1,#0x5f
71025bcf28  mov w5,#0x6e
71025bcf2c  mov w7,#0x89
71025bcf30  movk x19,#0x616c, LSL #32
71025bcf34  movk x19,#0x6579, LSL #48
71025bcf38  mov w20,#0x72
71025bcf3c  mov w21,#0x2a
71025bcf40  movk x25,#0x656e, LSL #32
71025bcf44  movk x25,#0x796d, LSL #48
71025bcf48  mov w26,#0x29
71025bcf4c  movk x27,#0x615f, LSL #32
71025bcf50  movk x27,#0x6c6c, LSL #48
71025bcf54  mov w28,#0x7075
71025bcf58  movk w28,#0x615f, LSL #16
71025bcf5c  mov w30,#0x6c6c
71025bcf60  mov w8,#0x27
71025bcf64  mov w3,w3
71025bcf68  cmp x11,x3
71025bcf6c  b.ls 0x71025c1ba8
71025bcf70  lsl x22,x3,#0x4
71025bcf74  ldr x22,[x10, x22, LSL #0x0]
71025bcf78  eor x22,x22,x2
71025bcf7c  tst x22,#0xffffffffff
71025bcf80  b.ne 0x71025bd158
71025bcf84  add x23,x10,x3, LSL #0x4
71025bcf88  ldrb w24,[x23, #0x9]
71025bcf8c  ldrb w22,[x23, #0x8]
71025bcf90  cbz w24,0x71025bcfec
71025bcf94  ldrb w4,[x23, #0xa]
71025bcf98  stp x13,x14,[sp, #0x18]
71025bcf9c  strh w15,[sp, #0x28]
71025bcfa0  stur x16,[sp, #0x2a]
71025bcfa4  stur w17,[sp, #0x32]
71025bcfa8  strh w18,[sp, #0x36]
71025bcfac  strb w1,[sp, #0x38]
71025bcfb0  cbz w22,0x71025bd048
71025bcfb4  cbz w4,0x71025bd07c
71025bcfb8  mov x4,x12
71025bcfbc  mov w22,w5
71025bcfc0  mov w6,w9
71025bcfc4  stur w28,[sp, #0x39]
71025bcfc8  sturh w30,[sp, #0x3d]
71025bcfcc  strb wzr,[sp, #0x3f]
71025bcfd0  str w8,[sp, #0x14]
71025bcfd4  mul w6,w6,w7
71025bcfd8  and w22,w22,#0xff
71025bcfdc  eor w6,w6,w22
71025bcfe0  ldrb w22,[x4], #0x1
71025bcfe4  cbnz w22,0x71025bcfd4
71025bcfe8  b 0x71025bd03c
71025bcfec  cbz w22,0x71025bd158
71025bcff0  ldrb w4,[x23, #0xa]
71025bcff4  stp x13,x14,[sp, #0x18]
71025bcff8  strh w15,[sp, #0x28]
71025bcffc  stur x16,[sp, #0x2a]
71025bd000  stur w17,[sp, #0x32]
71025bd004  strh w18,[sp, #0x36]
71025bd008  strb w1,[sp, #0x38]
71025bd00c  cbz w4,0x71025bd0ac
71025bd010  mov x4,x12
71025bd014  mov w22,w5
71025bd018  mov w6,w9
71025bd01c  stur x19,[sp, #0x39]
71025bd020  sturh w20,[sp, #0x41]
71025bd024  str w21,[sp, #0x14]
71025bd028  mul w6,w6,w7
71025bd02c  and w22,w22,#0xff
71025bd030  eor w6,w6,w22
71025bd034  ldrb w22,[x4], #0x1
71025bd038  cbnz w22,0x71025bd028
71025bd03c  str w6,[sp, #0x10]
71025bd040  mov w4,#0x2
71025bd044  b 0x71025bd150
71025bd048  cbz w4,0x71025bd100
71025bd04c  mov x4,x12
71025bd050  mov w22,w5
71025bd054  mov w6,w9
71025bd058  stur x25,[sp, #0x39]
71025bd05c  strb wzr,[sp, #0x41]
71025bd060  str w26,[sp, #0x14]
71025bd064  mul w6,w6,w7
71025bd068  and w22,w22,#0xff
71025bd06c  eor w6,w6,w22
71025bd070  ldrb w22,[x4], #0x1
71025bd074  cbnz w22,0x71025bd064
71025bd078  b 0x71025bd148
71025bd07c  mov x4,x12
71025bd080  mov w22,w5
71025bd084  mov w6,w9
71025bd088  stur x27,[sp, #0x39]
71025bd08c  strb wzr,[sp, #0x41]
71025bd090  str w26,[sp, #0x14]
71025bd094  mul w6,w6,w7
71025bd098  and w22,w22,#0xff
71025bd09c  eor w6,w6,w22
71025bd0a0  ldrb w22,[x4], #0x1
71025bd0a4  cbnz w22,0x71025bd094
71025bd0a8  b 0x71025bd148
71025bd0ac  mov x4,#0x6f64
71025bd0b0  movk x4,#0x6e77, LSL #16
71025bd0b4  movk x4,#0x705f, LSL #32
71025bd0b8  movk x4,#0x616c, LSL #48
71025bd0bc  stur x4,[sp, #0x39]
71025bd0c0  mov w4,#0x6579
71025bd0c4  movk w4,#0x72, LSL #16
71025bd0c8  stur w4,[sp, #0x41]
71025bd0cc  mov x4,x12
71025bd0d0  mov w22,w5
71025bd0d4  mov w6,w9
71025bd0d8  mov w23,#0x2c
71025bd0dc  str w23,[sp, #0x14]
71025bd0e0  mul w6,w6,w7
71025bd0e4  and w22,w22,#0xff
71025bd0e8  eor w6,w6,w22
71025bd0ec  ldrb w22,[x4], #0x1
71025bd0f0  cbnz w22,0x71025bd0e0
71025bd0f4  mov w4,#0x4
71025bd0f8  str w6,[sp, #0x10]
71025bd0fc  b 0x71025bd150
71025bd100  mov x4,#0x6f64
71025bd104  movk x4,#0x6e77, LSL #16
71025bd108  movk x4,#0x655f, LSL #32
71025bd10c  movk x4,#0x656e, LSL #48
71025bd110  stur x4,[sp, #0x39]
71025bd114  mov w4,#0x796d
71025bd118  sturh w4,[sp, #0x41]
71025bd11c  mov x4,x12
71025bd120  mov w22,w5
71025bd124  mov w6,w9
71025bd128  mov w23,#0x2b
71025bd12c  strb wzr,[sp, #0x43]
71025bd130  str w23,[sp, #0x14]
71025bd134  mul w6,w6,w7
71025bd138  and w22,w22,#0xff
71025bd13c  eor w6,w6,w22
71025bd140  ldrb w22,[x4], #0x1
71025bd144  cbnz w22,0x71025bd134
71025bd148  str w6,[sp, #0x10]
71025bd14c  orr w4,wzr,#0x3
71025bd150  mov w6,w5
71025bd154  str w4,[sp, #0xa0]
71025bd158  add w3,w3,#0x1
71025bd15c  cmp w3,w11
71025bd160  b.cc 0x71025bcf64
71025bd164  add x11,sp,#0x10
71025bd168  cmp x11,x0
71025bd16c  b.eq 0x71025c0fb0
71025bd170  mov x8,xzr
71025bd174  add x10,x0,#0x9
71025bd178  add x11,x11,#0x9
71025bd17c  tst w6,#0xff
71025bd180  b.eq 0x71025c0f6c
71025bd184  add w12,w8,#0x1
71025bd188  add x13,x10,x8
71025bd18c  cmp w12,#0x3f
71025bd190  sturb w6,[x13, #-0x1]
71025bd194  b.cs 0x71025c07a0
71025bd198  ldrb w12,[x11, x8, LSL ]
71025bd19c  cbz w12,0x71025c0f68
71025bd1a0  add x13,x11,x8
71025bd1a4  strb w12,[x10, x8, LSL ]
71025bd1a8  ldrb w6,[x13, #0x1]
71025bd1ac  add x8,x8,#0x2
71025bd1b0  tst w6,#0xff
71025bd1b4  b.ne 0x71025bd184
71025bd1b8  b 0x71025c0f6c
71025bd1bc  mov w9,#0x8
71025bd1c0  str w9,[sp, #0xa0]
71025bd1c4  mov x9,#0x616e
71025bd1c8  movk x9,#0x5f6d, LSL #16
71025bd1cc  movk x9,#0x7073, LSL #32
71025bd1d0  movk x9,#0x7269, LSL #48
71025bd1d4  str x9,[sp, #0x18]
71025bd1d8  mov w9,#0x7469
71025bd1dc  movk w9,#0x5f73, LSL #16
71025bd1e0  str w9,[sp, #0x20]
71025bd1e4  mov w9,#0x6968
71025bd1e8  strh w9,[sp, #0x24]
71025bd1ec  mov x9,#0x746e
71025bd1f0  movk x9,#0x725f, LSL #16
71025bd1f4  movk x9,#0x6c75, LSL #32
71025bd1f8  movk x9,#0x5f65, LSL #48
71025bd1fc  stur x9,[sp, #0x26]
71025bd200  mov w9,#0x6e75
71025bd204  mov x8,#0x2200000000
71025bd208  str x8,[sp, #0x10]
71025bd20c  mov w8,#0x9dc5
71025bd210  movk w8,#0x811c, LSL #16
71025bd214  mov w12,#0x6567
71025bd218  strh w12,[sp, #0x38]
71025bd21c  strh w9,[sp, #0x2e]
71025bd220  mov x9,#0x7469
71025bd224  movk x9,#0x5f79, LSL #16
71025bd228  movk x9,#0x6164, LSL #32
71025bd22c  movk x9,#0x616d, LSL #48
71025bd230  str x9,[sp, #0x30]
71025bd234  mov w11,#0x6e
71025bd238  mov w10,#0x9
71025bd23c  strb wzr,[sp, #0x60]
71025bd240  mov w9,#0x89
71025bd244  add x12,sp,#0x10
71025bd248  str xzr,[sp, #0x58]
71025bd24c  mov w13,w8
71025bd250  strb wzr,[sp, #0x3a]
71025bd254  mul w13,w13,w9
71025bd258  and w11,w11,#0xff
71025bd25c  eor w13,w13,w11
71025bd260  ldrb w11,[x12, x10, LSL ]
71025bd264  add x10,x10,#0x1
71025bd268  cbnz w11,0x71025bd254
71025bd26c  str w13,[sp, #0x10]
71025bd270  add x13,sp,#0x10
71025bd274  orr w10,wzr,#0x3
71025bd278  cmp x13,x0
71025bd27c  str w10,[sp, #0xa0]
71025bd280  b.eq 0x71025c185c
71025bd284  mov x11,xzr
71025bd288  add x12,x0,#0x9
71025bd28c  add x13,x13,#0x9
71025bd290  mov w14,#0x6e
71025bd294  tst w14,#0xff
71025bd298  b.eq 0x71025c0a44
71025bd29c  add w15,w11,#0x1
71025bd2a0  add x16,x12,x11
71025bd2a4  cmp w15,#0x3f
71025bd2a8  sturb w14,[x16, #-0x1]
71025bd2ac  b.cs 0x71025c0730
71025bd2b0  ldrb w14,[x13, x11, LSL ]
71025bd2b4  cbz w14,0x71025c0a40
71025bd2b8  add x15,x13,x11
71025bd2bc  strb w14,[x12, x11, LSL ]
71025bd2c0  ldrb w14,[x15, #0x1]
71025bd2c4  add x11,x11,#0x2
71025bd2c8  tst w14,#0xff
71025bd2cc  b.ne 0x71025bd29c
71025bd2d0  b 0x71025c0a44
71025bd2d4  adrp x8,0x7105329000
71025bd2d8  ldr x8,[x8, #0xfa0]
71025bd2dc  mov w20,#0x8
71025bd2e0  strb wzr,[sp, #0x18]
71025bd2e4  str xzr,[sp, #0x10]
71025bd2e8  strb wzr,[sp, #0x60]
71025bd2ec  str xzr,[sp, #0x58]
71025bd2f0  mov w9,#0x9dc5
71025bd2f4  movk w9,#0x811c, LSL #16
71025bd2f8  str w20,[sp, #0xa0]
71025bd2fc  ldr x12,[x8]
71025bd300  ldr x8,[x12, #0x330]
71025bd304  ldr x10,[x12, #0x328]
71025bd308  sub x8,x8,x10
71025bd30c  mov w5,wzr
71025bd310  asr x11,x8,#0x4
71025bd314  cbz w11,0x71025bd5a4
71025bd318  add x12,x12,#0x328
71025bd31c  str x12,[sp, #0x8]
71025bd320  add x12,sp,#0x10
71025bd324  mov x13,#0x616e
71025bd328  movk x13,#0x5f6d, LSL #16
71025bd32c  mov x14,#0x7469
71025bd330  movk x14,#0x5f73, LSL #16
71025bd334  mov x16,#0x6c75
71025bd338  movk x16,#0x5f65, LSL #16
71025bd33c  mov w8,wzr
71025bd340  add x12,x12,#0x9
71025bd344  mov w20,#0x8
71025bd348  movk x13,#0x7073, LSL #32
71025bd34c  movk x13,#0x7269, LSL #48
71025bd350  movk x14,#0x6968, LSL #32
71025bd354  movk x14,#0x746e, LSL #48
71025bd358  mov w15,#0x725f
71025bd35c  movk x16,#0x6164, LSL #32
71025bd360  movk x16,#0x616d, LSL #48
71025bd364  mov w17,#0x6567
71025bd368  mov w18,#0x5f
71025bd36c  mov w1,#0x6e65
71025bd370  movk w1,#0x6d65, LSL #16
71025bd374  mov w3,#0x79
71025bd378  mov w4,#0x22
71025bd37c  mov w21,#0x6e
71025bd380  mov w6,#0x89
71025bd384  mov w7,#0x6c61
71025bd388  movk w7,#0x6c, LSL #16
71025bd38c  mov w19,#0x20
71025bd390  mov w24,#0x6567
71025bd394  movk w24,#0x6c5f, LSL #16
71025bd398  mov w26,#0x705f
71025bd39c  mov w27,#0x616c
71025bd3a0  movk w27,#0x6579, LSL #16
71025bd3a4  mov w28,#0x72
71025bd3a8  mov w30,#0x25
71025bd3ac  mov w8,w8
71025bd3b0  cmp x11,x8
71025bd3b4  b.ls 0x71025c1ba8
71025bd3b8  lsl x22,x8,#0x4
71025bd3bc  ldr x22,[x10, x22, LSL #0x0]
71025bd3c0  eor x22,x22,x2
71025bd3c4  tst x22,#0xffffffffff
71025bd3c8  b.ne 0x71025bd598
71025bd3cc  add x22,x10,x8, LSL #0x4
71025bd3d0  ldr w25,[x22, #0xc]
71025bd3d4  ldrb w23,[x22, #0x9]
71025bd3d8  ldrb w22,[x22, #0x8]
71025bd3dc  cmp w25,#0x27
71025bd3e0  b.gt 0x71025bd42c
71025bd3e4  cbz w23,0x71025bd474
71025bd3e8  stp x13,x14,[sp, #0x18]
71025bd3ec  strh w15,[sp, #0x28]
71025bd3f0  stur x16,[sp, #0x2a]
71025bd3f4  strh w17,[sp, #0x32]
71025bd3f8  strb w18,[sp, #0x34]
71025bd3fc  cbz w22,0x71025bd520
71025bd400  mov x5,x12
71025bd404  mov w22,w21
71025bd408  mov w20,w9
71025bd40c  stur w7,[sp, #0x35]
71025bd410  str w19,[sp, #0x14]
71025bd414  mul w20,w20,w6
71025bd418  and w22,w22,#0xff
71025bd41c  eor w20,w20,w22
71025bd420  ldrb w22,[x5], #0x1
71025bd424  cbnz w22,0x71025bd414
71025bd428  b 0x71025bd588
71025bd42c  cbz w23,0x71025bd4d0
71025bd430  stp x13,x14,[sp, #0x18]
71025bd434  strh w15,[sp, #0x28]
71025bd438  stur x16,[sp, #0x2a]
71025bd43c  stur w24,[sp, #0x32]
71025bd440  strb w18,[sp, #0x36]
71025bd444  cbz w22,0x71025bd558
71025bd448  mov x5,x12
71025bd44c  mov w22,w21
71025bd450  mov w20,w9
71025bd454  stur w7,[sp, #0x37]
71025bd458  str w4,[sp, #0x14]
71025bd45c  mul w20,w20,w6
71025bd460  and w22,w22,#0xff
71025bd464  eor w20,w20,w22
71025bd468  ldrb w22,[x5], #0x1
71025bd46c  cbnz w22,0x71025bd45c
71025bd470  b 0x71025bd514
71025bd474  cbz w22,0x71025bd598
71025bd478  mov w5,#0x6567
71025bd47c  movk w5,#0x705f, LSL #16
71025bd480  mov w22,w21
71025bd484  stur w5,[sp, #0x32]
71025bd488  mov w5,#0x616c
71025bd48c  mov w20,w9
71025bd490  strh w5,[sp, #0x36]
71025bd494  mov w5,#0x6579
71025bd498  movk w5,#0x72, LSL #16
71025bd49c  str w5,[sp, #0x38]
71025bd4a0  mov x5,x12
71025bd4a4  mov w23,#0x23
71025bd4a8  stp x13,x14,[sp, #0x18]
71025bd4ac  strh w15,[sp, #0x28]
71025bd4b0  stur x16,[sp, #0x2a]
71025bd4b4  str w23,[sp, #0x14]
71025bd4b8  mul w20,w20,w6
71025bd4bc  and w22,w22,#0xff
71025bd4c0  eor w20,w20,w22
71025bd4c4  ldrb w22,[x5], #0x1
71025bd4c8  cbnz w22,0x71025bd4b8
71025bd4cc  b 0x71025bd588
71025bd4d0  cbz w22,0x71025bd598
71025bd4d4  mov x5,x12
71025bd4d8  mov w22,w21
71025bd4dc  mov w20,w9
71025bd4e0  stp x13,x14,[sp, #0x18]
71025bd4e4  strh w15,[sp, #0x28]
71025bd4e8  stur x16,[sp, #0x2a]
71025bd4ec  stur w24,[sp, #0x32]
71025bd4f0  strh w26,[sp, #0x36]
71025bd4f4  str w27,[sp, #0x38]
71025bd4f8  strh w28,[sp, #0x3c]
71025bd4fc  str w30,[sp, #0x14]
71025bd500  mul w20,w20,w6
71025bd504  and w22,w22,#0xff
71025bd508  eor w20,w20,w22
71025bd50c  ldrb w22,[x5], #0x1
71025bd510  cbnz w22,0x71025bd500
71025bd514  str w20,[sp, #0x10]
71025bd518  mov w20,#0x2
71025bd51c  b 0x71025bd590
71025bd520  mov x5,x12
71025bd524  mov w22,w21
71025bd528  mov w20,w9
71025bd52c  stur w1,[sp, #0x35]
71025bd530  sturh w3,[sp, #0x39]
71025bd534  str w4,[sp, #0x14]
71025bd538  mul w20,w20,w6
71025bd53c  and w22,w22,#0xff
71025bd540  eor w20,w20,w22
71025bd544  ldrb w22,[x5], #0x1
71025bd548  cbnz w22,0x71025bd538
71025bd54c  str w20,[sp, #0x10]
71025bd550  mov w20,#0x4
71025bd554  b 0x71025bd590
71025bd558  mov x5,x12
71025bd55c  mov w22,w21
71025bd560  mov w20,w9
71025bd564  mov w23,#0x24
71025bd568  stur w1,[sp, #0x37]
71025bd56c  sturh w3,[sp, #0x3b]
71025bd570  str w23,[sp, #0x14]
71025bd574  mul w20,w20,w6
71025bd578  and w22,w22,#0xff
71025bd57c  eor w20,w20,w22
71025bd580  ldrb w22,[x5], #0x1
71025bd584  cbnz w22,0x71025bd574
71025bd588  str w20,[sp, #0x10]
71025bd58c  orr w20,wzr,#0x3
71025bd590  mov w5,w21
71025bd594  str w20,[sp, #0xa0]
71025bd598  add w8,w8,#0x1
71025bd59c  cmp w8,w11
71025bd5a0  b.cc 0x71025bd3ac
71025bd5a4  add x11,sp,#0x10
71025bd5a8  cmp x11,x0
71025bd5ac  b.eq 0x71025c1000
71025bd5b0  mov x8,xzr
71025bd5b4  add x10,x0,#0x9
71025bd5b8  add x11,x11,#0x9
71025bd5bc  tst w5,#0xff
71025bd5c0  b.eq 0x71025c0fbc
71025bd5c4  add w12,w8,#0x1
71025bd5c8  add x13,x10,x8
71025bd5cc  cmp w12,#0x3f
71025bd5d0  sturb w5,[x13, #-0x1]
71025bd5d4  b.cs 0x71025c07a8
71025bd5d8  ldrb w12,[x11, x8, LSL ]
71025bd5dc  cbz w12,0x71025c0fb8
71025bd5e0  add x13,x11,x8
71025bd5e4  strb w12,[x10, x8, LSL ]
71025bd5e8  ldrb w5,[x13, #0x1]
71025bd5ec  add x8,x8,#0x2
71025bd5f0  tst w5,#0xff
71025bd5f4  b.ne 0x71025bd5c4
71025bd5f8  b 0x71025c0fbc
71025bd5fc  adrp x8,0x7105329000
71025bd600  ldr x8,[x8, #0xfa0]
71025bd604  mov w30,#0x8
71025bd608  strb wzr,[sp, #0x18]
71025bd60c  str xzr,[sp, #0x10]
71025bd610  strb wzr,[sp, #0x60]
71025bd614  str xzr,[sp, #0x58]
71025bd618  mov w9,#0x9dc5
71025bd61c  movk w9,#0x811c, LSL #16
71025bd620  str w30,[sp, #0xa0]
71025bd624  ldr x8,[x8]
71025bd628  ldr x11,[x8, #0x360]
71025bd62c  ldr x10,[x8, #0x358]
71025bd630  sub x11,x11,x10
71025bd634  mov w4,wzr
71025bd638  asr x11,x11,#0x4
71025bd63c  cbz w11,0x71025bd8c8
71025bd640  add x8,x8,#0x358
71025bd644  str x8,[sp, #0x8]
71025bd648  add x8,sp,#0x10
71025bd64c  mov x13,#0x616e
71025bd650  movk x13,#0x5f6d, LSL #16
71025bd654  mov x14,#0x7469
71025bd658  movk x14,#0x5f73, LSL #16
71025bd65c  mov x16,#0x6c75
71025bd660  movk x16,#0x5f65, LSL #16
71025bd664  mov w28,wzr
71025bd668  add x12,x8,#0x9
71025bd66c  mov w30,#0x8
71025bd670  movk x13,#0x7073, LSL #32
71025bd674  movk x13,#0x7269, LSL #48
71025bd678  movk x14,#0x6968, LSL #32
71025bd67c  movk x14,#0x746e, LSL #48
71025bd680  mov w15,#0x725f
71025bd684  movk x16,#0x6568, LSL #32
71025bd688  movk x16,#0x6c61, LSL #48
71025bd68c  mov w17,#0x5f
71025bd690  mov w18,#0x6e65
71025bd694  movk w18,#0x6d65, LSL #16
71025bd698  mov w1,#0x79
71025bd69c  mov w3,#0x20
71025bd6a0  mov w8,#0x6e
71025bd6a4  mov w5,#0x89
71025bd6a8  mov w6,#0x6c61
71025bd6ac  movk w6,#0x6c, LSL #16
71025bd6b0  orr w7,wzr,#0x1e
71025bd6b4  mov w19,#0x5
71025bd6b8  mov w22,#0x6c5f
71025bd6bc  mov w24,#0x6c5f
71025bd6c0  movk w24,#0x705f, LSL #16
71025bd6c4  mov w25,#0x616c
71025bd6c8  mov w26,#0x6579
71025bd6cc  movk w26,#0x72, LSL #16
71025bd6d0  mov w27,#0x23
71025bd6d4  mov w28,w28
71025bd6d8  cmp x11,x28
71025bd6dc  b.ls 0x71025c1ba8
71025bd6e0  lsl x20,x28,#0x4
71025bd6e4  ldr x20,[x10, x20, LSL #0x0]
71025bd6e8  eor x20,x20,x2
71025bd6ec  tst x20,#0xffffffffff
71025bd6f0  b.ne 0x71025bd8bc
71025bd6f4  add x20,x10,x28, LSL #0x4
71025bd6f8  ldr w23,[x20, #0xc]
71025bd6fc  ldrb w21,[x20, #0x9]
71025bd700  ldrb w20,[x20, #0x8]
71025bd704  cmp w23,#0x27
71025bd708  b.gt 0x71025bd750
71025bd70c  cbz w21,0x71025bd798
71025bd710  stp x13,x14,[sp, #0x18]
71025bd714  strh w15,[sp, #0x28]
71025bd718  stur x16,[sp, #0x2a]
71025bd71c  strb w17,[sp, #0x32]
71025bd720  cbz w20,0x71025bd844
71025bd724  mov x4,x12
71025bd728  mov w30,w8
71025bd72c  mov w20,w9
71025bd730  stur w6,[sp, #0x33]
71025bd734  str w7,[sp, #0x14]
71025bd738  and w21,w30,#0xff
71025bd73c  mul w20,w20,w5
71025bd740  eor w20,w20,w21
71025bd744  ldrb w30,[x4], #0x1
71025bd748  cbnz w30,0x71025bd738
71025bd74c  b 0x71025bd7e4
71025bd750  cbz w21,0x71025bd7f8
71025bd754  stp x13,x14,[sp, #0x18]
71025bd758  strh w15,[sp, #0x28]
71025bd75c  stur x16,[sp, #0x2a]
71025bd760  strh w22,[sp, #0x32]
71025bd764  strb w17,[sp, #0x34]
71025bd768  cbz w20,0x71025bd87c
71025bd76c  mov x4,x12
71025bd770  mov w30,w8
71025bd774  mov w20,w9
71025bd778  stur w6,[sp, #0x35]
71025bd77c  str w3,[sp, #0x14]
71025bd780  and w21,w30,#0xff
71025bd784  mul w20,w20,w5
71025bd788  eor w20,w20,w21
71025bd78c  ldrb w30,[x4], #0x1
71025bd790  cbnz w30,0x71025bd780
71025bd794  b 0x71025bd870
71025bd798  cbz w20,0x71025bd8bc
71025bd79c  mov x4,#0x705f
71025bd7a0  movk x4,#0x616c, LSL #16
71025bd7a4  mov w30,w8
71025bd7a8  movk x4,#0x6579, LSL #32
71025bd7ac  movk x4,#0x72, LSL #48
71025bd7b0  strh w15,[sp, #0x28]
71025bd7b4  stur x4,[sp, #0x32]
71025bd7b8  mov x4,x12
71025bd7bc  mov w20,w9
71025bd7c0  mov w21,#0x21
71025bd7c4  stp x13,x14,[sp, #0x18]
71025bd7c8  stur x16,[sp, #0x2a]
71025bd7cc  str w21,[sp, #0x14]
71025bd7d0  and w21,w30,#0xff
71025bd7d4  mul w20,w20,w5
71025bd7d8  eor w20,w20,w21
71025bd7dc  ldrb w30,[x4], #0x1
71025bd7e0  cbnz w30,0x71025bd7d0
71025bd7e4  str w20,[sp, #0x10]
71025bd7e8  mov w30,w19
71025bd7ec  mov w4,w8
71025bd7f0  str w19,[sp, #0xa0]
71025bd7f4  b 0x71025bd8bc
71025bd7f8  cbz w20,0x71025bd8bc
71025bd7fc  mov x4,x12
71025bd800  mov w30,w8
71025bd804  mov w20,w9
71025bd808  stp x13,x14,[sp, #0x18]
71025bd80c  strh w15,[sp, #0x28]
71025bd810  stur x16,[sp, #0x2a]
71025bd814  stur w24,[sp, #0x32]
71025bd818  strh w25,[sp, #0x36]
71025bd81c  str w26,[sp, #0x38]
71025bd820  str w27,[sp, #0x14]
71025bd824  and w21,w30,#0xff
71025bd828  mul w20,w20,w5
71025bd82c  eor w20,w20,w21
71025bd830  ldrb w30,[x4], #0x1
71025bd834  cbnz w30,0x71025bd824
71025bd838  mov w30,#0x2
71025bd83c  str w20,[sp, #0x10]
71025bd840  b 0x71025bd8b4
71025bd844  mov x4,x12
71025bd848  mov w30,w8
71025bd84c  mov w20,w9
71025bd850  stur w18,[sp, #0x33]
71025bd854  sturh w1,[sp, #0x37]
71025bd858  str w3,[sp, #0x14]
71025bd85c  and w21,w30,#0xff
71025bd860  mul w20,w20,w5
71025bd864  eor w20,w20,w21
71025bd868  ldrb w30,[x4], #0x1
71025bd86c  cbnz w30,0x71025bd85c
71025bd870  str w20,[sp, #0x10]
71025bd874  mov w30,#0x4
71025bd878  b 0x71025bd8b4
71025bd87c  mov x4,x12
71025bd880  mov w30,w8
71025bd884  mov w20,w9
71025bd888  mov w21,#0x22
71025bd88c  stur w18,[sp, #0x35]
71025bd890  sturh w1,[sp, #0x39]
71025bd894  str w21,[sp, #0x14]
71025bd898  and w21,w30,#0xff
71025bd89c  mul w20,w20,w5
71025bd8a0  eor w20,w20,w21
71025bd8a4  ldrb w30,[x4], #0x1
71025bd8a8  cbnz w30,0x71025bd898
71025bd8ac  str w20,[sp, #0x10]
71025bd8b0  orr w30,wzr,#0x3
71025bd8b4  mov w4,w8
71025bd8b8  str w30,[sp, #0xa0]
71025bd8bc  add w28,w28,#0x1
71025bd8c0  cmp w28,w11
71025bd8c4  b.cc 0x71025bd6d4
71025bd8c8  add x11,sp,#0x10
71025bd8cc  cmp x11,x0
71025bd8d0  b.eq 0x71025c1050
71025bd8d4  mov x8,xzr
71025bd8d8  add x10,x0,#0x9
71025bd8dc  add x11,x11,#0x9
71025bd8e0  tst w4,#0xff
71025bd8e4  b.eq 0x71025c100c
71025bd8e8  add w12,w8,#0x1
71025bd8ec  add x13,x10,x8
71025bd8f0  cmp w12,#0x3f
71025bd8f4  sturb w4,[x13, #-0x1]
71025bd8f8  b.cs 0x71025c07b0
71025bd8fc  ldrb w12,[x11, x8, LSL ]
71025bd900  cbz w12,0x71025c1008
71025bd904  add x13,x11,x8
71025bd908  strb w12,[x10, x8, LSL ]
71025bd90c  ldrb w4,[x13, #0x1]
71025bd910  add x8,x8,#0x2
71025bd914  tst w4,#0xff
71025bd918  b.ne 0x71025bd8e8
71025bd91c  b 0x71025c100c
71025bd920  mov w9,#0x8
71025bd924  str w9,[sp, #0xa0]
71025bd928  mov x9,#0x616e
71025bd92c  movk x9,#0x5f6d, LSL #16
71025bd930  movk x9,#0x7073, LSL #32
71025bd934  movk x9,#0x7269, LSL #48
71025bd938  str x9,[sp, #0x18]
71025bd93c  mov w9,#0x7469
71025bd940  movk w9,#0x5f73, LSL #16
71025bd944  str w9,[sp, #0x20]
71025bd948  mov w9,#0x6968
71025bd94c  strh w9,[sp, #0x24]
71025bd950  mov x9,#0x746e
71025bd954  movk x9,#0x725f, LSL #16
71025bd958  movk x9,#0x6c75, LSL #32
71025bd95c  movk x9,#0x5f65, LSL #48
71025bd960  mov x8,#0x2300000000
71025bd964  str x8,[sp, #0x10]
71025bd968  mov w8,#0x9dc5
71025bd96c  movk w8,#0x811c, LSL #16
71025bd970  strb wzr,[sp, #0x60]
71025bd974  stur x9,[sp, #0x26]
71025bd978  mov x9,#0x646e
71025bd97c  movk x9,#0x735f, LSL #16
71025bd980  mov w10,#0x6977
71025bd984  movk x9,#0x6475, LSL #32
71025bd988  movk x9,#0x6564, LSL #48
71025bd98c  mov w13,#0x6c6e
71025bd990  movk w13,#0x79, LSL #16
71025bd994  strh w10,[sp, #0x2e]
71025bd998  mov w11,#0x6e
71025bd99c  str x9,[sp, #0x30]
71025bd9a0  str w13,[sp, #0x38]
71025bd9a4  mov w10,#0x9
71025bd9a8  mov w9,#0x89
71025bd9ac  str xzr,[sp, #0x58]
71025bd9b0  add x12,sp,#0x10
71025bd9b4  mov w13,w8
71025bd9b8  mul w13,w13,w9
71025bd9bc  and w11,w11,#0xff
71025bd9c0  eor w13,w13,w11
71025bd9c4  ldrb w11,[x12, x10, LSL ]
71025bd9c8  add x10,x10,#0x1
71025bd9cc  cbnz w11,0x71025bd9b8
71025bd9d0  str w13,[sp, #0x10]
71025bd9d4  add x13,sp,#0x10
71025bd9d8  mov w10,#0x2
71025bd9dc  cmp x13,x0
71025bd9e0  str w10,[sp, #0xa0]
71025bd9e4  b.eq 0x71025c185c
71025bd9e8  mov x11,xzr
71025bd9ec  add x12,x0,#0x9
71025bd9f0  add x13,x13,#0x9
71025bd9f4  mov w14,#0x6e
71025bd9f8  tst w14,#0xff
71025bd9fc  b.eq 0x71025c0c00
71025bda00  add w15,w11,#0x1
71025bda04  add x16,x12,x11
71025bda08  cmp w15,#0x3f
71025bda0c  sturb w14,[x16, #-0x1]
71025bda10  b.cs 0x71025c0748
71025bda14  ldrb w14,[x13, x11, LSL ]
71025bda18  cbz w14,0x71025c0bfc
71025bda1c  add x15,x13,x11
71025bda20  strb w14,[x12, x11, LSL ]
71025bda24  ldrb w14,[x15, #0x1]
71025bda28  add x11,x11,#0x2
71025bda2c  tst w14,#0xff
71025bda30  b.ne 0x71025bda00
71025bda34  b 0x71025c0c00
71025bda38  adrp x8,0x7105329000
71025bda3c  ldr x8,[x8, #0xfa0]
71025bda40  mov w19,#0x8
71025bda44  strb wzr,[sp, #0x18]
71025bda48  str xzr,[sp, #0x10]
71025bda4c  strb wzr,[sp, #0x60]
71025bda50  str xzr,[sp, #0x58]
71025bda54  mov w9,#0x9dc5
71025bda58  movk w9,#0x811c, LSL #16
71025bda5c  str w19,[sp, #0xa0]
71025bda60  ldr x8,[x8]
71025bda64  ldr x11,[x8, #0x5d0]
71025bda68  ldr x10,[x8, #0x5c8]
71025bda6c  sub x11,x11,x10
71025bda70  mov w4,wzr
71025bda74  asr x11,x11,#0x4
71025bda78  cbz w11,0x71025bdc98
71025bda7c  add x8,x8,#0x5c8
71025bda80  str x8,[sp, #0x8]
71025bda84  add x8,sp,#0x10
71025bda88  mov x13,#0x616e
71025bda8c  movk x13,#0x5f6d, LSL #16
71025bda90  mov x14,#0x7469
71025bda94  movk x14,#0x5f73, LSL #16
71025bda98  mov x16,#0x6c75
71025bda9c  movk x16,#0x5f65, LSL #16
71025bdaa0  mov w17,wzr
71025bdaa4  add x12,x8,#0x9
71025bdaa8  mov w19,#0x8
71025bdaac  movk x13,#0x7073, LSL #32
71025bdab0  movk x13,#0x7269, LSL #48
71025bdab4  movk x14,#0x6968, LSL #32
71025bdab8  movk x14,#0x746e, LSL #48
71025bdabc  mov w15,#0x725f
71025bdac0  movk x16,#0x7461, LSL #32
71025bdac4  movk x16,#0x7274, LSL #48
71025bdac8  mov w3,#0x24
71025bdacc  mov w1,#0x6e
71025bdad0  mov w5,#0x89
71025bdad4  mov w6,#0x615f
71025bdad8  movk w6,#0x7474, LSL #16
71025bdadc  mov w7,#0x6361
71025bdae0  mov w20,#0x5f6b
71025bdae4  movk w20,#0x7075, LSL #16
71025bdae8  mov w21,#0x745f
71025bdaec  movk w21,#0x7268, LSL #16
71025bdaf0  mov w22,#0x776f
71025bdaf4  mov w23,#0x755f
71025bdaf8  movk w23,#0x70, LSL #16
71025bdafc  mov w24,#0x23
71025bdb00  mov w25,#0x645f
71025bdb04  movk w25,#0x6665, LSL #16
71025bdb08  mov w26,#0x6e65
71025bdb0c  mov w27,#0x6573
71025bdb10  movk w27,#0x755f, LSL #16
71025bdb14  orr w28,wzr,#0x70
71025bdb18  mov w30,#0x25
71025bdb1c  adrp x8,0x7104506000
71025bdb20  add x8,x8,#0x4fc
71025bdb24  mov w17,w17
71025bdb28  cmp x11,x17
71025bdb2c  b.ls 0x71025c1ba8
71025bdb30  lsl x18,x17,#0x4
71025bdb34  ldr x18,[x10, x18, LSL #0x0]
71025bdb38  eor x18,x18,x2
71025bdb3c  tst x18,#0xffffffffff
71025bdb40  b.ne 0x71025bdc8c
71025bdb44  add x18,x10,x17, LSL #0x4
71025bdb48  ldrb w18,[x18, #0x8]
71025bdb4c  cmp w18,#0x3
71025bdb50  b.hi 0x71025bdc8c
71025bdb54  ldrsw x18,[x8, x18, LSL #0x2]
71025bdb58  add x18,x18,x8
71025bdb5c  br x18
71025bdb60  mov w18,#0x6e5f
71025bdb64  movk w18,#0x726f, LSL #16
71025bdb68  mov x4,x12
71025bdb6c  stur w18,[sp, #0x32]
71025bdb70  mov w18,#0x616d
71025bdb74  mov w19,w9
71025bdb78  strh w18,[sp, #0x36]
71025bdb7c  mov w18,#0x5f6c
71025bdb80  movk w18,#0x7075, LSL #16
71025bdb84  str w18,[sp, #0x38]
71025bdb88  mov w18,w1
71025bdb8c  strh w15,[sp, #0x28]
71025bdb90  stp x13,x14,[sp, #0x18]
71025bdb94  stur x16,[sp, #0x2a]
71025bdb98  strb wzr,[sp, #0x3c]
71025bdb9c  str w3,[sp, #0x14]
71025bdba0  mul w19,w19,w5
71025bdba4  and w18,w18,#0xff
71025bdba8  eor w19,w19,w18
71025bdbac  ldrb w18,[x4], #0x1
71025bdbb0  cbnz w18,0x71025bdba0
71025bdbb4  b 0x71025bdc7c
71025bdbb8  mov x4,x12
71025bdbbc  mov w18,w1
71025bdbc0  mov w19,w9
71025bdbc4  stp x13,x14,[sp, #0x18]
71025bdbc8  strh w15,[sp, #0x28]
71025bdbcc  stur x16,[sp, #0x2a]
71025bdbd0  stur w21,[sp, #0x32]
71025bdbd4  strh w22,[sp, #0x36]
71025bdbd8  str w23,[sp, #0x38]
71025bdbdc  str w24,[sp, #0x14]
71025bdbe0  mul w19,w19,w5
71025bdbe4  and w18,w18,#0xff
71025bdbe8  eor w19,w19,w18
71025bdbec  ldrb w18,[x4], #0x1
71025bdbf0  cbnz w18,0x71025bdbe0
71025bdbf4  b 0x71025bdc7c
71025bdbf8  mov x4,x12
71025bdbfc  mov w18,w1
71025bdc00  mov w19,w9
71025bdc04  stp x13,x14,[sp, #0x18]
71025bdc08  strh w15,[sp, #0x28]
71025bdc0c  stur x16,[sp, #0x2a]
71025bdc10  stur w25,[sp, #0x32]
71025bdc14  strh w26,[sp, #0x36]
71025bdc18  str w27,[sp, #0x38]
71025bdc1c  strh w28,[sp, #0x3c]
71025bdc20  str w30,[sp, #0x14]
71025bdc24  mul w19,w19,w5
71025bdc28  and w18,w18,#0xff
71025bdc2c  eor w19,w19,w18
71025bdc30  ldrb w18,[x4], #0x1
71025bdc34  cbnz w18,0x71025bdc24
71025bdc38  b 0x71025bdc7c
71025bdc3c  mov x4,x12
71025bdc40  mov w18,w1
71025bdc44  mov w19,w9
71025bdc48  stp x13,x14,[sp, #0x18]
71025bdc4c  strh w15,[sp, #0x28]
71025bdc50  stur x16,[sp, #0x2a]
71025bdc54  stur w6,[sp, #0x32]
71025bdc58  strh w7,[sp, #0x36]
71025bdc5c  str w20,[sp, #0x38]
71025bdc60  strb wzr,[sp, #0x3c]
71025bdc64  str w3,[sp, #0x14]
71025bdc68  mul w19,w19,w5
71025bdc6c  and w18,w18,#0xff
71025bdc70  eor w19,w19,w18
71025bdc74  ldrb w18,[x4], #0x1
71025bdc78  cbnz w18,0x71025bdc68
71025bdc7c  str w19,[sp, #0x10]
71025bdc80  mov w19,#0x4
71025bdc84  mov w4,w1
71025bdc88  str w19,[sp, #0xa0]
71025bdc8c  add w17,w17,#0x1
71025bdc90  cmp w17,w11
71025bdc94  b.cc 0x71025bdb24
71025bdc98  add x11,sp,#0x10
71025bdc9c  cmp x11,x0
71025bdca0  b.eq 0x71025c1708
71025bdca4  mov x8,xzr
71025bdca8  add x10,x0,#0x9
71025bdcac  add x11,x11,#0x9
71025bdcb0  tst w4,#0xff
71025bdcb4  b.eq 0x71025c105c
71025bdcb8  add w12,w8,#0x1
71025bdcbc  add x13,x10,x8
71025bdcc0  cmp w12,#0x3f
71025bdcc4  sturb w4,[x13, #-0x1]
71025bdcc8  b.cs 0x71025c07b8
71025bdccc  ldrb w12,[x11, x8, LSL ]
71025bdcd0  cbz w12,0x71025c1058
71025bdcd4  add x13,x11,x8
71025bdcd8  strb w12,[x10, x8, LSL ]
71025bdcdc  ldrb w4,[x13, #0x1]
71025bdce0  add x8,x8,#0x2
71025bdce4  tst w4,#0xff
71025bdce8  b.ne 0x71025bdcb8
71025bdcec  b 0x71025c105c
71025bdcf0  adrp x8,0x7105329000
71025bdcf4  ldr x8,[x8, #0xfa0]
71025bdcf8  mov w10,#0x8
71025bdcfc  strb wzr,[sp, #0x18]
71025bdd00  str xzr,[sp, #0x10]
71025bdd04  strb wzr,[sp, #0x60]
71025bdd08  str xzr,[sp, #0x58]
71025bdd0c  mov w9,#0x9dc5
71025bdd10  movk w9,#0x811c, LSL #16
71025bdd14  str w10,[sp, #0xa0]
71025bdd18  ldr x8,[x8]
71025bdd1c  ldr x12,[x8, #0x4b0]
71025bdd20  ldr x11,[x8, #0x4a8]
71025bdd24  sub x12,x12,x11
71025bdd28  mov w23,wzr
71025bdd2c  asr x12,x12,#0x4
71025bdd30  cbz w12,0x71025bdebc
71025bdd34  add x10,sp,#0x10
71025bdd38  mov x14,#0x616e
71025bdd3c  movk x14,#0x5f6d, LSL #16
71025bdd40  mov x15,#0x7469
71025bdd44  movk x15,#0x5f73, LSL #16
71025bdd48  mov x17,#0x6c75
71025bdd4c  movk x17,#0x5f65, LSL #16
71025bdd50  mov x3,#0x705f
71025bdd54  movk x3,#0x616c, LSL #16
71025bdd58  mov w22,wzr
71025bdd5c  add x8,x8,#0x4a8
71025bdd60  add x13,x10,#0x9
71025bdd64  mov w10,#0x8
71025bdd68  movk x14,#0x7073, LSL #32
71025bdd6c  movk x14,#0x7269, LSL #48
71025bdd70  movk x15,#0x6968, LSL #32
71025bdd74  movk x15,#0x746e, LSL #48
71025bdd78  mov w16,#0x725f
71025bdd7c  movk x17,#0x7073, LSL #32
71025bdd80  movk x17,#0x6565, LSL #48
71025bdd84  mov w18,#0x5f64
71025bdd88  movk w18,#0x6977, LSL #16
71025bdd8c  mov w1,#0x646c
71025bdd90  movk x3,#0x6579, LSL #32
71025bdd94  movk x3,#0x72, LSL #48
71025bdd98  mov w4,#0x27
71025bdd9c  mov w5,#0x6e
71025bdda0  mov w6,#0x89
71025bdda4  mov w7,#0x655f
71025bdda8  movk w7,#0x656e, LSL #16
71025bddac  mov w19,#0x796d
71025bddb0  mov w20,#0x26
71025bddb4  mov w21,#0x20
71025bddb8  mov w22,w22
71025bddbc  cmp x12,x22
71025bddc0  b.ls 0x71025c1ba0
71025bddc4  lsl x24,x22,#0x4
71025bddc8  ldr x24,[x11, x24, LSL #0x0]
71025bddcc  eor x24,x24,x2
71025bddd0  tst x24,#0xffffffffff
71025bddd4  b.ne 0x71025bdeb0
71025bddd8  add x24,x11,x22, LSL #0x4
71025bdddc  ldrb w25,[x24, #0x9]
71025bdde0  ldrb w24,[x24, #0x8]
71025bdde4  cbz w25,0x71025bde2c
71025bdde8  stp x14,x15,[sp, #0x18]
71025bddec  strh w16,[sp, #0x28]
71025bddf0  stur x17,[sp, #0x2a]
71025bddf4  stur w18,[sp, #0x32]
71025bddf8  strh w1,[sp, #0x36]
71025bddfc  cbz w24,0x71025bde70
71025bde00  mov x10,x13
71025bde04  mov w24,w5
71025bde08  mov w23,w9
71025bde0c  strb wzr,[sp, #0x38]
71025bde10  str w21,[sp, #0x14]
71025bde14  mul w23,w23,w6
71025bde18  and w24,w24,#0xff
71025bde1c  eor w23,w23,w24
71025bde20  ldrb w24,[x10], #0x1
71025bde24  cbnz w24,0x71025bde14
71025bde28  b 0x71025bdea0
71025bde2c  cbz w24,0x71025bdeb0
71025bde30  mov x10,x13
71025bde34  mov w24,w5
71025bde38  mov w23,w9
71025bde3c  stp x14,x15,[sp, #0x18]
71025bde40  strh w16,[sp, #0x28]
71025bde44  stur x17,[sp, #0x2a]
71025bde48  stur w18,[sp, #0x32]
71025bde4c  strh w1,[sp, #0x36]
71025bde50  str x3,[sp, #0x38]
71025bde54  str w4,[sp, #0x14]
71025bde58  mul w23,w23,w6
71025bde5c  and w24,w24,#0xff
71025bde60  eor w23,w23,w24
71025bde64  ldrb w24,[x10], #0x1
71025bde68  cbnz w24,0x71025bde58
71025bde6c  b 0x71025bdea0
71025bde70  mov x10,x13
71025bde74  mov w24,w5
71025bde78  mov w23,w9
71025bde7c  str w7,[sp, #0x38]
71025bde80  strh w19,[sp, #0x3c]
71025bde84  strb wzr,[sp, #0x3e]
71025bde88  str w20,[sp, #0x14]
71025bde8c  mul w23,w23,w6
71025bde90  and w24,w24,#0xff
71025bde94  eor w23,w23,w24
71025bde98  ldrb w24,[x10], #0x1
71025bde9c  cbnz w24,0x71025bde8c
71025bdea0  str w23,[sp, #0x10]
71025bdea4  orr w10,wzr,#0x3
71025bdea8  mov w23,w5
71025bdeac  str w10,[sp, #0xa0]
71025bdeb0  add w22,w22,#0x1
71025bdeb4  cmp w22,w12
71025bdeb8  b.cc 0x71025bddb8
71025bdebc  add x12,sp,#0x10
71025bdec0  cmp x12,x0
71025bdec4  b.eq 0x71025c185c
71025bdec8  mov x8,xzr
71025bdecc  add x11,x0,#0x9
71025bded0  add x12,x12,#0x9
71025bded4  tst w23,#0xff
71025bded8  b.eq 0x71025c10a8
71025bdedc  add w13,w8,#0x1
71025bdee0  add x14,x11,x8
71025bdee4  cmp w13,#0x3f
71025bdee8  sturb w23,[x14, #-0x1]
71025bdeec  b.cs 0x71025c07c0
71025bdef0  ldrb w13,[x12, x8, LSL ]
71025bdef4  cbz w13,0x71025c10a4
71025bdef8  add x14,x12,x8
71025bdefc  strb w13,[x11, x8, LSL ]
71025bdf00  ldrb w23,[x14, #0x1]
71025bdf04  add x8,x8,#0x2
71025bdf08  tst w23,#0xff
71025bdf0c  b.ne 0x71025bdedc
71025bdf10  b 0x71025c10a8
71025bdf14  mov w8,#0x8
71025bdf18  str w8,[sp, #0xa0]
71025bdf1c  adrp x8,0x7105329000
71025bdf20  ldr x8,[x8, #0xfa0]
71025bdf24  strb wzr,[sp, #0x18]
71025bdf28  str xzr,[sp, #0x10]
71025bdf2c  strb wzr,[sp, #0x60]
71025bdf30  str xzr,[sp, #0x58]
71025bdf34  ldr x8,[x8]
71025bdf38  ldr x9,[x8, #0x420]
71025bdf3c  ldr x10,[x8, #0x418]
71025bdf40  sub x9,x9,x10
71025bdf44  asr x11,x9,#0x4
71025bdf48  cbz w11,0x71025bdf9c
71025bdf4c  mov w12,wzr
71025bdf50  add x8,x8,#0x418
71025bdf54  adrp x9,0x71043cd000
71025bdf58  add x9,x9,#0x292
71025bdf5c  mov w12,w12
71025bdf60  cmp x11,x12
71025bdf64  b.ls 0x71025c1ba0
71025bdf68  lsl x13,x12,#0x4
71025bdf6c  ldr x13,[x10, x13, LSL #0x0]
71025bdf70  eor x13,x13,x2
71025bdf74  tst x13,#0xffffffffff
71025bdf78  b.ne 0x71025bdf90
71025bdf7c  add x13,x10,x12, LSL #0x4
71025bdf80  ldrb w14,[x13, #0x8]
71025bdf84  ldrb w13,[x13, #0x9]
71025bdf88  cbnz w14,0x71025c1938
71025bdf8c  cbnz w13,0x71025c1950
71025bdf90  add w12,w12,#0x1
71025bdf94  cmp w12,w11
71025bdf98  b.cc 0x71025bdf5c
71025bdf9c  mov w10,wzr
71025bdfa0  add x11,sp,#0x10
71025bdfa4  add x9,x11,#0x8
71025bdfa8  mov w8,#0x9dc5
71025bdfac  movk w8,#0x811c, LSL #16
71025bdfb0  mov w12,w8
71025bdfb4  strb wzr,[x9, w10, UXTW ]
71025bdfb8  str w10,[sp, #0x14]
71025bdfbc  ldrb w10,[sp, #0x18]
71025bdfc0  cbz w10,0x71025bdfe8
71025bdfc4  add x9,x11,#0x9
71025bdfc8  mov w13,#0x89
71025bdfcc  mov w14,w10
71025bdfd0  mov w12,w8
71025bdfd4  mul w12,w12,w13
71025bdfd8  and w14,w14,#0xff
71025bdfdc  eor w12,w12,w14
71025bdfe0  ldrb w14,[x9], #0x1
71025bdfe4  cbnz w14,0x71025bdfd4
71025bdfe8  mov w9,#0x4
71025bdfec  cmp x11,x0
71025bdff0  str w12,[sp, #0x10]
71025bdff4  str w9,[sp, #0xa0]
71025bdff8  b.eq 0x71025c16b8
71025bdffc  add x13,sp,#0x10
71025be000  mov x11,xzr
71025be004  add x12,x0,#0x9
71025be008  add x13,x13,#0x9
71025be00c  tst w10,#0xff
71025be010  b.eq 0x71025c0c3c
71025be014  add w14,w11,#0x1
71025be018  add x15,x12,x11
71025be01c  cmp w14,#0x3f
71025be020  sturb w10,[x15, #-0x1]
71025be024  b.cs 0x71025c07c8
71025be028  ldrb w10,[x13, x11, LSL ]
71025be02c  cbz w10,0x71025c0c38
71025be030  add x14,x13,x11
71025be034  strb w10,[x12, x11, LSL ]
71025be038  ldrb w10,[x14, #0x1]
71025be03c  add x11,x11,#0x2
71025be040  tst w10,#0xff
71025be044  b.ne 0x71025be014
71025be048  b 0x71025c0c3c
71025be04c  adrp x8,0x7105329000
71025be050  ldr x8,[x8, #0xfa0]
71025be054  mov w10,#0x8
71025be058  strb wzr,[sp, #0x18]
71025be05c  str xzr,[sp, #0x10]
71025be060  strb wzr,[sp, #0x60]
71025be064  str xzr,[sp, #0x58]
71025be068  mov w9,#0x9dc5
71025be06c  movk w9,#0x811c, LSL #16
71025be070  str w10,[sp, #0xa0]
71025be074  ldr x8,[x8]
71025be078  ldr x12,[x8, #0x510]
71025be07c  ldr x11,[x8, #0x508]
71025be080  sub x12,x12,x11
71025be084  mov w24,wzr
71025be088  asr x12,x12,#0x4
71025be08c  cbz w12,0x71025be220
71025be090  add x10,sp,#0x10
71025be094  mov x14,#0x616e
71025be098  movk x14,#0x5f6d, LSL #16
71025be09c  mov x15,#0x7469
71025be0a0  movk x15,#0x5f73, LSL #16
71025be0a4  mov x17,#0x6c75
71025be0a8  movk x17,#0x5f65, LSL #16
71025be0ac  mov w23,wzr
71025be0b0  add x8,x8,#0x508
71025be0b4  add x13,x10,#0x9
71025be0b8  mov w10,#0x8
71025be0bc  movk x14,#0x7073, LSL #32
71025be0c0  movk x14,#0x7269, LSL #48
71025be0c4  movk x15,#0x6968, LSL #32
71025be0c8  movk x15,#0x746e, LSL #48
71025be0cc  mov w16,#0x725f
71025be0d0  movk x17,#0x6162, LSL #32
71025be0d4  movk x17,#0x6c6c, LSL #48
71025be0d8  mov w18,#0x6f6f
71025be0dc  movk w18,#0x5f6e, LSL #16
71025be0e0  mov w1,#0x6c70
71025be0e4  mov w3,#0x7961
71025be0e8  movk w3,#0x7265, LSL #16
71025be0ec  mov w4,#0x24
71025be0f0  mov w5,#0x6e
71025be0f4  mov w6,#0x89
71025be0f8  mov w7,#0x6f6f
71025be0fc  mov w19,#0x655f
71025be100  movk w19,#0x656e, LSL #16
71025be104  mov w20,#0x796d
71025be108  mov w21,#0x23
71025be10c  mov w22,#0x1d
71025be110  mov w23,w23
71025be114  cmp x12,x23
71025be118  b.ls 0x71025c1ba0
71025be11c  lsl x25,x23,#0x4
71025be120  ldr x25,[x11, x25, LSL #0x0]
71025be124  eor x25,x25,x2
71025be128  tst x25,#0xffffffffff
71025be12c  b.ne 0x71025be214
71025be130  add x25,x11,x23, LSL #0x4
71025be134  ldrb w26,[x25, #0x9]
71025be138  ldrb w25,[x25, #0x8]
71025be13c  cbz w26,0x71025be184
71025be140  stp x14,x15,[sp, #0x18]
71025be144  strh w16,[sp, #0x28]
71025be148  stur x17,[sp, #0x2a]
71025be14c  strh w7,[sp, #0x32]
71025be150  strb w5,[sp, #0x34]
71025be154  cbz w25,0x71025be1d4
71025be158  mov x10,x13
71025be15c  mov w25,w5
71025be160  mov w24,w9
71025be164  strb wzr,[sp, #0x35]
71025be168  str w22,[sp, #0x14]
71025be16c  mul w24,w24,w6
71025be170  and w25,w25,#0xff
71025be174  eor w24,w24,w25
71025be178  ldrb w25,[x10], #0x1
71025be17c  cbnz w25,0x71025be16c
71025be180  b 0x71025be1c8
71025be184  cbz w25,0x71025be214
71025be188  mov x10,x13
71025be18c  mov w25,w5
71025be190  mov w24,w9
71025be194  stp x14,x15,[sp, #0x18]
71025be198  strh w16,[sp, #0x28]
71025be19c  stur x17,[sp, #0x2a]
71025be1a0  stur w18,[sp, #0x32]
71025be1a4  strh w1,[sp, #0x36]
71025be1a8  str w3,[sp, #0x38]
71025be1ac  strb wzr,[sp, #0x3c]
71025be1b0  str w4,[sp, #0x14]
71025be1b4  mul w24,w24,w6
71025be1b8  and w25,w25,#0xff
71025be1bc  eor w24,w24,w25
71025be1c0  ldrb w25,[x10], #0x1
71025be1c4  cbnz w25,0x71025be1b4
71025be1c8  mov w10,#0x2
71025be1cc  str w24,[sp, #0x10]
71025be1d0  b 0x71025be20c
71025be1d4  mov x10,x13
71025be1d8  mov w25,w5
71025be1dc  mov w24,w9
71025be1e0  stur w19,[sp, #0x35]
71025be1e4  sturh w20,[sp, #0x39]
71025be1e8  strb wzr,[sp, #0x3b]
71025be1ec  str w21,[sp, #0x14]
71025be1f0  mul w24,w24,w6
71025be1f4  and w25,w25,#0xff
71025be1f8  eor w24,w24,w25
71025be1fc  ldrb w25,[x10], #0x1
71025be200  cbnz w25,0x71025be1f0
71025be204  str w24,[sp, #0x10]
71025be208  mov w10,#0x4
71025be20c  mov w24,w5
71025be210  str w10,[sp, #0xa0]
71025be214  add w23,w23,#0x1
71025be218  cmp w23,w12
71025be21c  b.cc 0x71025be110
71025be220  add x12,sp,#0x10
71025be224  cmp x12,x0
71025be228  b.eq 0x71025c185c
71025be22c  mov x8,xzr
71025be230  add x11,x0,#0x9
71025be234  add x12,x12,#0x9
71025be238  tst w24,#0xff
71025be23c  b.eq 0x71025c10e8
71025be240  add w13,w8,#0x1
71025be244  add x14,x11,x8
71025be248  cmp w13,#0x3f
71025be24c  sturb w24,[x14, #-0x1]
71025be250  b.cs 0x71025c07d0
71025be254  ldrb w13,[x12, x8, LSL ]
71025be258  cbz w13,0x71025c10e4
71025be25c  add x14,x12,x8
71025be260  strb w13,[x11, x8, LSL ]
71025be264  ldrb w24,[x14, #0x1]
71025be268  add x8,x8,#0x2
71025be26c  tst w24,#0xff
71025be270  b.ne 0x71025be240
71025be274  b 0x71025c10e8
71025be278  mov w9,#0x8
71025be27c  str w9,[sp, #0xa0]
71025be280  mov x9,#0x616e
71025be284  movk x9,#0x5f6d, LSL #16
71025be288  movk x9,#0x7073, LSL #32
71025be28c  movk x9,#0x7269, LSL #48
71025be290  str x9,[sp, #0x18]
71025be294  mov w9,#0x7469
71025be298  movk w9,#0x5f73, LSL #16
71025be29c  str w9,[sp, #0x20]
71025be2a0  mov w9,#0x6968
71025be2a4  strh w9,[sp, #0x24]
71025be2a8  mov x9,#0x746e
71025be2ac  movk x9,#0x725f, LSL #16
71025be2b0  movk x9,#0x6c75, LSL #32
71025be2b4  movk x9,#0x5f65, LSL #48
71025be2b8  mov x8,#0x2500000000
71025be2bc  mov x10,#0x7361
71025be2c0  movk x10,#0x5f68, LSL #16
71025be2c4  str x8,[sp, #0x10]
71025be2c8  strb wzr,[sp, #0x60]
71025be2cc  stur x9,[sp, #0x26]
71025be2d0  mov w9,#0x6d73
71025be2d4  mov w8,#0x9dc5
71025be2d8  movk w8,#0x811c, LSL #16
71025be2dc  movk x10,#0x7461, LSL #32
71025be2e0  movk x10,#0x6174, LSL #48
71025be2e4  strh w9,[sp, #0x2e]
71025be2e8  mov w9,#0x6b63
71025be2ec  movk w9,#0x755f, LSL #16
71025be2f0  orr w13,wzr,#0x70
71025be2f4  str x10,[sp, #0x30]
71025be2f8  str w9,[sp, #0x38]
71025be2fc  mov w11,#0x6e
71025be300  mov w10,#0x9
71025be304  strh w13,[sp, #0x3c]
71025be308  mov w9,#0x89
71025be30c  add x12,sp,#0x10
71025be310  str xzr,[sp, #0x58]
71025be314  mov w13,w8
71025be318  mul w13,w13,w9
71025be31c  and w11,w11,#0xff
71025be320  eor w13,w13,w11
71025be324  ldrb w11,[x12, x10, LSL ]
71025be328  add x10,x10,#0x1
71025be32c  cbnz w11,0x71025be318
71025be330  str w13,[sp, #0x10]
71025be334  add x13,sp,#0x10
71025be338  orr w10,wzr,#0x3
71025be33c  cmp x13,x0
71025be340  str w10,[sp, #0xa0]
71025be344  b.eq 0x71025c185c
71025be348  mov x11,xzr
71025be34c  add x12,x0,#0x9
71025be350  add x13,x13,#0x9
71025be354  mov w14,#0x6e
71025be358  tst w14,#0xff
71025be35c  b.eq 0x71025c0cfc
71025be360  add w15,w11,#0x1
71025be364  add x16,x12,x11
71025be368  cmp w15,#0x3f
71025be36c  sturb w14,[x16, #-0x1]
71025be370  b.cs 0x71025c0750
71025be374  ldrb w14,[x13, x11, LSL ]
71025be378  cbz w14,0x71025c0cf8
71025be37c  add x15,x13,x11
71025be380  strb w14,[x12, x11, LSL ]
71025be384  ldrb w14,[x15, #0x1]
71025be388  add x11,x11,#0x2
71025be38c  tst w14,#0xff
71025be390  b.ne 0x71025be360
71025be394  b 0x71025c0cfc
71025be398  mov w9,#0x8
71025be39c  str w9,[sp, #0xa0]
71025be3a0  mov x9,#0x616e
71025be3a4  movk x9,#0x5f6d, LSL #16
71025be3a8  movk x9,#0x7073, LSL #32
71025be3ac  movk x9,#0x7269, LSL #48
71025be3b0  str x9,[sp, #0x18]
71025be3b4  mov w9,#0x7469
71025be3b8  movk w9,#0x5f73, LSL #16
71025be3bc  str w9,[sp, #0x20]
71025be3c0  mov w9,#0x6968
71025be3c4  strh w9,[sp, #0x24]
71025be3c8  mov x9,#0x746e
71025be3cc  movk x9,#0x725f, LSL #16
71025be3d0  movk x9,#0x6c75, LSL #32
71025be3d4  movk x9,#0x5f65, LSL #48
71025be3d8  mov x8,#0x2100000000
71025be3dc  str x8,[sp, #0x10]
71025be3e0  mov w8,#0x9dc5
71025be3e4  movk w8,#0x811c, LSL #16
71025be3e8  strb wzr,[sp, #0x60]
71025be3ec  stur x9,[sp, #0x26]
71025be3f0  mov x9,#0x6569
71025be3f4  movk x9,#0x646c, LSL #16
71025be3f8  mov w10,#0x6873
71025be3fc  movk x9,#0x735f, LSL #32
71025be400  movk x9,#0x6165, LSL #48
71025be404  mov w13,#0x6c
71025be408  strh w10,[sp, #0x2e]
71025be40c  str x9,[sp, #0x30]
71025be410  mov w11,#0x6e
71025be414  mov w10,#0x9
71025be418  strh w13,[sp, #0x38]
71025be41c  mov w9,#0x89
71025be420  add x12,sp,#0x10
71025be424  str xzr,[sp, #0x58]
71025be428  mov w13,w8
71025be42c  mul w13,w13,w9
71025be430  and w11,w11,#0xff
71025be434  eor w13,w13,w11
71025be438  ldrb w11,[x12, x10, LSL ]
71025be43c  add x10,x10,#0x1
71025be440  cbnz w11,0x71025be42c
71025be444  str w13,[sp, #0x10]
71025be448  add x13,sp,#0x10
71025be44c  mov w10,#0x2
71025be450  cmp x13,x0
71025be454  str w10,[sp, #0xa0]
71025be458  b.eq 0x71025c185c
71025be45c  mov x11,xzr
71025be460  add x12,x0,#0x9
71025be464  add x13,x13,#0x9
71025be468  mov w14,#0x6e
71025be46c  tst w14,#0xff
71025be470  b.eq 0x71025c0d38
71025be474  add w15,w11,#0x1
71025be478  add x16,x12,x11
71025be47c  cmp w15,#0x3f
71025be480  sturb w14,[x16, #-0x1]
71025be484  b.cs 0x71025c0758
71025be488  ldrb w14,[x13, x11, LSL ]
71025be48c  cbz w14,0x71025c0d34
71025be490  add x15,x13,x11
71025be494  strb w14,[x12, x11, LSL ]
71025be498  ldrb w14,[x15, #0x1]
71025be49c  add x11,x11,#0x2
71025be4a0  tst w14,#0xff
71025be4a4  b.ne 0x71025be474
71025be4a8  b 0x71025c0d38
71025be4ac  adrp x8,0x7105329000
71025be4b0  ldr x8,[x8, #0xfa0]
71025be4b4  mov w18,#0x8
71025be4b8  strb wzr,[sp, #0x18]
71025be4bc  str xzr,[sp, #0x10]
71025be4c0  strb wzr,[sp, #0x60]
71025be4c4  str xzr,[sp, #0x58]
71025be4c8  mov w9,#0x9dc5
71025be4cc  movk w9,#0x811c, LSL #16
71025be4d0  str w18,[sp, #0xa0]
71025be4d4  ldr x12,[x8]
71025be4d8  ldr x8,[x12, #0x318]
71025be4dc  ldr x10,[x12, #0x310]
71025be4e0  sub x8,x8,x10
71025be4e4  mov w4,wzr
71025be4e8  asr x11,x8,#0x4
71025be4ec  cbz w11,0x71025be788
71025be4f0  add x12,x12,#0x310
71025be4f4  str x12,[sp, #0x8]
71025be4f8  add x12,sp,#0x10
71025be4fc  mov x13,#0x616e
71025be500  movk x13,#0x5f6d, LSL #16
71025be504  mov x14,#0x7469
71025be508  movk x14,#0x5f73, LSL #16
71025be50c  mov x16,#0x6c75
71025be510  movk x16,#0x5f65, LSL #16
71025be514  mov x6,#0x6962
71025be518  movk x6,#0x5f67, LSL #16
71025be51c  mov x23,#0x6962
71025be520  movk x23,#0x5f67, LSL #16
71025be524  mov x26,#0x6d73
71025be528  movk x26,#0x6c61, LSL #16
71025be52c  mov x28,#0x6962
71025be530  movk x28,#0x5f67, LSL #16
71025be534  mov w8,wzr
71025be538  add x12,x12,#0x9
71025be53c  mov w18,#0x8
71025be540  movk x13,#0x7073, LSL #32
71025be544  movk x13,#0x7269, LSL #48
71025be548  movk x14,#0x6968, LSL #32
71025be54c  movk x14,#0x746e, LSL #48
71025be550  mov w15,#0x725f
71025be554  movk x16,#0x6373, LSL #32
71025be558  movk x16,#0x6c61, LSL #48
71025be55c  mov w17,#0x5f65
71025be560  mov w3,#0x6e
71025be564  mov w5,#0x89
71025be568  movk x6,#0x6c70, LSL #32
71025be56c  movk x6,#0x7961, LSL #48
71025be570  mov w7,#0x7265
71025be574  mov w19,#0x26
71025be578  mov w22,#0x27
71025be57c  movk x23,#0x6e65, LSL #32
71025be580  movk x23,#0x6d65, LSL #48
71025be584  mov w24,#0x79
71025be588  mov w25,#0x25
71025be58c  movk x26,#0x5f6c, LSL #32
71025be590  movk x26,#0x6c61, LSL #48
71025be594  mov w27,#0x6c
71025be598  movk x28,#0x6c61, LSL #32
71025be59c  movk x28,#0x6c, LSL #48
71025be5a0  mov w30,#0x23
71025be5a4  mov w8,w8
71025be5a8  cmp x11,x8
71025be5ac  b.ls 0x71025c1ba8
71025be5b0  lsl x1,x8,#0x4
71025be5b4  ldr x1,[x10, x1, LSL #0x0]
71025be5b8  eor x1,x1,x2
71025be5bc  tst x1,#0xffffffffff
71025be5c0  b.ne 0x71025be77c
71025be5c4  add x20,x10,x8, LSL #0x4
71025be5c8  ldrb w21,[x20, #0x9]
71025be5cc  ldrb w1,[x20, #0x8]
71025be5d0  cbz w21,0x71025be61c
71025be5d4  ldrb w18,[x20, #0xa]
71025be5d8  stp x13,x14,[sp, #0x18]
71025be5dc  strh w15,[sp, #0x28]
71025be5e0  stur x16,[sp, #0x2a]
71025be5e4  strh w17,[sp, #0x32]
71025be5e8  cbz w1,0x71025be66c
71025be5ec  cbz w18,0x71025be6a0
71025be5f0  mov x18,x12
71025be5f4  mov w1,w3
71025be5f8  mov w4,w9
71025be5fc  stur x28,[sp, #0x34]
71025be600  str w30,[sp, #0x14]
71025be604  mul w4,w4,w5
71025be608  and w1,w1,#0xff
71025be60c  eor w4,w4,w1
71025be610  ldrb w1,[x18], #0x1
71025be614  cbnz w1,0x71025be604
71025be618  b 0x71025be76c
71025be61c  cbz w1,0x71025be77c
71025be620  ldrb w18,[x20, #0xa]
71025be624  stp x13,x14,[sp, #0x18]
71025be628  strh w15,[sp, #0x28]
71025be62c  stur x16,[sp, #0x2a]
71025be630  strh w17,[sp, #0x32]
71025be634  cbz w18,0x71025be6d0
71025be638  mov x18,x12
71025be63c  mov w1,w3
71025be640  mov w4,w9
71025be644  stur x6,[sp, #0x34]
71025be648  strh w7,[sp, #0x3c]
71025be64c  strb wzr,[sp, #0x3e]
71025be650  str w19,[sp, #0x14]
71025be654  mul w4,w4,w5
71025be658  and w1,w1,#0xff
71025be65c  eor w4,w4,w1
71025be660  ldrb w1,[x18], #0x1
71025be664  cbnz w1,0x71025be654
71025be668  b 0x71025be76c
71025be66c  cbz w18,0x71025be728
71025be670  mov x18,x12
71025be674  mov w1,w3
71025be678  mov w4,w9
71025be67c  stur x23,[sp, #0x34]
71025be680  strh w24,[sp, #0x3c]
71025be684  str w25,[sp, #0x14]
71025be688  mul w4,w4,w5
71025be68c  and w1,w1,#0xff
71025be690  eor w4,w4,w1
71025be694  ldrb w1,[x18], #0x1
71025be698  cbnz w1,0x71025be688
71025be69c  b 0x71025be71c
71025be6a0  mov x18,x12
71025be6a4  mov w1,w3
71025be6a8  mov w4,w9
71025be6ac  stur x26,[sp, #0x34]
71025be6b0  strh w27,[sp, #0x3c]
71025be6b4  str w25,[sp, #0x14]
71025be6b8  mul w4,w4,w5
71025be6bc  and w1,w1,#0xff
71025be6c0  eor w4,w4,w1
71025be6c4  ldrb w1,[x18], #0x1
71025be6c8  cbnz w1,0x71025be6b8
71025be6cc  b 0x71025be76c
71025be6d0  mov x18,#0x6d73
71025be6d4  movk x18,#0x6c61, LSL #16
71025be6d8  movk x18,#0x5f6c, LSL #32
71025be6dc  movk x18,#0x6c70, LSL #48
71025be6e0  stur x18,[sp, #0x34]
71025be6e4  mov w18,#0x7961
71025be6e8  movk w18,#0x7265, LSL #16
71025be6ec  str w18,[sp, #0x3c]
71025be6f0  mov x18,x12
71025be6f4  mov w1,w3
71025be6f8  mov w4,w9
71025be6fc  strb wzr,[sp, #0x40]
71025be700  mov w20,#0x28
71025be704  str w20,[sp, #0x14]
71025be708  mul w4,w4,w5
71025be70c  and w1,w1,#0xff
71025be710  eor w4,w4,w1
71025be714  ldrb w1,[x18], #0x1
71025be718  cbnz w1,0x71025be708
71025be71c  mov w18,#0x2
71025be720  str w4,[sp, #0x10]
71025be724  b 0x71025be774
71025be728  mov x18,#0x6d73
71025be72c  movk x18,#0x6c61, LSL #16
71025be730  movk x18,#0x5f6c, LSL #32
71025be734  movk x18,#0x6e65, LSL #48
71025be738  stur x18,[sp, #0x34]
71025be73c  mov w18,#0x6d65
71025be740  movk w18,#0x79, LSL #16
71025be744  str w18,[sp, #0x3c]
71025be748  mov x18,x12
71025be74c  mov w1,w3
71025be750  mov w4,w9
71025be754  str w22,[sp, #0x14]
71025be758  mul w4,w4,w5
71025be75c  and w1,w1,#0xff
71025be760  eor w4,w4,w1
71025be764  ldrb w1,[x18], #0x1
71025be768  cbnz w1,0x71025be758
71025be76c  str w4,[sp, #0x10]
71025be770  mov w18,#0x4
71025be774  mov w4,w3
71025be778  str w18,[sp, #0xa0]
71025be77c  add w8,w8,#0x1
71025be780  cmp w8,w11
71025be784  b.cc 0x71025be5a4
71025be788  add x11,sp,#0x10
71025be78c  cmp x11,x0
71025be790  b.eq 0x71025c116c
71025be794  mov x8,xzr
71025be798  add x10,x0,#0x9
71025be79c  add x11,x11,#0x9
71025be7a0  tst w4,#0xff
71025be7a4  b.eq 0x71025c1128
71025be7a8  add w12,w8,#0x1
71025be7ac  add x13,x10,x8
71025be7b0  cmp w12,#0x3f
71025be7b4  sturb w4,[x13, #-0x1]
71025be7b8  b.cs 0x71025c07d8
71025be7bc  ldrb w12,[x11, x8, LSL ]
71025be7c0  cbz w12,0x71025c1124
71025be7c4  add x13,x11,x8
71025be7c8  strb w12,[x10, x8, LSL ]
71025be7cc  ldrb w4,[x13, #0x1]
71025be7d0  add x8,x8,#0x2
71025be7d4  tst w4,#0xff
71025be7d8  b.ne 0x71025be7a8
71025be7dc  b 0x71025c1128
71025be7e0  mov w8,#0x8
71025be7e4  str w8,[sp, #0xa0]
71025be7e8  adrp x8,0x7105329000
71025be7ec  ldr x8,[x8, #0xfa0]
71025be7f0  strb wzr,[sp, #0x18]
71025be7f4  str xzr,[sp, #0x10]
71025be7f8  strb wzr,[sp, #0x60]
71025be7fc  orr x11,xzr,#-0x5555555555555556
71025be800  movk x11,#0xaaab
71025be804  str xzr,[sp, #0x58]
71025be808  ldr x8,[x8]
71025be80c  ldr x10,[x8, #0x5e8]
71025be810  ldr x9,[x8, #0x5e0]
71025be814  sub x10,x10,x9
71025be818  asr x10,x10,#0x3
71025be81c  mul x10,x10,x11
71025be820  cbz w10,0x71025c05fc
71025be824  mov w11,wzr
71025be828  mov w13,wzr
71025be82c  add x8,x8,#0x5e0
71025be830  orr w12,wzr,#0x18
71025be834  mov w13,w13
71025be838  cmp x10,x13
71025be83c  b.ls 0x71025c1ba0
71025be840  mul x14,x13,x12
71025be844  ldr x14,[x9, x14, LSL #0x0]
71025be848  eor x14,x14,x2
71025be84c  tst x14,#0xffffffffff
71025be850  b.ne 0x71025be85c
71025be854  madd x11,x13,x12,x9
71025be858  ldr w11,[x11, #0x14]
71025be85c  add w13,w13,#0x1
71025be860  cmp w13,w10
71025be864  b.cc 0x71025be834
71025be868  cmp w11,#0x1
71025be86c  b.ls 0x71025c05fc
71025be870  mov x8,#0x616e
71025be874  movk x8,#0x5f6d, LSL #16
71025be878  movk x8,#0x7073, LSL #32
71025be87c  movk x8,#0x7269, LSL #48
71025be880  str x8,[sp, #0x18]
71025be884  mov x8,#0x7469
71025be888  movk x8,#0x5f73, LSL #16
71025be88c  movk x8,#0x6968, LSL #32
71025be890  movk x8,#0x746e, LSL #48
71025be894  str x8,[sp, #0x20]
71025be898  mov x8,#0x6c75
71025be89c  movk x8,#0x5f65, LSL #16
71025be8a0  movk x8,#0x7469, LSL #32
71025be8a4  movk x8,#0x6d65, LSL #48
71025be8a8  stur x8,[sp, #0x2a]
71025be8ac  mov w8,#0x615f
71025be8b0  movk w8,#0x7070, LSL #16
71025be8b4  mov w9,#0x725f
71025be8b8  strh w9,[sp, #0x28]
71025be8bc  stur w8,[sp, #0x32]
71025be8c0  mov w8,#0x6165
71025be8c4  strh w8,[sp, #0x36]
71025be8c8  mov w8,#0x72
71025be8cc  mov w9,#0x21
71025be8d0  strb w8,[sp, #0x38]
71025be8d4  b 0x71025c0600
71025be8d8  mov w9,#0x8
71025be8dc  str w9,[sp, #0xa0]
71025be8e0  mov x9,#0x616e
71025be8e4  movk x9,#0x5f6d, LSL #16
71025be8e8  movk x9,#0x7073, LSL #32
71025be8ec  movk x9,#0x7269, LSL #48
71025be8f0  str x9,[sp, #0x18]
71025be8f4  mov w9,#0x7469
71025be8f8  movk w9,#0x5f73, LSL #16
71025be8fc  str w9,[sp, #0x20]
71025be900  mov w9,#0x6968
71025be904  mov x8,#0x1a00000000
71025be908  str x8,[sp, #0x10]
71025be90c  mov w8,#0x9dc5
71025be910  movk w8,#0x811c, LSL #16
71025be914  strh w9,[sp, #0x24]
71025be918  mov x9,#0x746e
71025be91c  movk x9,#0x725f, LSL #16
71025be920  movk x9,#0x6c75, LSL #32
71025be924  movk x9,#0x5f65, LSL #48
71025be928  stur x9,[sp, #0x26]
71025be92c  mov w12,#0x6f62
71025be930  movk w12,#0x626d, LSL #16
71025be934  stur w12,[sp, #0x2e]
71025be938  mov w11,#0x6e
71025be93c  mov w10,#0x9
71025be940  strb wzr,[sp, #0x60]
71025be944  mov w9,#0x89
71025be948  add x12,sp,#0x10
71025be94c  str xzr,[sp, #0x58]
71025be950  mov w13,w8
71025be954  strb wzr,[sp, #0x32]
71025be958  mul w13,w13,w9
71025be95c  and w11,w11,#0xff
71025be960  eor w13,w13,w11
71025be964  ldrb w11,[x12, x10, LSL ]
71025be968  add x10,x10,#0x1
71025be96c  cbnz w11,0x71025be958
71025be970  str w13,[sp, #0x10]
71025be974  add x13,sp,#0x10
71025be978  mov w10,#0x2
71025be97c  cmp x13,x0
71025be980  str w10,[sp, #0xa0]
71025be984  b.eq 0x71025c185c
71025be988  mov x11,xzr
71025be98c  add x12,x0,#0x9
71025be990  add x13,x13,#0x9
71025be994  mov w14,#0x6e
71025be998  tst w14,#0xff
71025be99c  b.eq 0x71025c0d74
71025be9a0  add w15,w11,#0x1
71025be9a4  add x16,x12,x11
71025be9a8  cmp w15,#0x3f
71025be9ac  sturb w14,[x16, #-0x1]
71025be9b0  b.cs 0x71025c0760
71025be9b4  ldrb w14,[x13, x11, LSL ]
71025be9b8  cbz w14,0x71025c0d70
71025be9bc  add x15,x13,x11
71025be9c0  strb w14,[x12, x11, LSL ]
71025be9c4  ldrb w14,[x15, #0x1]
71025be9c8  add x11,x11,#0x2
71025be9cc  tst w14,#0xff
71025be9d0  b.ne 0x71025be9a0
71025be9d4  b 0x71025c0d74
71025be9d8  adrp x8,0x7105329000
71025be9dc  ldr x8,[x8, #0xfa0]
71025be9e0  mov w10,#0x8
71025be9e4  strb wzr,[sp, #0x18]
71025be9e8  str xzr,[sp, #0x10]
71025be9ec  strb wzr,[sp, #0x60]
71025be9f0  str xzr,[sp, #0x58]
71025be9f4  mov w9,#0x9dc5
71025be9f8  movk w9,#0x811c, LSL #16
71025be9fc  str w10,[sp, #0xa0]
71025bea00  ldr x8,[x8]
71025bea04  ldr x12,[x8, #0x468]
71025bea08  ldr x11,[x8, #0x460]
71025bea0c  sub x12,x12,x11
71025bea10  mov w26,wzr
71025bea14  asr x12,x12,#0x4
71025bea18  cbz w12,0x71025bebb0
71025bea1c  add x10,sp,#0x10
71025bea20  mov x14,#0x616e
71025bea24  movk x14,#0x5f6d, LSL #16
71025bea28  mov x15,#0x7469
71025bea2c  movk x15,#0x5f73, LSL #16
71025bea30  mov x17,#0x6c75
71025bea34  movk x17,#0x5f65, LSL #16
71025bea38  mov w25,wzr
71025bea3c  add x8,x8,#0x460
71025bea40  add x13,x10,#0x9
71025bea44  mov w10,#0x8
71025bea48  movk x14,#0x7073, LSL #32
71025bea4c  movk x14,#0x7269, LSL #48
71025bea50  movk x15,#0x6968, LSL #32
71025bea54  movk x15,#0x746e, LSL #48
71025bea58  mov w16,#0x725f
71025bea5c  movk x17,#0x6c66, LSL #32
71025bea60  movk x17,#0x776f, LSL #48
71025bea64  mov w18,#0x7265
71025bea68  movk w18,#0x705f, LSL #16
71025bea6c  mov w1,#0x616c
71025bea70  mov w3,#0x6579
71025bea74  movk w3,#0x72, LSL #16
71025bea78  mov w4,#0x23
71025bea7c  mov w5,#0x6e
71025bea80  mov w6,#0x89
71025bea84  mov w7,#0x7265
71025bea88  mov w19,#0x5f
71025bea8c  mov w20,#0x6e65
71025bea90  movk w20,#0x6d65, LSL #16
71025bea94  mov w21,#0x79
71025bea98  mov w22,#0x22
71025bea9c  mov w23,#0x6c61
71025beaa0  movk w23,#0x6c, LSL #16
71025beaa4  mov w24,#0x20
71025beaa8  mov w25,w25
71025beaac  cmp x12,x25
71025beab0  b.ls 0x71025c1ba0
71025beab4  lsl x27,x25,#0x4
71025beab8  ldr x27,[x11, x27, LSL #0x0]
71025beabc  eor x27,x27,x2
71025beac0  tst x27,#0xffffffffff
71025beac4  b.ne 0x71025beba4
71025beac8  add x27,x11,x25, LSL #0x4
71025beacc  ldrb w28,[x27, #0x9]
71025bead0  ldrb w27,[x27, #0x8]
71025bead4  cbz w28,0x71025beb1c
71025bead8  stp x14,x15,[sp, #0x18]
71025beadc  strh w16,[sp, #0x28]
71025beae0  stur x17,[sp, #0x2a]
71025beae4  strh w7,[sp, #0x32]
71025beae8  strb w19,[sp, #0x34]
71025beaec  cbz w27,0x71025beb68
71025beaf0  mov x10,x13
71025beaf4  mov w27,w5
71025beaf8  mov w26,w9
71025beafc  stur w23,[sp, #0x35]
71025beb00  str w24,[sp, #0x14]
71025beb04  mul w26,w26,w6
71025beb08  and w27,w27,#0xff
71025beb0c  eor w26,w26,w27
71025beb10  ldrb w27,[x10], #0x1
71025beb14  cbnz w27,0x71025beb04
71025beb18  b 0x71025beb94
71025beb1c  cbz w27,0x71025beba4
71025beb20  mov x10,x13
71025beb24  mov w27,w5
71025beb28  mov w26,w9
71025beb2c  stp x14,x15,[sp, #0x18]
71025beb30  strh w16,[sp, #0x28]
71025beb34  stur x17,[sp, #0x2a]
71025beb38  stur w18,[sp, #0x32]
71025beb3c  strh w1,[sp, #0x36]
71025beb40  str w3,[sp, #0x38]
71025beb44  str w4,[sp, #0x14]
71025beb48  mul w26,w26,w6
71025beb4c  and w27,w27,#0xff
71025beb50  eor w26,w26,w27
71025beb54  ldrb w27,[x10], #0x1
71025beb58  cbnz w27,0x71025beb48
71025beb5c  orr w10,wzr,#0x3
71025beb60  str w26,[sp, #0x10]
71025beb64  b 0x71025beb9c
71025beb68  mov x10,x13
71025beb6c  mov w27,w5
71025beb70  mov w26,w9
71025beb74  stur w20,[sp, #0x35]
71025beb78  sturh w21,[sp, #0x39]
71025beb7c  str w22,[sp, #0x14]
71025beb80  mul w26,w26,w6
71025beb84  and w27,w27,#0xff
71025beb88  eor w26,w26,w27
71025beb8c  ldrb w27,[x10], #0x1
71025beb90  cbnz w27,0x71025beb80
71025beb94  str w26,[sp, #0x10]
71025beb98  mov w10,#0x4
71025beb9c  mov w26,w5
71025beba0  str w10,[sp, #0xa0]
71025beba4  add w25,w25,#0x1
71025beba8  cmp w25,w12
71025bebac  b.cc 0x71025beaa8
71025bebb0  add x12,sp,#0x10
71025bebb4  cmp x12,x0
71025bebb8  b.eq 0x71025c185c
71025bebbc  mov x8,xzr
71025bebc0  add x11,x0,#0x9
71025bebc4  add x12,x12,#0x9
71025bebc8  tst w26,#0xff
71025bebcc  b.eq 0x71025c1178
71025bebd0  add w13,w8,#0x1
71025bebd4  add x14,x11,x8
71025bebd8  cmp w13,#0x3f
71025bebdc  sturb w26,[x14, #-0x1]
71025bebe0  b.cs 0x71025c08d4
71025bebe4  ldrb w13,[x12, x8, LSL ]
71025bebe8  cbz w13,0x71025c1174
71025bebec  add x14,x12,x8
71025bebf0  strb w13,[x11, x8, LSL ]
71025bebf4  ldrb w26,[x14, #0x1]
71025bebf8  add x8,x8,#0x2
71025bebfc  tst w26,#0xff
71025bec00  b.ne 0x71025bebd0
71025bec04  b 0x71025c1178
71025bec08  mov w9,#0x8
71025bec0c  str w9,[sp, #0xa0]
71025bec10  mov x9,#0x616e
71025bec14  movk x9,#0x5f6d, LSL #16
71025bec18  movk x9,#0x7073, LSL #32
71025bec1c  movk x9,#0x7269, LSL #48
71025bec20  str x9,[sp, #0x18]
71025bec24  mov w9,#0x7469
71025bec28  movk w9,#0x5f73, LSL #16
71025bec2c  str w9,[sp, #0x20]
71025bec30  mov w9,#0x6968
71025bec34  strh w9,[sp, #0x24]
71025bec38  mov x9,#0x746e
71025bec3c  movk x9,#0x725f, LSL #16
71025bec40  movk x9,#0x6c75, LSL #32
71025bec44  movk x9,#0x5f65, LSL #48
71025bec48  mov x8,#0x2700000000
71025bec4c  mov x13,#0x6572
71025bec50  movk x13,#0x6576, LSL #16
71025bec54  str x8,[sp, #0x10]
71025bec58  strb wzr,[sp, #0x60]
71025bec5c  stur x9,[sp, #0x26]
71025bec60  mov x9,#0x6176
71025bec64  movk x9,#0x746e, LSL #16
71025bec68  mov w8,#0x9dc5
71025bec6c  movk w8,#0x811c, LSL #16
71025bec70  str xzr,[sp, #0x58]
71025bec74  mov w10,#0x6461
71025bec78  movk x9,#0x6761, LSL #32
71025bec7c  movk x9,#0x5f65, LSL #48
71025bec80  movk x13,#0x7372, LSL #32
71025bec84  movk x13,#0x65, LSL #48
71025bec88  strh w10,[sp, #0x2e]
71025bec8c  mov w11,#0x6e
71025bec90  stp x9,x13,[sp, #0x30]
71025bec94  mov w10,#0x9
71025bec98  mov w9,#0x89
71025bec9c  add x12,sp,#0x10
71025beca0  mov w13,w8
71025beca4  mul w13,w13,w9
71025beca8  and w11,w11,#0xff
71025becac  eor w13,w13,w11
71025becb0  ldrb w11,[x12, x10, LSL ]
71025becb4  add x10,x10,#0x1
71025becb8  cbnz w11,0x71025beca4
71025becbc  str w13,[sp, #0x10]
71025becc0  add x13,sp,#0x10
71025becc4  mov w10,#0x2
71025becc8  cmp x13,x0
71025beccc  str w10,[sp, #0xa0]
71025becd0  b.eq 0x71025c185c
71025becd4  mov x11,xzr
71025becd8  add x12,x0,#0x9
71025becdc  add x13,x13,#0x9
71025bece0  mov w14,#0x6e
71025bece4  tst w14,#0xff
71025bece8  b.eq 0x71025c0db0
71025becec  add w15,w11,#0x1
71025becf0  add x16,x12,x11
71025becf4  cmp w15,#0x3f
71025becf8  sturb w14,[x16, #-0x1]
71025becfc  b.cs 0x71025c0768
71025bed00  ldrb w14,[x13, x11, LSL ]
71025bed04  cbz w14,0x71025c0dac
71025bed08  add x15,x13,x11
71025bed0c  strb w14,[x12, x11, LSL ]
71025bed10  ldrb w14,[x15, #0x1]
71025bed14  add x11,x11,#0x2
71025bed18  tst w14,#0xff
71025bed1c  b.ne 0x71025becec
71025bed20  b 0x71025c0db0
71025bed24  mov w9,#0x8
71025bed28  str w9,[sp, #0xa0]
71025bed2c  mov x9,#0x616e
71025bed30  movk x9,#0x5f6d, LSL #16
71025bed34  movk x9,#0x7073, LSL #32
71025bed38  movk x9,#0x7269, LSL #48
71025bed3c  str x9,[sp, #0x18]
71025bed40  mov w9,#0x7469
71025bed44  movk w9,#0x5f73, LSL #16
71025bed48  str w9,[sp, #0x20]
71025bed4c  mov w9,#0x6968
71025bed50  strh w9,[sp, #0x24]
71025bed54  mov x9,#0x746e
71025bed58  movk x9,#0x725f, LSL #16
71025bed5c  orr x8,xzr,#0x1c00000000
71025bed60  str x8,[sp, #0x10]
71025bed64  mov w8,#0x9dc5
71025bed68  movk w8,#0x811c, LSL #16
71025bed6c  movk x9,#0x6c75, LSL #32
71025bed70  movk x9,#0x5f65, LSL #48
71025bed74  stur x9,[sp, #0x26]
71025bed78  mov w9,#0x7361
71025bed7c  mov w12,#0x6973
71025bed80  movk w12,#0x7473, LSL #16
71025bed84  strh w9,[sp, #0x2e]
71025bed88  mov w11,#0x6e
71025bed8c  str w12,[sp, #0x30]
71025bed90  mov w10,#0x9
71025bed94  mov w9,#0x89
71025bed98  strb wzr,[sp, #0x60]
71025bed9c  add x12,sp,#0x10
71025beda0  mov w13,w8
71025beda4  str xzr,[sp, #0x58]
71025beda8  strb wzr,[sp, #0x34]
71025bedac  mul w13,w13,w9
71025bedb0  and w11,w11,#0xff
71025bedb4  eor w13,w13,w11
71025bedb8  ldrb w11,[x12, x10, LSL ]
71025bedbc  add x10,x10,#0x1
71025bedc0  cbnz w11,0x71025bedac
71025bedc4  str w13,[sp, #0x10]
71025bedc8  add x13,sp,#0x10
71025bedcc  orr w10,wzr,#0x3
71025bedd0  cmp x13,x0
71025bedd4  str w10,[sp, #0xa0]
71025bedd8  b.eq 0x71025c185c
71025beddc  mov x11,xzr
71025bede0  add x12,x0,#0x9
71025bede4  add x13,x13,#0x9
71025bede8  mov w14,#0x6e
71025bedec  tst w14,#0xff
71025bedf0  b.eq 0x71025c0dec
71025bedf4  add w15,w11,#0x1
71025bedf8  add x16,x12,x11
71025bedfc  cmp w15,#0x3f
71025bee00  sturb w14,[x16, #-0x1]
71025bee04  b.cs 0x71025c0770
71025bee08  ldrb w14,[x13, x11, LSL ]
71025bee0c  cbz w14,0x71025c0de8
71025bee10  add x15,x13,x11
71025bee14  strb w14,[x12, x11, LSL ]
71025bee18  ldrb w14,[x15, #0x1]
71025bee1c  add x11,x11,#0x2
71025bee20  tst w14,#0xff
71025bee24  b.ne 0x71025bedf4
71025bee28  b 0x71025c0dec
71025bee2c  adrp x8,0x7105329000
71025bee30  ldr x8,[x8, #0xfa0]
71025bee34  mov w10,#0x8
71025bee38  strb wzr,[sp, #0x18]
71025bee3c  str xzr,[sp, #0x10]
71025bee40  strb wzr,[sp, #0x60]
71025bee44  str xzr,[sp, #0x58]
71025bee48  mov w9,#0x9dc5
71025bee4c  movk w9,#0x811c, LSL #16
71025bee50  str w10,[sp, #0xa0]
71025bee54  ldr x8,[x8]
71025bee58  ldr x12,[x8, #0x348]
71025bee5c  ldr x11,[x8, #0x340]
71025bee60  sub x12,x12,x11
71025bee64  mov w27,wzr
71025bee68  asr x12,x12,#0x4
71025bee6c  cbz w12,0x71025bf034
71025bee70  add x10,sp,#0x10
71025bee74  mov x14,#0x616e
71025bee78  movk x14,#0x5f6d, LSL #16
71025bee7c  mov x15,#0x7469
71025bee80  movk x15,#0x5f73, LSL #16
71025bee84  mov x17,#0x6c75
71025bee88  movk x17,#0x5f65, LSL #16
71025bee8c  mov x3,#0x705f
71025bee90  movk x3,#0x616c, LSL #16
71025bee94  mov x20,#0x6164
71025bee98  movk x20,#0x616d, LSL #16
71025bee9c  mov x21,#0x3030
71025beea0  movk x21,#0x655f, LSL #16
71025beea4  mov x23,#0x7573
71025beea8  movk x23,#0x6464, LSL #16
71025beeac  mov w26,wzr
71025beeb0  add x8,x8,#0x340
71025beeb4  add x13,x10,#0x9
71025beeb8  mov w10,#0x8
71025beebc  movk x14,#0x7073, LSL #32
71025beec0  movk x14,#0x7269, LSL #48
71025beec4  movk x15,#0x6968, LSL #32
71025beec8  movk x15,#0x746e, LSL #48
71025beecc  mov w16,#0x725f
71025beed0  movk x17,#0x6164, LSL #32
71025beed4  movk x17,#0x616d, LSL #48
71025beed8  mov w18,#0x6567
71025beedc  movk w18,#0x335f, LSL #16
71025beee0  mov w1,#0x3030
71025beee4  movk x3,#0x6579, LSL #32
71025beee8  movk x3,#0x72, LSL #48
71025beeec  mov w4,#0x27
71025beef0  mov w5,#0x6e
71025beef4  mov w6,#0x89
71025beef8  mov w7,#0x725f
71025beefc  movk w7,#0x6c75, LSL #16
71025bef00  mov w19,#0x5f65
71025bef04  movk x20,#0x6567, LSL #32
71025bef08  movk x20,#0x335f, LSL #48
71025bef0c  movk x21,#0x656e, LSL #32
71025bef10  movk x21,#0x796d, LSL #48
71025bef14  mov w22,#0x26
71025bef18  movk x23,#0x6e65, LSL #32
71025bef1c  movk x23,#0x6564, LSL #48
71025bef20  mov w24,#0x7461
71025bef24  movk w24,#0x68, LSL #16
71025bef28  mov w25,#0x21
71025bef2c  mov w26,w26
71025bef30  cmp x12,x26
71025bef34  b.ls 0x71025c1ba0
71025bef38  lsl x28,x26,#0x4
71025bef3c  ldr x28,[x11, x28, LSL #0x0]
71025bef40  eor x28,x28,x2
71025bef44  tst x28,#0xffffffffff
71025bef48  b.ne 0x71025bf028
71025bef4c  add x28,x11,x26, LSL #0x4
71025bef50  ldrb w30,[x28, #0x9]
71025bef54  ldrb w28,[x28, #0x8]
71025bef58  cbz w30,0x71025bef9c
71025bef5c  stp x14,x15,[sp, #0x18]
71025bef60  str w7,[sp, #0x28]
71025bef64  strh w19,[sp, #0x2c]
71025bef68  cbz w28,0x71025befe8
71025bef6c  mov x10,x13
71025bef70  mov w28,w5
71025bef74  mov w27,w9
71025bef78  stur x23,[sp, #0x2e]
71025bef7c  stur w24,[sp, #0x36]
71025bef80  str w25,[sp, #0x14]
71025bef84  mul w27,w27,w6
71025bef88  and w28,w28,#0xff
71025bef8c  eor w27,w27,w28
71025bef90  ldrb w28,[x10], #0x1
71025bef94  cbnz w28,0x71025bef84
71025bef98  b 0x71025befdc
71025bef9c  cbz w28,0x71025bf028
71025befa0  mov x10,x13
71025befa4  mov w28,w5
71025befa8  mov w27,w9
71025befac  stp x14,x15,[sp, #0x18]
71025befb0  strh w16,[sp, #0x28]
71025befb4  stur x17,[sp, #0x2a]
71025befb8  stur w18,[sp, #0x32]
71025befbc  strh w1,[sp, #0x36]
71025befc0  str x3,[sp, #0x38]
71025befc4  str w4,[sp, #0x14]
71025befc8  mul w27,w27,w6
71025befcc  and w28,w28,#0xff
71025befd0  eor w27,w27,w28
71025befd4  ldrb w28,[x10], #0x1
71025befd8  cbnz w28,0x71025befc8
71025befdc  mov w10,#0x2
71025befe0  str w27,[sp, #0x10]
71025befe4  b 0x71025bf020
71025befe8  mov x10,x13
71025befec  mov w28,w5
71025beff0  mov w27,w9
71025beff4  stur x20,[sp, #0x2e]
71025beff8  stur x21,[sp, #0x36]
71025beffc  strb wzr,[sp, #0x3e]
71025bf000  str w22,[sp, #0x14]
71025bf004  mul w27,w27,w6
71025bf008  and w28,w28,#0xff
71025bf00c  eor w27,w27,w28
71025bf010  ldrb w28,[x10], #0x1
71025bf014  cbnz w28,0x71025bf004
71025bf018  str w27,[sp, #0x10]
71025bf01c  orr w10,wzr,#0x3
71025bf020  mov w27,w5
71025bf024  str w10,[sp, #0xa0]
71025bf028  add w26,w26,#0x1
71025bf02c  cmp w26,w12
71025bf030  b.cc 0x71025bef2c
71025bf034  add x12,sp,#0x10
71025bf038  cmp x12,x0
71025bf03c  b.eq 0x71025c185c
71025bf040  mov x8,xzr
71025bf044  add x11,x0,#0x9
71025bf048  add x12,x12,#0x9
71025bf04c  tst w27,#0xff
71025bf050  b.eq 0x71025c1714
71025bf054  add w13,w8,#0x1
71025bf058  add x14,x11,x8
71025bf05c  cmp w13,#0x3f
71025bf060  sturb w27,[x14, #-0x1]
71025bf064  b.cs 0x71025c08dc
71025bf068  ldrb w13,[x12, x8, LSL ]
71025bf06c  cbz w13,0x71025c1710
71025bf070  add x14,x12,x8
71025bf074  strb w13,[x11, x8, LSL ]
71025bf078  ldrb w27,[x14, #0x1]
71025bf07c  add x8,x8,#0x2
71025bf080  tst w27,#0xff
71025bf084  b.ne 0x71025bf054
71025bf088  b 0x71025c1714
71025bf08c  mov w8,#0x8
71025bf090  str w8,[sp, #0xa0]
71025bf094  adrp x8,0x7105329000
71025bf098  ldr x8,[x8, #0xfa0]
71025bf09c  strb wzr,[sp, #0x18]
71025bf0a0  str xzr,[sp, #0x10]
71025bf0a4  strb wzr,[sp, #0x60]
71025bf0a8  str xzr,[sp, #0x58]
71025bf0ac  ldr x8,[x8]
71025bf0b0  ldr x9,[x8, #0x450]
71025bf0b4  ldr x10,[x8, #0x448]
71025bf0b8  sub x9,x9,x10
71025bf0bc  asr x11,x9,#0x4
71025bf0c0  cbz w11,0x71025bf114
71025bf0c4  mov w12,wzr
71025bf0c8  add x8,x8,#0x448
71025bf0cc  adrp x9,0x71042f5000
71025bf0d0  add x9,x9,#0xb51
71025bf0d4  mov w12,w12
71025bf0d8  cmp x11,x12
71025bf0dc  b.ls 0x71025c1ba0
71025bf0e0  lsl x13,x12,#0x4
71025bf0e4  ldr x13,[x10, x13, LSL #0x0]
71025bf0e8  eor x13,x13,x2
71025bf0ec  tst x13,#0xffffffffff
71025bf0f0  b.ne 0x71025bf108
71025bf0f4  add x13,x10,x12, LSL #0x4
71025bf0f8  ldrb w14,[x13, #0x8]
71025bf0fc  ldrb w13,[x13, #0x9]
71025bf100  cbnz w14,0x71025c19f0
71025bf104  cbnz w13,0x71025c1a08
71025bf108  add w12,w12,#0x1
71025bf10c  cmp w12,w11
71025bf110  b.cc 0x71025bf0d4
71025bf114  mov w10,wzr
71025bf118  add x11,sp,#0x10
71025bf11c  add x9,x11,#0x8
71025bf120  mov w8,#0x9dc5
71025bf124  movk w8,#0x811c, LSL #16
71025bf128  mov w12,w8
71025bf12c  strb wzr,[x9, w10, UXTW ]
71025bf130  str w10,[sp, #0x14]
71025bf134  ldrb w10,[sp, #0x18]
71025bf138  cbz w10,0x71025bf160
71025bf13c  add x9,x11,#0x9
71025bf140  mov w13,#0x89
71025bf144  mov w14,w10
71025bf148  mov w12,w8
71025bf14c  mul w12,w12,w13
71025bf150  and w14,w14,#0xff
71025bf154  eor w12,w12,w14
71025bf158  ldrb w14,[x9], #0x1
71025bf15c  cbnz w14,0x71025bf14c
71025bf160  mov w9,#0x2
71025bf164  cmp x11,x0
71025bf168  str w12,[sp, #0x10]
71025bf16c  str w9,[sp, #0xa0]
71025bf170  b.eq 0x71025c16b8
71025bf174  add x13,sp,#0x10
71025bf178  mov x11,xzr
71025bf17c  add x12,x0,#0x9
71025bf180  add x13,x13,#0x9
71025bf184  tst w10,#0xff
71025bf188  b.eq 0x71025c11b8
71025bf18c  add w14,w11,#0x1
71025bf190  add x15,x12,x11
71025bf194  cmp w14,#0x3f
71025bf198  sturb w10,[x15, #-0x1]
71025bf19c  b.cs 0x71025c07e0
71025bf1a0  ldrb w10,[x13, x11, LSL ]
71025bf1a4  cbz w10,0x71025c11b4
71025bf1a8  add x14,x13,x11
71025bf1ac  strb w10,[x12, x11, LSL ]
71025bf1b0  ldrb w10,[x14, #0x1]
71025bf1b4  add x11,x11,#0x2
71025bf1b8  tst w10,#0xff
71025bf1bc  b.ne 0x71025bf18c
71025bf1c0  b 0x71025c11b8
71025bf1c4  mov w8,#0x8
71025bf1c8  str w8,[sp, #0xa0]
71025bf1cc  adrp x8,0x7105329000
71025bf1d0  ldr x8,[x8, #0xfa0]
71025bf1d4  strb wzr,[sp, #0x18]
71025bf1d8  str xzr,[sp, #0x10]
71025bf1dc  strb wzr,[sp, #0x60]
71025bf1e0  str xzr,[sp, #0x58]
71025bf1e4  ldr x8,[x8]
71025bf1e8  ldr x9,[x8, #0x498]
71025bf1ec  ldr x10,[x8, #0x490]
71025bf1f0  sub x9,x9,x10
71025bf1f4  asr x11,x9,#0x4
71025bf1f8  cbz w11,0x71025bf24c
71025bf1fc  mov w12,wzr
71025bf200  add x8,x8,#0x490
71025bf204  adrp x9,0x7104327000
71025bf208  add x9,x9,#0xe17
71025bf20c  mov w12,w12
71025bf210  cmp x11,x12
71025bf214  b.ls 0x71025c1ba0
71025bf218  lsl x13,x12,#0x4
71025bf21c  ldr x13,[x10, x13, LSL #0x0]
71025bf220  eor x13,x13,x2
71025bf224  tst x13,#0xffffffffff
71025bf228  b.ne 0x71025bf240
71025bf22c  add x13,x10,x12, LSL #0x4
71025bf230  ldrb w14,[x13, #0x8]
71025bf234  ldrb w13,[x13, #0x9]
71025bf238  cbnz w14,0x71025c1a4c
71025bf23c  cbnz w13,0x71025c1a64
71025bf240  add w12,w12,#0x1
71025bf244  cmp w12,w11
71025bf248  b.cc 0x71025bf20c
71025bf24c  mov w10,wzr
71025bf250  add x11,sp,#0x10
71025bf254  add x9,x11,#0x8
71025bf258  mov w8,#0x9dc5
71025bf25c  movk w8,#0x811c, LSL #16
71025bf260  mov w12,w8
71025bf264  strb wzr,[x9, w10, UXTW ]
71025bf268  str w10,[sp, #0x14]
71025bf26c  ldrb w10,[sp, #0x18]
71025bf270  cbz w10,0x71025bf298
71025bf274  add x9,x11,#0x9
71025bf278  mov w13,#0x89
71025bf27c  mov w14,w10
71025bf280  mov w12,w8
71025bf284  mul w12,w12,w13
71025bf288  and w14,w14,#0xff
71025bf28c  eor w12,w12,w14
71025bf290  ldrb w14,[x9], #0x1
71025bf294  cbnz w14,0x71025bf284
71025bf298  mov w9,#0x2
71025bf29c  cmp x11,x0
71025bf2a0  str w12,[sp, #0x10]
71025bf2a4  str w9,[sp, #0xa0]
71025bf2a8  b.eq 0x71025c16b8
71025bf2ac  add x13,sp,#0x10
71025bf2b0  mov x11,xzr
71025bf2b4  add x12,x0,#0x9
71025bf2b8  add x13,x13,#0x9
71025bf2bc  tst w10,#0xff
71025bf2c0  b.eq 0x71025c1278
71025bf2c4  add w14,w11,#0x1
71025bf2c8  add x15,x12,x11
71025bf2cc  cmp w14,#0x3f
71025bf2d0  sturb w10,[x15, #-0x1]
71025bf2d4  b.cs 0x71025c07e8
71025bf2d8  ldrb w10,[x13, x11, LSL ]
71025bf2dc  cbz w10,0x71025c1274
71025bf2e0  add x14,x13,x11
71025bf2e4  strb w10,[x12, x11, LSL ]
71025bf2e8  ldrb w10,[x14, #0x1]
71025bf2ec  add x11,x11,#0x2
71025bf2f0  tst w10,#0xff
71025bf2f4  b.ne 0x71025bf2c4
71025bf2f8  b 0x71025c1278
71025bf2fc  mov w8,#0x8
71025bf300  str w8,[sp, #0xa0]
71025bf304  adrp x8,0x7105329000
71025bf308  ldr x8,[x8, #0xfa0]
71025bf30c  strb wzr,[sp, #0x18]
71025bf310  str xzr,[sp, #0x10]
71025bf314  strb wzr,[sp, #0x60]
71025bf318  str xzr,[sp, #0x58]
71025bf31c  ldr x8,[x8]
71025bf320  ldr x9,[x8, #0x3a8]
71025bf324  ldr x10,[x8, #0x3a0]
71025bf328  sub x9,x9,x10
71025bf32c  asr x11,x9,#0x4
71025bf330  cbz w11,0x71025bf384
71025bf334  mov w12,wzr
71025bf338  add x8,x8,#0x3a0
71025bf33c  adrp x9,0x71042d4000
71025bf340  add x9,x9,#0x1c5
71025bf344  mov w12,w12
71025bf348  cmp x11,x12
71025bf34c  b.ls 0x71025c1ba0
71025bf350  lsl x13,x12,#0x4
71025bf354  ldr x13,[x10, x13, LSL #0x0]
71025bf358  eor x13,x13,x2
71025bf35c  tst x13,#0xffffffffff
71025bf360  b.ne 0x71025bf378
71025bf364  add x13,x10,x12, LSL #0x4
71025bf368  ldrb w14,[x13, #0x8]
71025bf36c  ldrb w13,[x13, #0x9]
71025bf370  cbnz w14,0x71025c1aa8
71025bf374  cbnz w13,0x71025c1ac0
71025bf378  add w12,w12,#0x1
71025bf37c  cmp w12,w11
71025bf380  b.cc 0x71025bf344
71025bf384  mov w10,wzr
71025bf388  add x11,sp,#0x10
71025bf38c  add x9,x11,#0x8
71025bf390  mov w8,#0x9dc5
71025bf394  movk w8,#0x811c, LSL #16
71025bf398  mov w12,w8
71025bf39c  strb wzr,[x9, w10, UXTW ]
71025bf3a0  str w10,[sp, #0x14]
71025bf3a4  ldrb w10,[sp, #0x18]
71025bf3a8  cbz w10,0x71025bf3d0
71025bf3ac  add x9,x11,#0x9
71025bf3b0  mov w13,#0x89
71025bf3b4  mov w14,w10
71025bf3b8  mov w12,w8
71025bf3bc  mul w12,w12,w13
71025bf3c0  and w14,w14,#0xff
71025bf3c4  eor w12,w12,w14
71025bf3c8  ldrb w14,[x9], #0x1
71025bf3cc  cbnz w14,0x71025bf3bc
71025bf3d0  mov w9,#0x2
71025bf3d4  cmp x11,x0
71025bf3d8  str w12,[sp, #0x10]
71025bf3dc  str w9,[sp, #0xa0]
71025bf3e0  b.eq 0x71025c16b8
71025bf3e4  add x13,sp,#0x10
71025bf3e8  mov x11,xzr
71025bf3ec  add x12,x0,#0x9
71025bf3f0  add x13,x13,#0x9
71025bf3f4  tst w10,#0xff
71025bf3f8  b.eq 0x71025c1338
71025bf3fc  add w14,w11,#0x1
71025bf400  add x15,x12,x11
71025bf404  cmp w14,#0x3f
71025bf408  sturb w10,[x15, #-0x1]
71025bf40c  b.cs 0x71025c07f0
71025bf410  ldrb w10,[x13, x11, LSL ]
71025bf414  cbz w10,0x71025c1334
71025bf418  add x14,x13,x11
71025bf41c  strb w10,[x12, x11, LSL ]
71025bf420  ldrb w10,[x14, #0x1]
71025bf424  add x11,x11,#0x2
71025bf428  tst w10,#0xff
71025bf42c  b.ne 0x71025bf3fc
71025bf430  b 0x71025c1338
71025bf434  mov w8,#0x8
71025bf438  str w8,[sp, #0xa0]
71025bf43c  adrp x8,0x7105329000
71025bf440  ldr x8,[x8, #0xfa0]
71025bf444  strb wzr,[sp, #0x18]
71025bf448  str xzr,[sp, #0x10]
71025bf44c  strb wzr,[sp, #0x60]
71025bf450  str xzr,[sp, #0x58]
71025bf454  ldr x8,[x8]
71025bf458  ldr x9,[x8, #0x480]
71025bf45c  ldr x10,[x8, #0x478]
71025bf460  sub x9,x9,x10
71025bf464  asr x11,x9,#0x4
71025bf468  cbz w11,0x71025bf4bc
71025bf46c  mov w12,wzr
71025bf470  add x8,x8,#0x478
71025bf474  adrp x9,0x7104348000
71025bf478  add x9,x9,#0x89
71025bf47c  mov w12,w12
71025bf480  cmp x11,x12
71025bf484  b.ls 0x71025c1ba0
71025bf488  lsl x13,x12,#0x4
71025bf48c  ldr x13,[x10, x13, LSL #0x0]
71025bf490  eor x13,x13,x2
71025bf494  tst x13,#0xffffffffff
71025bf498  b.ne 0x71025bf4b0
71025bf49c  add x13,x10,x12, LSL #0x4
71025bf4a0  ldrb w14,[x13, #0x8]
71025bf4a4  ldrb w13,[x13, #0x9]
71025bf4a8  cbnz w14,0x71025c1994
71025bf4ac  cbnz w13,0x71025c19ac
71025bf4b0  add w12,w12,#0x1
71025bf4b4  cmp w12,w11
71025bf4b8  b.cc 0x71025bf47c
71025bf4bc  mov w10,wzr
71025bf4c0  add x11,sp,#0x10
71025bf4c4  add x9,x11,#0x8
71025bf4c8  mov w8,#0x9dc5
71025bf4cc  movk w8,#0x811c, LSL #16
71025bf4d0  mov w12,w8
71025bf4d4  strb wzr,[x9, w10, UXTW ]
71025bf4d8  str w10,[sp, #0x14]
71025bf4dc  ldrb w10,[sp, #0x18]
71025bf4e0  cbz w10,0x71025bf508
71025bf4e4  add x9,x11,#0x9
71025bf4e8  mov w13,#0x89
71025bf4ec  mov w14,w10
71025bf4f0  mov w12,w8
71025bf4f4  mul w12,w12,w13
71025bf4f8  and w14,w14,#0xff
71025bf4fc  eor w12,w12,w14
71025bf500  ldrb w14,[x9], #0x1
71025bf504  cbnz w14,0x71025bf4f4
71025bf508  orr w9,wzr,#0x3
71025bf50c  cmp x11,x0
71025bf510  str w12,[sp, #0x10]
71025bf514  str w9,[sp, #0xa0]
71025bf518  b.eq 0x71025c16b8
71025bf51c  add x13,sp,#0x10
71025bf520  mov x11,xzr
71025bf524  add x12,x0,#0x9
71025bf528  add x13,x13,#0x9
71025bf52c  tst w10,#0xff
71025bf530  b.eq 0x71025c13f8
71025bf534  add w14,w11,#0x1
71025bf538  add x15,x12,x11
71025bf53c  cmp w14,#0x3f
71025bf540  sturb w10,[x15, #-0x1]
71025bf544  b.cs 0x71025c07f8
71025bf548  ldrb w10,[x13, x11, LSL ]
71025bf54c  cbz w10,0x71025c13f4
71025bf550  add x14,x13,x11
71025bf554  strb w10,[x12, x11, LSL ]
71025bf558  ldrb w10,[x14, #0x1]
71025bf55c  add x11,x11,#0x2
71025bf560  tst w10,#0xff
71025bf564  b.ne 0x71025bf534
71025bf568  b 0x71025c13f8
71025bf56c  adrp x8,0x7105329000
71025bf570  ldr x8,[x8, #0xfa0]
71025bf574  mov w10,#0x8
71025bf578  strb wzr,[sp, #0x18]
71025bf57c  str xzr,[sp, #0x10]
71025bf580  strb wzr,[sp, #0x60]
71025bf584  str xzr,[sp, #0x58]
71025bf588  mov w9,#0x9dc5
71025bf58c  movk w9,#0x811c, LSL #16
71025bf590  str w10,[sp, #0xa0]
71025bf594  ldr x8,[x8]
71025bf598  ldr x12,[x8, #0x3c0]
71025bf59c  ldr x11,[x8, #0x3b8]
71025bf5a0  sub x12,x12,x11
71025bf5a4  mov w27,wzr
71025bf5a8  asr x12,x12,#0x4
71025bf5ac  cbz w12,0x71025bf760
71025bf5b0  add x10,sp,#0x10
71025bf5b4  mov x14,#0x616e
71025bf5b8  movk x14,#0x5f6d, LSL #16
71025bf5bc  mov x15,#0x7469
71025bf5c0  movk x15,#0x5f73, LSL #16
71025bf5c4  mov x17,#0x6c75
71025bf5c8  movk x17,#0x5f65, LSL #16
71025bf5cc  mov x3,#0x6e65
71025bf5d0  movk x3,#0x705f, LSL #16
71025bf5d4  mov x19,#0x646c
71025bf5d8  movk x19,#0x6577, LSL #16
71025bf5dc  mov w26,wzr
71025bf5e0  add x8,x8,#0x3b8
71025bf5e4  add x13,x10,#0x9
71025bf5e8  mov w10,#0x8
71025bf5ec  movk x14,#0x7073, LSL #32
71025bf5f0  movk x14,#0x7269, LSL #48
71025bf5f4  movk x15,#0x6968, LSL #32
71025bf5f8  movk x15,#0x746e, LSL #48
71025bf5fc  mov w16,#0x725f
71025bf600  movk x17,#0x6873, LSL #32
71025bf604  movk x17,#0x6569, LSL #48
71025bf608  mov w18,#0x646c
71025bf60c  movk w18,#0x6577, LSL #16
71025bf610  mov w1,#0x6b61
71025bf614  movk x3,#0x616c, LSL #32
71025bf618  movk x3,#0x6579, LSL #48
71025bf61c  mov w4,#0x72
71025bf620  mov w5,#0x29
71025bf624  mov w6,#0x6e
71025bf628  mov w7,#0x89
71025bf62c  movk x19,#0x6b61, LSL #32
71025bf630  movk x19,#0x6e65, LSL #48
71025bf634  mov w20,#0x5f
71025bf638  mov w21,#0x6e65
71025bf63c  movk w21,#0x6d65, LSL #16
71025bf640  mov w22,#0x79
71025bf644  mov w23,#0x28
71025bf648  mov w24,#0x6c61
71025bf64c  movk w24,#0x6c, LSL #16
71025bf650  mov w25,#0x26
71025bf654  mov w26,w26
71025bf658  cmp x12,x26
71025bf65c  b.ls 0x71025c1ba0
71025bf660  lsl x28,x26,#0x4
71025bf664  ldr x28,[x11, x28, LSL #0x0]
71025bf668  eor x28,x28,x2
71025bf66c  tst x28,#0xffffffffff
71025bf670  b.ne 0x71025bf754
71025bf674  add x28,x11,x26, LSL #0x4
71025bf678  ldrb w30,[x28, #0x9]
71025bf67c  ldrb w28,[x28, #0x8]
71025bf680  cbz w30,0x71025bf6c8
71025bf684  stp x14,x15,[sp, #0x18]
71025bf688  strh w16,[sp, #0x28]
71025bf68c  stur x17,[sp, #0x2a]
71025bf690  stur x19,[sp, #0x32]
71025bf694  strb w20,[sp, #0x3a]
71025bf698  cbz w28,0x71025bf718
71025bf69c  mov x10,x13
71025bf6a0  mov w28,w6
71025bf6a4  mov w27,w9
71025bf6a8  stur w24,[sp, #0x3b]
71025bf6ac  str w25,[sp, #0x14]
71025bf6b0  mul w27,w27,w7
71025bf6b4  and w28,w28,#0xff
71025bf6b8  eor w27,w27,w28
71025bf6bc  ldrb w28,[x10], #0x1
71025bf6c0  cbnz w28,0x71025bf6b0
71025bf6c4  b 0x71025bf70c
71025bf6c8  cbz w28,0x71025bf754
71025bf6cc  mov x10,x13
71025bf6d0  mov w28,w6
71025bf6d4  mov w27,w9
71025bf6d8  stp x14,x15,[sp, #0x18]
71025bf6dc  strh w16,[sp, #0x28]
71025bf6e0  stur x17,[sp, #0x2a]
71025bf6e4  stur w18,[sp, #0x32]
71025bf6e8  strh w1,[sp, #0x36]
71025bf6ec  str x3,[sp, #0x38]
71025bf6f0  strh w4,[sp, #0x40]
71025bf6f4  str w5,[sp, #0x14]
71025bf6f8  mul w27,w27,w7
71025bf6fc  and w28,w28,#0xff
71025bf700  eor w27,w27,w28
71025bf704  ldrb w28,[x10], #0x1
71025bf708  cbnz w28,0x71025bf6f8
71025bf70c  orr w10,wzr,#0x3
71025bf710  str w27,[sp, #0x10]
71025bf714  b 0x71025bf74c
71025bf718  mov x10,x13
71025bf71c  mov w28,w6
71025bf720  mov w27,w9
71025bf724  stur w21,[sp, #0x3b]
71025bf728  sturh w22,[sp, #0x3f]
71025bf72c  str w23,[sp, #0x14]
71025bf730  mul w27,w27,w7
71025bf734  and w28,w28,#0xff
71025bf738  eor w27,w27,w28
71025bf73c  ldrb w28,[x10], #0x1
71025bf740  cbnz w28,0x71025bf730
71025bf744  str w27,[sp, #0x10]
71025bf748  mov w10,#0x4
71025bf74c  mov w27,w6
71025bf750  str w10,[sp, #0xa0]
71025bf754  add w26,w26,#0x1
71025bf758  cmp w26,w12
71025bf75c  b.cc 0x71025bf654
71025bf760  add x12,sp,#0x10
71025bf764  cmp x12,x0
71025bf768  b.eq 0x71025c185c
71025bf76c  mov x8,xzr
71025bf770  add x11,x0,#0x9
71025bf774  add x12,x12,#0x9
71025bf778  tst w27,#0xff
71025bf77c  b.eq 0x71025c1754
71025bf780  add w13,w8,#0x1
71025bf784  add x14,x11,x8
71025bf788  cmp w13,#0x3f
71025bf78c  sturb w27,[x14, #-0x1]
71025bf790  b.cs 0x71025c08e4
71025bf794  ldrb w13,[x12, x8, LSL ]
71025bf798  cbz w13,0x71025c1750
71025bf79c  add x14,x12,x8
71025bf7a0  strb w13,[x11, x8, LSL ]
71025bf7a4  ldrb w27,[x14, #0x1]
71025bf7a8  add x8,x8,#0x2
71025bf7ac  tst w27,#0xff
71025bf7b0  b.ne 0x71025bf780
71025bf7b4  b 0x71025c1754
71025bf7b8  mov w9,#0x8
71025bf7bc  str w9,[sp, #0xa0]
71025bf7c0  mov x9,#0x616e
71025bf7c4  movk x9,#0x5f6d, LSL #16
71025bf7c8  movk x9,#0x7073, LSL #32
71025bf7cc  movk x9,#0x7269, LSL #48
71025bf7d0  str x9,[sp, #0x18]
71025bf7d4  mov w9,#0x7469
71025bf7d8  movk w9,#0x5f73, LSL #16
71025bf7dc  str w9,[sp, #0x20]
71025bf7e0  mov w9,#0x6968
71025bf7e4  strh w9,[sp, #0x24]
71025bf7e8  mov x9,#0x746e
71025bf7ec  movk x9,#0x725f, LSL #16
71025bf7f0  movk x9,#0x6c75, LSL #32
71025bf7f4  movk x9,#0x5f65, LSL #48
71025bf7f8  orr x8,xzr,#0x1e00000000
71025bf7fc  str x8,[sp, #0x10]
71025bf800  mov w8,#0x9dc5
71025bf804  movk w8,#0x811c, LSL #16
71025bf808  strb wzr,[sp, #0x60]
71025bf80c  stur x9,[sp, #0x26]
71025bf810  mov w9,#0x6c73
71025bf814  strh w9,[sp, #0x2e]
71025bf818  mov w9,#0x7069
71025bf81c  movk w9,#0x6570, LSL #16
71025bf820  mov w12,#0x7972
71025bf824  str w9,[sp, #0x30]
71025bf828  mov w11,#0x6e
71025bf82c  mov w10,#0x9
71025bf830  strh w12,[sp, #0x34]
71025bf834  mov w9,#0x89
71025bf838  add x12,sp,#0x10
71025bf83c  mov w13,w8
71025bf840  str xzr,[sp, #0x58]
71025bf844  strb wzr,[sp, #0x36]
71025bf848  mul w13,w13,w9
71025bf84c  and w11,w11,#0xff
71025bf850  eor w13,w13,w11
71025bf854  ldrb w11,[x12, x10, LSL ]
71025bf858  add x10,x10,#0x1
71025bf85c  cbnz w11,0x71025bf848
71025bf860  str w13,[sp, #0x10]
71025bf864  add x13,sp,#0x10
71025bf868  mov w10,#0x4
71025bf86c  cmp x13,x0
71025bf870  str w10,[sp, #0xa0]
71025bf874  b.eq 0x71025c185c
71025bf878  mov x11,xzr
71025bf87c  add x12,x0,#0x9
71025bf880  add x13,x13,#0x9
71025bf884  mov w14,#0x6e
71025bf888  tst w14,#0xff
71025bf88c  b.eq 0x71025c0e28
71025bf890  add w15,w11,#0x1
71025bf894  add x16,x12,x11
71025bf898  cmp w15,#0x3f
71025bf89c  sturb w14,[x16, #-0x1]
71025bf8a0  b.cs 0x71025c0778
71025bf8a4  ldrb w14,[x13, x11, LSL ]
71025bf8a8  cbz w14,0x71025c0e24
71025bf8ac  add x15,x13,x11
71025bf8b0  strb w14,[x12, x11, LSL ]
71025bf8b4  ldrb w14,[x15, #0x1]
71025bf8b8  add x11,x11,#0x2
71025bf8bc  tst w14,#0xff
71025bf8c0  b.ne 0x71025bf890
71025bf8c4  b 0x71025c0e28
71025bf8c8  mov w9,#0x8
71025bf8cc  str w9,[sp, #0xa0]
71025bf8d0  mov x9,#0x616e
71025bf8d4  movk x9,#0x5f6d, LSL #16
71025bf8d8  movk x9,#0x7073, LSL #32
71025bf8dc  movk x9,#0x7269, LSL #48
71025bf8e0  str x9,[sp, #0x18]
71025bf8e4  mov w9,#0x7469
71025bf8e8  movk w9,#0x5f73, LSL #16
71025bf8ec  orr x8,xzr,#0x1f00000000
71025bf8f0  mov x10,#0x746e
71025bf8f4  movk x10,#0x725f, LSL #16
71025bf8f8  str w9,[sp, #0x20]
71025bf8fc  mov w9,#0x6968
71025bf900  str x8,[sp, #0x10]
71025bf904  mov x13,#0x706d
71025bf908  movk x13,#0x735f, LSL #16
71025bf90c  strh w9,[sp, #0x24]
71025bf910  mov w8,#0x9dc5
71025bf914  movk w8,#0x811c, LSL #16
71025bf918  strb wzr,[sp, #0x60]
71025bf91c  movk x10,#0x6c75, LSL #32
71025bf920  movk x10,#0x5f65, LSL #48
71025bf924  stur x10,[sp, #0x26]
71025bf928  mov w9,#0x756a
71025bf92c  movk x13,#0x6165, LSL #32
71025bf930  movk x13,#0x6c, LSL #48
71025bf934  mov w11,#0x6e
71025bf938  strh w9,[sp, #0x2e]
71025bf93c  str x13,[sp, #0x30]
71025bf940  mov w10,#0x9
71025bf944  mov w9,#0x89
71025bf948  str xzr,[sp, #0x58]
71025bf94c  add x12,sp,#0x10
71025bf950  mov w13,w8
71025bf954  mul w13,w13,w9
71025bf958  and w11,w11,#0xff
71025bf95c  eor w13,w13,w11
71025bf960  ldrb w11,[x12, x10, LSL ]
71025bf964  add x10,x10,#0x1
71025bf968  cbnz w11,0x71025bf954
71025bf96c  str w13,[sp, #0x10]
71025bf970  add x13,sp,#0x10
71025bf974  mov w10,#0x2
71025bf978  cmp x13,x0
71025bf97c  str w10,[sp, #0xa0]
71025bf980  b.eq 0x71025c185c
71025bf984  mov x11,xzr
71025bf988  add x12,x0,#0x9
71025bf98c  add x13,x13,#0x9
71025bf990  mov w14,#0x6e
71025bf994  tst w14,#0xff
71025bf998  b.eq 0x71025c0e64
71025bf99c  add w15,w11,#0x1
71025bf9a0  add x16,x12,x11
71025bf9a4  cmp w15,#0x3f
71025bf9a8  sturb w14,[x16, #-0x1]
71025bf9ac  b.cs 0x71025c0780
71025bf9b0  ldrb w14,[x13, x11, LSL ]
71025bf9b4  cbz w14,0x71025c0e60
71025bf9b8  add x15,x13,x11
71025bf9bc  strb w14,[x12, x11, LSL ]
71025bf9c0  ldrb w14,[x15, #0x1]
71025bf9c4  add x11,x11,#0x2
71025bf9c8  tst w14,#0xff
71025bf9cc  b.ne 0x71025bf99c
71025bf9d0  b 0x71025c0e64
71025bf9d4  adrp x8,0x7105329000
71025bf9d8  ldr x8,[x8, #0xfa0]
71025bf9dc  mov w10,#0x8
71025bf9e0  strb wzr,[sp, #0x18]
71025bf9e4  str xzr,[sp, #0x10]
71025bf9e8  strb wzr,[sp, #0x60]
71025bf9ec  str xzr,[sp, #0x58]
71025bf9f0  mov w9,#0x9dc5
71025bf9f4  movk w9,#0x811c, LSL #16
71025bf9f8  str w10,[sp, #0xa0]
71025bf9fc  ldr x8,[x8]
71025bfa00  ldr x12,[x8, #0x4c8]
71025bfa04  ldr x11,[x8, #0x4c0]
71025bfa08  sub x12,x12,x11
71025bfa0c  mov w25,wzr
71025bfa10  asr x12,x12,#0x4
71025bfa14  cbz w12,0x71025bfbbc
71025bfa18  add x10,sp,#0x10
71025bfa1c  mov x14,#0x616e
71025bfa20  movk x14,#0x5f6d, LSL #16
71025bfa24  mov x15,#0x7469
71025bfa28  movk x15,#0x5f73, LSL #16
71025bfa2c  mov x17,#0x6c75
71025bfa30  movk x17,#0x5f65, LSL #16
71025bfa34  mov x3,#0x6563
71025bfa38  movk x3,#0x705f, LSL #16
71025bfa3c  mov x19,#0x7073
71025bfa40  movk x19,#0x7261, LSL #16
71025bfa44  mov w24,wzr
71025bfa48  add x8,x8,#0x4c0
71025bfa4c  add x13,x10,#0x9
71025bfa50  mov w10,#0x8
71025bfa54  movk x14,#0x7073, LSL #32
71025bfa58  movk x14,#0x7269, LSL #48
71025bfa5c  movk x15,#0x6968, LSL #32
71025bfa60  movk x15,#0x746e, LSL #48
71025bfa64  mov w16,#0x725f
71025bfa68  movk x17,#0x7274, LSL #32
71025bfa6c  movk x17,#0x6e61, LSL #48
71025bfa70  mov w18,#0x7073
71025bfa74  movk w18,#0x7261, LSL #16
71025bfa78  mov w1,#0x6e65
71025bfa7c  movk x3,#0x616c, LSL #32
71025bfa80  movk x3,#0x6579, LSL #48
71025bfa84  mov w4,#0x72
71025bfa88  mov w5,#0x29
71025bfa8c  mov w6,#0x6e
71025bfa90  mov w7,#0x89
71025bfa94  movk x19,#0x6e65, LSL #32
71025bfa98  movk x19,#0x6563, LSL #48
71025bfa9c  mov w20,#0x655f
71025bfaa0  movk w20,#0x656e, LSL #16
71025bfaa4  mov w21,#0x796d
71025bfaa8  mov w22,#0x28
71025bfaac  mov w23,#0x22
71025bfab0  mov w24,w24
71025bfab4  cmp x12,x24
71025bfab8  b.ls 0x71025c1ba0
71025bfabc  lsl x26,x24,#0x4
71025bfac0  ldr x26,[x11, x26, LSL #0x0]
71025bfac4  eor x26,x26,x2
71025bfac8  tst x26,#0xffffffffff
71025bfacc  b.ne 0x71025bfbb0
71025bfad0  add x26,x11,x24, LSL #0x4
71025bfad4  ldrb w27,[x26, #0x9]
71025bfad8  ldrb w26,[x26, #0x8]
71025bfadc  cbz w27,0x71025bfb28
71025bfae0  stp x14,x15,[sp, #0x18]
71025bfae4  strh w16,[sp, #0x28]
71025bfae8  stur x17,[sp, #0x2a]
71025bfaec  stur x19,[sp, #0x32]
71025bfaf0  cbz w26,0x71025bfb70
71025bfaf4  mov x10,x13
71025bfaf8  mov w26,w6
71025bfafc  mov w25,w9
71025bfb00  strb wzr,[sp, #0x3a]
71025bfb04  str w23,[sp, #0x14]
71025bfb08  mul w25,w25,w7
71025bfb0c  and w26,w26,#0xff
71025bfb10  eor w25,w25,w26
71025bfb14  ldrb w26,[x10], #0x1
71025bfb18  cbnz w26,0x71025bfb08
71025bfb1c  str w25,[sp, #0x10]
71025bfb20  mov w10,#0x4
71025bfb24  b 0x71025bfba8
71025bfb28  cbz w26,0x71025bfbb0
71025bfb2c  mov x10,x13
71025bfb30  mov w26,w6
71025bfb34  mov w25,w9
71025bfb38  stp x14,x15,[sp, #0x18]
71025bfb3c  strh w16,[sp, #0x28]
71025bfb40  stur x17,[sp, #0x2a]
71025bfb44  stur w18,[sp, #0x32]
71025bfb48  strh w1,[sp, #0x36]
71025bfb4c  str x3,[sp, #0x38]
71025bfb50  strh w4,[sp, #0x40]
71025bfb54  str w5,[sp, #0x14]
71025bfb58  mul w25,w25,w7
71025bfb5c  and w26,w26,#0xff
71025bfb60  eor w25,w25,w26
71025bfb64  ldrb w26,[x10], #0x1
71025bfb68  cbnz w26,0x71025bfb58
71025bfb6c  b 0x71025bfba0
71025bfb70  mov x10,x13
71025bfb74  mov w26,w6
71025bfb78  mov w25,w9
71025bfb7c  stur w20,[sp, #0x3a]
71025bfb80  strh w21,[sp, #0x3e]
71025bfb84  strb wzr,[sp, #0x40]
71025bfb88  str w22,[sp, #0x14]
71025bfb8c  mul w25,w25,w7
71025bfb90  and w26,w26,#0xff
71025bfb94  eor w25,w25,w26
71025bfb98  ldrb w26,[x10], #0x1
71025bfb9c  cbnz w26,0x71025bfb8c
71025bfba0  orr w10,wzr,#0x3
71025bfba4  str w25,[sp, #0x10]
71025bfba8  mov w25,w6
71025bfbac  str w10,[sp, #0xa0]
71025bfbb0  add w24,w24,#0x1
71025bfbb4  cmp w24,w12
71025bfbb8  b.cc 0x71025bfab0
71025bfbbc  add x12,sp,#0x10
71025bfbc0  cmp x12,x0
71025bfbc4  b.eq 0x71025c185c
71025bfbc8  mov x8,xzr
71025bfbcc  add x11,x0,#0x9
71025bfbd0  add x12,x12,#0x9
71025bfbd4  tst w25,#0xff
71025bfbd8  b.eq 0x71025c1794
71025bfbdc  add w13,w8,#0x1
71025bfbe0  add x14,x11,x8
71025bfbe4  cmp w13,#0x3f
71025bfbe8  sturb w25,[x14, #-0x1]
71025bfbec  b.cs 0x71025c08ec
71025bfbf0  ldrb w13,[x12, x8, LSL ]
71025bfbf4  cbz w13,0x71025c1790
71025bfbf8  add x14,x12,x8
71025bfbfc  strb w13,[x11, x8, LSL ]
71025bfc00  ldrb w25,[x14, #0x1]
71025bfc04  add x8,x8,#0x2
71025bfc08  tst w25,#0xff
71025bfc0c  b.ne 0x71025bfbdc
71025bfc10  b 0x71025c1794
71025bfc14  mov w9,#0x8
71025bfc18  str w9,[sp, #0xa0]
71025bfc1c  mov x9,#0x616e
71025bfc20  movk x9,#0x5f6d, LSL #16
71025bfc24  movk x9,#0x7073, LSL #32
71025bfc28  movk x9,#0x7269, LSL #48
71025bfc2c  str x9,[sp, #0x18]
71025bfc30  mov w9,#0x7469
71025bfc34  movk w9,#0x5f73, LSL #16
71025bfc38  orr x8,xzr,#0x1f00000000
71025bfc3c  mov x10,#0x746e
71025bfc40  movk x10,#0x725f, LSL #16
71025bfc44  str w9,[sp, #0x20]
71025bfc48  mov w9,#0x6968
71025bfc4c  str x8,[sp, #0x10]
71025bfc50  mov x13,#0x6c61
71025bfc54  movk x13,#0x735f, LSL #16
71025bfc58  strh w9,[sp, #0x24]
71025bfc5c  mov w8,#0x9dc5
71025bfc60  movk w8,#0x811c, LSL #16
71025bfc64  strb wzr,[sp, #0x60]
71025bfc68  movk x10,#0x6c75, LSL #32
71025bfc6c  movk x10,#0x5f65, LSL #48
71025bfc70  stur x10,[sp, #0x26]
71025bfc74  mov w9,#0x6568
71025bfc78  movk x13,#0x6165, LSL #32
71025bfc7c  movk x13,#0x6c, LSL #48
71025bfc80  mov w11,#0x6e
71025bfc84  strh w9,[sp, #0x2e]
71025bfc88  str x13,[sp, #0x30]
71025bfc8c  mov w10,#0x9
71025bfc90  mov w9,#0x89
71025bfc94  str xzr,[sp, #0x58]
71025bfc98  add x12,sp,#0x10
71025bfc9c  mov w13,w8
71025bfca0  mul w13,w13,w9
71025bfca4  and w11,w11,#0xff
71025bfca8  eor w13,w13,w11
71025bfcac  ldrb w11,[x12, x10, LSL ]
71025bfcb0  add x10,x10,#0x1
71025bfcb4  cbnz w11,0x71025bfca0
71025bfcb8  str w13,[sp, #0x10]
71025bfcbc  add x13,sp,#0x10
71025bfcc0  mov w10,#0x2
71025bfcc4  cmp x13,x0
71025bfcc8  str w10,[sp, #0xa0]
71025bfccc  b.eq 0x71025c185c
71025bfcd0  mov x11,xzr
71025bfcd4  add x12,x0,#0x9
71025bfcd8  add x13,x13,#0x9
71025bfcdc  mov w14,#0x6e
71025bfce0  tst w14,#0xff
71025bfce4  b.eq 0x71025c0ea0
71025bfce8  add w15,w11,#0x1
71025bfcec  add x16,x12,x11
71025bfcf0  cmp w15,#0x3f
71025bfcf4  sturb w14,[x16, #-0x1]
71025bfcf8  b.cs 0x71025c0788
71025bfcfc  ldrb w14,[x13, x11, LSL ]
71025bfd00  cbz w14,0x71025c0e9c
71025bfd04  add x15,x13,x11
71025bfd08  strb w14,[x12, x11, LSL ]
71025bfd0c  ldrb w14,[x15, #0x1]
71025bfd10  add x11,x11,#0x2
71025bfd14  tst w14,#0xff
71025bfd18  b.ne 0x71025bfce8
71025bfd1c  b 0x71025c0ea0
71025bfd20  mov w8,#0x8
71025bfd24  str w8,[sp, #0xa0]
71025bfd28  adrp x8,0x7105329000
71025bfd2c  ldr x8,[x8, #0xfa0]
71025bfd30  strb wzr,[sp, #0x18]
71025bfd34  str xzr,[sp, #0x10]
71025bfd38  strb wzr,[sp, #0x60]
71025bfd3c  str xzr,[sp, #0x58]
71025bfd40  ldr x8,[x8]
71025bfd44  ldr x9,[x8, #0x3f0]
71025bfd48  ldr x10,[x8, #0x3e8]
71025bfd4c  sub x9,x9,x10
71025bfd50  asr x11,x9,#0x4
71025bfd54  cbz w11,0x71025bfda8
71025bfd58  mov w12,wzr
71025bfd5c  add x8,x8,#0x3e8
71025bfd60  adrp x9,0x710427e000
71025bfd64  add x9,x9,#0x866
71025bfd68  mov w12,w12
71025bfd6c  cmp x11,x12
71025bfd70  b.ls 0x71025c1ba0
71025bfd74  lsl x13,x12,#0x4
71025bfd78  ldr x13,[x10, x13, LSL #0x0]
71025bfd7c  eor x13,x13,x2
71025bfd80  tst x13,#0xffffffffff
71025bfd84  b.ne 0x71025bfd9c
71025bfd88  add x13,x10,x12, LSL #0x4
71025bfd8c  ldrb w14,[x13, #0x8]
71025bfd90  ldrb w13,[x13, #0x9]
71025bfd94  cbnz w14,0x71025c1b04
71025bfd98  cbnz w13,0x71025c1b1c
71025bfd9c  add w12,w12,#0x1
71025bfda0  cmp w12,w11
71025bfda4  b.cc 0x71025bfd68
71025bfda8  mov w10,wzr
71025bfdac  add x11,sp,#0x10
71025bfdb0  add x9,x11,#0x8
71025bfdb4  mov w8,#0x9dc5
71025bfdb8  movk w8,#0x811c, LSL #16
71025bfdbc  mov w12,w8
71025bfdc0  strb wzr,[x9, w10, UXTW ]
71025bfdc4  str w10,[sp, #0x14]
71025bfdc8  ldrb w10,[sp, #0x18]
71025bfdcc  cbz w10,0x71025bfdf4
71025bfdd0  add x9,x11,#0x9
71025bfdd4  mov w13,#0x89
71025bfdd8  mov w14,w10
71025bfddc  mov w12,w8
71025bfde0  mul w12,w12,w13
71025bfde4  and w14,w14,#0xff
71025bfde8  eor w12,w12,w14
71025bfdec  ldrb w14,[x9], #0x1
71025bfdf0  cbnz w14,0x71025bfde0
71025bfdf4  mov w9,#0x4
71025bfdf8  cmp x11,x0
71025bfdfc  str w12,[sp, #0x10]
71025bfe00  str w9,[sp, #0xa0]
71025bfe04  b.eq 0x71025c16b8
71025bfe08  add x13,sp,#0x10
71025bfe0c  mov x11,xzr
71025bfe10  add x12,x0,#0x9
71025bfe14  add x13,x13,#0x9
71025bfe18  tst w10,#0xff
71025bfe1c  b.eq 0x71025c14b8
71025bfe20  add w14,w11,#0x1
71025bfe24  add x15,x12,x11
71025bfe28  cmp w14,#0x3f
71025bfe2c  sturb w10,[x15, #-0x1]
71025bfe30  b.cs 0x71025c0800
71025bfe34  ldrb w10,[x13, x11, LSL ]
71025bfe38  cbz w10,0x71025c14b4
71025bfe3c  add x14,x13,x11
71025bfe40  strb w10,[x12, x11, LSL ]
71025bfe44  ldrb w10,[x14, #0x1]
71025bfe48  add x11,x11,#0x2
71025bfe4c  tst w10,#0xff
71025bfe50  b.ne 0x71025bfe20
71025bfe54  b 0x71025c14b8
71025bfe58  adrp x8,0x7105329000
71025bfe5c  ldr x8,[x8, #0xfa0]
71025bfe60  mov w10,#0x8
71025bfe64  strb wzr,[sp, #0x18]
71025bfe68  str xzr,[sp, #0x10]
71025bfe6c  strb wzr,[sp, #0x60]
71025bfe70  str xzr,[sp, #0x58]
71025bfe74  mov w9,#0x9dc5
71025bfe78  movk w9,#0x811c, LSL #16
71025bfe7c  str w10,[sp, #0xa0]
71025bfe80  ldr x8,[x8]
71025bfe84  ldr x12,[x8, #0x660]
71025bfe88  ldr x11,[x8, #0x658]
71025bfe8c  sub x12,x12,x11
71025bfe90  mov w23,wzr
71025bfe94  asr x12,x12,#0x4
71025bfe98  cbz w12,0x71025c0020
71025bfe9c  add x10,sp,#0x10
71025bfea0  mov x14,#0x616e
71025bfea4  movk x14,#0x5f6d, LSL #16
71025bfea8  mov x15,#0x7469
71025bfeac  movk x15,#0x5f73, LSL #16
71025bfeb0  mov x17,#0x6c75
71025bfeb4  movk x17,#0x5f65, LSL #16
71025bfeb8  mov x18,#0x5f70
71025bfebc  movk x18,#0x6c70, LSL #16
71025bfec0  mov w22,wzr
71025bfec4  add x8,x8,#0x658
71025bfec8  add x13,x10,#0x9
71025bfecc  mov w10,#0x8
71025bfed0  movk x14,#0x7073, LSL #32
71025bfed4  movk x14,#0x7269, LSL #48
71025bfed8  movk x15,#0x6968, LSL #32
71025bfedc  movk x15,#0x746e, LSL #48
71025bfee0  mov w16,#0x725f
71025bfee4  movk x17,#0x6c73, LSL #32
71025bfee8  movk x17,#0x6565, LSL #48
71025bfeec  movk x18,#0x7961, LSL #32
71025bfef0  movk x18,#0x7265, LSL #48
71025bfef4  mov w1,#0x22
71025bfef8  mov w3,#0x6e
71025bfefc  mov w4,#0x89
71025bff00  mov w5,#0x5f70
71025bff04  mov w6,#0x6e65
71025bff08  movk w6,#0x6d65, LSL #16
71025bff0c  mov w7,#0x79
71025bff10  mov w19,#0x21
71025bff14  mov w20,#0x6c61
71025bff18  movk w20,#0x6c, LSL #16
71025bff1c  orr w21,wzr,#0x1f
71025bff20  mov w22,w22
71025bff24  cmp x12,x22
71025bff28  b.ls 0x71025c1ba0
71025bff2c  lsl x24,x22,#0x4
71025bff30  ldr x24,[x11, x24, LSL #0x0]
71025bff34  eor x24,x24,x2
71025bff38  tst x24,#0xffffffffff
71025bff3c  b.ne 0x71025c0014
71025bff40  add x24,x11,x22, LSL #0x4
71025bff44  ldrb w25,[x24, #0x9]
71025bff48  ldrb w24,[x24, #0x8]
71025bff4c  cbz w25,0x71025bff90
71025bff50  stp x14,x15,[sp, #0x18]
71025bff54  strh w16,[sp, #0x28]
71025bff58  stur x17,[sp, #0x2a]
71025bff5c  strh w5,[sp, #0x32]
71025bff60  cbz w24,0x71025bffd8
71025bff64  mov x10,x13
71025bff68  mov w24,w3
71025bff6c  mov w23,w9
71025bff70  str w20,[sp, #0x34]
71025bff74  str w21,[sp, #0x14]
71025bff78  mul w23,w23,w4
71025bff7c  and w24,w24,#0xff
71025bff80  eor w23,w23,w24
71025bff84  ldrb w24,[x10], #0x1
71025bff88  cbnz w24,0x71025bff78
71025bff8c  b 0x71025bffcc
71025bff90  cbz w24,0x71025c0014
71025bff94  mov x10,x13
71025bff98  mov w24,w3
71025bff9c  mov w23,w9
71025bffa0  stp x14,x15,[sp, #0x18]
71025bffa4  strh w16,[sp, #0x28]
71025bffa8  stur x17,[sp, #0x2a]
71025bffac  stur x18,[sp, #0x32]
71025bffb0  strb wzr,[sp, #0x3a]
71025bffb4  str w1,[sp, #0x14]
71025bffb8  mul w23,w23,w4
71025bffbc  and w24,w24,#0xff
71025bffc0  eor w23,w23,w24
71025bffc4  ldrb w24,[x10], #0x1
71025bffc8  cbnz w24,0x71025bffb8
71025bffcc  orr w10,wzr,#0x3
71025bffd0  str w23,[sp, #0x10]
71025bffd4  b 0x71025c000c
71025bffd8  mov x10,x13
71025bffdc  mov w24,w3
71025bffe0  mov w23,w9
71025bffe4  str w6,[sp, #0x34]
71025bffe8  strh w7,[sp, #0x38]
71025bffec  str w19,[sp, #0x14]
71025bfff0  mul w23,w23,w4
71025bfff4  and w24,w24,#0xff
71025bfff8  eor w23,w23,w24
71025bfffc  ldrb w24,[x10], #0x1
71025c0000  cbnz w24,0x71025bfff0
71025c0004  str w23,[sp, #0x10]
71025c0008  mov w10,#0x4
71025c000c  mov w23,w3
71025c0010  str w10,[sp, #0xa0]
71025c0014  add w22,w22,#0x1
71025c0018  cmp w22,w12
71025c001c  b.cc 0x71025bff20
71025c0020  add x12,sp,#0x10
71025c0024  cmp x12,x0
71025c0028  b.eq 0x71025c185c
71025c002c  mov x8,xzr
71025c0030  add x11,x0,#0x9
71025c0034  add x12,x12,#0x9
71025c0038  tst w23,#0xff
71025c003c  b.eq 0x71025c17d4
71025c0040  add w13,w8,#0x1
71025c0044  add x14,x11,x8
71025c0048  cmp w13,#0x3f
71025c004c  sturb w23,[x14, #-0x1]
71025c0050  b.cs 0x71025c08f4
71025c0054  ldrb w13,[x12, x8, LSL ]
71025c0058  cbz w13,0x71025c17d0
71025c005c  add x14,x12,x8
71025c0060  strb w13,[x11, x8, LSL ]
71025c0064  ldrb w23,[x14, #0x1]
71025c0068  add x8,x8,#0x2
71025c006c  tst w23,#0xff
71025c0070  b.ne 0x71025c0040
71025c0074  b 0x71025c17d4
71025c0078  mov w9,#0x8
71025c007c  str w9,[sp, #0xa0]
71025c0080  mov x9,#0x616e
71025c0084  movk x9,#0x5f6d, LSL #16
71025c0088  movk x9,#0x7073, LSL #32
71025c008c  movk x9,#0x7269, LSL #48
71025c0090  str x9,[sp, #0x18]
71025c0094  mov w9,#0x7469
71025c0098  movk w9,#0x5f73, LSL #16
71025c009c  str w9,[sp, #0x20]
71025c00a0  mov w9,#0x6968
71025c00a4  strh w9,[sp, #0x24]
71025c00a8  mov x9,#0x746e
71025c00ac  movk x9,#0x725f, LSL #16
71025c00b0  movk x9,#0x6c75, LSL #32
71025c00b4  movk x9,#0x5f65, LSL #48
71025c00b8  mov x8,#0x2100000000
71025c00bc  str x8,[sp, #0x10]
71025c00c0  mov w8,#0x9dc5
71025c00c4  movk w8,#0x811c, LSL #16
71025c00c8  strb wzr,[sp, #0x60]
71025c00cc  stur x9,[sp, #0x26]
71025c00d0  mov x9,#0x6572
71025c00d4  movk x9,#0x6e65, LSL #16
71025c00d8  mov w10,#0x6373
71025c00dc  movk x9,#0x665f, LSL #32
71025c00e0  movk x9,#0x696c, LSL #48
71025c00e4  orr w13,wzr,#0x70
71025c00e8  strh w10,[sp, #0x2e]
71025c00ec  str x9,[sp, #0x30]
71025c00f0  mov w11,#0x6e
71025c00f4  mov w10,#0x9
71025c00f8  strh w13,[sp, #0x38]
71025c00fc  mov w9,#0x89
71025c0100  add x12,sp,#0x10
71025c0104  str xzr,[sp, #0x58]
71025c0108  mov w13,w8
71025c010c  mul w13,w13,w9
71025c0110  and w11,w11,#0xff
71025c0114  eor w13,w13,w11
71025c0118  ldrb w11,[x12, x10, LSL ]
71025c011c  add x10,x10,#0x1
71025c0120  cbnz w11,0x71025c010c
71025c0124  str w13,[sp, #0x10]
71025c0128  add x13,sp,#0x10
71025c012c  mov w10,#0x2
71025c0130  cmp x13,x0
71025c0134  str w10,[sp, #0xa0]
71025c0138  b.eq 0x71025c185c
71025c013c  mov x11,xzr
71025c0140  add x12,x0,#0x9
71025c0144  add x13,x13,#0x9
71025c0148  mov w14,#0x6e
71025c014c  tst w14,#0xff
71025c0150  b.eq 0x71025c1578
71025c0154  add w15,w11,#0x1
71025c0158  add x16,x12,x11
71025c015c  cmp w15,#0x3f
71025c0160  sturb w14,[x16, #-0x1]
71025c0164  b.cs 0x71025c0808
71025c0168  ldrb w14,[x13, x11, LSL ]
71025c016c  cbz w14,0x71025c1574
71025c0170  add x15,x13,x11
71025c0174  strb w14,[x12, x11, LSL ]
71025c0178  ldrb w14,[x15, #0x1]
71025c017c  add x11,x11,#0x2
71025c0180  tst w14,#0xff
71025c0184  b.ne 0x71025c0154
71025c0188  b 0x71025c1578
71025c018c  mov w9,#0x8
71025c0190  str w9,[sp, #0xa0]
71025c0194  mov x9,#0x616e
71025c0198  movk x9,#0x5f6d, LSL #16
71025c019c  movk x9,#0x7073, LSL #32
71025c01a0  movk x9,#0x7269, LSL #48
71025c01a4  stp xzr,x9,[sp, #0x10]
71025c01a8  mov w9,#0x7469
71025c01ac  movk w9,#0x5f73, LSL #16
71025c01b0  str w9,[sp, #0x20]
71025c01b4  mov w9,#0x6968
71025c01b8  strh w9,[sp, #0x24]
71025c01bc  mov x9,#0x746e
71025c01c0  movk x9,#0x725f, LSL #16
71025c01c4  movk x9,#0x6c75, LSL #32
71025c01c8  movk x9,#0x5f65, LSL #48
71025c01cc  stur x9,[sp, #0x26]
71025c01d0  mov w9,#0x6f68
71025c01d4  strh w9,[sp, #0x2e]
71025c01d8  mov x9,#0x6972
71025c01dc  movk x9,#0x6f7a, LSL #16
71025c01e0  movk x9,#0x746e, LSL #32
71025c01e4  movk x9,#0x6c61, LSL #48
71025c01e8  str x9,[sp, #0x30]
71025c01ec  mov x9,#0x635f
71025c01f0  movk x9,#0x6e6f, LSL #16
71025c01f4  movk x9,#0x7274, LSL #32
71025c01f8  movk x9,#0x6c6f, LSL #48
71025c01fc  str x9,[sp, #0x38]
71025c0200  mov x9,#0x656c
71025c0204  movk x9,#0x5f72, LSL #16
71025c0208  mov w8,#0x9dc5
71025c020c  movk w8,#0x811c, LSL #16
71025c0210  orr w13,wzr,#0x30
71025c0214  mov w11,#0x6e
71025c0218  str w13,[sp, #0x14]
71025c021c  strb wzr,[sp, #0x60]
71025c0220  str xzr,[sp, #0x58]
71025c0224  movk x9,#0x6c66, LSL #32
71025c0228  movk x9,#0x7069, LSL #48
71025c022c  str x9,[sp, #0x40]
71025c0230  mov w10,#0x9
71025c0234  mov w9,#0x89
71025c0238  strb wzr,[sp, #0x48]
71025c023c  add x12,sp,#0x10
71025c0240  mov w13,w8
71025c0244  mul w13,w13,w9
71025c0248  and w11,w11,#0xff
71025c024c  eor w13,w13,w11
71025c0250  ldrb w11,[x12, x10, LSL ]
71025c0254  add x10,x10,#0x1
71025c0258  cbnz w11,0x71025c0244
71025c025c  add x12,sp,#0x10
71025c0260  mov w10,#0x2
71025c0264  cmp x12,x0
71025c0268  str w13,[sp, #0x10]
71025c026c  str w10,[sp, #0xa0]
71025c0270  b.eq 0x71025c185c
71025c0274  mov x11,xzr
71025c0278  add x12,x12,#0x8
71025c027c  b 0x71025c0288
71025c0280  add x11,x11,#0x2
71025c0284  strb w13,[x14, #0x9]
71025c0288  add x13,x12,x11
71025c028c  ldrb w15,[x13]
71025c0290  cbz w15,0x71025c0814
71025c0294  add w16,w11,#0x1
71025c0298  add x14,x0,x11
71025c029c  cmp w16,#0x3f
71025c02a0  strb w15,[x14, #0x8]
71025c02a4  b.cs 0x71025c0810
71025c02a8  ldrb w13,[x13, #0x1]
71025c02ac  cbnz w13,0x71025c0280
71025c02b0  add x11,x11,#0x1
71025c02b4  b 0x71025c0814
71025c02b8  adrp x8,0x7105329000
71025c02bc  ldr x8,[x8, #0xfa0]
71025c02c0  mov w10,#0x8
71025c02c4  strb wzr,[sp, #0x18]
71025c02c8  str xzr,[sp, #0x10]
71025c02cc  strb wzr,[sp, #0x60]
71025c02d0  str xzr,[sp, #0x58]
71025c02d4  mov w9,#0x9dc5
71025c02d8  movk w9,#0x811c, LSL #16
71025c02dc  str w10,[sp, #0xa0]
71025c02e0  ldr x8,[x8]
71025c02e4  ldr x12,[x8, #0x390]
71025c02e8  ldr x11,[x8, #0x388]
71025c02ec  sub x12,x12,x11
71025c02f0  mov w25,wzr
71025c02f4  asr x12,x12,#0x4
71025c02f8  cbz w12,0x71025c0490
71025c02fc  add x10,sp,#0x10
71025c0300  mov x14,#0x616e
71025c0304  movk x14,#0x5f6d, LSL #16
71025c0308  mov x15,#0x7469
71025c030c  movk x15,#0x5f73, LSL #16
71025c0310  mov x17,#0x6c75
71025c0314  movk x17,#0x5f65, LSL #16
71025c0318  mov w24,wzr
71025c031c  add x8,x8,#0x388
71025c0320  add x13,x10,#0x9
71025c0324  mov w10,#0x8
71025c0328  movk x14,#0x7073, LSL #32
71025c032c  movk x14,#0x7269, LSL #48
71025c0330  movk x15,#0x6968, LSL #32
71025c0334  movk x15,#0x746e, LSL #48
71025c0338  mov w16,#0x725f
71025c033c  movk x17,#0x6f6e, LSL #32
71025c0340  movk x17,#0x685f, LSL #48
71025c0344  mov w18,#0x6c6f
71025c0348  movk w18,#0x5f64, LSL #16
71025c034c  mov w1,#0x6c70
71025c0350  mov w3,#0x7961
71025c0354  movk w3,#0x7265, LSL #16
71025c0358  mov w4,#0x24
71025c035c  mov w5,#0x6e
71025c0360  mov w6,#0x89
71025c0364  mov w7,#0x6c6f
71025c0368  mov w19,#0x64
71025c036c  mov w20,#0x655f
71025c0370  movk w20,#0x656e, LSL #16
71025c0374  mov w21,#0x796d
71025c0378  mov w22,#0x23
71025c037c  mov w23,#0x1d
71025c0380  mov w24,w24
71025c0384  cmp x12,x24
71025c0388  b.ls 0x71025c1ba0
71025c038c  lsl x26,x24,#0x4
71025c0390  ldr x26,[x11, x26, LSL #0x0]
71025c0394  eor x26,x26,x2
71025c0398  tst x26,#0xffffffffff
71025c039c  b.ne 0x71025c0484
71025c03a0  add x26,x11,x24, LSL #0x4
71025c03a4  ldrb w27,[x26, #0x9]
71025c03a8  ldrb w26,[x26, #0x8]
71025c03ac  cbz w27,0x71025c03f4
71025c03b0  stp x14,x15,[sp, #0x18]
71025c03b4  strh w16,[sp, #0x28]
71025c03b8  stur x17,[sp, #0x2a]
71025c03bc  strh w7,[sp, #0x32]
71025c03c0  strb w19,[sp, #0x34]
71025c03c4  cbz w26,0x71025c0444
71025c03c8  mov x10,x13
71025c03cc  mov w26,w5
71025c03d0  mov w25,w9
71025c03d4  strb wzr,[sp, #0x35]
71025c03d8  str w23,[sp, #0x14]
71025c03dc  mul w25,w25,w6
71025c03e0  and w26,w26,#0xff
71025c03e4  eor w25,w25,w26
71025c03e8  ldrb w26,[x10], #0x1
71025c03ec  cbnz w26,0x71025c03dc
71025c03f0  b 0x71025c0438
71025c03f4  cbz w26,0x71025c0484
71025c03f8  mov x10,x13
71025c03fc  mov w26,w5
71025c0400  mov w25,w9
71025c0404  stp x14,x15,[sp, #0x18]
71025c0408  strh w16,[sp, #0x28]
71025c040c  stur x17,[sp, #0x2a]
71025c0410  stur w18,[sp, #0x32]
71025c0414  strh w1,[sp, #0x36]
71025c0418  str w3,[sp, #0x38]
71025c041c  strb wzr,[sp, #0x3c]
71025c0420  str w4,[sp, #0x14]
71025c0424  mul w25,w25,w6
71025c0428  and w26,w26,#0xff
71025c042c  eor w25,w25,w26
71025c0430  ldrb w26,[x10], #0x1
71025c0434  cbnz w26,0x71025c0424
71025c0438  mov w10,#0x2
71025c043c  str w25,[sp, #0x10]
71025c0440  b 0x71025c047c
71025c0444  mov x10,x13
71025c0448  mov w26,w5
71025c044c  mov w25,w9
71025c0450  stur w20,[sp, #0x35]
71025c0454  sturh w21,[sp, #0x39]
71025c0458  strb wzr,[sp, #0x3b]
71025c045c  str w22,[sp, #0x14]
71025c0460  mul w25,w25,w6
71025c0464  and w26,w26,#0xff
71025c0468  eor w25,w25,w26
71025c046c  ldrb w26,[x10], #0x1
71025c0470  cbnz w26,0x71025c0460
71025c0474  str w25,[sp, #0x10]
71025c0478  orr w10,wzr,#0x3
71025c047c  mov w25,w5
71025c0480  str w10,[sp, #0xa0]
71025c0484  add w24,w24,#0x1
71025c0488  cmp w24,w12
71025c048c  b.cc 0x71025c0380
71025c0490  add x12,sp,#0x10
71025c0494  cmp x12,x0
71025c0498  b.eq 0x71025c185c
71025c049c  mov x8,xzr
71025c04a0  add x11,x0,#0x9
71025c04a4  add x12,x12,#0x9
71025c04a8  tst w25,#0xff
71025c04ac  b.eq 0x71025c1814
71025c04b0  add w13,w8,#0x1
71025c04b4  add x14,x11,x8
71025c04b8  cmp w13,#0x3f
71025c04bc  sturb w25,[x14, #-0x1]
71025c04c0  b.cs 0x71025c090c
71025c04c4  ldrb w13,[x12, x8, LSL ]
71025c04c8  cbz w13,0x71025c1810
71025c04cc  add x14,x12,x8
71025c04d0  strb w13,[x11, x8, LSL ]
71025c04d4  ldrb w25,[x14, #0x1]
71025c04d8  add x8,x8,#0x2
71025c04dc  tst w25,#0xff
71025c04e0  b.ne 0x71025c04b0
71025c04e4  b 0x71025c1814
71025c04e8  mov w9,#0x8
71025c04ec  str w9,[sp, #0xa0]
71025c04f0  mov x9,#0x616e
71025c04f4  movk x9,#0x5f6d, LSL #16
71025c04f8  movk x9,#0x7073, LSL #32
71025c04fc  movk x9,#0x7269, LSL #48
71025c0500  str x9,[sp, #0x18]
71025c0504  mov w9,#0x7469
71025c0508  movk w9,#0x5f73, LSL #16
71025c050c  str w9,[sp, #0x20]
71025c0510  mov w9,#0x6968
71025c0514  strh w9,[sp, #0x24]
71025c0518  mov x9,#0x746e
71025c051c  movk x9,#0x725f, LSL #16
71025c0520  movk x9,#0x6c75, LSL #32
71025c0524  movk x9,#0x5f65, LSL #48
71025c0528  mov x8,#0x2100000000
71025c052c  str x8,[sp, #0x10]
71025c0530  mov w8,#0x9dc5
71025c0534  movk w8,#0x811c, LSL #16
71025c0538  strb wzr,[sp, #0x60]
71025c053c  stur x9,[sp, #0x26]
71025c0540  mov x9,#0x6365
71025c0544  movk x9,#0x7274, LSL #16
71025c0548  mov w10,#0x6c65
71025c054c  movk x9,#0x6369, LSL #32
71025c0550  movk x9,#0x755f, LSL #48
71025c0554  orr w13,wzr,#0x70
71025c0558  strh w10,[sp, #0x2e]
71025c055c  str x9,[sp, #0x30]
71025c0560  mov w11,#0x6e
71025c0564  mov w10,#0x9
71025c0568  strh w13,[sp, #0x38]
71025c056c  mov w9,#0x89
71025c0570  add x12,sp,#0x10
71025c0574  str xzr,[sp, #0x58]
71025c0578  mov w13,w8
71025c057c  mul w13,w13,w9
71025c0580  and w11,w11,#0xff
71025c0584  eor w13,w13,w11
71025c0588  ldrb w11,[x12, x10, LSL ]
71025c058c  add x10,x10,#0x1
71025c0590  cbnz w11,0x71025c057c
71025c0594  str w13,[sp, #0x10]
71025c0598  add x13,sp,#0x10
71025c059c  mov w10,#0x4
71025c05a0  cmp x13,x0
71025c05a4  str w10,[sp, #0xa0]
71025c05a8  b.eq 0x71025c185c
71025c05ac  mov x11,xzr
71025c05b0  add x12,x0,#0x9
71025c05b4  add x13,x13,#0x9
71025c05b8  mov w14,#0x6e
71025c05bc  tst w14,#0xff
71025c05c0  b.eq 0x71025c15b4
71025c05c4  add w15,w11,#0x1
71025c05c8  add x16,x12,x11
71025c05cc  cmp w15,#0x3f
71025c05d0  sturb w14,[x16, #-0x1]
71025c05d4  b.cs 0x71025c0894
71025c05d8  ldrb w14,[x13, x11, LSL ]
71025c05dc  cbz w14,0x71025c15b0
71025c05e0  add x15,x13,x11
71025c05e4  strb w14,[x12, x11, LSL ]
71025c05e8  ldrb w14,[x15, #0x1]
71025c05ec  add x11,x11,#0x2
71025c05f0  tst w14,#0xff
71025c05f4  b.ne 0x71025c05c4
71025c05f8  b 0x71025c15b4
71025c05fc  mov w9,wzr
71025c0600  add x11,sp,#0x10
71025c0604  add x10,x11,#0x8
71025c0608  mov w8,#0x9dc5
71025c060c  movk w8,#0x811c, LSL #16
71025c0610  mov w12,w8
71025c0614  strb wzr,[x10, w9, UXTW ]
71025c0618  ldrb w10,[sp, #0x18]
71025c061c  str w9,[sp, #0x14]
71025c0620  cbz w10,0x71025c0648
71025c0624  add x9,x11,#0x9
71025c0628  mov w13,#0x89
71025c062c  mov w14,w10
71025c0630  mov w12,w8
71025c0634  mul w12,w12,w13
71025c0638  and w14,w14,#0xff
71025c063c  eor w12,w12,w14
71025c0640  ldrb w14,[x9], #0x1
71025c0644  cbnz w14,0x71025c0634
71025c0648  mov w9,#0x5
71025c064c  cmp x11,x0
71025c0650  str w12,[sp, #0x10]
71025c0654  str w9,[sp, #0xa0]
71025c0658  b.eq 0x71025c16b8
71025c065c  add x13,sp,#0x10
71025c0660  mov x11,xzr
71025c0664  add x12,x0,#0x9
71025c0668  add x13,x13,#0x9
71025c066c  tst w10,#0xff
71025c0670  b.eq 0x71025c15fc
71025c0674  add w14,w11,#0x1
71025c0678  add x15,x12,x11
71025c067c  cmp w14,#0x3f
71025c0680  sturb w10,[x15, #-0x1]
71025c0684  b.cs 0x71025c08fc
71025c0688  ldrb w10,[x13, x11, LSL ]
71025c068c  cbz w10,0x71025c15f8
71025c0690  add x14,x13,x11
71025c0694  strb w10,[x12, x11, LSL ]
71025c0698  ldrb w10,[x14, #0x1]
71025c069c  add x11,x11,#0x2
71025c06a0  tst w10,#0xff
71025c06a4  b.ne 0x71025c0674
71025c06a8  b 0x71025c15fc
71025c06ac  mov w6,wzr
71025c06b0  add x11,sp,#0x10
71025c06b4  cmp x11,x0
71025c06b8  b.eq 0x71025c1708
71025c06bc  mov x9,xzr
71025c06c0  add x10,x0,#0x9
71025c06c4  add x11,x11,#0x9
71025c06c8  tst w6,#0xff
71025c06cc  b.eq 0x71025c16c4
71025c06d0  add w12,w9,#0x1
71025c06d4  add x13,x10,x9
71025c06d8  cmp w12,#0x3f
71025c06dc  sturb w6,[x13, #-0x1]
71025c06e0  b.cs 0x71025c0904
71025c06e4  ldrb w12,[x11, x9, LSL ]
71025c06e8  cbz w12,0x71025c16c0
71025c06ec  add x13,x11,x9
71025c06f0  strb w12,[x10, x9, LSL ]
71025c06f4  ldrb w6,[x13, #0x1]
71025c06f8  add x9,x9,#0x2
71025c06fc  tst w6,#0xff
71025c0700  b.ne 0x71025c06d0
71025c0704  b 0x71025c16c4
71025c0708  add w11,w11,#0x1
71025c070c  b 0x71025c0918
71025c0710  add w11,w11,#0x1
71025c0714  b 0x71025c0954
71025c0718  add w11,w11,#0x1
71025c071c  b 0x71025c0990
71025c0720  add w11,w11,#0x1
71025c0724  b 0x71025c09cc
71025c0728  add w11,w11,#0x1
71025c072c  b 0x71025c0a08
71025c0730  add w11,w11,#0x1
71025c0734  b 0x71025c0a44
71025c0738  add w11,w11,#0x1
71025c073c  b 0x71025c0a80
71025c0740  add w11,w11,#0x1
71025c0744  b 0x71025c0b40
71025c0748  add w11,w11,#0x1
71025c074c  b 0x71025c0c00
71025c0750  add w11,w11,#0x1
71025c0754  b 0x71025c0cfc
71025c0758  add w11,w11,#0x1
71025c075c  b 0x71025c0d38
71025c0760  add w11,w11,#0x1
71025c0764  b 0x71025c0d74
71025c0768  add w11,w11,#0x1
71025c076c  b 0x71025c0db0
71025c0770  add w11,w11,#0x1
71025c0774  b 0x71025c0dec
71025c0778  add w11,w11,#0x1
71025c077c  b 0x71025c0e28
71025c0780  add w11,w11,#0x1
71025c0784  b 0x71025c0e64
71025c0788  add w11,w11,#0x1
71025c078c  b 0x71025c0ea0
71025c0790  add w10,w10,#0x1
71025c0794  b 0x71025c0edc
71025c0798  add w8,w8,#0x1
71025c079c  b 0x71025c0f2c
71025c07a0  add w8,w8,#0x1
71025c07a4  b 0x71025c0f6c
71025c07a8  add w8,w8,#0x1
71025c07ac  b 0x71025c0fbc
71025c07b0  add w8,w8,#0x1
71025c07b4  b 0x71025c100c
71025c07b8  add w8,w8,#0x1
71025c07bc  b 0x71025c105c
71025c07c0  add w8,w8,#0x1
71025c07c4  b 0x71025c10a8
71025c07c8  add w11,w11,#0x1
71025c07cc  b 0x71025c0c3c
71025c07d0  add w8,w8,#0x1
71025c07d4  b 0x71025c10e8
71025c07d8  add w8,w8,#0x1
71025c07dc  b 0x71025c1128
71025c07e0  add w11,w11,#0x1
71025c07e4  b 0x71025c11b8
71025c07e8  add w11,w11,#0x1
71025c07ec  b 0x71025c1278
71025c07f0  add w11,w11,#0x1
71025c07f4  b 0x71025c1338
71025c07f8  add w11,w11,#0x1
71025c07fc  b 0x71025c13f8
71025c0800  add w11,w11,#0x1
71025c0804  b 0x71025c14b8
71025c0808  add w11,w11,#0x1
71025c080c  b 0x71025c1578
71025c0810  add w11,w11,#0x1
71025c0814  add x12,x0,#0x8
71025c0818  strb wzr,[x12, w11, UXTW ]
71025c081c  str w11,[x0, #0x4]
71025c0820  ldrb w11,[x0, #0x8]
71025c0824  mov w13,w8
71025c0828  cbz w11,0x71025c0848
71025c082c  add x12,x0,#0x9
71025c0830  mov w13,w8
71025c0834  mul w13,w13,w9
71025c0838  and w11,w11,#0xff
71025c083c  eor w13,w13,w11
71025c0840  ldrb w11,[x12], #0x1
71025c0844  cbnz w11,0x71025c0834
71025c0848  add x12,sp,#0x10
71025c084c  mov x11,xzr
71025c0850  str w13,[x0]
71025c0854  add x12,x12,#0x50
71025c0858  b 0x71025c0864
71025c085c  add x11,x11,#0x2
71025c0860  strb w13,[x14, #0x51]
71025c0864  add x13,x12,x11
71025c0868  ldrb w15,[x13]
71025c086c  cbz w15,0x71025c08a0
71025c0870  add w16,w11,#0x1
71025c0874  add x14,x0,x11
71025c0878  cmp w16,#0x3f
71025c087c  strb w15,[x14, #0x50]
71025c0880  b.cs 0x71025c089c
71025c0884  ldrb w13,[x13, #0x1]
71025c0888  cbnz w13,0x71025c085c
71025c088c  add x11,x11,#0x1
71025c0890  b 0x71025c08a0
71025c0894  add w11,w11,#0x1
71025c0898  b 0x71025c15b4
71025c089c  add w11,w11,#0x1
71025c08a0  add x12,x0,#0x50
71025c08a4  strb wzr,[x12, w11, UXTW ]
71025c08a8  ldrb w12,[x0, #0x50]
71025c08ac  str w11,[x0, #0x4c]
71025c08b0  cbz w12,0x71025c08cc
71025c08b4  add x11,x0,#0x51
71025c08b8  mul w8,w8,w9
71025c08bc  and w12,w12,#0xff
71025c08c0  eor w8,w8,w12
71025c08c4  ldrb w12,[x11], #0x1
71025c08c8  cbnz w12,0x71025c08b8
71025c08cc  str w8,[x0, #0x48]
71025c08d0  b 0x71025c185c
71025c08d4  add w8,w8,#0x1
71025c08d8  b 0x71025c1178
71025c08dc  add w8,w8,#0x1
71025c08e0  b 0x71025c1714
71025c08e4  add w8,w8,#0x1
71025c08e8  b 0x71025c1754
71025c08ec  add w8,w8,#0x1
71025c08f0  b 0x71025c1794
71025c08f4  add w8,w8,#0x1
71025c08f8  b 0x71025c17d4
71025c08fc  add w11,w11,#0x1
71025c0900  b 0x71025c15fc
71025c0904  add w9,w9,#0x1
71025c0908  b 0x71025c16c4
71025c090c  add w8,w8,#0x1
71025c0910  b 0x71025c1814
71025c0914  add x11,x11,#0x1
71025c0918  add x12,x0,#0x8
71025c091c  strb wzr,[x12, w11, UXTW ]
71025c0920  str w11,[x0, #0x4]
71025c0924  ldrb w11,[x0, #0x8]
71025c0928  mov w13,w8
71025c092c  cbz w11,0x71025c15e8
71025c0930  add x12,x0,#0x9
71025c0934  mov w13,w8
71025c0938  mul w13,w13,w9
71025c093c  and w11,w11,#0xff
71025c0940  eor w13,w13,w11
71025c0944  ldrb w11,[x12], #0x1
71025c0948  cbnz w11,0x71025c0938
71025c094c  b 0x71025c15e8
71025c0950  add x11,x11,#0x1
71025c0954  add x12,x0,#0x8
71025c0958  strb wzr,[x12, w11, UXTW ]
71025c095c  str w11,[x0, #0x4]
71025c0960  ldrb w11,[x0, #0x8]
71025c0964  mov w13,w8
71025c0968  cbz w11,0x71025c15e8
71025c096c  add x12,x0,#0x9
71025c0970  mov w13,w8
71025c0974  mul w13,w13,w9
71025c0978  and w11,w11,#0xff
71025c097c  eor w13,w13,w11
71025c0980  ldrb w11,[x12], #0x1
71025c0984  cbnz w11,0x71025c0974
71025c0988  b 0x71025c15e8
71025c098c  add x11,x11,#0x1
71025c0990  add x12,x0,#0x8
71025c0994  strb wzr,[x12, w11, UXTW ]
71025c0998  str w11,[x0, #0x4]
71025c099c  ldrb w11,[x0, #0x8]
71025c09a0  mov w13,w8
71025c09a4  cbz w11,0x71025c15e8
71025c09a8  add x12,x0,#0x9
71025c09ac  mov w13,w8
71025c09b0  mul w13,w13,w9
71025c09b4  and w11,w11,#0xff
71025c09b8  eor w13,w13,w11
71025c09bc  ldrb w11,[x12], #0x1
71025c09c0  cbnz w11,0x71025c09b0
71025c09c4  b 0x71025c15e8
71025c09c8  add x11,x11,#0x1
71025c09cc  add x12,x0,#0x8
71025c09d0  strb wzr,[x12, w11, UXTW ]
71025c09d4  str w11,[x0, #0x4]
71025c09d8  ldrb w11,[x0, #0x8]
71025c09dc  mov w13,w8
71025c09e0  cbz w11,0x71025c15e8
71025c09e4  add x12,x0,#0x9
71025c09e8  mov w13,w8
71025c09ec  mul w13,w13,w9
71025c09f0  and w11,w11,#0xff
71025c09f4  eor w13,w13,w11
71025c09f8  ldrb w11,[x12], #0x1
71025c09fc  cbnz w11,0x71025c09ec
71025c0a00  b 0x71025c15e8
71025c0a04  add x11,x11,#0x1
71025c0a08  add x12,x0,#0x8
71025c0a0c  strb wzr,[x12, w11, UXTW ]
71025c0a10  str w11,[x0, #0x4]
71025c0a14  ldrb w11,[x0, #0x8]
71025c0a18  mov w13,w8
71025c0a1c  cbz w11,0x71025c15e8
71025c0a20  add x12,x0,#0x9
71025c0a24  mov w13,w8
71025c0a28  mul w13,w13,w9
71025c0a2c  and w11,w11,#0xff
71025c0a30  eor w13,w13,w11
71025c0a34  ldrb w11,[x12], #0x1
71025c0a38  cbnz w11,0x71025c0a28
71025c0a3c  b 0x71025c15e8
71025c0a40  add x11,x11,#0x1
71025c0a44  add x12,x0,#0x8
71025c0a48  strb wzr,[x12, w11, UXTW ]
71025c0a4c  str w11,[x0, #0x4]
71025c0a50  ldrb w11,[x0, #0x8]
71025c0a54  mov w13,w8
71025c0a58  cbz w11,0x71025c15e8
71025c0a5c  add x12,x0,#0x9
71025c0a60  mov w13,w8
71025c0a64  mul w13,w13,w9
71025c0a68  and w11,w11,#0xff
71025c0a6c  eor w13,w13,w11
71025c0a70  ldrb w11,[x12], #0x1
71025c0a74  cbnz w11,0x71025c0a64
71025c0a78  b 0x71025c15e8
71025c0a7c  add x11,x11,#0x1
71025c0a80  add x10,x0,#0x8
71025c0a84  strb wzr,[x10, w11, UXTW ]
71025c0a88  ldrb w10,[x0, #0x8]
71025c0a8c  mov w12,w8
71025c0a90  str w11,[x0, #0x4]
71025c0a94  cbz w10,0x71025c0ab8
71025c0a98  add x11,x0,#0x9
71025c0a9c  mov w13,#0x89
71025c0aa0  mov w12,w8
71025c0aa4  mul w12,w12,w13
71025c0aa8  and w10,w10,#0xff
71025c0aac  eor w12,w12,w10
71025c0ab0  ldrb w10,[x11], #0x1
71025c0ab4  cbnz w10,0x71025c0aa4
71025c0ab8  add x11,sp,#0x10
71025c0abc  mov x10,xzr
71025c0ac0  str w12,[x0]
71025c0ac4  add x11,x11,#0x50
71025c0ac8  b 0x71025c0ad4
71025c0acc  add x10,x10,#0x2
71025c0ad0  strb w12,[x13, #0x51]
71025c0ad4  add x12,x11,x10
71025c0ad8  ldrb w14,[x12]
71025c0adc  cbz w14,0x71025c0b08
71025c0ae0  add w15,w10,#0x1
71025c0ae4  add x13,x0,x10
71025c0ae8  cmp w15,#0x3f
71025c0aec  strb w14,[x13, #0x50]
71025c0af0  b.cs 0x71025c0b04
71025c0af4  ldrb w12,[x12, #0x1]
71025c0af8  cbnz w12,0x71025c0acc
71025c0afc  add x10,x10,#0x1
71025c0b00  b 0x71025c0b08
71025c0b04  add w10,w10,#0x1
71025c0b08  add x11,x0,#0x50
71025c0b0c  strb wzr,[x11, w10, UXTW ]
71025c0b10  ldrb w11,[x0, #0x50]
71025c0b14  str w10,[x0, #0x4c]
71025c0b18  cbz w11,0x71025c16b4
71025c0b1c  add x10,x0,#0x51
71025c0b20  mov w12,#0x89
71025c0b24  mul w8,w8,w12
71025c0b28  and w11,w11,#0xff
71025c0b2c  eor w8,w8,w11
71025c0b30  ldrb w11,[x10], #0x1
71025c0b34  cbnz w11,0x71025c0b24
71025c0b38  b 0x71025c16b4
71025c0b3c  add x11,x11,#0x1
71025c0b40  add x10,x0,#0x8
71025c0b44  strb wzr,[x10, w11, UXTW ]
71025c0b48  ldrb w10,[x0, #0x8]
71025c0b4c  mov w12,w8
71025c0b50  str w11,[x0, #0x4]
71025c0b54  cbz w10,0x71025c0b78
71025c0b58  add x11,x0,#0x9
71025c0b5c  mov w13,#0x89
71025c0b60  mov w12,w8
71025c0b64  mul w12,w12,w13
71025c0b68  and w10,w10,#0xff
71025c0b6c  eor w12,w12,w10
71025c0b70  ldrb w10,[x11], #0x1
71025c0b74  cbnz w10,0x71025c0b64
71025c0b78  add x11,sp,#0x10
71025c0b7c  mov x10,xzr
71025c0b80  str w12,[x0]
71025c0b84  add x11,x11,#0x50
71025c0b88  b 0x71025c0b94
71025c0b8c  add x10,x10,#0x2
71025c0b90  strb w12,[x13, #0x51]
71025c0b94  add x12,x11,x10
71025c0b98  ldrb w14,[x12]
71025c0b9c  cbz w14,0x71025c0bc8
71025c0ba0  add w15,w10,#0x1
71025c0ba4  add x13,x0,x10
71025c0ba8  cmp w15,#0x3f
71025c0bac  strb w14,[x13, #0x50]
71025c0bb0  b.cs 0x71025c0bc4
71025c0bb4  ldrb w12,[x12, #0x1]
71025c0bb8  cbnz w12,0x71025c0b8c
71025c0bbc  add x10,x10,#0x1
71025c0bc0  b 0x71025c0bc8
71025c0bc4  add w10,w10,#0x1
71025c0bc8  add x11,x0,#0x50
71025c0bcc  strb wzr,[x11, w10, UXTW ]
71025c0bd0  ldrb w11,[x0, #0x50]
71025c0bd4  str w10,[x0, #0x4c]
71025c0bd8  cbz w11,0x71025c16b4
71025c0bdc  add x10,x0,#0x51
71025c0be0  mov w12,#0x89
71025c0be4  mul w8,w8,w12
71025c0be8  and w11,w11,#0xff
71025c0bec  eor w8,w8,w11
71025c0bf0  ldrb w11,[x10], #0x1
71025c0bf4  cbnz w11,0x71025c0be4
71025c0bf8  b 0x71025c16b4
71025c0bfc  add x11,x11,#0x1
71025c0c00  add x12,x0,#0x8
71025c0c04  strb wzr,[x12, w11, UXTW ]
71025c0c08  str w11,[x0, #0x4]
71025c0c0c  ldrb w11,[x0, #0x8]
71025c0c10  mov w13,w8
71025c0c14  cbz w11,0x71025c15e8
71025c0c18  add x12,x0,#0x9
71025c0c1c  mov w13,w8
71025c0c20  mul w13,w13,w9
71025c0c24  and w11,w11,#0xff
71025c0c28  eor w13,w13,w11
71025c0c2c  ldrb w11,[x12], #0x1
71025c0c30  cbnz w11,0x71025c0c20
71025c0c34  b 0x71025c15e8
71025c0c38  add x11,x11,#0x1
71025c0c3c  add x10,x0,#0x8
71025c0c40  strb wzr,[x10, w11, UXTW ]
71025c0c44  ldrb w10,[x0, #0x8]
71025c0c48  mov w12,w8
71025c0c4c  str w11,[x0, #0x4]
71025c0c50  cbz w10,0x71025c0c74
71025c0c54  add x11,x0,#0x9
71025c0c58  mov w13,#0x89
71025c0c5c  mov w12,w8
71025c0c60  mul w12,w12,w13
71025c0c64  and w10,w10,#0xff
71025c0c68  eor w12,w12,w10
71025c0c6c  ldrb w10,[x11], #0x1
71025c0c70  cbnz w10,0x71025c0c60
71025c0c74  add x11,sp,#0x10
71025c0c78  mov x10,xzr
71025c0c7c  str w12,[x0]
71025c0c80  add x11,x11,#0x50
71025c0c84  b 0x71025c0c90
71025c0c88  add x10,x10,#0x2
71025c0c8c  strb w12,[x13, #0x51]
71025c0c90  add x12,x11,x10
71025c0c94  ldrb w14,[x12]
71025c0c98  cbz w14,0x71025c0cc4
71025c0c9c  add w15,w10,#0x1
71025c0ca0  add x13,x0,x10
71025c0ca4  cmp w15,#0x3f
71025c0ca8  strb w14,[x13, #0x50]
71025c0cac  b.cs 0x71025c0cc0
71025c0cb0  ldrb w12,[x12, #0x1]
71025c0cb4  cbnz w12,0x71025c0c88
71025c0cb8  add x10,x10,#0x1
71025c0cbc  b 0x71025c0cc4
71025c0cc0  add w10,w10,#0x1
71025c0cc4  add x11,x0,#0x50
71025c0cc8  strb wzr,[x11, w10, UXTW ]
71025c0ccc  ldrb w11,[x0, #0x50]
71025c0cd0  str w10,[x0, #0x4c]
71025c0cd4  cbz w11,0x71025c16b4
71025c0cd8  add x10,x0,#0x51
71025c0cdc  mov w12,#0x89
71025c0ce0  mul w8,w8,w12
71025c0ce4  and w11,w11,#0xff
71025c0ce8  eor w8,w8,w11
71025c0cec  ldrb w11,[x10], #0x1
71025c0cf0  cbnz w11,0x71025c0ce0
71025c0cf4  b 0x71025c16b4
71025c0cf8  add x11,x11,#0x1
71025c0cfc  add x12,x0,#0x8
71025c0d00  strb wzr,[x12, w11, UXTW ]
71025c0d04  str w11,[x0, #0x4]
71025c0d08  ldrb w11,[x0, #0x8]
71025c0d0c  mov w13,w8
71025c0d10  cbz w11,0x71025c15e8
71025c0d14  add x12,x0,#0x9
71025c0d18  mov w13,w8
71025c0d1c  mul w13,w13,w9
71025c0d20  and w11,w11,#0xff
71025c0d24  eor w13,w13,w11
71025c0d28  ldrb w11,[x12], #0x1
71025c0d2c  cbnz w11,0x71025c0d1c
71025c0d30  b 0x71025c15e8
71025c0d34  add x11,x11,#0x1
71025c0d38  add x12,x0,#0x8
71025c0d3c  strb wzr,[x12, w11, UXTW ]
71025c0d40  str w11,[x0, #0x4]
71025c0d44  ldrb w11,[x0, #0x8]
71025c0d48  mov w13,w8
71025c0d4c  cbz w11,0x71025c15e8
71025c0d50  add x12,x0,#0x9
71025c0d54  mov w13,w8
71025c0d58  mul w13,w13,w9
71025c0d5c  and w11,w11,#0xff
71025c0d60  eor w13,w13,w11
71025c0d64  ldrb w11,[x12], #0x1
71025c0d68  cbnz w11,0x71025c0d58
71025c0d6c  b 0x71025c15e8
71025c0d70  add x11,x11,#0x1
71025c0d74  add x12,x0,#0x8
71025c0d78  strb wzr,[x12, w11, UXTW ]
71025c0d7c  str w11,[x0, #0x4]
71025c0d80  ldrb w11,[x0, #0x8]
71025c0d84  mov w13,w8
71025c0d88  cbz w11,0x71025c15e8
71025c0d8c  add x12,x0,#0x9
71025c0d90  mov w13,w8
71025c0d94  mul w13,w13,w9
71025c0d98  and w11,w11,#0xff
71025c0d9c  eor w13,w13,w11
71025c0da0  ldrb w11,[x12], #0x1
71025c0da4  cbnz w11,0x71025c0d94
71025c0da8  b 0x71025c15e8
71025c0dac  add x11,x11,#0x1
71025c0db0  add x12,x0,#0x8
71025c0db4  strb wzr,[x12, w11, UXTW ]
71025c0db8  str w11,[x0, #0x4]
71025c0dbc  ldrb w11,[x0, #0x8]
71025c0dc0  mov w13,w8
71025c0dc4  cbz w11,0x71025c15e8
71025c0dc8  add x12,x0,#0x9
71025c0dcc  mov w13,w8
71025c0dd0  mul w13,w13,w9
71025c0dd4  and w11,w11,#0xff
71025c0dd8  eor w13,w13,w11
71025c0ddc  ldrb w11,[x12], #0x1
71025c0de0  cbnz w11,0x71025c0dd0
71025c0de4  b 0x71025c15e8
71025c0de8  add x11,x11,#0x1
71025c0dec  add x12,x0,#0x8
71025c0df0  strb wzr,[x12, w11, UXTW ]
71025c0df4  str w11,[x0, #0x4]
71025c0df8  ldrb w11,[x0, #0x8]
71025c0dfc  mov w13,w8
71025c0e00  cbz w11,0x71025c15e8
71025c0e04  add x12,x0,#0x9
71025c0e08  mov w13,w8
71025c0e0c  mul w13,w13,w9
71025c0e10  and w11,w11,#0xff
71025c0e14  eor w13,w13,w11
71025c0e18  ldrb w11,[x12], #0x1
71025c0e1c  cbnz w11,0x71025c0e0c
71025c0e20  b 0x71025c15e8
71025c0e24  add x11,x11,#0x1
71025c0e28  add x12,x0,#0x8
71025c0e2c  strb wzr,[x12, w11, UXTW ]
71025c0e30  str w11,[x0, #0x4]
71025c0e34  ldrb w11,[x0, #0x8]
71025c0e38  mov w13,w8
71025c0e3c  cbz w11,0x71025c15e8
71025c0e40  add x12,x0,#0x9
71025c0e44  mov w13,w8
71025c0e48  mul w13,w13,w9
71025c0e4c  and w11,w11,#0xff
71025c0e50  eor w13,w13,w11
71025c0e54  ldrb w11,[x12], #0x1
71025c0e58  cbnz w11,0x71025c0e48
71025c0e5c  b 0x71025c15e8
71025c0e60  add x11,x11,#0x1
71025c0e64  add x12,x0,#0x8
71025c0e68  strb wzr,[x12, w11, UXTW ]
71025c0e6c  str w11,[x0, #0x4]
71025c0e70  ldrb w11,[x0, #0x8]
71025c0e74  mov w13,w8
71025c0e78  cbz w11,0x71025c15e8
71025c0e7c  add x12,x0,#0x9
71025c0e80  mov w13,w8
71025c0e84  mul w13,w13,w9
71025c0e88  and w11,w11,#0xff
71025c0e8c  eor w13,w13,w11
71025c0e90  ldrb w11,[x12], #0x1
71025c0e94  cbnz w11,0x71025c0e84
71025c0e98  b 0x71025c15e8
71025c0e9c  add x11,x11,#0x1
71025c0ea0  add x12,x0,#0x8
71025c0ea4  strb wzr,[x12, w11, UXTW ]
71025c0ea8  str w11,[x0, #0x4]
71025c0eac  ldrb w11,[x0, #0x8]
71025c0eb0  mov w13,w8
71025c0eb4  cbz w11,0x71025c15e8
71025c0eb8  add x12,x0,#0x9
71025c0ebc  mov w13,w8
71025c0ec0  mul w13,w13,w9
71025c0ec4  and w11,w11,#0xff
71025c0ec8  eor w13,w13,w11
71025c0ecc  ldrb w11,[x12], #0x1
71025c0ed0  cbnz w11,0x71025c0ec0
71025c0ed4  b 0x71025c15e8
71025c0ed8  add x10,x10,#0x1
71025c0edc  add x11,x0,#0x8
71025c0ee0  strb wzr,[x11, w10, UXTW ]
71025c0ee4  str w10,[x0, #0x4]
71025c0ee8  ldrb w10,[x0, #0x8]
71025c0eec  mov w12,w9
71025c0ef0  cbz w10,0x71025c0f14
71025c0ef4  add x11,x0,#0x9
71025c0ef8  mov w13,#0x89
71025c0efc  mov w12,w9
71025c0f00  mul w12,w12,w13
71025c0f04  and w10,w10,#0xff
71025c0f08  eor w12,w12,w10
71025c0f0c  ldrb w10,[x11], #0x1
71025c0f10  cbnz w10,0x71025c0f00
71025c0f14  str w12,[x0]
71025c0f18  strb wzr,[x0, #0x50]
71025c0f1c  stp w9,wzr,[x0, #0x48]
71025c0f20  str w8,[x0, #0x90]
71025c0f24  b 0x71025c1860
71025c0f28  add x8,x8,#0x1
71025c0f2c  add x11,x0,#0x8
71025c0f30  strb wzr,[x11, w8, UXTW ]
71025c0f34  str w8,[x0, #0x4]
71025c0f38  ldrb w8,[x0, #0x8]
71025c0f3c  mov w12,w9
71025c0f40  cbz w8,0x71025c184c
71025c0f44  add x11,x0,#0x9
71025c0f48  mov w13,#0x89
71025c0f4c  mov w12,w9
71025c0f50  mul w12,w12,w13
71025c0f54  and w8,w8,#0xff
71025c0f58  eor w12,w12,w8
71025c0f5c  ldrb w8,[x11], #0x1
71025c0f60  cbnz w8,0x71025c0f50
71025c0f64  b 0x71025c184c
71025c0f68  add x8,x8,#0x1
71025c0f6c  add x10,x0,#0x8
71025c0f70  strb wzr,[x10, w8, UXTW ]
71025c0f74  str w8,[x0, #0x4]
71025c0f78  ldrb w8,[x0, #0x8]
71025c0f7c  mov w11,w9
71025c0f80  cbz w8,0x71025c0fa4
71025c0f84  add x10,x0,#0x9
71025c0f88  mov w12,#0x89
71025c0f8c  mov w11,w9
71025c0f90  mul w11,w11,w12
71025c0f94  and w8,w8,#0xff
71025c0f98  eor w11,w11,w8
71025c0f9c  ldrb w8,[x10], #0x1
71025c0fa0  cbnz w8,0x71025c0f90
71025c0fa4  str w11,[x0]
71025c0fa8  strb wzr,[x0, #0x50]
71025c0fac  stp w9,wzr,[x0, #0x48]
71025c0fb0  str w4,[x0, #0x90]
71025c0fb4  b 0x71025c1860
71025c0fb8  add x8,x8,#0x1
71025c0fbc  add x10,x0,#0x8
71025c0fc0  strb wzr,[x10, w8, UXTW ]
71025c0fc4  str w8,[x0, #0x4]
71025c0fc8  ldrb w8,[x0, #0x8]
71025c0fcc  mov w11,w9
71025c0fd0  cbz w8,0x71025c0ff4
71025c0fd4  add x10,x0,#0x9
71025c0fd8  mov w12,#0x89
71025c0fdc  mov w11,w9
71025c0fe0  mul w11,w11,w12
71025c0fe4  and w8,w8,#0xff
71025c0fe8  eor w11,w11,w8
71025c0fec  ldrb w8,[x10], #0x1
71025c0ff0  cbnz w8,0x71025c0fe0
71025c0ff4  str w11,[x0]
71025c0ff8  strb wzr,[x0, #0x50]
71025c0ffc  stp w9,wzr,[x0, #0x48]
71025c1000  str w20,[x0, #0x90]
71025c1004  b 0x71025c1860
71025c1008  add x8,x8,#0x1
71025c100c  add x10,x0,#0x8
71025c1010  strb wzr,[x10, w8, UXTW ]
71025c1014  str w8,[x0, #0x4]
71025c1018  ldrb w8,[x0, #0x8]
71025c101c  mov w11,w9
71025c1020  cbz w8,0x71025c1044
71025c1024  add x10,x0,#0x9
71025c1028  mov w12,#0x89
71025c102c  mov w11,w9
71025c1030  mul w11,w11,w12
71025c1034  and w8,w8,#0xff
71025c1038  eor w11,w11,w8
71025c103c  ldrb w8,[x10], #0x1
71025c1040  cbnz w8,0x71025c1030
71025c1044  str w11,[x0]
71025c1048  strb wzr,[x0, #0x50]
71025c104c  stp w9,wzr,[x0, #0x48]
71025c1050  str w30,[x0, #0x90]
71025c1054  b 0x71025c1860
71025c1058  add x8,x8,#0x1
71025c105c  add x10,x0,#0x8
71025c1060  strb wzr,[x10, w8, UXTW ]
71025c1064  str w8,[x0, #0x4]
71025c1068  ldrb w8,[x0, #0x8]
71025c106c  mov w11,w9
71025c1070  cbz w8,0x71025c1094
71025c1074  add x10,x0,#0x9
71025c1078  mov w12,#0x89
71025c107c  mov w11,w9
71025c1080  mul w11,w11,w12
71025c1084  and w8,w8,#0xff
71025c1088  eor w11,w11,w8
71025c108c  ldrb w8,[x10], #0x1
71025c1090  cbnz w8,0x71025c1080
71025c1094  str w11,[x0]
71025c1098  strb wzr,[x0, #0x50]
71025c109c  stp w9,wzr,[x0, #0x48]
71025c10a0  b 0x71025c1708
71025c10a4  add x8,x8,#0x1
71025c10a8  add x11,x0,#0x8
71025c10ac  strb wzr,[x11, w8, UXTW ]
71025c10b0  str w8,[x0, #0x4]
71025c10b4  ldrb w8,[x0, #0x8]
71025c10b8  mov w12,w9
71025c10bc  cbz w8,0x71025c184c
71025c10c0  add x11,x0,#0x9
71025c10c4  mov w13,#0x89
71025c10c8  mov w12,w9
71025c10cc  mul w12,w12,w13
71025c10d0  and w8,w8,#0xff
71025c10d4  eor w12,w12,w8
71025c10d8  ldrb w8,[x11], #0x1
71025c10dc  cbnz w8,0x71025c10cc
71025c10e0  b 0x71025c184c
71025c10e4  add x8,x8,#0x1
71025c10e8  add x11,x0,#0x8
71025c10ec  strb wzr,[x11, w8, UXTW ]
71025c10f0  str w8,[x0, #0x4]
71025c10f4  ldrb w8,[x0, #0x8]
71025c10f8  mov w12,w9
71025c10fc  cbz w8,0x71025c184c
71025c1100  add x11,x0,#0x9
71025c1104  mov w13,#0x89
71025c1108  mov w12,w9
71025c110c  mul w12,w12,w13
71025c1110  and w8,w8,#0xff
71025c1114  eor w12,w12,w8
71025c1118  ldrb w8,[x11], #0x1
71025c111c  cbnz w8,0x71025c110c
71025c1120  b 0x71025c184c
71025c1124  add x8,x8,#0x1
71025c1128  add x10,x0,#0x8
71025c112c  strb wzr,[x10, w8, UXTW ]
71025c1130  str w8,[x0, #0x4]
71025c1134  ldrb w8,[x0, #0x8]
71025c1138  mov w11,w9
71025c113c  cbz w8,0x71025c1160
71025c1140  add x10,x0,#0x9
71025c1144  mov w12,#0x89
71025c1148  mov w11,w9
71025c114c  mul w11,w11,w12
71025c1150  and w8,w8,#0xff
71025c1154  eor w11,w11,w8
71025c1158  ldrb w8,[x10], #0x1
71025c115c  cbnz w8,0x71025c114c
71025c1160  str w11,[x0]
71025c1164  strb wzr,[x0, #0x50]
71025c1168  stp w9,wzr,[x0, #0x48]
71025c116c  str w18,[x0, #0x90]
71025c1170  b 0x71025c1860
71025c1174  add x8,x8,#0x1
71025c1178  add x11,x0,#0x8
71025c117c  strb wzr,[x11, w8, UXTW ]
71025c1180  str w8,[x0, #0x4]
71025c1184  ldrb w8,[x0, #0x8]
71025c1188  mov w12,w9
71025c118c  cbz w8,0x71025c184c
71025c1190  add x11,x0,#0x9
71025c1194  mov w13,#0x89
71025c1198  mov w12,w9
71025c119c  mul w12,w12,w13
71025c11a0  and w8,w8,#0xff
71025c11a4  eor w12,w12,w8
71025c11a8  ldrb w8,[x11], #0x1
71025c11ac  cbnz w8,0x71025c119c
71025c11b0  b 0x71025c184c
71025c11b4  add x11,x11,#0x1
71025c11b8  add x10,x0,#0x8
71025c11bc  strb wzr,[x10, w11, UXTW ]
71025c11c0  ldrb w10,[x0, #0x8]
71025c11c4  mov w12,w8
71025c11c8  str w11,[x0, #0x4]
71025c11cc  cbz w10,0x71025c11f0
71025c11d0  add x11,x0,#0x9
71025c11d4  mov w13,#0x89
71025c11d8  mov w12,w8
71025c11dc  mul w12,w12,w13
71025c11e0  and w10,w10,#0xff
71025c11e4  eor w12,w12,w10
71025c11e8  ldrb w10,[x11], #0x1
71025c11ec  cbnz w10,0x71025c11dc
71025c11f0  add x11,sp,#0x10
71025c11f4  mov x10,xzr
71025c11f8  str w12,[x0]
71025c11fc  add x11,x11,#0x50
71025c1200  b 0x71025c120c
71025c1204  add x10,x10,#0x2
71025c1208  strb w12,[x13, #0x51]
71025c120c  add x12,x11,x10
71025c1210  ldrb w14,[x12]
71025c1214  cbz w14,0x71025c1240
71025c1218  add w15,w10,#0x1
71025c121c  add x13,x0,x10
71025c1220  cmp w15,#0x3f
71025c1224  strb w14,[x13, #0x50]
71025c1228  b.cs 0x71025c123c
71025c122c  ldrb w12,[x12, #0x1]
71025c1230  cbnz w12,0x71025c1204
71025c1234  add x10,x10,#0x1
71025c1238  b 0x71025c1240
71025c123c  add w10,w10,#0x1
71025c1240  add x11,x0,#0x50
71025c1244  strb wzr,[x11, w10, UXTW ]
71025c1248  ldrb w11,[x0, #0x50]
71025c124c  str w10,[x0, #0x4c]
71025c1250  cbz w11,0x71025c16b4
71025c1254  add x10,x0,#0x51
71025c1258  mov w12,#0x89
71025c125c  mul w8,w8,w12
71025c1260  and w11,w11,#0xff
71025c1264  eor w8,w8,w11
71025c1268  ldrb w11,[x10], #0x1
71025c126c  cbnz w11,0x71025c125c
71025c1270  b 0x71025c16b4
71025c1274  add x11,x11,#0x1
71025c1278  add x10,x0,#0x8
71025c127c  strb wzr,[x10, w11, UXTW ]
71025c1280  ldrb w10,[x0, #0x8]
71025c1284  mov w12,w8
71025c1288  str w11,[x0, #0x4]
71025c128c  cbz w10,0x71025c12b0
71025c1290  add x11,x0,#0x9
71025c1294  mov w13,#0x89
71025c1298  mov w12,w8
71025c129c  mul w12,w12,w13
71025c12a0  and w10,w10,#0xff
71025c12a4  eor w12,w12,w10
71025c12a8  ldrb w10,[x11], #0x1
71025c12ac  cbnz w10,0x71025c129c
71025c12b0  add x11,sp,#0x10
71025c12b4  mov x10,xzr
71025c12b8  str w12,[x0]
71025c12bc  add x11,x11,#0x50
71025c12c0  b 0x71025c12cc
71025c12c4  add x10,x10,#0x2
71025c12c8  strb w12,[x13, #0x51]
71025c12cc  add x12,x11,x10
71025c12d0  ldrb w14,[x12]
71025c12d4  cbz w14,0x71025c1300
71025c12d8  add w15,w10,#0x1
71025c12dc  add x13,x0,x10
71025c12e0  cmp w15,#0x3f
71025c12e4  strb w14,[x13, #0x50]
71025c12e8  b.cs 0x71025c12fc
71025c12ec  ldrb w12,[x12, #0x1]
71025c12f0  cbnz w12,0x71025c12c4
71025c12f4  add x10,x10,#0x1
71025c12f8  b 0x71025c1300
71025c12fc  add w10,w10,#0x1
71025c1300  add x11,x0,#0x50
71025c1304  strb wzr,[x11, w10, UXTW ]
71025c1308  ldrb w11,[x0, #0x50]
71025c130c  str w10,[x0, #0x4c]
71025c1310  cbz w11,0x71025c16b4
71025c1314  add x10,x0,#0x51
71025c1318  mov w12,#0x89
71025c131c  mul w8,w8,w12
71025c1320  and w11,w11,#0xff
71025c1324  eor w8,w8,w11
71025c1328  ldrb w11,[x10], #0x1
71025c132c  cbnz w11,0x71025c131c
71025c1330  b 0x71025c16b4
71025c1334  add x11,x11,#0x1
71025c1338  add x10,x0,#0x8
71025c133c  strb wzr,[x10, w11, UXTW ]
71025c1340  ldrb w10,[x0, #0x8]
71025c1344  mov w12,w8
71025c1348  str w11,[x0, #0x4]
71025c134c  cbz w10,0x71025c1370
71025c1350  add x11,x0,#0x9
71025c1354  mov w13,#0x89
71025c1358  mov w12,w8
71025c135c  mul w12,w12,w13
71025c1360  and w10,w10,#0xff
71025c1364  eor w12,w12,w10
71025c1368  ldrb w10,[x11], #0x1
71025c136c  cbnz w10,0x71025c135c
71025c1370  add x11,sp,#0x10
71025c1374  mov x10,xzr
71025c1378  str w12,[x0]
71025c137c  add x11,x11,#0x50
71025c1380  b 0x71025c138c
71025c1384  add x10,x10,#0x2
71025c1388  strb w12,[x13, #0x51]
71025c138c  add x12,x11,x10
71025c1390  ldrb w14,[x12]
71025c1394  cbz w14,0x71025c13c0
71025c1398  add w15,w10,#0x1
71025c139c  add x13,x0,x10
71025c13a0  cmp w15,#0x3f
71025c13a4  strb w14,[x13, #0x50]
71025c13a8  b.cs 0x71025c13bc
71025c13ac  ldrb w12,[x12, #0x1]
71025c13b0  cbnz w12,0x71025c1384
71025c13b4  add x10,x10,#0x1
71025c13b8  b 0x71025c13c0
71025c13bc  add w10,w10,#0x1
71025c13c0  add x11,x0,#0x50
71025c13c4  strb wzr,[x11, w10, UXTW ]
71025c13c8  ldrb w11,[x0, #0x50]
71025c13cc  str w10,[x0, #0x4c]
71025c13d0  cbz w11,0x71025c16b4
71025c13d4  add x10,x0,#0x51
71025c13d8  mov w12,#0x89
71025c13dc  mul w8,w8,w12
71025c13e0  and w11,w11,#0xff
71025c13e4  eor w8,w8,w11
71025c13e8  ldrb w11,[x10], #0x1
71025c13ec  cbnz w11,0x71025c13dc
71025c13f0  b 0x71025c16b4
71025c13f4  add x11,x11,#0x1
71025c13f8  add x10,x0,#0x8
71025c13fc  strb wzr,[x10, w11, UXTW ]
71025c1400  ldrb w10,[x0, #0x8]
71025c1404  mov w12,w8
71025c1408  str w11,[x0, #0x4]
71025c140c  cbz w10,0x71025c1430
71025c1410  add x11,x0,#0x9
71025c1414  mov w13,#0x89
71025c1418  mov w12,w8
71025c141c  mul w12,w12,w13
71025c1420  and w10,w10,#0xff
71025c1424  eor w12,w12,w10
71025c1428  ldrb w10,[x11], #0x1
71025c142c  cbnz w10,0x71025c141c
71025c1430  add x11,sp,#0x10
71025c1434  mov x10,xzr
71025c1438  str w12,[x0]
71025c143c  add x11,x11,#0x50
71025c1440  b 0x71025c144c
71025c1444  add x10,x10,#0x2
71025c1448  strb w12,[x13, #0x51]
71025c144c  add x12,x11,x10
71025c1450  ldrb w14,[x12]
71025c1454  cbz w14,0x71025c1480
71025c1458  add w15,w10,#0x1
71025c145c  add x13,x0,x10
71025c1460  cmp w15,#0x3f
71025c1464  strb w14,[x13, #0x50]
71025c1468  b.cs 0x71025c147c
71025c146c  ldrb w12,[x12, #0x1]
71025c1470  cbnz w12,0x71025c1444
71025c1474  add x10,x10,#0x1
71025c1478  b 0x71025c1480
71025c147c  add w10,w10,#0x1
71025c1480  add x11,x0,#0x50
71025c1484  strb wzr,[x11, w10, UXTW ]
71025c1488  ldrb w11,[x0, #0x50]
71025c148c  str w10,[x0, #0x4c]
71025c1490  cbz w11,0x71025c16b4
71025c1494  add x10,x0,#0x51
71025c1498  mov w12,#0x89
71025c149c  mul w8,w8,w12
71025c14a0  and w11,w11,#0xff
71025c14a4  eor w8,w8,w11
71025c14a8  ldrb w11,[x10], #0x1
71025c14ac  cbnz w11,0x71025c149c
71025c14b0  b 0x71025c16b4
71025c14b4  add x11,x11,#0x1
71025c14b8  add x10,x0,#0x8
71025c14bc  strb wzr,[x10, w11, UXTW ]
71025c14c0  ldrb w10,[x0, #0x8]
71025c14c4  mov w12,w8
71025c14c8  str w11,[x0, #0x4]
71025c14cc  cbz w10,0x71025c14f0
71025c14d0  add x11,x0,#0x9
71025c14d4  mov w13,#0x89
71025c14d8  mov w12,w8
71025c14dc  mul w12,w12,w13
71025c14e0  and w10,w10,#0xff
71025c14e4  eor w12,w12,w10
71025c14e8  ldrb w10,[x11], #0x1
71025c14ec  cbnz w10,0x71025c14dc
71025c14f0  add x11,sp,#0x10
71025c14f4  mov x10,xzr
71025c14f8  str w12,[x0]
71025c14fc  add x11,x11,#0x50
71025c1500  b 0x71025c150c
71025c1504  add x10,x10,#0x2
71025c1508  strb w12,[x13, #0x51]
71025c150c  add x12,x11,x10
71025c1510  ldrb w14,[x12]
71025c1514  cbz w14,0x71025c1540
71025c1518  add w15,w10,#0x1
71025c151c  add x13,x0,x10
71025c1520  cmp w15,#0x3f
71025c1524  strb w14,[x13, #0x50]
71025c1528  b.cs 0x71025c153c
71025c152c  ldrb w12,[x12, #0x1]
71025c1530  cbnz w12,0x71025c1504
71025c1534  add x10,x10,#0x1
71025c1538  b 0x71025c1540
71025c153c  add w10,w10,#0x1
71025c1540  add x11,x0,#0x50
71025c1544  strb wzr,[x11, w10, UXTW ]
71025c1548  ldrb w11,[x0, #0x50]
71025c154c  str w10,[x0, #0x4c]
71025c1550  cbz w11,0x71025c16b4
71025c1554  add x10,x0,#0x51
71025c1558  mov w12,#0x89
71025c155c  mul w8,w8,w12
71025c1560  and w11,w11,#0xff
71025c1564  eor w8,w8,w11
71025c1568  ldrb w11,[x10], #0x1
71025c156c  cbnz w11,0x71025c155c
71025c1570  b 0x71025c16b4
71025c1574  add x11,x11,#0x1
71025c1578  add x12,x0,#0x8
71025c157c  strb wzr,[x12, w11, UXTW ]
71025c1580  str w11,[x0, #0x4]
71025c1584  ldrb w11,[x0, #0x8]
71025c1588  mov w13,w8
71025c158c  cbz w11,0x71025c15e8
71025c1590  add x12,x0,#0x9
71025c1594  mov w13,w8
71025c1598  mul w13,w13,w9
71025c159c  and w11,w11,#0xff
71025c15a0  eor w13,w13,w11
71025c15a4  ldrb w11,[x12], #0x1
71025c15a8  cbnz w11,0x71025c1598
71025c15ac  b 0x71025c15e8
71025c15b0  add x11,x11,#0x1
71025c15b4  add x12,x0,#0x8
71025c15b8  strb wzr,[x12, w11, UXTW ]
71025c15bc  str w11,[x0, #0x4]
71025c15c0  ldrb w11,[x0, #0x8]
71025c15c4  mov w13,w8
71025c15c8  cbz w11,0x71025c15e8
71025c15cc  add x12,x0,#0x9
71025c15d0  mov w13,w8
71025c15d4  mul w13,w13,w9
71025c15d8  and w11,w11,#0xff
71025c15dc  eor w13,w13,w11
71025c15e0  ldrb w11,[x12], #0x1
71025c15e4  cbnz w11,0x71025c15d4
71025c15e8  str w13,[x0]
71025c15ec  strb wzr,[x0, #0x50]
71025c15f0  str w8,[x0, #0x48]
71025c15f4  b 0x71025c1858
71025c15f8  add x11,x11,#0x1
71025c15fc  add x10,x0,#0x8
71025c1600  strb wzr,[x10, w11, UXTW ]
71025c1604  ldrb w10,[x0, #0x8]
71025c1608  mov w12,w8
71025c160c  str w11,[x0, #0x4]
71025c1610  cbz w10,0x71025c1634
71025c1614  add x11,x0,#0x9
71025c1618  mov w13,#0x89
71025c161c  mov w12,w8
71025c1620  mul w12,w12,w13
71025c1624  and w10,w10,#0xff
71025c1628  eor w12,w12,w10
71025c162c  ldrb w10,[x11], #0x1
71025c1630  cbnz w10,0x71025c1620
71025c1634  add x11,sp,#0x10
71025c1638  mov x10,xzr
71025c163c  str w12,[x0]
71025c1640  add x11,x11,#0x50
71025c1644  b 0x71025c1650
71025c1648  add x10,x10,#0x2
71025c164c  strb w12,[x13, #0x51]
71025c1650  add x12,x11,x10
71025c1654  ldrb w14,[x12]
71025c1658  cbz w14,0x71025c1684
71025c165c  add w15,w10,#0x1
71025c1660  add x13,x0,x10
71025c1664  cmp w15,#0x3f
71025c1668  strb w14,[x13, #0x50]
71025c166c  b.cs 0x71025c1680
71025c1670  ldrb w12,[x12, #0x1]
71025c1674  cbnz w12,0x71025c1648
71025c1678  add x10,x10,#0x1
71025c167c  b 0x71025c1684
71025c1680  add w10,w10,#0x1
71025c1684  add x11,x0,#0x50
71025c1688  strb wzr,[x11, w10, UXTW ]
71025c168c  ldrb w11,[x0, #0x50]
71025c1690  str w10,[x0, #0x4c]
71025c1694  cbz w11,0x71025c16b4
71025c1698  add x10,x0,#0x51
71025c169c  mov w12,#0x89
71025c16a0  mul w8,w8,w12
71025c16a4  and w11,w11,#0xff
71025c16a8  eor w8,w8,w11
71025c16ac  ldrb w11,[x10], #0x1
71025c16b0  cbnz w11,0x71025c16a0
71025c16b4  str w8,[x0, #0x48]
71025c16b8  str w9,[x0, #0x90]
71025c16bc  b 0x71025c1860
71025c16c0  add x9,x9,#0x1
71025c16c4  add x10,x0,#0x8
71025c16c8  strb wzr,[x10, w9, UXTW ]
71025c16cc  str w9,[x0, #0x4]
71025c16d0  ldrb w9,[x0, #0x8]
71025c16d4  mov w11,w8
71025c16d8  cbz w9,0x71025c16fc
71025c16dc  add x10,x0,#0x9
71025c16e0  mov w12,#0x89
71025c16e4  mov w11,w8
71025c16e8  mul w11,w11,w12
71025c16ec  and w9,w9,#0xff
71025c16f0  eor w11,w11,w9
71025c16f4  ldrb w9,[x10], #0x1
71025c16f8  cbnz w9,0x71025c16e8
71025c16fc  str w11,[x0]
71025c1700  strb wzr,[x0, #0x50]
71025c1704  stp w8,wzr,[x0, #0x48]
71025c1708  str w19,[x0, #0x90]
71025c170c  b 0x71025c1860
71025c1710  add x8,x8,#0x1
71025c1714  add x11,x0,#0x8
71025c1718  strb wzr,[x11, w8, UXTW ]
71025c171c  str w8,[x0, #0x4]
71025c1720  ldrb w8,[x0, #0x8]
71025c1724  mov w12,w9
71025c1728  cbz w8,0x71025c184c
71025c172c  add x11,x0,#0x9
71025c1730  mov w13,#0x89
71025c1734  mov w12,w9
71025c1738  mul w12,w12,w13
71025c173c  and w8,w8,#0xff
71025c1740  eor w12,w12,w8
71025c1744  ldrb w8,[x11], #0x1
71025c1748  cbnz w8,0x71025c1738
71025c174c  b 0x71025c184c
71025c1750  add x8,x8,#0x1
71025c1754  add x11,x0,#0x8
71025c1758  strb wzr,[x11, w8, UXTW ]
71025c175c  str w8,[x0, #0x4]
71025c1760  ldrb w8,[x0, #0x8]
71025c1764  mov w12,w9
71025c1768  cbz w8,0x71025c184c
71025c176c  add x11,x0,#0x9
71025c1770  mov w13,#0x89
71025c1774  mov w12,w9
71025c1778  mul w12,w12,w13
71025c177c  and w8,w8,#0xff
71025c1780  eor w12,w12,w8
71025c1784  ldrb w8,[x11], #0x1
71025c1788  cbnz w8,0x71025c1778
71025c178c  b 0x71025c184c
71025c1790  add x8,x8,#0x1
71025c1794  add x11,x0,#0x8
71025c1798  strb wzr,[x11, w8, UXTW ]
71025c179c  str w8,[x0, #0x4]
71025c17a0  ldrb w8,[x0, #0x8]
71025c17a4  mov w12,w9
71025c17a8  cbz w8,0x71025c184c
71025c17ac  add x11,x0,#0x9
71025c17b0  mov w13,#0x89
71025c17b4  mov w12,w9
71025c17b8  mul w12,w12,w13
71025c17bc  and w8,w8,#0xff
71025c17c0  eor w12,w12,w8
71025c17c4  ldrb w8,[x11], #0x1
71025c17c8  cbnz w8,0x71025c17b8
71025c17cc  b 0x71025c184c
71025c17d0  add x8,x8,#0x1
71025c17d4  add x11,x0,#0x8
71025c17d8  strb wzr,[x11, w8, UXTW ]
71025c17dc  str w8,[x0, #0x4]
71025c17e0  ldrb w8,[x0, #0x8]
71025c17e4  mov w12,w9
71025c17e8  cbz w8,0x71025c184c
71025c17ec  add x11,x0,#0x9
71025c17f0  mov w13,#0x89
71025c17f4  mov w12,w9
71025c17f8  mul w12,w12,w13
71025c17fc  and w8,w8,#0xff
71025c1800  eor w12,w12,w8
71025c1804  ldrb w8,[x11], #0x1
71025c1808  cbnz w8,0x71025c17f8
71025c180c  b 0x71025c184c
71025c1810  add x8,x8,#0x1
71025c1814  add x11,x0,#0x8
71025c1818  strb wzr,[x11, w8, UXTW ]
71025c181c  str w8,[x0, #0x4]
71025c1820  ldrb w8,[x0, #0x8]
71025c1824  mov w12,w9
71025c1828  cbz w8,0x71025c184c
71025c182c  add x11,x0,#0x9
71025c1830  mov w13,#0x89
71025c1834  mov w12,w9
71025c1838  mul w12,w12,w13
71025c183c  and w8,w8,#0xff
71025c1840  eor w12,w12,w8
71025c1844  ldrb w8,[x11], #0x1
71025c1848  cbnz w8,0x71025c1838
71025c184c  str w12,[x0]
71025c1850  strb wzr,[x0, #0x50]
71025c1854  str w9,[x0, #0x48]
71025c1858  str wzr,[x0, #0x4c]
71025c185c  str w10,[x0, #0x90]
71025c1860  ldp x29,x30,[sp, #0x100]
71025c1864  ldp x20,x19,[sp, #0xf0]
71025c1868  ldp x22,x21,[sp, #0xe0]
71025c186c  ldp x24,x23,[sp, #0xd0]
71025c1870  ldp x26,x25,[sp, #0xc0]
71025c1874  ldp x28,x27,[sp, #0xb0]
71025c1878  add sp,sp,#0x110
71025c187c  ret
71025c1880  adrp x8,0x71042b1000
71025c1884  add x8,x8,#0xe5b
71025c1888  adrp x9,0x71042d4000
71025c188c  add x9,x9,#0x1e7
71025c1890  cmp w13,#0x0
71025c1894  csel x9,x9,x8,eq
71025c1898  mov x10,xzr
71025c189c  add x8,sp,#0x10
71025c18a0  b 0x71025c18ac
71025c18a4  add x10,x10,#0x2
71025c18a8  strb w11,[x12, #0x9]
71025c18ac  add x11,x9,x10
71025c18b0  ldrb w13,[x11]
71025c18b4  cbz w13,0x71025bc1e8
71025c18b8  add w14,w10,#0x1
71025c18bc  add x12,x8,x10
71025c18c0  cmp w14,#0x3f
71025c18c4  strb w13,[x12, #0x8]
71025c18c8  b.cs 0x71025c1b60
71025c18cc  ldrb w11,[x11, #0x1]
71025c18d0  cbnz w11,0x71025c18a4
71025c18d4  add x10,x10,#0x1
71025c18d8  b 0x71025bc1e8
71025c18dc  adrp x8,0x7104316000
71025c18e0  add x8,x8,#0xcd2
71025c18e4  adrp x9,0x710428f000
71025c18e8  add x9,x9,#0x65c
71025c18ec  cmp w13,#0x0
71025c18f0  csel x9,x9,x8,eq
71025c18f4  mov x10,xzr
71025c18f8  add x8,sp,#0x10
71025c18fc  b 0x71025c1908
71025c1900  add x10,x10,#0x2
71025c1904  strb w11,[x12, #0x9]
71025c1908  add x11,x9,x10
71025c190c  ldrb w13,[x11]
71025c1910  cbz w13,0x71025bc978
71025c1914  add w14,w10,#0x1
71025c1918  add x12,x8,x10
71025c191c  cmp w14,#0x3f
71025c1920  strb w13,[x12, #0x8]
71025c1924  b.cs 0x71025c1b68
71025c1928  ldrb w11,[x11, #0x1]
71025c192c  cbnz w11,0x71025c1900
71025c1930  add x10,x10,#0x1
71025c1934  b 0x71025bc978
71025c1938  adrp x8,0x710425d000
71025c193c  add x8,x8,#0x125
71025c1940  adrp x9,0x71043ff000
71025c1944  add x9,x9,#0xbc
71025c1948  cmp w13,#0x0
71025c194c  csel x9,x9,x8,eq
71025c1950  mov x10,xzr
71025c1954  add x8,sp,#0x10
71025c1958  b 0x71025c1964
71025c195c  add x10,x10,#0x2
71025c1960  strb w11,[x12, #0x9]
71025c1964  add x11,x9,x10
71025c1968  ldrb w13,[x11]
71025c196c  cbz w13,0x71025bdfa0
71025c1970  add w14,w10,#0x1
71025c1974  add x12,x8,x10
71025c1978  cmp w14,#0x3f
71025c197c  strb w13,[x12, #0x8]
71025c1980  b.cs 0x71025c1b70
71025c1984  ldrb w11,[x11, #0x1]
71025c1988  cbnz w11,0x71025c195c
71025c198c  add x10,x10,#0x1
71025c1990  b 0x71025bdfa0
71025c1994  adrp x8,0x7104452000
71025c1998  add x8,x8,#0x663
71025c199c  adrp x9,0x71042c2000
71025c19a0  add x9,x9,#0xae6
71025c19a4  cmp w13,#0x0
71025c19a8  csel x9,x9,x8,eq
71025c19ac  mov x10,xzr
71025c19b0  add x8,sp,#0x10
71025c19b4  b 0x71025c19c0
71025c19b8  add x10,x10,#0x2
71025c19bc  strb w11,[x12, #0x9]
71025c19c0  add x11,x9,x10
71025c19c4  ldrb w13,[x11]
71025c19c8  cbz w13,0x71025bf4c0
71025c19cc  add w14,w10,#0x1
71025c19d0  add x12,x8,x10
71025c19d4  cmp w14,#0x3f
71025c19d8  strb w13,[x12, #0x8]
71025c19dc  b.cs 0x71025c1b78
71025c19e0  ldrb w11,[x11, #0x1]
71025c19e4  cbnz w11,0x71025c19b8
71025c19e8  add x10,x10,#0x1
71025c19ec  b 0x71025bf4c0
71025c19f0  adrp x8,0x710437a000
71025c19f4  add x8,x8,#0x49c
71025c19f8  adrp x9,0x710436a000
71025c19fc  add x9,x9,#0x1ce
71025c1a00  cmp w13,#0x0
71025c1a04  csel x9,x9,x8,eq
71025c1a08  mov x10,xzr
71025c1a0c  add x8,sp,#0x10
71025c1a10  b 0x71025c1a1c
71025c1a14  add x10,x10,#0x2
71025c1a18  strb w11,[x12, #0x9]
71025c1a1c  add x11,x9,x10
71025c1a20  ldrb w13,[x11]
71025c1a24  cbz w13,0x71025bf118
71025c1a28  add w14,w10,#0x1
71025c1a2c  add x12,x8,x10
71025c1a30  cmp w14,#0x3f
71025c1a34  strb w13,[x12, #0x8]
71025c1a38  b.cs 0x71025c1b80
71025c1a3c  ldrb w11,[x11, #0x1]
71025c1a40  cbnz w11,0x71025c1a14
71025c1a44  add x10,x10,#0x1
71025c1a48  b 0x71025bf118
71025c1a4c  adrp x8,0x71042e4000
71025c1a50  add x8,x8,#0xf12
71025c1a54  adrp x9,0x7104337000
71025c1a58  add x9,x9,#0xf66
71025c1a5c  cmp w13,#0x0
71025c1a60  csel x9,x9,x8,eq
71025c1a64  mov x10,xzr
71025c1a68  add x8,sp,#0x10
71025c1a6c  b 0x71025c1a78
71025c1a70  add x10,x10,#0x2
71025c1a74  strb w11,[x12, #0x9]
71025c1a78  add x11,x9,x10
71025c1a7c  ldrb w13,[x11]
71025c1a80  cbz w13,0x71025bf250
71025c1a84  add w14,w10,#0x1
71025c1a88  add x12,x8,x10
71025c1a8c  cmp w14,#0x3f
71025c1a90  strb w13,[x12, #0x8]
71025c1a94  b.cs 0x71025c1b88
71025c1a98  ldrb w11,[x11, #0x1]
71025c1a9c  cbnz w11,0x71025c1a70
71025c1aa0  add x10,x10,#0x1
71025c1aa4  b 0x71025bf250
71025c1aa8  adrp x8,0x71043dd000
71025c1aac  add x8,x8,#0xf23
71025c1ab0  adrp x9,0x7104420000
71025c1ab4  add x9,x9,#0xe5
71025c1ab8  cmp w13,#0x0
71025c1abc  csel x9,x9,x8,eq
71025c1ac0  mov x10,xzr
71025c1ac4  add x8,sp,#0x10
71025c1ac8  b 0x71025c1ad4
71025c1acc  add x10,x10,#0x2
71025c1ad0  strb w11,[x12, #0x9]
71025c1ad4  add x11,x9,x10
71025c1ad8  ldrb w13,[x11]
71025c1adc  cbz w13,0x71025bf388
71025c1ae0  add w14,w10,#0x1
71025c1ae4  add x12,x8,x10
71025c1ae8  cmp w14,#0x3f
71025c1aec  strb w13,[x12, #0x8]
71025c1af0  b.cs 0x71025c1b90
71025c1af4  ldrb w11,[x11, #0x1]
71025c1af8  cbnz w11,0x71025c1acc
71025c1afc  add x10,x10,#0x1
71025c1b00  b 0x71025bf388
71025c1b04  adrp x8,0x71042f5000
71025c1b08  add x8,x8,#0xb78
71025c1b0c  adrp x9,0x7104316000
71025c1b10  add x9,x9,#0xcfa
71025c1b14  cmp w13,#0x0
71025c1b18  csel x9,x9,x8,eq
71025c1b1c  mov x10,xzr
71025c1b20  add x8,sp,#0x10
71025c1b24  b 0x71025c1b30
71025c1b28  add x10,x10,#0x2
71025c1b2c  strb w11,[x12, #0x9]
71025c1b30  add x11,x9,x10
71025c1b34  ldrb w13,[x11]
71025c1b38  cbz w13,0x71025bfdac
71025c1b3c  add w14,w10,#0x1
71025c1b40  add x12,x8,x10
71025c1b44  cmp w14,#0x3f
71025c1b48  strb w13,[x12, #0x8]
71025c1b4c  b.cs 0x71025c1b98
71025c1b50  ldrb w11,[x11, #0x1]
71025c1b54  cbnz w11,0x71025c1b28
71025c1b58  add x10,x10,#0x1
71025c1b5c  b 0x71025bfdac
71025c1b60  add w10,w10,#0x1
71025c1b64  b 0x71025bc1e8
71025c1b68  add w10,w10,#0x1
71025c1b6c  b 0x71025bc978
71025c1b70  add w10,w10,#0x1
71025c1b74  b 0x71025bdfa0
71025c1b78  add w10,w10,#0x1
71025c1b7c  b 0x71025bf4c0
71025c1b80  add w10,w10,#0x1
71025c1b84  b 0x71025bf118
71025c1b88  add w10,w10,#0x1
71025c1b8c  b 0x71025bf250
71025c1b90  add w10,w10,#0x1
71025c1b94  b 0x71025bf388
71025c1b98  add w10,w10,#0x1
71025c1b9c  b 0x71025bfdac
71025c1ba0  mov x0,x8
71025c1ba4  bl 0x71039c1330
71025c1ba8  ldr x0,[sp, #0x8]
71025c1bac  bl 0x71039c1330
