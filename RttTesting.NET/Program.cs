using System;
using System.Runtime.CompilerServices;

namespace RttTesting.NET
{
    public struct Ref<T> where T : class {
        public UInt16 TypeCode;
        public T Value;
    }

    class Program
    {
        static Program() {
            
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }
    }
}