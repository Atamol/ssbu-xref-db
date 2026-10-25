// addr:      7101df6680
// offset:    0x1df6680
// name:      FUN_7101df6680
// mangled:   
// size:      3332

7101df6680  sub sp,sp,#0xa0
7101df6684  stp x26,x25,[sp, #0x50]
7101df6688  stp x24,x23,[sp, #0x60]
7101df668c  stp x22,x21,[sp, #0x70]
7101df6690  stp x20,x19,[sp, #0x80]
7101df6694  stp x29,x30,[sp, #0x90]
7101df6698  add x29,sp,#0x90
7101df669c  ldr w8,[x0, #0x638]
7101df66a0  cmp w8,#0x4
7101df66a4  mov w20,w1
7101df66a8  mov x19,x0
7101df66ac  add x24,x0,#0x65c
7101df66b0  ccmp w8,#0xd,#0x4,ne
7101df66b4  b.ne 0x7101df67a8
7101df66b8  sub w8,w20,#0x5
7101df66bc  cmp w8,#0x2
7101df66c0  b.cc 0x7101df6798
7101df66c4  ldr w8,[x19, #0x65c]
7101df66c8  cmp w8,#0x5
7101df66cc  b.ne 0x7101df6798
7101df66d0  add x21,x19,#0x18
7101df66d4  adrp x1,0x7104270000
7101df66d8  add x1,x1,#0x4b2
7101df66dc  add x8,sp,#0x38
7101df66e0  mov x0,x21
7101df66e4  bl 0x7103776640
7101df66e8  ldr x22,[sp, #0x40]
7101df66ec  fmov s0,0x3f800000
7101df66f0  adrp x1,0x710428f000
7101df66f4  add x1,x1,#0xf7d
7101df66f8  mov x0,x22
7101df66fc  bl 0x7103778300
7101df6700  adrp x23,0x710523d000
7101df6704  add x23,x23,#0x988
7101df6708  stp x23,xzr,[sp, #0x38]
7101df670c  cbz x22,0x7101df6730
7101df6710  ldr x0,[x22, #0x18]
7101df6714  adrp x8,0x710523d000
7101df6718  add x8,x8,#0x9a8
7101df671c  stp x8,xzr,[x22, #0x10]
7101df6720  cbz x0,0x7101df6728
7101df6724  bl 0x710392eb40
7101df6728  mov x0,x22
7101df672c  bl 0x710392eb40
7101df6730  adrp x1,0x71042b4000
7101df6734  add x1,x1,#0xa2f
7101df6738  add x8,sp,#0x38
7101df673c  mov x0,x21
7101df6740  bl 0x7103776640
7101df6744  ldr x21,[sp, #0x40]
7101df6748  ldr x8,[x21, #0x8]
7101df674c  cbz x8,0x7101df6764
7101df6750  ldr x8,[x8, #0x18]
7101df6754  cbz x8,0x7101df6764
7101df6758  ldrb w9,[x8, #0x58]
7101df675c  orr w9,w9,#0x1
7101df6760  strb w9,[x8, #0x58]
7101df6764  stp x23,xzr,[sp, #0x38]
7101df6768  cbz x21,0x7101df678c
7101df676c  ldr x0,[x21, #0x18]
7101df6770  adrp x8,0x710523d000
7101df6774  add x8,x8,#0x9a8
7101df6778  stp x8,xzr,[x21, #0x10]
7101df677c  cbz x0,0x7101df6784
7101df6780  bl 0x710392eb40
7101df6784  mov x0,x21
7101df6788  bl 0x710392eb40
7101df678c  mov w8,#0x2
7101df6790  str w8,[x19, #0x6ec]
7101df6794  b 0x7101df67a8
7101df6798  cmp w20,#0x6
7101df679c  b.ne 0x7101df67a8
7101df67a0  mov w8,#0x1
7101df67a4  strb w8,[x19, #0x6cc]
7101df67a8  ldr w8,[x24]
7101df67ac  cmp w8,w20
7101df67b0  b.eq 0x7101df7284
7101df67b4  cmp w20,#0x9
7101df67b8  b.hi 0x7101df7280
7101df67bc  mov w9,w20
7101df67c0  adrp x10,0x71044fb000
7101df67c4  add x10,x10,#0x8a8
7101df67c8  ldrsw x9,[x10, x9, LSL #0x2]
7101df67cc  add x9,x9,x10
7101df67d0  br x9
7101df67d4  mov x21,x19
7101df67d8  ldr x0,[x21, #0x28]!
7101df67dc  ldr w8,[x0, #0x254]
7101df67e0  cmp w8,#0x66
7101df67e4  b.eq 0x7101df67fc
7101df67e8  mov w1,#0x66
7101df67ec  mov x0,x21
7101df67f0  mov w2,wzr
7101df67f4  bl 0x7103771a80
7101df67f8  ldr x0,[x21]
7101df67fc  ldr x8,[x0]
7101df6800  ldr x8,[x8, #0x70]
7101df6804  mov w1,wzr
7101df6808  blr x8
7101df680c  ldr x0,[x19, #0x28]
7101df6810  ldr x8,[x0]
7101df6814  ldr x8,[x8, #0x60]
7101df6818  mov w1,#0x1
7101df681c  blr x8
7101df6820  ldr x0,[x19, #0x30]
7101df6824  ldr x8,[x0]
7101df6828  ldr x8,[x8, #0x70]
7101df682c  mov w1,wzr
7101df6830  blr x8
7101df6834  ldr x0,[x19, #0x30]
7101df6838  ldr x8,[x0]
7101df683c  ldr x8,[x8, #0x60]
7101df6840  mov w1,#0x1
7101df6844  blr x8
7101df6848  mov x21,x19
7101df684c  ldr x0,[x21, #0x38]!
7101df6850  ldr x8,[x0]
7101df6854  ldr x8,[x8, #0x78]
7101df6858  blr x8
7101df685c  tbnz w0,#0x0,0x7101df6fcc
7101df6860  ldr x0,[x19, #0x38]
7101df6864  ldr x8,[x0]
7101df6868  ldr x8,[x8, #0x70]
7101df686c  mov w1,#0x1
7101df6870  blr x8
7101df6874  ldr x0,[x19, #0x38]
7101df6878  ldr x8,[x0]
7101df687c  ldr x8,[x8, #0x60]
7101df6880  mov w1,#0x1
7101df6884  blr x8
7101df6888  ldr w22,[x19, #0x668]
7101df688c  add x0,x19,#0x60
7101df6890  mov w1,w22
7101df6894  bl 0x7101e02dc0
7101df6898  cmn w22,#0x1
7101df689c  b.eq 0x7101df72b4
7101df68a0  ldr w1,[x19, #0x668]
7101df68a4  mov w3,#0x1
7101df68a8  mov x0,x21
7101df68ac  mov w2,wzr
7101df68b0  bl 0x7103783c10
7101df68b4  ldr x21,[x19, #0x38]
7101df68b8  ldr x0,[x21, #0x160]
7101df68bc  cbz x0,0x7101df6fcc
7101df68c0  ldr x8,[x0]
7101df68c4  ldr x8,[x8, #0x18]
7101df68c8  ldr w22,[x19, #0x668]
7101df68cc  blr x8
7101df68d0  ldr w8,[x21, #0x2c4]
7101df68d4  cmp w8,#0x1
7101df68d8  b.lt 0x7101df6954
7101df68dc  mov x23,xzr
7101df68e0  ldr w9,[x21, #0x29c]
7101df68e4  sub w9,w22,w9
7101df68e8  cmp w9,w23
7101df68ec  b.ne 0x7101df6948
7101df68f0  ldr w9,[x21, #0x288]
7101df68f4  cmp w9,w22
7101df68f8  b.le 0x7101df6948
7101df68fc  ldr x8,[x21, #0x168]
7101df6900  ldr x9,[x8, x23, LSL #0x3]
7101df6904  ldr x10,[x9, #0x20]
7101df6908  ldr x10,[x10]
7101df690c  cbz x10,0x7101df6920
7101df6910  ldrb w9,[x10, #0x58]
7101df6914  orr w9,w9,#0x1
7101df6918  strb w9,[x10, #0x58]
7101df691c  ldr x9,[x8, x23, LSL #0x3]
7101df6920  str w22,[x9, #0x30]
7101df6924  ldr x8,[x8, x23, LSL #0x3]
7101df6928  ldr x0,[x21, #0x160]
7101df692c  ldr w1,[x8, #0x30]
7101df6930  add x2,x8,#0x8
7101df6934  add x3,x8,#0x18
7101df6938  ldr x8,[x0]
7101df693c  ldr x8,[x8, #0x10]
7101df6940  blr x8
7101df6944  ldr w8,[x21, #0x2c4]
7101df6948  add x23,x23,#0x1
7101df694c  cmp x23,w8, SXTW 
7101df6950  b.lt 0x7101df68e0
7101df6954  ldr x0,[x21, #0x160]
7101df6958  ldr x8,[x0]
7101df695c  ldr x8,[x8, #0x20]
7101df6960  blr x8
7101df6964  b 0x7101df6fcc
7101df6968  mov x21,x19
7101df696c  ldr x0,[x21, #0x28]!
7101df6970  ldr x8,[x0]
7101df6974  ldr x8,[x8, #0x70]
7101df6978  mov w1,#0x1
7101df697c  blr x8
7101df6980  ldr x0,[x21]
7101df6984  ldr x8,[x0]
7101df6988  ldr x8,[x8, #0x60]
7101df698c  mov w1,#0x1
7101df6990  blr x8
7101df6994  ldrb w8,[x21, #0x638]
7101df6998  cbz w8,0x7101df6f28
7101df699c  ldr w8,[x21, #0x63c]
7101df69a0  cmp w8,#0x3
7101df69a4  b.ne 0x7101df6f28
7101df69a8  ldr x8,[x19, #0x28]
7101df69ac  strb wzr,[x19, #0x660]
7101df69b0  ldr x9,[x8, #0x1b8]
7101df69b4  cbz x9,0x7101df6f90
7101df69b8  add x10,x8,#0x1b8
7101df69bc  mov x8,x10
7101df69c0  ldr w11,[x9, #0x20]
7101df69c4  cmp w11,#0x65
7101df69c8  cset w11,lt
7101df69cc  csel x8,x8,x9,lt
7101df69d0  ldr x9,[x9, w11, UXTW #0x3]
7101df69d4  cbnz x9,0x7101df69c0
7101df69d8  cmp x8,x10
7101df69dc  b.eq 0x7101df6f90
7101df69e0  ldr w9,[x8, #0x20]
7101df69e4  cmp w9,#0x65
7101df69e8  b.gt 0x7101df6f90
7101df69ec  ldr x0,[x8, #0x28]
7101df69f0  cbz x0,0x7101df6f90
7101df69f4  ldr x8,[x0]
7101df69f8  ldr x8,[x8, #0x200]
7101df69fc  blr x8
7101df6a00  tbz w0,#0x0,0x7101df6f90
7101df6a04  mov w1,#0x65
7101df6a08  b 0x7101df6f84
7101df6a0c  ldr x0,[x19, #0x28]
7101df6a10  ldr x8,[x0]
7101df6a14  ldr x8,[x8, #0x70]
7101df6a18  mov w1,wzr
7101df6a1c  blr x8
7101df6a20  ldr x0,[x19, #0x28]
7101df6a24  ldr x8,[x0]
7101df6a28  ldr x8,[x8, #0x60]
7101df6a2c  mov w1,wzr
7101df6a30  blr x8
7101df6a34  ldr x0,[x19, #0x30]
7101df6a38  ldr x8,[x0]
7101df6a3c  ldr x8,[x8, #0x70]
7101df6a40  mov w1,wzr
7101df6a44  blr x8
7101df6a48  ldr x0,[x19, #0x30]
7101df6a4c  ldr x8,[x0]
7101df6a50  ldr x8,[x8, #0x60]
7101df6a54  mov w1,wzr
7101df6a58  blr x8
7101df6a5c  ldr x8,[x19, #0x10]
7101df6a60  ldr x0,[x8]
7101df6a64  mov w2,#0x3
7101df6a68  movk w2,#0x1, LSL #16
7101df6a6c  mov w1,#0x1
7101df6a70  bl 0x7103775dc0
7101df6a74  ldr x8,[x19, #0x48]
7101df6a78  add x1,x8,#0x10
7101df6a7c  add x0,sp,#0x28
7101df6a80  bl 0x7103778ab0
7101df6a84  ldr x8,[sp, #0x30]
7101df6a88  ldr x8,[x8]
7101df6a8c  cbz x8,0x7101df705c
7101df6a90  movi v0.2D,#0x0
7101df6a94  add x9,x8,#0x30
7101df6a98  add x10,x8,#0x34
7101df6a9c  ld1 {v0.S}[0],[x9]
7101df6aa0  ldr x22,[x8, #0x18]
7101df6aa4  ld1 {v0.S}[1],[x10]
7101df6aa8  b 0x7101df706c
7101df6aac  ldr x0,[x19, #0x28]
7101df6ab0  ldr x8,[x0]
7101df6ab4  ldr x8,[x8, #0x70]
7101df6ab8  mov w1,wzr
7101df6abc  blr x8
7101df6ac0  ldr x0,[x19, #0x28]
7101df6ac4  ldr x8,[x0]
7101df6ac8  ldr x8,[x8, #0x60]
7101df6acc  mov w1,wzr
7101df6ad0  blr x8
7101df6ad4  ldr x0,[x19, #0x30]
7101df6ad8  ldr x8,[x0]
7101df6adc  ldr x8,[x8, #0x70]
7101df6ae0  mov w1,wzr
7101df6ae4  blr x8
7101df6ae8  ldr x0,[x19, #0x30]
7101df6aec  ldr x8,[x0]
7101df6af0  ldr x8,[x8, #0x60]
7101df6af4  mov w1,wzr
7101df6af8  blr x8
7101df6afc  ldr x0,[x19, #0x38]
7101df6b00  ldr x8,[x0]
7101df6b04  ldr x8,[x8, #0x70]
7101df6b08  mov w1,wzr
7101df6b0c  blr x8
7101df6b10  ldr x0,[x19, #0x38]
7101df6b14  ldr x8,[x0]
7101df6b18  ldr x8,[x8, #0x60]
7101df6b1c  b 0x7101df6d84
7101df6b20  adrp x8,0x710532f000
7101df6b24  ldr x22,[x8, #0x820]
7101df6b28  adrp x8,0x710532f000
7101df6b2c  ldr x8,[x8, #0x730]
7101df6b30  ldr x8,[x8, #0x8]
7101df6b34  ldr x0,[x8, #0x1c8]
7101df6b38  mov x21,#0x16a4
7101df6b3c  movk x21,#0x80d9, LSL #16
7101df6b40  movk x21,#0xff28, LSL #32
7101df6b44  movk x21,#0x58ff, LSL #48
7101df6b48  mov x1,x21
7101df6b4c  bl 0x7103291150
7101df6b50  tbz w0,#0x0,0x7101df701c
7101df6b54  ldr x0,[x22, #0x10]
7101df6b58  mov x1,x21
7101df6b5c  bl 0x71032edf70
7101df6b60  ldp x0,x1,[x22, #0x8]
7101df6b64  bl 0x71032f1bb0
7101df6b68  b 0x7101df7024
7101df6b6c  ldr x0,[x19, #0x28]
7101df6b70  ldr x8,[x0]
7101df6b74  ldr x8,[x8, #0x70]
7101df6b78  mov w1,wzr
7101df6b7c  blr x8
7101df6b80  ldr x0,[x19, #0x28]
7101df6b84  ldr x8,[x0]
7101df6b88  ldr x8,[x8, #0x60]
7101df6b8c  mov w1,wzr
7101df6b90  blr x8
7101df6b94  ldr x0,[x19, #0x30]
7101df6b98  ldr x8,[x0]
7101df6b9c  ldr x8,[x8, #0x70]
7101df6ba0  mov w1,wzr
7101df6ba4  blr x8
7101df6ba8  ldr x0,[x19, #0x30]
7101df6bac  ldr x8,[x0]
7101df6bb0  ldr x8,[x8, #0x60]
7101df6bb4  mov w1,wzr
7101df6bb8  blr x8
7101df6bbc  ldr x0,[x19, #0x38]
7101df6bc0  ldr x8,[x0]
7101df6bc4  ldr x8,[x8, #0x70]
7101df6bc8  mov w1,wzr
7101df6bcc  blr x8
7101df6bd0  add x21,x19,#0x18
7101df6bd4  adrp x1,0x7104270000
7101df6bd8  add x1,x1,#0x4b2
7101df6bdc  add x8,sp,#0x38
7101df6be0  mov x0,x21
7101df6be4  bl 0x7103776640
7101df6be8  ldr x22,[sp, #0x40]
7101df6bec  ldr x8,[x22, #0x8]
7101df6bf0  cbz x8,0x7101df6c08
7101df6bf4  ldr x8,[x8, #0x18]
7101df6bf8  cbz x8,0x7101df6c08
7101df6bfc  ldrb w9,[x8, #0x58]
7101df6c00  orr w9,w9,#0x1
7101df6c04  strb w9,[x8, #0x58]
7101df6c08  adrp x23,0x710523d000
7101df6c0c  add x23,x23,#0x988
7101df6c10  stp x23,xzr,[sp, #0x38]
7101df6c14  cbz x22,0x7101df6c38
7101df6c18  ldr x0,[x22, #0x18]
7101df6c1c  adrp x8,0x710523d000
7101df6c20  add x8,x8,#0x9a8
7101df6c24  stp x8,xzr,[x22, #0x10]
7101df6c28  cbz x0,0x7101df6c30
7101df6c2c  bl 0x710392eb40
7101df6c30  mov x0,x22
7101df6c34  bl 0x710392eb40
7101df6c38  adrp x1,0x7104270000
7101df6c3c  add x1,x1,#0x4b2
7101df6c40  add x8,sp,#0x38
7101df6c44  mov x0,x21
7101df6c48  bl 0x7103776640
7101df6c4c  ldr x22,[sp, #0x40]
7101df6c50  fmov s0,0x3f800000
7101df6c54  adrp x1,0x7104421000
7101df6c58  add x1,x1,#0x55
7101df6c5c  mov x0,x22
7101df6c60  bl 0x7103778300
7101df6c64  stp x23,xzr,[sp, #0x38]
7101df6c68  cbz x22,0x7101df6c8c
7101df6c6c  ldr x0,[x22, #0x18]
7101df6c70  adrp x8,0x710523d000
7101df6c74  add x8,x8,#0x9a8
7101df6c78  stp x8,xzr,[x22, #0x10]
7101df6c7c  cbz x0,0x7101df6c84
7101df6c80  bl 0x710392eb40
7101df6c84  mov x0,x22
7101df6c88  bl 0x710392eb40
7101df6c8c  adrp x1,0x71042b4000
7101df6c90  add x1,x1,#0xa2f
7101df6c94  add x8,sp,#0x38
7101df6c98  mov x0,x21
7101df6c9c  bl 0x7103776640
7101df6ca0  ldr x21,[sp, #0x40]
7101df6ca4  ldr x8,[x21, #0x8]
7101df6ca8  cbz x8,0x7101df6cc0
7101df6cac  ldr x8,[x8, #0x18]
7101df6cb0  cbz x8,0x7101df6cc0
7101df6cb4  ldrb w9,[x8, #0x58]
7101df6cb8  and w9,w9,#0xfe
7101df6cbc  strb w9,[x8, #0x58]
7101df6cc0  stp x23,xzr,[sp, #0x38]
7101df6cc4  cbz x21,0x7101df6ce8
7101df6cc8  ldr x0,[x21, #0x18]
7101df6ccc  adrp x8,0x710523d000
7101df6cd0  add x8,x8,#0x9a8
7101df6cd4  stp x8,xzr,[x21, #0x10]
7101df6cd8  cbz x0,0x7101df6ce0
7101df6cdc  bl 0x710392eb40
7101df6ce0  mov x0,x21
7101df6ce4  bl 0x710392eb40
7101df6ce8  ldr x8,[x19, #0x6b8]
7101df6cec  mov w21,#0x1
7101df6cf0  str w21,[x19, #0x6ec]
7101df6cf4  ldr x22,[x8, #0x80]
7101df6cf8  mov w8,#0x2268
7101df6cfc  ldr x0,[x22, #0x2268]
7101df6d00  add x19,x22,x8
7101df6d04  ldr x8,[x0]
7101df6d08  ldr x8,[x8, #0x70]
7101df6d0c  mov w1,#0x1
7101df6d10  blr x8
7101df6d14  ldr w8,[x22, #0x11b0]
7101df6d18  cmp w8,#0x5
7101df6d1c  b.le 0x7101df7040
7101df6d20  mov w1,#0x2
7101df6d24  b 0x7101df704c
7101df6d28  ldr x0,[x19, #0x28]
7101df6d2c  ldr x8,[x0]
7101df6d30  ldr x8,[x8, #0x70]
7101df6d34  mov w1,wzr
7101df6d38  blr x8
7101df6d3c  ldr x0,[x19, #0x28]
7101df6d40  ldr x8,[x0]
7101df6d44  ldr x8,[x8, #0x60]
7101df6d48  mov w1,wzr
7101df6d4c  blr x8
7101df6d50  ldr x0,[x19, #0x30]
7101df6d54  ldr x8,[x0]
7101df6d58  ldr x8,[x8, #0x70]
7101df6d5c  mov w1,wzr
7101df6d60  blr x8
7101df6d64  ldr x0,[x19, #0x30]
7101df6d68  ldr x8,[x0]
7101df6d6c  ldr x8,[x8, #0x60]
7101df6d70  mov w1,wzr
7101df6d74  blr x8
7101df6d78  ldr x0,[x19, #0x38]
7101df6d7c  ldr x8,[x0]
7101df6d80  ldr x8,[x8, #0x70]
7101df6d84  mov w1,wzr
7101df6d88  blr x8
7101df6d8c  ldr w8,[x19, #0x65c]
7101df6d90  str w8,[x19, #0x664]
7101df6d94  mov w8,#0x1
7101df6d98  strb w8,[x19, #0x660]
7101df6d9c  b 0x7101df6ea8
7101df6da0  cmp w8,#0x6
7101df6da4  b.ne 0x7101df7280
7101df6da8  ldrb w8,[x19, #0x6b1]
7101df6dac  cbz w8,0x7101df72f0
7101df6db0  mov x20,x19
7101df6db4  ldr x8,[x20, #0x38]!
7101df6db8  ldrsw x8,[x8, #0x2a4]
7101df6dbc  tbnz w8,#0x1f,0x7101df72e4
7101df6dc0  ldr w9,[x19, #0x2c8]
7101df6dc4  tst w9,#0xffffff
7101df6dc8  b.eq 0x7101df72cc
7101df6dcc  ldr w9,[x19, #0x308]
7101df6dd0  cmp w9,w8
7101df6dd4  b.le 0x7101df72e4
7101df6dd8  ldr x9,[x19, #0x240]
7101df6ddc  ldr x8,[x9, x8, LSL #0x3]
7101df6de0  ldrh w21,[x8]
7101df6de4  mov x0,x19
7101df6de8  bl 0x7101df6590
7101df6dec  orr w8,wzr,#0xffff
7101df6df0  cmp w21,w8
7101df6df4  b.eq 0x7101df72ec
7101df6df8  ldr x8,[x19, #0x2c8]
7101df6dfc  mov x9,xzr
7101df6e00  add x0,x20,#0x28
7101df6e04  mov w1,#0xffffffff
7101df6e08  and x8,x8,#0xffffff
7101df6e0c  cbnz x8,0x7101df6ed0
7101df6e10  b 0x7101df6ee0
7101df6e14  ldr x0,[x19, #0x28]
7101df6e18  ldr x8,[x0]
7101df6e1c  ldr x8,[x8, #0x70]
7101df6e20  mov w1,wzr
7101df6e24  blr x8
7101df6e28  ldr x0,[x19, #0x28]
7101df6e2c  ldr x8,[x0]
7101df6e30  ldr x8,[x8, #0x60]
7101df6e34  mov w1,wzr
7101df6e38  blr x8
7101df6e3c  ldr x0,[x19, #0x30]
7101df6e40  ldr x8,[x0]
7101df6e44  ldr x8,[x8, #0x70]
7101df6e48  mov w1,wzr
7101df6e4c  blr x8
7101df6e50  ldr x0,[x19, #0x30]
7101df6e54  ldr x8,[x0]
7101df6e58  ldr x8,[x8, #0x60]
7101df6e5c  mov w1,wzr
7101df6e60  blr x8
7101df6e64  ldr x0,[x19, #0x38]
7101df6e68  ldr x8,[x0]
7101df6e6c  ldr x8,[x8, #0x70]
7101df6e70  mov w1,wzr
7101df6e74  blr x8
7101df6e78  ldr x8,[x19, #0x10]
7101df6e7c  ldr x0,[x8]
7101df6e80  bl 0x7103775fa0
7101df6e84  adrp x9,0x710593b000
7101df6e88  ldr x9,[x9, #0x988]
7101df6e8c  ldr w8,[x19, #0x624]
7101df6e90  mov w10,#0x1
7101df6e94  lsl w8,w10,w8
7101df6e98  ldr x9,[x9, #0x8]
7101df6e9c  ldr w10,[x9]
7101df6ea0  bic w8,w10,w8
7101df6ea4  str w8,[x9]
7101df6ea8  ldr x8,[x19, #0x38]
7101df6eac  ldr w8,[x8, #0x2a4]
7101df6eb0  str w8,[x19, #0x668]
7101df6eb4  b 0x7101df7280
7101df6eb8  mov x0,x19
7101df6ebc  mov w1,wzr
7101df6ec0  bl 0x7101df6680
7101df6ec4  b 0x7101df7284
7101df6ec8  add x9,x9,#0x1
7101df6ecc  cbz x8,0x7101df6ee0
7101df6ed0  ldr w10,[x19, #0x308]
7101df6ed4  cmp x9,w10, SXTW 
7101df6ed8  b.lt 0x7101df6ef8
7101df6edc  b 0x7101df6f10
7101df6ee0  ldr x10,[x19, #0x248]
7101df6ee4  ldr x11,[x19, #0x240]
7101df6ee8  sub x10,x10,x11
7101df6eec  lsr x10,x10,#0x3
7101df6ef0  cmp x9,w10, SXTW 
7101df6ef4  b.ge 0x7101df6f10
7101df6ef8  ldr x10,[x19, #0x240]
7101df6efc  ldr x10,[x10, x9, LSL #0x3]
7101df6f00  ldrh w10,[x10]
7101df6f04  cmp w10,w21
7101df6f08  b.ne 0x7101df6ec8
7101df6f0c  mov w1,w9
7101df6f10  str w1,[x19, #0x668]
7101df6f14  cbz x8,0x7101df7334
7101df6f18  ldr w8,[x19, #0x308]
7101df6f1c  cmp w8,#0x1
7101df6f20  b.ge 0x7101df734c
7101df6f24  b 0x7101df7360
7101df6f28  ldr x8,[x21]
7101df6f2c  ldr x9,[x8, #0x1b8]
7101df6f30  cbz x9,0x7101df6f90
7101df6f34  add x10,x8,#0x1b8
7101df6f38  mov x8,x10
7101df6f3c  ldr w11,[x9, #0x20]
7101df6f40  cmp w11,#0x64
7101df6f44  cset w11,lt
7101df6f48  csel x8,x8,x9,lt
7101df6f4c  ldr x9,[x9, w11, UXTW #0x3]
7101df6f50  cbnz x9,0x7101df6f3c
7101df6f54  cmp x8,x10
7101df6f58  b.eq 0x7101df6f90
7101df6f5c  ldr w9,[x8, #0x20]
7101df6f60  cmp w9,#0x64
7101df6f64  b.gt 0x7101df6f90
7101df6f68  ldr x0,[x8, #0x28]
7101df6f6c  cbz x0,0x7101df6f90
7101df6f70  ldr x8,[x0]
7101df6f74  ldr x8,[x8, #0x200]
7101df6f78  blr x8
7101df6f7c  tbz w0,#0x0,0x7101df6f90
7101df6f80  mov w1,#0x64
7101df6f84  mov x0,x21
7101df6f88  mov w2,wzr
7101df6f8c  bl 0x7103771a80
7101df6f90  ldr x0,[x19, #0x30]
7101df6f94  ldr x8,[x0]
7101df6f98  ldr x8,[x8, #0x70]
7101df6f9c  mov w1,#0x1
7101df6fa0  blr x8
7101df6fa4  ldr x0,[x19, #0x30]
7101df6fa8  ldr x8,[x0]
7101df6fac  ldr x8,[x8, #0x60]
7101df6fb0  mov w1,#0x1
7101df6fb4  blr x8
7101df6fb8  ldr x0,[x19, #0x38]
7101df6fbc  ldr x8,[x0]
7101df6fc0  ldr x8,[x8, #0x70]
7101df6fc4  mov w1,wzr
7101df6fc8  blr x8
7101df6fcc  ldr x8,[x19, #0x6b8]
7101df6fd0  ldr x21,[x8, #0x80]
7101df6fd4  mov w8,#0x2268
7101df6fd8  ldr x0,[x21, #0x2268]
7101df6fdc  add x19,x21,x8
7101df6fe0  ldr x8,[x0]
7101df6fe4  ldr x8,[x8, #0x70]
7101df6fe8  mov w1,wzr
7101df6fec  blr x8
7101df6ff0  mov w8,#0x11b4
7101df6ff4  ldrb w8,[x21, x8, LSL ]
7101df6ff8  cbz w8,0x7101df7014
7101df6ffc  ldr x0,[x19]
7101df7000  ldr w8,[x0, #0x254]
7101df7004  cmp w8,#0x3
7101df7008  b.ne 0x7101df7280
7101df700c  bl 0x710376b960
7101df7010  b 0x7101df7280
7101df7014  orr w1,wzr,#0x3
7101df7018  b 0x7101df704c
7101df701c  ldr x8,[x22, #0x8]
7101df7020  str wzr,[x8, #0x118]
7101df7024  ldr x0,[x19, #0x28]
7101df7028  ldr x8,[x0]
7101df702c  ldr x8,[x8, #0x60]
7101df7030  mov w1,wzr
7101df7034  blr x8
7101df7038  ldr x0,[x19, #0x30]
7101df703c  b 0x7101df7270
7101df7040  sub w8,w8,#0x1
7101df7044  cmp w8,#0x5
7101df7048  cneg w1,w21,cs
7101df704c  mov x0,x19
7101df7050  mov w2,wzr
7101df7054  bl 0x7103771a80
7101df7058  b 0x7101df7280
7101df705c  adrp x8,0x71052a8000
7101df7060  ldr x8,[x8, #0xa80]
7101df7064  ldr q0,[x8]
7101df7068  mov x22,xzr
7101df706c  str q0,[sp, #0x10]
7101df7070  mov w0,#0x10
7101df7074  mov w1,#0x20
7101df7078  bl 0x710392e290
7101df707c  mov x21,x0
7101df7080  cbnz x0,0x7101df70cc
7101df7084  adrp x8,0x7105332000
7101df7088  ldr x0,[x8, #0xf00]
7101df708c  cbz x0,0x7101df70c8
7101df7090  mov w8,#0x20
7101df7094  stur wzr,[x29, #-0x44]
7101df7098  sub x1,x29,#0x44
7101df709c  str x8,[sp, #0x38]
7101df70a0  ldr x8,[x0]
7101df70a4  ldr x8,[x8, #0x30]
7101df70a8  add x2,sp,#0x38
7101df70ac  blr x8
7101df70b0  tbz w0,#0x0,0x7101df70c8
7101df70b4  mov w0,#0x10
7101df70b8  mov w1,#0x20
7101df70bc  bl 0x710392e290
7101df70c0  mov x21,x0
7101df70c4  cbnz x0,0x7101df70cc
7101df70c8  mov x21,xzr
7101df70cc  stp xzr,xzr,[x21, #0x10]
7101df70d0  stp xzr,xzr,[x21]
7101df70d4  cbz x22,0x7101df7100
7101df70d8  mov x0,x22
7101df70dc  str x22,[x21]
7101df70e0  bl 0x7103772ed0
7101df70e4  str x0,[x21, #0x8]
7101df70e8  mov x0,x22
7101df70ec  bl 0x7103772fe0
7101df70f0  str x0,[x21, #0x10]
7101df70f4  mov x0,x22
7101df70f8  bl 0x71037730f0
7101df70fc  str x0,[x21, #0x18]
7101df7100  ldr x8,[x21]
7101df7104  cbz x8,0x7101df71d8
7101df7108  mov w25,#0x20
7101df710c  adrp x26,0x7105332000
7101df7110  movi v0.2D,#0x0
7101df7114  add x9,x8,#0x30
7101df7118  add x10,x8,#0x34
7101df711c  ld1 {v0.S}[0],[x9]
7101df7120  ldr x22,[x8, #0x18]
7101df7124  ld1 {v0.S}[1],[x10]
7101df7128  mov w0,#0x10
7101df712c  mov w1,#0x20
7101df7130  str q0,[sp]
7101df7134  bl 0x710392e290
7101df7138  mov x23,x0
7101df713c  cbnz x0,0x7101df7180
7101df7140  ldr x0,[x26, #0xf00]
7101df7144  cbz x0,0x7101df717c
7101df7148  stur wzr,[x29, #-0x44]
7101df714c  str x25,[sp, #0x38]
7101df7150  ldr x8,[x0]
7101df7154  ldr x8,[x8, #0x30]
7101df7158  sub x1,x29,#0x44
7101df715c  add x2,sp,#0x38
7101df7160  blr x8
7101df7164  tbz w0,#0x0,0x7101df717c
7101df7168  mov w0,#0x10
7101df716c  mov w1,#0x20
7101df7170  bl 0x710392e290
7101df7174  mov x23,x0
7101df7178  cbnz x0,0x7101df7180
7101df717c  mov x23,xzr
7101df7180  stp xzr,xzr,[x23, #0x10]
7101df7184  stp xzr,xzr,[x23]
7101df7188  cbz x22,0x7101df71b4
7101df718c  mov x0,x22
7101df7190  str x22,[x23]
7101df7194  bl 0x7103772ed0
7101df7198  str x0,[x23, #0x8]
7101df719c  mov x0,x22
7101df71a0  bl 0x7103772fe0
7101df71a4  str x0,[x23, #0x10]
7101df71a8  mov x0,x22
7101df71ac  bl 0x71037730f0
7101df71b0  str x0,[x23, #0x18]
7101df71b4  ldp q1,q0,[sp]
7101df71b8  fadd v0.4S,v0.4S,v1.4S
7101df71bc  mov x0,x21
7101df71c0  str q0,[sp, #0x10]
7101df71c4  bl 0x710392eb40
7101df71c8  ldr x8,[x23]
7101df71cc  mov x21,x23
7101df71d0  cbnz x8,0x7101df7110
7101df71d4  b 0x7101df71dc
7101df71d8  mov x23,x21
7101df71dc  mov x0,x23
7101df71e0  add x21,x19,#0x610
7101df71e4  bl 0x710392eb40
7101df71e8  ldr x8,[x19, #0x630]
7101df71ec  ldr x9,[x8, #0xd8]
7101df71f0  ldr x10,[x9, #0x8]
7101df71f4  cbz x10,0x7101df72a0
7101df71f8  ldr x8,[x9, #0x18]
7101df71fc  ldr x8,[x8]
7101df7200  cbz x8,0x7101df7218
7101df7204  ldr q0,[sp, #0x10]
7101df7208  ldrb w9,[x8, #0x58]
7101df720c  orr w9,w9,#0x10
7101df7210  str d0,[x8, #0x30]
7101df7214  strb w9,[x8, #0x58]
7101df7218  ldr x0,[sp, #0x30]
7101df721c  adrp x8,0x710523d000
7101df7220  add x8,x8,#0x9a8
7101df7224  stp x8,xzr,[sp, #0x28]
7101df7228  cbz x0,0x7101df7230
7101df722c  bl 0x710392eb40
7101df7230  ldr w1,[x19, #0x688]
7101df7234  mov x0,x21
7101df7238  bl 0x71032cc8f0
7101df723c  ldr x8,[x19, #0x10]
7101df7240  ldr x8,[x8]
7101df7244  ldr x0,[x8, #0x10]
7101df7248  fmov s0,0x3f800000
7101df724c  adrp x1,0x710438d000
7101df7250  add x1,x1,#0x42
7101df7254  bl 0x7103778300
7101df7258  ldr x0,[x19, #0x38]
7101df725c  ldr x8,[x0]
7101df7260  ldr x8,[x8, #0x70]
7101df7264  mov w1,wzr
7101df7268  blr x8
7101df726c  ldr x0,[x19, #0x38]
7101df7270  ldr x8,[x0]
7101df7274  ldr x8,[x8, #0x60]
7101df7278  mov w1,wzr
7101df727c  blr x8
7101df7280  str w20,[x24]
7101df7284  ldp x29,x30,[sp, #0x90]
7101df7288  ldp x20,x19,[sp, #0x80]
7101df728c  ldp x22,x21,[sp, #0x70]
7101df7290  ldp x24,x23,[sp, #0x60]
7101df7294  ldp x26,x25,[sp, #0x50]
7101df7298  add sp,sp,#0xa0
7101df729c  ret
7101df72a0  ldr x8,[x8, #0xe8]
7101df72a4  ldr x8,[x8, #0x18]
7101df72a8  ldr x8,[x8]
7101df72ac  cbnz x8,0x7101df7204
7101df72b0  b 0x7101df7218
7101df72b4  mov w3,#0x1
7101df72b8  mov x0,x21
7101df72bc  mov w1,wzr
7101df72c0  mov w2,wzr
7101df72c4  bl 0x7103783c10
7101df72c8  b 0x7101df6fcc
7101df72cc  ldr x9,[x19, #0x248]
7101df72d0  ldr x10,[x19, #0x240]
7101df72d4  sub x9,x9,x10
7101df72d8  lsr x9,x9,#0x3
7101df72dc  cmp w9,w8
7101df72e0  b.gt 0x7101df6dd8
7101df72e4  mov x0,x19
7101df72e8  bl 0x7101df6590
7101df72ec  strb wzr,[x19, #0x6b1]
7101df72f0  orr w8,wzr,#0x7
7101df72f4  str w8,[x19, #0x65c]
7101df72f8  ldrb w8,[x19, #0x660]
7101df72fc  cbz w8,0x7101df730c
7101df7300  ldr w1,[x19, #0x664]
7101df7304  mov x0,x19
7101df7308  b 0x7101df7314
7101df730c  mov x0,x19
7101df7310  mov w1,wzr
7101df7314  bl 0x7101df6680
7101df7318  mov w8,#0xffffffff
7101df731c  str w8,[x19, #0x668]
7101df7320  ldr x8,[x19, #0x38]
7101df7324  strb wzr,[x19, #0x660]
7101df7328  ldr w8,[x8, #0x2a4]
7101df732c  str w8,[x19, #0x6c8]
7101df7330  b 0x7101df7284
7101df7334  ldr x8,[x19, #0x248]
7101df7338  ldr x9,[x19, #0x240]
7101df733c  sub x8,x8,x9
7101df7340  lsr x8,x8,#0x3
7101df7344  cmp w8,#0x1
7101df7348  b.lt 0x7101df7360
7101df734c  cmp w1,w8
7101df7350  b.lt 0x7101df7360
7101df7354  mov w1,wzr
7101df7358  str wzr,[x19, #0x668]
7101df735c  b 0x7101df7368
7101df7360  cmn w1,#0x1
7101df7364  b.eq 0x7101df72ec
7101df7368  bl 0x7101e02dc0
7101df736c  ldr w1,[x19, #0x668]
7101df7370  mov w3,#0x1
7101df7374  mov x0,x20
7101df7378  mov w2,wzr
7101df737c  bl 0x7103783c10
7101df7380  b 0x7101df72ec
