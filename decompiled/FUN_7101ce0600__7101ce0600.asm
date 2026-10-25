// addr:      7101ce0600
// offset:    0x1ce0600
// name:      FUN_7101ce0600
// mangled:   
// size:      2628

7101ce0600  sub sp,sp,#0x160
7101ce0604  str x28,[sp, #0x110]
7101ce0608  stp x24,x23,[sp, #0x120]
7101ce060c  stp x22,x21,[sp, #0x130]
7101ce0610  stp x20,x19,[sp, #0x140]
7101ce0614  stp x29,x30,[sp, #0x150]
7101ce0618  add x29,sp,#0x150
7101ce061c  adrp x22,0x710532f000
7101ce0620  ldr x21,[x22, #0x8f8]
7101ce0624  str wzr,[sp, #0x94]
7101ce0628  strh wzr,[sp, #0x98]
7101ce062c  strh wzr,[sp, #0x90]
7101ce0630  mov x19,x0
7101ce0634  stp xzr,xzr,[sp, #0x80]
7101ce0638  add x20,x0,#0x288
7101ce063c  add x2,sp,#0x80
7101ce0640  mov x1,x20
7101ce0644  stur xzr,[sp, #0xed]
7101ce0648  str xzr,[sp, #0xd8]
7101ce064c  stp xzr,xzr,[sp, #0xe0]
7101ce0650  ldr x0,[x21, #0x8]
7101ce0654  bl 0x710334e560
7101ce0658  cmp w0,#0x3
7101ce065c  b.ne 0x7101ce0e0c
7101ce0660  ldr x1,[x19, #0x290]
7101ce0664  cbz x1,0x7101ce067c
7101ce0668  ldr x0,[x21, #0x8]
7101ce066c  ldr w2,[x20]
7101ce0670  bl 0x710334c7d0
7101ce0674  mov w21,w0
7101ce0678  b 0x7101ce0680
7101ce067c  orr w21,wzr,#0xffff
7101ce0680  adrp x9,0x7105325000
7101ce0684  ldr x9,[x9, #0xcc8]
7101ce0688  ldr w8,[sp, #0xe8]
7101ce068c  ldr x1,[sp, #0x80]
7101ce0690  ldr x20,[x9, #0x8]
7101ce0694  cbz w8,0x7101ce06c0
7101ce0698  ldr w8,[x20, #0xb8]
7101ce069c  cbz w8,0x7101ce0858
7101ce06a0  and w8,w8,#0xfffffffe
7101ce06a4  cmp w8,#0x2
7101ce06a8  b.ne 0x7101ce0814
7101ce06ac  ldr w8,[x20, #0x2668]
7101ce06b0  ldr w14,[x20, #0x266c]
7101ce06b4  cmp w8,w14
7101ce06b8  b.ne 0x7101ce0818
7101ce06bc  b 0x7101ce0858
7101ce06c0  mov w2,#0x1
7101ce06c4  mov x0,x20
7101ce06c8  bl 0x7101cd3060
7101ce06cc  tbz w0,#0x0,0x7101ce0a18
7101ce06d0  adrp x8,0x7105325000
7101ce06d4  ldr x8,[x8, #0xcb8]
7101ce06d8  ldr x1,[sp, #0x80]
7101ce06dc  orr w2,wzr,#0x3
7101ce06e0  ldr x0,[x8, #0x8]
7101ce06e4  mov w3,wzr
7101ce06e8  bl 0x7101cd2890
7101ce06ec  ldr x8,[x22, #0x8f8]
7101ce06f0  ldr x8,[x8, #0x8]
7101ce06f4  ldr x11,[x8, #0xf8]
7101ce06f8  add x9,x8,#0x100
7101ce06fc  cmp x11,x9
7101ce0700  b.eq 0x7101ce0804
7101ce0704  mov w10,#0x1
7101ce0708  ldr x12,[x8, #0x108]
7101ce070c  cbz x12,0x7101ce07a8
7101ce0710  ldr x13,[x9]
7101ce0714  cbz x13,0x7101ce07a8
7101ce0718  ldr w12,[x11, #0x20]
7101ce071c  mov x14,x9
7101ce0720  ldr w15,[x13, #0x20]
7101ce0724  cmp w15,w12
7101ce0728  cset w15,lt
7101ce072c  csel x14,x14,x13,lt
7101ce0730  ldr x13,[x13, w15, UXTW #0x3]
7101ce0734  cbnz x13,0x7101ce0720
7101ce0738  cmp x14,x9
7101ce073c  b.eq 0x7101ce07a8
7101ce0740  ldr w13,[x14, #0x20]
7101ce0744  cmp w13,w12
7101ce0748  b.gt 0x7101ce07a8
7101ce074c  ldr w12,[x11, #0x28]
7101ce0750  cmp w12,#0x2
7101ce0754  b.ne 0x7101ce07a8
7101ce0758  mov x13,x11
7101ce075c  ldr x15,[x13, #0x50]!
7101ce0760  cbz x15,0x7101ce07a8
7101ce0764  ldr x14,[x19, #0x290]
7101ce0768  mov x12,x13
7101ce076c  ldr x16,[x15, #0x20]
7101ce0770  cmp x16,x14
7101ce0774  cset w16,cc
7101ce0778  csel x12,x12,x15,cc
7101ce077c  ldr x15,[x15, w16, UXTW #0x3]
7101ce0780  cbnz x15,0x7101ce076c
7101ce0784  cmp x12,x13
7101ce0788  b.eq 0x7101ce07a8
7101ce078c  ldr x13,[x12, #0x20]
7101ce0790  cmp x14,x13
7101ce0794  b.cc 0x7101ce07a8
7101ce0798  ldr x13,[x12, #0x48]
7101ce079c  add x13,x13,#0x1
7101ce07a0  str x13,[x12, #0x48]
7101ce07a4  str w10,[x12, #0x50]
7101ce07a8  ldr x12,[x11, #0x8]
7101ce07ac  cbz x12,0x7101ce07c0
7101ce07b0  mov x11,x12
7101ce07b4  ldr x12,[x12]
7101ce07b8  cbnz x12,0x7101ce07b0
7101ce07bc  b 0x7101ce07ec
7101ce07c0  mov x12,x11
7101ce07c4  ldr x13,[x12, #0x10]!
7101ce07c8  ldr x14,[x13]
7101ce07cc  cmp x14,x11
7101ce07d0  b.eq 0x7101ce07f8
7101ce07d4  ldr x13,[x12]
7101ce07d8  mov x12,x13
7101ce07dc  ldr x11,[x12, #0x10]!
7101ce07e0  ldr x14,[x11]
7101ce07e4  cmp x14,x13
7101ce07e8  b.ne 0x7101ce07d4
7101ce07ec  cmp x11,x9
7101ce07f0  b.ne 0x7101ce0708
7101ce07f4  b 0x7101ce0804
7101ce07f8  mov x11,x13
7101ce07fc  cmp x11,x9
7101ce0800  b.ne 0x7101ce0708
7101ce0804  ldr x8,[sp, #0xe0]
7101ce0808  add x8,x8,#0x1
7101ce080c  mov w21,#0x1
7101ce0810  b 0x7101ce0990
7101ce0814  ldr w14,[x20, #0x266c]
7101ce0818  mov w8,#0x266c
7101ce081c  add x8,x20,x8
7101ce0820  cmp w14,#0x4
7101ce0824  b.cs 0x7101ce1040
7101ce0828  mov w10,#0x968
7101ce082c  umaddl x11,w14,w10,x20
7101ce0830  ldr x9,[x11, #0xa28]
7101ce0834  cmp x9,#0x63
7101ce0838  b.hi 0x7101ce0858
7101ce083c  add w12,w14,#0x2
7101ce0840  cmp w12,#0x4
7101ce0844  b.cs 0x7101ce1040
7101ce0848  umaddl x13,w12,w10,x20
7101ce084c  ldr x10,[x13, #0xa28]
7101ce0850  cmp x10,#0x63
7101ce0854  b.ls 0x7101ce0e28
7101ce0858  adrp x8,0x7105325000
7101ce085c  ldr x8,[x8, #0xcb8]
7101ce0860  ldr x1,[sp, #0x80]
7101ce0864  mov w2,#0x4
7101ce0868  ldr x0,[x8, #0x8]
7101ce086c  mov w3,wzr
7101ce0870  bl 0x7101cd2890
7101ce0874  ldr x8,[x22, #0x8f8]
7101ce0878  ldr x8,[x8, #0x8]
7101ce087c  ldr x10,[x8, #0xf8]
7101ce0880  add x9,x8,#0x100
7101ce0884  b 0x7101ce088c
7101ce0888  mov x10,x12
7101ce088c  cmp x10,x9
7101ce0890  b.eq 0x7101ce0980
7101ce0894  ldr x11,[x8, #0x108]
7101ce0898  cbz x11,0x7101ce0938
7101ce089c  ldr x12,[x9]
7101ce08a0  cbz x12,0x7101ce0938
7101ce08a4  ldr w11,[x10, #0x20]
7101ce08a8  mov x13,x9
7101ce08ac  ldr w14,[x12, #0x20]
7101ce08b0  cmp w14,w11
7101ce08b4  cset w14,lt
7101ce08b8  csel x13,x13,x12,lt
7101ce08bc  ldr x12,[x12, w14, UXTW #0x3]
7101ce08c0  cbnz x12,0x7101ce08ac
7101ce08c4  cmp x13,x9
7101ce08c8  b.eq 0x7101ce0938
7101ce08cc  ldr w12,[x13, #0x20]
7101ce08d0  cmp w12,w11
7101ce08d4  b.gt 0x7101ce0938
7101ce08d8  ldr w11,[x10, #0x28]
7101ce08dc  cmp w11,#0x2
7101ce08e0  b.ne 0x7101ce0938
7101ce08e4  mov x12,x10
7101ce08e8  ldr x14,[x12, #0x50]!
7101ce08ec  cbz x14,0x7101ce0938
7101ce08f0  ldr x13,[x19, #0x290]
7101ce08f4  mov x11,x12
7101ce08f8  ldr x15,[x14, #0x20]
7101ce08fc  cmp x15,x13
7101ce0900  cset w15,cc
7101ce0904  csel x11,x11,x14,cc
7101ce0908  ldr x14,[x14, w15, UXTW #0x3]
7101ce090c  cbnz x14,0x7101ce08f8
7101ce0910  cmp x11,x12
7101ce0914  b.eq 0x7101ce0938
7101ce0918  ldr x12,[x11, #0x20]
7101ce091c  cmp x13,x12
7101ce0920  b.cc 0x7101ce0938
7101ce0924  ldr x12,[x11, #0x48]
7101ce0928  subs x12,x12,#0x1
7101ce092c  csel x12,x12,xzr,hi
7101ce0930  str x12,[x11, #0x48]
7101ce0934  str wzr,[x11, #0x50]
7101ce0938  ldr x11,[x10, #0x8]
7101ce093c  cbz x11,0x7101ce0950
7101ce0940  mov x10,x11
7101ce0944  ldr x11,[x11]
7101ce0948  cbnz x11,0x7101ce0940
7101ce094c  b 0x7101ce088c
7101ce0950  mov x11,x10
7101ce0954  ldr x12,[x11, #0x10]!
7101ce0958  ldr x13,[x12]
7101ce095c  cmp x13,x10
7101ce0960  b.eq 0x7101ce0888
7101ce0964  ldr x12,[x11]
7101ce0968  mov x11,x12
7101ce096c  ldr x10,[x11, #0x10]!
7101ce0970  ldr x13,[x10]
7101ce0974  cmp x13,x12
7101ce0978  b.ne 0x7101ce0964
7101ce097c  b 0x7101ce088c
7101ce0980  ldr x8,[sp, #0xe0]
7101ce0984  subs x8,x8,#0x1
7101ce0988  csel x8,x8,xzr,hi
7101ce098c  mov w21,wzr
7101ce0990  str x8,[sp, #0xe0]
7101ce0994  add x20,x19,#0x250
7101ce0998  add x2,sp,#0x80
7101ce099c  mov x0,x20
7101ce09a0  mov w1,w21
7101ce09a4  str w21,[sp, #0xe8]
7101ce09a8  bl 0x7101ce1320
7101ce09ac  adrp x1,0x7104443000
7101ce09b0  add x1,x1,#0xb1e
7101ce09b4  sub x8,x29,#0x50
7101ce09b8  mov x0,x20
7101ce09bc  bl 0x7103776910
7101ce09c0  ldur x22,[x29, #-0x48]
7101ce09c4  ldr x0,[x22]
7101ce09c8  cbz w21,0x7101ce09f4
7101ce09cc  bl 0x710377aae0
7101ce09d0  cbz x0,0x7101ce09dc
7101ce09d4  mov w8,#0x1
7101ce09d8  strb w8,[x0, #0x13a]
7101ce09dc  ldr x8,[x22]
7101ce09e0  cbz x8,0x7101ce0a58
7101ce09e4  ldrb w9,[x8, #0x58]
7101ce09e8  orr w9,w9,#0x1
7101ce09ec  strb w9,[x8, #0x58]
7101ce09f0  b 0x7101ce0a58
7101ce09f4  mov w1,wzr
7101ce09f8  bl 0x710377aa20
7101ce09fc  ldr x8,[x22]
7101ce0a00  cbz x8,0x7101ce0a4c
7101ce0a04  ldrb w9,[x8, #0x58]
7101ce0a08  and w9,w9,#0xfe
7101ce0a0c  strb w9,[x8, #0x58]
7101ce0a10  ldr x0,[x22]
7101ce0a14  b 0x7101ce0a50
7101ce0a18  and w8,w21,#0xffff
7101ce0a1c  cmp w8,#0x4
7101ce0a20  b.hi 0x7101ce06d0
7101ce0a24  and x8,x21,#0xffff
7101ce0a28  adrp x9,0x71044fa000
7101ce0a2c  add x9,x9,#0x58
7101ce0a30  ldrsw x8,[x9, x8, LSL #0x2]
7101ce0a34  add x8,x8,x9
7101ce0a38  br x8
7101ce0a3c  ldr w8,[x20, #0x2690]
7101ce0a40  add w8,w8,#0x1
7101ce0a44  str w8,[x20, #0x2690]
7101ce0a48  b 0x7101ce06d0
7101ce0a4c  mov x0,xzr
7101ce0a50  mov w1,#0x1
7101ce0a54  bl 0x710377acb0
7101ce0a58  adrp x24,0x710523d000
7101ce0a5c  add x24,x24,#0x9a8
7101ce0a60  mov x0,x22
7101ce0a64  stp x24,xzr,[x29, #-0x50]
7101ce0a68  bl 0x710392eb40
7101ce0a6c  ldr x23,[x19, #0x310]
7101ce0a70  ldr x22,[x19, #0x318]
7101ce0a74  cbz w21,0x7101ce0b1c
7101ce0a78  cmp x23,x22
7101ce0a7c  b.eq 0x7101ce0ab0
7101ce0a80  sub x0,x22,#0x10
7101ce0a84  bl 0x710377b140
7101ce0a88  ldr x23,[x19, #0x310]
7101ce0a8c  ldr x21,[x19, #0x318]
7101ce0a90  cmp x21,x23
7101ce0a94  b.eq 0x7101ce0ab0
7101ce0a98  ldr x8,[x21, #-0x10]!
7101ce0a9c  ldr x8,[x8]
7101ce0aa0  mov x0,x21
7101ce0aa4  blr x8
7101ce0aa8  cmp x23,x21
7101ce0aac  b.ne 0x7101ce0a98
7101ce0ab0  adrp x1,0x71042c4000
7101ce0ab4  add x1,x1,#0xf2f
7101ce0ab8  sub x8,x29,#0x50
7101ce0abc  mov x0,x20
7101ce0ac0  add x21,x19,#0x310
7101ce0ac4  str x23,[x19, #0x318]
7101ce0ac8  sub x22,x29,#0x50
7101ce0acc  bl 0x71037780e0
7101ce0ad0  ldr x8,[x19, #0x318]
7101ce0ad4  ldr x9,[x19, #0x320]
7101ce0ad8  cmp x8,x9
7101ce0adc  b.cs 0x7101ce0bcc
7101ce0ae0  adrp x9,0x710523d000
7101ce0ae4  add x9,x9,#0x9e8
7101ce0ae8  cmp x8,x22
7101ce0aec  stp x9,xzr,[x8]
7101ce0af0  b.eq 0x7101ce0b0c
7101ce0af4  ldur x9,[x29, #-0x48]
7101ce0af8  stur xzr,[x29, #-0x48]
7101ce0afc  ldr x0,[x8, #0x8]
7101ce0b00  str x9,[x8, #0x8]
7101ce0b04  cbz x0,0x7101ce0b0c
7101ce0b08  bl 0x710392eb40
7101ce0b0c  ldr x8,[x19, #0x318]
7101ce0b10  add x8,x8,#0x10
7101ce0b14  str x8,[x19, #0x318]
7101ce0b18  b 0x7101ce0bd8
7101ce0b1c  cmp x22,x23
7101ce0b20  b.eq 0x7101ce0b3c
7101ce0b24  ldr x8,[x22, #-0x10]!
7101ce0b28  ldr x8,[x8]
7101ce0b2c  mov x0,x22
7101ce0b30  blr x8
7101ce0b34  cmp x23,x22
7101ce0b38  b.ne 0x7101ce0b24
7101ce0b3c  adrp x1,0x710435b000
7101ce0b40  add x1,x1,#0x916
7101ce0b44  sub x8,x29,#0x50
7101ce0b48  mov x0,x20
7101ce0b4c  str x23,[x19, #0x318]
7101ce0b50  bl 0x7103776910
7101ce0b54  ldr x8,[sp, #0xe0]
7101ce0b58  mov w9,#0x423f
7101ce0b5c  movk w9,#0xf, LSL #16
7101ce0b60  cmp x8,x9
7101ce0b64  csel w3,w8,w9,cc
7101ce0b68  adrp x1,0x71042d6000
7101ce0b6c  add x1,x1,#0x3be
7101ce0b70  sub x0,x29,#0x50
7101ce0b74  mov w2,#0x1
7101ce0b78  bl 0x710377a280
7101ce0b7c  ldur x0,[x29, #-0x48]
7101ce0b80  stp x24,xzr,[x29, #-0x50]
7101ce0b84  cbz x0,0x7101ce0b8c
7101ce0b88  bl 0x710392eb40
7101ce0b8c  ldr x0,[x19, #0x258]
7101ce0b90  adrp x1,0x71042f8000
7101ce0b94  add x1,x1,#0x426
7101ce0b98  bl 0x7103778760
7101ce0b9c  adrp x8,0x710532f000
7101ce0ba0  ldr x8,[x8, #0x8d0]
7101ce0ba4  ldr x0,[x8, #0x8]
7101ce0ba8  ldp x8,x9,[x0, #0x40]
7101ce0bac  sub x9,x9,x8
7101ce0bb0  asr x9,x9,#0x3
7101ce0bb4  cmp x9,#0x4
7101ce0bb8  b.cc 0x7101ce0d48
7101ce0bbc  ldr x19,[x8, #0x18]
7101ce0bc0  ldrb w8,[x0, #0x191]
7101ce0bc4  cbnz w8,0x7101ce0dd0
7101ce0bc8  b 0x7101ce0d54
7101ce0bcc  sub x1,x29,#0x50
7101ce0bd0  mov x0,x21
7101ce0bd4  bl 0x7101b09e60
7101ce0bd8  ldur x0,[x29, #-0x48]
7101ce0bdc  adrp x22,0x710523d000
7101ce0be0  add x22,x22,#0x9e8
7101ce0be4  stp x22,xzr,[x29, #-0x50]
7101ce0be8  cbz x0,0x7101ce0bf0
7101ce0bec  bl 0x710392eb40
7101ce0bf0  adrp x1,0x71042f8000
7101ce0bf4  add x1,x1,#0x426
7101ce0bf8  sub x8,x29,#0x50
7101ce0bfc  mov x0,x20
7101ce0c00  sub x23,x29,#0x50
7101ce0c04  bl 0x71037780e0
7101ce0c08  ldr x8,[x19, #0x318]
7101ce0c0c  ldr x9,[x19, #0x320]
7101ce0c10  cmp x8,x9
7101ce0c14  b.cs 0x7101ce0c4c
7101ce0c18  cmp x8,x23
7101ce0c1c  stp x22,xzr,[x8]
7101ce0c20  b.eq 0x7101ce0c3c
7101ce0c24  ldur x9,[x29, #-0x48]
7101ce0c28  stur xzr,[x29, #-0x48]
7101ce0c2c  ldr x0,[x8, #0x8]
7101ce0c30  str x9,[x8, #0x8]
7101ce0c34  cbz x0,0x7101ce0c3c
7101ce0c38  bl 0x710392eb40
7101ce0c3c  ldr x8,[x19, #0x318]
7101ce0c40  add x8,x8,#0x10
7101ce0c44  str x8,[x19, #0x318]
7101ce0c48  b 0x7101ce0c58
7101ce0c4c  sub x1,x29,#0x50
7101ce0c50  mov x0,x21
7101ce0c54  bl 0x7101b09e60
7101ce0c58  ldur x0,[x29, #-0x48]
7101ce0c5c  stp x22,xzr,[x29, #-0x50]
7101ce0c60  cbz x0,0x7101ce0c68
7101ce0c64  bl 0x710392eb40
7101ce0c68  ldr x0,[x21]
7101ce0c6c  fmov s0,0x3f800000
7101ce0c70  bl 0x710377aee0
7101ce0c74  adrp x8,0x710532f000
7101ce0c78  ldr x8,[x8, #0x8d0]
7101ce0c7c  ldr x0,[x8, #0x8]
7101ce0c80  ldrb w8,[x0, #0x191]
7101ce0c84  cbnz w8,0x7101ce0d10
7101ce0c88  mov x19,#0x8ea1
7101ce0c8c  movk x19,#0x7b45, LSL #16
7101ce0c90  movk x19,#0x14, LSL #32
7101ce0c94  mov w2,#0x4
7101ce0c98  mov x1,x19
7101ce0c9c  bl 0x7103313f20
7101ce0ca0  tbz w0,#0x0,0x7101ce0d10
7101ce0ca4  add x0,sp,#0x40
7101ce0ca8  mov x1,x19
7101ce0cac  add x20,sp,#0x40
7101ce0cb0  bl 0x71024076d0
7101ce0cb4  ldr x9,[sp, #0x50]
7101ce0cb8  add x8,x20,#0x10
7101ce0cbc  adrp x10,0x7104f73000
7101ce0cc0  add x10,x10,#0xd50
7101ce0cc4  str x10,[sp, #0x48]
7101ce0cc8  cbz x9,0x7101ce0e04
7101ce0ccc  adrp x9,0x7106dd5000
7101ce0cd0  ldrb w9,[x9, #0x3a8]
7101ce0cd4  cmp w9,#0x1
7101ce0cd8  b.ne 0x7101ce0ea0
7101ce0cdc  adrp x10,0x7106dd5000
7101ce0ce0  ldr w9,[sp, #0x58]
7101ce0ce4  ldr w10,[x10, #0x3ac]
7101ce0ce8  cmp w9,w10
7101ce0cec  b.ne 0x7101ce0ea0
7101ce0cf0  ldr x9,[sp, #0x50]
7101ce0cf4  ldr wzr,[x9, #0x38]!
7101ce0cf8  ldaxr w10,[x9]
7101ce0cfc  sub w10,w10,#0x1
7101ce0d00  add x20,sp,#0x40
7101ce0d04  stlxr w11,w10,[x9]
7101ce0d08  cbnz w11,0x7101ce0cf8
7101ce0d0c  b 0x7101ce0e04
7101ce0d10  mov x9,#0x650000000000
7101ce0d14  movk x9,#0x87, LSL #48
7101ce0d18  add x20,sp,#0x40
7101ce0d1c  stp xzr,x9,[sp, #0x50]
7101ce0d20  mov x9,#-0x1
7101ce0d24  stp x9,xzr,[sp, #0x68]
7101ce0d28  adrp x9,0x7104f73000
7101ce0d2c  add x9,x9,#0xd50
7101ce0d30  add x8,x20,#0x10
7101ce0d34  strb wzr,[sp, #0x60]
7101ce0d38  str wzr,[sp, #0x40]
7101ce0d3c  str xzr,[sp, #0x78]
7101ce0d40  str x9,[sp, #0x48]
7101ce0d44  b 0x7101ce0e04
7101ce0d48  mov x19,xzr
7101ce0d4c  ldrb w8,[x0, #0x191]
7101ce0d50  cbnz w8,0x7101ce0dd0
7101ce0d54  mov w2,#0x4
7101ce0d58  mov x1,x19
7101ce0d5c  bl 0x7103313f20
7101ce0d60  tbz w0,#0x0,0x7101ce0dd0
7101ce0d64  mov x0,sp
7101ce0d68  mov x1,x19
7101ce0d6c  mov x20,sp
7101ce0d70  bl 0x71024076d0
7101ce0d74  ldr x9,[sp, #0x10]
7101ce0d78  add x8,x20,#0x10
7101ce0d7c  adrp x10,0x7104f73000
7101ce0d80  add x10,x10,#0xd50
7101ce0d84  str x10,[sp, #0x8]
7101ce0d88  cbz x9,0x7101ce0e04
7101ce0d8c  adrp x9,0x7106dd5000
7101ce0d90  ldrb w9,[x9, #0x3a8]
7101ce0d94  cmp w9,#0x1
7101ce0d98  b.ne 0x7101ce0ea8
7101ce0d9c  adrp x10,0x7106dd5000
7101ce0da0  ldr w9,[sp, #0x18]
7101ce0da4  ldr w10,[x10, #0x3ac]
7101ce0da8  cmp w9,w10
7101ce0dac  b.ne 0x7101ce0ea8
7101ce0db0  ldr x9,[sp, #0x10]
7101ce0db4  ldr wzr,[x9, #0x38]!
7101ce0db8  ldaxr w10,[x9]
7101ce0dbc  sub w10,w10,#0x1
7101ce0dc0  mov x20,sp
7101ce0dc4  stlxr w11,w10,[x9]
7101ce0dc8  cbnz w11,0x7101ce0db8
7101ce0dcc  b 0x7101ce0e04
7101ce0dd0  mov x9,#0x650000000000
7101ce0dd4  movk x9,#0x87, LSL #48
7101ce0dd8  mov x20,sp
7101ce0ddc  stp xzr,x9,[sp, #0x10]
7101ce0de0  mov x9,#-0x1
7101ce0de4  stp x9,xzr,[sp, #0x28]
7101ce0de8  adrp x9,0x7104f73000
7101ce0dec  add x9,x9,#0xd50
7101ce0df0  add x8,x20,#0x10
7101ce0df4  strb wzr,[sp, #0x20]
7101ce0df8  str wzr,[sp]
7101ce0dfc  str xzr,[sp, #0x38]
7101ce0e00  str x9,[sp, #0x8]
7101ce0e04  str xzr,[x8]
7101ce0e08  strb wzr,[x20, #0x20]
7101ce0e0c  ldp x29,x30,[sp, #0x150]
7101ce0e10  ldr x28,[sp, #0x110]
7101ce0e14  ldp x20,x19,[sp, #0x140]
7101ce0e18  ldp x22,x21,[sp, #0x130]
7101ce0e1c  ldp x24,x23,[sp, #0x120]
7101ce0e20  add sp,sp,#0x160
7101ce0e24  ret
7101ce0e28  mov w15,w14
7101ce0e2c  mov w14,#0x968
7101ce0e30  madd x14,x15,x14,x20
7101ce0e34  add x0,x14,#0xc8
7101ce0e38  add x14,x9,x9, LSL #0x1
7101ce0e3c  lsl x16,x14,#0x3
7101ce0e40  add x14,x0,x16
7101ce0e44  cbz x16,0x7101ce0ef4
7101ce0e48  ldr w16,[x0]
7101ce0e4c  cmp w16,#0x1
7101ce0e50  b.ne 0x7101ce0e68
7101ce0e54  mov w16,#0x968
7101ce0e58  madd x15,x15,x16,x20
7101ce0e5c  ldr x15,[x15, #0xd0]
7101ce0e60  cmp x15,x1
7101ce0e64  b.eq 0x7101ce0ef4
7101ce0e68  orr w15,wzr,#0x18
7101ce0e6c  mul x15,x9,x15
7101ce0e70  sub x15,x15,#0x18
7101ce0e74  cbz x15,0x7101ce0ef0
7101ce0e78  mov x16,x0
7101ce0e7c  add x0,x0,#0x18
7101ce0e80  ldr w17,[x16, #0x18]
7101ce0e84  sub x15,x15,#0x18
7101ce0e88  cmp w17,#0x1
7101ce0e8c  b.ne 0x7101ce0e74
7101ce0e90  ldr x16,[x16, #0x20]
7101ce0e94  cmp x16,x1
7101ce0e98  b.ne 0x7101ce0e74
7101ce0e9c  b 0x7101ce0ef4
7101ce0ea0  add x20,sp,#0x40
7101ce0ea4  b 0x7101ce0e04
7101ce0ea8  mov x20,sp
7101ce0eac  b 0x7101ce0e04
7101ce0eb0  ldr w8,[x20, #0x26b4]
7101ce0eb4  add w8,w8,#0x1
7101ce0eb8  str w8,[x20, #0x26b4]
7101ce0ebc  b 0x7101ce06d0
7101ce0ec0  ldr w8,[x20, #0x269c]
7101ce0ec4  add w8,w8,#0x1
7101ce0ec8  str w8,[x20, #0x269c]
7101ce0ecc  b 0x7101ce06d0
7101ce0ed0  ldr w8,[x20, #0x2680]
7101ce0ed4  add w8,w8,#0x1
7101ce0ed8  str w8,[x20, #0x2680]
7101ce0edc  b 0x7101ce06d0
7101ce0ee0  ldr w8,[x20, #0x26a8]
7101ce0ee4  add w8,w8,#0x1
7101ce0ee8  str w8,[x20, #0x26a8]
7101ce0eec  b 0x7101ce06d0
7101ce0ef0  mov x0,x14
7101ce0ef4  cmp x14,x0
7101ce0ef8  b.eq 0x7101ce0f54
7101ce0efc  add x1,x0,#0x18
7101ce0f00  add x23,x11,#0xa28
7101ce0f04  subs x2,x14,x1
7101ce0f08  b.eq 0x7101ce0f14
7101ce0f0c  bl 0x71039c00a0
7101ce0f10  ldr x9,[x23]
7101ce0f14  sub x8,x9,#0x1
7101ce0f18  str x8,[x23]
7101ce0f1c  and w8,w21,#0xffff
7101ce0f20  cmp w8,#0x4
7101ce0f24  b.hi 0x7101ce0858
7101ce0f28  and x8,x21,#0xffff
7101ce0f2c  adrp x9,0x71044fa000
7101ce0f30  add x9,x9,#0x44
7101ce0f34  ldrsw x8,[x9, x8, LSL #0x2]
7101ce0f38  add x8,x8,x9
7101ce0f3c  br x8
7101ce0f40  ldr w8,[x20, #0x2690]
7101ce0f44  subs w8,w8,#0x1
7101ce0f48  csel w8,w8,wzr,hi
7101ce0f4c  str w8,[x20, #0x2690]
7101ce0f50  b 0x7101ce0858
7101ce0f54  cmp x10,#0x64
7101ce0f58  b.cs 0x7101ce1040
7101ce0f5c  mov w9,w12
7101ce0f60  mov w12,#0x968
7101ce0f64  mul x9,x9,x12
7101ce0f68  orr w12,wzr,#0x18
7101ce0f6c  mul x10,x10,x12
7101ce0f70  add x9,x20,x9
7101ce0f74  add x9,x9,x10
7101ce0f78  mov w10,#0x1
7101ce0f7c  add x11,x13,#0xa28
7101ce0f80  str w10,[x9, #0xc8]
7101ce0f84  str x1,[x9, #0xd0]
7101ce0f88  str w10,[x9, #0xd8]
7101ce0f8c  ldr x9,[x11]
7101ce0f90  add x9,x9,#0x1
7101ce0f94  str x9,[x11]
7101ce0f98  ldr w9,[x20, #0x266c]
7101ce0f9c  cmp w9,#0x4
7101ce0fa0  b.cs 0x7101ce1040
7101ce0fa4  mov w10,#0x968
7101ce0fa8  madd x11,x9,x10,x20
7101ce0fac  ldr x11,[x11, #0xa28]
7101ce0fb0  cmp x11,#0x63
7101ce0fb4  b.hi 0x7101ce0fd4
7101ce0fb8  add w11,w9,#0x2
7101ce0fbc  cmp w11,#0x4
7101ce0fc0  b.cs 0x7101ce1040
7101ce0fc4  umaddl x10,w11,w10,x20
7101ce0fc8  ldr x10,[x10, #0xa28]
7101ce0fcc  cmp x10,#0x64
7101ce0fd0  b.cc 0x7101ce0858
7101ce0fd4  ldr w10,[x20, #0x2668]
7101ce0fd8  mvn w9,w9
7101ce0fdc  and w9,w9,#0x1
7101ce0fe0  cmp w9,w10
7101ce0fe4  b.eq 0x7101ce0858
7101ce0fe8  str w9,[x8]
7101ce0fec  b 0x7101ce0858
7101ce0ff0  ldr w8,[x20, #0x2680]
7101ce0ff4  subs w8,w8,#0x1
7101ce0ff8  csel w8,w8,wzr,hi
7101ce0ffc  str w8,[x20, #0x2680]
7101ce1000  b 0x7101ce0858
7101ce1004  ldr w8,[x20, #0x269c]
7101ce1008  subs w8,w8,#0x1
7101ce100c  csel w8,w8,wzr,hi
7101ce1010  str w8,[x20, #0x269c]
7101ce1014  b 0x7101ce0858
7101ce1018  ldr w8,[x20, #0x26a8]
7101ce101c  subs w8,w8,#0x1
7101ce1020  csel w8,w8,wzr,hi
7101ce1024  str w8,[x20, #0x26a8]
7101ce1028  b 0x7101ce0858
7101ce102c  ldr w8,[x20, #0x26b4]
7101ce1030  subs w8,w8,#0x1
7101ce1034  csel w8,w8,wzr,hi
7101ce1038  str w8,[x20, #0x26b4]
7101ce103c  b 0x7101ce0858
7101ce1040  bl 0x71039c2650
