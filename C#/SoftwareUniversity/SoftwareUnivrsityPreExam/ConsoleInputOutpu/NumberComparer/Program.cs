using System;

namespace NumberComparer
{
    class Program
    {
        static void Main(string[] args)
        {
            //input numbers
            #region
            Console.WriteLine("Input First Number: ");
            int firstNumber = int.Parse(Console.ReadLine());
            Console.WriteLine("Input Second Number: ");
            int secondNumber = int.Parse(Console.ReadLine());
            #endregion
            //logic
            #region
            int value = Math.Max(firstNumber, secondNumber);
            #endregion
            //system output
            #region
            Console.WriteLine("The Greater number is: {0}", value);
            #endregion
        }
    }
}
