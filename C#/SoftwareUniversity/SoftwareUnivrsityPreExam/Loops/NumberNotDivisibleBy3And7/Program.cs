using System;

namespace NumberNotDivisibleBy3And7
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region
            int number = 0;
            while (number <= 0)
            {
                Console.WriteLine("Input a Number:");
                number = int.Parse(Console.ReadLine());
            }
            #endregion
            //output
            #region
            for (int i = 1; i <= number; i++)
            {
                if ((i % 3 ==0) || (i % 7 == 0))
                {
                    continue;
                }
                else
                {
                    Console.Write("{0} ", i);
                }
            }
            #endregion
        }
    }
}
