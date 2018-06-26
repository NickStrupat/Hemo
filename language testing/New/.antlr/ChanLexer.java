// Generated from c:\Dev\language testing\New\ChanLexer.g4 by ANTLR 4.7
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ChanLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Utf8ByteOrderMark=1, EndOfFile=2, SingleLineDocComment=3, DelimitedDocComment=4, 
		SingleLineComment=5, DelimitedComment=6, NewLine=7, LineFeed=8, CarriageReturn=9, 
		CrLf=10, Space=11, Spaces=12, Tab=13, DigitSeparator=14, Sign=15, DecimalIntegerLiteral=16, 
		HexadecimalIntegerLiteral=17, OctalIntegerLiteral=18, BinaryIntegerLiteral=19, 
		DecimalNumeral=20, IntegerTypeSuffix=21, HexPrefix=22, HexNumeral=23, 
		OctalPrefix=24, OctalNumeral=25, BinaryPrefix=26, BinaryNumeral=27, ZERO=28, 
		ONE=29, U=30, I=31, HEXADECIMAL_PREFIX=32, OCTAL_PREFIX=33, BINARY_PREFIX=34, 
		StorageSize=35, Abstract=36, Alias=37, As=38, Base=39, Break=40, Case=41, 
		Catch=42, Checked=43, Class=44, Const=45, Continue=46, Default=47, Delegate=48, 
		Do=49, Else=50, Enum=51, Event=52, Explicit=53, Extern=54, False=55, FieldOf=56, 
		Finally=57, Fixed=58, Func=59, For=60, ForEach=61, Goto=62, If=63, Implicit=64, 
		In=65, Interface=66, Internal=67, Is=68, Lock=69, Methodof=70, Nameof=71, 
		Namespace=72, New=73, Null=74, Operator=75, Out=76, Override=77, Params=78, 
		Private=79, PropertyOf=80, Protected=81, Public=82, Readonly=83, Ref=84, 
		Return=85, Sealed=86, SizeOf=87, StackAlloc=88, Static=89, Switch=90, 
		This=91, Throw=92, True=93, Try=94, TypeOf=95, Unchecked=96, Unsafe=97, 
		Using=98, Virtual=99, Void=100, Volatile=101, While=102, OpenBrace=103, 
		OpenBracket=104, CloseBracket=105, OpenParens=106, CloseParens=107, Dot=108, 
		Comma=109, Colon=110, Semicolon=111, Plus=112, Minus=113, Star=114, Div=115, 
		Percent=116, Amp=117, BitwiseOr=118, Caret=119, Bang=120, Tilde=121, Assignment=122, 
		LT=123, GT=124, INTERR=125, DOUBLE_COLON=126, OP_COALESCING=127, OP_INC=128, 
		OP_DEC=129, OP_AND=130, OP_OR=131, OP_PTR=132, OP_EQ=133, OP_NE=134, OP_LE=135, 
		OP_GE=136, OP_ADD_ASSIGNMENT=137, OP_SUB_ASSIGNMENT=138, OP_MULT_ASSIGNMENT=139, 
		OP_DIV_ASSIGNMENT=140, OP_MOD_ASSIGNMENT=141, OP_AND_ASSIGNMENT=142, OP_OR_ASSIGNMENT=143, 
		OP_XOR_ASSIGNMENT=144, OP_LEFT_SHIFT=145, OP_LEFT_SHIFT_ASSIGNMENT=146, 
		IDENTIFIER=147;
	public static final int
		BYTE_ORDER_MARK=2, WHITESPACE=3, COMMENT=4, DIRECTIVE=5;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN", "BYTE_ORDER_MARK", "WHITESPACE", "COMMENT", 
                                     "DIRECTIVE"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"Utf8ByteOrderMark", "EndOfFile", "SingleLineDocComment", "DelimitedDocComment", 
		"SingleLineComment", "DelimitedComment", "NewLine", "LineFeed", "CarriageReturn", 
		"CrLf", "InputCharacter", "Space", "Spaces", "Tab", "DigitSeparator", 
		"Sign", "DecimalIntegerLiteral", "HexadecimalIntegerLiteral", "OctalIntegerLiteral", 
		"BinaryIntegerLiteral", "DecimalNumeral", "IntegerTypeSuffix", "Digits", 
		"Digit", "NonZeroDigit", "DigitsAndDigitSeparators", "DigitOrDigitSeparator", 
		"DigitSeparators", "HexPrefix", "HexNumeral", "HexDigits", "HexDigit", 
		"HexDigitsAndDigitSeparators", "HexDigitOrDigitSeparator", "OctalPrefix", 
		"OctalNumeral", "OctalDigits", "OctalDigit", "OctalDigitsAndDigitSeparators", 
		"OctalDigitOrDigitSeparator", "BinaryPrefix", "BinaryNumeral", "BinaryDigits", 
		"BinaryDigit", "BinaryDigitsAndDigitSeparators", "BinaryDigitOrDigitSeparator", 
		"ZERO", "ONE", "U", "I", "HEXADECIMAL_PREFIX", "OCTAL_PREFIX", "BINARY_PREFIX", 
		"StorageSize", "Abstract", "Alias", "As", "Base", "Break", "Case", "Catch", 
		"Checked", "Class", "Const", "Continue", "Default", "Delegate", "Do", 
		"Else", "Enum", "Event", "Explicit", "Extern", "False", "FieldOf", "Finally", 
		"Fixed", "Func", "For", "ForEach", "Goto", "If", "Implicit", "In", "Interface", 
		"Internal", "Is", "Lock", "Methodof", "Nameof", "Namespace", "New", "Null", 
		"Operator", "Out", "Override", "Params", "Private", "PropertyOf", "Protected", 
		"Public", "Readonly", "Ref", "Return", "Sealed", "SizeOf", "StackAlloc", 
		"Static", "Switch", "This", "Throw", "True", "Try", "TypeOf", "Unchecked", 
		"Unsafe", "Using", "Virtual", "Void", "Volatile", "While", "OpenBrace", 
		"OpenBracket", "CloseBracket", "OpenParens", "CloseParens", "Dot", "Comma", 
		"Colon", "Semicolon", "Plus", "Minus", "Star", "Div", "Percent", "Amp", 
		"BitwiseOr", "Caret", "Bang", "Tilde", "Assignment", "LT", "GT", "INTERR", 
		"DOUBLE_COLON", "OP_COALESCING", "OP_INC", "OP_DEC", "OP_AND", "OP_OR", 
		"OP_PTR", "OP_EQ", "OP_NE", "OP_LE", "OP_GE", "OP_ADD_ASSIGNMENT", "OP_SUB_ASSIGNMENT", 
		"OP_MULT_ASSIGNMENT", "OP_DIV_ASSIGNMENT", "OP_MOD_ASSIGNMENT", "OP_AND_ASSIGNMENT", 
		"OP_OR_ASSIGNMENT", "OP_XOR_ASSIGNMENT", "OP_LEFT_SHIFT", "OP_LEFT_SHIFT_ASSIGNMENT", 
		"IDENTIFIER", "IdentifierOrKeyword", "IdentifierStartCharacter", "IdentifierPartCharacter", 
		"LetterCharacter", "DecimalDigitCharacter", "ConnectingCharacter", "CombiningCharacter", 
		"FormattingCharacter", "UnicodeEscapeSequence", "UnicodeClassZS", "UnicodeClassLU", 
		"UnicodeClassLL", "UnicodeClassLT", "UnicodeClassLM", "UnicodeClassLO", 
		"UnicodeClassNL", "UnicodeClassMN", "UnicodeClassMC", "UnicodeClassCF", 
		"UnicodeClassPC", "UnicodeClassND"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'\u00EF\u00BB\u00BF'", null, null, null, null, null, null, "'\n'", 
		"'\r'", null, "'\u0020'", null, "'\t'", "'''", null, null, null, null, 
		null, null, null, null, null, null, null, null, null, "'0'", "'1'", "'u'", 
		"'i'", "'0x'", "'0o'", "'0b'", null, "'abstract'", "'alias'", "'as'", 
		"'base'", "'break'", "'case'", "'catch'", "'checked'", "'class'", "'const'", 
		"'continue'", "'default'", "'delegate'", "'do'", "'else'", "'enum'", "'event'", 
		"'explicit'", "'extern'", "'false'", "'fieldof'", "'finally'", "'fixed'", 
		"'func'", "'for'", "'foreach'", "'goto'", "'if'", "'implicit'", "'in'", 
		"'interface'", "'internal'", "'is'", "'lock'", "'methodof'", "'nameof'", 
		"'namespace'", "'new'", "'null'", "'operator'", "'out'", "'override'", 
		"'params'", "'private'", "'propertyof'", "'protected'", "'public'", "'readonly'", 
		"'ref'", "'return'", "'sealed'", "'sizeof'", "'stackalloc'", "'static'", 
		"'switch'", "'this'", "'throw'", "'true'", "'try'", "'typeof'", "'unchecked'", 
		"'unsafe'", "'using'", "'virtual'", "'void'", "'volatile'", "'while'", 
		"'{'", "'['", "']'", "'('", "')'", "'.'", "','", "':'", "';'", "'+'", 
		"'-'", "'*'", "'/'", "'%'", "'&'", "'|'", "'^'", "'!'", "'~'", "'='", 
		"'<'", "'>'", "'?'", "'::'", "'??'", "'++'", "'--'", "'&&'", "'||'", "'->'", 
		"'=='", "'!='", "'<='", "'>='", "'+='", "'-='", "'*='", "'/='", "'%='", 
		"'&='", "'|='", "'^='", "'<<'", "'<<='"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "Utf8ByteOrderMark", "EndOfFile", "SingleLineDocComment", "DelimitedDocComment", 
		"SingleLineComment", "DelimitedComment", "NewLine", "LineFeed", "CarriageReturn", 
		"CrLf", "Space", "Spaces", "Tab", "DigitSeparator", "Sign", "DecimalIntegerLiteral", 
		"HexadecimalIntegerLiteral", "OctalIntegerLiteral", "BinaryIntegerLiteral", 
		"DecimalNumeral", "IntegerTypeSuffix", "HexPrefix", "HexNumeral", "OctalPrefix", 
		"OctalNumeral", "BinaryPrefix", "BinaryNumeral", "ZERO", "ONE", "U", "I", 
		"HEXADECIMAL_PREFIX", "OCTAL_PREFIX", "BINARY_PREFIX", "StorageSize", 
		"Abstract", "Alias", "As", "Base", "Break", "Case", "Catch", "Checked", 
		"Class", "Const", "Continue", "Default", "Delegate", "Do", "Else", "Enum", 
		"Event", "Explicit", "Extern", "False", "FieldOf", "Finally", "Fixed", 
		"Func", "For", "ForEach", "Goto", "If", "Implicit", "In", "Interface", 
		"Internal", "Is", "Lock", "Methodof", "Nameof", "Namespace", "New", "Null", 
		"Operator", "Out", "Override", "Params", "Private", "PropertyOf", "Protected", 
		"Public", "Readonly", "Ref", "Return", "Sealed", "SizeOf", "StackAlloc", 
		"Static", "Switch", "This", "Throw", "True", "Try", "TypeOf", "Unchecked", 
		"Unsafe", "Using", "Virtual", "Void", "Volatile", "While", "OpenBrace", 
		"OpenBracket", "CloseBracket", "OpenParens", "CloseParens", "Dot", "Comma", 
		"Colon", "Semicolon", "Plus", "Minus", "Star", "Div", "Percent", "Amp", 
		"BitwiseOr", "Caret", "Bang", "Tilde", "Assignment", "LT", "GT", "INTERR", 
		"DOUBLE_COLON", "OP_COALESCING", "OP_INC", "OP_DEC", "OP_AND", "OP_OR", 
		"OP_PTR", "OP_EQ", "OP_NE", "OP_LE", "OP_GE", "OP_ADD_ASSIGNMENT", "OP_SUB_ASSIGNMENT", 
		"OP_MULT_ASSIGNMENT", "OP_DIV_ASSIGNMENT", "OP_MOD_ASSIGNMENT", "OP_AND_ASSIGNMENT", 
		"OP_OR_ASSIGNMENT", "OP_XOR_ASSIGNMENT", "OP_LEFT_SHIFT", "OP_LEFT_SHIFT_ASSIGNMENT", 
		"IDENTIFIER"
	};
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


	public ChanLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "ChanLexer.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\u0095\u0506\b\1\4"+
		"\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n"+
		"\4\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64"+
		"\t\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t"+
		"=\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4"+
		"I\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\t"+
		"T\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_"+
		"\4`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\4f\tf\4g\tg\4h\th\4i\ti\4j\tj\4k"+
		"\tk\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\4q\tq\4r\tr\4s\ts\4t\tt\4u\tu\4v\tv"+
		"\4w\tw\4x\tx\4y\ty\4z\tz\4{\t{\4|\t|\4}\t}\4~\t~\4\177\t\177\4\u0080\t"+
		"\u0080\4\u0081\t\u0081\4\u0082\t\u0082\4\u0083\t\u0083\4\u0084\t\u0084"+
		"\4\u0085\t\u0085\4\u0086\t\u0086\4\u0087\t\u0087\4\u0088\t\u0088\4\u0089"+
		"\t\u0089\4\u008a\t\u008a\4\u008b\t\u008b\4\u008c\t\u008c\4\u008d\t\u008d"+
		"\4\u008e\t\u008e\4\u008f\t\u008f\4\u0090\t\u0090\4\u0091\t\u0091\4\u0092"+
		"\t\u0092\4\u0093\t\u0093\4\u0094\t\u0094\4\u0095\t\u0095\4\u0096\t\u0096"+
		"\4\u0097\t\u0097\4\u0098\t\u0098\4\u0099\t\u0099\4\u009a\t\u009a\4\u009b"+
		"\t\u009b\4\u009c\t\u009c\4\u009d\t\u009d\4\u009e\t\u009e\4\u009f\t\u009f"+
		"\4\u00a0\t\u00a0\4\u00a1\t\u00a1\4\u00a2\t\u00a2\4\u00a3\t\u00a3\4\u00a4"+
		"\t\u00a4\4\u00a5\t\u00a5\4\u00a6\t\u00a6\4\u00a7\t\u00a7\4\u00a8\t\u00a8"+
		"\4\u00a9\t\u00a9\4\u00aa\t\u00aa\4\u00ab\t\u00ab\4\u00ac\t\u00ac\4\u00ad"+
		"\t\u00ad\4\u00ae\t\u00ae\4\u00af\t\u00af\4\u00b0\t\u00b0\4\u00b1\t\u00b1"+
		"\4\u00b2\t\u00b2\4\u00b3\t\u00b3\4\u00b4\t\u00b4\4\u00b5\t\u00b5\4\u00b6"+
		"\t\u00b6\4\u00b7\t\u00b7\4\u00b8\t\u00b8\4\u00b9\t\u00b9\4\u00ba\t\u00ba"+
		"\4\u00bb\t\u00bb\4\u00bc\t\u00bc\3\2\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\4\3"+
		"\4\3\4\3\4\3\4\7\4\u0187\n\4\f\4\16\4\u018a\13\4\3\4\3\4\3\5\3\5\3\5\3"+
		"\5\3\5\7\5\u0193\n\5\f\5\16\5\u0196\13\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3"+
		"\6\3\6\7\6\u01a1\n\6\f\6\16\6\u01a4\13\6\3\6\3\6\3\7\3\7\3\7\3\7\7\7\u01ac"+
		"\n\7\f\7\16\7\u01af\13\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\5\b\u01ba"+
		"\n\b\3\t\3\t\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\r\3\r\3\16\6\16\u01c8\n"+
		"\16\r\16\16\16\u01c9\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\5\21\u01d4"+
		"\n\21\3\22\5\22\u01d7\n\22\3\22\3\22\3\23\5\23\u01dc\n\23\3\23\3\23\3"+
		"\23\3\24\5\24\u01e2\n\24\3\24\3\24\3\24\3\25\3\25\3\25\3\26\3\26\3\26"+
		"\5\26\u01ed\n\26\3\26\3\26\3\26\5\26\u01f2\n\26\5\26\u01f4\n\26\3\27\3"+
		"\27\3\27\3\30\3\30\5\30\u01fb\n\30\3\30\5\30\u01fe\n\30\3\31\3\31\5\31"+
		"\u0202\n\31\3\32\3\32\3\33\6\33\u0207\n\33\r\33\16\33\u0208\3\34\3\34"+
		"\5\34\u020d\n\34\3\35\6\35\u0210\n\35\r\35\16\35\u0211\3\36\3\36\3\36"+
		"\3\37\3\37\3 \3 \5 \u021b\n \3 \5 \u021e\n \3!\3!\3\"\6\"\u0223\n\"\r"+
		"\"\16\"\u0224\3#\3#\5#\u0229\n#\3$\3$\3$\3%\5%\u022f\n%\3%\3%\3&\3&\5"+
		"&\u0235\n&\3&\5&\u0238\n&\3\'\3\'\3(\6(\u023d\n(\r(\16(\u023e\3)\3)\5"+
		")\u0243\n)\3*\3*\3*\3+\3+\3,\3,\5,\u024c\n,\3,\5,\u024f\n,\3-\3-\3.\6"+
		".\u0254\n.\r.\16.\u0255\3/\3/\5/\u025a\n/\3\60\3\60\3\61\3\61\3\62\3\62"+
		"\3\63\3\63\3\64\3\64\3\64\3\65\3\65\3\65\3\66\3\66\3\66\3\67\3\67\3\67"+
		"\3\67\3\67\3\67\3\67\3\67\3\67\5\67\u0276\n\67\38\38\38\38\38\38\38\3"+
		"8\38\39\39\39\39\39\39\3:\3:\3:\3;\3;\3;\3;\3;\3<\3<\3<\3<\3<\3<\3=\3"+
		"=\3=\3=\3=\3>\3>\3>\3>\3>\3>\3?\3?\3?\3?\3?\3?\3?\3?\3@\3@\3@\3@\3@\3"+
		"@\3A\3A\3A\3A\3A\3A\3B\3B\3B\3B\3B\3B\3B\3B\3B\3C\3C\3C\3C\3C\3C\3C\3"+
		"C\3D\3D\3D\3D\3D\3D\3D\3D\3D\3E\3E\3E\3F\3F\3F\3F\3F\3G\3G\3G\3G\3G\3"+
		"H\3H\3H\3H\3H\3H\3I\3I\3I\3I\3I\3I\3I\3I\3I\3J\3J\3J\3J\3J\3J\3J\3K\3"+
		"K\3K\3K\3K\3K\3L\3L\3L\3L\3L\3L\3L\3L\3M\3M\3M\3M\3M\3M\3M\3M\3N\3N\3"+
		"N\3N\3N\3N\3O\3O\3O\3O\3O\3P\3P\3P\3P\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3R\3R\3"+
		"R\3R\3R\3S\3S\3S\3T\3T\3T\3T\3T\3T\3T\3T\3T\3U\3U\3U\3V\3V\3V\3V\3V\3"+
		"V\3V\3V\3V\3V\3W\3W\3W\3W\3W\3W\3W\3W\3W\3X\3X\3X\3Y\3Y\3Y\3Y\3Y\3Z\3"+
		"Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3[\3[\3[\3[\3[\3[\3[\3\\\3\\\3\\\3\\\3\\\3\\\3"+
		"\\\3\\\3\\\3\\\3]\3]\3]\3]\3^\3^\3^\3^\3^\3_\3_\3_\3_\3_\3_\3_\3_\3_\3"+
		"`\3`\3`\3`\3a\3a\3a\3a\3a\3a\3a\3a\3a\3b\3b\3b\3b\3b\3b\3b\3c\3c\3c\3"+
		"c\3c\3c\3c\3c\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3e\3e\3e\3e\3e\3e\3e\3"+
		"e\3e\3e\3f\3f\3f\3f\3f\3f\3f\3g\3g\3g\3g\3g\3g\3g\3g\3g\3h\3h\3h\3h\3"+
		"i\3i\3i\3i\3i\3i\3i\3j\3j\3j\3j\3j\3j\3j\3k\3k\3k\3k\3k\3k\3k\3l\3l\3"+
		"l\3l\3l\3l\3l\3l\3l\3l\3l\3m\3m\3m\3m\3m\3m\3m\3n\3n\3n\3n\3n\3n\3n\3"+
		"o\3o\3o\3o\3o\3p\3p\3p\3p\3p\3p\3q\3q\3q\3q\3q\3r\3r\3r\3r\3s\3s\3s\3"+
		"s\3s\3s\3s\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3u\3u\3u\3u\3u\3u\3u\3v\3v\3"+
		"v\3v\3v\3v\3w\3w\3w\3w\3w\3w\3w\3w\3x\3x\3x\3x\3x\3y\3y\3y\3y\3y\3y\3"+
		"y\3y\3y\3z\3z\3z\3z\3z\3z\3{\3{\3|\3|\3}\3}\3~\3~\3\177\3\177\3\u0080"+
		"\3\u0080\3\u0081\3\u0081\3\u0082\3\u0082\3\u0083\3\u0083\3\u0084\3\u0084"+
		"\3\u0085\3\u0085\3\u0086\3\u0086\3\u0087\3\u0087\3\u0088\3\u0088\3\u0089"+
		"\3\u0089\3\u008a\3\u008a\3\u008b\3\u008b\3\u008c\3\u008c\3\u008d\3\u008d"+
		"\3\u008e\3\u008e\3\u008f\3\u008f\3\u0090\3\u0090\3\u0091\3\u0091\3\u0092"+
		"\3\u0092\3\u0092\3\u0093\3\u0093\3\u0093\3\u0094\3\u0094\3\u0094\3\u0095"+
		"\3\u0095\3\u0095\3\u0096\3\u0096\3\u0096\3\u0097\3\u0097\3\u0097\3\u0098"+
		"\3\u0098\3\u0098\3\u0099\3\u0099\3\u0099\3\u009a\3\u009a\3\u009a\3\u009b"+
		"\3\u009b\3\u009b\3\u009c\3\u009c\3\u009c\3\u009d\3\u009d\3\u009d\3\u009e"+
		"\3\u009e\3\u009e\3\u009f\3\u009f\3\u009f\3\u00a0\3\u00a0\3\u00a0\3\u00a1"+
		"\3\u00a1\3\u00a1\3\u00a2\3\u00a2\3\u00a2\3\u00a3\3\u00a3\3\u00a3\3\u00a4"+
		"\3\u00a4\3\u00a4\3\u00a5\3\u00a5\3\u00a5\3\u00a6\3\u00a6\3\u00a6\3\u00a6"+
		"\3\u00a7\5\u00a7\u04a9\n\u00a7\3\u00a7\3\u00a7\3\u00a8\3\u00a8\7\u00a8"+
		"\u04af\n\u00a8\f\u00a8\16\u00a8\u04b2\13\u00a8\3\u00a9\3\u00a9\5\u00a9"+
		"\u04b6\n\u00a9\3\u00aa\3\u00aa\3\u00aa\3\u00aa\3\u00aa\5\u00aa\u04bd\n"+
		"\u00aa\3\u00ab\3\u00ab\3\u00ab\3\u00ab\3\u00ab\3\u00ab\3\u00ab\5\u00ab"+
		"\u04c6\n\u00ab\3\u00ac\3\u00ac\5\u00ac\u04ca\n\u00ac\3\u00ad\3\u00ad\5"+
		"\u00ad\u04ce\n\u00ad\3\u00ae\3\u00ae\3\u00ae\5\u00ae\u04d3\n\u00ae\3\u00af"+
		"\3\u00af\5\u00af\u04d7\n\u00af\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0"+
		"\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0"+
		"\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0\5\u00b0\u04ed\n\u00b0"+
		"\3\u00b1\3\u00b1\3\u00b2\3\u00b2\3\u00b3\3\u00b3\3\u00b4\3\u00b4\3\u00b5"+
		"\3\u00b5\3\u00b6\3\u00b6\3\u00b7\3\u00b7\3\u00b8\3\u00b8\3\u00b9\3\u00b9"+
		"\3\u00ba\3\u00ba\3\u00bb\3\u00bb\3\u00bc\3\u00bc\4\u0194\u01ad\2\u00bd"+
		"\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\2\31\r\33\16\35\17\37"+
		"\20!\21#\22%\23\'\24)\25+\26-\27/\2\61\2\63\2\65\2\67\29\2;\30=\31?\2"+
		"A\2C\2E\2G\32I\33K\2M\2O\2Q\2S\34U\35W\2Y\2[\2]\2_\36a\37c e!g\"i#k$m"+
		"%o&q\'s(u)w*y+{,}-\177.\u0081/\u0083\60\u0085\61\u0087\62\u0089\63\u008b"+
		"\64\u008d\65\u008f\66\u0091\67\u00938\u00959\u0097:\u0099;\u009b<\u009d"+
		"=\u009f>\u00a1?\u00a3@\u00a5A\u00a7B\u00a9C\u00abD\u00adE\u00afF\u00b1"+
		"G\u00b3H\u00b5I\u00b7J\u00b9K\u00bbL\u00bdM\u00bfN\u00c1O\u00c3P\u00c5"+
		"Q\u00c7R\u00c9S\u00cbT\u00cdU\u00cfV\u00d1W\u00d3X\u00d5Y\u00d7Z\u00d9"+
		"[\u00db\\\u00dd]\u00df^\u00e1_\u00e3`\u00e5a\u00e7b\u00e9c\u00ebd\u00ed"+
		"e\u00eff\u00f1g\u00f3h\u00f5i\u00f7j\u00f9k\u00fbl\u00fdm\u00ffn\u0101"+
		"o\u0103p\u0105q\u0107r\u0109s\u010bt\u010du\u010fv\u0111w\u0113x\u0115"+
		"y\u0117z\u0119{\u011b|\u011d}\u011f~\u0121\177\u0123\u0080\u0125\u0081"+
		"\u0127\u0082\u0129\u0083\u012b\u0084\u012d\u0085\u012f\u0086\u0131\u0087"+
		"\u0133\u0088\u0135\u0089\u0137\u008a\u0139\u008b\u013b\u008c\u013d\u008d"+
		"\u013f\u008e\u0141\u008f\u0143\u0090\u0145\u0091\u0147\u0092\u0149\u0093"+
		"\u014b\u0094\u014d\u0095\u014f\2\u0151\2\u0153\2\u0155\2\u0157\2\u0159"+
		"\2\u015b\2\u015d\2\u015f\2\u0161\2\u0163\2\u0165\2\u0167\2\u0169\2\u016b"+
		"\2\u016d\2\u016f\2\u0171\2\u0173\2\u0175\2\u0177\2\3\2\23\5\2\f\f\17\17"+
		"++\4\2kkww\3\2\63;\5\2\62;CHch\3\2\629\3\2\62\63\13\2\"\"\u00a2\u00a2"+
		"\u1682\u1682\u1810\u1810\u2002\u2008\u200a\u200c\u2031\u2031\u2061\u2061"+
		"\u3002\u3002T\2C\\\u00c2\u00d8\u00da\u00e0\u0102\u0138\u013b\u0149\u014c"+
		"\u017f\u0183\u0184\u0186\u018d\u0190\u0193\u0195\u0196\u0198\u019a\u019e"+
		"\u019f\u01a1\u01a2\u01a4\u01ab\u01ae\u01b5\u01b7\u01be\u01c6\u01cf\u01d1"+
		"\u01dd\u01e0\u01f0\u01f3\u01f6\u01f8\u01fa\u01fc\u0234\u023c\u023d\u023f"+
		"\u0240\u0243\u0248\u024a\u0250\u0372\u0374\u0378\u0381\u0388\u038c\u038e"+
		"\u03a3\u03a5\u03ad\u03d1\u03d6\u03da\u03f0\u03f6\u03f9\u03fb\u03fc\u03ff"+
		"\u0431\u0462\u0482\u048c\u04cf\u04d2\u0530\u0533\u0558\u10a2\u10c7\u10c9"+
		"\u10cf\u1e02\u1e96\u1ea0\u1f00\u1f0a\u1f11\u1f1a\u1f1f\u1f2a\u1f31\u1f3a"+
		"\u1f41\u1f4a\u1f4f\u1f5b\u1f61\u1f6a\u1f71\u1fba\u1fbd\u1fca\u1fcd\u1fda"+
		"\u1fdd\u1fea\u1fee\u1ffa\u1ffd\u2104\u2109\u210d\u210f\u2112\u2114\u2117"+
		"\u211f\u2126\u212f\u2132\u2135\u2140\u2141\u2147\u2185\u2c02\u2c30\u2c62"+
		"\u2c66\u2c69\u2c72\u2c74\u2c77\u2c80\u2c82\u2c84\u2ce4\u2ced\u2cef\u2cf4"+
		"\ua642\ua644\ua66e\ua682\ua69c\ua724\ua730\ua734\ua770\ua77b\ua788\ua78d"+
		"\ua78f\ua792\ua794\ua798\ua7af\ua7b2\ua7b3\uff23\uff3cS\2c|\u00b7\u00f8"+
		"\u00fa\u0101\u0103\u0179\u017c\u0182\u0185\u0187\u018a\u0194\u0197\u019d"+
		"\u01a0\u01a3\u01a5\u01a7\u01aa\u01af\u01b2\u01b6\u01b8\u01c1\u01c8\u01ce"+
		"\u01d0\u01f5\u01f7\u01fb\u01fd\u023b\u023e\u0244\u0249\u0295\u0297\u02b1"+
		"\u0373\u0375\u0379\u037f\u0392\u03d0\u03d2\u03d3\u03d7\u03d9\u03db\u03f5"+
		"\u03f7\u0461\u0463\u0483\u048d\u04c1\u04c4\u0531\u0563\u0589\u1d02\u1d2d"+
		"\u1d6d\u1d79\u1d7b\u1d9c\u1e03\u1e9f\u1ea1\u1f09\u1f12\u1f17\u1f22\u1f29"+
		"\u1f32\u1f39\u1f42\u1f47\u1f52\u1f59\u1f62\u1f69\u1f72\u1f7f\u1f82\u1f89"+
		"\u1f92\u1f99\u1fa2\u1fa9\u1fb2\u1fb6\u1fb8\u1fb9\u1fc0\u1fc6\u1fc8\u1fc9"+
		"\u1fd2\u1fd5\u1fd8\u1fd9\u1fe2\u1fe9\u1ff4\u1ff6\u1ff8\u1ff9\u210c\u2115"+
		"\u2131\u213b\u213e\u213f\u2148\u214b\u2150\u2186\u2c32\u2c60\u2c63\u2c6e"+
		"\u2c73\u2c7d\u2c83\u2cee\u2cf0\u2cf5\u2d02\u2d27\u2d29\u2d2f\ua643\ua66f"+
		"\ua683\ua69d\ua725\ua733\ua735\ua77a\ua77c\ua77e\ua781\ua789\ua78e\ua790"+
		"\ua793\ua797\ua799\ua7ab\ua7fc\uab5c\uab66\uab67\ufb02\ufb08\ufb15\ufb19"+
		"\uff43\uff5c\b\2\u01c7\u01cd\u01f4\u1f91\u1f9a\u1fa1\u1faa\u1fb1\u1fbe"+
		"\u1fce\u1ffe\u1ffe#\2\u02b2\u02c3\u02c8\u02d3\u02e2\u02e6\u02ee\u02f0"+
		"\u0376\u037c\u055b\u0642\u06e7\u06e8\u07f6\u07f7\u07fc\u081c\u0826\u082a"+
		"\u0973\u0e48\u0ec8\u10fe\u17d9\u1845\u1aa9\u1c7f\u1d2e\u1d6c\u1d7a\u1dc1"+
		"\u2073\u2081\u2092\u209e\u2c7e\u2c7f\u2d71\u2e31\u3007\u3037\u303d\u3100"+
		"\ua017\ua4ff\ua60e\ua681\ua69e\ua69f\ua719\ua721\ua772\ua78a\ua7fa\ua7fb"+
		"\ua9d1\ua9e8\uaa72\uaadf\uaaf5\uaaf6\uab5e\uab61\uff72\uffa1\u00ec\2\u00ac"+
		"\u00bc\u01bd\u01c5\u0296\u05ec\u05f2\u05f4\u0622\u0641\u0643\u064c\u0670"+
		"\u0671\u0673\u06d5\u06d7\u06fe\u0701\u0712\u0714\u0731\u074f\u07a7\u07b3"+
		"\u07ec\u0802\u0817\u0842\u085a\u08a2\u08b4\u0906\u093b\u093f\u0952\u095a"+
		"\u0963\u0974\u0982\u0987\u098e\u0991\u0992\u0995\u09aa\u09ac\u09b2\u09b4"+
		"\u09bb\u09bf\u09d0\u09de\u09df\u09e1\u09e3\u09f2\u09f3\u0a07\u0a0c\u0a11"+
		"\u0a12\u0a15\u0a2a\u0a2c\u0a32\u0a34\u0a35\u0a37\u0a38\u0a3a\u0a3b\u0a5b"+
		"\u0a5e\u0a60\u0a76\u0a87\u0a8f\u0a91\u0a93\u0a95\u0aaa\u0aac\u0ab2\u0ab4"+
		"\u0ab5\u0ab7\u0abb\u0abf\u0ad2\u0ae2\u0ae3\u0b07\u0b0e\u0b11\u0b12\u0b15"+
		"\u0b2a\u0b2c\u0b32\u0b34\u0b35\u0b37\u0b3b\u0b3f\u0b63\u0b73\u0b85\u0b87"+
		"\u0b8c\u0b90\u0b92\u0b94\u0b97\u0b9b\u0b9c\u0b9e\u0bac\u0bb0\u0bbb\u0bd2"+
		"\u0c0e\u0c10\u0c12\u0c14\u0c2a\u0c2c\u0c3b\u0c3f\u0c8e\u0c90\u0c92\u0c94"+
		"\u0caa\u0cac\u0cb5\u0cb7\u0cbb\u0cbf\u0ce0\u0ce2\u0ce3\u0cf3\u0cf4\u0d07"+
		"\u0d0e\u0d10\u0d12\u0d14\u0d3c\u0d3f\u0d50\u0d62\u0d63\u0d7c\u0d81\u0d87"+
		"\u0d98\u0d9c\u0db3\u0db5\u0dbd\u0dbf\u0dc8\u0e03\u0e32\u0e34\u0e35\u0e42"+
		"\u0e47\u0e83\u0e84\u0e86\u0e8c\u0e8f\u0e99\u0e9b\u0ea1\u0ea3\u0ea5\u0ea7"+
		"\u0ea9\u0eac\u0ead\u0eaf\u0eb2\u0eb4\u0eb5\u0ebf\u0ec6\u0ede\u0ee1\u0f02"+
		"\u0f49\u0f4b\u0f6e\u0f8a\u0f8e\u1002\u102c\u1041\u1057\u105c\u105f\u1063"+
		"\u1072\u1077\u1083\u1090\u10fc\u10ff\u124a\u124c\u124f\u1252\u1258\u125a"+
		"\u125f\u1262\u128a\u128c\u128f\u1292\u12b2\u12b4\u12b7\u12ba\u12c0\u12c2"+
		"\u12c7\u12ca\u12d8\u12da\u1312\u1314\u1317\u131a\u135c\u1382\u1391\u13a2"+
		"\u13f6\u1403\u166e\u1671\u1681\u1683\u169c\u16a2\u16ec\u16f3\u16fa\u1702"+
		"\u170e\u1710\u1713\u1722\u1733\u1742\u1753\u1762\u176e\u1770\u1772\u1782"+
		"\u17b5\u17de\u1844\u1846\u1879\u1882\u18aa\u18ac\u18f7\u1902\u1920\u1952"+
		"\u196f\u1972\u1976\u1982\u19ad\u19c3\u19c9\u1a02\u1a18\u1a22\u1a56\u1b07"+
		"\u1b35\u1b47\u1b4d\u1b85\u1ba2\u1bb0\u1bb1\u1bbc\u1be7\u1c02\u1c25\u1c4f"+
		"\u1c51\u1c5c\u1c79\u1ceb\u1cee\u1cf0\u1cf3\u1cf7\u1cf8\u2137\u213a\u2d32"+
		"\u2d69\u2d82\u2d98\u2da2\u2da8\u2daa\u2db0\u2db2\u2db8\u2dba\u2dc0\u2dc2"+
		"\u2dc8\u2dca\u2dd0\u2dd2\u2dd8\u2dda\u2de0\u3008\u303e\u3043\u3098\u30a1"+
		"\u30fc\u3101\u312f\u3133\u3190\u31a2\u31bc\u31f2\u3201\u3402\u4db7\u4e02"+
		"\u9fce\ua002\ua016\ua018\ua48e\ua4d2\ua4f9\ua502\ua60d\ua612\ua621\ua62c"+
		"\ua62d\ua670\ua6e7\ua7f9\ua803\ua805\ua807\ua809\ua80c\ua80e\ua824\ua842"+
		"\ua875\ua884\ua8b5\ua8f4\ua8f9\ua8fd\ua927\ua932\ua948\ua962\ua97e\ua986"+
		"\ua9b4\ua9e2\ua9e6\ua9e9\ua9f1\ua9fc\uaa00\uaa02\uaa2a\uaa42\uaa44\uaa46"+
		"\uaa4d\uaa62\uaa71\uaa73\uaa78\uaa7c\uaab1\uaab3\uaabf\uaac2\uaac4\uaadd"+
		"\uaade\uaae2\uaaec\uaaf4\uab08\uab0b\uab10\uab13\uab18\uab22\uab28\uab2a"+
		"\uab30\uabc2\uabe4\uac02\ud7a5\ud7b2\ud7c8\ud7cd\ud7fd\uf902\ufa6f\ufa72"+
		"\ufadb\ufb1f\ufb2a\ufb2c\ufb38\ufb3a\ufb3e\ufb40\ufbb3\ufbd5\ufd3f\ufd52"+
		"\ufd91\ufd94\ufdc9\ufdf2\ufdfd\ufe72\ufe76\ufe78\ufefe\uff68\uff71\uff73"+
		"\uff9f\uffa2\uffc0\uffc4\uffc9\uffcc\uffd1\uffd4\uffd9\uffdc\uffde\4\2"+
		"\u16f0\u16f2\u2162\u2171\5\2\u0905\u0905\u0940\u0942\u094b\u094e\5\2\u00af"+
		"\u00af\u0602\u0605\u06df\u06df\b\2aa\u2041\u2042\u2056\u2056\ufe35\ufe36"+
		"\ufe4f\ufe51\uff41\uff41\'\2\62;\u0662\u066b\u06f2\u06fb\u07c2\u07cb\u0968"+
		"\u0971\u09e8\u09f1\u0a68\u0a71\u0ae8\u0af1\u0b68\u0b71\u0be8\u0bf1\u0c68"+
		"\u0c71\u0ce8\u0cf1\u0d68\u0d71\u0de8\u0df1\u0e52\u0e5b\u0ed2\u0edb\u0f22"+
		"\u0f2b\u1042\u104b\u1092\u109b\u17e2\u17eb\u1812\u181b\u1948\u1951\u19d2"+
		"\u19db\u1a82\u1a8b\u1a92\u1a9b\u1b52\u1b5b\u1bb2\u1bbb\u1c42\u1c4b\u1c52"+
		"\u1c5b\ua622\ua62b\ua8d2\ua8db\ua902\ua90b\ua9d2\ua9db\ua9f2\ua9fb\uaa52"+
		"\uaa5b\uabf2\uabfb\uff12\uff1b\2\u0513\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2"+
		"\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2"+
		"\23\3\2\2\2\2\25\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3"+
		"\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2"+
		"\2\2\2-\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2S\3\2\2\2"+
		"\2U\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2i"+
		"\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\2s\3\2\2\2\2u\3\2"+
		"\2\2\2w\3\2\2\2\2y\3\2\2\2\2{\3\2\2\2\2}\3\2\2\2\2\177\3\2\2\2\2\u0081"+
		"\3\2\2\2\2\u0083\3\2\2\2\2\u0085\3\2\2\2\2\u0087\3\2\2\2\2\u0089\3\2\2"+
		"\2\2\u008b\3\2\2\2\2\u008d\3\2\2\2\2\u008f\3\2\2\2\2\u0091\3\2\2\2\2\u0093"+
		"\3\2\2\2\2\u0095\3\2\2\2\2\u0097\3\2\2\2\2\u0099\3\2\2\2\2\u009b\3\2\2"+
		"\2\2\u009d\3\2\2\2\2\u009f\3\2\2\2\2\u00a1\3\2\2\2\2\u00a3\3\2\2\2\2\u00a5"+
		"\3\2\2\2\2\u00a7\3\2\2\2\2\u00a9\3\2\2\2\2\u00ab\3\2\2\2\2\u00ad\3\2\2"+
		"\2\2\u00af\3\2\2\2\2\u00b1\3\2\2\2\2\u00b3\3\2\2\2\2\u00b5\3\2\2\2\2\u00b7"+
		"\3\2\2\2\2\u00b9\3\2\2\2\2\u00bb\3\2\2\2\2\u00bd\3\2\2\2\2\u00bf\3\2\2"+
		"\2\2\u00c1\3\2\2\2\2\u00c3\3\2\2\2\2\u00c5\3\2\2\2\2\u00c7\3\2\2\2\2\u00c9"+
		"\3\2\2\2\2\u00cb\3\2\2\2\2\u00cd\3\2\2\2\2\u00cf\3\2\2\2\2\u00d1\3\2\2"+
		"\2\2\u00d3\3\2\2\2\2\u00d5\3\2\2\2\2\u00d7\3\2\2\2\2\u00d9\3\2\2\2\2\u00db"+
		"\3\2\2\2\2\u00dd\3\2\2\2\2\u00df\3\2\2\2\2\u00e1\3\2\2\2\2\u00e3\3\2\2"+
		"\2\2\u00e5\3\2\2\2\2\u00e7\3\2\2\2\2\u00e9\3\2\2\2\2\u00eb\3\2\2\2\2\u00ed"+
		"\3\2\2\2\2\u00ef\3\2\2\2\2\u00f1\3\2\2\2\2\u00f3\3\2\2\2\2\u00f5\3\2\2"+
		"\2\2\u00f7\3\2\2\2\2\u00f9\3\2\2\2\2\u00fb\3\2\2\2\2\u00fd\3\2\2\2\2\u00ff"+
		"\3\2\2\2\2\u0101\3\2\2\2\2\u0103\3\2\2\2\2\u0105\3\2\2\2\2\u0107\3\2\2"+
		"\2\2\u0109\3\2\2\2\2\u010b\3\2\2\2\2\u010d\3\2\2\2\2\u010f\3\2\2\2\2\u0111"+
		"\3\2\2\2\2\u0113\3\2\2\2\2\u0115\3\2\2\2\2\u0117\3\2\2\2\2\u0119\3\2\2"+
		"\2\2\u011b\3\2\2\2\2\u011d\3\2\2\2\2\u011f\3\2\2\2\2\u0121\3\2\2\2\2\u0123"+
		"\3\2\2\2\2\u0125\3\2\2\2\2\u0127\3\2\2\2\2\u0129\3\2\2\2\2\u012b\3\2\2"+
		"\2\2\u012d\3\2\2\2\2\u012f\3\2\2\2\2\u0131\3\2\2\2\2\u0133\3\2\2\2\2\u0135"+
		"\3\2\2\2\2\u0137\3\2\2\2\2\u0139\3\2\2\2\2\u013b\3\2\2\2\2\u013d\3\2\2"+
		"\2\2\u013f\3\2\2\2\2\u0141\3\2\2\2\2\u0143\3\2\2\2\2\u0145\3\2\2\2\2\u0147"+
		"\3\2\2\2\2\u0149\3\2\2\2\2\u014b\3\2\2\2\2\u014d\3\2\2\2\3\u0179\3\2\2"+
		"\2\5\u017f\3\2\2\2\7\u0181\3\2\2\2\t\u018d\3\2\2\2\13\u019c\3\2\2\2\r"+
		"\u01a7\3\2\2\2\17\u01b9\3\2\2\2\21\u01bb\3\2\2\2\23\u01bd\3\2\2\2\25\u01bf"+
		"\3\2\2\2\27\u01c2\3\2\2\2\31\u01c4\3\2\2\2\33\u01c7\3\2\2\2\35\u01cd\3"+
		"\2\2\2\37\u01cf\3\2\2\2!\u01d3\3\2\2\2#\u01d6\3\2\2\2%\u01db\3\2\2\2\'"+
		"\u01e1\3\2\2\2)\u01e6\3\2\2\2+\u01f3\3\2\2\2-\u01f5\3\2\2\2/\u01f8\3\2"+
		"\2\2\61\u0201\3\2\2\2\63\u0203\3\2\2\2\65\u0206\3\2\2\2\67\u020c\3\2\2"+
		"\29\u020f\3\2\2\2;\u0213\3\2\2\2=\u0216\3\2\2\2?\u0218\3\2\2\2A\u021f"+
		"\3\2\2\2C\u0222\3\2\2\2E\u0228\3\2\2\2G\u022a\3\2\2\2I\u022e\3\2\2\2K"+
		"\u0232\3\2\2\2M\u0239\3\2\2\2O\u023c\3\2\2\2Q\u0242\3\2\2\2S\u0244\3\2"+
		"\2\2U\u0247\3\2\2\2W\u0249\3\2\2\2Y\u0250\3\2\2\2[\u0253\3\2\2\2]\u0259"+
		"\3\2\2\2_\u025b\3\2\2\2a\u025d\3\2\2\2c\u025f\3\2\2\2e\u0261\3\2\2\2g"+
		"\u0263\3\2\2\2i\u0266\3\2\2\2k\u0269\3\2\2\2m\u0275\3\2\2\2o\u0277\3\2"+
		"\2\2q\u0280\3\2\2\2s\u0286\3\2\2\2u\u0289\3\2\2\2w\u028e\3\2\2\2y\u0294"+
		"\3\2\2\2{\u0299\3\2\2\2}\u029f\3\2\2\2\177\u02a7\3\2\2\2\u0081\u02ad\3"+
		"\2\2\2\u0083\u02b3\3\2\2\2\u0085\u02bc\3\2\2\2\u0087\u02c4\3\2\2\2\u0089"+
		"\u02cd\3\2\2\2\u008b\u02d0\3\2\2\2\u008d\u02d5\3\2\2\2\u008f\u02da\3\2"+
		"\2\2\u0091\u02e0\3\2\2\2\u0093\u02e9\3\2\2\2\u0095\u02f0\3\2\2\2\u0097"+
		"\u02f6\3\2\2\2\u0099\u02fe\3\2\2\2\u009b\u0306\3\2\2\2\u009d\u030c\3\2"+
		"\2\2\u009f\u0311\3\2\2\2\u00a1\u0315\3\2\2\2\u00a3\u031d\3\2\2\2\u00a5"+
		"\u0322\3\2\2\2\u00a7\u0325\3\2\2\2\u00a9\u032e\3\2\2\2\u00ab\u0331\3\2"+
		"\2\2\u00ad\u033b\3\2\2\2\u00af\u0344\3\2\2\2\u00b1\u0347\3\2\2\2\u00b3"+
		"\u034c\3\2\2\2\u00b5\u0355\3\2\2\2\u00b7\u035c\3\2\2\2\u00b9\u0366\3\2"+
		"\2\2\u00bb\u036a\3\2\2\2\u00bd\u036f\3\2\2\2\u00bf\u0378\3\2\2\2\u00c1"+
		"\u037c\3\2\2\2\u00c3\u0385\3\2\2\2\u00c5\u038c\3\2\2\2\u00c7\u0394\3\2"+
		"\2\2\u00c9\u039f\3\2\2\2\u00cb\u03a9\3\2\2\2\u00cd\u03b0\3\2\2\2\u00cf"+
		"\u03b9\3\2\2\2\u00d1\u03bd\3\2\2\2\u00d3\u03c4\3\2\2\2\u00d5\u03cb\3\2"+
		"\2\2\u00d7\u03d2\3\2\2\2\u00d9\u03dd\3\2\2\2\u00db\u03e4\3\2\2\2\u00dd"+
		"\u03eb\3\2\2\2\u00df\u03f0\3\2\2\2\u00e1\u03f6\3\2\2\2\u00e3\u03fb\3\2"+
		"\2\2\u00e5\u03ff\3\2\2\2\u00e7\u0406\3\2\2\2\u00e9\u0410\3\2\2\2\u00eb"+
		"\u0417\3\2\2\2\u00ed\u041d\3\2\2\2\u00ef\u0425\3\2\2\2\u00f1\u042a\3\2"+
		"\2\2\u00f3\u0433\3\2\2\2\u00f5\u0439\3\2\2\2\u00f7\u043b\3\2\2\2\u00f9"+
		"\u043d\3\2\2\2\u00fb\u043f\3\2\2\2\u00fd\u0441\3\2\2\2\u00ff\u0443\3\2"+
		"\2\2\u0101\u0445\3\2\2\2\u0103\u0447\3\2\2\2\u0105\u0449\3\2\2\2\u0107"+
		"\u044b\3\2\2\2\u0109\u044d\3\2\2\2\u010b\u044f\3\2\2\2\u010d\u0451\3\2"+
		"\2\2\u010f\u0453\3\2\2\2\u0111\u0455\3\2\2\2\u0113\u0457\3\2\2\2\u0115"+
		"\u0459\3\2\2\2\u0117\u045b\3\2\2\2\u0119\u045d\3\2\2\2\u011b\u045f\3\2"+
		"\2\2\u011d\u0461\3\2\2\2\u011f\u0463\3\2\2\2\u0121\u0465\3\2\2\2\u0123"+
		"\u0467\3\2\2\2\u0125\u046a\3\2\2\2\u0127\u046d\3\2\2\2\u0129\u0470\3\2"+
		"\2\2\u012b\u0473\3\2\2\2\u012d\u0476\3\2\2\2\u012f\u0479\3\2\2\2\u0131"+
		"\u047c\3\2\2\2\u0133\u047f\3\2\2\2\u0135\u0482\3\2\2\2\u0137\u0485\3\2"+
		"\2\2\u0139\u0488\3\2\2\2\u013b\u048b\3\2\2\2\u013d\u048e\3\2\2\2\u013f"+
		"\u0491\3\2\2\2\u0141\u0494\3\2\2\2\u0143\u0497\3\2\2\2\u0145\u049a\3\2"+
		"\2\2\u0147\u049d\3\2\2\2\u0149\u04a0\3\2\2\2\u014b\u04a3\3\2\2\2\u014d"+
		"\u04a8\3\2\2\2\u014f\u04ac\3\2\2\2\u0151\u04b5\3\2\2\2\u0153\u04bc\3\2"+
		"\2\2\u0155\u04c5\3\2\2\2\u0157\u04c9\3\2\2\2\u0159\u04cd\3\2\2\2\u015b"+
		"\u04d2\3\2\2\2\u015d\u04d6\3\2\2\2\u015f\u04ec\3\2\2\2\u0161\u04ee\3\2"+
		"\2\2\u0163\u04f0\3\2\2\2\u0165\u04f2\3\2\2\2\u0167\u04f4\3\2\2\2\u0169"+
		"\u04f6\3\2\2\2\u016b\u04f8\3\2\2\2\u016d\u04fa\3\2\2\2\u016f\u04fc\3\2"+
		"\2\2\u0171\u04fe\3\2\2\2\u0173\u0500\3\2\2\2\u0175\u0502\3\2\2\2\u0177"+
		"\u0504\3\2\2\2\u0179\u017a\7\u00f1\2\2\u017a\u017b\7\u00bd\2\2\u017b\u017c"+
		"\7\u00c1\2\2\u017c\u017d\3\2\2\2\u017d\u017e\b\2\2\2\u017e\4\3\2\2\2\u017f"+
		"\u0180\7\2\2\3\u0180\6\3\2\2\2\u0181\u0182\7\61\2\2\u0182\u0183\7\61\2"+
		"\2\u0183\u0184\7\61\2\2\u0184\u0188\3\2\2\2\u0185\u0187\5\27\f\2\u0186"+
		"\u0185\3\2\2\2\u0187\u018a\3\2\2\2\u0188\u0186\3\2\2\2\u0188\u0189\3\2"+
		"\2\2\u0189\u018b\3\2\2\2\u018a\u0188\3\2\2\2\u018b\u018c\b\4\3\2\u018c"+
		"\b\3\2\2\2\u018d\u018e\7\61\2\2\u018e\u018f\7,\2\2\u018f\u0190\7,\2\2"+
		"\u0190\u0194\3\2\2\2\u0191\u0193\13\2\2\2\u0192\u0191\3\2\2\2\u0193\u0196"+
		"\3\2\2\2\u0194\u0195\3\2\2\2\u0194\u0192\3\2\2\2\u0195\u0197\3\2\2\2\u0196"+
		"\u0194\3\2\2\2\u0197\u0198\7,\2\2\u0198\u0199\7\61\2\2\u0199\u019a\3\2"+
		"\2\2\u019a\u019b\b\5\3\2\u019b\n\3\2\2\2\u019c\u019d\7\61\2\2\u019d\u019e"+
		"\7\61\2\2\u019e\u01a2\3\2\2\2\u019f\u01a1\5\27\f\2\u01a0\u019f\3\2\2\2"+
		"\u01a1\u01a4\3\2\2\2\u01a2\u01a0\3\2\2\2\u01a2\u01a3\3\2\2\2\u01a3\u01a5"+
		"\3\2\2\2\u01a4\u01a2\3\2\2\2\u01a5\u01a6\b\6\3\2\u01a6\f\3\2\2\2\u01a7"+
		"\u01a8\7\61\2\2\u01a8\u01a9\7,\2\2\u01a9\u01ad\3\2\2\2\u01aa\u01ac\13"+
		"\2\2\2\u01ab\u01aa\3\2\2\2\u01ac\u01af\3\2\2\2\u01ad\u01ae\3\2\2\2\u01ad"+
		"\u01ab\3\2\2\2\u01ae\u01b0\3\2\2\2\u01af\u01ad\3\2\2\2\u01b0\u01b1\7,"+
		"\2\2\u01b1\u01b2\7\61\2\2\u01b2\u01b3\3\2\2\2\u01b3\u01b4\b\7\3\2\u01b4"+
		"\16\3\2\2\2\u01b5\u01ba\5\21\t\2\u01b6\u01b7\5\23\n\2\u01b7\u01b8\5\21"+
		"\t\2\u01b8\u01ba\3\2\2\2\u01b9\u01b5\3\2\2\2\u01b9\u01b6\3\2\2\2\u01ba"+
		"\20\3\2\2\2\u01bb\u01bc\7\f\2\2\u01bc\22\3\2\2\2\u01bd\u01be\7\17\2\2"+
		"\u01be\24\3\2\2\2\u01bf\u01c0\5\23\n\2\u01c0\u01c1\5\21\t\2\u01c1\26\3"+
		"\2\2\2\u01c2\u01c3\n\2\2\2\u01c3\30\3\2\2\2\u01c4\u01c5\7\"\2\2\u01c5"+
		"\32\3\2\2\2\u01c6\u01c8\5\31\r\2\u01c7\u01c6\3\2\2\2\u01c8\u01c9\3\2\2"+
		"\2\u01c9\u01c7\3\2\2\2\u01c9\u01ca\3\2\2\2\u01ca\u01cb\3\2\2\2\u01cb\u01cc"+
		"\b\16\4\2\u01cc\34\3\2\2\2\u01cd\u01ce\7\13\2\2\u01ce\36\3\2\2\2\u01cf"+
		"\u01d0\7)\2\2\u01d0 \3\2\2\2\u01d1\u01d4\5\u0107\u0084\2\u01d2\u01d4\5"+
		"\u0109\u0085\2\u01d3\u01d1\3\2\2\2\u01d3\u01d2\3\2\2\2\u01d4\"\3\2\2\2"+
		"\u01d5\u01d7\5!\21\2\u01d6\u01d5\3\2\2\2\u01d6\u01d7\3\2\2\2\u01d7\u01d8"+
		"\3\2\2\2\u01d8\u01d9\5+\26\2\u01d9$\3\2\2\2\u01da\u01dc\5!\21\2\u01db"+
		"\u01da\3\2\2\2\u01db\u01dc\3\2\2\2\u01dc\u01dd\3\2\2\2\u01dd\u01de\5;"+
		"\36\2\u01de\u01df\5=\37\2\u01df&\3\2\2\2\u01e0\u01e2\5!\21\2\u01e1\u01e0"+
		"\3\2\2\2\u01e1\u01e2\3\2\2\2\u01e2\u01e3\3\2\2\2\u01e3\u01e4\5G$\2\u01e4"+
		"\u01e5\5I%\2\u01e5(\3\2\2\2\u01e6\u01e7\5S*\2\u01e7\u01e8\5U+\2\u01e8"+
		"*\3\2\2\2\u01e9\u01f4\7\62\2\2\u01ea\u01f1\5\63\32\2\u01eb\u01ed\5/\30"+
		"\2\u01ec\u01eb\3\2\2\2\u01ec\u01ed\3\2\2\2\u01ed\u01f2\3\2\2\2\u01ee\u01ef"+
		"\59\35\2\u01ef\u01f0\5/\30\2\u01f0\u01f2\3\2\2\2\u01f1\u01ec\3\2\2\2\u01f1"+
		"\u01ee\3\2\2\2\u01f2\u01f4\3\2\2\2\u01f3\u01e9\3\2\2\2\u01f3\u01ea\3\2"+
		"\2\2\u01f4,\3\2\2\2\u01f5\u01f6\t\3\2\2\u01f6\u01f7\5m\67\2\u01f7.\3\2"+
		"\2\2\u01f8\u01fd\5\61\31\2\u01f9\u01fb\5\65\33\2\u01fa\u01f9\3\2\2\2\u01fa"+
		"\u01fb\3\2\2\2\u01fb\u01fc\3\2\2\2\u01fc\u01fe\5\61\31\2\u01fd\u01fa\3"+
		"\2\2\2\u01fd\u01fe\3\2\2\2\u01fe\60\3\2\2\2\u01ff\u0202\7\62\2\2\u0200"+
		"\u0202\5\63\32\2\u0201\u01ff\3\2\2\2\u0201\u0200\3\2\2\2\u0202\62\3\2"+
		"\2\2\u0203\u0204\t\4\2\2\u0204\64\3\2\2\2\u0205\u0207\5\67\34\2\u0206"+
		"\u0205\3\2\2\2\u0207\u0208\3\2\2\2\u0208\u0206\3\2\2\2\u0208\u0209\3\2"+
		"\2\2\u0209\66\3\2\2\2\u020a\u020d\5\61\31\2\u020b\u020d\5\37\20\2\u020c"+
		"\u020a\3\2\2\2\u020c\u020b\3\2\2\2\u020d8\3\2\2\2\u020e\u0210\5\37\20"+
		"\2\u020f\u020e\3\2\2\2\u0210\u0211\3\2\2\2\u0211\u020f\3\2\2\2\u0211\u0212"+
		"\3\2\2\2\u0212:\3\2\2\2\u0213\u0214\7\62\2\2\u0214\u0215\7z\2\2\u0215"+
		"<\3\2\2\2\u0216\u0217\5? \2\u0217>\3\2\2\2\u0218\u021d\5A!\2\u0219\u021b"+
		"\5C\"\2\u021a\u0219\3\2\2\2\u021a\u021b\3\2\2\2\u021b\u021c\3\2\2\2\u021c"+
		"\u021e\5A!\2\u021d\u021a\3\2\2\2\u021d\u021e\3\2\2\2\u021e@\3\2\2\2\u021f"+
		"\u0220\t\5\2\2\u0220B\3\2\2\2\u0221\u0223\5E#\2\u0222\u0221\3\2\2\2\u0223"+
		"\u0224\3\2\2\2\u0224\u0222\3\2\2\2\u0224\u0225\3\2\2\2\u0225D\3\2\2\2"+
		"\u0226\u0229\5A!\2\u0227\u0229\5\37\20\2\u0228\u0226\3\2\2\2\u0228\u0227"+
		"\3\2\2\2\u0229F\3\2\2\2\u022a\u022b\7\62\2\2\u022b\u022c\7q\2\2\u022c"+
		"H\3\2\2\2\u022d\u022f\59\35\2\u022e\u022d\3\2\2\2\u022e\u022f\3\2\2\2"+
		"\u022f\u0230\3\2\2\2\u0230\u0231\5K&\2\u0231J\3\2\2\2\u0232\u0237\5M\'"+
		"\2\u0233\u0235\5O(\2\u0234\u0233\3\2\2\2\u0234\u0235\3\2\2\2\u0235\u0236"+
		"\3\2\2\2\u0236\u0238\5M\'\2\u0237\u0234\3\2\2\2\u0237\u0238\3\2\2\2\u0238"+
		"L\3\2\2\2\u0239\u023a\t\6\2\2\u023aN\3\2\2\2\u023b\u023d\5Q)\2\u023c\u023b"+
		"\3\2\2\2\u023d\u023e\3\2\2\2\u023e\u023c\3\2\2\2\u023e\u023f\3\2\2\2\u023f"+
		"P\3\2\2\2\u0240\u0243\5M\'\2\u0241\u0243\5\37\20\2\u0242\u0240\3\2\2\2"+
		"\u0242\u0241\3\2\2\2\u0243R\3\2\2\2\u0244\u0245\7\62\2\2\u0245\u0246\7"+
		"d\2\2\u0246T\3\2\2\2\u0247\u0248\5W,\2\u0248V\3\2\2\2\u0249\u024e\5Y-"+
		"\2\u024a\u024c\5[.\2\u024b\u024a\3\2\2\2\u024b\u024c\3\2\2\2\u024c\u024d"+
		"\3\2\2\2\u024d\u024f\5Y-\2\u024e\u024b\3\2\2\2\u024e\u024f\3\2\2\2\u024f"+
		"X\3\2\2\2\u0250\u0251\t\7\2\2\u0251Z\3\2\2\2\u0252\u0254\5]/\2\u0253\u0252"+
		"\3\2\2\2\u0254\u0255\3\2\2\2\u0255\u0253\3\2\2\2\u0255\u0256\3\2\2\2\u0256"+
		"\\\3\2\2\2\u0257\u025a\5Y-\2\u0258\u025a\5\37\20\2\u0259\u0257\3\2\2\2"+
		"\u0259\u0258\3\2\2\2\u025a^\3\2\2\2\u025b\u025c\7\62\2\2\u025c`\3\2\2"+
		"\2\u025d\u025e\7\63\2\2\u025eb\3\2\2\2\u025f\u0260\7w\2\2\u0260d\3\2\2"+
		"\2\u0261\u0262\7k\2\2\u0262f\3\2\2\2\u0263\u0264\7\62\2\2\u0264\u0265"+
		"\7z\2\2\u0265h\3\2\2\2\u0266\u0267\7\62\2\2\u0267\u0268\7q\2\2\u0268j"+
		"\3\2\2\2\u0269\u026a\7\62\2\2\u026a\u026b\7d\2\2\u026bl\3\2\2\2\u026c"+
		"\u0276\4\63;\2\u026d\u026e\4\63;\2\u026e\u0276\4\62;\2\u026f\u0270\7\63"+
		"\2\2\u0270\u0271\4\62\63\2\u0271\u0276\4\62;\2\u0272\u0273\7\63\2\2\u0273"+
		"\u0274\4\62\64\2\u0274\u0276\4\62:\2\u0275\u026c\3\2\2\2\u0275\u026d\3"+
		"\2\2\2\u0275\u026f\3\2\2\2\u0275\u0272\3\2\2\2\u0276n\3\2\2\2\u0277\u0278"+
		"\7c\2\2\u0278\u0279\7d\2\2\u0279\u027a\7u\2\2\u027a\u027b\7v\2\2\u027b"+
		"\u027c\7t\2\2\u027c\u027d\7c\2\2\u027d\u027e\7e\2\2\u027e\u027f\7v\2\2"+
		"\u027fp\3\2\2\2\u0280\u0281\7c\2\2\u0281\u0282\7n\2\2\u0282\u0283\7k\2"+
		"\2\u0283\u0284\7c\2\2\u0284\u0285\7u\2\2\u0285r\3\2\2\2\u0286\u0287\7"+
		"c\2\2\u0287\u0288\7u\2\2\u0288t\3\2\2\2\u0289\u028a\7d\2\2\u028a\u028b"+
		"\7c\2\2\u028b\u028c\7u\2\2\u028c\u028d\7g\2\2\u028dv\3\2\2\2\u028e\u028f"+
		"\7d\2\2\u028f\u0290\7t\2\2\u0290\u0291\7g\2\2\u0291\u0292\7c\2\2\u0292"+
		"\u0293\7m\2\2\u0293x\3\2\2\2\u0294\u0295\7e\2\2\u0295\u0296\7c\2\2\u0296"+
		"\u0297\7u\2\2\u0297\u0298\7g\2\2\u0298z\3\2\2\2\u0299\u029a\7e\2\2\u029a"+
		"\u029b\7c\2\2\u029b\u029c\7v\2\2\u029c\u029d\7e\2\2\u029d\u029e\7j\2\2"+
		"\u029e|\3\2\2\2\u029f\u02a0\7e\2\2\u02a0\u02a1\7j\2\2\u02a1\u02a2\7g\2"+
		"\2\u02a2\u02a3\7e\2\2\u02a3\u02a4\7m\2\2\u02a4\u02a5\7g\2\2\u02a5\u02a6"+
		"\7f\2\2\u02a6~\3\2\2\2\u02a7\u02a8\7e\2\2\u02a8\u02a9\7n\2\2\u02a9\u02aa"+
		"\7c\2\2\u02aa\u02ab\7u\2\2\u02ab\u02ac\7u\2\2\u02ac\u0080\3\2\2\2\u02ad"+
		"\u02ae\7e\2\2\u02ae\u02af\7q\2\2\u02af\u02b0\7p\2\2\u02b0\u02b1\7u\2\2"+
		"\u02b1\u02b2\7v\2\2\u02b2\u0082\3\2\2\2\u02b3\u02b4\7e\2\2\u02b4\u02b5"+
		"\7q\2\2\u02b5\u02b6\7p\2\2\u02b6\u02b7\7v\2\2\u02b7\u02b8\7k\2\2\u02b8"+
		"\u02b9\7p\2\2\u02b9\u02ba\7w\2\2\u02ba\u02bb\7g\2\2\u02bb\u0084\3\2\2"+
		"\2\u02bc\u02bd\7f\2\2\u02bd\u02be\7g\2\2\u02be\u02bf\7h\2\2\u02bf\u02c0"+
		"\7c\2\2\u02c0\u02c1\7w\2\2\u02c1\u02c2\7n\2\2\u02c2\u02c3\7v\2\2\u02c3"+
		"\u0086\3\2\2\2\u02c4\u02c5\7f\2\2\u02c5\u02c6\7g\2\2\u02c6\u02c7\7n\2"+
		"\2\u02c7\u02c8\7g\2\2\u02c8\u02c9\7i\2\2\u02c9\u02ca\7c\2\2\u02ca\u02cb"+
		"\7v\2\2\u02cb\u02cc\7g\2\2\u02cc\u0088\3\2\2\2\u02cd\u02ce\7f\2\2\u02ce"+
		"\u02cf\7q\2\2\u02cf\u008a\3\2\2\2\u02d0\u02d1\7g\2\2\u02d1\u02d2\7n\2"+
		"\2\u02d2\u02d3\7u\2\2\u02d3\u02d4\7g\2\2\u02d4\u008c\3\2\2\2\u02d5\u02d6"+
		"\7g\2\2\u02d6\u02d7\7p\2\2\u02d7\u02d8\7w\2\2\u02d8\u02d9\7o\2\2\u02d9"+
		"\u008e\3\2\2\2\u02da\u02db\7g\2\2\u02db\u02dc\7x\2\2\u02dc\u02dd\7g\2"+
		"\2\u02dd\u02de\7p\2\2\u02de\u02df\7v\2\2\u02df\u0090\3\2\2\2\u02e0\u02e1"+
		"\7g\2\2\u02e1\u02e2\7z\2\2\u02e2\u02e3\7r\2\2\u02e3\u02e4\7n\2\2\u02e4"+
		"\u02e5\7k\2\2\u02e5\u02e6\7e\2\2\u02e6\u02e7\7k\2\2\u02e7\u02e8\7v\2\2"+
		"\u02e8\u0092\3\2\2\2\u02e9\u02ea\7g\2\2\u02ea\u02eb\7z\2\2\u02eb\u02ec"+
		"\7v\2\2\u02ec\u02ed\7g\2\2\u02ed\u02ee\7t\2\2\u02ee\u02ef\7p\2\2\u02ef"+
		"\u0094\3\2\2\2\u02f0\u02f1\7h\2\2\u02f1\u02f2\7c\2\2\u02f2\u02f3\7n\2"+
		"\2\u02f3\u02f4\7u\2\2\u02f4\u02f5\7g\2\2\u02f5\u0096\3\2\2\2\u02f6\u02f7"+
		"\7h\2\2\u02f7\u02f8\7k\2\2\u02f8\u02f9\7g\2\2\u02f9\u02fa\7n\2\2\u02fa"+
		"\u02fb\7f\2\2\u02fb\u02fc\7q\2\2\u02fc\u02fd\7h\2\2\u02fd\u0098\3\2\2"+
		"\2\u02fe\u02ff\7h\2\2\u02ff\u0300\7k\2\2\u0300\u0301\7p\2\2\u0301\u0302"+
		"\7c\2\2\u0302\u0303\7n\2\2\u0303\u0304\7n\2\2\u0304\u0305\7{\2\2\u0305"+
		"\u009a\3\2\2\2\u0306\u0307\7h\2\2\u0307\u0308\7k\2\2\u0308\u0309\7z\2"+
		"\2\u0309\u030a\7g\2\2\u030a\u030b\7f\2\2\u030b\u009c\3\2\2\2\u030c\u030d"+
		"\7h\2\2\u030d\u030e\7w\2\2\u030e\u030f\7p\2\2\u030f\u0310\7e\2\2\u0310"+
		"\u009e\3\2\2\2\u0311\u0312\7h\2\2\u0312\u0313\7q\2\2\u0313\u0314\7t\2"+
		"\2\u0314\u00a0\3\2\2\2\u0315\u0316\7h\2\2\u0316\u0317\7q\2\2\u0317\u0318"+
		"\7t\2\2\u0318\u0319\7g\2\2\u0319\u031a\7c\2\2\u031a\u031b\7e\2\2\u031b"+
		"\u031c\7j\2\2\u031c\u00a2\3\2\2\2\u031d\u031e\7i\2\2\u031e\u031f\7q\2"+
		"\2\u031f\u0320\7v\2\2\u0320\u0321\7q\2\2\u0321\u00a4\3\2\2\2\u0322\u0323"+
		"\7k\2\2\u0323\u0324\7h\2\2\u0324\u00a6\3\2\2\2\u0325\u0326\7k\2\2\u0326"+
		"\u0327\7o\2\2\u0327\u0328\7r\2\2\u0328\u0329\7n\2\2\u0329\u032a\7k\2\2"+
		"\u032a\u032b\7e\2\2\u032b\u032c\7k\2\2\u032c\u032d\7v\2\2\u032d\u00a8"+
		"\3\2\2\2\u032e\u032f\7k\2\2\u032f\u0330\7p\2\2\u0330\u00aa\3\2\2\2\u0331"+
		"\u0332\7k\2\2\u0332\u0333\7p\2\2\u0333\u0334\7v\2\2\u0334\u0335\7g\2\2"+
		"\u0335\u0336\7t\2\2\u0336\u0337\7h\2\2\u0337\u0338\7c\2\2\u0338\u0339"+
		"\7e\2\2\u0339\u033a\7g\2\2\u033a\u00ac\3\2\2\2\u033b\u033c\7k\2\2\u033c"+
		"\u033d\7p\2\2\u033d\u033e\7v\2\2\u033e\u033f\7g\2\2\u033f\u0340\7t\2\2"+
		"\u0340\u0341\7p\2\2\u0341\u0342\7c\2\2\u0342\u0343\7n\2\2\u0343\u00ae"+
		"\3\2\2\2\u0344\u0345\7k\2\2\u0345\u0346\7u\2\2\u0346\u00b0\3\2\2\2\u0347"+
		"\u0348\7n\2\2\u0348\u0349\7q\2\2\u0349\u034a\7e\2\2\u034a\u034b\7m\2\2"+
		"\u034b\u00b2\3\2\2\2\u034c\u034d\7o\2\2\u034d\u034e\7g\2\2\u034e\u034f"+
		"\7v\2\2\u034f\u0350\7j\2\2\u0350\u0351\7q\2\2\u0351\u0352\7f\2\2\u0352"+
		"\u0353\7q\2\2\u0353\u0354\7h\2\2\u0354\u00b4\3\2\2\2\u0355\u0356\7p\2"+
		"\2\u0356\u0357\7c\2\2\u0357\u0358\7o\2\2\u0358\u0359\7g\2\2\u0359\u035a"+
		"\7q\2\2\u035a\u035b\7h\2\2\u035b\u00b6\3\2\2\2\u035c\u035d\7p\2\2\u035d"+
		"\u035e\7c\2\2\u035e\u035f\7o\2\2\u035f\u0360\7g\2\2\u0360\u0361\7u\2\2"+
		"\u0361\u0362\7r\2\2\u0362\u0363\7c\2\2\u0363\u0364\7e\2\2\u0364\u0365"+
		"\7g\2\2\u0365\u00b8\3\2\2\2\u0366\u0367\7p\2\2\u0367\u0368\7g\2\2\u0368"+
		"\u0369\7y\2\2\u0369\u00ba\3\2\2\2\u036a\u036b\7p\2\2\u036b\u036c\7w\2"+
		"\2\u036c\u036d\7n\2\2\u036d\u036e\7n\2\2\u036e\u00bc\3\2\2\2\u036f\u0370"+
		"\7q\2\2\u0370\u0371\7r\2\2\u0371\u0372\7g\2\2\u0372\u0373\7t\2\2\u0373"+
		"\u0374\7c\2\2\u0374\u0375\7v\2\2\u0375\u0376\7q\2\2\u0376\u0377\7t\2\2"+
		"\u0377\u00be\3\2\2\2\u0378\u0379\7q\2\2\u0379\u037a\7w\2\2\u037a\u037b"+
		"\7v\2\2\u037b\u00c0\3\2\2\2\u037c\u037d\7q\2\2\u037d\u037e\7x\2\2\u037e"+
		"\u037f\7g\2\2\u037f\u0380\7t\2\2\u0380\u0381\7t\2\2\u0381\u0382\7k\2\2"+
		"\u0382\u0383\7f\2\2\u0383\u0384\7g\2\2\u0384\u00c2\3\2\2\2\u0385\u0386"+
		"\7r\2\2\u0386\u0387\7c\2\2\u0387\u0388\7t\2\2\u0388\u0389\7c\2\2\u0389"+
		"\u038a\7o\2\2\u038a\u038b\7u\2\2\u038b\u00c4\3\2\2\2\u038c\u038d\7r\2"+
		"\2\u038d\u038e\7t\2\2\u038e\u038f\7k\2\2\u038f\u0390\7x\2\2\u0390\u0391"+
		"\7c\2\2\u0391\u0392\7v\2\2\u0392\u0393\7g\2\2\u0393\u00c6\3\2\2\2\u0394"+
		"\u0395\7r\2\2\u0395\u0396\7t\2\2\u0396\u0397\7q\2\2\u0397\u0398\7r\2\2"+
		"\u0398\u0399\7g\2\2\u0399\u039a\7t\2\2\u039a\u039b\7v\2\2\u039b\u039c"+
		"\7{\2\2\u039c\u039d\7q\2\2\u039d\u039e\7h\2\2\u039e\u00c8\3\2\2\2\u039f"+
		"\u03a0\7r\2\2\u03a0\u03a1\7t\2\2\u03a1\u03a2\7q\2\2\u03a2\u03a3\7v\2\2"+
		"\u03a3\u03a4\7g\2\2\u03a4\u03a5\7e\2\2\u03a5\u03a6\7v\2\2\u03a6\u03a7"+
		"\7g\2\2\u03a7\u03a8\7f\2\2\u03a8\u00ca\3\2\2\2\u03a9\u03aa\7r\2\2\u03aa"+
		"\u03ab\7w\2\2\u03ab\u03ac\7d\2\2\u03ac\u03ad\7n\2\2\u03ad\u03ae\7k\2\2"+
		"\u03ae\u03af\7e\2\2\u03af\u00cc\3\2\2\2\u03b0\u03b1\7t\2\2\u03b1\u03b2"+
		"\7g\2\2\u03b2\u03b3\7c\2\2\u03b3\u03b4\7f\2\2\u03b4\u03b5\7q\2\2\u03b5"+
		"\u03b6\7p\2\2\u03b6\u03b7\7n\2\2\u03b7\u03b8\7{\2\2\u03b8\u00ce\3\2\2"+
		"\2\u03b9\u03ba\7t\2\2\u03ba\u03bb\7g\2\2\u03bb\u03bc\7h\2\2\u03bc\u00d0"+
		"\3\2\2\2\u03bd\u03be\7t\2\2\u03be\u03bf\7g\2\2\u03bf\u03c0\7v\2\2\u03c0"+
		"\u03c1\7w\2\2\u03c1\u03c2\7t\2\2\u03c2\u03c3\7p\2\2\u03c3\u00d2\3\2\2"+
		"\2\u03c4\u03c5\7u\2\2\u03c5\u03c6\7g\2\2\u03c6\u03c7\7c\2\2\u03c7\u03c8"+
		"\7n\2\2\u03c8\u03c9\7g\2\2\u03c9\u03ca\7f\2\2\u03ca\u00d4\3\2\2\2\u03cb"+
		"\u03cc\7u\2\2\u03cc\u03cd\7k\2\2\u03cd\u03ce\7|\2\2\u03ce\u03cf\7g\2\2"+
		"\u03cf\u03d0\7q\2\2\u03d0\u03d1\7h\2\2\u03d1\u00d6\3\2\2\2\u03d2\u03d3"+
		"\7u\2\2\u03d3\u03d4\7v\2\2\u03d4\u03d5\7c\2\2\u03d5\u03d6\7e\2\2\u03d6"+
		"\u03d7\7m\2\2\u03d7\u03d8\7c\2\2\u03d8\u03d9\7n\2\2\u03d9\u03da\7n\2\2"+
		"\u03da\u03db\7q\2\2\u03db\u03dc\7e\2\2\u03dc\u00d8\3\2\2\2\u03dd\u03de"+
		"\7u\2\2\u03de\u03df\7v\2\2\u03df\u03e0\7c\2\2\u03e0\u03e1\7v\2\2\u03e1"+
		"\u03e2\7k\2\2\u03e2\u03e3\7e\2\2\u03e3\u00da\3\2\2\2\u03e4\u03e5\7u\2"+
		"\2\u03e5\u03e6\7y\2\2\u03e6\u03e7\7k\2\2\u03e7\u03e8\7v\2\2\u03e8\u03e9"+
		"\7e\2\2\u03e9\u03ea\7j\2\2\u03ea\u00dc\3\2\2\2\u03eb\u03ec\7v\2\2\u03ec"+
		"\u03ed\7j\2\2\u03ed\u03ee\7k\2\2\u03ee\u03ef\7u\2\2\u03ef\u00de\3\2\2"+
		"\2\u03f0\u03f1\7v\2\2\u03f1\u03f2\7j\2\2\u03f2\u03f3\7t\2\2\u03f3\u03f4"+
		"\7q\2\2\u03f4\u03f5\7y\2\2\u03f5\u00e0\3\2\2\2\u03f6\u03f7\7v\2\2\u03f7"+
		"\u03f8\7t\2\2\u03f8\u03f9\7w\2\2\u03f9\u03fa\7g\2\2\u03fa\u00e2\3\2\2"+
		"\2\u03fb\u03fc\7v\2\2\u03fc\u03fd\7t\2\2\u03fd\u03fe\7{\2\2\u03fe\u00e4"+
		"\3\2\2\2\u03ff\u0400\7v\2\2\u0400\u0401\7{\2\2\u0401\u0402\7r\2\2\u0402"+
		"\u0403\7g\2\2\u0403\u0404\7q\2\2\u0404\u0405\7h\2\2\u0405\u00e6\3\2\2"+
		"\2\u0406\u0407\7w\2\2\u0407\u0408\7p\2\2\u0408\u0409\7e\2\2\u0409\u040a"+
		"\7j\2\2\u040a\u040b\7g\2\2\u040b\u040c\7e\2\2\u040c\u040d\7m\2\2\u040d"+
		"\u040e\7g\2\2\u040e\u040f\7f\2\2\u040f\u00e8\3\2\2\2\u0410\u0411\7w\2"+
		"\2\u0411\u0412\7p\2\2\u0412\u0413\7u\2\2\u0413\u0414\7c\2\2\u0414\u0415"+
		"\7h\2\2\u0415\u0416\7g\2\2\u0416\u00ea\3\2\2\2\u0417\u0418\7w\2\2\u0418"+
		"\u0419\7u\2\2\u0419\u041a\7k\2\2\u041a\u041b\7p\2\2\u041b\u041c\7i\2\2"+
		"\u041c\u00ec\3\2\2\2\u041d\u041e\7x\2\2\u041e\u041f\7k\2\2\u041f\u0420"+
		"\7t\2\2\u0420\u0421\7v\2\2\u0421\u0422\7w\2\2\u0422\u0423\7c\2\2\u0423"+
		"\u0424\7n\2\2\u0424\u00ee\3\2\2\2\u0425\u0426\7x\2\2\u0426\u0427\7q\2"+
		"\2\u0427\u0428\7k\2\2\u0428\u0429\7f\2\2\u0429\u00f0\3\2\2\2\u042a\u042b"+
		"\7x\2\2\u042b\u042c\7q\2\2\u042c\u042d\7n\2\2\u042d\u042e\7c\2\2\u042e"+
		"\u042f\7v\2\2\u042f\u0430\7k\2\2\u0430\u0431\7n\2\2\u0431\u0432\7g\2\2"+
		"\u0432\u00f2\3\2\2\2\u0433\u0434\7y\2\2\u0434\u0435\7j\2\2\u0435\u0436"+
		"\7k\2\2\u0436\u0437\7n\2\2\u0437\u0438\7g\2\2\u0438\u00f4\3\2\2\2\u0439"+
		"\u043a\7}\2\2\u043a\u00f6\3\2\2\2\u043b\u043c\7]\2\2\u043c\u00f8\3\2\2"+
		"\2\u043d\u043e\7_\2\2\u043e\u00fa\3\2\2\2\u043f\u0440\7*\2\2\u0440\u00fc"+
		"\3\2\2\2\u0441\u0442\7+\2\2\u0442\u00fe\3\2\2\2\u0443\u0444\7\60\2\2\u0444"+
		"\u0100\3\2\2\2\u0445\u0446\7.\2\2\u0446\u0102\3\2\2\2\u0447\u0448\7<\2"+
		"\2\u0448\u0104\3\2\2\2\u0449\u044a\7=\2\2\u044a\u0106\3\2\2\2\u044b\u044c"+
		"\7-\2\2\u044c\u0108\3\2\2\2\u044d\u044e\7/\2\2\u044e\u010a\3\2\2\2\u044f"+
		"\u0450\7,\2\2\u0450\u010c\3\2\2\2\u0451\u0452\7\61\2\2\u0452\u010e\3\2"+
		"\2\2\u0453\u0454\7\'\2\2\u0454\u0110\3\2\2\2\u0455\u0456\7(\2\2\u0456"+
		"\u0112\3\2\2\2\u0457\u0458\7~\2\2\u0458\u0114\3\2\2\2\u0459\u045a\7`\2"+
		"\2\u045a\u0116\3\2\2\2\u045b\u045c\7#\2\2\u045c\u0118\3\2\2\2\u045d\u045e"+
		"\7\u0080\2\2\u045e\u011a\3\2\2\2\u045f\u0460\7?\2\2\u0460\u011c\3\2\2"+
		"\2\u0461\u0462\7>\2\2\u0462\u011e\3\2\2\2\u0463\u0464\7@\2\2\u0464\u0120"+
		"\3\2\2\2\u0465\u0466\7A\2\2\u0466\u0122\3\2\2\2\u0467\u0468\7<\2\2\u0468"+
		"\u0469\7<\2\2\u0469\u0124\3\2\2\2\u046a\u046b\7A\2\2\u046b\u046c\7A\2"+
		"\2\u046c\u0126\3\2\2\2\u046d\u046e\7-\2\2\u046e\u046f\7-\2\2\u046f\u0128"+
		"\3\2\2\2\u0470\u0471\7/\2\2\u0471\u0472\7/\2\2\u0472\u012a\3\2\2\2\u0473"+
		"\u0474\7(\2\2\u0474\u0475\7(\2\2\u0475\u012c\3\2\2\2\u0476\u0477\7~\2"+
		"\2\u0477\u0478\7~\2\2\u0478\u012e\3\2\2\2\u0479\u047a\7/\2\2\u047a\u047b"+
		"\7@\2\2\u047b\u0130\3\2\2\2\u047c\u047d\7?\2\2\u047d\u047e\7?\2\2\u047e"+
		"\u0132\3\2\2\2\u047f\u0480\7#\2\2\u0480\u0481\7?\2\2\u0481\u0134\3\2\2"+
		"\2\u0482\u0483\7>\2\2\u0483\u0484\7?\2\2\u0484\u0136\3\2\2\2\u0485\u0486"+
		"\7@\2\2\u0486\u0487\7?\2\2\u0487\u0138\3\2\2\2\u0488\u0489\7-\2\2\u0489"+
		"\u048a\7?\2\2\u048a\u013a\3\2\2\2\u048b\u048c\7/\2\2\u048c\u048d\7?\2"+
		"\2\u048d\u013c\3\2\2\2\u048e\u048f\7,\2\2\u048f\u0490\7?\2\2\u0490\u013e"+
		"\3\2\2\2\u0491\u0492\7\61\2\2\u0492\u0493\7?\2\2\u0493\u0140\3\2\2\2\u0494"+
		"\u0495\7\'\2\2\u0495\u0496\7?\2\2\u0496\u0142\3\2\2\2\u0497\u0498\7(\2"+
		"\2\u0498\u0499\7?\2\2\u0499\u0144\3\2\2\2\u049a\u049b\7~\2\2\u049b\u049c"+
		"\7?\2\2\u049c\u0146\3\2\2\2\u049d\u049e\7`\2\2\u049e\u049f\7?\2\2\u049f"+
		"\u0148\3\2\2\2\u04a0\u04a1\7>\2\2\u04a1\u04a2\7>\2\2\u04a2\u014a\3\2\2"+
		"\2\u04a3\u04a4\7>\2\2\u04a4\u04a5\7>\2\2\u04a5\u04a6\7?\2\2\u04a6\u014c"+
		"\3\2\2\2\u04a7\u04a9\7B\2\2\u04a8\u04a7\3\2\2\2\u04a8\u04a9\3\2\2\2\u04a9"+
		"\u04aa\3\2\2\2\u04aa\u04ab\5\u014f\u00a8\2\u04ab\u014e\3\2\2\2\u04ac\u04b0"+
		"\5\u0151\u00a9\2\u04ad\u04af\5\u0153\u00aa\2\u04ae\u04ad\3\2\2\2\u04af"+
		"\u04b2\3\2\2\2\u04b0\u04ae\3\2\2\2\u04b0\u04b1\3\2\2\2\u04b1\u0150\3\2"+
		"\2\2\u04b2\u04b0\3\2\2\2\u04b3\u04b6\5\u0155\u00ab\2\u04b4\u04b6\7a\2"+
		"\2\u04b5\u04b3\3\2\2\2\u04b5\u04b4\3\2\2\2\u04b6\u0152\3\2\2\2\u04b7\u04bd"+
		"\5\u0155\u00ab\2\u04b8\u04bd\5\u0157\u00ac\2\u04b9\u04bd\5\u0159\u00ad"+
		"\2\u04ba\u04bd\5\u015b\u00ae\2\u04bb\u04bd\5\u015d\u00af\2\u04bc\u04b7"+
		"\3\2\2\2\u04bc\u04b8\3\2\2\2\u04bc\u04b9\3\2\2\2\u04bc\u04ba\3\2\2\2\u04bc"+
		"\u04bb\3\2\2\2\u04bd\u0154\3\2\2\2\u04be\u04c6\5\u0163\u00b2\2\u04bf\u04c6"+
		"\5\u0165\u00b3\2\u04c0\u04c6\5\u0167\u00b4\2\u04c1\u04c6\5\u0169\u00b5"+
		"\2\u04c2\u04c6\5\u016b\u00b6\2\u04c3\u04c6\5\u016d\u00b7\2\u04c4\u04c6"+
		"\5\u015f\u00b0\2\u04c5\u04be\3\2\2\2\u04c5\u04bf\3\2\2\2\u04c5\u04c0\3"+
		"\2\2\2\u04c5\u04c1\3\2\2\2\u04c5\u04c2\3\2\2\2\u04c5\u04c3\3\2\2\2\u04c5"+
		"\u04c4\3\2\2\2\u04c6\u0156\3\2\2\2\u04c7\u04ca\5\u0177\u00bc\2\u04c8\u04ca"+
		"\5\u015f\u00b0\2\u04c9\u04c7\3\2\2\2\u04c9\u04c8\3\2\2\2\u04ca\u0158\3"+
		"\2\2\2\u04cb\u04ce\5\u0175\u00bb\2\u04cc\u04ce\5\u015f\u00b0\2\u04cd\u04cb"+
		"\3\2\2\2\u04cd\u04cc\3\2\2\2\u04ce\u015a\3\2\2\2\u04cf\u04d3\5\u016f\u00b8"+
		"\2\u04d0\u04d3\5\u0171\u00b9\2\u04d1\u04d3\5\u015f\u00b0\2\u04d2\u04cf"+
		"\3\2\2\2\u04d2\u04d0\3\2\2\2\u04d2\u04d1\3\2\2\2\u04d3\u015c\3\2\2\2\u04d4"+
		"\u04d7\5\u0173\u00ba\2\u04d5\u04d7\5\u015f\u00b0\2\u04d6\u04d4\3\2\2\2"+
		"\u04d6\u04d5\3\2\2\2\u04d7\u015e\3\2\2\2\u04d8\u04d9\7^\2\2\u04d9\u04da"+
		"\7w\2\2\u04da\u04db\3\2\2\2\u04db\u04dc\5A!\2\u04dc\u04dd\5A!\2\u04dd"+
		"\u04de\5A!\2\u04de\u04df\5A!\2\u04df\u04ed\3\2\2\2\u04e0\u04e1\7^\2\2"+
		"\u04e1\u04e2\7W\2\2\u04e2\u04e3\3\2\2\2\u04e3\u04e4\5A!\2\u04e4\u04e5"+
		"\5A!\2\u04e5\u04e6\5A!\2\u04e6\u04e7\5A!\2\u04e7\u04e8\5A!\2\u04e8\u04e9"+
		"\5A!\2\u04e9\u04ea\5A!\2\u04ea\u04eb\5A!\2\u04eb\u04ed\3\2\2\2\u04ec\u04d8"+
		"\3\2\2\2\u04ec\u04e0\3\2\2\2\u04ed\u0160\3\2\2\2\u04ee\u04ef\t\b\2\2\u04ef"+
		"\u0162\3\2\2\2\u04f0\u04f1\t\t\2\2\u04f1\u0164\3\2\2\2\u04f2\u04f3\t\n"+
		"\2\2\u04f3\u0166\3\2\2\2\u04f4\u04f5\t\13\2\2\u04f5\u0168\3\2\2\2\u04f6"+
		"\u04f7\t\f\2\2\u04f7\u016a\3\2\2\2\u04f8\u04f9\t\r\2\2\u04f9\u016c\3\2"+
		"\2\2\u04fa\u04fb\t\16\2\2\u04fb\u016e\3\2\2\2\u04fc\u04fd\4\u0302\u0312"+
		"\2\u04fd\u0170\3\2\2\2\u04fe\u04ff\t\17\2\2\u04ff\u0172\3\2\2\2\u0500"+
		"\u0501\t\20\2\2\u0501\u0174\3\2\2\2\u0502\u0503\t\21\2\2\u0503\u0176\3"+
		"\2\2\2\u0504\u0505\t\22\2\2\u0505\u0178\3\2\2\2.\2\u0188\u0194\u01a2\u01ad"+
		"\u01b9\u01c9\u01d3\u01d6\u01db\u01e1\u01ec\u01f1\u01f3\u01fa\u01fd\u0201"+
		"\u0208\u020c\u0211\u021a\u021d\u0224\u0228\u022e\u0234\u0237\u023e\u0242"+
		"\u024b\u024e\u0255\u0259\u0275\u04a8\u04b0\u04b5\u04bc\u04c5\u04c9\u04cd"+
		"\u04d2\u04d6\u04ec\5\2\4\2\2\6\2\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}