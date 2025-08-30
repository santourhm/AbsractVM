
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VMGrammarVisitor.h"


/**
 * This class provides an empty implementation of VMGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  VMGrammarBaseVisitor : public VMGrammarVisitor {
public:

  virtual std::any visitProgram(VMGrammarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine(VMGrammarParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstruction(VMGrammarParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpcode(VMGrammarParser::OpcodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperand(VMGrammarParser::OperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemory_address(VMGrammarParser::Memory_addressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImmediate(VMGrammarParser::ImmediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(VMGrammarParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }


};

