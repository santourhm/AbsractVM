#!/bin/bash

PROGRAM="tests/test_bra.S"

echo "Running original VM..."
/usr/bin/time -f "ima-x86_64-Linux: %E real, %U user, %S sys" ./ima-x86_64-Linux "$PROGRAM"

echo "Running your VM..."
/usr/bin/time -f "abstract-vm-16bits: %E real, %U user, %S sys" ./abstract-vm-16bits "$PROGRAM"
