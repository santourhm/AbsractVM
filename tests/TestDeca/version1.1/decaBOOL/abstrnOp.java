 /* @Override
    public void codeGenVal(DecacCompiler compiler, GPRegister register) {
        GPRegister tempReg = compiler.getMangerR().allocateRegister();
        try {
            //System.err.println("I'm AbstractyOpineq and : " + getLeftOperand());
            //System.err.println("I'm AbstractyOpineq and : " + getRightOperand());
            getLeftOperand().codeGenVal(compiler, register);
            getRightOperand().codeGenVal(compiler, tempReg);}}
          
     */

   /*  @Override
    public void codeGenCondition(DecacCompiler compiler, Label falseLabel, boolean jump) {
        GPRegister tempReg = compiler.getMangerR().allocateRegister();
        GPRegister Reg = compiler.getMangerR().allocateRegister();
       try {
        getLeftOperand().codeGenVal(compiler, tempReg);
       
        getRightOperand().codeGenVal(compiler,Reg);

            compiler.addInstruction(new CMP(tempReg, Reg));
            generateSpecificComparison(compiler,tempReg);
       
             if (jump) {
            // Branch if not equal to 0 (condition is true)
             compiler.addInstruction(new BNE(falseLabel));
        } else {
            // Branch if equal to 0 (condition is false)
             compiler.addInstruction(new BEQ(falseLabel));
        }
        } finally {
            compiler.getMangerR().freeRegister(tempReg);
            compiler.getMangerR().freeRegister(Reg);
            }}
        
      */
