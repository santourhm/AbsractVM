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
    : ADD | MUL | QUO | OPP | REM | SUB | WSTR | LOAD | CMP | BEQ | BRA | WINT | WNL | WFLOAT | HALT
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
    : HASH (INT | FLOAT)
    ;

label
    : ID 
    ;


// --- Lexer Rules ---

OPP : 'OPP';
MUL : 'MUL';
QUO : 'QUO';
ADD : 'ADD';
SUB : 'SUB';
REM : 'REM' ; 
WSTR: 'WSTR';
LOAD: 'LOAD';
CMP : 'CMP';
BEQ : 'BEQ';
BRA : 'BRA';
WINT: 'WINT';
WNL : 'WNL';
HALT : 'HALT';
WFLOAT : 'WFLOAT';

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
STRING_LITERAL: '"' STRING '"';
INT           : [0-9]+;
ID            : [a-zA-Z_] [a-zA-Z0-9_.]*;
FLOAT         : INT '.' INT ;

fragment STRING        : ( ~["\\] | '\\' . )*;

COMMENT : ';' ~[\r\n]* -> skip;
WS      : [ \t]+ -> skip;
NEWLINE : ('\r'? '\n' | '\r');