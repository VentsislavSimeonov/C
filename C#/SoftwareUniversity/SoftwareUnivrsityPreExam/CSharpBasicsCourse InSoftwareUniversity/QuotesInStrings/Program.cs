using System;

namespace QuotesInStrings
{
    class Program
    {
        static void Main(string[] args)
        {
            String string1 = "The " + '\u0022' + "use" + '\u0022' + " of quotations causes difficulties.";
            String string2 = @"The ""use"" of quotations causes difficulties.";
            String string3 = "The \"use\" of quotations causes difficulties.";
            Console.WriteLine(string1 + "\n" + string2 + "\n" + string3);
            Console.Read();
        }
    }
}
