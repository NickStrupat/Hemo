using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Linq.Expressions;
using System.Text;

namespace Astra
{
	public static class Program
	{
		const String source = @"
using System

namespace Foo
	+ type Bar
		+ func Woo(a String, b Int32) void => a.Length<[nothrow]> + b
";

		public static void Main(String[] args)
		{
			var nfcSource = source.Normalize(NormalizationForm.FormC);
			var enumerator = StringInfo.GetTextElementEnumerator(nfcSource);
			var graphemes = nfcSource.AsTextElementEnumerable().ToArray();
			foreach (var lexeme in GetLexemes(graphemes))
			{

			}
		}

		static IEnumerable<Lexeme> GetLexemes(String[] graphemes)
		{
			var lexemes = new List<Lexeme>();
			for (var i = 0; i < graphemes.Length; i++)
			{
				Boolean Predicate(String s) => String.IsNullOrWhiteSpace(s) || s == "\n" || s == "\r";
				var @join = String.Join("", graphemes.Skip(i).SkipWhile(Predicate).TakeWhile(x => !Predicate(x)));
				if (@join.SequenceEqual(nameof(LexemeKind.Use)))
					lexemes.Add(new Lexeme(LexemeKind.Use));
			}
			return lexemes;
		}
	}

	class Lexer : Expression
	{
		LexerRule Utf8ByteOrderMark = "\u00EF\u00BB\u00BF";
	}

	struct LexerRule
	{
		public static implicit operator LexerRule(String s) => default;
		public static implicit operator LexerRule(Char c) => default;
	}

	static class Keyword {

	}

	internal struct Lexeme
	{
		public readonly LexemeKind Kind;

		public Lexeme(LexemeKind kind)
		{
			Kind = kind;
		}
	}

	enum LexemeKind : byte
	{
		None = 0,
		NewLine,
		Indent,
		Keyword,
		Identifier,
		Literal
	}

	static class StringExtensions
	{
		public static IEnumerable<String> AsTextElementEnumerable(this String s)
		{
			var enumerator = StringInfo.GetTextElementEnumerator(s);
			while (enumerator.MoveNext())
				yield return enumerator.GetTextElement();
		}
	}
}
