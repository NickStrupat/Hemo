//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     ANTLR Version: 4.7
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from Hemo/Compiler/Hemo.g4 by ANTLR 4.7

// Unreachable code detected
#pragma warning disable 0162
// The variable '...' is assigned but its value is never used
#pragma warning disable 0219
// Missing XML comment for publicly visible type or member '...'
#pragma warning disable 1591
// Ambiguous reference in cref attribute
#pragma warning disable 419

using System;
using System.IO;
using System.Text;
using Antlr4.Runtime;
using Antlr4.Runtime.Atn;
using Antlr4.Runtime.Misc;
using DFA = Antlr4.Runtime.Dfa.DFA;

[System.CodeDom.Compiler.GeneratedCode("ANTLR", "4.7")]
[System.CLSCompliant(false)]
public partial class Hemo : Lexer {
	protected static DFA[] decisionToDFA;
	protected static PredictionContextCache sharedContextCache = new PredictionContextCache();
	public const int
		BlockComment=1, LineComment=2, IntegerTypeSuffix=3, DecimalIntegerLiteral=4, 
		DecimalNumeral=5, WhitespaceElement=6, Whitespace=7;
	public const int
		COMMENT=2;
	public static string[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN", "COMMENT"
	};

	public static string[] modeNames = {
		"DEFAULT_MODE"
	};

	public static readonly string[] ruleNames = {
		"BlockComment", "LineComment", "IntegerTypeSuffix", "StorageSignedness", 
		"StorageSize", "DecimalIntegerLiteral", "DecimalNumeral", "NewLine", "WhitespaceElement", 
		"Whitespace", "UnicodeClassZS", "UnicodeClassLU", "UnicodeClassLL", "UnicodeClassLT", 
		"UnicodeClassLM", "UnicodeClassLO", "UnicodeClassNL", "UnicodeClassMN", 
		"UnicodeClassMC", "UnicodeClassCF", "UnicodeClassPC", "UnicodeClassND"
	};


	public Hemo(ICharStream input)
	: this(input, Console.Out, Console.Error) { }

	public Hemo(ICharStream input, TextWriter output, TextWriter errorOutput)
	: base(input, output, errorOutput)
	{
		Interpreter = new LexerATNSimulator(this, _ATN, decisionToDFA, sharedContextCache);
	}

	private static readonly string[] _LiteralNames = {
	};
	private static readonly string[] _SymbolicNames = {
		null, "BlockComment", "LineComment", "IntegerTypeSuffix", "DecimalIntegerLiteral", 
		"DecimalNumeral", "WhitespaceElement", "Whitespace"
	};
	public static readonly IVocabulary DefaultVocabulary = new Vocabulary(_LiteralNames, _SymbolicNames);

	[NotNull]
	public override IVocabulary Vocabulary
	{
		get
		{
			return DefaultVocabulary;
		}
	}

	public override string GrammarFileName { get { return "Hemo.g4"; } }

	public override string[] RuleNames { get { return ruleNames; } }

	public override string[] ChannelNames { get { return channelNames; } }

	public override string[] ModeNames { get { return modeNames; } }

	public override string SerializedAtn { get { return new string(_serializedATN); } }

