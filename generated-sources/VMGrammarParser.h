
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  VMGrammarParser : public antlr4::Parser {
public:
  enum {
    OPP = 1, MUL = 2, QUO = 3, DIV = 4, ADD = 5, SUB = 6, REM = 7, WSTR = 8, 
    LOAD = 9, NEW = 10, CMP = 11, BRA = 12, SEQ = 13, SNE = 14, SLT = 15, 
    SGT = 16, SGE = 17, SLE = 18, SOV = 19, SHL = 20, SHR = 21, BEQ = 22, 
    BNE = 23, BGE = 24, BLT = 25, BGT = 26, BLE = 27, BOV = 28, BSR = 29, 
    RTS = 30, STORE = 31, PUSH = 32, POP = 33, LEA = 34, PEA = 35, WINT = 36, 
    WNL = 37, HALT = 38, WFLOAT = 39, WTYPE = 40, WADDR = 41, SUBSP = 42, 
    ADDSP = 43, TSTO = 44, RINT = 45, RFLOAT = 46, ERROR = 47, COMMA = 48, 
    OPARENT = 49, CPARENT = 50, HASH = 51, MINUS = 52, COLON = 53, RREGISTER = 54, 
    GBREGISTER = 55, LBREGISTER = 56, SPREGISTER = 57, VALLNULL = 58, STRING_LITERAL = 59, 
    INT = 60, FLOAT = 61, ID = 62, COMMENT = 63, WS = 64, NEWLINE = 65
  };

  enum {
    RuleProgram = 0, RuleLine = 1, RuleInstruction_line = 2, RuleLabel_definition = 3, 
    RuleInstruction = 4, RuleOpcode = 5, RuleOperand = 6, RuleString_literal = 7, 
    RuleRegister = 8, RuleMemory_address = 9, RuleImmediate = 10, RuleLabel = 11
  };

  explicit VMGrammarParser(antlr4::TokenStream *input);

  VMGrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~VMGrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class LineContext;
  class Instruction_lineContext;
  class Label_definitionContext;
  class InstructionContext;
  class OpcodeContext;
  class OperandContext;
  class String_literalContext;
  class RegisterContext;
  class Memory_addressContext;
  class ImmediateContext;
  class LabelContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);
    Instruction_lineContext *instruction_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Label_definitionContext *label_definition();
    Instruction_lineContext *instruction_line();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  Instruction_lineContext : public antlr4::ParserRuleContext {
  public:
    Instruction_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InstructionContext *instruction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Instruction_lineContext* instruction_line();

  class  Label_definitionContext : public antlr4::ParserRuleContext {
  public:
    Label_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Label_definitionContext* label_definition();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpcodeContext *opcode();
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  OpcodeContext : public antlr4::ParserRuleContext {
  public:
    OpcodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *QUO();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *OPP();
    antlr4::tree::TerminalNode *REM();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *WSTR();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *CMP();
    antlr4::tree::TerminalNode *BEQ();
    antlr4::tree::TerminalNode *BNE();
    antlr4::tree::TerminalNode *BLT();
    antlr4::tree::TerminalNode *BGT();
    antlr4::tree::TerminalNode *BGE();
    antlr4::tree::TerminalNode *BLE();
    antlr4::tree::TerminalNode *BOV();
    antlr4::tree::TerminalNode *SEQ();
    antlr4::tree::TerminalNode *SNE();
    antlr4::tree::TerminalNode *SLT();
    antlr4::tree::TerminalNode *SGT();
    antlr4::tree::TerminalNode *SGE();
    antlr4::tree::TerminalNode *SLE();
    antlr4::tree::TerminalNode *SOV();
    antlr4::tree::TerminalNode *SHL();
    antlr4::tree::TerminalNode *SHR();
    antlr4::tree::TerminalNode *BRA();
    antlr4::tree::TerminalNode *WINT();
    antlr4::tree::TerminalNode *WNL();
    antlr4::tree::TerminalNode *WFLOAT();
    antlr4::tree::TerminalNode *HALT();
    antlr4::tree::TerminalNode *STORE();
    antlr4::tree::TerminalNode *PUSH();
    antlr4::tree::TerminalNode *POP();
    antlr4::tree::TerminalNode *LEA();
    antlr4::tree::TerminalNode *PEA();
    antlr4::tree::TerminalNode *BSR();
    antlr4::tree::TerminalNode *RTS();
    antlr4::tree::TerminalNode *SUBSP();
    antlr4::tree::TerminalNode *ADDSP();
    antlr4::tree::TerminalNode *RINT();
    antlr4::tree::TerminalNode *RFLOAT();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *TSTO();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *WTYPE();
    antlr4::tree::TerminalNode *WADDR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpcodeContext* opcode();

  class  OperandContext : public antlr4::ParserRuleContext {
  public:
    OperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Memory_addressContext *memory_address();
    ImmediateContext *immediate();
    RegisterContext *register_();
    String_literalContext *string_literal();
    LabelContext *label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperandContext* operand();

  class  String_literalContext : public antlr4::ParserRuleContext {
  public:
    String_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_literalContext* string_literal();

  class  RegisterContext : public antlr4::ParserRuleContext {
  public:
    RegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RREGISTER();
    antlr4::tree::TerminalNode *GBREGISTER();
    antlr4::tree::TerminalNode *LBREGISTER();
    antlr4::tree::TerminalNode *SPREGISTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegisterContext* register_();

  class  Memory_addressContext : public antlr4::ParserRuleContext {
  public:
    Memory_addressContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPARENT();
    RegisterContext *register_();
    antlr4::tree::TerminalNode *CPARENT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Memory_addressContext* memory_address();

  class  ImmediateContext : public antlr4::ParserRuleContext {
  public:
    ImmediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *VALLNULL();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImmediateContext* immediate();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

