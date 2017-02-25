using System;

namespace Sort3NumbersWithNestedIfs
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region
            Console.WriteLine("You will need to input 3 numbers!");
            Console.WriteLine("Input First Number:");
            double firstNumber = double.Parse(Console.ReadLine());
            Console.WriteLine("Input Second Number:");
            double secondNumber = double.Parse(Console.ReadLine());
            Console.WriteLine("Input Third Number:");
            double thirdNumber = double.Parse(Console.ReadLine());
            #endregion

            //logic and output
            #region
            if (firstNumber > secondNumber && firstNumber > thirdNumber)
            {
                if (secondNumber >= thirdNumber)
                {
                    Console.WriteLine("{0} {1} {2}", firstNumber, secondNumber, thirdNumber);
                }
                else if (thirdNumber >= secondNumber)
                {
                    Console.WriteLine("{0} {1} {2}", firstNumber, thirdNumber, secondNumber);
                }
            }
            else if (secondNumber > firstNumber && secondNumber > thirdNumber)
            {
                if (firstNumber >= thirdNumber)
                {
                    Console.WriteLine("{0} {1} {2}", secondNumber, firstNumber, thirdNumber);
                }
                else if (thirdNumber >= firstNumber)
                {
                    Console.WriteLine("{0} {1} {2}", secondNumber, thirdNumber, firstNumber);
                }
            }
            else if (thirdNumber > firstNumber && thirdNumber > secondNumber)
            {
                if (firstNumber >= secondNumber)
                {
                    Console.WriteLine("{0} {1} {2}", thirdNumber, firstNumber, secondNumber);
                }
                else if (secondNumber >= firstNumber)
                {
                    Console.WriteLine("{0} {1} {2}", thirdNumber, secondNumber, firstNumber);
                }
            }
            else if (firstNumber == secondNumber && firstNumber == thirdNumber)
            {
                Console.WriteLine("{0} {1} {2}", firstNumber, secondNumber, thirdNumber);
            }
            #endregion
        }
    }
}
