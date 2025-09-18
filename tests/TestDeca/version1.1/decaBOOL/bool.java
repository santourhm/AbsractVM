    /**
 * Generates code for boolean expressions following the rules:
 * - For AND (&&): Short-circuit evaluation from left to right
 * - For OR (||): Transformed to !(!C1 && !C2)
 * - For NOT (!): Handled by inverting the branch condition
 */
/* public void codeGenBool(DecacCompiler compiler, boolean branchOnTrue, Label destLabel) {
    switch (getOperator()) {
        case AND:
            if (branchOnTrue) {
                // Code(C1 && C2, true, E) ≡
                // Code(C1, false, E_Fin.n)
                // Code(C2, true, E)
                // E_Fin.n:
                Label endLabel = new Label("E_Fin_" + compiler.getLabelManager().newLabel());
                getLeftOperand().codeGenBool(compiler, false, endLabel);
                getRightOperand().codeGenBool(compiler, true, destLabel);
                compiler.addLabel(endLabel);
            } else {
                // Code(C1 && C2, false, E) ≡
                // Code(C1, false, E)
                // Code(C2, false, E)
                getLeftOperand().codeGenBool(compiler, false, destLabel);
                getRightOperand().codeGenBool(compiler, false, destLabel);
            }
            break;

        case OR:
            if (branchOnTrue) {
                // Code(C1 || C2, true, E) ≡
                // Code(C1, true, E)
                // Code(C2, true, E)
                getLeftOperand().codeGenBool(compiler, true, destLabel);
                getRightOperand().codeGenBool(compiler, true, destLabel);
            } else {
                // Code(C1 || C2, false, E) ≡
                // Code(!(!C1 && !C2), false, E)
                Label endLabel = new Label("E_Fin_" + compiler.getLabelManager().newLabel());
                getLeftOperand().codeGenBool(compiler, true, endLabel);
                getRightOperand().codeGenBool(compiler, false, destLabel);
                compiler.addLabel(endLabel);
            }
            break;

        case NOT:
            // Code(!C, b, E) ≡ Code(C, !b, E)
            getOperand().codeGenBool(compiler, !branchOnTrue, destLabel);
            break;

        case EQUALS:
        case NOT_EQUALS:
        case GREATER:
        case GREATER_EQ:
        case LESS:
        case LESS_EQ:
            // For comparisons:
            // 1. Evaluate left operand into register
            GPRegister leftReg = compiler.getRegisterManager().allocateRegister();
            getLeftOperand().codeGenVal(compiler, leftReg);
            
            // 2. Evaluate right operand into another register
            GPRegister rightReg = compiler.getRegisterManager().allocateRegister();
            getRightOperand().codeGenVal(compiler, rightReg);
            
            // 3. Compare and branch
            compiler.addInstruction(new CMP(rightReg, leftReg));
            
            // Add appropriate branch instruction based on operator and branchOnTrue
            addBranchInstruction(compiler, branchOnTrue, destLabel);
            
            // Free registers
            compiler.getRegisterManager().freeRegister(leftReg);
            compiler.getRegisterManager().freeRegister(rightReg);
            break;
    }
}

private void addBranchInstruction(DecacCompiler compiler, boolean branchOnTrue, Label destLabel) {
    switch (getOperator()) {
        case EQUALS:
            compiler.addInstruction(branchOnTrue ? new BEQ(destLabel) : new BNE(destLabel));
            break;
        case NOT_EQUALS:
            compiler.addInstruction(branchOnTrue ? new BNE(destLabel) : new BEQ(destLabel));
            break;
        case GREATER:
            compiler.addInstruction(branchOnTrue ? new BGT(destLabel) : new BLE(destLabel));
            break;
        case GREATER_EQ:
            compiler.addInstruction(branchOnTrue ? new BGE(destLabel) : new BLT(destLabel));
            break;
        case LESS:
            compiler.addInstruction(branchOnTrue ? new BLT(destLabel) : new BGE(destLabel));
            break;
        case LESS_EQ:
            compiler.addInstruction(branchOnTrue ? new BLE(destLabel) : new BGT(destLabel));
            break;
    }
}
 */
