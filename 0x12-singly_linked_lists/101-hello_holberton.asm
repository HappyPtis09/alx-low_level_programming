    extern printf

    global main
    main:
        sub rsp, 8
        mov rdi, format
        xor eax, eax
        call printf
        add rsp, 8

        mov eax, 60
        xor edi, edi
        syscall
    format db "Hello, Holberton\n", 0
