
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2


#include "VMGrammarListener.h"
#include "VMGrammarVisitor.h"

#include "VMGrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct VMGrammarParserStaticData final {
  VMGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  VMGrammarParserStaticData(const VMGrammarParserStaticData&) = delete;
  VMGrammarParserStaticData(VMGrammarParserStaticData&&) = delete;
  VMGrammarParserStaticData& operator=(const VMGrammarParserStaticData&) = delete;
  VMGrammarParserStaticData& operator=(VMGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag vmgrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<VMGrammarParserStaticData> vmgrammarParserStaticData = nullptr;

void vmgrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (vmgrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(vmgrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<VMGrammarParserStaticData>(
    std::vector<std::string>{
      "program", "line", "instruction_line", "label_definition", "instruction", 
      "opcode", "operand", "register", "memory_address", "immediate", "label"
    },
    std::vector<std::string>{
      "", "'ADD'", "'SUB'", "'WSTR'", "'LOAD'", "'CMP'", "'BEQ'", "'WINT'", 
      "'WNL'", "','", "'('", "')'", "'#'", "'-'", "':'", "", "'GB'", "'LB'"
    },
    std::vector<std::string>{
      "", "ADD", "SUB", "WSTR", "LOAD", "CMP", "BEQ", "WINT", "WNL", "COMMA", 
      "OPARENT", "CPARENT", "HASH", "MINUS", "COLON", "RREGISTER", "GBREGISTER", 
      "LBREGISTER", "STRING_LITERAL", "INT", "ID", "COMMENT", "WS", "NEWLINE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,23,82,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,5,0,24,8,0,10,0,12,0,27,9,0,1,0,3,0,
  	30,8,0,1,0,1,0,1,1,1,1,3,1,36,8,1,1,1,4,1,39,8,1,11,1,12,1,40,1,2,1,2,
  	1,3,1,3,1,3,1,4,1,4,1,4,1,4,3,4,52,8,4,3,4,54,8,4,1,5,1,5,1,6,1,6,1,6,
  	1,6,1,6,3,6,63,8,6,1,7,1,7,1,8,3,8,68,8,8,1,8,3,8,71,8,8,1,8,1,8,1,8,
  	1,8,1,9,1,9,1,9,1,10,1,10,1,10,0,0,11,0,2,4,6,8,10,12,14,16,18,20,0,3,
  	1,0,1,8,1,0,15,17,1,0,19,20,83,0,25,1,0,0,0,2,35,1,0,0,0,4,42,1,0,0,0,
  	6,44,1,0,0,0,8,47,1,0,0,0,10,55,1,0,0,0,12,62,1,0,0,0,14,64,1,0,0,0,16,
  	70,1,0,0,0,18,76,1,0,0,0,20,79,1,0,0,0,22,24,3,2,1,0,23,22,1,0,0,0,24,
  	27,1,0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,28,
  	30,3,4,2,0,29,28,1,0,0,0,29,30,1,0,0,0,30,31,1,0,0,0,31,32,5,0,0,1,32,
  	1,1,0,0,0,33,36,3,6,3,0,34,36,3,4,2,0,35,33,1,0,0,0,35,34,1,0,0,0,35,
  	36,1,0,0,0,36,38,1,0,0,0,37,39,5,23,0,0,38,37,1,0,0,0,39,40,1,0,0,0,40,
  	38,1,0,0,0,40,41,1,0,0,0,41,3,1,0,0,0,42,43,3,8,4,0,43,5,1,0,0,0,44,45,
  	5,20,0,0,45,46,5,14,0,0,46,7,1,0,0,0,47,53,3,10,5,0,48,51,3,12,6,0,49,
  	50,5,9,0,0,50,52,3,12,6,0,51,49,1,0,0,0,51,52,1,0,0,0,52,54,1,0,0,0,53,
  	48,1,0,0,0,53,54,1,0,0,0,54,9,1,0,0,0,55,56,7,0,0,0,56,11,1,0,0,0,57,
  	63,3,16,8,0,58,63,3,18,9,0,59,63,3,14,7,0,60,63,5,18,0,0,61,63,3,20,10,
  	0,62,57,1,0,0,0,62,58,1,0,0,0,62,59,1,0,0,0,62,60,1,0,0,0,62,61,1,0,0,
  	0,63,13,1,0,0,0,64,65,7,1,0,0,65,15,1,0,0,0,66,68,5,13,0,0,67,66,1,0,
  	0,0,67,68,1,0,0,0,68,69,1,0,0,0,69,71,5,19,0,0,70,67,1,0,0,0,70,71,1,
  	0,0,0,71,72,1,0,0,0,72,73,5,10,0,0,73,74,3,14,7,0,74,75,5,11,0,0,75,17,
  	1,0,0,0,76,77,5,12,0,0,77,78,7,2,0,0,78,19,1,0,0,0,79,80,5,20,0,0,80,
  	21,1,0,0,0,9,25,29,35,40,51,53,62,67,70
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  vmgrammarParserStaticData = std::move(staticData);
}

}

VMGrammarParser::VMGrammarParser(TokenStream *input) : VMGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

VMGrammarParser::VMGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  VMGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *vmgrammarParserStaticData->atn, vmgrammarParserStaticData->decisionToDFA, vmgrammarParserStaticData->sharedContextCache, options);
}

VMGrammarParser::~VMGrammarParser() {
  delete _interpreter;
}

const atn::ATN& VMGrammarParser::getATN() const {
  return *vmgrammarParserStaticData->atn;
}

std::string VMGrammarParser::getGrammarFileName() const {
  return "VMGrammar.g4";
}

const std::vector<std::string>& VMGrammarParser::getRuleNames() const {
  return vmgrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& VMGrammarParser::getVocabulary() const {
  return vmgrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView VMGrammarParser::getSerializedATN() const {
  return vmgrammarParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

VMGrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMGrammarParser::ProgramContext::EOF() {
  return getToken(VMGrammarParser::EOF, 0);
}

std::vector<VMGrammarParser::LineContext *> VMGrammarParser::ProgramContext::line() {
  return getRuleContexts<VMGrammarParser::LineContext>();
}

VMGrammarParser::LineContext* VMGrammarParser::ProgramContext::line(size_t i) {
  return getRuleContext<VMGrammarParser::LineContext>(i);
}

VMGrammarParser::Instruction_lineContext* VMGrammarParser::ProgramContext::instruction_line() {
  return getRuleContext<VMGrammarParser::Instruction_lineContext>(0);
}


size_t VMGrammarParser::ProgramContext::getRuleIndex() const {
  return VMGrammarParser::RuleProgram;
}

void VMGrammarParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void VMGrammarParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any VMGrammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::ProgramContext* VMGrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, VMGrammarParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(25);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(22);
        line(); 
      }
      setState(27);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(29);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 510) != 0)) {
      setState(28);
      instruction_line();
    }
    setState(31);
    match(VMGrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

VMGrammarParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VMGrammarParser::Label_definitionContext* VMGrammarParser::LineContext::label_definition() {
  return getRuleContext<VMGrammarParser::Label_definitionContext>(0);
}

VMGrammarParser::Instruction_lineContext* VMGrammarParser::LineContext::instruction_line() {
  return getRuleContext<VMGrammarParser::Instruction_lineContext>(0);
}

std::vector<tree::TerminalNode *> VMGrammarParser::LineContext::NEWLINE() {
  return getTokens(VMGrammarParser::NEWLINE);
}

tree::TerminalNode* VMGrammarParser::LineContext::NEWLINE(size_t i) {
  return getToken(VMGrammarParser::NEWLINE, i);
}


size_t VMGrammarParser::LineContext::getRuleIndex() const {
  return VMGrammarParser::RuleLine;
}

void VMGrammarParser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void VMGrammarParser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
}


