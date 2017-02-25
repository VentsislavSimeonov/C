using System;

namespace NumbersFrom1ToN
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Type in a number:");
            int number = int.Parse(Console.ReadLine());

            for (int i = 1; i <= number; i++)
            {
                Console.WriteLine(i);
            }

        }
    }
}
