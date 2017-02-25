using System;
using System.Globalization;

namespace DifferenceBetweenDates
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            string format = "d.MM.yyyy";
            Console.WriteLine("Input first date in {0} format:", format);
            string firstInputDate = Console.ReadLine();
            Console.WriteLine("Input second date in {0} format:", format);
            string secondInputDate = Console.ReadLine();
            //Conversion of input
            DateTime firstDate = DateTime.ParseExact(firstInputDate, format,
                CultureInfo.InvariantCulture);
            DateTime secondDate = DateTime.ParseExact(secondInputDate, format,
                CultureInfo.InvariantCulture);
            int difference = CalculateNumberDifferenceDates(firstDate, secondDate);
            //output
            Console.WriteLine("Days between: {0} ", difference);
        }
        //date difference calculation method
        private static int CalculateNumberDifferenceDates(DateTime firstDate, DateTime secondDate)
        {
            // Difference in days, hours, and minutes.
            TimeSpan ts = secondDate - firstDate;
            // Difference in days.
            int differenceInDays = ts.Days;
            return differenceInDays;

        }
    }
}
