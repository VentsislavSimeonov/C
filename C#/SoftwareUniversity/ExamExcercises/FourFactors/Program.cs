using System;

namespace FourFactors
{
    class Program
    {
        static void Main(string[] args)
        {
            #region Input
            double fg = double.Parse(Console.ReadLine());
            double fga = double.Parse(Console.ReadLine());
            double threeP = double.Parse(Console.ReadLine());
            double tov = double.Parse(Console.ReadLine());
            double orb = double.Parse(Console.ReadLine());
            double oppdrb = double.Parse(Console.ReadLine());
            double ft = double.Parse(Console.ReadLine());
            double fta = double.Parse(Console.ReadLine());
            #endregion
            
            #region Logic
            double efgP = (fg + 0.5 * threeP) / fga;
            double tovP = tov / (fga + 0.44 * fta + tov);
            double orbP = orb / (orb + oppdrb);
            double ftP = ft / fga;
            #endregion

            #region Output
            Console.WriteLine("eFG% {0:F3}", efgP);
            Console.WriteLine("TOV% {0:F3}", tovP);
            Console.WriteLine("ORB% {0:F3}", orbP);
            Console.WriteLine("FT% {0:F3}", ftP);
            #endregion

        }
    }
}
