using System;

namespace CalculateSumsOfFactorials
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region
            Console.WriteLine("Input N:");
            int nInput = int.Parse(Console.ReadLine());
            Console.WriteLine("Input X:");
            int xInput = int.Parse(Console.ReadLine());
            #endregion
            //logic and output
            #region
            int factorial = 1;
            double sum = 1;
            for (int i = 1; i <= nInput; i++)
            {
                factorial *= i;
                sum += (factorial / Math.Pow(xInput, i));
            }
            Console.WriteLine("{0:f5}", sum);

            #endregion
        }
    }
}
