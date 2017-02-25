using System;

namespace NumberFrom1ToN
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
                Console.Write("{0} ",i);
            }
            #endregion

        }
    }
}
