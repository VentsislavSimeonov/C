using System;

namespace UnicodeCharacter
{
    class Program
    {
        static void Main(string[] args)
        {
            int code = 42;
            Console.WriteLine("The hexadecimal representation of code 42 is: {0:X}", code);
            char symbol = '\u002A';
            Console.WriteLine("The symbol is: {0}", symbol);
            Console.Read();
        }
    }
}
