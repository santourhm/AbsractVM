
    LOAD #1,R1
    LOAD #2,R2
    LOAD #3,R3
    PUSH R1
    PUSH R2
    PUSH R3
    SUBSP #1
    POP R1
    WINT
    WNL 
    POP R1
    WINT
    WNL
    HALT

