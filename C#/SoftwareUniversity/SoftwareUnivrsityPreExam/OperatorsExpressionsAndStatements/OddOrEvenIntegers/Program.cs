using System;

namespace OddOrEvenIntegers
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Input a Number to check if it odd or not:");
            int number = int.Parse(Console.ReadLine());

            if (number % 2 == 1)
            {
                Console.WriteLine(true);
            }
            else if (-(number % 2) == 1)
            {
                Console.WriteLine(true);
            }
            else
            {
                Console.WriteLine(false);
            }

        }
    }
}
