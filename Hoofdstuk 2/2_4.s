       MOV     R0, #10
       MOV     R1, #3
       CMP     R0, R1 ; Vergelijk R0 en R1
       BEQ     GELIJK ; Spring naar GELIJK als R0 == R1
       B       EINDE ; Anders spring naar EINDE

GELIJK 
       MOV     R2, #1 ; Waarden zijn gelijk

EINDE  