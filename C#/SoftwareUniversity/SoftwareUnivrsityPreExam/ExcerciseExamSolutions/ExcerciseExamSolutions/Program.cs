using System;

namespace ExcerciseExamSolutions
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Input a number:");
            ulong numberInput = ulong.Parse(Console.ReadLine());
            int count = 1;
            int biggestCount = 0;
            int startIndex = 0;


            #region
            for (int i = 0; i < 64; i++)
            {
                bool index = (numberInput >> i & 1) == 1;
                bool index1 = (numberInput >> i + 1 & 1) == 0;
                bool index2 = (numberInput >> i + 2 & 1) == 1;

                if (index && index1 && index2)
                {
                    count += 2;
                    i++;
                }
                else
                {
                    if (biggestCount < count)
                    {
                        biggestCount = count;
                        startIndex = i;
                    }
                    count = 1;
                }
            }
            #endregion

            #region
            ulong newNumber = 0;

            for (int i = 63; i >= 0; i--)
            {
                if (i <= startIndex && i > startIndex - biggestCount)
                {
                    continue;
                }
                newNumber <<= 1;
                newNumber = (numberInput >> i & 1UL) | newNumber;
            }
            if (biggestCount == 1)
            {
                Console.WriteLine("No waves found!");
            }
            else
            {
                Console.WriteLine(newNumber);
            }
            #endregion
        }
    }
}
