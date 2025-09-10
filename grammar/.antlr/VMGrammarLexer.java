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
		OPP=1, MUL=2, QUO=3, ADD=4, SUB=5, REM=6, WSTR=7, LOAD=8, CMP=9, BEQ=10, 
		WINT=11, WNL=12, COMMA=13, OPARENT=14, CPARENT=15, HASH=16, MINUS=17, 
		COLON=18, RREGISTER=19, GBREGISTER=20, LBREGISTER=21, STRING_LITERAL=22, 
		INT=23, ID=24, COMMENT=25, WS=26, NEWLINE=27;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"OPP", "MUL", "QUO", "ADD", "SUB", "REM", "WSTR", "LOAD", "CMP", "BEQ", 
			"WINT", "WNL", "COMMA", "OPARENT", "CPARENT", "HASH", "MINUS", "COLON", 
			"RREGISTER", "GBREGISTER", "LBREGISTER", "STRING_LITERAL", "INT", "ID", 
			"COMMENT", "WS", "NEWLINE"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'OPP'", "'MUL'", "'QUO'", "'ADD'", "'SUB'", "'REM'", "'WSTR'", 
			"'LOAD'", "'CMP'", "'BEQ'", "'WINT'", "'WNL'", "','", "'('", "')'", "'#'", 
			"'-'", "':'", null, "'GB'", "'LB'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "OPP", "MUL", "QUO", "ADD", "SUB", "REM", "WSTR", "LOAD", "CMP", 
			"BEQ", "WINT", "WNL", "COMMA", "OPARENT", "CPARENT", "HASH", "MINUS", 
			"COLON", "RREGISTER", "GBREGISTER", "LBREGISTER", "STRING_LITERAL", "INT", 
			"ID", "COMMENT", "WS", "NEWLINE"
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
		"\u0004\u0000\u001b\u00ad\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017"+
		"\u0002\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001"+
		"\f\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001"+
		"\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001"+
		"\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0005\u0015\u0084"+
		"\b\u0015\n\u0015\f\u0015\u0087\t\u0015\u0001\u0015\u0001\u0015\u0001\u0016"+
		"\u0004\u0016\u008c\b\u0016\u000b\u0016\f\u0016\u008d\u0001\u0017\u0001"+
		"\u0017\u0005\u0017\u0092\b\u0017\n\u0017\f\u0017\u0095\t\u0017\u0001\u0018"+
		"\u0001\u0018\u0005\u0018\u0099\b\u0018\n\u0018\f\u0018\u009c\t\u0018\u0001"+
		"\u0018\u0001\u0018\u0001\u0019\u0004\u0019\u00a1\b\u0019\u000b\u0019\f"+
		"\u0019\u00a2\u0001\u0019\u0001\u0019\u0001\u001a\u0003\u001a\u00a8\b\u001a"+
		"\u0001\u001a\u0001\u001a\u0003\u001a\u00ac\b\u001a\u0000\u0000\u001b\u0001"+
		"\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007"+
		"\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d"+
		"\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0014)\u0015+\u0016-\u0017/"+
		"\u00181\u00193\u001a5\u001b\u0001\u0000\u0006\u0002\u0000\"\"\\\\\u0001"+
		"\u000009\u0003\u0000AZ__az\u0005\u0000..09AZ__az\u0002\u0000\n\n\r\r\u0002"+
		"\u0000\t\t  \u00b4\u0000\u0001\u0001\u0000\u0000\u0000\u0000\u0003\u0001"+
		"\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000\u0000\u0000\u0007\u0001"+
		"\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001\u0000"+
		"\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001\u0000\u0000"+
		"\u0000\u0000\u0011\u0001\u0000\u0000\u0000\u0000\u0013\u0001\u0000\u0000"+
		"\u0000\u0000\u0015\u0001\u0000\u0000\u0000\u0000\u0017\u0001\u0000\u0000"+
		"\u0000\u0000\u0019\u0001\u0000\u0000\u0000\u0000\u001b\u0001\u0000\u0000"+
		"\u0000\u0000\u001d\u0001\u0000\u0000\u0000\u0000\u001f\u0001\u0000\u0000"+
		"\u0000\u0000!\u0001\u0000\u0000\u0000\u0000#\u0001\u0000\u0000\u0000\u0000"+
		"%\u0001\u0000\u0000\u0000\u0000\'\u0001\u0000\u0000\u0000\u0000)\u0001"+
		"\u0000\u0000\u0000\u0000+\u0001\u0000\u0000\u0000\u0000-\u0001\u0000\u0000"+
		"\u0000\u0000/\u0001\u0000\u0000\u0000\u00001\u0001\u0000\u0000\u0000\u0000"+
		"3\u0001\u0000\u0000\u0000\u00005\u0001\u0000\u0000\u0000\u00017\u0001"+
		"\u0000\u0000\u0000\u0003;\u0001\u0000\u0000\u0000\u0005?\u0001\u0000\u0000"+
		"\u0000\u0007C\u0001\u0000\u0000\u0000\tG\u0001\u0000\u0000\u0000\u000b"+
		"K\u0001\u0000\u0000\u0000\rO\u0001\u0000\u0000\u0000\u000fT\u0001\u0000"+
		"\u0000\u0000\u0011Y\u0001\u0000\u0000\u0000\u0013]\u0001\u0000\u0000\u0000"+
		"\u0015a\u0001\u0000\u0000\u0000\u0017f\u0001\u0000\u0000\u0000\u0019j"+
		"\u0001\u0000\u0000\u0000\u001bl\u0001\u0000\u0000\u0000\u001dn\u0001\u0000"+
		"\u0000\u0000\u001fp\u0001\u0000\u0000\u0000!r\u0001\u0000\u0000\u0000"+
		"#t\u0001\u0000\u0000\u0000%v\u0001\u0000\u0000\u0000\'y\u0001\u0000\u0000"+
		"\u0000)|\u0001\u0000\u0000\u0000+\u007f\u0001\u0000\u0000\u0000-\u008b"+
		"\u0001\u0000\u0000\u0000/\u008f\u0001\u0000\u0000\u00001\u0096\u0001\u0000"+
		"\u0000\u00003\u00a0\u0001\u0000\u0000\u00005\u00ab\u0001\u0000\u0000\u0000"+
		"78\u0005O\u0000\u000089\u0005P\u0000\u00009:\u0005P\u0000\u0000:\u0002"+
		"\u0001\u0000\u0000\u0000;<\u0005M\u0000\u0000<=\u0005U\u0000\u0000=>\u0005"+
		"L\u0000\u0000>\u0004\u0001\u0000\u0000\u0000?@\u0005Q\u0000\u0000@A\u0005"+
		"U\u0000\u0000AB\u0005O\u0000\u0000B\u0006\u0001\u0000\u0000\u0000CD\u0005"+
		"A\u0000\u0000DE\u0005D\u0000\u0000EF\u0005D\u0000\u0000F\b\u0001\u0000"+
		"\u0000\u0000GH\u0005S\u0000\u0000HI\u0005U\u0000\u0000IJ\u0005B\u0000"+
		"\u0000J\n\u0001\u0000\u0000\u0000KL\u0005R\u0000\u0000LM\u0005E\u0000"+
		"\u0000MN\u0005M\u0000\u0000N\f\u0001\u0000\u0000\u0000OP\u0005W\u0000"+
		"\u0000PQ\u0005S\u0000\u0000QR\u0005T\u0000\u0000RS\u0005R\u0000\u0000"+
		"S\u000e\u0001\u0000\u0000\u0000TU\u0005L\u0000\u0000UV\u0005O\u0000\u0000"+
		"VW\u0005A\u0000\u0000WX\u0005D\u0000\u0000X\u0010\u0001\u0000\u0000\u0000"+
		"YZ\u0005C\u0000\u0000Z[\u0005M\u0000\u0000[\\\u0005P\u0000\u0000\\\u0012"+
		"\u0001\u0000\u0000\u0000]^\u0005B\u0000\u0000^_\u0005E\u0000\u0000_`\u0005"+
		"Q\u0000\u0000`\u0014\u0001\u0000\u0000\u0000ab\u0005W\u0000\u0000bc\u0005"+
		"I\u0000\u0000cd\u0005N\u0000\u0000de\u0005T\u0000\u0000e\u0016\u0001\u0000"+
		"\u0000\u0000fg\u0005W\u0000\u0000gh\u0005N\u0000\u0000hi\u0005L\u0000"+
		"\u0000i\u0018\u0001\u0000\u0000\u0000jk\u0005,\u0000\u0000k\u001a\u0001"+
		"\u0000\u0000\u0000lm\u0005(\u0000\u0000m\u001c\u0001\u0000\u0000\u0000"+
		"no\u0005)\u0000\u0000o\u001e\u0001\u0000\u0000\u0000pq\u0005#\u0000\u0000"+
		"q \u0001\u0000\u0000\u0000rs\u0005-\u0000\u0000s\"\u0001\u0000\u0000\u0000"+
		"tu\u0005:\u0000\u0000u$\u0001\u0000\u0000\u0000vw\u0005R\u0000\u0000w"+
		"x\u0003-\u0016\u0000x&\u0001\u0000\u0000\u0000yz\u0005G\u0000\u0000z{"+
		"\u0005B\u0000\u0000{(\u0001\u0000\u0000\u0000|}\u0005L\u0000\u0000}~\u0005"+
		"B\u0000\u0000~*\u0001\u0000\u0000\u0000\u007f\u0085\u0005\"\u0000\u0000"+
		"\u0080\u0084\b\u0000\u0000\u0000\u0081\u0082\u0005\\\u0000\u0000\u0082"+
		"\u0084\t\u0000\u0000\u0000\u0083\u0080\u0001\u0000\u0000\u0000\u0083\u0081"+
		"\u0001\u0000\u0000\u0000\u0084\u0087\u0001\u0000\u0000\u0000\u0085\u0083"+
		"\u0001\u0000\u0000\u0000\u0085\u0086\u0001\u0000\u0000\u0000\u0086\u0088"+
		"\u0001\u0000\u0000\u0000\u0087\u0085\u0001\u0000\u0000\u0000\u0088\u0089"+
		"\u0005\"\u0000\u0000\u0089,\u0001\u0000\u0000\u0000\u008a\u008c\u0007"+
		"\u0001\u0000\u0000\u008b\u008a\u0001\u0000\u0000\u0000\u008c\u008d\u0001"+
		"\u0000\u0000\u0000\u008d\u008b\u0001\u0000\u0000\u0000\u008d\u008e\u0001"+
		"\u0000\u0000\u0000\u008e.\u0001\u0000\u0000\u0000\u008f\u0093\u0007\u0002"+
		"\u0000\u0000\u0090\u0092\u0007\u0003\u0000\u0000\u0091\u0090\u0001\u0000"+
		"\u0000\u0000\u0092\u0095\u0001\u0000\u0000\u0000\u0093\u0091\u0001\u0000"+
		"\u0000\u0000\u0093\u0094\u0001\u0000\u0000\u0000\u00940\u0001\u0000\u0000"+
		"\u0000\u0095\u0093\u0001\u0000\u0000\u0000\u0096\u009a\u0005;\u0000\u0000"+
		"\u0097\u0099\b\u0004\u0000\u0000\u0098\u0097\u0001\u0000\u0000\u0000\u0099"+
		"\u009c\u0001\u0000\u0000\u0000\u009a\u0098\u0001\u0000\u0000\u0000\u009a"+
		"\u009b\u0001\u0000\u0000\u0000\u009b\u009d\u0001\u0000\u0000\u0000\u009c"+
		"\u009a\u0001\u0000\u0000\u0000\u009d\u009e\u0006\u0018\u0000\u0000\u009e"+
		"2\u0001\u0000\u0000\u0000\u009f\u00a1\u0007\u0005\u0000\u0000\u00a0\u009f"+
		"\u0001\u0000\u0000\u0000\u00a1\u00a2\u0001\u0000\u0000\u0000\u00a2\u00a0"+
		"\u0001\u0000\u0000\u0000\u00a2\u00a3\u0001\u0000\u0000\u0000\u00a3\u00a4"+
		"\u0001\u0000\u0000\u0000\u00a4\u00a5\u0006\u0019\u0000\u0000\u00a54\u0001"+
		"\u0000\u0000\u0000\u00a6\u00a8\u0005\r\u0000\u0000\u00a7\u00a6\u0001\u0000"+
		"\u0000\u0000\u00a7\u00a8\u0001\u0000\u0000\u0000\u00a8\u00a9\u0001\u0000"+
		"\u0000\u0000\u00a9\u00ac\u0005\n\u0000\u0000\u00aa\u00ac\u0005\r\u0000"+
		"\u0000\u00ab\u00a7\u0001\u0000\u0000\u0000\u00ab\u00aa\u0001\u0000\u0000"+
		"\u0000\u00ac6\u0001\u0000\u0000\u0000\t\u0000\u0083\u0085\u008d\u0093"+
		"\u009a\u00a2\u00a7\u00ab\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}