std::any VMGrammarParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::LineContext* VMGrammarParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, VMGrammarParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(35);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VMGrammarParser::ID: {
        setState(33);
        label_definition();
        break;
      }

      case VMGrammarParser::ADD:
      case VMGrammarParser::SUB:
      case VMGrammarParser::WSTR:
      case VMGrammarParser::LOAD:
      case VMGrammarParser::CMP:
      case VMGrammarParser::BEQ:
      case VMGrammarParser::WINT:
      case VMGrammarParser::WNL: {
        setState(34);
        instruction_line();
        break;
      }

      case VMGrammarParser::NEWLINE: {
        break;
      }

    default:
      break;
    }
    setState(38); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(37);
              match(VMGrammarParser::NEWLINE);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(40); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Instruction_lineContext ------------------------------------------------------------------

VMGrammarParser::Instruction_lineContext::Instruction_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VMGrammarParser::InstructionContext* VMGrammarParser::Instruction_lineContext::instruction() {
  return getRuleContext<VMGrammarParser::InstructionContext>(0);
}


size_t VMGrammarParser::Instruction_lineContext::getRuleIndex() const {
  return VMGrammarParser::RuleInstruction_line;
}

void VMGrammarParser::Instruction_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction_line(this);
}

void VMGrammarParser::Instruction_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction_line(this);
}


