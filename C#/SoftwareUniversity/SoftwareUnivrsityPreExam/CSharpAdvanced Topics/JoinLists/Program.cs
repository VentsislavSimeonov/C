using System;
using System.Collections.Generic;

namespace JoinLists
{
    class Program
    {
        static void Main(string[] args)
        {
            //first listinput
            Console.WriteLine("Input first list of numbers seperated with a \" \":");
            List<string> numbersOne = new List<string>();
            string[] firstNumbers = Console.ReadLine().Split();
            for (int i = 0; i < firstNumbers.Length; i++)
            {
                numbersOne.Add(firstNumbers[i]);
            }

            //second list input
            Console.WriteLine("Input second list of numbers seperated with a \" \":");
            List<string> numbersTwo = new List<string>();
            string[] secondNumbers = Console.ReadLine().Split();
            for (int i = 0; i < secondNumbers.Length; i++)
            {
                numbersTwo.Add(secondNumbers[i]);
            }

            //check if the number repeats and sort the numbers
            for (int i = 0; i < firstNumbers.Length; i++)
            {
                if (!numbersTwo.Contains(numbersOne[i]))
                {
                    numbersTwo.Add(numbersOne[i]);
                }
                else
                {
                    continue;
                }
            }
            numbersTwo.Sort();

            //output results
            foreach (var item in numbersTwo)
            {
                Console.Write("{0} ", item);
            }
            Console.WriteLine();
        }
    }
}
