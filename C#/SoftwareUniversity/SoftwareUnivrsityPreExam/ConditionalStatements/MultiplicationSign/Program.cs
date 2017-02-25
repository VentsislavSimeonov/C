using System;

namespace MultiplicationSign
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region
            Console.WriteLine("Input the First Number:");
            double firstNumber = double.Parse(Console.ReadLine());
            Console.WriteLine("Input the Second Number:");
            double secondNumber = double.Parse(Console.ReadLine());
            Console.WriteLine("Input the Third Number:");
            double thirdNumber = double.Parse(Console.ReadLine());
            #endregion

            //output and logic
            #region
            if (firstNumber == 0 || secondNumber == 0 || thirdNumber == 0)
            {
                Console.WriteLine("0");
            }
            else if (firstNumber < 0 && secondNumber < 0 && thirdNumber < 0)
            {
                Console.WriteLine("-");
            }
            else if (firstNumber > 0 && secondNumber > 0 && thirdNumber > 0)
            {
                Console.WriteLine("+");
            }
            else if (firstNumber < 0 && secondNumber < 0 || secondNumber < 0 && 
                     thirdNumber < 0 || firstNumber < 0 && thirdNumber < 0)
            {
                Console.WriteLine("+");
            }
            else if (firstNumber < 0 || secondNumber < 0 || thirdNumber < 0 &&
                     firstNumber > 0 || secondNumber > 0 || thirdNumber > 0)
            {
                Console.WriteLine("-");
            }
            #endregion
        }
    }
}
