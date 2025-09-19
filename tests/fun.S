

    LOAD #1,R0
    WADDR R0
    BSR  print
    WSTR "done !\n"
    HALT


print :
    LOAD -2(LB),R1
    WADDR R1
    WSTR "a + 5 = "
    WINT