/* A manual test for the initial sketch of code generation included in 
 * students skeleton.
 * 
 * It is not intended to still work when code generation has been updated.
 */
package fr.ensimag.deca.tree;

import fr.ensimag.deca.DecacCompiler;
import fr.ensimag.deca.tools.SymbolTable;
import fr.ensimag.deca.tools.SymbolTable.Symbol;

/**
 *
 * @author Ensimag
 * @date 01/01/2025
 */
public class ManualTestInitialGencode {
    
    public static AbstractProgram initTest1() {
        ListInst linst = new ListInst();
        ListDeclVar declarations = new ListDeclVar();
        AbstractProgram source =
            new Program(
                new ListDeclClass(),
                new Main(declarations,linst));
        ListExpr lexp1 = new ListExpr(), lexp2 = new ListExpr();
        linst.add(new Print(false,lexp1));
        linst.add(new Println(false,lexp2));
        lexp1.add(new StringLiteral("Hello "));
        lexp2.add(new StringLiteral("everybody !"));
        return source;
    }


    public static AbstractProgram initTest() {
        DecacCompiler compiler = new DecacCompiler(null, null);
        SymbolTable symbolTable = new SymbolTable();
        
        // Create symbols
        Symbol intSymbol = symbolTable.create("int");
        Symbol xSymbol = symbolTable.create("x");
        Symbol ySymbol = symbolTable.create("y");
        Symbol zSymbol = symbolTable.create("z");
        Symbol countSymbol = symbolTable.create("count");
        
        ListInst linst = new ListInst();
        ListDeclVar declarations = new ListDeclVar();
        
        AbstractProgram source = new Program(
            new ListDeclClass(),
            new Main(declarations, linst)
        );
        
        // Create type identifier for int
        AbstractIdentifier intType = new Identifier(intSymbol);
        
        // Declare x = 1
        declarations.add(new DeclVar(
            intType,
            new Identifier(xSymbol),
            new Initialization(new IntLiteral(1))
        ));
        
        // Declare y = 42
        declarations.add(new DeclVar(
            intType,
            new Identifier(ySymbol),
            new Initialization(new IntLiteral(42))
        ));
        
        // Declare z = 100
        declarations.add(new DeclVar(
            intType,
            new Identifier(zSymbol),
            new Initialization(new IntLiteral(100))
        ));
        
        // Declare count without initialization
        declarations.add(new DeclVar(
            intType,
            new Identifier(countSymbol),
            new NoInitialization()
        ));
        
        return source;
    }


    
    public static String gencodeSource(AbstractProgram source) {
        DecacCompiler compiler = new DecacCompiler(null,null);
        source.codeGenProgram(compiler);
        return compiler.displayIMAProgram();
    }

    public static void test1() {
        AbstractProgram source = initTest1();
        System.out.println("---- From the following Abstract Syntax Tree ----");
        source.prettyPrint(System.out);
        System.out.println("---- We generate the following assembly code ----");        
        String result = gencodeSource(source);
        System.out.println(result);
        assert(result.equals(
                "; Main program\n" +
                "; Beginning of main function:\n" +
                "	WSTR \"Hello \"\n" +
                "	WSTR \"everybody !\"\n" +
                "	WNL\n" +
                "	HALT\n"));
    }    

     public static void test() {
        AbstractProgram source = initTest();
        System.out.println("---- From the following Abstract Syntax Tree ----");
        source.prettyPrint(System.out);
        System.out.println("---- We generate the following assembly code ----");        
        String result = gencodeSource(source);
        System.out.println(result);
    }    

        
        
    public static void main(String args[]) {
        test1();
        test();

    }
}
