// addr:      7101e9b720
// offset:    0x1e9b720
// name:      FUN_7101e9b720
// mangled:   
// size:      852

7101e9b720  str d8,[sp, #-0x50]!
7101e9b724  stp x24,x23,[sp, #0x10]
7101e9b728  stp x22,x21,[sp, #0x20]
7101e9b72c  stp x20,x19,[sp, #0x30]
7101e9b730  stp x29,x30,[sp, #0x40]
7101e9b734  add x29,sp,#0x40
7101e9b738  and w8,w1,#0xff
7101e9b73c  cmp w8,#0x3
7101e9b740  b.hi 0x7101e9ba5c
7101e9b744  ldr x8,[x0]
7101e9b748  add x8,x8,w1, UXTB  #0x3
7101e9b74c  ldr x22,[x8, #0x48]
7101e9b750  mov x19,x0
7101e9b754  cbz x22,0x7101e9ba5c
7101e9b758  ldr x20,[x22, #0xa0]
7101e9b75c  strb wzr,[x22, #0xb5]
7101e9b760  cbz x20,0x7101e9b874
7101e9b764  ldr x8,[x20, #0x8]
7101e9b768  ldr x21,[x8, #0x8]
7101e9b76c  cbz x21,0x7101e9b860
7101e9b770  ldrb w9,[x8, #0x10]
7101e9b774  cbz w9,0x7101e9b840
7101e9b778  ldr x8,[x8]
7101e9b77c  ldr x24,[x8, #0x80]
7101e9b780  add x23,x8,#0x88
7101e9b784  cmp x24,x23
7101e9b788  b.eq 0x7101e9b840
7101e9b78c  ldr x0,[x24, #0x68]
7101e9b790  ldr x8,[x0]
7101e9b794  ldr x8,[x8, #0x148]
7101e9b798  blr x8
7101e9b79c  tbz w0,#0x0,0x7101e9b7dc
7101e9b7a0  ldr x8,[x21]
7101e9b7a4  ldr x1,[x24, #0x68]
7101e9b7a8  mov x0,x21
7101e9b7ac  ldr x8,[x8, #0x120]
7101e9b7b0  blr x8
7101e9b7b4  tbz w0,#0x0,0x7101e9b7dc
7101e9b7b8  ldr x0,[x24, #0x68]
7101e9b7bc  ldr x8,[x0]
7101e9b7c0  ldr x8,[x8, #0x178]
7101e9b7c4  blr x8
7101e9b7c8  ldr x0,[x24, #0x68]
7101e9b7cc  ldr x8,[x0]
7101e9b7d0  ldr x8,[x8, #0x140]
7101e9b7d4  mov w1,wzr
7101e9b7d8  blr x8
7101e9b7dc  ldr x8,[x24, #0x8]
7101e9b7e0  cbz x8,0x7101e9b7f4
7101e9b7e4  mov x24,x8
7101e9b7e8  ldr x8,[x8]
7101e9b7ec  cbnz x8,0x7101e9b7e4
7101e9b7f0  b 0x7101e9b820
7101e9b7f4  mov x8,x24
7101e9b7f8  ldr x9,[x8, #0x10]!
7101e9b7fc  ldr x10,[x9]
7101e9b800  cmp x10,x24
7101e9b804  b.eq 0x7101e9b82c
7101e9b808  ldr x9,[x8]
7101e9b80c  mov x8,x9
7101e9b810  ldr x24,[x8, #0x10]!
7101e9b814  ldr x10,[x24]
7101e9b818  cmp x10,x9
7101e9b81c  b.ne 0x7101e9b808
7101e9b820  cmp x24,x23
7101e9b824  b.ne 0x7101e9b78c
7101e9b828  b 0x7101e9b838
7101e9b82c  mov x24,x9
7101e9b830  cmp x24,x23
7101e9b834  b.ne 0x7101e9b78c
7101e9b838  ldr x8,[x20, #0x8]
7101e9b83c  ldr x21,[x8, #0x8]
7101e9b840  ldr x8,[x21]
7101e9b844  ldr x8,[x8, #0x178]
7101e9b848  mov x0,x21
7101e9b84c  blr x8
7101e9b850  ldr x20,[x22, #0xa0]
7101e9b854  str xzr,[x22, #0xa0]
7101e9b858  cbnz x20,0x7101e9b864
7101e9b85c  b 0x7101e9b874
7101e9b860  str xzr,[x22, #0xa0]
7101e9b864  ldr x8,[x20]
7101e9b868  ldr x8,[x8, #0x8]
7101e9b86c  mov x0,x20
7101e9b870  blr x8
7101e9b874  fmov s8,0x3f800000
7101e9b878  ldr x0,[x22, #0x8]
7101e9b87c  adrp x1,0x71042a3000
7101e9b880  add x1,x1,#0x6bf
7101e9b884  mov v0.16B,v8.16B
7101e9b888  strb wzr,[x22, #0x98]
7101e9b88c  bl 0x7103778300
7101e9b890  ldr x0,[x22, #0x8]
7101e9b894  mov v0.16B,v8.16B
7101e9b898  adrp x1,0x710438d000
7101e9b89c  add x1,x1,#0x258
7101e9b8a0  bl 0x7103778300
7101e9b8a4  ldr x0,[x22, #0x8]
7101e9b8a8  mov v0.16B,v8.16B
7101e9b8ac  adrp x1,0x7104401000
7101e9b8b0  add x1,x1,#0xc0b
7101e9b8b4  bl 0x7103778300
7101e9b8b8  ldr x0,[x22, #0x38]
7101e9b8bc  mov v0.16B,v8.16B
7101e9b8c0  adrp x1,0x71043cd000
7101e9b8c4  add x1,x1,#0x335
7101e9b8c8  bl 0x7103778300
7101e9b8cc  ldr x0,[x22, #0x68]
7101e9b8d0  mov w1,#0x1
7101e9b8d4  strb wzr,[x22, #0xb0]
7101e9b8d8  strb wzr,[x22, #0xb5]
7101e9b8dc  bl 0x71037790a0
7101e9b8e0  ldr x0,[x22, #0x78]
7101e9b8e4  mov w1,#0x1
7101e9b8e8  bl 0x71037790a0
7101e9b8ec  add x0,x22,#0x10
7101e9b8f0  bl 0x71025ae390
7101e9b8f4  ldr x0,[x22, #0x58]
7101e9b8f8  mov w1,#0x1
7101e9b8fc  bl 0x71037790a0
7101e9b900  strb wzr,[x22, #0xb2]
7101e9b904  ldrb w8,[x19, #0xa]
7101e9b908  cbz w8,0x7101e9ba5c
7101e9b90c  ldr x8,[x22, #0x88]
7101e9b910  ldr x19,[x8, #0x8]
7101e9b914  cbz x19,0x7101e9b9f8
7101e9b918  ldrb w9,[x8, #0x10]
7101e9b91c  cbz w9,0x7101e9b9e8
7101e9b920  ldr x8,[x8]
7101e9b924  ldr x21,[x8, #0x80]
7101e9b928  add x20,x8,#0x88
7101e9b92c  cmp x21,x20
7101e9b930  b.eq 0x7101e9b9e8
7101e9b934  ldr x0,[x21, #0x68]
7101e9b938  ldr x8,[x0]
7101e9b93c  ldr x8,[x8, #0x148]
7101e9b940  blr x8
7101e9b944  tbz w0,#0x0,0x7101e9b984
7101e9b948  ldr x8,[x19]
7101e9b94c  ldr x1,[x21, #0x68]
7101e9b950  mov x0,x19
7101e9b954  ldr x8,[x8, #0x120]
7101e9b958  blr x8
7101e9b95c  tbz w0,#0x0,0x7101e9b984
7101e9b960  ldr x0,[x21, #0x68]
7101e9b964  ldr x8,[x0]
7101e9b968  ldr x8,[x8, #0x178]
7101e9b96c  blr x8
7101e9b970  ldr x0,[x21, #0x68]
7101e9b974  ldr x8,[x0]
7101e9b978  ldr x8,[x8, #0x140]
7101e9b97c  mov w1,wzr
7101e9b980  blr x8
7101e9b984  ldr x8,[x21, #0x8]
7101e9b988  cbz x8,0x7101e9b99c
7101e9b98c  mov x21,x8
7101e9b990  ldr x8,[x8]
7101e9b994  cbnz x8,0x7101e9b98c
7101e9b998  b 0x7101e9b9c8
7101e9b99c  mov x8,x21
7101e9b9a0  ldr x9,[x8, #0x10]!
7101e9b9a4  ldr x10,[x9]
7101e9b9a8  cmp x10,x21
7101e9b9ac  b.eq 0x7101e9b9d4
7101e9b9b0  ldr x9,[x8]
7101e9b9b4  mov x8,x9
7101e9b9b8  ldr x21,[x8, #0x10]!
7101e9b9bc  ldr x10,[x21]
7101e9b9c0  cmp x10,x9
7101e9b9c4  b.ne 0x7101e9b9b0
7101e9b9c8  cmp x21,x20
7101e9b9cc  b.ne 0x7101e9b934
7101e9b9d0  b 0x7101e9b9e0
7101e9b9d4  mov x21,x9
7101e9b9d8  cmp x21,x20
7101e9b9dc  b.ne 0x7101e9b934
7101e9b9e0  ldr x8,[x22, #0x88]
7101e9b9e4  ldr x19,[x8, #0x8]
7101e9b9e8  ldr x8,[x19]
7101e9b9ec  ldr x8,[x8, #0x188]
7101e9b9f0  mov x0,x19
7101e9b9f4  blr x8
7101e9b9f8  fmov s8,0x3f800000
7101e9b9fc  ldr x0,[x22, #0x8]
7101e9ba00  adrp x19,0x710425f000
7101e9ba04  add x19,x19,#0xbe5
7101e9ba08  mov x1,x19
7101e9ba0c  mov v0.16B,v8.16B
7101e9ba10  bl 0x7103778300
7101e9ba14  ldr x0,[x22, #0x8]
7101e9ba18  mov v0.16B,v8.16B
7101e9ba1c  adrp x1,0x710435b000
7101e9ba20  add x1,x1,#0xea3
7101e9ba24  bl 0x7103778300
7101e9ba28  ldr x0,[x22, #0x28]
7101e9ba2c  mov v0.16B,v8.16B
7101e9ba30  mov x1,x19
7101e9ba34  bl 0x7103778300
7101e9ba38  ldrb w8,[x22, #0xb4]
7101e9ba3c  strb wzr,[x22, #0xb3]
7101e9ba40  cbz w8,0x7101e9ba58
7101e9ba44  ldr x0,[x22, #0x8]
7101e9ba48  fmov s0,0x3f800000
7101e9ba4c  adrp x1,0x71043cf000
7101e9ba50  add x1,x1,#0xbc9
7101e9ba54  bl 0x7103778300
7101e9ba58  strb wzr,[x22, #0xb4]
7101e9ba5c  ldp x29,x30,[sp, #0x40]
7101e9ba60  ldp x20,x19,[sp, #0x30]
7101e9ba64  ldp x22,x21,[sp, #0x20]
7101e9ba68  ldp x24,x23,[sp, #0x10]
7101e9ba6c  ldr d8,[sp], #0x50
7101e9ba70  ret
