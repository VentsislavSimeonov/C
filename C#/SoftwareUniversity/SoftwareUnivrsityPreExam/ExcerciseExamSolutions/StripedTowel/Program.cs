using System;

namespace StripedTowel
{
    class Program
    {
        static void Main(string[] args)
        {
            int width = int.Parse(Console.ReadLine());
            int height = (int)Math.Floor(width * 1.5);

            for (int row = 0; row < width; row++)
            {
                for (int col = 0; col < height; col++)
                {
                    if ((row + col) % 3 == 0)
                    {
                        Console.Write("#");
                    }
                    else
                    {
                        Console.Write(".");
                    }
                }
                Console.WriteLine();
            }
        }
    }
}
