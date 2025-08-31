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
		CPARENT=11, HASH=12, MINUS=13, COLON=14, RREGISTER=15, GBREGISTER=16, 
		LBREGISTER=17, STRING_LITERAL=18, INT=19, ID=20, COMMENT=21, WS=22, NEWLINE=23;
	public static final int
		RULE_program = 0, RULE_line = 1, RULE_instruction_line = 2, RULE_label_definition = 3, 
		RULE_instruction = 4, RULE_opcode = 5, RULE_operand = 6, RULE_register = 7, 
		RULE_memory_address = 8, RULE_immediate = 9, RULE_label = 10;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "line", "instruction_line", "label_definition", "instruction", 
			"opcode", "operand", "register", "memory_address", "immediate", "label"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'ADD'", "'SUB'", "'WSTR'", "'LOAD'", "'CMP'", "'BEQ'", "'WINT'", 
			"'WNL'", "','", "'('", "')'", "'#'", "'-'", "':'", null, "'GB'", "'LB'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "ADD", "SUB", "WSTR", "LOAD", "CMP", "BEQ", "WINT", "WNL", "COMMA", 
			"OPARENT", "CPARENT", "HASH", "MINUS", "COLON", "RREGISTER", "GBREGISTER", 
			"LBREGISTER", "STRING_LITERAL", "INT", "ID", "COMMENT", "WS", "NEWLINE"
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
		public Instruction_lineContext instruction_line() {
			return getRuleContext(Instruction_lineContext.class,0);
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
			setState(25);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(22);
					line();
					}
					} 
				}
				setState(27);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(29);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 510L) != 0)) {
				{
				setState(28);
				instruction_line();
				}
			}

			setState(31);
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
		public Label_definitionContext label_definition() {
			return getRuleContext(Label_definitionContext.class,0);
		}
		public Instruction_lineContext instruction_line() {
			return getRuleContext(Instruction_lineContext.class,0);
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
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(35);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(33);
				label_definition();
				}
				break;
			case ADD:
			case SUB:
			case WSTR:
			case LOAD:
			case CMP:
			case BEQ:
			case WINT:
			case WNL:
				{
				setState(34);
				instruction_line();
				}
				break;
			case NEWLINE:
				break;
			default:
				break;
			}
			setState(38); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(37);
					match(NEWLINE);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(40); 
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
	public static class Instruction_lineContext extends ParserRuleContext {
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public Instruction_lineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction_line; }
	}

	public final Instruction_lineContext instruction_line() throws RecognitionException {
		Instruction_lineContext _localctx = new Instruction_lineContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_instruction_line);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(42);
			instruction();
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
	public static class Label_definitionContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(VMGrammarParser.ID, 0); }
		public TerminalNode COLON() { return getToken(VMGrammarParser.COLON, 0); }
		public Label_definitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_label_definition; }
	}

	public final Label_definitionContext label_definition() throws RecognitionException {
		Label_definitionContext _localctx = new Label_definitionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_label_definition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(44);
			match(ID);
			setState(45);
			match(COLON);
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
		enterRule(_localctx, 8, RULE_instruction);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(47);
			opcode();
			setState(53);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2077696L) != 0)) {
				{
				setState(48);
				operand();
				setState(51);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(49);
					match(COMMA);
					setState(50);
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
		enterRule(_localctx, 10, RULE_opcode);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(55);
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
		public RegisterContext register() {
			return getRuleContext(RegisterContext.class,0);
		}
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
		enterRule(_localctx, 12, RULE_operand);
		try {
			setState(62);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPARENT:
			case MINUS:
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(57);
				memory_address();
				}
				break;
			case HASH:
				enterOuterAlt(_localctx, 2);
				{
				setState(58);
				immediate();
				}
				break;
			case RREGISTER:
			case GBREGISTER:
			case LBREGISTER:
				enterOuterAlt(_localctx, 3);
				{
				setState(59);
				register();
				}
				break;
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(60);
				match(STRING_LITERAL);
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 5);
				{
				setState(61);
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
	public static class RegisterContext extends ParserRuleContext {
		public TerminalNode RREGISTER() { return getToken(VMGrammarParser.RREGISTER, 0); }
		public TerminalNode GBREGISTER() { return getToken(VMGrammarParser.GBREGISTER, 0); }
		public TerminalNode LBREGISTER() { return getToken(VMGrammarParser.LBREGISTER, 0); }
		public RegisterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_register; }
	}

	public final RegisterContext register() throws RecognitionException {
		RegisterContext _localctx = new RegisterContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_register);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(64);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 229376L) != 0)) ) {
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
	public static class Memory_addressContext extends ParserRuleContext {
		public TerminalNode OPARENT() { return getToken(VMGrammarParser.OPARENT, 0); }
		public RegisterContext register() {
			return getRuleContext(RegisterContext.class,0);
		}
		public TerminalNode CPARENT() { return getToken(VMGrammarParser.CPARENT, 0); }
		public TerminalNode INT() { return getToken(VMGrammarParser.INT, 0); }
		public TerminalNode MINUS() { return getToken(VMGrammarParser.MINUS, 0); }
		public Memory_addressContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memory_address; }
	}

	public final Memory_addressContext memory_address() throws RecognitionException {
		Memory_addressContext _localctx = new Memory_addressContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_memory_address);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==MINUS || _la==INT) {
				{
				setState(67);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(66);
					match(MINUS);
					}
				}

				setState(69);
				match(INT);
				}
			}

			setState(72);
			match(OPARENT);
			setState(73);
			register();
			setState(74);
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
		enterRule(_localctx, 18, RULE_immediate);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			match(HASH);
			setState(77);
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
		enterRule(_localctx, 20, RULE_label);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
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
		"\u0004\u0001\u0017R\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0001\u0000\u0005\u0000\u0018"+
		"\b\u0000\n\u0000\f\u0000\u001b\t\u0000\u0001\u0000\u0003\u0000\u001e\b"+
		"\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0003\u0001$\b"+
		"\u0001\u0001\u0001\u0004\u0001\'\b\u0001\u000b\u0001\f\u0001(\u0001\u0002"+
		"\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0003\u00044\b\u0004\u0003\u00046\b\u0004\u0001"+
		"\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0003\u0006?\b\u0006\u0001\u0007\u0001\u0007\u0001\b\u0003\bD\b"+
		"\b\u0001\b\u0003\bG\b\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\t\u0001"+
		"\t\u0001\t\u0001\n\u0001\n\u0001\n\u0000\u0000\u000b\u0000\u0002\u0004"+
		"\u0006\b\n\f\u000e\u0010\u0012\u0014\u0000\u0003\u0001\u0000\u0001\b\u0001"+
		"\u0000\u000f\u0011\u0001\u0000\u0013\u0014S\u0000\u0019\u0001\u0000\u0000"+
		"\u0000\u0002#\u0001\u0000\u0000\u0000\u0004*\u0001\u0000\u0000\u0000\u0006"+
		",\u0001\u0000\u0000\u0000\b/\u0001\u0000\u0000\u0000\n7\u0001\u0000\u0000"+
		"\u0000\f>\u0001\u0000\u0000\u0000\u000e@\u0001\u0000\u0000\u0000\u0010"+
		"F\u0001\u0000\u0000\u0000\u0012L\u0001\u0000\u0000\u0000\u0014O\u0001"+
		"\u0000\u0000\u0000\u0016\u0018\u0003\u0002\u0001\u0000\u0017\u0016\u0001"+
		"\u0000\u0000\u0000\u0018\u001b\u0001\u0000\u0000\u0000\u0019\u0017\u0001"+
		"\u0000\u0000\u0000\u0019\u001a\u0001\u0000\u0000\u0000\u001a\u001d\u0001"+
		"\u0000\u0000\u0000\u001b\u0019\u0001\u0000\u0000\u0000\u001c\u001e\u0003"+
		"\u0004\u0002\u0000\u001d\u001c\u0001\u0000\u0000\u0000\u001d\u001e\u0001"+
		"\u0000\u0000\u0000\u001e\u001f\u0001\u0000\u0000\u0000\u001f \u0005\u0000"+
		"\u0000\u0001 \u0001\u0001\u0000\u0000\u0000!$\u0003\u0006\u0003\u0000"+
		"\"$\u0003\u0004\u0002\u0000#!\u0001\u0000\u0000\u0000#\"\u0001\u0000\u0000"+
		"\u0000#$\u0001\u0000\u0000\u0000$&\u0001\u0000\u0000\u0000%\'\u0005\u0017"+
		"\u0000\u0000&%\u0001\u0000\u0000\u0000\'(\u0001\u0000\u0000\u0000(&\u0001"+
		"\u0000\u0000\u0000()\u0001\u0000\u0000\u0000)\u0003\u0001\u0000\u0000"+
		"\u0000*+\u0003\b\u0004\u0000+\u0005\u0001\u0000\u0000\u0000,-\u0005\u0014"+
		"\u0000\u0000-.\u0005\u000e\u0000\u0000.\u0007\u0001\u0000\u0000\u0000"+
		"/5\u0003\n\u0005\u000003\u0003\f\u0006\u000012\u0005\t\u0000\u000024\u0003"+
		"\f\u0006\u000031\u0001\u0000\u0000\u000034\u0001\u0000\u0000\u000046\u0001"+
		"\u0000\u0000\u000050\u0001\u0000\u0000\u000056\u0001\u0000\u0000\u0000"+
		"6\t\u0001\u0000\u0000\u000078\u0007\u0000\u0000\u00008\u000b\u0001\u0000"+
		"\u0000\u00009?\u0003\u0010\b\u0000:?\u0003\u0012\t\u0000;?\u0003\u000e"+
		"\u0007\u0000<?\u0005\u0012\u0000\u0000=?\u0003\u0014\n\u0000>9\u0001\u0000"+
		"\u0000\u0000>:\u0001\u0000\u0000\u0000>;\u0001\u0000\u0000\u0000><\u0001"+
		"\u0000\u0000\u0000>=\u0001\u0000\u0000\u0000?\r\u0001\u0000\u0000\u0000"+
		"@A\u0007\u0001\u0000\u0000A\u000f\u0001\u0000\u0000\u0000BD\u0005\r\u0000"+
		"\u0000CB\u0001\u0000\u0000\u0000CD\u0001\u0000\u0000\u0000DE\u0001\u0000"+
		"\u0000\u0000EG\u0005\u0013\u0000\u0000FC\u0001\u0000\u0000\u0000FG\u0001"+
		"\u0000\u0000\u0000GH\u0001\u0000\u0000\u0000HI\u0005\n\u0000\u0000IJ\u0003"+
		"\u000e\u0007\u0000JK\u0005\u000b\u0000\u0000K\u0011\u0001\u0000\u0000"+
		"\u0000LM\u0005\f\u0000\u0000MN\u0007\u0002\u0000\u0000N\u0013\u0001\u0000"+
		"\u0000\u0000OP\u0005\u0014\u0000\u0000P\u0015\u0001\u0000\u0000\u0000"+
		"\t\u0019\u001d#(35>CF";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}