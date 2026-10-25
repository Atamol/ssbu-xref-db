// addr:      7101addf20
// offset:    0x1addf20
// name:      FUN_7101addf20
// mangled:   
// size:      572

7101addf20  sub sp,sp,#0x50
7101addf24  str x21,[sp, #0x20]
7101addf28  stp x20,x19,[sp, #0x30]
7101addf2c  stp x29,x30,[sp, #0x40]
7101addf30  add x29,sp,#0x40
7101addf34  mov x19,x1
7101addf38  mov w20,w0
7101addf3c  cbz w0,0x7101addf84
7101addf40  adrp x1,0x7104329000
7101addf44  add x1,x1,#0xb5b
7101addf48  add x8,sp,#0x8
7101addf4c  mov x0,x19
7101addf50  bl 0x7103776910
7101addf54  ldr x21,[sp, #0x10]
7101addf58  mov w1,#0x1
7101addf5c  mov x0,x21
7101addf60  bl 0x71037790a0
7101addf64  adrp x8,0x710523d000
7101addf68  add x8,x8,#0x9a8
7101addf6c  stp x8,xzr,[sp, #0x8]
7101addf70  cbz x21,0x7101addf7c
7101addf74  mov x0,x21
7101addf78  bl 0x710392eb40
7101addf7c  cmp w20,#0x1
7101addf80  b.eq 0x7101addfc4
7101addf84  adrp x1,0x710424e000
7101addf88  add x1,x1,#0xffa
7101addf8c  add x8,sp,#0x8
7101addf90  mov x0,x19
7101addf94  bl 0x7103776910
7101addf98  ldr x0,[sp, #0x10]
7101addf9c  mov w1,#0x1
7101addfa0  bl 0x71037790a0
7101addfa4  ldr x0,[sp, #0x10]
7101addfa8  adrp x8,0x710523d000
7101addfac  add x8,x8,#0x9a8
7101addfb0  stp x8,xzr,[sp, #0x8]
7101addfb4  cbz x0,0x7101addfbc
7101addfb8  bl 0x710392eb40
7101addfbc  cmp w20,#0x2
7101addfc0  b.eq 0x7101ade004
7101addfc4  adrp x1,0x71042f7000
7101addfc8  add x1,x1,#0xdfd
7101addfcc  add x8,sp,#0x8
7101addfd0  mov x0,x19
7101addfd4  bl 0x7103776910
7101addfd8  ldr x0,[sp, #0x10]
7101addfdc  mov w1,#0x1
7101addfe0  bl 0x71037790a0
7101addfe4  ldr x0,[sp, #0x10]
7101addfe8  adrp x8,0x710523d000
7101addfec  add x8,x8,#0x9a8
7101addff0  stp x8,xzr,[sp, #0x8]
7101addff4  cbz x0,0x7101addffc
7101addff8  bl 0x710392eb40
7101addffc  cmp w20,#0x3
7101ade000  b.eq 0x7101ade044
7101ade004  adrp x1,0x7104454000
7101ade008  add x1,x1,#0x5a5
7101ade00c  add x8,sp,#0x8
7101ade010  mov x0,x19
7101ade014  bl 0x7103776910
7101ade018  ldr x0,[sp, #0x10]
7101ade01c  mov w1,#0x1
7101ade020  bl 0x71037790a0
7101ade024  ldr x0,[sp, #0x10]
7101ade028  adrp x8,0x710523d000
7101ade02c  add x8,x8,#0x9a8
7101ade030  stp x8,xzr,[sp, #0x8]
7101ade034  cbz x0,0x7101ade03c
7101ade038  bl 0x710392eb40
7101ade03c  cmp w20,#0x4
7101ade040  b.eq 0x7101ade0d0
7101ade044  adrp x21,0x710523d000
7101ade048  add x21,x21,#0x9a8
7101ade04c  mov w0,#0x10
7101ade050  mov w1,#0x20
7101ade054  str x21,[sp, #0x8]
7101ade058  bl 0x710392e290
7101ade05c  cbnz x0,0x7101ade0a4
7101ade060  adrp x8,0x7105332000
7101ade064  ldr x0,[x8, #0xf00]
7101ade068  cbz x0,0x7101ade0a0
7101ade06c  mov w8,#0x20
7101ade070  stur wzr,[x29, #-0x14]
7101ade074  sub x1,x29,#0x14
7101ade078  str x8,[sp, #0x18]
7101ade07c  ldr x8,[x0]
7101ade080  ldr x8,[x8, #0x30]
7101ade084  add x2,sp,#0x18
7101ade088  blr x8
7101ade08c  tbz w0,#0x0,0x7101ade0a0
7101ade090  mov w0,#0x10
7101ade094  mov w1,#0x20
7101ade098  bl 0x710392e290
7101ade09c  cbnz x0,0x7101ade0a4
7101ade0a0  mov x0,xzr
7101ade0a4  mov w1,#0x1
7101ade0a8  stp xzr,xzr,[x0, #0x10]
7101ade0ac  stp xzr,xzr,[x0]
7101ade0b0  str x0,[sp, #0x10]
7101ade0b4  bl 0x71037790a0
7101ade0b8  ldr x0,[sp, #0x10]
7101ade0bc  stp x21,xzr,[sp, #0x8]
7101ade0c0  cbz x0,0x7101ade0c8
7101ade0c4  bl 0x710392eb40
7101ade0c8  cmp w20,#0x5
7101ade0cc  b.eq 0x7101ade110
7101ade0d0  adrp x1,0x7104318000
7101ade0d4  add x1,x1,#0xa18
7101ade0d8  add x8,sp,#0x8
7101ade0dc  mov x0,x19
7101ade0e0  bl 0x7103776910
7101ade0e4  ldr x0,[sp, #0x10]
7101ade0e8  mov w1,#0x1
7101ade0ec  bl 0x71037790a0
7101ade0f0  ldr x0,[sp, #0x10]
7101ade0f4  adrp x8,0x710523d000
7101ade0f8  add x8,x8,#0x9a8
7101ade0fc  stp x8,xzr,[sp, #0x8]
7101ade100  cbz x0,0x7101ade108
7101ade104  bl 0x710392eb40
7101ade108  cmp w20,#0x6
7101ade10c  b.eq 0x7101ade148
7101ade110  adrp x1,0x7104443000
7101ade114  add x1,x1,#0x127
7101ade118  add x8,sp,#0x8
7101ade11c  mov x0,x19
7101ade120  bl 0x7103776910
7101ade124  ldr x0,[sp, #0x10]
7101ade128  mov w1,#0x1
7101ade12c  bl 0x71037790a0
7101ade130  ldr x0,[sp, #0x10]
7101ade134  adrp x8,0x710523d000
7101ade138  add x8,x8,#0x9a8
7101ade13c  stp x8,xzr,[sp, #0x8]
7101ade140  cbz x0,0x7101ade148
7101ade144  bl 0x710392eb40
7101ade148  ldp x29,x30,[sp, #0x40]
7101ade14c  ldr x21,[sp, #0x20]
7101ade150  ldp x20,x19,[sp, #0x30]
7101ade154  add sp,sp,#0x50
7101ade158  ret
