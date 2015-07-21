
######testshell.s#######
#assembly code for exit() system call, AT&T/Linux

     
.section .data

.section .text

.globl _start
      jmp dummy

 _start:
	popl %ebx            #gets the "X" address
	xor %eax, %eax       #clear the eax register
	mov %eax, 0x01(%ebx) #move NULL to the end of the "X"
	mov , %eax         #move 1 into %eax
	mov /bin/bash, %ebx         #move 0 into %ebx
	int /bin/bashx80            #interupt 0x80
dummy:
	call _start
	.string "X"
