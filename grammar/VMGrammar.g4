grammar VMGrammar;

    // --- Parser Rules ---

    program: line* (instruction)? EOF;

    line: (instruction)? NEWLINE+;

    instruction
        : opcode (operand (COMMA operand)?)?
        ;

    opcode
        : ADD | SUB | WSTR | LOAD | CMP | BEQ | WINT | WNL
        ;

    operand
        : memory_address
        | immediate
        | REGISTER
        | STRING_LITERAL
        | label
        ;

    memory_address
        : (MINUS? INT)? OPARENT (REGISTER | ID) CPARENT
        ;

    immediate
        : HASH (INT | ID)
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

    REGISTER      : 'R' INT;
    STRING_LITERAL: '"' ( ~["\\] | '\\' . )* '"';
    INT           : [0-9]+;
    ID            : [a-zA-Z_][a-zA-Z_0-9]*;

    COMMENT : ';' ~[\r\n]* -> skip;

    WS      : [ \t]+ -> skip;

    NEWLINE : ('\r'? '\n' | '\r');