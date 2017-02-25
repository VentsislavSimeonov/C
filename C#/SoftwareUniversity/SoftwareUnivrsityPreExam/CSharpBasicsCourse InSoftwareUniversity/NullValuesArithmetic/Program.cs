using System;

namespace NullValuesArithmetic
{
    class Program
    {
        static void Main(string[] args)
        {
            int? intNumber = null;
            double? doubleNumber = null;
            Console.WriteLine("The Null Int Value: " + intNumber);
            Console.WriteLine("The Null Double Value: " + doubleNumber);
            Console.WriteLine();

            intNumber += 75;
            doubleNumber += 54.20;
            Console.WriteLine("The Null +  Number  Int Value: " + intNumber);
            Console.WriteLine("The Null + Number Double Value: " + doubleNumber);
            Console.WriteLine();

            intNumber = 78;
            doubleNumber = 58.5;
            Console.WriteLine("The Int Number Value: " + intNumber);
            Console.WriteLine("The Double Number Value: " + doubleNumber);

            Console.Read();
        }
    }
}
