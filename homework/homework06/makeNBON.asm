;Aidan Esposito / Juan Ballesteros

    global _main
    extern _printf
    extern _makeNBO

_main:

    push ebx
    ;Put value 1 in function makeNBO, print result, clear stack
    mov eax, 0x12345678 ;value 1
    push eax
    call _makeNBO
    add esp, 4
    push eax
    push format_string
    call _printf
    add esp, 8

    ;Put value 2 in function makeNBO, print result, clear stack
    mov eax, 0xdeadbeef ;value 2
    push eax
    call _makeNBO
    add esp, 4
    push eax
    push format_string
    call _printf
    add esp, 8

    ;Put value 3 in function makeNBO, print result, clear stack
    mov eax, 0xabcdef01 ;value 3
    push eax
    call _makeNBO
    add esp, 4
    push eax
    push format_string
    call _printf
    add esp, 8

    ;Put value 4 in function makeNBO, print result, clear stack
    mov eax, 0x87654321 ;value 4
    push eax
    call _makeNBO
    add esp, 4
    push eax
    push format_string
    call _printf
    add esp, 8

    ;Put value 5 in function makeNBO, print result, clear stack
    mov eax, 0x55555555 ; value 5
    push eax
    call _makeNBO
    add esp, 4
    push eax
    push format_string
    call _printf
    add esp, 8

    ;Exit the program
    mov eax, 1
    xor ebx, ebx
    pop ebx
    ret 

section .data
    format_string db "Result: %O8X", 10, 0 ;String to print makeNBO