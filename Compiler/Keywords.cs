namespace Hemo.Keyword {
	#region Type definitions
	internal abstract class TypeDefinition : Token.Keyword { }
	internal class Class : TypeDefinition { }
	internal class Interface : TypeDefinition { }
	internal class Enum : TypeDefinition { }
	internal class Delegate : TypeDefinition { }
	#endregion
	#region Modifiers
	internal abstract class Modifier : Token.Keyword { }
	#region Access modifiers
	internal abstract class AccessModifier : Modifier { }
	internal class Public : AccessModifier { }
	internal class Protected : AccessModifier { }
	internal class Private : AccessModifier { }
	internal class Internal : AccessModifier { }
	#endregion
	internal class Abstract : Modifier { }
	internal class Async : Modifier { }
	internal class Override : Modifier { }
	internal class Partial : Modifier { }
	internal class Readonly : Modifier { }
	internal class Sealed : Modifier { }
	internal class Static : Modifier { }
	internal class Virtual : Modifier { }
	internal class Constructor : Modifier { }
	internal class Destructor : Modifier { }
	#endregion
	#region Method parameters
	internal abstract class MethodParameter : Token.Keyword { }
	internal class Params : MethodParameter { }
	internal class Out : MethodParameter { }
	#endregion
	#region Namespace
	internal class Namespace : Token.Keyword {}
	internal class Using : Token.Keyword {}
	internal class Global : Token.Keyword {}
	#endregion
	#region Statement Token.Keywords
	internal abstract class Statement : Token.Keyword {}
	#region Selection statements
	internal abstract class Selection : Statement { }
	internal class If : Selection { }
	internal class Else : Selection { }
	internal class Switch : Selection { }
	internal class Case : Selection { }
	#endregion
	#region Iteration statements
	internal abstract class Iteration : Statement { }
	internal class For : Iteration { }
	internal class In : Iteration { }
	internal class While : Iteration { }
	internal class Loop : Iteration {}
	#endregion
	#region Jump statements
	internal abstract class Jump : Statement { }
	internal class Return : Jump { }
	internal class Continue : Jump { }
	internal class Break : Jump { }
	internal class Yield : Jump { }
	internal class Default : Jump { }
	#endregion
	#region Exception handling
	internal abstract class ExceptionHandling : Statement {}
	internal class Try : ExceptionHandling {}
	internal class Catch : ExceptionHandling {}
	#endregion
	internal class Lock : Statement {}
	internal class TryLock : Statement {}
	#endregion
	#region Operators
	namespace Operator {
		internal abstract class Operator : Token.Keyword {}
		internal class As : Operator {}
		internal class Await : Operator {}
		internal class Is : Operator {}
		internal class SizeOf : Operator {}
		internal class TypeOf : Operator {}
	}
	#endregion
	namespace Converion {
		internal class Operator : Token.Keyword {}
	}

	namespace Access {
		internal abstract class Access : Token.Keyword {}
		internal class Base : Access {}
		internal class This : Access {}
	}

	namespace Literal {
		internal abstract class Literal : Token.Keyword {}
		internal class True : Literal {}
		internal class False : Literal {}
	}

	internal class Let : Token.Keyword { }
	internal class Var : Token.Keyword { }
	internal class New : Token.Keyword { }
}