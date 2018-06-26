using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Antlr4.Runtime;

namespace DotNetAntlr4Consumer
{
    class Program
    {
        static void Main(string[] args)
        {
            AntlrInputStream inputStream = new AntlrInputStream(text.ToString());
            Hemo speakLexer = new Hemo(inputStream);
            CommonTokenStream commonTokenStream = new CommonTokenStream(speakLexer);
            SpeakParser speakParser = new SpeakParser(commonTokenStream);

            SpeakParser.ChatContext chatContext = speakParser.chat();
            SpeakVisitor visitor = new SpeakVisitor();
            visitor.Visit(chatContext);
        }
    }
}
