
// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.2


#include "VMGrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct VMGrammarLexerStaticData final {
  VMGrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  VMGrammarLexerStaticData(const VMGrammarLexerStaticData&) = delete;
  VMGrammarLexerStaticData(VMGrammarLexerStaticData&&) = delete;
  VMGrammarLexerStaticData& operator=(const VMGrammarLexerStaticData&) = delete;
  VMGrammarLexerStaticData& operator=(VMGrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag vmgrammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<VMGrammarLexerStaticData> vmgrammarlexerLexerStaticData = nullptr;

void vmgrammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (vmgrammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(vmgrammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<VMGrammarLexerStaticData>(
    std::vector<std::string>{
      "ADD", "SUB", "WSTR", "LOAD", "CMP", "BEQ", "WINT", "WNL", "COMMA", 
      "OPARENT", "CPARENT", "HASH", "MINUS", "REGISTER", "STRING_LITERAL", 
      "INT", "ID", "COMMENT", "WS", "NEWLINE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,20,135,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,0,1,
  	0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,
  	1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,9,1,
  	9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,14,5,
  	14,94,8,14,10,14,12,14,97,9,14,1,14,1,14,1,15,4,15,102,8,15,11,15,12,
  	15,103,1,16,1,16,5,16,108,8,16,10,16,12,16,111,9,16,1,17,1,17,5,17,115,
  	8,17,10,17,12,17,118,9,17,1,17,1,17,1,18,4,18,123,8,18,11,18,12,18,124,
  	1,18,1,18,1,19,3,19,130,8,19,1,19,1,19,3,19,134,8,19,0,0,20,1,1,3,2,5,
  	3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,1,0,6,2,0,34,34,92,92,1,0,48,57,3,0,65,90,
  	95,95,97,122,4,0,48,57,65,90,95,95,97,122,2,0,10,10,13,13,2,0,9,9,32,
  	32,142,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,1,41,1,0,0,0,3,
  	45,1,0,0,0,5,49,1,0,0,0,7,54,1,0,0,0,9,59,1,0,0,0,11,63,1,0,0,0,13,67,
  	1,0,0,0,15,72,1,0,0,0,17,76,1,0,0,0,19,78,1,0,0,0,21,80,1,0,0,0,23,82,
  	1,0,0,0,25,84,1,0,0,0,27,86,1,0,0,0,29,89,1,0,0,0,31,101,1,0,0,0,33,105,
  	1,0,0,0,35,112,1,0,0,0,37,122,1,0,0,0,39,133,1,0,0,0,41,42,5,65,0,0,42,
  	43,5,68,0,0,43,44,5,68,0,0,44,2,1,0,0,0,45,46,5,83,0,0,46,47,5,85,0,0,
  	47,48,5,66,0,0,48,4,1,0,0,0,49,50,5,87,0,0,50,51,5,83,0,0,51,52,5,84,
  	0,0,52,53,5,82,0,0,53,6,1,0,0,0,54,55,5,76,0,0,55,56,5,79,0,0,56,57,5,
  	65,0,0,57,58,5,68,0,0,58,8,1,0,0,0,59,60,5,67,0,0,60,61,5,77,0,0,61,62,
  	5,80,0,0,62,10,1,0,0,0,63,64,5,66,0,0,64,65,5,69,0,0,65,66,5,81,0,0,66,
  	12,1,0,0,0,67,68,5,87,0,0,68,69,5,73,0,0,69,70,5,78,0,0,70,71,5,84,0,
  	0,71,14,1,0,0,0,72,73,5,87,0,0,73,74,5,78,0,0,74,75,5,76,0,0,75,16,1,
  	0,0,0,76,77,5,44,0,0,77,18,1,0,0,0,78,79,5,40,0,0,79,20,1,0,0,0,80,81,
  	5,41,0,0,81,22,1,0,0,0,82,83,5,35,0,0,83,24,1,0,0,0,84,85,5,45,0,0,85,
  	26,1,0,0,0,86,87,5,82,0,0,87,88,3,31,15,0,88,28,1,0,0,0,89,95,5,34,0,
  	0,90,94,8,0,0,0,91,92,5,92,0,0,92,94,9,0,0,0,93,90,1,0,0,0,93,91,1,0,
  	0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,98,1,0,0,0,97,95,1,0,
  	0,0,98,99,5,34,0,0,99,30,1,0,0,0,100,102,7,1,0,0,101,100,1,0,0,0,102,
  	103,1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,32,1,0,0,0,105,109,7,
  	2,0,0,106,108,7,3,0,0,107,106,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,
  	109,110,1,0,0,0,110,34,1,0,0,0,111,109,1,0,0,0,112,116,5,59,0,0,113,115,
  	8,4,0,0,114,113,1,0,0,0,115,118,1,0,0,0,116,114,1,0,0,0,116,117,1,0,0,
  	0,117,119,1,0,0,0,118,116,1,0,0,0,119,120,6,17,0,0,120,36,1,0,0,0,121,
  	123,7,5,0,0,122,121,1,0,0,0,123,124,1,0,0,0,124,122,1,0,0,0,124,125,1,
  	0,0,0,125,126,1,0,0,0,126,127,6,18,0,0,127,38,1,0,0,0,128,130,5,13,0,
  	0,129,128,1,0,0,0,129,130,1,0,0,0,130,131,1,0,0,0,131,134,5,10,0,0,132,
  	134,5,13,0,0,133,129,1,0,0,0,133,132,1,0,0,0,134,40,1,0,0,0,9,0,93,95,
  	103,109,116,124,129,133,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  vmgrammarlexerLexerStaticData = std::move(staticData);
}

}

VMGrammarLexer::VMGrammarLexer(CharStream *input) : Lexer(input) {
  VMGrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *vmgrammarlexerLexerStaticData->atn, vmgrammarlexerLexerStaticData->decisionToDFA, vmgrammarlexerLexerStaticData->sharedContextCache);
}

VMGrammarLexer::~VMGrammarLexer() {
  delete _interpreter;
}

std::string VMGrammarLexer::getGrammarFileName() const {
  return "VMGrammar.g4";
}

const std::vector<std::string>& VMGrammarLexer::getRuleNames() const {
  return vmgrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& VMGrammarLexer::getChannelNames() const {
  return vmgrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& VMGrammarLexer::getModeNames() const {
  return vmgrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& VMGrammarLexer::getVocabulary() const {
  return vmgrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView VMGrammarLexer::getSerializedATN() const {
  return vmgrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& VMGrammarLexer::getATN() const {
  return *vmgrammarlexerLexerStaticData->atn;
}




void VMGrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  vmgrammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(vmgrammarlexerLexerOnceFlag, vmgrammarlexerLexerInitialize);
#endif
}
