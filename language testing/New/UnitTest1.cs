using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using Antlr4.Runtime;
using Xunit;

[assembly: CLSCompliant(false)]

namespace New
{
	public class UnitTest1
	{
		class HemoVisitor : HemoParserBaseVisitor<Int32>
		{
			public List<Object> Literals { get; } = new List<Object>();

			private Int32 AddToLiterals(Object o) { Literals.Add(o); return 0; }

			private Int32 AddIntegerToLiterals(ParserRuleContext context, Byte @base, Boolean hasTwoCharPrefix)
			{
				var integerLiteral = context.GetChild(0).GetText();
				var literal = GetInteger(integerLiteral, @base, hasTwoCharPrefix);
				Literals.Add(literal);
				return 0;
			}

			private static Object GetInteger(String integerLiteral, Byte @base, Boolean hasTwoCharPrefix)
			{
				integerLiteral = integerLiteral.Replace("'", String.Empty);
				var negative = integerLiteral.StartsWith('-');
				var signed = negative || integerLiteral.StartsWith('+');
				var hex = integerLiteral.Substring(hasTwoCharPrefix ? (signed ? 3 : 2) : (signed ? 1 : 0));
				return negative ? -Convert.ToInt64(hex, @base) : (Object) Convert.ToUInt64(hex, @base);
			}

			public override Int32 VisitNullLiteral              (HemoParser.NullLiteralContext context)               => AddToLiterals(null);
			public override Int32 VisitBooleanLiteral           (HemoParser.BooleanLiteralContext context)            => AddToLiterals(Boolean.Parse(context.GetChild(0).GetText()));
			public override Int32 VisitDecimalIntegerLiteral    (HemoParser.DecimalIntegerLiteralContext context)     => AddIntegerToLiterals(context, 10, false);
			public override Int32 VisitHexadecimalIntegerLiteral(HemoParser.HexadecimalIntegerLiteralContext context) => AddIntegerToLiterals(context, 16, true);
			public override Int32 VisitBinaryIntegerLiteral     (HemoParser.BinaryIntegerLiteralContext context)      => AddIntegerToLiterals(context, 2, true);
			public override Int32 VisitOctalIntegerLiteral      (HemoParser.OctalIntegerLiteralContext context)       => AddIntegerToLiterals(context, 8, true);
			public override Int32 VisitRealLiteral              (HemoParser.RealLiteralContext context)
			{
				var decimalRealLiteral = context.GetChild(0).GetText();
				var literal = Double.Parse(decimalRealLiteral);
				Literals.Add(literal);
				return 0;
			}

			public override Int32 VisitCharacterLiteral(HemoParser.CharacterLiteralContext context)
			{
				Literals.Add(context.GetChild(0).GetText()[1]);
				return 0;
			}
		}

		[Theory]
		[InlineData("\u00EF\u00BB\u00BF null true   false   1'2'3'4  -1'234  +1'234 0b1111 0o47 0xdeadbeef -0xbabe 'o' 1234.432e-4",
			new Object[] { null, true, false, 1_234ul, -1_234l, 1234ul, 0b1111ul, 39ul, 0xdeadbeeful, -0xbabel, 'o', 1234.432e-4 })]
		public void Test1(string input, object[] expectedValues)
		{
			var stream = CharStreams.fromstring(input);
			var lexer = new HemoLexer(stream);
			var tokens = new CommonTokenStream(lexer);
			var parser = new HemoParser(tokens);
			var tree = parser.compilationUnit();
			var what = new HemoVisitor();
			what.Visit(tree);
			for (var i = 0; i < expectedValues.Length; i++)
			{
				Assert.Equal(expectedValues[i], what.Literals[i]);
			}
			Assert.True(expectedValues.SequenceEqual(what.Literals));
			Assert.Equal(expectedValues, what.Literals.ToArray());

			Boolean IsNumeric(Object x) => x != null && x.GetType().IsPrimitive && x.GetType() != typeof(Boolean) && x.GetType() != typeof(Char);
			var sum = what.Literals.Where(IsNumeric).Select(Convert.ToDouble).Sum();
		}
	}
}
