
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  VMGrammarLexer : public antlr4::Lexer {
public:
  enum {
    OPP = 1, MUL = 2, QUO = 3, ADD = 4, SUB = 5, REM = 6, WSTR = 7, LOAD = 8, 
    CMP = 9, BEQ = 10, WINT = 11, WNL = 12, COMMA = 13, OPARENT = 14, CPARENT = 15, 
    HASH = 16, MINUS = 17, COLON = 18, RREGISTER = 19, GBREGISTER = 20, 
    LBREGISTER = 21, STRING_LITERAL = 22, INT = 23, ID = 24, COMMENT = 25, 
    WS = 26, NEWLINE = 27
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

