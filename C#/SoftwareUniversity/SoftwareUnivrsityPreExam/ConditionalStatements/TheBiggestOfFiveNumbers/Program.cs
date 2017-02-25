using System;

namespace TheBiggestOfFiveNumbers
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
            Console.WriteLine("Input Fourth Number:");
            double fourthNumber = double.Parse(Console.ReadLine());
            Console.WriteLine("Input Fifth Number:");
            double fifthNumber = double.Parse(Console.ReadLine());
            #endregion

            //output and logic
            #region
            if (firstNumber > secondNumber && firstNumber > thirdNumber &&
                firstNumber > fourthNumber && firstNumber > fifthNumber)
            {
                Console.WriteLine(firstNumber);
            }
            else if (secondNumber > firstNumber && secondNumber > thirdNumber &&
                     secondNumber > fourthNumber && secondNumber > fifthNumber)
            {
                Console.WriteLine(secondNumber);
            }
            else if (thirdNumber > firstNumber && thirdNumber > secondNumber &&
                     thirdNumber > fourthNumber && thirdNumber > fifthNumber)
            {
                Console.WriteLine(thirdNumber);
            }
            else if (fourthNumber > firstNumber && fourthNumber > secondNumber &&
                     fourthNumber > thirdNumber && fourthNumber > fifthNumber)
            {
                Console.WriteLine(fourthNumber);
            }
            else if (fifthNumber > firstNumber && fifthNumber > secondNumber &&
                     fifthNumber > thirdNumber && fifthNumber > fourthNumber)
            {
                Console.WriteLine(fifthNumber);
            }
            #endregion
        }
    }
}
