using System;

namespace GrantTheftExamo
{
    class Program
    {
        static void Main(string[] args)
        {
            int numberOfEscapeAttempts = int.Parse(Console.ReadLine());
            int numberOfThieves = 0;
            int beersDrunk = 0;
            int totalBeers = 0;
            int thievesEscaped = 0;
            int totalThievesSlapped = 0;
            int pack = 0;
            bool beersdone = false;
            #region logic and input
            for (int i = 0; i < numberOfEscapeAttempts; i++)
            {
                numberOfThieves = int.Parse(Console.ReadLine());
                beersDrunk = int.Parse(Console.ReadLine());

                if (numberOfThieves != 0)
                {
                    if (numberOfThieves <= 5 || numberOfThieves > 5)
                    {
                        if (numberOfThieves >= 5)
                        {
                            totalThievesSlapped += 5;
                        }
                        if (numberOfThieves >= 5)
                        {
                            thievesEscaped += numberOfThieves - 5;
                        }
                    }
                }
                if (beersDrunk > 0)
                {
                   totalBeers += beersDrunk;
                }
            }

            do
            {
                if (totalBeers >= 6)
                {
                    pack++;
                    totalBeers = totalBeers - 6;
                }
                else
                {
                    beersdone = true;
                }
            } while (beersdone != true);

            #endregion 
            Console.WriteLine("{0} thieves slapped.", totalThievesSlapped);
            Console.WriteLine("{0} thieves escaped.", thievesEscaped);
            Console.WriteLine("{0} packs, {1} bottles.",pack , totalBeers);
        }
    }
}
