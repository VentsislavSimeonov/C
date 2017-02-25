﻿using System;

namespace HalfSum
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int numFirstNumber = 0;
            int numSecondNumber = 0;
            for (int i = 0; i < 2 * n; i++)
            {
                int num = int.Parse(Console.ReadLine());
                if (i < n)
                {
                    numFirstNumber += num;
                }
                else
                {
                    numSecondNumber += num;
                }
            }
            if (numFirstNumber == numSecondNumber)
            {
                Console.WriteLine("Yes, sum={0}", numFirstNumber);
            }
            else
            {
                Console.WriteLine("No, diff={0}", Math.Abs(numFirstNumber - numSecondNumber));
            }
            Console.Read();
        }
    }
}