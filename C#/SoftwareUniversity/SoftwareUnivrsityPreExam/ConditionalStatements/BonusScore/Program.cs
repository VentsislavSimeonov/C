using System;

namespace BonusScore
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region
            Console.WriteLine("Input the score number from 1 to 9:");
            int score = int.Parse(Console.ReadLine());
            int result;
            string invalid = "invalid score";
            #endregion

            //logic and output
            #region
            if (score >=1 && score <= 3)
            {
                result = score * 10;
                Console.WriteLine("{0}", result);
            }
            else if (score >= 4 && score <= 6)
            {
                result = score * 100;
                Console.WriteLine("{0}", result);
            }
            else if (score >= 7 && score <= 9)
            {
                result = score * 1000;
                Console.WriteLine("{0}", result);
            }
            else if (score < 1 || score > 9)
            {
                Console.WriteLine("{0}", invalid);
            }
            #endregion
        }
    }
}
