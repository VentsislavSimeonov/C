using System;

namespace TheBetterMusicProducer
{
    class Program
    {
        static void Main(string[] args)
        {
            #region Input
            decimal numberAlbumsSoldEurope = decimal.Parse(Console.ReadLine());
            decimal priceOfAlbumEuro = decimal.Parse(Console.ReadLine());
            decimal albumIncomeFromEurope = numberAlbumsSoldEurope * priceOfAlbumEuro;
            decimal albumProducerTakeEurope = albumIncomeFromEurope * (decimal)0.35;
            decimal albumAfterTaxesAndProducerEurope = albumProducerTakeEurope * (decimal)0.2;
            decimal albumCashInLevaEurope = albumAfterTaxesAndProducerEurope * (decimal)1.94;

            decimal numberAlbumsSoldNA = decimal.Parse(Console.ReadLine());
            decimal priceOfAlbumDollars = decimal.Parse(Console.ReadLine());
            decimal albumIncomeFromNA = numberAlbumsSoldNA * priceOfAlbumDollars;
            decimal albumProducerTakeNA = albumIncomeFromNA * (decimal)0.35;
            decimal albumAfterTaxesAndProducerNA = albumProducerTakeNA * (decimal)0.2;
            decimal albumCashInLevaNA = albumAfterTaxesAndProducerNA * (decimal)1.72;

            decimal numberAlbumsSoldSA = decimal.Parse(Console.ReadLine());
            decimal priceOfAlbumPesos = decimal.Parse(Console.ReadLine());
            decimal albumIncomeFromSA = numberAlbumsSoldSA * priceOfAlbumPesos;
            decimal albumProducerTakeSA = albumIncomeFromSA * (decimal)0.35;
            decimal albumAfterTaxesAndProducerSA = albumProducerTakeSA * (decimal)0.2;
            decimal albumCashInLevaSA = albumAfterTaxesAndProducerSA / (decimal)332.74;

            decimal numberOfConcerts = decimal.Parse(Console.ReadLine());
            decimal profitSingleConcertEuro = decimal.Parse(Console.ReadLine());
            decimal concertIncomeInEuro = numberOfConcerts * profitSingleConcertEuro;
            decimal concertIncomeInLeva = concertIncomeInEuro * (decimal)1.94;
            decimal concertsIncomeInLevaAfterCheck = 0;

            if (concertIncomeInLeva >= 100000)
            {
                concertsIncomeInLevaAfterCheck = concertIncomeInLeva * (decimal)0.15;
            }
            else
            {
                concertsIncomeInLevaAfterCheck = concertIncomeInLeva;
            }

            #endregion
            //total amount in lv for Albums and Concerts
            decimal totalAlbumTakeAfterTaxAndProducer = albumCashInLevaEurope + albumCashInLevaNA + albumCashInLevaSA;
            if (totalAlbumTakeAfterTaxAndProducer > concertsIncomeInLevaAfterCheck)
            {
                Console.WriteLine("Let's record some songs! They'll bring us {0:F2}lv.", totalAlbumTakeAfterTaxAndProducer);

            }
            else
            {
                Console.WriteLine("On the road again! We'll see the world and earn {0:F2}lv.", concertsIncomeInLevaAfterCheck);

            }
        }
    }
}
