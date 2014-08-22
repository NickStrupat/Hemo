using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using Hemo.Compiler;
using Hemo.Keyword;
using Hemo.Token;

namespace Hemo {
	namespace Compiler {
		internal class Program {
			private static void Main(String[] args) {
				var mainHemo = File.ReadAllText("../../../Hemo.Test/Main.hemo");
				var tokens = mainHemo.Split(new Char[0], StringSplitOptions.RemoveEmptyEntries);
				var asdf = Hemo.Tokens;
				foreach (string token in tokens) {}
			}
		}
	}

	namespace Token {
		#region Tokens
		internal abstract class Token {}
		internal abstract class Identifier : Token {}
		internal abstract class Keyword : Token {}
		internal abstract class IntegerLiteral : Token {}
		internal abstract class RealLiteral : Token {}
		internal abstract class CharacterLiteral : Token {}
		internal abstract class StringLiteral : Token {}
		internal abstract class Operator : Token {}
		internal abstract class Punctuator : Token {}
		#endregion
	}
	#region Punctuation
	internal class LeftParenthesis : Punctuator {
		public new static readonly String Value = "(";
	}
	internal class RightParenthesis : Punctuator {
		public new static readonly String Value = ")";
	}
	#endregion

	internal abstract class Statement {
		public abstract List<Type> Tokens { get; }
	}

	internal abstract class Expression : Statement {}

	internal class BooleanExpression : Expression {
		public override List<Type> Tokens {
			get { throw new NotImplementedException(); }
		}
	}

	internal class IfStatement : Statement {
		public override List<Type> Tokens {
			get { return tokens; }
		}
		private static readonly List<Type> tokens = new List<Type> { typeof (If), typeof (LeftParenthesis), typeof (BooleanExpression), typeof (RightParenthesis) };
	}

	internal static class Hemo {
		public static Dictionary<String, Type> Tokens {
			get { return tokens.Value; }
		}
		private static readonly Lazy<Dictionary<String, Type>> tokens = new Lazy<Dictionary<String, Type>>(GetTokens);
		private static Dictionary<String, Type> GetTokens() {
			var tokens = new Dictionary<String, Type>();
			var tokenTypes = Assembly.GetExecutingAssembly().GetTypes().Where(x => !x.IsAbstract && typeof (Token.Token).IsAssignableFrom(x));
			foreach (Type tokenType in tokenTypes) {
				var field = tokenType.GetField("Value", BindingFlags.Static | BindingFlags.Public | BindingFlags.FlattenHierarchy);
				var name = field.IfNotNull(x => x.GetValue(null)) as String ?? tokenType.Name.ToLower();
				tokens[name] = tokenType;
			}
			return tokens;
		}

		//private static Lazy<Dictionary<String, System.Type>> keywords = new Lazy<Dictionary<String, System.Type>>(GetKeywords);
		//private static Dictionary<string, System.Type> GetKeywords() {
		//	var keywords = new Dictionary<String, System.Type>();
		//	foreach (var keywordType in Assembly.GetExecutingAssembly().GetTypes().Where(x => !x.IsAbstract && typeof (Keyword).IsAssignableFrom(x)))
		//		keywords[keywordType.Name.ToLower()] = keywordType;
		//	return keywords;
		//}
		//public static Dictionary<String, System.Type> Keywords { get { return keywords.Value; } }
	}
}