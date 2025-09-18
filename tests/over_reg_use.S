; start main program
        TSTO #10        ; 7 (temporaires) 3 (variables)
        BOV stack_overflow_error
        ADDSP #3
; Main program
; Variables declarations:
; Variable declaration: x
; allocate R2
        LOAD #1000, R2
        STORE R2, 1(GB)
; release R2
; Variable declaration: y
; allocate R2
        LOAD #2, R2
        STORE R2, 2(GB)
; release R2
; Variable declaration: z
; allocate R2
; allocate R3
        LOAD 1(GB), R2
; allocate R4
        LOAD 1(GB), R3
; allocate R5
        LOAD 1(GB), R4
; allocate R6
        LOAD 1(GB), R5
; allocate R7
        LOAD 1(GB), R6
; allocate R8
        LOAD 1(GB), R7
; allocate R9
        LOAD 1(GB), R8
; allocate R10
        LOAD 1(GB), R9
; allocate R11
        LOAD 1(GB), R10
; allocate R12
        LOAD 1(GB), R11
; allocate R13
        LOAD 1(GB), R12
; allocate R14
        LOAD 1(GB), R13
; allocate R15
        LOAD 1(GB), R14
        LOAD 1(GB), R15
        PUSH R15
        LOAD 1(GB), R15
        PUSH R15
        LOAD 1(GB), R15
        PUSH R15
        LOAD 1(GB), R15
        PUSH R15
        LOAD 1(GB), R15
        PUSH R15
        LOAD 1(GB), R15
        PUSH R15
        LOAD 1(GB), R15
        PUSH R15
        LOAD 2(GB), R15
        LOAD R15, R0
        POP R15
        ADD R0, R15
        LOAD R15, R0
        POP R15
        QUO R0, R15
        PUSH R15
        LOAD 2(GB), R15
        LOAD R15, R0
        POP R15
        ADD R0, R15
        LOAD R15, R0
        POP R15
        QUO R0, R15
        PUSH R15
        LOAD 2(GB), R15
        LOAD R15, R0
        POP R15
        ADD R0, R15
        LOAD R15, R0
        POP R15
        QUO R0, R15
        PUSH R15
        LOAD 2(GB), R15
        LOAD R15, R0
        POP R15
        ADD R0, R15
        LOAD R15, R0
        POP R15
        QUO R0, R15
        PUSH R15
        LOAD 2(GB), R15
        LOAD R15, R0
        POP R15
        ADD R0, R15
        LOAD R15, R0
        POP R15
        QUO R0, R15
        PUSH R15
        LOAD 2(GB), R15
        LOAD R15, R0
        POP R15
        ADD R0, R15
        LOAD R15, R0
        POP R15
        QUO R0, R15
        PUSH R15
        LOAD 2(GB), R15
        LOAD R15, R0
        POP R15
        ADD R0, R15
        QUO R15, R14
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R15
; allocate R15
        LOAD 2(GB), R15
        ADD R15, R14
; No need for overflow check for type int
; release R15
        QUO R14, R13
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R14
; allocate R14
        LOAD 2(GB), R14
        ADD R14, R13
; No need for overflow check for type int
; release R14
        QUO R13, R12
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R13
; allocate R13
        LOAD 2(GB), R13
        ADD R13, R12
; No need for overflow check for type int
; release R13
; allocate R13
        LOAD 2(GB), R13
        ADD R13, R12
; No need for overflow check for type int
; release R13
        QUO R12, R11
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R12
; allocate R12
        LOAD 2(GB), R12
        ADD R12, R11
; No need for overflow check for type int
; release R12
        QUO R11, R10
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R11
; allocate R11
        LOAD 2(GB), R11
        ADD R11, R10
; No need for overflow check for type int
; release R11
        QUO R10, R9
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R10
; allocate R10
        LOAD 2(GB), R10
        ADD R10, R9
; No need for overflow check for type int
; release R10
        QUO R9, R8
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R9
; allocate R9
        LOAD 2(GB), R9
        ADD R9, R8
; No need for overflow check for type int
; release R9
        QUO R8, R7
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R8
; allocate R8
        LOAD 2(GB), R8
        ADD R8, R7
; No need for overflow check for type int
; release R8
        QUO R7, R6
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R7
; allocate R7
        LOAD 2(GB), R7
        ADD R7, R6
; No need for overflow check for type int
; release R7
        QUO R6, R5
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R6
; allocate R6
        LOAD 2(GB), R6
        ADD R6, R5
; No need for overflow check for type int
; release R6
        QUO R5, R4
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R5
; allocate R5
        LOAD 2(GB), R5
        ADD R5, R4
; No need for overflow check for type int
; release R5
        QUO R4, R3
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R4
; allocate R4
        LOAD 2(GB), R4
        ADD R4, R3
; No need for overflow check for type int
; release R4
; allocate R4
        LOAD 2(GB), R4
        ADD R4, R3
; No need for overflow check for type int
; release R4
        QUO R3, R2
        BOV div_by_zero_error   ; Overflow check for previous operation
; release R3
        STORE R2, 3(GB)
; release R2
; Beginning of main instructions:
; Load in R1 to be able to display
        LOAD 3(GB), R1
        WINT
        WNL
        HALT
; end main program
stack_overflow_error:
        WSTR "Error: Stack Overflow"
        WNL
        ERROR
div_by_zero_error:
        WSTR "Error: Division by zero"
        WNL
        ERROR
