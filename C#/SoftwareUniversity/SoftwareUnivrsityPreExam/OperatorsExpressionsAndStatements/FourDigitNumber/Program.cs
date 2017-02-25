using System;

namespace FourDigitNumber
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Input a 4 digit number:");
            int number = int.Parse(Console.ReadLine());

            int a = (number / 1000) % 10;
            int b = (number / 100) % 10;
            int c = (number / 10) % 10;
            int d = number % 10;

            Console.WriteLine("Sum of the digits: {0}", a + b + c + d);
            Console.WriteLine("Reverse order: {0}{1}{2}{3}", d, c, b, a);
            Console.WriteLine("Last infront: {0}{1}{2}{3}", d, a, b, c);
            Console.WriteLine("Second and Third digits exchanged: {0}{1}{2}{3}", a, c, b, d);

        }
    }
}