std::any VMGrammarParser::Instruction_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitInstruction_line(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::Instruction_lineContext* VMGrammarParser::instruction_line() {
  Instruction_lineContext *_localctx = _tracker.createInstance<Instruction_lineContext>(_ctx, getState());
  enterRule(_localctx, 4, VMGrammarParser::RuleInstruction_line);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    instruction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Label_definitionContext ------------------------------------------------------------------

VMGrammarParser::Label_definitionContext::Label_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMGrammarParser::Label_definitionContext::ID() {
  return getToken(VMGrammarParser::ID, 0);
}

tree::TerminalNode* VMGrammarParser::Label_definitionContext::COLON() {
  return getToken(VMGrammarParser::COLON, 0);
}


size_t VMGrammarParser::Label_definitionContext::getRuleIndex() const {
  return VMGrammarParser::RuleLabel_definition;
}

void VMGrammarParser::Label_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel_definition(this);
}

void VMGrammarParser::Label_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel_definition(this);
}


std::any VMGrammarParser::Label_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitLabel_definition(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::Label_definitionContext* VMGrammarParser::label_definition() {
  Label_definitionContext *_localctx = _tracker.createInstance<Label_definitionContext>(_ctx, getState());
  enterRule(_localctx, 6, VMGrammarParser::RuleLabel_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(VMGrammarParser::ID);
    setState(45);
    match(VMGrammarParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

VMGrammarParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VMGrammarParser::OpcodeContext* VMGrammarParser::InstructionContext::opcode() {
  return getRuleContext<VMGrammarParser::OpcodeContext>(0);
}

std::vector<VMGrammarParser::OperandContext *> VMGrammarParser::InstructionContext::operand() {
  return getRuleContexts<VMGrammarParser::OperandContext>();
}

VMGrammarParser::OperandContext* VMGrammarParser::InstructionContext::operand(size_t i) {
  return getRuleContext<VMGrammarParser::OperandContext>(i);
}

tree::TerminalNode* VMGrammarParser::InstructionContext::COMMA() {
  return getToken(VMGrammarParser::COMMA, 0);
}


size_t VMGrammarParser::InstructionContext::getRuleIndex() const {
  return VMGrammarParser::RuleInstruction;
}

void VMGrammarParser::InstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction(this);
}

void VMGrammarParser::InstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction(this);
}


std::any VMGrammarParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::InstructionContext* VMGrammarParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 8, VMGrammarParser::RuleInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    opcode();
    setState(53);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2077696) != 0)) {
      setState(48);
      operand();
      setState(51);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == VMGrammarParser::COMMA) {
        setState(49);
        match(VMGrammarParser::COMMA);
        setState(50);
        operand();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpcodeContext ------------------------------------------------------------------

VMGrammarParser::OpcodeContext::OpcodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMGrammarParser::OpcodeContext::ADD() {
  return getToken(VMGrammarParser::ADD, 0);
}

tree::TerminalNode* VMGrammarParser::OpcodeContext::SUB() {
  return getToken(VMGrammarParser::SUB, 0);
}

tree::TerminalNode* VMGrammarParser::OpcodeContext::WSTR() {
  return getToken(VMGrammarParser::WSTR, 0);
}

tree::TerminalNode* VMGrammarParser::OpcodeContext::LOAD() {
  return getToken(VMGrammarParser::LOAD, 0);
}

tree::TerminalNode* VMGrammarParser::OpcodeContext::CMP() {
  return getToken(VMGrammarParser::CMP, 0);
}

tree::TerminalNode* VMGrammarParser::OpcodeContext::BEQ() {
  return getToken(VMGrammarParser::BEQ, 0);
}

tree::TerminalNode* VMGrammarParser::OpcodeContext::WINT() {
  return getToken(VMGrammarParser::WINT, 0);
}

tree::TerminalNode* VMGrammarParser::OpcodeContext::WNL() {
  return getToken(VMGrammarParser::WNL, 0);
}


size_t VMGrammarParser::OpcodeContext::getRuleIndex() const {
  return VMGrammarParser::RuleOpcode;
}

void VMGrammarParser::OpcodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpcode(this);
}

