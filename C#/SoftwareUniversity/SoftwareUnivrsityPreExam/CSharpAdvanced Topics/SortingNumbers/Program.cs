using System;
using System.Collections.Generic;

namespace SortingNumbers
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Input the number of numbers you will input:");
            int n = int.Parse(Console.ReadLine());
            List<int> numbersList = new List<int>();
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Input number {0}", (i + 1));
                int number = int.Parse(Console.ReadLine());
                numbersList.Add(number);
            }
            numbersList.Sort();
            Console.WriteLine();
            foreach (var item in numbersList)
            {
                Console.WriteLine("{0}", item);
            }
        }
    }
}
