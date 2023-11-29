; Aidan Esposito / Juan Ballesteros

section .text
    global _main
    extern _printf, _scanf, _exit


_main: 

    ;calls scanf on entered values by user
    push format 
    push edx
    push ecx
    call _scanf
    add esp, 12

    ;add values to registers
    mov eax, [ecx]
    mov ebx, [edx]

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

    ;print gcd using C printf
    push format
    push eax
    call _printf
    add esp, 8

    ;Exit program
    xor eax, eax
    call _exit

section .data
     format db "Numbers: %d %d, GCD: %d", 10, 0; print string for GCD