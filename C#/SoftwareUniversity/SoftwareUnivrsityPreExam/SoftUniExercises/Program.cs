using System;

namespace SoftUniExercises
{
    class Program
    {
        static void Main(string[] args)
        {
            int itegerNumber = 0;
            try {
                itegerNumber = int.Parse(Console.ReadLine());
            } catch (FormatException)
            {
                Console.WriteLine("Wrong Number! Try again");
            }
            float firstFloatNumber = float.Parse(Console.ReadLine());
            float secoondFloatNumber = float.Parse(Console.ReadLine());

            Console.WriteLine("| {0,-10:X} | {1,+10:F2} | {2,-10:F3} | {3,10} |",
                itegerNumber.ToString(),
                Convert.ToString(itegerNumber,2).PadLeft(10,'0'),
                firstFloatNumber,
                secoondFloatNumber);
            
            
            }
    }
}
