// addr:      71001fbe80
// offset:    0x1fbe80
// name:      FUN_71001fbe80
// mangled:   
// size:      748

71001fbe80  str x25,[sp, #-0x50]!
71001fbe84  stp x24,x23,[sp, #0x10]
71001fbe88  stp x22,x21,[sp, #0x20]
71001fbe8c  stp x20,x19,[sp, #0x30]
71001fbe90  stp x29,x30,[sp, #0x40]
71001fbe94  add x29,sp,#0x40
71001fbe98  mov x19,x8
71001fbe9c  adrp x8,0x71052a4000
71001fbea0  ldr x8,[x8, #0xda8]
71001fbea4  adrp x25,0x71052a4000
71001fbea8  ldrb w8,[x8]
71001fbeac  ldr x25,[x25, #0xdb0]
71001fbeb0  mov x24,x3
71001fbeb4  mov x23,x2
71001fbeb8  mov w22,w1
71001fbebc  mov x21,x0
71001fbec0  add x20,x25,#0x28
71001fbec4  cbz w8,0x71001fbf00
71001fbec8  adrp x8,0x71052a4000
71001fbecc  ldr x8,[x8, #0xdb8]
71001fbed0  ldr x0,[x8]
71001fbed4  bl 0x7101717960
71001fbed8  ldr w8,[x0]
71001fbedc  cbz w8,0x71001fbf00
71001fbee0  ldr x10,[x25, #0xa0]
71001fbee4  ldp x9,x10,[x10]
71001fbee8  sub x10,x10,x9
71001fbeec  asr x10,x10,#0x3
71001fbef0  cmp x10,x8
71001fbef4  b.ls 0x71001fbf18
71001fbef8  ldr x8,[x9, x8, LSL #0x3]
71001fbefc  add x20,x8,#0x20
71001fbf00  ldr x8,[x20]
71001fbf04  cbz x8,0x71001fbf30
71001fbf08  ldr x8,[x8, #0x10]
71001fbf0c  cbz x8,0x71001fbf30
71001fbf10  ldr x20,[x8, #0x10]
71001fbf14  b 0x71001fbf34
71001fbf18  adrp x0,0x71042c4000
71001fbf1c  add x0,x0,#0x35f
71001fbf20  mov w1,#0x47
71001fbf24  orr w2,wzr,#0xe0000003
71001fbf28  mov w3,wzr
71001fbf2c  bl 0x71001b1300
71001fbf30  mov x20,xzr
71001fbf34  ldr x8,[x20, #0x78]!
71001fbf38  ldr x8,[x8, #0x10]
71001fbf3c  mov x0,x20
71001fbf40  blr x8
71001fbf44  ldrb w8,[x23, #0x68]
71001fbf48  cbz w8,0x71001fbfb4
71001fbf4c  ldr w8,[x23, #0x10]
71001fbf50  cmp w8,#0x3
71001fbf54  b.ne 0x71001fbfdc
71001fbf58  ldrb w8,[x23, #0x68]
71001fbf5c  cbz w8,0x71001fbfcc
71001fbf60  ldrb w8,[x23, #0x6a]
71001fbf64  cbz w8,0x71001fbfdc
71001fbf68  cbz x24,0x71001fc01c
71001fbf6c  ldrb w8,[x24, #0x30]
71001fbf70  tbnz w8,#0x2,0x71001fc028
71001fbf74  mov w0,#0x238
71001fbf78  bl 0x71001af850
71001fbf7c  mov x25,x0
71001fbf80  cbz x0,0x71001fc064
71001fbf84  orr w2,wzr,#0x7
71001fbf88  mov x0,x25
71001fbf8c  mov x1,xzr
71001fbf90  mov w3,wzr
71001fbf94  mov x4,x24
71001fbf98  mov w5,wzr
71001fbf9c  bl 0x7100216320
71001fbfa0  ldrb w8,[x23, #0x68]
71001fbfa4  cbnz w8,0x71001fc06c
71001fbfa8  mov x0,x23
71001fbfac  bl 0x71001f2180
71001fbfb0  b 0x71001fc06c
71001fbfb4  mov x0,x23
71001fbfb8  bl 0x71001f2180
71001fbfbc  ldr w8,[x23, #0x10]
71001fbfc0  cmp w8,#0x3
71001fbfc4  b.eq 0x71001fbf58
71001fbfc8  b 0x71001fbfdc
71001fbfcc  mov x0,x23
71001fbfd0  bl 0x71001f2180
71001fbfd4  ldrb w8,[x23, #0x6a]
71001fbfd8  cbnz w8,0x71001fbf68
71001fbfdc  mov w8,#0x3
71001fbfe0  movk w8,#0x8005, LSL #16
71001fbfe4  add x1,sp,#0xc
71001fbfe8  mov x0,x19
71001fbfec  str w8,[sp, #0xc]
71001fbff0  bl 0x71001b4200
71001fbff4  ldr x8,[x20]
71001fbff8  ldr x8,[x8, #0x20]
71001fbffc  mov x0,x20
71001fc000  blr x8
71001fc004  ldp x29,x30,[sp, #0x40]
71001fc008  ldp x20,x19,[sp, #0x30]
71001fc00c  ldp x22,x21,[sp, #0x20]
71001fc010  ldp x24,x23,[sp, #0x10]
71001fc014  ldr x25,[sp], #0x50
71001fc018  ret
71001fc01c  mov w8,#0xa
71001fc020  movk w8,#0x8001, LSL #16
71001fc024  b 0x71001fbfe4
71001fc028  mov w0,#0x238
71001fc02c  mov w1,wzr
71001fc030  bl 0x71001b4580
71001fc034  cbz x0,0x71001fc15c
71001fc038  orr w2,wzr,#0x7
71001fc03c  mov x1,xzr
71001fc040  mov w3,wzr
71001fc044  mov x4,x24
71001fc048  mov w5,wzr
71001fc04c  mov x25,x0
71001fc050  bl 0x71001e2270
71001fc054  ldrb w8,[x25, #0x60]
71001fc058  tbz w8,#0x6,0x71001fc064
71001fc05c  ldr x8,[x25, #0x1f0]
71001fc060  cbz x8,0x71001fc14c
71001fc064  ldrb w8,[x23, #0x68]
71001fc068  cbz w8,0x71001fbfa8
71001fc06c  ldr x1,[x23, #0x8]
71001fc070  add x0,x25,#0x140
71001fc074  bl 0x71001bec20
71001fc078  strb wzr,[x25, #0x40]
71001fc07c  ldrh w8,[x21, #0x128]
71001fc080  strh w8,[x25, #0xac]
71001fc084  str w22,[x25, #0x1e8]
71001fc088  ldr x0,[x21, #0x328]
71001fc08c  ldr x8,[x0]
71001fc090  ldr x8,[x8, #0x18]
71001fc094  mov w2,#0x1
71001fc098  mov x1,x25
71001fc09c  blr x8
71001fc0a0  add x8,x25,#0x8
71001fc0a4  ldar w11,[x8]
71001fc0a8  ldaxr w10,[x8]
71001fc0ac  sub w9,w11,#0x1
71001fc0b0  cmp w10,w11
71001fc0b4  b.ne 0x71001fc0cc
71001fc0b8  stlxr w11,w9,[x8]
71001fc0bc  cbnz w11,0x71001fc0d0
71001fc0c0  mov w11,#0x1
71001fc0c4  tbz w11,#0x0,0x71001fc0d8
71001fc0c8  b 0x71001fc120
71001fc0cc  clrex 
71001fc0d0  mov w11,wzr
71001fc0d4  tbnz w11,#0x0,0x71001fc120
71001fc0d8  ldaxr w11,[x8]
71001fc0dc  sub w9,w10,#0x1
71001fc0e0  cmp w11,w10
71001fc0e4  b.ne 0x71001fc100
71001fc0e8  stlxr w10,w9,[x8]
71001fc0ec  cbz w10,0x71001fc114
71001fc0f0  mov w12,wzr
71001fc0f4  mov w10,w11
71001fc0f8  cbz w12,0x71001fc0d8
71001fc0fc  b 0x71001fc120
71001fc100  clrex 
71001fc104  mov w12,wzr
71001fc108  mov w10,w11
71001fc10c  cbz w12,0x71001fc0d8
71001fc110  b 0x71001fc120
71001fc114  mov w12,#0x1
71001fc118  mov w10,w11
71001fc11c  cbz w12,0x71001fc0d8
71001fc120  cbnz w9,0x71001fc144
71001fc124  ldrb w8,[x25, #0xc]
71001fc128  cbnz w8,0x71001fc144
71001fc12c  mov w8,#0x1
71001fc130  strb w8,[x25, #0xc]
71001fc134  ldr x8,[x25]
71001fc138  ldr x8,[x8, #0x8]
71001fc13c  mov x0,x25
71001fc140  blr x8
71001fc144  orr w8,wzr,#0x10001
71001fc148  b 0x71001fbfe4
71001fc14c  ldr x8,[x25]
71001fc150  ldr x8,[x8, #0x8]
71001fc154  mov x0,x25
71001fc158  blr x8
71001fc15c  mov w8,#0x3
71001fc160  movk w8,#0x8005, LSL #16
71001fc164  add w8,w8,#0x1c
71001fc168  b 0x71001fbfe4
