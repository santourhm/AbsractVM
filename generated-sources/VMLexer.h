
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  VMLexer : public antlr4::Lexer {
public:
  enum {
    ADD = 1, SUB = 2, WSTR = 3, LOAD = 4, CMP = 5, BEQ = 6, WINT = 7, WNL = 8, 
    COMMA = 9, OPARENT = 10, CPARENT = 11, HASH = 12, MINUS = 13, REGISTER = 14, 
    STRING_LITERAL = 15, INT = 16, ID = 17, COMMENT = 18, WS = 19, NEWLINE = 20
  };

  explicit VMLexer(antlr4::CharStream *input);

  ~VMLexer() override;


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

