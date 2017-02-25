using System;

namespace PrimeNumberCheck
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region

            Console.WriteLine("Input a number to check if it Prime:");
            bool check = true;
            int number;
            do
            {
                number = int.Parse(Console.ReadLine());
                if (number > 100)
                {
                    Console.WriteLine("The number needs to be smaller than 100");
                }
            } while (number > 100);

            #endregion
            //output and logic
            #region

            if (number <= 1)
            {
                check = false;
            }
            else
            {
                for (int i = 2; i <= number / 2; i++)
                {
                    if (number % i == 0)
                    {
                        check = false;
                    }
                }
            }
            Console.WriteLine("Is it Prime {0}", check);

            #endregion
        }
    }
}
