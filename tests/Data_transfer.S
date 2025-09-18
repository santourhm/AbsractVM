; === Programme de test : instructions de transfert de données ===

        TSTO    #10             ; réserver 10 cases sur la pile (sécurité)
        BOV     stack_overflow
        ADDSP   #10

; --------------------------------------------------
; |                  Main Program                  |
; --------------------------------------------------

; --- Test LOAD immédiat ---
        LOAD    #42, R1         ; R1 = 42
        STORE   R1, 0(SP)       ; stocker R1 à l’adresse SP+0
        

        LOAD    #0, R2          
        LOAD    0(SP), R2       ; R2 = valeur à SP+0 (doit être 42)
        

        PUSH    R1              
        LOAD    #0, R3          
        POP     R3                  
        LEA     4(SP), R4  
        WSTR   "HALTING...\n"
        HALT    
        PEA     8(SP)           
        POP     R5              
        

        HALT

; --------------------------------------------------
; |                  Erreurs                       |
; --------------------------------------------------
stack_overflow:
        WSTR    "Erreur: stack overflow"
        HALT
