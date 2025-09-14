#!/bin/bash

PROGRAM_IMA=../ima-x86_64-Linux
PROGRAM_ABSTRACT_VM=../abstract-vm-32bits

TEST_NAME_FILE=$1  

mkdir -p res_asm

echo "Executing test on IMA ..."
$PROGRAM_IMA "$TEST_NAME_FILE" > res_asm/ima.txt

echo "Executing test on Abstract VM ..."
$PROGRAM_ABSTRACT_VM "$TEST_NAME_FILE" > res_asm/vm.txt

echo "Comparing results..."
diff res_asm/ima.txt res_asm/vm.txt > /dev/null
RESULT=$?   

if [ $RESULT -eq 0 ]; then
    echo "Test PASSED: outputs are identical."
elif [ $RESULT -eq 1 ]; then
    echo "Test FAILED: outputs differ."
else
    echo "Error running diff (exit code $RESULT)."
fi


