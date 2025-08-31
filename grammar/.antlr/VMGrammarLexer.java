// Generated from /home/santourh/abstract-vm-32bits/grammar/VMGrammar.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class VMGrammarLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		ADD=1, SUB=2, WSTR=3, LOAD=4, CMP=5, BEQ=6, WINT=7, WNL=8, COMMA=9, OPARENT=10, 
		CPARENT=11, HASH=12, MINUS=13, COLON=14, RREGISTER=15, GBREGISTER=16, 
		LBREGISTER=17, STRING_LITERAL=18, INT=19, ID=20, COMMENT=21, WS=22, NEWLINE=23;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"ADD", "SUB", "WSTR", "LOAD", "CMP", "BEQ", "WINT", "WNL", "COMMA", "OPARENT", 
			"CPARENT", "HASH", "MINUS", "COLON", "RREGISTER", "GBREGISTER", "LBREGISTER", 
			"STRING_LITERAL", "INT", "ID", "COMMENT", "WS", "NEWLINE"
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


	public VMGrammarLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "VMGrammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u0017\u0095\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\t\u0001\t\u0001"+
		"\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\r\u0001\r\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u0010\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001"+
		"\u0011\u0005\u0011l\b\u0011\n\u0011\f\u0011o\t\u0011\u0001\u0011\u0001"+
		"\u0011\u0001\u0012\u0004\u0012t\b\u0012\u000b\u0012\f\u0012u\u0001\u0013"+
		"\u0001\u0013\u0005\u0013z\b\u0013\n\u0013\f\u0013}\t\u0013\u0001\u0014"+
		"\u0001\u0014\u0005\u0014\u0081\b\u0014\n\u0014\f\u0014\u0084\t\u0014\u0001"+
		"\u0014\u0001\u0014\u0001\u0015\u0004\u0015\u0089\b\u0015\u000b\u0015\f"+
		"\u0015\u008a\u0001\u0015\u0001\u0015\u0001\u0016\u0003\u0016\u0090\b\u0016"+
		"\u0001\u0016\u0001\u0016\u0003\u0016\u0094\b\u0016\u0000\u0000\u0017\u0001"+
		"\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007"+
		"\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d"+
		"\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0014)\u0015+\u0016-\u0017\u0001"+
		"\u0000\u0006\u0002\u0000\"\"\\\\\u0001\u000009\u0003\u0000AZ__az\u0004"+
		"\u000009AZ__az\u0002\u0000\n\n\r\r\u0002\u0000\t\t  \u009c\u0000\u0001"+
		"\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005"+
		"\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001"+
		"\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000"+
		"\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000"+
		"\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000"+
		"\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000"+
		"\u0000\u0000\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000"+
		"\u0000\u0000\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000"+
		"\u0000\u0000#\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000"+
		"\'\u0001\u0000\u0000\u0000\u0000)\u0001\u0000\u0000\u0000\u0000+\u0001"+
		"\u0000\u0000\u0000\u0000-\u0001\u0000\u0000\u0000\u0001/\u0001\u0000\u0000"+
		"\u0000\u00033\u0001\u0000\u0000\u0000\u00057\u0001\u0000\u0000\u0000\u0007"+
		"<\u0001\u0000\u0000\u0000\tA\u0001\u0000\u0000\u0000\u000bE\u0001\u0000"+
		"\u0000\u0000\rI\u0001\u0000\u0000\u0000\u000fN\u0001\u0000\u0000\u0000"+
		"\u0011R\u0001\u0000\u0000\u0000\u0013T\u0001\u0000\u0000\u0000\u0015V"+
		"\u0001\u0000\u0000\u0000\u0017X\u0001\u0000\u0000\u0000\u0019Z\u0001\u0000"+
		"\u0000\u0000\u001b\\\u0001\u0000\u0000\u0000\u001d^\u0001\u0000\u0000"+
		"\u0000\u001fa\u0001\u0000\u0000\u0000!d\u0001\u0000\u0000\u0000#g\u0001"+
		"\u0000\u0000\u0000%s\u0001\u0000\u0000\u0000\'w\u0001\u0000\u0000\u0000"+
		")~\u0001\u0000\u0000\u0000+\u0088\u0001\u0000\u0000\u0000-\u0093\u0001"+
		"\u0000\u0000\u0000/0\u0005A\u0000\u000001\u0005D\u0000\u000012\u0005D"+
		"\u0000\u00002\u0002\u0001\u0000\u0000\u000034\u0005S\u0000\u000045\u0005"+
		"U\u0000\u000056\u0005B\u0000\u00006\u0004\u0001\u0000\u0000\u000078\u0005"+
		"W\u0000\u000089\u0005S\u0000\u00009:\u0005T\u0000\u0000:;\u0005R\u0000"+
		"\u0000;\u0006\u0001\u0000\u0000\u0000<=\u0005L\u0000\u0000=>\u0005O\u0000"+
		"\u0000>?\u0005A\u0000\u0000?@\u0005D\u0000\u0000@\b\u0001\u0000\u0000"+
		"\u0000AB\u0005C\u0000\u0000BC\u0005M\u0000\u0000CD\u0005P\u0000\u0000"+
		"D\n\u0001\u0000\u0000\u0000EF\u0005B\u0000\u0000FG\u0005E\u0000\u0000"+
		"GH\u0005Q\u0000\u0000H\f\u0001\u0000\u0000\u0000IJ\u0005W\u0000\u0000"+
		"JK\u0005I\u0000\u0000KL\u0005N\u0000\u0000LM\u0005T\u0000\u0000M\u000e"+
		"\u0001\u0000\u0000\u0000NO\u0005W\u0000\u0000OP\u0005N\u0000\u0000PQ\u0005"+
		"L\u0000\u0000Q\u0010\u0001\u0000\u0000\u0000RS\u0005,\u0000\u0000S\u0012"+
		"\u0001\u0000\u0000\u0000TU\u0005(\u0000\u0000U\u0014\u0001\u0000\u0000"+
		"\u0000VW\u0005)\u0000\u0000W\u0016\u0001\u0000\u0000\u0000XY\u0005#\u0000"+
		"\u0000Y\u0018\u0001\u0000\u0000\u0000Z[\u0005-\u0000\u0000[\u001a\u0001"+
		"\u0000\u0000\u0000\\]\u0005:\u0000\u0000]\u001c\u0001\u0000\u0000\u0000"+
		"^_\u0005R\u0000\u0000_`\u0003%\u0012\u0000`\u001e\u0001\u0000\u0000\u0000"+
		"ab\u0005G\u0000\u0000bc\u0005B\u0000\u0000c \u0001\u0000\u0000\u0000d"+
		"e\u0005L\u0000\u0000ef\u0005B\u0000\u0000f\"\u0001\u0000\u0000\u0000g"+
		"m\u0005\"\u0000\u0000hl\b\u0000\u0000\u0000ij\u0005\\\u0000\u0000jl\t"+
		"\u0000\u0000\u0000kh\u0001\u0000\u0000\u0000ki\u0001\u0000\u0000\u0000"+
		"lo\u0001\u0000\u0000\u0000mk\u0001\u0000\u0000\u0000mn\u0001\u0000\u0000"+
		"\u0000np\u0001\u0000\u0000\u0000om\u0001\u0000\u0000\u0000pq\u0005\"\u0000"+
		"\u0000q$\u0001\u0000\u0000\u0000rt\u0007\u0001\u0000\u0000sr\u0001\u0000"+
		"\u0000\u0000tu\u0001\u0000\u0000\u0000us\u0001\u0000\u0000\u0000uv\u0001"+
		"\u0000\u0000\u0000v&\u0001\u0000\u0000\u0000w{\u0007\u0002\u0000\u0000"+
		"xz\u0007\u0003\u0000\u0000yx\u0001\u0000\u0000\u0000z}\u0001\u0000\u0000"+
		"\u0000{y\u0001\u0000\u0000\u0000{|\u0001\u0000\u0000\u0000|(\u0001\u0000"+
		"\u0000\u0000}{\u0001\u0000\u0000\u0000~\u0082\u0005;\u0000\u0000\u007f"+
		"\u0081\b\u0004\u0000\u0000\u0080\u007f\u0001\u0000\u0000\u0000\u0081\u0084"+
		"\u0001\u0000\u0000\u0000\u0082\u0080\u0001\u0000\u0000\u0000\u0082\u0083"+
		"\u0001\u0000\u0000\u0000\u0083\u0085\u0001\u0000\u0000\u0000\u0084\u0082"+
		"\u0001\u0000\u0000\u0000\u0085\u0086\u0006\u0014\u0000\u0000\u0086*\u0001"+
		"\u0000\u0000\u0000\u0087\u0089\u0007\u0005\u0000\u0000\u0088\u0087\u0001"+
		"\u0000\u0000\u0000\u0089\u008a\u0001\u0000\u0000\u0000\u008a\u0088\u0001"+
		"\u0000\u0000\u0000\u008a\u008b\u0001\u0000\u0000\u0000\u008b\u008c\u0001"+
		"\u0000\u0000\u0000\u008c\u008d\u0006\u0015\u0000\u0000\u008d,\u0001\u0000"+
		"\u0000\u0000\u008e\u0090\u0005\r\u0000\u0000\u008f\u008e\u0001\u0000\u0000"+
		"\u0000\u008f\u0090\u0001\u0000\u0000\u0000\u0090\u0091\u0001\u0000\u0000"+
		"\u0000\u0091\u0094\u0005\n\u0000\u0000\u0092\u0094\u0005\r\u0000\u0000"+
		"\u0093\u008f\u0001\u0000\u0000\u0000\u0093\u0092\u0001\u0000\u0000\u0000"+
		"\u0094.\u0001\u0000\u0000\u0000\t\u0000kmu{\u0082\u008a\u008f\u0093\u0001"+
		"\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}