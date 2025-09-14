
    WSTR "--- Scc Test 1: R1 == R0 (5 vs 5) ---"
    WNL
    LOAD #5, R0
    LOAD #5, R1
    CMP R0, R1      

    SEQ R2          
    WSTR "[SEQ] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SNE R2          
    WSTR "[SNE] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SGT R2          
    WSTR "[SGT] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SLT R2          
    WSTR "[SLT] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SGE R2          
    WSTR "[SGE] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SLE R2          
    WSTR "[SLE] R2 = "
    LOAD R2,R1
    WINT
    WNL

    WSTR "--- Scc Test 2: R1 > R0 (10 vs 5) ---"
    WNL
    LOAD #5, R0
    LOAD #10, R1
    CMP R0, R1      

    SEQ R2          
    WSTR "[SEQ] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SNE R2          
    WSTR "[SNE] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SGT R2          
    WSTR "[SGT] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SLT R2          
    WSTR "[SLT] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SGE R2         
    WSTR "[SGE] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SLE R2          
    WSTR "[SLE] R2 = "
    LOAD R2,R1
    WINT
    WNL

    WSTR "--- Scc Test 3: R1 < R0 (5 vs 10) ---"
    WNL
    LOAD #10, R0
    LOAD #5, R1
    CMP R0, R1      

    SLT R2          
    WSTR "[SLT] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SLE R2          
    WSTR "[SLE] R2 = "
    LOAD R2,R1
    WINT
    WNL
    SGT R2          
    WSTR "[SGT] R2 = "
    LOAD R2,R1
    WINT
    WNL


    WSTR "--- Scc Test 4: Overflow ---"
    WNL
    LOAD #2147483647, R0
    LOAD #1, R1
    ADD R0, R1      
                    
    WSTR "R1 after overflow ADD: "
    WINT
    WNL

    SOV R2          
    WSTR "[SOV] R2 = "
    LOAD R2,R1
    WINT
    WNL

    SLT R2          
    WSTR "[SLT] after overflow, R2 = "
    LOAD R2,R1
    WINT
    WNL


    WSTR "--- Shift Left Test (SHL) ---"
    WNL
    LOAD #21, R3   
    WSTR "Initial R3 = "
    LOAD R3,R1
    WINT
    WNL

    SHL R3          
    WSTR "After SHL, R3 = "
    LOAD R3,R1
    WINT
    WNL


    SGT R4          
    WSTR "[SGT] on SHL result, R4 = "
    LOAD R4,R1
    WINT
    WNL


    WSTR "--- Shift Right Test (SHR) ---"
    WNL
    LOAD #90, R3    
    WSTR "Initial R3 (positive) = "
    LOAD R3,R1
    WINT
    WNL

    SHR R3          
    WSTR "After SHR, R3 = "
    LOAD R3,R1
    WINT
    WNL
    SGT R4          
    WSTR "[SGT] on SHR result, R4 = "
    LOAD R4,R1
    WINT
    WNL

    
    LOAD #-90, R3
    WSTR "Initial R3 (negative) = "
    LOAD R3,R1
    WINT
    WNL

    SHR R3          
    WSTR "After SHR, R3 = "
    LOAD R3,R1
    WINT
    WNL
    SLT R4          
    WSTR "[SLT] on SHR result, R4 = "
    LOAD R4,R1
    WINT
    WNL

    HALT
