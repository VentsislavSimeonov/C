using System;

namespace NumbersInIntervalDividableByGivenNumber
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Input the First Number:");
            int firstNumber = int.Parse(Console.ReadLine());
            Console.WriteLine("Input the Second Number:");
            int secondNumber = int.Parse(Console.ReadLine());
            int numverOfTimes = 0;

            for (int i = firstNumber; i <= secondNumber; i++)
            {
                if (i % 5 == 0)
                {
                    numverOfTimes++; 
                } else
                {
                    continue;
                }
            }

            Console.Write("{0}", numverOfTimes);

        }
    }
}
