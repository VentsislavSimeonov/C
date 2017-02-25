using System;

namespace CurrentDateAndTime
{
    class Program
    {
        static void Main(string[] args)
        {
            DateTime now = DateTime.Now;
            Console.WriteLine(now);
            //or simply type: Console.WriteLine(DateTime.Now);
            Console.Read();
        }
    }
}
