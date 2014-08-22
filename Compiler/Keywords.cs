namespace Hemo.Keywords {
	#region Type definitions
	internal abstract class TypeDefinition : Keyword { }
	internal class Class : TypeDefinition { }
	internal class Interface : TypeDefinition { }
	internal class Enum : TypeDefinition { }
	internal class Delegate : TypeDefinition { }
	#endregion
	#region Modifiers
	internal abstract class Modifier : Keyword { }
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
	internal abstract class MethodParameter : Keyword { }
	internal class Params : MethodParameter { }
	internal class Out : MethodParameter { }
	#endregion
	#region Namespace
	internal class Namespace : Keyword {}
	internal class Using : Keyword {}
	#endregion
	#region Statement keywords
	internal abstract class Statement : Keyword {}
	#region Selection statements
	internal abstract class Selection : Statement { }
	internal class If : Selection { }
	internal class Else : Selection { }
	internal class Switch : Selection { }
	internal class Case : Selection { }
	#endregion
	#region Iteration statements
	internal abstract class Iteration : Statement { }
	internal class For : Keyword { }
	internal class In : Keyword { }
	internal class While : Keyword { }
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

	internal class Let : Keyword { }
	internal class Var : Keyword { }
	internal class New : Keyword { }
}