void VMGrammarParser::OpcodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpcode(this);
}


std::any VMGrammarParser::OpcodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitOpcode(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::OpcodeContext* VMGrammarParser::opcode() {
  OpcodeContext *_localctx = _tracker.createInstance<OpcodeContext>(_ctx, getState());
  enterRule(_localctx, 10, VMGrammarParser::RuleOpcode);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 510) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperandContext ------------------------------------------------------------------

VMGrammarParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VMGrammarParser::Memory_addressContext* VMGrammarParser::OperandContext::memory_address() {
  return getRuleContext<VMGrammarParser::Memory_addressContext>(0);
}

VMGrammarParser::ImmediateContext* VMGrammarParser::OperandContext::immediate() {
  return getRuleContext<VMGrammarParser::ImmediateContext>(0);
}

VMGrammarParser::RegisterContext* VMGrammarParser::OperandContext::register_() {
  return getRuleContext<VMGrammarParser::RegisterContext>(0);
}

tree::TerminalNode* VMGrammarParser::OperandContext::STRING_LITERAL() {
  return getToken(VMGrammarParser::STRING_LITERAL, 0);
}

VMGrammarParser::LabelContext* VMGrammarParser::OperandContext::label() {
  return getRuleContext<VMGrammarParser::LabelContext>(0);
}


size_t VMGrammarParser::OperandContext::getRuleIndex() const {
  return VMGrammarParser::RuleOperand;
}

void VMGrammarParser::OperandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperand(this);
}

void VMGrammarParser::OperandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperand(this);
}


std::any VMGrammarParser::OperandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitOperand(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::OperandContext* VMGrammarParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 12, VMGrammarParser::RuleOperand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VMGrammarParser::OPARENT:
      case VMGrammarParser::MINUS:
      case VMGrammarParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(57);
        memory_address();
        break;
      }

      case VMGrammarParser::HASH: {
        enterOuterAlt(_localctx, 2);
        setState(58);
        immediate();
        break;
      }

      case VMGrammarParser::RREGISTER:
      case VMGrammarParser::GBREGISTER:
      case VMGrammarParser::LBREGISTER: {
        enterOuterAlt(_localctx, 3);
        setState(59);
        register_();
        break;
      }

      case VMGrammarParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(60);
        match(VMGrammarParser::STRING_LITERAL);
        break;
      }

      case VMGrammarParser::ID: {
        enterOuterAlt(_localctx, 5);
        setState(61);
        label();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegisterContext ------------------------------------------------------------------

VMGrammarParser::RegisterContext::RegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMGrammarParser::RegisterContext::RREGISTER() {
  return getToken(VMGrammarParser::RREGISTER, 0);
}

tree::TerminalNode* VMGrammarParser::RegisterContext::GBREGISTER() {
  return getToken(VMGrammarParser::GBREGISTER, 0);
}

tree::TerminalNode* VMGrammarParser::RegisterContext::LBREGISTER() {
  return getToken(VMGrammarParser::LBREGISTER, 0);
}


size_t VMGrammarParser::RegisterContext::getRuleIndex() const {
  return VMGrammarParser::RuleRegister;
}

void VMGrammarParser::RegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegister(this);
}

