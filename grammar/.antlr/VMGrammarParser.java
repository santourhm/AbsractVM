// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class VMGrammarParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		ADD=1, SUB=2, WSTR=3, LOAD=4, CMP=5, BEQ=6, WINT=7, WNL=8, COMMA=9, OPARENT=10, 
		CPARENT=11, HASH=12, MINUS=13, REGISTER=14, STRING_LITERAL=15, INT=16, 
		ID=17, COMMENT=18, WS=19, NEWLINE=20;
	public static final int
		RULE_program = 0, RULE_line = 1, RULE_instruction = 2, RULE_opcode = 3, 
		RULE_operand = 4, RULE_memory_address = 5, RULE_immediate = 6, RULE_label = 7;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "line", "instruction", "opcode", "operand", "memory_address", 
			"immediate", "label"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'ADD'", "'SUB'", "'WSTR'", "'LOAD'", "'CMP'", "'BEQ'", "'WINT'", 
			"'WNL'", "','", "'('", "')'", "'#'", "'-'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "ADD", "SUB", "WSTR", "LOAD", "CMP", "BEQ", "WINT", "WNL", "COMMA", 
			"OPARENT", "CPARENT", "HASH", "MINUS", "REGISTER", "STRING_LITERAL", 
			"INT", "ID", "COMMENT", "WS", "NEWLINE"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "VMGrammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public VMGrammarParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(VMGrammarParser.EOF, 0); }
		public List<LineContext> line() {
			return getRuleContexts(LineContext.class);
		}
		public LineContext line(int i) {
			return getRuleContext(LineContext.class,i);
		}
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(19);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(16);
					line();
					}
					} 
				}
				setState(21);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(23);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 510L) != 0)) {
				{
				setState(22);
				instruction();
				}
			}

			setState(25);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LineContext extends ParserRuleContext {
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public List<TerminalNode> NEWLINE() { return getTokens(VMGrammarParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(VMGrammarParser.NEWLINE, i);
		}
		public LineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line; }
	}

	public final LineContext line() throws RecognitionException {
		LineContext _localctx = new LineContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_line);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(28);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 510L) != 0)) {
				{
				setState(27);
				instruction();
				}
			}

			setState(31); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(30);
					match(NEWLINE);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(33); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class InstructionContext extends ParserRuleContext {
		public OpcodeContext opcode() {
			return getRuleContext(OpcodeContext.class,0);
		}
		public List<OperandContext> operand() {
			return getRuleContexts(OperandContext.class);
		}
		public OperandContext operand(int i) {
			return getRuleContext(OperandContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(VMGrammarParser.COMMA, 0); }
		public InstructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction; }
	}

	public final InstructionContext instruction() throws RecognitionException {
		InstructionContext _localctx = new InstructionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_instruction);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(35);
			opcode();
			setState(41);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 259072L) != 0)) {
				{
				setState(36);
				operand();
				setState(39);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(37);
					match(COMMA);
					setState(38);
					operand();
					}
				}

				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OpcodeContext extends ParserRuleContext {
		public TerminalNode ADD() { return getToken(VMGrammarParser.ADD, 0); }
		public TerminalNode SUB() { return getToken(VMGrammarParser.SUB, 0); }
		public TerminalNode WSTR() { return getToken(VMGrammarParser.WSTR, 0); }
		public TerminalNode LOAD() { return getToken(VMGrammarParser.LOAD, 0); }
		public TerminalNode CMP() { return getToken(VMGrammarParser.CMP, 0); }
		public TerminalNode BEQ() { return getToken(VMGrammarParser.BEQ, 0); }
		public TerminalNode WINT() { return getToken(VMGrammarParser.WINT, 0); }
		public TerminalNode WNL() { return getToken(VMGrammarParser.WNL, 0); }
		public OpcodeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_opcode; }
	}

	public final OpcodeContext opcode() throws RecognitionException {
		OpcodeContext _localctx = new OpcodeContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_opcode);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(43);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 510L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OperandContext extends ParserRuleContext {
		public Memory_addressContext memory_address() {
			return getRuleContext(Memory_addressContext.class,0);
		}
		public ImmediateContext immediate() {
			return getRuleContext(ImmediateContext.class,0);
		}
		public TerminalNode REGISTER() { return getToken(VMGrammarParser.REGISTER, 0); }
		public TerminalNode STRING_LITERAL() { return getToken(VMGrammarParser.STRING_LITERAL, 0); }
		public LabelContext label() {
			return getRuleContext(LabelContext.class,0);
		}
		public OperandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operand; }
	}

	public final OperandContext operand() throws RecognitionException {
		OperandContext _localctx = new OperandContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_operand);
		try {
			setState(50);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPARENT:
			case MINUS:
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(45);
				memory_address();
				}
				break;
			case HASH:
				enterOuterAlt(_localctx, 2);
				{
				setState(46);
				immediate();
				}
				break;
			case REGISTER:
				enterOuterAlt(_localctx, 3);
				{
				setState(47);
				match(REGISTER);
				}
				break;
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(48);
				match(STRING_LITERAL);
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 5);
				{
				setState(49);
				label();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Memory_addressContext extends ParserRuleContext {
		public TerminalNode OPARENT() { return getToken(VMGrammarParser.OPARENT, 0); }
		public TerminalNode CPARENT() { return getToken(VMGrammarParser.CPARENT, 0); }
		public TerminalNode REGISTER() { return getToken(VMGrammarParser.REGISTER, 0); }
		public TerminalNode ID() { return getToken(VMGrammarParser.ID, 0); }
		public TerminalNode INT() { return getToken(VMGrammarParser.INT, 0); }
		public TerminalNode MINUS() { return getToken(VMGrammarParser.MINUS, 0); }
		public Memory_addressContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memory_address; }
	}

	public final Memory_addressContext memory_address() throws RecognitionException {
		Memory_addressContext _localctx = new Memory_addressContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_memory_address);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(56);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==MINUS || _la==INT) {
				{
				setState(53);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(52);
					match(MINUS);
					}
				}

				setState(55);
				match(INT);
				}
			}

			setState(58);
			match(OPARENT);
			setState(59);
			_la = _input.LA(1);
			if ( !(_la==REGISTER || _la==ID) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(60);
			match(CPARENT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ImmediateContext extends ParserRuleContext {
		public TerminalNode HASH() { return getToken(VMGrammarParser.HASH, 0); }
		public TerminalNode INT() { return getToken(VMGrammarParser.INT, 0); }
		public TerminalNode ID() { return getToken(VMGrammarParser.ID, 0); }
		public ImmediateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_immediate; }
	}

	public final ImmediateContext immediate() throws RecognitionException {
		ImmediateContext _localctx = new ImmediateContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_immediate);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(62);
			match(HASH);
			setState(63);
			_la = _input.LA(1);
			if ( !(_la==INT || _la==ID) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LabelContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(VMGrammarParser.ID, 0); }
		public LabelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_label; }
	}

	public final LabelContext label() throws RecognitionException {
		LabelContext _localctx = new LabelContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_label);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u0014D\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0001"+
		"\u0000\u0005\u0000\u0012\b\u0000\n\u0000\f\u0000\u0015\t\u0000\u0001\u0000"+
		"\u0003\u0000\u0018\b\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0003\u0001"+
		"\u001d\b\u0001\u0001\u0001\u0004\u0001 \b\u0001\u000b\u0001\f\u0001!\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002(\b\u0002\u0003"+
		"\u0002*\b\u0002\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0003\u00043\b\u0004\u0001\u0005\u0003"+
		"\u00056\b\u0005\u0001\u0005\u0003\u00059\b\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0000\u0000\b\u0000\u0002\u0004\u0006\b\n\f\u000e"+
		"\u0000\u0003\u0001\u0000\u0001\b\u0002\u0000\u000e\u000e\u0011\u0011\u0001"+
		"\u0000\u0010\u0011G\u0000\u0013\u0001\u0000\u0000\u0000\u0002\u001c\u0001"+
		"\u0000\u0000\u0000\u0004#\u0001\u0000\u0000\u0000\u0006+\u0001\u0000\u0000"+
		"\u0000\b2\u0001\u0000\u0000\u0000\n8\u0001\u0000\u0000\u0000\f>\u0001"+
		"\u0000\u0000\u0000\u000eA\u0001\u0000\u0000\u0000\u0010\u0012\u0003\u0002"+
		"\u0001\u0000\u0011\u0010\u0001\u0000\u0000\u0000\u0012\u0015\u0001\u0000"+
		"\u0000\u0000\u0013\u0011\u0001\u0000\u0000\u0000\u0013\u0014\u0001\u0000"+
		"\u0000\u0000\u0014\u0017\u0001\u0000\u0000\u0000\u0015\u0013\u0001\u0000"+
		"\u0000\u0000\u0016\u0018\u0003\u0004\u0002\u0000\u0017\u0016\u0001\u0000"+
		"\u0000\u0000\u0017\u0018\u0001\u0000\u0000\u0000\u0018\u0019\u0001\u0000"+
		"\u0000\u0000\u0019\u001a\u0005\u0000\u0000\u0001\u001a\u0001\u0001\u0000"+
		"\u0000\u0000\u001b\u001d\u0003\u0004\u0002\u0000\u001c\u001b\u0001\u0000"+
		"\u0000\u0000\u001c\u001d\u0001\u0000\u0000\u0000\u001d\u001f\u0001\u0000"+
		"\u0000\u0000\u001e \u0005\u0014\u0000\u0000\u001f\u001e\u0001\u0000\u0000"+
		"\u0000 !\u0001\u0000\u0000\u0000!\u001f\u0001\u0000\u0000\u0000!\"\u0001"+
		"\u0000\u0000\u0000\"\u0003\u0001\u0000\u0000\u0000#)\u0003\u0006\u0003"+
		"\u0000$\'\u0003\b\u0004\u0000%&\u0005\t\u0000\u0000&(\u0003\b\u0004\u0000"+
		"\'%\u0001\u0000\u0000\u0000\'(\u0001\u0000\u0000\u0000(*\u0001\u0000\u0000"+
		"\u0000)$\u0001\u0000\u0000\u0000)*\u0001\u0000\u0000\u0000*\u0005\u0001"+
		"\u0000\u0000\u0000+,\u0007\u0000\u0000\u0000,\u0007\u0001\u0000\u0000"+
		"\u0000-3\u0003\n\u0005\u0000.3\u0003\f\u0006\u0000/3\u0005\u000e\u0000"+
		"\u000003\u0005\u000f\u0000\u000013\u0003\u000e\u0007\u00002-\u0001\u0000"+
		"\u0000\u00002.\u0001\u0000\u0000\u00002/\u0001\u0000\u0000\u000020\u0001"+
		"\u0000\u0000\u000021\u0001\u0000\u0000\u00003\t\u0001\u0000\u0000\u0000"+
		"46\u0005\r\u0000\u000054\u0001\u0000\u0000\u000056\u0001\u0000\u0000\u0000"+
		"67\u0001\u0000\u0000\u000079\u0005\u0010\u0000\u000085\u0001\u0000\u0000"+
		"\u000089\u0001\u0000\u0000\u00009:\u0001\u0000\u0000\u0000:;\u0005\n\u0000"+
		"\u0000;<\u0007\u0001\u0000\u0000<=\u0005\u000b\u0000\u0000=\u000b\u0001"+
		"\u0000\u0000\u0000>?\u0005\f\u0000\u0000?@\u0007\u0002\u0000\u0000@\r"+
		"\u0001\u0000\u0000\u0000AB\u0005\u0011\u0000\u0000B\u000f\u0001\u0000"+
		"\u0000\u0000\t\u0013\u0017\u001c!\')258";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}