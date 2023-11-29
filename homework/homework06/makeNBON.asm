;Aidan Esposito / Juan Ballesteros

    global _main
    extern _printf
    extern _makeNBO

_main:
    ;Testing Numbers
    mov eax, 0x12345678 ;value 1
    mov ebx, 0xdeadbeef ;value 2
    mov ecx, 0xabcdef01 ;value 3
    mov edx, 0x87654321 ;value 4
    mov esi, 0x55555555 ; value 5

    ;Put value 1 in function makeNBO, print result, clear stack
    push eax
    call _makeNBO
    add esp, 4
    push eax
    call print_result
    add esp, 4

    ;Put value 2 in function makeNBO, print result, clear stack
    push ebx
    call _makeNBO
    add esp, 4
    push ebx
    call print_result
    add esp, 4

    ;Put value 3 in function makeNBO, print result, clear stack
    push ecx
    call _makeNBO
    add esp, 4
    push ecx
    call print_result
    add esp, 4

    ;Put value 4 in function makeNBO, print result, clear stack
    push edx
    call _makeNBO
    add esp, 4
    push edx
    call print_result
    add esp, 4

    ;Put value 5 in function makeNBO, print result, clear stack
    push esi
    call _makeNBO
    add esp, 4
    push eax
    call print_result
    add esp, 4

    ;Exit the program
    mov eax, 1
    xor ebx, ebx
    ret 

print_result: ;function for printing strings to show makeNBO converted values
    push eax
    push format_string
    call _printf
    add esp, 8
    ret

section .data
    format_string db "Result: %O8X", 10, 0 ;String to print makeNBO