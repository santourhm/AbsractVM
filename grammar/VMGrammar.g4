grammar VMGrammar;

// --- Parser Rules ---

program: line* (instruction_line)? EOF;

line: (label_definition | instruction_line)? NEWLINE+;

instruction_line: instruction;

label_definition: ID ':'; 

instruction
    : opcode (operand (COMMA operand)?)?
    ;

opcode
    : ADD | SUB | WSTR | LOAD | CMP | BEQ | WINT | WNL
    ;

operand
    : memory_address
    | immediate
    | register        
    | string_literal
    | label           
    ;

string_literal
    : STRING_LITERAL
    ;
    
register
    : RREGISTER | GBREGISTER | LBREGISTER
    ;

memory_address
    : (MINUS? INT)? OPARENT register CPARENT 
    ;

immediate
    : HASH INT
    ;

label
    : ID 
    ;


// --- Lexer Rules ---


ADD : 'ADD';
SUB : 'SUB';
WSTR: 'WSTR';
LOAD: 'LOAD';
CMP : 'CMP';
BEQ : 'BEQ';
WINT: 'WINT';
WNL : 'WNL';

COMMA  : ',';
OPARENT: '(';
CPARENT: ')';
HASH   : '#';
MINUS  : '-';
COLON  : ':'; 

// Operands & Identifiers
RREGISTER      : 'R' INT;
GBREGISTER     : 'GB';
LBREGISTER     : 'LB';
STRING_LITERAL: '"' ( ~["\\] | '\\' . )* '"';
INT           : [0-9]+;
ID            : [a-zA-Z_] [a-zA-Z0-9_.]*;


COMMENT : ';' ~[\r\n]* -> skip;
WS      : [ \t]+ -> skip;
NEWLINE : ('\r'? '\n' | '\r');