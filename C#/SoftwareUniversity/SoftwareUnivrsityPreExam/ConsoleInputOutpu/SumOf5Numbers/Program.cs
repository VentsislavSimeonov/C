using System;

namespace SumOf5Numbers
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Enter some numbers in a position separated by a space and press enter when ready");
            string userInput = Console.ReadLine();
            string[] numbers = userInput.Split();
            double sum = 0;
            for (int i = 0; i < numbers.Length; i++)
            {
                sum += Convert.ToDouble(numbers[i]);
            }
            Console.WriteLine(sum);
            
        }
    }
}
