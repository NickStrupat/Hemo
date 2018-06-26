// Generated from c:\Dev\language testing\New\HemoParser.g4 by ANTLR 4.7
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class HemoParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Utf8ByteOrderMark=1, EndOfFile=2, SingleLineDocComment=3, DelimitedDocComment=4, 
		SingleLineComment=5, DelimitedComment=6, NewLine=7, LineFeed=8, CarriageReturn=9, 
		CrLf=10, Space=11, Spaces=12, Tab=13, Sign=14, DecimalIntegerLiteral=15, 
		HexadecimalIntegerLiteral=16, OctalIntegerLiteral=17, BinaryIntegerLiteral=18, 
		DecimalRealLiteral=19, CharacterLiteral=20, DecimalNumeral=21, IntegerTypeSuffix=22, 
		HexPrefix=23, HexNumeral=24, OctalPrefix=25, OctalNumeral=26, BinaryPrefix=27, 
		BinaryNumeral=28, ZERO=29, ONE=30, U=31, I=32, HEXADECIMAL_PREFIX=33, 
		OCTAL_PREFIX=34, BINARY_PREFIX=35, StorageSize=36, Abstract=37, Alias=38, 
		As=39, Base=40, Break=41, Case=42, Catch=43, Checked=44, Class=45, Const=46, 
		Continue=47, Default=48, Delegate=49, Do=50, Else=51, Enum=52, Event=53, 
		Explicit=54, Extern=55, False=56, FieldOf=57, Finally=58, Fixed=59, Func=60, 
		For=61, ForEach=62, Goto=63, If=64, Implicit=65, In=66, Interface=67, 
		Internal=68, Is=69, Lock=70, Methodof=71, Nameof=72, Namespace=73, New=74, 
		Null=75, Operator=76, Out=77, Override=78, Params=79, Private=80, PropertyOf=81, 
		Protected=82, Public=83, Readonly=84, Ref=85, Return=86, Sealed=87, SizeOf=88, 
		StackAlloc=89, Static=90, Switch=91, This=92, Throw=93, True=94, Try=95, 
		TypeOf=96, Unchecked=97, Unsafe=98, Using=99, Virtual=100, Void=101, Volatile=102, 
		While=103, OpenBrace=104, OpenBracket=105, CloseBracket=106, OpenParens=107, 
		CloseParens=108, Dot=109, Comma=110, Colon=111, Semicolon=112, Plus=113, 
		Minus=114, Star=115, Div=116, Percent=117, Amp=118, BitwiseOr=119, Caret=120, 
		Bang=121, Tilde=122, Assignment=123, LT=124, GT=125, INTERR=126, DOUBLE_COLON=127, 
		OP_COALESCING=128, OP_INC=129, OP_DEC=130, OP_AND=131, OP_OR=132, OP_PTR=133, 
		OP_EQ=134, OP_NE=135, OP_LE=136, OP_GE=137, OP_ADD_ASSIGNMENT=138, OP_SUB_ASSIGNMENT=139, 
		OP_MULT_ASSIGNMENT=140, OP_DIV_ASSIGNMENT=141, OP_MOD_ASSIGNMENT=142, 
		OP_AND_ASSIGNMENT=143, OP_OR_ASSIGNMENT=144, OP_XOR_ASSIGNMENT=145, OP_LEFT_SHIFT=146, 
		OP_LEFT_SHIFT_ASSIGNMENT=147, IDENTIFIER=148;
	public static final int
		RULE_compilationUnit = 0, RULE_literal = 1, RULE_nullLiteral = 2, RULE_booleanLiteral = 3, 
		RULE_integerLiteral = 4, RULE_decimalIntegerLiteral = 5, RULE_hexadecimalIntegerLiteral = 6, 
		RULE_octalIntegerLiteral = 7, RULE_binaryIntegerLiteral = 8, RULE_realLiteral = 9, 
		RULE_characterLiteral = 10;
	public static final String[] ruleNames = {
		"compilationUnit", "literal", "nullLiteral", "booleanLiteral", "integerLiteral", 
		"decimalIntegerLiteral", "hexadecimalIntegerLiteral", "octalIntegerLiteral", 
		"binaryIntegerLiteral", "realLiteral", "characterLiteral"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'\u00EF\u00BB\u00BF'", null, null, null, null, null, null, "'\n'", 
		"'\r'", null, "'\u0020'", null, "'\t'", null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, "'0'", "'1'", 
		"'u'", "'i'", "'0x'", "'0o'", "'0b'", null, "'abstract'", "'alias'", "'as'", 
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
		"CrLf", "Space", "Spaces", "Tab", "Sign", "DecimalIntegerLiteral", "HexadecimalIntegerLiteral", 
		"OctalIntegerLiteral", "BinaryIntegerLiteral", "DecimalRealLiteral", "CharacterLiteral", 
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

	@Override
	public String getGrammarFileName() { return "HemoParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public HemoParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class CompilationUnitContext extends ParserRuleContext {
		public TerminalNode EndOfFile() { return getToken(HemoParser.EndOfFile, 0); }
		public TerminalNode Utf8ByteOrderMark() { return getToken(HemoParser.Utf8ByteOrderMark, 0); }
		public List<LiteralContext> literal() {
			return getRuleContexts(LiteralContext.class);
		}
		public LiteralContext literal(int i) {
			return getRuleContext(LiteralContext.class,i);
		}
		public CompilationUnitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compilationUnit; }
	}

	public final CompilationUnitContext compilationUnit() throws RecognitionException {
		CompilationUnitContext _localctx = new CompilationUnitContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_compilationUnit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(23);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Utf8ByteOrderMark) {
				{
				setState(22);
				match(Utf8ByteOrderMark);
				}
			}

			setState(28);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << DecimalIntegerLiteral) | (1L << HexadecimalIntegerLiteral) | (1L << OctalIntegerLiteral) | (1L << BinaryIntegerLiteral) | (1L << DecimalRealLiteral) | (1L << CharacterLiteral) | (1L << False))) != 0) || _la==Null || _la==True) {
				{
				{
				setState(25);
				literal();
				}
				}
				setState(30);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(31);
			match(EndOfFile);
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

	public static class LiteralContext extends ParserRuleContext {
		public NullLiteralContext nullLiteral() {
			return getRuleContext(NullLiteralContext.class,0);
		}
		public BooleanLiteralContext booleanLiteral() {
			return getRuleContext(BooleanLiteralContext.class,0);
		}
		public IntegerLiteralContext integerLiteral() {
			return getRuleContext(IntegerLiteralContext.class,0);
		}
		public RealLiteralContext realLiteral() {
			return getRuleContext(RealLiteralContext.class,0);
		}
		public CharacterLiteralContext characterLiteral() {
			return getRuleContext(CharacterLiteralContext.class,0);
		}
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_literal);
		try {
			setState(38);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Null:
				enterOuterAlt(_localctx, 1);
				{
				setState(33);
				nullLiteral();
				}
				break;
			case False:
			case True:
				enterOuterAlt(_localctx, 2);
				{
				setState(34);
				booleanLiteral();
				}
				break;
			case DecimalIntegerLiteral:
			case HexadecimalIntegerLiteral:
			case OctalIntegerLiteral:
			case BinaryIntegerLiteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(35);
				integerLiteral();
				}
				break;
			case DecimalRealLiteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(36);
				realLiteral();
				}
				break;
			case CharacterLiteral:
				enterOuterAlt(_localctx, 5);
				{
				setState(37);
				characterLiteral();
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

	public static class NullLiteralContext extends ParserRuleContext {
		public TerminalNode Null() { return getToken(HemoParser.Null, 0); }
		public NullLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nullLiteral; }
	}

	public final NullLiteralContext nullLiteral() throws RecognitionException {
		NullLiteralContext _localctx = new NullLiteralContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_nullLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(40);
			match(Null);
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

	public static class BooleanLiteralContext extends ParserRuleContext {
		public TerminalNode True() { return getToken(HemoParser.True, 0); }
		public TerminalNode False() { return getToken(HemoParser.False, 0); }
		public BooleanLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanLiteral; }
	}

	public final BooleanLiteralContext booleanLiteral() throws RecognitionException {
		BooleanLiteralContext _localctx = new BooleanLiteralContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_booleanLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(42);
			_la = _input.LA(1);
			if ( !(_la==False || _la==True) ) {
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

	public static class IntegerLiteralContext extends ParserRuleContext {
		public DecimalIntegerLiteralContext decimalIntegerLiteral() {
			return getRuleContext(DecimalIntegerLiteralContext.class,0);
		}
		public HexadecimalIntegerLiteralContext hexadecimalIntegerLiteral() {
			return getRuleContext(HexadecimalIntegerLiteralContext.class,0);
		}
		public OctalIntegerLiteralContext octalIntegerLiteral() {
			return getRuleContext(OctalIntegerLiteralContext.class,0);
		}
		public BinaryIntegerLiteralContext binaryIntegerLiteral() {
			return getRuleContext(BinaryIntegerLiteralContext.class,0);
		}
		public IntegerLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integerLiteral; }
	}

	public final IntegerLiteralContext integerLiteral() throws RecognitionException {
		IntegerLiteralContext _localctx = new IntegerLiteralContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_integerLiteral);
		try {
			setState(48);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DecimalIntegerLiteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(44);
				decimalIntegerLiteral();
				}
				break;
			case HexadecimalIntegerLiteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(45);
				hexadecimalIntegerLiteral();
				}
				break;
			case OctalIntegerLiteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(46);
				octalIntegerLiteral();
				}
				break;
			case BinaryIntegerLiteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(47);
				binaryIntegerLiteral();
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

	public static class DecimalIntegerLiteralContext extends ParserRuleContext {
		public TerminalNode DecimalIntegerLiteral() { return getToken(HemoParser.DecimalIntegerLiteral, 0); }
		public DecimalIntegerLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decimalIntegerLiteral; }
	}

	public final DecimalIntegerLiteralContext decimalIntegerLiteral() throws RecognitionException {
		DecimalIntegerLiteralContext _localctx = new DecimalIntegerLiteralContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_decimalIntegerLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(50);
			match(DecimalIntegerLiteral);
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

	public static class HexadecimalIntegerLiteralContext extends ParserRuleContext {
		public TerminalNode HexadecimalIntegerLiteral() { return getToken(HemoParser.HexadecimalIntegerLiteral, 0); }
		public HexadecimalIntegerLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_hexadecimalIntegerLiteral; }
	}

	public final HexadecimalIntegerLiteralContext hexadecimalIntegerLiteral() throws RecognitionException {
		HexadecimalIntegerLiteralContext _localctx = new HexadecimalIntegerLiteralContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_hexadecimalIntegerLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(52);
			match(HexadecimalIntegerLiteral);
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

	public static class OctalIntegerLiteralContext extends ParserRuleContext {
		public TerminalNode OctalIntegerLiteral() { return getToken(HemoParser.OctalIntegerLiteral, 0); }
		public OctalIntegerLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_octalIntegerLiteral; }
	}

	public final OctalIntegerLiteralContext octalIntegerLiteral() throws RecognitionException {
		OctalIntegerLiteralContext _localctx = new OctalIntegerLiteralContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_octalIntegerLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(54);
			match(OctalIntegerLiteral);
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

	public static class BinaryIntegerLiteralContext extends ParserRuleContext {
		public TerminalNode BinaryIntegerLiteral() { return getToken(HemoParser.BinaryIntegerLiteral, 0); }
		public BinaryIntegerLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binaryIntegerLiteral; }
	}

	public final BinaryIntegerLiteralContext binaryIntegerLiteral() throws RecognitionException {
		BinaryIntegerLiteralContext _localctx = new BinaryIntegerLiteralContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_binaryIntegerLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(56);
			match(BinaryIntegerLiteral);
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

	public static class RealLiteralContext extends ParserRuleContext {
		public TerminalNode DecimalRealLiteral() { return getToken(HemoParser.DecimalRealLiteral, 0); }
		public RealLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_realLiteral; }
	}

	public final RealLiteralContext realLiteral() throws RecognitionException {
		RealLiteralContext _localctx = new RealLiteralContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_realLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(58);
			match(DecimalRealLiteral);
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

	public static class CharacterLiteralContext extends ParserRuleContext {
		public TerminalNode CharacterLiteral() { return getToken(HemoParser.CharacterLiteral, 0); }
		public CharacterLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_characterLiteral; }
	}

	public final CharacterLiteralContext characterLiteral() throws RecognitionException {
		CharacterLiteralContext _localctx = new CharacterLiteralContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_characterLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(60);
			match(CharacterLiteral);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u0096A\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\3\2\5\2\32\n\2\3\2\7\2\35\n\2\f\2\16\2 \13\2\3\2\3\2\3\3\3"+
		"\3\3\3\3\3\3\3\5\3)\n\3\3\4\3\4\3\5\3\5\3\6\3\6\3\6\3\6\5\6\63\n\6\3\7"+
		"\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\f\2\2\r\2\4\6\b\n\f\16"+
		"\20\22\24\26\2\3\4\2::``\2>\2\31\3\2\2\2\4(\3\2\2\2\6*\3\2\2\2\b,\3\2"+
		"\2\2\n\62\3\2\2\2\f\64\3\2\2\2\16\66\3\2\2\2\208\3\2\2\2\22:\3\2\2\2\24"+
		"<\3\2\2\2\26>\3\2\2\2\30\32\7\3\2\2\31\30\3\2\2\2\31\32\3\2\2\2\32\36"+
		"\3\2\2\2\33\35\5\4\3\2\34\33\3\2\2\2\35 \3\2\2\2\36\34\3\2\2\2\36\37\3"+
		"\2\2\2\37!\3\2\2\2 \36\3\2\2\2!\"\7\4\2\2\"\3\3\2\2\2#)\5\6\4\2$)\5\b"+
		"\5\2%)\5\n\6\2&)\5\24\13\2\')\5\26\f\2(#\3\2\2\2($\3\2\2\2(%\3\2\2\2("+
		"&\3\2\2\2(\'\3\2\2\2)\5\3\2\2\2*+\7M\2\2+\7\3\2\2\2,-\t\2\2\2-\t\3\2\2"+
		"\2.\63\5\f\7\2/\63\5\16\b\2\60\63\5\20\t\2\61\63\5\22\n\2\62.\3\2\2\2"+
		"\62/\3\2\2\2\62\60\3\2\2\2\62\61\3\2\2\2\63\13\3\2\2\2\64\65\7\21\2\2"+
		"\65\r\3\2\2\2\66\67\7\22\2\2\67\17\3\2\2\289\7\23\2\29\21\3\2\2\2:;\7"+
		"\24\2\2;\23\3\2\2\2<=\7\25\2\2=\25\3\2\2\2>?\7\26\2\2?\27\3\2\2\2\6\31"+
		"\36(\62";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}