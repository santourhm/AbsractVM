
    LOAD #0,R1
    LOAD #2,R2
LOOP : 
    LOAD #1,R0
    ADD  R0,R1
    LOAD R1,R3
    REM  R2,R3
    CMP  #0,R3
    WINT 
    BEQ  even
    BNE  odd
    BRA  LOOP
    HALT
even : 
    WSTR "EVEN"
    WNL
    BRA  LOOP
odd : 
    WSTR "ODD"
    WNL
    BRA LOOP

