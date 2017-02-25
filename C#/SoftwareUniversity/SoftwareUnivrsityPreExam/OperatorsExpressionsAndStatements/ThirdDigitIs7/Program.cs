using System;

namespace ThirdDigitIs7
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Input a random int number:");
            int number = int.Parse(Console.ReadLine());

            int thirdDigit = (number / 100) % 10;
            bool check = thirdDigit == 7;
            Console.WriteLine("Is the Tird number 7: {0}", check);

        }
    }
}
