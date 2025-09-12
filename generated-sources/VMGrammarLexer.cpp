
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
      "OPP", "MUL", "QUO", "ADD", "SUB", "REM", "WSTR", "LOAD", "CMP", "BEQ", 
      "WINT", "WNL", "HALT", "WFLOAT", "COMMA", "OPARENT", "CPARENT", "HASH", 
      "MINUS", "COLON", "RREGISTER", "GBREGISTER", "LBREGISTER", "STRING_LITERAL", 
      "INT", "ID", "FLOAT", "COMMENT", "WS", "NEWLINE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'OPP'", "'MUL'", "'QUO'", "'ADD'", "'SUB'", "'REM'", "'WSTR'", 
      "'LOAD'", "'CMP'", "'BEQ'", "'WINT'", "'WNL'", "'HALT'", "'WFLOAT'", 
      "','", "'('", "')'", "'#'", "'-'", "':'", "", "'GB'", "'LB'"
    },
    std::vector<std::string>{
      "", "OPP", "MUL", "QUO", "ADD", "SUB", "REM", "WSTR", "LOAD", "CMP", 
      "BEQ", "WINT", "WNL", "HALT", "WFLOAT", "COMMA", "OPARENT", "CPARENT", 
      "HASH", "MINUS", "COLON", "RREGISTER", "GBREGISTER", "LBREGISTER", 
      "STRING_LITERAL", "INT", "ID", "FLOAT", "COMMENT", "WS", "NEWLINE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,30,195,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,3,1,
  	3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,
  	1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,
  	1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,
  	1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,1,23,5,23,
  	150,8,23,10,23,12,23,153,9,23,1,23,1,23,1,24,4,24,158,8,24,11,24,12,24,
  	159,1,25,1,25,5,25,164,8,25,10,25,12,25,167,9,25,1,26,1,26,1,26,1,26,
  	1,27,1,27,5,27,175,8,27,10,27,12,27,178,9,27,1,27,1,27,1,28,4,28,183,
  	8,28,11,28,12,28,184,1,28,1,28,1,29,3,29,190,8,29,1,29,1,29,3,29,194,
  	8,29,0,0,30,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,
  	25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,
  	24,49,25,51,26,53,27,55,28,57,29,59,30,1,0,6,2,0,34,34,92,92,1,0,48,57,
  	3,0,65,90,95,95,97,122,5,0,46,46,48,57,65,90,95,95,97,122,2,0,10,10,13,
  	13,2,0,9,9,32,32,202,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,
  	0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,
  	1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,1,61,1,0,
  	0,0,3,65,1,0,0,0,5,69,1,0,0,0,7,73,1,0,0,0,9,77,1,0,0,0,11,81,1,0,0,0,
  	13,85,1,0,0,0,15,90,1,0,0,0,17,95,1,0,0,0,19,99,1,0,0,0,21,103,1,0,0,
  	0,23,108,1,0,0,0,25,112,1,0,0,0,27,117,1,0,0,0,29,124,1,0,0,0,31,126,
  	1,0,0,0,33,128,1,0,0,0,35,130,1,0,0,0,37,132,1,0,0,0,39,134,1,0,0,0,41,
  	136,1,0,0,0,43,139,1,0,0,0,45,142,1,0,0,0,47,145,1,0,0,0,49,157,1,0,0,
  	0,51,161,1,0,0,0,53,168,1,0,0,0,55,172,1,0,0,0,57,182,1,0,0,0,59,193,
  	1,0,0,0,61,62,5,79,0,0,62,63,5,80,0,0,63,64,5,80,0,0,64,2,1,0,0,0,65,
  	66,5,77,0,0,66,67,5,85,0,0,67,68,5,76,0,0,68,4,1,0,0,0,69,70,5,81,0,0,
  	70,71,5,85,0,0,71,72,5,79,0,0,72,6,1,0,0,0,73,74,5,65,0,0,74,75,5,68,
  	0,0,75,76,5,68,0,0,76,8,1,0,0,0,77,78,5,83,0,0,78,79,5,85,0,0,79,80,5,
  	66,0,0,80,10,1,0,0,0,81,82,5,82,0,0,82,83,5,69,0,0,83,84,5,77,0,0,84,
  	12,1,0,0,0,85,86,5,87,0,0,86,87,5,83,0,0,87,88,5,84,0,0,88,89,5,82,0,
  	0,89,14,1,0,0,0,90,91,5,76,0,0,91,92,5,79,0,0,92,93,5,65,0,0,93,94,5,
  	68,0,0,94,16,1,0,0,0,95,96,5,67,0,0,96,97,5,77,0,0,97,98,5,80,0,0,98,
  	18,1,0,0,0,99,100,5,66,0,0,100,101,5,69,0,0,101,102,5,81,0,0,102,20,1,
  	0,0,0,103,104,5,87,0,0,104,105,5,73,0,0,105,106,5,78,0,0,106,107,5,84,
  	0,0,107,22,1,0,0,0,108,109,5,87,0,0,109,110,5,78,0,0,110,111,5,76,0,0,
  	111,24,1,0,0,0,112,113,5,72,0,0,113,114,5,65,0,0,114,115,5,76,0,0,115,
  	116,5,84,0,0,116,26,1,0,0,0,117,118,5,87,0,0,118,119,5,70,0,0,119,120,
  	5,76,0,0,120,121,5,79,0,0,121,122,5,65,0,0,122,123,5,84,0,0,123,28,1,
  	0,0,0,124,125,5,44,0,0,125,30,1,0,0,0,126,127,5,40,0,0,127,32,1,0,0,0,
  	128,129,5,41,0,0,129,34,1,0,0,0,130,131,5,35,0,0,131,36,1,0,0,0,132,133,
  	5,45,0,0,133,38,1,0,0,0,134,135,5,58,0,0,135,40,1,0,0,0,136,137,5,82,
  	0,0,137,138,3,49,24,0,138,42,1,0,0,0,139,140,5,71,0,0,140,141,5,66,0,
  	0,141,44,1,0,0,0,142,143,5,76,0,0,143,144,5,66,0,0,144,46,1,0,0,0,145,
  	151,5,34,0,0,146,150,8,0,0,0,147,148,5,92,0,0,148,150,9,0,0,0,149,146,
  	1,0,0,0,149,147,1,0,0,0,150,153,1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,
  	0,152,154,1,0,0,0,153,151,1,0,0,0,154,155,5,34,0,0,155,48,1,0,0,0,156,
  	158,7,1,0,0,157,156,1,0,0,0,158,159,1,0,0,0,159,157,1,0,0,0,159,160,1,
  	0,0,0,160,50,1,0,0,0,161,165,7,2,0,0,162,164,7,3,0,0,163,162,1,0,0,0,
  	164,167,1,0,0,0,165,163,1,0,0,0,165,166,1,0,0,0,166,52,1,0,0,0,167,165,
  	1,0,0,0,168,169,3,49,24,0,169,170,5,46,0,0,170,171,3,49,24,0,171,54,1,
  	0,0,0,172,176,5,59,0,0,173,175,8,4,0,0,174,173,1,0,0,0,175,178,1,0,0,
  	0,176,174,1,0,0,0,176,177,1,0,0,0,177,179,1,0,0,0,178,176,1,0,0,0,179,
  	180,6,27,0,0,180,56,1,0,0,0,181,183,7,5,0,0,182,181,1,0,0,0,183,184,1,
  	0,0,0,184,182,1,0,0,0,184,185,1,0,0,0,185,186,1,0,0,0,186,187,6,28,0,
  	0,187,58,1,0,0,0,188,190,5,13,0,0,189,188,1,0,0,0,189,190,1,0,0,0,190,
  	191,1,0,0,0,191,194,5,10,0,0,192,194,5,13,0,0,193,189,1,0,0,0,193,192,
  	1,0,0,0,194,60,1,0,0,0,9,0,149,151,159,165,176,184,189,193,1,6,0,0
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
