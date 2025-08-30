
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
      "program", "line", "instruction", "opcode", "operand", "memory_address", 
      "immediate", "label"
    },
    std::vector<std::string>{
      "", "'ADD'", "'SUB'", "'WSTR'", "'LOAD'", "'CMP'", "'BEQ'", "'WINT'", 
      "'WNL'", "','", "'('", "')'", "'#'", "'-'"
    },
    std::vector<std::string>{
      "", "ADD", "SUB", "WSTR", "LOAD", "CMP", "BEQ", "WINT", "WNL", "COMMA", 
      "OPARENT", "CPARENT", "HASH", "MINUS", "REGISTER", "STRING_LITERAL", 
      "INT", "ID", "COMMENT", "WS", "NEWLINE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,20,68,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,1,0,5,0,18,8,0,10,0,12,0,21,9,0,1,0,3,0,24,8,0,1,0,1,0,1,1,3,1,29,
  	8,1,1,1,4,1,32,8,1,11,1,12,1,33,1,2,1,2,1,2,1,2,3,2,40,8,2,3,2,42,8,2,
  	1,3,1,3,1,4,1,4,1,4,1,4,1,4,3,4,51,8,4,1,5,3,5,54,8,5,1,5,3,5,57,8,5,
  	1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,0,0,8,0,2,4,6,8,10,12,14,0,3,
  	1,0,1,8,2,0,14,14,17,17,1,0,16,17,71,0,19,1,0,0,0,2,28,1,0,0,0,4,35,1,
  	0,0,0,6,43,1,0,0,0,8,50,1,0,0,0,10,56,1,0,0,0,12,62,1,0,0,0,14,65,1,0,
  	0,0,16,18,3,2,1,0,17,16,1,0,0,0,18,21,1,0,0,0,19,17,1,0,0,0,19,20,1,0,
  	0,0,20,23,1,0,0,0,21,19,1,0,0,0,22,24,3,4,2,0,23,22,1,0,0,0,23,24,1,0,
  	0,0,24,25,1,0,0,0,25,26,5,0,0,1,26,1,1,0,0,0,27,29,3,4,2,0,28,27,1,0,
  	0,0,28,29,1,0,0,0,29,31,1,0,0,0,30,32,5,20,0,0,31,30,1,0,0,0,32,33,1,
  	0,0,0,33,31,1,0,0,0,33,34,1,0,0,0,34,3,1,0,0,0,35,41,3,6,3,0,36,39,3,
  	8,4,0,37,38,5,9,0,0,38,40,3,8,4,0,39,37,1,0,0,0,39,40,1,0,0,0,40,42,1,
  	0,0,0,41,36,1,0,0,0,41,42,1,0,0,0,42,5,1,0,0,0,43,44,7,0,0,0,44,7,1,0,
  	0,0,45,51,3,10,5,0,46,51,3,12,6,0,47,51,5,14,0,0,48,51,5,15,0,0,49,51,
  	3,14,7,0,50,45,1,0,0,0,50,46,1,0,0,0,50,47,1,0,0,0,50,48,1,0,0,0,50,49,
  	1,0,0,0,51,9,1,0,0,0,52,54,5,13,0,0,53,52,1,0,0,0,53,54,1,0,0,0,54,55,
  	1,0,0,0,55,57,5,16,0,0,56,53,1,0,0,0,56,57,1,0,0,0,57,58,1,0,0,0,58,59,
  	5,10,0,0,59,60,7,1,0,0,60,61,5,11,0,0,61,11,1,0,0,0,62,63,5,12,0,0,63,
  	64,7,2,0,0,64,13,1,0,0,0,65,66,5,17,0,0,66,15,1,0,0,0,9,19,23,28,33,39,
  	41,50,53,56
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

VMGrammarParser::InstructionContext* VMGrammarParser::ProgramContext::instruction() {
  return getRuleContext<VMGrammarParser::InstructionContext>(0);
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
    setState(19);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(16);
        line(); 
      }
      setState(21);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(23);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 510) != 0)) {
      setState(22);
      instruction();
    }
    setState(25);
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

VMGrammarParser::InstructionContext* VMGrammarParser::LineContext::instruction() {
  return getRuleContext<VMGrammarParser::InstructionContext>(0);
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
    setState(28);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 510) != 0)) {
      setState(27);
      instruction();
    }
    setState(31); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(30);
              match(VMGrammarParser::NEWLINE);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(33); 
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
  enterRule(_localctx, 4, VMGrammarParser::RuleInstruction);
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
    setState(35);
    opcode();
    setState(41);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 259072) != 0)) {
      setState(36);
      operand();
      setState(39);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == VMGrammarParser::COMMA) {
        setState(37);
        match(VMGrammarParser::COMMA);
        setState(38);
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
  enterRule(_localctx, 6, VMGrammarParser::RuleOpcode);
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
    setState(43);
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

tree::TerminalNode* VMGrammarParser::OperandContext::REGISTER() {
  return getToken(VMGrammarParser::REGISTER, 0);
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
  enterRule(_localctx, 8, VMGrammarParser::RuleOperand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VMGrammarParser::OPARENT:
      case VMGrammarParser::MINUS:
      case VMGrammarParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(45);
        memory_address();
        break;
      }

      case VMGrammarParser::HASH: {
        enterOuterAlt(_localctx, 2);
        setState(46);
        immediate();
        break;
      }

      case VMGrammarParser::REGISTER: {
        enterOuterAlt(_localctx, 3);
        setState(47);
        match(VMGrammarParser::REGISTER);
        break;
      }

      case VMGrammarParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(48);
        match(VMGrammarParser::STRING_LITERAL);
        break;
      }

      case VMGrammarParser::ID: {
        enterOuterAlt(_localctx, 5);
        setState(49);
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

//----------------- Memory_addressContext ------------------------------------------------------------------

VMGrammarParser::Memory_addressContext::Memory_addressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMGrammarParser::Memory_addressContext::OPARENT() {
  return getToken(VMGrammarParser::OPARENT, 0);
}

tree::TerminalNode* VMGrammarParser::Memory_addressContext::CPARENT() {
  return getToken(VMGrammarParser::CPARENT, 0);
}

tree::TerminalNode* VMGrammarParser::Memory_addressContext::REGISTER() {
  return getToken(VMGrammarParser::REGISTER, 0);
}

tree::TerminalNode* VMGrammarParser::Memory_addressContext::ID() {
  return getToken(VMGrammarParser::ID, 0);
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
  enterRule(_localctx, 10, VMGrammarParser::RuleMemory_address);
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
    setState(56);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VMGrammarParser::MINUS

    || _la == VMGrammarParser::INT) {
      setState(53);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == VMGrammarParser::MINUS) {
        setState(52);
        match(VMGrammarParser::MINUS);
      }
      setState(55);
      match(VMGrammarParser::INT);
    }
    setState(58);
    match(VMGrammarParser::OPARENT);
    setState(59);
    _la = _input->LA(1);
    if (!(_la == VMGrammarParser::REGISTER

    || _la == VMGrammarParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(60);
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
  enterRule(_localctx, 12, VMGrammarParser::RuleImmediate);
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
    setState(62);
    match(VMGrammarParser::HASH);
    setState(63);
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
  enterRule(_localctx, 14, VMGrammarParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
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
