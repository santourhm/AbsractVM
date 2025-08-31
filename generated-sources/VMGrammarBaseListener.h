
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VMGrammarListener.h"


/**
 * This class provides an empty implementation of VMGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  VMGrammarBaseListener : public VMGrammarListener {
public:

  virtual void enterProgram(VMGrammarParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(VMGrammarParser::ProgramContext * /*ctx*/) override { }

  virtual void enterLine(VMGrammarParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(VMGrammarParser::LineContext * /*ctx*/) override { }

  virtual void enterInstruction_line(VMGrammarParser::Instruction_lineContext * /*ctx*/) override { }
  virtual void exitInstruction_line(VMGrammarParser::Instruction_lineContext * /*ctx*/) override { }

  virtual void enterLabel_definition(VMGrammarParser::Label_definitionContext * /*ctx*/) override { }
  virtual void exitLabel_definition(VMGrammarParser::Label_definitionContext * /*ctx*/) override { }

  virtual void enterInstruction(VMGrammarParser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(VMGrammarParser::InstructionContext * /*ctx*/) override { }

  virtual void enterOpcode(VMGrammarParser::OpcodeContext * /*ctx*/) override { }
  virtual void exitOpcode(VMGrammarParser::OpcodeContext * /*ctx*/) override { }

  virtual void enterOperand(VMGrammarParser::OperandContext * /*ctx*/) override { }
  virtual void exitOperand(VMGrammarParser::OperandContext * /*ctx*/) override { }

  virtual void enterString_literal(VMGrammarParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(VMGrammarParser::String_literalContext * /*ctx*/) override { }

  virtual void enterRegister(VMGrammarParser::RegisterContext * /*ctx*/) override { }
  virtual void exitRegister(VMGrammarParser::RegisterContext * /*ctx*/) override { }

  virtual void enterMemory_address(VMGrammarParser::Memory_addressContext * /*ctx*/) override { }
  virtual void exitMemory_address(VMGrammarParser::Memory_addressContext * /*ctx*/) override { }

  virtual void enterImmediate(VMGrammarParser::ImmediateContext * /*ctx*/) override { }
  virtual void exitImmediate(VMGrammarParser::ImmediateContext * /*ctx*/) override { }

  virtual void enterLabel(VMGrammarParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(VMGrammarParser::LabelContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

