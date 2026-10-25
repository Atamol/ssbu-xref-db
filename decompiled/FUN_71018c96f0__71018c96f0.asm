// addr:      71018c96f0
// offset:    0x18c96f0
// name:      FUN_71018c96f0
// mangled:   
// size:      5364

71018c96f0  sub sp,sp,#0x160
71018c96f4  stp x28,x27,[sp, #0x100]
71018c96f8  stp x26,x25,[sp, #0x110]
71018c96fc  stp x24,x23,[sp, #0x120]
71018c9700  stp x22,x21,[sp, #0x130]
71018c9704  stp x20,x19,[sp, #0x140]
71018c9708  stp x29,x30,[sp, #0x150]
71018c970c  add x29,sp,#0x150
71018c9710  mov x21,x1
71018c9714  mov x20,x0
71018c9718  mov w1,#0xf9c8
71018c971c  mov w0,#0x10
71018c9720  bl 0x710392e290
71018c9724  mov x19,x0
71018c9728  cbnz x0,0x71018c9774
71018c972c  adrp x8,0x7105332000
71018c9730  ldr x0,[x8, #0xf00]
71018c9734  cbz x0,0x71018c9770
71018c9738  mov w8,#0xf9c8
71018c973c  str wzr,[sp, #0x8]
71018c9740  add x1,sp,#0x8
71018c9744  str x8,[sp, #0x68]
71018c9748  ldr x8,[x0]
71018c974c  ldr x8,[x8, #0x30]
71018c9750  add x2,sp,#0x68
71018c9754  blr x8
71018c9758  tbz w0,#0x0,0x71018c9770
71018c975c  mov w1,#0xf9c8
71018c9760  mov w0,#0x10
71018c9764  bl 0x710392e290
71018c9768  mov x19,x0
71018c976c  cbnz x0,0x71018c9774
71018c9770  mov x19,xzr
71018c9774  orr w8,wzr,#0x3c
71018c9778  str w8,[x19]
71018c977c  mov w8,#0xffffffff
71018c9780  add x0,x19,#0x30
71018c9784  mov w2,#0x11c
71018c9788  mov w1,wzr
71018c978c  str x20,[sp]
71018c9790  str wzr,[x19, #0x14c]
71018c9794  str x19,[x19, #0x8]
71018c9798  stp xzr,xzr,[x19, #0x20]
71018c979c  str x8,[x19, #0x150]
71018c97a0  str w8,[x19, #0x158]
71018c97a4  strb wzr,[x19, #0x15c]
71018c97a8  stp xzr,xzr,[x19, #0x10]
71018c97ac  bl 0x71039c02a0
71018c97b0  mov w0,#0x10
71018c97b4  mov w1,#0x80
71018c97b8  bl 0x710392e290
71018c97bc  cbnz x0,0x71018c9804
71018c97c0  adrp x8,0x7105332000
71018c97c4  ldr x0,[x8, #0xf00]
71018c97c8  cbz x0,0x71018c9800
71018c97cc  mov w8,#0x80
71018c97d0  str wzr,[sp, #0x8]
71018c97d4  add x1,sp,#0x8
71018c97d8  str x8,[sp, #0x68]
71018c97dc  ldr x8,[x0]
71018c97e0  ldr x8,[x8, #0x30]
71018c97e4  add x2,sp,#0x68
71018c97e8  blr x8
71018c97ec  tbz w0,#0x0,0x71018c9800
71018c97f0  mov w0,#0x10
71018c97f4  mov w1,#0x80
71018c97f8  bl 0x710392e290
71018c97fc  cbnz x0,0x71018c9804
71018c9800  mov x0,xzr
71018c9804  adrp x8,0x7105181000
71018c9808  add x8,x8,#0xb40
71018c980c  mov x9,x0
71018c9810  str x8,[x0]
71018c9814  mov x8,x0
71018c9818  mov x10,x0
71018c981c  str xzr,[x9, #0x10]!
71018c9820  str x9,[x0, #0x8]
71018c9824  mov x11,x0
71018c9828  mov w22,#0x2
71018c982c  str xzr,[x8, #0x28]!
71018c9830  stp xzr,x8,[x0, #0x18]
71018c9834  adrp x9,0x710532f000
71018c9838  str xzr,[x10, #0x40]!
71018c983c  stp xzr,x10,[x0, #0x30]
71018c9840  mov x26,#0x303
71018c9844  movk x26,#0xa04, LSL #16
71018c9848  str xzr,[x0, #0x60]
71018c984c  orr x23,xzr,#0x101010101010101
71018c9850  str xzr,[x11, #0x58]!
71018c9854  str w22,[x0, #0x68]
71018c9858  mov x25,#0xb0a
71018c985c  movk x25,#0xc, LSL #16
71018c9860  str wzr,[x0, #0x78]
71018c9864  mov w28,#0x205
71018c9868  add x8,x19,#0x1db
71018c986c  str xzr,[x0, #0x70]
71018c9870  movk x26,#0xc0b, LSL #32
71018c9874  movk x26,#0x100, LSL #48
71018c9878  stp xzr,x11,[x0, #0x48]
71018c987c  movk x23,#0x404, LSL #32
71018c9880  movk x23,#0x303, LSL #48
71018c9884  movk x25,#0x501, LSL #32
71018c9888  movk x25,#0x202, LSL #48
71018c988c  str x0,[x19, #0x160]
71018c9890  ldr x9,[x9, #0x840]
71018c9894  ldr x10,[x9, #0x8]
71018c9898  ldr x10,[x10, #0xb8]
71018c989c  str x10,[x19, #0x168]
71018c98a0  ldr x9,[x9, #0x8]
71018c98a4  ldr x9,[x9, #0xc0]
71018c98a8  str wzr,[x19, #0x198]
71018c98ac  str x9,[x19, #0x170]
71018c98b0  stp xzr,xzr,[x19, #0x188]
71018c98b4  add x10,x19,#0x1d3
71018c98b8  stp xzr,xzr,[x19, #0x178]
71018c98bc  ldr w9,[x21, #0x10]
71018c98c0  mov w20,#0xffffffff
71018c98c4  add x11,x19,#0x1e3
71018c98c8  str w20,[x19, #0x1a0]
71018c98cc  strb wzr,[x19, #0x1a4]
71018c98d0  str x26,[x19, #0x1c8]
71018c98d4  strh w28,[x19, #0x1d0]
71018c98d8  strb w22,[x19, #0x1d2]
71018c98dc  mov w21,#0xd0d
71018c98e0  mov w24,#0x304
71018c98e4  movk w24,#0x2, LSL #16
71018c98e8  add x0,x19,#0x1f4
71018c98ec  str w9,[x19, #0x19c]
71018c98f0  add x9,x19,#0x1e7
71018c98f4  str x23,[x10]
71018c98f8  str x25,[x8]
71018c98fc  add x8,x19,#0x1e9
71018c9900  orr w10,wzr,#0x1010101
71018c9904  str w10,[x11]
71018c9908  strh w21,[x9]
71018c990c  str w24,[x8]
71018c9910  add x8,x19,#0x1ed
71018c9914  mov w27,#0x102
71018c9918  mov w2,#0xf788
71018c991c  mov w1,wzr
71018c9920  strh w27,[x8]
71018c9924  add x8,x19,#0x1ef
71018c9928  str w10,[x8]
71018c992c  strh wzr,[x19, #0x1b0]
71018c9930  str xzr,[x19, #0x1a8]
71018c9934  bl 0x71039c02a0
71018c9938  mov w8,#0xf97c
71018c993c  str w20,[x19, x8, LSL #0x0]
71018c9940  mov w8,#0xf980
71018c9944  str x26,[x19, x8, LSL #0x0]
71018c9948  mov w8,#0xf988
71018c994c  strh w28,[x19, x8, LSL #0x0]
71018c9950  mov w8,#0xf98a
71018c9954  strb w22,[x19, x8, LSL ]
71018c9958  mov w8,#0xf98b
71018c995c  str x23,[x19, x8, LSL #0x0]
71018c9960  mov w8,#0xf993
71018c9964  str x25,[x19, x8, LSL #0x0]
71018c9968  mov w8,#0xf99b
71018c996c  orr w9,wzr,#0x1010101
71018c9970  str w9,[x19, x8, LSL #0x0]
71018c9974  mov w8,#0xf99f
71018c9978  strh w21,[x19, x8, LSL #0x0]
71018c997c  mov w8,#0xf9a1
71018c9980  str w24,[x19, x8, LSL #0x0]
71018c9984  mov w8,#0xf9a5
71018c9988  orr w24,wzr,#0x1010101
71018c998c  strh w27,[x19, x8, LSL #0x0]
71018c9990  mov w8,#0xf9a7
71018c9994  str w24,[x19, x8, LSL #0x0]
71018c9998  mov w8,#0xf9ac
71018c999c  str xzr,[x19, x8, LSL #0x0]
71018c99a0  mov w8,#0xf9b8
71018c99a4  add x0,x19,x8
71018c99a8  bl 0x7103391a80
71018c99ac  mov w8,#0xf9c0
71018c99b0  add x21,x19,x8
71018c99b4  adrp x8,0x7105314000
71018c99b8  add x8,x8,#0x4d8
71018c99bc  ldarb w8,[x8]
71018c99c0  tbz w8,#0x0,0x71018cab9c
71018c99c4  adrp x8,0x7105305000
71018c99c8  ldr w8,[x8, #0xf0]
71018c99cc  mov w9,#0x3020000
71018c99d0  cmp w8,w9
71018c99d4  adrp x9,0x71018c2000
71018c99d8  add x9,x9,#0x210
71018c99dc  cset w8,eq
71018c99e0  strb w8,[x21]
71018c99e4  adrp x8,0x71018c1000
71018c99e8  add x8,x8,#0x740
71018c99ec  stp x8,xzr,[x19, #0x30]
71018c99f0  adrp x8,0x71018c1000
71018c99f4  add x8,x8,#0x780
71018c99f8  stp x9,xzr,[x19, #0x50]
71018c99fc  adrp x9,0x71018c2000
71018c9a00  add x9,x9,#0xcb0
71018c9a04  stp x9,xzr,[x19, #0x80]
71018c9a08  adrp x9,0x71018c3000
71018c9a0c  add x9,x9,#0x9c0
71018c9a10  stp x8,xzr,[x19, #0x40]
71018c9a14  adrp x8,0x71018c2000
71018c9a18  add x8,x8,#0x9a0
71018c9a1c  stp x8,xzr,[x19, #0x60]
71018c9a20  adrp x8,0x71018c2000
71018c9a24  add x8,x8,#0xbf0
71018c9a28  stp x8,xzr,[x19, #0x70]
71018c9a2c  adrp x8,0x71018c3000
71018c9a30  add x8,x8,#0x240
71018c9a34  stp x8,xzr,[x19, #0x90]
71018c9a38  adrp x8,0x71018c3000
71018c9a3c  add x8,x8,#0x660
71018c9a40  stp x8,xzr,[x19, #0xa0]
71018c9a44  adrp x8,0x71018c3000
71018c9a48  add x8,x8,#0xd20
71018c9a4c  stp x9,xzr,[x19, #0xb0]
71018c9a50  adrp x9,0x71018c4000
71018c9a54  add x9,x9,#0x3b0
71018c9a58  stp x8,xzr,[x19, #0xc0]
71018c9a5c  adrp x8,0x71018c4000
71018c9a60  add x8,x8,#0x270
71018c9a64  stp x9,xzr,[x19, #0xe0]
71018c9a68  adrp x9,0x71018c4000
71018c9a6c  add x9,x9,#0x5c0
71018c9a70  stp x8,xzr,[x19, #0xd0]
71018c9a74  ldrsw x8,[x19, #0x14c]
71018c9a78  cmp w8,#0x13
71018c9a7c  stp x9,xzr,[x19, #0xf0]
71018c9a80  ldr x20,[sp]
71018c9a84  b.cs 0x71018cabe0
71018c9a88  add x8,x19,x8, LSL #0x2
71018c9a8c  str wzr,[x8, #0x100]
71018c9a90  ldr x21,[x20, #0x58]
71018c9a94  str x19,[x20, #0x58]
71018c9a98  cbz x21,0x71018c9b0c
71018c9a9c  mov x0,x21
71018c9aa0  bl 0x71018c46f0
71018c9aa4  mov w8,#0xf9b8
71018c9aa8  add x0,x21,x8
71018c9aac  bl 0x7103391e50
71018c9ab0  ldr x0,[x21, #0x188]
71018c9ab4  str xzr,[x21, #0x188]
71018c9ab8  cbz x0,0x71018c9ac0
71018c9abc  bl 0x71032cad20
71018c9ac0  ldr x0,[x21, #0x180]
71018c9ac4  str xzr,[x21, #0x180]
71018c9ac8  cbz x0,0x71018c9ad0
71018c9acc  bl 0x71032cad20
71018c9ad0  ldr x0,[x21, #0x178]
71018c9ad4  str xzr,[x21, #0x178]
71018c9ad8  cbz x0,0x71018c9ae0
71018c9adc  bl 0x71032cad20
71018c9ae0  ldr x0,[x21, #0x160]
71018c9ae4  bl 0x710323b9e0
71018c9ae8  ldr x0,[x21, #0x160]
71018c9aec  str xzr,[x21, #0x160]
71018c9af0  cbz x0,0x71018c9b00
71018c9af4  ldr x8,[x0]
71018c9af8  ldr x8,[x8, #0x8]
71018c9afc  blr x8
71018c9b00  mov x0,x21
71018c9b04  bl 0x710392eb40
71018c9b08  ldr x19,[x20, #0x58]
71018c9b0c  ldr x8,[x19, #0x160]
71018c9b10  mov w9,#0x1
71018c9b14  str x9,[x8, #0x70]
71018c9b18  ldr x0,[x19, #0x160]
71018c9b1c  ldrsw x2,[x0, #0x70]
71018c9b20  ldr w3,[x0, #0x68]
71018c9b24  mov x28,#0xad60
71018c9b28  movk x28,#0xf525, LSL #16
71018c9b2c  mov x27,#0x6117
71018c9b30  movk x27,#0xd5d0, LSL #16
71018c9b34  adrp x1,0x7104545000
71018c9b38  add x1,x1,#0x5f8
71018c9b3c  mov w4,wzr
71018c9b40  movk x28,#0x22, LSL #32
71018c9b44  movk x27,#0x1d, LSL #32
71018c9b48  add x20,x19,#0x160
71018c9b4c  bl 0x710323beb0
71018c9b50  ldr x0,[x19, #0x160]
71018c9b54  str x27,[sp, #0x68]
71018c9b58  ldrsw x2,[x0, #0x70]
71018c9b5c  ldr w3,[x0, #0x68]
71018c9b60  add x1,sp,#0x68
71018c9b64  mov w4,#0x1
71018c9b68  bl 0x710323beb0
71018c9b6c  ldr x0,[x19, #0x160]
71018c9b70  str x28,[sp, #0x68]
71018c9b74  ldrsw x2,[x0, #0x70]
71018c9b78  ldr w3,[x0, #0x68]
71018c9b7c  add x1,sp,#0x68
71018c9b80  mov w4,#0x1
71018c9b84  bl 0x710323beb0
71018c9b88  ldr x0,[x19, #0x160]
71018c9b8c  ldrsw x2,[x0, #0x70]
71018c9b90  ldr w3,[x0, #0x68]
71018c9b94  adrp x21,0x7104545000
71018c9b98  add x21,x21,#0x600
71018c9b9c  mov w4,#0x1
71018c9ba0  mov x1,x21
71018c9ba4  bl 0x710323beb0
71018c9ba8  ldr x0,[x19, #0x160]
71018c9bac  str x27,[sp, #0x68]
71018c9bb0  ldrsw x2,[x0, #0x70]
71018c9bb4  ldr w3,[x0, #0x68]
71018c9bb8  add x1,sp,#0x68
71018c9bbc  mov w4,#0x1
71018c9bc0  bl 0x710323beb0
71018c9bc4  ldr x0,[x19, #0x160]
71018c9bc8  str x28,[sp, #0x68]
71018c9bcc  ldrsw x2,[x0, #0x70]
71018c9bd0  ldr w3,[x0, #0x68]
71018c9bd4  add x1,sp,#0x68
71018c9bd8  mov w4,#0x1
71018c9bdc  bl 0x710323beb0
71018c9be0  ldr x0,[x19, #0x160]
71018c9be4  ldrsw x2,[x0, #0x70]
71018c9be8  ldr w3,[x0, #0x68]
71018c9bec  add x1,x21,#0x8
71018c9bf0  mov w4,#0x1
71018c9bf4  bl 0x710323beb0
71018c9bf8  ldr x21,[x19, #0x160]
71018c9bfc  mov x0,x21
71018c9c00  bl 0x710323cb80
71018c9c04  tbnz w0,#0x0,0x71018c9c24
71018c9c08  mov w22,#0x4240
71018c9c0c  movk w22,#0xf, LSL #16
71018c9c10  mov x0,x22
71018c9c14  bl 0x71039c0d80
71018c9c18  mov x0,x21
71018c9c1c  bl 0x710323cb80
71018c9c20  tbz w0,#0x0,0x71018c9c10
71018c9c24  mov w1,#0x88
71018c9c28  mov w0,#0x10
71018c9c2c  bl 0x710392e290
71018c9c30  mov x21,x0
71018c9c34  cbnz x0,0x71018c9c80
71018c9c38  adrp x8,0x7105332000
71018c9c3c  ldr x0,[x8, #0xf00]
71018c9c40  cbz x0,0x71018c9c7c
71018c9c44  mov w8,#0x88
71018c9c48  str wzr,[sp, #0x8]
71018c9c4c  add x1,sp,#0x8
71018c9c50  str x8,[sp, #0x68]
71018c9c54  ldr x8,[x0]
71018c9c58  ldr x8,[x8, #0x30]
71018c9c5c  add x2,sp,#0x68
71018c9c60  blr x8
71018c9c64  tbz w0,#0x0,0x71018c9c7c
71018c9c68  mov w1,#0x88
71018c9c6c  mov w0,#0x10
71018c9c70  bl 0x710392e290
71018c9c74  mov x21,x0
71018c9c78  cbnz x0,0x71018c9c80
71018c9c7c  mov x21,xzr
71018c9c80  adrp x8,0x71050af000
71018c9c84  add x8,x8,#0xa8
71018c9c88  mov w1,#0xc8
71018c9c8c  stp x8,xzr,[x21]
71018c9c90  orr x8,xzr,#0x1ffffffff
71018c9c94  stp xzr,x8,[x21, #0x60]
71018c9c98  mov w8,#0x1
71018c9c9c  mov w0,#0x10
71018c9ca0  stp xzr,xzr,[x21, #0x10]
71018c9ca4  strb wzr,[x21, #0x58]
71018c9ca8  str x20,[x21, #0x78]
71018c9cac  strb w8,[x21, #0x70]
71018c9cb0  stp xzr,xzr,[x21, #0x48]
71018c9cb4  bl 0x710392e290
71018c9cb8  cbnz x0,0x71018c9d00
71018c9cbc  adrp x8,0x7105332000
71018c9cc0  ldr x0,[x8, #0xf00]
71018c9cc4  cbz x0,0x71018c9cfc
71018c9cc8  mov w8,#0xc8
71018c9ccc  str wzr,[sp, #0x8]
71018c9cd0  add x1,sp,#0x8
71018c9cd4  str x8,[sp, #0x68]
71018c9cd8  ldr x8,[x0]
71018c9cdc  ldr x8,[x8, #0x30]
71018c9ce0  add x2,sp,#0x68
71018c9ce4  blr x8
71018c9ce8  tbz w0,#0x0,0x71018c9cfc
71018c9cec  mov w1,#0xc8
71018c9cf0  mov w0,#0x10
71018c9cf4  bl 0x710392e290
71018c9cf8  cbnz x0,0x71018c9d00
71018c9cfc  mov x0,xzr
71018c9d00  mov w8,#0x1000
71018c9d04  str w8,[x0, #0x8]
71018c9d08  mov x8,x0
71018c9d0c  stp xzr,xzr,[x0, #0x18]
71018c9d10  mov x3,#0x657
71018c9d14  movk x3,#0xa42d, LSL #16
71018c9d18  str xzr,[x0, #0x10]
71018c9d1c  adrp x2,0x71050af000
71018c9d20  add x2,x2,#0x88
71018c9d24  movk x3,#0x2a, LSL #32
71018c9d28  mov w4,#0x1
71018c9d2c  str xzr,[x8, #0x30]!
71018c9d30  str x8,[x0, #0x28]
71018c9d34  adrp x8,0x71050ae000
71018c9d38  add x8,x8,#0xf98
71018c9d3c  str x8,[x0]
71018c9d40  adrp x8,0x71050ae000
71018c9d44  add x8,x8,#0xfe0
71018c9d48  stp xzr,x8,[x0, #0x48]
71018c9d4c  orr x8,xzr,#-0x100000000
71018c9d50  mov x1,x20
71018c9d54  stp xzr,xzr,[x0, #0x38]
71018c9d58  str wzr,[x0, #0xb0]
71018c9d5c  str xzr,[x0, #0x58]
71018c9d60  str x8,[x0, #0xb8]
71018c9d64  strb wzr,[x0, #0xc0]
71018c9d68  stp xzr,xzr,[x0, #0xa0]
71018c9d6c  stp xzr,xzr,[x0, #0x90]
71018c9d70  stp xzr,xzr,[x0, #0x80]
71018c9d74  stp xzr,xzr,[x0, #0x70]
71018c9d78  stp xzr,xzr,[x0, #0x60]
71018c9d7c  str x0,[x21, #0x80]
71018c9d80  bl 0x71032cb040
71018c9d84  ldr x25,[x21, #0x80]
71018c9d88  mov x0,x25
71018c9d8c  ldr x8,[x0, #0x10]!
71018c9d90  ldr x9,[x25, #0x18]
71018c9d94  cmp x9,x8
71018c9d98  b.eq 0x71018cabdc
71018c9d9c  ldr x8,[x8]
71018c9da0  ldr x8,[x8]
71018c9da4  ldr x9,[x8]
71018c9da8  ldr x9,[x9]
71018c9dac  ldr x9,[x9, #0x600]
71018c9db0  mov w10,#0x20
71018c9db4  str w10,[x9, #0x10]
71018c9db8  ldr x9,[x8]
71018c9dbc  ldr x9,[x9]
71018c9dc0  ldr x9,[x9, #0x600]
71018c9dc4  mov w10,#0x40
71018c9dc8  str w10,[x9, #0x14]
71018c9dcc  ldr x8,[x8]
71018c9dd0  ldr x8,[x8]
71018c9dd4  ldr x8,[x8, #0x600]
71018c9dd8  mov w9,#0x10
71018c9ddc  str w9,[x8, #0x18]
71018c9de0  ldr x8,[x25, #0x40]
71018c9de4  cbz x8,0x71018ca45c
71018c9de8  ldr x8,[x8]
71018c9dec  cbz x8,0x71018c9df8
71018c9df0  ldr x22,[x8]
71018c9df4  b 0x71018c9dfc
71018c9df8  mov x22,xzr
71018c9dfc  ldp x8,x9,[x25, #0x10]
71018c9e00  cmp x9,x8
71018c9e04  b.eq 0x71018cabdc
71018c9e08  ldr x8,[x8]
71018c9e0c  ldr x2,[x8]
71018c9e10  adrp x1,0x7104270000
71018c9e14  add x1,x1,#0x556
71018c9e18  mov x0,x22
71018c9e1c  bl 0x71033743c0
71018c9e20  add x2,x25,#0x48
71018c9e24  adrp x1,0x710436c000
71018c9e28  add x1,x1,#0x678
71018c9e2c  mov x0,x22
71018c9e30  bl 0x71033744b0
71018c9e34  ldr x22,[x25, #0x40]
71018c9e38  ldr x0,[x22]
71018c9e3c  cbz x0,0x71018c9fd4
71018c9e40  adrp x1,0x71042d6000
71018c9e44  add x1,x1,#0x567
71018c9e48  adrp x2,0x71042b2000
71018c9e4c  add x2,x2,#0xa84
71018c9e50  orr w3,wzr,#0x6
71018c9e54  bl 0x7103375650
71018c9e58  ldr x22,[x25, #0x40]
71018c9e5c  ldr x0,[x22]
71018c9e60  cbz x0,0x71018c9fd4
71018c9e64  adrp x1,0x7104308000
71018c9e68  add x1,x1,#0x790
71018c9e6c  adrp x2,0x71042b2000
71018c9e70  add x2,x2,#0xa84
71018c9e74  mov w3,#0xffffffff
71018c9e78  bl 0x7103375650
71018c9e7c  ldr x22,[x25, #0x40]
71018c9e80  ldr x0,[x22]
71018c9e84  cbz x0,0x71018c9fd4
71018c9e88  adrp x1,0x710425f000
71018c9e8c  add x1,x1,#0x712
71018c9e90  adrp x2,0x71042b2000
71018c9e94  add x2,x2,#0xa84
71018c9e98  orr w3,wzr,#0xfffffffe
71018c9e9c  bl 0x7103375650
71018c9ea0  ldr x22,[x25, #0x40]
71018c9ea4  ldr x0,[x22]
71018c9ea8  cbz x0,0x71018c9fd4
71018c9eac  adrp x1,0x7104454000
71018c9eb0  add x1,x1,#0xd15
71018c9eb4  adrp x2,0x71042b2000
71018c9eb8  add x2,x2,#0xa84
71018c9ebc  orr w3,wzr,#0xfffffffd
71018c9ec0  bl 0x7103375650
71018c9ec4  ldr x22,[x25, #0x40]
71018c9ec8  ldr x0,[x22]
71018c9ecc  cbz x0,0x71018c9fd4
71018c9ed0  adrp x1,0x7104319000
71018c9ed4  add x1,x1,#0x1c9
71018c9ed8  adrp x2,0x71042b2000
71018c9edc  add x2,x2,#0xa84
71018c9ee0  mov w3,wzr
71018c9ee4  bl 0x7103375650
71018c9ee8  ldr x22,[x25, #0x40]
71018c9eec  ldr x0,[x22]
71018c9ef0  cbz x0,0x71018c9fd4
71018c9ef4  adrp x1,0x710425f000
71018c9ef8  add x1,x1,#0x723
71018c9efc  adrp x2,0x71042b2000
71018c9f00  add x2,x2,#0xa84
71018c9f04  mov w3,#0x1
71018c9f08  bl 0x7103375650
71018c9f0c  ldr x22,[x25, #0x40]
71018c9f10  ldr x0,[x22]
71018c9f14  cbz x0,0x71018c9fd4
71018c9f18  adrp x1,0x7104454000
71018c9f1c  add x1,x1,#0xd25
71018c9f20  adrp x2,0x71042b2000
71018c9f24  add x2,x2,#0xa84
71018c9f28  mov w3,#0x2
71018c9f2c  bl 0x7103375650
71018c9f30  ldr x22,[x25, #0x40]
71018c9f34  ldr x0,[x22]
71018c9f38  cbz x0,0x71018c9fd4
71018c9f3c  adrp x1,0x710425f000
71018c9f40  add x1,x1,#0x733
71018c9f44  adrp x2,0x71042d5000
71018c9f48  add x2,x2,#0x20
71018c9f4c  adrp x3,0x710439d000
71018c9f50  add x3,x3,#0x6b7
71018c9f54  bl 0x7103375650
71018c9f58  ldr x22,[x25, #0x40]
71018c9f5c  ldr x0,[x22]
71018c9f60  cbz x0,0x71018c9fd4
71018c9f64  adrp x1,0x7104280000
71018c9f68  add x1,x1,#0xce6
71018c9f6c  adrp x2,0x71042d5000
71018c9f70  add x2,x2,#0x20
71018c9f74  adrp x3,0x71042f8000
71018c9f78  add x3,x3,#0x5c2
71018c9f7c  bl 0x7103375650
71018c9f80  ldr x22,[x25, #0x40]
71018c9f84  ldr x0,[x22]
71018c9f88  cbz x0,0x71018c9fd4
71018c9f8c  adrp x1,0x71042f8000
71018c9f90  add x1,x1,#0x5db
71018c9f94  adrp x2,0x71042d5000
71018c9f98  add x2,x2,#0x20
71018c9f9c  adrp x3,0x710434a000
71018c9fa0  add x3,x3,#0x64a
71018c9fa4  bl 0x7103375650
71018c9fa8  ldr x22,[x25, #0x40]
71018c9fac  ldr x0,[x22]
71018c9fb0  cbz x0,0x71018c9fd4
71018c9fb4  adrp x1,0x71043e0000
71018c9fb8  add x1,x1,#0x3b4
71018c9fbc  adrp x2,0x71042d5000
71018c9fc0  add x2,x2,#0x20
71018c9fc4  adrp x3,0x710434a000
71018c9fc8  add x3,x3,#0x662
71018c9fcc  bl 0x7103375650
71018c9fd0  ldr x22,[x25, #0x40]
71018c9fd4  mov w1,#0x28
71018c9fd8  mov w0,#0x10
71018c9fdc  bl 0x710392e290
71018c9fe0  cbnz x0,0x71018ca028
71018c9fe4  adrp x8,0x7105332000
71018c9fe8  ldr x0,[x8, #0xf00]
71018c9fec  cbz x0,0x71018ca024
71018c9ff0  mov w8,#0x28
71018c9ff4  str wzr,[sp, #0x8]
71018c9ff8  add x1,sp,#0x8
71018c9ffc  str x8,[sp, #0x68]
71018ca000  ldr x8,[x0]
71018ca004  ldr x8,[x8, #0x30]
71018ca008  add x2,sp,#0x68
71018ca00c  blr x8
71018ca010  tbz w0,#0x0,0x71018ca024
71018ca014  mov w1,#0x28
71018ca018  mov w0,#0x10
71018ca01c  bl 0x710392e290
71018ca020  cbnz x0,0x71018ca028
71018ca024  mov x0,xzr
71018ca028  adrp x26,0x71050af000
71018ca02c  add x26,x26,#0x20
71018ca030  adrp x8,0x7101d37000
71018ca034  add x8,x8,#0x7b0
71018ca038  str x26,[x0]
71018ca03c  str xzr,[x0, #0x20]
71018ca040  stp x25,x8,[x0, #0x10]
71018ca044  adrp x1,0x7104443000
71018ca048  add x1,x1,#0xa22
71018ca04c  str wzr,[x0, #0x8]
71018ca050  add x2,sp,#0x8
71018ca054  str x0,[sp, #0x8]
71018ca058  mov x0,x22
71018ca05c  bl 0x7103376af0
71018ca060  ldr x0,[sp, #0x8]
71018ca064  str xzr,[sp, #0x8]
71018ca068  cbz x0,0x71018ca078
71018ca06c  ldr x8,[x0]
71018ca070  ldr x8,[x8, #0x8]
71018ca074  blr x8
71018ca078  ldr x22,[x25, #0x40]
71018ca07c  mov w1,#0x28
71018ca080  mov w0,#0x10
71018ca084  bl 0x710392e290
71018ca088  cbnz x0,0x71018ca0d0
71018ca08c  adrp x8,0x7105332000
71018ca090  ldr x0,[x8, #0xf00]
71018ca094  cbz x0,0x71018ca0cc
71018ca098  mov w8,#0x28
71018ca09c  stur wzr,[x29, #-0x68]
71018ca0a0  sub x1,x29,#0x68
71018ca0a4  str x8,[sp, #0x68]
71018ca0a8  ldr x8,[x0]
71018ca0ac  ldr x8,[x8, #0x30]
71018ca0b0  add x2,sp,#0x68
71018ca0b4  blr x8
71018ca0b8  tbz w0,#0x0,0x71018ca0cc
71018ca0bc  mov w1,#0x28
71018ca0c0  mov w0,#0x10
71018ca0c4  bl 0x710392e290
71018ca0c8  cbnz x0,0x71018ca0d0
71018ca0cc  mov x0,xzr
71018ca0d0  adrp x8,0x7101d37000
71018ca0d4  add x8,x8,#0x880
71018ca0d8  str x26,[x0]
71018ca0dc  stp x25,x8,[x0, #0x10]
71018ca0e0  adrp x1,0x710438c000
71018ca0e4  add x1,x1,#0xdbb
71018ca0e8  str xzr,[x0, #0x20]
71018ca0ec  sub x2,x29,#0x68
71018ca0f0  str wzr,[x0, #0x8]
71018ca0f4  stur x0,[x29, #-0x68]
71018ca0f8  mov x0,x22
71018ca0fc  bl 0x7103376af0
71018ca100  ldur x0,[x29, #-0x68]
71018ca104  stur xzr,[x29, #-0x68]
71018ca108  cbz x0,0x71018ca118
71018ca10c  ldr x8,[x0]
71018ca110  ldr x8,[x8, #0x8]
71018ca114  blr x8
71018ca118  ldr x22,[x25, #0x40]
71018ca11c  mov w0,#0x10
71018ca120  orr w1,wzr,#0x38
71018ca124  bl 0x710392e290
71018ca128  cbnz x0,0x71018ca170
71018ca12c  adrp x8,0x7105332000
71018ca130  ldr x0,[x8, #0xf00]
71018ca134  cbz x0,0x71018ca16c
71018ca138  orr w8,wzr,#0x38
71018ca13c  stur wzr,[x29, #-0x70]
71018ca140  sub x1,x29,#0x70
71018ca144  str x8,[sp, #0x68]
71018ca148  ldr x8,[x0]
71018ca14c  ldr x8,[x8, #0x30]
71018ca150  add x2,sp,#0x68
71018ca154  blr x8
71018ca158  tbz w0,#0x0,0x71018ca16c
71018ca15c  mov w0,#0x10
71018ca160  orr w1,wzr,#0x38
71018ca164  bl 0x710392e290
71018ca168  cbnz x0,0x71018ca170
71018ca16c  mov x0,xzr
71018ca170  adrp x8,0x7101d37000
71018ca174  add x8,x8,#0x8d0
71018ca178  adrp x23,0x71050af000
71018ca17c  add x23,x23,#0x48
71018ca180  stp x8,xzr,[x0, #0x18]
71018ca184  mov w8,#0x1
71018ca188  stp xzr,xzr,[x0, #0x28]
71018ca18c  str x23,[x0]
71018ca190  adrp x1,0x7104319000
71018ca194  add x1,x1,#0x1d4
71018ca198  str x25,[x0, #0x10]
71018ca19c  sub x2,x29,#0x70
71018ca1a0  str w8,[x0, #0x8]
71018ca1a4  stur x0,[x29, #-0x70]
71018ca1a8  mov x0,x22
71018ca1ac  bl 0x7103376af0
71018ca1b0  ldur x0,[x29, #-0x70]
71018ca1b4  stur xzr,[x29, #-0x70]
71018ca1b8  cbz x0,0x71018ca1c8
71018ca1bc  ldr x8,[x0]
71018ca1c0  ldr x8,[x8, #0x8]
71018ca1c4  blr x8
71018ca1c8  ldr x22,[x25, #0x40]
71018ca1cc  mov w0,#0x10
71018ca1d0  orr w1,wzr,#0x38
71018ca1d4  bl 0x710392e290
71018ca1d8  cbnz x0,0x71018ca220
71018ca1dc  adrp x8,0x7105332000
71018ca1e0  ldr x0,[x8, #0xf00]
71018ca1e4  cbz x0,0x71018ca21c
71018ca1e8  orr w8,wzr,#0x38
71018ca1ec  stur wzr,[x29, #-0x78]
71018ca1f0  sub x1,x29,#0x78
71018ca1f4  str x8,[sp, #0x68]
71018ca1f8  ldr x8,[x0]
71018ca1fc  ldr x8,[x8, #0x30]
71018ca200  add x2,sp,#0x68
71018ca204  blr x8
71018ca208  tbz w0,#0x0,0x71018ca21c
71018ca20c  mov w0,#0x10
71018ca210  orr w1,wzr,#0x38
71018ca214  bl 0x710392e290
71018ca218  cbnz x0,0x71018ca220
71018ca21c  mov x0,xzr
71018ca220  adrp x8,0x7101d37000
71018ca224  add x8,x8,#0x920
71018ca228  str x23,[x0]
71018ca22c  stp x8,xzr,[x0, #0x18]
71018ca230  mov w8,#0x1
71018ca234  stp xzr,xzr,[x0, #0x28]
71018ca238  adrp x1,0x710437c000
71018ca23c  add x1,x1,#0x832
71018ca240  sub x2,x29,#0x78
71018ca244  str x25,[x0, #0x10]
71018ca248  str w8,[x0, #0x8]
71018ca24c  stur x0,[x29, #-0x78]
71018ca250  mov x0,x22
71018ca254  bl 0x7103376af0
71018ca258  ldur x0,[x29, #-0x78]
71018ca25c  stur xzr,[x29, #-0x78]
71018ca260  cbz x0,0x71018ca270
71018ca264  ldr x8,[x0]
71018ca268  ldr x8,[x8, #0x8]
71018ca26c  blr x8
71018ca270  ldr x22,[x25, #0x40]
71018ca274  mov w1,#0x28
71018ca278  mov w0,#0x10
71018ca27c  bl 0x710392e290
71018ca280  cbnz x0,0x71018ca2c8
71018ca284  adrp x8,0x7105332000
71018ca288  ldr x0,[x8, #0xf00]
71018ca28c  cbz x0,0x71018ca2c4
71018ca290  mov w8,#0x28
71018ca294  stur wzr,[x29, #-0x80]
71018ca298  sub x1,x29,#0x80
71018ca29c  str x8,[sp, #0x68]
71018ca2a0  ldr x8,[x0]
71018ca2a4  ldr x8,[x8, #0x30]
71018ca2a8  add x2,sp,#0x68
71018ca2ac  blr x8
71018ca2b0  tbz w0,#0x0,0x71018ca2c4
71018ca2b4  mov w1,#0x28
71018ca2b8  mov w0,#0x10
71018ca2bc  bl 0x710392e290
71018ca2c0  cbnz x0,0x71018ca2c8
71018ca2c4  mov x0,xzr
71018ca2c8  adrp x8,0x7101d37000
71018ca2cc  add x8,x8,#0x990
71018ca2d0  str x26,[x0]
71018ca2d4  stp x25,x8,[x0, #0x10]
71018ca2d8  adrp x1,0x7104454000
71018ca2dc  add x1,x1,#0xd45
71018ca2e0  str xzr,[x0, #0x20]
71018ca2e4  sub x2,x29,#0x80
71018ca2e8  str wzr,[x0, #0x8]
71018ca2ec  stur x0,[x29, #-0x80]
71018ca2f0  mov x0,x22
71018ca2f4  bl 0x7103376af0
71018ca2f8  ldur x0,[x29, #-0x80]
71018ca2fc  stur xzr,[x29, #-0x80]
71018ca300  cbz x0,0x71018ca310
71018ca304  ldr x8,[x0]
71018ca308  ldr x8,[x8, #0x8]
71018ca30c  blr x8
71018ca310  ldr x22,[x25, #0x40]
71018ca314  mov w1,#0x28
71018ca318  mov w0,#0x10
71018ca31c  bl 0x710392e290
71018ca320  cbnz x0,0x71018ca368
71018ca324  adrp x8,0x7105332000
71018ca328  ldr x0,[x8, #0xf00]
71018ca32c  cbz x0,0x71018ca364
71018ca330  mov w8,#0x28
71018ca334  stur wzr,[x29, #-0x88]
71018ca338  sub x1,x29,#0x88
71018ca33c  str x8,[sp, #0x68]
71018ca340  ldr x8,[x0]
71018ca344  ldr x8,[x8, #0x30]
71018ca348  add x2,sp,#0x68
71018ca34c  blr x8
71018ca350  tbz w0,#0x0,0x71018ca364
71018ca354  mov w1,#0x28
71018ca358  mov w0,#0x10
71018ca35c  bl 0x710392e290
71018ca360  cbnz x0,0x71018ca368
71018ca364  mov x0,xzr
71018ca368  adrp x8,0x7101d37000
71018ca36c  add x8,x8,#0xc00
71018ca370  str x26,[x0]
71018ca374  stp x25,x8,[x0, #0x10]
71018ca378  adrp x1,0x7104454000
71018ca37c  add x1,x1,#0xd34
71018ca380  str xzr,[x0, #0x20]
71018ca384  sub x2,x29,#0x88
71018ca388  str wzr,[x0, #0x8]
71018ca38c  stur x0,[x29, #-0x88]
71018ca390  mov x0,x22
71018ca394  bl 0x7103376af0
71018ca398  ldur x0,[x29, #-0x88]
71018ca39c  stur xzr,[x29, #-0x88]
71018ca3a0  cbz x0,0x71018ca3b0
71018ca3a4  ldr x8,[x0]
71018ca3a8  ldr x8,[x8, #0x8]
71018ca3ac  blr x8
71018ca3b0  ldr x22,[x25, #0x40]
71018ca3b4  mov w0,#0x10
71018ca3b8  orr w1,wzr,#0x38
71018ca3bc  bl 0x710392e290
71018ca3c0  cbnz x0,0x71018ca408
71018ca3c4  adrp x8,0x7105332000
71018ca3c8  ldr x0,[x8, #0xf00]
71018ca3cc  cbz x0,0x71018ca404
71018ca3d0  orr w8,wzr,#0x38
71018ca3d4  stur wzr,[x29, #-0x5c]
71018ca3d8  sub x1,x29,#0x5c
71018ca3dc  str x8,[sp, #0x68]
71018ca3e0  ldr x8,[x0]
71018ca3e4  ldr x8,[x8, #0x30]
71018ca3e8  add x2,sp,#0x68
71018ca3ec  blr x8
71018ca3f0  tbz w0,#0x0,0x71018ca404
71018ca3f4  mov w0,#0x10
71018ca3f8  orr w1,wzr,#0x38
71018ca3fc  bl 0x710392e290
71018ca400  cbnz x0,0x71018ca408
71018ca404  mov x0,xzr
71018ca408  adrp x8,0x71050af000
71018ca40c  add x8,x8,#0x70
71018ca410  str x25,[x0, #0x10]
71018ca414  str x8,[x0]
71018ca418  adrp x8,0x7101d37000
71018ca41c  add x8,x8,#0xc10
71018ca420  stp xzr,xzr,[x0, #0x28]
71018ca424  adrp x1,0x710436c000
71018ca428  add x1,x1,#0x681
71018ca42c  stp x8,xzr,[x0, #0x18]
71018ca430  add x2,sp,#0x68
71018ca434  str wzr,[x0, #0x8]
71018ca438  str x0,[sp, #0x68]
71018ca43c  mov x0,x22
71018ca440  bl 0x7103376af0
71018ca444  ldr x0,[sp, #0x68]
71018ca448  str xzr,[sp, #0x68]
71018ca44c  cbz x0,0x71018ca45c
71018ca450  ldr x8,[x0]
71018ca454  ldr x8,[x8, #0x8]
71018ca458  blr x8
71018ca45c  adrp x8,0x7105333000
71018ca460  add x8,x8,#0x600
71018ca464  str x8,[x21, #0x10]
71018ca468  ldp w9,w8,[x8, #0x60]
71018ca46c  stp w9,w8,[x21, #0x68]
71018ca470  adrp x8,0x7105333000
71018ca474  add x8,x8,#0x650
71018ca478  mov w9,#0x1
71018ca47c  ldaxrb w10,[x8]
71018ca480  stxrb w11,w9,[x8]
71018ca484  and w10,w10,#0x1
71018ca488  cmp w11,#0x0
71018ca48c  ccmp w10,#0x0,#0x0,eq
71018ca490  b.ne 0x71018ca47c
71018ca494  adrp x8,0x7105333000
71018ca498  add x8,x8,#0x648
71018ca49c  ldr x9,[x8]
71018ca4a0  str x9,[x21, #0x48]
71018ca4a4  mov x0,x21
71018ca4a8  str x21,[x8], #0x8
71018ca4ac  stlrb wzr,[x8]
71018ca4b0  bl 0x71032caea0
71018ca4b4  ldr x0,[x19, #0x178]
71018ca4b8  str x21,[x19, #0x178]
71018ca4bc  cbz x0,0x71018ca4c4
71018ca4c0  bl 0x71032cad20
71018ca4c4  ldr x8,[x20]
71018ca4c8  mov w9,#0x2
71018ca4cc  str x9,[x8, #0x70]
71018ca4d0  ldr x0,[x20]
71018ca4d4  ldrsw x2,[x0, #0x70]
71018ca4d8  ldr w3,[x0, #0x68]
71018ca4dc  adrp x1,0x7104545000
71018ca4e0  add x1,x1,#0x5e0
71018ca4e4  mov w4,wzr
71018ca4e8  bl 0x710323beb0
71018ca4ec  ldr x0,[x20]
71018ca4f0  str x27,[sp, #0x68]
71018ca4f4  ldrsw x2,[x0, #0x70]
71018ca4f8  ldr w3,[x0, #0x68]
71018ca4fc  add x1,sp,#0x68
71018ca500  mov w4,#0x1
71018ca504  bl 0x710323beb0
71018ca508  ldr x0,[x20]
71018ca50c  str x28,[sp, #0x68]
71018ca510  ldrsw x2,[x0, #0x70]
71018ca514  ldr w3,[x0, #0x68]
71018ca518  add x1,sp,#0x68
71018ca51c  mov w4,#0x1
71018ca520  bl 0x710323beb0
71018ca524  ldr x0,[x20]
71018ca528  ldrsw x2,[x0, #0x70]
71018ca52c  ldr w3,[x0, #0x68]
71018ca530  adrp x21,0x7104545000
71018ca534  add x21,x21,#0x5e8
71018ca538  mov w4,#0x1
71018ca53c  mov x1,x21
71018ca540  bl 0x710323beb0
71018ca544  ldr x0,[x20]
71018ca548  str x27,[sp, #0x68]
71018ca54c  ldrsw x2,[x0, #0x70]
71018ca550  ldr w3,[x0, #0x68]
71018ca554  add x1,sp,#0x68
71018ca558  mov w4,#0x1
71018ca55c  bl 0x710323beb0
71018ca560  ldr x0,[x20]
71018ca564  str x28,[sp, #0x68]
71018ca568  ldrsw x2,[x0, #0x70]
71018ca56c  ldr w3,[x0, #0x68]
71018ca570  add x1,sp,#0x68
71018ca574  mov w4,#0x1
71018ca578  bl 0x710323beb0
71018ca57c  ldr x0,[x20]
71018ca580  ldrsw x2,[x0, #0x70]
71018ca584  ldr w3,[x0, #0x68]
71018ca588  add x1,x21,#0x8
71018ca58c  mov w4,#0x1
71018ca590  bl 0x710323beb0
71018ca594  ldr x8,[x20]
71018ca598  orr w9,wzr,#0x3
71018ca59c  str x9,[x8, #0x70]
71018ca5a0  ldr x0,[x20]
71018ca5a4  ldrsw x2,[x0, #0x70]
71018ca5a8  ldr w3,[x0, #0x68]
71018ca5ac  adrp x21,0x7104545000
71018ca5b0  add x21,x21,#0x5c0
71018ca5b4  mov x1,x21
71018ca5b8  mov w4,wzr
71018ca5bc  bl 0x710323beb0
71018ca5c0  ldr x0,[x20]
71018ca5c4  ldrsw x2,[x0, #0x70]
71018ca5c8  ldr w3,[x0, #0x68]
71018ca5cc  add x1,x21,#0x8
71018ca5d0  mov w4,wzr
71018ca5d4  bl 0x710323beb0
71018ca5d8  ldr x0,[x20]
71018ca5dc  str x27,[sp, #0x68]
71018ca5e0  ldrsw x2,[x0, #0x70]
71018ca5e4  ldr w3,[x0, #0x68]
71018ca5e8  add x1,sp,#0x68
71018ca5ec  mov w4,#0x1
71018ca5f0  bl 0x710323beb0
71018ca5f4  ldr x0,[x20]
71018ca5f8  str x28,[sp, #0x68]
71018ca5fc  ldrsw x2,[x0, #0x70]
71018ca600  ldr w3,[x0, #0x68]
71018ca604  add x1,sp,#0x68
71018ca608  mov w4,#0x1
71018ca60c  bl 0x710323beb0
71018ca610  ldr x0,[x20]
71018ca614  ldrsw x2,[x0, #0x70]
71018ca618  ldr w3,[x0, #0x68]
71018ca61c  adrp x21,0x7104545000
71018ca620  add x21,x21,#0x5d0
71018ca624  mov w4,#0x1
71018ca628  mov x1,x21
71018ca62c  bl 0x710323beb0
71018ca630  ldr x0,[x20]
71018ca634  str x27,[sp, #0x68]
71018ca638  ldrsw x2,[x0, #0x70]
71018ca63c  ldr w3,[x0, #0x68]
71018ca640  add x1,sp,#0x68
71018ca644  mov w4,#0x1
71018ca648  bl 0x710323beb0
71018ca64c  ldr x0,[x20]
71018ca650  str x28,[sp, #0x68]
71018ca654  ldrsw x2,[x0, #0x70]
71018ca658  ldr w3,[x0, #0x68]
71018ca65c  add x1,sp,#0x68
71018ca660  mov w4,#0x1
71018ca664  add x22,sp,#0x68
71018ca668  bl 0x710323beb0
71018ca66c  ldr x0,[x20]
71018ca670  ldrsw x2,[x0, #0x70]
71018ca674  ldr w3,[x0, #0x68]
71018ca678  add x1,x21,#0x8
71018ca67c  mov w4,#0x1
71018ca680  bl 0x710323beb0
71018ca684  ldr x8,[x20]
71018ca688  mov w9,#0x4
71018ca68c  str x9,[x8, #0x70]
71018ca690  ldr x0,[x20]
71018ca694  ldrsw x2,[x0, #0x70]
71018ca698  ldr w3,[x0, #0x68]
71018ca69c  adrp x1,0x7104544000
71018ca6a0  add x1,x1,#0xdf8
71018ca6a4  mov w4,wzr
71018ca6a8  bl 0x710323beb0
71018ca6ac  mov w1,#0x301c
71018ca6b0  mov w0,#0x10
71018ca6b4  bl 0x710392e290
71018ca6b8  mov x20,x0
71018ca6bc  cbnz x0,0x71018ca708
71018ca6c0  adrp x8,0x7105332000
71018ca6c4  ldr x0,[x8, #0xf00]
71018ca6c8  cbz x0,0x71018ca704
71018ca6cc  mov w8,#0x301c
71018ca6d0  str wzr,[sp, #0x8]
71018ca6d4  add x1,sp,#0x8
71018ca6d8  str x8,[sp, #0x68]
71018ca6dc  ldr x8,[x0]
71018ca6e0  ldr x8,[x8, #0x30]
71018ca6e4  add x2,sp,#0x68
71018ca6e8  blr x8
71018ca6ec  tbz w0,#0x0,0x71018ca704
71018ca6f0  mov w1,#0x301c
71018ca6f4  mov w0,#0x10
71018ca6f8  bl 0x710392e290
71018ca6fc  mov x20,x0
71018ca700  cbnz x0,0x71018ca708
71018ca704  mov x20,xzr
71018ca708  mov w8,#0x100c
71018ca70c  str wzr,[x20, #0x8]
71018ca710  strh wzr,[x20, #0xc]
71018ca714  str xzr,[x20, x8, LSL #0x0]
71018ca718  mov w8,#0x2014
71018ca71c  strh wzr,[x20, #0x1014]
71018ca720  mov w9,#0x6e5f
71018ca724  mov w11,#0x6d61
71018ca728  movk w11,#0x65, LSL #16
71018ca72c  str xzr,[x20, x8, LSL #0x0]
71018ca730  mov w8,#0x201c
71018ca734  strh wzr,[x20, x8, LSL #0x0]
71018ca738  mov w8,#0x1
71018ca73c  str x8,[x20]
71018ca740  mov x8,#0x2300000000
71018ca744  str x8,[sp, #0x68]
71018ca748  mov x8,#0x6e6d
71018ca74c  movk x8,#0x5f75, LSL #16
71018ca750  movk x8,#0x706f, LSL #32
71018ca754  movk x8,#0x5f74, LSL #48
71018ca758  str x8,[sp, #0x70]
71018ca75c  mov x8,#0x7462
71018ca760  movk x8,#0x5f6e, LSL #16
71018ca764  movk x8,#0x656b, LSL #32
71018ca768  movk x8,#0x6279, LSL #48
71018ca76c  str x8,[sp, #0x78]
71018ca770  mov w8,#0x616f
71018ca774  strh w8,[sp, #0x80]
71018ca778  mov x8,#0x5f64
71018ca77c  movk x8,#0x6568, LSL #16
71018ca780  movk x8,#0x706c, LSL #32
71018ca784  movk x8,#0x655f, LSL #48
71018ca788  stur x8,[sp, #0x82]
71018ca78c  mov w8,#0x746e
71018ca790  movk w8,#0x7265, LSL #16
71018ca794  mov x25,#0x303
71018ca798  movk x25,#0xa04, LSL #16
71018ca79c  stur w8,[sp, #0x8a]
71018ca7a0  mov w8,#0x9dc5
71018ca7a4  movk w8,#0x811c, LSL #16
71018ca7a8  strh w9,[sp, #0x8e]
71018ca7ac  mov w10,#0x6d
71018ca7b0  mov w9,#0x9
71018ca7b4  str w11,[sp, #0x90]
71018ca7b8  mov w11,#0x89
71018ca7bc  mov w23,#0x205
71018ca7c0  movk x25,#0xc0b, LSL #32
71018ca7c4  movk x25,#0x100, LSL #48
71018ca7c8  mul w8,w8,w11
71018ca7cc  and w10,w10,#0xff
71018ca7d0  eor w8,w8,w10
71018ca7d4  ldrb w10,[x22, x9, LSL ]
71018ca7d8  add x9,x9,#0x1
71018ca7dc  cbnz w10,0x71018ca7c8
71018ca7e0  add x1,sp,#0x68
71018ca7e4  mov x0,x20
71018ca7e8  str w8,[sp, #0x68]
71018ca7ec  bl 0x7103391610
71018ca7f0  mov w8,#0xf9b8
71018ca7f4  ldr x0,[x19, x8, LSL #0x0]
71018ca7f8  mov x1,x20
71018ca7fc  bl 0x7103391f40
71018ca800  adrp x8,0x710532f000
71018ca804  ldr x8,[x8, #0x730]
71018ca808  strb wzr,[sp, #0xc0]
71018ca80c  stp xzr,xzr,[sp, #0xb0]
71018ca810  mov x1,#0xc863
71018ca814  movk x1,#0xdaf3, LSL #16
71018ca818  stp xzr,xzr,[sp, #0xa0]
71018ca81c  movk x1,#0xe, LSL #32
71018ca820  str xzr,[sp, #0x68]
71018ca824  sturh wzr,[x29, #-0x80]
71018ca828  strb wzr,[sp, #0x60]
71018ca82c  str xzr,[sp, #0x8]
71018ca830  sturh wzr,[x29, #-0x88]
71018ca834  sturh wzr,[x29, #-0x74]
71018ca838  stur wzr,[x29, #-0x78]
71018ca83c  sturh wzr,[x29, #-0x6c]
71018ca840  stur wzr,[x29, #-0x70]
71018ca844  stp xzr,xzr,[sp, #0x90]
71018ca848  stp xzr,xzr,[sp, #0x80]
71018ca84c  stp xzr,xzr,[sp, #0x70]
71018ca850  stp xzr,xzr,[sp, #0x50]
71018ca854  stp xzr,xzr,[sp, #0x40]
71018ca858  stp xzr,xzr,[sp, #0x30]
71018ca85c  stp xzr,xzr,[sp, #0x20]
71018ca860  stp xzr,xzr,[sp, #0x10]
71018ca864  ldr x21,[x8, #0x8]
71018ca868  ldr x0,[x21, #0x168]
71018ca86c  bl 0x71032631a0
71018ca870  ldr x8,[x21, #0x178]
71018ca874  mov x19,x0
71018ca878  ldr x0,[x8, #0x8]
71018ca87c  mov x1,#0xb51
71018ca880  movk x1,#0xd503, LSL #16
71018ca884  movk x1,#0x16, LSL #32
71018ca888  bl 0x71032b23e0
71018ca88c  adrp x8,0x710532f000
71018ca890  ldr x8,[x8, #0x8b0]
71018ca894  ldr x8,[x8, #0x8]
71018ca898  orr x9,xzr,#0x10000000000
71018ca89c  mov x10,#0x404
71018ca8a0  movk x10,#0x303, LSL #16
71018ca8a4  stp x19,x9,[x8, #0x148]
71018ca8a8  mov w9,#0x2
71018ca8ac  movk x10,#0xb0a, LSL #32
71018ca8b0  movk x10,#0xc, LSL #48
71018ca8b4  mov w3,#0xffffffff
71018ca8b8  add x13,x8,#0x16b
71018ca8bc  add x14,x8,#0x16f
71018ca8c0  strb wzr,[x8, #0x328]
71018ca8c4  mov w11,#0x501
71018ca8c8  movk w11,#0x202, LSL #16
71018ca8cc  strh w23,[x8, #0x168]
71018ca8d0  stp x3,x25,[x8, #0x158]
71018ca8d4  mov w15,#0xd0d
71018ca8d8  add x2,x8,#0x25f
71018ca8dc  strb w9,[x8, #0x16a]
71018ca8e0  str w24,[x13]
71018ca8e4  add x13,x8,#0x177
71018ca8e8  str x10,[x14]
71018ca8ec  add x14,x8,#0x17b
71018ca8f0  str w11,[x13]
71018ca8f4  add x13,x8,#0x17f
71018ca8f8  str w24,[x14]
71018ca8fc  add x14,x8,#0x181
71018ca900  mov w16,#0x304
71018ca904  movk w16,#0x2, LSL #16
71018ca908  add x17,x8,#0x1a7
71018ca90c  mov x12,#0xff0000000000
71018ca910  movk x12,#0x13ff, LSL #48
71018ca914  strh w15,[x13]
71018ca918  add x13,x8,#0x185
71018ca91c  add x15,x8,#0x187
71018ca920  str w16,[x14]
71018ca924  add x14,x8,#0x18b
71018ca928  mov w16,#0x102
71018ca92c  strh w16,[x13]
71018ca930  str w24,[x15]
71018ca934  str wzr,[x14]
71018ca938  ldp x15,x16,[sp, #0x78]
71018ca93c  add x18,x8,#0x22f
71018ca940  ldp x13,x14,[sp, #0x68]
71018ca944  str x16,[x17]
71018ca948  add x17,x8,#0x19f
71018ca94c  add x16,x8,#0x18f
71018ca950  str x15,[x17]
71018ca954  add x15,x8,#0x197
71018ca958  str x14,[x15]
71018ca95c  str x13,[x16]
71018ca960  ldp x15,x16,[sp, #0x98]
71018ca964  add x17,x8,#0x1c7
71018ca968  ldp x13,x14,[sp, #0x88]
71018ca96c  str x16,[x17]
71018ca970  add x16,x8,#0x1bf
71018ca974  add x17,x8,#0x1b7
71018ca978  str x15,[x16]
71018ca97c  add x15,x8,#0x1af
71018ca980  str x14,[x17]
71018ca984  add x16,x8,#0x1df
71018ca988  str x13,[x15]
71018ca98c  ldr x13,[sp, #0xb8]
71018ca990  ldrb w17,[sp, #0xc0]
71018ca994  ldp x14,x15,[sp, #0xa8]
71018ca998  str x13,[x16]
71018ca99c  mov x13,#0xff0000000000
71018ca9a0  movk x13,#0x5aff, LSL #48
71018ca9a4  add x16,x8,#0x1d7
71018ca9a8  strb w17,[x8, #0x1e7]
71018ca9ac  add x17,x8,#0x1cf
71018ca9b0  str x15,[x16]
71018ca9b4  str x14,[x17]
71018ca9b8  stp x12,x13,[x8, #0x1e8]
71018ca9bc  ldur w14,[x29, #-0x70]
71018ca9c0  ldurh w17,[x29, #-0x6c]
71018ca9c4  strh w17,[x8, #0x1fc]
71018ca9c8  str w14,[x8, #0x1f8]
71018ca9cc  ldurh w14,[x29, #-0x80]
71018ca9d0  mov x15,#0x3
71018ca9d4  mov x17,#0xff0000000000
71018ca9d8  movk x15,#0x100, LSL #32
71018ca9dc  movk x17,#0xc1ff, LSL #48
71018ca9e0  mov x16,#0xd0d
71018ca9e4  movk x16,#0x304, LSL #16
71018ca9e8  str x15,[x8, #0x208]
71018ca9ec  add x15,x8,#0x227
71018ca9f0  movk x16,#0x2, LSL #32
71018ca9f4  movk x16,#0x102, LSL #48
71018ca9f8  str x25,[x8, #0x218]
71018ca9fc  strh w23,[x8, #0x220]
71018caa00  str x3,[x8, #0x210]
71018caa04  strb w9,[x8, #0x222]
71018caa08  str x17,[x8, #0x200]
71018caa0c  add x17,x8,#0x223
71018caa10  add x1,x8,#0x233
71018caa14  strh w14,[x8, #0x1fe]
71018caa18  add x14,x8,#0x237
71018caa1c  str w24,[x17]
71018caa20  add x17,x8,#0x23f
71018caa24  str x10,[x15]
71018caa28  add x10,x8,#0x243
71018caa2c  str w11,[x18]
71018caa30  str w24,[x1]
71018caa34  str x16,[x14]
71018caa38  str w24,[x17]
71018caa3c  str wzr,[x10]
71018caa40  ldp x10,x14,[sp, #0x8]
71018caa44  add x15,x8,#0x247
71018caa48  ldp x16,x17,[sp, #0x18]
71018caa4c  add x11,x8,#0x257
71018caa50  add x18,x8,#0x24f
71018caa54  str x17,[x2]
71018caa58  str x16,[x11]
71018caa5c  str x14,[x18]
71018caa60  str x10,[x15]
71018caa64  add x1,x8,#0x277
71018caa68  ldp x10,x14,[sp, #0x28]
71018caa6c  add x17,x8,#0x26f
71018caa70  ldp x15,x16,[sp, #0x38]
71018caa74  add x2,x8,#0x267
71018caa78  add x18,x8,#0x27f
71018caa7c  str x16,[x18]
71018caa80  str x15,[x1]
71018caa84  str x14,[x17]
71018caa88  str x10,[x2]
71018caa8c  ldr x17,[sp, #0x58]
71018caa90  ldp x10,x14,[sp, #0x48]
71018caa94  ldrb w2,[sp, #0x60]
71018caa98  add x11,x8,#0x297
71018caa9c  add x16,x8,#0x28f
71018caaa0  add x18,x8,#0x287
71018caaa4  str x17,[x11]
71018caaa8  strb w2,[x8, #0x29f]
71018caaac  str x14,[x16]
71018caab0  str x10,[x18]
71018caab4  str x12,[x8, #0x2a0]
71018caab8  str x13,[x8, #0x2a8]
71018caabc  ldur w10,[x29, #-0x78]
71018caac0  ldurh w11,[x29, #-0x74]
71018caac4  strh w11,[x8, #0x2b4]
71018caac8  str w10,[x8, #0x2b0]
71018caacc  ldurh w10,[x29, #-0x88]
71018caad0  strb w9,[x8, #0x2b8]
71018caad4  strh w10,[x8, #0x2b6]
71018caad8  ldurh w10,[x29, #-0x64]
71018caadc  ldur w9,[x29, #-0x68]
71018caae0  ldurb w11,[x29, #-0x62]
71018caae4  add x1,x8,#0x2bd
71018caae8  add x15,x8,#0x2b9
71018caaec  strh w10,[x1]
71018caaf0  mov x10,#0x100000001
71018caaf4  str w9,[x15]
71018caaf8  add x9,x8,#0x2cc
71018caafc  strb w11,[x8, #0x2bf]
71018cab00  str x0,[x8, #0x2c0]
71018cab04  strh wzr,[x8, #0x2c8]
71018cab08  strb wzr,[x8, #0x2ca]
71018cab0c  orr w11,wzr,#0x3
71018cab10  movk x10,#0x100, LSL #48
71018cab14  str x10,[x9]
71018cab18  ldr w10,[x8, #0x138]
71018cab1c  mov w9,#0x1
71018cab20  strb w9,[x8, #0x2d4]
71018cab24  str wzr,[x8, #0x130]
71018cab28  stp xzr,xzr,[x8, #0x8]
71018cab2c  str w3,[x8, #0x138]
71018cab30  stp xzr,xzr,[x8, #0x120]
71018cab34  str wzr,[x8, #0x13c]
71018cab38  stp xzr,xzr,[x8, #0x110]
71018cab3c  str w3,[x8, #0x140]
71018cab40  strb wzr,[x8, #0x144]
71018cab44  str w9,[x8, #0x134]
71018cab48  stp w11,w9,[x8, #0xe8]
71018cab4c  stp xzr,xzr,[x8, #0x100]
71018cab50  stp xzr,xzr,[x8, #0xf0]
71018cab54  cbz w10,0x71018cab70
71018cab58  mov x9,#0x9
71018cab5c  movk x9,#0x8, LSL #32
71018cab60  str x9,[x8, #0xf0]
71018cab64  mov w9,#0x4
71018cab68  str w9,[x8, #0x134]
71018cab6c  str w9,[x8, #0xf8]
71018cab70  cbz x20,0x71018cab7c
71018cab74  mov x0,x20
71018cab78  bl 0x710392eb40
71018cab7c  ldp x29,x30,[sp, #0x150]
71018cab80  ldp x20,x19,[sp, #0x140]
71018cab84  ldp x22,x21,[sp, #0x130]
71018cab88  ldp x24,x23,[sp, #0x120]
71018cab8c  ldp x26,x25,[sp, #0x110]
71018cab90  ldp x28,x27,[sp, #0x100]
71018cab94  add sp,sp,#0x160
71018cab98  ret
71018cab9c  adrp x0,0x7105314000
71018caba0  add x0,x0,#0x4d8
71018caba4  bl 0x71039c06b0
71018caba8  cbz w0,0x71018c99c4
71018cabac  bl 0x7101764000
71018cabb0  adrp x0,0x7101763000
71018cabb4  add x0,x0,#0xc40
71018cabb8  adrp x1,0x71052c5000
71018cabbc  add x1,x1,#0x180
71018cabc0  adrp x2,0x7104f17000
71018cabc4  add x2,x2,#0x0
71018cabc8  bl 0x71000001c0
71018cabcc  adrp x0,0x7105314000
71018cabd0  add x0,x0,#0x4d8
71018cabd4  bl 0x71039c06c0
71018cabd8  b 0x71018c99c4
71018cabdc  bl 0x71039c1330
71018cabe0  bl 0x71039c2650