	static Hemo() {
		decisionToDFA = new DFA[_ATN.NumberOfDecisions];
		for (int i = 0; i < _ATN.NumberOfDecisions; i++) {
			decisionToDFA[i] = new DFA(_ATN.GetDecisionState(i), i);
		}
	}
	private static char[] _serializedATN = {
		'\x3', '\x608B', '\xA72A', '\x8133', '\xB9ED', '\x417C', '\x3BE7', '\x7786', 
		'\x5964', '\x2', '\t', '\x8C', '\b', '\x1', '\x4', '\x2', '\t', '\x2', 
		'\x4', '\x3', '\t', '\x3', '\x4', '\x4', '\t', '\x4', '\x4', '\x5', '\t', 
		'\x5', '\x4', '\x6', '\t', '\x6', '\x4', '\a', '\t', '\a', '\x4', '\b', 
		'\t', '\b', '\x4', '\t', '\t', '\t', '\x4', '\n', '\t', '\n', '\x4', '\v', 
		'\t', '\v', '\x4', '\f', '\t', '\f', '\x4', '\r', '\t', '\r', '\x4', '\xE', 
		'\t', '\xE', '\x4', '\xF', '\t', '\xF', '\x4', '\x10', '\t', '\x10', '\x4', 
		'\x11', '\t', '\x11', '\x4', '\x12', '\t', '\x12', '\x4', '\x13', '\t', 
		'\x13', '\x4', '\x14', '\t', '\x14', '\x4', '\x15', '\t', '\x15', '\x4', 
		'\x16', '\t', '\x16', '\x4', '\x17', '\t', '\x17', '\x3', '\x2', '\x3', 
		'\x2', '\x3', '\x2', '\x3', '\x2', '\x3', '\x2', '\a', '\x2', '\x35', 
		'\n', '\x2', '\f', '\x2', '\xE', '\x2', '\x38', '\v', '\x2', '\x3', '\x2', 
		'\x3', '\x2', '\x3', '\x2', '\x3', '\x2', '\x3', '\x2', '\x3', '\x3', 
		'\x3', '\x3', '\x3', '\x3', '\x3', '\x3', '\a', '\x3', '\x43', '\n', '\x3', 
		'\f', '\x3', '\xE', '\x3', '\x46', '\v', '\x3', '\x3', '\x3', '\x3', '\x3', 
		'\x5', '\x3', 'J', '\n', '\x3', '\x3', '\x3', '\x3', '\x3', '\x3', '\x4', 
		'\x3', '\x4', '\x3', '\x4', '\x3', '\x5', '\x3', '\x5', '\x3', '\x6', 
		'\x3', '\x6', '\x3', '\x6', '\x3', '\x6', '\x3', '\x6', '\x3', '\x6', 
		'\x3', '\x6', '\x5', '\x6', 'Z', '\n', '\x6', '\x3', '\a', '\x3', '\a', 
		'\x5', '\a', '^', '\n', '\a', '\x3', '\b', '\x3', '\b', '\a', '\b', '\x62', 
		'\n', '\b', '\f', '\b', '\xE', '\b', '\x65', '\v', '\b', '\x3', '\t', 
		'\x3', '\t', '\x3', '\t', '\x5', '\t', 'j', '\n', '\t', '\x3', '\n', '\x3', 
		'\n', '\x3', '\n', '\x5', '\n', 'o', '\n', '\n', '\x3', '\v', '\x3', '\v', 
		'\x3', '\v', '\x3', '\v', '\x3', '\f', '\x3', '\f', '\x3', '\r', '\x3', 
		'\r', '\x3', '\xE', '\x3', '\xE', '\x3', '\xF', '\x3', '\xF', '\x3', '\x10', 
		'\x3', '\x10', '\x3', '\x11', '\x3', '\x11', '\x3', '\x12', '\x3', '\x12', 
		'\x3', '\x13', '\x3', '\x13', '\x3', '\x14', '\x3', '\x14', '\x3', '\x15', 
		'\x3', '\x15', '\x3', '\x16', '\x3', '\x16', '\x3', '\x17', '\x3', '\x17', 
		'\x4', '\x36', '\x44', '\x2', '\x18', '\x3', '\x3', '\x5', '\x4', '\a', 
		'\x5', '\t', '\x2', '\v', '\x2', '\r', '\x6', '\xF', '\a', '\x11', '\x2', 
		'\x13', '\b', '\x15', '\t', '\x17', '\x2', '\x19', '\x2', '\x1B', '\x2', 
		'\x1D', '\x2', '\x1F', '\x2', '!', '\x2', '#', '\x2', '%', '\x2', '\'', 
		'\x2', ')', '\x2', '+', '\x2', '-', '\x2', '\x3', '\x2', '\x12', '\x4', 
		'\x2', 'k', 'k', 'w', 'w', '\x3', '\x2', '\x32', ';', '\x4', '\x2', '\x32', 
		';', '\x61', '\x61', '\x6', '\x2', '\f', '\f', '\xF', '\xF', '\x87', '\x87', 
		'\x202A', '\x202B', '\x4', '\x2', '\v', '\v', '\r', '\xE', '\v', '\x2', 
		'\"', '\"', '\xA2', '\xA2', '\x1682', '\x1682', '\x1810', '\x1810', '\x2002', 
		'\x2008', '\x200A', '\x200C', '\x2031', '\x2031', '\x2061', '\x2061', 
		'\x3002', '\x3002', 'T', '\x2', '\x43', '\\', '\xC2', '\xD8', '\xDA', 
		'\xE0', '\x102', '\x138', '\x13B', '\x149', '\x14C', '\x17F', '\x183', 
		'\x184', '\x186', '\x18D', '\x190', '\x193', '\x195', '\x196', '\x198', 
		'\x19A', '\x19E', '\x19F', '\x1A1', '\x1A2', '\x1A4', '\x1AB', '\x1AE', 
		'\x1B5', '\x1B7', '\x1BE', '\x1C6', '\x1CF', '\x1D1', '\x1DD', '\x1E0', 
		'\x1F0', '\x1F3', '\x1F6', '\x1F8', '\x1FA', '\x1FC', '\x234', '\x23C', 
		'\x23D', '\x23F', '\x240', '\x243', '\x248', '\x24A', '\x250', '\x372', 
		'\x374', '\x378', '\x381', '\x388', '\x38C', '\x38E', '\x3A3', '\x3A5', 
		'\x3AD', '\x3D1', '\x3D6', '\x3DA', '\x3F0', '\x3F6', '\x3F9', '\x3FB', 
		'\x3FC', '\x3FF', '\x431', '\x462', '\x482', '\x48C', '\x4CF', '\x4D2', 
		'\x530', '\x533', '\x558', '\x10A2', '\x10C7', '\x10C9', '\x10CF', '\x1E02', 
		'\x1E96', '\x1EA0', '\x1F00', '\x1F0A', '\x1F11', '\x1F1A', '\x1F1F', 
		'\x1F2A', '\x1F31', '\x1F3A', '\x1F41', '\x1F4A', '\x1F4F', '\x1F5B', 
		'\x1F61', '\x1F6A', '\x1F71', '\x1FBA', '\x1FBD', '\x1FCA', '\x1FCD', 
		'\x1FDA', '\x1FDD', '\x1FEA', '\x1FEE', '\x1FFA', '\x1FFD', '\x2104', 
		'\x2109', '\x210D', '\x210F', '\x2112', '\x2114', '\x2117', '\x211F', 
		'\x2126', '\x212F', '\x2132', '\x2135', '\x2140', '\x2141', '\x2147', 
		'\x2185', '\x2C02', '\x2C30', '\x2C62', '\x2C66', '\x2C69', '\x2C72', 
		'\x2C74', '\x2C77', '\x2C80', '\x2C82', '\x2C84', '\x2CE4', '\x2CED', 
		'\x2CEF', '\x2CF4', '\xA642', '\xA644', '\xA66E', '\xA682', '\xA69C', 
		'\xA724', '\xA730', '\xA734', '\xA770', '\xA77B', '\xA788', '\xA78D', 
		'\xA78F', '\xA792', '\xA794', '\xA798', '\xA7AF', '\xA7B2', '\xA7B3', 
		'\xFF23', '\xFF3C', 'S', '\x2', '\x63', '|', '\xB7', '\xF8', '\xFA', '\x101', 
		'\x103', '\x179', '\x17C', '\x182', '\x185', '\x187', '\x18A', '\x194', 
		'\x197', '\x19D', '\x1A0', '\x1A3', '\x1A5', '\x1A7', '\x1AA', '\x1AF', 
		'\x1B2', '\x1B6', '\x1B8', '\x1C1', '\x1C8', '\x1CE', '\x1D0', '\x1F5', 
		'\x1F7', '\x1FB', '\x1FD', '\x23B', '\x23E', '\x244', '\x249', '\x295', 
		'\x297', '\x2B1', '\x373', '\x375', '\x379', '\x37F', '\x392', '\x3D0', 
		'\x3D2', '\x3D3', '\x3D7', '\x3D9', '\x3DB', '\x3F5', '\x3F7', '\x461', 
		'\x463', '\x483', '\x48D', '\x4C1', '\x4C4', '\x531', '\x563', '\x589', 
		'\x1D02', '\x1D2D', '\x1D6D', '\x1D79', '\x1D7B', '\x1D9C', '\x1E03', 
		'\x1E9F', '\x1EA1', '\x1F09', '\x1F12', '\x1F17', '\x1F22', '\x1F29', 
		'\x1F32', '\x1F39', '\x1F42', '\x1F47', '\x1F52', '\x1F59', '\x1F62', 
		'\x1F69', '\x1F72', '\x1F7F', '\x1F82', '\x1F89', '\x1F92', '\x1F99', 
		'\x1FA2', '\x1FA9', '\x1FB2', '\x1FB6', '\x1FB8', '\x1FB9', '\x1FC0', 
		'\x1FC6', '\x1FC8', '\x1FC9', '\x1FD2', '\x1FD5', '\x1FD8', '\x1FD9', 
		'\x1FE2', '\x1FE9', '\x1FF4', '\x1FF6', '\x1FF8', '\x1FF9', '\x210C', 
		'\x2115', '\x2131', '\x213B', '\x213E', '\x213F', '\x2148', '\x214B', 
		'\x2150', '\x2186', '\x2C32', '\x2C60', '\x2C63', '\x2C6E', '\x2C73', 
		'\x2C7D', '\x2C83', '\x2CEE', '\x2CF0', '\x2CF5', '\x2D02', '\x2D27', 
		'\x2D29', '\x2D2F', '\xA643', '\xA66F', '\xA683', '\xA69D', '\xA725', 
		'\xA733', '\xA735', '\xA77A', '\xA77C', '\xA77E', '\xA781', '\xA789', 
		'\xA78E', '\xA790', '\xA793', '\xA797', '\xA799', '\xA7AB', '\xA7FC', 
		'\xAB5C', '\xAB66', '\xAB67', '\xFB02', '\xFB08', '\xFB15', '\xFB19', 
		'\xFF43', '\xFF5C', '\b', '\x2', '\x1C7', '\x1CD', '\x1F4', '\x1F91', 
		'\x1F9A', '\x1FA1', '\x1FAA', '\x1FB1', '\x1FBE', '\x1FCE', '\x1FFE', 
		'\x1FFE', '#', '\x2', '\x2B2', '\x2C3', '\x2C8', '\x2D3', '\x2E2', '\x2E6', 
		'\x2EE', '\x2F0', '\x376', '\x37C', '\x55B', '\x642', '\x6E7', '\x6E8', 
		'\x7F6', '\x7F7', '\x7FC', '\x81C', '\x826', '\x82A', '\x973', '\xE48', 
		'\xEC8', '\x10FE', '\x17D9', '\x1845', '\x1AA9', '\x1C7F', '\x1D2E', '\x1D6C', 
		'\x1D7A', '\x1DC1', '\x2073', '\x2081', '\x2092', '\x209E', '\x2C7E', 
		'\x2C7F', '\x2D71', '\x2E31', '\x3007', '\x3037', '\x303D', '\x3100', 
		'\xA017', '\xA4FF', '\xA60E', '\xA681', '\xA69E', '\xA69F', '\xA719', 
		'\xA721', '\xA772', '\xA78A', '\xA7FA', '\xA7FB', '\xA9D1', '\xA9E8', 
		'\xAA72', '\xAADF', '\xAAF5', '\xAAF6', '\xAB5E', '\xAB61', '\xFF72', 
		'\xFFA1', '\xEC', '\x2', '\xAC', '\xBC', '\x1BD', '\x1C5', '\x296', '\x5EC', 
		'\x5F2', '\x5F4', '\x622', '\x641', '\x643', '\x64C', '\x670', '\x671', 
		'\x673', '\x6D5', '\x6D7', '\x6FE', '\x701', '\x712', '\x714', '\x731', 
		'\x74F', '\x7A7', '\x7B3', '\x7EC', '\x802', '\x817', '\x842', '\x85A', 
		'\x8A2', '\x8B4', '\x906', '\x93B', '\x93F', '\x952', '\x95A', '\x963', 
		'\x974', '\x982', '\x987', '\x98E', '\x991', '\x992', '\x995', '\x9AA', 
		'\x9AC', '\x9B2', '\x9B4', '\x9BB', '\x9BF', '\x9D0', '\x9DE', '\x9DF', 
		'\x9E1', '\x9E3', '\x9F2', '\x9F3', '\xA07', '\xA0C', '\xA11', '\xA12', 
		'\xA15', '\xA2A', '\xA2C', '\xA32', '\xA34', '\xA35', '\xA37', '\xA38', 
		'\xA3A', '\xA3B', '\xA5B', '\xA5E', '\xA60', '\xA76', '\xA87', '\xA8F', 
		'\xA91', '\xA93', '\xA95', '\xAAA', '\xAAC', '\xAB2', '\xAB4', '\xAB5', 
		'\xAB7', '\xABB', '\xABF', '\xAD2', '\xAE2', '\xAE3', '\xB07', '\xB0E', 
		'\xB11', '\xB12', '\xB15', '\xB2A', '\xB2C', '\xB32', '\xB34', '\xB35', 
		'\xB37', '\xB3B', '\xB3F', '\xB63', '\xB73', '\xB85', '\xB87', '\xB8C', 
		'\xB90', '\xB92', '\xB94', '\xB97', '\xB9B', '\xB9C', '\xB9E', '\xBAC', 
		'\xBB0', '\xBBB', '\xBD2', '\xC0E', '\xC10', '\xC12', '\xC14', '\xC2A', 
		'\xC2C', '\xC3B', '\xC3F', '\xC8E', '\xC90', '\xC92', '\xC94', '\xCAA', 
		'\xCAC', '\xCB5', '\xCB7', '\xCBB', '\xCBF', '\xCE0', '\xCE2', '\xCE3', 
		'\xCF3', '\xCF4', '\xD07', '\xD0E', '\xD10', '\xD12', '\xD14', '\xD3C', 
		'\xD3F', '\xD50', '\xD62', '\xD63', '\xD7C', '\xD81', '\xD87', '\xD98', 
		'\xD9C', '\xDB3', '\xDB5', '\xDBD', '\xDBF', '\xDC8', '\xE03', '\xE32', 
		'\xE34', '\xE35', '\xE42', '\xE47', '\xE83', '\xE84', '\xE86', '\xE8C', 
		'\xE8F', '\xE99', '\xE9B', '\xEA1', '\xEA3', '\xEA5', '\xEA7', '\xEA9', 
		'\xEAC', '\xEAD', '\xEAF', '\xEB2', '\xEB4', '\xEB5', '\xEBF', '\xEC6', 
		'\xEDE', '\xEE1', '\xF02', '\xF49', '\xF4B', '\xF6E', '\xF8A', '\xF8E', 
		'\x1002', '\x102C', '\x1041', '\x1057', '\x105C', '\x105F', '\x1063', 
		'\x1072', '\x1077', '\x1083', '\x1090', '\x10FC', '\x10FF', '\x124A', 
		'\x124C', '\x124F', '\x1252', '\x1258', '\x125A', '\x125F', '\x1262', 
		'\x128A', '\x128C', '\x128F', '\x1292', '\x12B2', '\x12B4', '\x12B7', 
		'\x12BA', '\x12C0', '\x12C2', '\x12C7', '\x12CA', '\x12D8', '\x12DA', 
		'\x1312', '\x1314', '\x1317', '\x131A', '\x135C', '\x1382', '\x1391', 
		'\x13A2', '\x13F6', '\x1403', '\x166E', '\x1671', '\x1681', '\x1683', 
		'\x169C', '\x16A2', '\x16EC', '\x16F3', '\x16FA', '\x1702', '\x170E', 
		'\x1710', '\x1713', '\x1722', '\x1733', '\x1742', '\x1753', '\x1762', 
		'\x176E', '\x1770', '\x1772', '\x1782', '\x17B5', '\x17DE', '\x1844', 
		'\x1846', '\x1879', '\x1882', '\x18AA', '\x18AC', '\x18F7', '\x1902', 
		'\x1920', '\x1952', '\x196F', '\x1972', '\x1976', '\x1982', '\x19AD', 
		'\x19C3', '\x19C9', '\x1A02', '\x1A18', '\x1A22', '\x1A56', '\x1B07', 
		'\x1B35', '\x1B47', '\x1B4D', '\x1B85', '\x1BA2', '\x1BB0', '\x1BB1', 
		'\x1BBC', '\x1BE7', '\x1C02', '\x1C25', '\x1C4F', '\x1C51', '\x1C5C', 
		'\x1C79', '\x1CEB', '\x1CEE', '\x1CF0', '\x1CF3', '\x1CF7', '\x1CF8', 
		'\x2137', '\x213A', '\x2D32', '\x2D69', '\x2D82', '\x2D98', '\x2DA2', 
		'\x2DA8', '\x2DAA', '\x2DB0', '\x2DB2', '\x2DB8', '\x2DBA', '\x2DC0', 
		'\x2DC2', '\x2DC8', '\x2DCA', '\x2DD0', '\x2DD2', '\x2DD8', '\x2DDA', 
		'\x2DE0', '\x3008', '\x303E', '\x3043', '\x3098', '\x30A1', '\x30FC', 
		'\x3101', '\x312F', '\x3133', '\x3190', '\x31A2', '\x31BC', '\x31F2', 
		'\x3201', '\x3402', '\x4DB7', '\x4E02', '\x9FCE', '\xA002', '\xA016', 
		'\xA018', '\xA48E', '\xA4D2', '\xA4F9', '\xA502', '\xA60D', '\xA612', 
		'\xA621', '\xA62C', '\xA62D', '\xA670', '\xA6E7', '\xA7F9', '\xA803', 
		'\xA805', '\xA807', '\xA809', '\xA80C', '\xA80E', '\xA824', '\xA842', 
		'\xA875', '\xA884', '\xA8B5', '\xA8F4', '\xA8F9', '\xA8FD', '\xA927', 
		'\xA932', '\xA948', '\xA962', '\xA97E', '\xA986', '\xA9B4', '\xA9E2', 
		'\xA9E6', '\xA9E9', '\xA9F1', '\xA9FC', '\xAA00', '\xAA02', '\xAA2A', 
		'\xAA42', '\xAA44', '\xAA46', '\xAA4D', '\xAA62', '\xAA71', '\xAA73', 
		'\xAA78', '\xAA7C', '\xAAB1', '\xAAB3', '\xAABF', '\xAAC2', '\xAAC4', 
		'\xAADD', '\xAADE', '\xAAE2', '\xAAEC', '\xAAF4', '\xAB08', '\xAB0B', 
		'\xAB10', '\xAB13', '\xAB18', '\xAB22', '\xAB28', '\xAB2A', '\xAB30', 
		'\xABC2', '\xABE4', '\xAC02', '\xD7A5', '\xD7B2', '\xD7C8', '\xD7CD', 
		'\xD7FD', '\xF902', '\xFA6F', '\xFA72', '\xFADB', '\xFB1F', '\xFB2A', 
		'\xFB2C', '\xFB38', '\xFB3A', '\xFB3E', '\xFB40', '\xFBB3', '\xFBD5', 
		'\xFD3F', '\xFD52', '\xFD91', '\xFD94', '\xFDC9', '\xFDF2', '\xFDFD', 
		'\xFE72', '\xFE76', '\xFE78', '\xFEFE', '\xFF68', '\xFF71', '\xFF73', 
		'\xFF9F', '\xFFA2', '\xFFC0', '\xFFC4', '\xFFC9', '\xFFCC', '\xFFD1', 
		'\xFFD4', '\xFFD9', '\xFFDC', '\xFFDE', '\x4', '\x2', '\x16F0', '\x16F2', 
		'\x2162', '\x2171', '\x5', '\x2', '\x905', '\x905', '\x940', '\x942', 
		'\x94B', '\x94E', '\x5', '\x2', '\xAF', '\xAF', '\x602', '\x605', '\x6DF', 
		'\x6DF', '\b', '\x2', '\x61', '\x61', '\x2041', '\x2042', '\x2056', '\x2056', 
		'\xFE35', '\xFE36', '\xFE4F', '\xFE51', '\xFF41', '\xFF41', '\'', '\x2', 
		'\x32', ';', '\x662', '\x66B', '\x6F2', '\x6FB', '\x7C2', '\x7CB', '\x968', 
		'\x971', '\x9E8', '\x9F1', '\xA68', '\xA71', '\xAE8', '\xAF1', '\xB68', 
		'\xB71', '\xBE8', '\xBF1', '\xC68', '\xC71', '\xCE8', '\xCF1', '\xD68', 
		'\xD71', '\xDE8', '\xDF1', '\xE52', '\xE5B', '\xED2', '\xEDB', '\xF22', 
		'\xF2B', '\x1042', '\x104B', '\x1092', '\x109B', '\x17E2', '\x17EB', '\x1812', 
		'\x181B', '\x1948', '\x1951', '\x19D2', '\x19DB', '\x1A82', '\x1A8B', 
		'\x1A92', '\x1A9B', '\x1B52', '\x1B5B', '\x1BB2', '\x1BBB', '\x1C42', 
		'\x1C4B', '\x1C52', '\x1C5B', '\xA622', '\xA62B', '\xA8D2', '\xA8DB', 
		'\xA902', '\xA90B', '\xA9D2', '\xA9DB', '\xA9F2', '\xA9FB', '\xAA52', 
		'\xAA5B', '\xABF2', '\xABFB', '\xFF12', '\xFF1B', '\x2', '\x88', '\x2', 
		'\x3', '\x3', '\x2', '\x2', '\x2', '\x2', '\x5', '\x3', '\x2', '\x2', 
		'\x2', '\x2', '\a', '\x3', '\x2', '\x2', '\x2', '\x2', '\r', '\x3', '\x2', 
		'\x2', '\x2', '\x2', '\xF', '\x3', '\x2', '\x2', '\x2', '\x2', '\x13', 
		'\x3', '\x2', '\x2', '\x2', '\x2', '\x15', '\x3', '\x2', '\x2', '\x2', 
		'\x3', '/', '\x3', '\x2', '\x2', '\x2', '\x5', '>', '\x3', '\x2', '\x2', 
		'\x2', '\a', 'M', '\x3', '\x2', '\x2', '\x2', '\t', 'P', '\x3', '\x2', 
		'\x2', '\x2', '\v', 'Y', '\x3', '\x2', '\x2', '\x2', '\r', '[', '\x3', 
		'\x2', '\x2', '\x2', '\xF', '_', '\x3', '\x2', '\x2', '\x2', '\x11', 'i', 
		'\x3', '\x2', '\x2', '\x2', '\x13', 'n', '\x3', '\x2', '\x2', '\x2', '\x15', 
		'p', '\x3', '\x2', '\x2', '\x2', '\x17', 't', '\x3', '\x2', '\x2', '\x2', 
		'\x19', 'v', '\x3', '\x2', '\x2', '\x2', '\x1B', 'x', '\x3', '\x2', '\x2', 
		'\x2', '\x1D', 'z', '\x3', '\x2', '\x2', '\x2', '\x1F', '|', '\x3', '\x2', 
		'\x2', '\x2', '!', '~', '\x3', '\x2', '\x2', '\x2', '#', '\x80', '\x3', 
		'\x2', '\x2', '\x2', '%', '\x82', '\x3', '\x2', '\x2', '\x2', '\'', '\x84', 
		'\x3', '\x2', '\x2', '\x2', ')', '\x86', '\x3', '\x2', '\x2', '\x2', '+', 
		'\x88', '\x3', '\x2', '\x2', '\x2', '-', '\x8A', '\x3', '\x2', '\x2', 
		'\x2', '/', '\x30', '\a', '\x31', '\x2', '\x2', '\x30', '\x31', '\a', 
		',', '\x2', '\x2', '\x31', '\x36', '\x3', '\x2', '\x2', '\x2', '\x32', 
		'\x35', '\x5', '\x3', '\x2', '\x2', '\x33', '\x35', '\v', '\x2', '\x2', 
		'\x2', '\x34', '\x32', '\x3', '\x2', '\x2', '\x2', '\x34', '\x33', '\x3', 
		'\x2', '\x2', '\x2', '\x35', '\x38', '\x3', '\x2', '\x2', '\x2', '\x36', 
		'\x37', '\x3', '\x2', '\x2', '\x2', '\x36', '\x34', '\x3', '\x2', '\x2', 
		'\x2', '\x37', '\x39', '\x3', '\x2', '\x2', '\x2', '\x38', '\x36', '\x3', 
		'\x2', '\x2', '\x2', '\x39', ':', '\a', ',', '\x2', '\x2', ':', ';', '\a', 
		'\x31', '\x2', '\x2', ';', '<', '\x3', '\x2', '\x2', '\x2', '<', '=', 
		'\b', '\x2', '\x2', '\x2', '=', '\x4', '\x3', '\x2', '\x2', '\x2', '>', 
		'?', '\a', '\x31', '\x2', '\x2', '?', '@', '\a', '\x31', '\x2', '\x2', 
		'@', '\x44', '\x3', '\x2', '\x2', '\x2', '\x41', '\x43', '\v', '\x2', 
		'\x2', '\x2', '\x42', '\x41', '\x3', '\x2', '\x2', '\x2', '\x43', '\x46', 
		'\x3', '\x2', '\x2', '\x2', '\x44', '\x45', '\x3', '\x2', '\x2', '\x2', 
		'\x44', '\x42', '\x3', '\x2', '\x2', '\x2', '\x45', 'I', '\x3', '\x2', 
		'\x2', '\x2', '\x46', '\x44', '\x3', '\x2', '\x2', '\x2', 'G', 'J', '\x5', 
		'\x11', '\t', '\x2', 'H', 'J', '\a', '\x2', '\x2', '\x3', 'I', 'G', '\x3', 
		'\x2', '\x2', '\x2', 'I', 'H', '\x3', '\x2', '\x2', '\x2', 'J', 'K', '\x3', 
		'\x2', '\x2', '\x2', 'K', 'L', '\b', '\x3', '\x2', '\x2', 'L', '\x6', 
		'\x3', '\x2', '\x2', '\x2', 'M', 'N', '\x5', '\t', '\x5', '\x2', 'N', 
		'O', '\x5', '\v', '\x6', '\x2', 'O', '\b', '\x3', '\x2', '\x2', '\x2', 
		'P', 'Q', '\t', '\x2', '\x2', '\x2', 'Q', '\n', '\x3', '\x2', '\x2', '\x2', 
		'R', 'Z', '\a', ':', '\x2', '\x2', 'S', 'T', '\a', '\x33', '\x2', '\x2', 
		'T', 'Z', '\a', '\x38', '\x2', '\x2', 'U', 'V', '\a', '\x35', '\x2', '\x2', 
		'V', 'Z', '\a', '\x34', '\x2', '\x2', 'W', 'X', '\a', '\x38', '\x2', '\x2', 
		'X', 'Z', '\a', '\x36', '\x2', '\x2', 'Y', 'R', '\x3', '\x2', '\x2', '\x2', 
		'Y', 'S', '\x3', '\x2', '\x2', '\x2', 'Y', 'U', '\x3', '\x2', '\x2', '\x2', 
		'Y', 'W', '\x3', '\x2', '\x2', '\x2', 'Z', '\f', '\x3', '\x2', '\x2', 
		'\x2', '[', ']', '\x5', '\xF', '\b', '\x2', '\\', '^', '\x5', '\a', '\x4', 
		'\x2', ']', '\\', '\x3', '\x2', '\x2', '\x2', ']', '^', '\x3', '\x2', 
		'\x2', '\x2', '^', '\xE', '\x3', '\x2', '\x2', '\x2', '_', '\x63', '\t', 
		'\x3', '\x2', '\x2', '`', '\x62', '\t', '\x4', '\x2', '\x2', '\x61', '`', 
		'\x3', '\x2', '\x2', '\x2', '\x62', '\x65', '\x3', '\x2', '\x2', '\x2', 
		'\x63', '\x61', '\x3', '\x2', '\x2', '\x2', '\x63', '\x64', '\x3', '\x2', 
		'\x2', '\x2', '\x64', '\x10', '\x3', '\x2', '\x2', '\x2', '\x65', '\x63', 
		'\x3', '\x2', '\x2', '\x2', '\x66', 'g', '\a', '\xF', '\x2', '\x2', 'g', 
		'j', '\a', '\f', '\x2', '\x2', 'h', 'j', '\t', '\x5', '\x2', '\x2', 'i', 
		'\x66', '\x3', '\x2', '\x2', '\x2', 'i', 'h', '\x3', '\x2', '\x2', '\x2', 
		'j', '\x12', '\x3', '\x2', '\x2', '\x2', 'k', 'o', '\x5', '\x11', '\t', 
		'\x2', 'l', 'o', '\x5', '\x17', '\f', '\x2', 'm', 'o', '\t', '\x6', '\x2', 
		'\x2', 'n', 'k', '\x3', '\x2', '\x2', '\x2', 'n', 'l', '\x3', '\x2', '\x2', 
		'\x2', 'n', 'm', '\x3', '\x2', '\x2', '\x2', 'o', '\x14', '\x3', '\x2', 
		'\x2', '\x2', 'p', 'q', '\x5', '\x13', '\n', '\x2', 'q', 'r', '\x3', '\x2', 
		'\x2', '\x2', 'r', 's', '\b', '\v', '\x3', '\x2', 's', '\x16', '\x3', 
		'\x2', '\x2', '\x2', 't', 'u', '\t', '\a', '\x2', '\x2', 'u', '\x18', 
		'\x3', '\x2', '\x2', '\x2', 'v', 'w', '\t', '\b', '\x2', '\x2', 'w', '\x1A', 
		'\x3', '\x2', '\x2', '\x2', 'x', 'y', '\t', '\t', '\x2', '\x2', 'y', '\x1C', 
		'\x3', '\x2', '\x2', '\x2', 'z', '{', '\t', '\n', '\x2', '\x2', '{', '\x1E', 
		'\x3', '\x2', '\x2', '\x2', '|', '}', '\t', '\v', '\x2', '\x2', '}', ' ', 
		'\x3', '\x2', '\x2', '\x2', '~', '\x7F', '\t', '\f', '\x2', '\x2', '\x7F', 
		'\"', '\x3', '\x2', '\x2', '\x2', '\x80', '\x81', '\t', '\r', '\x2', '\x2', 
		'\x81', '$', '\x3', '\x2', '\x2', '\x2', '\x82', '\x83', '\x4', '\x302', 
		'\x312', '\x2', '\x83', '&', '\x3', '\x2', '\x2', '\x2', '\x84', '\x85', 
		'\t', '\xE', '\x2', '\x2', '\x85', '(', '\x3', '\x2', '\x2', '\x2', '\x86', 
		'\x87', '\t', '\xF', '\x2', '\x2', '\x87', '*', '\x3', '\x2', '\x2', '\x2', 
		'\x88', '\x89', '\t', '\x10', '\x2', '\x2', '\x89', ',', '\x3', '\x2', 
		'\x2', '\x2', '\x8A', '\x8B', '\t', '\x11', '\x2', '\x2', '\x8B', '.', 
		'\x3', '\x2', '\x2', '\x2', '\f', '\x2', '\x34', '\x36', '\x44', 'I', 
		'Y', ']', '\x63', 'i', 'n', '\x4', '\x2', '\x4', '\x2', '\b', '\x2', '\x2',
	};

	public static readonly ATN _ATN =
		new ATNDeserializer().Deserialize(_serializedATN);


}
