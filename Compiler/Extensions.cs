using System;

namespace Hemo.Compiler {
	internal static class Extensions {
		public static TResult IfNotNull<T, TResult>(this T target, Func<T, TResult> getValue) where T : class {
			return target != null ? getValue(target) : default(TResult);
		}
	}
}
