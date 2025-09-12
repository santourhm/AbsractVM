
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  VMGrammarLexer : public antlr4::Lexer {
public:
  enum {
    OPP = 1, MUL = 2, QUO = 3, ADD = 4, SUB = 5, REM = 6, WSTR = 7, LOAD = 8, 
    CMP = 9, BEQ = 10, WINT = 11, WNL = 12, HALT = 13, WFLOAT = 14, COMMA = 15, 
    OPARENT = 16, CPARENT = 17, HASH = 18, MINUS = 19, COLON = 20, RREGISTER = 21, 
    GBREGISTER = 22, LBREGISTER = 23, STRING_LITERAL = 24, INT = 25, ID = 26, 
    FLOAT = 27, COMMENT = 28, WS = 29, NEWLINE = 30
  };

  explicit VMGrammarLexer(antlr4::CharStream *input);

  ~VMGrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

