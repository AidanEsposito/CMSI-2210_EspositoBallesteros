; Aidan Esposito / Juan Ballesteros

; To Assemble: nasm -fwin32 findGCDfunc.asm 
; To Compile: gcc -m32 gcdFinder.c findGCDfunc.obj -o gcdFinder.exe
; To Run: gcdFinder.exe

    global findGCD
    section .text

_main: 

    ;add values to registers
    mov eax, ecx
    mov ebx, edx

    ; eax >= ebx, swap if needed
    cmp eax, ebx
    jge gcd_loop

    mov ecx, eax
    mov eax, ebx
    mov ebx, ecx

gcd_loop:

    ;checks if(ebx == 0 ) and if yes, GCD is found
    cmp ebx, 0
    je gcd_done

    ;Euclidean algorithm for gcd
    mov edx, eax
    mov eax, ebx
    xor ebx, ebx
    div edx
    mov ebx, eax

    ;loop for gcd
    jmp gcd_loop

gcd_done:

   ;Exit program
   ret
