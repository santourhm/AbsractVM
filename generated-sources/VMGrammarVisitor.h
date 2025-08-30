
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VMGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by VMGrammarParser.
 */
class  VMGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by VMGrammarParser.
   */
    virtual std::any visitProgram(VMGrammarParser::ProgramContext *context) = 0;

    virtual std::any visitLine(VMGrammarParser::LineContext *context) = 0;

    virtual std::any visitInstruction(VMGrammarParser::InstructionContext *context) = 0;

    virtual std::any visitOpcode(VMGrammarParser::OpcodeContext *context) = 0;

    virtual std::any visitOperand(VMGrammarParser::OperandContext *context) = 0;

    virtual std::any visitMemory_address(VMGrammarParser::Memory_addressContext *context) = 0;

    virtual std::any visitImmediate(VMGrammarParser::ImmediateContext *context) = 0;

    virtual std::any visitLabel(VMGrammarParser::LabelContext *context) = 0;


};

