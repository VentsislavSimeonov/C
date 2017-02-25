using System;

namespace PlaidTowel
{
    class Program
    {
        static void Main(string[] args)
        {
            int size = int.Parse(Console.ReadLine());
            string backgroundSymbol = Console.ReadLine();
            string rhombusSymbol = Console.ReadLine();
            int dimension = (4 * size) + 1;

            for (int i = 0; i < dimension; i++)
            {
                for (int j = 0; j < dimension; j++)
                {
                    if ((i + j) % (size) == 0 && (i+j) != 0 )
                    {
                        Console.Write(rhombusSymbol);
                    }
                    else
                    {
                        Console.Write(backgroundSymbol);
                    }
                }
                Console.WriteLine();
            }

        }
    }
}

