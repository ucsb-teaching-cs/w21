main:
    ori     $v0, $0, 4          
    la      $a0, dispArray 
    syscall

    ori     $s1, $0, 12
    la      $s0, myArray

    add     $a1, $0, $s1
    add     $a0, $0, $s0
 
    jal     DispArray

    ori     $s2, $0, 0
    ori     $s3, $0, 0
    ori     $s4, $0, 0
    ori     $s5, $0, 0
    ori     $s6, $0, 0
    ori     $s7, $0, 0
    
    add     $a1, $0, $s1
    add     $a0, $0, $s0

    jal     IterativeMax

    j       Exit

IterativeMax:

    li $s0, -2147483648
    move $s1, $a0
    move $s2, $a1
IterativeMaxLoop:
    beq $s2, $zero, IterativeMaxEnd
    lw $t0, 0($s1)
    bge $s0, $t0, IterativeMaxContinue
    move $s0, $t0
