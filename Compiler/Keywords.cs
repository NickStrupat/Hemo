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
	#endregion
	#region Method parameters
	internal abstract class MethodParameter : Token.Keyword { }
	internal class Params : MethodParameter { }
	internal class Out : MethodParameter { }
	#endregion
	#region Namespace
	internal class Namespace : Token.Keyword {}
	internal class Using : Token.Keyword {}
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
	internal class For : Token.Keyword { }
	internal class In : Token.Keyword { }
	internal class While : Token.Keyword { }
	#endregion
	#region Jump statements
	internal abstract class Jump : Statement { }
	internal class Return : Jump { }
	internal class Continue : Jump { }
	internal class Break : Jump { }
	internal class Goto : Jump { }
	internal class Yield : Jump { }
	internal class Default : Jump { }
	#endregion
	#endregion

	internal class Let : Token.Keyword { }
	internal class Var : Token.Keyword { }
	internal class New : Token.Keyword { }
}