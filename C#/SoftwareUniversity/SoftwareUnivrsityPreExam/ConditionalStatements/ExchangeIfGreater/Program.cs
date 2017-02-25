using System;

namespace ExchangeIfGreater
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region
            Console.WriteLine("Input first number:");
            double firstNumber = double.Parse(Console.ReadLine());
            Console.WriteLine("Input second number:");
            double secondNumber = double.Parse(Console.ReadLine());
            #endregion

            //logic and output
            #region
            if (firstNumber > secondNumber)
            {
                double temp = firstNumber;
                firstNumber = secondNumber;
                secondNumber = temp;
            }
            Console.WriteLine("{0} {1}", firstNumber, secondNumber);
            #endregion
        }
    }
}
