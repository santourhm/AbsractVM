
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  VMParser : public antlr4::Parser {
public:
  enum {
    ADD = 1, SUB = 2, WSTR = 3, COMMA = 4, DOT = 5, OPARENT = 6, CPARENT = 7, 
    SEMI = 8, INT = 9, WS = 10, NEWLINE = 11, REGISTER = 12, DVAL = 13, 
    STRING_LITERAL = 14
  };

  enum {
    RuleProgram = 0, RuleExpr = 1, RuleAsm_inst = 2, RuleOp = 3, RuleInstruction = 4
  };

  explicit VMParser(antlr4::TokenStream *input);

  VMParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~VMParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class ExprContext;
  class Asm_instContext;
  class OpContext;
  class InstructionContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

   
  };

  ProgramContext* program();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Asm_instContext *asm_inst();
    std::vector<OpContext *> op();
    OpContext* op(size_t i);

   
  };

  ExprContext* expr();

  class  Asm_instContext : public antlr4::ParserRuleContext {
  public:
    Asm_instContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *WSTR();

   
  };

  Asm_instContext* asm_inst();

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DVAL();
    antlr4::tree::TerminalNode *REGISTER();
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  OpContext* op();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *NEWLINE();
    ExprContext *expr();

   
  };

  InstructionContext* instruction();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

