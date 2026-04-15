       MOV     R0, #0 ; Teller die we ophogen
       MOV     R1, #5 ; Aantal herhalingen

LOOP   
       ADD     R0, R0, #1 ; Verhoog R0 met 1
       SUBS    R1, R1, #1 ; Verlaag R1 met 1, pas vlaggen aan
       BNE     LOOP ; Herhaal zolang R1 niet nul is