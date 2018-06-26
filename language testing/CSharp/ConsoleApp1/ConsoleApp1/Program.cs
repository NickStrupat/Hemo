using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Antlr4.Runtime;
using Antlr4.Runtime.Tree;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            String input = "using System;";
            ICharStream stream = CharStreams.fromstring(input);
            ITokenSource lexer = new CSharpLexer(stream);
            ITokenStream tokens = new CommonTokenStream(lexer);
            var parser = new CSharpParser(tokens);
            parser.BuildParseTree = true;
            var tree = parser.compilation_unit();
            var listner = new Listener();
            listner.EnterCompilation_unit(tree);
        }
    }

    class Listener : CSharpParserBaseListener
    {
        public override void EnterUsingNamespaceDirective(CSharpParser.UsingNamespaceDirectiveContext context)
        {
            base.EnterUsingNamespaceDirective(context);
        }
    }
}
