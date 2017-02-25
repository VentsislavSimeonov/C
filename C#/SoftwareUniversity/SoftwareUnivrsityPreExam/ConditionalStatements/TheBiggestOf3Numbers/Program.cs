using System;

namespace TheBiggestOf3Numbers
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region
            Console.WriteLine("You will need to input 3 numbers and will receive the largest one.");
            Console.WriteLine("Input First Number:");
            double firstNumber = double.Parse(Console.ReadLine());
            Console.WriteLine("Input Second Number:");
            double secondNumber = double.Parse(Console.ReadLine());
            Console.WriteLine("Input Third Number:");
            double thirdNumber = double.Parse(Console.ReadLine());
            #endregion

            //output and logic
            #region
            if (firstNumber > secondNumber && firstNumber > thirdNumber)
            {
                Console.WriteLine(firstNumber);
            }
            else if (secondNumber > firstNumber && secondNumber > thirdNumber)
            {
                Console.WriteLine(secondNumber);
            }
            else if (thirdNumber > firstNumber && thirdNumber > secondNumber)
            {
                Console.WriteLine(thirdNumber);
            }
            #endregion
        }
    }
}
