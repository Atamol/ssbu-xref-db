// addr:      7101ad67c0
// offset:    0x1ad67c0
// name:      FUN_7101ad67c0
// mangled:   
// size:      964

7101ad67c0  str x25,[sp, #-0x50]!
7101ad67c4  stp x24,x23,[sp, #0x10]
7101ad67c8  stp x22,x21,[sp, #0x20]
7101ad67cc  stp x20,x19,[sp, #0x30]
7101ad67d0  stp x29,x30,[sp, #0x40]
7101ad67d4  add x29,sp,#0x40
7101ad67d8  adrp x8,0x710532f000
7101ad67dc  ldr x8,[x8, #0x7e8]
7101ad67e0  ldr x8,[x8, #0x8]
7101ad67e4  ldrb w9,[x8, #0x161]
7101ad67e8  cbz w9,0x7101ad6b20
7101ad67ec  ldr w8,[x8, #0xe8]
7101ad67f0  cmp w8,#0x2
7101ad67f4  b.ne 0x7101ad6b20
7101ad67f8  ldr w8,[x0, #0x164]
7101ad67fc  mov x19,x0
7101ad6800  cbnz w8,0x7101ad680c
7101ad6804  mov w8,#0x1
7101ad6808  strb w8,[x19, #0x598]
7101ad680c  bl 0x71039c6170
7101ad6810  ldr x8,[x19, #0x588]
7101ad6814  sub x8,x0,x8
7101ad6818  mov w9,#0xca00
7101ad681c  movk w9,#0x3b9a, LSL #16
7101ad6820  mul x8,x8,x9
7101ad6824  and x9,x8,#0xfffffe00
7101ad6828  asr x10,x8,#0x20
7101ad682c  mov w11,#0x94b3
7101ad6830  movk w11,#0x26d6, LSL #16
7101ad6834  mul x12,x10,x11
7101ad6838  mul x11,x9,x11
7101ad683c  add x11,x12,x11, LSR #0x20
7101ad6840  mov w12,#0xbe8
7101ad6844  movk w12,#0x112e, LSL #16
7101ad6848  mul x10,x10,x12
7101ad684c  mul x9,x9,x12
7101ad6850  add x9,x9,w11, UXTW 
7101ad6854  add x10,x10,x11, ASR #0x20
7101ad6858  add x9,x10,x9, LSR #0x20
7101ad685c  asr x9,x9,#0x1a
7101ad6860  add x8,x9,x8, LSR #0x3f
7101ad6864  ldr w9,[x19, #0x580]
7101ad6868  cmp x8,x9
7101ad686c  b.ge 0x7101ad6878
7101ad6870  add x22,x19,#0x40
7101ad6874  b 0x7101ad6998
7101ad6878  mov x22,x19
7101ad687c  ldr x20,[x22, #0x40]!
7101ad6880  str x0,[x22, #0x548]
7101ad6884  ldr x8,[x20]
7101ad6888  cbz x8,0x7101ad6978
7101ad688c  adrp x1,0x71042b2000
7101ad6890  add x1,x1,#0xa84
7101ad6894  add x0,sp,#0x8
7101ad6898  str xzr,[sp, #0x8]
7101ad689c  bl 0x71037aea50
7101ad68a0  ldr x20,[x20]
7101ad68a4  ldr x0,[x20]
7101ad68a8  cbz x0,0x7101ad6928
7101ad68ac  ldr x8,[x0, #0x18]
7101ad68b0  ldr x8,[x8, #0x40]
7101ad68b4  ldr w9,[x8, #0xc]
7101ad68b8  cmp w9,#0x2
7101ad68bc  b.cc 0x7101ad68cc
7101ad68c0  ldr x8,[x8, #0x10]
7101ad68c4  add x1,x8,#0x10
7101ad68c8  b 0x7101ad6918
7101ad68cc  ldr x9,[x8, #0x18]
7101ad68d0  ldrb w8,[x8, #0xb]
7101ad68d4  mov w10,#0xffffffff
7101ad68d8  lsl x8,x10,x8
7101ad68dc  mvn w8,w8
7101ad68e0  and x8,x8,#0x2
7101ad68e4  add x1,x9,x8, LSL #0x5
7101ad68e8  adrp x8,0x7104862000
7101ad68ec  add x8,x8,#0x960
7101ad68f0  ldr w9,[x1, #0x18]
7101ad68f4  cmp w9,#0x13
7101ad68f8  b.ne 0x7101ad6908
7101ad68fc  ldr x9,[x1, #0x10]
7101ad6900  cmp x9,#0x2
7101ad6904  b.eq 0x7101ad6918
7101ad6908  ldrsw x9,[x1, #0x1c]
7101ad690c  add x1,x1,x9, LSL #0x5
7101ad6910  cbnz w9,0x7101ad68f0
7101ad6914  mov x1,x8
7101ad6918  adrp x2,0x71043ad000
7101ad691c  add x2,x2,#0x2c6
7101ad6920  bl 0x71038f4d40
7101ad6924  ldr x0,[x20]
7101ad6928  add x1,sp,#0x8
7101ad692c  bl 0x710372d940
7101ad6930  ldr x21,[sp, #0x8]
7101ad6934  cbz x21,0x7101ad6978
7101ad6938  ldp x8,x24,[x21, #0x8]
7101ad693c  ldr w20,[x8]
7101ad6940  mov x23,xzr
7101ad6944  b 0x7101ad694c
7101ad6948  add x23,x23,#0x1
7101ad694c  ldrb w8,[x24, x23, LSL ]
7101ad6950  cmp w8,#0x73
7101ad6954  b.eq 0x7101ad6960
7101ad6958  cbnz w8,0x7101ad6948
7101ad695c  b 0x7101ad6980
7101ad6960  ldr x25,[x21, #0x8]
7101ad6964  ldr x0,[x25, x23, LSL #0x3]
7101ad6968  cbz x0,0x7101ad6970
7101ad696c  bl 0x710392eb40
7101ad6970  str xzr,[x25, x23, LSL #0x3]
7101ad6974  b 0x7101ad6948
7101ad6978  mov w20,wzr
7101ad697c  b 0x7101ad698c
7101ad6980  mov x0,x21
7101ad6984  bl 0x710392eb40
7101ad6988  str xzr,[sp, #0x8]
7101ad698c  mov x0,x19
7101ad6990  mov w1,w20
7101ad6994  bl 0x7101ad7b10
7101ad6998  ldr x20,[x22]
7101ad699c  ldr x8,[x20]
7101ad69a0  cbz x8,0x7101ad69ac
7101ad69a4  ldr x9,[x8, #0x8]
7101ad69a8  cbnz x9,0x7101ad6b20
7101ad69ac  ldrb w9,[x19, #0x599]
7101ad69b0  cbz w9,0x7101ad69dc
7101ad69b4  bl 0x71039c6170
7101ad69b8  adrp x8,0x7105314000
7101ad69bc  add x8,x8,#0x4d8
7101ad69c0  ldarb w8,[x8]
7101ad69c4  mov x20,x0
7101ad69c8  tbz w8,#0x0,0x7101ad6b38
7101ad69cc  adrp x8,0x7105308000
7101ad69d0  str x20,[x8, #0x540]
7101ad69d4  ldr x20,[x22]
7101ad69d8  ldr x8,[x20]
7101ad69dc  cbz x8,0x7101ad6acc
7101ad69e0  adrp x1,0x71042b2000
7101ad69e4  add x1,x1,#0xa84
7101ad69e8  add x0,sp,#0x8
7101ad69ec  str xzr,[sp, #0x8]
7101ad69f0  bl 0x71037aea50
7101ad69f4  ldr x20,[x20]
7101ad69f8  ldr x0,[x20]
7101ad69fc  cbz x0,0x7101ad6a7c
7101ad6a00  ldr x8,[x0, #0x18]
7101ad6a04  ldr x8,[x8, #0x40]
7101ad6a08  ldr w9,[x8, #0xc]
7101ad6a0c  cmp w9,#0x2
7101ad6a10  b.cc 0x7101ad6a20
7101ad6a14  ldr x8,[x8, #0x10]
7101ad6a18  add x1,x8,#0x10
7101ad6a1c  b 0x7101ad6a6c
7101ad6a20  ldr x9,[x8, #0x18]
7101ad6a24  ldrb w8,[x8, #0xb]
7101ad6a28  mov w10,#0xffffffff
7101ad6a2c  lsl x8,x10,x8
7101ad6a30  mvn w8,w8
7101ad6a34  and x8,x8,#0x2
7101ad6a38  add x1,x9,x8, LSL #0x5
7101ad6a3c  adrp x8,0x7104862000
7101ad6a40  add x8,x8,#0x960
7101ad6a44  ldr w9,[x1, #0x18]
7101ad6a48  cmp w9,#0x13
7101ad6a4c  b.ne 0x7101ad6a5c
7101ad6a50  ldr x9,[x1, #0x10]
7101ad6a54  cmp x9,#0x2
7101ad6a58  b.eq 0x7101ad6a6c
7101ad6a5c  ldrsw x9,[x1, #0x1c]
7101ad6a60  add x1,x1,x9, LSL #0x5
7101ad6a64  cbnz w9,0x7101ad6a44
7101ad6a68  mov x1,x8
7101ad6a6c  adrp x2,0x7104433000
7101ad6a70  add x2,x2,#0x842
7101ad6a74  bl 0x71038f4d40
7101ad6a78  ldr x0,[x20]
7101ad6a7c  add x1,sp,#0x8
7101ad6a80  bl 0x710372d940
7101ad6a84  ldr x20,[sp, #0x8]
7101ad6a88  cbz x20,0x7101ad6acc
7101ad6a8c  ldp x8,x23,[x20, #0x8]
7101ad6a90  ldr w21,[x8]
7101ad6a94  mov x22,xzr
7101ad6a98  b 0x7101ad6aa0
7101ad6a9c  add x22,x22,#0x1
7101ad6aa0  ldrb w8,[x23, x22, LSL ]
7101ad6aa4  cmp w8,#0x73
7101ad6aa8  b.eq 0x7101ad6ab4
7101ad6aac  cbnz w8,0x7101ad6a9c
7101ad6ab0  b 0x7101ad6ad4
7101ad6ab4  ldr x24,[x20, #0x8]
7101ad6ab8  ldr x0,[x24, x22, LSL #0x3]
7101ad6abc  cbz x0,0x7101ad6ac4
7101ad6ac0  bl 0x710392eb40
7101ad6ac4  str xzr,[x24, x22, LSL #0x3]
7101ad6ac8  b 0x7101ad6a9c
7101ad6acc  mov w21,wzr
7101ad6ad0  b 0x7101ad6ae0
7101ad6ad4  mov x0,x20
7101ad6ad8  bl 0x710392eb40
7101ad6adc  str xzr,[sp, #0x8]
7101ad6ae0  ldrsw x8,[x19, #0x15c]
7101ad6ae4  cmp w8,#0x13
7101ad6ae8  str w21,[x19, #0x56c]
7101ad6aec  b.cs 0x7101ad6b78
7101ad6af0  add x8,x19,x8, LSL #0x2
7101ad6af4  mov w9,#0x9
7101ad6af8  str w9,[x8, #0x110]
7101ad6afc  ldr x8,[x19, #0x10]!
7101ad6b00  ldr x9,[x19, #0x8]
7101ad6b04  cmp x9,x8
7101ad6b08  b.eq 0x7101ad6b7c
7101ad6b0c  ldr x8,[x8]
7101ad6b10  cbz x8,0x7101ad6b20
7101ad6b14  ldr x8,[x8]
7101ad6b18  ldr x0,[x8]
7101ad6b1c  bl 0x7103775fa0
7101ad6b20  ldp x29,x30,[sp, #0x40]
7101ad6b24  ldp x20,x19,[sp, #0x30]
7101ad6b28  ldp x22,x21,[sp, #0x20]
7101ad6b2c  ldp x24,x23,[sp, #0x10]
7101ad6b30  ldr x25,[sp], #0x50
7101ad6b34  ret
7101ad6b38  adrp x0,0x7105314000
7101ad6b3c  add x0,x0,#0x4d8
7101ad6b40  bl 0x71039c06b0
7101ad6b44  cbz w0,0x7101ad69cc
7101ad6b48  bl 0x7101764000
7101ad6b4c  adrp x0,0x7101763000
7101ad6b50  add x0,x0,#0xc40
7101ad6b54  adrp x1,0x71052c5000
7101ad6b58  add x1,x1,#0x180
7101ad6b5c  adrp x2,0x7104f17000
7101ad6b60  add x2,x2,#0x0
7101ad6b64  bl 0x71000001c0
7101ad6b68  adrp x0,0x7105314000
7101ad6b6c  add x0,x0,#0x4d8
7101ad6b70  bl 0x71039c06c0
7101ad6b74  b 0x7101ad69cc
7101ad6b78  bl 0x71039c2650
7101ad6b7c  mov x0,x19
7101ad6b80  bl 0x71039c1330
