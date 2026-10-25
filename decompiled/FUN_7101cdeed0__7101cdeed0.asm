// addr:      7101cdeed0
// offset:    0x1cdeed0
// name:      FUN_7101cdeed0
// mangled:   
// size:      1088

7101cdeed0  sub sp,sp,#0xc0
7101cdeed4  stp x22,x21,[sp, #0x90]
7101cdeed8  stp x20,x19,[sp, #0xa0]
7101cdeedc  stp x29,x30,[sp, #0xb0]
7101cdeee0  add x29,sp,#0xb0
7101cdeee4  ldr x1,[x0, #0x290]
7101cdeee8  mov x19,x0
7101cdeeec  cbz x1,0x7101cdef70
7101cdeef0  adrp x8,0x710532f000
7101cdeef4  ldr x8,[x8, #0x8f8]
7101cdeef8  ldr x0,[x8, #0x8]
7101cdeefc  ldr w2,[x19, #0x288]
7101cdef00  bl 0x710334c7d0
7101cdef04  mov w20,w0
7101cdef08  ldr w8,[x19, #0x22c]
7101cdef0c  cbz w8,0x7101cdef7c
7101cdef10  ldr x8,[x19, #0x2d0]
7101cdef14  ldrb w9,[x8, #0x280]
7101cdef18  cbz w9,0x7101cdef34
7101cdef1c  add x21,x19,#0x2d0
7101cdef20  orr w1,wzr,#0x7
7101cdef24  mov x0,x21
7101cdef28  mov w2,wzr
7101cdef2c  bl 0x7103771be0
7101cdef30  ldr x8,[x21]
7101cdef34  ldr w8,[x8, #0x25c]
7101cdef38  cmp w8,#0x7
7101cdef3c  b.ne 0x7101cdf2f8
7101cdef40  adrp x8,0x710532f000
7101cdef44  ldr x8,[x8, #0x8d0]
7101cdef48  ldr x0,[x8, #0x8]
7101cdef4c  ldp x8,x9,[x0, #0x40]
7101cdef50  sub x9,x9,x8
7101cdef54  asr x9,x9,#0x3
7101cdef58  cmp x9,#0x4
7101cdef5c  b.cc 0x7101cdf0a0
7101cdef60  ldr x21,[x8, #0x18]
7101cdef64  ldrb w8,[x0, #0x191]
7101cdef68  cbnz w8,0x7101cdf11c
7101cdef6c  b 0x7101cdf0ac
7101cdef70  orr w20,wzr,#0xffff
7101cdef74  ldr w8,[x19, #0x22c]
7101cdef78  cbnz w8,0x7101cdef10
7101cdef7c  adrp x8,0x710532f000
7101cdef80  ldr x8,[x8, #0x8d0]
7101cdef84  ldr x0,[x8, #0x8]
7101cdef88  ldp x8,x9,[x0, #0x40]
7101cdef8c  sub x9,x9,x8
7101cdef90  asr x9,x9,#0x3
7101cdef94  cmp x9,#0x6
7101cdef98  b.cc 0x7101cdefac
7101cdef9c  ldr x21,[x8, #0x28]
7101cdefa0  ldrb w8,[x0, #0x191]
7101cdefa4  cbnz w8,0x7101cdf028
7101cdefa8  b 0x7101cdefb8
7101cdefac  mov x21,xzr
7101cdefb0  ldrb w8,[x0, #0x191]
7101cdefb4  cbnz w8,0x7101cdf028
7101cdefb8  mov w2,#0x4
7101cdefbc  mov x1,x21
7101cdefc0  bl 0x7103313f20
7101cdefc4  tbz w0,#0x0,0x7101cdf028
7101cdefc8  add x0,sp,#0x40
7101cdefcc  mov x1,x21
7101cdefd0  bl 0x71024076d0
7101cdefd4  ldr x8,[sp, #0x50]
7101cdefd8  adrp x9,0x7104f73000
7101cdefdc  add x9,x9,#0xd50
7101cdefe0  str x9,[sp, #0x48]
7101cdefe4  cbz x8,0x7101cdf054
7101cdefe8  adrp x8,0x7106dd5000
7101cdefec  ldrb w8,[x8, #0x3a8]
7101cdeff0  cmp w8,#0x1
7101cdeff4  b.ne 0x7101cdf054
7101cdeff8  adrp x9,0x7106dd5000
7101cdeffc  ldr w8,[sp, #0x58]
7101cdf000  ldr w9,[x9, #0x3ac]
7101cdf004  cmp w8,w9
7101cdf008  b.ne 0x7101cdf054
7101cdf00c  ldr x8,[sp, #0x50]
7101cdf010  ldr wzr,[x8, #0x38]!
7101cdf014  ldaxr w9,[x8]
7101cdf018  sub w9,w9,#0x1
7101cdf01c  stlxr w10,w9,[x8]
7101cdf020  cbnz w10,0x7101cdf014
7101cdf024  b 0x7101cdf054
7101cdf028  mov x8,#0x650000000000
7101cdf02c  movk x8,#0x87, LSL #48
7101cdf030  strb wzr,[sp, #0x60]
7101cdf034  stp xzr,x8,[sp, #0x50]
7101cdf038  mov x8,#-0x1
7101cdf03c  stp x8,xzr,[sp, #0x68]
7101cdf040  adrp x8,0x7104f73000
7101cdf044  add x8,x8,#0xd50
7101cdf048  str wzr,[sp, #0x40]
7101cdf04c  str xzr,[sp, #0x78]
7101cdf050  str x8,[sp, #0x48]
7101cdf054  add x21,x19,#0x250
7101cdf058  adrp x1,0x7104443000
7101cdf05c  add x1,x1,#0xb1e
7101cdf060  sub x8,x29,#0x30
7101cdf064  mov x0,x21
7101cdf068  str xzr,[sp, #0x50]
7101cdf06c  strb wzr,[sp, #0x60]
7101cdf070  bl 0x7103776910
7101cdf074  ldur x22,[x29, #-0x28]
7101cdf078  ldr x0,[x22]
7101cdf07c  mov w1,wzr
7101cdf080  bl 0x710377aa20
7101cdf084  ldr x8,[x22]
7101cdf088  cbz x8,0x7101cdf198
7101cdf08c  ldrb w9,[x8, #0x58]
7101cdf090  and w9,w9,#0xfe
7101cdf094  strb w9,[x8, #0x58]
7101cdf098  ldr x0,[x22]
7101cdf09c  b 0x7101cdf19c
7101cdf0a0  mov x21,xzr
7101cdf0a4  ldrb w8,[x0, #0x191]
7101cdf0a8  cbnz w8,0x7101cdf11c
7101cdf0ac  mov w2,#0x4
7101cdf0b0  mov x1,x21
7101cdf0b4  bl 0x7103313f20
7101cdf0b8  tbz w0,#0x0,0x7101cdf11c
7101cdf0bc  mov x0,sp
7101cdf0c0  mov x1,x21
7101cdf0c4  bl 0x71024076d0
7101cdf0c8  ldr x8,[sp, #0x10]
7101cdf0cc  adrp x9,0x7104f73000
7101cdf0d0  add x9,x9,#0xd50
7101cdf0d4  str x9,[sp, #0x8]
7101cdf0d8  cbz x8,0x7101cdf148
7101cdf0dc  adrp x8,0x7106dd5000
7101cdf0e0  ldrb w8,[x8, #0x3a8]
7101cdf0e4  cmp w8,#0x1
7101cdf0e8  b.ne 0x7101cdf148
7101cdf0ec  adrp x9,0x7106dd5000
7101cdf0f0  ldr w8,[sp, #0x18]
7101cdf0f4  ldr w9,[x9, #0x3ac]
7101cdf0f8  cmp w8,w9
7101cdf0fc  b.ne 0x7101cdf148
7101cdf100  ldr x8,[sp, #0x10]
7101cdf104  ldr wzr,[x8, #0x38]!
7101cdf108  ldaxr w9,[x8]
7101cdf10c  sub w9,w9,#0x1
7101cdf110  stlxr w10,w9,[x8]
7101cdf114  cbnz w10,0x7101cdf108
7101cdf118  b 0x7101cdf148
7101cdf11c  mov x8,#0x650000000000
7101cdf120  movk x8,#0x87, LSL #48
7101cdf124  strb wzr,[sp, #0x20]
7101cdf128  stp xzr,x8,[sp, #0x10]
7101cdf12c  mov x8,#-0x1
7101cdf130  stp x8,xzr,[sp, #0x28]
7101cdf134  adrp x8,0x7104f73000
7101cdf138  add x8,x8,#0xd50
7101cdf13c  str wzr,[sp]
7101cdf140  str xzr,[sp, #0x38]
7101cdf144  str x8,[sp, #0x8]
7101cdf148  str xzr,[sp, #0x10]
7101cdf14c  strb wzr,[sp, #0x20]
7101cdf150  ldr x0,[x19, #0x258]
7101cdf154  fmov s0,0x3f800000
7101cdf158  adrp x1,0x71042d6000
7101cdf15c  add x1,x1,#0x3b4
7101cdf160  add x21,x19,#0x250
7101cdf164  bl 0x7103778300
7101cdf168  mov w1,#0x1
7101cdf16c  mov w3,#0x1
7101cdf170  mov x0,x21
7101cdf174  mov w2,w20
7101cdf178  bl 0x7101cdfad0
7101cdf17c  ldrsw x8,[x19, #0x224]
7101cdf180  cmp w8,#0x13
7101cdf184  b.cs 0x7101cdf30c
7101cdf188  add x8,x19,x8, LSL #0x2
7101cdf18c  mov w9,#0x2
7101cdf190  str w9,[x8, #0x1d8]
7101cdf194  b 0x7101cdf2f8
7101cdf198  mov x0,xzr
7101cdf19c  mov w1,#0x1
7101cdf1a0  bl 0x710377acb0
7101cdf1a4  adrp x8,0x710523d000
7101cdf1a8  add x8,x8,#0x9a8
7101cdf1ac  stp x8,xzr,[x29, #-0x30]
7101cdf1b0  cbz x22,0x7101cdf1bc
7101cdf1b4  mov x0,x22
7101cdf1b8  bl 0x710392eb40
7101cdf1bc  ldr x0,[x19, #0x2b0]
7101cdf1c0  ldr x8,[x0]
7101cdf1c4  ldr x8,[x8, #0x70]
7101cdf1c8  mov w1,wzr
7101cdf1cc  blr x8
7101cdf1d0  mov x0,x19
7101cdf1d4  mov w1,wzr
7101cdf1d8  bl 0x7101cdf660
7101cdf1dc  ldr x0,[x19, #0x2b8]
7101cdf1e0  ldr x8,[x0]
7101cdf1e4  ldr x8,[x8, #0x70]
7101cdf1e8  mov w1,wzr
7101cdf1ec  blr x8
7101cdf1f0  ldr x0,[x19, #0x2c0]
7101cdf1f4  ldr x8,[x0]
7101cdf1f8  ldr x8,[x8, #0x70]
7101cdf1fc  mov w1,wzr
7101cdf200  blr x8
7101cdf204  ldr x0,[x19, #0x2c8]
7101cdf208  ldr x8,[x0]
7101cdf20c  ldr x8,[x8, #0x70]
7101cdf210  mov w1,wzr
7101cdf214  blr x8
7101cdf218  ldr x0,[x19, #0x2d8]
7101cdf21c  ldr x8,[x0]
7101cdf220  ldr x8,[x8, #0x70]
7101cdf224  mov w1,wzr
7101cdf228  blr x8
7101cdf22c  ldr x8,[x19, #0x2d0]
7101cdf230  ldr x10,[x8, #0x1c8]
7101cdf234  add x0,x19,#0x2d0
7101cdf238  add x9,x8,#0x1d0
7101cdf23c  b 0x7101cdf244
7101cdf240  mov x10,x12
7101cdf244  cmp x10,x9
7101cdf248  b.eq 0x7101cdf298
7101cdf24c  ldr x11,[x10, #0x8]
7101cdf250  str wzr,[x10, #0x28]
7101cdf254  cbz x11,0x7101cdf268
7101cdf258  mov x10,x11
7101cdf25c  ldr x11,[x11]
7101cdf260  cbnz x11,0x7101cdf258
7101cdf264  b 0x7101cdf244
7101cdf268  mov x11,x10
7101cdf26c  ldr x12,[x11, #0x10]!
7101cdf270  ldr x13,[x12]
7101cdf274  cmp x13,x10
7101cdf278  b.eq 0x7101cdf240
7101cdf27c  ldr x12,[x11]
7101cdf280  mov x11,x12
7101cdf284  ldr x10,[x11, #0x10]!
7101cdf288  ldr x13,[x10]
7101cdf28c  cmp x13,x12
7101cdf290  b.ne 0x7101cdf27c
7101cdf294  b 0x7101cdf244
7101cdf298  mov x9,#-0x1
7101cdf29c  str x9,[x8, #0x258]
7101cdf2a0  str x9,[x8, #0x250]
7101cdf2a4  strb wzr,[x8, #0x280]
7101cdf2a8  add x8,x8,#0x282
7101cdf2ac  orr w1,wzr,#0x7
7101cdf2b0  mov w2,#0x1
7101cdf2b4  str wzr,[x8]
7101cdf2b8  bl 0x7103771a80
7101cdf2bc  ldr x0,[x19, #0x2d0]
7101cdf2c0  ldr x8,[x0]
7101cdf2c4  ldr x8,[x8, #0x70]
7101cdf2c8  mov w1,#0x1
7101cdf2cc  blr x8
7101cdf2d0  ldr x0,[x19, #0x258]
7101cdf2d4  fmov s0,0x3f800000
7101cdf2d8  adrp x1,0x71042f8000
7101cdf2dc  add x1,x1,#0x402
7101cdf2e0  bl 0x7103778300
7101cdf2e4  mov w3,#0x1
7101cdf2e8  mov x0,x21
7101cdf2ec  mov w1,wzr
7101cdf2f0  mov w2,w20
7101cdf2f4  bl 0x7101cdfad0
7101cdf2f8  ldp x29,x30,[sp, #0xb0]
7101cdf2fc  ldp x20,x19,[sp, #0xa0]
7101cdf300  ldp x22,x21,[sp, #0x90]
7101cdf304  add sp,sp,#0xc0
7101cdf308  ret
7101cdf30c  bl 0x71039c2650
