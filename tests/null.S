    LOAD #null, R0
    LOAD #null, R2
    CMP  #null, R0
    BEQ  EG
    HALT

EG :
    WSTR "equal "
    WNL
    HALT