void VMGrammarParser::RegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegister(this);
}


std::any VMGrammarParser::RegisterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitRegister(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::RegisterContext* VMGrammarParser::register_() {
  RegisterContext *_localctx = _tracker.createInstance<RegisterContext>(_ctx, getState());
  enterRule(_localctx, 14, VMGrammarParser::RuleRegister);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 229376) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Memory_addressContext ------------------------------------------------------------------

VMGrammarParser::Memory_addressContext::Memory_addressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMGrammarParser::Memory_addressContext::OPARENT() {
  return getToken(VMGrammarParser::OPARENT, 0);
}

VMGrammarParser::RegisterContext* VMGrammarParser::Memory_addressContext::register_() {
  return getRuleContext<VMGrammarParser::RegisterContext>(0);
}

tree::TerminalNode* VMGrammarParser::Memory_addressContext::CPARENT() {
  return getToken(VMGrammarParser::CPARENT, 0);
}

tree::TerminalNode* VMGrammarParser::Memory_addressContext::INT() {
  return getToken(VMGrammarParser::INT, 0);
}

tree::TerminalNode* VMGrammarParser::Memory_addressContext::MINUS() {
  return getToken(VMGrammarParser::MINUS, 0);
}


size_t VMGrammarParser::Memory_addressContext::getRuleIndex() const {
  return VMGrammarParser::RuleMemory_address;
}

void VMGrammarParser::Memory_addressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemory_address(this);
}

void VMGrammarParser::Memory_addressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemory_address(this);
}


std::any VMGrammarParser::Memory_addressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitMemory_address(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::Memory_addressContext* VMGrammarParser::memory_address() {
  Memory_addressContext *_localctx = _tracker.createInstance<Memory_addressContext>(_ctx, getState());
  enterRule(_localctx, 16, VMGrammarParser::RuleMemory_address);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VMGrammarParser::MINUS

    || _la == VMGrammarParser::INT) {
      setState(67);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == VMGrammarParser::MINUS) {
        setState(66);
        match(VMGrammarParser::MINUS);
      }
      setState(69);
      match(VMGrammarParser::INT);
    }
    setState(72);
    match(VMGrammarParser::OPARENT);
    setState(73);
    register_();
    setState(74);
    match(VMGrammarParser::CPARENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImmediateContext ------------------------------------------------------------------

VMGrammarParser::ImmediateContext::ImmediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMGrammarParser::ImmediateContext::HASH() {
  return getToken(VMGrammarParser::HASH, 0);
}

tree::TerminalNode* VMGrammarParser::ImmediateContext::INT() {
  return getToken(VMGrammarParser::INT, 0);
}

tree::TerminalNode* VMGrammarParser::ImmediateContext::ID() {
  return getToken(VMGrammarParser::ID, 0);
}


size_t VMGrammarParser::ImmediateContext::getRuleIndex() const {
  return VMGrammarParser::RuleImmediate;
}

void VMGrammarParser::ImmediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate(this);
}

void VMGrammarParser::ImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate(this);
}


std::any VMGrammarParser::ImmediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitImmediate(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::ImmediateContext* VMGrammarParser::immediate() {
  ImmediateContext *_localctx = _tracker.createInstance<ImmediateContext>(_ctx, getState());
  enterRule(_localctx, 18, VMGrammarParser::RuleImmediate);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(VMGrammarParser::HASH);
    setState(77);
    _la = _input->LA(1);
    if (!(_la == VMGrammarParser::INT

    || _la == VMGrammarParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

VMGrammarParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMGrammarParser::LabelContext::ID() {
  return getToken(VMGrammarParser::ID, 0);
}


size_t VMGrammarParser::LabelContext::getRuleIndex() const {
  return VMGrammarParser::RuleLabel;
}

void VMGrammarParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void VMGrammarParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VMGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}


std::any VMGrammarParser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMGrammarVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

VMGrammarParser::LabelContext* VMGrammarParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 20, VMGrammarParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(VMGrammarParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void VMGrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  vmgrammarParserInitialize();
#else
  ::antlr4::internal::call_once(vmgrammarParserOnceFlag, vmgrammarParserInitialize);
#endif
}
