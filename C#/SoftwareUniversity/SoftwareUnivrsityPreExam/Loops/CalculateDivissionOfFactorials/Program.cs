using System;

namespace CalculateDivissionOfFactorials
{
    class Program
    {
        static void Main(string[] args)
        {
            //input 
            #region
            Console.WriteLine("Enter two whole numbers N and K:");
            Console.WriteLine("Input N:");
            int nInput = int.Parse(Console.ReadLine());
            Console.WriteLine("Input K:");
            int kInput = int.Parse(Console.ReadLine());
            if (kInput <= 1 || kInput > nInput || nInput <= 1 
                            || nInput >= 100   || kInput >= 100)
            {
                Console.WriteLine("Invalid input!");
                return;
            }
            #endregion
            //output and logic
            #region
            int factorialN = 1;
            int factorialK = 1;
            double sum = 1;
            for (int i = 1; i <= nInput; i++)
            {
                factorialN *= i;
                if (i <= kInput)
                {
                    factorialK *= i;
                }
            }
            Console.WriteLine("{0}", factorialN / factorialK);
            #endregion
        }
    }
}
