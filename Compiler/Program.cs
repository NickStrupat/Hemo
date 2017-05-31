using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Reflection;
using Antlr4.Runtime;
using Hemo.Compiler;
using Hemo.Keyword;
using Hemo.Token;

namespace Hemo {
	namespace Compiler {
		internal class Program {
			private static void Main(String[] args) {
			    var input = new AntlrInputStream(new StringReader(@"
// ™This is an example of a single line comment using two slashes

/* This is an example of a multiple line comment using the slash and asterisk.
 This type of comment can be used to hold a lot of information or deactivate
 code, but it is very important to remember to close the comment. */

package fibsandlies;
import java.util.HashMap;

/**
 * This is an example of a Javadoc comment; Javadoc can compile documentation
 * from this text. Javadoc comments must immediately precede the class, method, or field being documented.
 */
public class FibCalculator extends Fibonacci implements Calculator {
    private static Map<Integer, Integer> memoized = new HashMap<Integer, Integer>();

    /*
     * The main method written as follows is used by the JVM as a starting point for the program.
     */
    public static void main(String[] args) {
        memoized.put(1, 1);
        memoized.put(2, 1);
        System.out.println(fibonacci(12)); //Get the 12th Fibonacci number and print to console
    }

    /**
     * An example of a method written in Java, wrapped in a class.
     * Given a non-negative number FIBINDEX, returns
     * the Nth Fibonacci number, where N equals FIBINDEX.
     * @param fibIndex The index of the Fibonacci number
     * @return The Fibonacci number
     */
    public static int fibonacci(int fibIndex) {
        if (memoized.containsKey(fibIndex)) {
            return memoized.get(fibIndex);
        } else {
            int answer = fibonacci(fibIndex - 1) + fibonacci(fibIndex - 2);
            memoized.put(fibIndex, answer);
            return answer;
        }
    }
}
"));
			    //var input = new AntlrFileStream("../../../Hemo.Test/Main.hemo");
			    var lexer = new JavaLexer(input);
			    var tokens = new CommonTokenStream(lexer);
			    var parser = new JavaParser(tokens);
			    var cu = parser.compilationUnit();


			    //            ICollection<Int32> a = new Collection<Int32>();
			    //a.Remove(1);
			    //var mainHemo = File.ReadAllText("../../../Hemo.Test/Main.hemo");
			    //   foreach (var token in mainHemo.SplitAndKeep()) {
			    //       Visit(token);
			    //   }
			    //var tokens = mainHemo.Split(new Char[0], StringSplitOptions.RemoveEmptyEntries);
			    //var asdf = Hemo.Tokens;
			    //foreach (String token in tokens) {}
			}

		    private static void Visit(String token) {
		        throw new NotImplementedException();
		    }
		}

	    static class Extensions2 {
	        public static IEnumerable<String> SplitAndKeep(this String s)
	        {
                Int32 start = 0, index;

	            while ((index = IndexOfAnyWhiteSpace(start)) != -1)
	            {
	                if (index - start > 0)
	                    yield return s.Substring(start, index - start);
	                yield return s.Substring(index, 1);
	                start = index + 1;
	            }

	            if (start < s.Length)
	            {
	                yield return s.Substring(start);
	            }

	            Int32 IndexOfAnyWhiteSpace(Int32 startIndex) {
	                for (var i = startIndex; i != s.Length; i++)
	                    if (Char.IsWhiteSpace(s[i]))
	                        return i;
	                return -1;
	            }
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
		public const String Value = "(";
	}
	internal class RightParenthesis : Punctuator {
		public const String Value = ")";
	}
	internal class Interrogation : Punctuator {
		public const String Value = "?";
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
				var name = field?.GetValue(null) as String ?? tokenType.Name.ToLower();
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