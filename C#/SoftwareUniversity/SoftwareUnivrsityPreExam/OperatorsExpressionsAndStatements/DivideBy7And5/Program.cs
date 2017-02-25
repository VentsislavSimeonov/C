using System;

namespace DivideBy7And5
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region
            bool check = false;
            Console.WriteLine("Input a number:");
            double number = double.Parse(Console.ReadLine());

            #endregion

            //output && logic
            #region

            if (number % 5 == 0 && number % 7 ==0)
            {
                check = true;
                Console.WriteLine("Is it going to be divided by 7 and 5 in the same time? {0}", check);
            }
            else
            {
                check = false;
                Console.WriteLine("Is it going to be divided by 7 and 5 in the same time? {0}", check);
            }

            #endregion
        }
    }
}
