
    WSTR "--- Testing BEQ ---"
    WNL
    LOAD #7, R0
    LOAD #7, R1
    CMP R0, R1      
    BEQ BEQ_SUCCESS
    WSTR "  1A: Branch NOT taken (FAIL)"
    WNL
    BRA BEQ_CONTINUE
BEQ_SUCCESS:
    WSTR "  1A: Branch taken (SUCCESS)"
    WNL
BEQ_CONTINUE:

    LOAD #8, R1
    CMP R0, R1      
    BEQ BEQ_FAIL
    WSTR "  1B: Branch NOT taken (SUCCESS)"
    WNL
    BRA BNE_START
BEQ_FAIL:
    WSTR "  1B: Branch taken (FAIL)"
    WNL


BNE_START:
    WSTR "--- Testing BNE ---"
    WNL
    LOAD #7, R0
    LOAD #8, R1
    CMP R0, R1      
    BNE BNE_SUCCESS
    WSTR "  2A: Branch NOT taken (FAIL)"
    WNL
    BRA BNE_CONTINUE
BNE_SUCCESS:
    WSTR "  2A: Branch taken (SUCCESS)"
    WNL
BNE_CONTINUE:

    LOAD #7, R1
    CMP R0, R1      
    BNE BNE_FAIL
    WSTR "  2B: Branch NOT taken (SUCCESS)"
    WNL
    BRA BGT_START
BNE_FAIL:
    WSTR "  2B: Branch taken (FAIL)"
    WNL


BGT_START:
    WSTR "--- Testing BGT ---"
    WNL
    LOAD #7, R0
    LOAD #10, R1
    CMP R0, R1      
    BGT BGT_SUCCESS
    WSTR "  3A: Branch NOT taken (FAIL)"
    WNL
    BRA BGT_CONTINUE
BGT_SUCCESS:
    WSTR "  3A: Branch taken (SUCCESS)"
    WNL
BGT_CONTINUE:

    LOAD #10, R0
    CMP R0, R1      
    BGT BGT_FAIL
    WSTR "  3B: Branch NOT taken (SUCCESS)"
    WNL
    BRA BLT_START
BGT_FAIL:
    WSTR "  3B: Branch taken (FAIL)"
    WNL


BLT_START:
    WSTR "--- Testing BLT ---"
    WNL
    LOAD #10, R0
    LOAD #7, R1
    CMP R0, R1      
    BLT BLT_SUCCESS
    WSTR "  4A: Branch NOT taken (FAIL)"
    WNL
    BRA BLT_CONTINUE
BLT_SUCCESS:
    WSTR "  4A: Branch taken (SUCCESS)"
    WNL
BLT_CONTINUE:

    LOAD #7, R0
    CMP R0, R1      
    BLT BLT_FAIL
    WSTR "  4B: Branch NOT taken (SUCCESS)"
    WNL
    BRA BGE_START
BLT_FAIL:
    WSTR "  4B: Branch taken (FAIL)"
    WNL



BGE_START:
    WSTR "--- Testing BGE ---"
    WNL

    LOAD #7, R0
    LOAD #10, R1
    CMP R0, R1      
    BGE BGE_SUCCESS_1
    WSTR "  5A: Branch NOT taken (FAIL)"
    WNL
    BRA BGE_CONTINUE_1
BGE_SUCCESS_1:
    WSTR "  5A: Branch taken (SUCCESS)"
    WNL
BGE_CONTINUE_1:

    LOAD #10, R0
    CMP R0, R1      
    BGE BGE_SUCCESS_2
    WSTR "  5B: Branch NOT taken (FAIL)"
    WNL
    BRA BGE_CONTINUE_2
BGE_SUCCESS_2:
    WSTR "  5B: Branch taken (SUCCESS)"
    WNL
BGE_CONTINUE_2:

    LOAD #10, R0
    LOAD #7, R1
    CMP R0, R1      
    BGE BGE_FAIL
    WSTR "  5C: Branch NOT taken (SUCCESS)"
    WNL
    BRA BLE_START
BGE_FAIL:
    WSTR "  5C: Branch taken (FAIL)"
    WNL



BLE_START:
    WSTR "--- Testing BLE ---"
    WNL

    LOAD #10, R0
    LOAD #7, R1
    CMP R0, R1      
    BLE BLE_SUCCESS_1
    WSTR "  6A: Branch NOT taken (FAIL)"
    WNL
    BRA BLE_CONTINUE_1
BLE_SUCCESS_1:
    WSTR "  6A: Branch taken (SUCCESS)"
    WNL
BLE_CONTINUE_1:

    LOAD #7, R0
    CMP R0, R1      
    BLE BLE_SUCCESS_2
    WSTR "  6B: Branch NOT taken (FAIL)"
    WNL
    BRA BLE_CONTINUE_2
BLE_SUCCESS_2:
    WSTR "  6B: Branch taken (SUCCESS)"
    WNL
BLE_CONTINUE_2:

    LOAD #7, R0
    LOAD #10, R1
    CMP R0, R1      
    BLE BLE_FAIL
    WSTR "  6C: Branch NOT taken (SUCCESS)"
    WNL
    BRA BOV_START
BLE_FAIL:
    WSTR "  6C: Branch taken (FAIL)"
    WNL



BOV_START:
    WSTR "--- Testing BOV ---"
    WNL

    LOAD #2147483647, R0
    LOAD #1, R1
    ADD R0, R1          
    BOV BOV_SUCCESS
    WSTR "  7A: Branch NOT taken (FAIL)"
    WNL
    BRA BOV_CONTINUE
BOV_SUCCESS:
    WSTR "  7A: Branch taken (SUCCESS)"
    WNL
BOV_CONTINUE:

    LOAD #10, R0
    LOAD #20, R1
    ADD R0, R1          
    BOV BOV_FAIL
    WSTR "  7B: Branch NOT taken (SUCCESS)"
    WNL
    BRA BRA_START
BOV_FAIL:
    WSTR "  7B: Branch taken (FAIL)"
    WNL



BRA_START:
    WSTR "--- Testing BRA ---"
    WNL

    BRA BRA_SUCCESS
    WSTR "  8A: Code after BRA executed (FAIL)"
    WNL
    BRA END_TEST
BRA_SUCCESS:
    WSTR "  8A: Branch taken (SUCCESS)"
    WNL


END_TEST:
    HALT
