
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMParser.g4 by ANTLR 4.13.1



#include "VMParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct VMParserStaticData final {
  VMParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  VMParserStaticData(const VMParserStaticData&) = delete;
  VMParserStaticData(VMParserStaticData&&) = delete;
  VMParserStaticData& operator=(const VMParserStaticData&) = delete;
  VMParserStaticData& operator=(VMParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag vmparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
VMParserStaticData *vmparserParserStaticData = nullptr;

void vmparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (vmparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(vmparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<VMParserStaticData>(
    std::vector<std::string>{
      "program", "expr", "asm_inst", "op", "instruction"
    },
    std::vector<std::string>{
      "", "'ADD'", "'SUB'", "'WSTR'", "','", "'.'", "'('", "')'", "';'"
    },
    std::vector<std::string>{
      "", "ADD", "SUB", "WSTR", "COMMA", "DOT", "OPARENT", "CPARENT", "SEMI", 
      "INT", "WS", "NEWLINE", "REGISTER", "DVAL", "STRING_LITERAL"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,14,39,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,5,0,12,8,0,10,0,
  	12,0,15,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,3,3,29,8,
  	3,1,4,1,4,1,4,1,4,1,4,1,4,3,4,37,8,4,1,4,0,0,5,0,2,4,6,8,0,1,2,0,1,1,
  	3,3,38,0,13,1,0,0,0,2,18,1,0,0,0,4,22,1,0,0,0,6,28,1,0,0,0,8,36,1,0,0,
  	0,10,12,3,8,4,0,11,10,1,0,0,0,12,15,1,0,0,0,13,11,1,0,0,0,13,14,1,0,0,
  	0,14,16,1,0,0,0,15,13,1,0,0,0,16,17,5,0,0,1,17,1,1,0,0,0,18,19,3,4,2,
  	0,19,20,3,6,3,0,20,21,3,6,3,0,21,3,1,0,0,0,22,23,7,0,0,0,23,5,1,0,0,0,
  	24,29,5,13,0,0,25,29,5,12,0,0,26,29,5,14,0,0,27,29,1,0,0,0,28,24,1,0,
  	0,0,28,25,1,0,0,0,28,26,1,0,0,0,28,27,1,0,0,0,29,7,1,0,0,0,30,31,5,8,
  	0,0,31,32,5,14,0,0,32,37,5,11,0,0,33,34,3,2,1,0,34,35,5,11,0,0,35,37,
  	1,0,0,0,36,30,1,0,0,0,36,33,1,0,0,0,37,9,1,0,0,0,3,13,28,36
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  vmparserParserStaticData = staticData.release();
}

}

VMParser::VMParser(TokenStream *input) : VMParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

VMParser::VMParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  VMParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *vmparserParserStaticData->atn, vmparserParserStaticData->decisionToDFA, vmparserParserStaticData->sharedContextCache, options);
}

VMParser::~VMParser() {
  delete _interpreter;
}

const atn::ATN& VMParser::getATN() const {
  return *vmparserParserStaticData->atn;
}

std::string VMParser::getGrammarFileName() const {
  return "VMParser.g4";
}

const std::vector<std::string>& VMParser::getRuleNames() const {
  return vmparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& VMParser::getVocabulary() const {
  return vmparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView VMParser::getSerializedATN() const {
  return vmparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

VMParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::ProgramContext::EOF() {
  return getToken(VMParser::EOF, 0);
}

std::vector<VMParser::InstructionContext *> VMParser::ProgramContext::instruction() {
  return getRuleContexts<VMParser::InstructionContext>();
}

VMParser::InstructionContext* VMParser::ProgramContext::instruction(size_t i) {
  return getRuleContext<VMParser::InstructionContext>(i);
}


size_t VMParser::ProgramContext::getRuleIndex() const {
  return VMParser::RuleProgram;
}


VMParser::ProgramContext* VMParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, VMParser::RuleProgram);
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
    setState(13);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 266) != 0)) {
      setState(10);
      instruction();
      setState(15);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(16);
    match(VMParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

VMParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VMParser::Asm_instContext* VMParser::ExprContext::asm_inst() {
  return getRuleContext<VMParser::Asm_instContext>(0);
}

std::vector<VMParser::OpContext *> VMParser::ExprContext::op() {
  return getRuleContexts<VMParser::OpContext>();
}

VMParser::OpContext* VMParser::ExprContext::op(size_t i) {
  return getRuleContext<VMParser::OpContext>(i);
}


size_t VMParser::ExprContext::getRuleIndex() const {
  return VMParser::RuleExpr;
}


VMParser::ExprContext* VMParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 2, VMParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    asm_inst();
    setState(19);
    op();
    setState(20);
    op();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Asm_instContext ------------------------------------------------------------------

VMParser::Asm_instContext::Asm_instContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::Asm_instContext::ADD() {
  return getToken(VMParser::ADD, 0);
}

tree::TerminalNode* VMParser::Asm_instContext::WSTR() {
  return getToken(VMParser::WSTR, 0);
}


size_t VMParser::Asm_instContext::getRuleIndex() const {
  return VMParser::RuleAsm_inst;
}


VMParser::Asm_instContext* VMParser::asm_inst() {
  Asm_instContext *_localctx = _tracker.createInstance<Asm_instContext>(_ctx, getState());
  enterRule(_localctx, 4, VMParser::RuleAsm_inst);
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
    setState(22);
    _la = _input->LA(1);
    if (!(_la == VMParser::ADD

    || _la == VMParser::WSTR)) {
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

//----------------- OpContext ------------------------------------------------------------------

VMParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::OpContext::DVAL() {
  return getToken(VMParser::DVAL, 0);
}

tree::TerminalNode* VMParser::OpContext::REGISTER() {
  return getToken(VMParser::REGISTER, 0);
}

tree::TerminalNode* VMParser::OpContext::STRING_LITERAL() {
  return getToken(VMParser::STRING_LITERAL, 0);
}


size_t VMParser::OpContext::getRuleIndex() const {
  return VMParser::RuleOp;
}


VMParser::OpContext* VMParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 6, VMParser::RuleOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(28);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(24);
      match(VMParser::DVAL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(25);
      match(VMParser::REGISTER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(26);
      match(VMParser::STRING_LITERAL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

VMParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::InstructionContext::SEMI() {
  return getToken(VMParser::SEMI, 0);
}

tree::TerminalNode* VMParser::InstructionContext::STRING_LITERAL() {
  return getToken(VMParser::STRING_LITERAL, 0);
}

tree::TerminalNode* VMParser::InstructionContext::NEWLINE() {
  return getToken(VMParser::NEWLINE, 0);
}

VMParser::ExprContext* VMParser::InstructionContext::expr() {
  return getRuleContext<VMParser::ExprContext>(0);
}


size_t VMParser::InstructionContext::getRuleIndex() const {
  return VMParser::RuleInstruction;
}


VMParser::InstructionContext* VMParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 8, VMParser::RuleInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VMParser::SEMI: {
        enterOuterAlt(_localctx, 1);
        setState(30);
        match(VMParser::SEMI);
        setState(31);
        match(VMParser::STRING_LITERAL);
        setState(32);
        match(VMParser::NEWLINE);
        break;
      }

      case VMParser::ADD:
      case VMParser::WSTR: {
        enterOuterAlt(_localctx, 2);
        setState(33);
        expr();
        setState(34);
        match(VMParser::NEWLINE);
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

void VMParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  vmparserParserInitialize();
#else
  ::antlr4::internal::call_once(vmparserParserOnceFlag, vmparserParserInitialize);
#endif
}
