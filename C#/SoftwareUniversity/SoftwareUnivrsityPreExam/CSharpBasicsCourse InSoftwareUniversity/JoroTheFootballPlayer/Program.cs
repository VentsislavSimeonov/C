using System;

namespace JoroTheFootballPlayer
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Choose the type of the year(\"t\" or \"f\"): ");
            string year = Console.ReadLine();
            Console.WriteLine("Type in the number of Holidays: ");
            int p = int.Parse(Console.ReadLine());
            Console.WriteLine("Type in the number of weekends spent in Joro's Hometown: ");
            int h = int.Parse(Console.ReadLine());

            if (year == "t")
            {
                Console.WriteLine("{0}", h + ((52 - h) * 2 * 1 / 3) + (p * 1 / 2) + 3);
            }
            else if (year == "f")
            {
                Console.WriteLine("{0}", h + ((52 - h) * 2 * 1 / 3) + (p * 1 / 2));

            }
        }
    }
}
