
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VMGrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by VMGrammarParser.
 */
class  VMGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(VMGrammarParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(VMGrammarParser::ProgramContext *ctx) = 0;

  virtual void enterLine(VMGrammarParser::LineContext *ctx) = 0;
  virtual void exitLine(VMGrammarParser::LineContext *ctx) = 0;

  virtual void enterInstruction_line(VMGrammarParser::Instruction_lineContext *ctx) = 0;
  virtual void exitInstruction_line(VMGrammarParser::Instruction_lineContext *ctx) = 0;

  virtual void enterLabel_definition(VMGrammarParser::Label_definitionContext *ctx) = 0;
  virtual void exitLabel_definition(VMGrammarParser::Label_definitionContext *ctx) = 0;

  virtual void enterInstruction(VMGrammarParser::InstructionContext *ctx) = 0;
  virtual void exitInstruction(VMGrammarParser::InstructionContext *ctx) = 0;

  virtual void enterOpcode(VMGrammarParser::OpcodeContext *ctx) = 0;
  virtual void exitOpcode(VMGrammarParser::OpcodeContext *ctx) = 0;

  virtual void enterOperand(VMGrammarParser::OperandContext *ctx) = 0;
  virtual void exitOperand(VMGrammarParser::OperandContext *ctx) = 0;

  virtual void enterString_literal(VMGrammarParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(VMGrammarParser::String_literalContext *ctx) = 0;

  virtual void enterRegister(VMGrammarParser::RegisterContext *ctx) = 0;
  virtual void exitRegister(VMGrammarParser::RegisterContext *ctx) = 0;

  virtual void enterMemory_address(VMGrammarParser::Memory_addressContext *ctx) = 0;
  virtual void exitMemory_address(VMGrammarParser::Memory_addressContext *ctx) = 0;

  virtual void enterImmediate(VMGrammarParser::ImmediateContext *ctx) = 0;
  virtual void exitImmediate(VMGrammarParser::ImmediateContext *ctx) = 0;

  virtual void enterLabel(VMGrammarParser::LabelContext *ctx) = 0;
  virtual void exitLabel(VMGrammarParser::LabelContext *ctx) = 0;


};

