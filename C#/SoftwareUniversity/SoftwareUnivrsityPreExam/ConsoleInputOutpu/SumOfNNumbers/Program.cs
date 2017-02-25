using System;

namespace SumOfNNumbers
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Type in the number of numbers you will input: ");
            int counter = int.Parse(Console.ReadLine());
            double sum = 0;

            for (int i = 0; i < counter; i++) 
            {
                double number = double.Parse(Console.ReadLine());
                sum += number;
            }
           
            Console.WriteLine(sum);

        }
    }
}
