
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  VMGrammarLexer : public antlr4::Lexer {
public:
  enum {
    ADD = 1, SUB = 2, WSTR = 3, LOAD = 4, CMP = 5, BEQ = 6, WINT = 7, WNL = 8, 
    COMMA = 9, OPARENT = 10, CPARENT = 11, HASH = 12, MINUS = 13, COLON = 14, 
    RREGISTER = 15, GBREGISTER = 16, LBREGISTER = 17, STRING_LITERAL = 18, 
    INT = 19, ID = 20, COMMENT = 21, WS = 22, NEWLINE = 23
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

