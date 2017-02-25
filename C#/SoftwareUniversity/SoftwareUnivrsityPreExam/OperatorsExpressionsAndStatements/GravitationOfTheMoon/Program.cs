using System;

namespace GravitationOfTheMoon
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Input your weight in kg:");
            double weight = double.Parse(Console.ReadLine());

            double moonWeight = weight * 17 / 100;
            Console.WriteLine("Yout weight on the Moon will be {0:F3} kg", moonWeight);

        }
    }
}
