using System;
using System.Linq;

namespace MinMaxSumAndAvcerageOfNNumbers
{
    class Program
    {
        static void Main(string[] args)
        {
            //input logic
            #region
            Console.WriteLine("Specify how many numbers you will input:");
            int nNumbers = int.Parse(Console.ReadLine());
            double[] array = new double[nNumbers];
            for (int i = 0; i < nNumbers; i++)
            {
                Console.WriteLine("Intput number {0}",(i + 1));
                array[i] = int.Parse(Console.ReadLine());
            }
            #endregion
            //output logic
            #region
            double min = array.Min();
            double max = array.Max();
            double sum = array.Sum();
            double avg = array.Average();
            Console.WriteLine("min = {0:0.##} \nmax = {1:0.##} \nsum = {2:0.##} \navg = {3:0.##}",
                               min, max, sum, avg);

            #endregion
        }
    }
}
